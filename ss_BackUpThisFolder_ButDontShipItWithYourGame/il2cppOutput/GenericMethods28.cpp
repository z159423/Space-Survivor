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
// UnityEngine.Behaviour
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA;
// ES3Reader
struct ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518;
// ES3Settings
struct ES3Settings_t5FF4E8DB95573CB739527FD69BD1823D602885C1;
// ES3Types.ES3Type
struct ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE;
// ES3Types.ES3Type_LayerMask
struct ES3Type_LayerMask_t1CE2F5D73EE7EAB2A77FC2D54096DC0CD536CE10;
// ES3Types.ES3Type_Light
struct ES3Type_Light_t0E702BA5766531A8E1C1C7B952BD4B76502DE877;
// ES3Types.ES3Type_LightsModule
struct ES3Type_LightsModule_t37A9192D3FFC77124809D0623E14839D7E0C86A6;
// ES3Types.ES3Type_LimitVelocityOverLifetimeModule
struct ES3Type_LimitVelocityOverLifetimeModule_t0B3EB57F7FF7F9D1F6D99783CAB9DF9ADCEDE92B;
// UnityEngine.Flare
struct Flare_t9DCE15756AD8F104B1D9024509B30E46FEF124C8;
// System.Collections.IEnumerator
struct IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA;
// UnityEngine.Light
struct Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3;
// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C;
// UnityEngine.ParticleSystem
struct ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1;
// System.String
struct String_t;
// UnityEngine.Texture
struct Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700;
// System.Type
struct Type_t;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// ES3Reader/ES3ReaderPropertyEnumerator
struct ES3ReaderPropertyEnumerator_t66947BCA34F5716A7F0FECC09CDD3D2125703EB2;

IL2CPP_EXTERN_C RuntimeClass* ES3Type_Color_t673DF1A1D899E95FF5E687BDC6EE2D5A8A98D958_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ES3Type_Light_t0E702BA5766531A8E1C1C7B952BD4B76502DE877_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ES3Type_MinMaxCurve_t1C147718750ACBECE5D2B7F545D2A434A3C5409B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ES3Type_int_t05A5E7A96442F23CE33E24A71CD349372A70E0C3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* LimitVelocityOverLifetimeModule_tC52CF1434E2639EE5D81DD6BA269FF38CA17D8B1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* String_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral0328E4C169674B568EFB792EBE915956BAD34591;
IL2CPP_EXTERN_C String_t* _stringLiteral05CAACB43AE60632DFAEDD8AFD98A0C279C2A0F7;
IL2CPP_EXTERN_C String_t* _stringLiteral072FD16FCD5FDEE6DF9288BBCA5AFBFA16B04581;
IL2CPP_EXTERN_C String_t* _stringLiteral0EA7F3FF9751D1C0670732BE07C84116AD963E2D;
IL2CPP_EXTERN_C String_t* _stringLiteral0FC0575E5B3BFD69FE0E6DACB4257E1AB52484B5;
IL2CPP_EXTERN_C String_t* _stringLiteral1057AAF5EE3CDF423CF6BCC588476E559687CDE6;
IL2CPP_EXTERN_C String_t* _stringLiteral1B024D537329B86AB0DF96B2A714180F442F53E9;
IL2CPP_EXTERN_C String_t* _stringLiteral21CEBAC0172EB4FB67A8A2698C7F35355100D5F7;
IL2CPP_EXTERN_C String_t* _stringLiteral2AC7F98E5022908E09788532C95599452352D34A;
IL2CPP_EXTERN_C String_t* _stringLiteral40B9968876DFBA959A505AA3EC0E9D9D26C14E45;
IL2CPP_EXTERN_C String_t* _stringLiteral44B679A4FEA54FC0DBB1CECD512FC3FCFFE445F4;
IL2CPP_EXTERN_C String_t* _stringLiteral46F273EF641E07D271D91E0DC24A4392582671F8;
IL2CPP_EXTERN_C String_t* _stringLiteral46FADEB9E998225AA96BA7F96F3C6FE519B52F62;
IL2CPP_EXTERN_C String_t* _stringLiteral4845015737DC41475709911228278216EE4DC3AF;
IL2CPP_EXTERN_C String_t* _stringLiteral509D57D2D3AC4C6FAE8D21D19FF2B9D787C81954;
IL2CPP_EXTERN_C String_t* _stringLiteral52D353FB908B8123B513952855EB88F081A1A06A;
IL2CPP_EXTERN_C String_t* _stringLiteral5828D05DE5A70D7EFBBA4D58EC00343F3E9A6AB8;
IL2CPP_EXTERN_C String_t* _stringLiteral5C72E9556FB79F24E1412FC01F0728F363348949;
IL2CPP_EXTERN_C String_t* _stringLiteral60126327537B7B8E6EE33C43FE0C5CA8BCC3A06A;
IL2CPP_EXTERN_C String_t* _stringLiteral60D92E37F6F99139C65CA6248F17911C762F4DD6;
IL2CPP_EXTERN_C String_t* _stringLiteral629998EE8A4BEB3AD2F947D3D95862F0F22227B2;
IL2CPP_EXTERN_C String_t* _stringLiteral744761D527F44F04E435DEFCA1E21E179B60B0E4;
IL2CPP_EXTERN_C String_t* _stringLiteral74755E5875E97ED362B5BF8BC9FA5F7F3F45080C;
IL2CPP_EXTERN_C String_t* _stringLiteral77682CE598EDE490DCDE276E250422EA9BEA739F;
IL2CPP_EXTERN_C String_t* _stringLiteral93C208E83E88E77020CE91612101CB879A8EE914;
IL2CPP_EXTERN_C String_t* _stringLiteralA2DB56FF90ECEEEC49C5E8C66FCD72DF2771D010;
IL2CPP_EXTERN_C String_t* _stringLiteralA3C8F2A441D7C8A8A2D967375934EFA74D7FE1E8;
IL2CPP_EXTERN_C String_t* _stringLiteralA5C933C3A8FFEEDCA056E433AD8C52F89A0D82D2;
IL2CPP_EXTERN_C String_t* _stringLiteralC220E5ABB03B498FA9E8AE08256C71E0C463D910;
IL2CPP_EXTERN_C String_t* _stringLiteralC54638A97A3D6853F9D015A20E04AE7EEE96CE3C;
IL2CPP_EXTERN_C String_t* _stringLiteralC960A835F875EC8DC4DAE61D11CE089EF2BF8416;
IL2CPP_EXTERN_C String_t* _stringLiteralD18A8AB8F50A606429410D3C3F543B352E7D6033;
IL2CPP_EXTERN_C String_t* _stringLiteralD3DAE436D34E1BFB3B81BD5C319049A2E9F9BF3D;
IL2CPP_EXTERN_C String_t* _stringLiteralD7365A084921FB0EE98C5197247132620727BAD9;
IL2CPP_EXTERN_C String_t* _stringLiteralDD0F04E0A3F0BA1F904E0E27720F367F4228C69D;
IL2CPP_EXTERN_C String_t* _stringLiteralE0F9D9926B214819D0D0E8B1814BCF46C90D0956;
IL2CPP_EXTERN_C String_t* _stringLiteralE1291C4D47635E327ECFE39842BD1A93F58C61A2;
IL2CPP_EXTERN_C String_t* _stringLiteralEFE5CC21BFBE09498A868CDF341E3DD037864F0B;
IL2CPP_EXTERN_C String_t* _stringLiteralF3C6C902DBF80139640F6554F0C3392016A8ADF7;
IL2CPP_EXTERN_C String_t* _stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B;
IL2CPP_EXTERN_C String_t* _stringLiteralFF1FCA243EC6560E19277456101964385EA36D01;
IL2CPP_EXTERN_C const RuntimeMethod* ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mFFB70EE53D8CD0255A4E599780F62A3EB1520E83_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ES3Reader_Read_TisColor_tD001788D726C3A7F1379BEED0260B9591F440C1F_m74315D96C24FBB27ED6BD82D4A055A7C3F63CF6D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ES3Reader_Read_TisFlare_t9DCE15756AD8F104B1D9024509B30E46FEF124C8_mB4F3E2360559D1979AA795CC7C0F2E57532A0072_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ES3Reader_Read_TisHideFlags_tC514182ACEFD3B847988C45D5DB812FF6DB1BF4A_m6257FE72F2C8FA46C877F8F2F91EC20CFD286AEA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ES3Reader_Read_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mEFCC4D52DD5B822D3561A53591AE11CDB25CDB6F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ES3Reader_Read_TisLightRenderMode_t0F9C52310E682C737C48976769C0E84BADBD97EB_mBDD4CDCA3ED7478319DF482A0CAA780E057CAC5A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ES3Reader_Read_TisLightShadowResolution_tA4E88BF65D850F34CC01860E921817FA81ADB268_m3882C8CD0F46FC1A4FCA7AF38FA3565A8EEC8C90_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ES3Reader_Read_TisLightShadows_t5A3719FE33F8D536E5785AC42B4DF6E6F19666EA_m57920A81A06D5A8914DA1EE64CFA760D8E5F9466_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ES3Reader_Read_TisLightType_t2D4D43054E7473EECEB54493C0055AE074780234_mC47259F96FD83E1944B16DFAF6CE2D82E71FCF23_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ES3Reader_Read_TisLight_t1E68479B7782AF2050FAA02A5DC612FD034F18F3_mB032FAFBAB777BB6EC57AFAD4E183FCA57151654_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_m9D6B4042B923127DEA4A2CAA3E35EED37D75B3D0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ES3Reader_Read_TisParticleSystemSimulationSpace_tB3693D8A3C0FCE63D060546071006AC4ABC60B05_mE28AF5CD31B164FD849D4D05A9C6E60F95D67243_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mA86928BC888E342D2C2644535E3399952F5077ED_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ES3Reader_Read_TisTexture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700_m500403F138ED8AC049B0E413E39DB211B052B06E_RuntimeMethod_var;


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

// ES3Types.ES3Type_Color
struct ES3Type_Color_t673DF1A1D899E95FF5E687BDC6EE2D5A8A98D958  : public ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE
{
};

struct ES3Type_Color_t673DF1A1D899E95FF5E687BDC6EE2D5A8A98D958_StaticFields
{
	// ES3Types.ES3Type ES3Types.ES3Type_Color::Instance
	ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* ___Instance_12;
};

// ES3Types.ES3Type_LayerMask
struct ES3Type_LayerMask_t1CE2F5D73EE7EAB2A77FC2D54096DC0CD536CE10  : public ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE
{
};

struct ES3Type_LayerMask_t1CE2F5D73EE7EAB2A77FC2D54096DC0CD536CE10_StaticFields
{
	// ES3Types.ES3Type ES3Types.ES3Type_LayerMask::Instance
	ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* ___Instance_12;
};

// ES3Types.ES3Type_LightsModule
struct ES3Type_LightsModule_t37A9192D3FFC77124809D0623E14839D7E0C86A6  : public ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE
{
};

struct ES3Type_LightsModule_t37A9192D3FFC77124809D0623E14839D7E0C86A6_StaticFields
{
	// ES3Types.ES3Type ES3Types.ES3Type_LightsModule::Instance
	ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* ___Instance_12;
};

// ES3Types.ES3Type_LimitVelocityOverLifetimeModule
struct ES3Type_LimitVelocityOverLifetimeModule_t0B3EB57F7FF7F9D1F6D99783CAB9DF9ADCEDE92B  : public ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE
{
};

struct ES3Type_LimitVelocityOverLifetimeModule_t0B3EB57F7FF7F9D1F6D99783CAB9DF9ADCEDE92B_StaticFields
{
	// ES3Types.ES3Type ES3Types.ES3Type_LimitVelocityOverLifetimeModule::Instance
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

// UnityEngine.ParticleSystem/LightsModule
struct LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E 
{
	// UnityEngine.ParticleSystem UnityEngine.ParticleSystem/LightsModule::m_ParticleSystem
	ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* ___m_ParticleSystem_0;
};
// Native definition for P/Invoke marshalling of UnityEngine.ParticleSystem/LightsModule
struct LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E_marshaled_pinvoke
{
	ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* ___m_ParticleSystem_0;
};
// Native definition for COM marshalling of UnityEngine.ParticleSystem/LightsModule
struct LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E_marshaled_com
{
	ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* ___m_ParticleSystem_0;
};

// UnityEngine.ParticleSystem/LimitVelocityOverLifetimeModule
struct LimitVelocityOverLifetimeModule_tC52CF1434E2639EE5D81DD6BA269FF38CA17D8B1 
{
	// UnityEngine.ParticleSystem UnityEngine.ParticleSystem/LimitVelocityOverLifetimeModule::m_ParticleSystem
	ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* ___m_ParticleSystem_0;
};
// Native definition for P/Invoke marshalling of UnityEngine.ParticleSystem/LimitVelocityOverLifetimeModule
struct LimitVelocityOverLifetimeModule_tC52CF1434E2639EE5D81DD6BA269FF38CA17D8B1_marshaled_pinvoke
{
	ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* ___m_ParticleSystem_0;
};
// Native definition for COM marshalling of UnityEngine.ParticleSystem/LimitVelocityOverLifetimeModule
struct LimitVelocityOverLifetimeModule_tC52CF1434E2639EE5D81DD6BA269FF38CA17D8B1_marshaled_com
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

// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// ES3Types.ES3ComponentType
struct ES3ComponentType_tA96FBCDEF44843795CFD0CC92E345662DD11834B  : public ES3UnityObjectType_t3436D50553BAED8BDAD2A84B56E1F267FB66B24B
{
};

// UnityEngine.Flare
struct Flare_t9DCE15756AD8F104B1D9024509B30E46FEF124C8  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.Texture
struct Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

struct Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700_StaticFields
{
	// System.Int32 UnityEngine.Texture::GenerateAllMips
	int32_t ___GenerateAllMips_4;
};

// UnityEngine.Behaviour
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// ES3Types.ES3Type_Light
struct ES3Type_Light_t0E702BA5766531A8E1C1C7B952BD4B76502DE877  : public ES3ComponentType_tA96FBCDEF44843795CFD0CC92E345662DD11834B
{
};

struct ES3Type_Light_t0E702BA5766531A8E1C1C7B952BD4B76502DE877_StaticFields
{
	// ES3Types.ES3Type ES3Types.ES3Type_Light::Instance
	ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* ___Instance_13;
};

// UnityEngine.Light
struct Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
	// System.Int32 UnityEngine.Light::m_BakedIndex
	int32_t ___m_BakedIndex_4;
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif



// System.Boolean System.String::op_Equality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1 (String_t* ___a0, String_t* ___b1, const RuntimeMethod* method) ;
// UnityEngine.LayerMask UnityEngine.LayerMask::op_Implicit(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB LayerMask_op_Implicit_m01C8996A2CB2085328B9C33539C43139660D8222 (int32_t ___intVal0, const RuntimeMethod* method) ;
// System.Collections.IEnumerator ES3Reader/ES3ReaderPropertyEnumerator::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3ReaderPropertyEnumerator_GetEnumerator_mD6FEB8C37D84D9BBAB20D1A4DDCE3407BA971CA8 (ES3ReaderPropertyEnumerator_t66947BCA34F5716A7F0FECC09CDD3D2125703EB2* __this, const RuntimeMethod* method) ;
// System.UInt32 <PrivateImplementationDetails>::ComputeStringHash(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t U3CPrivateImplementationDetailsU3E_ComputeStringHash_m6EA1F233618497AEFF8902A5EDFA24C74E2F2876 (String_t* ___s0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Light::set_type(UnityEngine.LightType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Light_set_type_m9DF0E6AC528391B1D35FA06583B9A72EAB686C43 (Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Light::set_color(UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Light_set_color_m242F09E22904E0A20D5B032A0749678B0796A87C (Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* __this, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Light::set_intensity(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Light_set_intensity_mE4820C7F39F490B92ED5EA0C3AADA7C0775BE854 (Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* __this, float ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Light::set_bounceIntensity(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Light_set_bounceIntensity_m832ED3103EA600319F6227EDE55E5D6EBD272DB1 (Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* __this, float ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Light::set_shadows(UnityEngine.LightShadows)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Light_set_shadows_mDA4D1D1958387649BD35A79D83F50549898A74CB (Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Light::set_shadowStrength(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Light_set_shadowStrength_mA17F6ABA91CE032E008149D5D53FCD9B00497A4F (Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* __this, float ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Light::set_shadowResolution(UnityEngine.Rendering.LightShadowResolution)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Light_set_shadowResolution_mB1ED5718DCCA40E1AD231D145264B454543CBF07 (Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Light::set_shadowCustomResolution(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Light_set_shadowCustomResolution_mEB39F5DB4F4BEBB2ACC2273E28C651CE578E3502 (Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Light::set_shadowBias(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Light_set_shadowBias_m04C4B35A017357A5C6A26BE7098EC1CE1E1E5420 (Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* __this, float ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Light::set_shadowNormalBias(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Light_set_shadowNormalBias_m855EC8B5B849E8EA60A1F2BCE09357CE4B0D755A (Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* __this, float ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Light::set_shadowNearPlane(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Light_set_shadowNearPlane_m9105DBBC92CBB4F45401EDEA50B1DF14C9C3F01C (Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* __this, float ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Light::set_range(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Light_set_range_mBAF8E5380ECAD89A2BF43B7DA9C2DE8FA0C2FDEF (Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* __this, float ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Light::set_spotAngle(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Light_set_spotAngle_mB27C0667B5C07771750AF66E36F2CA02D272C61B (Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* __this, float ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Light::set_cookieSize(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Light_set_cookieSize_m40AC9D2279340DDB66290B9C76203D6061593DD4 (Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* __this, float ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Light::set_cookie(UnityEngine.Texture)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Light_set_cookie_m42EC6CBDB1149EA8D49E36D21FDA0AD220C2C6CD (Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* __this, Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Light::set_flare(UnityEngine.Flare)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Light_set_flare_m751C28EF5BA14643F57ECA60924D1C344F00385C (Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* __this, Flare_t9DCE15756AD8F104B1D9024509B30E46FEF124C8* ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Light::set_renderMode(UnityEngine.LightRenderMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Light_set_renderMode_m31F714D8EAD8B90E9E38E3864403CD9379D9DE58 (Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Light::set_cullingMask(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Light_set_cullingMask_mC714832A1E2B73C72C188F9F44B50C449831C4B1 (Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Behaviour::set_enabled(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A (Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Object::set_hideFlags(UnityEngine.HideFlags)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_set_hideFlags_mACB8BFC903FB3B01BBD427753E791BF28B5E33D4 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.ParticleSystem/LightsModule::set_enabled(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LightsModule_set_enabled_mCA61408EE4B83423BB92B032567BA63005379DCE (LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.ParticleSystem/LightsModule::set_ratio(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LightsModule_set_ratio_mE1B9F5C45EB2E0822BF47F28F0510B5ECF2C87FC (LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E* __this, float ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.ParticleSystem/LightsModule::set_useRandomDistribution(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LightsModule_set_useRandomDistribution_mB5EEC3EE5E510F2F27C779C25FD584B6FEA879D9 (LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.ParticleSystem/LightsModule::set_light(UnityEngine.Light)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LightsModule_set_light_m54F655151E83BA1CF8ECDF92B8D18F06463B2D59 (LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E* __this, Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.ParticleSystem/LightsModule::set_useParticleColor(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LightsModule_set_useParticleColor_mC91DC556C20A786D4E8190842094B557204C74B0 (LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.ParticleSystem/LightsModule::set_sizeAffectsRange(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LightsModule_set_sizeAffectsRange_mBAAE49AC54AE79237649DD0AA715F43B0510356A (LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.ParticleSystem/LightsModule::set_alphaAffectsIntensity(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LightsModule_set_alphaAffectsIntensity_m79B804EA7C98543C733F3E0355DB01B8E1845995 (LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.ParticleSystem/LightsModule::set_range(UnityEngine.ParticleSystem/MinMaxCurve)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LightsModule_set_range_m3DA6A5EE3021CB5A4787AEAE4DCA675E3050C5E4 (LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E* __this, MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.ParticleSystem/LightsModule::set_rangeMultiplier(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LightsModule_set_rangeMultiplier_m881D705C505C908F9F05F24EFBFC61DD2F01B23F (LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E* __this, float ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.ParticleSystem/LightsModule::set_intensity(UnityEngine.ParticleSystem/MinMaxCurve)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LightsModule_set_intensity_mD1D7564D1ADD14C5755043F1146A8D56C228A519 (LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E* __this, MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.ParticleSystem/LightsModule::set_intensityMultiplier(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LightsModule_set_intensityMultiplier_m79E9E71E14F02B6BE7C4EB6C5B3BA8921D1B29F8 (LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E* __this, float ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.ParticleSystem/LightsModule::set_maxLights(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LightsModule_set_maxLights_mC423F1C129DAB69F2F145F6AA8160DEE8176F4EC (LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.ParticleSystem/LimitVelocityOverLifetimeModule::set_enabled(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LimitVelocityOverLifetimeModule_set_enabled_m0C4AC7078A4009C764CDD6C852747161626030F8 (LimitVelocityOverLifetimeModule_tC52CF1434E2639EE5D81DD6BA269FF38CA17D8B1* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.ParticleSystem/LimitVelocityOverLifetimeModule::set_limitX(UnityEngine.ParticleSystem/MinMaxCurve)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LimitVelocityOverLifetimeModule_set_limitX_m453163A173E91BD1FA92A85FFFB1377922264E88 (LimitVelocityOverLifetimeModule_tC52CF1434E2639EE5D81DD6BA269FF38CA17D8B1* __this, MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.ParticleSystem/LimitVelocityOverLifetimeModule::set_limitXMultiplier(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LimitVelocityOverLifetimeModule_set_limitXMultiplier_m69A35DBE2A96DB94E1C5857C1AEA7700F315FB69 (LimitVelocityOverLifetimeModule_tC52CF1434E2639EE5D81DD6BA269FF38CA17D8B1* __this, float ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.ParticleSystem/LimitVelocityOverLifetimeModule::set_limitY(UnityEngine.ParticleSystem/MinMaxCurve)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LimitVelocityOverLifetimeModule_set_limitY_m5C4FA3E4199843D17B358EAE552BC1530944C6ED (LimitVelocityOverLifetimeModule_tC52CF1434E2639EE5D81DD6BA269FF38CA17D8B1* __this, MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.ParticleSystem/LimitVelocityOverLifetimeModule::set_limitYMultiplier(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LimitVelocityOverLifetimeModule_set_limitYMultiplier_mCB16226776AA3FD95FCBFEF08939CDFCDEAD1FD7 (LimitVelocityOverLifetimeModule_tC52CF1434E2639EE5D81DD6BA269FF38CA17D8B1* __this, float ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.ParticleSystem/LimitVelocityOverLifetimeModule::set_limitZ(UnityEngine.ParticleSystem/MinMaxCurve)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LimitVelocityOverLifetimeModule_set_limitZ_mA7AA3F6C6EB9C1E2199DE5EDBFDFCD891E66A06C (LimitVelocityOverLifetimeModule_tC52CF1434E2639EE5D81DD6BA269FF38CA17D8B1* __this, MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.ParticleSystem/LimitVelocityOverLifetimeModule::set_limitZMultiplier(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LimitVelocityOverLifetimeModule_set_limitZMultiplier_mF8318B3E8798E9778CD356C773A9567EBCC414DF (LimitVelocityOverLifetimeModule_tC52CF1434E2639EE5D81DD6BA269FF38CA17D8B1* __this, float ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.ParticleSystem/LimitVelocityOverLifetimeModule::set_limit(UnityEngine.ParticleSystem/MinMaxCurve)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LimitVelocityOverLifetimeModule_set_limit_m4714D5E0B04EAE01A49552690E9CC206AC5C7685 (LimitVelocityOverLifetimeModule_tC52CF1434E2639EE5D81DD6BA269FF38CA17D8B1* __this, MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.ParticleSystem/LimitVelocityOverLifetimeModule::set_limitMultiplier(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LimitVelocityOverLifetimeModule_set_limitMultiplier_m520C77C943C30BFE63EF0E4BEA9593D251187B28 (LimitVelocityOverLifetimeModule_tC52CF1434E2639EE5D81DD6BA269FF38CA17D8B1* __this, float ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.ParticleSystem/LimitVelocityOverLifetimeModule::set_dampen(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LimitVelocityOverLifetimeModule_set_dampen_mE8A893ECFE936519C3F68D440C3C6BD11065E288 (LimitVelocityOverLifetimeModule_tC52CF1434E2639EE5D81DD6BA269FF38CA17D8B1* __this, float ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.ParticleSystem/LimitVelocityOverLifetimeModule::set_separateAxes(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LimitVelocityOverLifetimeModule_set_separateAxes_m3E1D0590D45FE0D6657D99685DA4E5A231229EF0 (LimitVelocityOverLifetimeModule_tC52CF1434E2639EE5D81DD6BA269FF38CA17D8B1* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.ParticleSystem/LimitVelocityOverLifetimeModule::set_space(UnityEngine.ParticleSystemSimulationSpace)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LimitVelocityOverLifetimeModule_set_space_m54D13D862FCB1606F37A3F053138437DEBF773D5 (LimitVelocityOverLifetimeModule_tC52CF1434E2639EE5D81DD6BA269FF38CA17D8B1* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Object ES3Types.ES3Type_LayerMask::Read<UnityEngine.Color>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_LayerMask_Read_TisColor_tD001788D726C3A7F1379BEED0260B9591F440C1F_m498848F9C9E1D993D9015EC87F9660CDAB25F8A7_gshared (ES3Type_LayerMask_t1CE2F5D73EE7EAB2A77FC2D54096DC0CD536CE10* __this, ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mEFCC4D52DD5B822D3561A53591AE11CDB25CDB6F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_int_t05A5E7A96442F23CE33E24A71CD349372A70E0C3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral46F273EF641E07D271D91E0DC24A4392582671F8);
		s_Il2CppMethodInitialized = true;
	}
	LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	{
		// LayerMask instance = new LayerMask();
		il2cpp_codegen_initobj((&V_0), sizeof(LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB));
		goto IL_0030;
	}

IL_000a:
	{
		String_t* L_0 = V_1;
		bool L_1;
		L_1 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_0, _stringLiteral46F273EF641E07D271D91E0DC24A4392582671F8, NULL);
		if (!L_1)
		{
			goto IL_002a;
		}
	}
	{
		// instance = reader.Read<int>(ES3Type_int.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_2 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_3 = ((ES3Type_int_t05A5E7A96442F23CE33E24A71CD349372A70E0C3_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_int_t05A5E7A96442F23CE33E24A71CD349372A70E0C3_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_2);
		int32_t L_4;
		L_4 = GenericVirtualFuncInvoker1< int32_t, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mEFCC4D52DD5B822D3561A53591AE11CDB25CDB6F_RuntimeMethod_var, L_2, L_3);
		LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB L_5;
		L_5 = LayerMask_op_Implicit_m01C8996A2CB2085328B9C33539C43139660D8222(L_4, NULL);
		V_0 = L_5;
		// break;
		goto IL_0030;
	}

IL_002a:
	{
		// reader.Skip();
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_6 = ___reader0;
		NullCheck(L_6);
		VirtualActionInvoker0::Invoke(41 /* System.Void ES3Reader::Skip() */, L_6);
	}

IL_0030:
	{
		// while((propertyName = reader.ReadPropertyName()) != null)
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_7 = ___reader0;
		NullCheck(L_7);
		String_t* L_8;
		L_8 = VirtualFuncInvoker0< String_t* >::Invoke(21 /* System.String ES3Reader::ReadPropertyName() */, L_7);
		String_t* L_9 = L_8;
		V_1 = L_9;
		if (L_9)
		{
			goto IL_000a;
		}
	}
	{
		// return instance;
		LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB L_10 = V_0;
		LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB L_11 = L_10;
		RuntimeObject* L_12 = Box(LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB_il2cpp_TypeInfo_var, &L_11);
		return L_12;
	}
}
// System.Object ES3Types.ES3Type_LayerMask::Read<System.Int32>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_LayerMask_Read_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m9B89773AA335F24DA8AE22E3D4FDD50A5C1A7427_gshared (ES3Type_LayerMask_t1CE2F5D73EE7EAB2A77FC2D54096DC0CD536CE10* __this, ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mEFCC4D52DD5B822D3561A53591AE11CDB25CDB6F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_int_t05A5E7A96442F23CE33E24A71CD349372A70E0C3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral46F273EF641E07D271D91E0DC24A4392582671F8);
		s_Il2CppMethodInitialized = true;
	}
	LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	{
		// LayerMask instance = new LayerMask();
		il2cpp_codegen_initobj((&V_0), sizeof(LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB));
		goto IL_0030;
	}

IL_000a:
	{
		String_t* L_0 = V_1;
		bool L_1;
		L_1 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_0, _stringLiteral46F273EF641E07D271D91E0DC24A4392582671F8, NULL);
		if (!L_1)
		{
			goto IL_002a;
		}
	}
	{
		// instance = reader.Read<int>(ES3Type_int.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_2 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_3 = ((ES3Type_int_t05A5E7A96442F23CE33E24A71CD349372A70E0C3_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_int_t05A5E7A96442F23CE33E24A71CD349372A70E0C3_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_2);
		int32_t L_4;
		L_4 = GenericVirtualFuncInvoker1< int32_t, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mEFCC4D52DD5B822D3561A53591AE11CDB25CDB6F_RuntimeMethod_var, L_2, L_3);
		LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB L_5;
		L_5 = LayerMask_op_Implicit_m01C8996A2CB2085328B9C33539C43139660D8222(L_4, NULL);
		V_0 = L_5;
		// break;
		goto IL_0030;
	}

IL_002a:
	{
		// reader.Skip();
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_6 = ___reader0;
		NullCheck(L_6);
		VirtualActionInvoker0::Invoke(41 /* System.Void ES3Reader::Skip() */, L_6);
	}

IL_0030:
	{
		// while((propertyName = reader.ReadPropertyName()) != null)
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_7 = ___reader0;
		NullCheck(L_7);
		String_t* L_8;
		L_8 = VirtualFuncInvoker0< String_t* >::Invoke(21 /* System.String ES3Reader::ReadPropertyName() */, L_7);
		String_t* L_9 = L_8;
		V_1 = L_9;
		if (L_9)
		{
			goto IL_000a;
		}
	}
	{
		// return instance;
		LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB L_10 = V_0;
		LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB L_11 = L_10;
		RuntimeObject* L_12 = Box(LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB_il2cpp_TypeInfo_var, &L_11);
		return L_12;
	}
}
// System.Object ES3Types.ES3Type_LayerMask::Read<System.Int32Enum>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_LayerMask_Read_TisInt32Enum_tCBAC8BA2BFF3A845FA599F303093BBBA374B6F0C_mDAB874D6E1B1EE99701AFE79B5F6C284A3E44D3B_gshared (ES3Type_LayerMask_t1CE2F5D73EE7EAB2A77FC2D54096DC0CD536CE10* __this, ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mEFCC4D52DD5B822D3561A53591AE11CDB25CDB6F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_int_t05A5E7A96442F23CE33E24A71CD349372A70E0C3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral46F273EF641E07D271D91E0DC24A4392582671F8);
		s_Il2CppMethodInitialized = true;
	}
	LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	{
		// LayerMask instance = new LayerMask();
		il2cpp_codegen_initobj((&V_0), sizeof(LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB));
		goto IL_0030;
	}

IL_000a:
	{
		String_t* L_0 = V_1;
		bool L_1;
		L_1 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_0, _stringLiteral46F273EF641E07D271D91E0DC24A4392582671F8, NULL);
		if (!L_1)
		{
			goto IL_002a;
		}
	}
	{
		// instance = reader.Read<int>(ES3Type_int.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_2 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_3 = ((ES3Type_int_t05A5E7A96442F23CE33E24A71CD349372A70E0C3_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_int_t05A5E7A96442F23CE33E24A71CD349372A70E0C3_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_2);
		int32_t L_4;
		L_4 = GenericVirtualFuncInvoker1< int32_t, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mEFCC4D52DD5B822D3561A53591AE11CDB25CDB6F_RuntimeMethod_var, L_2, L_3);
		LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB L_5;
		L_5 = LayerMask_op_Implicit_m01C8996A2CB2085328B9C33539C43139660D8222(L_4, NULL);
		V_0 = L_5;
		// break;
		goto IL_0030;
	}

IL_002a:
	{
		// reader.Skip();
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_6 = ___reader0;
		NullCheck(L_6);
		VirtualActionInvoker0::Invoke(41 /* System.Void ES3Reader::Skip() */, L_6);
	}

IL_0030:
	{
		// while((propertyName = reader.ReadPropertyName()) != null)
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_7 = ___reader0;
		NullCheck(L_7);
		String_t* L_8;
		L_8 = VirtualFuncInvoker0< String_t* >::Invoke(21 /* System.String ES3Reader::ReadPropertyName() */, L_7);
		String_t* L_9 = L_8;
		V_1 = L_9;
		if (L_9)
		{
			goto IL_000a;
		}
	}
	{
		// return instance;
		LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB L_10 = V_0;
		LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB L_11 = L_10;
		RuntimeObject* L_12 = Box(LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB_il2cpp_TypeInfo_var, &L_11);
		return L_12;
	}
}
// System.Object ES3Types.ES3Type_LayerMask::Read<System.Int64>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_LayerMask_Read_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_m2CD53AFB2A2C85F9B64DADA46E5ACF4A1AB7DB7B_gshared (ES3Type_LayerMask_t1CE2F5D73EE7EAB2A77FC2D54096DC0CD536CE10* __this, ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mEFCC4D52DD5B822D3561A53591AE11CDB25CDB6F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_int_t05A5E7A96442F23CE33E24A71CD349372A70E0C3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral46F273EF641E07D271D91E0DC24A4392582671F8);
		s_Il2CppMethodInitialized = true;
	}
	LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	{
		// LayerMask instance = new LayerMask();
		il2cpp_codegen_initobj((&V_0), sizeof(LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB));
		goto IL_0030;
	}

IL_000a:
	{
		String_t* L_0 = V_1;
		bool L_1;
		L_1 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_0, _stringLiteral46F273EF641E07D271D91E0DC24A4392582671F8, NULL);
		if (!L_1)
		{
			goto IL_002a;
		}
	}
	{
		// instance = reader.Read<int>(ES3Type_int.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_2 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_3 = ((ES3Type_int_t05A5E7A96442F23CE33E24A71CD349372A70E0C3_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_int_t05A5E7A96442F23CE33E24A71CD349372A70E0C3_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_2);
		int32_t L_4;
		L_4 = GenericVirtualFuncInvoker1< int32_t, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mEFCC4D52DD5B822D3561A53591AE11CDB25CDB6F_RuntimeMethod_var, L_2, L_3);
		LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB L_5;
		L_5 = LayerMask_op_Implicit_m01C8996A2CB2085328B9C33539C43139660D8222(L_4, NULL);
		V_0 = L_5;
		// break;
		goto IL_0030;
	}

IL_002a:
	{
		// reader.Skip();
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_6 = ___reader0;
		NullCheck(L_6);
		VirtualActionInvoker0::Invoke(41 /* System.Void ES3Reader::Skip() */, L_6);
	}

IL_0030:
	{
		// while((propertyName = reader.ReadPropertyName()) != null)
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_7 = ___reader0;
		NullCheck(L_7);
		String_t* L_8;
		L_8 = VirtualFuncInvoker0< String_t* >::Invoke(21 /* System.String ES3Reader::ReadPropertyName() */, L_7);
		String_t* L_9 = L_8;
		V_1 = L_9;
		if (L_9)
		{
			goto IL_000a;
		}
	}
	{
		// return instance;
		LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB L_10 = V_0;
		LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB L_11 = L_10;
		RuntimeObject* L_12 = Box(LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB_il2cpp_TypeInfo_var, &L_11);
		return L_12;
	}
}
// System.Object ES3Types.ES3Type_LayerMask::Read<UnityEngine.LayerMask>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_LayerMask_Read_TisLayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB_m1A191C21475BA64A8CBE27E34013F093C4F4547F_gshared (ES3Type_LayerMask_t1CE2F5D73EE7EAB2A77FC2D54096DC0CD536CE10* __this, ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mEFCC4D52DD5B822D3561A53591AE11CDB25CDB6F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_int_t05A5E7A96442F23CE33E24A71CD349372A70E0C3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral46F273EF641E07D271D91E0DC24A4392582671F8);
		s_Il2CppMethodInitialized = true;
	}
	LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	{
		// LayerMask instance = new LayerMask();
		il2cpp_codegen_initobj((&V_0), sizeof(LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB));
		goto IL_0030;
	}

IL_000a:
	{
		String_t* L_0 = V_1;
		bool L_1;
		L_1 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_0, _stringLiteral46F273EF641E07D271D91E0DC24A4392582671F8, NULL);
		if (!L_1)
		{
			goto IL_002a;
		}
	}
	{
		// instance = reader.Read<int>(ES3Type_int.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_2 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_3 = ((ES3Type_int_t05A5E7A96442F23CE33E24A71CD349372A70E0C3_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_int_t05A5E7A96442F23CE33E24A71CD349372A70E0C3_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_2);
		int32_t L_4;
		L_4 = GenericVirtualFuncInvoker1< int32_t, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mEFCC4D52DD5B822D3561A53591AE11CDB25CDB6F_RuntimeMethod_var, L_2, L_3);
		LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB L_5;
		L_5 = LayerMask_op_Implicit_m01C8996A2CB2085328B9C33539C43139660D8222(L_4, NULL);
		V_0 = L_5;
		// break;
		goto IL_0030;
	}

IL_002a:
	{
		// reader.Skip();
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_6 = ___reader0;
		NullCheck(L_6);
		VirtualActionInvoker0::Invoke(41 /* System.Void ES3Reader::Skip() */, L_6);
	}

IL_0030:
	{
		// while((propertyName = reader.ReadPropertyName()) != null)
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_7 = ___reader0;
		NullCheck(L_7);
		String_t* L_8;
		L_8 = VirtualFuncInvoker0< String_t* >::Invoke(21 /* System.String ES3Reader::ReadPropertyName() */, L_7);
		String_t* L_9 = L_8;
		V_1 = L_9;
		if (L_9)
		{
			goto IL_000a;
		}
	}
	{
		// return instance;
		LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB L_10 = V_0;
		LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB L_11 = L_10;
		RuntimeObject* L_12 = Box(LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB_il2cpp_TypeInfo_var, &L_11);
		return L_12;
	}
}
// System.Object ES3Types.ES3Type_LayerMask::Read<UnityEngine.Matrix4x4>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_LayerMask_Read_TisMatrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6_m554FCD8579CF351F998C250F2139315601BC70AA_gshared (ES3Type_LayerMask_t1CE2F5D73EE7EAB2A77FC2D54096DC0CD536CE10* __this, ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mEFCC4D52DD5B822D3561A53591AE11CDB25CDB6F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_int_t05A5E7A96442F23CE33E24A71CD349372A70E0C3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral46F273EF641E07D271D91E0DC24A4392582671F8);
		s_Il2CppMethodInitialized = true;
	}
	LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	{
		// LayerMask instance = new LayerMask();
		il2cpp_codegen_initobj((&V_0), sizeof(LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB));
		goto IL_0030;
	}

IL_000a:
	{
		String_t* L_0 = V_1;
		bool L_1;
		L_1 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_0, _stringLiteral46F273EF641E07D271D91E0DC24A4392582671F8, NULL);
		if (!L_1)
		{
			goto IL_002a;
		}
	}
	{
		// instance = reader.Read<int>(ES3Type_int.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_2 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_3 = ((ES3Type_int_t05A5E7A96442F23CE33E24A71CD349372A70E0C3_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_int_t05A5E7A96442F23CE33E24A71CD349372A70E0C3_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_2);
		int32_t L_4;
		L_4 = GenericVirtualFuncInvoker1< int32_t, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mEFCC4D52DD5B822D3561A53591AE11CDB25CDB6F_RuntimeMethod_var, L_2, L_3);
		LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB L_5;
		L_5 = LayerMask_op_Implicit_m01C8996A2CB2085328B9C33539C43139660D8222(L_4, NULL);
		V_0 = L_5;
		// break;
		goto IL_0030;
	}

IL_002a:
	{
		// reader.Skip();
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_6 = ___reader0;
		NullCheck(L_6);
		VirtualActionInvoker0::Invoke(41 /* System.Void ES3Reader::Skip() */, L_6);
	}

IL_0030:
	{
		// while((propertyName = reader.ReadPropertyName()) != null)
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_7 = ___reader0;
		NullCheck(L_7);
		String_t* L_8;
		L_8 = VirtualFuncInvoker0< String_t* >::Invoke(21 /* System.String ES3Reader::ReadPropertyName() */, L_7);
		String_t* L_9 = L_8;
		V_1 = L_9;
		if (L_9)
		{
			goto IL_000a;
		}
	}
	{
		// return instance;
		LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB L_10 = V_0;
		LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB L_11 = L_10;
		RuntimeObject* L_12 = Box(LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB_il2cpp_TypeInfo_var, &L_11);
		return L_12;
	}
}
// System.Object ES3Types.ES3Type_LayerMask::Read<System.Object>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_LayerMask_Read_TisRuntimeObject_m09551486E22647D2979E4F65F82C757826131D3C_gshared (ES3Type_LayerMask_t1CE2F5D73EE7EAB2A77FC2D54096DC0CD536CE10* __this, ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mEFCC4D52DD5B822D3561A53591AE11CDB25CDB6F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_int_t05A5E7A96442F23CE33E24A71CD349372A70E0C3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral46F273EF641E07D271D91E0DC24A4392582671F8);
		s_Il2CppMethodInitialized = true;
	}
	LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	{
		// LayerMask instance = new LayerMask();
		il2cpp_codegen_initobj((&V_0), sizeof(LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB));
		goto IL_0030;
	}

IL_000a:
	{
		String_t* L_0 = V_1;
		bool L_1;
		L_1 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_0, _stringLiteral46F273EF641E07D271D91E0DC24A4392582671F8, NULL);
		if (!L_1)
		{
			goto IL_002a;
		}
	}
	{
		// instance = reader.Read<int>(ES3Type_int.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_2 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_3 = ((ES3Type_int_t05A5E7A96442F23CE33E24A71CD349372A70E0C3_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_int_t05A5E7A96442F23CE33E24A71CD349372A70E0C3_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_2);
		int32_t L_4;
		L_4 = GenericVirtualFuncInvoker1< int32_t, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mEFCC4D52DD5B822D3561A53591AE11CDB25CDB6F_RuntimeMethod_var, L_2, L_3);
		LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB L_5;
		L_5 = LayerMask_op_Implicit_m01C8996A2CB2085328B9C33539C43139660D8222(L_4, NULL);
		V_0 = L_5;
		// break;
		goto IL_0030;
	}

IL_002a:
	{
		// reader.Skip();
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_6 = ___reader0;
		NullCheck(L_6);
		VirtualActionInvoker0::Invoke(41 /* System.Void ES3Reader::Skip() */, L_6);
	}

IL_0030:
	{
		// while((propertyName = reader.ReadPropertyName()) != null)
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_7 = ___reader0;
		NullCheck(L_7);
		String_t* L_8;
		L_8 = VirtualFuncInvoker0< String_t* >::Invoke(21 /* System.String ES3Reader::ReadPropertyName() */, L_7);
		String_t* L_9 = L_8;
		V_1 = L_9;
		if (L_9)
		{
			goto IL_000a;
		}
	}
	{
		// return instance;
		LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB L_10 = V_0;
		LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB L_11 = L_10;
		RuntimeObject* L_12 = Box(LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB_il2cpp_TypeInfo_var, &L_11);
		return L_12;
	}
}
// System.Object ES3Types.ES3Type_LayerMask::Read<UnityEngine.Quaternion>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_LayerMask_Read_TisQuaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_m54A5870E29D6AB297E558F9D656341B9E364C098_gshared (ES3Type_LayerMask_t1CE2F5D73EE7EAB2A77FC2D54096DC0CD536CE10* __this, ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mEFCC4D52DD5B822D3561A53591AE11CDB25CDB6F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_int_t05A5E7A96442F23CE33E24A71CD349372A70E0C3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral46F273EF641E07D271D91E0DC24A4392582671F8);
		s_Il2CppMethodInitialized = true;
	}
	LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	{
		// LayerMask instance = new LayerMask();
		il2cpp_codegen_initobj((&V_0), sizeof(LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB));
		goto IL_0030;
	}

IL_000a:
	{
		String_t* L_0 = V_1;
		bool L_1;
		L_1 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_0, _stringLiteral46F273EF641E07D271D91E0DC24A4392582671F8, NULL);
		if (!L_1)
		{
			goto IL_002a;
		}
	}
	{
		// instance = reader.Read<int>(ES3Type_int.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_2 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_3 = ((ES3Type_int_t05A5E7A96442F23CE33E24A71CD349372A70E0C3_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_int_t05A5E7A96442F23CE33E24A71CD349372A70E0C3_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_2);
		int32_t L_4;
		L_4 = GenericVirtualFuncInvoker1< int32_t, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mEFCC4D52DD5B822D3561A53591AE11CDB25CDB6F_RuntimeMethod_var, L_2, L_3);
		LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB L_5;
		L_5 = LayerMask_op_Implicit_m01C8996A2CB2085328B9C33539C43139660D8222(L_4, NULL);
		V_0 = L_5;
		// break;
		goto IL_0030;
	}

IL_002a:
	{
		// reader.Skip();
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_6 = ___reader0;
		NullCheck(L_6);
		VirtualActionInvoker0::Invoke(41 /* System.Void ES3Reader::Skip() */, L_6);
	}

IL_0030:
	{
		// while((propertyName = reader.ReadPropertyName()) != null)
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_7 = ___reader0;
		NullCheck(L_7);
		String_t* L_8;
		L_8 = VirtualFuncInvoker0< String_t* >::Invoke(21 /* System.String ES3Reader::ReadPropertyName() */, L_7);
		String_t* L_9 = L_8;
		V_1 = L_9;
		if (L_9)
		{
			goto IL_000a;
		}
	}
	{
		// return instance;
		LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB L_10 = V_0;
		LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB L_11 = L_10;
		RuntimeObject* L_12 = Box(LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB_il2cpp_TypeInfo_var, &L_11);
		return L_12;
	}
}
// System.Object ES3Types.ES3Type_LayerMask::Read<UnityEngine.Rect>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_LayerMask_Read_TisRect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D_mC2AF864766E12D6EA7D2243448B8211B7E1DAD8F_gshared (ES3Type_LayerMask_t1CE2F5D73EE7EAB2A77FC2D54096DC0CD536CE10* __this, ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mEFCC4D52DD5B822D3561A53591AE11CDB25CDB6F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_int_t05A5E7A96442F23CE33E24A71CD349372A70E0C3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral46F273EF641E07D271D91E0DC24A4392582671F8);
		s_Il2CppMethodInitialized = true;
	}
	LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	{
		// LayerMask instance = new LayerMask();
		il2cpp_codegen_initobj((&V_0), sizeof(LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB));
		goto IL_0030;
	}

IL_000a:
	{
		String_t* L_0 = V_1;
		bool L_1;
		L_1 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_0, _stringLiteral46F273EF641E07D271D91E0DC24A4392582671F8, NULL);
		if (!L_1)
		{
			goto IL_002a;
		}
	}
	{
		// instance = reader.Read<int>(ES3Type_int.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_2 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_3 = ((ES3Type_int_t05A5E7A96442F23CE33E24A71CD349372A70E0C3_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_int_t05A5E7A96442F23CE33E24A71CD349372A70E0C3_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_2);
		int32_t L_4;
		L_4 = GenericVirtualFuncInvoker1< int32_t, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mEFCC4D52DD5B822D3561A53591AE11CDB25CDB6F_RuntimeMethod_var, L_2, L_3);
		LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB L_5;
		L_5 = LayerMask_op_Implicit_m01C8996A2CB2085328B9C33539C43139660D8222(L_4, NULL);
		V_0 = L_5;
		// break;
		goto IL_0030;
	}

IL_002a:
	{
		// reader.Skip();
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_6 = ___reader0;
		NullCheck(L_6);
		VirtualActionInvoker0::Invoke(41 /* System.Void ES3Reader::Skip() */, L_6);
	}

IL_0030:
	{
		// while((propertyName = reader.ReadPropertyName()) != null)
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_7 = ___reader0;
		NullCheck(L_7);
		String_t* L_8;
		L_8 = VirtualFuncInvoker0< String_t* >::Invoke(21 /* System.String ES3Reader::ReadPropertyName() */, L_7);
		String_t* L_9 = L_8;
		V_1 = L_9;
		if (L_9)
		{
			goto IL_000a;
		}
	}
	{
		// return instance;
		LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB L_10 = V_0;
		LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB L_11 = L_10;
		RuntimeObject* L_12 = Box(LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB_il2cpp_TypeInfo_var, &L_11);
		return L_12;
	}
}
// System.Object ES3Types.ES3Type_LayerMask::Read<UnityEngine.RenderTextureDescriptor>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_LayerMask_Read_TisRenderTextureDescriptor_t69845881CE6437E4E61F92074F2F84079F23FA46_m63A150F374E46540CDA74BA3380B87F8B98BC382_gshared (ES3Type_LayerMask_t1CE2F5D73EE7EAB2A77FC2D54096DC0CD536CE10* __this, ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mEFCC4D52DD5B822D3561A53591AE11CDB25CDB6F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_int_t05A5E7A96442F23CE33E24A71CD349372A70E0C3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral46F273EF641E07D271D91E0DC24A4392582671F8);
		s_Il2CppMethodInitialized = true;
	}
	LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	{
		// LayerMask instance = new LayerMask();
		il2cpp_codegen_initobj((&V_0), sizeof(LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB));
		goto IL_0030;
	}

IL_000a:
	{
		String_t* L_0 = V_1;
		bool L_1;
		L_1 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_0, _stringLiteral46F273EF641E07D271D91E0DC24A4392582671F8, NULL);
		if (!L_1)
		{
			goto IL_002a;
		}
	}
	{
		// instance = reader.Read<int>(ES3Type_int.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_2 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_3 = ((ES3Type_int_t05A5E7A96442F23CE33E24A71CD349372A70E0C3_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_int_t05A5E7A96442F23CE33E24A71CD349372A70E0C3_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_2);
		int32_t L_4;
		L_4 = GenericVirtualFuncInvoker1< int32_t, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mEFCC4D52DD5B822D3561A53591AE11CDB25CDB6F_RuntimeMethod_var, L_2, L_3);
		LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB L_5;
		L_5 = LayerMask_op_Implicit_m01C8996A2CB2085328B9C33539C43139660D8222(L_4, NULL);
		V_0 = L_5;
		// break;
		goto IL_0030;
	}

IL_002a:
	{
		// reader.Skip();
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_6 = ___reader0;
		NullCheck(L_6);
		VirtualActionInvoker0::Invoke(41 /* System.Void ES3Reader::Skip() */, L_6);
	}

IL_0030:
	{
		// while((propertyName = reader.ReadPropertyName()) != null)
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_7 = ___reader0;
		NullCheck(L_7);
		String_t* L_8;
		L_8 = VirtualFuncInvoker0< String_t* >::Invoke(21 /* System.String ES3Reader::ReadPropertyName() */, L_7);
		String_t* L_9 = L_8;
		V_1 = L_9;
		if (L_9)
		{
			goto IL_000a;
		}
	}
	{
		// return instance;
		LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB L_10 = V_0;
		LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB L_11 = L_10;
		RuntimeObject* L_12 = Box(LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB_il2cpp_TypeInfo_var, &L_11);
		return L_12;
	}
}
// System.Object ES3Types.ES3Type_LayerMask::Read<System.Single>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_LayerMask_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mAF48F4ACD3CBA3173066B551C5C1E2CC4B7FAA3C_gshared (ES3Type_LayerMask_t1CE2F5D73EE7EAB2A77FC2D54096DC0CD536CE10* __this, ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mEFCC4D52DD5B822D3561A53591AE11CDB25CDB6F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_int_t05A5E7A96442F23CE33E24A71CD349372A70E0C3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral46F273EF641E07D271D91E0DC24A4392582671F8);
		s_Il2CppMethodInitialized = true;
	}
	LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	{
		// LayerMask instance = new LayerMask();
		il2cpp_codegen_initobj((&V_0), sizeof(LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB));
		goto IL_0030;
	}

IL_000a:
	{
		String_t* L_0 = V_1;
		bool L_1;
		L_1 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_0, _stringLiteral46F273EF641E07D271D91E0DC24A4392582671F8, NULL);
		if (!L_1)
		{
			goto IL_002a;
		}
	}
	{
		// instance = reader.Read<int>(ES3Type_int.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_2 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_3 = ((ES3Type_int_t05A5E7A96442F23CE33E24A71CD349372A70E0C3_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_int_t05A5E7A96442F23CE33E24A71CD349372A70E0C3_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_2);
		int32_t L_4;
		L_4 = GenericVirtualFuncInvoker1< int32_t, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mEFCC4D52DD5B822D3561A53591AE11CDB25CDB6F_RuntimeMethod_var, L_2, L_3);
		LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB L_5;
		L_5 = LayerMask_op_Implicit_m01C8996A2CB2085328B9C33539C43139660D8222(L_4, NULL);
		V_0 = L_5;
		// break;
		goto IL_0030;
	}

IL_002a:
	{
		// reader.Skip();
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_6 = ___reader0;
		NullCheck(L_6);
		VirtualActionInvoker0::Invoke(41 /* System.Void ES3Reader::Skip() */, L_6);
	}

IL_0030:
	{
		// while((propertyName = reader.ReadPropertyName()) != null)
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_7 = ___reader0;
		NullCheck(L_7);
		String_t* L_8;
		L_8 = VirtualFuncInvoker0< String_t* >::Invoke(21 /* System.String ES3Reader::ReadPropertyName() */, L_7);
		String_t* L_9 = L_8;
		V_1 = L_9;
		if (L_9)
		{
			goto IL_000a;
		}
	}
	{
		// return instance;
		LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB L_10 = V_0;
		LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB L_11 = L_10;
		RuntimeObject* L_12 = Box(LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB_il2cpp_TypeInfo_var, &L_11);
		return L_12;
	}
}
// System.Object ES3Types.ES3Type_LayerMask::Read<UnityEngine.Vector2>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_LayerMask_Read_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_m87632ECB6F0168F5BE34127F42F5CAC21091B7E5_gshared (ES3Type_LayerMask_t1CE2F5D73EE7EAB2A77FC2D54096DC0CD536CE10* __this, ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mEFCC4D52DD5B822D3561A53591AE11CDB25CDB6F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_int_t05A5E7A96442F23CE33E24A71CD349372A70E0C3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral46F273EF641E07D271D91E0DC24A4392582671F8);
		s_Il2CppMethodInitialized = true;
	}
	LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	{
		// LayerMask instance = new LayerMask();
		il2cpp_codegen_initobj((&V_0), sizeof(LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB));
		goto IL_0030;
	}

IL_000a:
	{
		String_t* L_0 = V_1;
		bool L_1;
		L_1 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_0, _stringLiteral46F273EF641E07D271D91E0DC24A4392582671F8, NULL);
		if (!L_1)
		{
			goto IL_002a;
		}
	}
	{
		// instance = reader.Read<int>(ES3Type_int.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_2 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_3 = ((ES3Type_int_t05A5E7A96442F23CE33E24A71CD349372A70E0C3_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_int_t05A5E7A96442F23CE33E24A71CD349372A70E0C3_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_2);
		int32_t L_4;
		L_4 = GenericVirtualFuncInvoker1< int32_t, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mEFCC4D52DD5B822D3561A53591AE11CDB25CDB6F_RuntimeMethod_var, L_2, L_3);
		LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB L_5;
		L_5 = LayerMask_op_Implicit_m01C8996A2CB2085328B9C33539C43139660D8222(L_4, NULL);
		V_0 = L_5;
		// break;
		goto IL_0030;
	}

IL_002a:
	{
		// reader.Skip();
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_6 = ___reader0;
		NullCheck(L_6);
		VirtualActionInvoker0::Invoke(41 /* System.Void ES3Reader::Skip() */, L_6);
	}

IL_0030:
	{
		// while((propertyName = reader.ReadPropertyName()) != null)
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_7 = ___reader0;
		NullCheck(L_7);
		String_t* L_8;
		L_8 = VirtualFuncInvoker0< String_t* >::Invoke(21 /* System.String ES3Reader::ReadPropertyName() */, L_7);
		String_t* L_9 = L_8;
		V_1 = L_9;
		if (L_9)
		{
			goto IL_000a;
		}
	}
	{
		// return instance;
		LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB L_10 = V_0;
		LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB L_11 = L_10;
		RuntimeObject* L_12 = Box(LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB_il2cpp_TypeInfo_var, &L_11);
		return L_12;
	}
}
// System.Object ES3Types.ES3Type_LayerMask::Read<UnityEngine.Vector3>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_LayerMask_Read_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_m34ED908AEEBE060CE8928858EDBFB322E6CE8283_gshared (ES3Type_LayerMask_t1CE2F5D73EE7EAB2A77FC2D54096DC0CD536CE10* __this, ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mEFCC4D52DD5B822D3561A53591AE11CDB25CDB6F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_int_t05A5E7A96442F23CE33E24A71CD349372A70E0C3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral46F273EF641E07D271D91E0DC24A4392582671F8);
		s_Il2CppMethodInitialized = true;
	}
	LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	{
		// LayerMask instance = new LayerMask();
		il2cpp_codegen_initobj((&V_0), sizeof(LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB));
		goto IL_0030;
	}

IL_000a:
	{
		String_t* L_0 = V_1;
		bool L_1;
		L_1 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_0, _stringLiteral46F273EF641E07D271D91E0DC24A4392582671F8, NULL);
		if (!L_1)
		{
			goto IL_002a;
		}
	}
	{
		// instance = reader.Read<int>(ES3Type_int.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_2 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_3 = ((ES3Type_int_t05A5E7A96442F23CE33E24A71CD349372A70E0C3_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_int_t05A5E7A96442F23CE33E24A71CD349372A70E0C3_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_2);
		int32_t L_4;
		L_4 = GenericVirtualFuncInvoker1< int32_t, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mEFCC4D52DD5B822D3561A53591AE11CDB25CDB6F_RuntimeMethod_var, L_2, L_3);
		LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB L_5;
		L_5 = LayerMask_op_Implicit_m01C8996A2CB2085328B9C33539C43139660D8222(L_4, NULL);
		V_0 = L_5;
		// break;
		goto IL_0030;
	}

IL_002a:
	{
		// reader.Skip();
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_6 = ___reader0;
		NullCheck(L_6);
		VirtualActionInvoker0::Invoke(41 /* System.Void ES3Reader::Skip() */, L_6);
	}

IL_0030:
	{
		// while((propertyName = reader.ReadPropertyName()) != null)
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_7 = ___reader0;
		NullCheck(L_7);
		String_t* L_8;
		L_8 = VirtualFuncInvoker0< String_t* >::Invoke(21 /* System.String ES3Reader::ReadPropertyName() */, L_7);
		String_t* L_9 = L_8;
		V_1 = L_9;
		if (L_9)
		{
			goto IL_000a;
		}
	}
	{
		// return instance;
		LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB L_10 = V_0;
		LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB L_11 = L_10;
		RuntimeObject* L_12 = Box(LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB_il2cpp_TypeInfo_var, &L_11);
		return L_12;
	}
}
// System.Object ES3Types.ES3Type_LayerMask::Read<UnityEngine.Vector4>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_LayerMask_Read_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_mD5A1A79741034BB8266170E5AE23EADAA573D231_gshared (ES3Type_LayerMask_t1CE2F5D73EE7EAB2A77FC2D54096DC0CD536CE10* __this, ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mEFCC4D52DD5B822D3561A53591AE11CDB25CDB6F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_int_t05A5E7A96442F23CE33E24A71CD349372A70E0C3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral46F273EF641E07D271D91E0DC24A4392582671F8);
		s_Il2CppMethodInitialized = true;
	}
	LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	{
		// LayerMask instance = new LayerMask();
		il2cpp_codegen_initobj((&V_0), sizeof(LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB));
		goto IL_0030;
	}

IL_000a:
	{
		String_t* L_0 = V_1;
		bool L_1;
		L_1 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_0, _stringLiteral46F273EF641E07D271D91E0DC24A4392582671F8, NULL);
		if (!L_1)
		{
			goto IL_002a;
		}
	}
	{
		// instance = reader.Read<int>(ES3Type_int.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_2 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_3 = ((ES3Type_int_t05A5E7A96442F23CE33E24A71CD349372A70E0C3_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_int_t05A5E7A96442F23CE33E24A71CD349372A70E0C3_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_2);
		int32_t L_4;
		L_4 = GenericVirtualFuncInvoker1< int32_t, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mEFCC4D52DD5B822D3561A53591AE11CDB25CDB6F_RuntimeMethod_var, L_2, L_3);
		LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB L_5;
		L_5 = LayerMask_op_Implicit_m01C8996A2CB2085328B9C33539C43139660D8222(L_4, NULL);
		V_0 = L_5;
		// break;
		goto IL_0030;
	}

IL_002a:
	{
		// reader.Skip();
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_6 = ___reader0;
		NullCheck(L_6);
		VirtualActionInvoker0::Invoke(41 /* System.Void ES3Reader::Skip() */, L_6);
	}

IL_0030:
	{
		// while((propertyName = reader.ReadPropertyName()) != null)
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_7 = ___reader0;
		NullCheck(L_7);
		String_t* L_8;
		L_8 = VirtualFuncInvoker0< String_t* >::Invoke(21 /* System.String ES3Reader::ReadPropertyName() */, L_7);
		String_t* L_9 = L_8;
		V_1 = L_9;
		if (L_9)
		{
			goto IL_000a;
		}
	}
	{
		// return instance;
		LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB L_10 = V_0;
		LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB L_11 = L_10;
		RuntimeObject* L_12 = Box(LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB_il2cpp_TypeInfo_var, &L_11);
		return L_12;
	}
}
// System.Object ES3Types.ES3Type_LayerMask::Read<UnityEngine.ParticleSystem/MinMaxCurve>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_LayerMask_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_m4D2BB61BB2183D726E0E2D988FC9066D2EA19505_gshared (ES3Type_LayerMask_t1CE2F5D73EE7EAB2A77FC2D54096DC0CD536CE10* __this, ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mEFCC4D52DD5B822D3561A53591AE11CDB25CDB6F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_int_t05A5E7A96442F23CE33E24A71CD349372A70E0C3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral46F273EF641E07D271D91E0DC24A4392582671F8);
		s_Il2CppMethodInitialized = true;
	}
	LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	{
		// LayerMask instance = new LayerMask();
		il2cpp_codegen_initobj((&V_0), sizeof(LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB));
		goto IL_0030;
	}

IL_000a:
	{
		String_t* L_0 = V_1;
		bool L_1;
		L_1 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_0, _stringLiteral46F273EF641E07D271D91E0DC24A4392582671F8, NULL);
		if (!L_1)
		{
			goto IL_002a;
		}
	}
	{
		// instance = reader.Read<int>(ES3Type_int.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_2 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_3 = ((ES3Type_int_t05A5E7A96442F23CE33E24A71CD349372A70E0C3_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_int_t05A5E7A96442F23CE33E24A71CD349372A70E0C3_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_2);
		int32_t L_4;
		L_4 = GenericVirtualFuncInvoker1< int32_t, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mEFCC4D52DD5B822D3561A53591AE11CDB25CDB6F_RuntimeMethod_var, L_2, L_3);
		LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB L_5;
		L_5 = LayerMask_op_Implicit_m01C8996A2CB2085328B9C33539C43139660D8222(L_4, NULL);
		V_0 = L_5;
		// break;
		goto IL_0030;
	}

IL_002a:
	{
		// reader.Skip();
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_6 = ___reader0;
		NullCheck(L_6);
		VirtualActionInvoker0::Invoke(41 /* System.Void ES3Reader::Skip() */, L_6);
	}

IL_0030:
	{
		// while((propertyName = reader.ReadPropertyName()) != null)
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_7 = ___reader0;
		NullCheck(L_7);
		String_t* L_8;
		L_8 = VirtualFuncInvoker0< String_t* >::Invoke(21 /* System.String ES3Reader::ReadPropertyName() */, L_7);
		String_t* L_9 = L_8;
		V_1 = L_9;
		if (L_9)
		{
			goto IL_000a;
		}
	}
	{
		// return instance;
		LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB L_10 = V_0;
		LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB L_11 = L_10;
		RuntimeObject* L_12 = Box(LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB_il2cpp_TypeInfo_var, &L_11);
		return L_12;
	}
}
// System.Object ES3Types.ES3Type_LayerMask::Read<UnityEngine.ParticleSystem/MinMaxGradient>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_LayerMask_Read_TisMinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69_m155054F4A08E2E6F822606A3CE2BD62507B0414E_gshared (ES3Type_LayerMask_t1CE2F5D73EE7EAB2A77FC2D54096DC0CD536CE10* __this, ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mEFCC4D52DD5B822D3561A53591AE11CDB25CDB6F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_int_t05A5E7A96442F23CE33E24A71CD349372A70E0C3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral46F273EF641E07D271D91E0DC24A4392582671F8);
		s_Il2CppMethodInitialized = true;
	}
	LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	{
		// LayerMask instance = new LayerMask();
		il2cpp_codegen_initobj((&V_0), sizeof(LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB));
		goto IL_0030;
	}

IL_000a:
	{
		String_t* L_0 = V_1;
		bool L_1;
		L_1 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_0, _stringLiteral46F273EF641E07D271D91E0DC24A4392582671F8, NULL);
		if (!L_1)
		{
			goto IL_002a;
		}
	}
	{
		// instance = reader.Read<int>(ES3Type_int.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_2 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_3 = ((ES3Type_int_t05A5E7A96442F23CE33E24A71CD349372A70E0C3_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_int_t05A5E7A96442F23CE33E24A71CD349372A70E0C3_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_2);
		int32_t L_4;
		L_4 = GenericVirtualFuncInvoker1< int32_t, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mEFCC4D52DD5B822D3561A53591AE11CDB25CDB6F_RuntimeMethod_var, L_2, L_3);
		LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB L_5;
		L_5 = LayerMask_op_Implicit_m01C8996A2CB2085328B9C33539C43139660D8222(L_4, NULL);
		V_0 = L_5;
		// break;
		goto IL_0030;
	}

IL_002a:
	{
		// reader.Skip();
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_6 = ___reader0;
		NullCheck(L_6);
		VirtualActionInvoker0::Invoke(41 /* System.Void ES3Reader::Skip() */, L_6);
	}

IL_0030:
	{
		// while((propertyName = reader.ReadPropertyName()) != null)
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_7 = ___reader0;
		NullCheck(L_7);
		String_t* L_8;
		L_8 = VirtualFuncInvoker0< String_t* >::Invoke(21 /* System.String ES3Reader::ReadPropertyName() */, L_7);
		String_t* L_9 = L_8;
		V_1 = L_9;
		if (L_9)
		{
			goto IL_000a;
		}
	}
	{
		// return instance;
		LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB L_10 = V_0;
		LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB L_11 = L_10;
		RuntimeObject* L_12 = Box(LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB_il2cpp_TypeInfo_var, &L_11);
		return L_12;
	}
}
// System.Void ES3Types.ES3Type_Light::ReadComponent<System.Object>(ES3Reader,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ES3Type_Light_ReadComponent_TisRuntimeObject_mFE6FC0A3EF603D190CA026A8EA0AAD0D06213FB2_gshared (ES3Type_Light_t0E702BA5766531A8E1C1C7B952BD4B76502DE877* __this, ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* ___reader0, RuntimeObject* ___obj1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mFFB70EE53D8CD0255A4E599780F62A3EB1520E83_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisColor_tD001788D726C3A7F1379BEED0260B9591F440C1F_m74315D96C24FBB27ED6BD82D4A055A7C3F63CF6D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisFlare_t9DCE15756AD8F104B1D9024509B30E46FEF124C8_mB4F3E2360559D1979AA795CC7C0F2E57532A0072_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisHideFlags_tC514182ACEFD3B847988C45D5DB812FF6DB1BF4A_m6257FE72F2C8FA46C877F8F2F91EC20CFD286AEA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mEFCC4D52DD5B822D3561A53591AE11CDB25CDB6F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisLightRenderMode_t0F9C52310E682C737C48976769C0E84BADBD97EB_mBDD4CDCA3ED7478319DF482A0CAA780E057CAC5A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisLightShadowResolution_tA4E88BF65D850F34CC01860E921817FA81ADB268_m3882C8CD0F46FC1A4FCA7AF38FA3565A8EEC8C90_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisLightShadows_t5A3719FE33F8D536E5785AC42B4DF6E6F19666EA_m57920A81A06D5A8914DA1EE64CFA760D8E5F9466_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisLightType_t2D4D43054E7473EECEB54493C0055AE074780234_mC47259F96FD83E1944B16DFAF6CE2D82E71FCF23_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mA86928BC888E342D2C2644535E3399952F5077ED_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisTexture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700_m500403F138ED8AC049B0E413E39DB211B052B06E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_Color_t673DF1A1D899E95FF5E687BDC6EE2D5A8A98D958_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_int_t05A5E7A96442F23CE33E24A71CD349372A70E0C3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0328E4C169674B568EFB792EBE915956BAD34591);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral05CAACB43AE60632DFAEDD8AFD98A0C279C2A0F7);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral40B9968876DFBA959A505AA3EC0E9D9D26C14E45);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral44B679A4FEA54FC0DBB1CECD512FC3FCFFE445F4);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4845015737DC41475709911228278216EE4DC3AF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5828D05DE5A70D7EFBBA4D58EC00343F3E9A6AB8);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5C72E9556FB79F24E1412FC01F0728F363348949);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral629998EE8A4BEB3AD2F947D3D95862F0F22227B2);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral74755E5875E97ED362B5BF8BC9FA5F7F3F45080C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA5C933C3A8FFEEDCA056E433AD8C52F89A0D82D2);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC220E5ABB03B498FA9E8AE08256C71E0C463D910);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC54638A97A3D6853F9D015A20E04AE7EEE96CE3C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC960A835F875EC8DC4DAE61D11CE089EF2BF8416);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD3DAE436D34E1BFB3B81BD5C319049A2E9F9BF3D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD7365A084921FB0EE98C5197247132620727BAD9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDD0F04E0A3F0BA1F904E0E27720F367F4228C69D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEFE5CC21BFBE09498A868CDF341E3DD037864F0B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF3C6C902DBF80139640F6554F0C3392016A8ADF7);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFF1FCA243EC6560E19277456101964385EA36D01);
		s_Il2CppMethodInitialized = true;
	}
	Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	String_t* V_2 = NULL;
	uint32_t V_3 = 0;
	RuntimeObject* V_4 = NULL;
	{
		// var instance = (UnityEngine.Light)obj;
		RuntimeObject* L_0 = ___obj1;
		V_0 = ((Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3*)CastclassSealed((RuntimeObject*)L_0, Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3_il2cpp_TypeInfo_var));
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

FINALLY_049b:
			{// begin finally (depth: 1)
				{
					RuntimeObject* L_4 = V_1;
					V_4 = ((RuntimeObject*)IsInst((RuntimeObject*)L_4, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var));
					RuntimeObject* L_5 = V_4;
					if (!L_5)
					{
						goto IL_04ae;
					}
				}
				{
					RuntimeObject* L_6 = V_4;
					NullCheck(L_6);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_6);
				}

IL_04ae:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_048e_1;
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
				uint32_t L_10;
				L_10 = U3CPrivateImplementationDetailsU3E_ComputeStringHash_m6EA1F233618497AEFF8902A5EDFA24C74E2F2876(L_9, NULL);
				V_3 = L_10;
				uint32_t L_11 = V_3;
				if ((!(((uint32_t)L_11) <= ((uint32_t)((int32_t)1823281443)))))
				{
					goto IL_00d0_1;
				}
			}
			{
				uint32_t L_12 = V_3;
				if ((!(((uint32_t)L_12) <= ((uint32_t)((int32_t)1308376928)))))
				{
					goto IL_0087_1;
				}
			}
			{
				uint32_t L_13 = V_3;
				if ((!(((uint32_t)L_13) <= ((uint32_t)((int32_t)214491439)))))
				{
					goto IL_0061_1;
				}
			}
			{
				uint32_t L_14 = V_3;
				if ((((int32_t)L_14) == ((int32_t)((int32_t)49525662))))
				{
					goto IL_02e1_1;
				}
			}
			{
				uint32_t L_15 = V_3;
				if ((((int32_t)L_15) == ((int32_t)((int32_t)214491439))))
				{
					goto IL_02cc_1;
				}
			}
			{
				goto IL_0488_1;
			}

IL_0061_1:
			{
				uint32_t L_16 = V_3;
				if ((((int32_t)L_16) == ((int32_t)((int32_t)593295258))))
				{
					goto IL_02b7_1;
				}
			}
			{
				uint32_t L_17 = V_3;
				if ((((int32_t)L_17) == ((int32_t)((int32_t)1031692888))))
				{
					goto IL_017c_1;
				}
			}
			{
				uint32_t L_18 = V_3;
				if ((((int32_t)L_18) == ((int32_t)((int32_t)1308376928))))
				{
					goto IL_01fa_1;
				}
			}
			{
				goto IL_0488_1;
			}

IL_0087_1:
			{
				uint32_t L_19 = V_3;
				if ((!(((uint32_t)L_19) <= ((uint32_t)((int32_t)1361572173)))))
				{
					goto IL_00aa_1;
				}
			}
			{
				uint32_t L_20 = V_3;
				if ((((int32_t)L_20) == ((int32_t)((int32_t)1361188592))))
				{
					goto IL_020f_1;
				}
			}
			{
				uint32_t L_21 = V_3;
				if ((((int32_t)L_21) == ((int32_t)((int32_t)1361572173))))
				{
					goto IL_0167_1;
				}
			}
			{
				goto IL_0488_1;
			}

IL_00aa_1:
			{
				uint32_t L_22 = V_3;
				if ((((int32_t)L_22) == ((int32_t)((int32_t)1538595811))))
				{
					goto IL_0239_1;
				}
			}
			{
				uint32_t L_23 = V_3;
				if ((((int32_t)L_23) == ((int32_t)((int32_t)1621849184))))
				{
					goto IL_0263_1;
				}
			}
			{
				uint32_t L_24 = V_3;
				if ((((int32_t)L_24) == ((int32_t)((int32_t)1823281443))))
				{
					goto IL_0224_1;
				}
			}
			{
				goto IL_0488_1;
			}

IL_00d0_1:
			{
				uint32_t L_25 = V_3;
				if ((!(((uint32_t)L_25) <= ((uint32_t)((int32_t)-1848572957)))))
				{
					goto IL_0121_1;
				}
			}
			{
				uint32_t L_26 = V_3;
				if ((!(((uint32_t)L_26) <= ((uint32_t)((int32_t)-2079361660)))))
				{
					goto IL_00fb_1;
				}
			}
			{
				uint32_t L_27 = V_3;
				if ((((int32_t)L_27) == ((int32_t)((int32_t)2007449791))))
				{
					goto IL_028d_1;
				}
			}
			{
				uint32_t L_28 = V_3;
				if ((((int32_t)L_28) == ((int32_t)((int32_t)-2079361660))))
				{
					goto IL_01d0_1;
				}
			}
			{
				goto IL_0488_1;
			}

IL_00fb_1:
			{
				uint32_t L_29 = V_3;
				if ((((int32_t)L_29) == ((int32_t)((int32_t)-2057050870))))
				{
					goto IL_0191_1;
				}
			}
			{
				uint32_t L_30 = V_3;
				if ((((int32_t)L_30) == ((int32_t)((int32_t)-1890496478))))
				{
					goto IL_01a6_1;
				}
			}
			{
				uint32_t L_31 = V_3;
				if ((((int32_t)L_31) == ((int32_t)((int32_t)-1848572957))))
				{
					goto IL_01e5_1;
				}
			}
			{
				goto IL_0488_1;
			}

IL_0121_1:
			{
				uint32_t L_32 = V_3;
				if ((!(((uint32_t)L_32) <= ((uint32_t)((int32_t)-894485674)))))
				{
					goto IL_0141_1;
				}
			}
			{
				uint32_t L_33 = V_3;
				if ((((int32_t)L_33) == ((int32_t)((int32_t)-1769781449))))
				{
					goto IL_02a2_1;
				}
			}
			{
				uint32_t L_34 = V_3;
				if ((((int32_t)L_34) == ((int32_t)((int32_t)-894485674))))
				{
					goto IL_01bb_1;
				}
			}
			{
				goto IL_0488_1;
			}

IL_0141_1:
			{
				uint32_t L_35 = V_3;
				if ((((int32_t)L_35) == ((int32_t)((int32_t)-350400524))))
				{
					goto IL_02f6_1;
				}
			}
			{
				uint32_t L_36 = V_3;
				if ((((int32_t)L_36) == ((int32_t)((int32_t)-266691594))))
				{
					goto IL_0278_1;
				}
			}
			{
				uint32_t L_37 = V_3;
				if ((((int32_t)L_37) == ((int32_t)((int32_t)-86242094))))
				{
					goto IL_024e_1;
				}
			}
			{
				goto IL_0488_1;
			}

IL_0167_1:
			{
				String_t* L_38 = V_2;
				bool L_39;
				L_39 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_38, _stringLiteralF3C6C902DBF80139640F6554F0C3392016A8ADF7, NULL);
				if (L_39)
				{
					goto IL_030b_1;
				}
			}
			{
				goto IL_0488_1;
			}

IL_017c_1:
			{
				String_t* L_40 = V_2;
				bool L_41;
				L_41 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_40, _stringLiteralDD0F04E0A3F0BA1F904E0E27720F367F4228C69D, NULL);
				if (L_41)
				{
					goto IL_031c_1;
				}
			}
			{
				goto IL_0488_1;
			}

IL_0191_1:
			{
				String_t* L_42 = V_2;
				bool L_43;
				L_43 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_42, _stringLiteral40B9968876DFBA959A505AA3EC0E9D9D26C14E45, NULL);
				if (L_43)
				{
					goto IL_0332_1;
				}
			}
			{
				goto IL_0488_1;
			}

IL_01a6_1:
			{
				String_t* L_44 = V_2;
				bool L_45;
				L_45 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_44, _stringLiteral629998EE8A4BEB3AD2F947D3D95862F0F22227B2, NULL);
				if (L_45)
				{
					goto IL_0348_1;
				}
			}
			{
				goto IL_0488_1;
			}

IL_01bb_1:
			{
				String_t* L_46 = V_2;
				bool L_47;
				L_47 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_46, _stringLiteral0328E4C169674B568EFB792EBE915956BAD34591, NULL);
				if (L_47)
				{
					goto IL_035e_1;
				}
			}
			{
				goto IL_0488_1;
			}

IL_01d0_1:
			{
				String_t* L_48 = V_2;
				bool L_49;
				L_49 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_48, _stringLiteralFF1FCA243EC6560E19277456101964385EA36D01, NULL);
				if (L_49)
				{
					goto IL_036f_1;
				}
			}
			{
				goto IL_0488_1;
			}

IL_01e5_1:
			{
				String_t* L_50 = V_2;
				bool L_51;
				L_51 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_50, _stringLiteral74755E5875E97ED362B5BF8BC9FA5F7F3F45080C, NULL);
				if (L_51)
				{
					goto IL_0385_1;
				}
			}
			{
				goto IL_0488_1;
			}

IL_01fa_1:
			{
				String_t* L_52 = V_2;
				bool L_53;
				L_53 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_52, _stringLiteralC960A835F875EC8DC4DAE61D11CE089EF2BF8416, NULL);
				if (L_53)
				{
					goto IL_0396_1;
				}
			}
			{
				goto IL_0488_1;
			}

IL_020f_1:
			{
				String_t* L_54 = V_2;
				bool L_55;
				L_55 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_54, _stringLiteralEFE5CC21BFBE09498A868CDF341E3DD037864F0B, NULL);
				if (L_55)
				{
					goto IL_03ac_1;
				}
			}
			{
				goto IL_0488_1;
			}

IL_0224_1:
			{
				String_t* L_56 = V_2;
				bool L_57;
				L_57 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_56, _stringLiteral5C72E9556FB79F24E1412FC01F0728F363348949, NULL);
				if (L_57)
				{
					goto IL_03c2_1;
				}
			}
			{
				goto IL_0488_1;
			}

IL_0239_1:
			{
				String_t* L_58 = V_2;
				bool L_59;
				L_59 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_58, _stringLiteralD7365A084921FB0EE98C5197247132620727BAD9, NULL);
				if (L_59)
				{
					goto IL_03d8_1;
				}
			}
			{
				goto IL_0488_1;
			}

IL_024e_1:
			{
				String_t* L_60 = V_2;
				bool L_61;
				L_61 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_60, _stringLiteral4845015737DC41475709911228278216EE4DC3AF, NULL);
				if (L_61)
				{
					goto IL_03ee_1;
				}
			}
			{
				goto IL_0488_1;
			}

IL_0263_1:
			{
				String_t* L_62 = V_2;
				bool L_63;
				L_63 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_62, _stringLiteralA5C933C3A8FFEEDCA056E433AD8C52F89A0D82D2, NULL);
				if (L_63)
				{
					goto IL_0404_1;
				}
			}
			{
				goto IL_0488_1;
			}

IL_0278_1:
			{
				String_t* L_64 = V_2;
				bool L_65;
				L_65 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_64, _stringLiteral5828D05DE5A70D7EFBBA4D58EC00343F3E9A6AB8, NULL);
				if (L_65)
				{
					goto IL_0417_1;
				}
			}
			{
				goto IL_0488_1;
			}

IL_028d_1:
			{
				String_t* L_66 = V_2;
				bool L_67;
				L_67 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_66, _stringLiteral44B679A4FEA54FC0DBB1CECD512FC3FCFFE445F4, NULL);
				if (L_67)
				{
					goto IL_042a_1;
				}
			}
			{
				goto IL_0488_1;
			}

IL_02a2_1:
			{
				String_t* L_68 = V_2;
				bool L_69;
				L_69 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_68, _stringLiteralC54638A97A3D6853F9D015A20E04AE7EEE96CE3C, NULL);
				if (L_69)
				{
					goto IL_0438_1;
				}
			}
			{
				goto IL_0488_1;
			}

IL_02b7_1:
			{
				String_t* L_70 = V_2;
				bool L_71;
				L_71 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_70, _stringLiteral05CAACB43AE60632DFAEDD8AFD98A0C279C2A0F7, NULL);
				if (L_71)
				{
					goto IL_0446_1;
				}
			}
			{
				goto IL_0488_1;
			}

IL_02cc_1:
			{
				String_t* L_72 = V_2;
				bool L_73;
				L_73 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_72, _stringLiteralD3DAE436D34E1BFB3B81BD5C319049A2E9F9BF3D, NULL);
				if (L_73)
				{
					goto IL_0454_1;
				}
			}
			{
				goto IL_0488_1;
			}

IL_02e1_1:
			{
				String_t* L_74 = V_2;
				bool L_75;
				L_75 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_74, _stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B, NULL);
				if (L_75)
				{
					goto IL_0467_1;
				}
			}
			{
				goto IL_0488_1;
			}

IL_02f6_1:
			{
				String_t* L_76 = V_2;
				bool L_77;
				L_77 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_76, _stringLiteralC220E5ABB03B498FA9E8AE08256C71E0C463D910, NULL);
				if (L_77)
				{
					goto IL_047a_1;
				}
			}
			{
				goto IL_0488_1;
			}

IL_030b_1:
			{
				// instance.type = reader.Read<UnityEngine.LightType>();
				Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* L_78 = V_0;
				ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_79 = ___reader0;
				NullCheck(L_79);
				int32_t L_80;
				L_80 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisLightType_t2D4D43054E7473EECEB54493C0055AE074780234_mC47259F96FD83E1944B16DFAF6CE2D82E71FCF23_RuntimeMethod_var, L_79);
				NullCheck(L_78);
				Light_set_type_m9DF0E6AC528391B1D35FA06583B9A72EAB686C43(L_78, L_80, NULL);
				// break;
				goto IL_048e_1;
			}

IL_031c_1:
			{
				// instance.color = reader.Read<UnityEngine.Color>(ES3Type_Color.Instance);
				Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* L_81 = V_0;
				ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_82 = ___reader0;
				ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_83 = ((ES3Type_Color_t673DF1A1D899E95FF5E687BDC6EE2D5A8A98D958_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Color_t673DF1A1D899E95FF5E687BDC6EE2D5A8A98D958_il2cpp_TypeInfo_var))->___Instance_12;
				NullCheck(L_82);
				Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_84;
				L_84 = GenericVirtualFuncInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisColor_tD001788D726C3A7F1379BEED0260B9591F440C1F_m74315D96C24FBB27ED6BD82D4A055A7C3F63CF6D_RuntimeMethod_var, L_82, L_83);
				NullCheck(L_81);
				Light_set_color_m242F09E22904E0A20D5B032A0749678B0796A87C(L_81, L_84, NULL);
				// break;
				goto IL_048e_1;
			}

IL_0332_1:
			{
				// instance.intensity = reader.Read<System.Single>(ES3Type_float.Instance);
				Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* L_85 = V_0;
				ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_86 = ___reader0;
				ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_87 = ((ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var))->___Instance_12;
				NullCheck(L_86);
				float L_88;
				L_88 = GenericVirtualFuncInvoker1< float, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mA86928BC888E342D2C2644535E3399952F5077ED_RuntimeMethod_var, L_86, L_87);
				NullCheck(L_85);
				Light_set_intensity_mE4820C7F39F490B92ED5EA0C3AADA7C0775BE854(L_85, L_88, NULL);
				// break;
				goto IL_048e_1;
			}

IL_0348_1:
			{
				// instance.bounceIntensity = reader.Read<System.Single>(ES3Type_float.Instance);
				Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* L_89 = V_0;
				ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_90 = ___reader0;
				ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_91 = ((ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var))->___Instance_12;
				NullCheck(L_90);
				float L_92;
				L_92 = GenericVirtualFuncInvoker1< float, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mA86928BC888E342D2C2644535E3399952F5077ED_RuntimeMethod_var, L_90, L_91);
				NullCheck(L_89);
				Light_set_bounceIntensity_m832ED3103EA600319F6227EDE55E5D6EBD272DB1(L_89, L_92, NULL);
				// break;
				goto IL_048e_1;
			}

IL_035e_1:
			{
				// instance.shadows = reader.Read<UnityEngine.LightShadows>();
				Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* L_93 = V_0;
				ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_94 = ___reader0;
				NullCheck(L_94);
				int32_t L_95;
				L_95 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisLightShadows_t5A3719FE33F8D536E5785AC42B4DF6E6F19666EA_m57920A81A06D5A8914DA1EE64CFA760D8E5F9466_RuntimeMethod_var, L_94);
				NullCheck(L_93);
				Light_set_shadows_mDA4D1D1958387649BD35A79D83F50549898A74CB(L_93, L_95, NULL);
				// break;
				goto IL_048e_1;
			}

IL_036f_1:
			{
				// instance.shadowStrength = reader.Read<System.Single>(ES3Type_float.Instance);
				Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* L_96 = V_0;
				ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_97 = ___reader0;
				ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_98 = ((ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var))->___Instance_12;
				NullCheck(L_97);
				float L_99;
				L_99 = GenericVirtualFuncInvoker1< float, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mA86928BC888E342D2C2644535E3399952F5077ED_RuntimeMethod_var, L_97, L_98);
				NullCheck(L_96);
				Light_set_shadowStrength_mA17F6ABA91CE032E008149D5D53FCD9B00497A4F(L_96, L_99, NULL);
				// break;
				goto IL_048e_1;
			}

IL_0385_1:
			{
				// instance.shadowResolution = reader.Read<UnityEngine.Rendering.LightShadowResolution>();
				Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* L_100 = V_0;
				ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_101 = ___reader0;
				NullCheck(L_101);
				int32_t L_102;
				L_102 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisLightShadowResolution_tA4E88BF65D850F34CC01860E921817FA81ADB268_m3882C8CD0F46FC1A4FCA7AF38FA3565A8EEC8C90_RuntimeMethod_var, L_101);
				NullCheck(L_100);
				Light_set_shadowResolution_mB1ED5718DCCA40E1AD231D145264B454543CBF07(L_100, L_102, NULL);
				// break;
				goto IL_048e_1;
			}

IL_0396_1:
			{
				// instance.shadowCustomResolution = reader.Read<System.Int32>(ES3Type_int.Instance);
				Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* L_103 = V_0;
				ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_104 = ___reader0;
				ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_105 = ((ES3Type_int_t05A5E7A96442F23CE33E24A71CD349372A70E0C3_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_int_t05A5E7A96442F23CE33E24A71CD349372A70E0C3_il2cpp_TypeInfo_var))->___Instance_12;
				NullCheck(L_104);
				int32_t L_106;
				L_106 = GenericVirtualFuncInvoker1< int32_t, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mEFCC4D52DD5B822D3561A53591AE11CDB25CDB6F_RuntimeMethod_var, L_104, L_105);
				NullCheck(L_103);
				Light_set_shadowCustomResolution_mEB39F5DB4F4BEBB2ACC2273E28C651CE578E3502(L_103, L_106, NULL);
				// break;
				goto IL_048e_1;
			}

IL_03ac_1:
			{
				// instance.shadowBias = reader.Read<System.Single>(ES3Type_float.Instance);
				Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* L_107 = V_0;
				ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_108 = ___reader0;
				ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_109 = ((ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var))->___Instance_12;
				NullCheck(L_108);
				float L_110;
				L_110 = GenericVirtualFuncInvoker1< float, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mA86928BC888E342D2C2644535E3399952F5077ED_RuntimeMethod_var, L_108, L_109);
				NullCheck(L_107);
				Light_set_shadowBias_m04C4B35A017357A5C6A26BE7098EC1CE1E1E5420(L_107, L_110, NULL);
				// break;
				goto IL_048e_1;
			}

IL_03c2_1:
			{
				// instance.shadowNormalBias = reader.Read<System.Single>(ES3Type_float.Instance);
				Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* L_111 = V_0;
				ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_112 = ___reader0;
				ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_113 = ((ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var))->___Instance_12;
				NullCheck(L_112);
				float L_114;
				L_114 = GenericVirtualFuncInvoker1< float, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mA86928BC888E342D2C2644535E3399952F5077ED_RuntimeMethod_var, L_112, L_113);
				NullCheck(L_111);
				Light_set_shadowNormalBias_m855EC8B5B849E8EA60A1F2BCE09357CE4B0D755A(L_111, L_114, NULL);
				// break;
				goto IL_048e_1;
			}

IL_03d8_1:
			{
				// instance.shadowNearPlane = reader.Read<System.Single>(ES3Type_float.Instance);
				Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* L_115 = V_0;
				ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_116 = ___reader0;
				ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_117 = ((ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var))->___Instance_12;
				NullCheck(L_116);
				float L_118;
				L_118 = GenericVirtualFuncInvoker1< float, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mA86928BC888E342D2C2644535E3399952F5077ED_RuntimeMethod_var, L_116, L_117);
				NullCheck(L_115);
				Light_set_shadowNearPlane_m9105DBBC92CBB4F45401EDEA50B1DF14C9C3F01C(L_115, L_118, NULL);
				// break;
				goto IL_048e_1;
			}

IL_03ee_1:
			{
				// instance.range = reader.Read<System.Single>(ES3Type_float.Instance);
				Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* L_119 = V_0;
				ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_120 = ___reader0;
				ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_121 = ((ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var))->___Instance_12;
				NullCheck(L_120);
				float L_122;
				L_122 = GenericVirtualFuncInvoker1< float, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mA86928BC888E342D2C2644535E3399952F5077ED_RuntimeMethod_var, L_120, L_121);
				NullCheck(L_119);
				Light_set_range_mBAF8E5380ECAD89A2BF43B7DA9C2DE8FA0C2FDEF(L_119, L_122, NULL);
				// break;
				goto IL_048e_1;
			}

IL_0404_1:
			{
				// instance.spotAngle = reader.Read<System.Single>(ES3Type_float.Instance);
				Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* L_123 = V_0;
				ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_124 = ___reader0;
				ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_125 = ((ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var))->___Instance_12;
				NullCheck(L_124);
				float L_126;
				L_126 = GenericVirtualFuncInvoker1< float, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mA86928BC888E342D2C2644535E3399952F5077ED_RuntimeMethod_var, L_124, L_125);
				NullCheck(L_123);
				Light_set_spotAngle_mB27C0667B5C07771750AF66E36F2CA02D272C61B(L_123, L_126, NULL);
				// break;
				goto IL_048e_1;
			}

IL_0417_1:
			{
				// instance.cookieSize = reader.Read<System.Single>(ES3Type_float.Instance);
				Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* L_127 = V_0;
				ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_128 = ___reader0;
				ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_129 = ((ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var))->___Instance_12;
				NullCheck(L_128);
				float L_130;
				L_130 = GenericVirtualFuncInvoker1< float, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mA86928BC888E342D2C2644535E3399952F5077ED_RuntimeMethod_var, L_128, L_129);
				NullCheck(L_127);
				Light_set_cookieSize_m40AC9D2279340DDB66290B9C76203D6061593DD4(L_127, L_130, NULL);
				// break;
				goto IL_048e_1;
			}

IL_042a_1:
			{
				// instance.cookie = reader.Read<UnityEngine.Texture>();
				Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* L_131 = V_0;
				ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_132 = ___reader0;
				NullCheck(L_132);
				Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* L_133;
				L_133 = GenericVirtualFuncInvoker0< Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* >::Invoke(ES3Reader_Read_TisTexture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700_m500403F138ED8AC049B0E413E39DB211B052B06E_RuntimeMethod_var, L_132);
				NullCheck(L_131);
				Light_set_cookie_m42EC6CBDB1149EA8D49E36D21FDA0AD220C2C6CD(L_131, L_133, NULL);
				// break;
				goto IL_048e_1;
			}

IL_0438_1:
			{
				// instance.flare = reader.Read<UnityEngine.Flare>();
				Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* L_134 = V_0;
				ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_135 = ___reader0;
				NullCheck(L_135);
				Flare_t9DCE15756AD8F104B1D9024509B30E46FEF124C8* L_136;
				L_136 = GenericVirtualFuncInvoker0< Flare_t9DCE15756AD8F104B1D9024509B30E46FEF124C8* >::Invoke(ES3Reader_Read_TisFlare_t9DCE15756AD8F104B1D9024509B30E46FEF124C8_mB4F3E2360559D1979AA795CC7C0F2E57532A0072_RuntimeMethod_var, L_135);
				NullCheck(L_134);
				Light_set_flare_m751C28EF5BA14643F57ECA60924D1C344F00385C(L_134, L_136, NULL);
				// break;
				goto IL_048e_1;
			}

IL_0446_1:
			{
				// instance.renderMode = reader.Read<UnityEngine.LightRenderMode>();
				Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* L_137 = V_0;
				ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_138 = ___reader0;
				NullCheck(L_138);
				int32_t L_139;
				L_139 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisLightRenderMode_t0F9C52310E682C737C48976769C0E84BADBD97EB_mBDD4CDCA3ED7478319DF482A0CAA780E057CAC5A_RuntimeMethod_var, L_138);
				NullCheck(L_137);
				Light_set_renderMode_m31F714D8EAD8B90E9E38E3864403CD9379D9DE58(L_137, L_139, NULL);
				// break;
				goto IL_048e_1;
			}

IL_0454_1:
			{
				// instance.cullingMask = reader.Read<System.Int32>(ES3Type_int.Instance);
				Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* L_140 = V_0;
				ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_141 = ___reader0;
				ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_142 = ((ES3Type_int_t05A5E7A96442F23CE33E24A71CD349372A70E0C3_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_int_t05A5E7A96442F23CE33E24A71CD349372A70E0C3_il2cpp_TypeInfo_var))->___Instance_12;
				NullCheck(L_141);
				int32_t L_143;
				L_143 = GenericVirtualFuncInvoker1< int32_t, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mEFCC4D52DD5B822D3561A53591AE11CDB25CDB6F_RuntimeMethod_var, L_141, L_142);
				NullCheck(L_140);
				Light_set_cullingMask_mC714832A1E2B73C72C188F9F44B50C449831C4B1(L_140, L_143, NULL);
				// break;
				goto IL_048e_1;
			}

IL_0467_1:
			{
				// instance.enabled = reader.Read<System.Boolean>(ES3Type_bool.Instance);
				Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* L_144 = V_0;
				ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_145 = ___reader0;
				ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_146 = ((ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_il2cpp_TypeInfo_var))->___Instance_12;
				NullCheck(L_145);
				bool L_147;
				L_147 = GenericVirtualFuncInvoker1< bool, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mFFB70EE53D8CD0255A4E599780F62A3EB1520E83_RuntimeMethod_var, L_145, L_146);
				NullCheck((Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA*)L_144);
				Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A((Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA*)L_144, L_147, NULL);
				// break;
				goto IL_048e_1;
			}

IL_047a_1:
			{
				// instance.hideFlags = reader.Read<UnityEngine.HideFlags>();
				Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* L_148 = V_0;
				ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_149 = ___reader0;
				NullCheck(L_149);
				int32_t L_150;
				L_150 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisHideFlags_tC514182ACEFD3B847988C45D5DB812FF6DB1BF4A_m6257FE72F2C8FA46C877F8F2F91EC20CFD286AEA_RuntimeMethod_var, L_149);
				NullCheck((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)L_148);
				Object_set_hideFlags_mACB8BFC903FB3B01BBD427753E791BF28B5E33D4((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)L_148, L_150, NULL);
				// break;
				goto IL_048e_1;
			}

IL_0488_1:
			{
				// reader.Skip();
				ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_151 = ___reader0;
				NullCheck(L_151);
				VirtualActionInvoker0::Invoke(41 /* System.Void ES3Reader::Skip() */, L_151);
			}

IL_048e_1:
			{
				// foreach(string propertyName in reader.Properties)
				RuntimeObject* L_152 = V_1;
				NullCheck(L_152);
				bool L_153;
				L_153 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_152);
				if (L_153)
				{
					goto IL_0018_1;
				}
			}
			{
				goto IL_04af;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_04af:
	{
		// }
		return;
	}
}
// System.Object ES3Types.ES3Type_LightsModule::Read<System.Boolean>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_LightsModule_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m9C48D2C4F102FFE38EE4C9C89B91AD51BBD8BABA_gshared (ES3Type_LightsModule_t37A9192D3FFC77124809D0623E14839D7E0C86A6* __this, ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// var instance = new UnityEngine.ParticleSystem.LightsModule();
		il2cpp_codegen_initobj((&V_0), sizeof(LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E));
		// ReadInto<T>(reader, instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_0 = ___reader0;
		LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E L_1 = V_0;
		LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E L_2 = L_1;
		RuntimeObject* L_3 = Box(LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E_il2cpp_TypeInfo_var, &L_2);
		NullCheck((ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE*)__this);
		GenericVirtualActionInvoker2< ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518*, RuntimeObject* >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 0), (ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE*)__this, L_0, L_3);
		// return instance;
		LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E L_4 = V_0;
		LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E L_5 = L_4;
		RuntimeObject* L_6 = Box(LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E_il2cpp_TypeInfo_var, &L_5);
		return L_6;
	}
}
// System.Object ES3Types.ES3Type_LightsModule::Read<UnityEngine.Bounds>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_LightsModule_Read_TisBounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3_mB0E61759CC760FF31063055DDA1878CDD8BC263A_gshared (ES3Type_LightsModule_t37A9192D3FFC77124809D0623E14839D7E0C86A6* __this, ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// var instance = new UnityEngine.ParticleSystem.LightsModule();
		il2cpp_codegen_initobj((&V_0), sizeof(LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E));
		// ReadInto<T>(reader, instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_0 = ___reader0;
		LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E L_1 = V_0;
		LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E L_2 = L_1;
		RuntimeObject* L_3 = Box(LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E_il2cpp_TypeInfo_var, &L_2);
		NullCheck((ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE*)__this);
		GenericVirtualActionInvoker2< ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518*, RuntimeObject* >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 0), (ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE*)__this, L_0, L_3);
		// return instance;
		LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E L_4 = V_0;
		LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E L_5 = L_4;
		RuntimeObject* L_6 = Box(LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E_il2cpp_TypeInfo_var, &L_5);
		return L_6;
	}
}
// System.Object ES3Types.ES3Type_LightsModule::Read<System.Byte>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_LightsModule_Read_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mC1A4503EDF8F00C23D18E43734D685950D7282D9_gshared (ES3Type_LightsModule_t37A9192D3FFC77124809D0623E14839D7E0C86A6* __this, ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// var instance = new UnityEngine.ParticleSystem.LightsModule();
		il2cpp_codegen_initobj((&V_0), sizeof(LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E));
		// ReadInto<T>(reader, instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_0 = ___reader0;
		LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E L_1 = V_0;
		LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E L_2 = L_1;
		RuntimeObject* L_3 = Box(LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E_il2cpp_TypeInfo_var, &L_2);
		NullCheck((ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE*)__this);
		GenericVirtualActionInvoker2< ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518*, RuntimeObject* >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 0), (ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE*)__this, L_0, L_3);
		// return instance;
		LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E L_4 = V_0;
		LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E L_5 = L_4;
		RuntimeObject* L_6 = Box(LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E_il2cpp_TypeInfo_var, &L_5);
		return L_6;
	}
}
// System.Object ES3Types.ES3Type_LightsModule::Read<UnityEngine.Color>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_LightsModule_Read_TisColor_tD001788D726C3A7F1379BEED0260B9591F440C1F_mA8F499C17C74BA6902D14B38270996786523A384_gshared (ES3Type_LightsModule_t37A9192D3FFC77124809D0623E14839D7E0C86A6* __this, ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// var instance = new UnityEngine.ParticleSystem.LightsModule();
		il2cpp_codegen_initobj((&V_0), sizeof(LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E));
		// ReadInto<T>(reader, instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_0 = ___reader0;
		LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E L_1 = V_0;
		LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E L_2 = L_1;
		RuntimeObject* L_3 = Box(LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E_il2cpp_TypeInfo_var, &L_2);
		NullCheck((ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE*)__this);
		GenericVirtualActionInvoker2< ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518*, RuntimeObject* >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 0), (ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE*)__this, L_0, L_3);
		// return instance;
		LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E L_4 = V_0;
		LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E L_5 = L_4;
		RuntimeObject* L_6 = Box(LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E_il2cpp_TypeInfo_var, &L_5);
		return L_6;
	}
}
// System.Object ES3Types.ES3Type_LightsModule::Read<System.Int32>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_LightsModule_Read_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mCD2D613D80313F49AFDEA1AA6AAD6BD71221685C_gshared (ES3Type_LightsModule_t37A9192D3FFC77124809D0623E14839D7E0C86A6* __this, ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// var instance = new UnityEngine.ParticleSystem.LightsModule();
		il2cpp_codegen_initobj((&V_0), sizeof(LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E));
		// ReadInto<T>(reader, instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_0 = ___reader0;
		LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E L_1 = V_0;
		LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E L_2 = L_1;
		RuntimeObject* L_3 = Box(LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E_il2cpp_TypeInfo_var, &L_2);
		NullCheck((ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE*)__this);
		GenericVirtualActionInvoker2< ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518*, RuntimeObject* >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 0), (ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE*)__this, L_0, L_3);
		// return instance;
		LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E L_4 = V_0;
		LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E L_5 = L_4;
		RuntimeObject* L_6 = Box(LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E_il2cpp_TypeInfo_var, &L_5);
		return L_6;
	}
}
// System.Object ES3Types.ES3Type_LightsModule::Read<System.Int32Enum>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_LightsModule_Read_TisInt32Enum_tCBAC8BA2BFF3A845FA599F303093BBBA374B6F0C_m516FB277BDC3E75482470E10402911B22D757027_gshared (ES3Type_LightsModule_t37A9192D3FFC77124809D0623E14839D7E0C86A6* __this, ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// var instance = new UnityEngine.ParticleSystem.LightsModule();
		il2cpp_codegen_initobj((&V_0), sizeof(LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E));
		// ReadInto<T>(reader, instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_0 = ___reader0;
		LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E L_1 = V_0;
		LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E L_2 = L_1;
		RuntimeObject* L_3 = Box(LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E_il2cpp_TypeInfo_var, &L_2);
		NullCheck((ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE*)__this);
		GenericVirtualActionInvoker2< ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518*, RuntimeObject* >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 0), (ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE*)__this, L_0, L_3);
		// return instance;
		LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E L_4 = V_0;
		LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E L_5 = L_4;
		RuntimeObject* L_6 = Box(LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E_il2cpp_TypeInfo_var, &L_5);
		return L_6;
	}
}
// System.Object ES3Types.ES3Type_LightsModule::Read<System.Int64>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_LightsModule_Read_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_mBED1B99FE7AB3DA8F0DBF94549FC06DCD734963D_gshared (ES3Type_LightsModule_t37A9192D3FFC77124809D0623E14839D7E0C86A6* __this, ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// var instance = new UnityEngine.ParticleSystem.LightsModule();
		il2cpp_codegen_initobj((&V_0), sizeof(LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E));
		// ReadInto<T>(reader, instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_0 = ___reader0;
		LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E L_1 = V_0;
		LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E L_2 = L_1;
		RuntimeObject* L_3 = Box(LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E_il2cpp_TypeInfo_var, &L_2);
		NullCheck((ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE*)__this);
		GenericVirtualActionInvoker2< ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518*, RuntimeObject* >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 0), (ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE*)__this, L_0, L_3);
		// return instance;
		LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E L_4 = V_0;
		LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E L_5 = L_4;
		RuntimeObject* L_6 = Box(LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E_il2cpp_TypeInfo_var, &L_5);
		return L_6;
	}
}
// System.Object ES3Types.ES3Type_LightsModule::Read<UnityEngine.LayerMask>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_LightsModule_Read_TisLayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB_m26BFF31EFAF75154A31D91C6B4BA137C5330CB4A_gshared (ES3Type_LightsModule_t37A9192D3FFC77124809D0623E14839D7E0C86A6* __this, ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// var instance = new UnityEngine.ParticleSystem.LightsModule();
		il2cpp_codegen_initobj((&V_0), sizeof(LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E));
		// ReadInto<T>(reader, instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_0 = ___reader0;
		LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E L_1 = V_0;
		LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E L_2 = L_1;
		RuntimeObject* L_3 = Box(LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E_il2cpp_TypeInfo_var, &L_2);
		NullCheck((ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE*)__this);
		GenericVirtualActionInvoker2< ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518*, RuntimeObject* >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 0), (ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE*)__this, L_0, L_3);
		// return instance;
		LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E L_4 = V_0;
		LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E L_5 = L_4;
		RuntimeObject* L_6 = Box(LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E_il2cpp_TypeInfo_var, &L_5);
		return L_6;
	}
}
// System.Object ES3Types.ES3Type_LightsModule::Read<UnityEngine.Matrix4x4>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_LightsModule_Read_TisMatrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6_m6AD7188B2784D2B1884F26ECC087D079409CA71A_gshared (ES3Type_LightsModule_t37A9192D3FFC77124809D0623E14839D7E0C86A6* __this, ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// var instance = new UnityEngine.ParticleSystem.LightsModule();
		il2cpp_codegen_initobj((&V_0), sizeof(LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E));
		// ReadInto<T>(reader, instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_0 = ___reader0;
		LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E L_1 = V_0;
		LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E L_2 = L_1;
		RuntimeObject* L_3 = Box(LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E_il2cpp_TypeInfo_var, &L_2);
		NullCheck((ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE*)__this);
		GenericVirtualActionInvoker2< ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518*, RuntimeObject* >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 0), (ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE*)__this, L_0, L_3);
		// return instance;
		LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E L_4 = V_0;
		LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E L_5 = L_4;
		RuntimeObject* L_6 = Box(LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E_il2cpp_TypeInfo_var, &L_5);
		return L_6;
	}
}
// System.Object ES3Types.ES3Type_LightsModule::Read<System.Object>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_LightsModule_Read_TisRuntimeObject_m63BBAFDE34ADEE11BD3CBF3CC5305E64996A124B_gshared (ES3Type_LightsModule_t37A9192D3FFC77124809D0623E14839D7E0C86A6* __this, ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// var instance = new UnityEngine.ParticleSystem.LightsModule();
		il2cpp_codegen_initobj((&V_0), sizeof(LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E));
		// ReadInto<T>(reader, instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_0 = ___reader0;
		LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E L_1 = V_0;
		LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E L_2 = L_1;
		RuntimeObject* L_3 = Box(LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E_il2cpp_TypeInfo_var, &L_2);
		NullCheck((ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE*)__this);
		GenericVirtualActionInvoker2< ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518*, RuntimeObject* >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 0), (ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE*)__this, L_0, L_3);
		// return instance;
		LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E L_4 = V_0;
		LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E L_5 = L_4;
		RuntimeObject* L_6 = Box(LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E_il2cpp_TypeInfo_var, &L_5);
		return L_6;
	}
}
// System.Object ES3Types.ES3Type_LightsModule::Read<UnityEngine.Quaternion>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_LightsModule_Read_TisQuaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_mA3CD180E27B2986F60F456FC4B6FA7F0C5D5C69F_gshared (ES3Type_LightsModule_t37A9192D3FFC77124809D0623E14839D7E0C86A6* __this, ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// var instance = new UnityEngine.ParticleSystem.LightsModule();
		il2cpp_codegen_initobj((&V_0), sizeof(LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E));
		// ReadInto<T>(reader, instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_0 = ___reader0;
		LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E L_1 = V_0;
		LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E L_2 = L_1;
		RuntimeObject* L_3 = Box(LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E_il2cpp_TypeInfo_var, &L_2);
		NullCheck((ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE*)__this);
		GenericVirtualActionInvoker2< ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518*, RuntimeObject* >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 0), (ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE*)__this, L_0, L_3);
		// return instance;
		LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E L_4 = V_0;
		LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E L_5 = L_4;
		RuntimeObject* L_6 = Box(LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E_il2cpp_TypeInfo_var, &L_5);
		return L_6;
	}
}
// System.Object ES3Types.ES3Type_LightsModule::Read<UnityEngine.Rect>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_LightsModule_Read_TisRect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D_m395EDD58592510EA43E45D6245889444656784D6_gshared (ES3Type_LightsModule_t37A9192D3FFC77124809D0623E14839D7E0C86A6* __this, ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// var instance = new UnityEngine.ParticleSystem.LightsModule();
		il2cpp_codegen_initobj((&V_0), sizeof(LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E));
		// ReadInto<T>(reader, instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_0 = ___reader0;
		LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E L_1 = V_0;
		LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E L_2 = L_1;
		RuntimeObject* L_3 = Box(LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E_il2cpp_TypeInfo_var, &L_2);
		NullCheck((ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE*)__this);
		GenericVirtualActionInvoker2< ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518*, RuntimeObject* >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 0), (ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE*)__this, L_0, L_3);
		// return instance;
		LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E L_4 = V_0;
		LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E L_5 = L_4;
		RuntimeObject* L_6 = Box(LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E_il2cpp_TypeInfo_var, &L_5);
		return L_6;
	}
}
// System.Object ES3Types.ES3Type_LightsModule::Read<UnityEngine.RenderTextureDescriptor>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_LightsModule_Read_TisRenderTextureDescriptor_t69845881CE6437E4E61F92074F2F84079F23FA46_m719F0A4D75C87D0FA50BF65E86C02D673C88CFA5_gshared (ES3Type_LightsModule_t37A9192D3FFC77124809D0623E14839D7E0C86A6* __this, ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// var instance = new UnityEngine.ParticleSystem.LightsModule();
		il2cpp_codegen_initobj((&V_0), sizeof(LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E));
		// ReadInto<T>(reader, instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_0 = ___reader0;
		LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E L_1 = V_0;
		LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E L_2 = L_1;
		RuntimeObject* L_3 = Box(LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E_il2cpp_TypeInfo_var, &L_2);
		NullCheck((ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE*)__this);
		GenericVirtualActionInvoker2< ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518*, RuntimeObject* >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 0), (ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE*)__this, L_0, L_3);
		// return instance;
		LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E L_4 = V_0;
		LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E L_5 = L_4;
		RuntimeObject* L_6 = Box(LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E_il2cpp_TypeInfo_var, &L_5);
		return L_6;
	}
}
// System.Object ES3Types.ES3Type_LightsModule::Read<System.Single>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_LightsModule_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mBD37839966B6A0BF6AE79E25F405763AEA57E8C4_gshared (ES3Type_LightsModule_t37A9192D3FFC77124809D0623E14839D7E0C86A6* __this, ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// var instance = new UnityEngine.ParticleSystem.LightsModule();
		il2cpp_codegen_initobj((&V_0), sizeof(LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E));
		// ReadInto<T>(reader, instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_0 = ___reader0;
		LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E L_1 = V_0;
		LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E L_2 = L_1;
		RuntimeObject* L_3 = Box(LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E_il2cpp_TypeInfo_var, &L_2);
		NullCheck((ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE*)__this);
		GenericVirtualActionInvoker2< ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518*, RuntimeObject* >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 0), (ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE*)__this, L_0, L_3);
		// return instance;
		LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E L_4 = V_0;
		LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E L_5 = L_4;
		RuntimeObject* L_6 = Box(LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E_il2cpp_TypeInfo_var, &L_5);
		return L_6;
	}
}
// System.Object ES3Types.ES3Type_LightsModule::Read<UnityEngine.Vector2>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_LightsModule_Read_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_mA7F781DB0E6C23BA48847FE53B81660CE865FAEC_gshared (ES3Type_LightsModule_t37A9192D3FFC77124809D0623E14839D7E0C86A6* __this, ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// var instance = new UnityEngine.ParticleSystem.LightsModule();
		il2cpp_codegen_initobj((&V_0), sizeof(LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E));
		// ReadInto<T>(reader, instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_0 = ___reader0;
		LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E L_1 = V_0;
		LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E L_2 = L_1;
		RuntimeObject* L_3 = Box(LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E_il2cpp_TypeInfo_var, &L_2);
		NullCheck((ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE*)__this);
		GenericVirtualActionInvoker2< ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518*, RuntimeObject* >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 0), (ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE*)__this, L_0, L_3);
		// return instance;
		LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E L_4 = V_0;
		LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E L_5 = L_4;
		RuntimeObject* L_6 = Box(LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E_il2cpp_TypeInfo_var, &L_5);
		return L_6;
	}
}
// System.Object ES3Types.ES3Type_LightsModule::Read<UnityEngine.Vector3>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_LightsModule_Read_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_m29AA9CE4C15589A2A9D894F346DD2B023C7C4DD0_gshared (ES3Type_LightsModule_t37A9192D3FFC77124809D0623E14839D7E0C86A6* __this, ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// var instance = new UnityEngine.ParticleSystem.LightsModule();
		il2cpp_codegen_initobj((&V_0), sizeof(LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E));
		// ReadInto<T>(reader, instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_0 = ___reader0;
		LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E L_1 = V_0;
		LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E L_2 = L_1;
		RuntimeObject* L_3 = Box(LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E_il2cpp_TypeInfo_var, &L_2);
		NullCheck((ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE*)__this);
		GenericVirtualActionInvoker2< ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518*, RuntimeObject* >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 0), (ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE*)__this, L_0, L_3);
		// return instance;
		LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E L_4 = V_0;
		LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E L_5 = L_4;
		RuntimeObject* L_6 = Box(LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E_il2cpp_TypeInfo_var, &L_5);
		return L_6;
	}
}
// System.Object ES3Types.ES3Type_LightsModule::Read<UnityEngine.Vector4>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_LightsModule_Read_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_m8E15E3DF2F9EAC3A1C7FB82385105695226A12CC_gshared (ES3Type_LightsModule_t37A9192D3FFC77124809D0623E14839D7E0C86A6* __this, ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// var instance = new UnityEngine.ParticleSystem.LightsModule();
		il2cpp_codegen_initobj((&V_0), sizeof(LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E));
		// ReadInto<T>(reader, instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_0 = ___reader0;
		LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E L_1 = V_0;
		LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E L_2 = L_1;
		RuntimeObject* L_3 = Box(LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E_il2cpp_TypeInfo_var, &L_2);
		NullCheck((ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE*)__this);
		GenericVirtualActionInvoker2< ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518*, RuntimeObject* >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 0), (ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE*)__this, L_0, L_3);
		// return instance;
		LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E L_4 = V_0;
		LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E L_5 = L_4;
		RuntimeObject* L_6 = Box(LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E_il2cpp_TypeInfo_var, &L_5);
		return L_6;
	}
}
// System.Object ES3Types.ES3Type_LightsModule::Read<UnityEngine.ParticleSystem/MinMaxCurve>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_LightsModule_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_m05F2D49D68DD69594C76785F3C866C42582573E0_gshared (ES3Type_LightsModule_t37A9192D3FFC77124809D0623E14839D7E0C86A6* __this, ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// var instance = new UnityEngine.ParticleSystem.LightsModule();
		il2cpp_codegen_initobj((&V_0), sizeof(LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E));
		// ReadInto<T>(reader, instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_0 = ___reader0;
		LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E L_1 = V_0;
		LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E L_2 = L_1;
		RuntimeObject* L_3 = Box(LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E_il2cpp_TypeInfo_var, &L_2);
		NullCheck((ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE*)__this);
		GenericVirtualActionInvoker2< ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518*, RuntimeObject* >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 0), (ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE*)__this, L_0, L_3);
		// return instance;
		LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E L_4 = V_0;
		LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E L_5 = L_4;
		RuntimeObject* L_6 = Box(LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E_il2cpp_TypeInfo_var, &L_5);
		return L_6;
	}
}
// System.Object ES3Types.ES3Type_LightsModule::Read<UnityEngine.ParticleSystem/MinMaxGradient>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_LightsModule_Read_TisMinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69_m2C2298923F7F8623633A6C265B9DAB77D6D0C9CF_gshared (ES3Type_LightsModule_t37A9192D3FFC77124809D0623E14839D7E0C86A6* __this, ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// var instance = new UnityEngine.ParticleSystem.LightsModule();
		il2cpp_codegen_initobj((&V_0), sizeof(LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E));
		// ReadInto<T>(reader, instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_0 = ___reader0;
		LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E L_1 = V_0;
		LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E L_2 = L_1;
		RuntimeObject* L_3 = Box(LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E_il2cpp_TypeInfo_var, &L_2);
		NullCheck((ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE*)__this);
		GenericVirtualActionInvoker2< ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518*, RuntimeObject* >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 0), (ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE*)__this, L_0, L_3);
		// return instance;
		LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E L_4 = V_0;
		LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E L_5 = L_4;
		RuntimeObject* L_6 = Box(LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E_il2cpp_TypeInfo_var, &L_5);
		return L_6;
	}
}
// System.Void ES3Types.ES3Type_LightsModule::ReadInto<System.Object>(ES3Reader,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ES3Type_LightsModule_ReadInto_TisRuntimeObject_m44328749B3696A48E56034955499FD66C5CD4651_gshared (ES3Type_LightsModule_t37A9192D3FFC77124809D0623E14839D7E0C86A6* __this, ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* ___reader0, RuntimeObject* ___obj1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mFFB70EE53D8CD0255A4E599780F62A3EB1520E83_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mEFCC4D52DD5B822D3561A53591AE11CDB25CDB6F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisLight_t1E68479B7782AF2050FAA02A5DC612FD034F18F3_mB032FAFBAB777BB6EC57AFAD4E183FCA57151654_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_m9D6B4042B923127DEA4A2CAA3E35EED37D75B3D0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mA86928BC888E342D2C2644535E3399952F5077ED_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_Light_t0E702BA5766531A8E1C1C7B952BD4B76502DE877_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_MinMaxCurve_t1C147718750ACBECE5D2B7F545D2A434A3C5409B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_int_t05A5E7A96442F23CE33E24A71CD349372A70E0C3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral072FD16FCD5FDEE6DF9288BBCA5AFBFA16B04581);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1057AAF5EE3CDF423CF6BCC588476E559687CDE6);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2AC7F98E5022908E09788532C95599452352D34A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral40B9968876DFBA959A505AA3EC0E9D9D26C14E45);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4845015737DC41475709911228278216EE4DC3AF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral509D57D2D3AC4C6FAE8D21D19FF2B9D787C81954);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral52D353FB908B8123B513952855EB88F081A1A06A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral60126327537B7B8E6EE33C43FE0C5CA8BCC3A06A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral77682CE598EDE490DCDE276E250422EA9BEA739F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral93C208E83E88E77020CE91612101CB879A8EE914);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA2DB56FF90ECEEEC49C5E8C66FCD72DF2771D010);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B);
		s_Il2CppMethodInitialized = true;
	}
	LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	uint32_t V_2 = 0;
	{
		// var instance = (UnityEngine.ParticleSystem.LightsModule)obj;
		RuntimeObject* L_0 = ___obj1;
		V_0 = ((*(LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E*)((LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E*)(LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E*)UnBox(L_0, LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E_il2cpp_TypeInfo_var))));
		goto IL_02bb;
	}

IL_000c:
	{
		String_t* L_1 = V_1;
		uint32_t L_2;
		L_2 = U3CPrivateImplementationDetailsU3E_ComputeStringHash_m6EA1F233618497AEFF8902A5EDFA24C74E2F2876(L_1, NULL);
		V_2 = L_2;
		uint32_t L_3 = V_2;
		if ((!(((uint32_t)L_3) <= ((uint32_t)((int32_t)-1604400485)))))
		{
			goto IL_006f;
		}
	}
	{
		uint32_t L_4 = V_2;
		if ((!(((uint32_t)L_4) <= ((uint32_t)((int32_t)680602789)))))
		{
			goto IL_0049;
		}
	}
	{
		uint32_t L_5 = V_2;
		if ((((int32_t)L_5) == ((int32_t)((int32_t)49525662))))
		{
			goto IL_00ba;
		}
	}
	{
		uint32_t L_6 = V_2;
		if ((((int32_t)L_6) == ((int32_t)((int32_t)258704408))))
		{
			goto IL_0138;
		}
	}
	{
		uint32_t L_7 = V_2;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)680602789))))
		{
			goto IL_00e4;
		}
	}
	{
		goto IL_02b5;
	}

IL_0049:
	{
		uint32_t L_8 = V_2;
		if ((((int32_t)L_8) == ((int32_t)((int32_t)2057398597))))
		{
			goto IL_0162;
		}
	}
	{
		uint32_t L_9 = V_2;
		if ((((int32_t)L_9) == ((int32_t)((int32_t)-2057050870))))
		{
			goto IL_0177;
		}
	}
	{
		uint32_t L_10 = V_2;
		if ((((int32_t)L_10) == ((int32_t)((int32_t)-1604400485))))
		{
			goto IL_0123;
		}
	}
	{
		goto IL_02b5;
	}

IL_006f:
	{
		uint32_t L_11 = V_2;
		if ((!(((uint32_t)L_11) <= ((uint32_t)((int32_t)-667110935)))))
		{
			goto IL_0097;
		}
	}
	{
		uint32_t L_12 = V_2;
		if ((((int32_t)L_12) == ((int32_t)((int32_t)-1055777148))))
		{
			goto IL_00cf;
		}
	}
	{
		uint32_t L_13 = V_2;
		if ((((int32_t)L_13) == ((int32_t)((int32_t)-796669776))))
		{
			goto IL_01a1;
		}
	}
	{
		uint32_t L_14 = V_2;
		if ((((int32_t)L_14) == ((int32_t)((int32_t)-667110935))))
		{
			goto IL_010e;
		}
	}
	{
		goto IL_02b5;
	}

IL_0097:
	{
		uint32_t L_15 = V_2;
		if ((((int32_t)L_15) == ((int32_t)((int32_t)-493019601))))
		{
			goto IL_00f9;
		}
	}
	{
		uint32_t L_16 = V_2;
		if ((((int32_t)L_16) == ((int32_t)((int32_t)-86242094))))
		{
			goto IL_014d;
		}
	}
	{
		uint32_t L_17 = V_2;
		if ((((int32_t)L_17) == ((int32_t)((int32_t)-24986963))))
		{
			goto IL_018c;
		}
	}
	{
		goto IL_02b5;
	}

IL_00ba:
	{
		String_t* L_18 = V_1;
		bool L_19;
		L_19 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_18, _stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B, NULL);
		if (L_19)
		{
			goto IL_01b6;
		}
	}
	{
		goto IL_02b5;
	}

IL_00cf:
	{
		String_t* L_20 = V_1;
		bool L_21;
		L_21 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_20, _stringLiteral60126327537B7B8E6EE33C43FE0C5CA8BCC3A06A, NULL);
		if (L_21)
		{
			goto IL_01cd;
		}
	}
	{
		goto IL_02b5;
	}

IL_00e4:
	{
		String_t* L_22 = V_1;
		bool L_23;
		L_23 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_22, _stringLiteral509D57D2D3AC4C6FAE8D21D19FF2B9D787C81954, NULL);
		if (L_23)
		{
			goto IL_01e4;
		}
	}
	{
		goto IL_02b5;
	}

IL_00f9:
	{
		String_t* L_24 = V_1;
		bool L_25;
		L_25 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_24, _stringLiteral1057AAF5EE3CDF423CF6BCC588476E559687CDE6, NULL);
		if (L_25)
		{
			goto IL_01fb;
		}
	}
	{
		goto IL_02b5;
	}

IL_010e:
	{
		String_t* L_26 = V_1;
		bool L_27;
		L_27 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_26, _stringLiteral2AC7F98E5022908E09788532C95599452352D34A, NULL);
		if (L_27)
		{
			goto IL_0212;
		}
	}
	{
		goto IL_02b5;
	}

IL_0123:
	{
		String_t* L_28 = V_1;
		bool L_29;
		L_29 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_28, _stringLiteral93C208E83E88E77020CE91612101CB879A8EE914, NULL);
		if (L_29)
		{
			goto IL_0229;
		}
	}
	{
		goto IL_02b5;
	}

IL_0138:
	{
		String_t* L_30 = V_1;
		bool L_31;
		L_31 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_30, _stringLiteral072FD16FCD5FDEE6DF9288BBCA5AFBFA16B04581, NULL);
		if (L_31)
		{
			goto IL_023d;
		}
	}
	{
		goto IL_02b5;
	}

IL_014d:
	{
		String_t* L_32 = V_1;
		bool L_33;
		L_33 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_32, _stringLiteral4845015737DC41475709911228278216EE4DC3AF, NULL);
		if (L_33)
		{
			goto IL_0251;
		}
	}
	{
		goto IL_02b5;
	}

IL_0162:
	{
		String_t* L_34 = V_1;
		bool L_35;
		L_35 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_34, _stringLiteralA2DB56FF90ECEEEC49C5E8C66FCD72DF2771D010, NULL);
		if (L_35)
		{
			goto IL_0265;
		}
	}
	{
		goto IL_02b5;
	}

IL_0177:
	{
		String_t* L_36 = V_1;
		bool L_37;
		L_37 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_36, _stringLiteral40B9968876DFBA959A505AA3EC0E9D9D26C14E45, NULL);
		if (L_37)
		{
			goto IL_0279;
		}
	}
	{
		goto IL_02b5;
	}

IL_018c:
	{
		String_t* L_38 = V_1;
		bool L_39;
		L_39 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_38, _stringLiteral77682CE598EDE490DCDE276E250422EA9BEA739F, NULL);
		if (L_39)
		{
			goto IL_028d;
		}
	}
	{
		goto IL_02b5;
	}

IL_01a1:
	{
		String_t* L_40 = V_1;
		bool L_41;
		L_41 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_40, _stringLiteral52D353FB908B8123B513952855EB88F081A1A06A, NULL);
		if (L_41)
		{
			goto IL_02a1;
		}
	}
	{
		goto IL_02b5;
	}

IL_01b6:
	{
		// instance.enabled = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_42 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_43 = ((ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_42);
		bool L_44;
		L_44 = GenericVirtualFuncInvoker1< bool, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mFFB70EE53D8CD0255A4E599780F62A3EB1520E83_RuntimeMethod_var, L_42, L_43);
		LightsModule_set_enabled_mCA61408EE4B83423BB92B032567BA63005379DCE((&V_0), L_44, NULL);
		// break;
		goto IL_02bb;
	}

IL_01cd:
	{
		// instance.ratio = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_45 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_46 = ((ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_45);
		float L_47;
		L_47 = GenericVirtualFuncInvoker1< float, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mA86928BC888E342D2C2644535E3399952F5077ED_RuntimeMethod_var, L_45, L_46);
		LightsModule_set_ratio_mE1B9F5C45EB2E0822BF47F28F0510B5ECF2C87FC((&V_0), L_47, NULL);
		// break;
		goto IL_02bb;
	}

IL_01e4:
	{
		// instance.useRandomDistribution = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_48 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_49 = ((ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_48);
		bool L_50;
		L_50 = GenericVirtualFuncInvoker1< bool, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mFFB70EE53D8CD0255A4E599780F62A3EB1520E83_RuntimeMethod_var, L_48, L_49);
		LightsModule_set_useRandomDistribution_mB5EEC3EE5E510F2F27C779C25FD584B6FEA879D9((&V_0), L_50, NULL);
		// break;
		goto IL_02bb;
	}

IL_01fb:
	{
		// instance.light = reader.Read<UnityEngine.Light>(ES3Type_Light.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_51 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_52 = ((ES3Type_Light_t0E702BA5766531A8E1C1C7B952BD4B76502DE877_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Light_t0E702BA5766531A8E1C1C7B952BD4B76502DE877_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_51);
		Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* L_53;
		L_53 = GenericVirtualFuncInvoker1< Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3*, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisLight_t1E68479B7782AF2050FAA02A5DC612FD034F18F3_mB032FAFBAB777BB6EC57AFAD4E183FCA57151654_RuntimeMethod_var, L_51, L_52);
		LightsModule_set_light_m54F655151E83BA1CF8ECDF92B8D18F06463B2D59((&V_0), L_53, NULL);
		// break;
		goto IL_02bb;
	}

IL_0212:
	{
		// instance.useParticleColor = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_54 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_55 = ((ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_54);
		bool L_56;
		L_56 = GenericVirtualFuncInvoker1< bool, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mFFB70EE53D8CD0255A4E599780F62A3EB1520E83_RuntimeMethod_var, L_54, L_55);
		LightsModule_set_useParticleColor_mC91DC556C20A786D4E8190842094B557204C74B0((&V_0), L_56, NULL);
		// break;
		goto IL_02bb;
	}

IL_0229:
	{
		// instance.sizeAffectsRange = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_57 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_58 = ((ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_57);
		bool L_59;
		L_59 = GenericVirtualFuncInvoker1< bool, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mFFB70EE53D8CD0255A4E599780F62A3EB1520E83_RuntimeMethod_var, L_57, L_58);
		LightsModule_set_sizeAffectsRange_mBAAE49AC54AE79237649DD0AA715F43B0510356A((&V_0), L_59, NULL);
		// break;
		goto IL_02bb;
	}

IL_023d:
	{
		// instance.alphaAffectsIntensity = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_60 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_61 = ((ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_60);
		bool L_62;
		L_62 = GenericVirtualFuncInvoker1< bool, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mFFB70EE53D8CD0255A4E599780F62A3EB1520E83_RuntimeMethod_var, L_60, L_61);
		LightsModule_set_alphaAffectsIntensity_m79B804EA7C98543C733F3E0355DB01B8E1845995((&V_0), L_62, NULL);
		// break;
		goto IL_02bb;
	}

IL_0251:
	{
		// instance.range = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_63 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_64 = ((ES3Type_MinMaxCurve_t1C147718750ACBECE5D2B7F545D2A434A3C5409B_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t1C147718750ACBECE5D2B7F545D2A434A3C5409B_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_63);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_65;
		L_65 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_m9D6B4042B923127DEA4A2CAA3E35EED37D75B3D0_RuntimeMethod_var, L_63, L_64);
		LightsModule_set_range_m3DA6A5EE3021CB5A4787AEAE4DCA675E3050C5E4((&V_0), L_65, NULL);
		// break;
		goto IL_02bb;
	}

IL_0265:
	{
		// instance.rangeMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_66 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_67 = ((ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_66);
		float L_68;
		L_68 = GenericVirtualFuncInvoker1< float, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mA86928BC888E342D2C2644535E3399952F5077ED_RuntimeMethod_var, L_66, L_67);
		LightsModule_set_rangeMultiplier_m881D705C505C908F9F05F24EFBFC61DD2F01B23F((&V_0), L_68, NULL);
		// break;
		goto IL_02bb;
	}

IL_0279:
	{
		// instance.intensity = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_69 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_70 = ((ES3Type_MinMaxCurve_t1C147718750ACBECE5D2B7F545D2A434A3C5409B_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t1C147718750ACBECE5D2B7F545D2A434A3C5409B_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_69);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_71;
		L_71 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_m9D6B4042B923127DEA4A2CAA3E35EED37D75B3D0_RuntimeMethod_var, L_69, L_70);
		LightsModule_set_intensity_mD1D7564D1ADD14C5755043F1146A8D56C228A519((&V_0), L_71, NULL);
		// break;
		goto IL_02bb;
	}

IL_028d:
	{
		// instance.intensityMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_72 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_73 = ((ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_72);
		float L_74;
		L_74 = GenericVirtualFuncInvoker1< float, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mA86928BC888E342D2C2644535E3399952F5077ED_RuntimeMethod_var, L_72, L_73);
		LightsModule_set_intensityMultiplier_m79E9E71E14F02B6BE7C4EB6C5B3BA8921D1B29F8((&V_0), L_74, NULL);
		// break;
		goto IL_02bb;
	}

IL_02a1:
	{
		// instance.maxLights = reader.Read<System.Int32>(ES3Type_int.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_75 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_76 = ((ES3Type_int_t05A5E7A96442F23CE33E24A71CD349372A70E0C3_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_int_t05A5E7A96442F23CE33E24A71CD349372A70E0C3_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_75);
		int32_t L_77;
		L_77 = GenericVirtualFuncInvoker1< int32_t, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mEFCC4D52DD5B822D3561A53591AE11CDB25CDB6F_RuntimeMethod_var, L_75, L_76);
		LightsModule_set_maxLights_mC423F1C129DAB69F2F145F6AA8160DEE8176F4EC((&V_0), L_77, NULL);
		// break;
		goto IL_02bb;
	}

IL_02b5:
	{
		// reader.Skip();
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_78 = ___reader0;
		NullCheck(L_78);
		VirtualActionInvoker0::Invoke(41 /* System.Void ES3Reader::Skip() */, L_78);
	}

IL_02bb:
	{
		// while((propertyName = reader.ReadPropertyName()) != null)
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_79 = ___reader0;
		NullCheck(L_79);
		String_t* L_80;
		L_80 = VirtualFuncInvoker0< String_t* >::Invoke(21 /* System.String ES3Reader::ReadPropertyName() */, L_79);
		String_t* L_81 = L_80;
		V_1 = L_81;
		if (L_81)
		{
			goto IL_000c;
		}
	}
	{
		// }
		return;
	}
}
// System.Void ES3Types.ES3Type_LightsModule::ReadInto<UnityEngine.ParticleSystem/CollisionModule>(ES3Reader,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ES3Type_LightsModule_ReadInto_TisCollisionModule_tEE4892D4872C2907164A66DC424F1CFA1D527083_mF2281ED066C3F787544DCE8A7E246A2C73BF01F7_gshared (ES3Type_LightsModule_t37A9192D3FFC77124809D0623E14839D7E0C86A6* __this, ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* ___reader0, RuntimeObject* ___obj1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mFFB70EE53D8CD0255A4E599780F62A3EB1520E83_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mEFCC4D52DD5B822D3561A53591AE11CDB25CDB6F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisLight_t1E68479B7782AF2050FAA02A5DC612FD034F18F3_mB032FAFBAB777BB6EC57AFAD4E183FCA57151654_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_m9D6B4042B923127DEA4A2CAA3E35EED37D75B3D0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mA86928BC888E342D2C2644535E3399952F5077ED_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_Light_t0E702BA5766531A8E1C1C7B952BD4B76502DE877_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_MinMaxCurve_t1C147718750ACBECE5D2B7F545D2A434A3C5409B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_int_t05A5E7A96442F23CE33E24A71CD349372A70E0C3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral072FD16FCD5FDEE6DF9288BBCA5AFBFA16B04581);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1057AAF5EE3CDF423CF6BCC588476E559687CDE6);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2AC7F98E5022908E09788532C95599452352D34A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral40B9968876DFBA959A505AA3EC0E9D9D26C14E45);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4845015737DC41475709911228278216EE4DC3AF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral509D57D2D3AC4C6FAE8D21D19FF2B9D787C81954);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral52D353FB908B8123B513952855EB88F081A1A06A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral60126327537B7B8E6EE33C43FE0C5CA8BCC3A06A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral77682CE598EDE490DCDE276E250422EA9BEA739F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral93C208E83E88E77020CE91612101CB879A8EE914);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA2DB56FF90ECEEEC49C5E8C66FCD72DF2771D010);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B);
		s_Il2CppMethodInitialized = true;
	}
	LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	uint32_t V_2 = 0;
	{
		// var instance = (UnityEngine.ParticleSystem.LightsModule)obj;
		RuntimeObject* L_0 = ___obj1;
		V_0 = ((*(LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E*)((LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E*)(LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E*)UnBox(L_0, LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E_il2cpp_TypeInfo_var))));
		goto IL_02bb;
	}

IL_000c:
	{
		String_t* L_1 = V_1;
		uint32_t L_2;
		L_2 = U3CPrivateImplementationDetailsU3E_ComputeStringHash_m6EA1F233618497AEFF8902A5EDFA24C74E2F2876(L_1, NULL);
		V_2 = L_2;
		uint32_t L_3 = V_2;
		if ((!(((uint32_t)L_3) <= ((uint32_t)((int32_t)-1604400485)))))
		{
			goto IL_006f;
		}
	}
	{
		uint32_t L_4 = V_2;
		if ((!(((uint32_t)L_4) <= ((uint32_t)((int32_t)680602789)))))
		{
			goto IL_0049;
		}
	}
	{
		uint32_t L_5 = V_2;
		if ((((int32_t)L_5) == ((int32_t)((int32_t)49525662))))
		{
			goto IL_00ba;
		}
	}
	{
		uint32_t L_6 = V_2;
		if ((((int32_t)L_6) == ((int32_t)((int32_t)258704408))))
		{
			goto IL_0138;
		}
	}
	{
		uint32_t L_7 = V_2;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)680602789))))
		{
			goto IL_00e4;
		}
	}
	{
		goto IL_02b5;
	}

IL_0049:
	{
		uint32_t L_8 = V_2;
		if ((((int32_t)L_8) == ((int32_t)((int32_t)2057398597))))
		{
			goto IL_0162;
		}
	}
	{
		uint32_t L_9 = V_2;
		if ((((int32_t)L_9) == ((int32_t)((int32_t)-2057050870))))
		{
			goto IL_0177;
		}
	}
	{
		uint32_t L_10 = V_2;
		if ((((int32_t)L_10) == ((int32_t)((int32_t)-1604400485))))
		{
			goto IL_0123;
		}
	}
	{
		goto IL_02b5;
	}

IL_006f:
	{
		uint32_t L_11 = V_2;
		if ((!(((uint32_t)L_11) <= ((uint32_t)((int32_t)-667110935)))))
		{
			goto IL_0097;
		}
	}
	{
		uint32_t L_12 = V_2;
		if ((((int32_t)L_12) == ((int32_t)((int32_t)-1055777148))))
		{
			goto IL_00cf;
		}
	}
	{
		uint32_t L_13 = V_2;
		if ((((int32_t)L_13) == ((int32_t)((int32_t)-796669776))))
		{
			goto IL_01a1;
		}
	}
	{
		uint32_t L_14 = V_2;
		if ((((int32_t)L_14) == ((int32_t)((int32_t)-667110935))))
		{
			goto IL_010e;
		}
	}
	{
		goto IL_02b5;
	}

IL_0097:
	{
		uint32_t L_15 = V_2;
		if ((((int32_t)L_15) == ((int32_t)((int32_t)-493019601))))
		{
			goto IL_00f9;
		}
	}
	{
		uint32_t L_16 = V_2;
		if ((((int32_t)L_16) == ((int32_t)((int32_t)-86242094))))
		{
			goto IL_014d;
		}
	}
	{
		uint32_t L_17 = V_2;
		if ((((int32_t)L_17) == ((int32_t)((int32_t)-24986963))))
		{
			goto IL_018c;
		}
	}
	{
		goto IL_02b5;
	}

IL_00ba:
	{
		String_t* L_18 = V_1;
		bool L_19;
		L_19 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_18, _stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B, NULL);
		if (L_19)
		{
			goto IL_01b6;
		}
	}
	{
		goto IL_02b5;
	}

IL_00cf:
	{
		String_t* L_20 = V_1;
		bool L_21;
		L_21 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_20, _stringLiteral60126327537B7B8E6EE33C43FE0C5CA8BCC3A06A, NULL);
		if (L_21)
		{
			goto IL_01cd;
		}
	}
	{
		goto IL_02b5;
	}

IL_00e4:
	{
		String_t* L_22 = V_1;
		bool L_23;
		L_23 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_22, _stringLiteral509D57D2D3AC4C6FAE8D21D19FF2B9D787C81954, NULL);
		if (L_23)
		{
			goto IL_01e4;
		}
	}
	{
		goto IL_02b5;
	}

IL_00f9:
	{
		String_t* L_24 = V_1;
		bool L_25;
		L_25 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_24, _stringLiteral1057AAF5EE3CDF423CF6BCC588476E559687CDE6, NULL);
		if (L_25)
		{
			goto IL_01fb;
		}
	}
	{
		goto IL_02b5;
	}

IL_010e:
	{
		String_t* L_26 = V_1;
		bool L_27;
		L_27 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_26, _stringLiteral2AC7F98E5022908E09788532C95599452352D34A, NULL);
		if (L_27)
		{
			goto IL_0212;
		}
	}
	{
		goto IL_02b5;
	}

IL_0123:
	{
		String_t* L_28 = V_1;
		bool L_29;
		L_29 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_28, _stringLiteral93C208E83E88E77020CE91612101CB879A8EE914, NULL);
		if (L_29)
		{
			goto IL_0229;
		}
	}
	{
		goto IL_02b5;
	}

IL_0138:
	{
		String_t* L_30 = V_1;
		bool L_31;
		L_31 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_30, _stringLiteral072FD16FCD5FDEE6DF9288BBCA5AFBFA16B04581, NULL);
		if (L_31)
		{
			goto IL_023d;
		}
	}
	{
		goto IL_02b5;
	}

IL_014d:
	{
		String_t* L_32 = V_1;
		bool L_33;
		L_33 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_32, _stringLiteral4845015737DC41475709911228278216EE4DC3AF, NULL);
		if (L_33)
		{
			goto IL_0251;
		}
	}
	{
		goto IL_02b5;
	}

IL_0162:
	{
		String_t* L_34 = V_1;
		bool L_35;
		L_35 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_34, _stringLiteralA2DB56FF90ECEEEC49C5E8C66FCD72DF2771D010, NULL);
		if (L_35)
		{
			goto IL_0265;
		}
	}
	{
		goto IL_02b5;
	}

IL_0177:
	{
		String_t* L_36 = V_1;
		bool L_37;
		L_37 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_36, _stringLiteral40B9968876DFBA959A505AA3EC0E9D9D26C14E45, NULL);
		if (L_37)
		{
			goto IL_0279;
		}
	}
	{
		goto IL_02b5;
	}

IL_018c:
	{
		String_t* L_38 = V_1;
		bool L_39;
		L_39 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_38, _stringLiteral77682CE598EDE490DCDE276E250422EA9BEA739F, NULL);
		if (L_39)
		{
			goto IL_028d;
		}
	}
	{
		goto IL_02b5;
	}

IL_01a1:
	{
		String_t* L_40 = V_1;
		bool L_41;
		L_41 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_40, _stringLiteral52D353FB908B8123B513952855EB88F081A1A06A, NULL);
		if (L_41)
		{
			goto IL_02a1;
		}
	}
	{
		goto IL_02b5;
	}

IL_01b6:
	{
		// instance.enabled = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_42 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_43 = ((ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_42);
		bool L_44;
		L_44 = GenericVirtualFuncInvoker1< bool, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mFFB70EE53D8CD0255A4E599780F62A3EB1520E83_RuntimeMethod_var, L_42, L_43);
		LightsModule_set_enabled_mCA61408EE4B83423BB92B032567BA63005379DCE((&V_0), L_44, NULL);
		// break;
		goto IL_02bb;
	}

IL_01cd:
	{
		// instance.ratio = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_45 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_46 = ((ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_45);
		float L_47;
		L_47 = GenericVirtualFuncInvoker1< float, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mA86928BC888E342D2C2644535E3399952F5077ED_RuntimeMethod_var, L_45, L_46);
		LightsModule_set_ratio_mE1B9F5C45EB2E0822BF47F28F0510B5ECF2C87FC((&V_0), L_47, NULL);
		// break;
		goto IL_02bb;
	}

IL_01e4:
	{
		// instance.useRandomDistribution = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_48 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_49 = ((ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_48);
		bool L_50;
		L_50 = GenericVirtualFuncInvoker1< bool, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mFFB70EE53D8CD0255A4E599780F62A3EB1520E83_RuntimeMethod_var, L_48, L_49);
		LightsModule_set_useRandomDistribution_mB5EEC3EE5E510F2F27C779C25FD584B6FEA879D9((&V_0), L_50, NULL);
		// break;
		goto IL_02bb;
	}

IL_01fb:
	{
		// instance.light = reader.Read<UnityEngine.Light>(ES3Type_Light.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_51 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_52 = ((ES3Type_Light_t0E702BA5766531A8E1C1C7B952BD4B76502DE877_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Light_t0E702BA5766531A8E1C1C7B952BD4B76502DE877_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_51);
		Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* L_53;
		L_53 = GenericVirtualFuncInvoker1< Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3*, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisLight_t1E68479B7782AF2050FAA02A5DC612FD034F18F3_mB032FAFBAB777BB6EC57AFAD4E183FCA57151654_RuntimeMethod_var, L_51, L_52);
		LightsModule_set_light_m54F655151E83BA1CF8ECDF92B8D18F06463B2D59((&V_0), L_53, NULL);
		// break;
		goto IL_02bb;
	}

IL_0212:
	{
		// instance.useParticleColor = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_54 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_55 = ((ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_54);
		bool L_56;
		L_56 = GenericVirtualFuncInvoker1< bool, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mFFB70EE53D8CD0255A4E599780F62A3EB1520E83_RuntimeMethod_var, L_54, L_55);
		LightsModule_set_useParticleColor_mC91DC556C20A786D4E8190842094B557204C74B0((&V_0), L_56, NULL);
		// break;
		goto IL_02bb;
	}

IL_0229:
	{
		// instance.sizeAffectsRange = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_57 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_58 = ((ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_57);
		bool L_59;
		L_59 = GenericVirtualFuncInvoker1< bool, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mFFB70EE53D8CD0255A4E599780F62A3EB1520E83_RuntimeMethod_var, L_57, L_58);
		LightsModule_set_sizeAffectsRange_mBAAE49AC54AE79237649DD0AA715F43B0510356A((&V_0), L_59, NULL);
		// break;
		goto IL_02bb;
	}

IL_023d:
	{
		// instance.alphaAffectsIntensity = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_60 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_61 = ((ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_60);
		bool L_62;
		L_62 = GenericVirtualFuncInvoker1< bool, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mFFB70EE53D8CD0255A4E599780F62A3EB1520E83_RuntimeMethod_var, L_60, L_61);
		LightsModule_set_alphaAffectsIntensity_m79B804EA7C98543C733F3E0355DB01B8E1845995((&V_0), L_62, NULL);
		// break;
		goto IL_02bb;
	}

IL_0251:
	{
		// instance.range = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_63 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_64 = ((ES3Type_MinMaxCurve_t1C147718750ACBECE5D2B7F545D2A434A3C5409B_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t1C147718750ACBECE5D2B7F545D2A434A3C5409B_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_63);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_65;
		L_65 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_m9D6B4042B923127DEA4A2CAA3E35EED37D75B3D0_RuntimeMethod_var, L_63, L_64);
		LightsModule_set_range_m3DA6A5EE3021CB5A4787AEAE4DCA675E3050C5E4((&V_0), L_65, NULL);
		// break;
		goto IL_02bb;
	}

IL_0265:
	{
		// instance.rangeMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_66 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_67 = ((ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_66);
		float L_68;
		L_68 = GenericVirtualFuncInvoker1< float, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mA86928BC888E342D2C2644535E3399952F5077ED_RuntimeMethod_var, L_66, L_67);
		LightsModule_set_rangeMultiplier_m881D705C505C908F9F05F24EFBFC61DD2F01B23F((&V_0), L_68, NULL);
		// break;
		goto IL_02bb;
	}

IL_0279:
	{
		// instance.intensity = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_69 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_70 = ((ES3Type_MinMaxCurve_t1C147718750ACBECE5D2B7F545D2A434A3C5409B_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t1C147718750ACBECE5D2B7F545D2A434A3C5409B_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_69);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_71;
		L_71 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_m9D6B4042B923127DEA4A2CAA3E35EED37D75B3D0_RuntimeMethod_var, L_69, L_70);
		LightsModule_set_intensity_mD1D7564D1ADD14C5755043F1146A8D56C228A519((&V_0), L_71, NULL);
		// break;
		goto IL_02bb;
	}

IL_028d:
	{
		// instance.intensityMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_72 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_73 = ((ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_72);
		float L_74;
		L_74 = GenericVirtualFuncInvoker1< float, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mA86928BC888E342D2C2644535E3399952F5077ED_RuntimeMethod_var, L_72, L_73);
		LightsModule_set_intensityMultiplier_m79E9E71E14F02B6BE7C4EB6C5B3BA8921D1B29F8((&V_0), L_74, NULL);
		// break;
		goto IL_02bb;
	}

IL_02a1:
	{
		// instance.maxLights = reader.Read<System.Int32>(ES3Type_int.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_75 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_76 = ((ES3Type_int_t05A5E7A96442F23CE33E24A71CD349372A70E0C3_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_int_t05A5E7A96442F23CE33E24A71CD349372A70E0C3_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_75);
		int32_t L_77;
		L_77 = GenericVirtualFuncInvoker1< int32_t, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mEFCC4D52DD5B822D3561A53591AE11CDB25CDB6F_RuntimeMethod_var, L_75, L_76);
		LightsModule_set_maxLights_mC423F1C129DAB69F2F145F6AA8160DEE8176F4EC((&V_0), L_77, NULL);
		// break;
		goto IL_02bb;
	}

IL_02b5:
	{
		// reader.Skip();
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_78 = ___reader0;
		NullCheck(L_78);
		VirtualActionInvoker0::Invoke(41 /* System.Void ES3Reader::Skip() */, L_78);
	}

IL_02bb:
	{
		// while((propertyName = reader.ReadPropertyName()) != null)
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_79 = ___reader0;
		NullCheck(L_79);
		String_t* L_80;
		L_80 = VirtualFuncInvoker0< String_t* >::Invoke(21 /* System.String ES3Reader::ReadPropertyName() */, L_79);
		String_t* L_81 = L_80;
		V_1 = L_81;
		if (L_81)
		{
			goto IL_000c;
		}
	}
	{
		// }
		return;
	}
}
// System.Void ES3Types.ES3Type_LightsModule::ReadInto<UnityEngine.ParticleSystem/ColorBySpeedModule>(ES3Reader,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ES3Type_LightsModule_ReadInto_TisColorBySpeedModule_t808C4CC668431DDE51D5AD98A81C78DDB944948B_mB945B2E23789D274263195CC2FD1B61B27A6A61E_gshared (ES3Type_LightsModule_t37A9192D3FFC77124809D0623E14839D7E0C86A6* __this, ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* ___reader0, RuntimeObject* ___obj1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mFFB70EE53D8CD0255A4E599780F62A3EB1520E83_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mEFCC4D52DD5B822D3561A53591AE11CDB25CDB6F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisLight_t1E68479B7782AF2050FAA02A5DC612FD034F18F3_mB032FAFBAB777BB6EC57AFAD4E183FCA57151654_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_m9D6B4042B923127DEA4A2CAA3E35EED37D75B3D0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mA86928BC888E342D2C2644535E3399952F5077ED_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_Light_t0E702BA5766531A8E1C1C7B952BD4B76502DE877_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_MinMaxCurve_t1C147718750ACBECE5D2B7F545D2A434A3C5409B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_int_t05A5E7A96442F23CE33E24A71CD349372A70E0C3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral072FD16FCD5FDEE6DF9288BBCA5AFBFA16B04581);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1057AAF5EE3CDF423CF6BCC588476E559687CDE6);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2AC7F98E5022908E09788532C95599452352D34A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral40B9968876DFBA959A505AA3EC0E9D9D26C14E45);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4845015737DC41475709911228278216EE4DC3AF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral509D57D2D3AC4C6FAE8D21D19FF2B9D787C81954);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral52D353FB908B8123B513952855EB88F081A1A06A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral60126327537B7B8E6EE33C43FE0C5CA8BCC3A06A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral77682CE598EDE490DCDE276E250422EA9BEA739F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral93C208E83E88E77020CE91612101CB879A8EE914);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA2DB56FF90ECEEEC49C5E8C66FCD72DF2771D010);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B);
		s_Il2CppMethodInitialized = true;
	}
	LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	uint32_t V_2 = 0;
	{
		// var instance = (UnityEngine.ParticleSystem.LightsModule)obj;
		RuntimeObject* L_0 = ___obj1;
		V_0 = ((*(LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E*)((LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E*)(LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E*)UnBox(L_0, LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E_il2cpp_TypeInfo_var))));
		goto IL_02bb;
	}

IL_000c:
	{
		String_t* L_1 = V_1;
		uint32_t L_2;
		L_2 = U3CPrivateImplementationDetailsU3E_ComputeStringHash_m6EA1F233618497AEFF8902A5EDFA24C74E2F2876(L_1, NULL);
		V_2 = L_2;
		uint32_t L_3 = V_2;
		if ((!(((uint32_t)L_3) <= ((uint32_t)((int32_t)-1604400485)))))
		{
			goto IL_006f;
		}
	}
	{
		uint32_t L_4 = V_2;
		if ((!(((uint32_t)L_4) <= ((uint32_t)((int32_t)680602789)))))
		{
			goto IL_0049;
		}
	}
	{
		uint32_t L_5 = V_2;
		if ((((int32_t)L_5) == ((int32_t)((int32_t)49525662))))
		{
			goto IL_00ba;
		}
	}
	{
		uint32_t L_6 = V_2;
		if ((((int32_t)L_6) == ((int32_t)((int32_t)258704408))))
		{
			goto IL_0138;
		}
	}
	{
		uint32_t L_7 = V_2;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)680602789))))
		{
			goto IL_00e4;
		}
	}
	{
		goto IL_02b5;
	}

IL_0049:
	{
		uint32_t L_8 = V_2;
		if ((((int32_t)L_8) == ((int32_t)((int32_t)2057398597))))
		{
			goto IL_0162;
		}
	}
	{
		uint32_t L_9 = V_2;
		if ((((int32_t)L_9) == ((int32_t)((int32_t)-2057050870))))
		{
			goto IL_0177;
		}
	}
	{
		uint32_t L_10 = V_2;
		if ((((int32_t)L_10) == ((int32_t)((int32_t)-1604400485))))
		{
			goto IL_0123;
		}
	}
	{
		goto IL_02b5;
	}

IL_006f:
	{
		uint32_t L_11 = V_2;
		if ((!(((uint32_t)L_11) <= ((uint32_t)((int32_t)-667110935)))))
		{
			goto IL_0097;
		}
	}
	{
		uint32_t L_12 = V_2;
		if ((((int32_t)L_12) == ((int32_t)((int32_t)-1055777148))))
		{
			goto IL_00cf;
		}
	}
	{
		uint32_t L_13 = V_2;
		if ((((int32_t)L_13) == ((int32_t)((int32_t)-796669776))))
		{
			goto IL_01a1;
		}
	}
	{
		uint32_t L_14 = V_2;
		if ((((int32_t)L_14) == ((int32_t)((int32_t)-667110935))))
		{
			goto IL_010e;
		}
	}
	{
		goto IL_02b5;
	}

IL_0097:
	{
		uint32_t L_15 = V_2;
		if ((((int32_t)L_15) == ((int32_t)((int32_t)-493019601))))
		{
			goto IL_00f9;
		}
	}
	{
		uint32_t L_16 = V_2;
		if ((((int32_t)L_16) == ((int32_t)((int32_t)-86242094))))
		{
			goto IL_014d;
		}
	}
	{
		uint32_t L_17 = V_2;
		if ((((int32_t)L_17) == ((int32_t)((int32_t)-24986963))))
		{
			goto IL_018c;
		}
	}
	{
		goto IL_02b5;
	}

IL_00ba:
	{
		String_t* L_18 = V_1;
		bool L_19;
		L_19 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_18, _stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B, NULL);
		if (L_19)
		{
			goto IL_01b6;
		}
	}
	{
		goto IL_02b5;
	}

IL_00cf:
	{
		String_t* L_20 = V_1;
		bool L_21;
		L_21 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_20, _stringLiteral60126327537B7B8E6EE33C43FE0C5CA8BCC3A06A, NULL);
		if (L_21)
		{
			goto IL_01cd;
		}
	}
	{
		goto IL_02b5;
	}

IL_00e4:
	{
		String_t* L_22 = V_1;
		bool L_23;
		L_23 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_22, _stringLiteral509D57D2D3AC4C6FAE8D21D19FF2B9D787C81954, NULL);
		if (L_23)
		{
			goto IL_01e4;
		}
	}
	{
		goto IL_02b5;
	}

IL_00f9:
	{
		String_t* L_24 = V_1;
		bool L_25;
		L_25 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_24, _stringLiteral1057AAF5EE3CDF423CF6BCC588476E559687CDE6, NULL);
		if (L_25)
		{
			goto IL_01fb;
		}
	}
	{
		goto IL_02b5;
	}

IL_010e:
	{
		String_t* L_26 = V_1;
		bool L_27;
		L_27 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_26, _stringLiteral2AC7F98E5022908E09788532C95599452352D34A, NULL);
		if (L_27)
		{
			goto IL_0212;
		}
	}
	{
		goto IL_02b5;
	}

IL_0123:
	{
		String_t* L_28 = V_1;
		bool L_29;
		L_29 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_28, _stringLiteral93C208E83E88E77020CE91612101CB879A8EE914, NULL);
		if (L_29)
		{
			goto IL_0229;
		}
	}
	{
		goto IL_02b5;
	}

IL_0138:
	{
		String_t* L_30 = V_1;
		bool L_31;
		L_31 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_30, _stringLiteral072FD16FCD5FDEE6DF9288BBCA5AFBFA16B04581, NULL);
		if (L_31)
		{
			goto IL_023d;
		}
	}
	{
		goto IL_02b5;
	}

IL_014d:
	{
		String_t* L_32 = V_1;
		bool L_33;
		L_33 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_32, _stringLiteral4845015737DC41475709911228278216EE4DC3AF, NULL);
		if (L_33)
		{
			goto IL_0251;
		}
	}
	{
		goto IL_02b5;
	}

IL_0162:
	{
		String_t* L_34 = V_1;
		bool L_35;
		L_35 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_34, _stringLiteralA2DB56FF90ECEEEC49C5E8C66FCD72DF2771D010, NULL);
		if (L_35)
		{
			goto IL_0265;
		}
	}
	{
		goto IL_02b5;
	}

IL_0177:
	{
		String_t* L_36 = V_1;
		bool L_37;
		L_37 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_36, _stringLiteral40B9968876DFBA959A505AA3EC0E9D9D26C14E45, NULL);
		if (L_37)
		{
			goto IL_0279;
		}
	}
	{
		goto IL_02b5;
	}

IL_018c:
	{
		String_t* L_38 = V_1;
		bool L_39;
		L_39 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_38, _stringLiteral77682CE598EDE490DCDE276E250422EA9BEA739F, NULL);
		if (L_39)
		{
			goto IL_028d;
		}
	}
	{
		goto IL_02b5;
	}

IL_01a1:
	{
		String_t* L_40 = V_1;
		bool L_41;
		L_41 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_40, _stringLiteral52D353FB908B8123B513952855EB88F081A1A06A, NULL);
		if (L_41)
		{
			goto IL_02a1;
		}
	}
	{
		goto IL_02b5;
	}

IL_01b6:
	{
		// instance.enabled = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_42 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_43 = ((ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_42);
		bool L_44;
		L_44 = GenericVirtualFuncInvoker1< bool, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mFFB70EE53D8CD0255A4E599780F62A3EB1520E83_RuntimeMethod_var, L_42, L_43);
		LightsModule_set_enabled_mCA61408EE4B83423BB92B032567BA63005379DCE((&V_0), L_44, NULL);
		// break;
		goto IL_02bb;
	}

IL_01cd:
	{
		// instance.ratio = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_45 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_46 = ((ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_45);
		float L_47;
		L_47 = GenericVirtualFuncInvoker1< float, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mA86928BC888E342D2C2644535E3399952F5077ED_RuntimeMethod_var, L_45, L_46);
		LightsModule_set_ratio_mE1B9F5C45EB2E0822BF47F28F0510B5ECF2C87FC((&V_0), L_47, NULL);
		// break;
		goto IL_02bb;
	}

IL_01e4:
	{
		// instance.useRandomDistribution = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_48 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_49 = ((ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_48);
		bool L_50;
		L_50 = GenericVirtualFuncInvoker1< bool, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mFFB70EE53D8CD0255A4E599780F62A3EB1520E83_RuntimeMethod_var, L_48, L_49);
		LightsModule_set_useRandomDistribution_mB5EEC3EE5E510F2F27C779C25FD584B6FEA879D9((&V_0), L_50, NULL);
		// break;
		goto IL_02bb;
	}

IL_01fb:
	{
		// instance.light = reader.Read<UnityEngine.Light>(ES3Type_Light.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_51 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_52 = ((ES3Type_Light_t0E702BA5766531A8E1C1C7B952BD4B76502DE877_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Light_t0E702BA5766531A8E1C1C7B952BD4B76502DE877_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_51);
		Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* L_53;
		L_53 = GenericVirtualFuncInvoker1< Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3*, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisLight_t1E68479B7782AF2050FAA02A5DC612FD034F18F3_mB032FAFBAB777BB6EC57AFAD4E183FCA57151654_RuntimeMethod_var, L_51, L_52);
		LightsModule_set_light_m54F655151E83BA1CF8ECDF92B8D18F06463B2D59((&V_0), L_53, NULL);
		// break;
		goto IL_02bb;
	}

IL_0212:
	{
		// instance.useParticleColor = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_54 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_55 = ((ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_54);
		bool L_56;
		L_56 = GenericVirtualFuncInvoker1< bool, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mFFB70EE53D8CD0255A4E599780F62A3EB1520E83_RuntimeMethod_var, L_54, L_55);
		LightsModule_set_useParticleColor_mC91DC556C20A786D4E8190842094B557204C74B0((&V_0), L_56, NULL);
		// break;
		goto IL_02bb;
	}

IL_0229:
	{
		// instance.sizeAffectsRange = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_57 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_58 = ((ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_57);
		bool L_59;
		L_59 = GenericVirtualFuncInvoker1< bool, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mFFB70EE53D8CD0255A4E599780F62A3EB1520E83_RuntimeMethod_var, L_57, L_58);
		LightsModule_set_sizeAffectsRange_mBAAE49AC54AE79237649DD0AA715F43B0510356A((&V_0), L_59, NULL);
		// break;
		goto IL_02bb;
	}

IL_023d:
	{
		// instance.alphaAffectsIntensity = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_60 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_61 = ((ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_60);
		bool L_62;
		L_62 = GenericVirtualFuncInvoker1< bool, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mFFB70EE53D8CD0255A4E599780F62A3EB1520E83_RuntimeMethod_var, L_60, L_61);
		LightsModule_set_alphaAffectsIntensity_m79B804EA7C98543C733F3E0355DB01B8E1845995((&V_0), L_62, NULL);
		// break;
		goto IL_02bb;
	}

IL_0251:
	{
		// instance.range = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_63 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_64 = ((ES3Type_MinMaxCurve_t1C147718750ACBECE5D2B7F545D2A434A3C5409B_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t1C147718750ACBECE5D2B7F545D2A434A3C5409B_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_63);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_65;
		L_65 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_m9D6B4042B923127DEA4A2CAA3E35EED37D75B3D0_RuntimeMethod_var, L_63, L_64);
		LightsModule_set_range_m3DA6A5EE3021CB5A4787AEAE4DCA675E3050C5E4((&V_0), L_65, NULL);
		// break;
		goto IL_02bb;
	}

IL_0265:
	{
		// instance.rangeMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_66 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_67 = ((ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_66);
		float L_68;
		L_68 = GenericVirtualFuncInvoker1< float, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mA86928BC888E342D2C2644535E3399952F5077ED_RuntimeMethod_var, L_66, L_67);
		LightsModule_set_rangeMultiplier_m881D705C505C908F9F05F24EFBFC61DD2F01B23F((&V_0), L_68, NULL);
		// break;
		goto IL_02bb;
	}

IL_0279:
	{
		// instance.intensity = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_69 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_70 = ((ES3Type_MinMaxCurve_t1C147718750ACBECE5D2B7F545D2A434A3C5409B_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t1C147718750ACBECE5D2B7F545D2A434A3C5409B_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_69);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_71;
		L_71 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_m9D6B4042B923127DEA4A2CAA3E35EED37D75B3D0_RuntimeMethod_var, L_69, L_70);
		LightsModule_set_intensity_mD1D7564D1ADD14C5755043F1146A8D56C228A519((&V_0), L_71, NULL);
		// break;
		goto IL_02bb;
	}

IL_028d:
	{
		// instance.intensityMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_72 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_73 = ((ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_72);
		float L_74;
		L_74 = GenericVirtualFuncInvoker1< float, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mA86928BC888E342D2C2644535E3399952F5077ED_RuntimeMethod_var, L_72, L_73);
		LightsModule_set_intensityMultiplier_m79E9E71E14F02B6BE7C4EB6C5B3BA8921D1B29F8((&V_0), L_74, NULL);
		// break;
		goto IL_02bb;
	}

IL_02a1:
	{
		// instance.maxLights = reader.Read<System.Int32>(ES3Type_int.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_75 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_76 = ((ES3Type_int_t05A5E7A96442F23CE33E24A71CD349372A70E0C3_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_int_t05A5E7A96442F23CE33E24A71CD349372A70E0C3_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_75);
		int32_t L_77;
		L_77 = GenericVirtualFuncInvoker1< int32_t, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mEFCC4D52DD5B822D3561A53591AE11CDB25CDB6F_RuntimeMethod_var, L_75, L_76);
		LightsModule_set_maxLights_mC423F1C129DAB69F2F145F6AA8160DEE8176F4EC((&V_0), L_77, NULL);
		// break;
		goto IL_02bb;
	}

IL_02b5:
	{
		// reader.Skip();
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_78 = ___reader0;
		NullCheck(L_78);
		VirtualActionInvoker0::Invoke(41 /* System.Void ES3Reader::Skip() */, L_78);
	}

IL_02bb:
	{
		// while((propertyName = reader.ReadPropertyName()) != null)
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_79 = ___reader0;
		NullCheck(L_79);
		String_t* L_80;
		L_80 = VirtualFuncInvoker0< String_t* >::Invoke(21 /* System.String ES3Reader::ReadPropertyName() */, L_79);
		String_t* L_81 = L_80;
		V_1 = L_81;
		if (L_81)
		{
			goto IL_000c;
		}
	}
	{
		// }
		return;
	}
}
// System.Void ES3Types.ES3Type_LightsModule::ReadInto<UnityEngine.ParticleSystem/ColorOverLifetimeModule>(ES3Reader,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ES3Type_LightsModule_ReadInto_TisColorOverLifetimeModule_t758EC8315B6C19D78C418D942CD1F94FE7EEE9D9_m58563F23EFCD4F7A1F9956083D46549E459723ED_gshared (ES3Type_LightsModule_t37A9192D3FFC77124809D0623E14839D7E0C86A6* __this, ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* ___reader0, RuntimeObject* ___obj1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mFFB70EE53D8CD0255A4E599780F62A3EB1520E83_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mEFCC4D52DD5B822D3561A53591AE11CDB25CDB6F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisLight_t1E68479B7782AF2050FAA02A5DC612FD034F18F3_mB032FAFBAB777BB6EC57AFAD4E183FCA57151654_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_m9D6B4042B923127DEA4A2CAA3E35EED37D75B3D0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mA86928BC888E342D2C2644535E3399952F5077ED_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_Light_t0E702BA5766531A8E1C1C7B952BD4B76502DE877_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_MinMaxCurve_t1C147718750ACBECE5D2B7F545D2A434A3C5409B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_int_t05A5E7A96442F23CE33E24A71CD349372A70E0C3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral072FD16FCD5FDEE6DF9288BBCA5AFBFA16B04581);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1057AAF5EE3CDF423CF6BCC588476E559687CDE6);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2AC7F98E5022908E09788532C95599452352D34A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral40B9968876DFBA959A505AA3EC0E9D9D26C14E45);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4845015737DC41475709911228278216EE4DC3AF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral509D57D2D3AC4C6FAE8D21D19FF2B9D787C81954);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral52D353FB908B8123B513952855EB88F081A1A06A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral60126327537B7B8E6EE33C43FE0C5CA8BCC3A06A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral77682CE598EDE490DCDE276E250422EA9BEA739F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral93C208E83E88E77020CE91612101CB879A8EE914);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA2DB56FF90ECEEEC49C5E8C66FCD72DF2771D010);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B);
		s_Il2CppMethodInitialized = true;
	}
	LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	uint32_t V_2 = 0;
	{
		// var instance = (UnityEngine.ParticleSystem.LightsModule)obj;
		RuntimeObject* L_0 = ___obj1;
		V_0 = ((*(LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E*)((LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E*)(LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E*)UnBox(L_0, LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E_il2cpp_TypeInfo_var))));
		goto IL_02bb;
	}

IL_000c:
	{
		String_t* L_1 = V_1;
		uint32_t L_2;
		L_2 = U3CPrivateImplementationDetailsU3E_ComputeStringHash_m6EA1F233618497AEFF8902A5EDFA24C74E2F2876(L_1, NULL);
		V_2 = L_2;
		uint32_t L_3 = V_2;
		if ((!(((uint32_t)L_3) <= ((uint32_t)((int32_t)-1604400485)))))
		{
			goto IL_006f;
		}
	}
	{
		uint32_t L_4 = V_2;
		if ((!(((uint32_t)L_4) <= ((uint32_t)((int32_t)680602789)))))
		{
			goto IL_0049;
		}
	}
	{
		uint32_t L_5 = V_2;
		if ((((int32_t)L_5) == ((int32_t)((int32_t)49525662))))
		{
			goto IL_00ba;
		}
	}
	{
		uint32_t L_6 = V_2;
		if ((((int32_t)L_6) == ((int32_t)((int32_t)258704408))))
		{
			goto IL_0138;
		}
	}
	{
		uint32_t L_7 = V_2;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)680602789))))
		{
			goto IL_00e4;
		}
	}
	{
		goto IL_02b5;
	}

IL_0049:
	{
		uint32_t L_8 = V_2;
		if ((((int32_t)L_8) == ((int32_t)((int32_t)2057398597))))
		{
			goto IL_0162;
		}
	}
	{
		uint32_t L_9 = V_2;
		if ((((int32_t)L_9) == ((int32_t)((int32_t)-2057050870))))
		{
			goto IL_0177;
		}
	}
	{
		uint32_t L_10 = V_2;
		if ((((int32_t)L_10) == ((int32_t)((int32_t)-1604400485))))
		{
			goto IL_0123;
		}
	}
	{
		goto IL_02b5;
	}

IL_006f:
	{
		uint32_t L_11 = V_2;
		if ((!(((uint32_t)L_11) <= ((uint32_t)((int32_t)-667110935)))))
		{
			goto IL_0097;
		}
	}
	{
		uint32_t L_12 = V_2;
		if ((((int32_t)L_12) == ((int32_t)((int32_t)-1055777148))))
		{
			goto IL_00cf;
		}
	}
	{
		uint32_t L_13 = V_2;
		if ((((int32_t)L_13) == ((int32_t)((int32_t)-796669776))))
		{
			goto IL_01a1;
		}
	}
	{
		uint32_t L_14 = V_2;
		if ((((int32_t)L_14) == ((int32_t)((int32_t)-667110935))))
		{
			goto IL_010e;
		}
	}
	{
		goto IL_02b5;
	}

IL_0097:
	{
		uint32_t L_15 = V_2;
		if ((((int32_t)L_15) == ((int32_t)((int32_t)-493019601))))
		{
			goto IL_00f9;
		}
	}
	{
		uint32_t L_16 = V_2;
		if ((((int32_t)L_16) == ((int32_t)((int32_t)-86242094))))
		{
			goto IL_014d;
		}
	}
	{
		uint32_t L_17 = V_2;
		if ((((int32_t)L_17) == ((int32_t)((int32_t)-24986963))))
		{
			goto IL_018c;
		}
	}
	{
		goto IL_02b5;
	}

IL_00ba:
	{
		String_t* L_18 = V_1;
		bool L_19;
		L_19 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_18, _stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B, NULL);
		if (L_19)
		{
			goto IL_01b6;
		}
	}
	{
		goto IL_02b5;
	}

IL_00cf:
	{
		String_t* L_20 = V_1;
		bool L_21;
		L_21 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_20, _stringLiteral60126327537B7B8E6EE33C43FE0C5CA8BCC3A06A, NULL);
		if (L_21)
		{
			goto IL_01cd;
		}
	}
	{
		goto IL_02b5;
	}

IL_00e4:
	{
		String_t* L_22 = V_1;
		bool L_23;
		L_23 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_22, _stringLiteral509D57D2D3AC4C6FAE8D21D19FF2B9D787C81954, NULL);
		if (L_23)
		{
			goto IL_01e4;
		}
	}
	{
		goto IL_02b5;
	}

IL_00f9:
	{
		String_t* L_24 = V_1;
		bool L_25;
		L_25 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_24, _stringLiteral1057AAF5EE3CDF423CF6BCC588476E559687CDE6, NULL);
		if (L_25)
		{
			goto IL_01fb;
		}
	}
	{
		goto IL_02b5;
	}

IL_010e:
	{
		String_t* L_26 = V_1;
		bool L_27;
		L_27 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_26, _stringLiteral2AC7F98E5022908E09788532C95599452352D34A, NULL);
		if (L_27)
		{
			goto IL_0212;
		}
	}
	{
		goto IL_02b5;
	}

IL_0123:
	{
		String_t* L_28 = V_1;
		bool L_29;
		L_29 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_28, _stringLiteral93C208E83E88E77020CE91612101CB879A8EE914, NULL);
		if (L_29)
		{
			goto IL_0229;
		}
	}
	{
		goto IL_02b5;
	}

IL_0138:
	{
		String_t* L_30 = V_1;
		bool L_31;
		L_31 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_30, _stringLiteral072FD16FCD5FDEE6DF9288BBCA5AFBFA16B04581, NULL);
		if (L_31)
		{
			goto IL_023d;
		}
	}
	{
		goto IL_02b5;
	}

IL_014d:
	{
		String_t* L_32 = V_1;
		bool L_33;
		L_33 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_32, _stringLiteral4845015737DC41475709911228278216EE4DC3AF, NULL);
		if (L_33)
		{
			goto IL_0251;
		}
	}
	{
		goto IL_02b5;
	}

IL_0162:
	{
		String_t* L_34 = V_1;
		bool L_35;
		L_35 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_34, _stringLiteralA2DB56FF90ECEEEC49C5E8C66FCD72DF2771D010, NULL);
		if (L_35)
		{
			goto IL_0265;
		}
	}
	{
		goto IL_02b5;
	}

IL_0177:
	{
		String_t* L_36 = V_1;
		bool L_37;
		L_37 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_36, _stringLiteral40B9968876DFBA959A505AA3EC0E9D9D26C14E45, NULL);
		if (L_37)
		{
			goto IL_0279;
		}
	}
	{
		goto IL_02b5;
	}

IL_018c:
	{
		String_t* L_38 = V_1;
		bool L_39;
		L_39 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_38, _stringLiteral77682CE598EDE490DCDE276E250422EA9BEA739F, NULL);
		if (L_39)
		{
			goto IL_028d;
		}
	}
	{
		goto IL_02b5;
	}

IL_01a1:
	{
		String_t* L_40 = V_1;
		bool L_41;
		L_41 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_40, _stringLiteral52D353FB908B8123B513952855EB88F081A1A06A, NULL);
		if (L_41)
		{
			goto IL_02a1;
		}
	}
	{
		goto IL_02b5;
	}

IL_01b6:
	{
		// instance.enabled = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_42 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_43 = ((ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_42);
		bool L_44;
		L_44 = GenericVirtualFuncInvoker1< bool, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mFFB70EE53D8CD0255A4E599780F62A3EB1520E83_RuntimeMethod_var, L_42, L_43);
		LightsModule_set_enabled_mCA61408EE4B83423BB92B032567BA63005379DCE((&V_0), L_44, NULL);
		// break;
		goto IL_02bb;
	}

IL_01cd:
	{
		// instance.ratio = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_45 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_46 = ((ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_45);
		float L_47;
		L_47 = GenericVirtualFuncInvoker1< float, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mA86928BC888E342D2C2644535E3399952F5077ED_RuntimeMethod_var, L_45, L_46);
		LightsModule_set_ratio_mE1B9F5C45EB2E0822BF47F28F0510B5ECF2C87FC((&V_0), L_47, NULL);
		// break;
		goto IL_02bb;
	}

IL_01e4:
	{
		// instance.useRandomDistribution = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_48 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_49 = ((ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_48);
		bool L_50;
		L_50 = GenericVirtualFuncInvoker1< bool, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mFFB70EE53D8CD0255A4E599780F62A3EB1520E83_RuntimeMethod_var, L_48, L_49);
		LightsModule_set_useRandomDistribution_mB5EEC3EE5E510F2F27C779C25FD584B6FEA879D9((&V_0), L_50, NULL);
		// break;
		goto IL_02bb;
	}

IL_01fb:
	{
		// instance.light = reader.Read<UnityEngine.Light>(ES3Type_Light.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_51 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_52 = ((ES3Type_Light_t0E702BA5766531A8E1C1C7B952BD4B76502DE877_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Light_t0E702BA5766531A8E1C1C7B952BD4B76502DE877_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_51);
		Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* L_53;
		L_53 = GenericVirtualFuncInvoker1< Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3*, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisLight_t1E68479B7782AF2050FAA02A5DC612FD034F18F3_mB032FAFBAB777BB6EC57AFAD4E183FCA57151654_RuntimeMethod_var, L_51, L_52);
		LightsModule_set_light_m54F655151E83BA1CF8ECDF92B8D18F06463B2D59((&V_0), L_53, NULL);
		// break;
		goto IL_02bb;
	}

IL_0212:
	{
		// instance.useParticleColor = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_54 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_55 = ((ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_54);
		bool L_56;
		L_56 = GenericVirtualFuncInvoker1< bool, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mFFB70EE53D8CD0255A4E599780F62A3EB1520E83_RuntimeMethod_var, L_54, L_55);
		LightsModule_set_useParticleColor_mC91DC556C20A786D4E8190842094B557204C74B0((&V_0), L_56, NULL);
		// break;
		goto IL_02bb;
	}

IL_0229:
	{
		// instance.sizeAffectsRange = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_57 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_58 = ((ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_57);
		bool L_59;
		L_59 = GenericVirtualFuncInvoker1< bool, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mFFB70EE53D8CD0255A4E599780F62A3EB1520E83_RuntimeMethod_var, L_57, L_58);
		LightsModule_set_sizeAffectsRange_mBAAE49AC54AE79237649DD0AA715F43B0510356A((&V_0), L_59, NULL);
		// break;
		goto IL_02bb;
	}

IL_023d:
	{
		// instance.alphaAffectsIntensity = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_60 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_61 = ((ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_60);
		bool L_62;
		L_62 = GenericVirtualFuncInvoker1< bool, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mFFB70EE53D8CD0255A4E599780F62A3EB1520E83_RuntimeMethod_var, L_60, L_61);
		LightsModule_set_alphaAffectsIntensity_m79B804EA7C98543C733F3E0355DB01B8E1845995((&V_0), L_62, NULL);
		// break;
		goto IL_02bb;
	}

IL_0251:
	{
		// instance.range = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_63 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_64 = ((ES3Type_MinMaxCurve_t1C147718750ACBECE5D2B7F545D2A434A3C5409B_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t1C147718750ACBECE5D2B7F545D2A434A3C5409B_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_63);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_65;
		L_65 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_m9D6B4042B923127DEA4A2CAA3E35EED37D75B3D0_RuntimeMethod_var, L_63, L_64);
		LightsModule_set_range_m3DA6A5EE3021CB5A4787AEAE4DCA675E3050C5E4((&V_0), L_65, NULL);
		// break;
		goto IL_02bb;
	}

IL_0265:
	{
		// instance.rangeMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_66 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_67 = ((ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_66);
		float L_68;
		L_68 = GenericVirtualFuncInvoker1< float, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mA86928BC888E342D2C2644535E3399952F5077ED_RuntimeMethod_var, L_66, L_67);
		LightsModule_set_rangeMultiplier_m881D705C505C908F9F05F24EFBFC61DD2F01B23F((&V_0), L_68, NULL);
		// break;
		goto IL_02bb;
	}

IL_0279:
	{
		// instance.intensity = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_69 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_70 = ((ES3Type_MinMaxCurve_t1C147718750ACBECE5D2B7F545D2A434A3C5409B_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t1C147718750ACBECE5D2B7F545D2A434A3C5409B_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_69);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_71;
		L_71 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_m9D6B4042B923127DEA4A2CAA3E35EED37D75B3D0_RuntimeMethod_var, L_69, L_70);
		LightsModule_set_intensity_mD1D7564D1ADD14C5755043F1146A8D56C228A519((&V_0), L_71, NULL);
		// break;
		goto IL_02bb;
	}

IL_028d:
	{
		// instance.intensityMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_72 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_73 = ((ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_72);
		float L_74;
		L_74 = GenericVirtualFuncInvoker1< float, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mA86928BC888E342D2C2644535E3399952F5077ED_RuntimeMethod_var, L_72, L_73);
		LightsModule_set_intensityMultiplier_m79E9E71E14F02B6BE7C4EB6C5B3BA8921D1B29F8((&V_0), L_74, NULL);
		// break;
		goto IL_02bb;
	}

IL_02a1:
	{
		// instance.maxLights = reader.Read<System.Int32>(ES3Type_int.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_75 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_76 = ((ES3Type_int_t05A5E7A96442F23CE33E24A71CD349372A70E0C3_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_int_t05A5E7A96442F23CE33E24A71CD349372A70E0C3_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_75);
		int32_t L_77;
		L_77 = GenericVirtualFuncInvoker1< int32_t, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mEFCC4D52DD5B822D3561A53591AE11CDB25CDB6F_RuntimeMethod_var, L_75, L_76);
		LightsModule_set_maxLights_mC423F1C129DAB69F2F145F6AA8160DEE8176F4EC((&V_0), L_77, NULL);
		// break;
		goto IL_02bb;
	}

IL_02b5:
	{
		// reader.Skip();
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_78 = ___reader0;
		NullCheck(L_78);
		VirtualActionInvoker0::Invoke(41 /* System.Void ES3Reader::Skip() */, L_78);
	}

IL_02bb:
	{
		// while((propertyName = reader.ReadPropertyName()) != null)
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_79 = ___reader0;
		NullCheck(L_79);
		String_t* L_80;
		L_80 = VirtualFuncInvoker0< String_t* >::Invoke(21 /* System.String ES3Reader::ReadPropertyName() */, L_79);
		String_t* L_81 = L_80;
		V_1 = L_81;
		if (L_81)
		{
			goto IL_000c;
		}
	}
	{
		// }
		return;
	}
}
// System.Void ES3Types.ES3Type_LightsModule::ReadInto<UnityEngine.ParticleSystem/EmissionModule>(ES3Reader,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ES3Type_LightsModule_ReadInto_TisEmissionModule_t0F469FA4A08003F6D9C610D2F716A9DFDB9A3678_mC01E7013977D01D65E2724CBE2AA2ED20D424EEC_gshared (ES3Type_LightsModule_t37A9192D3FFC77124809D0623E14839D7E0C86A6* __this, ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* ___reader0, RuntimeObject* ___obj1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mFFB70EE53D8CD0255A4E599780F62A3EB1520E83_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mEFCC4D52DD5B822D3561A53591AE11CDB25CDB6F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisLight_t1E68479B7782AF2050FAA02A5DC612FD034F18F3_mB032FAFBAB777BB6EC57AFAD4E183FCA57151654_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_m9D6B4042B923127DEA4A2CAA3E35EED37D75B3D0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mA86928BC888E342D2C2644535E3399952F5077ED_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_Light_t0E702BA5766531A8E1C1C7B952BD4B76502DE877_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_MinMaxCurve_t1C147718750ACBECE5D2B7F545D2A434A3C5409B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_int_t05A5E7A96442F23CE33E24A71CD349372A70E0C3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral072FD16FCD5FDEE6DF9288BBCA5AFBFA16B04581);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1057AAF5EE3CDF423CF6BCC588476E559687CDE6);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2AC7F98E5022908E09788532C95599452352D34A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral40B9968876DFBA959A505AA3EC0E9D9D26C14E45);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4845015737DC41475709911228278216EE4DC3AF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral509D57D2D3AC4C6FAE8D21D19FF2B9D787C81954);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral52D353FB908B8123B513952855EB88F081A1A06A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral60126327537B7B8E6EE33C43FE0C5CA8BCC3A06A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral77682CE598EDE490DCDE276E250422EA9BEA739F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral93C208E83E88E77020CE91612101CB879A8EE914);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA2DB56FF90ECEEEC49C5E8C66FCD72DF2771D010);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B);
		s_Il2CppMethodInitialized = true;
	}
	LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	uint32_t V_2 = 0;
	{
		// var instance = (UnityEngine.ParticleSystem.LightsModule)obj;
		RuntimeObject* L_0 = ___obj1;
		V_0 = ((*(LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E*)((LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E*)(LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E*)UnBox(L_0, LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E_il2cpp_TypeInfo_var))));
		goto IL_02bb;
	}

IL_000c:
	{
		String_t* L_1 = V_1;
		uint32_t L_2;
		L_2 = U3CPrivateImplementationDetailsU3E_ComputeStringHash_m6EA1F233618497AEFF8902A5EDFA24C74E2F2876(L_1, NULL);
		V_2 = L_2;
		uint32_t L_3 = V_2;
		if ((!(((uint32_t)L_3) <= ((uint32_t)((int32_t)-1604400485)))))
		{
			goto IL_006f;
		}
	}
	{
		uint32_t L_4 = V_2;
		if ((!(((uint32_t)L_4) <= ((uint32_t)((int32_t)680602789)))))
		{
			goto IL_0049;
		}
	}
	{
		uint32_t L_5 = V_2;
		if ((((int32_t)L_5) == ((int32_t)((int32_t)49525662))))
		{
			goto IL_00ba;
		}
	}
	{
		uint32_t L_6 = V_2;
		if ((((int32_t)L_6) == ((int32_t)((int32_t)258704408))))
		{
			goto IL_0138;
		}
	}
	{
		uint32_t L_7 = V_2;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)680602789))))
		{
			goto IL_00e4;
		}
	}
	{
		goto IL_02b5;
	}

IL_0049:
	{
		uint32_t L_8 = V_2;
		if ((((int32_t)L_8) == ((int32_t)((int32_t)2057398597))))
		{
			goto IL_0162;
		}
	}
	{
		uint32_t L_9 = V_2;
		if ((((int32_t)L_9) == ((int32_t)((int32_t)-2057050870))))
		{
			goto IL_0177;
		}
	}
	{
		uint32_t L_10 = V_2;
		if ((((int32_t)L_10) == ((int32_t)((int32_t)-1604400485))))
		{
			goto IL_0123;
		}
	}
	{
		goto IL_02b5;
	}

IL_006f:
	{
		uint32_t L_11 = V_2;
		if ((!(((uint32_t)L_11) <= ((uint32_t)((int32_t)-667110935)))))
		{
			goto IL_0097;
		}
	}
	{
		uint32_t L_12 = V_2;
		if ((((int32_t)L_12) == ((int32_t)((int32_t)-1055777148))))
		{
			goto IL_00cf;
		}
	}
	{
		uint32_t L_13 = V_2;
		if ((((int32_t)L_13) == ((int32_t)((int32_t)-796669776))))
		{
			goto IL_01a1;
		}
	}
	{
		uint32_t L_14 = V_2;
		if ((((int32_t)L_14) == ((int32_t)((int32_t)-667110935))))
		{
			goto IL_010e;
		}
	}
	{
		goto IL_02b5;
	}

IL_0097:
	{
		uint32_t L_15 = V_2;
		if ((((int32_t)L_15) == ((int32_t)((int32_t)-493019601))))
		{
			goto IL_00f9;
		}
	}
	{
		uint32_t L_16 = V_2;
		if ((((int32_t)L_16) == ((int32_t)((int32_t)-86242094))))
		{
			goto IL_014d;
		}
	}
	{
		uint32_t L_17 = V_2;
		if ((((int32_t)L_17) == ((int32_t)((int32_t)-24986963))))
		{
			goto IL_018c;
		}
	}
	{
		goto IL_02b5;
	}

IL_00ba:
	{
		String_t* L_18 = V_1;
		bool L_19;
		L_19 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_18, _stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B, NULL);
		if (L_19)
		{
			goto IL_01b6;
		}
	}
	{
		goto IL_02b5;
	}

IL_00cf:
	{
		String_t* L_20 = V_1;
		bool L_21;
		L_21 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_20, _stringLiteral60126327537B7B8E6EE33C43FE0C5CA8BCC3A06A, NULL);
		if (L_21)
		{
			goto IL_01cd;
		}
	}
	{
		goto IL_02b5;
	}

IL_00e4:
	{
		String_t* L_22 = V_1;
		bool L_23;
		L_23 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_22, _stringLiteral509D57D2D3AC4C6FAE8D21D19FF2B9D787C81954, NULL);
		if (L_23)
		{
			goto IL_01e4;
		}
	}
	{
		goto IL_02b5;
	}

IL_00f9:
	{
		String_t* L_24 = V_1;
		bool L_25;
		L_25 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_24, _stringLiteral1057AAF5EE3CDF423CF6BCC588476E559687CDE6, NULL);
		if (L_25)
		{
			goto IL_01fb;
		}
	}
	{
		goto IL_02b5;
	}

IL_010e:
	{
		String_t* L_26 = V_1;
		bool L_27;
		L_27 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_26, _stringLiteral2AC7F98E5022908E09788532C95599452352D34A, NULL);
		if (L_27)
		{
			goto IL_0212;
		}
	}
	{
		goto IL_02b5;
	}

IL_0123:
	{
		String_t* L_28 = V_1;
		bool L_29;
		L_29 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_28, _stringLiteral93C208E83E88E77020CE91612101CB879A8EE914, NULL);
		if (L_29)
		{
			goto IL_0229;
		}
	}
	{
		goto IL_02b5;
	}

IL_0138:
	{
		String_t* L_30 = V_1;
		bool L_31;
		L_31 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_30, _stringLiteral072FD16FCD5FDEE6DF9288BBCA5AFBFA16B04581, NULL);
		if (L_31)
		{
			goto IL_023d;
		}
	}
	{
		goto IL_02b5;
	}

IL_014d:
	{
		String_t* L_32 = V_1;
		bool L_33;
		L_33 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_32, _stringLiteral4845015737DC41475709911228278216EE4DC3AF, NULL);
		if (L_33)
		{
			goto IL_0251;
		}
	}
	{
		goto IL_02b5;
	}

IL_0162:
	{
		String_t* L_34 = V_1;
		bool L_35;
		L_35 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_34, _stringLiteralA2DB56FF90ECEEEC49C5E8C66FCD72DF2771D010, NULL);
		if (L_35)
		{
			goto IL_0265;
		}
	}
	{
		goto IL_02b5;
	}

IL_0177:
	{
		String_t* L_36 = V_1;
		bool L_37;
		L_37 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_36, _stringLiteral40B9968876DFBA959A505AA3EC0E9D9D26C14E45, NULL);
		if (L_37)
		{
			goto IL_0279;
		}
	}
	{
		goto IL_02b5;
	}

IL_018c:
	{
		String_t* L_38 = V_1;
		bool L_39;
		L_39 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_38, _stringLiteral77682CE598EDE490DCDE276E250422EA9BEA739F, NULL);
		if (L_39)
		{
			goto IL_028d;
		}
	}
	{
		goto IL_02b5;
	}

IL_01a1:
	{
		String_t* L_40 = V_1;
		bool L_41;
		L_41 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_40, _stringLiteral52D353FB908B8123B513952855EB88F081A1A06A, NULL);
		if (L_41)
		{
			goto IL_02a1;
		}
	}
	{
		goto IL_02b5;
	}

IL_01b6:
	{
		// instance.enabled = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_42 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_43 = ((ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_42);
		bool L_44;
		L_44 = GenericVirtualFuncInvoker1< bool, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mFFB70EE53D8CD0255A4E599780F62A3EB1520E83_RuntimeMethod_var, L_42, L_43);
		LightsModule_set_enabled_mCA61408EE4B83423BB92B032567BA63005379DCE((&V_0), L_44, NULL);
		// break;
		goto IL_02bb;
	}

IL_01cd:
	{
		// instance.ratio = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_45 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_46 = ((ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_45);
		float L_47;
		L_47 = GenericVirtualFuncInvoker1< float, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mA86928BC888E342D2C2644535E3399952F5077ED_RuntimeMethod_var, L_45, L_46);
		LightsModule_set_ratio_mE1B9F5C45EB2E0822BF47F28F0510B5ECF2C87FC((&V_0), L_47, NULL);
		// break;
		goto IL_02bb;
	}

IL_01e4:
	{
		// instance.useRandomDistribution = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_48 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_49 = ((ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_48);
		bool L_50;
		L_50 = GenericVirtualFuncInvoker1< bool, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mFFB70EE53D8CD0255A4E599780F62A3EB1520E83_RuntimeMethod_var, L_48, L_49);
		LightsModule_set_useRandomDistribution_mB5EEC3EE5E510F2F27C779C25FD584B6FEA879D9((&V_0), L_50, NULL);
		// break;
		goto IL_02bb;
	}

IL_01fb:
	{
		// instance.light = reader.Read<UnityEngine.Light>(ES3Type_Light.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_51 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_52 = ((ES3Type_Light_t0E702BA5766531A8E1C1C7B952BD4B76502DE877_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Light_t0E702BA5766531A8E1C1C7B952BD4B76502DE877_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_51);
		Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* L_53;
		L_53 = GenericVirtualFuncInvoker1< Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3*, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisLight_t1E68479B7782AF2050FAA02A5DC612FD034F18F3_mB032FAFBAB777BB6EC57AFAD4E183FCA57151654_RuntimeMethod_var, L_51, L_52);
		LightsModule_set_light_m54F655151E83BA1CF8ECDF92B8D18F06463B2D59((&V_0), L_53, NULL);
		// break;
		goto IL_02bb;
	}

IL_0212:
	{
		// instance.useParticleColor = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_54 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_55 = ((ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_54);
		bool L_56;
		L_56 = GenericVirtualFuncInvoker1< bool, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mFFB70EE53D8CD0255A4E599780F62A3EB1520E83_RuntimeMethod_var, L_54, L_55);
		LightsModule_set_useParticleColor_mC91DC556C20A786D4E8190842094B557204C74B0((&V_0), L_56, NULL);
		// break;
		goto IL_02bb;
	}

IL_0229:
	{
		// instance.sizeAffectsRange = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_57 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_58 = ((ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_57);
		bool L_59;
		L_59 = GenericVirtualFuncInvoker1< bool, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mFFB70EE53D8CD0255A4E599780F62A3EB1520E83_RuntimeMethod_var, L_57, L_58);
		LightsModule_set_sizeAffectsRange_mBAAE49AC54AE79237649DD0AA715F43B0510356A((&V_0), L_59, NULL);
		// break;
		goto IL_02bb;
	}

IL_023d:
	{
		// instance.alphaAffectsIntensity = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_60 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_61 = ((ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_60);
		bool L_62;
		L_62 = GenericVirtualFuncInvoker1< bool, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mFFB70EE53D8CD0255A4E599780F62A3EB1520E83_RuntimeMethod_var, L_60, L_61);
		LightsModule_set_alphaAffectsIntensity_m79B804EA7C98543C733F3E0355DB01B8E1845995((&V_0), L_62, NULL);
		// break;
		goto IL_02bb;
	}

IL_0251:
	{
		// instance.range = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_63 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_64 = ((ES3Type_MinMaxCurve_t1C147718750ACBECE5D2B7F545D2A434A3C5409B_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t1C147718750ACBECE5D2B7F545D2A434A3C5409B_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_63);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_65;
		L_65 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_m9D6B4042B923127DEA4A2CAA3E35EED37D75B3D0_RuntimeMethod_var, L_63, L_64);
		LightsModule_set_range_m3DA6A5EE3021CB5A4787AEAE4DCA675E3050C5E4((&V_0), L_65, NULL);
		// break;
		goto IL_02bb;
	}

IL_0265:
	{
		// instance.rangeMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_66 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_67 = ((ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_66);
		float L_68;
		L_68 = GenericVirtualFuncInvoker1< float, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mA86928BC888E342D2C2644535E3399952F5077ED_RuntimeMethod_var, L_66, L_67);
		LightsModule_set_rangeMultiplier_m881D705C505C908F9F05F24EFBFC61DD2F01B23F((&V_0), L_68, NULL);
		// break;
		goto IL_02bb;
	}

IL_0279:
	{
		// instance.intensity = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_69 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_70 = ((ES3Type_MinMaxCurve_t1C147718750ACBECE5D2B7F545D2A434A3C5409B_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t1C147718750ACBECE5D2B7F545D2A434A3C5409B_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_69);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_71;
		L_71 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_m9D6B4042B923127DEA4A2CAA3E35EED37D75B3D0_RuntimeMethod_var, L_69, L_70);
		LightsModule_set_intensity_mD1D7564D1ADD14C5755043F1146A8D56C228A519((&V_0), L_71, NULL);
		// break;
		goto IL_02bb;
	}

IL_028d:
	{
		// instance.intensityMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_72 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_73 = ((ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_72);
		float L_74;
		L_74 = GenericVirtualFuncInvoker1< float, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mA86928BC888E342D2C2644535E3399952F5077ED_RuntimeMethod_var, L_72, L_73);
		LightsModule_set_intensityMultiplier_m79E9E71E14F02B6BE7C4EB6C5B3BA8921D1B29F8((&V_0), L_74, NULL);
		// break;
		goto IL_02bb;
	}

IL_02a1:
	{
		// instance.maxLights = reader.Read<System.Int32>(ES3Type_int.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_75 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_76 = ((ES3Type_int_t05A5E7A96442F23CE33E24A71CD349372A70E0C3_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_int_t05A5E7A96442F23CE33E24A71CD349372A70E0C3_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_75);
		int32_t L_77;
		L_77 = GenericVirtualFuncInvoker1< int32_t, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mEFCC4D52DD5B822D3561A53591AE11CDB25CDB6F_RuntimeMethod_var, L_75, L_76);
		LightsModule_set_maxLights_mC423F1C129DAB69F2F145F6AA8160DEE8176F4EC((&V_0), L_77, NULL);
		// break;
		goto IL_02bb;
	}

IL_02b5:
	{
		// reader.Skip();
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_78 = ___reader0;
		NullCheck(L_78);
		VirtualActionInvoker0::Invoke(41 /* System.Void ES3Reader::Skip() */, L_78);
	}

IL_02bb:
	{
		// while((propertyName = reader.ReadPropertyName()) != null)
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_79 = ___reader0;
		NullCheck(L_79);
		String_t* L_80;
		L_80 = VirtualFuncInvoker0< String_t* >::Invoke(21 /* System.String ES3Reader::ReadPropertyName() */, L_79);
		String_t* L_81 = L_80;
		V_1 = L_81;
		if (L_81)
		{
			goto IL_000c;
		}
	}
	{
		// }
		return;
	}
}
// System.Void ES3Types.ES3Type_LightsModule::ReadInto<UnityEngine.ParticleSystem/ExternalForcesModule>(ES3Reader,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ES3Type_LightsModule_ReadInto_TisExternalForcesModule_t4494E21ECF96F072432EF4DDC5F84BAF84912FC7_m26C72F9E57FAA5268B5F88A9563E8F6CE6718216_gshared (ES3Type_LightsModule_t37A9192D3FFC77124809D0623E14839D7E0C86A6* __this, ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* ___reader0, RuntimeObject* ___obj1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mFFB70EE53D8CD0255A4E599780F62A3EB1520E83_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mEFCC4D52DD5B822D3561A53591AE11CDB25CDB6F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisLight_t1E68479B7782AF2050FAA02A5DC612FD034F18F3_mB032FAFBAB777BB6EC57AFAD4E183FCA57151654_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_m9D6B4042B923127DEA4A2CAA3E35EED37D75B3D0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mA86928BC888E342D2C2644535E3399952F5077ED_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_Light_t0E702BA5766531A8E1C1C7B952BD4B76502DE877_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_MinMaxCurve_t1C147718750ACBECE5D2B7F545D2A434A3C5409B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_int_t05A5E7A96442F23CE33E24A71CD349372A70E0C3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral072FD16FCD5FDEE6DF9288BBCA5AFBFA16B04581);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1057AAF5EE3CDF423CF6BCC588476E559687CDE6);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2AC7F98E5022908E09788532C95599452352D34A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral40B9968876DFBA959A505AA3EC0E9D9D26C14E45);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4845015737DC41475709911228278216EE4DC3AF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral509D57D2D3AC4C6FAE8D21D19FF2B9D787C81954);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral52D353FB908B8123B513952855EB88F081A1A06A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral60126327537B7B8E6EE33C43FE0C5CA8BCC3A06A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral77682CE598EDE490DCDE276E250422EA9BEA739F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral93C208E83E88E77020CE91612101CB879A8EE914);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA2DB56FF90ECEEEC49C5E8C66FCD72DF2771D010);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B);
		s_Il2CppMethodInitialized = true;
	}
	LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	uint32_t V_2 = 0;
	{
		// var instance = (UnityEngine.ParticleSystem.LightsModule)obj;
		RuntimeObject* L_0 = ___obj1;
		V_0 = ((*(LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E*)((LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E*)(LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E*)UnBox(L_0, LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E_il2cpp_TypeInfo_var))));
		goto IL_02bb;
	}

IL_000c:
	{
		String_t* L_1 = V_1;
		uint32_t L_2;
		L_2 = U3CPrivateImplementationDetailsU3E_ComputeStringHash_m6EA1F233618497AEFF8902A5EDFA24C74E2F2876(L_1, NULL);
		V_2 = L_2;
		uint32_t L_3 = V_2;
		if ((!(((uint32_t)L_3) <= ((uint32_t)((int32_t)-1604400485)))))
		{
			goto IL_006f;
		}
	}
	{
		uint32_t L_4 = V_2;
		if ((!(((uint32_t)L_4) <= ((uint32_t)((int32_t)680602789)))))
		{
			goto IL_0049;
		}
	}
	{
		uint32_t L_5 = V_2;
		if ((((int32_t)L_5) == ((int32_t)((int32_t)49525662))))
		{
			goto IL_00ba;
		}
	}
	{
		uint32_t L_6 = V_2;
		if ((((int32_t)L_6) == ((int32_t)((int32_t)258704408))))
		{
			goto IL_0138;
		}
	}
	{
		uint32_t L_7 = V_2;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)680602789))))
		{
			goto IL_00e4;
		}
	}
	{
		goto IL_02b5;
	}

IL_0049:
	{
		uint32_t L_8 = V_2;
		if ((((int32_t)L_8) == ((int32_t)((int32_t)2057398597))))
		{
			goto IL_0162;
		}
	}
	{
		uint32_t L_9 = V_2;
		if ((((int32_t)L_9) == ((int32_t)((int32_t)-2057050870))))
		{
			goto IL_0177;
		}
	}
	{
		uint32_t L_10 = V_2;
		if ((((int32_t)L_10) == ((int32_t)((int32_t)-1604400485))))
		{
			goto IL_0123;
		}
	}
	{
		goto IL_02b5;
	}

IL_006f:
	{
		uint32_t L_11 = V_2;
		if ((!(((uint32_t)L_11) <= ((uint32_t)((int32_t)-667110935)))))
		{
			goto IL_0097;
		}
	}
	{
		uint32_t L_12 = V_2;
		if ((((int32_t)L_12) == ((int32_t)((int32_t)-1055777148))))
		{
			goto IL_00cf;
		}
	}
	{
		uint32_t L_13 = V_2;
		if ((((int32_t)L_13) == ((int32_t)((int32_t)-796669776))))
		{
			goto IL_01a1;
		}
	}
	{
		uint32_t L_14 = V_2;
		if ((((int32_t)L_14) == ((int32_t)((int32_t)-667110935))))
		{
			goto IL_010e;
		}
	}
	{
		goto IL_02b5;
	}

IL_0097:
	{
		uint32_t L_15 = V_2;
		if ((((int32_t)L_15) == ((int32_t)((int32_t)-493019601))))
		{
			goto IL_00f9;
		}
	}
	{
		uint32_t L_16 = V_2;
		if ((((int32_t)L_16) == ((int32_t)((int32_t)-86242094))))
		{
			goto IL_014d;
		}
	}
	{
		uint32_t L_17 = V_2;
		if ((((int32_t)L_17) == ((int32_t)((int32_t)-24986963))))
		{
			goto IL_018c;
		}
	}
	{
		goto IL_02b5;
	}

IL_00ba:
	{
		String_t* L_18 = V_1;
		bool L_19;
		L_19 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_18, _stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B, NULL);
		if (L_19)
		{
			goto IL_01b6;
		}
	}
	{
		goto IL_02b5;
	}

IL_00cf:
	{
		String_t* L_20 = V_1;
		bool L_21;
		L_21 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_20, _stringLiteral60126327537B7B8E6EE33C43FE0C5CA8BCC3A06A, NULL);
		if (L_21)
		{
			goto IL_01cd;
		}
	}
	{
		goto IL_02b5;
	}

IL_00e4:
	{
		String_t* L_22 = V_1;
		bool L_23;
		L_23 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_22, _stringLiteral509D57D2D3AC4C6FAE8D21D19FF2B9D787C81954, NULL);
		if (L_23)
		{
			goto IL_01e4;
		}
	}
	{
		goto IL_02b5;
	}

IL_00f9:
	{
		String_t* L_24 = V_1;
		bool L_25;
		L_25 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_24, _stringLiteral1057AAF5EE3CDF423CF6BCC588476E559687CDE6, NULL);
		if (L_25)
		{
			goto IL_01fb;
		}
	}
	{
		goto IL_02b5;
	}

IL_010e:
	{
		String_t* L_26 = V_1;
		bool L_27;
		L_27 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_26, _stringLiteral2AC7F98E5022908E09788532C95599452352D34A, NULL);
		if (L_27)
		{
			goto IL_0212;
		}
	}
	{
		goto IL_02b5;
	}

IL_0123:
	{
		String_t* L_28 = V_1;
		bool L_29;
		L_29 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_28, _stringLiteral93C208E83E88E77020CE91612101CB879A8EE914, NULL);
		if (L_29)
		{
			goto IL_0229;
		}
	}
	{
		goto IL_02b5;
	}

IL_0138:
	{
		String_t* L_30 = V_1;
		bool L_31;
		L_31 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_30, _stringLiteral072FD16FCD5FDEE6DF9288BBCA5AFBFA16B04581, NULL);
		if (L_31)
		{
			goto IL_023d;
		}
	}
	{
		goto IL_02b5;
	}

IL_014d:
	{
		String_t* L_32 = V_1;
		bool L_33;
		L_33 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_32, _stringLiteral4845015737DC41475709911228278216EE4DC3AF, NULL);
		if (L_33)
		{
			goto IL_0251;
		}
	}
	{
		goto IL_02b5;
	}

IL_0162:
	{
		String_t* L_34 = V_1;
		bool L_35;
		L_35 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_34, _stringLiteralA2DB56FF90ECEEEC49C5E8C66FCD72DF2771D010, NULL);
		if (L_35)
		{
			goto IL_0265;
		}
	}
	{
		goto IL_02b5;
	}

IL_0177:
	{
		String_t* L_36 = V_1;
		bool L_37;
		L_37 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_36, _stringLiteral40B9968876DFBA959A505AA3EC0E9D9D26C14E45, NULL);
		if (L_37)
		{
			goto IL_0279;
		}
	}
	{
		goto IL_02b5;
	}

IL_018c:
	{
		String_t* L_38 = V_1;
		bool L_39;
		L_39 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_38, _stringLiteral77682CE598EDE490DCDE276E250422EA9BEA739F, NULL);
		if (L_39)
		{
			goto IL_028d;
		}
	}
	{
		goto IL_02b5;
	}

IL_01a1:
	{
		String_t* L_40 = V_1;
		bool L_41;
		L_41 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_40, _stringLiteral52D353FB908B8123B513952855EB88F081A1A06A, NULL);
		if (L_41)
		{
			goto IL_02a1;
		}
	}
	{
		goto IL_02b5;
	}

IL_01b6:
	{
		// instance.enabled = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_42 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_43 = ((ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_42);
		bool L_44;
		L_44 = GenericVirtualFuncInvoker1< bool, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mFFB70EE53D8CD0255A4E599780F62A3EB1520E83_RuntimeMethod_var, L_42, L_43);
		LightsModule_set_enabled_mCA61408EE4B83423BB92B032567BA63005379DCE((&V_0), L_44, NULL);
		// break;
		goto IL_02bb;
	}

IL_01cd:
	{
		// instance.ratio = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_45 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_46 = ((ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_45);
		float L_47;
		L_47 = GenericVirtualFuncInvoker1< float, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mA86928BC888E342D2C2644535E3399952F5077ED_RuntimeMethod_var, L_45, L_46);
		LightsModule_set_ratio_mE1B9F5C45EB2E0822BF47F28F0510B5ECF2C87FC((&V_0), L_47, NULL);
		// break;
		goto IL_02bb;
	}

IL_01e4:
	{
		// instance.useRandomDistribution = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_48 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_49 = ((ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_48);
		bool L_50;
		L_50 = GenericVirtualFuncInvoker1< bool, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mFFB70EE53D8CD0255A4E599780F62A3EB1520E83_RuntimeMethod_var, L_48, L_49);
		LightsModule_set_useRandomDistribution_mB5EEC3EE5E510F2F27C779C25FD584B6FEA879D9((&V_0), L_50, NULL);
		// break;
		goto IL_02bb;
	}

IL_01fb:
	{
		// instance.light = reader.Read<UnityEngine.Light>(ES3Type_Light.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_51 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_52 = ((ES3Type_Light_t0E702BA5766531A8E1C1C7B952BD4B76502DE877_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Light_t0E702BA5766531A8E1C1C7B952BD4B76502DE877_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_51);
		Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* L_53;
		L_53 = GenericVirtualFuncInvoker1< Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3*, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisLight_t1E68479B7782AF2050FAA02A5DC612FD034F18F3_mB032FAFBAB777BB6EC57AFAD4E183FCA57151654_RuntimeMethod_var, L_51, L_52);
		LightsModule_set_light_m54F655151E83BA1CF8ECDF92B8D18F06463B2D59((&V_0), L_53, NULL);
		// break;
		goto IL_02bb;
	}

IL_0212:
	{
		// instance.useParticleColor = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_54 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_55 = ((ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_54);
		bool L_56;
		L_56 = GenericVirtualFuncInvoker1< bool, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mFFB70EE53D8CD0255A4E599780F62A3EB1520E83_RuntimeMethod_var, L_54, L_55);
		LightsModule_set_useParticleColor_mC91DC556C20A786D4E8190842094B557204C74B0((&V_0), L_56, NULL);
		// break;
		goto IL_02bb;
	}

IL_0229:
	{
		// instance.sizeAffectsRange = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_57 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_58 = ((ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_57);
		bool L_59;
		L_59 = GenericVirtualFuncInvoker1< bool, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mFFB70EE53D8CD0255A4E599780F62A3EB1520E83_RuntimeMethod_var, L_57, L_58);
		LightsModule_set_sizeAffectsRange_mBAAE49AC54AE79237649DD0AA715F43B0510356A((&V_0), L_59, NULL);
		// break;
		goto IL_02bb;
	}

IL_023d:
	{
		// instance.alphaAffectsIntensity = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_60 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_61 = ((ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_60);
		bool L_62;
		L_62 = GenericVirtualFuncInvoker1< bool, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mFFB70EE53D8CD0255A4E599780F62A3EB1520E83_RuntimeMethod_var, L_60, L_61);
		LightsModule_set_alphaAffectsIntensity_m79B804EA7C98543C733F3E0355DB01B8E1845995((&V_0), L_62, NULL);
		// break;
		goto IL_02bb;
	}

IL_0251:
	{
		// instance.range = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_63 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_64 = ((ES3Type_MinMaxCurve_t1C147718750ACBECE5D2B7F545D2A434A3C5409B_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t1C147718750ACBECE5D2B7F545D2A434A3C5409B_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_63);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_65;
		L_65 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_m9D6B4042B923127DEA4A2CAA3E35EED37D75B3D0_RuntimeMethod_var, L_63, L_64);
		LightsModule_set_range_m3DA6A5EE3021CB5A4787AEAE4DCA675E3050C5E4((&V_0), L_65, NULL);
		// break;
		goto IL_02bb;
	}

IL_0265:
	{
		// instance.rangeMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_66 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_67 = ((ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_66);
		float L_68;
		L_68 = GenericVirtualFuncInvoker1< float, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mA86928BC888E342D2C2644535E3399952F5077ED_RuntimeMethod_var, L_66, L_67);
		LightsModule_set_rangeMultiplier_m881D705C505C908F9F05F24EFBFC61DD2F01B23F((&V_0), L_68, NULL);
		// break;
		goto IL_02bb;
	}

IL_0279:
	{
		// instance.intensity = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_69 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_70 = ((ES3Type_MinMaxCurve_t1C147718750ACBECE5D2B7F545D2A434A3C5409B_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t1C147718750ACBECE5D2B7F545D2A434A3C5409B_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_69);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_71;
		L_71 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_m9D6B4042B923127DEA4A2CAA3E35EED37D75B3D0_RuntimeMethod_var, L_69, L_70);
		LightsModule_set_intensity_mD1D7564D1ADD14C5755043F1146A8D56C228A519((&V_0), L_71, NULL);
		// break;
		goto IL_02bb;
	}

IL_028d:
	{
		// instance.intensityMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_72 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_73 = ((ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_72);
		float L_74;
		L_74 = GenericVirtualFuncInvoker1< float, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mA86928BC888E342D2C2644535E3399952F5077ED_RuntimeMethod_var, L_72, L_73);
		LightsModule_set_intensityMultiplier_m79E9E71E14F02B6BE7C4EB6C5B3BA8921D1B29F8((&V_0), L_74, NULL);
		// break;
		goto IL_02bb;
	}

IL_02a1:
	{
		// instance.maxLights = reader.Read<System.Int32>(ES3Type_int.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_75 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_76 = ((ES3Type_int_t05A5E7A96442F23CE33E24A71CD349372A70E0C3_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_int_t05A5E7A96442F23CE33E24A71CD349372A70E0C3_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_75);
		int32_t L_77;
		L_77 = GenericVirtualFuncInvoker1< int32_t, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mEFCC4D52DD5B822D3561A53591AE11CDB25CDB6F_RuntimeMethod_var, L_75, L_76);
		LightsModule_set_maxLights_mC423F1C129DAB69F2F145F6AA8160DEE8176F4EC((&V_0), L_77, NULL);
		// break;
		goto IL_02bb;
	}

IL_02b5:
	{
		// reader.Skip();
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_78 = ___reader0;
		NullCheck(L_78);
		VirtualActionInvoker0::Invoke(41 /* System.Void ES3Reader::Skip() */, L_78);
	}

IL_02bb:
	{
		// while((propertyName = reader.ReadPropertyName()) != null)
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_79 = ___reader0;
		NullCheck(L_79);
		String_t* L_80;
		L_80 = VirtualFuncInvoker0< String_t* >::Invoke(21 /* System.String ES3Reader::ReadPropertyName() */, L_79);
		String_t* L_81 = L_80;
		V_1 = L_81;
		if (L_81)
		{
			goto IL_000c;
		}
	}
	{
		// }
		return;
	}
}
// System.Void ES3Types.ES3Type_LightsModule::ReadInto<UnityEngine.ParticleSystem/ForceOverLifetimeModule>(ES3Reader,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ES3Type_LightsModule_ReadInto_TisForceOverLifetimeModule_t4859776EAF945AEA86044CAB63CA7A8AC8C14976_m0AB71AFBC645CD0D7D3695DC087140CF2D1DCA68_gshared (ES3Type_LightsModule_t37A9192D3FFC77124809D0623E14839D7E0C86A6* __this, ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* ___reader0, RuntimeObject* ___obj1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mFFB70EE53D8CD0255A4E599780F62A3EB1520E83_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mEFCC4D52DD5B822D3561A53591AE11CDB25CDB6F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisLight_t1E68479B7782AF2050FAA02A5DC612FD034F18F3_mB032FAFBAB777BB6EC57AFAD4E183FCA57151654_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_m9D6B4042B923127DEA4A2CAA3E35EED37D75B3D0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mA86928BC888E342D2C2644535E3399952F5077ED_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_Light_t0E702BA5766531A8E1C1C7B952BD4B76502DE877_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_MinMaxCurve_t1C147718750ACBECE5D2B7F545D2A434A3C5409B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_int_t05A5E7A96442F23CE33E24A71CD349372A70E0C3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral072FD16FCD5FDEE6DF9288BBCA5AFBFA16B04581);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1057AAF5EE3CDF423CF6BCC588476E559687CDE6);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2AC7F98E5022908E09788532C95599452352D34A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral40B9968876DFBA959A505AA3EC0E9D9D26C14E45);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4845015737DC41475709911228278216EE4DC3AF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral509D57D2D3AC4C6FAE8D21D19FF2B9D787C81954);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral52D353FB908B8123B513952855EB88F081A1A06A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral60126327537B7B8E6EE33C43FE0C5CA8BCC3A06A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral77682CE598EDE490DCDE276E250422EA9BEA739F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral93C208E83E88E77020CE91612101CB879A8EE914);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA2DB56FF90ECEEEC49C5E8C66FCD72DF2771D010);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B);
		s_Il2CppMethodInitialized = true;
	}
	LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	uint32_t V_2 = 0;
	{
		// var instance = (UnityEngine.ParticleSystem.LightsModule)obj;
		RuntimeObject* L_0 = ___obj1;
		V_0 = ((*(LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E*)((LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E*)(LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E*)UnBox(L_0, LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E_il2cpp_TypeInfo_var))));
		goto IL_02bb;
	}

IL_000c:
	{
		String_t* L_1 = V_1;
		uint32_t L_2;
		L_2 = U3CPrivateImplementationDetailsU3E_ComputeStringHash_m6EA1F233618497AEFF8902A5EDFA24C74E2F2876(L_1, NULL);
		V_2 = L_2;
		uint32_t L_3 = V_2;
		if ((!(((uint32_t)L_3) <= ((uint32_t)((int32_t)-1604400485)))))
		{
			goto IL_006f;
		}
	}
	{
		uint32_t L_4 = V_2;
		if ((!(((uint32_t)L_4) <= ((uint32_t)((int32_t)680602789)))))
		{
			goto IL_0049;
		}
	}
	{
		uint32_t L_5 = V_2;
		if ((((int32_t)L_5) == ((int32_t)((int32_t)49525662))))
		{
			goto IL_00ba;
		}
	}
	{
		uint32_t L_6 = V_2;
		if ((((int32_t)L_6) == ((int32_t)((int32_t)258704408))))
		{
			goto IL_0138;
		}
	}
	{
		uint32_t L_7 = V_2;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)680602789))))
		{
			goto IL_00e4;
		}
	}
	{
		goto IL_02b5;
	}

IL_0049:
	{
		uint32_t L_8 = V_2;
		if ((((int32_t)L_8) == ((int32_t)((int32_t)2057398597))))
		{
			goto IL_0162;
		}
	}
	{
		uint32_t L_9 = V_2;
		if ((((int32_t)L_9) == ((int32_t)((int32_t)-2057050870))))
		{
			goto IL_0177;
		}
	}
	{
		uint32_t L_10 = V_2;
		if ((((int32_t)L_10) == ((int32_t)((int32_t)-1604400485))))
		{
			goto IL_0123;
		}
	}
	{
		goto IL_02b5;
	}

IL_006f:
	{
		uint32_t L_11 = V_2;
		if ((!(((uint32_t)L_11) <= ((uint32_t)((int32_t)-667110935)))))
		{
			goto IL_0097;
		}
	}
	{
		uint32_t L_12 = V_2;
		if ((((int32_t)L_12) == ((int32_t)((int32_t)-1055777148))))
		{
			goto IL_00cf;
		}
	}
	{
		uint32_t L_13 = V_2;
		if ((((int32_t)L_13) == ((int32_t)((int32_t)-796669776))))
		{
			goto IL_01a1;
		}
	}
	{
		uint32_t L_14 = V_2;
		if ((((int32_t)L_14) == ((int32_t)((int32_t)-667110935))))
		{
			goto IL_010e;
		}
	}
	{
		goto IL_02b5;
	}

IL_0097:
	{
		uint32_t L_15 = V_2;
		if ((((int32_t)L_15) == ((int32_t)((int32_t)-493019601))))
		{
			goto IL_00f9;
		}
	}
	{
		uint32_t L_16 = V_2;
		if ((((int32_t)L_16) == ((int32_t)((int32_t)-86242094))))
		{
			goto IL_014d;
		}
	}
	{
		uint32_t L_17 = V_2;
		if ((((int32_t)L_17) == ((int32_t)((int32_t)-24986963))))
		{
			goto IL_018c;
		}
	}
	{
		goto IL_02b5;
	}

IL_00ba:
	{
		String_t* L_18 = V_1;
		bool L_19;
		L_19 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_18, _stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B, NULL);
		if (L_19)
		{
			goto IL_01b6;
		}
	}
	{
		goto IL_02b5;
	}

IL_00cf:
	{
		String_t* L_20 = V_1;
		bool L_21;
		L_21 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_20, _stringLiteral60126327537B7B8E6EE33C43FE0C5CA8BCC3A06A, NULL);
		if (L_21)
		{
			goto IL_01cd;
		}
	}
	{
		goto IL_02b5;
	}

IL_00e4:
	{
		String_t* L_22 = V_1;
		bool L_23;
		L_23 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_22, _stringLiteral509D57D2D3AC4C6FAE8D21D19FF2B9D787C81954, NULL);
		if (L_23)
		{
			goto IL_01e4;
		}
	}
	{
		goto IL_02b5;
	}

IL_00f9:
	{
		String_t* L_24 = V_1;
		bool L_25;
		L_25 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_24, _stringLiteral1057AAF5EE3CDF423CF6BCC588476E559687CDE6, NULL);
		if (L_25)
		{
			goto IL_01fb;
		}
	}
	{
		goto IL_02b5;
	}

IL_010e:
	{
		String_t* L_26 = V_1;
		bool L_27;
		L_27 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_26, _stringLiteral2AC7F98E5022908E09788532C95599452352D34A, NULL);
		if (L_27)
		{
			goto IL_0212;
		}
	}
	{
		goto IL_02b5;
	}

IL_0123:
	{
		String_t* L_28 = V_1;
		bool L_29;
		L_29 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_28, _stringLiteral93C208E83E88E77020CE91612101CB879A8EE914, NULL);
		if (L_29)
		{
			goto IL_0229;
		}
	}
	{
		goto IL_02b5;
	}

IL_0138:
	{
		String_t* L_30 = V_1;
		bool L_31;
		L_31 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_30, _stringLiteral072FD16FCD5FDEE6DF9288BBCA5AFBFA16B04581, NULL);
		if (L_31)
		{
			goto IL_023d;
		}
	}
	{
		goto IL_02b5;
	}

IL_014d:
	{
		String_t* L_32 = V_1;
		bool L_33;
		L_33 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_32, _stringLiteral4845015737DC41475709911228278216EE4DC3AF, NULL);
		if (L_33)
		{
			goto IL_0251;
		}
	}
	{
		goto IL_02b5;
	}

IL_0162:
	{
		String_t* L_34 = V_1;
		bool L_35;
		L_35 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_34, _stringLiteralA2DB56FF90ECEEEC49C5E8C66FCD72DF2771D010, NULL);
		if (L_35)
		{
			goto IL_0265;
		}
	}
	{
		goto IL_02b5;
	}

IL_0177:
	{
		String_t* L_36 = V_1;
		bool L_37;
		L_37 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_36, _stringLiteral40B9968876DFBA959A505AA3EC0E9D9D26C14E45, NULL);
		if (L_37)
		{
			goto IL_0279;
		}
	}
	{
		goto IL_02b5;
	}

IL_018c:
	{
		String_t* L_38 = V_1;
		bool L_39;
		L_39 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_38, _stringLiteral77682CE598EDE490DCDE276E250422EA9BEA739F, NULL);
		if (L_39)
		{
			goto IL_028d;
		}
	}
	{
		goto IL_02b5;
	}

IL_01a1:
	{
		String_t* L_40 = V_1;
		bool L_41;
		L_41 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_40, _stringLiteral52D353FB908B8123B513952855EB88F081A1A06A, NULL);
		if (L_41)
		{
			goto IL_02a1;
		}
	}
	{
		goto IL_02b5;
	}

IL_01b6:
	{
		// instance.enabled = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_42 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_43 = ((ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_42);
		bool L_44;
		L_44 = GenericVirtualFuncInvoker1< bool, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mFFB70EE53D8CD0255A4E599780F62A3EB1520E83_RuntimeMethod_var, L_42, L_43);
		LightsModule_set_enabled_mCA61408EE4B83423BB92B032567BA63005379DCE((&V_0), L_44, NULL);
		// break;
		goto IL_02bb;
	}

IL_01cd:
	{
		// instance.ratio = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_45 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_46 = ((ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_45);
		float L_47;
		L_47 = GenericVirtualFuncInvoker1< float, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mA86928BC888E342D2C2644535E3399952F5077ED_RuntimeMethod_var, L_45, L_46);
		LightsModule_set_ratio_mE1B9F5C45EB2E0822BF47F28F0510B5ECF2C87FC((&V_0), L_47, NULL);
		// break;
		goto IL_02bb;
	}

IL_01e4:
	{
		// instance.useRandomDistribution = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_48 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_49 = ((ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_48);
		bool L_50;
		L_50 = GenericVirtualFuncInvoker1< bool, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mFFB70EE53D8CD0255A4E599780F62A3EB1520E83_RuntimeMethod_var, L_48, L_49);
		LightsModule_set_useRandomDistribution_mB5EEC3EE5E510F2F27C779C25FD584B6FEA879D9((&V_0), L_50, NULL);
		// break;
		goto IL_02bb;
	}

IL_01fb:
	{
		// instance.light = reader.Read<UnityEngine.Light>(ES3Type_Light.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_51 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_52 = ((ES3Type_Light_t0E702BA5766531A8E1C1C7B952BD4B76502DE877_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Light_t0E702BA5766531A8E1C1C7B952BD4B76502DE877_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_51);
		Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* L_53;
		L_53 = GenericVirtualFuncInvoker1< Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3*, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisLight_t1E68479B7782AF2050FAA02A5DC612FD034F18F3_mB032FAFBAB777BB6EC57AFAD4E183FCA57151654_RuntimeMethod_var, L_51, L_52);
		LightsModule_set_light_m54F655151E83BA1CF8ECDF92B8D18F06463B2D59((&V_0), L_53, NULL);
		// break;
		goto IL_02bb;
	}

IL_0212:
	{
		// instance.useParticleColor = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_54 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_55 = ((ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_54);
		bool L_56;
		L_56 = GenericVirtualFuncInvoker1< bool, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mFFB70EE53D8CD0255A4E599780F62A3EB1520E83_RuntimeMethod_var, L_54, L_55);
		LightsModule_set_useParticleColor_mC91DC556C20A786D4E8190842094B557204C74B0((&V_0), L_56, NULL);
		// break;
		goto IL_02bb;
	}

IL_0229:
	{
		// instance.sizeAffectsRange = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_57 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_58 = ((ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_57);
		bool L_59;
		L_59 = GenericVirtualFuncInvoker1< bool, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mFFB70EE53D8CD0255A4E599780F62A3EB1520E83_RuntimeMethod_var, L_57, L_58);
		LightsModule_set_sizeAffectsRange_mBAAE49AC54AE79237649DD0AA715F43B0510356A((&V_0), L_59, NULL);
		// break;
		goto IL_02bb;
	}

IL_023d:
	{
		// instance.alphaAffectsIntensity = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_60 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_61 = ((ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_60);
		bool L_62;
		L_62 = GenericVirtualFuncInvoker1< bool, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mFFB70EE53D8CD0255A4E599780F62A3EB1520E83_RuntimeMethod_var, L_60, L_61);
		LightsModule_set_alphaAffectsIntensity_m79B804EA7C98543C733F3E0355DB01B8E1845995((&V_0), L_62, NULL);
		// break;
		goto IL_02bb;
	}

IL_0251:
	{
		// instance.range = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_63 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_64 = ((ES3Type_MinMaxCurve_t1C147718750ACBECE5D2B7F545D2A434A3C5409B_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t1C147718750ACBECE5D2B7F545D2A434A3C5409B_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_63);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_65;
		L_65 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_m9D6B4042B923127DEA4A2CAA3E35EED37D75B3D0_RuntimeMethod_var, L_63, L_64);
		LightsModule_set_range_m3DA6A5EE3021CB5A4787AEAE4DCA675E3050C5E4((&V_0), L_65, NULL);
		// break;
		goto IL_02bb;
	}

IL_0265:
	{
		// instance.rangeMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_66 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_67 = ((ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_66);
		float L_68;
		L_68 = GenericVirtualFuncInvoker1< float, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mA86928BC888E342D2C2644535E3399952F5077ED_RuntimeMethod_var, L_66, L_67);
		LightsModule_set_rangeMultiplier_m881D705C505C908F9F05F24EFBFC61DD2F01B23F((&V_0), L_68, NULL);
		// break;
		goto IL_02bb;
	}

IL_0279:
	{
		// instance.intensity = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_69 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_70 = ((ES3Type_MinMaxCurve_t1C147718750ACBECE5D2B7F545D2A434A3C5409B_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t1C147718750ACBECE5D2B7F545D2A434A3C5409B_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_69);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_71;
		L_71 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_m9D6B4042B923127DEA4A2CAA3E35EED37D75B3D0_RuntimeMethod_var, L_69, L_70);
		LightsModule_set_intensity_mD1D7564D1ADD14C5755043F1146A8D56C228A519((&V_0), L_71, NULL);
		// break;
		goto IL_02bb;
	}

IL_028d:
	{
		// instance.intensityMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_72 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_73 = ((ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_72);
		float L_74;
		L_74 = GenericVirtualFuncInvoker1< float, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mA86928BC888E342D2C2644535E3399952F5077ED_RuntimeMethod_var, L_72, L_73);
		LightsModule_set_intensityMultiplier_m79E9E71E14F02B6BE7C4EB6C5B3BA8921D1B29F8((&V_0), L_74, NULL);
		// break;
		goto IL_02bb;
	}

IL_02a1:
	{
		// instance.maxLights = reader.Read<System.Int32>(ES3Type_int.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_75 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_76 = ((ES3Type_int_t05A5E7A96442F23CE33E24A71CD349372A70E0C3_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_int_t05A5E7A96442F23CE33E24A71CD349372A70E0C3_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_75);
		int32_t L_77;
		L_77 = GenericVirtualFuncInvoker1< int32_t, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mEFCC4D52DD5B822D3561A53591AE11CDB25CDB6F_RuntimeMethod_var, L_75, L_76);
		LightsModule_set_maxLights_mC423F1C129DAB69F2F145F6AA8160DEE8176F4EC((&V_0), L_77, NULL);
		// break;
		goto IL_02bb;
	}

IL_02b5:
	{
		// reader.Skip();
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_78 = ___reader0;
		NullCheck(L_78);
		VirtualActionInvoker0::Invoke(41 /* System.Void ES3Reader::Skip() */, L_78);
	}

IL_02bb:
	{
		// while((propertyName = reader.ReadPropertyName()) != null)
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_79 = ___reader0;
		NullCheck(L_79);
		String_t* L_80;
		L_80 = VirtualFuncInvoker0< String_t* >::Invoke(21 /* System.String ES3Reader::ReadPropertyName() */, L_79);
		String_t* L_81 = L_80;
		V_1 = L_81;
		if (L_81)
		{
			goto IL_000c;
		}
	}
	{
		// }
		return;
	}
}
// System.Void ES3Types.ES3Type_LightsModule::ReadInto<UnityEngine.ParticleSystem/InheritVelocityModule>(ES3Reader,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ES3Type_LightsModule_ReadInto_TisInheritVelocityModule_tB71B2EDCAF328647DDB6BC79541D7C5E76C19562_m07491D05B9E1A66E2CE6D2A457A69F8DE5F32D21_gshared (ES3Type_LightsModule_t37A9192D3FFC77124809D0623E14839D7E0C86A6* __this, ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* ___reader0, RuntimeObject* ___obj1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mFFB70EE53D8CD0255A4E599780F62A3EB1520E83_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mEFCC4D52DD5B822D3561A53591AE11CDB25CDB6F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisLight_t1E68479B7782AF2050FAA02A5DC612FD034F18F3_mB032FAFBAB777BB6EC57AFAD4E183FCA57151654_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_m9D6B4042B923127DEA4A2CAA3E35EED37D75B3D0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mA86928BC888E342D2C2644535E3399952F5077ED_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_Light_t0E702BA5766531A8E1C1C7B952BD4B76502DE877_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_MinMaxCurve_t1C147718750ACBECE5D2B7F545D2A434A3C5409B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_int_t05A5E7A96442F23CE33E24A71CD349372A70E0C3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral072FD16FCD5FDEE6DF9288BBCA5AFBFA16B04581);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1057AAF5EE3CDF423CF6BCC588476E559687CDE6);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2AC7F98E5022908E09788532C95599452352D34A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral40B9968876DFBA959A505AA3EC0E9D9D26C14E45);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4845015737DC41475709911228278216EE4DC3AF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral509D57D2D3AC4C6FAE8D21D19FF2B9D787C81954);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral52D353FB908B8123B513952855EB88F081A1A06A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral60126327537B7B8E6EE33C43FE0C5CA8BCC3A06A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral77682CE598EDE490DCDE276E250422EA9BEA739F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral93C208E83E88E77020CE91612101CB879A8EE914);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA2DB56FF90ECEEEC49C5E8C66FCD72DF2771D010);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B);
		s_Il2CppMethodInitialized = true;
	}
	LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	uint32_t V_2 = 0;
	{
		// var instance = (UnityEngine.ParticleSystem.LightsModule)obj;
		RuntimeObject* L_0 = ___obj1;
		V_0 = ((*(LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E*)((LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E*)(LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E*)UnBox(L_0, LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E_il2cpp_TypeInfo_var))));
		goto IL_02bb;
	}

IL_000c:
	{
		String_t* L_1 = V_1;
		uint32_t L_2;
		L_2 = U3CPrivateImplementationDetailsU3E_ComputeStringHash_m6EA1F233618497AEFF8902A5EDFA24C74E2F2876(L_1, NULL);
		V_2 = L_2;
		uint32_t L_3 = V_2;
		if ((!(((uint32_t)L_3) <= ((uint32_t)((int32_t)-1604400485)))))
		{
			goto IL_006f;
		}
	}
	{
		uint32_t L_4 = V_2;
		if ((!(((uint32_t)L_4) <= ((uint32_t)((int32_t)680602789)))))
		{
			goto IL_0049;
		}
	}
	{
		uint32_t L_5 = V_2;
		if ((((int32_t)L_5) == ((int32_t)((int32_t)49525662))))
		{
			goto IL_00ba;
		}
	}
	{
		uint32_t L_6 = V_2;
		if ((((int32_t)L_6) == ((int32_t)((int32_t)258704408))))
		{
			goto IL_0138;
		}
	}
	{
		uint32_t L_7 = V_2;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)680602789))))
		{
			goto IL_00e4;
		}
	}
	{
		goto IL_02b5;
	}

IL_0049:
	{
		uint32_t L_8 = V_2;
		if ((((int32_t)L_8) == ((int32_t)((int32_t)2057398597))))
		{
			goto IL_0162;
		}
	}
	{
		uint32_t L_9 = V_2;
		if ((((int32_t)L_9) == ((int32_t)((int32_t)-2057050870))))
		{
			goto IL_0177;
		}
	}
	{
		uint32_t L_10 = V_2;
		if ((((int32_t)L_10) == ((int32_t)((int32_t)-1604400485))))
		{
			goto IL_0123;
		}
	}
	{
		goto IL_02b5;
	}

IL_006f:
	{
		uint32_t L_11 = V_2;
		if ((!(((uint32_t)L_11) <= ((uint32_t)((int32_t)-667110935)))))
		{
			goto IL_0097;
		}
	}
	{
		uint32_t L_12 = V_2;
		if ((((int32_t)L_12) == ((int32_t)((int32_t)-1055777148))))
		{
			goto IL_00cf;
		}
	}
	{
		uint32_t L_13 = V_2;
		if ((((int32_t)L_13) == ((int32_t)((int32_t)-796669776))))
		{
			goto IL_01a1;
		}
	}
	{
		uint32_t L_14 = V_2;
		if ((((int32_t)L_14) == ((int32_t)((int32_t)-667110935))))
		{
			goto IL_010e;
		}
	}
	{
		goto IL_02b5;
	}

IL_0097:
	{
		uint32_t L_15 = V_2;
		if ((((int32_t)L_15) == ((int32_t)((int32_t)-493019601))))
		{
			goto IL_00f9;
		}
	}
	{
		uint32_t L_16 = V_2;
		if ((((int32_t)L_16) == ((int32_t)((int32_t)-86242094))))
		{
			goto IL_014d;
		}
	}
	{
		uint32_t L_17 = V_2;
		if ((((int32_t)L_17) == ((int32_t)((int32_t)-24986963))))
		{
			goto IL_018c;
		}
	}
	{
		goto IL_02b5;
	}

IL_00ba:
	{
		String_t* L_18 = V_1;
		bool L_19;
		L_19 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_18, _stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B, NULL);
		if (L_19)
		{
			goto IL_01b6;
		}
	}
	{
		goto IL_02b5;
	}

IL_00cf:
	{
		String_t* L_20 = V_1;
		bool L_21;
		L_21 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_20, _stringLiteral60126327537B7B8E6EE33C43FE0C5CA8BCC3A06A, NULL);
		if (L_21)
		{
			goto IL_01cd;
		}
	}
	{
		goto IL_02b5;
	}

IL_00e4:
	{
		String_t* L_22 = V_1;
		bool L_23;
		L_23 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_22, _stringLiteral509D57D2D3AC4C6FAE8D21D19FF2B9D787C81954, NULL);
		if (L_23)
		{
			goto IL_01e4;
		}
	}
	{
		goto IL_02b5;
	}

IL_00f9:
	{
		String_t* L_24 = V_1;
		bool L_25;
		L_25 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_24, _stringLiteral1057AAF5EE3CDF423CF6BCC588476E559687CDE6, NULL);
		if (L_25)
		{
			goto IL_01fb;
		}
	}
	{
		goto IL_02b5;
	}

IL_010e:
	{
		String_t* L_26 = V_1;
		bool L_27;
		L_27 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_26, _stringLiteral2AC7F98E5022908E09788532C95599452352D34A, NULL);
		if (L_27)
		{
			goto IL_0212;
		}
	}
	{
		goto IL_02b5;
	}

IL_0123:
	{
		String_t* L_28 = V_1;
		bool L_29;
		L_29 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_28, _stringLiteral93C208E83E88E77020CE91612101CB879A8EE914, NULL);
		if (L_29)
		{
			goto IL_0229;
		}
	}
	{
		goto IL_02b5;
	}

IL_0138:
	{
		String_t* L_30 = V_1;
		bool L_31;
		L_31 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_30, _stringLiteral072FD16FCD5FDEE6DF9288BBCA5AFBFA16B04581, NULL);
		if (L_31)
		{
			goto IL_023d;
		}
	}
	{
		goto IL_02b5;
	}

IL_014d:
	{
		String_t* L_32 = V_1;
		bool L_33;
		L_33 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_32, _stringLiteral4845015737DC41475709911228278216EE4DC3AF, NULL);
		if (L_33)
		{
			goto IL_0251;
		}
	}
	{
		goto IL_02b5;
	}

IL_0162:
	{
		String_t* L_34 = V_1;
		bool L_35;
		L_35 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_34, _stringLiteralA2DB56FF90ECEEEC49C5E8C66FCD72DF2771D010, NULL);
		if (L_35)
		{
			goto IL_0265;
		}
	}
	{
		goto IL_02b5;
	}

IL_0177:
	{
		String_t* L_36 = V_1;
		bool L_37;
		L_37 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_36, _stringLiteral40B9968876DFBA959A505AA3EC0E9D9D26C14E45, NULL);
		if (L_37)
		{
			goto IL_0279;
		}
	}
	{
		goto IL_02b5;
	}

IL_018c:
	{
		String_t* L_38 = V_1;
		bool L_39;
		L_39 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_38, _stringLiteral77682CE598EDE490DCDE276E250422EA9BEA739F, NULL);
		if (L_39)
		{
			goto IL_028d;
		}
	}
	{
		goto IL_02b5;
	}

IL_01a1:
	{
		String_t* L_40 = V_1;
		bool L_41;
		L_41 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_40, _stringLiteral52D353FB908B8123B513952855EB88F081A1A06A, NULL);
		if (L_41)
		{
			goto IL_02a1;
		}
	}
	{
		goto IL_02b5;
	}

IL_01b6:
	{
		// instance.enabled = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_42 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_43 = ((ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_42);
		bool L_44;
		L_44 = GenericVirtualFuncInvoker1< bool, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mFFB70EE53D8CD0255A4E599780F62A3EB1520E83_RuntimeMethod_var, L_42, L_43);
		LightsModule_set_enabled_mCA61408EE4B83423BB92B032567BA63005379DCE((&V_0), L_44, NULL);
		// break;
		goto IL_02bb;
	}

IL_01cd:
	{
		// instance.ratio = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_45 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_46 = ((ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_45);
		float L_47;
		L_47 = GenericVirtualFuncInvoker1< float, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mA86928BC888E342D2C2644535E3399952F5077ED_RuntimeMethod_var, L_45, L_46);
		LightsModule_set_ratio_mE1B9F5C45EB2E0822BF47F28F0510B5ECF2C87FC((&V_0), L_47, NULL);
		// break;
		goto IL_02bb;
	}

IL_01e4:
	{
		// instance.useRandomDistribution = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_48 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_49 = ((ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_48);
		bool L_50;
		L_50 = GenericVirtualFuncInvoker1< bool, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mFFB70EE53D8CD0255A4E599780F62A3EB1520E83_RuntimeMethod_var, L_48, L_49);
		LightsModule_set_useRandomDistribution_mB5EEC3EE5E510F2F27C779C25FD584B6FEA879D9((&V_0), L_50, NULL);
		// break;
		goto IL_02bb;
	}

IL_01fb:
	{
		// instance.light = reader.Read<UnityEngine.Light>(ES3Type_Light.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_51 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_52 = ((ES3Type_Light_t0E702BA5766531A8E1C1C7B952BD4B76502DE877_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Light_t0E702BA5766531A8E1C1C7B952BD4B76502DE877_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_51);
		Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* L_53;
		L_53 = GenericVirtualFuncInvoker1< Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3*, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisLight_t1E68479B7782AF2050FAA02A5DC612FD034F18F3_mB032FAFBAB777BB6EC57AFAD4E183FCA57151654_RuntimeMethod_var, L_51, L_52);
		LightsModule_set_light_m54F655151E83BA1CF8ECDF92B8D18F06463B2D59((&V_0), L_53, NULL);
		// break;
		goto IL_02bb;
	}

IL_0212:
	{
		// instance.useParticleColor = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_54 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_55 = ((ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_54);
		bool L_56;
		L_56 = GenericVirtualFuncInvoker1< bool, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mFFB70EE53D8CD0255A4E599780F62A3EB1520E83_RuntimeMethod_var, L_54, L_55);
		LightsModule_set_useParticleColor_mC91DC556C20A786D4E8190842094B557204C74B0((&V_0), L_56, NULL);
		// break;
		goto IL_02bb;
	}

IL_0229:
	{
		// instance.sizeAffectsRange = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_57 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_58 = ((ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_57);
		bool L_59;
		L_59 = GenericVirtualFuncInvoker1< bool, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mFFB70EE53D8CD0255A4E599780F62A3EB1520E83_RuntimeMethod_var, L_57, L_58);
		LightsModule_set_sizeAffectsRange_mBAAE49AC54AE79237649DD0AA715F43B0510356A((&V_0), L_59, NULL);
		// break;
		goto IL_02bb;
	}

IL_023d:
	{
		// instance.alphaAffectsIntensity = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_60 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_61 = ((ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_60);
		bool L_62;
		L_62 = GenericVirtualFuncInvoker1< bool, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mFFB70EE53D8CD0255A4E599780F62A3EB1520E83_RuntimeMethod_var, L_60, L_61);
		LightsModule_set_alphaAffectsIntensity_m79B804EA7C98543C733F3E0355DB01B8E1845995((&V_0), L_62, NULL);
		// break;
		goto IL_02bb;
	}

IL_0251:
	{
		// instance.range = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_63 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_64 = ((ES3Type_MinMaxCurve_t1C147718750ACBECE5D2B7F545D2A434A3C5409B_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t1C147718750ACBECE5D2B7F545D2A434A3C5409B_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_63);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_65;
		L_65 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_m9D6B4042B923127DEA4A2CAA3E35EED37D75B3D0_RuntimeMethod_var, L_63, L_64);
		LightsModule_set_range_m3DA6A5EE3021CB5A4787AEAE4DCA675E3050C5E4((&V_0), L_65, NULL);
		// break;
		goto IL_02bb;
	}

IL_0265:
	{
		// instance.rangeMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_66 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_67 = ((ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_66);
		float L_68;
		L_68 = GenericVirtualFuncInvoker1< float, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mA86928BC888E342D2C2644535E3399952F5077ED_RuntimeMethod_var, L_66, L_67);
		LightsModule_set_rangeMultiplier_m881D705C505C908F9F05F24EFBFC61DD2F01B23F((&V_0), L_68, NULL);
		// break;
		goto IL_02bb;
	}

IL_0279:
	{
		// instance.intensity = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_69 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_70 = ((ES3Type_MinMaxCurve_t1C147718750ACBECE5D2B7F545D2A434A3C5409B_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t1C147718750ACBECE5D2B7F545D2A434A3C5409B_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_69);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_71;
		L_71 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_m9D6B4042B923127DEA4A2CAA3E35EED37D75B3D0_RuntimeMethod_var, L_69, L_70);
		LightsModule_set_intensity_mD1D7564D1ADD14C5755043F1146A8D56C228A519((&V_0), L_71, NULL);
		// break;
		goto IL_02bb;
	}

IL_028d:
	{
		// instance.intensityMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_72 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_73 = ((ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_72);
		float L_74;
		L_74 = GenericVirtualFuncInvoker1< float, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mA86928BC888E342D2C2644535E3399952F5077ED_RuntimeMethod_var, L_72, L_73);
		LightsModule_set_intensityMultiplier_m79E9E71E14F02B6BE7C4EB6C5B3BA8921D1B29F8((&V_0), L_74, NULL);
		// break;
		goto IL_02bb;
	}

IL_02a1:
	{
		// instance.maxLights = reader.Read<System.Int32>(ES3Type_int.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_75 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_76 = ((ES3Type_int_t05A5E7A96442F23CE33E24A71CD349372A70E0C3_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_int_t05A5E7A96442F23CE33E24A71CD349372A70E0C3_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_75);
		int32_t L_77;
		L_77 = GenericVirtualFuncInvoker1< int32_t, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mEFCC4D52DD5B822D3561A53591AE11CDB25CDB6F_RuntimeMethod_var, L_75, L_76);
		LightsModule_set_maxLights_mC423F1C129DAB69F2F145F6AA8160DEE8176F4EC((&V_0), L_77, NULL);
		// break;
		goto IL_02bb;
	}

IL_02b5:
	{
		// reader.Skip();
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_78 = ___reader0;
		NullCheck(L_78);
		VirtualActionInvoker0::Invoke(41 /* System.Void ES3Reader::Skip() */, L_78);
	}

IL_02bb:
	{
		// while((propertyName = reader.ReadPropertyName()) != null)
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_79 = ___reader0;
		NullCheck(L_79);
		String_t* L_80;
		L_80 = VirtualFuncInvoker0< String_t* >::Invoke(21 /* System.String ES3Reader::ReadPropertyName() */, L_79);
		String_t* L_81 = L_80;
		V_1 = L_81;
		if (L_81)
		{
			goto IL_000c;
		}
	}
	{
		// }
		return;
	}
}
// System.Void ES3Types.ES3Type_LightsModule::ReadInto<UnityEngine.ParticleSystem/LightsModule>(ES3Reader,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ES3Type_LightsModule_ReadInto_TisLightsModule_t720242ED070FD6C55E59B7536322829A22884C7E_m8C410630DFD2C5DEE7A09B933D2CD4E675F95C78_gshared (ES3Type_LightsModule_t37A9192D3FFC77124809D0623E14839D7E0C86A6* __this, ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* ___reader0, RuntimeObject* ___obj1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mFFB70EE53D8CD0255A4E599780F62A3EB1520E83_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mEFCC4D52DD5B822D3561A53591AE11CDB25CDB6F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisLight_t1E68479B7782AF2050FAA02A5DC612FD034F18F3_mB032FAFBAB777BB6EC57AFAD4E183FCA57151654_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_m9D6B4042B923127DEA4A2CAA3E35EED37D75B3D0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mA86928BC888E342D2C2644535E3399952F5077ED_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_Light_t0E702BA5766531A8E1C1C7B952BD4B76502DE877_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_MinMaxCurve_t1C147718750ACBECE5D2B7F545D2A434A3C5409B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_int_t05A5E7A96442F23CE33E24A71CD349372A70E0C3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral072FD16FCD5FDEE6DF9288BBCA5AFBFA16B04581);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1057AAF5EE3CDF423CF6BCC588476E559687CDE6);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2AC7F98E5022908E09788532C95599452352D34A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral40B9968876DFBA959A505AA3EC0E9D9D26C14E45);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4845015737DC41475709911228278216EE4DC3AF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral509D57D2D3AC4C6FAE8D21D19FF2B9D787C81954);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral52D353FB908B8123B513952855EB88F081A1A06A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral60126327537B7B8E6EE33C43FE0C5CA8BCC3A06A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral77682CE598EDE490DCDE276E250422EA9BEA739F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral93C208E83E88E77020CE91612101CB879A8EE914);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA2DB56FF90ECEEEC49C5E8C66FCD72DF2771D010);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B);
		s_Il2CppMethodInitialized = true;
	}
	LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	uint32_t V_2 = 0;
	{
		// var instance = (UnityEngine.ParticleSystem.LightsModule)obj;
		RuntimeObject* L_0 = ___obj1;
		V_0 = ((*(LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E*)((LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E*)(LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E*)UnBox(L_0, LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E_il2cpp_TypeInfo_var))));
		goto IL_02bb;
	}

IL_000c:
	{
		String_t* L_1 = V_1;
		uint32_t L_2;
		L_2 = U3CPrivateImplementationDetailsU3E_ComputeStringHash_m6EA1F233618497AEFF8902A5EDFA24C74E2F2876(L_1, NULL);
		V_2 = L_2;
		uint32_t L_3 = V_2;
		if ((!(((uint32_t)L_3) <= ((uint32_t)((int32_t)-1604400485)))))
		{
			goto IL_006f;
		}
	}
	{
		uint32_t L_4 = V_2;
		if ((!(((uint32_t)L_4) <= ((uint32_t)((int32_t)680602789)))))
		{
			goto IL_0049;
		}
	}
	{
		uint32_t L_5 = V_2;
		if ((((int32_t)L_5) == ((int32_t)((int32_t)49525662))))
		{
			goto IL_00ba;
		}
	}
	{
		uint32_t L_6 = V_2;
		if ((((int32_t)L_6) == ((int32_t)((int32_t)258704408))))
		{
			goto IL_0138;
		}
	}
	{
		uint32_t L_7 = V_2;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)680602789))))
		{
			goto IL_00e4;
		}
	}
	{
		goto IL_02b5;
	}

IL_0049:
	{
		uint32_t L_8 = V_2;
		if ((((int32_t)L_8) == ((int32_t)((int32_t)2057398597))))
		{
			goto IL_0162;
		}
	}
	{
		uint32_t L_9 = V_2;
		if ((((int32_t)L_9) == ((int32_t)((int32_t)-2057050870))))
		{
			goto IL_0177;
		}
	}
	{
		uint32_t L_10 = V_2;
		if ((((int32_t)L_10) == ((int32_t)((int32_t)-1604400485))))
		{
			goto IL_0123;
		}
	}
	{
		goto IL_02b5;
	}

IL_006f:
	{
		uint32_t L_11 = V_2;
		if ((!(((uint32_t)L_11) <= ((uint32_t)((int32_t)-667110935)))))
		{
			goto IL_0097;
		}
	}
	{
		uint32_t L_12 = V_2;
		if ((((int32_t)L_12) == ((int32_t)((int32_t)-1055777148))))
		{
			goto IL_00cf;
		}
	}
	{
		uint32_t L_13 = V_2;
		if ((((int32_t)L_13) == ((int32_t)((int32_t)-796669776))))
		{
			goto IL_01a1;
		}
	}
	{
		uint32_t L_14 = V_2;
		if ((((int32_t)L_14) == ((int32_t)((int32_t)-667110935))))
		{
			goto IL_010e;
		}
	}
	{
		goto IL_02b5;
	}

IL_0097:
	{
		uint32_t L_15 = V_2;
		if ((((int32_t)L_15) == ((int32_t)((int32_t)-493019601))))
		{
			goto IL_00f9;
		}
	}
	{
		uint32_t L_16 = V_2;
		if ((((int32_t)L_16) == ((int32_t)((int32_t)-86242094))))
		{
			goto IL_014d;
		}
	}
	{
		uint32_t L_17 = V_2;
		if ((((int32_t)L_17) == ((int32_t)((int32_t)-24986963))))
		{
			goto IL_018c;
		}
	}
	{
		goto IL_02b5;
	}

IL_00ba:
	{
		String_t* L_18 = V_1;
		bool L_19;
		L_19 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_18, _stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B, NULL);
		if (L_19)
		{
			goto IL_01b6;
		}
	}
	{
		goto IL_02b5;
	}

IL_00cf:
	{
		String_t* L_20 = V_1;
		bool L_21;
		L_21 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_20, _stringLiteral60126327537B7B8E6EE33C43FE0C5CA8BCC3A06A, NULL);
		if (L_21)
		{
			goto IL_01cd;
		}
	}
	{
		goto IL_02b5;
	}

IL_00e4:
	{
		String_t* L_22 = V_1;
		bool L_23;
		L_23 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_22, _stringLiteral509D57D2D3AC4C6FAE8D21D19FF2B9D787C81954, NULL);
		if (L_23)
		{
			goto IL_01e4;
		}
	}
	{
		goto IL_02b5;
	}

IL_00f9:
	{
		String_t* L_24 = V_1;
		bool L_25;
		L_25 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_24, _stringLiteral1057AAF5EE3CDF423CF6BCC588476E559687CDE6, NULL);
		if (L_25)
		{
			goto IL_01fb;
		}
	}
	{
		goto IL_02b5;
	}

IL_010e:
	{
		String_t* L_26 = V_1;
		bool L_27;
		L_27 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_26, _stringLiteral2AC7F98E5022908E09788532C95599452352D34A, NULL);
		if (L_27)
		{
			goto IL_0212;
		}
	}
	{
		goto IL_02b5;
	}

IL_0123:
	{
		String_t* L_28 = V_1;
		bool L_29;
		L_29 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_28, _stringLiteral93C208E83E88E77020CE91612101CB879A8EE914, NULL);
		if (L_29)
		{
			goto IL_0229;
		}
	}
	{
		goto IL_02b5;
	}

IL_0138:
	{
		String_t* L_30 = V_1;
		bool L_31;
		L_31 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_30, _stringLiteral072FD16FCD5FDEE6DF9288BBCA5AFBFA16B04581, NULL);
		if (L_31)
		{
			goto IL_023d;
		}
	}
	{
		goto IL_02b5;
	}

IL_014d:
	{
		String_t* L_32 = V_1;
		bool L_33;
		L_33 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_32, _stringLiteral4845015737DC41475709911228278216EE4DC3AF, NULL);
		if (L_33)
		{
			goto IL_0251;
		}
	}
	{
		goto IL_02b5;
	}

IL_0162:
	{
		String_t* L_34 = V_1;
		bool L_35;
		L_35 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_34, _stringLiteralA2DB56FF90ECEEEC49C5E8C66FCD72DF2771D010, NULL);
		if (L_35)
		{
			goto IL_0265;
		}
	}
	{
		goto IL_02b5;
	}

IL_0177:
	{
		String_t* L_36 = V_1;
		bool L_37;
		L_37 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_36, _stringLiteral40B9968876DFBA959A505AA3EC0E9D9D26C14E45, NULL);
		if (L_37)
		{
			goto IL_0279;
		}
	}
	{
		goto IL_02b5;
	}

IL_018c:
	{
		String_t* L_38 = V_1;
		bool L_39;
		L_39 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_38, _stringLiteral77682CE598EDE490DCDE276E250422EA9BEA739F, NULL);
		if (L_39)
		{
			goto IL_028d;
		}
	}
	{
		goto IL_02b5;
	}

IL_01a1:
	{
		String_t* L_40 = V_1;
		bool L_41;
		L_41 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_40, _stringLiteral52D353FB908B8123B513952855EB88F081A1A06A, NULL);
		if (L_41)
		{
			goto IL_02a1;
		}
	}
	{
		goto IL_02b5;
	}

IL_01b6:
	{
		// instance.enabled = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_42 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_43 = ((ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_42);
		bool L_44;
		L_44 = GenericVirtualFuncInvoker1< bool, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mFFB70EE53D8CD0255A4E599780F62A3EB1520E83_RuntimeMethod_var, L_42, L_43);
		LightsModule_set_enabled_mCA61408EE4B83423BB92B032567BA63005379DCE((&V_0), L_44, NULL);
		// break;
		goto IL_02bb;
	}

IL_01cd:
	{
		// instance.ratio = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_45 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_46 = ((ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_45);
		float L_47;
		L_47 = GenericVirtualFuncInvoker1< float, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mA86928BC888E342D2C2644535E3399952F5077ED_RuntimeMethod_var, L_45, L_46);
		LightsModule_set_ratio_mE1B9F5C45EB2E0822BF47F28F0510B5ECF2C87FC((&V_0), L_47, NULL);
		// break;
		goto IL_02bb;
	}

IL_01e4:
	{
		// instance.useRandomDistribution = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_48 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_49 = ((ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_48);
		bool L_50;
		L_50 = GenericVirtualFuncInvoker1< bool, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mFFB70EE53D8CD0255A4E599780F62A3EB1520E83_RuntimeMethod_var, L_48, L_49);
		LightsModule_set_useRandomDistribution_mB5EEC3EE5E510F2F27C779C25FD584B6FEA879D9((&V_0), L_50, NULL);
		// break;
		goto IL_02bb;
	}

IL_01fb:
	{
		// instance.light = reader.Read<UnityEngine.Light>(ES3Type_Light.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_51 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_52 = ((ES3Type_Light_t0E702BA5766531A8E1C1C7B952BD4B76502DE877_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Light_t0E702BA5766531A8E1C1C7B952BD4B76502DE877_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_51);
		Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* L_53;
		L_53 = GenericVirtualFuncInvoker1< Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3*, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisLight_t1E68479B7782AF2050FAA02A5DC612FD034F18F3_mB032FAFBAB777BB6EC57AFAD4E183FCA57151654_RuntimeMethod_var, L_51, L_52);
		LightsModule_set_light_m54F655151E83BA1CF8ECDF92B8D18F06463B2D59((&V_0), L_53, NULL);
		// break;
		goto IL_02bb;
	}

IL_0212:
	{
		// instance.useParticleColor = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_54 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_55 = ((ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_54);
		bool L_56;
		L_56 = GenericVirtualFuncInvoker1< bool, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mFFB70EE53D8CD0255A4E599780F62A3EB1520E83_RuntimeMethod_var, L_54, L_55);
		LightsModule_set_useParticleColor_mC91DC556C20A786D4E8190842094B557204C74B0((&V_0), L_56, NULL);
		// break;
		goto IL_02bb;
	}

IL_0229:
	{
		// instance.sizeAffectsRange = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_57 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_58 = ((ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_57);
		bool L_59;
		L_59 = GenericVirtualFuncInvoker1< bool, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mFFB70EE53D8CD0255A4E599780F62A3EB1520E83_RuntimeMethod_var, L_57, L_58);
		LightsModule_set_sizeAffectsRange_mBAAE49AC54AE79237649DD0AA715F43B0510356A((&V_0), L_59, NULL);
		// break;
		goto IL_02bb;
	}

IL_023d:
	{
		// instance.alphaAffectsIntensity = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_60 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_61 = ((ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_60);
		bool L_62;
		L_62 = GenericVirtualFuncInvoker1< bool, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mFFB70EE53D8CD0255A4E599780F62A3EB1520E83_RuntimeMethod_var, L_60, L_61);
		LightsModule_set_alphaAffectsIntensity_m79B804EA7C98543C733F3E0355DB01B8E1845995((&V_0), L_62, NULL);
		// break;
		goto IL_02bb;
	}

IL_0251:
	{
		// instance.range = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_63 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_64 = ((ES3Type_MinMaxCurve_t1C147718750ACBECE5D2B7F545D2A434A3C5409B_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t1C147718750ACBECE5D2B7F545D2A434A3C5409B_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_63);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_65;
		L_65 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_m9D6B4042B923127DEA4A2CAA3E35EED37D75B3D0_RuntimeMethod_var, L_63, L_64);
		LightsModule_set_range_m3DA6A5EE3021CB5A4787AEAE4DCA675E3050C5E4((&V_0), L_65, NULL);
		// break;
		goto IL_02bb;
	}

IL_0265:
	{
		// instance.rangeMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_66 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_67 = ((ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_66);
		float L_68;
		L_68 = GenericVirtualFuncInvoker1< float, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mA86928BC888E342D2C2644535E3399952F5077ED_RuntimeMethod_var, L_66, L_67);
		LightsModule_set_rangeMultiplier_m881D705C505C908F9F05F24EFBFC61DD2F01B23F((&V_0), L_68, NULL);
		// break;
		goto IL_02bb;
	}

IL_0279:
	{
		// instance.intensity = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_69 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_70 = ((ES3Type_MinMaxCurve_t1C147718750ACBECE5D2B7F545D2A434A3C5409B_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t1C147718750ACBECE5D2B7F545D2A434A3C5409B_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_69);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_71;
		L_71 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_m9D6B4042B923127DEA4A2CAA3E35EED37D75B3D0_RuntimeMethod_var, L_69, L_70);
		LightsModule_set_intensity_mD1D7564D1ADD14C5755043F1146A8D56C228A519((&V_0), L_71, NULL);
		// break;
		goto IL_02bb;
	}

IL_028d:
	{
		// instance.intensityMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_72 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_73 = ((ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_72);
		float L_74;
		L_74 = GenericVirtualFuncInvoker1< float, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mA86928BC888E342D2C2644535E3399952F5077ED_RuntimeMethod_var, L_72, L_73);
		LightsModule_set_intensityMultiplier_m79E9E71E14F02B6BE7C4EB6C5B3BA8921D1B29F8((&V_0), L_74, NULL);
		// break;
		goto IL_02bb;
	}

IL_02a1:
	{
		// instance.maxLights = reader.Read<System.Int32>(ES3Type_int.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_75 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_76 = ((ES3Type_int_t05A5E7A96442F23CE33E24A71CD349372A70E0C3_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_int_t05A5E7A96442F23CE33E24A71CD349372A70E0C3_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_75);
		int32_t L_77;
		L_77 = GenericVirtualFuncInvoker1< int32_t, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mEFCC4D52DD5B822D3561A53591AE11CDB25CDB6F_RuntimeMethod_var, L_75, L_76);
		LightsModule_set_maxLights_mC423F1C129DAB69F2F145F6AA8160DEE8176F4EC((&V_0), L_77, NULL);
		// break;
		goto IL_02bb;
	}

IL_02b5:
	{
		// reader.Skip();
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_78 = ___reader0;
		NullCheck(L_78);
		VirtualActionInvoker0::Invoke(41 /* System.Void ES3Reader::Skip() */, L_78);
	}

IL_02bb:
	{
		// while((propertyName = reader.ReadPropertyName()) != null)
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_79 = ___reader0;
		NullCheck(L_79);
		String_t* L_80;
		L_80 = VirtualFuncInvoker0< String_t* >::Invoke(21 /* System.String ES3Reader::ReadPropertyName() */, L_79);
		String_t* L_81 = L_80;
		V_1 = L_81;
		if (L_81)
		{
			goto IL_000c;
		}
	}
	{
		// }
		return;
	}
}
// System.Void ES3Types.ES3Type_LightsModule::ReadInto<UnityEngine.ParticleSystem/LimitVelocityOverLifetimeModule>(ES3Reader,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ES3Type_LightsModule_ReadInto_TisLimitVelocityOverLifetimeModule_tC52CF1434E2639EE5D81DD6BA269FF38CA17D8B1_m4D634A6F65A6D94E0C29C754E03E242CFC55E985_gshared (ES3Type_LightsModule_t37A9192D3FFC77124809D0623E14839D7E0C86A6* __this, ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* ___reader0, RuntimeObject* ___obj1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mFFB70EE53D8CD0255A4E599780F62A3EB1520E83_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mEFCC4D52DD5B822D3561A53591AE11CDB25CDB6F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisLight_t1E68479B7782AF2050FAA02A5DC612FD034F18F3_mB032FAFBAB777BB6EC57AFAD4E183FCA57151654_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_m9D6B4042B923127DEA4A2CAA3E35EED37D75B3D0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mA86928BC888E342D2C2644535E3399952F5077ED_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_Light_t0E702BA5766531A8E1C1C7B952BD4B76502DE877_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_MinMaxCurve_t1C147718750ACBECE5D2B7F545D2A434A3C5409B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_int_t05A5E7A96442F23CE33E24A71CD349372A70E0C3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral072FD16FCD5FDEE6DF9288BBCA5AFBFA16B04581);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1057AAF5EE3CDF423CF6BCC588476E559687CDE6);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2AC7F98E5022908E09788532C95599452352D34A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral40B9968876DFBA959A505AA3EC0E9D9D26C14E45);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4845015737DC41475709911228278216EE4DC3AF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral509D57D2D3AC4C6FAE8D21D19FF2B9D787C81954);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral52D353FB908B8123B513952855EB88F081A1A06A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral60126327537B7B8E6EE33C43FE0C5CA8BCC3A06A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral77682CE598EDE490DCDE276E250422EA9BEA739F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral93C208E83E88E77020CE91612101CB879A8EE914);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA2DB56FF90ECEEEC49C5E8C66FCD72DF2771D010);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B);
		s_Il2CppMethodInitialized = true;
	}
	LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	uint32_t V_2 = 0;
	{
		// var instance = (UnityEngine.ParticleSystem.LightsModule)obj;
		RuntimeObject* L_0 = ___obj1;
		V_0 = ((*(LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E*)((LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E*)(LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E*)UnBox(L_0, LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E_il2cpp_TypeInfo_var))));
		goto IL_02bb;
	}

IL_000c:
	{
		String_t* L_1 = V_1;
		uint32_t L_2;
		L_2 = U3CPrivateImplementationDetailsU3E_ComputeStringHash_m6EA1F233618497AEFF8902A5EDFA24C74E2F2876(L_1, NULL);
		V_2 = L_2;
		uint32_t L_3 = V_2;
		if ((!(((uint32_t)L_3) <= ((uint32_t)((int32_t)-1604400485)))))
		{
			goto IL_006f;
		}
	}
	{
		uint32_t L_4 = V_2;
		if ((!(((uint32_t)L_4) <= ((uint32_t)((int32_t)680602789)))))
		{
			goto IL_0049;
		}
	}
	{
		uint32_t L_5 = V_2;
		if ((((int32_t)L_5) == ((int32_t)((int32_t)49525662))))
		{
			goto IL_00ba;
		}
	}
	{
		uint32_t L_6 = V_2;
		if ((((int32_t)L_6) == ((int32_t)((int32_t)258704408))))
		{
			goto IL_0138;
		}
	}
	{
		uint32_t L_7 = V_2;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)680602789))))
		{
			goto IL_00e4;
		}
	}
	{
		goto IL_02b5;
	}

IL_0049:
	{
		uint32_t L_8 = V_2;
		if ((((int32_t)L_8) == ((int32_t)((int32_t)2057398597))))
		{
			goto IL_0162;
		}
	}
	{
		uint32_t L_9 = V_2;
		if ((((int32_t)L_9) == ((int32_t)((int32_t)-2057050870))))
		{
			goto IL_0177;
		}
	}
	{
		uint32_t L_10 = V_2;
		if ((((int32_t)L_10) == ((int32_t)((int32_t)-1604400485))))
		{
			goto IL_0123;
		}
	}
	{
		goto IL_02b5;
	}

IL_006f:
	{
		uint32_t L_11 = V_2;
		if ((!(((uint32_t)L_11) <= ((uint32_t)((int32_t)-667110935)))))
		{
			goto IL_0097;
		}
	}
	{
		uint32_t L_12 = V_2;
		if ((((int32_t)L_12) == ((int32_t)((int32_t)-1055777148))))
		{
			goto IL_00cf;
		}
	}
	{
		uint32_t L_13 = V_2;
		if ((((int32_t)L_13) == ((int32_t)((int32_t)-796669776))))
		{
			goto IL_01a1;
		}
	}
	{
		uint32_t L_14 = V_2;
		if ((((int32_t)L_14) == ((int32_t)((int32_t)-667110935))))
		{
			goto IL_010e;
		}
	}
	{
		goto IL_02b5;
	}

IL_0097:
	{
		uint32_t L_15 = V_2;
		if ((((int32_t)L_15) == ((int32_t)((int32_t)-493019601))))
		{
			goto IL_00f9;
		}
	}
	{
		uint32_t L_16 = V_2;
		if ((((int32_t)L_16) == ((int32_t)((int32_t)-86242094))))
		{
			goto IL_014d;
		}
	}
	{
		uint32_t L_17 = V_2;
		if ((((int32_t)L_17) == ((int32_t)((int32_t)-24986963))))
		{
			goto IL_018c;
		}
	}
	{
		goto IL_02b5;
	}

IL_00ba:
	{
		String_t* L_18 = V_1;
		bool L_19;
		L_19 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_18, _stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B, NULL);
		if (L_19)
		{
			goto IL_01b6;
		}
	}
	{
		goto IL_02b5;
	}

IL_00cf:
	{
		String_t* L_20 = V_1;
		bool L_21;
		L_21 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_20, _stringLiteral60126327537B7B8E6EE33C43FE0C5CA8BCC3A06A, NULL);
		if (L_21)
		{
			goto IL_01cd;
		}
	}
	{
		goto IL_02b5;
	}

IL_00e4:
	{
		String_t* L_22 = V_1;
		bool L_23;
		L_23 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_22, _stringLiteral509D57D2D3AC4C6FAE8D21D19FF2B9D787C81954, NULL);
		if (L_23)
		{
			goto IL_01e4;
		}
	}
	{
		goto IL_02b5;
	}

IL_00f9:
	{
		String_t* L_24 = V_1;
		bool L_25;
		L_25 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_24, _stringLiteral1057AAF5EE3CDF423CF6BCC588476E559687CDE6, NULL);
		if (L_25)
		{
			goto IL_01fb;
		}
	}
	{
		goto IL_02b5;
	}

IL_010e:
	{
		String_t* L_26 = V_1;
		bool L_27;
		L_27 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_26, _stringLiteral2AC7F98E5022908E09788532C95599452352D34A, NULL);
		if (L_27)
		{
			goto IL_0212;
		}
	}
	{
		goto IL_02b5;
	}

IL_0123:
	{
		String_t* L_28 = V_1;
		bool L_29;
		L_29 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_28, _stringLiteral93C208E83E88E77020CE91612101CB879A8EE914, NULL);
		if (L_29)
		{
			goto IL_0229;
		}
	}
	{
		goto IL_02b5;
	}

IL_0138:
	{
		String_t* L_30 = V_1;
		bool L_31;
		L_31 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_30, _stringLiteral072FD16FCD5FDEE6DF9288BBCA5AFBFA16B04581, NULL);
		if (L_31)
		{
			goto IL_023d;
		}
	}
	{
		goto IL_02b5;
	}

IL_014d:
	{
		String_t* L_32 = V_1;
		bool L_33;
		L_33 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_32, _stringLiteral4845015737DC41475709911228278216EE4DC3AF, NULL);
		if (L_33)
		{
			goto IL_0251;
		}
	}
	{
		goto IL_02b5;
	}

IL_0162:
	{
		String_t* L_34 = V_1;
		bool L_35;
		L_35 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_34, _stringLiteralA2DB56FF90ECEEEC49C5E8C66FCD72DF2771D010, NULL);
		if (L_35)
		{
			goto IL_0265;
		}
	}
	{
		goto IL_02b5;
	}

IL_0177:
	{
		String_t* L_36 = V_1;
		bool L_37;
		L_37 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_36, _stringLiteral40B9968876DFBA959A505AA3EC0E9D9D26C14E45, NULL);
		if (L_37)
		{
			goto IL_0279;
		}
	}
	{
		goto IL_02b5;
	}

IL_018c:
	{
		String_t* L_38 = V_1;
		bool L_39;
		L_39 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_38, _stringLiteral77682CE598EDE490DCDE276E250422EA9BEA739F, NULL);
		if (L_39)
		{
			goto IL_028d;
		}
	}
	{
		goto IL_02b5;
	}

IL_01a1:
	{
		String_t* L_40 = V_1;
		bool L_41;
		L_41 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_40, _stringLiteral52D353FB908B8123B513952855EB88F081A1A06A, NULL);
		if (L_41)
		{
			goto IL_02a1;
		}
	}
	{
		goto IL_02b5;
	}

IL_01b6:
	{
		// instance.enabled = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_42 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_43 = ((ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_42);
		bool L_44;
		L_44 = GenericVirtualFuncInvoker1< bool, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mFFB70EE53D8CD0255A4E599780F62A3EB1520E83_RuntimeMethod_var, L_42, L_43);
		LightsModule_set_enabled_mCA61408EE4B83423BB92B032567BA63005379DCE((&V_0), L_44, NULL);
		// break;
		goto IL_02bb;
	}

IL_01cd:
	{
		// instance.ratio = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_45 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_46 = ((ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_45);
		float L_47;
		L_47 = GenericVirtualFuncInvoker1< float, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mA86928BC888E342D2C2644535E3399952F5077ED_RuntimeMethod_var, L_45, L_46);
		LightsModule_set_ratio_mE1B9F5C45EB2E0822BF47F28F0510B5ECF2C87FC((&V_0), L_47, NULL);
		// break;
		goto IL_02bb;
	}

IL_01e4:
	{
		// instance.useRandomDistribution = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_48 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_49 = ((ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_48);
		bool L_50;
		L_50 = GenericVirtualFuncInvoker1< bool, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mFFB70EE53D8CD0255A4E599780F62A3EB1520E83_RuntimeMethod_var, L_48, L_49);
		LightsModule_set_useRandomDistribution_mB5EEC3EE5E510F2F27C779C25FD584B6FEA879D9((&V_0), L_50, NULL);
		// break;
		goto IL_02bb;
	}

IL_01fb:
	{
		// instance.light = reader.Read<UnityEngine.Light>(ES3Type_Light.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_51 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_52 = ((ES3Type_Light_t0E702BA5766531A8E1C1C7B952BD4B76502DE877_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Light_t0E702BA5766531A8E1C1C7B952BD4B76502DE877_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_51);
		Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* L_53;
		L_53 = GenericVirtualFuncInvoker1< Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3*, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisLight_t1E68479B7782AF2050FAA02A5DC612FD034F18F3_mB032FAFBAB777BB6EC57AFAD4E183FCA57151654_RuntimeMethod_var, L_51, L_52);
		LightsModule_set_light_m54F655151E83BA1CF8ECDF92B8D18F06463B2D59((&V_0), L_53, NULL);
		// break;
		goto IL_02bb;
	}

IL_0212:
	{
		// instance.useParticleColor = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_54 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_55 = ((ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_54);
		bool L_56;
		L_56 = GenericVirtualFuncInvoker1< bool, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mFFB70EE53D8CD0255A4E599780F62A3EB1520E83_RuntimeMethod_var, L_54, L_55);
		LightsModule_set_useParticleColor_mC91DC556C20A786D4E8190842094B557204C74B0((&V_0), L_56, NULL);
		// break;
		goto IL_02bb;
	}

IL_0229:
	{
		// instance.sizeAffectsRange = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_57 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_58 = ((ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_57);
		bool L_59;
		L_59 = GenericVirtualFuncInvoker1< bool, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mFFB70EE53D8CD0255A4E599780F62A3EB1520E83_RuntimeMethod_var, L_57, L_58);
		LightsModule_set_sizeAffectsRange_mBAAE49AC54AE79237649DD0AA715F43B0510356A((&V_0), L_59, NULL);
		// break;
		goto IL_02bb;
	}

IL_023d:
	{
		// instance.alphaAffectsIntensity = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_60 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_61 = ((ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_60);
		bool L_62;
		L_62 = GenericVirtualFuncInvoker1< bool, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mFFB70EE53D8CD0255A4E599780F62A3EB1520E83_RuntimeMethod_var, L_60, L_61);
		LightsModule_set_alphaAffectsIntensity_m79B804EA7C98543C733F3E0355DB01B8E1845995((&V_0), L_62, NULL);
		// break;
		goto IL_02bb;
	}

IL_0251:
	{
		// instance.range = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_63 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_64 = ((ES3Type_MinMaxCurve_t1C147718750ACBECE5D2B7F545D2A434A3C5409B_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t1C147718750ACBECE5D2B7F545D2A434A3C5409B_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_63);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_65;
		L_65 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_m9D6B4042B923127DEA4A2CAA3E35EED37D75B3D0_RuntimeMethod_var, L_63, L_64);
		LightsModule_set_range_m3DA6A5EE3021CB5A4787AEAE4DCA675E3050C5E4((&V_0), L_65, NULL);
		// break;
		goto IL_02bb;
	}

IL_0265:
	{
		// instance.rangeMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_66 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_67 = ((ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_66);
		float L_68;
		L_68 = GenericVirtualFuncInvoker1< float, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mA86928BC888E342D2C2644535E3399952F5077ED_RuntimeMethod_var, L_66, L_67);
		LightsModule_set_rangeMultiplier_m881D705C505C908F9F05F24EFBFC61DD2F01B23F((&V_0), L_68, NULL);
		// break;
		goto IL_02bb;
	}

IL_0279:
	{
		// instance.intensity = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_69 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_70 = ((ES3Type_MinMaxCurve_t1C147718750ACBECE5D2B7F545D2A434A3C5409B_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t1C147718750ACBECE5D2B7F545D2A434A3C5409B_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_69);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_71;
		L_71 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_m9D6B4042B923127DEA4A2CAA3E35EED37D75B3D0_RuntimeMethod_var, L_69, L_70);
		LightsModule_set_intensity_mD1D7564D1ADD14C5755043F1146A8D56C228A519((&V_0), L_71, NULL);
		// break;
		goto IL_02bb;
	}

IL_028d:
	{
		// instance.intensityMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_72 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_73 = ((ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_72);
		float L_74;
		L_74 = GenericVirtualFuncInvoker1< float, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mA86928BC888E342D2C2644535E3399952F5077ED_RuntimeMethod_var, L_72, L_73);
		LightsModule_set_intensityMultiplier_m79E9E71E14F02B6BE7C4EB6C5B3BA8921D1B29F8((&V_0), L_74, NULL);
		// break;
		goto IL_02bb;
	}

IL_02a1:
	{
		// instance.maxLights = reader.Read<System.Int32>(ES3Type_int.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_75 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_76 = ((ES3Type_int_t05A5E7A96442F23CE33E24A71CD349372A70E0C3_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_int_t05A5E7A96442F23CE33E24A71CD349372A70E0C3_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_75);
		int32_t L_77;
		L_77 = GenericVirtualFuncInvoker1< int32_t, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mEFCC4D52DD5B822D3561A53591AE11CDB25CDB6F_RuntimeMethod_var, L_75, L_76);
		LightsModule_set_maxLights_mC423F1C129DAB69F2F145F6AA8160DEE8176F4EC((&V_0), L_77, NULL);
		// break;
		goto IL_02bb;
	}

IL_02b5:
	{
		// reader.Skip();
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_78 = ___reader0;
		NullCheck(L_78);
		VirtualActionInvoker0::Invoke(41 /* System.Void ES3Reader::Skip() */, L_78);
	}

IL_02bb:
	{
		// while((propertyName = reader.ReadPropertyName()) != null)
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_79 = ___reader0;
		NullCheck(L_79);
		String_t* L_80;
		L_80 = VirtualFuncInvoker0< String_t* >::Invoke(21 /* System.String ES3Reader::ReadPropertyName() */, L_79);
		String_t* L_81 = L_80;
		V_1 = L_81;
		if (L_81)
		{
			goto IL_000c;
		}
	}
	{
		// }
		return;
	}
}
// System.Void ES3Types.ES3Type_LightsModule::ReadInto<UnityEngine.ParticleSystem/MainModule>(ES3Reader,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ES3Type_LightsModule_ReadInto_TisMainModule_tC7ECD8330C14B0808478A748048988A6085CE2A9_m1F6FFE777D54AE51F80A2F09B5EF1CBBA86F87A2_gshared (ES3Type_LightsModule_t37A9192D3FFC77124809D0623E14839D7E0C86A6* __this, ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* ___reader0, RuntimeObject* ___obj1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mFFB70EE53D8CD0255A4E599780F62A3EB1520E83_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mEFCC4D52DD5B822D3561A53591AE11CDB25CDB6F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisLight_t1E68479B7782AF2050FAA02A5DC612FD034F18F3_mB032FAFBAB777BB6EC57AFAD4E183FCA57151654_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_m9D6B4042B923127DEA4A2CAA3E35EED37D75B3D0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mA86928BC888E342D2C2644535E3399952F5077ED_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_Light_t0E702BA5766531A8E1C1C7B952BD4B76502DE877_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_MinMaxCurve_t1C147718750ACBECE5D2B7F545D2A434A3C5409B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_int_t05A5E7A96442F23CE33E24A71CD349372A70E0C3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral072FD16FCD5FDEE6DF9288BBCA5AFBFA16B04581);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1057AAF5EE3CDF423CF6BCC588476E559687CDE6);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2AC7F98E5022908E09788532C95599452352D34A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral40B9968876DFBA959A505AA3EC0E9D9D26C14E45);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4845015737DC41475709911228278216EE4DC3AF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral509D57D2D3AC4C6FAE8D21D19FF2B9D787C81954);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral52D353FB908B8123B513952855EB88F081A1A06A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral60126327537B7B8E6EE33C43FE0C5CA8BCC3A06A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral77682CE598EDE490DCDE276E250422EA9BEA739F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral93C208E83E88E77020CE91612101CB879A8EE914);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA2DB56FF90ECEEEC49C5E8C66FCD72DF2771D010);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B);
		s_Il2CppMethodInitialized = true;
	}
	LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	uint32_t V_2 = 0;
	{
		// var instance = (UnityEngine.ParticleSystem.LightsModule)obj;
		RuntimeObject* L_0 = ___obj1;
		V_0 = ((*(LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E*)((LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E*)(LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E*)UnBox(L_0, LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E_il2cpp_TypeInfo_var))));
		goto IL_02bb;
	}

IL_000c:
	{
		String_t* L_1 = V_1;
		uint32_t L_2;
		L_2 = U3CPrivateImplementationDetailsU3E_ComputeStringHash_m6EA1F233618497AEFF8902A5EDFA24C74E2F2876(L_1, NULL);
		V_2 = L_2;
		uint32_t L_3 = V_2;
		if ((!(((uint32_t)L_3) <= ((uint32_t)((int32_t)-1604400485)))))
		{
			goto IL_006f;
		}
	}
	{
		uint32_t L_4 = V_2;
		if ((!(((uint32_t)L_4) <= ((uint32_t)((int32_t)680602789)))))
		{
			goto IL_0049;
		}
	}
	{
		uint32_t L_5 = V_2;
		if ((((int32_t)L_5) == ((int32_t)((int32_t)49525662))))
		{
			goto IL_00ba;
		}
	}
	{
		uint32_t L_6 = V_2;
		if ((((int32_t)L_6) == ((int32_t)((int32_t)258704408))))
		{
			goto IL_0138;
		}
	}
	{
		uint32_t L_7 = V_2;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)680602789))))
		{
			goto IL_00e4;
		}
	}
	{
		goto IL_02b5;
	}

IL_0049:
	{
		uint32_t L_8 = V_2;
		if ((((int32_t)L_8) == ((int32_t)((int32_t)2057398597))))
		{
			goto IL_0162;
		}
	}
	{
		uint32_t L_9 = V_2;
		if ((((int32_t)L_9) == ((int32_t)((int32_t)-2057050870))))
		{
			goto IL_0177;
		}
	}
	{
		uint32_t L_10 = V_2;
		if ((((int32_t)L_10) == ((int32_t)((int32_t)-1604400485))))
		{
			goto IL_0123;
		}
	}
	{
		goto IL_02b5;
	}

IL_006f:
	{
		uint32_t L_11 = V_2;
		if ((!(((uint32_t)L_11) <= ((uint32_t)((int32_t)-667110935)))))
		{
			goto IL_0097;
		}
	}
	{
		uint32_t L_12 = V_2;
		if ((((int32_t)L_12) == ((int32_t)((int32_t)-1055777148))))
		{
			goto IL_00cf;
		}
	}
	{
		uint32_t L_13 = V_2;
		if ((((int32_t)L_13) == ((int32_t)((int32_t)-796669776))))
		{
			goto IL_01a1;
		}
	}
	{
		uint32_t L_14 = V_2;
		if ((((int32_t)L_14) == ((int32_t)((int32_t)-667110935))))
		{
			goto IL_010e;
		}
	}
	{
		goto IL_02b5;
	}

IL_0097:
	{
		uint32_t L_15 = V_2;
		if ((((int32_t)L_15) == ((int32_t)((int32_t)-493019601))))
		{
			goto IL_00f9;
		}
	}
	{
		uint32_t L_16 = V_2;
		if ((((int32_t)L_16) == ((int32_t)((int32_t)-86242094))))
		{
			goto IL_014d;
		}
	}
	{
		uint32_t L_17 = V_2;
		if ((((int32_t)L_17) == ((int32_t)((int32_t)-24986963))))
		{
			goto IL_018c;
		}
	}
	{
		goto IL_02b5;
	}

IL_00ba:
	{
		String_t* L_18 = V_1;
		bool L_19;
		L_19 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_18, _stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B, NULL);
		if (L_19)
		{
			goto IL_01b6;
		}
	}
	{
		goto IL_02b5;
	}

IL_00cf:
	{
		String_t* L_20 = V_1;
		bool L_21;
		L_21 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_20, _stringLiteral60126327537B7B8E6EE33C43FE0C5CA8BCC3A06A, NULL);
		if (L_21)
		{
			goto IL_01cd;
		}
	}
	{
		goto IL_02b5;
	}

IL_00e4:
	{
		String_t* L_22 = V_1;
		bool L_23;
		L_23 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_22, _stringLiteral509D57D2D3AC4C6FAE8D21D19FF2B9D787C81954, NULL);
		if (L_23)
		{
			goto IL_01e4;
		}
	}
	{
		goto IL_02b5;
	}

IL_00f9:
	{
		String_t* L_24 = V_1;
		bool L_25;
		L_25 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_24, _stringLiteral1057AAF5EE3CDF423CF6BCC588476E559687CDE6, NULL);
		if (L_25)
		{
			goto IL_01fb;
		}
	}
	{
		goto IL_02b5;
	}

IL_010e:
	{
		String_t* L_26 = V_1;
		bool L_27;
		L_27 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_26, _stringLiteral2AC7F98E5022908E09788532C95599452352D34A, NULL);
		if (L_27)
		{
			goto IL_0212;
		}
	}
	{
		goto IL_02b5;
	}

IL_0123:
	{
		String_t* L_28 = V_1;
		bool L_29;
		L_29 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_28, _stringLiteral93C208E83E88E77020CE91612101CB879A8EE914, NULL);
		if (L_29)
		{
			goto IL_0229;
		}
	}
	{
		goto IL_02b5;
	}

IL_0138:
	{
		String_t* L_30 = V_1;
		bool L_31;
		L_31 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_30, _stringLiteral072FD16FCD5FDEE6DF9288BBCA5AFBFA16B04581, NULL);
		if (L_31)
		{
			goto IL_023d;
		}
	}
	{
		goto IL_02b5;
	}

IL_014d:
	{
		String_t* L_32 = V_1;
		bool L_33;
		L_33 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_32, _stringLiteral4845015737DC41475709911228278216EE4DC3AF, NULL);
		if (L_33)
		{
			goto IL_0251;
		}
	}
	{
		goto IL_02b5;
	}

IL_0162:
	{
		String_t* L_34 = V_1;
		bool L_35;
		L_35 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_34, _stringLiteralA2DB56FF90ECEEEC49C5E8C66FCD72DF2771D010, NULL);
		if (L_35)
		{
			goto IL_0265;
		}
	}
	{
		goto IL_02b5;
	}

IL_0177:
	{
		String_t* L_36 = V_1;
		bool L_37;
		L_37 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_36, _stringLiteral40B9968876DFBA959A505AA3EC0E9D9D26C14E45, NULL);
		if (L_37)
		{
			goto IL_0279;
		}
	}
	{
		goto IL_02b5;
	}

IL_018c:
	{
		String_t* L_38 = V_1;
		bool L_39;
		L_39 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_38, _stringLiteral77682CE598EDE490DCDE276E250422EA9BEA739F, NULL);
		if (L_39)
		{
			goto IL_028d;
		}
	}
	{
		goto IL_02b5;
	}

IL_01a1:
	{
		String_t* L_40 = V_1;
		bool L_41;
		L_41 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_40, _stringLiteral52D353FB908B8123B513952855EB88F081A1A06A, NULL);
		if (L_41)
		{
			goto IL_02a1;
		}
	}
	{
		goto IL_02b5;
	}

IL_01b6:
	{
		// instance.enabled = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_42 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_43 = ((ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_42);
		bool L_44;
		L_44 = GenericVirtualFuncInvoker1< bool, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mFFB70EE53D8CD0255A4E599780F62A3EB1520E83_RuntimeMethod_var, L_42, L_43);
		LightsModule_set_enabled_mCA61408EE4B83423BB92B032567BA63005379DCE((&V_0), L_44, NULL);
		// break;
		goto IL_02bb;
	}

IL_01cd:
	{
		// instance.ratio = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_45 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_46 = ((ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_45);
		float L_47;
		L_47 = GenericVirtualFuncInvoker1< float, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mA86928BC888E342D2C2644535E3399952F5077ED_RuntimeMethod_var, L_45, L_46);
		LightsModule_set_ratio_mE1B9F5C45EB2E0822BF47F28F0510B5ECF2C87FC((&V_0), L_47, NULL);
		// break;
		goto IL_02bb;
	}

IL_01e4:
	{
		// instance.useRandomDistribution = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_48 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_49 = ((ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_48);
		bool L_50;
		L_50 = GenericVirtualFuncInvoker1< bool, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mFFB70EE53D8CD0255A4E599780F62A3EB1520E83_RuntimeMethod_var, L_48, L_49);
		LightsModule_set_useRandomDistribution_mB5EEC3EE5E510F2F27C779C25FD584B6FEA879D9((&V_0), L_50, NULL);
		// break;
		goto IL_02bb;
	}

IL_01fb:
	{
		// instance.light = reader.Read<UnityEngine.Light>(ES3Type_Light.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_51 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_52 = ((ES3Type_Light_t0E702BA5766531A8E1C1C7B952BD4B76502DE877_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Light_t0E702BA5766531A8E1C1C7B952BD4B76502DE877_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_51);
		Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* L_53;
		L_53 = GenericVirtualFuncInvoker1< Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3*, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisLight_t1E68479B7782AF2050FAA02A5DC612FD034F18F3_mB032FAFBAB777BB6EC57AFAD4E183FCA57151654_RuntimeMethod_var, L_51, L_52);
		LightsModule_set_light_m54F655151E83BA1CF8ECDF92B8D18F06463B2D59((&V_0), L_53, NULL);
		// break;
		goto IL_02bb;
	}

IL_0212:
	{
		// instance.useParticleColor = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_54 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_55 = ((ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_54);
		bool L_56;
		L_56 = GenericVirtualFuncInvoker1< bool, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mFFB70EE53D8CD0255A4E599780F62A3EB1520E83_RuntimeMethod_var, L_54, L_55);
		LightsModule_set_useParticleColor_mC91DC556C20A786D4E8190842094B557204C74B0((&V_0), L_56, NULL);
		// break;
		goto IL_02bb;
	}

IL_0229:
	{
		// instance.sizeAffectsRange = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_57 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_58 = ((ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_57);
		bool L_59;
		L_59 = GenericVirtualFuncInvoker1< bool, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mFFB70EE53D8CD0255A4E599780F62A3EB1520E83_RuntimeMethod_var, L_57, L_58);
		LightsModule_set_sizeAffectsRange_mBAAE49AC54AE79237649DD0AA715F43B0510356A((&V_0), L_59, NULL);
		// break;
		goto IL_02bb;
	}

IL_023d:
	{
		// instance.alphaAffectsIntensity = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_60 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_61 = ((ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_60);
		bool L_62;
		L_62 = GenericVirtualFuncInvoker1< bool, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mFFB70EE53D8CD0255A4E599780F62A3EB1520E83_RuntimeMethod_var, L_60, L_61);
		LightsModule_set_alphaAffectsIntensity_m79B804EA7C98543C733F3E0355DB01B8E1845995((&V_0), L_62, NULL);
		// break;
		goto IL_02bb;
	}

IL_0251:
	{
		// instance.range = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_63 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_64 = ((ES3Type_MinMaxCurve_t1C147718750ACBECE5D2B7F545D2A434A3C5409B_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t1C147718750ACBECE5D2B7F545D2A434A3C5409B_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_63);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_65;
		L_65 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_m9D6B4042B923127DEA4A2CAA3E35EED37D75B3D0_RuntimeMethod_var, L_63, L_64);
		LightsModule_set_range_m3DA6A5EE3021CB5A4787AEAE4DCA675E3050C5E4((&V_0), L_65, NULL);
		// break;
		goto IL_02bb;
	}

IL_0265:
	{
		// instance.rangeMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_66 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_67 = ((ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_66);
		float L_68;
		L_68 = GenericVirtualFuncInvoker1< float, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mA86928BC888E342D2C2644535E3399952F5077ED_RuntimeMethod_var, L_66, L_67);
		LightsModule_set_rangeMultiplier_m881D705C505C908F9F05F24EFBFC61DD2F01B23F((&V_0), L_68, NULL);
		// break;
		goto IL_02bb;
	}

IL_0279:
	{
		// instance.intensity = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_69 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_70 = ((ES3Type_MinMaxCurve_t1C147718750ACBECE5D2B7F545D2A434A3C5409B_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t1C147718750ACBECE5D2B7F545D2A434A3C5409B_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_69);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_71;
		L_71 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_m9D6B4042B923127DEA4A2CAA3E35EED37D75B3D0_RuntimeMethod_var, L_69, L_70);
		LightsModule_set_intensity_mD1D7564D1ADD14C5755043F1146A8D56C228A519((&V_0), L_71, NULL);
		// break;
		goto IL_02bb;
	}

IL_028d:
	{
		// instance.intensityMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_72 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_73 = ((ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_72);
		float L_74;
		L_74 = GenericVirtualFuncInvoker1< float, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mA86928BC888E342D2C2644535E3399952F5077ED_RuntimeMethod_var, L_72, L_73);
		LightsModule_set_intensityMultiplier_m79E9E71E14F02B6BE7C4EB6C5B3BA8921D1B29F8((&V_0), L_74, NULL);
		// break;
		goto IL_02bb;
	}

IL_02a1:
	{
		// instance.maxLights = reader.Read<System.Int32>(ES3Type_int.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_75 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_76 = ((ES3Type_int_t05A5E7A96442F23CE33E24A71CD349372A70E0C3_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_int_t05A5E7A96442F23CE33E24A71CD349372A70E0C3_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_75);
		int32_t L_77;
		L_77 = GenericVirtualFuncInvoker1< int32_t, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mEFCC4D52DD5B822D3561A53591AE11CDB25CDB6F_RuntimeMethod_var, L_75, L_76);
		LightsModule_set_maxLights_mC423F1C129DAB69F2F145F6AA8160DEE8176F4EC((&V_0), L_77, NULL);
		// break;
		goto IL_02bb;
	}

IL_02b5:
	{
		// reader.Skip();
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_78 = ___reader0;
		NullCheck(L_78);
		VirtualActionInvoker0::Invoke(41 /* System.Void ES3Reader::Skip() */, L_78);
	}

IL_02bb:
	{
		// while((propertyName = reader.ReadPropertyName()) != null)
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_79 = ___reader0;
		NullCheck(L_79);
		String_t* L_80;
		L_80 = VirtualFuncInvoker0< String_t* >::Invoke(21 /* System.String ES3Reader::ReadPropertyName() */, L_79);
		String_t* L_81 = L_80;
		V_1 = L_81;
		if (L_81)
		{
			goto IL_000c;
		}
	}
	{
		// }
		return;
	}
}
// System.Void ES3Types.ES3Type_LightsModule::ReadInto<UnityEngine.ParticleSystem/NoiseModule>(ES3Reader,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ES3Type_LightsModule_ReadInto_TisNoiseModule_tF8D6CB544A887C0C93D05A228B65E41DBD1F3AE0_m3658BD454513213FF98E8E11FB2EC22BD2BBC2B6_gshared (ES3Type_LightsModule_t37A9192D3FFC77124809D0623E14839D7E0C86A6* __this, ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* ___reader0, RuntimeObject* ___obj1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mFFB70EE53D8CD0255A4E599780F62A3EB1520E83_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mEFCC4D52DD5B822D3561A53591AE11CDB25CDB6F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisLight_t1E68479B7782AF2050FAA02A5DC612FD034F18F3_mB032FAFBAB777BB6EC57AFAD4E183FCA57151654_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_m9D6B4042B923127DEA4A2CAA3E35EED37D75B3D0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mA86928BC888E342D2C2644535E3399952F5077ED_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_Light_t0E702BA5766531A8E1C1C7B952BD4B76502DE877_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_MinMaxCurve_t1C147718750ACBECE5D2B7F545D2A434A3C5409B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_int_t05A5E7A96442F23CE33E24A71CD349372A70E0C3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral072FD16FCD5FDEE6DF9288BBCA5AFBFA16B04581);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1057AAF5EE3CDF423CF6BCC588476E559687CDE6);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2AC7F98E5022908E09788532C95599452352D34A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral40B9968876DFBA959A505AA3EC0E9D9D26C14E45);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4845015737DC41475709911228278216EE4DC3AF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral509D57D2D3AC4C6FAE8D21D19FF2B9D787C81954);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral52D353FB908B8123B513952855EB88F081A1A06A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral60126327537B7B8E6EE33C43FE0C5CA8BCC3A06A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral77682CE598EDE490DCDE276E250422EA9BEA739F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral93C208E83E88E77020CE91612101CB879A8EE914);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA2DB56FF90ECEEEC49C5E8C66FCD72DF2771D010);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B);
		s_Il2CppMethodInitialized = true;
	}
	LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	uint32_t V_2 = 0;
	{
		// var instance = (UnityEngine.ParticleSystem.LightsModule)obj;
		RuntimeObject* L_0 = ___obj1;
		V_0 = ((*(LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E*)((LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E*)(LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E*)UnBox(L_0, LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E_il2cpp_TypeInfo_var))));
		goto IL_02bb;
	}

IL_000c:
	{
		String_t* L_1 = V_1;
		uint32_t L_2;
		L_2 = U3CPrivateImplementationDetailsU3E_ComputeStringHash_m6EA1F233618497AEFF8902A5EDFA24C74E2F2876(L_1, NULL);
		V_2 = L_2;
		uint32_t L_3 = V_2;
		if ((!(((uint32_t)L_3) <= ((uint32_t)((int32_t)-1604400485)))))
		{
			goto IL_006f;
		}
	}
	{
		uint32_t L_4 = V_2;
		if ((!(((uint32_t)L_4) <= ((uint32_t)((int32_t)680602789)))))
		{
			goto IL_0049;
		}
	}
	{
		uint32_t L_5 = V_2;
		if ((((int32_t)L_5) == ((int32_t)((int32_t)49525662))))
		{
			goto IL_00ba;
		}
	}
	{
		uint32_t L_6 = V_2;
		if ((((int32_t)L_6) == ((int32_t)((int32_t)258704408))))
		{
			goto IL_0138;
		}
	}
	{
		uint32_t L_7 = V_2;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)680602789))))
		{
			goto IL_00e4;
		}
	}
	{
		goto IL_02b5;
	}

IL_0049:
	{
		uint32_t L_8 = V_2;
		if ((((int32_t)L_8) == ((int32_t)((int32_t)2057398597))))
		{
			goto IL_0162;
		}
	}
	{
		uint32_t L_9 = V_2;
		if ((((int32_t)L_9) == ((int32_t)((int32_t)-2057050870))))
		{
			goto IL_0177;
		}
	}
	{
		uint32_t L_10 = V_2;
		if ((((int32_t)L_10) == ((int32_t)((int32_t)-1604400485))))
		{
			goto IL_0123;
		}
	}
	{
		goto IL_02b5;
	}

IL_006f:
	{
		uint32_t L_11 = V_2;
		if ((!(((uint32_t)L_11) <= ((uint32_t)((int32_t)-667110935)))))
		{
			goto IL_0097;
		}
	}
	{
		uint32_t L_12 = V_2;
		if ((((int32_t)L_12) == ((int32_t)((int32_t)-1055777148))))
		{
			goto IL_00cf;
		}
	}
	{
		uint32_t L_13 = V_2;
		if ((((int32_t)L_13) == ((int32_t)((int32_t)-796669776))))
		{
			goto IL_01a1;
		}
	}
	{
		uint32_t L_14 = V_2;
		if ((((int32_t)L_14) == ((int32_t)((int32_t)-667110935))))
		{
			goto IL_010e;
		}
	}
	{
		goto IL_02b5;
	}

IL_0097:
	{
		uint32_t L_15 = V_2;
		if ((((int32_t)L_15) == ((int32_t)((int32_t)-493019601))))
		{
			goto IL_00f9;
		}
	}
	{
		uint32_t L_16 = V_2;
		if ((((int32_t)L_16) == ((int32_t)((int32_t)-86242094))))
		{
			goto IL_014d;
		}
	}
	{
		uint32_t L_17 = V_2;
		if ((((int32_t)L_17) == ((int32_t)((int32_t)-24986963))))
		{
			goto IL_018c;
		}
	}
	{
		goto IL_02b5;
	}

IL_00ba:
	{
		String_t* L_18 = V_1;
		bool L_19;
		L_19 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_18, _stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B, NULL);
		if (L_19)
		{
			goto IL_01b6;
		}
	}
	{
		goto IL_02b5;
	}

IL_00cf:
	{
		String_t* L_20 = V_1;
		bool L_21;
		L_21 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_20, _stringLiteral60126327537B7B8E6EE33C43FE0C5CA8BCC3A06A, NULL);
		if (L_21)
		{
			goto IL_01cd;
		}
	}
	{
		goto IL_02b5;
	}

IL_00e4:
	{
		String_t* L_22 = V_1;
		bool L_23;
		L_23 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_22, _stringLiteral509D57D2D3AC4C6FAE8D21D19FF2B9D787C81954, NULL);
		if (L_23)
		{
			goto IL_01e4;
		}
	}
	{
		goto IL_02b5;
	}

IL_00f9:
	{
		String_t* L_24 = V_1;
		bool L_25;
		L_25 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_24, _stringLiteral1057AAF5EE3CDF423CF6BCC588476E559687CDE6, NULL);
		if (L_25)
		{
			goto IL_01fb;
		}
	}
	{
		goto IL_02b5;
	}

IL_010e:
	{
		String_t* L_26 = V_1;
		bool L_27;
		L_27 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_26, _stringLiteral2AC7F98E5022908E09788532C95599452352D34A, NULL);
		if (L_27)
		{
			goto IL_0212;
		}
	}
	{
		goto IL_02b5;
	}

IL_0123:
	{
		String_t* L_28 = V_1;
		bool L_29;
		L_29 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_28, _stringLiteral93C208E83E88E77020CE91612101CB879A8EE914, NULL);
		if (L_29)
		{
			goto IL_0229;
		}
	}
	{
		goto IL_02b5;
	}

IL_0138:
	{
		String_t* L_30 = V_1;
		bool L_31;
		L_31 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_30, _stringLiteral072FD16FCD5FDEE6DF9288BBCA5AFBFA16B04581, NULL);
		if (L_31)
		{
			goto IL_023d;
		}
	}
	{
		goto IL_02b5;
	}

IL_014d:
	{
		String_t* L_32 = V_1;
		bool L_33;
		L_33 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_32, _stringLiteral4845015737DC41475709911228278216EE4DC3AF, NULL);
		if (L_33)
		{
			goto IL_0251;
		}
	}
	{
		goto IL_02b5;
	}

IL_0162:
	{
		String_t* L_34 = V_1;
		bool L_35;
		L_35 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_34, _stringLiteralA2DB56FF90ECEEEC49C5E8C66FCD72DF2771D010, NULL);
		if (L_35)
		{
			goto IL_0265;
		}
	}
	{
		goto IL_02b5;
	}

IL_0177:
	{
		String_t* L_36 = V_1;
		bool L_37;
		L_37 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_36, _stringLiteral40B9968876DFBA959A505AA3EC0E9D9D26C14E45, NULL);
		if (L_37)
		{
			goto IL_0279;
		}
	}
	{
		goto IL_02b5;
	}

IL_018c:
	{
		String_t* L_38 = V_1;
		bool L_39;
		L_39 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_38, _stringLiteral77682CE598EDE490DCDE276E250422EA9BEA739F, NULL);
		if (L_39)
		{
			goto IL_028d;
		}
	}
	{
		goto IL_02b5;
	}

IL_01a1:
	{
		String_t* L_40 = V_1;
		bool L_41;
		L_41 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_40, _stringLiteral52D353FB908B8123B513952855EB88F081A1A06A, NULL);
		if (L_41)
		{
			goto IL_02a1;
		}
	}
	{
		goto IL_02b5;
	}

IL_01b6:
	{
		// instance.enabled = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_42 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_43 = ((ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_42);
		bool L_44;
		L_44 = GenericVirtualFuncInvoker1< bool, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mFFB70EE53D8CD0255A4E599780F62A3EB1520E83_RuntimeMethod_var, L_42, L_43);
		LightsModule_set_enabled_mCA61408EE4B83423BB92B032567BA63005379DCE((&V_0), L_44, NULL);
		// break;
		goto IL_02bb;
	}

IL_01cd:
	{
		// instance.ratio = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_45 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_46 = ((ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_45);
		float L_47;
		L_47 = GenericVirtualFuncInvoker1< float, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mA86928BC888E342D2C2644535E3399952F5077ED_RuntimeMethod_var, L_45, L_46);
		LightsModule_set_ratio_mE1B9F5C45EB2E0822BF47F28F0510B5ECF2C87FC((&V_0), L_47, NULL);
		// break;
		goto IL_02bb;
	}

IL_01e4:
	{
		// instance.useRandomDistribution = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_48 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_49 = ((ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_48);
		bool L_50;
		L_50 = GenericVirtualFuncInvoker1< bool, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mFFB70EE53D8CD0255A4E599780F62A3EB1520E83_RuntimeMethod_var, L_48, L_49);
		LightsModule_set_useRandomDistribution_mB5EEC3EE5E510F2F27C779C25FD584B6FEA879D9((&V_0), L_50, NULL);
		// break;
		goto IL_02bb;
	}

IL_01fb:
	{
		// instance.light = reader.Read<UnityEngine.Light>(ES3Type_Light.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_51 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_52 = ((ES3Type_Light_t0E702BA5766531A8E1C1C7B952BD4B76502DE877_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Light_t0E702BA5766531A8E1C1C7B952BD4B76502DE877_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_51);
		Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* L_53;
		L_53 = GenericVirtualFuncInvoker1< Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3*, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisLight_t1E68479B7782AF2050FAA02A5DC612FD034F18F3_mB032FAFBAB777BB6EC57AFAD4E183FCA57151654_RuntimeMethod_var, L_51, L_52);
		LightsModule_set_light_m54F655151E83BA1CF8ECDF92B8D18F06463B2D59((&V_0), L_53, NULL);
		// break;
		goto IL_02bb;
	}

IL_0212:
	{
		// instance.useParticleColor = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_54 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_55 = ((ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_54);
		bool L_56;
		L_56 = GenericVirtualFuncInvoker1< bool, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mFFB70EE53D8CD0255A4E599780F62A3EB1520E83_RuntimeMethod_var, L_54, L_55);
		LightsModule_set_useParticleColor_mC91DC556C20A786D4E8190842094B557204C74B0((&V_0), L_56, NULL);
		// break;
		goto IL_02bb;
	}

IL_0229:
	{
		// instance.sizeAffectsRange = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_57 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_58 = ((ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_57);
		bool L_59;
		L_59 = GenericVirtualFuncInvoker1< bool, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mFFB70EE53D8CD0255A4E599780F62A3EB1520E83_RuntimeMethod_var, L_57, L_58);
		LightsModule_set_sizeAffectsRange_mBAAE49AC54AE79237649DD0AA715F43B0510356A((&V_0), L_59, NULL);
		// break;
		goto IL_02bb;
	}

IL_023d:
	{
		// instance.alphaAffectsIntensity = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_60 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_61 = ((ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_60);
		bool L_62;
		L_62 = GenericVirtualFuncInvoker1< bool, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mFFB70EE53D8CD0255A4E599780F62A3EB1520E83_RuntimeMethod_var, L_60, L_61);
		LightsModule_set_alphaAffectsIntensity_m79B804EA7C98543C733F3E0355DB01B8E1845995((&V_0), L_62, NULL);
		// break;
		goto IL_02bb;
	}

IL_0251:
	{
		// instance.range = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_63 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_64 = ((ES3Type_MinMaxCurve_t1C147718750ACBECE5D2B7F545D2A434A3C5409B_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t1C147718750ACBECE5D2B7F545D2A434A3C5409B_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_63);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_65;
		L_65 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_m9D6B4042B923127DEA4A2CAA3E35EED37D75B3D0_RuntimeMethod_var, L_63, L_64);
		LightsModule_set_range_m3DA6A5EE3021CB5A4787AEAE4DCA675E3050C5E4((&V_0), L_65, NULL);
		// break;
		goto IL_02bb;
	}

IL_0265:
	{
		// instance.rangeMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_66 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_67 = ((ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_66);
		float L_68;
		L_68 = GenericVirtualFuncInvoker1< float, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mA86928BC888E342D2C2644535E3399952F5077ED_RuntimeMethod_var, L_66, L_67);
		LightsModule_set_rangeMultiplier_m881D705C505C908F9F05F24EFBFC61DD2F01B23F((&V_0), L_68, NULL);
		// break;
		goto IL_02bb;
	}

IL_0279:
	{
		// instance.intensity = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_69 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_70 = ((ES3Type_MinMaxCurve_t1C147718750ACBECE5D2B7F545D2A434A3C5409B_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t1C147718750ACBECE5D2B7F545D2A434A3C5409B_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_69);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_71;
		L_71 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_m9D6B4042B923127DEA4A2CAA3E35EED37D75B3D0_RuntimeMethod_var, L_69, L_70);
		LightsModule_set_intensity_mD1D7564D1ADD14C5755043F1146A8D56C228A519((&V_0), L_71, NULL);
		// break;
		goto IL_02bb;
	}

IL_028d:
	{
		// instance.intensityMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_72 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_73 = ((ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_72);
		float L_74;
		L_74 = GenericVirtualFuncInvoker1< float, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mA86928BC888E342D2C2644535E3399952F5077ED_RuntimeMethod_var, L_72, L_73);
		LightsModule_set_intensityMultiplier_m79E9E71E14F02B6BE7C4EB6C5B3BA8921D1B29F8((&V_0), L_74, NULL);
		// break;
		goto IL_02bb;
	}

IL_02a1:
	{
		// instance.maxLights = reader.Read<System.Int32>(ES3Type_int.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_75 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_76 = ((ES3Type_int_t05A5E7A96442F23CE33E24A71CD349372A70E0C3_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_int_t05A5E7A96442F23CE33E24A71CD349372A70E0C3_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_75);
		int32_t L_77;
		L_77 = GenericVirtualFuncInvoker1< int32_t, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mEFCC4D52DD5B822D3561A53591AE11CDB25CDB6F_RuntimeMethod_var, L_75, L_76);
		LightsModule_set_maxLights_mC423F1C129DAB69F2F145F6AA8160DEE8176F4EC((&V_0), L_77, NULL);
		// break;
		goto IL_02bb;
	}

IL_02b5:
	{
		// reader.Skip();
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_78 = ___reader0;
		NullCheck(L_78);
		VirtualActionInvoker0::Invoke(41 /* System.Void ES3Reader::Skip() */, L_78);
	}

IL_02bb:
	{
		// while((propertyName = reader.ReadPropertyName()) != null)
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_79 = ___reader0;
		NullCheck(L_79);
		String_t* L_80;
		L_80 = VirtualFuncInvoker0< String_t* >::Invoke(21 /* System.String ES3Reader::ReadPropertyName() */, L_79);
		String_t* L_81 = L_80;
		V_1 = L_81;
		if (L_81)
		{
			goto IL_000c;
		}
	}
	{
		// }
		return;
	}
}
// System.Void ES3Types.ES3Type_LightsModule::ReadInto<UnityEngine.ParticleSystem/RotationBySpeedModule>(ES3Reader,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ES3Type_LightsModule_ReadInto_TisRotationBySpeedModule_tBCB7E7C1B402D1492310016D5F8FBBA4C15C26A6_m74DBBDC29EA446FEE982C3E2C228772FD79B15CF_gshared (ES3Type_LightsModule_t37A9192D3FFC77124809D0623E14839D7E0C86A6* __this, ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* ___reader0, RuntimeObject* ___obj1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mFFB70EE53D8CD0255A4E599780F62A3EB1520E83_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mEFCC4D52DD5B822D3561A53591AE11CDB25CDB6F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisLight_t1E68479B7782AF2050FAA02A5DC612FD034F18F3_mB032FAFBAB777BB6EC57AFAD4E183FCA57151654_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_m9D6B4042B923127DEA4A2CAA3E35EED37D75B3D0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mA86928BC888E342D2C2644535E3399952F5077ED_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_Light_t0E702BA5766531A8E1C1C7B952BD4B76502DE877_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_MinMaxCurve_t1C147718750ACBECE5D2B7F545D2A434A3C5409B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_int_t05A5E7A96442F23CE33E24A71CD349372A70E0C3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral072FD16FCD5FDEE6DF9288BBCA5AFBFA16B04581);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1057AAF5EE3CDF423CF6BCC588476E559687CDE6);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2AC7F98E5022908E09788532C95599452352D34A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral40B9968876DFBA959A505AA3EC0E9D9D26C14E45);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4845015737DC41475709911228278216EE4DC3AF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral509D57D2D3AC4C6FAE8D21D19FF2B9D787C81954);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral52D353FB908B8123B513952855EB88F081A1A06A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral60126327537B7B8E6EE33C43FE0C5CA8BCC3A06A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral77682CE598EDE490DCDE276E250422EA9BEA739F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral93C208E83E88E77020CE91612101CB879A8EE914);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA2DB56FF90ECEEEC49C5E8C66FCD72DF2771D010);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B);
		s_Il2CppMethodInitialized = true;
	}
	LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	uint32_t V_2 = 0;
	{
		// var instance = (UnityEngine.ParticleSystem.LightsModule)obj;
		RuntimeObject* L_0 = ___obj1;
		V_0 = ((*(LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E*)((LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E*)(LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E*)UnBox(L_0, LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E_il2cpp_TypeInfo_var))));
		goto IL_02bb;
	}

IL_000c:
	{
		String_t* L_1 = V_1;
		uint32_t L_2;
		L_2 = U3CPrivateImplementationDetailsU3E_ComputeStringHash_m6EA1F233618497AEFF8902A5EDFA24C74E2F2876(L_1, NULL);
		V_2 = L_2;
		uint32_t L_3 = V_2;
		if ((!(((uint32_t)L_3) <= ((uint32_t)((int32_t)-1604400485)))))
		{
			goto IL_006f;
		}
	}
	{
		uint32_t L_4 = V_2;
		if ((!(((uint32_t)L_4) <= ((uint32_t)((int32_t)680602789)))))
		{
			goto IL_0049;
		}
	}
	{
		uint32_t L_5 = V_2;
		if ((((int32_t)L_5) == ((int32_t)((int32_t)49525662))))
		{
			goto IL_00ba;
		}
	}
	{
		uint32_t L_6 = V_2;
		if ((((int32_t)L_6) == ((int32_t)((int32_t)258704408))))
		{
			goto IL_0138;
		}
	}
	{
		uint32_t L_7 = V_2;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)680602789))))
		{
			goto IL_00e4;
		}
	}
	{
		goto IL_02b5;
	}

IL_0049:
	{
		uint32_t L_8 = V_2;
		if ((((int32_t)L_8) == ((int32_t)((int32_t)2057398597))))
		{
			goto IL_0162;
		}
	}
	{
		uint32_t L_9 = V_2;
		if ((((int32_t)L_9) == ((int32_t)((int32_t)-2057050870))))
		{
			goto IL_0177;
		}
	}
	{
		uint32_t L_10 = V_2;
		if ((((int32_t)L_10) == ((int32_t)((int32_t)-1604400485))))
		{
			goto IL_0123;
		}
	}
	{
		goto IL_02b5;
	}

IL_006f:
	{
		uint32_t L_11 = V_2;
		if ((!(((uint32_t)L_11) <= ((uint32_t)((int32_t)-667110935)))))
		{
			goto IL_0097;
		}
	}
	{
		uint32_t L_12 = V_2;
		if ((((int32_t)L_12) == ((int32_t)((int32_t)-1055777148))))
		{
			goto IL_00cf;
		}
	}
	{
		uint32_t L_13 = V_2;
		if ((((int32_t)L_13) == ((int32_t)((int32_t)-796669776))))
		{
			goto IL_01a1;
		}
	}
	{
		uint32_t L_14 = V_2;
		if ((((int32_t)L_14) == ((int32_t)((int32_t)-667110935))))
		{
			goto IL_010e;
		}
	}
	{
		goto IL_02b5;
	}

IL_0097:
	{
		uint32_t L_15 = V_2;
		if ((((int32_t)L_15) == ((int32_t)((int32_t)-493019601))))
		{
			goto IL_00f9;
		}
	}
	{
		uint32_t L_16 = V_2;
		if ((((int32_t)L_16) == ((int32_t)((int32_t)-86242094))))
		{
			goto IL_014d;
		}
	}
	{
		uint32_t L_17 = V_2;
		if ((((int32_t)L_17) == ((int32_t)((int32_t)-24986963))))
		{
			goto IL_018c;
		}
	}
	{
		goto IL_02b5;
	}

IL_00ba:
	{
		String_t* L_18 = V_1;
		bool L_19;
		L_19 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_18, _stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B, NULL);
		if (L_19)
		{
			goto IL_01b6;
		}
	}
	{
		goto IL_02b5;
	}

IL_00cf:
	{
		String_t* L_20 = V_1;
		bool L_21;
		L_21 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_20, _stringLiteral60126327537B7B8E6EE33C43FE0C5CA8BCC3A06A, NULL);
		if (L_21)
		{
			goto IL_01cd;
		}
	}
	{
		goto IL_02b5;
	}

IL_00e4:
	{
		String_t* L_22 = V_1;
		bool L_23;
		L_23 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_22, _stringLiteral509D57D2D3AC4C6FAE8D21D19FF2B9D787C81954, NULL);
		if (L_23)
		{
			goto IL_01e4;
		}
	}
	{
		goto IL_02b5;
	}

IL_00f9:
	{
		String_t* L_24 = V_1;
		bool L_25;
		L_25 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_24, _stringLiteral1057AAF5EE3CDF423CF6BCC588476E559687CDE6, NULL);
		if (L_25)
		{
			goto IL_01fb;
		}
	}
	{
		goto IL_02b5;
	}

IL_010e:
	{
		String_t* L_26 = V_1;
		bool L_27;
		L_27 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_26, _stringLiteral2AC7F98E5022908E09788532C95599452352D34A, NULL);
		if (L_27)
		{
			goto IL_0212;
		}
	}
	{
		goto IL_02b5;
	}

IL_0123:
	{
		String_t* L_28 = V_1;
		bool L_29;
		L_29 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_28, _stringLiteral93C208E83E88E77020CE91612101CB879A8EE914, NULL);
		if (L_29)
		{
			goto IL_0229;
		}
	}
	{
		goto IL_02b5;
	}

IL_0138:
	{
		String_t* L_30 = V_1;
		bool L_31;
		L_31 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_30, _stringLiteral072FD16FCD5FDEE6DF9288BBCA5AFBFA16B04581, NULL);
		if (L_31)
		{
			goto IL_023d;
		}
	}
	{
		goto IL_02b5;
	}

IL_014d:
	{
		String_t* L_32 = V_1;
		bool L_33;
		L_33 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_32, _stringLiteral4845015737DC41475709911228278216EE4DC3AF, NULL);
		if (L_33)
		{
			goto IL_0251;
		}
	}
	{
		goto IL_02b5;
	}

IL_0162:
	{
		String_t* L_34 = V_1;
		bool L_35;
		L_35 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_34, _stringLiteralA2DB56FF90ECEEEC49C5E8C66FCD72DF2771D010, NULL);
		if (L_35)
		{
			goto IL_0265;
		}
	}
	{
		goto IL_02b5;
	}

IL_0177:
	{
		String_t* L_36 = V_1;
		bool L_37;
		L_37 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_36, _stringLiteral40B9968876DFBA959A505AA3EC0E9D9D26C14E45, NULL);
		if (L_37)
		{
			goto IL_0279;
		}
	}
	{
		goto IL_02b5;
	}

IL_018c:
	{
		String_t* L_38 = V_1;
		bool L_39;
		L_39 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_38, _stringLiteral77682CE598EDE490DCDE276E250422EA9BEA739F, NULL);
		if (L_39)
		{
			goto IL_028d;
		}
	}
	{
		goto IL_02b5;
	}

IL_01a1:
	{
		String_t* L_40 = V_1;
		bool L_41;
		L_41 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_40, _stringLiteral52D353FB908B8123B513952855EB88F081A1A06A, NULL);
		if (L_41)
		{
			goto IL_02a1;
		}
	}
	{
		goto IL_02b5;
	}

IL_01b6:
	{
		// instance.enabled = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_42 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_43 = ((ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_42);
		bool L_44;
		L_44 = GenericVirtualFuncInvoker1< bool, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mFFB70EE53D8CD0255A4E599780F62A3EB1520E83_RuntimeMethod_var, L_42, L_43);
		LightsModule_set_enabled_mCA61408EE4B83423BB92B032567BA63005379DCE((&V_0), L_44, NULL);
		// break;
		goto IL_02bb;
	}

IL_01cd:
	{
		// instance.ratio = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_45 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_46 = ((ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_45);
		float L_47;
		L_47 = GenericVirtualFuncInvoker1< float, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mA86928BC888E342D2C2644535E3399952F5077ED_RuntimeMethod_var, L_45, L_46);
		LightsModule_set_ratio_mE1B9F5C45EB2E0822BF47F28F0510B5ECF2C87FC((&V_0), L_47, NULL);
		// break;
		goto IL_02bb;
	}

IL_01e4:
	{
		// instance.useRandomDistribution = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_48 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_49 = ((ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_48);
		bool L_50;
		L_50 = GenericVirtualFuncInvoker1< bool, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mFFB70EE53D8CD0255A4E599780F62A3EB1520E83_RuntimeMethod_var, L_48, L_49);
		LightsModule_set_useRandomDistribution_mB5EEC3EE5E510F2F27C779C25FD584B6FEA879D9((&V_0), L_50, NULL);
		// break;
		goto IL_02bb;
	}

IL_01fb:
	{
		// instance.light = reader.Read<UnityEngine.Light>(ES3Type_Light.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_51 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_52 = ((ES3Type_Light_t0E702BA5766531A8E1C1C7B952BD4B76502DE877_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Light_t0E702BA5766531A8E1C1C7B952BD4B76502DE877_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_51);
		Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* L_53;
		L_53 = GenericVirtualFuncInvoker1< Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3*, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisLight_t1E68479B7782AF2050FAA02A5DC612FD034F18F3_mB032FAFBAB777BB6EC57AFAD4E183FCA57151654_RuntimeMethod_var, L_51, L_52);
		LightsModule_set_light_m54F655151E83BA1CF8ECDF92B8D18F06463B2D59((&V_0), L_53, NULL);
		// break;
		goto IL_02bb;
	}

IL_0212:
	{
		// instance.useParticleColor = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_54 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_55 = ((ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_54);
		bool L_56;
		L_56 = GenericVirtualFuncInvoker1< bool, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mFFB70EE53D8CD0255A4E599780F62A3EB1520E83_RuntimeMethod_var, L_54, L_55);
		LightsModule_set_useParticleColor_mC91DC556C20A786D4E8190842094B557204C74B0((&V_0), L_56, NULL);
		// break;
		goto IL_02bb;
	}

IL_0229:
	{
		// instance.sizeAffectsRange = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_57 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_58 = ((ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_57);
		bool L_59;
		L_59 = GenericVirtualFuncInvoker1< bool, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mFFB70EE53D8CD0255A4E599780F62A3EB1520E83_RuntimeMethod_var, L_57, L_58);
		LightsModule_set_sizeAffectsRange_mBAAE49AC54AE79237649DD0AA715F43B0510356A((&V_0), L_59, NULL);
		// break;
		goto IL_02bb;
	}

IL_023d:
	{
		// instance.alphaAffectsIntensity = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_60 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_61 = ((ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_60);
		bool L_62;
		L_62 = GenericVirtualFuncInvoker1< bool, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mFFB70EE53D8CD0255A4E599780F62A3EB1520E83_RuntimeMethod_var, L_60, L_61);
		LightsModule_set_alphaAffectsIntensity_m79B804EA7C98543C733F3E0355DB01B8E1845995((&V_0), L_62, NULL);
		// break;
		goto IL_02bb;
	}

IL_0251:
	{
		// instance.range = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_63 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_64 = ((ES3Type_MinMaxCurve_t1C147718750ACBECE5D2B7F545D2A434A3C5409B_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t1C147718750ACBECE5D2B7F545D2A434A3C5409B_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_63);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_65;
		L_65 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_m9D6B4042B923127DEA4A2CAA3E35EED37D75B3D0_RuntimeMethod_var, L_63, L_64);
		LightsModule_set_range_m3DA6A5EE3021CB5A4787AEAE4DCA675E3050C5E4((&V_0), L_65, NULL);
		// break;
		goto IL_02bb;
	}

IL_0265:
	{
		// instance.rangeMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_66 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_67 = ((ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_66);
		float L_68;
		L_68 = GenericVirtualFuncInvoker1< float, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mA86928BC888E342D2C2644535E3399952F5077ED_RuntimeMethod_var, L_66, L_67);
		LightsModule_set_rangeMultiplier_m881D705C505C908F9F05F24EFBFC61DD2F01B23F((&V_0), L_68, NULL);
		// break;
		goto IL_02bb;
	}

IL_0279:
	{
		// instance.intensity = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_69 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_70 = ((ES3Type_MinMaxCurve_t1C147718750ACBECE5D2B7F545D2A434A3C5409B_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t1C147718750ACBECE5D2B7F545D2A434A3C5409B_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_69);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_71;
		L_71 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_m9D6B4042B923127DEA4A2CAA3E35EED37D75B3D0_RuntimeMethod_var, L_69, L_70);
		LightsModule_set_intensity_mD1D7564D1ADD14C5755043F1146A8D56C228A519((&V_0), L_71, NULL);
		// break;
		goto IL_02bb;
	}

IL_028d:
	{
		// instance.intensityMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_72 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_73 = ((ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_72);
		float L_74;
		L_74 = GenericVirtualFuncInvoker1< float, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mA86928BC888E342D2C2644535E3399952F5077ED_RuntimeMethod_var, L_72, L_73);
		LightsModule_set_intensityMultiplier_m79E9E71E14F02B6BE7C4EB6C5B3BA8921D1B29F8((&V_0), L_74, NULL);
		// break;
		goto IL_02bb;
	}

IL_02a1:
	{
		// instance.maxLights = reader.Read<System.Int32>(ES3Type_int.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_75 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_76 = ((ES3Type_int_t05A5E7A96442F23CE33E24A71CD349372A70E0C3_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_int_t05A5E7A96442F23CE33E24A71CD349372A70E0C3_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_75);
		int32_t L_77;
		L_77 = GenericVirtualFuncInvoker1< int32_t, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mEFCC4D52DD5B822D3561A53591AE11CDB25CDB6F_RuntimeMethod_var, L_75, L_76);
		LightsModule_set_maxLights_mC423F1C129DAB69F2F145F6AA8160DEE8176F4EC((&V_0), L_77, NULL);
		// break;
		goto IL_02bb;
	}

IL_02b5:
	{
		// reader.Skip();
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_78 = ___reader0;
		NullCheck(L_78);
		VirtualActionInvoker0::Invoke(41 /* System.Void ES3Reader::Skip() */, L_78);
	}

IL_02bb:
	{
		// while((propertyName = reader.ReadPropertyName()) != null)
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_79 = ___reader0;
		NullCheck(L_79);
		String_t* L_80;
		L_80 = VirtualFuncInvoker0< String_t* >::Invoke(21 /* System.String ES3Reader::ReadPropertyName() */, L_79);
		String_t* L_81 = L_80;
		V_1 = L_81;
		if (L_81)
		{
			goto IL_000c;
		}
	}
	{
		// }
		return;
	}
}
// System.Void ES3Types.ES3Type_LightsModule::ReadInto<UnityEngine.ParticleSystem/RotationOverLifetimeModule>(ES3Reader,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ES3Type_LightsModule_ReadInto_TisRotationOverLifetimeModule_tEE08858451167B6DDE6DD36FDCF11E74C77D79E6_m67504AF394AA97DF19FE90DF5F891878FECC0475_gshared (ES3Type_LightsModule_t37A9192D3FFC77124809D0623E14839D7E0C86A6* __this, ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* ___reader0, RuntimeObject* ___obj1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mFFB70EE53D8CD0255A4E599780F62A3EB1520E83_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mEFCC4D52DD5B822D3561A53591AE11CDB25CDB6F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisLight_t1E68479B7782AF2050FAA02A5DC612FD034F18F3_mB032FAFBAB777BB6EC57AFAD4E183FCA57151654_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_m9D6B4042B923127DEA4A2CAA3E35EED37D75B3D0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mA86928BC888E342D2C2644535E3399952F5077ED_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_Light_t0E702BA5766531A8E1C1C7B952BD4B76502DE877_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_MinMaxCurve_t1C147718750ACBECE5D2B7F545D2A434A3C5409B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_int_t05A5E7A96442F23CE33E24A71CD349372A70E0C3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral072FD16FCD5FDEE6DF9288BBCA5AFBFA16B04581);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1057AAF5EE3CDF423CF6BCC588476E559687CDE6);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2AC7F98E5022908E09788532C95599452352D34A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral40B9968876DFBA959A505AA3EC0E9D9D26C14E45);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4845015737DC41475709911228278216EE4DC3AF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral509D57D2D3AC4C6FAE8D21D19FF2B9D787C81954);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral52D353FB908B8123B513952855EB88F081A1A06A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral60126327537B7B8E6EE33C43FE0C5CA8BCC3A06A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral77682CE598EDE490DCDE276E250422EA9BEA739F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral93C208E83E88E77020CE91612101CB879A8EE914);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA2DB56FF90ECEEEC49C5E8C66FCD72DF2771D010);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B);
		s_Il2CppMethodInitialized = true;
	}
	LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	uint32_t V_2 = 0;
	{
		// var instance = (UnityEngine.ParticleSystem.LightsModule)obj;
		RuntimeObject* L_0 = ___obj1;
		V_0 = ((*(LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E*)((LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E*)(LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E*)UnBox(L_0, LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E_il2cpp_TypeInfo_var))));
		goto IL_02bb;
	}

IL_000c:
	{
		String_t* L_1 = V_1;
		uint32_t L_2;
		L_2 = U3CPrivateImplementationDetailsU3E_ComputeStringHash_m6EA1F233618497AEFF8902A5EDFA24C74E2F2876(L_1, NULL);
		V_2 = L_2;
		uint32_t L_3 = V_2;
		if ((!(((uint32_t)L_3) <= ((uint32_t)((int32_t)-1604400485)))))
		{
			goto IL_006f;
		}
	}
	{
		uint32_t L_4 = V_2;
		if ((!(((uint32_t)L_4) <= ((uint32_t)((int32_t)680602789)))))
		{
			goto IL_0049;
		}
	}
	{
		uint32_t L_5 = V_2;
		if ((((int32_t)L_5) == ((int32_t)((int32_t)49525662))))
		{
			goto IL_00ba;
		}
	}
	{
		uint32_t L_6 = V_2;
		if ((((int32_t)L_6) == ((int32_t)((int32_t)258704408))))
		{
			goto IL_0138;
		}
	}
	{
		uint32_t L_7 = V_2;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)680602789))))
		{
			goto IL_00e4;
		}
	}
	{
		goto IL_02b5;
	}

IL_0049:
	{
		uint32_t L_8 = V_2;
		if ((((int32_t)L_8) == ((int32_t)((int32_t)2057398597))))
		{
			goto IL_0162;
		}
	}
	{
		uint32_t L_9 = V_2;
		if ((((int32_t)L_9) == ((int32_t)((int32_t)-2057050870))))
		{
			goto IL_0177;
		}
	}
	{
		uint32_t L_10 = V_2;
		if ((((int32_t)L_10) == ((int32_t)((int32_t)-1604400485))))
		{
			goto IL_0123;
		}
	}
	{
		goto IL_02b5;
	}

IL_006f:
	{
		uint32_t L_11 = V_2;
		if ((!(((uint32_t)L_11) <= ((uint32_t)((int32_t)-667110935)))))
		{
			goto IL_0097;
		}
	}
	{
		uint32_t L_12 = V_2;
		if ((((int32_t)L_12) == ((int32_t)((int32_t)-1055777148))))
		{
			goto IL_00cf;
		}
	}
	{
		uint32_t L_13 = V_2;
		if ((((int32_t)L_13) == ((int32_t)((int32_t)-796669776))))
		{
			goto IL_01a1;
		}
	}
	{
		uint32_t L_14 = V_2;
		if ((((int32_t)L_14) == ((int32_t)((int32_t)-667110935))))
		{
			goto IL_010e;
		}
	}
	{
		goto IL_02b5;
	}

IL_0097:
	{
		uint32_t L_15 = V_2;
		if ((((int32_t)L_15) == ((int32_t)((int32_t)-493019601))))
		{
			goto IL_00f9;
		}
	}
	{
		uint32_t L_16 = V_2;
		if ((((int32_t)L_16) == ((int32_t)((int32_t)-86242094))))
		{
			goto IL_014d;
		}
	}
	{
		uint32_t L_17 = V_2;
		if ((((int32_t)L_17) == ((int32_t)((int32_t)-24986963))))
		{
			goto IL_018c;
		}
	}
	{
		goto IL_02b5;
	}

IL_00ba:
	{
		String_t* L_18 = V_1;
		bool L_19;
		L_19 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_18, _stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B, NULL);
		if (L_19)
		{
			goto IL_01b6;
		}
	}
	{
		goto IL_02b5;
	}

IL_00cf:
	{
		String_t* L_20 = V_1;
		bool L_21;
		L_21 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_20, _stringLiteral60126327537B7B8E6EE33C43FE0C5CA8BCC3A06A, NULL);
		if (L_21)
		{
			goto IL_01cd;
		}
	}
	{
		goto IL_02b5;
	}

IL_00e4:
	{
		String_t* L_22 = V_1;
		bool L_23;
		L_23 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_22, _stringLiteral509D57D2D3AC4C6FAE8D21D19FF2B9D787C81954, NULL);
		if (L_23)
		{
			goto IL_01e4;
		}
	}
	{
		goto IL_02b5;
	}

IL_00f9:
	{
		String_t* L_24 = V_1;
		bool L_25;
		L_25 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_24, _stringLiteral1057AAF5EE3CDF423CF6BCC588476E559687CDE6, NULL);
		if (L_25)
		{
			goto IL_01fb;
		}
	}
	{
		goto IL_02b5;
	}

IL_010e:
	{
		String_t* L_26 = V_1;
		bool L_27;
		L_27 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_26, _stringLiteral2AC7F98E5022908E09788532C95599452352D34A, NULL);
		if (L_27)
		{
			goto IL_0212;
		}
	}
	{
		goto IL_02b5;
	}

IL_0123:
	{
		String_t* L_28 = V_1;
		bool L_29;
		L_29 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_28, _stringLiteral93C208E83E88E77020CE91612101CB879A8EE914, NULL);
		if (L_29)
		{
			goto IL_0229;
		}
	}
	{
		goto IL_02b5;
	}

IL_0138:
	{
		String_t* L_30 = V_1;
		bool L_31;
		L_31 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_30, _stringLiteral072FD16FCD5FDEE6DF9288BBCA5AFBFA16B04581, NULL);
		if (L_31)
		{
			goto IL_023d;
		}
	}
	{
		goto IL_02b5;
	}

IL_014d:
	{
		String_t* L_32 = V_1;
		bool L_33;
		L_33 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_32, _stringLiteral4845015737DC41475709911228278216EE4DC3AF, NULL);
		if (L_33)
		{
			goto IL_0251;
		}
	}
	{
		goto IL_02b5;
	}

IL_0162:
	{
		String_t* L_34 = V_1;
		bool L_35;
		L_35 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_34, _stringLiteralA2DB56FF90ECEEEC49C5E8C66FCD72DF2771D010, NULL);
		if (L_35)
		{
			goto IL_0265;
		}
	}
	{
		goto IL_02b5;
	}

IL_0177:
	{
		String_t* L_36 = V_1;
		bool L_37;
		L_37 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_36, _stringLiteral40B9968876DFBA959A505AA3EC0E9D9D26C14E45, NULL);
		if (L_37)
		{
			goto IL_0279;
		}
	}
	{
		goto IL_02b5;
	}

IL_018c:
	{
		String_t* L_38 = V_1;
		bool L_39;
		L_39 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_38, _stringLiteral77682CE598EDE490DCDE276E250422EA9BEA739F, NULL);
		if (L_39)
		{
			goto IL_028d;
		}
	}
	{
		goto IL_02b5;
	}

IL_01a1:
	{
		String_t* L_40 = V_1;
		bool L_41;
		L_41 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_40, _stringLiteral52D353FB908B8123B513952855EB88F081A1A06A, NULL);
		if (L_41)
		{
			goto IL_02a1;
		}
	}
	{
		goto IL_02b5;
	}

IL_01b6:
	{
		// instance.enabled = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_42 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_43 = ((ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_42);
		bool L_44;
		L_44 = GenericVirtualFuncInvoker1< bool, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mFFB70EE53D8CD0255A4E599780F62A3EB1520E83_RuntimeMethod_var, L_42, L_43);
		LightsModule_set_enabled_mCA61408EE4B83423BB92B032567BA63005379DCE((&V_0), L_44, NULL);
		// break;
		goto IL_02bb;
	}

IL_01cd:
	{
		// instance.ratio = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_45 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_46 = ((ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_45);
		float L_47;
		L_47 = GenericVirtualFuncInvoker1< float, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mA86928BC888E342D2C2644535E3399952F5077ED_RuntimeMethod_var, L_45, L_46);
		LightsModule_set_ratio_mE1B9F5C45EB2E0822BF47F28F0510B5ECF2C87FC((&V_0), L_47, NULL);
		// break;
		goto IL_02bb;
	}

IL_01e4:
	{
		// instance.useRandomDistribution = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_48 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_49 = ((ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_48);
		bool L_50;
		L_50 = GenericVirtualFuncInvoker1< bool, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mFFB70EE53D8CD0255A4E599780F62A3EB1520E83_RuntimeMethod_var, L_48, L_49);
		LightsModule_set_useRandomDistribution_mB5EEC3EE5E510F2F27C779C25FD584B6FEA879D9((&V_0), L_50, NULL);
		// break;
		goto IL_02bb;
	}

IL_01fb:
	{
		// instance.light = reader.Read<UnityEngine.Light>(ES3Type_Light.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_51 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_52 = ((ES3Type_Light_t0E702BA5766531A8E1C1C7B952BD4B76502DE877_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Light_t0E702BA5766531A8E1C1C7B952BD4B76502DE877_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_51);
		Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* L_53;
		L_53 = GenericVirtualFuncInvoker1< Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3*, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisLight_t1E68479B7782AF2050FAA02A5DC612FD034F18F3_mB032FAFBAB777BB6EC57AFAD4E183FCA57151654_RuntimeMethod_var, L_51, L_52);
		LightsModule_set_light_m54F655151E83BA1CF8ECDF92B8D18F06463B2D59((&V_0), L_53, NULL);
		// break;
		goto IL_02bb;
	}

IL_0212:
	{
		// instance.useParticleColor = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_54 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_55 = ((ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_54);
		bool L_56;
		L_56 = GenericVirtualFuncInvoker1< bool, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mFFB70EE53D8CD0255A4E599780F62A3EB1520E83_RuntimeMethod_var, L_54, L_55);
		LightsModule_set_useParticleColor_mC91DC556C20A786D4E8190842094B557204C74B0((&V_0), L_56, NULL);
		// break;
		goto IL_02bb;
	}

IL_0229:
	{
		// instance.sizeAffectsRange = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_57 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_58 = ((ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_57);
		bool L_59;
		L_59 = GenericVirtualFuncInvoker1< bool, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mFFB70EE53D8CD0255A4E599780F62A3EB1520E83_RuntimeMethod_var, L_57, L_58);
		LightsModule_set_sizeAffectsRange_mBAAE49AC54AE79237649DD0AA715F43B0510356A((&V_0), L_59, NULL);
		// break;
		goto IL_02bb;
	}

IL_023d:
	{
		// instance.alphaAffectsIntensity = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_60 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_61 = ((ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_60);
		bool L_62;
		L_62 = GenericVirtualFuncInvoker1< bool, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mFFB70EE53D8CD0255A4E599780F62A3EB1520E83_RuntimeMethod_var, L_60, L_61);
		LightsModule_set_alphaAffectsIntensity_m79B804EA7C98543C733F3E0355DB01B8E1845995((&V_0), L_62, NULL);
		// break;
		goto IL_02bb;
	}

IL_0251:
	{
		// instance.range = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_63 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_64 = ((ES3Type_MinMaxCurve_t1C147718750ACBECE5D2B7F545D2A434A3C5409B_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t1C147718750ACBECE5D2B7F545D2A434A3C5409B_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_63);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_65;
		L_65 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_m9D6B4042B923127DEA4A2CAA3E35EED37D75B3D0_RuntimeMethod_var, L_63, L_64);
		LightsModule_set_range_m3DA6A5EE3021CB5A4787AEAE4DCA675E3050C5E4((&V_0), L_65, NULL);
		// break;
		goto IL_02bb;
	}

IL_0265:
	{
		// instance.rangeMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_66 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_67 = ((ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_66);
		float L_68;
		L_68 = GenericVirtualFuncInvoker1< float, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mA86928BC888E342D2C2644535E3399952F5077ED_RuntimeMethod_var, L_66, L_67);
		LightsModule_set_rangeMultiplier_m881D705C505C908F9F05F24EFBFC61DD2F01B23F((&V_0), L_68, NULL);
		// break;
		goto IL_02bb;
	}

IL_0279:
	{
		// instance.intensity = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_69 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_70 = ((ES3Type_MinMaxCurve_t1C147718750ACBECE5D2B7F545D2A434A3C5409B_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t1C147718750ACBECE5D2B7F545D2A434A3C5409B_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_69);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_71;
		L_71 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_m9D6B4042B923127DEA4A2CAA3E35EED37D75B3D0_RuntimeMethod_var, L_69, L_70);
		LightsModule_set_intensity_mD1D7564D1ADD14C5755043F1146A8D56C228A519((&V_0), L_71, NULL);
		// break;
		goto IL_02bb;
	}

IL_028d:
	{
		// instance.intensityMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_72 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_73 = ((ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_72);
		float L_74;
		L_74 = GenericVirtualFuncInvoker1< float, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mA86928BC888E342D2C2644535E3399952F5077ED_RuntimeMethod_var, L_72, L_73);
		LightsModule_set_intensityMultiplier_m79E9E71E14F02B6BE7C4EB6C5B3BA8921D1B29F8((&V_0), L_74, NULL);
		// break;
		goto IL_02bb;
	}

IL_02a1:
	{
		// instance.maxLights = reader.Read<System.Int32>(ES3Type_int.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_75 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_76 = ((ES3Type_int_t05A5E7A96442F23CE33E24A71CD349372A70E0C3_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_int_t05A5E7A96442F23CE33E24A71CD349372A70E0C3_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_75);
		int32_t L_77;
		L_77 = GenericVirtualFuncInvoker1< int32_t, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mEFCC4D52DD5B822D3561A53591AE11CDB25CDB6F_RuntimeMethod_var, L_75, L_76);
		LightsModule_set_maxLights_mC423F1C129DAB69F2F145F6AA8160DEE8176F4EC((&V_0), L_77, NULL);
		// break;
		goto IL_02bb;
	}

IL_02b5:
	{
		// reader.Skip();
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_78 = ___reader0;
		NullCheck(L_78);
		VirtualActionInvoker0::Invoke(41 /* System.Void ES3Reader::Skip() */, L_78);
	}

IL_02bb:
	{
		// while((propertyName = reader.ReadPropertyName()) != null)
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_79 = ___reader0;
		NullCheck(L_79);
		String_t* L_80;
		L_80 = VirtualFuncInvoker0< String_t* >::Invoke(21 /* System.String ES3Reader::ReadPropertyName() */, L_79);
		String_t* L_81 = L_80;
		V_1 = L_81;
		if (L_81)
		{
			goto IL_000c;
		}
	}
	{
		// }
		return;
	}
}
// System.Void ES3Types.ES3Type_LightsModule::ReadInto<UnityEngine.ParticleSystem/SubEmittersModule>(ES3Reader,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ES3Type_LightsModule_ReadInto_TisSubEmittersModule_t94F5AD231EAFB50A16E697186A630B07BF8B949B_m221A1AE0ADCE5440AD15113AF334207FDC8A4D56_gshared (ES3Type_LightsModule_t37A9192D3FFC77124809D0623E14839D7E0C86A6* __this, ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* ___reader0, RuntimeObject* ___obj1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mFFB70EE53D8CD0255A4E599780F62A3EB1520E83_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mEFCC4D52DD5B822D3561A53591AE11CDB25CDB6F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisLight_t1E68479B7782AF2050FAA02A5DC612FD034F18F3_mB032FAFBAB777BB6EC57AFAD4E183FCA57151654_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_m9D6B4042B923127DEA4A2CAA3E35EED37D75B3D0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mA86928BC888E342D2C2644535E3399952F5077ED_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_Light_t0E702BA5766531A8E1C1C7B952BD4B76502DE877_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_MinMaxCurve_t1C147718750ACBECE5D2B7F545D2A434A3C5409B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_int_t05A5E7A96442F23CE33E24A71CD349372A70E0C3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral072FD16FCD5FDEE6DF9288BBCA5AFBFA16B04581);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1057AAF5EE3CDF423CF6BCC588476E559687CDE6);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2AC7F98E5022908E09788532C95599452352D34A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral40B9968876DFBA959A505AA3EC0E9D9D26C14E45);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4845015737DC41475709911228278216EE4DC3AF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral509D57D2D3AC4C6FAE8D21D19FF2B9D787C81954);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral52D353FB908B8123B513952855EB88F081A1A06A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral60126327537B7B8E6EE33C43FE0C5CA8BCC3A06A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral77682CE598EDE490DCDE276E250422EA9BEA739F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral93C208E83E88E77020CE91612101CB879A8EE914);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA2DB56FF90ECEEEC49C5E8C66FCD72DF2771D010);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B);
		s_Il2CppMethodInitialized = true;
	}
	LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	uint32_t V_2 = 0;
	{
		// var instance = (UnityEngine.ParticleSystem.LightsModule)obj;
		RuntimeObject* L_0 = ___obj1;
		V_0 = ((*(LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E*)((LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E*)(LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E*)UnBox(L_0, LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E_il2cpp_TypeInfo_var))));
		goto IL_02bb;
	}

IL_000c:
	{
		String_t* L_1 = V_1;
		uint32_t L_2;
		L_2 = U3CPrivateImplementationDetailsU3E_ComputeStringHash_m6EA1F233618497AEFF8902A5EDFA24C74E2F2876(L_1, NULL);
		V_2 = L_2;
		uint32_t L_3 = V_2;
		if ((!(((uint32_t)L_3) <= ((uint32_t)((int32_t)-1604400485)))))
		{
			goto IL_006f;
		}
	}
	{
		uint32_t L_4 = V_2;
		if ((!(((uint32_t)L_4) <= ((uint32_t)((int32_t)680602789)))))
		{
			goto IL_0049;
		}
	}
	{
		uint32_t L_5 = V_2;
		if ((((int32_t)L_5) == ((int32_t)((int32_t)49525662))))
		{
			goto IL_00ba;
		}
	}
	{
		uint32_t L_6 = V_2;
		if ((((int32_t)L_6) == ((int32_t)((int32_t)258704408))))
		{
			goto IL_0138;
		}
	}
	{
		uint32_t L_7 = V_2;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)680602789))))
		{
			goto IL_00e4;
		}
	}
	{
		goto IL_02b5;
	}

IL_0049:
	{
		uint32_t L_8 = V_2;
		if ((((int32_t)L_8) == ((int32_t)((int32_t)2057398597))))
		{
			goto IL_0162;
		}
	}
	{
		uint32_t L_9 = V_2;
		if ((((int32_t)L_9) == ((int32_t)((int32_t)-2057050870))))
		{
			goto IL_0177;
		}
	}
	{
		uint32_t L_10 = V_2;
		if ((((int32_t)L_10) == ((int32_t)((int32_t)-1604400485))))
		{
			goto IL_0123;
		}
	}
	{
		goto IL_02b5;
	}

IL_006f:
	{
		uint32_t L_11 = V_2;
		if ((!(((uint32_t)L_11) <= ((uint32_t)((int32_t)-667110935)))))
		{
			goto IL_0097;
		}
	}
	{
		uint32_t L_12 = V_2;
		if ((((int32_t)L_12) == ((int32_t)((int32_t)-1055777148))))
		{
			goto IL_00cf;
		}
	}
	{
		uint32_t L_13 = V_2;
		if ((((int32_t)L_13) == ((int32_t)((int32_t)-796669776))))
		{
			goto IL_01a1;
		}
	}
	{
		uint32_t L_14 = V_2;
		if ((((int32_t)L_14) == ((int32_t)((int32_t)-667110935))))
		{
			goto IL_010e;
		}
	}
	{
		goto IL_02b5;
	}

IL_0097:
	{
		uint32_t L_15 = V_2;
		if ((((int32_t)L_15) == ((int32_t)((int32_t)-493019601))))
		{
			goto IL_00f9;
		}
	}
	{
		uint32_t L_16 = V_2;
		if ((((int32_t)L_16) == ((int32_t)((int32_t)-86242094))))
		{
			goto IL_014d;
		}
	}
	{
		uint32_t L_17 = V_2;
		if ((((int32_t)L_17) == ((int32_t)((int32_t)-24986963))))
		{
			goto IL_018c;
		}
	}
	{
		goto IL_02b5;
	}

IL_00ba:
	{
		String_t* L_18 = V_1;
		bool L_19;
		L_19 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_18, _stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B, NULL);
		if (L_19)
		{
			goto IL_01b6;
		}
	}
	{
		goto IL_02b5;
	}

IL_00cf:
	{
		String_t* L_20 = V_1;
		bool L_21;
		L_21 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_20, _stringLiteral60126327537B7B8E6EE33C43FE0C5CA8BCC3A06A, NULL);
		if (L_21)
		{
			goto IL_01cd;
		}
	}
	{
		goto IL_02b5;
	}

IL_00e4:
	{
		String_t* L_22 = V_1;
		bool L_23;
		L_23 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_22, _stringLiteral509D57D2D3AC4C6FAE8D21D19FF2B9D787C81954, NULL);
		if (L_23)
		{
			goto IL_01e4;
		}
	}
	{
		goto IL_02b5;
	}

IL_00f9:
	{
		String_t* L_24 = V_1;
		bool L_25;
		L_25 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_24, _stringLiteral1057AAF5EE3CDF423CF6BCC588476E559687CDE6, NULL);
		if (L_25)
		{
			goto IL_01fb;
		}
	}
	{
		goto IL_02b5;
	}

IL_010e:
	{
		String_t* L_26 = V_1;
		bool L_27;
		L_27 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_26, _stringLiteral2AC7F98E5022908E09788532C95599452352D34A, NULL);
		if (L_27)
		{
			goto IL_0212;
		}
	}
	{
		goto IL_02b5;
	}

IL_0123:
	{
		String_t* L_28 = V_1;
		bool L_29;
		L_29 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_28, _stringLiteral93C208E83E88E77020CE91612101CB879A8EE914, NULL);
		if (L_29)
		{
			goto IL_0229;
		}
	}
	{
		goto IL_02b5;
	}

IL_0138:
	{
		String_t* L_30 = V_1;
		bool L_31;
		L_31 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_30, _stringLiteral072FD16FCD5FDEE6DF9288BBCA5AFBFA16B04581, NULL);
		if (L_31)
		{
			goto IL_023d;
		}
	}
	{
		goto IL_02b5;
	}

IL_014d:
	{
		String_t* L_32 = V_1;
		bool L_33;
		L_33 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_32, _stringLiteral4845015737DC41475709911228278216EE4DC3AF, NULL);
		if (L_33)
		{
			goto IL_0251;
		}
	}
	{
		goto IL_02b5;
	}

IL_0162:
	{
		String_t* L_34 = V_1;
		bool L_35;
		L_35 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_34, _stringLiteralA2DB56FF90ECEEEC49C5E8C66FCD72DF2771D010, NULL);
		if (L_35)
		{
			goto IL_0265;
		}
	}
	{
		goto IL_02b5;
	}

IL_0177:
	{
		String_t* L_36 = V_1;
		bool L_37;
		L_37 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_36, _stringLiteral40B9968876DFBA959A505AA3EC0E9D9D26C14E45, NULL);
		if (L_37)
		{
			goto IL_0279;
		}
	}
	{
		goto IL_02b5;
	}

IL_018c:
	{
		String_t* L_38 = V_1;
		bool L_39;
		L_39 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_38, _stringLiteral77682CE598EDE490DCDE276E250422EA9BEA739F, NULL);
		if (L_39)
		{
			goto IL_028d;
		}
	}
	{
		goto IL_02b5;
	}

IL_01a1:
	{
		String_t* L_40 = V_1;
		bool L_41;
		L_41 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_40, _stringLiteral52D353FB908B8123B513952855EB88F081A1A06A, NULL);
		if (L_41)
		{
			goto IL_02a1;
		}
	}
	{
		goto IL_02b5;
	}

IL_01b6:
	{
		// instance.enabled = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_42 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_43 = ((ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_42);
		bool L_44;
		L_44 = GenericVirtualFuncInvoker1< bool, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mFFB70EE53D8CD0255A4E599780F62A3EB1520E83_RuntimeMethod_var, L_42, L_43);
		LightsModule_set_enabled_mCA61408EE4B83423BB92B032567BA63005379DCE((&V_0), L_44, NULL);
		// break;
		goto IL_02bb;
	}

IL_01cd:
	{
		// instance.ratio = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_45 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_46 = ((ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_45);
		float L_47;
		L_47 = GenericVirtualFuncInvoker1< float, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mA86928BC888E342D2C2644535E3399952F5077ED_RuntimeMethod_var, L_45, L_46);
		LightsModule_set_ratio_mE1B9F5C45EB2E0822BF47F28F0510B5ECF2C87FC((&V_0), L_47, NULL);
		// break;
		goto IL_02bb;
	}

IL_01e4:
	{
		// instance.useRandomDistribution = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_48 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_49 = ((ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_48);
		bool L_50;
		L_50 = GenericVirtualFuncInvoker1< bool, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mFFB70EE53D8CD0255A4E599780F62A3EB1520E83_RuntimeMethod_var, L_48, L_49);
		LightsModule_set_useRandomDistribution_mB5EEC3EE5E510F2F27C779C25FD584B6FEA879D9((&V_0), L_50, NULL);
		// break;
		goto IL_02bb;
	}

IL_01fb:
	{
		// instance.light = reader.Read<UnityEngine.Light>(ES3Type_Light.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_51 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_52 = ((ES3Type_Light_t0E702BA5766531A8E1C1C7B952BD4B76502DE877_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Light_t0E702BA5766531A8E1C1C7B952BD4B76502DE877_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_51);
		Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* L_53;
		L_53 = GenericVirtualFuncInvoker1< Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3*, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisLight_t1E68479B7782AF2050FAA02A5DC612FD034F18F3_mB032FAFBAB777BB6EC57AFAD4E183FCA57151654_RuntimeMethod_var, L_51, L_52);
		LightsModule_set_light_m54F655151E83BA1CF8ECDF92B8D18F06463B2D59((&V_0), L_53, NULL);
		// break;
		goto IL_02bb;
	}

IL_0212:
	{
		// instance.useParticleColor = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_54 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_55 = ((ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_54);
		bool L_56;
		L_56 = GenericVirtualFuncInvoker1< bool, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mFFB70EE53D8CD0255A4E599780F62A3EB1520E83_RuntimeMethod_var, L_54, L_55);
		LightsModule_set_useParticleColor_mC91DC556C20A786D4E8190842094B557204C74B0((&V_0), L_56, NULL);
		// break;
		goto IL_02bb;
	}

IL_0229:
	{
		// instance.sizeAffectsRange = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_57 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_58 = ((ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_57);
		bool L_59;
		L_59 = GenericVirtualFuncInvoker1< bool, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mFFB70EE53D8CD0255A4E599780F62A3EB1520E83_RuntimeMethod_var, L_57, L_58);
		LightsModule_set_sizeAffectsRange_mBAAE49AC54AE79237649DD0AA715F43B0510356A((&V_0), L_59, NULL);
		// break;
		goto IL_02bb;
	}

IL_023d:
	{
		// instance.alphaAffectsIntensity = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_60 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_61 = ((ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_60);
		bool L_62;
		L_62 = GenericVirtualFuncInvoker1< bool, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mFFB70EE53D8CD0255A4E599780F62A3EB1520E83_RuntimeMethod_var, L_60, L_61);
		LightsModule_set_alphaAffectsIntensity_m79B804EA7C98543C733F3E0355DB01B8E1845995((&V_0), L_62, NULL);
		// break;
		goto IL_02bb;
	}

IL_0251:
	{
		// instance.range = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_63 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_64 = ((ES3Type_MinMaxCurve_t1C147718750ACBECE5D2B7F545D2A434A3C5409B_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t1C147718750ACBECE5D2B7F545D2A434A3C5409B_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_63);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_65;
		L_65 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_m9D6B4042B923127DEA4A2CAA3E35EED37D75B3D0_RuntimeMethod_var, L_63, L_64);
		LightsModule_set_range_m3DA6A5EE3021CB5A4787AEAE4DCA675E3050C5E4((&V_0), L_65, NULL);
		// break;
		goto IL_02bb;
	}

IL_0265:
	{
		// instance.rangeMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_66 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_67 = ((ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_66);
		float L_68;
		L_68 = GenericVirtualFuncInvoker1< float, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mA86928BC888E342D2C2644535E3399952F5077ED_RuntimeMethod_var, L_66, L_67);
		LightsModule_set_rangeMultiplier_m881D705C505C908F9F05F24EFBFC61DD2F01B23F((&V_0), L_68, NULL);
		// break;
		goto IL_02bb;
	}

IL_0279:
	{
		// instance.intensity = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_69 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_70 = ((ES3Type_MinMaxCurve_t1C147718750ACBECE5D2B7F545D2A434A3C5409B_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t1C147718750ACBECE5D2B7F545D2A434A3C5409B_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_69);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_71;
		L_71 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_m9D6B4042B923127DEA4A2CAA3E35EED37D75B3D0_RuntimeMethod_var, L_69, L_70);
		LightsModule_set_intensity_mD1D7564D1ADD14C5755043F1146A8D56C228A519((&V_0), L_71, NULL);
		// break;
		goto IL_02bb;
	}

IL_028d:
	{
		// instance.intensityMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_72 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_73 = ((ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_72);
		float L_74;
		L_74 = GenericVirtualFuncInvoker1< float, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mA86928BC888E342D2C2644535E3399952F5077ED_RuntimeMethod_var, L_72, L_73);
		LightsModule_set_intensityMultiplier_m79E9E71E14F02B6BE7C4EB6C5B3BA8921D1B29F8((&V_0), L_74, NULL);
		// break;
		goto IL_02bb;
	}

IL_02a1:
	{
		// instance.maxLights = reader.Read<System.Int32>(ES3Type_int.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_75 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_76 = ((ES3Type_int_t05A5E7A96442F23CE33E24A71CD349372A70E0C3_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_int_t05A5E7A96442F23CE33E24A71CD349372A70E0C3_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_75);
		int32_t L_77;
		L_77 = GenericVirtualFuncInvoker1< int32_t, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mEFCC4D52DD5B822D3561A53591AE11CDB25CDB6F_RuntimeMethod_var, L_75, L_76);
		LightsModule_set_maxLights_mC423F1C129DAB69F2F145F6AA8160DEE8176F4EC((&V_0), L_77, NULL);
		// break;
		goto IL_02bb;
	}

IL_02b5:
	{
		// reader.Skip();
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_78 = ___reader0;
		NullCheck(L_78);
		VirtualActionInvoker0::Invoke(41 /* System.Void ES3Reader::Skip() */, L_78);
	}

IL_02bb:
	{
		// while((propertyName = reader.ReadPropertyName()) != null)
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_79 = ___reader0;
		NullCheck(L_79);
		String_t* L_80;
		L_80 = VirtualFuncInvoker0< String_t* >::Invoke(21 /* System.String ES3Reader::ReadPropertyName() */, L_79);
		String_t* L_81 = L_80;
		V_1 = L_81;
		if (L_81)
		{
			goto IL_000c;
		}
	}
	{
		// }
		return;
	}
}
// System.Void ES3Types.ES3Type_LightsModule::ReadInto<UnityEngine.ParticleSystem/TextureSheetAnimationModule>(ES3Reader,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ES3Type_LightsModule_ReadInto_TisTextureSheetAnimationModule_tB53F451F252E24ACC3EF80D770DB4FBE1A13D1F6_m2FD017386C9C8DD50FFAE4DC39097F2E6CCCDA82_gshared (ES3Type_LightsModule_t37A9192D3FFC77124809D0623E14839D7E0C86A6* __this, ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* ___reader0, RuntimeObject* ___obj1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mFFB70EE53D8CD0255A4E599780F62A3EB1520E83_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mEFCC4D52DD5B822D3561A53591AE11CDB25CDB6F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisLight_t1E68479B7782AF2050FAA02A5DC612FD034F18F3_mB032FAFBAB777BB6EC57AFAD4E183FCA57151654_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_m9D6B4042B923127DEA4A2CAA3E35EED37D75B3D0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mA86928BC888E342D2C2644535E3399952F5077ED_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_Light_t0E702BA5766531A8E1C1C7B952BD4B76502DE877_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_MinMaxCurve_t1C147718750ACBECE5D2B7F545D2A434A3C5409B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_int_t05A5E7A96442F23CE33E24A71CD349372A70E0C3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral072FD16FCD5FDEE6DF9288BBCA5AFBFA16B04581);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1057AAF5EE3CDF423CF6BCC588476E559687CDE6);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2AC7F98E5022908E09788532C95599452352D34A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral40B9968876DFBA959A505AA3EC0E9D9D26C14E45);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4845015737DC41475709911228278216EE4DC3AF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral509D57D2D3AC4C6FAE8D21D19FF2B9D787C81954);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral52D353FB908B8123B513952855EB88F081A1A06A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral60126327537B7B8E6EE33C43FE0C5CA8BCC3A06A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral77682CE598EDE490DCDE276E250422EA9BEA739F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral93C208E83E88E77020CE91612101CB879A8EE914);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA2DB56FF90ECEEEC49C5E8C66FCD72DF2771D010);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B);
		s_Il2CppMethodInitialized = true;
	}
	LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	uint32_t V_2 = 0;
	{
		// var instance = (UnityEngine.ParticleSystem.LightsModule)obj;
		RuntimeObject* L_0 = ___obj1;
		V_0 = ((*(LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E*)((LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E*)(LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E*)UnBox(L_0, LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E_il2cpp_TypeInfo_var))));
		goto IL_02bb;
	}

IL_000c:
	{
		String_t* L_1 = V_1;
		uint32_t L_2;
		L_2 = U3CPrivateImplementationDetailsU3E_ComputeStringHash_m6EA1F233618497AEFF8902A5EDFA24C74E2F2876(L_1, NULL);
		V_2 = L_2;
		uint32_t L_3 = V_2;
		if ((!(((uint32_t)L_3) <= ((uint32_t)((int32_t)-1604400485)))))
		{
			goto IL_006f;
		}
	}
	{
		uint32_t L_4 = V_2;
		if ((!(((uint32_t)L_4) <= ((uint32_t)((int32_t)680602789)))))
		{
			goto IL_0049;
		}
	}
	{
		uint32_t L_5 = V_2;
		if ((((int32_t)L_5) == ((int32_t)((int32_t)49525662))))
		{
			goto IL_00ba;
		}
	}
	{
		uint32_t L_6 = V_2;
		if ((((int32_t)L_6) == ((int32_t)((int32_t)258704408))))
		{
			goto IL_0138;
		}
	}
	{
		uint32_t L_7 = V_2;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)680602789))))
		{
			goto IL_00e4;
		}
	}
	{
		goto IL_02b5;
	}

IL_0049:
	{
		uint32_t L_8 = V_2;
		if ((((int32_t)L_8) == ((int32_t)((int32_t)2057398597))))
		{
			goto IL_0162;
		}
	}
	{
		uint32_t L_9 = V_2;
		if ((((int32_t)L_9) == ((int32_t)((int32_t)-2057050870))))
		{
			goto IL_0177;
		}
	}
	{
		uint32_t L_10 = V_2;
		if ((((int32_t)L_10) == ((int32_t)((int32_t)-1604400485))))
		{
			goto IL_0123;
		}
	}
	{
		goto IL_02b5;
	}

IL_006f:
	{
		uint32_t L_11 = V_2;
		if ((!(((uint32_t)L_11) <= ((uint32_t)((int32_t)-667110935)))))
		{
			goto IL_0097;
		}
	}
	{
		uint32_t L_12 = V_2;
		if ((((int32_t)L_12) == ((int32_t)((int32_t)-1055777148))))
		{
			goto IL_00cf;
		}
	}
	{
		uint32_t L_13 = V_2;
		if ((((int32_t)L_13) == ((int32_t)((int32_t)-796669776))))
		{
			goto IL_01a1;
		}
	}
	{
		uint32_t L_14 = V_2;
		if ((((int32_t)L_14) == ((int32_t)((int32_t)-667110935))))
		{
			goto IL_010e;
		}
	}
	{
		goto IL_02b5;
	}

IL_0097:
	{
		uint32_t L_15 = V_2;
		if ((((int32_t)L_15) == ((int32_t)((int32_t)-493019601))))
		{
			goto IL_00f9;
		}
	}
	{
		uint32_t L_16 = V_2;
		if ((((int32_t)L_16) == ((int32_t)((int32_t)-86242094))))
		{
			goto IL_014d;
		}
	}
	{
		uint32_t L_17 = V_2;
		if ((((int32_t)L_17) == ((int32_t)((int32_t)-24986963))))
		{
			goto IL_018c;
		}
	}
	{
		goto IL_02b5;
	}

IL_00ba:
	{
		String_t* L_18 = V_1;
		bool L_19;
		L_19 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_18, _stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B, NULL);
		if (L_19)
		{
			goto IL_01b6;
		}
	}
	{
		goto IL_02b5;
	}

IL_00cf:
	{
		String_t* L_20 = V_1;
		bool L_21;
		L_21 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_20, _stringLiteral60126327537B7B8E6EE33C43FE0C5CA8BCC3A06A, NULL);
		if (L_21)
		{
			goto IL_01cd;
		}
	}
	{
		goto IL_02b5;
	}

IL_00e4:
	{
		String_t* L_22 = V_1;
		bool L_23;
		L_23 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_22, _stringLiteral509D57D2D3AC4C6FAE8D21D19FF2B9D787C81954, NULL);
		if (L_23)
		{
			goto IL_01e4;
		}
	}
	{
		goto IL_02b5;
	}

IL_00f9:
	{
		String_t* L_24 = V_1;
		bool L_25;
		L_25 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_24, _stringLiteral1057AAF5EE3CDF423CF6BCC588476E559687CDE6, NULL);
		if (L_25)
		{
			goto IL_01fb;
		}
	}
	{
		goto IL_02b5;
	}

IL_010e:
	{
		String_t* L_26 = V_1;
		bool L_27;
		L_27 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_26, _stringLiteral2AC7F98E5022908E09788532C95599452352D34A, NULL);
		if (L_27)
		{
			goto IL_0212;
		}
	}
	{
		goto IL_02b5;
	}

IL_0123:
	{
		String_t* L_28 = V_1;
		bool L_29;
		L_29 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_28, _stringLiteral93C208E83E88E77020CE91612101CB879A8EE914, NULL);
		if (L_29)
		{
			goto IL_0229;
		}
	}
	{
		goto IL_02b5;
	}

IL_0138:
	{
		String_t* L_30 = V_1;
		bool L_31;
		L_31 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_30, _stringLiteral072FD16FCD5FDEE6DF9288BBCA5AFBFA16B04581, NULL);
		if (L_31)
		{
			goto IL_023d;
		}
	}
	{
		goto IL_02b5;
	}

IL_014d:
	{
		String_t* L_32 = V_1;
		bool L_33;
		L_33 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_32, _stringLiteral4845015737DC41475709911228278216EE4DC3AF, NULL);
		if (L_33)
		{
			goto IL_0251;
		}
	}
	{
		goto IL_02b5;
	}

IL_0162:
	{
		String_t* L_34 = V_1;
		bool L_35;
		L_35 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_34, _stringLiteralA2DB56FF90ECEEEC49C5E8C66FCD72DF2771D010, NULL);
		if (L_35)
		{
			goto IL_0265;
		}
	}
	{
		goto IL_02b5;
	}

IL_0177:
	{
		String_t* L_36 = V_1;
		bool L_37;
		L_37 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_36, _stringLiteral40B9968876DFBA959A505AA3EC0E9D9D26C14E45, NULL);
		if (L_37)
		{
			goto IL_0279;
		}
	}
	{
		goto IL_02b5;
	}

IL_018c:
	{
		String_t* L_38 = V_1;
		bool L_39;
		L_39 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_38, _stringLiteral77682CE598EDE490DCDE276E250422EA9BEA739F, NULL);
		if (L_39)
		{
			goto IL_028d;
		}
	}
	{
		goto IL_02b5;
	}

IL_01a1:
	{
		String_t* L_40 = V_1;
		bool L_41;
		L_41 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_40, _stringLiteral52D353FB908B8123B513952855EB88F081A1A06A, NULL);
		if (L_41)
		{
			goto IL_02a1;
		}
	}
	{
		goto IL_02b5;
	}

IL_01b6:
	{
		// instance.enabled = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_42 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_43 = ((ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_42);
		bool L_44;
		L_44 = GenericVirtualFuncInvoker1< bool, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mFFB70EE53D8CD0255A4E599780F62A3EB1520E83_RuntimeMethod_var, L_42, L_43);
		LightsModule_set_enabled_mCA61408EE4B83423BB92B032567BA63005379DCE((&V_0), L_44, NULL);
		// break;
		goto IL_02bb;
	}

IL_01cd:
	{
		// instance.ratio = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_45 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_46 = ((ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_45);
		float L_47;
		L_47 = GenericVirtualFuncInvoker1< float, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mA86928BC888E342D2C2644535E3399952F5077ED_RuntimeMethod_var, L_45, L_46);
		LightsModule_set_ratio_mE1B9F5C45EB2E0822BF47F28F0510B5ECF2C87FC((&V_0), L_47, NULL);
		// break;
		goto IL_02bb;
	}

IL_01e4:
	{
		// instance.useRandomDistribution = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_48 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_49 = ((ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_48);
		bool L_50;
		L_50 = GenericVirtualFuncInvoker1< bool, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mFFB70EE53D8CD0255A4E599780F62A3EB1520E83_RuntimeMethod_var, L_48, L_49);
		LightsModule_set_useRandomDistribution_mB5EEC3EE5E510F2F27C779C25FD584B6FEA879D9((&V_0), L_50, NULL);
		// break;
		goto IL_02bb;
	}

IL_01fb:
	{
		// instance.light = reader.Read<UnityEngine.Light>(ES3Type_Light.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_51 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_52 = ((ES3Type_Light_t0E702BA5766531A8E1C1C7B952BD4B76502DE877_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Light_t0E702BA5766531A8E1C1C7B952BD4B76502DE877_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_51);
		Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* L_53;
		L_53 = GenericVirtualFuncInvoker1< Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3*, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisLight_t1E68479B7782AF2050FAA02A5DC612FD034F18F3_mB032FAFBAB777BB6EC57AFAD4E183FCA57151654_RuntimeMethod_var, L_51, L_52);
		LightsModule_set_light_m54F655151E83BA1CF8ECDF92B8D18F06463B2D59((&V_0), L_53, NULL);
		// break;
		goto IL_02bb;
	}

IL_0212:
	{
		// instance.useParticleColor = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_54 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_55 = ((ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_54);
		bool L_56;
		L_56 = GenericVirtualFuncInvoker1< bool, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mFFB70EE53D8CD0255A4E599780F62A3EB1520E83_RuntimeMethod_var, L_54, L_55);
		LightsModule_set_useParticleColor_mC91DC556C20A786D4E8190842094B557204C74B0((&V_0), L_56, NULL);
		// break;
		goto IL_02bb;
	}

IL_0229:
	{
		// instance.sizeAffectsRange = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_57 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_58 = ((ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_57);
		bool L_59;
		L_59 = GenericVirtualFuncInvoker1< bool, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mFFB70EE53D8CD0255A4E599780F62A3EB1520E83_RuntimeMethod_var, L_57, L_58);
		LightsModule_set_sizeAffectsRange_mBAAE49AC54AE79237649DD0AA715F43B0510356A((&V_0), L_59, NULL);
		// break;
		goto IL_02bb;
	}

IL_023d:
	{
		// instance.alphaAffectsIntensity = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_60 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_61 = ((ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_60);
		bool L_62;
		L_62 = GenericVirtualFuncInvoker1< bool, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mFFB70EE53D8CD0255A4E599780F62A3EB1520E83_RuntimeMethod_var, L_60, L_61);
		LightsModule_set_alphaAffectsIntensity_m79B804EA7C98543C733F3E0355DB01B8E1845995((&V_0), L_62, NULL);
		// break;
		goto IL_02bb;
	}

IL_0251:
	{
		// instance.range = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_63 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_64 = ((ES3Type_MinMaxCurve_t1C147718750ACBECE5D2B7F545D2A434A3C5409B_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t1C147718750ACBECE5D2B7F545D2A434A3C5409B_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_63);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_65;
		L_65 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_m9D6B4042B923127DEA4A2CAA3E35EED37D75B3D0_RuntimeMethod_var, L_63, L_64);
		LightsModule_set_range_m3DA6A5EE3021CB5A4787AEAE4DCA675E3050C5E4((&V_0), L_65, NULL);
		// break;
		goto IL_02bb;
	}

IL_0265:
	{
		// instance.rangeMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_66 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_67 = ((ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_66);
		float L_68;
		L_68 = GenericVirtualFuncInvoker1< float, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mA86928BC888E342D2C2644535E3399952F5077ED_RuntimeMethod_var, L_66, L_67);
		LightsModule_set_rangeMultiplier_m881D705C505C908F9F05F24EFBFC61DD2F01B23F((&V_0), L_68, NULL);
		// break;
		goto IL_02bb;
	}

IL_0279:
	{
		// instance.intensity = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_69 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_70 = ((ES3Type_MinMaxCurve_t1C147718750ACBECE5D2B7F545D2A434A3C5409B_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t1C147718750ACBECE5D2B7F545D2A434A3C5409B_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_69);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_71;
		L_71 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_m9D6B4042B923127DEA4A2CAA3E35EED37D75B3D0_RuntimeMethod_var, L_69, L_70);
		LightsModule_set_intensity_mD1D7564D1ADD14C5755043F1146A8D56C228A519((&V_0), L_71, NULL);
		// break;
		goto IL_02bb;
	}

IL_028d:
	{
		// instance.intensityMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_72 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_73 = ((ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_72);
		float L_74;
		L_74 = GenericVirtualFuncInvoker1< float, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mA86928BC888E342D2C2644535E3399952F5077ED_RuntimeMethod_var, L_72, L_73);
		LightsModule_set_intensityMultiplier_m79E9E71E14F02B6BE7C4EB6C5B3BA8921D1B29F8((&V_0), L_74, NULL);
		// break;
		goto IL_02bb;
	}

IL_02a1:
	{
		// instance.maxLights = reader.Read<System.Int32>(ES3Type_int.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_75 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_76 = ((ES3Type_int_t05A5E7A96442F23CE33E24A71CD349372A70E0C3_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_int_t05A5E7A96442F23CE33E24A71CD349372A70E0C3_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_75);
		int32_t L_77;
		L_77 = GenericVirtualFuncInvoker1< int32_t, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mEFCC4D52DD5B822D3561A53591AE11CDB25CDB6F_RuntimeMethod_var, L_75, L_76);
		LightsModule_set_maxLights_mC423F1C129DAB69F2F145F6AA8160DEE8176F4EC((&V_0), L_77, NULL);
		// break;
		goto IL_02bb;
	}

IL_02b5:
	{
		// reader.Skip();
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_78 = ___reader0;
		NullCheck(L_78);
		VirtualActionInvoker0::Invoke(41 /* System.Void ES3Reader::Skip() */, L_78);
	}

IL_02bb:
	{
		// while((propertyName = reader.ReadPropertyName()) != null)
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_79 = ___reader0;
		NullCheck(L_79);
		String_t* L_80;
		L_80 = VirtualFuncInvoker0< String_t* >::Invoke(21 /* System.String ES3Reader::ReadPropertyName() */, L_79);
		String_t* L_81 = L_80;
		V_1 = L_81;
		if (L_81)
		{
			goto IL_000c;
		}
	}
	{
		// }
		return;
	}
}
// System.Void ES3Types.ES3Type_LightsModule::ReadInto<UnityEngine.ParticleSystem/TrailModule>(ES3Reader,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ES3Type_LightsModule_ReadInto_TisTrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D_mB78F02D5BFC6453910BBB3573C654C9440172053_gshared (ES3Type_LightsModule_t37A9192D3FFC77124809D0623E14839D7E0C86A6* __this, ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* ___reader0, RuntimeObject* ___obj1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mFFB70EE53D8CD0255A4E599780F62A3EB1520E83_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mEFCC4D52DD5B822D3561A53591AE11CDB25CDB6F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisLight_t1E68479B7782AF2050FAA02A5DC612FD034F18F3_mB032FAFBAB777BB6EC57AFAD4E183FCA57151654_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_m9D6B4042B923127DEA4A2CAA3E35EED37D75B3D0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mA86928BC888E342D2C2644535E3399952F5077ED_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_Light_t0E702BA5766531A8E1C1C7B952BD4B76502DE877_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_MinMaxCurve_t1C147718750ACBECE5D2B7F545D2A434A3C5409B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_int_t05A5E7A96442F23CE33E24A71CD349372A70E0C3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral072FD16FCD5FDEE6DF9288BBCA5AFBFA16B04581);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1057AAF5EE3CDF423CF6BCC588476E559687CDE6);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2AC7F98E5022908E09788532C95599452352D34A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral40B9968876DFBA959A505AA3EC0E9D9D26C14E45);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4845015737DC41475709911228278216EE4DC3AF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral509D57D2D3AC4C6FAE8D21D19FF2B9D787C81954);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral52D353FB908B8123B513952855EB88F081A1A06A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral60126327537B7B8E6EE33C43FE0C5CA8BCC3A06A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral77682CE598EDE490DCDE276E250422EA9BEA739F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral93C208E83E88E77020CE91612101CB879A8EE914);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA2DB56FF90ECEEEC49C5E8C66FCD72DF2771D010);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B);
		s_Il2CppMethodInitialized = true;
	}
	LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	uint32_t V_2 = 0;
	{
		// var instance = (UnityEngine.ParticleSystem.LightsModule)obj;
		RuntimeObject* L_0 = ___obj1;
		V_0 = ((*(LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E*)((LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E*)(LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E*)UnBox(L_0, LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E_il2cpp_TypeInfo_var))));
		goto IL_02bb;
	}

IL_000c:
	{
		String_t* L_1 = V_1;
		uint32_t L_2;
		L_2 = U3CPrivateImplementationDetailsU3E_ComputeStringHash_m6EA1F233618497AEFF8902A5EDFA24C74E2F2876(L_1, NULL);
		V_2 = L_2;
		uint32_t L_3 = V_2;
		if ((!(((uint32_t)L_3) <= ((uint32_t)((int32_t)-1604400485)))))
		{
			goto IL_006f;
		}
	}
	{
		uint32_t L_4 = V_2;
		if ((!(((uint32_t)L_4) <= ((uint32_t)((int32_t)680602789)))))
		{
			goto IL_0049;
		}
	}
	{
		uint32_t L_5 = V_2;
		if ((((int32_t)L_5) == ((int32_t)((int32_t)49525662))))
		{
			goto IL_00ba;
		}
	}
	{
		uint32_t L_6 = V_2;
		if ((((int32_t)L_6) == ((int32_t)((int32_t)258704408))))
		{
			goto IL_0138;
		}
	}
	{
		uint32_t L_7 = V_2;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)680602789))))
		{
			goto IL_00e4;
		}
	}
	{
		goto IL_02b5;
	}

IL_0049:
	{
		uint32_t L_8 = V_2;
		if ((((int32_t)L_8) == ((int32_t)((int32_t)2057398597))))
		{
			goto IL_0162;
		}
	}
	{
		uint32_t L_9 = V_2;
		if ((((int32_t)L_9) == ((int32_t)((int32_t)-2057050870))))
		{
			goto IL_0177;
		}
	}
	{
		uint32_t L_10 = V_2;
		if ((((int32_t)L_10) == ((int32_t)((int32_t)-1604400485))))
		{
			goto IL_0123;
		}
	}
	{
		goto IL_02b5;
	}

IL_006f:
	{
		uint32_t L_11 = V_2;
		if ((!(((uint32_t)L_11) <= ((uint32_t)((int32_t)-667110935)))))
		{
			goto IL_0097;
		}
	}
	{
		uint32_t L_12 = V_2;
		if ((((int32_t)L_12) == ((int32_t)((int32_t)-1055777148))))
		{
			goto IL_00cf;
		}
	}
	{
		uint32_t L_13 = V_2;
		if ((((int32_t)L_13) == ((int32_t)((int32_t)-796669776))))
		{
			goto IL_01a1;
		}
	}
	{
		uint32_t L_14 = V_2;
		if ((((int32_t)L_14) == ((int32_t)((int32_t)-667110935))))
		{
			goto IL_010e;
		}
	}
	{
		goto IL_02b5;
	}

IL_0097:
	{
		uint32_t L_15 = V_2;
		if ((((int32_t)L_15) == ((int32_t)((int32_t)-493019601))))
		{
			goto IL_00f9;
		}
	}
	{
		uint32_t L_16 = V_2;
		if ((((int32_t)L_16) == ((int32_t)((int32_t)-86242094))))
		{
			goto IL_014d;
		}
	}
	{
		uint32_t L_17 = V_2;
		if ((((int32_t)L_17) == ((int32_t)((int32_t)-24986963))))
		{
			goto IL_018c;
		}
	}
	{
		goto IL_02b5;
	}

IL_00ba:
	{
		String_t* L_18 = V_1;
		bool L_19;
		L_19 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_18, _stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B, NULL);
		if (L_19)
		{
			goto IL_01b6;
		}
	}
	{
		goto IL_02b5;
	}

IL_00cf:
	{
		String_t* L_20 = V_1;
		bool L_21;
		L_21 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_20, _stringLiteral60126327537B7B8E6EE33C43FE0C5CA8BCC3A06A, NULL);
		if (L_21)
		{
			goto IL_01cd;
		}
	}
	{
		goto IL_02b5;
	}

IL_00e4:
	{
		String_t* L_22 = V_1;
		bool L_23;
		L_23 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_22, _stringLiteral509D57D2D3AC4C6FAE8D21D19FF2B9D787C81954, NULL);
		if (L_23)
		{
			goto IL_01e4;
		}
	}
	{
		goto IL_02b5;
	}

IL_00f9:
	{
		String_t* L_24 = V_1;
		bool L_25;
		L_25 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_24, _stringLiteral1057AAF5EE3CDF423CF6BCC588476E559687CDE6, NULL);
		if (L_25)
		{
			goto IL_01fb;
		}
	}
	{
		goto IL_02b5;
	}

IL_010e:
	{
		String_t* L_26 = V_1;
		bool L_27;
		L_27 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_26, _stringLiteral2AC7F98E5022908E09788532C95599452352D34A, NULL);
		if (L_27)
		{
			goto IL_0212;
		}
	}
	{
		goto IL_02b5;
	}

IL_0123:
	{
		String_t* L_28 = V_1;
		bool L_29;
		L_29 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_28, _stringLiteral93C208E83E88E77020CE91612101CB879A8EE914, NULL);
		if (L_29)
		{
			goto IL_0229;
		}
	}
	{
		goto IL_02b5;
	}

IL_0138:
	{
		String_t* L_30 = V_1;
		bool L_31;
		L_31 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_30, _stringLiteral072FD16FCD5FDEE6DF9288BBCA5AFBFA16B04581, NULL);
		if (L_31)
		{
			goto IL_023d;
		}
	}
	{
		goto IL_02b5;
	}

IL_014d:
	{
		String_t* L_32 = V_1;
		bool L_33;
		L_33 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_32, _stringLiteral4845015737DC41475709911228278216EE4DC3AF, NULL);
		if (L_33)
		{
			goto IL_0251;
		}
	}
	{
		goto IL_02b5;
	}

IL_0162:
	{
		String_t* L_34 = V_1;
		bool L_35;
		L_35 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_34, _stringLiteralA2DB56FF90ECEEEC49C5E8C66FCD72DF2771D010, NULL);
		if (L_35)
		{
			goto IL_0265;
		}
	}
	{
		goto IL_02b5;
	}

IL_0177:
	{
		String_t* L_36 = V_1;
		bool L_37;
		L_37 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_36, _stringLiteral40B9968876DFBA959A505AA3EC0E9D9D26C14E45, NULL);
		if (L_37)
		{
			goto IL_0279;
		}
	}
	{
		goto IL_02b5;
	}

IL_018c:
	{
		String_t* L_38 = V_1;
		bool L_39;
		L_39 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_38, _stringLiteral77682CE598EDE490DCDE276E250422EA9BEA739F, NULL);
		if (L_39)
		{
			goto IL_028d;
		}
	}
	{
		goto IL_02b5;
	}

IL_01a1:
	{
		String_t* L_40 = V_1;
		bool L_41;
		L_41 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_40, _stringLiteral52D353FB908B8123B513952855EB88F081A1A06A, NULL);
		if (L_41)
		{
			goto IL_02a1;
		}
	}
	{
		goto IL_02b5;
	}

IL_01b6:
	{
		// instance.enabled = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_42 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_43 = ((ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_42);
		bool L_44;
		L_44 = GenericVirtualFuncInvoker1< bool, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mFFB70EE53D8CD0255A4E599780F62A3EB1520E83_RuntimeMethod_var, L_42, L_43);
		LightsModule_set_enabled_mCA61408EE4B83423BB92B032567BA63005379DCE((&V_0), L_44, NULL);
		// break;
		goto IL_02bb;
	}

IL_01cd:
	{
		// instance.ratio = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_45 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_46 = ((ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_45);
		float L_47;
		L_47 = GenericVirtualFuncInvoker1< float, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mA86928BC888E342D2C2644535E3399952F5077ED_RuntimeMethod_var, L_45, L_46);
		LightsModule_set_ratio_mE1B9F5C45EB2E0822BF47F28F0510B5ECF2C87FC((&V_0), L_47, NULL);
		// break;
		goto IL_02bb;
	}

IL_01e4:
	{
		// instance.useRandomDistribution = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_48 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_49 = ((ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_48);
		bool L_50;
		L_50 = GenericVirtualFuncInvoker1< bool, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mFFB70EE53D8CD0255A4E599780F62A3EB1520E83_RuntimeMethod_var, L_48, L_49);
		LightsModule_set_useRandomDistribution_mB5EEC3EE5E510F2F27C779C25FD584B6FEA879D9((&V_0), L_50, NULL);
		// break;
		goto IL_02bb;
	}

IL_01fb:
	{
		// instance.light = reader.Read<UnityEngine.Light>(ES3Type_Light.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_51 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_52 = ((ES3Type_Light_t0E702BA5766531A8E1C1C7B952BD4B76502DE877_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Light_t0E702BA5766531A8E1C1C7B952BD4B76502DE877_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_51);
		Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* L_53;
		L_53 = GenericVirtualFuncInvoker1< Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3*, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisLight_t1E68479B7782AF2050FAA02A5DC612FD034F18F3_mB032FAFBAB777BB6EC57AFAD4E183FCA57151654_RuntimeMethod_var, L_51, L_52);
		LightsModule_set_light_m54F655151E83BA1CF8ECDF92B8D18F06463B2D59((&V_0), L_53, NULL);
		// break;
		goto IL_02bb;
	}

IL_0212:
	{
		// instance.useParticleColor = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_54 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_55 = ((ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_54);
		bool L_56;
		L_56 = GenericVirtualFuncInvoker1< bool, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mFFB70EE53D8CD0255A4E599780F62A3EB1520E83_RuntimeMethod_var, L_54, L_55);
		LightsModule_set_useParticleColor_mC91DC556C20A786D4E8190842094B557204C74B0((&V_0), L_56, NULL);
		// break;
		goto IL_02bb;
	}

IL_0229:
	{
		// instance.sizeAffectsRange = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_57 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_58 = ((ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_57);
		bool L_59;
		L_59 = GenericVirtualFuncInvoker1< bool, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mFFB70EE53D8CD0255A4E599780F62A3EB1520E83_RuntimeMethod_var, L_57, L_58);
		LightsModule_set_sizeAffectsRange_mBAAE49AC54AE79237649DD0AA715F43B0510356A((&V_0), L_59, NULL);
		// break;
		goto IL_02bb;
	}

IL_023d:
	{
		// instance.alphaAffectsIntensity = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_60 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_61 = ((ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_60);
		bool L_62;
		L_62 = GenericVirtualFuncInvoker1< bool, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mFFB70EE53D8CD0255A4E599780F62A3EB1520E83_RuntimeMethod_var, L_60, L_61);
		LightsModule_set_alphaAffectsIntensity_m79B804EA7C98543C733F3E0355DB01B8E1845995((&V_0), L_62, NULL);
		// break;
		goto IL_02bb;
	}

IL_0251:
	{
		// instance.range = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_63 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_64 = ((ES3Type_MinMaxCurve_t1C147718750ACBECE5D2B7F545D2A434A3C5409B_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t1C147718750ACBECE5D2B7F545D2A434A3C5409B_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_63);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_65;
		L_65 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_m9D6B4042B923127DEA4A2CAA3E35EED37D75B3D0_RuntimeMethod_var, L_63, L_64);
		LightsModule_set_range_m3DA6A5EE3021CB5A4787AEAE4DCA675E3050C5E4((&V_0), L_65, NULL);
		// break;
		goto IL_02bb;
	}

IL_0265:
	{
		// instance.rangeMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_66 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_67 = ((ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_66);
		float L_68;
		L_68 = GenericVirtualFuncInvoker1< float, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mA86928BC888E342D2C2644535E3399952F5077ED_RuntimeMethod_var, L_66, L_67);
		LightsModule_set_rangeMultiplier_m881D705C505C908F9F05F24EFBFC61DD2F01B23F((&V_0), L_68, NULL);
		// break;
		goto IL_02bb;
	}

IL_0279:
	{
		// instance.intensity = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_69 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_70 = ((ES3Type_MinMaxCurve_t1C147718750ACBECE5D2B7F545D2A434A3C5409B_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t1C147718750ACBECE5D2B7F545D2A434A3C5409B_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_69);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_71;
		L_71 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_m9D6B4042B923127DEA4A2CAA3E35EED37D75B3D0_RuntimeMethod_var, L_69, L_70);
		LightsModule_set_intensity_mD1D7564D1ADD14C5755043F1146A8D56C228A519((&V_0), L_71, NULL);
		// break;
		goto IL_02bb;
	}

IL_028d:
	{
		// instance.intensityMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_72 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_73 = ((ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_72);
		float L_74;
		L_74 = GenericVirtualFuncInvoker1< float, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mA86928BC888E342D2C2644535E3399952F5077ED_RuntimeMethod_var, L_72, L_73);
		LightsModule_set_intensityMultiplier_m79E9E71E14F02B6BE7C4EB6C5B3BA8921D1B29F8((&V_0), L_74, NULL);
		// break;
		goto IL_02bb;
	}

IL_02a1:
	{
		// instance.maxLights = reader.Read<System.Int32>(ES3Type_int.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_75 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_76 = ((ES3Type_int_t05A5E7A96442F23CE33E24A71CD349372A70E0C3_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_int_t05A5E7A96442F23CE33E24A71CD349372A70E0C3_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_75);
		int32_t L_77;
		L_77 = GenericVirtualFuncInvoker1< int32_t, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mEFCC4D52DD5B822D3561A53591AE11CDB25CDB6F_RuntimeMethod_var, L_75, L_76);
		LightsModule_set_maxLights_mC423F1C129DAB69F2F145F6AA8160DEE8176F4EC((&V_0), L_77, NULL);
		// break;
		goto IL_02bb;
	}

IL_02b5:
	{
		// reader.Skip();
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_78 = ___reader0;
		NullCheck(L_78);
		VirtualActionInvoker0::Invoke(41 /* System.Void ES3Reader::Skip() */, L_78);
	}

IL_02bb:
	{
		// while((propertyName = reader.ReadPropertyName()) != null)
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_79 = ___reader0;
		NullCheck(L_79);
		String_t* L_80;
		L_80 = VirtualFuncInvoker0< String_t* >::Invoke(21 /* System.String ES3Reader::ReadPropertyName() */, L_79);
		String_t* L_81 = L_80;
		V_1 = L_81;
		if (L_81)
		{
			goto IL_000c;
		}
	}
	{
		// }
		return;
	}
}
// System.Void ES3Types.ES3Type_LightsModule::ReadInto<UnityEngine.ParticleSystem/TriggerModule>(ES3Reader,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ES3Type_LightsModule_ReadInto_TisTriggerModule_tDEE844919206259DA831ADCA3B1B2D915CB767B1_mF34B1C09DD989919BC5988E6C65751EFDA011AB7_gshared (ES3Type_LightsModule_t37A9192D3FFC77124809D0623E14839D7E0C86A6* __this, ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* ___reader0, RuntimeObject* ___obj1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mFFB70EE53D8CD0255A4E599780F62A3EB1520E83_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mEFCC4D52DD5B822D3561A53591AE11CDB25CDB6F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisLight_t1E68479B7782AF2050FAA02A5DC612FD034F18F3_mB032FAFBAB777BB6EC57AFAD4E183FCA57151654_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_m9D6B4042B923127DEA4A2CAA3E35EED37D75B3D0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mA86928BC888E342D2C2644535E3399952F5077ED_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_Light_t0E702BA5766531A8E1C1C7B952BD4B76502DE877_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_MinMaxCurve_t1C147718750ACBECE5D2B7F545D2A434A3C5409B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_int_t05A5E7A96442F23CE33E24A71CD349372A70E0C3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral072FD16FCD5FDEE6DF9288BBCA5AFBFA16B04581);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1057AAF5EE3CDF423CF6BCC588476E559687CDE6);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2AC7F98E5022908E09788532C95599452352D34A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral40B9968876DFBA959A505AA3EC0E9D9D26C14E45);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4845015737DC41475709911228278216EE4DC3AF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral509D57D2D3AC4C6FAE8D21D19FF2B9D787C81954);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral52D353FB908B8123B513952855EB88F081A1A06A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral60126327537B7B8E6EE33C43FE0C5CA8BCC3A06A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral77682CE598EDE490DCDE276E250422EA9BEA739F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral93C208E83E88E77020CE91612101CB879A8EE914);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA2DB56FF90ECEEEC49C5E8C66FCD72DF2771D010);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B);
		s_Il2CppMethodInitialized = true;
	}
	LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	uint32_t V_2 = 0;
	{
		// var instance = (UnityEngine.ParticleSystem.LightsModule)obj;
		RuntimeObject* L_0 = ___obj1;
		V_0 = ((*(LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E*)((LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E*)(LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E*)UnBox(L_0, LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E_il2cpp_TypeInfo_var))));
		goto IL_02bb;
	}

IL_000c:
	{
		String_t* L_1 = V_1;
		uint32_t L_2;
		L_2 = U3CPrivateImplementationDetailsU3E_ComputeStringHash_m6EA1F233618497AEFF8902A5EDFA24C74E2F2876(L_1, NULL);
		V_2 = L_2;
		uint32_t L_3 = V_2;
		if ((!(((uint32_t)L_3) <= ((uint32_t)((int32_t)-1604400485)))))
		{
			goto IL_006f;
		}
	}
	{
		uint32_t L_4 = V_2;
		if ((!(((uint32_t)L_4) <= ((uint32_t)((int32_t)680602789)))))
		{
			goto IL_0049;
		}
	}
	{
		uint32_t L_5 = V_2;
		if ((((int32_t)L_5) == ((int32_t)((int32_t)49525662))))
		{
			goto IL_00ba;
		}
	}
	{
		uint32_t L_6 = V_2;
		if ((((int32_t)L_6) == ((int32_t)((int32_t)258704408))))
		{
			goto IL_0138;
		}
	}
	{
		uint32_t L_7 = V_2;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)680602789))))
		{
			goto IL_00e4;
		}
	}
	{
		goto IL_02b5;
	}

IL_0049:
	{
		uint32_t L_8 = V_2;
		if ((((int32_t)L_8) == ((int32_t)((int32_t)2057398597))))
		{
			goto IL_0162;
		}
	}
	{
		uint32_t L_9 = V_2;
		if ((((int32_t)L_9) == ((int32_t)((int32_t)-2057050870))))
		{
			goto IL_0177;
		}
	}
	{
		uint32_t L_10 = V_2;
		if ((((int32_t)L_10) == ((int32_t)((int32_t)-1604400485))))
		{
			goto IL_0123;
		}
	}
	{
		goto IL_02b5;
	}

IL_006f:
	{
		uint32_t L_11 = V_2;
		if ((!(((uint32_t)L_11) <= ((uint32_t)((int32_t)-667110935)))))
		{
			goto IL_0097;
		}
	}
	{
		uint32_t L_12 = V_2;
		if ((((int32_t)L_12) == ((int32_t)((int32_t)-1055777148))))
		{
			goto IL_00cf;
		}
	}
	{
		uint32_t L_13 = V_2;
		if ((((int32_t)L_13) == ((int32_t)((int32_t)-796669776))))
		{
			goto IL_01a1;
		}
	}
	{
		uint32_t L_14 = V_2;
		if ((((int32_t)L_14) == ((int32_t)((int32_t)-667110935))))
		{
			goto IL_010e;
		}
	}
	{
		goto IL_02b5;
	}

IL_0097:
	{
		uint32_t L_15 = V_2;
		if ((((int32_t)L_15) == ((int32_t)((int32_t)-493019601))))
		{
			goto IL_00f9;
		}
	}
	{
		uint32_t L_16 = V_2;
		if ((((int32_t)L_16) == ((int32_t)((int32_t)-86242094))))
		{
			goto IL_014d;
		}
	}
	{
		uint32_t L_17 = V_2;
		if ((((int32_t)L_17) == ((int32_t)((int32_t)-24986963))))
		{
			goto IL_018c;
		}
	}
	{
		goto IL_02b5;
	}

IL_00ba:
	{
		String_t* L_18 = V_1;
		bool L_19;
		L_19 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_18, _stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B, NULL);
		if (L_19)
		{
			goto IL_01b6;
		}
	}
	{
		goto IL_02b5;
	}

IL_00cf:
	{
		String_t* L_20 = V_1;
		bool L_21;
		L_21 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_20, _stringLiteral60126327537B7B8E6EE33C43FE0C5CA8BCC3A06A, NULL);
		if (L_21)
		{
			goto IL_01cd;
		}
	}
	{
		goto IL_02b5;
	}

IL_00e4:
	{
		String_t* L_22 = V_1;
		bool L_23;
		L_23 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_22, _stringLiteral509D57D2D3AC4C6FAE8D21D19FF2B9D787C81954, NULL);
		if (L_23)
		{
			goto IL_01e4;
		}
	}
	{
		goto IL_02b5;
	}

IL_00f9:
	{
		String_t* L_24 = V_1;
		bool L_25;
		L_25 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_24, _stringLiteral1057AAF5EE3CDF423CF6BCC588476E559687CDE6, NULL);
		if (L_25)
		{
			goto IL_01fb;
		}
	}
	{
		goto IL_02b5;
	}

IL_010e:
	{
		String_t* L_26 = V_1;
		bool L_27;
		L_27 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_26, _stringLiteral2AC7F98E5022908E09788532C95599452352D34A, NULL);
		if (L_27)
		{
			goto IL_0212;
		}
	}
	{
		goto IL_02b5;
	}

IL_0123:
	{
		String_t* L_28 = V_1;
		bool L_29;
		L_29 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_28, _stringLiteral93C208E83E88E77020CE91612101CB879A8EE914, NULL);
		if (L_29)
		{
			goto IL_0229;
		}
	}
	{
		goto IL_02b5;
	}

IL_0138:
	{
		String_t* L_30 = V_1;
		bool L_31;
		L_31 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_30, _stringLiteral072FD16FCD5FDEE6DF9288BBCA5AFBFA16B04581, NULL);
		if (L_31)
		{
			goto IL_023d;
		}
	}
	{
		goto IL_02b5;
	}

IL_014d:
	{
		String_t* L_32 = V_1;
		bool L_33;
		L_33 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_32, _stringLiteral4845015737DC41475709911228278216EE4DC3AF, NULL);
		if (L_33)
		{
			goto IL_0251;
		}
	}
	{
		goto IL_02b5;
	}

IL_0162:
	{
		String_t* L_34 = V_1;
		bool L_35;
		L_35 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_34, _stringLiteralA2DB56FF90ECEEEC49C5E8C66FCD72DF2771D010, NULL);
		if (L_35)
		{
			goto IL_0265;
		}
	}
	{
		goto IL_02b5;
	}

IL_0177:
	{
		String_t* L_36 = V_1;
		bool L_37;
		L_37 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_36, _stringLiteral40B9968876DFBA959A505AA3EC0E9D9D26C14E45, NULL);
		if (L_37)
		{
			goto IL_0279;
		}
	}
	{
		goto IL_02b5;
	}

IL_018c:
	{
		String_t* L_38 = V_1;
		bool L_39;
		L_39 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_38, _stringLiteral77682CE598EDE490DCDE276E250422EA9BEA739F, NULL);
		if (L_39)
		{
			goto IL_028d;
		}
	}
	{
		goto IL_02b5;
	}

IL_01a1:
	{
		String_t* L_40 = V_1;
		bool L_41;
		L_41 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_40, _stringLiteral52D353FB908B8123B513952855EB88F081A1A06A, NULL);
		if (L_41)
		{
			goto IL_02a1;
		}
	}
	{
		goto IL_02b5;
	}

IL_01b6:
	{
		// instance.enabled = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_42 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_43 = ((ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_42);
		bool L_44;
		L_44 = GenericVirtualFuncInvoker1< bool, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mFFB70EE53D8CD0255A4E599780F62A3EB1520E83_RuntimeMethod_var, L_42, L_43);
		LightsModule_set_enabled_mCA61408EE4B83423BB92B032567BA63005379DCE((&V_0), L_44, NULL);
		// break;
		goto IL_02bb;
	}

IL_01cd:
	{
		// instance.ratio = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_45 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_46 = ((ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_45);
		float L_47;
		L_47 = GenericVirtualFuncInvoker1< float, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mA86928BC888E342D2C2644535E3399952F5077ED_RuntimeMethod_var, L_45, L_46);
		LightsModule_set_ratio_mE1B9F5C45EB2E0822BF47F28F0510B5ECF2C87FC((&V_0), L_47, NULL);
		// break;
		goto IL_02bb;
	}

IL_01e4:
	{
		// instance.useRandomDistribution = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_48 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_49 = ((ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_48);
		bool L_50;
		L_50 = GenericVirtualFuncInvoker1< bool, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mFFB70EE53D8CD0255A4E599780F62A3EB1520E83_RuntimeMethod_var, L_48, L_49);
		LightsModule_set_useRandomDistribution_mB5EEC3EE5E510F2F27C779C25FD584B6FEA879D9((&V_0), L_50, NULL);
		// break;
		goto IL_02bb;
	}

IL_01fb:
	{
		// instance.light = reader.Read<UnityEngine.Light>(ES3Type_Light.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_51 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_52 = ((ES3Type_Light_t0E702BA5766531A8E1C1C7B952BD4B76502DE877_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Light_t0E702BA5766531A8E1C1C7B952BD4B76502DE877_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_51);
		Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* L_53;
		L_53 = GenericVirtualFuncInvoker1< Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3*, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisLight_t1E68479B7782AF2050FAA02A5DC612FD034F18F3_mB032FAFBAB777BB6EC57AFAD4E183FCA57151654_RuntimeMethod_var, L_51, L_52);
		LightsModule_set_light_m54F655151E83BA1CF8ECDF92B8D18F06463B2D59((&V_0), L_53, NULL);
		// break;
		goto IL_02bb;
	}

IL_0212:
	{
		// instance.useParticleColor = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_54 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_55 = ((ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_54);
		bool L_56;
		L_56 = GenericVirtualFuncInvoker1< bool, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mFFB70EE53D8CD0255A4E599780F62A3EB1520E83_RuntimeMethod_var, L_54, L_55);
		LightsModule_set_useParticleColor_mC91DC556C20A786D4E8190842094B557204C74B0((&V_0), L_56, NULL);
		// break;
		goto IL_02bb;
	}

IL_0229:
	{
		// instance.sizeAffectsRange = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_57 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_58 = ((ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_57);
		bool L_59;
		L_59 = GenericVirtualFuncInvoker1< bool, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mFFB70EE53D8CD0255A4E599780F62A3EB1520E83_RuntimeMethod_var, L_57, L_58);
		LightsModule_set_sizeAffectsRange_mBAAE49AC54AE79237649DD0AA715F43B0510356A((&V_0), L_59, NULL);
		// break;
		goto IL_02bb;
	}

IL_023d:
	{
		// instance.alphaAffectsIntensity = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_60 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_61 = ((ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_60);
		bool L_62;
		L_62 = GenericVirtualFuncInvoker1< bool, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mFFB70EE53D8CD0255A4E599780F62A3EB1520E83_RuntimeMethod_var, L_60, L_61);
		LightsModule_set_alphaAffectsIntensity_m79B804EA7C98543C733F3E0355DB01B8E1845995((&V_0), L_62, NULL);
		// break;
		goto IL_02bb;
	}

IL_0251:
	{
		// instance.range = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_63 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_64 = ((ES3Type_MinMaxCurve_t1C147718750ACBECE5D2B7F545D2A434A3C5409B_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t1C147718750ACBECE5D2B7F545D2A434A3C5409B_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_63);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_65;
		L_65 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_m9D6B4042B923127DEA4A2CAA3E35EED37D75B3D0_RuntimeMethod_var, L_63, L_64);
		LightsModule_set_range_m3DA6A5EE3021CB5A4787AEAE4DCA675E3050C5E4((&V_0), L_65, NULL);
		// break;
		goto IL_02bb;
	}

IL_0265:
	{
		// instance.rangeMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_66 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_67 = ((ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_66);
		float L_68;
		L_68 = GenericVirtualFuncInvoker1< float, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mA86928BC888E342D2C2644535E3399952F5077ED_RuntimeMethod_var, L_66, L_67);
		LightsModule_set_rangeMultiplier_m881D705C505C908F9F05F24EFBFC61DD2F01B23F((&V_0), L_68, NULL);
		// break;
		goto IL_02bb;
	}

IL_0279:
	{
		// instance.intensity = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_69 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_70 = ((ES3Type_MinMaxCurve_t1C147718750ACBECE5D2B7F545D2A434A3C5409B_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t1C147718750ACBECE5D2B7F545D2A434A3C5409B_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_69);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_71;
		L_71 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_m9D6B4042B923127DEA4A2CAA3E35EED37D75B3D0_RuntimeMethod_var, L_69, L_70);
		LightsModule_set_intensity_mD1D7564D1ADD14C5755043F1146A8D56C228A519((&V_0), L_71, NULL);
		// break;
		goto IL_02bb;
	}

IL_028d:
	{
		// instance.intensityMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_72 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_73 = ((ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_72);
		float L_74;
		L_74 = GenericVirtualFuncInvoker1< float, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mA86928BC888E342D2C2644535E3399952F5077ED_RuntimeMethod_var, L_72, L_73);
		LightsModule_set_intensityMultiplier_m79E9E71E14F02B6BE7C4EB6C5B3BA8921D1B29F8((&V_0), L_74, NULL);
		// break;
		goto IL_02bb;
	}

IL_02a1:
	{
		// instance.maxLights = reader.Read<System.Int32>(ES3Type_int.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_75 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_76 = ((ES3Type_int_t05A5E7A96442F23CE33E24A71CD349372A70E0C3_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_int_t05A5E7A96442F23CE33E24A71CD349372A70E0C3_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_75);
		int32_t L_77;
		L_77 = GenericVirtualFuncInvoker1< int32_t, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mEFCC4D52DD5B822D3561A53591AE11CDB25CDB6F_RuntimeMethod_var, L_75, L_76);
		LightsModule_set_maxLights_mC423F1C129DAB69F2F145F6AA8160DEE8176F4EC((&V_0), L_77, NULL);
		// break;
		goto IL_02bb;
	}

IL_02b5:
	{
		// reader.Skip();
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_78 = ___reader0;
		NullCheck(L_78);
		VirtualActionInvoker0::Invoke(41 /* System.Void ES3Reader::Skip() */, L_78);
	}

IL_02bb:
	{
		// while((propertyName = reader.ReadPropertyName()) != null)
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_79 = ___reader0;
		NullCheck(L_79);
		String_t* L_80;
		L_80 = VirtualFuncInvoker0< String_t* >::Invoke(21 /* System.String ES3Reader::ReadPropertyName() */, L_79);
		String_t* L_81 = L_80;
		V_1 = L_81;
		if (L_81)
		{
			goto IL_000c;
		}
	}
	{
		// }
		return;
	}
}
// System.Void ES3Types.ES3Type_LightsModule::ReadInto<UnityEngine.ParticleSystem/VelocityOverLifetimeModule>(ES3Reader,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ES3Type_LightsModule_ReadInto_TisVelocityOverLifetimeModule_tB4A3291E3D2E850257EE3F8344AAEDA06D7FCE56_m78012D489FC6AD2C30141548B0619B42D57E22B5_gshared (ES3Type_LightsModule_t37A9192D3FFC77124809D0623E14839D7E0C86A6* __this, ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* ___reader0, RuntimeObject* ___obj1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mFFB70EE53D8CD0255A4E599780F62A3EB1520E83_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mEFCC4D52DD5B822D3561A53591AE11CDB25CDB6F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisLight_t1E68479B7782AF2050FAA02A5DC612FD034F18F3_mB032FAFBAB777BB6EC57AFAD4E183FCA57151654_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_m9D6B4042B923127DEA4A2CAA3E35EED37D75B3D0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mA86928BC888E342D2C2644535E3399952F5077ED_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_Light_t0E702BA5766531A8E1C1C7B952BD4B76502DE877_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_MinMaxCurve_t1C147718750ACBECE5D2B7F545D2A434A3C5409B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_int_t05A5E7A96442F23CE33E24A71CD349372A70E0C3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral072FD16FCD5FDEE6DF9288BBCA5AFBFA16B04581);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1057AAF5EE3CDF423CF6BCC588476E559687CDE6);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2AC7F98E5022908E09788532C95599452352D34A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral40B9968876DFBA959A505AA3EC0E9D9D26C14E45);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4845015737DC41475709911228278216EE4DC3AF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral509D57D2D3AC4C6FAE8D21D19FF2B9D787C81954);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral52D353FB908B8123B513952855EB88F081A1A06A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral60126327537B7B8E6EE33C43FE0C5CA8BCC3A06A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral77682CE598EDE490DCDE276E250422EA9BEA739F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral93C208E83E88E77020CE91612101CB879A8EE914);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA2DB56FF90ECEEEC49C5E8C66FCD72DF2771D010);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B);
		s_Il2CppMethodInitialized = true;
	}
	LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	uint32_t V_2 = 0;
	{
		// var instance = (UnityEngine.ParticleSystem.LightsModule)obj;
		RuntimeObject* L_0 = ___obj1;
		V_0 = ((*(LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E*)((LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E*)(LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E*)UnBox(L_0, LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E_il2cpp_TypeInfo_var))));
		goto IL_02bb;
	}

IL_000c:
	{
		String_t* L_1 = V_1;
		uint32_t L_2;
		L_2 = U3CPrivateImplementationDetailsU3E_ComputeStringHash_m6EA1F233618497AEFF8902A5EDFA24C74E2F2876(L_1, NULL);
		V_2 = L_2;
		uint32_t L_3 = V_2;
		if ((!(((uint32_t)L_3) <= ((uint32_t)((int32_t)-1604400485)))))
		{
			goto IL_006f;
		}
	}
	{
		uint32_t L_4 = V_2;
		if ((!(((uint32_t)L_4) <= ((uint32_t)((int32_t)680602789)))))
		{
			goto IL_0049;
		}
	}
	{
		uint32_t L_5 = V_2;
		if ((((int32_t)L_5) == ((int32_t)((int32_t)49525662))))
		{
			goto IL_00ba;
		}
	}
	{
		uint32_t L_6 = V_2;
		if ((((int32_t)L_6) == ((int32_t)((int32_t)258704408))))
		{
			goto IL_0138;
		}
	}
	{
		uint32_t L_7 = V_2;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)680602789))))
		{
			goto IL_00e4;
		}
	}
	{
		goto IL_02b5;
	}

IL_0049:
	{
		uint32_t L_8 = V_2;
		if ((((int32_t)L_8) == ((int32_t)((int32_t)2057398597))))
		{
			goto IL_0162;
		}
	}
	{
		uint32_t L_9 = V_2;
		if ((((int32_t)L_9) == ((int32_t)((int32_t)-2057050870))))
		{
			goto IL_0177;
		}
	}
	{
		uint32_t L_10 = V_2;
		if ((((int32_t)L_10) == ((int32_t)((int32_t)-1604400485))))
		{
			goto IL_0123;
		}
	}
	{
		goto IL_02b5;
	}

IL_006f:
	{
		uint32_t L_11 = V_2;
		if ((!(((uint32_t)L_11) <= ((uint32_t)((int32_t)-667110935)))))
		{
			goto IL_0097;
		}
	}
	{
		uint32_t L_12 = V_2;
		if ((((int32_t)L_12) == ((int32_t)((int32_t)-1055777148))))
		{
			goto IL_00cf;
		}
	}
	{
		uint32_t L_13 = V_2;
		if ((((int32_t)L_13) == ((int32_t)((int32_t)-796669776))))
		{
			goto IL_01a1;
		}
	}
	{
		uint32_t L_14 = V_2;
		if ((((int32_t)L_14) == ((int32_t)((int32_t)-667110935))))
		{
			goto IL_010e;
		}
	}
	{
		goto IL_02b5;
	}

IL_0097:
	{
		uint32_t L_15 = V_2;
		if ((((int32_t)L_15) == ((int32_t)((int32_t)-493019601))))
		{
			goto IL_00f9;
		}
	}
	{
		uint32_t L_16 = V_2;
		if ((((int32_t)L_16) == ((int32_t)((int32_t)-86242094))))
		{
			goto IL_014d;
		}
	}
	{
		uint32_t L_17 = V_2;
		if ((((int32_t)L_17) == ((int32_t)((int32_t)-24986963))))
		{
			goto IL_018c;
		}
	}
	{
		goto IL_02b5;
	}

IL_00ba:
	{
		String_t* L_18 = V_1;
		bool L_19;
		L_19 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_18, _stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B, NULL);
		if (L_19)
		{
			goto IL_01b6;
		}
	}
	{
		goto IL_02b5;
	}

IL_00cf:
	{
		String_t* L_20 = V_1;
		bool L_21;
		L_21 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_20, _stringLiteral60126327537B7B8E6EE33C43FE0C5CA8BCC3A06A, NULL);
		if (L_21)
		{
			goto IL_01cd;
		}
	}
	{
		goto IL_02b5;
	}

IL_00e4:
	{
		String_t* L_22 = V_1;
		bool L_23;
		L_23 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_22, _stringLiteral509D57D2D3AC4C6FAE8D21D19FF2B9D787C81954, NULL);
		if (L_23)
		{
			goto IL_01e4;
		}
	}
	{
		goto IL_02b5;
	}

IL_00f9:
	{
		String_t* L_24 = V_1;
		bool L_25;
		L_25 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_24, _stringLiteral1057AAF5EE3CDF423CF6BCC588476E559687CDE6, NULL);
		if (L_25)
		{
			goto IL_01fb;
		}
	}
	{
		goto IL_02b5;
	}

IL_010e:
	{
		String_t* L_26 = V_1;
		bool L_27;
		L_27 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_26, _stringLiteral2AC7F98E5022908E09788532C95599452352D34A, NULL);
		if (L_27)
		{
			goto IL_0212;
		}
	}
	{
		goto IL_02b5;
	}

IL_0123:
	{
		String_t* L_28 = V_1;
		bool L_29;
		L_29 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_28, _stringLiteral93C208E83E88E77020CE91612101CB879A8EE914, NULL);
		if (L_29)
		{
			goto IL_0229;
		}
	}
	{
		goto IL_02b5;
	}

IL_0138:
	{
		String_t* L_30 = V_1;
		bool L_31;
		L_31 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_30, _stringLiteral072FD16FCD5FDEE6DF9288BBCA5AFBFA16B04581, NULL);
		if (L_31)
		{
			goto IL_023d;
		}
	}
	{
		goto IL_02b5;
	}

IL_014d:
	{
		String_t* L_32 = V_1;
		bool L_33;
		L_33 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_32, _stringLiteral4845015737DC41475709911228278216EE4DC3AF, NULL);
		if (L_33)
		{
			goto IL_0251;
		}
	}
	{
		goto IL_02b5;
	}

IL_0162:
	{
		String_t* L_34 = V_1;
		bool L_35;
		L_35 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_34, _stringLiteralA2DB56FF90ECEEEC49C5E8C66FCD72DF2771D010, NULL);
		if (L_35)
		{
			goto IL_0265;
		}
	}
	{
		goto IL_02b5;
	}

IL_0177:
	{
		String_t* L_36 = V_1;
		bool L_37;
		L_37 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_36, _stringLiteral40B9968876DFBA959A505AA3EC0E9D9D26C14E45, NULL);
		if (L_37)
		{
			goto IL_0279;
		}
	}
	{
		goto IL_02b5;
	}

IL_018c:
	{
		String_t* L_38 = V_1;
		bool L_39;
		L_39 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_38, _stringLiteral77682CE598EDE490DCDE276E250422EA9BEA739F, NULL);
		if (L_39)
		{
			goto IL_028d;
		}
	}
	{
		goto IL_02b5;
	}

IL_01a1:
	{
		String_t* L_40 = V_1;
		bool L_41;
		L_41 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_40, _stringLiteral52D353FB908B8123B513952855EB88F081A1A06A, NULL);
		if (L_41)
		{
			goto IL_02a1;
		}
	}
	{
		goto IL_02b5;
	}

IL_01b6:
	{
		// instance.enabled = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_42 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_43 = ((ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_42);
		bool L_44;
		L_44 = GenericVirtualFuncInvoker1< bool, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mFFB70EE53D8CD0255A4E599780F62A3EB1520E83_RuntimeMethod_var, L_42, L_43);
		LightsModule_set_enabled_mCA61408EE4B83423BB92B032567BA63005379DCE((&V_0), L_44, NULL);
		// break;
		goto IL_02bb;
	}

IL_01cd:
	{
		// instance.ratio = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_45 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_46 = ((ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_45);
		float L_47;
		L_47 = GenericVirtualFuncInvoker1< float, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mA86928BC888E342D2C2644535E3399952F5077ED_RuntimeMethod_var, L_45, L_46);
		LightsModule_set_ratio_mE1B9F5C45EB2E0822BF47F28F0510B5ECF2C87FC((&V_0), L_47, NULL);
		// break;
		goto IL_02bb;
	}

IL_01e4:
	{
		// instance.useRandomDistribution = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_48 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_49 = ((ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_48);
		bool L_50;
		L_50 = GenericVirtualFuncInvoker1< bool, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mFFB70EE53D8CD0255A4E599780F62A3EB1520E83_RuntimeMethod_var, L_48, L_49);
		LightsModule_set_useRandomDistribution_mB5EEC3EE5E510F2F27C779C25FD584B6FEA879D9((&V_0), L_50, NULL);
		// break;
		goto IL_02bb;
	}

IL_01fb:
	{
		// instance.light = reader.Read<UnityEngine.Light>(ES3Type_Light.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_51 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_52 = ((ES3Type_Light_t0E702BA5766531A8E1C1C7B952BD4B76502DE877_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Light_t0E702BA5766531A8E1C1C7B952BD4B76502DE877_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_51);
		Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* L_53;
		L_53 = GenericVirtualFuncInvoker1< Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3*, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisLight_t1E68479B7782AF2050FAA02A5DC612FD034F18F3_mB032FAFBAB777BB6EC57AFAD4E183FCA57151654_RuntimeMethod_var, L_51, L_52);
		LightsModule_set_light_m54F655151E83BA1CF8ECDF92B8D18F06463B2D59((&V_0), L_53, NULL);
		// break;
		goto IL_02bb;
	}

IL_0212:
	{
		// instance.useParticleColor = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_54 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_55 = ((ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_54);
		bool L_56;
		L_56 = GenericVirtualFuncInvoker1< bool, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mFFB70EE53D8CD0255A4E599780F62A3EB1520E83_RuntimeMethod_var, L_54, L_55);
		LightsModule_set_useParticleColor_mC91DC556C20A786D4E8190842094B557204C74B0((&V_0), L_56, NULL);
		// break;
		goto IL_02bb;
	}

IL_0229:
	{
		// instance.sizeAffectsRange = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_57 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_58 = ((ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_57);
		bool L_59;
		L_59 = GenericVirtualFuncInvoker1< bool, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mFFB70EE53D8CD0255A4E599780F62A3EB1520E83_RuntimeMethod_var, L_57, L_58);
		LightsModule_set_sizeAffectsRange_mBAAE49AC54AE79237649DD0AA715F43B0510356A((&V_0), L_59, NULL);
		// break;
		goto IL_02bb;
	}

IL_023d:
	{
		// instance.alphaAffectsIntensity = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_60 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_61 = ((ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_60);
		bool L_62;
		L_62 = GenericVirtualFuncInvoker1< bool, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mFFB70EE53D8CD0255A4E599780F62A3EB1520E83_RuntimeMethod_var, L_60, L_61);
		LightsModule_set_alphaAffectsIntensity_m79B804EA7C98543C733F3E0355DB01B8E1845995((&V_0), L_62, NULL);
		// break;
		goto IL_02bb;
	}

IL_0251:
	{
		// instance.range = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_63 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_64 = ((ES3Type_MinMaxCurve_t1C147718750ACBECE5D2B7F545D2A434A3C5409B_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t1C147718750ACBECE5D2B7F545D2A434A3C5409B_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_63);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_65;
		L_65 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_m9D6B4042B923127DEA4A2CAA3E35EED37D75B3D0_RuntimeMethod_var, L_63, L_64);
		LightsModule_set_range_m3DA6A5EE3021CB5A4787AEAE4DCA675E3050C5E4((&V_0), L_65, NULL);
		// break;
		goto IL_02bb;
	}

IL_0265:
	{
		// instance.rangeMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_66 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_67 = ((ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_66);
		float L_68;
		L_68 = GenericVirtualFuncInvoker1< float, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mA86928BC888E342D2C2644535E3399952F5077ED_RuntimeMethod_var, L_66, L_67);
		LightsModule_set_rangeMultiplier_m881D705C505C908F9F05F24EFBFC61DD2F01B23F((&V_0), L_68, NULL);
		// break;
		goto IL_02bb;
	}

IL_0279:
	{
		// instance.intensity = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_69 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_70 = ((ES3Type_MinMaxCurve_t1C147718750ACBECE5D2B7F545D2A434A3C5409B_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t1C147718750ACBECE5D2B7F545D2A434A3C5409B_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_69);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_71;
		L_71 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_m9D6B4042B923127DEA4A2CAA3E35EED37D75B3D0_RuntimeMethod_var, L_69, L_70);
		LightsModule_set_intensity_mD1D7564D1ADD14C5755043F1146A8D56C228A519((&V_0), L_71, NULL);
		// break;
		goto IL_02bb;
	}

IL_028d:
	{
		// instance.intensityMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_72 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_73 = ((ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_72);
		float L_74;
		L_74 = GenericVirtualFuncInvoker1< float, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mA86928BC888E342D2C2644535E3399952F5077ED_RuntimeMethod_var, L_72, L_73);
		LightsModule_set_intensityMultiplier_m79E9E71E14F02B6BE7C4EB6C5B3BA8921D1B29F8((&V_0), L_74, NULL);
		// break;
		goto IL_02bb;
	}

IL_02a1:
	{
		// instance.maxLights = reader.Read<System.Int32>(ES3Type_int.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_75 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_76 = ((ES3Type_int_t05A5E7A96442F23CE33E24A71CD349372A70E0C3_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_int_t05A5E7A96442F23CE33E24A71CD349372A70E0C3_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_75);
		int32_t L_77;
		L_77 = GenericVirtualFuncInvoker1< int32_t, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mEFCC4D52DD5B822D3561A53591AE11CDB25CDB6F_RuntimeMethod_var, L_75, L_76);
		LightsModule_set_maxLights_mC423F1C129DAB69F2F145F6AA8160DEE8176F4EC((&V_0), L_77, NULL);
		// break;
		goto IL_02bb;
	}

IL_02b5:
	{
		// reader.Skip();
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_78 = ___reader0;
		NullCheck(L_78);
		VirtualActionInvoker0::Invoke(41 /* System.Void ES3Reader::Skip() */, L_78);
	}

IL_02bb:
	{
		// while((propertyName = reader.ReadPropertyName()) != null)
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_79 = ___reader0;
		NullCheck(L_79);
		String_t* L_80;
		L_80 = VirtualFuncInvoker0< String_t* >::Invoke(21 /* System.String ES3Reader::ReadPropertyName() */, L_79);
		String_t* L_81 = L_80;
		V_1 = L_81;
		if (L_81)
		{
			goto IL_000c;
		}
	}
	{
		// }
		return;
	}
}
// System.Object ES3Types.ES3Type_LimitVelocityOverLifetimeModule::Read<System.Boolean>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_LimitVelocityOverLifetimeModule_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mB6275954AC0B14543B6157BFCC10384E33093A90_gshared (ES3Type_LimitVelocityOverLifetimeModule_t0B3EB57F7FF7F9D1F6D99783CAB9DF9ADCEDE92B* __this, ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LimitVelocityOverLifetimeModule_tC52CF1434E2639EE5D81DD6BA269FF38CA17D8B1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	LimitVelocityOverLifetimeModule_tC52CF1434E2639EE5D81DD6BA269FF38CA17D8B1 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// var instance = new UnityEngine.ParticleSystem.LimitVelocityOverLifetimeModule();
		il2cpp_codegen_initobj((&V_0), sizeof(LimitVelocityOverLifetimeModule_tC52CF1434E2639EE5D81DD6BA269FF38CA17D8B1));
		// ReadInto<T>(reader, instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_0 = ___reader0;
		LimitVelocityOverLifetimeModule_tC52CF1434E2639EE5D81DD6BA269FF38CA17D8B1 L_1 = V_0;
		LimitVelocityOverLifetimeModule_tC52CF1434E2639EE5D81DD6BA269FF38CA17D8B1 L_2 = L_1;
		RuntimeObject* L_3 = Box(LimitVelocityOverLifetimeModule_tC52CF1434E2639EE5D81DD6BA269FF38CA17D8B1_il2cpp_TypeInfo_var, &L_2);
		NullCheck((ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE*)__this);
		GenericVirtualActionInvoker2< ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518*, RuntimeObject* >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 0), (ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE*)__this, L_0, L_3);
		// return instance;
		LimitVelocityOverLifetimeModule_tC52CF1434E2639EE5D81DD6BA269FF38CA17D8B1 L_4 = V_0;
		LimitVelocityOverLifetimeModule_tC52CF1434E2639EE5D81DD6BA269FF38CA17D8B1 L_5 = L_4;
		RuntimeObject* L_6 = Box(LimitVelocityOverLifetimeModule_tC52CF1434E2639EE5D81DD6BA269FF38CA17D8B1_il2cpp_TypeInfo_var, &L_5);
		return L_6;
	}
}
// System.Object ES3Types.ES3Type_LimitVelocityOverLifetimeModule::Read<UnityEngine.Bounds>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_LimitVelocityOverLifetimeModule_Read_TisBounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3_m5AC1B86EDB58FEB3644A693633D6E686C8C3C495_gshared (ES3Type_LimitVelocityOverLifetimeModule_t0B3EB57F7FF7F9D1F6D99783CAB9DF9ADCEDE92B* __this, ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LimitVelocityOverLifetimeModule_tC52CF1434E2639EE5D81DD6BA269FF38CA17D8B1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	LimitVelocityOverLifetimeModule_tC52CF1434E2639EE5D81DD6BA269FF38CA17D8B1 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// var instance = new UnityEngine.ParticleSystem.LimitVelocityOverLifetimeModule();
		il2cpp_codegen_initobj((&V_0), sizeof(LimitVelocityOverLifetimeModule_tC52CF1434E2639EE5D81DD6BA269FF38CA17D8B1));
		// ReadInto<T>(reader, instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_0 = ___reader0;
		LimitVelocityOverLifetimeModule_tC52CF1434E2639EE5D81DD6BA269FF38CA17D8B1 L_1 = V_0;
		LimitVelocityOverLifetimeModule_tC52CF1434E2639EE5D81DD6BA269FF38CA17D8B1 L_2 = L_1;
		RuntimeObject* L_3 = Box(LimitVelocityOverLifetimeModule_tC52CF1434E2639EE5D81DD6BA269FF38CA17D8B1_il2cpp_TypeInfo_var, &L_2);
		NullCheck((ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE*)__this);
		GenericVirtualActionInvoker2< ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518*, RuntimeObject* >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 0), (ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE*)__this, L_0, L_3);
		// return instance;
		LimitVelocityOverLifetimeModule_tC52CF1434E2639EE5D81DD6BA269FF38CA17D8B1 L_4 = V_0;
		LimitVelocityOverLifetimeModule_tC52CF1434E2639EE5D81DD6BA269FF38CA17D8B1 L_5 = L_4;
		RuntimeObject* L_6 = Box(LimitVelocityOverLifetimeModule_tC52CF1434E2639EE5D81DD6BA269FF38CA17D8B1_il2cpp_TypeInfo_var, &L_5);
		return L_6;
	}
}
// System.Object ES3Types.ES3Type_LimitVelocityOverLifetimeModule::Read<System.Byte>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_LimitVelocityOverLifetimeModule_Read_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m20080F09548C4021AE2F367F14D15495EFBF6C34_gshared (ES3Type_LimitVelocityOverLifetimeModule_t0B3EB57F7FF7F9D1F6D99783CAB9DF9ADCEDE92B* __this, ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LimitVelocityOverLifetimeModule_tC52CF1434E2639EE5D81DD6BA269FF38CA17D8B1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	LimitVelocityOverLifetimeModule_tC52CF1434E2639EE5D81DD6BA269FF38CA17D8B1 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// var instance = new UnityEngine.ParticleSystem.LimitVelocityOverLifetimeModule();
		il2cpp_codegen_initobj((&V_0), sizeof(LimitVelocityOverLifetimeModule_tC52CF1434E2639EE5D81DD6BA269FF38CA17D8B1));
		// ReadInto<T>(reader, instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_0 = ___reader0;
		LimitVelocityOverLifetimeModule_tC52CF1434E2639EE5D81DD6BA269FF38CA17D8B1 L_1 = V_0;
		LimitVelocityOverLifetimeModule_tC52CF1434E2639EE5D81DD6BA269FF38CA17D8B1 L_2 = L_1;
		RuntimeObject* L_3 = Box(LimitVelocityOverLifetimeModule_tC52CF1434E2639EE5D81DD6BA269FF38CA17D8B1_il2cpp_TypeInfo_var, &L_2);
		NullCheck((ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE*)__this);
		GenericVirtualActionInvoker2< ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518*, RuntimeObject* >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 0), (ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE*)__this, L_0, L_3);
		// return instance;
		LimitVelocityOverLifetimeModule_tC52CF1434E2639EE5D81DD6BA269FF38CA17D8B1 L_4 = V_0;
		LimitVelocityOverLifetimeModule_tC52CF1434E2639EE5D81DD6BA269FF38CA17D8B1 L_5 = L_4;
		RuntimeObject* L_6 = Box(LimitVelocityOverLifetimeModule_tC52CF1434E2639EE5D81DD6BA269FF38CA17D8B1_il2cpp_TypeInfo_var, &L_5);
		return L_6;
	}
}
// System.Object ES3Types.ES3Type_LimitVelocityOverLifetimeModule::Read<UnityEngine.Color>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_LimitVelocityOverLifetimeModule_Read_TisColor_tD001788D726C3A7F1379BEED0260B9591F440C1F_mF73246C1B02C8C57D2EC211B460EE74F569412C6_gshared (ES3Type_LimitVelocityOverLifetimeModule_t0B3EB57F7FF7F9D1F6D99783CAB9DF9ADCEDE92B* __this, ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LimitVelocityOverLifetimeModule_tC52CF1434E2639EE5D81DD6BA269FF38CA17D8B1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	LimitVelocityOverLifetimeModule_tC52CF1434E2639EE5D81DD6BA269FF38CA17D8B1 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// var instance = new UnityEngine.ParticleSystem.LimitVelocityOverLifetimeModule();
		il2cpp_codegen_initobj((&V_0), sizeof(LimitVelocityOverLifetimeModule_tC52CF1434E2639EE5D81DD6BA269FF38CA17D8B1));
		// ReadInto<T>(reader, instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_0 = ___reader0;
		LimitVelocityOverLifetimeModule_tC52CF1434E2639EE5D81DD6BA269FF38CA17D8B1 L_1 = V_0;
		LimitVelocityOverLifetimeModule_tC52CF1434E2639EE5D81DD6BA269FF38CA17D8B1 L_2 = L_1;
		RuntimeObject* L_3 = Box(LimitVelocityOverLifetimeModule_tC52CF1434E2639EE5D81DD6BA269FF38CA17D8B1_il2cpp_TypeInfo_var, &L_2);
		NullCheck((ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE*)__this);
		GenericVirtualActionInvoker2< ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518*, RuntimeObject* >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 0), (ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE*)__this, L_0, L_3);
		// return instance;
		LimitVelocityOverLifetimeModule_tC52CF1434E2639EE5D81DD6BA269FF38CA17D8B1 L_4 = V_0;
		LimitVelocityOverLifetimeModule_tC52CF1434E2639EE5D81DD6BA269FF38CA17D8B1 L_5 = L_4;
		RuntimeObject* L_6 = Box(LimitVelocityOverLifetimeModule_tC52CF1434E2639EE5D81DD6BA269FF38CA17D8B1_il2cpp_TypeInfo_var, &L_5);
		return L_6;
	}
}
// System.Object ES3Types.ES3Type_LimitVelocityOverLifetimeModule::Read<System.Int32>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_LimitVelocityOverLifetimeModule_Read_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m2F5B23E253C77B05655E9C41DF8C92FA5B513654_gshared (ES3Type_LimitVelocityOverLifetimeModule_t0B3EB57F7FF7F9D1F6D99783CAB9DF9ADCEDE92B* __this, ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LimitVelocityOverLifetimeModule_tC52CF1434E2639EE5D81DD6BA269FF38CA17D8B1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	LimitVelocityOverLifetimeModule_tC52CF1434E2639EE5D81DD6BA269FF38CA17D8B1 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// var instance = new UnityEngine.ParticleSystem.LimitVelocityOverLifetimeModule();
		il2cpp_codegen_initobj((&V_0), sizeof(LimitVelocityOverLifetimeModule_tC52CF1434E2639EE5D81DD6BA269FF38CA17D8B1));
		// ReadInto<T>(reader, instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_0 = ___reader0;
		LimitVelocityOverLifetimeModule_tC52CF1434E2639EE5D81DD6BA269FF38CA17D8B1 L_1 = V_0;
		LimitVelocityOverLifetimeModule_tC52CF1434E2639EE5D81DD6BA269FF38CA17D8B1 L_2 = L_1;
		RuntimeObject* L_3 = Box(LimitVelocityOverLifetimeModule_tC52CF1434E2639EE5D81DD6BA269FF38CA17D8B1_il2cpp_TypeInfo_var, &L_2);
		NullCheck((ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE*)__this);
		GenericVirtualActionInvoker2< ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518*, RuntimeObject* >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 0), (ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE*)__this, L_0, L_3);
		// return instance;
		LimitVelocityOverLifetimeModule_tC52CF1434E2639EE5D81DD6BA269FF38CA17D8B1 L_4 = V_0;
		LimitVelocityOverLifetimeModule_tC52CF1434E2639EE5D81DD6BA269FF38CA17D8B1 L_5 = L_4;
		RuntimeObject* L_6 = Box(LimitVelocityOverLifetimeModule_tC52CF1434E2639EE5D81DD6BA269FF38CA17D8B1_il2cpp_TypeInfo_var, &L_5);
		return L_6;
	}
}
// System.Object ES3Types.ES3Type_LimitVelocityOverLifetimeModule::Read<System.Int32Enum>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_LimitVelocityOverLifetimeModule_Read_TisInt32Enum_tCBAC8BA2BFF3A845FA599F303093BBBA374B6F0C_m017A5EEE291C25DF35FCCEC4C9928EAA5E21E795_gshared (ES3Type_LimitVelocityOverLifetimeModule_t0B3EB57F7FF7F9D1F6D99783CAB9DF9ADCEDE92B* __this, ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LimitVelocityOverLifetimeModule_tC52CF1434E2639EE5D81DD6BA269FF38CA17D8B1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	LimitVelocityOverLifetimeModule_tC52CF1434E2639EE5D81DD6BA269FF38CA17D8B1 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// var instance = new UnityEngine.ParticleSystem.LimitVelocityOverLifetimeModule();
		il2cpp_codegen_initobj((&V_0), sizeof(LimitVelocityOverLifetimeModule_tC52CF1434E2639EE5D81DD6BA269FF38CA17D8B1));
		// ReadInto<T>(reader, instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_0 = ___reader0;
		LimitVelocityOverLifetimeModule_tC52CF1434E2639EE5D81DD6BA269FF38CA17D8B1 L_1 = V_0;
		LimitVelocityOverLifetimeModule_tC52CF1434E2639EE5D81DD6BA269FF38CA17D8B1 L_2 = L_1;
		RuntimeObject* L_3 = Box(LimitVelocityOverLifetimeModule_tC52CF1434E2639EE5D81DD6BA269FF38CA17D8B1_il2cpp_TypeInfo_var, &L_2);
		NullCheck((ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE*)__this);
		GenericVirtualActionInvoker2< ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518*, RuntimeObject* >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 0), (ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE*)__this, L_0, L_3);
		// return instance;
		LimitVelocityOverLifetimeModule_tC52CF1434E2639EE5D81DD6BA269FF38CA17D8B1 L_4 = V_0;
		LimitVelocityOverLifetimeModule_tC52CF1434E2639EE5D81DD6BA269FF38CA17D8B1 L_5 = L_4;
		RuntimeObject* L_6 = Box(LimitVelocityOverLifetimeModule_tC52CF1434E2639EE5D81DD6BA269FF38CA17D8B1_il2cpp_TypeInfo_var, &L_5);
		return L_6;
	}
}
// System.Object ES3Types.ES3Type_LimitVelocityOverLifetimeModule::Read<System.Int64>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_LimitVelocityOverLifetimeModule_Read_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_m5481F4F862653D32AEF6F82149033419EBC2504D_gshared (ES3Type_LimitVelocityOverLifetimeModule_t0B3EB57F7FF7F9D1F6D99783CAB9DF9ADCEDE92B* __this, ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LimitVelocityOverLifetimeModule_tC52CF1434E2639EE5D81DD6BA269FF38CA17D8B1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	LimitVelocityOverLifetimeModule_tC52CF1434E2639EE5D81DD6BA269FF38CA17D8B1 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// var instance = new UnityEngine.ParticleSystem.LimitVelocityOverLifetimeModule();
		il2cpp_codegen_initobj((&V_0), sizeof(LimitVelocityOverLifetimeModule_tC52CF1434E2639EE5D81DD6BA269FF38CA17D8B1));
		// ReadInto<T>(reader, instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_0 = ___reader0;
		LimitVelocityOverLifetimeModule_tC52CF1434E2639EE5D81DD6BA269FF38CA17D8B1 L_1 = V_0;
		LimitVelocityOverLifetimeModule_tC52CF1434E2639EE5D81DD6BA269FF38CA17D8B1 L_2 = L_1;
		RuntimeObject* L_3 = Box(LimitVelocityOverLifetimeModule_tC52CF1434E2639EE5D81DD6BA269FF38CA17D8B1_il2cpp_TypeInfo_var, &L_2);
		NullCheck((ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE*)__this);
		GenericVirtualActionInvoker2< ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518*, RuntimeObject* >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 0), (ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE*)__this, L_0, L_3);
		// return instance;
		LimitVelocityOverLifetimeModule_tC52CF1434E2639EE5D81DD6BA269FF38CA17D8B1 L_4 = V_0;
		LimitVelocityOverLifetimeModule_tC52CF1434E2639EE5D81DD6BA269FF38CA17D8B1 L_5 = L_4;
		RuntimeObject* L_6 = Box(LimitVelocityOverLifetimeModule_tC52CF1434E2639EE5D81DD6BA269FF38CA17D8B1_il2cpp_TypeInfo_var, &L_5);
		return L_6;
	}
}
// System.Object ES3Types.ES3Type_LimitVelocityOverLifetimeModule::Read<UnityEngine.LayerMask>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_LimitVelocityOverLifetimeModule_Read_TisLayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB_m041F2970A4110B637B191FC6678FA3FC9D82D3B9_gshared (ES3Type_LimitVelocityOverLifetimeModule_t0B3EB57F7FF7F9D1F6D99783CAB9DF9ADCEDE92B* __this, ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LimitVelocityOverLifetimeModule_tC52CF1434E2639EE5D81DD6BA269FF38CA17D8B1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	LimitVelocityOverLifetimeModule_tC52CF1434E2639EE5D81DD6BA269FF38CA17D8B1 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// var instance = new UnityEngine.ParticleSystem.LimitVelocityOverLifetimeModule();
		il2cpp_codegen_initobj((&V_0), sizeof(LimitVelocityOverLifetimeModule_tC52CF1434E2639EE5D81DD6BA269FF38CA17D8B1));
		// ReadInto<T>(reader, instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_0 = ___reader0;
		LimitVelocityOverLifetimeModule_tC52CF1434E2639EE5D81DD6BA269FF38CA17D8B1 L_1 = V_0;
		LimitVelocityOverLifetimeModule_tC52CF1434E2639EE5D81DD6BA269FF38CA17D8B1 L_2 = L_1;
		RuntimeObject* L_3 = Box(LimitVelocityOverLifetimeModule_tC52CF1434E2639EE5D81DD6BA269FF38CA17D8B1_il2cpp_TypeInfo_var, &L_2);
		NullCheck((ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE*)__this);
		GenericVirtualActionInvoker2< ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518*, RuntimeObject* >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 0), (ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE*)__this, L_0, L_3);
		// return instance;
		LimitVelocityOverLifetimeModule_tC52CF1434E2639EE5D81DD6BA269FF38CA17D8B1 L_4 = V_0;
		LimitVelocityOverLifetimeModule_tC52CF1434E2639EE5D81DD6BA269FF38CA17D8B1 L_5 = L_4;
		RuntimeObject* L_6 = Box(LimitVelocityOverLifetimeModule_tC52CF1434E2639EE5D81DD6BA269FF38CA17D8B1_il2cpp_TypeInfo_var, &L_5);
		return L_6;
	}
}
// System.Object ES3Types.ES3Type_LimitVelocityOverLifetimeModule::Read<UnityEngine.Matrix4x4>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_LimitVelocityOverLifetimeModule_Read_TisMatrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6_m771E831A92E7CE9422706A8A044282644B535C82_gshared (ES3Type_LimitVelocityOverLifetimeModule_t0B3EB57F7FF7F9D1F6D99783CAB9DF9ADCEDE92B* __this, ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LimitVelocityOverLifetimeModule_tC52CF1434E2639EE5D81DD6BA269FF38CA17D8B1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	LimitVelocityOverLifetimeModule_tC52CF1434E2639EE5D81DD6BA269FF38CA17D8B1 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// var instance = new UnityEngine.ParticleSystem.LimitVelocityOverLifetimeModule();
		il2cpp_codegen_initobj((&V_0), sizeof(LimitVelocityOverLifetimeModule_tC52CF1434E2639EE5D81DD6BA269FF38CA17D8B1));
		// ReadInto<T>(reader, instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_0 = ___reader0;
		LimitVelocityOverLifetimeModule_tC52CF1434E2639EE5D81DD6BA269FF38CA17D8B1 L_1 = V_0;
		LimitVelocityOverLifetimeModule_tC52CF1434E2639EE5D81DD6BA269FF38CA17D8B1 L_2 = L_1;
		RuntimeObject* L_3 = Box(LimitVelocityOverLifetimeModule_tC52CF1434E2639EE5D81DD6BA269FF38CA17D8B1_il2cpp_TypeInfo_var, &L_2);
		NullCheck((ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE*)__this);
		GenericVirtualActionInvoker2< ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518*, RuntimeObject* >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 0), (ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE*)__this, L_0, L_3);
		// return instance;
		LimitVelocityOverLifetimeModule_tC52CF1434E2639EE5D81DD6BA269FF38CA17D8B1 L_4 = V_0;
		LimitVelocityOverLifetimeModule_tC52CF1434E2639EE5D81DD6BA269FF38CA17D8B1 L_5 = L_4;
		RuntimeObject* L_6 = Box(LimitVelocityOverLifetimeModule_tC52CF1434E2639EE5D81DD6BA269FF38CA17D8B1_il2cpp_TypeInfo_var, &L_5);
		return L_6;
	}
}
// System.Object ES3Types.ES3Type_LimitVelocityOverLifetimeModule::Read<System.Object>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_LimitVelocityOverLifetimeModule_Read_TisRuntimeObject_m2ADEEB671FF8E50534C2097C0773FEAF202FAD54_gshared (ES3Type_LimitVelocityOverLifetimeModule_t0B3EB57F7FF7F9D1F6D99783CAB9DF9ADCEDE92B* __this, ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LimitVelocityOverLifetimeModule_tC52CF1434E2639EE5D81DD6BA269FF38CA17D8B1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	LimitVelocityOverLifetimeModule_tC52CF1434E2639EE5D81DD6BA269FF38CA17D8B1 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// var instance = new UnityEngine.ParticleSystem.LimitVelocityOverLifetimeModule();
		il2cpp_codegen_initobj((&V_0), sizeof(LimitVelocityOverLifetimeModule_tC52CF1434E2639EE5D81DD6BA269FF38CA17D8B1));
		// ReadInto<T>(reader, instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_0 = ___reader0;
		LimitVelocityOverLifetimeModule_tC52CF1434E2639EE5D81DD6BA269FF38CA17D8B1 L_1 = V_0;
		LimitVelocityOverLifetimeModule_tC52CF1434E2639EE5D81DD6BA269FF38CA17D8B1 L_2 = L_1;
		RuntimeObject* L_3 = Box(LimitVelocityOverLifetimeModule_tC52CF1434E2639EE5D81DD6BA269FF38CA17D8B1_il2cpp_TypeInfo_var, &L_2);
		NullCheck((ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE*)__this);
		GenericVirtualActionInvoker2< ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518*, RuntimeObject* >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 0), (ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE*)__this, L_0, L_3);
		// return instance;
		LimitVelocityOverLifetimeModule_tC52CF1434E2639EE5D81DD6BA269FF38CA17D8B1 L_4 = V_0;
		LimitVelocityOverLifetimeModule_tC52CF1434E2639EE5D81DD6BA269FF38CA17D8B1 L_5 = L_4;
		RuntimeObject* L_6 = Box(LimitVelocityOverLifetimeModule_tC52CF1434E2639EE5D81DD6BA269FF38CA17D8B1_il2cpp_TypeInfo_var, &L_5);
		return L_6;
	}
}
// System.Object ES3Types.ES3Type_LimitVelocityOverLifetimeModule::Read<UnityEngine.Quaternion>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_LimitVelocityOverLifetimeModule_Read_TisQuaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_mB69EDD75680BDE8109FF5772AA82C592DC13F7AC_gshared (ES3Type_LimitVelocityOverLifetimeModule_t0B3EB57F7FF7F9D1F6D99783CAB9DF9ADCEDE92B* __this, ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LimitVelocityOverLifetimeModule_tC52CF1434E2639EE5D81DD6BA269FF38CA17D8B1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	LimitVelocityOverLifetimeModule_tC52CF1434E2639EE5D81DD6BA269FF38CA17D8B1 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// var instance = new UnityEngine.ParticleSystem.LimitVelocityOverLifetimeModule();
		il2cpp_codegen_initobj((&V_0), sizeof(LimitVelocityOverLifetimeModule_tC52CF1434E2639EE5D81DD6BA269FF38CA17D8B1));
		// ReadInto<T>(reader, instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_0 = ___reader0;
		LimitVelocityOverLifetimeModule_tC52CF1434E2639EE5D81DD6BA269FF38CA17D8B1 L_1 = V_0;
		LimitVelocityOverLifetimeModule_tC52CF1434E2639EE5D81DD6BA269FF38CA17D8B1 L_2 = L_1;
		RuntimeObject* L_3 = Box(LimitVelocityOverLifetimeModule_tC52CF1434E2639EE5D81DD6BA269FF38CA17D8B1_il2cpp_TypeInfo_var, &L_2);
		NullCheck((ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE*)__this);
		GenericVirtualActionInvoker2< ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518*, RuntimeObject* >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 0), (ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE*)__this, L_0, L_3);
		// return instance;
		LimitVelocityOverLifetimeModule_tC52CF1434E2639EE5D81DD6BA269FF38CA17D8B1 L_4 = V_0;
		LimitVelocityOverLifetimeModule_tC52CF1434E2639EE5D81DD6BA269FF38CA17D8B1 L_5 = L_4;
		RuntimeObject* L_6 = Box(LimitVelocityOverLifetimeModule_tC52CF1434E2639EE5D81DD6BA269FF38CA17D8B1_il2cpp_TypeInfo_var, &L_5);
		return L_6;
	}
}
// System.Object ES3Types.ES3Type_LimitVelocityOverLifetimeModule::Read<UnityEngine.Rect>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_LimitVelocityOverLifetimeModule_Read_TisRect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D_m09264060121A6390A2944328442D88A2FA73AE6F_gshared (ES3Type_LimitVelocityOverLifetimeModule_t0B3EB57F7FF7F9D1F6D99783CAB9DF9ADCEDE92B* __this, ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LimitVelocityOverLifetimeModule_tC52CF1434E2639EE5D81DD6BA269FF38CA17D8B1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	LimitVelocityOverLifetimeModule_tC52CF1434E2639EE5D81DD6BA269FF38CA17D8B1 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// var instance = new UnityEngine.ParticleSystem.LimitVelocityOverLifetimeModule();
		il2cpp_codegen_initobj((&V_0), sizeof(LimitVelocityOverLifetimeModule_tC52CF1434E2639EE5D81DD6BA269FF38CA17D8B1));
		// ReadInto<T>(reader, instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_0 = ___reader0;
		LimitVelocityOverLifetimeModule_tC52CF1434E2639EE5D81DD6BA269FF38CA17D8B1 L_1 = V_0;
		LimitVelocityOverLifetimeModule_tC52CF1434E2639EE5D81DD6BA269FF38CA17D8B1 L_2 = L_1;
		RuntimeObject* L_3 = Box(LimitVelocityOverLifetimeModule_tC52CF1434E2639EE5D81DD6BA269FF38CA17D8B1_il2cpp_TypeInfo_var, &L_2);
		NullCheck((ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE*)__this);
		GenericVirtualActionInvoker2< ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518*, RuntimeObject* >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 0), (ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE*)__this, L_0, L_3);
		// return instance;
		LimitVelocityOverLifetimeModule_tC52CF1434E2639EE5D81DD6BA269FF38CA17D8B1 L_4 = V_0;
		LimitVelocityOverLifetimeModule_tC52CF1434E2639EE5D81DD6BA269FF38CA17D8B1 L_5 = L_4;
		RuntimeObject* L_6 = Box(LimitVelocityOverLifetimeModule_tC52CF1434E2639EE5D81DD6BA269FF38CA17D8B1_il2cpp_TypeInfo_var, &L_5);
		return L_6;
	}
}
// System.Object ES3Types.ES3Type_LimitVelocityOverLifetimeModule::Read<UnityEngine.RenderTextureDescriptor>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_LimitVelocityOverLifetimeModule_Read_TisRenderTextureDescriptor_t69845881CE6437E4E61F92074F2F84079F23FA46_m497E425161703A4C6E412C4AC857F3846F101B5A_gshared (ES3Type_LimitVelocityOverLifetimeModule_t0B3EB57F7FF7F9D1F6D99783CAB9DF9ADCEDE92B* __this, ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LimitVelocityOverLifetimeModule_tC52CF1434E2639EE5D81DD6BA269FF38CA17D8B1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	LimitVelocityOverLifetimeModule_tC52CF1434E2639EE5D81DD6BA269FF38CA17D8B1 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// var instance = new UnityEngine.ParticleSystem.LimitVelocityOverLifetimeModule();
		il2cpp_codegen_initobj((&V_0), sizeof(LimitVelocityOverLifetimeModule_tC52CF1434E2639EE5D81DD6BA269FF38CA17D8B1));
		// ReadInto<T>(reader, instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_0 = ___reader0;
		LimitVelocityOverLifetimeModule_tC52CF1434E2639EE5D81DD6BA269FF38CA17D8B1 L_1 = V_0;
		LimitVelocityOverLifetimeModule_tC52CF1434E2639EE5D81DD6BA269FF38CA17D8B1 L_2 = L_1;
		RuntimeObject* L_3 = Box(LimitVelocityOverLifetimeModule_tC52CF1434E2639EE5D81DD6BA269FF38CA17D8B1_il2cpp_TypeInfo_var, &L_2);
		NullCheck((ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE*)__this);
		GenericVirtualActionInvoker2< ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518*, RuntimeObject* >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 0), (ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE*)__this, L_0, L_3);
		// return instance;
		LimitVelocityOverLifetimeModule_tC52CF1434E2639EE5D81DD6BA269FF38CA17D8B1 L_4 = V_0;
		LimitVelocityOverLifetimeModule_tC52CF1434E2639EE5D81DD6BA269FF38CA17D8B1 L_5 = L_4;
		RuntimeObject* L_6 = Box(LimitVelocityOverLifetimeModule_tC52CF1434E2639EE5D81DD6BA269FF38CA17D8B1_il2cpp_TypeInfo_var, &L_5);
		return L_6;
	}
}
// System.Object ES3Types.ES3Type_LimitVelocityOverLifetimeModule::Read<System.Single>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_LimitVelocityOverLifetimeModule_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mBF81DEE46D6CB8D5D0ABB1457276222F496D56D9_gshared (ES3Type_LimitVelocityOverLifetimeModule_t0B3EB57F7FF7F9D1F6D99783CAB9DF9ADCEDE92B* __this, ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LimitVelocityOverLifetimeModule_tC52CF1434E2639EE5D81DD6BA269FF38CA17D8B1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	LimitVelocityOverLifetimeModule_tC52CF1434E2639EE5D81DD6BA269FF38CA17D8B1 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// var instance = new UnityEngine.ParticleSystem.LimitVelocityOverLifetimeModule();
		il2cpp_codegen_initobj((&V_0), sizeof(LimitVelocityOverLifetimeModule_tC52CF1434E2639EE5D81DD6BA269FF38CA17D8B1));
		// ReadInto<T>(reader, instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_0 = ___reader0;
		LimitVelocityOverLifetimeModule_tC52CF1434E2639EE5D81DD6BA269FF38CA17D8B1 L_1 = V_0;
		LimitVelocityOverLifetimeModule_tC52CF1434E2639EE5D81DD6BA269FF38CA17D8B1 L_2 = L_1;
		RuntimeObject* L_3 = Box(LimitVelocityOverLifetimeModule_tC52CF1434E2639EE5D81DD6BA269FF38CA17D8B1_il2cpp_TypeInfo_var, &L_2);
		NullCheck((ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE*)__this);
		GenericVirtualActionInvoker2< ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518*, RuntimeObject* >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 0), (ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE*)__this, L_0, L_3);
		// return instance;
		LimitVelocityOverLifetimeModule_tC52CF1434E2639EE5D81DD6BA269FF38CA17D8B1 L_4 = V_0;
		LimitVelocityOverLifetimeModule_tC52CF1434E2639EE5D81DD6BA269FF38CA17D8B1 L_5 = L_4;
		RuntimeObject* L_6 = Box(LimitVelocityOverLifetimeModule_tC52CF1434E2639EE5D81DD6BA269FF38CA17D8B1_il2cpp_TypeInfo_var, &L_5);
		return L_6;
	}
}
// System.Object ES3Types.ES3Type_LimitVelocityOverLifetimeModule::Read<UnityEngine.Vector2>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_LimitVelocityOverLifetimeModule_Read_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_mB417CA670FC6496C7BAAABB3F6C950ADA20BDA8C_gshared (ES3Type_LimitVelocityOverLifetimeModule_t0B3EB57F7FF7F9D1F6D99783CAB9DF9ADCEDE92B* __this, ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LimitVelocityOverLifetimeModule_tC52CF1434E2639EE5D81DD6BA269FF38CA17D8B1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	LimitVelocityOverLifetimeModule_tC52CF1434E2639EE5D81DD6BA269FF38CA17D8B1 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// var instance = new UnityEngine.ParticleSystem.LimitVelocityOverLifetimeModule();
		il2cpp_codegen_initobj((&V_0), sizeof(LimitVelocityOverLifetimeModule_tC52CF1434E2639EE5D81DD6BA269FF38CA17D8B1));
		// ReadInto<T>(reader, instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_0 = ___reader0;
		LimitVelocityOverLifetimeModule_tC52CF1434E2639EE5D81DD6BA269FF38CA17D8B1 L_1 = V_0;
		LimitVelocityOverLifetimeModule_tC52CF1434E2639EE5D81DD6BA269FF38CA17D8B1 L_2 = L_1;
		RuntimeObject* L_3 = Box(LimitVelocityOverLifetimeModule_tC52CF1434E2639EE5D81DD6BA269FF38CA17D8B1_il2cpp_TypeInfo_var, &L_2);
		NullCheck((ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE*)__this);
		GenericVirtualActionInvoker2< ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518*, RuntimeObject* >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 0), (ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE*)__this, L_0, L_3);
		// return instance;
		LimitVelocityOverLifetimeModule_tC52CF1434E2639EE5D81DD6BA269FF38CA17D8B1 L_4 = V_0;
		LimitVelocityOverLifetimeModule_tC52CF1434E2639EE5D81DD6BA269FF38CA17D8B1 L_5 = L_4;
		RuntimeObject* L_6 = Box(LimitVelocityOverLifetimeModule_tC52CF1434E2639EE5D81DD6BA269FF38CA17D8B1_il2cpp_TypeInfo_var, &L_5);
		return L_6;
	}
}
// System.Object ES3Types.ES3Type_LimitVelocityOverLifetimeModule::Read<UnityEngine.Vector3>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_LimitVelocityOverLifetimeModule_Read_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_m68A79B1C71380CAE5C60FE4BB4AA80F8C8DB4F97_gshared (ES3Type_LimitVelocityOverLifetimeModule_t0B3EB57F7FF7F9D1F6D99783CAB9DF9ADCEDE92B* __this, ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LimitVelocityOverLifetimeModule_tC52CF1434E2639EE5D81DD6BA269FF38CA17D8B1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	LimitVelocityOverLifetimeModule_tC52CF1434E2639EE5D81DD6BA269FF38CA17D8B1 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// var instance = new UnityEngine.ParticleSystem.LimitVelocityOverLifetimeModule();
		il2cpp_codegen_initobj((&V_0), sizeof(LimitVelocityOverLifetimeModule_tC52CF1434E2639EE5D81DD6BA269FF38CA17D8B1));
		// ReadInto<T>(reader, instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_0 = ___reader0;
		LimitVelocityOverLifetimeModule_tC52CF1434E2639EE5D81DD6BA269FF38CA17D8B1 L_1 = V_0;
		LimitVelocityOverLifetimeModule_tC52CF1434E2639EE5D81DD6BA269FF38CA17D8B1 L_2 = L_1;
		RuntimeObject* L_3 = Box(LimitVelocityOverLifetimeModule_tC52CF1434E2639EE5D81DD6BA269FF38CA17D8B1_il2cpp_TypeInfo_var, &L_2);
		NullCheck((ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE*)__this);
		GenericVirtualActionInvoker2< ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518*, RuntimeObject* >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 0), (ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE*)__this, L_0, L_3);
		// return instance;
		LimitVelocityOverLifetimeModule_tC52CF1434E2639EE5D81DD6BA269FF38CA17D8B1 L_4 = V_0;
		LimitVelocityOverLifetimeModule_tC52CF1434E2639EE5D81DD6BA269FF38CA17D8B1 L_5 = L_4;
		RuntimeObject* L_6 = Box(LimitVelocityOverLifetimeModule_tC52CF1434E2639EE5D81DD6BA269FF38CA17D8B1_il2cpp_TypeInfo_var, &L_5);
		return L_6;
	}
}
// System.Object ES3Types.ES3Type_LimitVelocityOverLifetimeModule::Read<UnityEngine.Vector4>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_LimitVelocityOverLifetimeModule_Read_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_mF80DDE6E8AEF90198D4DA2272F91456F94A8655B_gshared (ES3Type_LimitVelocityOverLifetimeModule_t0B3EB57F7FF7F9D1F6D99783CAB9DF9ADCEDE92B* __this, ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LimitVelocityOverLifetimeModule_tC52CF1434E2639EE5D81DD6BA269FF38CA17D8B1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	LimitVelocityOverLifetimeModule_tC52CF1434E2639EE5D81DD6BA269FF38CA17D8B1 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// var instance = new UnityEngine.ParticleSystem.LimitVelocityOverLifetimeModule();
		il2cpp_codegen_initobj((&V_0), sizeof(LimitVelocityOverLifetimeModule_tC52CF1434E2639EE5D81DD6BA269FF38CA17D8B1));
		// ReadInto<T>(reader, instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_0 = ___reader0;
		LimitVelocityOverLifetimeModule_tC52CF1434E2639EE5D81DD6BA269FF38CA17D8B1 L_1 = V_0;
		LimitVelocityOverLifetimeModule_tC52CF1434E2639EE5D81DD6BA269FF38CA17D8B1 L_2 = L_1;
		RuntimeObject* L_3 = Box(LimitVelocityOverLifetimeModule_tC52CF1434E2639EE5D81DD6BA269FF38CA17D8B1_il2cpp_TypeInfo_var, &L_2);
		NullCheck((ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE*)__this);
		GenericVirtualActionInvoker2< ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518*, RuntimeObject* >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 0), (ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE*)__this, L_0, L_3);
		// return instance;
		LimitVelocityOverLifetimeModule_tC52CF1434E2639EE5D81DD6BA269FF38CA17D8B1 L_4 = V_0;
		LimitVelocityOverLifetimeModule_tC52CF1434E2639EE5D81DD6BA269FF38CA17D8B1 L_5 = L_4;
		RuntimeObject* L_6 = Box(LimitVelocityOverLifetimeModule_tC52CF1434E2639EE5D81DD6BA269FF38CA17D8B1_il2cpp_TypeInfo_var, &L_5);
		return L_6;
	}
}
// System.Object ES3Types.ES3Type_LimitVelocityOverLifetimeModule::Read<UnityEngine.ParticleSystem/MinMaxCurve>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_LimitVelocityOverLifetimeModule_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_m2E27FF8ADD65987AFBE0FAEA5F2F508F795E9DA2_gshared (ES3Type_LimitVelocityOverLifetimeModule_t0B3EB57F7FF7F9D1F6D99783CAB9DF9ADCEDE92B* __this, ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LimitVelocityOverLifetimeModule_tC52CF1434E2639EE5D81DD6BA269FF38CA17D8B1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	LimitVelocityOverLifetimeModule_tC52CF1434E2639EE5D81DD6BA269FF38CA17D8B1 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// var instance = new UnityEngine.ParticleSystem.LimitVelocityOverLifetimeModule();
		il2cpp_codegen_initobj((&V_0), sizeof(LimitVelocityOverLifetimeModule_tC52CF1434E2639EE5D81DD6BA269FF38CA17D8B1));
		// ReadInto<T>(reader, instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_0 = ___reader0;
		LimitVelocityOverLifetimeModule_tC52CF1434E2639EE5D81DD6BA269FF38CA17D8B1 L_1 = V_0;
		LimitVelocityOverLifetimeModule_tC52CF1434E2639EE5D81DD6BA269FF38CA17D8B1 L_2 = L_1;
		RuntimeObject* L_3 = Box(LimitVelocityOverLifetimeModule_tC52CF1434E2639EE5D81DD6BA269FF38CA17D8B1_il2cpp_TypeInfo_var, &L_2);
		NullCheck((ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE*)__this);
		GenericVirtualActionInvoker2< ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518*, RuntimeObject* >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 0), (ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE*)__this, L_0, L_3);
		// return instance;
		LimitVelocityOverLifetimeModule_tC52CF1434E2639EE5D81DD6BA269FF38CA17D8B1 L_4 = V_0;
		LimitVelocityOverLifetimeModule_tC52CF1434E2639EE5D81DD6BA269FF38CA17D8B1 L_5 = L_4;
		RuntimeObject* L_6 = Box(LimitVelocityOverLifetimeModule_tC52CF1434E2639EE5D81DD6BA269FF38CA17D8B1_il2cpp_TypeInfo_var, &L_5);
		return L_6;
	}
}
// System.Object ES3Types.ES3Type_LimitVelocityOverLifetimeModule::Read<UnityEngine.ParticleSystem/MinMaxGradient>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_LimitVelocityOverLifetimeModule_Read_TisMinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69_m33D27582816A27A2C055847E3B1EB1F2AAD684E2_gshared (ES3Type_LimitVelocityOverLifetimeModule_t0B3EB57F7FF7F9D1F6D99783CAB9DF9ADCEDE92B* __this, ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LimitVelocityOverLifetimeModule_tC52CF1434E2639EE5D81DD6BA269FF38CA17D8B1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	LimitVelocityOverLifetimeModule_tC52CF1434E2639EE5D81DD6BA269FF38CA17D8B1 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// var instance = new UnityEngine.ParticleSystem.LimitVelocityOverLifetimeModule();
		il2cpp_codegen_initobj((&V_0), sizeof(LimitVelocityOverLifetimeModule_tC52CF1434E2639EE5D81DD6BA269FF38CA17D8B1));
		// ReadInto<T>(reader, instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_0 = ___reader0;
		LimitVelocityOverLifetimeModule_tC52CF1434E2639EE5D81DD6BA269FF38CA17D8B1 L_1 = V_0;
		LimitVelocityOverLifetimeModule_tC52CF1434E2639EE5D81DD6BA269FF38CA17D8B1 L_2 = L_1;
		RuntimeObject* L_3 = Box(LimitVelocityOverLifetimeModule_tC52CF1434E2639EE5D81DD6BA269FF38CA17D8B1_il2cpp_TypeInfo_var, &L_2);
		NullCheck((ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE*)__this);
		GenericVirtualActionInvoker2< ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518*, RuntimeObject* >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 0), (ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE*)__this, L_0, L_3);
		// return instance;
		LimitVelocityOverLifetimeModule_tC52CF1434E2639EE5D81DD6BA269FF38CA17D8B1 L_4 = V_0;
		LimitVelocityOverLifetimeModule_tC52CF1434E2639EE5D81DD6BA269FF38CA17D8B1 L_5 = L_4;
		RuntimeObject* L_6 = Box(LimitVelocityOverLifetimeModule_tC52CF1434E2639EE5D81DD6BA269FF38CA17D8B1_il2cpp_TypeInfo_var, &L_5);
		return L_6;
	}
}
// System.Void ES3Types.ES3Type_LimitVelocityOverLifetimeModule::ReadInto<System.Object>(ES3Reader,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ES3Type_LimitVelocityOverLifetimeModule_ReadInto_TisRuntimeObject_mBC87ECFA1024E470E73E45C87A617AA6F2AAB87E_gshared (ES3Type_LimitVelocityOverLifetimeModule_t0B3EB57F7FF7F9D1F6D99783CAB9DF9ADCEDE92B* __this, ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* ___reader0, RuntimeObject* ___obj1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mFFB70EE53D8CD0255A4E599780F62A3EB1520E83_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_m9D6B4042B923127DEA4A2CAA3E35EED37D75B3D0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisParticleSystemSimulationSpace_tB3693D8A3C0FCE63D060546071006AC4ABC60B05_mE28AF5CD31B164FD849D4D05A9C6E60F95D67243_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mA86928BC888E342D2C2644535E3399952F5077ED_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_MinMaxCurve_t1C147718750ACBECE5D2B7F545D2A434A3C5409B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LimitVelocityOverLifetimeModule_tC52CF1434E2639EE5D81DD6BA269FF38CA17D8B1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0EA7F3FF9751D1C0670732BE07C84116AD963E2D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0FC0575E5B3BFD69FE0E6DACB4257E1AB52484B5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1B024D537329B86AB0DF96B2A714180F442F53E9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral21CEBAC0172EB4FB67A8A2698C7F35355100D5F7);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral46FADEB9E998225AA96BA7F96F3C6FE519B52F62);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral60D92E37F6F99139C65CA6248F17911C762F4DD6);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral744761D527F44F04E435DEFCA1E21E179B60B0E4);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA3C8F2A441D7C8A8A2D967375934EFA74D7FE1E8);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD18A8AB8F50A606429410D3C3F543B352E7D6033);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE0F9D9926B214819D0D0E8B1814BCF46C90D0956);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE1291C4D47635E327ECFE39842BD1A93F58C61A2);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B);
		s_Il2CppMethodInitialized = true;
	}
	LimitVelocityOverLifetimeModule_tC52CF1434E2639EE5D81DD6BA269FF38CA17D8B1 V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	uint32_t V_2 = 0;
	{
		// var instance = (UnityEngine.ParticleSystem.LimitVelocityOverLifetimeModule)obj;
		RuntimeObject* L_0 = ___obj1;
		V_0 = ((*(LimitVelocityOverLifetimeModule_tC52CF1434E2639EE5D81DD6BA269FF38CA17D8B1*)((LimitVelocityOverLifetimeModule_tC52CF1434E2639EE5D81DD6BA269FF38CA17D8B1*)(LimitVelocityOverLifetimeModule_tC52CF1434E2639EE5D81DD6BA269FF38CA17D8B1*)UnBox(L_0, LimitVelocityOverLifetimeModule_tC52CF1434E2639EE5D81DD6BA269FF38CA17D8B1_il2cpp_TypeInfo_var))));
		goto IL_02b9;
	}

IL_000c:
	{
		String_t* L_1 = V_1;
		uint32_t L_2;
		L_2 = U3CPrivateImplementationDetailsU3E_ComputeStringHash_m6EA1F233618497AEFF8902A5EDFA24C74E2F2876(L_1, NULL);
		V_2 = L_2;
		uint32_t L_3 = V_2;
		if ((!(((uint32_t)L_3) <= ((uint32_t)((int32_t)1319695307)))))
		{
			goto IL_006f;
		}
	}
	{
		uint32_t L_4 = V_2;
		if ((!(((uint32_t)L_4) <= ((uint32_t)((int32_t)691593499)))))
		{
			goto IL_0049;
		}
	}
	{
		uint32_t L_5 = V_2;
		if ((((int32_t)L_5) == ((int32_t)((int32_t)49525662))))
		{
			goto IL_00bd;
		}
	}
	{
		uint32_t L_6 = V_2;
		if ((((int32_t)L_6) == ((int32_t)((int32_t)572581548))))
		{
			goto IL_0111;
		}
	}
	{
		uint32_t L_7 = V_2;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)691593499))))
		{
			goto IL_00e7;
		}
	}
	{
		goto IL_02b3;
	}

IL_0049:
	{
		uint32_t L_8 = V_2;
		if ((((int32_t)L_8) == ((int32_t)((int32_t)853203252))))
		{
			goto IL_0150;
		}
	}
	{
		uint32_t L_9 = V_2;
		if ((((int32_t)L_9) == ((int32_t)((int32_t)894689925))))
		{
			goto IL_01a4;
		}
	}
	{
		uint32_t L_10 = V_2;
		if ((((int32_t)L_10) == ((int32_t)((int32_t)1319695307))))
		{
			goto IL_0165;
		}
	}
	{
		goto IL_02b3;
	}

IL_006f:
	{
		uint32_t L_11 = V_2;
		if ((!(((uint32_t)L_11) <= ((uint32_t)((int32_t)2072266391)))))
		{
			goto IL_0097;
		}
	}
	{
		uint32_t L_12 = V_2;
		if ((((int32_t)L_12) == ((int32_t)((int32_t)1479031685))))
		{
			goto IL_018f;
		}
	}
	{
		uint32_t L_13 = V_2;
		if ((((int32_t)L_13) == ((int32_t)((int32_t)2055488772))))
		{
			goto IL_00d2;
		}
	}
	{
		uint32_t L_14 = V_2;
		if ((((int32_t)L_14) == ((int32_t)((int32_t)2072266391))))
		{
			goto IL_00fc;
		}
	}
	{
		goto IL_02b3;
	}

IL_0097:
	{
		uint32_t L_15 = V_2;
		if ((((int32_t)L_15) == ((int32_t)((int32_t)2089044010))))
		{
			goto IL_0126;
		}
	}
	{
		uint32_t L_16 = V_2;
		if ((((int32_t)L_16) == ((int32_t)((int32_t)-1976734835))))
		{
			goto IL_013b;
		}
	}
	{
		uint32_t L_17 = V_2;
		if ((((int32_t)L_17) == ((int32_t)((int32_t)-1124873996))))
		{
			goto IL_017a;
		}
	}
	{
		goto IL_02b3;
	}

IL_00bd:
	{
		String_t* L_18 = V_1;
		bool L_19;
		L_19 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_18, _stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B, NULL);
		if (L_19)
		{
			goto IL_01b9;
		}
	}
	{
		goto IL_02b3;
	}

IL_00d2:
	{
		String_t* L_20 = V_1;
		bool L_21;
		L_21 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_20, _stringLiteral46FADEB9E998225AA96BA7F96F3C6FE519B52F62, NULL);
		if (L_21)
		{
			goto IL_01d0;
		}
	}
	{
		goto IL_02b3;
	}

IL_00e7:
	{
		String_t* L_22 = V_1;
		bool L_23;
		L_23 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_22, _stringLiteral744761D527F44F04E435DEFCA1E21E179B60B0E4, NULL);
		if (L_23)
		{
			goto IL_01e7;
		}
	}
	{
		goto IL_02b3;
	}

IL_00fc:
	{
		String_t* L_24 = V_1;
		bool L_25;
		L_25 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_24, _stringLiteral60D92E37F6F99139C65CA6248F17911C762F4DD6, NULL);
		if (L_25)
		{
			goto IL_01fe;
		}
	}
	{
		goto IL_02b3;
	}

IL_0111:
	{
		String_t* L_26 = V_1;
		bool L_27;
		L_27 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_26, _stringLiteral0FC0575E5B3BFD69FE0E6DACB4257E1AB52484B5, NULL);
		if (L_27)
		{
			goto IL_0215;
		}
	}
	{
		goto IL_02b3;
	}

IL_0126:
	{
		String_t* L_28 = V_1;
		bool L_29;
		L_29 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_28, _stringLiteralD18A8AB8F50A606429410D3C3F543B352E7D6033, NULL);
		if (L_29)
		{
			goto IL_022c;
		}
	}
	{
		goto IL_02b3;
	}

IL_013b:
	{
		String_t* L_30 = V_1;
		bool L_31;
		L_31 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_30, _stringLiteral21CEBAC0172EB4FB67A8A2698C7F35355100D5F7, NULL);
		if (L_31)
		{
			goto IL_0240;
		}
	}
	{
		goto IL_02b3;
	}

IL_0150:
	{
		String_t* L_32 = V_1;
		bool L_33;
		L_33 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_32, _stringLiteralA3C8F2A441D7C8A8A2D967375934EFA74D7FE1E8, NULL);
		if (L_33)
		{
			goto IL_0254;
		}
	}
	{
		goto IL_02b3;
	}

IL_0165:
	{
		String_t* L_34 = V_1;
		bool L_35;
		L_35 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_34, _stringLiteralE0F9D9926B214819D0D0E8B1814BCF46C90D0956, NULL);
		if (L_35)
		{
			goto IL_0268;
		}
	}
	{
		goto IL_02b3;
	}

IL_017a:
	{
		String_t* L_36 = V_1;
		bool L_37;
		L_37 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_36, _stringLiteral0EA7F3FF9751D1C0670732BE07C84116AD963E2D, NULL);
		if (L_37)
		{
			goto IL_027c;
		}
	}
	{
		goto IL_02b3;
	}

IL_018f:
	{
		String_t* L_38 = V_1;
		bool L_39;
		L_39 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_38, _stringLiteral1B024D537329B86AB0DF96B2A714180F442F53E9, NULL);
		if (L_39)
		{
			goto IL_0290;
		}
	}
	{
		goto IL_02b3;
	}

IL_01a4:
	{
		String_t* L_40 = V_1;
		bool L_41;
		L_41 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_40, _stringLiteralE1291C4D47635E327ECFE39842BD1A93F58C61A2, NULL);
		if (L_41)
		{
			goto IL_02a4;
		}
	}
	{
		goto IL_02b3;
	}

IL_01b9:
	{
		// instance.enabled = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_42 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_43 = ((ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_42);
		bool L_44;
		L_44 = GenericVirtualFuncInvoker1< bool, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mFFB70EE53D8CD0255A4E599780F62A3EB1520E83_RuntimeMethod_var, L_42, L_43);
		LimitVelocityOverLifetimeModule_set_enabled_m0C4AC7078A4009C764CDD6C852747161626030F8((&V_0), L_44, NULL);
		// break;
		goto IL_02b9;
	}

IL_01d0:
	{
		// instance.limitX = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_45 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_46 = ((ES3Type_MinMaxCurve_t1C147718750ACBECE5D2B7F545D2A434A3C5409B_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t1C147718750ACBECE5D2B7F545D2A434A3C5409B_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_45);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_47;
		L_47 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_m9D6B4042B923127DEA4A2CAA3E35EED37D75B3D0_RuntimeMethod_var, L_45, L_46);
		LimitVelocityOverLifetimeModule_set_limitX_m453163A173E91BD1FA92A85FFFB1377922264E88((&V_0), L_47, NULL);
		// break;
		goto IL_02b9;
	}

IL_01e7:
	{
		// instance.limitXMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_48 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_49 = ((ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_48);
		float L_50;
		L_50 = GenericVirtualFuncInvoker1< float, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mA86928BC888E342D2C2644535E3399952F5077ED_RuntimeMethod_var, L_48, L_49);
		LimitVelocityOverLifetimeModule_set_limitXMultiplier_m69A35DBE2A96DB94E1C5857C1AEA7700F315FB69((&V_0), L_50, NULL);
		// break;
		goto IL_02b9;
	}

IL_01fe:
	{
		// instance.limitY = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_51 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_52 = ((ES3Type_MinMaxCurve_t1C147718750ACBECE5D2B7F545D2A434A3C5409B_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t1C147718750ACBECE5D2B7F545D2A434A3C5409B_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_51);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_53;
		L_53 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_m9D6B4042B923127DEA4A2CAA3E35EED37D75B3D0_RuntimeMethod_var, L_51, L_52);
		LimitVelocityOverLifetimeModule_set_limitY_m5C4FA3E4199843D17B358EAE552BC1530944C6ED((&V_0), L_53, NULL);
		// break;
		goto IL_02b9;
	}

IL_0215:
	{
		// instance.limitYMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_54 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_55 = ((ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_54);
		float L_56;
		L_56 = GenericVirtualFuncInvoker1< float, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mA86928BC888E342D2C2644535E3399952F5077ED_RuntimeMethod_var, L_54, L_55);
		LimitVelocityOverLifetimeModule_set_limitYMultiplier_mCB16226776AA3FD95FCBFEF08939CDFCDEAD1FD7((&V_0), L_56, NULL);
		// break;
		goto IL_02b9;
	}

IL_022c:
	{
		// instance.limitZ = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_57 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_58 = ((ES3Type_MinMaxCurve_t1C147718750ACBECE5D2B7F545D2A434A3C5409B_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t1C147718750ACBECE5D2B7F545D2A434A3C5409B_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_57);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_59;
		L_59 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_m9D6B4042B923127DEA4A2CAA3E35EED37D75B3D0_RuntimeMethod_var, L_57, L_58);
		LimitVelocityOverLifetimeModule_set_limitZ_mA7AA3F6C6EB9C1E2199DE5EDBFDFCD891E66A06C((&V_0), L_59, NULL);
		// break;
		goto IL_02b9;
	}

IL_0240:
	{
		// instance.limitZMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_60 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_61 = ((ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_60);
		float L_62;
		L_62 = GenericVirtualFuncInvoker1< float, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mA86928BC888E342D2C2644535E3399952F5077ED_RuntimeMethod_var, L_60, L_61);
		LimitVelocityOverLifetimeModule_set_limitZMultiplier_mF8318B3E8798E9778CD356C773A9567EBCC414DF((&V_0), L_62, NULL);
		// break;
		goto IL_02b9;
	}

IL_0254:
	{
		// instance.limit = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_63 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_64 = ((ES3Type_MinMaxCurve_t1C147718750ACBECE5D2B7F545D2A434A3C5409B_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t1C147718750ACBECE5D2B7F545D2A434A3C5409B_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_63);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_65;
		L_65 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_m9D6B4042B923127DEA4A2CAA3E35EED37D75B3D0_RuntimeMethod_var, L_63, L_64);
		LimitVelocityOverLifetimeModule_set_limit_m4714D5E0B04EAE01A49552690E9CC206AC5C7685((&V_0), L_65, NULL);
		// break;
		goto IL_02b9;
	}

IL_0268:
	{
		// instance.limitMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_66 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_67 = ((ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_66);
		float L_68;
		L_68 = GenericVirtualFuncInvoker1< float, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mA86928BC888E342D2C2644535E3399952F5077ED_RuntimeMethod_var, L_66, L_67);
		LimitVelocityOverLifetimeModule_set_limitMultiplier_m520C77C943C30BFE63EF0E4BEA9593D251187B28((&V_0), L_68, NULL);
		// break;
		goto IL_02b9;
	}

IL_027c:
	{
		// instance.dampen = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_69 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_70 = ((ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_69);
		float L_71;
		L_71 = GenericVirtualFuncInvoker1< float, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mA86928BC888E342D2C2644535E3399952F5077ED_RuntimeMethod_var, L_69, L_70);
		LimitVelocityOverLifetimeModule_set_dampen_mE8A893ECFE936519C3F68D440C3C6BD11065E288((&V_0), L_71, NULL);
		// break;
		goto IL_02b9;
	}

IL_0290:
	{
		// instance.separateAxes = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_72 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_73 = ((ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_72);
		bool L_74;
		L_74 = GenericVirtualFuncInvoker1< bool, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mFFB70EE53D8CD0255A4E599780F62A3EB1520E83_RuntimeMethod_var, L_72, L_73);
		LimitVelocityOverLifetimeModule_set_separateAxes_m3E1D0590D45FE0D6657D99685DA4E5A231229EF0((&V_0), L_74, NULL);
		// break;
		goto IL_02b9;
	}

IL_02a4:
	{
		// instance.space = reader.Read<UnityEngine.ParticleSystemSimulationSpace>();
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_75 = ___reader0;
		NullCheck(L_75);
		int32_t L_76;
		L_76 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisParticleSystemSimulationSpace_tB3693D8A3C0FCE63D060546071006AC4ABC60B05_mE28AF5CD31B164FD849D4D05A9C6E60F95D67243_RuntimeMethod_var, L_75);
		LimitVelocityOverLifetimeModule_set_space_m54D13D862FCB1606F37A3F053138437DEBF773D5((&V_0), L_76, NULL);
		// break;
		goto IL_02b9;
	}

IL_02b3:
	{
		// reader.Skip();
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_77 = ___reader0;
		NullCheck(L_77);
		VirtualActionInvoker0::Invoke(41 /* System.Void ES3Reader::Skip() */, L_77);
	}

IL_02b9:
	{
		// while((propertyName = reader.ReadPropertyName()) != null)
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_78 = ___reader0;
		NullCheck(L_78);
		String_t* L_79;
		L_79 = VirtualFuncInvoker0< String_t* >::Invoke(21 /* System.String ES3Reader::ReadPropertyName() */, L_78);
		String_t* L_80 = L_79;
		V_1 = L_80;
		if (L_80)
		{
			goto IL_000c;
		}
	}
	{
		// }
		return;
	}
}
// System.Void ES3Types.ES3Type_LimitVelocityOverLifetimeModule::ReadInto<UnityEngine.ParticleSystem/CollisionModule>(ES3Reader,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ES3Type_LimitVelocityOverLifetimeModule_ReadInto_TisCollisionModule_tEE4892D4872C2907164A66DC424F1CFA1D527083_m9258C61E98561A5BFA21827E90C1EED6D913274F_gshared (ES3Type_LimitVelocityOverLifetimeModule_t0B3EB57F7FF7F9D1F6D99783CAB9DF9ADCEDE92B* __this, ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* ___reader0, RuntimeObject* ___obj1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mFFB70EE53D8CD0255A4E599780F62A3EB1520E83_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_m9D6B4042B923127DEA4A2CAA3E35EED37D75B3D0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisParticleSystemSimulationSpace_tB3693D8A3C0FCE63D060546071006AC4ABC60B05_mE28AF5CD31B164FD849D4D05A9C6E60F95D67243_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mA86928BC888E342D2C2644535E3399952F5077ED_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_MinMaxCurve_t1C147718750ACBECE5D2B7F545D2A434A3C5409B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LimitVelocityOverLifetimeModule_tC52CF1434E2639EE5D81DD6BA269FF38CA17D8B1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0EA7F3FF9751D1C0670732BE07C84116AD963E2D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0FC0575E5B3BFD69FE0E6DACB4257E1AB52484B5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1B024D537329B86AB0DF96B2A714180F442F53E9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral21CEBAC0172EB4FB67A8A2698C7F35355100D5F7);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral46FADEB9E998225AA96BA7F96F3C6FE519B52F62);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral60D92E37F6F99139C65CA6248F17911C762F4DD6);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral744761D527F44F04E435DEFCA1E21E179B60B0E4);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA3C8F2A441D7C8A8A2D967375934EFA74D7FE1E8);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD18A8AB8F50A606429410D3C3F543B352E7D6033);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE0F9D9926B214819D0D0E8B1814BCF46C90D0956);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE1291C4D47635E327ECFE39842BD1A93F58C61A2);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B);
		s_Il2CppMethodInitialized = true;
	}
	LimitVelocityOverLifetimeModule_tC52CF1434E2639EE5D81DD6BA269FF38CA17D8B1 V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	uint32_t V_2 = 0;
	{
		// var instance = (UnityEngine.ParticleSystem.LimitVelocityOverLifetimeModule)obj;
		RuntimeObject* L_0 = ___obj1;
		V_0 = ((*(LimitVelocityOverLifetimeModule_tC52CF1434E2639EE5D81DD6BA269FF38CA17D8B1*)((LimitVelocityOverLifetimeModule_tC52CF1434E2639EE5D81DD6BA269FF38CA17D8B1*)(LimitVelocityOverLifetimeModule_tC52CF1434E2639EE5D81DD6BA269FF38CA17D8B1*)UnBox(L_0, LimitVelocityOverLifetimeModule_tC52CF1434E2639EE5D81DD6BA269FF38CA17D8B1_il2cpp_TypeInfo_var))));
		goto IL_02b9;
	}

IL_000c:
	{
		String_t* L_1 = V_1;
		uint32_t L_2;
		L_2 = U3CPrivateImplementationDetailsU3E_ComputeStringHash_m6EA1F233618497AEFF8902A5EDFA24C74E2F2876(L_1, NULL);
		V_2 = L_2;
		uint32_t L_3 = V_2;
		if ((!(((uint32_t)L_3) <= ((uint32_t)((int32_t)1319695307)))))
		{
			goto IL_006f;
		}
	}
	{
		uint32_t L_4 = V_2;
		if ((!(((uint32_t)L_4) <= ((uint32_t)((int32_t)691593499)))))
		{
			goto IL_0049;
		}
	}
	{
		uint32_t L_5 = V_2;
		if ((((int32_t)L_5) == ((int32_t)((int32_t)49525662))))
		{
			goto IL_00bd;
		}
	}
	{
		uint32_t L_6 = V_2;
		if ((((int32_t)L_6) == ((int32_t)((int32_t)572581548))))
		{
			goto IL_0111;
		}
	}
	{
		uint32_t L_7 = V_2;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)691593499))))
		{
			goto IL_00e7;
		}
	}
	{
		goto IL_02b3;
	}

IL_0049:
	{
		uint32_t L_8 = V_2;
		if ((((int32_t)L_8) == ((int32_t)((int32_t)853203252))))
		{
			goto IL_0150;
		}
	}
	{
		uint32_t L_9 = V_2;
		if ((((int32_t)L_9) == ((int32_t)((int32_t)894689925))))
		{
			goto IL_01a4;
		}
	}
	{
		uint32_t L_10 = V_2;
		if ((((int32_t)L_10) == ((int32_t)((int32_t)1319695307))))
		{
			goto IL_0165;
		}
	}
	{
		goto IL_02b3;
	}

IL_006f:
	{
		uint32_t L_11 = V_2;
		if ((!(((uint32_t)L_11) <= ((uint32_t)((int32_t)2072266391)))))
		{
			goto IL_0097;
		}
	}
	{
		uint32_t L_12 = V_2;
		if ((((int32_t)L_12) == ((int32_t)((int32_t)1479031685))))
		{
			goto IL_018f;
		}
	}
	{
		uint32_t L_13 = V_2;
		if ((((int32_t)L_13) == ((int32_t)((int32_t)2055488772))))
		{
			goto IL_00d2;
		}
	}
	{
		uint32_t L_14 = V_2;
		if ((((int32_t)L_14) == ((int32_t)((int32_t)2072266391))))
		{
			goto IL_00fc;
		}
	}
	{
		goto IL_02b3;
	}

IL_0097:
	{
		uint32_t L_15 = V_2;
		if ((((int32_t)L_15) == ((int32_t)((int32_t)2089044010))))
		{
			goto IL_0126;
		}
	}
	{
		uint32_t L_16 = V_2;
		if ((((int32_t)L_16) == ((int32_t)((int32_t)-1976734835))))
		{
			goto IL_013b;
		}
	}
	{
		uint32_t L_17 = V_2;
		if ((((int32_t)L_17) == ((int32_t)((int32_t)-1124873996))))
		{
			goto IL_017a;
		}
	}
	{
		goto IL_02b3;
	}

IL_00bd:
	{
		String_t* L_18 = V_1;
		bool L_19;
		L_19 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_18, _stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B, NULL);
		if (L_19)
		{
			goto IL_01b9;
		}
	}
	{
		goto IL_02b3;
	}

IL_00d2:
	{
		String_t* L_20 = V_1;
		bool L_21;
		L_21 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_20, _stringLiteral46FADEB9E998225AA96BA7F96F3C6FE519B52F62, NULL);
		if (L_21)
		{
			goto IL_01d0;
		}
	}
	{
		goto IL_02b3;
	}

IL_00e7:
	{
		String_t* L_22 = V_1;
		bool L_23;
		L_23 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_22, _stringLiteral744761D527F44F04E435DEFCA1E21E179B60B0E4, NULL);
		if (L_23)
		{
			goto IL_01e7;
		}
	}
	{
		goto IL_02b3;
	}

IL_00fc:
	{
		String_t* L_24 = V_1;
		bool L_25;
		L_25 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_24, _stringLiteral60D92E37F6F99139C65CA6248F17911C762F4DD6, NULL);
		if (L_25)
		{
			goto IL_01fe;
		}
	}
	{
		goto IL_02b3;
	}

IL_0111:
	{
		String_t* L_26 = V_1;
		bool L_27;
		L_27 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_26, _stringLiteral0FC0575E5B3BFD69FE0E6DACB4257E1AB52484B5, NULL);
		if (L_27)
		{
			goto IL_0215;
		}
	}
	{
		goto IL_02b3;
	}

IL_0126:
	{
		String_t* L_28 = V_1;
		bool L_29;
		L_29 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_28, _stringLiteralD18A8AB8F50A606429410D3C3F543B352E7D6033, NULL);
		if (L_29)
		{
			goto IL_022c;
		}
	}
	{
		goto IL_02b3;
	}

IL_013b:
	{
		String_t* L_30 = V_1;
		bool L_31;
		L_31 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_30, _stringLiteral21CEBAC0172EB4FB67A8A2698C7F35355100D5F7, NULL);
		if (L_31)
		{
			goto IL_0240;
		}
	}
	{
		goto IL_02b3;
	}

IL_0150:
	{
		String_t* L_32 = V_1;
		bool L_33;
		L_33 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_32, _stringLiteralA3C8F2A441D7C8A8A2D967375934EFA74D7FE1E8, NULL);
		if (L_33)
		{
			goto IL_0254;
		}
	}
	{
		goto IL_02b3;
	}

IL_0165:
	{
		String_t* L_34 = V_1;
		bool L_35;
		L_35 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_34, _stringLiteralE0F9D9926B214819D0D0E8B1814BCF46C90D0956, NULL);
		if (L_35)
		{
			goto IL_0268;
		}
	}
	{
		goto IL_02b3;
	}

IL_017a:
	{
		String_t* L_36 = V_1;
		bool L_37;
		L_37 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_36, _stringLiteral0EA7F3FF9751D1C0670732BE07C84116AD963E2D, NULL);
		if (L_37)
		{
			goto IL_027c;
		}
	}
	{
		goto IL_02b3;
	}

IL_018f:
	{
		String_t* L_38 = V_1;
		bool L_39;
		L_39 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_38, _stringLiteral1B024D537329B86AB0DF96B2A714180F442F53E9, NULL);
		if (L_39)
		{
			goto IL_0290;
		}
	}
	{
		goto IL_02b3;
	}

IL_01a4:
	{
		String_t* L_40 = V_1;
		bool L_41;
		L_41 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_40, _stringLiteralE1291C4D47635E327ECFE39842BD1A93F58C61A2, NULL);
		if (L_41)
		{
			goto IL_02a4;
		}
	}
	{
		goto IL_02b3;
	}

IL_01b9:
	{
		// instance.enabled = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_42 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_43 = ((ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_42);
		bool L_44;
		L_44 = GenericVirtualFuncInvoker1< bool, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mFFB70EE53D8CD0255A4E599780F62A3EB1520E83_RuntimeMethod_var, L_42, L_43);
		LimitVelocityOverLifetimeModule_set_enabled_m0C4AC7078A4009C764CDD6C852747161626030F8((&V_0), L_44, NULL);
		// break;
		goto IL_02b9;
	}

IL_01d0:
	{
		// instance.limitX = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_45 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_46 = ((ES3Type_MinMaxCurve_t1C147718750ACBECE5D2B7F545D2A434A3C5409B_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t1C147718750ACBECE5D2B7F545D2A434A3C5409B_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_45);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_47;
		L_47 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_m9D6B4042B923127DEA4A2CAA3E35EED37D75B3D0_RuntimeMethod_var, L_45, L_46);
		LimitVelocityOverLifetimeModule_set_limitX_m453163A173E91BD1FA92A85FFFB1377922264E88((&V_0), L_47, NULL);
		// break;
		goto IL_02b9;
	}

IL_01e7:
	{
		// instance.limitXMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_48 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_49 = ((ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_48);
		float L_50;
		L_50 = GenericVirtualFuncInvoker1< float, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mA86928BC888E342D2C2644535E3399952F5077ED_RuntimeMethod_var, L_48, L_49);
		LimitVelocityOverLifetimeModule_set_limitXMultiplier_m69A35DBE2A96DB94E1C5857C1AEA7700F315FB69((&V_0), L_50, NULL);
		// break;
		goto IL_02b9;
	}

IL_01fe:
	{
		// instance.limitY = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_51 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_52 = ((ES3Type_MinMaxCurve_t1C147718750ACBECE5D2B7F545D2A434A3C5409B_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t1C147718750ACBECE5D2B7F545D2A434A3C5409B_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_51);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_53;
		L_53 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_m9D6B4042B923127DEA4A2CAA3E35EED37D75B3D0_RuntimeMethod_var, L_51, L_52);
		LimitVelocityOverLifetimeModule_set_limitY_m5C4FA3E4199843D17B358EAE552BC1530944C6ED((&V_0), L_53, NULL);
		// break;
		goto IL_02b9;
	}

IL_0215:
	{
		// instance.limitYMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_54 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_55 = ((ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_54);
		float L_56;
		L_56 = GenericVirtualFuncInvoker1< float, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mA86928BC888E342D2C2644535E3399952F5077ED_RuntimeMethod_var, L_54, L_55);
		LimitVelocityOverLifetimeModule_set_limitYMultiplier_mCB16226776AA3FD95FCBFEF08939CDFCDEAD1FD7((&V_0), L_56, NULL);
		// break;
		goto IL_02b9;
	}

IL_022c:
	{
		// instance.limitZ = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_57 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_58 = ((ES3Type_MinMaxCurve_t1C147718750ACBECE5D2B7F545D2A434A3C5409B_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t1C147718750ACBECE5D2B7F545D2A434A3C5409B_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_57);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_59;
		L_59 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_m9D6B4042B923127DEA4A2CAA3E35EED37D75B3D0_RuntimeMethod_var, L_57, L_58);
		LimitVelocityOverLifetimeModule_set_limitZ_mA7AA3F6C6EB9C1E2199DE5EDBFDFCD891E66A06C((&V_0), L_59, NULL);
		// break;
		goto IL_02b9;
	}

IL_0240:
	{
		// instance.limitZMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_60 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_61 = ((ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_60);
		float L_62;
		L_62 = GenericVirtualFuncInvoker1< float, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mA86928BC888E342D2C2644535E3399952F5077ED_RuntimeMethod_var, L_60, L_61);
		LimitVelocityOverLifetimeModule_set_limitZMultiplier_mF8318B3E8798E9778CD356C773A9567EBCC414DF((&V_0), L_62, NULL);
		// break;
		goto IL_02b9;
	}

IL_0254:
	{
		// instance.limit = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_63 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_64 = ((ES3Type_MinMaxCurve_t1C147718750ACBECE5D2B7F545D2A434A3C5409B_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t1C147718750ACBECE5D2B7F545D2A434A3C5409B_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_63);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_65;
		L_65 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_m9D6B4042B923127DEA4A2CAA3E35EED37D75B3D0_RuntimeMethod_var, L_63, L_64);
		LimitVelocityOverLifetimeModule_set_limit_m4714D5E0B04EAE01A49552690E9CC206AC5C7685((&V_0), L_65, NULL);
		// break;
		goto IL_02b9;
	}

IL_0268:
	{
		// instance.limitMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_66 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_67 = ((ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_66);
		float L_68;
		L_68 = GenericVirtualFuncInvoker1< float, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mA86928BC888E342D2C2644535E3399952F5077ED_RuntimeMethod_var, L_66, L_67);
		LimitVelocityOverLifetimeModule_set_limitMultiplier_m520C77C943C30BFE63EF0E4BEA9593D251187B28((&V_0), L_68, NULL);
		// break;
		goto IL_02b9;
	}

IL_027c:
	{
		// instance.dampen = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_69 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_70 = ((ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_69);
		float L_71;
		L_71 = GenericVirtualFuncInvoker1< float, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mA86928BC888E342D2C2644535E3399952F5077ED_RuntimeMethod_var, L_69, L_70);
		LimitVelocityOverLifetimeModule_set_dampen_mE8A893ECFE936519C3F68D440C3C6BD11065E288((&V_0), L_71, NULL);
		// break;
		goto IL_02b9;
	}

IL_0290:
	{
		// instance.separateAxes = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_72 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_73 = ((ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_72);
		bool L_74;
		L_74 = GenericVirtualFuncInvoker1< bool, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mFFB70EE53D8CD0255A4E599780F62A3EB1520E83_RuntimeMethod_var, L_72, L_73);
		LimitVelocityOverLifetimeModule_set_separateAxes_m3E1D0590D45FE0D6657D99685DA4E5A231229EF0((&V_0), L_74, NULL);
		// break;
		goto IL_02b9;
	}

IL_02a4:
	{
		// instance.space = reader.Read<UnityEngine.ParticleSystemSimulationSpace>();
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_75 = ___reader0;
		NullCheck(L_75);
		int32_t L_76;
		L_76 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisParticleSystemSimulationSpace_tB3693D8A3C0FCE63D060546071006AC4ABC60B05_mE28AF5CD31B164FD849D4D05A9C6E60F95D67243_RuntimeMethod_var, L_75);
		LimitVelocityOverLifetimeModule_set_space_m54D13D862FCB1606F37A3F053138437DEBF773D5((&V_0), L_76, NULL);
		// break;
		goto IL_02b9;
	}

IL_02b3:
	{
		// reader.Skip();
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_77 = ___reader0;
		NullCheck(L_77);
		VirtualActionInvoker0::Invoke(41 /* System.Void ES3Reader::Skip() */, L_77);
	}

IL_02b9:
	{
		// while((propertyName = reader.ReadPropertyName()) != null)
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_78 = ___reader0;
		NullCheck(L_78);
		String_t* L_79;
		L_79 = VirtualFuncInvoker0< String_t* >::Invoke(21 /* System.String ES3Reader::ReadPropertyName() */, L_78);
		String_t* L_80 = L_79;
		V_1 = L_80;
		if (L_80)
		{
			goto IL_000c;
		}
	}
	{
		// }
		return;
	}
}
// System.Void ES3Types.ES3Type_LimitVelocityOverLifetimeModule::ReadInto<UnityEngine.ParticleSystem/ColorBySpeedModule>(ES3Reader,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ES3Type_LimitVelocityOverLifetimeModule_ReadInto_TisColorBySpeedModule_t808C4CC668431DDE51D5AD98A81C78DDB944948B_m0E861CF6010817E6B7A1066808740A868F9A57BF_gshared (ES3Type_LimitVelocityOverLifetimeModule_t0B3EB57F7FF7F9D1F6D99783CAB9DF9ADCEDE92B* __this, ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* ___reader0, RuntimeObject* ___obj1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mFFB70EE53D8CD0255A4E599780F62A3EB1520E83_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_m9D6B4042B923127DEA4A2CAA3E35EED37D75B3D0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisParticleSystemSimulationSpace_tB3693D8A3C0FCE63D060546071006AC4ABC60B05_mE28AF5CD31B164FD849D4D05A9C6E60F95D67243_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mA86928BC888E342D2C2644535E3399952F5077ED_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_MinMaxCurve_t1C147718750ACBECE5D2B7F545D2A434A3C5409B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LimitVelocityOverLifetimeModule_tC52CF1434E2639EE5D81DD6BA269FF38CA17D8B1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0EA7F3FF9751D1C0670732BE07C84116AD963E2D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0FC0575E5B3BFD69FE0E6DACB4257E1AB52484B5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1B024D537329B86AB0DF96B2A714180F442F53E9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral21CEBAC0172EB4FB67A8A2698C7F35355100D5F7);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral46FADEB9E998225AA96BA7F96F3C6FE519B52F62);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral60D92E37F6F99139C65CA6248F17911C762F4DD6);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral744761D527F44F04E435DEFCA1E21E179B60B0E4);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA3C8F2A441D7C8A8A2D967375934EFA74D7FE1E8);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD18A8AB8F50A606429410D3C3F543B352E7D6033);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE0F9D9926B214819D0D0E8B1814BCF46C90D0956);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE1291C4D47635E327ECFE39842BD1A93F58C61A2);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B);
		s_Il2CppMethodInitialized = true;
	}
	LimitVelocityOverLifetimeModule_tC52CF1434E2639EE5D81DD6BA269FF38CA17D8B1 V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	uint32_t V_2 = 0;
	{
		// var instance = (UnityEngine.ParticleSystem.LimitVelocityOverLifetimeModule)obj;
		RuntimeObject* L_0 = ___obj1;
		V_0 = ((*(LimitVelocityOverLifetimeModule_tC52CF1434E2639EE5D81DD6BA269FF38CA17D8B1*)((LimitVelocityOverLifetimeModule_tC52CF1434E2639EE5D81DD6BA269FF38CA17D8B1*)(LimitVelocityOverLifetimeModule_tC52CF1434E2639EE5D81DD6BA269FF38CA17D8B1*)UnBox(L_0, LimitVelocityOverLifetimeModule_tC52CF1434E2639EE5D81DD6BA269FF38CA17D8B1_il2cpp_TypeInfo_var))));
		goto IL_02b9;
	}

IL_000c:
	{
		String_t* L_1 = V_1;
		uint32_t L_2;
		L_2 = U3CPrivateImplementationDetailsU3E_ComputeStringHash_m6EA1F233618497AEFF8902A5EDFA24C74E2F2876(L_1, NULL);
		V_2 = L_2;
		uint32_t L_3 = V_2;
		if ((!(((uint32_t)L_3) <= ((uint32_t)((int32_t)1319695307)))))
		{
			goto IL_006f;
		}
	}
	{
		uint32_t L_4 = V_2;
		if ((!(((uint32_t)L_4) <= ((uint32_t)((int32_t)691593499)))))
		{
			goto IL_0049;
		}
	}
	{
		uint32_t L_5 = V_2;
		if ((((int32_t)L_5) == ((int32_t)((int32_t)49525662))))
		{
			goto IL_00bd;
		}
	}
	{
		uint32_t L_6 = V_2;
		if ((((int32_t)L_6) == ((int32_t)((int32_t)572581548))))
		{
			goto IL_0111;
		}
	}
	{
		uint32_t L_7 = V_2;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)691593499))))
		{
			goto IL_00e7;
		}
	}
	{
		goto IL_02b3;
	}

IL_0049:
	{
		uint32_t L_8 = V_2;
		if ((((int32_t)L_8) == ((int32_t)((int32_t)853203252))))
		{
			goto IL_0150;
		}
	}
	{
		uint32_t L_9 = V_2;
		if ((((int32_t)L_9) == ((int32_t)((int32_t)894689925))))
		{
			goto IL_01a4;
		}
	}
	{
		uint32_t L_10 = V_2;
		if ((((int32_t)L_10) == ((int32_t)((int32_t)1319695307))))
		{
			goto IL_0165;
		}
	}
	{
		goto IL_02b3;
	}

IL_006f:
	{
		uint32_t L_11 = V_2;
		if ((!(((uint32_t)L_11) <= ((uint32_t)((int32_t)2072266391)))))
		{
			goto IL_0097;
		}
	}
	{
		uint32_t L_12 = V_2;
		if ((((int32_t)L_12) == ((int32_t)((int32_t)1479031685))))
		{
			goto IL_018f;
		}
	}
	{
		uint32_t L_13 = V_2;
		if ((((int32_t)L_13) == ((int32_t)((int32_t)2055488772))))
		{
			goto IL_00d2;
		}
	}
	{
		uint32_t L_14 = V_2;
		if ((((int32_t)L_14) == ((int32_t)((int32_t)2072266391))))
		{
			goto IL_00fc;
		}
	}
	{
		goto IL_02b3;
	}

IL_0097:
	{
		uint32_t L_15 = V_2;
		if ((((int32_t)L_15) == ((int32_t)((int32_t)2089044010))))
		{
			goto IL_0126;
		}
	}
	{
		uint32_t L_16 = V_2;
		if ((((int32_t)L_16) == ((int32_t)((int32_t)-1976734835))))
		{
			goto IL_013b;
		}
	}
	{
		uint32_t L_17 = V_2;
		if ((((int32_t)L_17) == ((int32_t)((int32_t)-1124873996))))
		{
			goto IL_017a;
		}
	}
	{
		goto IL_02b3;
	}

IL_00bd:
	{
		String_t* L_18 = V_1;
		bool L_19;
		L_19 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_18, _stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B, NULL);
		if (L_19)
		{
			goto IL_01b9;
		}
	}
	{
		goto IL_02b3;
	}

IL_00d2:
	{
		String_t* L_20 = V_1;
		bool L_21;
		L_21 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_20, _stringLiteral46FADEB9E998225AA96BA7F96F3C6FE519B52F62, NULL);
		if (L_21)
		{
			goto IL_01d0;
		}
	}
	{
		goto IL_02b3;
	}

IL_00e7:
	{
		String_t* L_22 = V_1;
		bool L_23;
		L_23 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_22, _stringLiteral744761D527F44F04E435DEFCA1E21E179B60B0E4, NULL);
		if (L_23)
		{
			goto IL_01e7;
		}
	}
	{
		goto IL_02b3;
	}

IL_00fc:
	{
		String_t* L_24 = V_1;
		bool L_25;
		L_25 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_24, _stringLiteral60D92E37F6F99139C65CA6248F17911C762F4DD6, NULL);
		if (L_25)
		{
			goto IL_01fe;
		}
	}
	{
		goto IL_02b3;
	}

IL_0111:
	{
		String_t* L_26 = V_1;
		bool L_27;
		L_27 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_26, _stringLiteral0FC0575E5B3BFD69FE0E6DACB4257E1AB52484B5, NULL);
		if (L_27)
		{
			goto IL_0215;
		}
	}
	{
		goto IL_02b3;
	}

IL_0126:
	{
		String_t* L_28 = V_1;
		bool L_29;
		L_29 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_28, _stringLiteralD18A8AB8F50A606429410D3C3F543B352E7D6033, NULL);
		if (L_29)
		{
			goto IL_022c;
		}
	}
	{
		goto IL_02b3;
	}

IL_013b:
	{
		String_t* L_30 = V_1;
		bool L_31;
		L_31 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_30, _stringLiteral21CEBAC0172EB4FB67A8A2698C7F35355100D5F7, NULL);
		if (L_31)
		{
			goto IL_0240;
		}
	}
	{
		goto IL_02b3;
	}

IL_0150:
	{
		String_t* L_32 = V_1;
		bool L_33;
		L_33 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_32, _stringLiteralA3C8F2A441D7C8A8A2D967375934EFA74D7FE1E8, NULL);
		if (L_33)
		{
			goto IL_0254;
		}
	}
	{
		goto IL_02b3;
	}

IL_0165:
	{
		String_t* L_34 = V_1;
		bool L_35;
		L_35 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_34, _stringLiteralE0F9D9926B214819D0D0E8B1814BCF46C90D0956, NULL);
		if (L_35)
		{
			goto IL_0268;
		}
	}
	{
		goto IL_02b3;
	}

IL_017a:
	{
		String_t* L_36 = V_1;
		bool L_37;
		L_37 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_36, _stringLiteral0EA7F3FF9751D1C0670732BE07C84116AD963E2D, NULL);
		if (L_37)
		{
			goto IL_027c;
		}
	}
	{
		goto IL_02b3;
	}

IL_018f:
	{
		String_t* L_38 = V_1;
		bool L_39;
		L_39 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_38, _stringLiteral1B024D537329B86AB0DF96B2A714180F442F53E9, NULL);
		if (L_39)
		{
			goto IL_0290;
		}
	}
	{
		goto IL_02b3;
	}

IL_01a4:
	{
		String_t* L_40 = V_1;
		bool L_41;
		L_41 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_40, _stringLiteralE1291C4D47635E327ECFE39842BD1A93F58C61A2, NULL);
		if (L_41)
		{
			goto IL_02a4;
		}
	}
	{
		goto IL_02b3;
	}

IL_01b9:
	{
		// instance.enabled = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_42 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_43 = ((ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_42);
		bool L_44;
		L_44 = GenericVirtualFuncInvoker1< bool, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mFFB70EE53D8CD0255A4E599780F62A3EB1520E83_RuntimeMethod_var, L_42, L_43);
		LimitVelocityOverLifetimeModule_set_enabled_m0C4AC7078A4009C764CDD6C852747161626030F8((&V_0), L_44, NULL);
		// break;
		goto IL_02b9;
	}

IL_01d0:
	{
		// instance.limitX = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_45 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_46 = ((ES3Type_MinMaxCurve_t1C147718750ACBECE5D2B7F545D2A434A3C5409B_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t1C147718750ACBECE5D2B7F545D2A434A3C5409B_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_45);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_47;
		L_47 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_m9D6B4042B923127DEA4A2CAA3E35EED37D75B3D0_RuntimeMethod_var, L_45, L_46);
		LimitVelocityOverLifetimeModule_set_limitX_m453163A173E91BD1FA92A85FFFB1377922264E88((&V_0), L_47, NULL);
		// break;
		goto IL_02b9;
	}

IL_01e7:
	{
		// instance.limitXMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_48 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_49 = ((ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_48);
		float L_50;
		L_50 = GenericVirtualFuncInvoker1< float, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mA86928BC888E342D2C2644535E3399952F5077ED_RuntimeMethod_var, L_48, L_49);
		LimitVelocityOverLifetimeModule_set_limitXMultiplier_m69A35DBE2A96DB94E1C5857C1AEA7700F315FB69((&V_0), L_50, NULL);
		// break;
		goto IL_02b9;
	}

IL_01fe:
	{
		// instance.limitY = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_51 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_52 = ((ES3Type_MinMaxCurve_t1C147718750ACBECE5D2B7F545D2A434A3C5409B_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t1C147718750ACBECE5D2B7F545D2A434A3C5409B_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_51);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_53;
		L_53 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_m9D6B4042B923127DEA4A2CAA3E35EED37D75B3D0_RuntimeMethod_var, L_51, L_52);
		LimitVelocityOverLifetimeModule_set_limitY_m5C4FA3E4199843D17B358EAE552BC1530944C6ED((&V_0), L_53, NULL);
		// break;
		goto IL_02b9;
	}

IL_0215:
	{
		// instance.limitYMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_54 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_55 = ((ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_54);
		float L_56;
		L_56 = GenericVirtualFuncInvoker1< float, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mA86928BC888E342D2C2644535E3399952F5077ED_RuntimeMethod_var, L_54, L_55);
		LimitVelocityOverLifetimeModule_set_limitYMultiplier_mCB16226776AA3FD95FCBFEF08939CDFCDEAD1FD7((&V_0), L_56, NULL);
		// break;
		goto IL_02b9;
	}

IL_022c:
	{
		// instance.limitZ = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_57 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_58 = ((ES3Type_MinMaxCurve_t1C147718750ACBECE5D2B7F545D2A434A3C5409B_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t1C147718750ACBECE5D2B7F545D2A434A3C5409B_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_57);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_59;
		L_59 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_m9D6B4042B923127DEA4A2CAA3E35EED37D75B3D0_RuntimeMethod_var, L_57, L_58);
		LimitVelocityOverLifetimeModule_set_limitZ_mA7AA3F6C6EB9C1E2199DE5EDBFDFCD891E66A06C((&V_0), L_59, NULL);
		// break;
		goto IL_02b9;
	}

IL_0240:
	{
		// instance.limitZMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_60 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_61 = ((ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_60);
		float L_62;
		L_62 = GenericVirtualFuncInvoker1< float, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mA86928BC888E342D2C2644535E3399952F5077ED_RuntimeMethod_var, L_60, L_61);
		LimitVelocityOverLifetimeModule_set_limitZMultiplier_mF8318B3E8798E9778CD356C773A9567EBCC414DF((&V_0), L_62, NULL);
		// break;
		goto IL_02b9;
	}

IL_0254:
	{
		// instance.limit = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_63 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_64 = ((ES3Type_MinMaxCurve_t1C147718750ACBECE5D2B7F545D2A434A3C5409B_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t1C147718750ACBECE5D2B7F545D2A434A3C5409B_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_63);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_65;
		L_65 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_m9D6B4042B923127DEA4A2CAA3E35EED37D75B3D0_RuntimeMethod_var, L_63, L_64);
		LimitVelocityOverLifetimeModule_set_limit_m4714D5E0B04EAE01A49552690E9CC206AC5C7685((&V_0), L_65, NULL);
		// break;
		goto IL_02b9;
	}

IL_0268:
	{
		// instance.limitMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_66 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_67 = ((ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_66);
		float L_68;
		L_68 = GenericVirtualFuncInvoker1< float, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mA86928BC888E342D2C2644535E3399952F5077ED_RuntimeMethod_var, L_66, L_67);
		LimitVelocityOverLifetimeModule_set_limitMultiplier_m520C77C943C30BFE63EF0E4BEA9593D251187B28((&V_0), L_68, NULL);
		// break;
		goto IL_02b9;
	}

IL_027c:
	{
		// instance.dampen = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_69 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_70 = ((ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_69);
		float L_71;
		L_71 = GenericVirtualFuncInvoker1< float, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mA86928BC888E342D2C2644535E3399952F5077ED_RuntimeMethod_var, L_69, L_70);
		LimitVelocityOverLifetimeModule_set_dampen_mE8A893ECFE936519C3F68D440C3C6BD11065E288((&V_0), L_71, NULL);
		// break;
		goto IL_02b9;
	}

IL_0290:
	{
		// instance.separateAxes = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_72 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_73 = ((ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_72);
		bool L_74;
		L_74 = GenericVirtualFuncInvoker1< bool, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mFFB70EE53D8CD0255A4E599780F62A3EB1520E83_RuntimeMethod_var, L_72, L_73);
		LimitVelocityOverLifetimeModule_set_separateAxes_m3E1D0590D45FE0D6657D99685DA4E5A231229EF0((&V_0), L_74, NULL);
		// break;
		goto IL_02b9;
	}

IL_02a4:
	{
		// instance.space = reader.Read<UnityEngine.ParticleSystemSimulationSpace>();
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_75 = ___reader0;
		NullCheck(L_75);
		int32_t L_76;
		L_76 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisParticleSystemSimulationSpace_tB3693D8A3C0FCE63D060546071006AC4ABC60B05_mE28AF5CD31B164FD849D4D05A9C6E60F95D67243_RuntimeMethod_var, L_75);
		LimitVelocityOverLifetimeModule_set_space_m54D13D862FCB1606F37A3F053138437DEBF773D5((&V_0), L_76, NULL);
		// break;
		goto IL_02b9;
	}

IL_02b3:
	{
		// reader.Skip();
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_77 = ___reader0;
		NullCheck(L_77);
		VirtualActionInvoker0::Invoke(41 /* System.Void ES3Reader::Skip() */, L_77);
	}

IL_02b9:
	{
		// while((propertyName = reader.ReadPropertyName()) != null)
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_78 = ___reader0;
		NullCheck(L_78);
		String_t* L_79;
		L_79 = VirtualFuncInvoker0< String_t* >::Invoke(21 /* System.String ES3Reader::ReadPropertyName() */, L_78);
		String_t* L_80 = L_79;
		V_1 = L_80;
		if (L_80)
		{
			goto IL_000c;
		}
	}
	{
		// }
		return;
	}
}
// System.Void ES3Types.ES3Type_LimitVelocityOverLifetimeModule::ReadInto<UnityEngine.ParticleSystem/ColorOverLifetimeModule>(ES3Reader,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ES3Type_LimitVelocityOverLifetimeModule_ReadInto_TisColorOverLifetimeModule_t758EC8315B6C19D78C418D942CD1F94FE7EEE9D9_m79CF17C0871FB00A19CF3FB392C779F98697C0D4_gshared (ES3Type_LimitVelocityOverLifetimeModule_t0B3EB57F7FF7F9D1F6D99783CAB9DF9ADCEDE92B* __this, ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* ___reader0, RuntimeObject* ___obj1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mFFB70EE53D8CD0255A4E599780F62A3EB1520E83_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_m9D6B4042B923127DEA4A2CAA3E35EED37D75B3D0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisParticleSystemSimulationSpace_tB3693D8A3C0FCE63D060546071006AC4ABC60B05_mE28AF5CD31B164FD849D4D05A9C6E60F95D67243_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mA86928BC888E342D2C2644535E3399952F5077ED_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_MinMaxCurve_t1C147718750ACBECE5D2B7F545D2A434A3C5409B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LimitVelocityOverLifetimeModule_tC52CF1434E2639EE5D81DD6BA269FF38CA17D8B1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0EA7F3FF9751D1C0670732BE07C84116AD963E2D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0FC0575E5B3BFD69FE0E6DACB4257E1AB52484B5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1B024D537329B86AB0DF96B2A714180F442F53E9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral21CEBAC0172EB4FB67A8A2698C7F35355100D5F7);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral46FADEB9E998225AA96BA7F96F3C6FE519B52F62);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral60D92E37F6F99139C65CA6248F17911C762F4DD6);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral744761D527F44F04E435DEFCA1E21E179B60B0E4);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA3C8F2A441D7C8A8A2D967375934EFA74D7FE1E8);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD18A8AB8F50A606429410D3C3F543B352E7D6033);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE0F9D9926B214819D0D0E8B1814BCF46C90D0956);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE1291C4D47635E327ECFE39842BD1A93F58C61A2);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B);
		s_Il2CppMethodInitialized = true;
	}
	LimitVelocityOverLifetimeModule_tC52CF1434E2639EE5D81DD6BA269FF38CA17D8B1 V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	uint32_t V_2 = 0;
	{
		// var instance = (UnityEngine.ParticleSystem.LimitVelocityOverLifetimeModule)obj;
		RuntimeObject* L_0 = ___obj1;
		V_0 = ((*(LimitVelocityOverLifetimeModule_tC52CF1434E2639EE5D81DD6BA269FF38CA17D8B1*)((LimitVelocityOverLifetimeModule_tC52CF1434E2639EE5D81DD6BA269FF38CA17D8B1*)(LimitVelocityOverLifetimeModule_tC52CF1434E2639EE5D81DD6BA269FF38CA17D8B1*)UnBox(L_0, LimitVelocityOverLifetimeModule_tC52CF1434E2639EE5D81DD6BA269FF38CA17D8B1_il2cpp_TypeInfo_var))));
		goto IL_02b9;
	}

IL_000c:
	{
		String_t* L_1 = V_1;
		uint32_t L_2;
		L_2 = U3CPrivateImplementationDetailsU3E_ComputeStringHash_m6EA1F233618497AEFF8902A5EDFA24C74E2F2876(L_1, NULL);
		V_2 = L_2;
		uint32_t L_3 = V_2;
		if ((!(((uint32_t)L_3) <= ((uint32_t)((int32_t)1319695307)))))
		{
			goto IL_006f;
		}
	}
	{
		uint32_t L_4 = V_2;
		if ((!(((uint32_t)L_4) <= ((uint32_t)((int32_t)691593499)))))
		{
			goto IL_0049;
		}
	}
	{
		uint32_t L_5 = V_2;
		if ((((int32_t)L_5) == ((int32_t)((int32_t)49525662))))
		{
			goto IL_00bd;
		}
	}
	{
		uint32_t L_6 = V_2;
		if ((((int32_t)L_6) == ((int32_t)((int32_t)572581548))))
		{
			goto IL_0111;
		}
	}
	{
		uint32_t L_7 = V_2;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)691593499))))
		{
			goto IL_00e7;
		}
	}
	{
		goto IL_02b3;
	}

IL_0049:
	{
		uint32_t L_8 = V_2;
		if ((((int32_t)L_8) == ((int32_t)((int32_t)853203252))))
		{
			goto IL_0150;
		}
	}
	{
		uint32_t L_9 = V_2;
		if ((((int32_t)L_9) == ((int32_t)((int32_t)894689925))))
		{
			goto IL_01a4;
		}
	}
	{
		uint32_t L_10 = V_2;
		if ((((int32_t)L_10) == ((int32_t)((int32_t)1319695307))))
		{
			goto IL_0165;
		}
	}
	{
		goto IL_02b3;
	}

IL_006f:
	{
		uint32_t L_11 = V_2;
		if ((!(((uint32_t)L_11) <= ((uint32_t)((int32_t)2072266391)))))
		{
			goto IL_0097;
		}
	}
	{
		uint32_t L_12 = V_2;
		if ((((int32_t)L_12) == ((int32_t)((int32_t)1479031685))))
		{
			goto IL_018f;
		}
	}
	{
		uint32_t L_13 = V_2;
		if ((((int32_t)L_13) == ((int32_t)((int32_t)2055488772))))
		{
			goto IL_00d2;
		}
	}
	{
		uint32_t L_14 = V_2;
		if ((((int32_t)L_14) == ((int32_t)((int32_t)2072266391))))
		{
			goto IL_00fc;
		}
	}
	{
		goto IL_02b3;
	}

IL_0097:
	{
		uint32_t L_15 = V_2;
		if ((((int32_t)L_15) == ((int32_t)((int32_t)2089044010))))
		{
			goto IL_0126;
		}
	}
	{
		uint32_t L_16 = V_2;
		if ((((int32_t)L_16) == ((int32_t)((int32_t)-1976734835))))
		{
			goto IL_013b;
		}
	}
	{
		uint32_t L_17 = V_2;
		if ((((int32_t)L_17) == ((int32_t)((int32_t)-1124873996))))
		{
			goto IL_017a;
		}
	}
	{
		goto IL_02b3;
	}

IL_00bd:
	{
		String_t* L_18 = V_1;
		bool L_19;
		L_19 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_18, _stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B, NULL);
		if (L_19)
		{
			goto IL_01b9;
		}
	}
	{
		goto IL_02b3;
	}

IL_00d2:
	{
		String_t* L_20 = V_1;
		bool L_21;
		L_21 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_20, _stringLiteral46FADEB9E998225AA96BA7F96F3C6FE519B52F62, NULL);
		if (L_21)
		{
			goto IL_01d0;
		}
	}
	{
		goto IL_02b3;
	}

IL_00e7:
	{
		String_t* L_22 = V_1;
		bool L_23;
		L_23 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_22, _stringLiteral744761D527F44F04E435DEFCA1E21E179B60B0E4, NULL);
		if (L_23)
		{
			goto IL_01e7;
		}
	}
	{
		goto IL_02b3;
	}

IL_00fc:
	{
		String_t* L_24 = V_1;
		bool L_25;
		L_25 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_24, _stringLiteral60D92E37F6F99139C65CA6248F17911C762F4DD6, NULL);
		if (L_25)
		{
			goto IL_01fe;
		}
	}
	{
		goto IL_02b3;
	}

IL_0111:
	{
		String_t* L_26 = V_1;
		bool L_27;
		L_27 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_26, _stringLiteral0FC0575E5B3BFD69FE0E6DACB4257E1AB52484B5, NULL);
		if (L_27)
		{
			goto IL_0215;
		}
	}
	{
		goto IL_02b3;
	}

IL_0126:
	{
		String_t* L_28 = V_1;
		bool L_29;
		L_29 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_28, _stringLiteralD18A8AB8F50A606429410D3C3F543B352E7D6033, NULL);
		if (L_29)
		{
			goto IL_022c;
		}
	}
	{
		goto IL_02b3;
	}

IL_013b:
	{
		String_t* L_30 = V_1;
		bool L_31;
		L_31 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_30, _stringLiteral21CEBAC0172EB4FB67A8A2698C7F35355100D5F7, NULL);
		if (L_31)
		{
			goto IL_0240;
		}
	}
	{
		goto IL_02b3;
	}

IL_0150:
	{
		String_t* L_32 = V_1;
		bool L_33;
		L_33 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_32, _stringLiteralA3C8F2A441D7C8A8A2D967375934EFA74D7FE1E8, NULL);
		if (L_33)
		{
			goto IL_0254;
		}
	}
	{
		goto IL_02b3;
	}

IL_0165:
	{
		String_t* L_34 = V_1;
		bool L_35;
		L_35 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_34, _stringLiteralE0F9D9926B214819D0D0E8B1814BCF46C90D0956, NULL);
		if (L_35)
		{
			goto IL_0268;
		}
	}
	{
		goto IL_02b3;
	}

IL_017a:
	{
		String_t* L_36 = V_1;
		bool L_37;
		L_37 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_36, _stringLiteral0EA7F3FF9751D1C0670732BE07C84116AD963E2D, NULL);
		if (L_37)
		{
			goto IL_027c;
		}
	}
	{
		goto IL_02b3;
	}

IL_018f:
	{
		String_t* L_38 = V_1;
		bool L_39;
		L_39 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_38, _stringLiteral1B024D537329B86AB0DF96B2A714180F442F53E9, NULL);
		if (L_39)
		{
			goto IL_0290;
		}
	}
	{
		goto IL_02b3;
	}

IL_01a4:
	{
		String_t* L_40 = V_1;
		bool L_41;
		L_41 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_40, _stringLiteralE1291C4D47635E327ECFE39842BD1A93F58C61A2, NULL);
		if (L_41)
		{
			goto IL_02a4;
		}
	}
	{
		goto IL_02b3;
	}

IL_01b9:
	{
		// instance.enabled = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_42 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_43 = ((ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_42);
		bool L_44;
		L_44 = GenericVirtualFuncInvoker1< bool, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mFFB70EE53D8CD0255A4E599780F62A3EB1520E83_RuntimeMethod_var, L_42, L_43);
		LimitVelocityOverLifetimeModule_set_enabled_m0C4AC7078A4009C764CDD6C852747161626030F8((&V_0), L_44, NULL);
		// break;
		goto IL_02b9;
	}

IL_01d0:
	{
		// instance.limitX = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_45 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_46 = ((ES3Type_MinMaxCurve_t1C147718750ACBECE5D2B7F545D2A434A3C5409B_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t1C147718750ACBECE5D2B7F545D2A434A3C5409B_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_45);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_47;
		L_47 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_m9D6B4042B923127DEA4A2CAA3E35EED37D75B3D0_RuntimeMethod_var, L_45, L_46);
		LimitVelocityOverLifetimeModule_set_limitX_m453163A173E91BD1FA92A85FFFB1377922264E88((&V_0), L_47, NULL);
		// break;
		goto IL_02b9;
	}

IL_01e7:
	{
		// instance.limitXMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_48 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_49 = ((ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_48);
		float L_50;
		L_50 = GenericVirtualFuncInvoker1< float, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mA86928BC888E342D2C2644535E3399952F5077ED_RuntimeMethod_var, L_48, L_49);
		LimitVelocityOverLifetimeModule_set_limitXMultiplier_m69A35DBE2A96DB94E1C5857C1AEA7700F315FB69((&V_0), L_50, NULL);
		// break;
		goto IL_02b9;
	}

IL_01fe:
	{
		// instance.limitY = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_51 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_52 = ((ES3Type_MinMaxCurve_t1C147718750ACBECE5D2B7F545D2A434A3C5409B_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t1C147718750ACBECE5D2B7F545D2A434A3C5409B_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_51);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_53;
		L_53 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_m9D6B4042B923127DEA4A2CAA3E35EED37D75B3D0_RuntimeMethod_var, L_51, L_52);
		LimitVelocityOverLifetimeModule_set_limitY_m5C4FA3E4199843D17B358EAE552BC1530944C6ED((&V_0), L_53, NULL);
		// break;
		goto IL_02b9;
	}

IL_0215:
	{
		// instance.limitYMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_54 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_55 = ((ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_54);
		float L_56;
		L_56 = GenericVirtualFuncInvoker1< float, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mA86928BC888E342D2C2644535E3399952F5077ED_RuntimeMethod_var, L_54, L_55);
		LimitVelocityOverLifetimeModule_set_limitYMultiplier_mCB16226776AA3FD95FCBFEF08939CDFCDEAD1FD7((&V_0), L_56, NULL);
		// break;
		goto IL_02b9;
	}

IL_022c:
	{
		// instance.limitZ = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_57 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_58 = ((ES3Type_MinMaxCurve_t1C147718750ACBECE5D2B7F545D2A434A3C5409B_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t1C147718750ACBECE5D2B7F545D2A434A3C5409B_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_57);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_59;
		L_59 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_m9D6B4042B923127DEA4A2CAA3E35EED37D75B3D0_RuntimeMethod_var, L_57, L_58);
		LimitVelocityOverLifetimeModule_set_limitZ_mA7AA3F6C6EB9C1E2199DE5EDBFDFCD891E66A06C((&V_0), L_59, NULL);
		// break;
		goto IL_02b9;
	}

IL_0240:
	{
		// instance.limitZMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_60 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_61 = ((ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_60);
		float L_62;
		L_62 = GenericVirtualFuncInvoker1< float, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mA86928BC888E342D2C2644535E3399952F5077ED_RuntimeMethod_var, L_60, L_61);
		LimitVelocityOverLifetimeModule_set_limitZMultiplier_mF8318B3E8798E9778CD356C773A9567EBCC414DF((&V_0), L_62, NULL);
		// break;
		goto IL_02b9;
	}

IL_0254:
	{
		// instance.limit = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_63 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_64 = ((ES3Type_MinMaxCurve_t1C147718750ACBECE5D2B7F545D2A434A3C5409B_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t1C147718750ACBECE5D2B7F545D2A434A3C5409B_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_63);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_65;
		L_65 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_m9D6B4042B923127DEA4A2CAA3E35EED37D75B3D0_RuntimeMethod_var, L_63, L_64);
		LimitVelocityOverLifetimeModule_set_limit_m4714D5E0B04EAE01A49552690E9CC206AC5C7685((&V_0), L_65, NULL);
		// break;
		goto IL_02b9;
	}

IL_0268:
	{
		// instance.limitMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_66 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_67 = ((ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_66);
		float L_68;
		L_68 = GenericVirtualFuncInvoker1< float, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mA86928BC888E342D2C2644535E3399952F5077ED_RuntimeMethod_var, L_66, L_67);
		LimitVelocityOverLifetimeModule_set_limitMultiplier_m520C77C943C30BFE63EF0E4BEA9593D251187B28((&V_0), L_68, NULL);
		// break;
		goto IL_02b9;
	}

IL_027c:
	{
		// instance.dampen = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_69 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_70 = ((ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_69);
		float L_71;
		L_71 = GenericVirtualFuncInvoker1< float, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mA86928BC888E342D2C2644535E3399952F5077ED_RuntimeMethod_var, L_69, L_70);
		LimitVelocityOverLifetimeModule_set_dampen_mE8A893ECFE936519C3F68D440C3C6BD11065E288((&V_0), L_71, NULL);
		// break;
		goto IL_02b9;
	}

IL_0290:
	{
		// instance.separateAxes = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_72 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_73 = ((ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_72);
		bool L_74;
		L_74 = GenericVirtualFuncInvoker1< bool, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mFFB70EE53D8CD0255A4E599780F62A3EB1520E83_RuntimeMethod_var, L_72, L_73);
		LimitVelocityOverLifetimeModule_set_separateAxes_m3E1D0590D45FE0D6657D99685DA4E5A231229EF0((&V_0), L_74, NULL);
		// break;
		goto IL_02b9;
	}

IL_02a4:
	{
		// instance.space = reader.Read<UnityEngine.ParticleSystemSimulationSpace>();
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_75 = ___reader0;
		NullCheck(L_75);
		int32_t L_76;
		L_76 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisParticleSystemSimulationSpace_tB3693D8A3C0FCE63D060546071006AC4ABC60B05_mE28AF5CD31B164FD849D4D05A9C6E60F95D67243_RuntimeMethod_var, L_75);
		LimitVelocityOverLifetimeModule_set_space_m54D13D862FCB1606F37A3F053138437DEBF773D5((&V_0), L_76, NULL);
		// break;
		goto IL_02b9;
	}

IL_02b3:
	{
		// reader.Skip();
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_77 = ___reader0;
		NullCheck(L_77);
		VirtualActionInvoker0::Invoke(41 /* System.Void ES3Reader::Skip() */, L_77);
	}

IL_02b9:
	{
		// while((propertyName = reader.ReadPropertyName()) != null)
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_78 = ___reader0;
		NullCheck(L_78);
		String_t* L_79;
		L_79 = VirtualFuncInvoker0< String_t* >::Invoke(21 /* System.String ES3Reader::ReadPropertyName() */, L_78);
		String_t* L_80 = L_79;
		V_1 = L_80;
		if (L_80)
		{
			goto IL_000c;
		}
	}
	{
		// }
		return;
	}
}
// System.Void ES3Types.ES3Type_LimitVelocityOverLifetimeModule::ReadInto<UnityEngine.ParticleSystem/EmissionModule>(ES3Reader,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ES3Type_LimitVelocityOverLifetimeModule_ReadInto_TisEmissionModule_t0F469FA4A08003F6D9C610D2F716A9DFDB9A3678_mF03E294297A36050D3C7F30AABE550A2D5635F43_gshared (ES3Type_LimitVelocityOverLifetimeModule_t0B3EB57F7FF7F9D1F6D99783CAB9DF9ADCEDE92B* __this, ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* ___reader0, RuntimeObject* ___obj1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mFFB70EE53D8CD0255A4E599780F62A3EB1520E83_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_m9D6B4042B923127DEA4A2CAA3E35EED37D75B3D0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisParticleSystemSimulationSpace_tB3693D8A3C0FCE63D060546071006AC4ABC60B05_mE28AF5CD31B164FD849D4D05A9C6E60F95D67243_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mA86928BC888E342D2C2644535E3399952F5077ED_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_MinMaxCurve_t1C147718750ACBECE5D2B7F545D2A434A3C5409B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LimitVelocityOverLifetimeModule_tC52CF1434E2639EE5D81DD6BA269FF38CA17D8B1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0EA7F3FF9751D1C0670732BE07C84116AD963E2D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0FC0575E5B3BFD69FE0E6DACB4257E1AB52484B5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1B024D537329B86AB0DF96B2A714180F442F53E9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral21CEBAC0172EB4FB67A8A2698C7F35355100D5F7);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral46FADEB9E998225AA96BA7F96F3C6FE519B52F62);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral60D92E37F6F99139C65CA6248F17911C762F4DD6);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral744761D527F44F04E435DEFCA1E21E179B60B0E4);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA3C8F2A441D7C8A8A2D967375934EFA74D7FE1E8);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD18A8AB8F50A606429410D3C3F543B352E7D6033);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE0F9D9926B214819D0D0E8B1814BCF46C90D0956);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE1291C4D47635E327ECFE39842BD1A93F58C61A2);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B);
		s_Il2CppMethodInitialized = true;
	}
	LimitVelocityOverLifetimeModule_tC52CF1434E2639EE5D81DD6BA269FF38CA17D8B1 V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	uint32_t V_2 = 0;
	{
		// var instance = (UnityEngine.ParticleSystem.LimitVelocityOverLifetimeModule)obj;
		RuntimeObject* L_0 = ___obj1;
		V_0 = ((*(LimitVelocityOverLifetimeModule_tC52CF1434E2639EE5D81DD6BA269FF38CA17D8B1*)((LimitVelocityOverLifetimeModule_tC52CF1434E2639EE5D81DD6BA269FF38CA17D8B1*)(LimitVelocityOverLifetimeModule_tC52CF1434E2639EE5D81DD6BA269FF38CA17D8B1*)UnBox(L_0, LimitVelocityOverLifetimeModule_tC52CF1434E2639EE5D81DD6BA269FF38CA17D8B1_il2cpp_TypeInfo_var))));
		goto IL_02b9;
	}

IL_000c:
	{
		String_t* L_1 = V_1;
		uint32_t L_2;
		L_2 = U3CPrivateImplementationDetailsU3E_ComputeStringHash_m6EA1F233618497AEFF8902A5EDFA24C74E2F2876(L_1, NULL);
		V_2 = L_2;
		uint32_t L_3 = V_2;
		if ((!(((uint32_t)L_3) <= ((uint32_t)((int32_t)1319695307)))))
		{
			goto IL_006f;
		}
	}
	{
		uint32_t L_4 = V_2;
		if ((!(((uint32_t)L_4) <= ((uint32_t)((int32_t)691593499)))))
		{
			goto IL_0049;
		}
	}
	{
		uint32_t L_5 = V_2;
		if ((((int32_t)L_5) == ((int32_t)((int32_t)49525662))))
		{
			goto IL_00bd;
		}
	}
	{
		uint32_t L_6 = V_2;
		if ((((int32_t)L_6) == ((int32_t)((int32_t)572581548))))
		{
			goto IL_0111;
		}
	}
	{
		uint32_t L_7 = V_2;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)691593499))))
		{
			goto IL_00e7;
		}
	}
	{
		goto IL_02b3;
	}

IL_0049:
	{
		uint32_t L_8 = V_2;
		if ((((int32_t)L_8) == ((int32_t)((int32_t)853203252))))
		{
			goto IL_0150;
		}
	}
	{
		uint32_t L_9 = V_2;
		if ((((int32_t)L_9) == ((int32_t)((int32_t)894689925))))
		{
			goto IL_01a4;
		}
	}
	{
		uint32_t L_10 = V_2;
		if ((((int32_t)L_10) == ((int32_t)((int32_t)1319695307))))
		{
			goto IL_0165;
		}
	}
	{
		goto IL_02b3;
	}

IL_006f:
	{
		uint32_t L_11 = V_2;
		if ((!(((uint32_t)L_11) <= ((uint32_t)((int32_t)2072266391)))))
		{
			goto IL_0097;
		}
	}
	{
		uint32_t L_12 = V_2;
		if ((((int32_t)L_12) == ((int32_t)((int32_t)1479031685))))
		{
			goto IL_018f;
		}
	}
	{
		uint32_t L_13 = V_2;
		if ((((int32_t)L_13) == ((int32_t)((int32_t)2055488772))))
		{
			goto IL_00d2;
		}
	}
	{
		uint32_t L_14 = V_2;
		if ((((int32_t)L_14) == ((int32_t)((int32_t)2072266391))))
		{
			goto IL_00fc;
		}
	}
	{
		goto IL_02b3;
	}

IL_0097:
	{
		uint32_t L_15 = V_2;
		if ((((int32_t)L_15) == ((int32_t)((int32_t)2089044010))))
		{
			goto IL_0126;
		}
	}
	{
		uint32_t L_16 = V_2;
		if ((((int32_t)L_16) == ((int32_t)((int32_t)-1976734835))))
		{
			goto IL_013b;
		}
	}
	{
		uint32_t L_17 = V_2;
		if ((((int32_t)L_17) == ((int32_t)((int32_t)-1124873996))))
		{
			goto IL_017a;
		}
	}
	{
		goto IL_02b3;
	}

IL_00bd:
	{
		String_t* L_18 = V_1;
		bool L_19;
		L_19 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_18, _stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B, NULL);
		if (L_19)
		{
			goto IL_01b9;
		}
	}
	{
		goto IL_02b3;
	}

IL_00d2:
	{
		String_t* L_20 = V_1;
		bool L_21;
		L_21 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_20, _stringLiteral46FADEB9E998225AA96BA7F96F3C6FE519B52F62, NULL);
		if (L_21)
		{
			goto IL_01d0;
		}
	}
	{
		goto IL_02b3;
	}

IL_00e7:
	{
		String_t* L_22 = V_1;
		bool L_23;
		L_23 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_22, _stringLiteral744761D527F44F04E435DEFCA1E21E179B60B0E4, NULL);
		if (L_23)
		{
			goto IL_01e7;
		}
	}
	{
		goto IL_02b3;
	}

IL_00fc:
	{
		String_t* L_24 = V_1;
		bool L_25;
		L_25 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_24, _stringLiteral60D92E37F6F99139C65CA6248F17911C762F4DD6, NULL);
		if (L_25)
		{
			goto IL_01fe;
		}
	}
	{
		goto IL_02b3;
	}

IL_0111:
	{
		String_t* L_26 = V_1;
		bool L_27;
		L_27 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_26, _stringLiteral0FC0575E5B3BFD69FE0E6DACB4257E1AB52484B5, NULL);
		if (L_27)
		{
			goto IL_0215;
		}
	}
	{
		goto IL_02b3;
	}

IL_0126:
	{
		String_t* L_28 = V_1;
		bool L_29;
		L_29 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_28, _stringLiteralD18A8AB8F50A606429410D3C3F543B352E7D6033, NULL);
		if (L_29)
		{
			goto IL_022c;
		}
	}
	{
		goto IL_02b3;
	}

IL_013b:
	{
		String_t* L_30 = V_1;
		bool L_31;
		L_31 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_30, _stringLiteral21CEBAC0172EB4FB67A8A2698C7F35355100D5F7, NULL);
		if (L_31)
		{
			goto IL_0240;
		}
	}
	{
		goto IL_02b3;
	}

IL_0150:
	{
		String_t* L_32 = V_1;
		bool L_33;
		L_33 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_32, _stringLiteralA3C8F2A441D7C8A8A2D967375934EFA74D7FE1E8, NULL);
		if (L_33)
		{
			goto IL_0254;
		}
	}
	{
		goto IL_02b3;
	}

IL_0165:
	{
		String_t* L_34 = V_1;
		bool L_35;
		L_35 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_34, _stringLiteralE0F9D9926B214819D0D0E8B1814BCF46C90D0956, NULL);
		if (L_35)
		{
			goto IL_0268;
		}
	}
	{
		goto IL_02b3;
	}

IL_017a:
	{
		String_t* L_36 = V_1;
		bool L_37;
		L_37 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_36, _stringLiteral0EA7F3FF9751D1C0670732BE07C84116AD963E2D, NULL);
		if (L_37)
		{
			goto IL_027c;
		}
	}
	{
		goto IL_02b3;
	}

IL_018f:
	{
		String_t* L_38 = V_1;
		bool L_39;
		L_39 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_38, _stringLiteral1B024D537329B86AB0DF96B2A714180F442F53E9, NULL);
		if (L_39)
		{
			goto IL_0290;
		}
	}
	{
		goto IL_02b3;
	}

IL_01a4:
	{
		String_t* L_40 = V_1;
		bool L_41;
		L_41 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_40, _stringLiteralE1291C4D47635E327ECFE39842BD1A93F58C61A2, NULL);
		if (L_41)
		{
			goto IL_02a4;
		}
	}
	{
		goto IL_02b3;
	}

IL_01b9:
	{
		// instance.enabled = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_42 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_43 = ((ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_42);
		bool L_44;
		L_44 = GenericVirtualFuncInvoker1< bool, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mFFB70EE53D8CD0255A4E599780F62A3EB1520E83_RuntimeMethod_var, L_42, L_43);
		LimitVelocityOverLifetimeModule_set_enabled_m0C4AC7078A4009C764CDD6C852747161626030F8((&V_0), L_44, NULL);
		// break;
		goto IL_02b9;
	}

IL_01d0:
	{
		// instance.limitX = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_45 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_46 = ((ES3Type_MinMaxCurve_t1C147718750ACBECE5D2B7F545D2A434A3C5409B_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t1C147718750ACBECE5D2B7F545D2A434A3C5409B_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_45);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_47;
		L_47 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_m9D6B4042B923127DEA4A2CAA3E35EED37D75B3D0_RuntimeMethod_var, L_45, L_46);
		LimitVelocityOverLifetimeModule_set_limitX_m453163A173E91BD1FA92A85FFFB1377922264E88((&V_0), L_47, NULL);
		// break;
		goto IL_02b9;
	}

IL_01e7:
	{
		// instance.limitXMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_48 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_49 = ((ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_48);
		float L_50;
		L_50 = GenericVirtualFuncInvoker1< float, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mA86928BC888E342D2C2644535E3399952F5077ED_RuntimeMethod_var, L_48, L_49);
		LimitVelocityOverLifetimeModule_set_limitXMultiplier_m69A35DBE2A96DB94E1C5857C1AEA7700F315FB69((&V_0), L_50, NULL);
		// break;
		goto IL_02b9;
	}

IL_01fe:
	{
		// instance.limitY = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_51 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_52 = ((ES3Type_MinMaxCurve_t1C147718750ACBECE5D2B7F545D2A434A3C5409B_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t1C147718750ACBECE5D2B7F545D2A434A3C5409B_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_51);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_53;
		L_53 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_m9D6B4042B923127DEA4A2CAA3E35EED37D75B3D0_RuntimeMethod_var, L_51, L_52);
		LimitVelocityOverLifetimeModule_set_limitY_m5C4FA3E4199843D17B358EAE552BC1530944C6ED((&V_0), L_53, NULL);
		// break;
		goto IL_02b9;
	}

IL_0215:
	{
		// instance.limitYMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_54 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_55 = ((ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_54);
		float L_56;
		L_56 = GenericVirtualFuncInvoker1< float, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mA86928BC888E342D2C2644535E3399952F5077ED_RuntimeMethod_var, L_54, L_55);
		LimitVelocityOverLifetimeModule_set_limitYMultiplier_mCB16226776AA3FD95FCBFEF08939CDFCDEAD1FD7((&V_0), L_56, NULL);
		// break;
		goto IL_02b9;
	}

IL_022c:
	{
		// instance.limitZ = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_57 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_58 = ((ES3Type_MinMaxCurve_t1C147718750ACBECE5D2B7F545D2A434A3C5409B_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t1C147718750ACBECE5D2B7F545D2A434A3C5409B_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_57);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_59;
		L_59 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_m9D6B4042B923127DEA4A2CAA3E35EED37D75B3D0_RuntimeMethod_var, L_57, L_58);
		LimitVelocityOverLifetimeModule_set_limitZ_mA7AA3F6C6EB9C1E2199DE5EDBFDFCD891E66A06C((&V_0), L_59, NULL);
		// break;
		goto IL_02b9;
	}

IL_0240:
	{
		// instance.limitZMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_60 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_61 = ((ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_60);
		float L_62;
		L_62 = GenericVirtualFuncInvoker1< float, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mA86928BC888E342D2C2644535E3399952F5077ED_RuntimeMethod_var, L_60, L_61);
		LimitVelocityOverLifetimeModule_set_limitZMultiplier_mF8318B3E8798E9778CD356C773A9567EBCC414DF((&V_0), L_62, NULL);
		// break;
		goto IL_02b9;
	}

IL_0254:
	{
		// instance.limit = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_63 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_64 = ((ES3Type_MinMaxCurve_t1C147718750ACBECE5D2B7F545D2A434A3C5409B_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t1C147718750ACBECE5D2B7F545D2A434A3C5409B_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_63);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_65;
		L_65 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_m9D6B4042B923127DEA4A2CAA3E35EED37D75B3D0_RuntimeMethod_var, L_63, L_64);
		LimitVelocityOverLifetimeModule_set_limit_m4714D5E0B04EAE01A49552690E9CC206AC5C7685((&V_0), L_65, NULL);
		// break;
		goto IL_02b9;
	}

IL_0268:
	{
		// instance.limitMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_66 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_67 = ((ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_66);
		float L_68;
		L_68 = GenericVirtualFuncInvoker1< float, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mA86928BC888E342D2C2644535E3399952F5077ED_RuntimeMethod_var, L_66, L_67);
		LimitVelocityOverLifetimeModule_set_limitMultiplier_m520C77C943C30BFE63EF0E4BEA9593D251187B28((&V_0), L_68, NULL);
		// break;
		goto IL_02b9;
	}

IL_027c:
	{
		// instance.dampen = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_69 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_70 = ((ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_69);
		float L_71;
		L_71 = GenericVirtualFuncInvoker1< float, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mA86928BC888E342D2C2644535E3399952F5077ED_RuntimeMethod_var, L_69, L_70);
		LimitVelocityOverLifetimeModule_set_dampen_mE8A893ECFE936519C3F68D440C3C6BD11065E288((&V_0), L_71, NULL);
		// break;
		goto IL_02b9;
	}

IL_0290:
	{
		// instance.separateAxes = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_72 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_73 = ((ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_72);
		bool L_74;
		L_74 = GenericVirtualFuncInvoker1< bool, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mFFB70EE53D8CD0255A4E599780F62A3EB1520E83_RuntimeMethod_var, L_72, L_73);
		LimitVelocityOverLifetimeModule_set_separateAxes_m3E1D0590D45FE0D6657D99685DA4E5A231229EF0((&V_0), L_74, NULL);
		// break;
		goto IL_02b9;
	}

IL_02a4:
	{
		// instance.space = reader.Read<UnityEngine.ParticleSystemSimulationSpace>();
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_75 = ___reader0;
		NullCheck(L_75);
		int32_t L_76;
		L_76 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisParticleSystemSimulationSpace_tB3693D8A3C0FCE63D060546071006AC4ABC60B05_mE28AF5CD31B164FD849D4D05A9C6E60F95D67243_RuntimeMethod_var, L_75);
		LimitVelocityOverLifetimeModule_set_space_m54D13D862FCB1606F37A3F053138437DEBF773D5((&V_0), L_76, NULL);
		// break;
		goto IL_02b9;
	}

IL_02b3:
	{
		// reader.Skip();
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_77 = ___reader0;
		NullCheck(L_77);
		VirtualActionInvoker0::Invoke(41 /* System.Void ES3Reader::Skip() */, L_77);
	}

IL_02b9:
	{
		// while((propertyName = reader.ReadPropertyName()) != null)
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_78 = ___reader0;
		NullCheck(L_78);
		String_t* L_79;
		L_79 = VirtualFuncInvoker0< String_t* >::Invoke(21 /* System.String ES3Reader::ReadPropertyName() */, L_78);
		String_t* L_80 = L_79;
		V_1 = L_80;
		if (L_80)
		{
			goto IL_000c;
		}
	}
	{
		// }
		return;
	}
}
// System.Void ES3Types.ES3Type_LimitVelocityOverLifetimeModule::ReadInto<UnityEngine.ParticleSystem/ExternalForcesModule>(ES3Reader,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ES3Type_LimitVelocityOverLifetimeModule_ReadInto_TisExternalForcesModule_t4494E21ECF96F072432EF4DDC5F84BAF84912FC7_m308E823297A2A2A4EB01ED1484854DC25673B5AB_gshared (ES3Type_LimitVelocityOverLifetimeModule_t0B3EB57F7FF7F9D1F6D99783CAB9DF9ADCEDE92B* __this, ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* ___reader0, RuntimeObject* ___obj1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mFFB70EE53D8CD0255A4E599780F62A3EB1520E83_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_m9D6B4042B923127DEA4A2CAA3E35EED37D75B3D0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisParticleSystemSimulationSpace_tB3693D8A3C0FCE63D060546071006AC4ABC60B05_mE28AF5CD31B164FD849D4D05A9C6E60F95D67243_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mA86928BC888E342D2C2644535E3399952F5077ED_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_MinMaxCurve_t1C147718750ACBECE5D2B7F545D2A434A3C5409B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LimitVelocityOverLifetimeModule_tC52CF1434E2639EE5D81DD6BA269FF38CA17D8B1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0EA7F3FF9751D1C0670732BE07C84116AD963E2D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0FC0575E5B3BFD69FE0E6DACB4257E1AB52484B5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1B024D537329B86AB0DF96B2A714180F442F53E9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral21CEBAC0172EB4FB67A8A2698C7F35355100D5F7);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral46FADEB9E998225AA96BA7F96F3C6FE519B52F62);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral60D92E37F6F99139C65CA6248F17911C762F4DD6);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral744761D527F44F04E435DEFCA1E21E179B60B0E4);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA3C8F2A441D7C8A8A2D967375934EFA74D7FE1E8);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD18A8AB8F50A606429410D3C3F543B352E7D6033);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE0F9D9926B214819D0D0E8B1814BCF46C90D0956);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE1291C4D47635E327ECFE39842BD1A93F58C61A2);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B);
		s_Il2CppMethodInitialized = true;
	}
	LimitVelocityOverLifetimeModule_tC52CF1434E2639EE5D81DD6BA269FF38CA17D8B1 V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	uint32_t V_2 = 0;
	{
		// var instance = (UnityEngine.ParticleSystem.LimitVelocityOverLifetimeModule)obj;
		RuntimeObject* L_0 = ___obj1;
		V_0 = ((*(LimitVelocityOverLifetimeModule_tC52CF1434E2639EE5D81DD6BA269FF38CA17D8B1*)((LimitVelocityOverLifetimeModule_tC52CF1434E2639EE5D81DD6BA269FF38CA17D8B1*)(LimitVelocityOverLifetimeModule_tC52CF1434E2639EE5D81DD6BA269FF38CA17D8B1*)UnBox(L_0, LimitVelocityOverLifetimeModule_tC52CF1434E2639EE5D81DD6BA269FF38CA17D8B1_il2cpp_TypeInfo_var))));
		goto IL_02b9;
	}

IL_000c:
	{
		String_t* L_1 = V_1;
		uint32_t L_2;
		L_2 = U3CPrivateImplementationDetailsU3E_ComputeStringHash_m6EA1F233618497AEFF8902A5EDFA24C74E2F2876(L_1, NULL);
		V_2 = L_2;
		uint32_t L_3 = V_2;
		if ((!(((uint32_t)L_3) <= ((uint32_t)((int32_t)1319695307)))))
		{
			goto IL_006f;
		}
	}
	{
		uint32_t L_4 = V_2;
		if ((!(((uint32_t)L_4) <= ((uint32_t)((int32_t)691593499)))))
		{
			goto IL_0049;
		}
	}
	{
		uint32_t L_5 = V_2;
		if ((((int32_t)L_5) == ((int32_t)((int32_t)49525662))))
		{
			goto IL_00bd;
		}
	}
	{
		uint32_t L_6 = V_2;
		if ((((int32_t)L_6) == ((int32_t)((int32_t)572581548))))
		{
			goto IL_0111;
		}
	}
	{
		uint32_t L_7 = V_2;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)691593499))))
		{
			goto IL_00e7;
		}
	}
	{
		goto IL_02b3;
	}

IL_0049:
	{
		uint32_t L_8 = V_2;
		if ((((int32_t)L_8) == ((int32_t)((int32_t)853203252))))
		{
			goto IL_0150;
		}
	}
	{
		uint32_t L_9 = V_2;
		if ((((int32_t)L_9) == ((int32_t)((int32_t)894689925))))
		{
			goto IL_01a4;
		}
	}
	{
		uint32_t L_10 = V_2;
		if ((((int32_t)L_10) == ((int32_t)((int32_t)1319695307))))
		{
			goto IL_0165;
		}
	}
	{
		goto IL_02b3;
	}

IL_006f:
	{
		uint32_t L_11 = V_2;
		if ((!(((uint32_t)L_11) <= ((uint32_t)((int32_t)2072266391)))))
		{
			goto IL_0097;
		}
	}
	{
		uint32_t L_12 = V_2;
		if ((((int32_t)L_12) == ((int32_t)((int32_t)1479031685))))
		{
			goto IL_018f;
		}
	}
	{
		uint32_t L_13 = V_2;
		if ((((int32_t)L_13) == ((int32_t)((int32_t)2055488772))))
		{
			goto IL_00d2;
		}
	}
	{
		uint32_t L_14 = V_2;
		if ((((int32_t)L_14) == ((int32_t)((int32_t)2072266391))))
		{
			goto IL_00fc;
		}
	}
	{
		goto IL_02b3;
	}

IL_0097:
	{
		uint32_t L_15 = V_2;
		if ((((int32_t)L_15) == ((int32_t)((int32_t)2089044010))))
		{
			goto IL_0126;
		}
	}
	{
		uint32_t L_16 = V_2;
		if ((((int32_t)L_16) == ((int32_t)((int32_t)-1976734835))))
		{
			goto IL_013b;
		}
	}
	{
		uint32_t L_17 = V_2;
		if ((((int32_t)L_17) == ((int32_t)((int32_t)-1124873996))))
		{
			goto IL_017a;
		}
	}
	{
		goto IL_02b3;
	}

IL_00bd:
	{
		String_t* L_18 = V_1;
		bool L_19;
		L_19 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_18, _stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B, NULL);
		if (L_19)
		{
			goto IL_01b9;
		}
	}
	{
		goto IL_02b3;
	}

IL_00d2:
	{
		String_t* L_20 = V_1;
		bool L_21;
		L_21 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_20, _stringLiteral46FADEB9E998225AA96BA7F96F3C6FE519B52F62, NULL);
		if (L_21)
		{
			goto IL_01d0;
		}
	}
	{
		goto IL_02b3;
	}

IL_00e7:
	{
		String_t* L_22 = V_1;
		bool L_23;
		L_23 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_22, _stringLiteral744761D527F44F04E435DEFCA1E21E179B60B0E4, NULL);
		if (L_23)
		{
			goto IL_01e7;
		}
	}
	{
		goto IL_02b3;
	}

IL_00fc:
	{
		String_t* L_24 = V_1;
		bool L_25;
		L_25 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_24, _stringLiteral60D92E37F6F99139C65CA6248F17911C762F4DD6, NULL);
		if (L_25)
		{
			goto IL_01fe;
		}
	}
	{
		goto IL_02b3;
	}

IL_0111:
	{
		String_t* L_26 = V_1;
		bool L_27;
		L_27 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_26, _stringLiteral0FC0575E5B3BFD69FE0E6DACB4257E1AB52484B5, NULL);
		if (L_27)
		{
			goto IL_0215;
		}
	}
	{
		goto IL_02b3;
	}

IL_0126:
	{
		String_t* L_28 = V_1;
		bool L_29;
		L_29 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_28, _stringLiteralD18A8AB8F50A606429410D3C3F543B352E7D6033, NULL);
		if (L_29)
		{
			goto IL_022c;
		}
	}
	{
		goto IL_02b3;
	}

IL_013b:
	{
		String_t* L_30 = V_1;
		bool L_31;
		L_31 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_30, _stringLiteral21CEBAC0172EB4FB67A8A2698C7F35355100D5F7, NULL);
		if (L_31)
		{
			goto IL_0240;
		}
	}
	{
		goto IL_02b3;
	}

IL_0150:
	{
		String_t* L_32 = V_1;
		bool L_33;
		L_33 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_32, _stringLiteralA3C8F2A441D7C8A8A2D967375934EFA74D7FE1E8, NULL);
		if (L_33)
		{
			goto IL_0254;
		}
	}
	{
		goto IL_02b3;
	}

IL_0165:
	{
		String_t* L_34 = V_1;
		bool L_35;
		L_35 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_34, _stringLiteralE0F9D9926B214819D0D0E8B1814BCF46C90D0956, NULL);
		if (L_35)
		{
			goto IL_0268;
		}
	}
	{
		goto IL_02b3;
	}

IL_017a:
	{
		String_t* L_36 = V_1;
		bool L_37;
		L_37 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_36, _stringLiteral0EA7F3FF9751D1C0670732BE07C84116AD963E2D, NULL);
		if (L_37)
		{
			goto IL_027c;
		}
	}
	{
		goto IL_02b3;
	}

IL_018f:
	{
		String_t* L_38 = V_1;
		bool L_39;
		L_39 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_38, _stringLiteral1B024D537329B86AB0DF96B2A714180F442F53E9, NULL);
		if (L_39)
		{
			goto IL_0290;
		}
	}
	{
		goto IL_02b3;
	}

IL_01a4:
	{
		String_t* L_40 = V_1;
		bool L_41;
		L_41 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_40, _stringLiteralE1291C4D47635E327ECFE39842BD1A93F58C61A2, NULL);
		if (L_41)
		{
			goto IL_02a4;
		}
	}
	{
		goto IL_02b3;
	}

IL_01b9:
	{
		// instance.enabled = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_42 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_43 = ((ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_42);
		bool L_44;
		L_44 = GenericVirtualFuncInvoker1< bool, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mFFB70EE53D8CD0255A4E599780F62A3EB1520E83_RuntimeMethod_var, L_42, L_43);
		LimitVelocityOverLifetimeModule_set_enabled_m0C4AC7078A4009C764CDD6C852747161626030F8((&V_0), L_44, NULL);
		// break;
		goto IL_02b9;
	}

IL_01d0:
	{
		// instance.limitX = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_45 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_46 = ((ES3Type_MinMaxCurve_t1C147718750ACBECE5D2B7F545D2A434A3C5409B_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t1C147718750ACBECE5D2B7F545D2A434A3C5409B_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_45);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_47;
		L_47 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_m9D6B4042B923127DEA4A2CAA3E35EED37D75B3D0_RuntimeMethod_var, L_45, L_46);
		LimitVelocityOverLifetimeModule_set_limitX_m453163A173E91BD1FA92A85FFFB1377922264E88((&V_0), L_47, NULL);
		// break;
		goto IL_02b9;
	}

IL_01e7:
	{
		// instance.limitXMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_48 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_49 = ((ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_48);
		float L_50;
		L_50 = GenericVirtualFuncInvoker1< float, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mA86928BC888E342D2C2644535E3399952F5077ED_RuntimeMethod_var, L_48, L_49);
		LimitVelocityOverLifetimeModule_set_limitXMultiplier_m69A35DBE2A96DB94E1C5857C1AEA7700F315FB69((&V_0), L_50, NULL);
		// break;
		goto IL_02b9;
	}

IL_01fe:
	{
		// instance.limitY = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_51 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_52 = ((ES3Type_MinMaxCurve_t1C147718750ACBECE5D2B7F545D2A434A3C5409B_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t1C147718750ACBECE5D2B7F545D2A434A3C5409B_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_51);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_53;
		L_53 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_m9D6B4042B923127DEA4A2CAA3E35EED37D75B3D0_RuntimeMethod_var, L_51, L_52);
		LimitVelocityOverLifetimeModule_set_limitY_m5C4FA3E4199843D17B358EAE552BC1530944C6ED((&V_0), L_53, NULL);
		// break;
		goto IL_02b9;
	}

IL_0215:
	{
		// instance.limitYMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_54 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_55 = ((ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_54);
		float L_56;
		L_56 = GenericVirtualFuncInvoker1< float, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mA86928BC888E342D2C2644535E3399952F5077ED_RuntimeMethod_var, L_54, L_55);
		LimitVelocityOverLifetimeModule_set_limitYMultiplier_mCB16226776AA3FD95FCBFEF08939CDFCDEAD1FD7((&V_0), L_56, NULL);
		// break;
		goto IL_02b9;
	}

IL_022c:
	{
		// instance.limitZ = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_57 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_58 = ((ES3Type_MinMaxCurve_t1C147718750ACBECE5D2B7F545D2A434A3C5409B_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t1C147718750ACBECE5D2B7F545D2A434A3C5409B_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_57);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_59;
		L_59 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_m9D6B4042B923127DEA4A2CAA3E35EED37D75B3D0_RuntimeMethod_var, L_57, L_58);
		LimitVelocityOverLifetimeModule_set_limitZ_mA7AA3F6C6EB9C1E2199DE5EDBFDFCD891E66A06C((&V_0), L_59, NULL);
		// break;
		goto IL_02b9;
	}

IL_0240:
	{
		// instance.limitZMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_60 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_61 = ((ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_60);
		float L_62;
		L_62 = GenericVirtualFuncInvoker1< float, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mA86928BC888E342D2C2644535E3399952F5077ED_RuntimeMethod_var, L_60, L_61);
		LimitVelocityOverLifetimeModule_set_limitZMultiplier_mF8318B3E8798E9778CD356C773A9567EBCC414DF((&V_0), L_62, NULL);
		// break;
		goto IL_02b9;
	}

IL_0254:
	{
		// instance.limit = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_63 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_64 = ((ES3Type_MinMaxCurve_t1C147718750ACBECE5D2B7F545D2A434A3C5409B_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t1C147718750ACBECE5D2B7F545D2A434A3C5409B_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_63);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_65;
		L_65 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_m9D6B4042B923127DEA4A2CAA3E35EED37D75B3D0_RuntimeMethod_var, L_63, L_64);
		LimitVelocityOverLifetimeModule_set_limit_m4714D5E0B04EAE01A49552690E9CC206AC5C7685((&V_0), L_65, NULL);
		// break;
		goto IL_02b9;
	}

IL_0268:
	{
		// instance.limitMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_66 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_67 = ((ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_66);
		float L_68;
		L_68 = GenericVirtualFuncInvoker1< float, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mA86928BC888E342D2C2644535E3399952F5077ED_RuntimeMethod_var, L_66, L_67);
		LimitVelocityOverLifetimeModule_set_limitMultiplier_m520C77C943C30BFE63EF0E4BEA9593D251187B28((&V_0), L_68, NULL);
		// break;
		goto IL_02b9;
	}

IL_027c:
	{
		// instance.dampen = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_69 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_70 = ((ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_69);
		float L_71;
		L_71 = GenericVirtualFuncInvoker1< float, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mA86928BC888E342D2C2644535E3399952F5077ED_RuntimeMethod_var, L_69, L_70);
		LimitVelocityOverLifetimeModule_set_dampen_mE8A893ECFE936519C3F68D440C3C6BD11065E288((&V_0), L_71, NULL);
		// break;
		goto IL_02b9;
	}

IL_0290:
	{
		// instance.separateAxes = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_72 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_73 = ((ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_72);
		bool L_74;
		L_74 = GenericVirtualFuncInvoker1< bool, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mFFB70EE53D8CD0255A4E599780F62A3EB1520E83_RuntimeMethod_var, L_72, L_73);
		LimitVelocityOverLifetimeModule_set_separateAxes_m3E1D0590D45FE0D6657D99685DA4E5A231229EF0((&V_0), L_74, NULL);
		// break;
		goto IL_02b9;
	}

IL_02a4:
	{
		// instance.space = reader.Read<UnityEngine.ParticleSystemSimulationSpace>();
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_75 = ___reader0;
		NullCheck(L_75);
		int32_t L_76;
		L_76 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisParticleSystemSimulationSpace_tB3693D8A3C0FCE63D060546071006AC4ABC60B05_mE28AF5CD31B164FD849D4D05A9C6E60F95D67243_RuntimeMethod_var, L_75);
		LimitVelocityOverLifetimeModule_set_space_m54D13D862FCB1606F37A3F053138437DEBF773D5((&V_0), L_76, NULL);
		// break;
		goto IL_02b9;
	}

IL_02b3:
	{
		// reader.Skip();
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_77 = ___reader0;
		NullCheck(L_77);
		VirtualActionInvoker0::Invoke(41 /* System.Void ES3Reader::Skip() */, L_77);
	}

IL_02b9:
	{
		// while((propertyName = reader.ReadPropertyName()) != null)
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_78 = ___reader0;
		NullCheck(L_78);
		String_t* L_79;
		L_79 = VirtualFuncInvoker0< String_t* >::Invoke(21 /* System.String ES3Reader::ReadPropertyName() */, L_78);
		String_t* L_80 = L_79;
		V_1 = L_80;
		if (L_80)
		{
			goto IL_000c;
		}
	}
	{
		// }
		return;
	}
}
// System.Void ES3Types.ES3Type_LimitVelocityOverLifetimeModule::ReadInto<UnityEngine.ParticleSystem/ForceOverLifetimeModule>(ES3Reader,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ES3Type_LimitVelocityOverLifetimeModule_ReadInto_TisForceOverLifetimeModule_t4859776EAF945AEA86044CAB63CA7A8AC8C14976_m60759CD7E78A478BD0029A2ACF4AA61A491A9DEF_gshared (ES3Type_LimitVelocityOverLifetimeModule_t0B3EB57F7FF7F9D1F6D99783CAB9DF9ADCEDE92B* __this, ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* ___reader0, RuntimeObject* ___obj1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mFFB70EE53D8CD0255A4E599780F62A3EB1520E83_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_m9D6B4042B923127DEA4A2CAA3E35EED37D75B3D0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisParticleSystemSimulationSpace_tB3693D8A3C0FCE63D060546071006AC4ABC60B05_mE28AF5CD31B164FD849D4D05A9C6E60F95D67243_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mA86928BC888E342D2C2644535E3399952F5077ED_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_MinMaxCurve_t1C147718750ACBECE5D2B7F545D2A434A3C5409B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LimitVelocityOverLifetimeModule_tC52CF1434E2639EE5D81DD6BA269FF38CA17D8B1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0EA7F3FF9751D1C0670732BE07C84116AD963E2D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0FC0575E5B3BFD69FE0E6DACB4257E1AB52484B5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1B024D537329B86AB0DF96B2A714180F442F53E9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral21CEBAC0172EB4FB67A8A2698C7F35355100D5F7);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral46FADEB9E998225AA96BA7F96F3C6FE519B52F62);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral60D92E37F6F99139C65CA6248F17911C762F4DD6);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral744761D527F44F04E435DEFCA1E21E179B60B0E4);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA3C8F2A441D7C8A8A2D967375934EFA74D7FE1E8);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD18A8AB8F50A606429410D3C3F543B352E7D6033);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE0F9D9926B214819D0D0E8B1814BCF46C90D0956);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE1291C4D47635E327ECFE39842BD1A93F58C61A2);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B);
		s_Il2CppMethodInitialized = true;
	}
	LimitVelocityOverLifetimeModule_tC52CF1434E2639EE5D81DD6BA269FF38CA17D8B1 V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	uint32_t V_2 = 0;
	{
		// var instance = (UnityEngine.ParticleSystem.LimitVelocityOverLifetimeModule)obj;
		RuntimeObject* L_0 = ___obj1;
		V_0 = ((*(LimitVelocityOverLifetimeModule_tC52CF1434E2639EE5D81DD6BA269FF38CA17D8B1*)((LimitVelocityOverLifetimeModule_tC52CF1434E2639EE5D81DD6BA269FF38CA17D8B1*)(LimitVelocityOverLifetimeModule_tC52CF1434E2639EE5D81DD6BA269FF38CA17D8B1*)UnBox(L_0, LimitVelocityOverLifetimeModule_tC52CF1434E2639EE5D81DD6BA269FF38CA17D8B1_il2cpp_TypeInfo_var))));
		goto IL_02b9;
	}

IL_000c:
	{
		String_t* L_1 = V_1;
		uint32_t L_2;
		L_2 = U3CPrivateImplementationDetailsU3E_ComputeStringHash_m6EA1F233618497AEFF8902A5EDFA24C74E2F2876(L_1, NULL);
		V_2 = L_2;
		uint32_t L_3 = V_2;
		if ((!(((uint32_t)L_3) <= ((uint32_t)((int32_t)1319695307)))))
		{
			goto IL_006f;
		}
	}
	{
		uint32_t L_4 = V_2;
		if ((!(((uint32_t)L_4) <= ((uint32_t)((int32_t)691593499)))))
		{
			goto IL_0049;
		}
	}
	{
		uint32_t L_5 = V_2;
		if ((((int32_t)L_5) == ((int32_t)((int32_t)49525662))))
		{
			goto IL_00bd;
		}
	}
	{
		uint32_t L_6 = V_2;
		if ((((int32_t)L_6) == ((int32_t)((int32_t)572581548))))
		{
			goto IL_0111;
		}
	}
	{
		uint32_t L_7 = V_2;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)691593499))))
		{
			goto IL_00e7;
		}
	}
	{
		goto IL_02b3;
	}

IL_0049:
	{
		uint32_t L_8 = V_2;
		if ((((int32_t)L_8) == ((int32_t)((int32_t)853203252))))
		{
			goto IL_0150;
		}
	}
	{
		uint32_t L_9 = V_2;
		if ((((int32_t)L_9) == ((int32_t)((int32_t)894689925))))
		{
			goto IL_01a4;
		}
	}
	{
		uint32_t L_10 = V_2;
		if ((((int32_t)L_10) == ((int32_t)((int32_t)1319695307))))
		{
			goto IL_0165;
		}
	}
	{
		goto IL_02b3;
	}

IL_006f:
	{
		uint32_t L_11 = V_2;
		if ((!(((uint32_t)L_11) <= ((uint32_t)((int32_t)2072266391)))))
		{
			goto IL_0097;
		}
	}
	{
		uint32_t L_12 = V_2;
		if ((((int32_t)L_12) == ((int32_t)((int32_t)1479031685))))
		{
			goto IL_018f;
		}
	}
	{
		uint32_t L_13 = V_2;
		if ((((int32_t)L_13) == ((int32_t)((int32_t)2055488772))))
		{
			goto IL_00d2;
		}
	}
	{
		uint32_t L_14 = V_2;
		if ((((int32_t)L_14) == ((int32_t)((int32_t)2072266391))))
		{
			goto IL_00fc;
		}
	}
	{
		goto IL_02b3;
	}

IL_0097:
	{
		uint32_t L_15 = V_2;
		if ((((int32_t)L_15) == ((int32_t)((int32_t)2089044010))))
		{
			goto IL_0126;
		}
	}
	{
		uint32_t L_16 = V_2;
		if ((((int32_t)L_16) == ((int32_t)((int32_t)-1976734835))))
		{
			goto IL_013b;
		}
	}
	{
		uint32_t L_17 = V_2;
		if ((((int32_t)L_17) == ((int32_t)((int32_t)-1124873996))))
		{
			goto IL_017a;
		}
	}
	{
		goto IL_02b3;
	}

IL_00bd:
	{
		String_t* L_18 = V_1;
		bool L_19;
		L_19 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_18, _stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B, NULL);
		if (L_19)
		{
			goto IL_01b9;
		}
	}
	{
		goto IL_02b3;
	}

IL_00d2:
	{
		String_t* L_20 = V_1;
		bool L_21;
		L_21 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_20, _stringLiteral46FADEB9E998225AA96BA7F96F3C6FE519B52F62, NULL);
		if (L_21)
		{
			goto IL_01d0;
		}
	}
	{
		goto IL_02b3;
	}

IL_00e7:
	{
		String_t* L_22 = V_1;
		bool L_23;
		L_23 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_22, _stringLiteral744761D527F44F04E435DEFCA1E21E179B60B0E4, NULL);
		if (L_23)
		{
			goto IL_01e7;
		}
	}
	{
		goto IL_02b3;
	}

IL_00fc:
	{
		String_t* L_24 = V_1;
		bool L_25;
		L_25 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_24, _stringLiteral60D92E37F6F99139C65CA6248F17911C762F4DD6, NULL);
		if (L_25)
		{
			goto IL_01fe;
		}
	}
	{
		goto IL_02b3;
	}

IL_0111:
	{
		String_t* L_26 = V_1;
		bool L_27;
		L_27 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_26, _stringLiteral0FC0575E5B3BFD69FE0E6DACB4257E1AB52484B5, NULL);
		if (L_27)
		{
			goto IL_0215;
		}
	}
	{
		goto IL_02b3;
	}

IL_0126:
	{
		String_t* L_28 = V_1;
		bool L_29;
		L_29 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_28, _stringLiteralD18A8AB8F50A606429410D3C3F543B352E7D6033, NULL);
		if (L_29)
		{
			goto IL_022c;
		}
	}
	{
		goto IL_02b3;
	}

IL_013b:
	{
		String_t* L_30 = V_1;
		bool L_31;
		L_31 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_30, _stringLiteral21CEBAC0172EB4FB67A8A2698C7F35355100D5F7, NULL);
		if (L_31)
		{
			goto IL_0240;
		}
	}
	{
		goto IL_02b3;
	}

IL_0150:
	{
		String_t* L_32 = V_1;
		bool L_33;
		L_33 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_32, _stringLiteralA3C8F2A441D7C8A8A2D967375934EFA74D7FE1E8, NULL);
		if (L_33)
		{
			goto IL_0254;
		}
	}
	{
		goto IL_02b3;
	}

IL_0165:
	{
		String_t* L_34 = V_1;
		bool L_35;
		L_35 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_34, _stringLiteralE0F9D9926B214819D0D0E8B1814BCF46C90D0956, NULL);
		if (L_35)
		{
			goto IL_0268;
		}
	}
	{
		goto IL_02b3;
	}

IL_017a:
	{
		String_t* L_36 = V_1;
		bool L_37;
		L_37 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_36, _stringLiteral0EA7F3FF9751D1C0670732BE07C84116AD963E2D, NULL);
		if (L_37)
		{
			goto IL_027c;
		}
	}
	{
		goto IL_02b3;
	}

IL_018f:
	{
		String_t* L_38 = V_1;
		bool L_39;
		L_39 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_38, _stringLiteral1B024D537329B86AB0DF96B2A714180F442F53E9, NULL);
		if (L_39)
		{
			goto IL_0290;
		}
	}
	{
		goto IL_02b3;
	}

IL_01a4:
	{
		String_t* L_40 = V_1;
		bool L_41;
		L_41 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_40, _stringLiteralE1291C4D47635E327ECFE39842BD1A93F58C61A2, NULL);
		if (L_41)
		{
			goto IL_02a4;
		}
	}
	{
		goto IL_02b3;
	}

IL_01b9:
	{
		// instance.enabled = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_42 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_43 = ((ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_42);
		bool L_44;
		L_44 = GenericVirtualFuncInvoker1< bool, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mFFB70EE53D8CD0255A4E599780F62A3EB1520E83_RuntimeMethod_var, L_42, L_43);
		LimitVelocityOverLifetimeModule_set_enabled_m0C4AC7078A4009C764CDD6C852747161626030F8((&V_0), L_44, NULL);
		// break;
		goto IL_02b9;
	}

IL_01d0:
	{
		// instance.limitX = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_45 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_46 = ((ES3Type_MinMaxCurve_t1C147718750ACBECE5D2B7F545D2A434A3C5409B_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t1C147718750ACBECE5D2B7F545D2A434A3C5409B_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_45);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_47;
		L_47 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_m9D6B4042B923127DEA4A2CAA3E35EED37D75B3D0_RuntimeMethod_var, L_45, L_46);
		LimitVelocityOverLifetimeModule_set_limitX_m453163A173E91BD1FA92A85FFFB1377922264E88((&V_0), L_47, NULL);
		// break;
		goto IL_02b9;
	}

IL_01e7:
	{
		// instance.limitXMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_48 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_49 = ((ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_48);
		float L_50;
		L_50 = GenericVirtualFuncInvoker1< float, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mA86928BC888E342D2C2644535E3399952F5077ED_RuntimeMethod_var, L_48, L_49);
		LimitVelocityOverLifetimeModule_set_limitXMultiplier_m69A35DBE2A96DB94E1C5857C1AEA7700F315FB69((&V_0), L_50, NULL);
		// break;
		goto IL_02b9;
	}

IL_01fe:
	{
		// instance.limitY = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_51 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_52 = ((ES3Type_MinMaxCurve_t1C147718750ACBECE5D2B7F545D2A434A3C5409B_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t1C147718750ACBECE5D2B7F545D2A434A3C5409B_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_51);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_53;
		L_53 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_m9D6B4042B923127DEA4A2CAA3E35EED37D75B3D0_RuntimeMethod_var, L_51, L_52);
		LimitVelocityOverLifetimeModule_set_limitY_m5C4FA3E4199843D17B358EAE552BC1530944C6ED((&V_0), L_53, NULL);
		// break;
		goto IL_02b9;
	}

IL_0215:
	{
		// instance.limitYMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_54 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_55 = ((ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_54);
		float L_56;
		L_56 = GenericVirtualFuncInvoker1< float, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mA86928BC888E342D2C2644535E3399952F5077ED_RuntimeMethod_var, L_54, L_55);
		LimitVelocityOverLifetimeModule_set_limitYMultiplier_mCB16226776AA3FD95FCBFEF08939CDFCDEAD1FD7((&V_0), L_56, NULL);
		// break;
		goto IL_02b9;
	}

IL_022c:
	{
		// instance.limitZ = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_57 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_58 = ((ES3Type_MinMaxCurve_t1C147718750ACBECE5D2B7F545D2A434A3C5409B_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t1C147718750ACBECE5D2B7F545D2A434A3C5409B_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_57);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_59;
		L_59 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_m9D6B4042B923127DEA4A2CAA3E35EED37D75B3D0_RuntimeMethod_var, L_57, L_58);
		LimitVelocityOverLifetimeModule_set_limitZ_mA7AA3F6C6EB9C1E2199DE5EDBFDFCD891E66A06C((&V_0), L_59, NULL);
		// break;
		goto IL_02b9;
	}

IL_0240:
	{
		// instance.limitZMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_60 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_61 = ((ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_60);
		float L_62;
		L_62 = GenericVirtualFuncInvoker1< float, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mA86928BC888E342D2C2644535E3399952F5077ED_RuntimeMethod_var, L_60, L_61);
		LimitVelocityOverLifetimeModule_set_limitZMultiplier_mF8318B3E8798E9778CD356C773A9567EBCC414DF((&V_0), L_62, NULL);
		// break;
		goto IL_02b9;
	}

IL_0254:
	{
		// instance.limit = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_63 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_64 = ((ES3Type_MinMaxCurve_t1C147718750ACBECE5D2B7F545D2A434A3C5409B_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t1C147718750ACBECE5D2B7F545D2A434A3C5409B_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_63);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_65;
		L_65 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_m9D6B4042B923127DEA4A2CAA3E35EED37D75B3D0_RuntimeMethod_var, L_63, L_64);
		LimitVelocityOverLifetimeModule_set_limit_m4714D5E0B04EAE01A49552690E9CC206AC5C7685((&V_0), L_65, NULL);
		// break;
		goto IL_02b9;
	}

IL_0268:
	{
		// instance.limitMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_66 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_67 = ((ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_66);
		float L_68;
		L_68 = GenericVirtualFuncInvoker1< float, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mA86928BC888E342D2C2644535E3399952F5077ED_RuntimeMethod_var, L_66, L_67);
		LimitVelocityOverLifetimeModule_set_limitMultiplier_m520C77C943C30BFE63EF0E4BEA9593D251187B28((&V_0), L_68, NULL);
		// break;
		goto IL_02b9;
	}

IL_027c:
	{
		// instance.dampen = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_69 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_70 = ((ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_69);
		float L_71;
		L_71 = GenericVirtualFuncInvoker1< float, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mA86928BC888E342D2C2644535E3399952F5077ED_RuntimeMethod_var, L_69, L_70);
		LimitVelocityOverLifetimeModule_set_dampen_mE8A893ECFE936519C3F68D440C3C6BD11065E288((&V_0), L_71, NULL);
		// break;
		goto IL_02b9;
	}

IL_0290:
	{
		// instance.separateAxes = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_72 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_73 = ((ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_72);
		bool L_74;
		L_74 = GenericVirtualFuncInvoker1< bool, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mFFB70EE53D8CD0255A4E599780F62A3EB1520E83_RuntimeMethod_var, L_72, L_73);
		LimitVelocityOverLifetimeModule_set_separateAxes_m3E1D0590D45FE0D6657D99685DA4E5A231229EF0((&V_0), L_74, NULL);
		// break;
		goto IL_02b9;
	}

IL_02a4:
	{
		// instance.space = reader.Read<UnityEngine.ParticleSystemSimulationSpace>();
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_75 = ___reader0;
		NullCheck(L_75);
		int32_t L_76;
		L_76 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisParticleSystemSimulationSpace_tB3693D8A3C0FCE63D060546071006AC4ABC60B05_mE28AF5CD31B164FD849D4D05A9C6E60F95D67243_RuntimeMethod_var, L_75);
		LimitVelocityOverLifetimeModule_set_space_m54D13D862FCB1606F37A3F053138437DEBF773D5((&V_0), L_76, NULL);
		// break;
		goto IL_02b9;
	}

IL_02b3:
	{
		// reader.Skip();
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_77 = ___reader0;
		NullCheck(L_77);
		VirtualActionInvoker0::Invoke(41 /* System.Void ES3Reader::Skip() */, L_77);
	}

IL_02b9:
	{
		// while((propertyName = reader.ReadPropertyName()) != null)
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_78 = ___reader0;
		NullCheck(L_78);
		String_t* L_79;
		L_79 = VirtualFuncInvoker0< String_t* >::Invoke(21 /* System.String ES3Reader::ReadPropertyName() */, L_78);
		String_t* L_80 = L_79;
		V_1 = L_80;
		if (L_80)
		{
			goto IL_000c;
		}
	}
	{
		// }
		return;
	}
}
// System.Void ES3Types.ES3Type_LimitVelocityOverLifetimeModule::ReadInto<UnityEngine.ParticleSystem/InheritVelocityModule>(ES3Reader,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ES3Type_LimitVelocityOverLifetimeModule_ReadInto_TisInheritVelocityModule_tB71B2EDCAF328647DDB6BC79541D7C5E76C19562_m3025F0759E26E4E10C02595A9F5EF684E94C8FDA_gshared (ES3Type_LimitVelocityOverLifetimeModule_t0B3EB57F7FF7F9D1F6D99783CAB9DF9ADCEDE92B* __this, ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* ___reader0, RuntimeObject* ___obj1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mFFB70EE53D8CD0255A4E599780F62A3EB1520E83_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_m9D6B4042B923127DEA4A2CAA3E35EED37D75B3D0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisParticleSystemSimulationSpace_tB3693D8A3C0FCE63D060546071006AC4ABC60B05_mE28AF5CD31B164FD849D4D05A9C6E60F95D67243_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mA86928BC888E342D2C2644535E3399952F5077ED_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_MinMaxCurve_t1C147718750ACBECE5D2B7F545D2A434A3C5409B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LimitVelocityOverLifetimeModule_tC52CF1434E2639EE5D81DD6BA269FF38CA17D8B1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0EA7F3FF9751D1C0670732BE07C84116AD963E2D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0FC0575E5B3BFD69FE0E6DACB4257E1AB52484B5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1B024D537329B86AB0DF96B2A714180F442F53E9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral21CEBAC0172EB4FB67A8A2698C7F35355100D5F7);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral46FADEB9E998225AA96BA7F96F3C6FE519B52F62);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral60D92E37F6F99139C65CA6248F17911C762F4DD6);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral744761D527F44F04E435DEFCA1E21E179B60B0E4);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA3C8F2A441D7C8A8A2D967375934EFA74D7FE1E8);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD18A8AB8F50A606429410D3C3F543B352E7D6033);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE0F9D9926B214819D0D0E8B1814BCF46C90D0956);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE1291C4D47635E327ECFE39842BD1A93F58C61A2);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B);
		s_Il2CppMethodInitialized = true;
	}
	LimitVelocityOverLifetimeModule_tC52CF1434E2639EE5D81DD6BA269FF38CA17D8B1 V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	uint32_t V_2 = 0;
	{
		// var instance = (UnityEngine.ParticleSystem.LimitVelocityOverLifetimeModule)obj;
		RuntimeObject* L_0 = ___obj1;
		V_0 = ((*(LimitVelocityOverLifetimeModule_tC52CF1434E2639EE5D81DD6BA269FF38CA17D8B1*)((LimitVelocityOverLifetimeModule_tC52CF1434E2639EE5D81DD6BA269FF38CA17D8B1*)(LimitVelocityOverLifetimeModule_tC52CF1434E2639EE5D81DD6BA269FF38CA17D8B1*)UnBox(L_0, LimitVelocityOverLifetimeModule_tC52CF1434E2639EE5D81DD6BA269FF38CA17D8B1_il2cpp_TypeInfo_var))));
		goto IL_02b9;
	}

IL_000c:
	{
		String_t* L_1 = V_1;
		uint32_t L_2;
		L_2 = U3CPrivateImplementationDetailsU3E_ComputeStringHash_m6EA1F233618497AEFF8902A5EDFA24C74E2F2876(L_1, NULL);
		V_2 = L_2;
		uint32_t L_3 = V_2;
		if ((!(((uint32_t)L_3) <= ((uint32_t)((int32_t)1319695307)))))
		{
			goto IL_006f;
		}
	}
	{
		uint32_t L_4 = V_2;
		if ((!(((uint32_t)L_4) <= ((uint32_t)((int32_t)691593499)))))
		{
			goto IL_0049;
		}
	}
	{
		uint32_t L_5 = V_2;
		if ((((int32_t)L_5) == ((int32_t)((int32_t)49525662))))
		{
			goto IL_00bd;
		}
	}
	{
		uint32_t L_6 = V_2;
		if ((((int32_t)L_6) == ((int32_t)((int32_t)572581548))))
		{
			goto IL_0111;
		}
	}
	{
		uint32_t L_7 = V_2;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)691593499))))
		{
			goto IL_00e7;
		}
	}
	{
		goto IL_02b3;
	}

IL_0049:
	{
		uint32_t L_8 = V_2;
		if ((((int32_t)L_8) == ((int32_t)((int32_t)853203252))))
		{
			goto IL_0150;
		}
	}
	{
		uint32_t L_9 = V_2;
		if ((((int32_t)L_9) == ((int32_t)((int32_t)894689925))))
		{
			goto IL_01a4;
		}
	}
	{
		uint32_t L_10 = V_2;
		if ((((int32_t)L_10) == ((int32_t)((int32_t)1319695307))))
		{
			goto IL_0165;
		}
	}
	{
		goto IL_02b3;
	}

IL_006f:
	{
		uint32_t L_11 = V_2;
		if ((!(((uint32_t)L_11) <= ((uint32_t)((int32_t)2072266391)))))
		{
			goto IL_0097;
		}
	}
	{
		uint32_t L_12 = V_2;
		if ((((int32_t)L_12) == ((int32_t)((int32_t)1479031685))))
		{
			goto IL_018f;
		}
	}
	{
		uint32_t L_13 = V_2;
		if ((((int32_t)L_13) == ((int32_t)((int32_t)2055488772))))
		{
			goto IL_00d2;
		}
	}
	{
		uint32_t L_14 = V_2;
		if ((((int32_t)L_14) == ((int32_t)((int32_t)2072266391))))
		{
			goto IL_00fc;
		}
	}
	{
		goto IL_02b3;
	}

IL_0097:
	{
		uint32_t L_15 = V_2;
		if ((((int32_t)L_15) == ((int32_t)((int32_t)2089044010))))
		{
			goto IL_0126;
		}
	}
	{
		uint32_t L_16 = V_2;
		if ((((int32_t)L_16) == ((int32_t)((int32_t)-1976734835))))
		{
			goto IL_013b;
		}
	}
	{
		uint32_t L_17 = V_2;
		if ((((int32_t)L_17) == ((int32_t)((int32_t)-1124873996))))
		{
			goto IL_017a;
		}
	}
	{
		goto IL_02b3;
	}

IL_00bd:
	{
		String_t* L_18 = V_1;
		bool L_19;
		L_19 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_18, _stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B, NULL);
		if (L_19)
		{
			goto IL_01b9;
		}
	}
	{
		goto IL_02b3;
	}

IL_00d2:
	{
		String_t* L_20 = V_1;
		bool L_21;
		L_21 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_20, _stringLiteral46FADEB9E998225AA96BA7F96F3C6FE519B52F62, NULL);
		if (L_21)
		{
			goto IL_01d0;
		}
	}
	{
		goto IL_02b3;
	}

IL_00e7:
	{
		String_t* L_22 = V_1;
		bool L_23;
		L_23 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_22, _stringLiteral744761D527F44F04E435DEFCA1E21E179B60B0E4, NULL);
		if (L_23)
		{
			goto IL_01e7;
		}
	}
	{
		goto IL_02b3;
	}

IL_00fc:
	{
		String_t* L_24 = V_1;
		bool L_25;
		L_25 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_24, _stringLiteral60D92E37F6F99139C65CA6248F17911C762F4DD6, NULL);
		if (L_25)
		{
			goto IL_01fe;
		}
	}
	{
		goto IL_02b3;
	}

IL_0111:
	{
		String_t* L_26 = V_1;
		bool L_27;
		L_27 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_26, _stringLiteral0FC0575E5B3BFD69FE0E6DACB4257E1AB52484B5, NULL);
		if (L_27)
		{
			goto IL_0215;
		}
	}
	{
		goto IL_02b3;
	}

IL_0126:
	{
		String_t* L_28 = V_1;
		bool L_29;
		L_29 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_28, _stringLiteralD18A8AB8F50A606429410D3C3F543B352E7D6033, NULL);
		if (L_29)
		{
			goto IL_022c;
		}
	}
	{
		goto IL_02b3;
	}

IL_013b:
	{
		String_t* L_30 = V_1;
		bool L_31;
		L_31 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_30, _stringLiteral21CEBAC0172EB4FB67A8A2698C7F35355100D5F7, NULL);
		if (L_31)
		{
			goto IL_0240;
		}
	}
	{
		goto IL_02b3;
	}

IL_0150:
	{
		String_t* L_32 = V_1;
		bool L_33;
		L_33 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_32, _stringLiteralA3C8F2A441D7C8A8A2D967375934EFA74D7FE1E8, NULL);
		if (L_33)
		{
			goto IL_0254;
		}
	}
	{
		goto IL_02b3;
	}

IL_0165:
	{
		String_t* L_34 = V_1;
		bool L_35;
		L_35 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_34, _stringLiteralE0F9D9926B214819D0D0E8B1814BCF46C90D0956, NULL);
		if (L_35)
		{
			goto IL_0268;
		}
	}
	{
		goto IL_02b3;
	}

IL_017a:
	{
		String_t* L_36 = V_1;
		bool L_37;
		L_37 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_36, _stringLiteral0EA7F3FF9751D1C0670732BE07C84116AD963E2D, NULL);
		if (L_37)
		{
			goto IL_027c;
		}
	}
	{
		goto IL_02b3;
	}

IL_018f:
	{
		String_t* L_38 = V_1;
		bool L_39;
		L_39 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_38, _stringLiteral1B024D537329B86AB0DF96B2A714180F442F53E9, NULL);
		if (L_39)
		{
			goto IL_0290;
		}
	}
	{
		goto IL_02b3;
	}

IL_01a4:
	{
		String_t* L_40 = V_1;
		bool L_41;
		L_41 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_40, _stringLiteralE1291C4D47635E327ECFE39842BD1A93F58C61A2, NULL);
		if (L_41)
		{
			goto IL_02a4;
		}
	}
	{
		goto IL_02b3;
	}

IL_01b9:
	{
		// instance.enabled = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_42 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_43 = ((ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_42);
		bool L_44;
		L_44 = GenericVirtualFuncInvoker1< bool, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mFFB70EE53D8CD0255A4E599780F62A3EB1520E83_RuntimeMethod_var, L_42, L_43);
		LimitVelocityOverLifetimeModule_set_enabled_m0C4AC7078A4009C764CDD6C852747161626030F8((&V_0), L_44, NULL);
		// break;
		goto IL_02b9;
	}

IL_01d0:
	{
		// instance.limitX = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_45 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_46 = ((ES3Type_MinMaxCurve_t1C147718750ACBECE5D2B7F545D2A434A3C5409B_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t1C147718750ACBECE5D2B7F545D2A434A3C5409B_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_45);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_47;
		L_47 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_m9D6B4042B923127DEA4A2CAA3E35EED37D75B3D0_RuntimeMethod_var, L_45, L_46);
		LimitVelocityOverLifetimeModule_set_limitX_m453163A173E91BD1FA92A85FFFB1377922264E88((&V_0), L_47, NULL);
		// break;
		goto IL_02b9;
	}

IL_01e7:
	{
		// instance.limitXMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_48 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_49 = ((ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_48);
		float L_50;
		L_50 = GenericVirtualFuncInvoker1< float, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mA86928BC888E342D2C2644535E3399952F5077ED_RuntimeMethod_var, L_48, L_49);
		LimitVelocityOverLifetimeModule_set_limitXMultiplier_m69A35DBE2A96DB94E1C5857C1AEA7700F315FB69((&V_0), L_50, NULL);
		// break;
		goto IL_02b9;
	}

IL_01fe:
	{
		// instance.limitY = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_51 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_52 = ((ES3Type_MinMaxCurve_t1C147718750ACBECE5D2B7F545D2A434A3C5409B_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t1C147718750ACBECE5D2B7F545D2A434A3C5409B_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_51);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_53;
		L_53 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_m9D6B4042B923127DEA4A2CAA3E35EED37D75B3D0_RuntimeMethod_var, L_51, L_52);
		LimitVelocityOverLifetimeModule_set_limitY_m5C4FA3E4199843D17B358EAE552BC1530944C6ED((&V_0), L_53, NULL);
		// break;
		goto IL_02b9;
	}

IL_0215:
	{
		// instance.limitYMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_54 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_55 = ((ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_54);
		float L_56;
		L_56 = GenericVirtualFuncInvoker1< float, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mA86928BC888E342D2C2644535E3399952F5077ED_RuntimeMethod_var, L_54, L_55);
		LimitVelocityOverLifetimeModule_set_limitYMultiplier_mCB16226776AA3FD95FCBFEF08939CDFCDEAD1FD7((&V_0), L_56, NULL);
		// break;
		goto IL_02b9;
	}

IL_022c:
	{
		// instance.limitZ = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_57 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_58 = ((ES3Type_MinMaxCurve_t1C147718750ACBECE5D2B7F545D2A434A3C5409B_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t1C147718750ACBECE5D2B7F545D2A434A3C5409B_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_57);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_59;
		L_59 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_m9D6B4042B923127DEA4A2CAA3E35EED37D75B3D0_RuntimeMethod_var, L_57, L_58);
		LimitVelocityOverLifetimeModule_set_limitZ_mA7AA3F6C6EB9C1E2199DE5EDBFDFCD891E66A06C((&V_0), L_59, NULL);
		// break;
		goto IL_02b9;
	}

IL_0240:
	{
		// instance.limitZMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_60 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_61 = ((ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_60);
		float L_62;
		L_62 = GenericVirtualFuncInvoker1< float, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mA86928BC888E342D2C2644535E3399952F5077ED_RuntimeMethod_var, L_60, L_61);
		LimitVelocityOverLifetimeModule_set_limitZMultiplier_mF8318B3E8798E9778CD356C773A9567EBCC414DF((&V_0), L_62, NULL);
		// break;
		goto IL_02b9;
	}

IL_0254:
	{
		// instance.limit = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_63 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_64 = ((ES3Type_MinMaxCurve_t1C147718750ACBECE5D2B7F545D2A434A3C5409B_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t1C147718750ACBECE5D2B7F545D2A434A3C5409B_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_63);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_65;
		L_65 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_m9D6B4042B923127DEA4A2CAA3E35EED37D75B3D0_RuntimeMethod_var, L_63, L_64);
		LimitVelocityOverLifetimeModule_set_limit_m4714D5E0B04EAE01A49552690E9CC206AC5C7685((&V_0), L_65, NULL);
		// break;
		goto IL_02b9;
	}

IL_0268:
	{
		// instance.limitMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_66 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_67 = ((ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_66);
		float L_68;
		L_68 = GenericVirtualFuncInvoker1< float, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mA86928BC888E342D2C2644535E3399952F5077ED_RuntimeMethod_var, L_66, L_67);
		LimitVelocityOverLifetimeModule_set_limitMultiplier_m520C77C943C30BFE63EF0E4BEA9593D251187B28((&V_0), L_68, NULL);
		// break;
		goto IL_02b9;
	}

IL_027c:
	{
		// instance.dampen = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_69 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_70 = ((ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_69);
		float L_71;
		L_71 = GenericVirtualFuncInvoker1< float, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mA86928BC888E342D2C2644535E3399952F5077ED_RuntimeMethod_var, L_69, L_70);
		LimitVelocityOverLifetimeModule_set_dampen_mE8A893ECFE936519C3F68D440C3C6BD11065E288((&V_0), L_71, NULL);
		// break;
		goto IL_02b9;
	}

IL_0290:
	{
		// instance.separateAxes = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_72 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_73 = ((ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_72);
		bool L_74;
		L_74 = GenericVirtualFuncInvoker1< bool, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mFFB70EE53D8CD0255A4E599780F62A3EB1520E83_RuntimeMethod_var, L_72, L_73);
		LimitVelocityOverLifetimeModule_set_separateAxes_m3E1D0590D45FE0D6657D99685DA4E5A231229EF0((&V_0), L_74, NULL);
		// break;
		goto IL_02b9;
	}

IL_02a4:
	{
		// instance.space = reader.Read<UnityEngine.ParticleSystemSimulationSpace>();
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_75 = ___reader0;
		NullCheck(L_75);
		int32_t L_76;
		L_76 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisParticleSystemSimulationSpace_tB3693D8A3C0FCE63D060546071006AC4ABC60B05_mE28AF5CD31B164FD849D4D05A9C6E60F95D67243_RuntimeMethod_var, L_75);
		LimitVelocityOverLifetimeModule_set_space_m54D13D862FCB1606F37A3F053138437DEBF773D5((&V_0), L_76, NULL);
		// break;
		goto IL_02b9;
	}

IL_02b3:
	{
		// reader.Skip();
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_77 = ___reader0;
		NullCheck(L_77);
		VirtualActionInvoker0::Invoke(41 /* System.Void ES3Reader::Skip() */, L_77);
	}

IL_02b9:
	{
		// while((propertyName = reader.ReadPropertyName()) != null)
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_78 = ___reader0;
		NullCheck(L_78);
		String_t* L_79;
		L_79 = VirtualFuncInvoker0< String_t* >::Invoke(21 /* System.String ES3Reader::ReadPropertyName() */, L_78);
		String_t* L_80 = L_79;
		V_1 = L_80;
		if (L_80)
		{
			goto IL_000c;
		}
	}
	{
		// }
		return;
	}
}
// System.Void ES3Types.ES3Type_LimitVelocityOverLifetimeModule::ReadInto<UnityEngine.ParticleSystem/LightsModule>(ES3Reader,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ES3Type_LimitVelocityOverLifetimeModule_ReadInto_TisLightsModule_t720242ED070FD6C55E59B7536322829A22884C7E_mD6CE1B1D0CA60D3C6C7A9F3283D84A3DE459B9A5_gshared (ES3Type_LimitVelocityOverLifetimeModule_t0B3EB57F7FF7F9D1F6D99783CAB9DF9ADCEDE92B* __this, ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* ___reader0, RuntimeObject* ___obj1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mFFB70EE53D8CD0255A4E599780F62A3EB1520E83_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_m9D6B4042B923127DEA4A2CAA3E35EED37D75B3D0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisParticleSystemSimulationSpace_tB3693D8A3C0FCE63D060546071006AC4ABC60B05_mE28AF5CD31B164FD849D4D05A9C6E60F95D67243_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mA86928BC888E342D2C2644535E3399952F5077ED_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_MinMaxCurve_t1C147718750ACBECE5D2B7F545D2A434A3C5409B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LimitVelocityOverLifetimeModule_tC52CF1434E2639EE5D81DD6BA269FF38CA17D8B1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0EA7F3FF9751D1C0670732BE07C84116AD963E2D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0FC0575E5B3BFD69FE0E6DACB4257E1AB52484B5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1B024D537329B86AB0DF96B2A714180F442F53E9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral21CEBAC0172EB4FB67A8A2698C7F35355100D5F7);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral46FADEB9E998225AA96BA7F96F3C6FE519B52F62);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral60D92E37F6F99139C65CA6248F17911C762F4DD6);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral744761D527F44F04E435DEFCA1E21E179B60B0E4);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA3C8F2A441D7C8A8A2D967375934EFA74D7FE1E8);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD18A8AB8F50A606429410D3C3F543B352E7D6033);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE0F9D9926B214819D0D0E8B1814BCF46C90D0956);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE1291C4D47635E327ECFE39842BD1A93F58C61A2);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B);
		s_Il2CppMethodInitialized = true;
	}
	LimitVelocityOverLifetimeModule_tC52CF1434E2639EE5D81DD6BA269FF38CA17D8B1 V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	uint32_t V_2 = 0;
	{
		// var instance = (UnityEngine.ParticleSystem.LimitVelocityOverLifetimeModule)obj;
		RuntimeObject* L_0 = ___obj1;
		V_0 = ((*(LimitVelocityOverLifetimeModule_tC52CF1434E2639EE5D81DD6BA269FF38CA17D8B1*)((LimitVelocityOverLifetimeModule_tC52CF1434E2639EE5D81DD6BA269FF38CA17D8B1*)(LimitVelocityOverLifetimeModule_tC52CF1434E2639EE5D81DD6BA269FF38CA17D8B1*)UnBox(L_0, LimitVelocityOverLifetimeModule_tC52CF1434E2639EE5D81DD6BA269FF38CA17D8B1_il2cpp_TypeInfo_var))));
		goto IL_02b9;
	}

IL_000c:
	{
		String_t* L_1 = V_1;
		uint32_t L_2;
		L_2 = U3CPrivateImplementationDetailsU3E_ComputeStringHash_m6EA1F233618497AEFF8902A5EDFA24C74E2F2876(L_1, NULL);
		V_2 = L_2;
		uint32_t L_3 = V_2;
		if ((!(((uint32_t)L_3) <= ((uint32_t)((int32_t)1319695307)))))
		{
			goto IL_006f;
		}
	}
	{
		uint32_t L_4 = V_2;
		if ((!(((uint32_t)L_4) <= ((uint32_t)((int32_t)691593499)))))
		{
			goto IL_0049;
		}
	}
	{
		uint32_t L_5 = V_2;
		if ((((int32_t)L_5) == ((int32_t)((int32_t)49525662))))
		{
			goto IL_00bd;
		}
	}
	{
		uint32_t L_6 = V_2;
		if ((((int32_t)L_6) == ((int32_t)((int32_t)572581548))))
		{
			goto IL_0111;
		}
	}
	{
		uint32_t L_7 = V_2;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)691593499))))
		{
			goto IL_00e7;
		}
	}
	{
		goto IL_02b3;
	}

IL_0049:
	{
		uint32_t L_8 = V_2;
		if ((((int32_t)L_8) == ((int32_t)((int32_t)853203252))))
		{
			goto IL_0150;
		}
	}
	{
		uint32_t L_9 = V_2;
		if ((((int32_t)L_9) == ((int32_t)((int32_t)894689925))))
		{
			goto IL_01a4;
		}
	}
	{
		uint32_t L_10 = V_2;
		if ((((int32_t)L_10) == ((int32_t)((int32_t)1319695307))))
		{
			goto IL_0165;
		}
	}
	{
		goto IL_02b3;
	}

IL_006f:
	{
		uint32_t L_11 = V_2;
		if ((!(((uint32_t)L_11) <= ((uint32_t)((int32_t)2072266391)))))
		{
			goto IL_0097;
		}
	}
	{
		uint32_t L_12 = V_2;
		if ((((int32_t)L_12) == ((int32_t)((int32_t)1479031685))))
		{
			goto IL_018f;
		}
	}
	{
		uint32_t L_13 = V_2;
		if ((((int32_t)L_13) == ((int32_t)((int32_t)2055488772))))
		{
			goto IL_00d2;
		}
	}
	{
		uint32_t L_14 = V_2;
		if ((((int32_t)L_14) == ((int32_t)((int32_t)2072266391))))
		{
			goto IL_00fc;
		}
	}
	{
		goto IL_02b3;
	}

IL_0097:
	{
		uint32_t L_15 = V_2;
		if ((((int32_t)L_15) == ((int32_t)((int32_t)2089044010))))
		{
			goto IL_0126;
		}
	}
	{
		uint32_t L_16 = V_2;
		if ((((int32_t)L_16) == ((int32_t)((int32_t)-1976734835))))
		{
			goto IL_013b;
		}
	}
	{
		uint32_t L_17 = V_2;
		if ((((int32_t)L_17) == ((int32_t)((int32_t)-1124873996))))
		{
			goto IL_017a;
		}
	}
	{
		goto IL_02b3;
	}

IL_00bd:
	{
		String_t* L_18 = V_1;
		bool L_19;
		L_19 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_18, _stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B, NULL);
		if (L_19)
		{
			goto IL_01b9;
		}
	}
	{
		goto IL_02b3;
	}

IL_00d2:
	{
		String_t* L_20 = V_1;
		bool L_21;
		L_21 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_20, _stringLiteral46FADEB9E998225AA96BA7F96F3C6FE519B52F62, NULL);
		if (L_21)
		{
			goto IL_01d0;
		}
	}
	{
		goto IL_02b3;
	}

IL_00e7:
	{
		String_t* L_22 = V_1;
		bool L_23;
		L_23 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_22, _stringLiteral744761D527F44F04E435DEFCA1E21E179B60B0E4, NULL);
		if (L_23)
		{
			goto IL_01e7;
		}
	}
	{
		goto IL_02b3;
	}

IL_00fc:
	{
		String_t* L_24 = V_1;
		bool L_25;
		L_25 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_24, _stringLiteral60D92E37F6F99139C65CA6248F17911C762F4DD6, NULL);
		if (L_25)
		{
			goto IL_01fe;
		}
	}
	{
		goto IL_02b3;
	}

IL_0111:
	{
		String_t* L_26 = V_1;
		bool L_27;
		L_27 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_26, _stringLiteral0FC0575E5B3BFD69FE0E6DACB4257E1AB52484B5, NULL);
		if (L_27)
		{
			goto IL_0215;
		}
	}
	{
		goto IL_02b3;
	}

IL_0126:
	{
		String_t* L_28 = V_1;
		bool L_29;
		L_29 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_28, _stringLiteralD18A8AB8F50A606429410D3C3F543B352E7D6033, NULL);
		if (L_29)
		{
			goto IL_022c;
		}
	}
	{
		goto IL_02b3;
	}

IL_013b:
	{
		String_t* L_30 = V_1;
		bool L_31;
		L_31 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_30, _stringLiteral21CEBAC0172EB4FB67A8A2698C7F35355100D5F7, NULL);
		if (L_31)
		{
			goto IL_0240;
		}
	}
	{
		goto IL_02b3;
	}

IL_0150:
	{
		String_t* L_32 = V_1;
		bool L_33;
		L_33 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_32, _stringLiteralA3C8F2A441D7C8A8A2D967375934EFA74D7FE1E8, NULL);
		if (L_33)
		{
			goto IL_0254;
		}
	}
	{
		goto IL_02b3;
	}

IL_0165:
	{
		String_t* L_34 = V_1;
		bool L_35;
		L_35 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_34, _stringLiteralE0F9D9926B214819D0D0E8B1814BCF46C90D0956, NULL);
		if (L_35)
		{
			goto IL_0268;
		}
	}
	{
		goto IL_02b3;
	}

IL_017a:
	{
		String_t* L_36 = V_1;
		bool L_37;
		L_37 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_36, _stringLiteral0EA7F3FF9751D1C0670732BE07C84116AD963E2D, NULL);
		if (L_37)
		{
			goto IL_027c;
		}
	}
	{
		goto IL_02b3;
	}

IL_018f:
	{
		String_t* L_38 = V_1;
		bool L_39;
		L_39 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_38, _stringLiteral1B024D537329B86AB0DF96B2A714180F442F53E9, NULL);
		if (L_39)
		{
			goto IL_0290;
		}
	}
	{
		goto IL_02b3;
	}

IL_01a4:
	{
		String_t* L_40 = V_1;
		bool L_41;
		L_41 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_40, _stringLiteralE1291C4D47635E327ECFE39842BD1A93F58C61A2, NULL);
		if (L_41)
		{
			goto IL_02a4;
		}
	}
	{
		goto IL_02b3;
	}

IL_01b9:
	{
		// instance.enabled = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_42 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_43 = ((ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_42);
		bool L_44;
		L_44 = GenericVirtualFuncInvoker1< bool, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mFFB70EE53D8CD0255A4E599780F62A3EB1520E83_RuntimeMethod_var, L_42, L_43);
		LimitVelocityOverLifetimeModule_set_enabled_m0C4AC7078A4009C764CDD6C852747161626030F8((&V_0), L_44, NULL);
		// break;
		goto IL_02b9;
	}

IL_01d0:
	{
		// instance.limitX = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_45 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_46 = ((ES3Type_MinMaxCurve_t1C147718750ACBECE5D2B7F545D2A434A3C5409B_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t1C147718750ACBECE5D2B7F545D2A434A3C5409B_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_45);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_47;
		L_47 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_m9D6B4042B923127DEA4A2CAA3E35EED37D75B3D0_RuntimeMethod_var, L_45, L_46);
		LimitVelocityOverLifetimeModule_set_limitX_m453163A173E91BD1FA92A85FFFB1377922264E88((&V_0), L_47, NULL);
		// break;
		goto IL_02b9;
	}

IL_01e7:
	{
		// instance.limitXMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_48 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_49 = ((ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_48);
		float L_50;
		L_50 = GenericVirtualFuncInvoker1< float, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mA86928BC888E342D2C2644535E3399952F5077ED_RuntimeMethod_var, L_48, L_49);
		LimitVelocityOverLifetimeModule_set_limitXMultiplier_m69A35DBE2A96DB94E1C5857C1AEA7700F315FB69((&V_0), L_50, NULL);
		// break;
		goto IL_02b9;
	}

IL_01fe:
	{
		// instance.limitY = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_51 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_52 = ((ES3Type_MinMaxCurve_t1C147718750ACBECE5D2B7F545D2A434A3C5409B_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t1C147718750ACBECE5D2B7F545D2A434A3C5409B_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_51);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_53;
		L_53 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_m9D6B4042B923127DEA4A2CAA3E35EED37D75B3D0_RuntimeMethod_var, L_51, L_52);
		LimitVelocityOverLifetimeModule_set_limitY_m5C4FA3E4199843D17B358EAE552BC1530944C6ED((&V_0), L_53, NULL);
		// break;
		goto IL_02b9;
	}

IL_0215:
	{
		// instance.limitYMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_54 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_55 = ((ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_54);
		float L_56;
		L_56 = GenericVirtualFuncInvoker1< float, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mA86928BC888E342D2C2644535E3399952F5077ED_RuntimeMethod_var, L_54, L_55);
		LimitVelocityOverLifetimeModule_set_limitYMultiplier_mCB16226776AA3FD95FCBFEF08939CDFCDEAD1FD7((&V_0), L_56, NULL);
		// break;
		goto IL_02b9;
	}

IL_022c:
	{
		// instance.limitZ = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_57 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_58 = ((ES3Type_MinMaxCurve_t1C147718750ACBECE5D2B7F545D2A434A3C5409B_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t1C147718750ACBECE5D2B7F545D2A434A3C5409B_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_57);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_59;
		L_59 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_m9D6B4042B923127DEA4A2CAA3E35EED37D75B3D0_RuntimeMethod_var, L_57, L_58);
		LimitVelocityOverLifetimeModule_set_limitZ_mA7AA3F6C6EB9C1E2199DE5EDBFDFCD891E66A06C((&V_0), L_59, NULL);
		// break;
		goto IL_02b9;
	}

IL_0240:
	{
		// instance.limitZMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_60 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_61 = ((ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_60);
		float L_62;
		L_62 = GenericVirtualFuncInvoker1< float, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mA86928BC888E342D2C2644535E3399952F5077ED_RuntimeMethod_var, L_60, L_61);
		LimitVelocityOverLifetimeModule_set_limitZMultiplier_mF8318B3E8798E9778CD356C773A9567EBCC414DF((&V_0), L_62, NULL);
		// break;
		goto IL_02b9;
	}

IL_0254:
	{
		// instance.limit = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_63 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_64 = ((ES3Type_MinMaxCurve_t1C147718750ACBECE5D2B7F545D2A434A3C5409B_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t1C147718750ACBECE5D2B7F545D2A434A3C5409B_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_63);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_65;
		L_65 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_m9D6B4042B923127DEA4A2CAA3E35EED37D75B3D0_RuntimeMethod_var, L_63, L_64);
		LimitVelocityOverLifetimeModule_set_limit_m4714D5E0B04EAE01A49552690E9CC206AC5C7685((&V_0), L_65, NULL);
		// break;
		goto IL_02b9;
	}

IL_0268:
	{
		// instance.limitMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_66 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_67 = ((ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_66);
		float L_68;
		L_68 = GenericVirtualFuncInvoker1< float, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mA86928BC888E342D2C2644535E3399952F5077ED_RuntimeMethod_var, L_66, L_67);
		LimitVelocityOverLifetimeModule_set_limitMultiplier_m520C77C943C30BFE63EF0E4BEA9593D251187B28((&V_0), L_68, NULL);
		// break;
		goto IL_02b9;
	}

IL_027c:
	{
		// instance.dampen = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_69 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_70 = ((ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_69);
		float L_71;
		L_71 = GenericVirtualFuncInvoker1< float, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mA86928BC888E342D2C2644535E3399952F5077ED_RuntimeMethod_var, L_69, L_70);
		LimitVelocityOverLifetimeModule_set_dampen_mE8A893ECFE936519C3F68D440C3C6BD11065E288((&V_0), L_71, NULL);
		// break;
		goto IL_02b9;
	}

IL_0290:
	{
		// instance.separateAxes = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_72 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_73 = ((ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_72);
		bool L_74;
		L_74 = GenericVirtualFuncInvoker1< bool, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mFFB70EE53D8CD0255A4E599780F62A3EB1520E83_RuntimeMethod_var, L_72, L_73);
		LimitVelocityOverLifetimeModule_set_separateAxes_m3E1D0590D45FE0D6657D99685DA4E5A231229EF0((&V_0), L_74, NULL);
		// break;
		goto IL_02b9;
	}

IL_02a4:
	{
		// instance.space = reader.Read<UnityEngine.ParticleSystemSimulationSpace>();
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_75 = ___reader0;
		NullCheck(L_75);
		int32_t L_76;
		L_76 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisParticleSystemSimulationSpace_tB3693D8A3C0FCE63D060546071006AC4ABC60B05_mE28AF5CD31B164FD849D4D05A9C6E60F95D67243_RuntimeMethod_var, L_75);
		LimitVelocityOverLifetimeModule_set_space_m54D13D862FCB1606F37A3F053138437DEBF773D5((&V_0), L_76, NULL);
		// break;
		goto IL_02b9;
	}

IL_02b3:
	{
		// reader.Skip();
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_77 = ___reader0;
		NullCheck(L_77);
		VirtualActionInvoker0::Invoke(41 /* System.Void ES3Reader::Skip() */, L_77);
	}

IL_02b9:
	{
		// while((propertyName = reader.ReadPropertyName()) != null)
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_78 = ___reader0;
		NullCheck(L_78);
		String_t* L_79;
		L_79 = VirtualFuncInvoker0< String_t* >::Invoke(21 /* System.String ES3Reader::ReadPropertyName() */, L_78);
		String_t* L_80 = L_79;
		V_1 = L_80;
		if (L_80)
		{
			goto IL_000c;
		}
	}
	{
		// }
		return;
	}
}
// System.Void ES3Types.ES3Type_LimitVelocityOverLifetimeModule::ReadInto<UnityEngine.ParticleSystem/LimitVelocityOverLifetimeModule>(ES3Reader,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ES3Type_LimitVelocityOverLifetimeModule_ReadInto_TisLimitVelocityOverLifetimeModule_tC52CF1434E2639EE5D81DD6BA269FF38CA17D8B1_m8A66E6E2249AAFFAA7C6779B36E565E84A271990_gshared (ES3Type_LimitVelocityOverLifetimeModule_t0B3EB57F7FF7F9D1F6D99783CAB9DF9ADCEDE92B* __this, ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* ___reader0, RuntimeObject* ___obj1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mFFB70EE53D8CD0255A4E599780F62A3EB1520E83_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_m9D6B4042B923127DEA4A2CAA3E35EED37D75B3D0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisParticleSystemSimulationSpace_tB3693D8A3C0FCE63D060546071006AC4ABC60B05_mE28AF5CD31B164FD849D4D05A9C6E60F95D67243_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mA86928BC888E342D2C2644535E3399952F5077ED_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_MinMaxCurve_t1C147718750ACBECE5D2B7F545D2A434A3C5409B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LimitVelocityOverLifetimeModule_tC52CF1434E2639EE5D81DD6BA269FF38CA17D8B1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0EA7F3FF9751D1C0670732BE07C84116AD963E2D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0FC0575E5B3BFD69FE0E6DACB4257E1AB52484B5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1B024D537329B86AB0DF96B2A714180F442F53E9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral21CEBAC0172EB4FB67A8A2698C7F35355100D5F7);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral46FADEB9E998225AA96BA7F96F3C6FE519B52F62);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral60D92E37F6F99139C65CA6248F17911C762F4DD6);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral744761D527F44F04E435DEFCA1E21E179B60B0E4);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA3C8F2A441D7C8A8A2D967375934EFA74D7FE1E8);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD18A8AB8F50A606429410D3C3F543B352E7D6033);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE0F9D9926B214819D0D0E8B1814BCF46C90D0956);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE1291C4D47635E327ECFE39842BD1A93F58C61A2);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B);
		s_Il2CppMethodInitialized = true;
	}
	LimitVelocityOverLifetimeModule_tC52CF1434E2639EE5D81DD6BA269FF38CA17D8B1 V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	uint32_t V_2 = 0;
	{
		// var instance = (UnityEngine.ParticleSystem.LimitVelocityOverLifetimeModule)obj;
		RuntimeObject* L_0 = ___obj1;
		V_0 = ((*(LimitVelocityOverLifetimeModule_tC52CF1434E2639EE5D81DD6BA269FF38CA17D8B1*)((LimitVelocityOverLifetimeModule_tC52CF1434E2639EE5D81DD6BA269FF38CA17D8B1*)(LimitVelocityOverLifetimeModule_tC52CF1434E2639EE5D81DD6BA269FF38CA17D8B1*)UnBox(L_0, LimitVelocityOverLifetimeModule_tC52CF1434E2639EE5D81DD6BA269FF38CA17D8B1_il2cpp_TypeInfo_var))));
		goto IL_02b9;
	}

IL_000c:
	{
		String_t* L_1 = V_1;
		uint32_t L_2;
		L_2 = U3CPrivateImplementationDetailsU3E_ComputeStringHash_m6EA1F233618497AEFF8902A5EDFA24C74E2F2876(L_1, NULL);
		V_2 = L_2;
		uint32_t L_3 = V_2;
		if ((!(((uint32_t)L_3) <= ((uint32_t)((int32_t)1319695307)))))
		{
			goto IL_006f;
		}
	}
	{
		uint32_t L_4 = V_2;
		if ((!(((uint32_t)L_4) <= ((uint32_t)((int32_t)691593499)))))
		{
			goto IL_0049;
		}
	}
	{
		uint32_t L_5 = V_2;
		if ((((int32_t)L_5) == ((int32_t)((int32_t)49525662))))
		{
			goto IL_00bd;
		}
	}
	{
		uint32_t L_6 = V_2;
		if ((((int32_t)L_6) == ((int32_t)((int32_t)572581548))))
		{
			goto IL_0111;
		}
	}
	{
		uint32_t L_7 = V_2;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)691593499))))
		{
			goto IL_00e7;
		}
	}
	{
		goto IL_02b3;
	}

IL_0049:
	{
		uint32_t L_8 = V_2;
		if ((((int32_t)L_8) == ((int32_t)((int32_t)853203252))))
		{
			goto IL_0150;
		}
	}
	{
		uint32_t L_9 = V_2;
		if ((((int32_t)L_9) == ((int32_t)((int32_t)894689925))))
		{
			goto IL_01a4;
		}
	}
	{
		uint32_t L_10 = V_2;
		if ((((int32_t)L_10) == ((int32_t)((int32_t)1319695307))))
		{
			goto IL_0165;
		}
	}
	{
		goto IL_02b3;
	}

IL_006f:
	{
		uint32_t L_11 = V_2;
		if ((!(((uint32_t)L_11) <= ((uint32_t)((int32_t)2072266391)))))
		{
			goto IL_0097;
		}
	}
	{
		uint32_t L_12 = V_2;
		if ((((int32_t)L_12) == ((int32_t)((int32_t)1479031685))))
		{
			goto IL_018f;
		}
	}
	{
		uint32_t L_13 = V_2;
		if ((((int32_t)L_13) == ((int32_t)((int32_t)2055488772))))
		{
			goto IL_00d2;
		}
	}
	{
		uint32_t L_14 = V_2;
		if ((((int32_t)L_14) == ((int32_t)((int32_t)2072266391))))
		{
			goto IL_00fc;
		}
	}
	{
		goto IL_02b3;
	}

IL_0097:
	{
		uint32_t L_15 = V_2;
		if ((((int32_t)L_15) == ((int32_t)((int32_t)2089044010))))
		{
			goto IL_0126;
		}
	}
	{
		uint32_t L_16 = V_2;
		if ((((int32_t)L_16) == ((int32_t)((int32_t)-1976734835))))
		{
			goto IL_013b;
		}
	}
	{
		uint32_t L_17 = V_2;
		if ((((int32_t)L_17) == ((int32_t)((int32_t)-1124873996))))
		{
			goto IL_017a;
		}
	}
	{
		goto IL_02b3;
	}

IL_00bd:
	{
		String_t* L_18 = V_1;
		bool L_19;
		L_19 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_18, _stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B, NULL);
		if (L_19)
		{
			goto IL_01b9;
		}
	}
	{
		goto IL_02b3;
	}

IL_00d2:
	{
		String_t* L_20 = V_1;
		bool L_21;
		L_21 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_20, _stringLiteral46FADEB9E998225AA96BA7F96F3C6FE519B52F62, NULL);
		if (L_21)
		{
			goto IL_01d0;
		}
	}
	{
		goto IL_02b3;
	}

IL_00e7:
	{
		String_t* L_22 = V_1;
		bool L_23;
		L_23 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_22, _stringLiteral744761D527F44F04E435DEFCA1E21E179B60B0E4, NULL);
		if (L_23)
		{
			goto IL_01e7;
		}
	}
	{
		goto IL_02b3;
	}

IL_00fc:
	{
		String_t* L_24 = V_1;
		bool L_25;
		L_25 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_24, _stringLiteral60D92E37F6F99139C65CA6248F17911C762F4DD6, NULL);
		if (L_25)
		{
			goto IL_01fe;
		}
	}
	{
		goto IL_02b3;
	}

IL_0111:
	{
		String_t* L_26 = V_1;
		bool L_27;
		L_27 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_26, _stringLiteral0FC0575E5B3BFD69FE0E6DACB4257E1AB52484B5, NULL);
		if (L_27)
		{
			goto IL_0215;
		}
	}
	{
		goto IL_02b3;
	}

IL_0126:
	{
		String_t* L_28 = V_1;
		bool L_29;
		L_29 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_28, _stringLiteralD18A8AB8F50A606429410D3C3F543B352E7D6033, NULL);
		if (L_29)
		{
			goto IL_022c;
		}
	}
	{
		goto IL_02b3;
	}

IL_013b:
	{
		String_t* L_30 = V_1;
		bool L_31;
		L_31 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_30, _stringLiteral21CEBAC0172EB4FB67A8A2698C7F35355100D5F7, NULL);
		if (L_31)
		{
			goto IL_0240;
		}
	}
	{
		goto IL_02b3;
	}

IL_0150:
	{
		String_t* L_32 = V_1;
		bool L_33;
		L_33 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_32, _stringLiteralA3C8F2A441D7C8A8A2D967375934EFA74D7FE1E8, NULL);
		if (L_33)
		{
			goto IL_0254;
		}
	}
	{
		goto IL_02b3;
	}

IL_0165:
	{
		String_t* L_34 = V_1;
		bool L_35;
		L_35 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_34, _stringLiteralE0F9D9926B214819D0D0E8B1814BCF46C90D0956, NULL);
		if (L_35)
		{
			goto IL_0268;
		}
	}
	{
		goto IL_02b3;
	}

IL_017a:
	{
		String_t* L_36 = V_1;
		bool L_37;
		L_37 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_36, _stringLiteral0EA7F3FF9751D1C0670732BE07C84116AD963E2D, NULL);
		if (L_37)
		{
			goto IL_027c;
		}
	}
	{
		goto IL_02b3;
	}

IL_018f:
	{
		String_t* L_38 = V_1;
		bool L_39;
		L_39 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_38, _stringLiteral1B024D537329B86AB0DF96B2A714180F442F53E9, NULL);
		if (L_39)
		{
			goto IL_0290;
		}
	}
	{
		goto IL_02b3;
	}

IL_01a4:
	{
		String_t* L_40 = V_1;
		bool L_41;
		L_41 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_40, _stringLiteralE1291C4D47635E327ECFE39842BD1A93F58C61A2, NULL);
		if (L_41)
		{
			goto IL_02a4;
		}
	}
	{
		goto IL_02b3;
	}

IL_01b9:
	{
		// instance.enabled = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_42 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_43 = ((ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_42);
		bool L_44;
		L_44 = GenericVirtualFuncInvoker1< bool, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mFFB70EE53D8CD0255A4E599780F62A3EB1520E83_RuntimeMethod_var, L_42, L_43);
		LimitVelocityOverLifetimeModule_set_enabled_m0C4AC7078A4009C764CDD6C852747161626030F8((&V_0), L_44, NULL);
		// break;
		goto IL_02b9;
	}

IL_01d0:
	{
		// instance.limitX = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_45 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_46 = ((ES3Type_MinMaxCurve_t1C147718750ACBECE5D2B7F545D2A434A3C5409B_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t1C147718750ACBECE5D2B7F545D2A434A3C5409B_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_45);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_47;
		L_47 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_m9D6B4042B923127DEA4A2CAA3E35EED37D75B3D0_RuntimeMethod_var, L_45, L_46);
		LimitVelocityOverLifetimeModule_set_limitX_m453163A173E91BD1FA92A85FFFB1377922264E88((&V_0), L_47, NULL);
		// break;
		goto IL_02b9;
	}

IL_01e7:
	{
		// instance.limitXMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_48 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_49 = ((ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_48);
		float L_50;
		L_50 = GenericVirtualFuncInvoker1< float, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mA86928BC888E342D2C2644535E3399952F5077ED_RuntimeMethod_var, L_48, L_49);
		LimitVelocityOverLifetimeModule_set_limitXMultiplier_m69A35DBE2A96DB94E1C5857C1AEA7700F315FB69((&V_0), L_50, NULL);
		// break;
		goto IL_02b9;
	}

IL_01fe:
	{
		// instance.limitY = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_51 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_52 = ((ES3Type_MinMaxCurve_t1C147718750ACBECE5D2B7F545D2A434A3C5409B_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t1C147718750ACBECE5D2B7F545D2A434A3C5409B_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_51);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_53;
		L_53 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_m9D6B4042B923127DEA4A2CAA3E35EED37D75B3D0_RuntimeMethod_var, L_51, L_52);
		LimitVelocityOverLifetimeModule_set_limitY_m5C4FA3E4199843D17B358EAE552BC1530944C6ED((&V_0), L_53, NULL);
		// break;
		goto IL_02b9;
	}

IL_0215:
	{
		// instance.limitYMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_54 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_55 = ((ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_54);
		float L_56;
		L_56 = GenericVirtualFuncInvoker1< float, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mA86928BC888E342D2C2644535E3399952F5077ED_RuntimeMethod_var, L_54, L_55);
		LimitVelocityOverLifetimeModule_set_limitYMultiplier_mCB16226776AA3FD95FCBFEF08939CDFCDEAD1FD7((&V_0), L_56, NULL);
		// break;
		goto IL_02b9;
	}

IL_022c:
	{
		// instance.limitZ = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_57 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_58 = ((ES3Type_MinMaxCurve_t1C147718750ACBECE5D2B7F545D2A434A3C5409B_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t1C147718750ACBECE5D2B7F545D2A434A3C5409B_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_57);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_59;
		L_59 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_m9D6B4042B923127DEA4A2CAA3E35EED37D75B3D0_RuntimeMethod_var, L_57, L_58);
		LimitVelocityOverLifetimeModule_set_limitZ_mA7AA3F6C6EB9C1E2199DE5EDBFDFCD891E66A06C((&V_0), L_59, NULL);
		// break;
		goto IL_02b9;
	}

IL_0240:
	{
		// instance.limitZMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_60 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_61 = ((ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_60);
		float L_62;
		L_62 = GenericVirtualFuncInvoker1< float, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mA86928BC888E342D2C2644535E3399952F5077ED_RuntimeMethod_var, L_60, L_61);
		LimitVelocityOverLifetimeModule_set_limitZMultiplier_mF8318B3E8798E9778CD356C773A9567EBCC414DF((&V_0), L_62, NULL);
		// break;
		goto IL_02b9;
	}

IL_0254:
	{
		// instance.limit = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_63 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_64 = ((ES3Type_MinMaxCurve_t1C147718750ACBECE5D2B7F545D2A434A3C5409B_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t1C147718750ACBECE5D2B7F545D2A434A3C5409B_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_63);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_65;
		L_65 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_m9D6B4042B923127DEA4A2CAA3E35EED37D75B3D0_RuntimeMethod_var, L_63, L_64);
		LimitVelocityOverLifetimeModule_set_limit_m4714D5E0B04EAE01A49552690E9CC206AC5C7685((&V_0), L_65, NULL);
		// break;
		goto IL_02b9;
	}

IL_0268:
	{
		// instance.limitMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_66 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_67 = ((ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_66);
		float L_68;
		L_68 = GenericVirtualFuncInvoker1< float, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mA86928BC888E342D2C2644535E3399952F5077ED_RuntimeMethod_var, L_66, L_67);
		LimitVelocityOverLifetimeModule_set_limitMultiplier_m520C77C943C30BFE63EF0E4BEA9593D251187B28((&V_0), L_68, NULL);
		// break;
		goto IL_02b9;
	}

IL_027c:
	{
		// instance.dampen = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_69 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_70 = ((ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_69);
		float L_71;
		L_71 = GenericVirtualFuncInvoker1< float, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mA86928BC888E342D2C2644535E3399952F5077ED_RuntimeMethod_var, L_69, L_70);
		LimitVelocityOverLifetimeModule_set_dampen_mE8A893ECFE936519C3F68D440C3C6BD11065E288((&V_0), L_71, NULL);
		// break;
		goto IL_02b9;
	}

IL_0290:
	{
		// instance.separateAxes = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_72 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_73 = ((ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_72);
		bool L_74;
		L_74 = GenericVirtualFuncInvoker1< bool, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mFFB70EE53D8CD0255A4E599780F62A3EB1520E83_RuntimeMethod_var, L_72, L_73);
		LimitVelocityOverLifetimeModule_set_separateAxes_m3E1D0590D45FE0D6657D99685DA4E5A231229EF0((&V_0), L_74, NULL);
		// break;
		goto IL_02b9;
	}

IL_02a4:
	{
		// instance.space = reader.Read<UnityEngine.ParticleSystemSimulationSpace>();
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_75 = ___reader0;
		NullCheck(L_75);
		int32_t L_76;
		L_76 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisParticleSystemSimulationSpace_tB3693D8A3C0FCE63D060546071006AC4ABC60B05_mE28AF5CD31B164FD849D4D05A9C6E60F95D67243_RuntimeMethod_var, L_75);
		LimitVelocityOverLifetimeModule_set_space_m54D13D862FCB1606F37A3F053138437DEBF773D5((&V_0), L_76, NULL);
		// break;
		goto IL_02b9;
	}

IL_02b3:
	{
		// reader.Skip();
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_77 = ___reader0;
		NullCheck(L_77);
		VirtualActionInvoker0::Invoke(41 /* System.Void ES3Reader::Skip() */, L_77);
	}

IL_02b9:
	{
		// while((propertyName = reader.ReadPropertyName()) != null)
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_78 = ___reader0;
		NullCheck(L_78);
		String_t* L_79;
		L_79 = VirtualFuncInvoker0< String_t* >::Invoke(21 /* System.String ES3Reader::ReadPropertyName() */, L_78);
		String_t* L_80 = L_79;
		V_1 = L_80;
		if (L_80)
		{
			goto IL_000c;
		}
	}
	{
		// }
		return;
	}
}
// System.Void ES3Types.ES3Type_LimitVelocityOverLifetimeModule::ReadInto<UnityEngine.ParticleSystem/MainModule>(ES3Reader,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ES3Type_LimitVelocityOverLifetimeModule_ReadInto_TisMainModule_tC7ECD8330C14B0808478A748048988A6085CE2A9_m6F2E5EFD5969C735C628726DC076C6B23D3289D1_gshared (ES3Type_LimitVelocityOverLifetimeModule_t0B3EB57F7FF7F9D1F6D99783CAB9DF9ADCEDE92B* __this, ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* ___reader0, RuntimeObject* ___obj1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mFFB70EE53D8CD0255A4E599780F62A3EB1520E83_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_m9D6B4042B923127DEA4A2CAA3E35EED37D75B3D0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisParticleSystemSimulationSpace_tB3693D8A3C0FCE63D060546071006AC4ABC60B05_mE28AF5CD31B164FD849D4D05A9C6E60F95D67243_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mA86928BC888E342D2C2644535E3399952F5077ED_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_MinMaxCurve_t1C147718750ACBECE5D2B7F545D2A434A3C5409B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LimitVelocityOverLifetimeModule_tC52CF1434E2639EE5D81DD6BA269FF38CA17D8B1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0EA7F3FF9751D1C0670732BE07C84116AD963E2D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0FC0575E5B3BFD69FE0E6DACB4257E1AB52484B5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1B024D537329B86AB0DF96B2A714180F442F53E9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral21CEBAC0172EB4FB67A8A2698C7F35355100D5F7);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral46FADEB9E998225AA96BA7F96F3C6FE519B52F62);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral60D92E37F6F99139C65CA6248F17911C762F4DD6);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral744761D527F44F04E435DEFCA1E21E179B60B0E4);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA3C8F2A441D7C8A8A2D967375934EFA74D7FE1E8);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD18A8AB8F50A606429410D3C3F543B352E7D6033);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE0F9D9926B214819D0D0E8B1814BCF46C90D0956);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE1291C4D47635E327ECFE39842BD1A93F58C61A2);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B);
		s_Il2CppMethodInitialized = true;
	}
	LimitVelocityOverLifetimeModule_tC52CF1434E2639EE5D81DD6BA269FF38CA17D8B1 V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	uint32_t V_2 = 0;
	{
		// var instance = (UnityEngine.ParticleSystem.LimitVelocityOverLifetimeModule)obj;
		RuntimeObject* L_0 = ___obj1;
		V_0 = ((*(LimitVelocityOverLifetimeModule_tC52CF1434E2639EE5D81DD6BA269FF38CA17D8B1*)((LimitVelocityOverLifetimeModule_tC52CF1434E2639EE5D81DD6BA269FF38CA17D8B1*)(LimitVelocityOverLifetimeModule_tC52CF1434E2639EE5D81DD6BA269FF38CA17D8B1*)UnBox(L_0, LimitVelocityOverLifetimeModule_tC52CF1434E2639EE5D81DD6BA269FF38CA17D8B1_il2cpp_TypeInfo_var))));
		goto IL_02b9;
	}

IL_000c:
	{
		String_t* L_1 = V_1;
		uint32_t L_2;
		L_2 = U3CPrivateImplementationDetailsU3E_ComputeStringHash_m6EA1F233618497AEFF8902A5EDFA24C74E2F2876(L_1, NULL);
		V_2 = L_2;
		uint32_t L_3 = V_2;
		if ((!(((uint32_t)L_3) <= ((uint32_t)((int32_t)1319695307)))))
		{
			goto IL_006f;
		}
	}
	{
		uint32_t L_4 = V_2;
		if ((!(((uint32_t)L_4) <= ((uint32_t)((int32_t)691593499)))))
		{
			goto IL_0049;
		}
	}
	{
		uint32_t L_5 = V_2;
		if ((((int32_t)L_5) == ((int32_t)((int32_t)49525662))))
		{
			goto IL_00bd;
		}
	}
	{
		uint32_t L_6 = V_2;
		if ((((int32_t)L_6) == ((int32_t)((int32_t)572581548))))
		{
			goto IL_0111;
		}
	}
	{
		uint32_t L_7 = V_2;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)691593499))))
		{
			goto IL_00e7;
		}
	}
	{
		goto IL_02b3;
	}

IL_0049:
	{
		uint32_t L_8 = V_2;
		if ((((int32_t)L_8) == ((int32_t)((int32_t)853203252))))
		{
			goto IL_0150;
		}
	}
	{
		uint32_t L_9 = V_2;
		if ((((int32_t)L_9) == ((int32_t)((int32_t)894689925))))
		{
			goto IL_01a4;
		}
	}
	{
		uint32_t L_10 = V_2;
		if ((((int32_t)L_10) == ((int32_t)((int32_t)1319695307))))
		{
			goto IL_0165;
		}
	}
	{
		goto IL_02b3;
	}

IL_006f:
	{
		uint32_t L_11 = V_2;
		if ((!(((uint32_t)L_11) <= ((uint32_t)((int32_t)2072266391)))))
		{
			goto IL_0097;
		}
	}
	{
		uint32_t L_12 = V_2;
		if ((((int32_t)L_12) == ((int32_t)((int32_t)1479031685))))
		{
			goto IL_018f;
		}
	}
	{
		uint32_t L_13 = V_2;
		if ((((int32_t)L_13) == ((int32_t)((int32_t)2055488772))))
		{
			goto IL_00d2;
		}
	}
	{
		uint32_t L_14 = V_2;
		if ((((int32_t)L_14) == ((int32_t)((int32_t)2072266391))))
		{
			goto IL_00fc;
		}
	}
	{
		goto IL_02b3;
	}

IL_0097:
	{
		uint32_t L_15 = V_2;
		if ((((int32_t)L_15) == ((int32_t)((int32_t)2089044010))))
		{
			goto IL_0126;
		}
	}
	{
		uint32_t L_16 = V_2;
		if ((((int32_t)L_16) == ((int32_t)((int32_t)-1976734835))))
		{
			goto IL_013b;
		}
	}
	{
		uint32_t L_17 = V_2;
		if ((((int32_t)L_17) == ((int32_t)((int32_t)-1124873996))))
		{
			goto IL_017a;
		}
	}
	{
		goto IL_02b3;
	}

IL_00bd:
	{
		String_t* L_18 = V_1;
		bool L_19;
		L_19 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_18, _stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B, NULL);
		if (L_19)
		{
			goto IL_01b9;
		}
	}
	{
		goto IL_02b3;
	}

IL_00d2:
	{
		String_t* L_20 = V_1;
		bool L_21;
		L_21 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_20, _stringLiteral46FADEB9E998225AA96BA7F96F3C6FE519B52F62, NULL);
		if (L_21)
		{
			goto IL_01d0;
		}
	}
	{
		goto IL_02b3;
	}

IL_00e7:
	{
		String_t* L_22 = V_1;
		bool L_23;
		L_23 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_22, _stringLiteral744761D527F44F04E435DEFCA1E21E179B60B0E4, NULL);
		if (L_23)
		{
			goto IL_01e7;
		}
	}
	{
		goto IL_02b3;
	}

IL_00fc:
	{
		String_t* L_24 = V_1;
		bool L_25;
		L_25 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_24, _stringLiteral60D92E37F6F99139C65CA6248F17911C762F4DD6, NULL);
		if (L_25)
		{
			goto IL_01fe;
		}
	}
	{
		goto IL_02b3;
	}

IL_0111:
	{
		String_t* L_26 = V_1;
		bool L_27;
		L_27 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_26, _stringLiteral0FC0575E5B3BFD69FE0E6DACB4257E1AB52484B5, NULL);
		if (L_27)
		{
			goto IL_0215;
		}
	}
	{
		goto IL_02b3;
	}

IL_0126:
	{
		String_t* L_28 = V_1;
		bool L_29;
		L_29 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_28, _stringLiteralD18A8AB8F50A606429410D3C3F543B352E7D6033, NULL);
		if (L_29)
		{
			goto IL_022c;
		}
	}
	{
		goto IL_02b3;
	}

IL_013b:
	{
		String_t* L_30 = V_1;
		bool L_31;
		L_31 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_30, _stringLiteral21CEBAC0172EB4FB67A8A2698C7F35355100D5F7, NULL);
		if (L_31)
		{
			goto IL_0240;
		}
	}
	{
		goto IL_02b3;
	}

IL_0150:
	{
		String_t* L_32 = V_1;
		bool L_33;
		L_33 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_32, _stringLiteralA3C8F2A441D7C8A8A2D967375934EFA74D7FE1E8, NULL);
		if (L_33)
		{
			goto IL_0254;
		}
	}
	{
		goto IL_02b3;
	}

IL_0165:
	{
		String_t* L_34 = V_1;
		bool L_35;
		L_35 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_34, _stringLiteralE0F9D9926B214819D0D0E8B1814BCF46C90D0956, NULL);
		if (L_35)
		{
			goto IL_0268;
		}
	}
	{
		goto IL_02b3;
	}

IL_017a:
	{
		String_t* L_36 = V_1;
		bool L_37;
		L_37 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_36, _stringLiteral0EA7F3FF9751D1C0670732BE07C84116AD963E2D, NULL);
		if (L_37)
		{
			goto IL_027c;
		}
	}
	{
		goto IL_02b3;
	}

IL_018f:
	{
		String_t* L_38 = V_1;
		bool L_39;
		L_39 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_38, _stringLiteral1B024D537329B86AB0DF96B2A714180F442F53E9, NULL);
		if (L_39)
		{
			goto IL_0290;
		}
	}
	{
		goto IL_02b3;
	}

IL_01a4:
	{
		String_t* L_40 = V_1;
		bool L_41;
		L_41 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_40, _stringLiteralE1291C4D47635E327ECFE39842BD1A93F58C61A2, NULL);
		if (L_41)
		{
			goto IL_02a4;
		}
	}
	{
		goto IL_02b3;
	}

IL_01b9:
	{
		// instance.enabled = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_42 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_43 = ((ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_42);
		bool L_44;
		L_44 = GenericVirtualFuncInvoker1< bool, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mFFB70EE53D8CD0255A4E599780F62A3EB1520E83_RuntimeMethod_var, L_42, L_43);
		LimitVelocityOverLifetimeModule_set_enabled_m0C4AC7078A4009C764CDD6C852747161626030F8((&V_0), L_44, NULL);
		// break;
		goto IL_02b9;
	}

IL_01d0:
	{
		// instance.limitX = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_45 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_46 = ((ES3Type_MinMaxCurve_t1C147718750ACBECE5D2B7F545D2A434A3C5409B_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t1C147718750ACBECE5D2B7F545D2A434A3C5409B_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_45);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_47;
		L_47 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_m9D6B4042B923127DEA4A2CAA3E35EED37D75B3D0_RuntimeMethod_var, L_45, L_46);
		LimitVelocityOverLifetimeModule_set_limitX_m453163A173E91BD1FA92A85FFFB1377922264E88((&V_0), L_47, NULL);
		// break;
		goto IL_02b9;
	}

IL_01e7:
	{
		// instance.limitXMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_48 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_49 = ((ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_48);
		float L_50;
		L_50 = GenericVirtualFuncInvoker1< float, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mA86928BC888E342D2C2644535E3399952F5077ED_RuntimeMethod_var, L_48, L_49);
		LimitVelocityOverLifetimeModule_set_limitXMultiplier_m69A35DBE2A96DB94E1C5857C1AEA7700F315FB69((&V_0), L_50, NULL);
		// break;
		goto IL_02b9;
	}

IL_01fe:
	{
		// instance.limitY = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_51 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_52 = ((ES3Type_MinMaxCurve_t1C147718750ACBECE5D2B7F545D2A434A3C5409B_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t1C147718750ACBECE5D2B7F545D2A434A3C5409B_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_51);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_53;
		L_53 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_m9D6B4042B923127DEA4A2CAA3E35EED37D75B3D0_RuntimeMethod_var, L_51, L_52);
		LimitVelocityOverLifetimeModule_set_limitY_m5C4FA3E4199843D17B358EAE552BC1530944C6ED((&V_0), L_53, NULL);
		// break;
		goto IL_02b9;
	}

IL_0215:
	{
		// instance.limitYMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_54 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_55 = ((ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_54);
		float L_56;
		L_56 = GenericVirtualFuncInvoker1< float, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mA86928BC888E342D2C2644535E3399952F5077ED_RuntimeMethod_var, L_54, L_55);
		LimitVelocityOverLifetimeModule_set_limitYMultiplier_mCB16226776AA3FD95FCBFEF08939CDFCDEAD1FD7((&V_0), L_56, NULL);
		// break;
		goto IL_02b9;
	}

IL_022c:
	{
		// instance.limitZ = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_57 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_58 = ((ES3Type_MinMaxCurve_t1C147718750ACBECE5D2B7F545D2A434A3C5409B_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t1C147718750ACBECE5D2B7F545D2A434A3C5409B_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_57);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_59;
		L_59 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_m9D6B4042B923127DEA4A2CAA3E35EED37D75B3D0_RuntimeMethod_var, L_57, L_58);
		LimitVelocityOverLifetimeModule_set_limitZ_mA7AA3F6C6EB9C1E2199DE5EDBFDFCD891E66A06C((&V_0), L_59, NULL);
		// break;
		goto IL_02b9;
	}

IL_0240:
	{
		// instance.limitZMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_60 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_61 = ((ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_60);
		float L_62;
		L_62 = GenericVirtualFuncInvoker1< float, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mA86928BC888E342D2C2644535E3399952F5077ED_RuntimeMethod_var, L_60, L_61);
		LimitVelocityOverLifetimeModule_set_limitZMultiplier_mF8318B3E8798E9778CD356C773A9567EBCC414DF((&V_0), L_62, NULL);
		// break;
		goto IL_02b9;
	}

IL_0254:
	{
		// instance.limit = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_63 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_64 = ((ES3Type_MinMaxCurve_t1C147718750ACBECE5D2B7F545D2A434A3C5409B_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t1C147718750ACBECE5D2B7F545D2A434A3C5409B_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_63);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_65;
		L_65 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_m9D6B4042B923127DEA4A2CAA3E35EED37D75B3D0_RuntimeMethod_var, L_63, L_64);
		LimitVelocityOverLifetimeModule_set_limit_m4714D5E0B04EAE01A49552690E9CC206AC5C7685((&V_0), L_65, NULL);
		// break;
		goto IL_02b9;
	}

IL_0268:
	{
		// instance.limitMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_66 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_67 = ((ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_66);
		float L_68;
		L_68 = GenericVirtualFuncInvoker1< float, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mA86928BC888E342D2C2644535E3399952F5077ED_RuntimeMethod_var, L_66, L_67);
		LimitVelocityOverLifetimeModule_set_limitMultiplier_m520C77C943C30BFE63EF0E4BEA9593D251187B28((&V_0), L_68, NULL);
		// break;
		goto IL_02b9;
	}

IL_027c:
	{
		// instance.dampen = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_69 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_70 = ((ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_69);
		float L_71;
		L_71 = GenericVirtualFuncInvoker1< float, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mA86928BC888E342D2C2644535E3399952F5077ED_RuntimeMethod_var, L_69, L_70);
		LimitVelocityOverLifetimeModule_set_dampen_mE8A893ECFE936519C3F68D440C3C6BD11065E288((&V_0), L_71, NULL);
		// break;
		goto IL_02b9;
	}

IL_0290:
	{
		// instance.separateAxes = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_72 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_73 = ((ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_72);
		bool L_74;
		L_74 = GenericVirtualFuncInvoker1< bool, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mFFB70EE53D8CD0255A4E599780F62A3EB1520E83_RuntimeMethod_var, L_72, L_73);
		LimitVelocityOverLifetimeModule_set_separateAxes_m3E1D0590D45FE0D6657D99685DA4E5A231229EF0((&V_0), L_74, NULL);
		// break;
		goto IL_02b9;
	}

IL_02a4:
	{
		// instance.space = reader.Read<UnityEngine.ParticleSystemSimulationSpace>();
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_75 = ___reader0;
		NullCheck(L_75);
		int32_t L_76;
		L_76 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisParticleSystemSimulationSpace_tB3693D8A3C0FCE63D060546071006AC4ABC60B05_mE28AF5CD31B164FD849D4D05A9C6E60F95D67243_RuntimeMethod_var, L_75);
		LimitVelocityOverLifetimeModule_set_space_m54D13D862FCB1606F37A3F053138437DEBF773D5((&V_0), L_76, NULL);
		// break;
		goto IL_02b9;
	}

IL_02b3:
	{
		// reader.Skip();
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_77 = ___reader0;
		NullCheck(L_77);
		VirtualActionInvoker0::Invoke(41 /* System.Void ES3Reader::Skip() */, L_77);
	}

IL_02b9:
	{
		// while((propertyName = reader.ReadPropertyName()) != null)
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_78 = ___reader0;
		NullCheck(L_78);
		String_t* L_79;
		L_79 = VirtualFuncInvoker0< String_t* >::Invoke(21 /* System.String ES3Reader::ReadPropertyName() */, L_78);
		String_t* L_80 = L_79;
		V_1 = L_80;
		if (L_80)
		{
			goto IL_000c;
		}
	}
	{
		// }
		return;
	}
}
// System.Void ES3Types.ES3Type_LimitVelocityOverLifetimeModule::ReadInto<UnityEngine.ParticleSystem/NoiseModule>(ES3Reader,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ES3Type_LimitVelocityOverLifetimeModule_ReadInto_TisNoiseModule_tF8D6CB544A887C0C93D05A228B65E41DBD1F3AE0_mF6F4C99524F124610D72C588245A812F857EB236_gshared (ES3Type_LimitVelocityOverLifetimeModule_t0B3EB57F7FF7F9D1F6D99783CAB9DF9ADCEDE92B* __this, ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* ___reader0, RuntimeObject* ___obj1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mFFB70EE53D8CD0255A4E599780F62A3EB1520E83_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_m9D6B4042B923127DEA4A2CAA3E35EED37D75B3D0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisParticleSystemSimulationSpace_tB3693D8A3C0FCE63D060546071006AC4ABC60B05_mE28AF5CD31B164FD849D4D05A9C6E60F95D67243_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mA86928BC888E342D2C2644535E3399952F5077ED_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_MinMaxCurve_t1C147718750ACBECE5D2B7F545D2A434A3C5409B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LimitVelocityOverLifetimeModule_tC52CF1434E2639EE5D81DD6BA269FF38CA17D8B1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0EA7F3FF9751D1C0670732BE07C84116AD963E2D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0FC0575E5B3BFD69FE0E6DACB4257E1AB52484B5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1B024D537329B86AB0DF96B2A714180F442F53E9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral21CEBAC0172EB4FB67A8A2698C7F35355100D5F7);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral46FADEB9E998225AA96BA7F96F3C6FE519B52F62);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral60D92E37F6F99139C65CA6248F17911C762F4DD6);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral744761D527F44F04E435DEFCA1E21E179B60B0E4);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA3C8F2A441D7C8A8A2D967375934EFA74D7FE1E8);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD18A8AB8F50A606429410D3C3F543B352E7D6033);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE0F9D9926B214819D0D0E8B1814BCF46C90D0956);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE1291C4D47635E327ECFE39842BD1A93F58C61A2);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B);
		s_Il2CppMethodInitialized = true;
	}
	LimitVelocityOverLifetimeModule_tC52CF1434E2639EE5D81DD6BA269FF38CA17D8B1 V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	uint32_t V_2 = 0;
	{
		// var instance = (UnityEngine.ParticleSystem.LimitVelocityOverLifetimeModule)obj;
		RuntimeObject* L_0 = ___obj1;
		V_0 = ((*(LimitVelocityOverLifetimeModule_tC52CF1434E2639EE5D81DD6BA269FF38CA17D8B1*)((LimitVelocityOverLifetimeModule_tC52CF1434E2639EE5D81DD6BA269FF38CA17D8B1*)(LimitVelocityOverLifetimeModule_tC52CF1434E2639EE5D81DD6BA269FF38CA17D8B1*)UnBox(L_0, LimitVelocityOverLifetimeModule_tC52CF1434E2639EE5D81DD6BA269FF38CA17D8B1_il2cpp_TypeInfo_var))));
		goto IL_02b9;
	}

IL_000c:
	{
		String_t* L_1 = V_1;
		uint32_t L_2;
		L_2 = U3CPrivateImplementationDetailsU3E_ComputeStringHash_m6EA1F233618497AEFF8902A5EDFA24C74E2F2876(L_1, NULL);
		V_2 = L_2;
		uint32_t L_3 = V_2;
		if ((!(((uint32_t)L_3) <= ((uint32_t)((int32_t)1319695307)))))
		{
			goto IL_006f;
		}
	}
	{
		uint32_t L_4 = V_2;
		if ((!(((uint32_t)L_4) <= ((uint32_t)((int32_t)691593499)))))
		{
			goto IL_0049;
		}
	}
	{
		uint32_t L_5 = V_2;
		if ((((int32_t)L_5) == ((int32_t)((int32_t)49525662))))
		{
			goto IL_00bd;
		}
	}
	{
		uint32_t L_6 = V_2;
		if ((((int32_t)L_6) == ((int32_t)((int32_t)572581548))))
		{
			goto IL_0111;
		}
	}
	{
		uint32_t L_7 = V_2;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)691593499))))
		{
			goto IL_00e7;
		}
	}
	{
		goto IL_02b3;
	}

IL_0049:
	{
		uint32_t L_8 = V_2;
		if ((((int32_t)L_8) == ((int32_t)((int32_t)853203252))))
		{
			goto IL_0150;
		}
	}
	{
		uint32_t L_9 = V_2;
		if ((((int32_t)L_9) == ((int32_t)((int32_t)894689925))))
		{
			goto IL_01a4;
		}
	}
	{
		uint32_t L_10 = V_2;
		if ((((int32_t)L_10) == ((int32_t)((int32_t)1319695307))))
		{
			goto IL_0165;
		}
	}
	{
		goto IL_02b3;
	}

IL_006f:
	{
		uint32_t L_11 = V_2;
		if ((!(((uint32_t)L_11) <= ((uint32_t)((int32_t)2072266391)))))
		{
			goto IL_0097;
		}
	}
	{
		uint32_t L_12 = V_2;
		if ((((int32_t)L_12) == ((int32_t)((int32_t)1479031685))))
		{
			goto IL_018f;
		}
	}
	{
		uint32_t L_13 = V_2;
		if ((((int32_t)L_13) == ((int32_t)((int32_t)2055488772))))
		{
			goto IL_00d2;
		}
	}
	{
		uint32_t L_14 = V_2;
		if ((((int32_t)L_14) == ((int32_t)((int32_t)2072266391))))
		{
			goto IL_00fc;
		}
	}
	{
		goto IL_02b3;
	}

IL_0097:
	{
		uint32_t L_15 = V_2;
		if ((((int32_t)L_15) == ((int32_t)((int32_t)2089044010))))
		{
			goto IL_0126;
		}
	}
	{
		uint32_t L_16 = V_2;
		if ((((int32_t)L_16) == ((int32_t)((int32_t)-1976734835))))
		{
			goto IL_013b;
		}
	}
	{
		uint32_t L_17 = V_2;
		if ((((int32_t)L_17) == ((int32_t)((int32_t)-1124873996))))
		{
			goto IL_017a;
		}
	}
	{
		goto IL_02b3;
	}

IL_00bd:
	{
		String_t* L_18 = V_1;
		bool L_19;
		L_19 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_18, _stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B, NULL);
		if (L_19)
		{
			goto IL_01b9;
		}
	}
	{
		goto IL_02b3;
	}

IL_00d2:
	{
		String_t* L_20 = V_1;
		bool L_21;
		L_21 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_20, _stringLiteral46FADEB9E998225AA96BA7F96F3C6FE519B52F62, NULL);
		if (L_21)
		{
			goto IL_01d0;
		}
	}
	{
		goto IL_02b3;
	}

IL_00e7:
	{
		String_t* L_22 = V_1;
		bool L_23;
		L_23 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_22, _stringLiteral744761D527F44F04E435DEFCA1E21E179B60B0E4, NULL);
		if (L_23)
		{
			goto IL_01e7;
		}
	}
	{
		goto IL_02b3;
	}

IL_00fc:
	{
		String_t* L_24 = V_1;
		bool L_25;
		L_25 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_24, _stringLiteral60D92E37F6F99139C65CA6248F17911C762F4DD6, NULL);
		if (L_25)
		{
			goto IL_01fe;
		}
	}
	{
		goto IL_02b3;
	}

IL_0111:
	{
		String_t* L_26 = V_1;
		bool L_27;
		L_27 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_26, _stringLiteral0FC0575E5B3BFD69FE0E6DACB4257E1AB52484B5, NULL);
		if (L_27)
		{
			goto IL_0215;
		}
	}
	{
		goto IL_02b3;
	}

IL_0126:
	{
		String_t* L_28 = V_1;
		bool L_29;
		L_29 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_28, _stringLiteralD18A8AB8F50A606429410D3C3F543B352E7D6033, NULL);
		if (L_29)
		{
			goto IL_022c;
		}
	}
	{
		goto IL_02b3;
	}

IL_013b:
	{
		String_t* L_30 = V_1;
		bool L_31;
		L_31 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_30, _stringLiteral21CEBAC0172EB4FB67A8A2698C7F35355100D5F7, NULL);
		if (L_31)
		{
			goto IL_0240;
		}
	}
	{
		goto IL_02b3;
	}

IL_0150:
	{
		String_t* L_32 = V_1;
		bool L_33;
		L_33 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_32, _stringLiteralA3C8F2A441D7C8A8A2D967375934EFA74D7FE1E8, NULL);
		if (L_33)
		{
			goto IL_0254;
		}
	}
	{
		goto IL_02b3;
	}

IL_0165:
	{
		String_t* L_34 = V_1;
		bool L_35;
		L_35 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_34, _stringLiteralE0F9D9926B214819D0D0E8B1814BCF46C90D0956, NULL);
		if (L_35)
		{
			goto IL_0268;
		}
	}
	{
		goto IL_02b3;
	}

IL_017a:
	{
		String_t* L_36 = V_1;
		bool L_37;
		L_37 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_36, _stringLiteral0EA7F3FF9751D1C0670732BE07C84116AD963E2D, NULL);
		if (L_37)
		{
			goto IL_027c;
		}
	}
	{
		goto IL_02b3;
	}

IL_018f:
	{
		String_t* L_38 = V_1;
		bool L_39;
		L_39 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_38, _stringLiteral1B024D537329B86AB0DF96B2A714180F442F53E9, NULL);
		if (L_39)
		{
			goto IL_0290;
		}
	}
	{
		goto IL_02b3;
	}

IL_01a4:
	{
		String_t* L_40 = V_1;
		bool L_41;
		L_41 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_40, _stringLiteralE1291C4D47635E327ECFE39842BD1A93F58C61A2, NULL);
		if (L_41)
		{
			goto IL_02a4;
		}
	}
	{
		goto IL_02b3;
	}

IL_01b9:
	{
		// instance.enabled = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_42 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_43 = ((ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_42);
		bool L_44;
		L_44 = GenericVirtualFuncInvoker1< bool, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mFFB70EE53D8CD0255A4E599780F62A3EB1520E83_RuntimeMethod_var, L_42, L_43);
		LimitVelocityOverLifetimeModule_set_enabled_m0C4AC7078A4009C764CDD6C852747161626030F8((&V_0), L_44, NULL);
		// break;
		goto IL_02b9;
	}

IL_01d0:
	{
		// instance.limitX = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_45 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_46 = ((ES3Type_MinMaxCurve_t1C147718750ACBECE5D2B7F545D2A434A3C5409B_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t1C147718750ACBECE5D2B7F545D2A434A3C5409B_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_45);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_47;
		L_47 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_m9D6B4042B923127DEA4A2CAA3E35EED37D75B3D0_RuntimeMethod_var, L_45, L_46);
		LimitVelocityOverLifetimeModule_set_limitX_m453163A173E91BD1FA92A85FFFB1377922264E88((&V_0), L_47, NULL);
		// break;
		goto IL_02b9;
	}

IL_01e7:
	{
		// instance.limitXMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_48 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_49 = ((ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_48);
		float L_50;
		L_50 = GenericVirtualFuncInvoker1< float, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mA86928BC888E342D2C2644535E3399952F5077ED_RuntimeMethod_var, L_48, L_49);
		LimitVelocityOverLifetimeModule_set_limitXMultiplier_m69A35DBE2A96DB94E1C5857C1AEA7700F315FB69((&V_0), L_50, NULL);
		// break;
		goto IL_02b9;
	}

IL_01fe:
	{
		// instance.limitY = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_51 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_52 = ((ES3Type_MinMaxCurve_t1C147718750ACBECE5D2B7F545D2A434A3C5409B_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t1C147718750ACBECE5D2B7F545D2A434A3C5409B_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_51);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_53;
		L_53 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_m9D6B4042B923127DEA4A2CAA3E35EED37D75B3D0_RuntimeMethod_var, L_51, L_52);
		LimitVelocityOverLifetimeModule_set_limitY_m5C4FA3E4199843D17B358EAE552BC1530944C6ED((&V_0), L_53, NULL);
		// break;
		goto IL_02b9;
	}

IL_0215:
	{
		// instance.limitYMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_54 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_55 = ((ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_54);
		float L_56;
		L_56 = GenericVirtualFuncInvoker1< float, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mA86928BC888E342D2C2644535E3399952F5077ED_RuntimeMethod_var, L_54, L_55);
		LimitVelocityOverLifetimeModule_set_limitYMultiplier_mCB16226776AA3FD95FCBFEF08939CDFCDEAD1FD7((&V_0), L_56, NULL);
		// break;
		goto IL_02b9;
	}

IL_022c:
	{
		// instance.limitZ = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_57 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_58 = ((ES3Type_MinMaxCurve_t1C147718750ACBECE5D2B7F545D2A434A3C5409B_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t1C147718750ACBECE5D2B7F545D2A434A3C5409B_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_57);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_59;
		L_59 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_m9D6B4042B923127DEA4A2CAA3E35EED37D75B3D0_RuntimeMethod_var, L_57, L_58);
		LimitVelocityOverLifetimeModule_set_limitZ_mA7AA3F6C6EB9C1E2199DE5EDBFDFCD891E66A06C((&V_0), L_59, NULL);
		// break;
		goto IL_02b9;
	}

IL_0240:
	{
		// instance.limitZMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_60 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_61 = ((ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_60);
		float L_62;
		L_62 = GenericVirtualFuncInvoker1< float, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mA86928BC888E342D2C2644535E3399952F5077ED_RuntimeMethod_var, L_60, L_61);
		LimitVelocityOverLifetimeModule_set_limitZMultiplier_mF8318B3E8798E9778CD356C773A9567EBCC414DF((&V_0), L_62, NULL);
		// break;
		goto IL_02b9;
	}

IL_0254:
	{
		// instance.limit = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_63 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_64 = ((ES3Type_MinMaxCurve_t1C147718750ACBECE5D2B7F545D2A434A3C5409B_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t1C147718750ACBECE5D2B7F545D2A434A3C5409B_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_63);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_65;
		L_65 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_m9D6B4042B923127DEA4A2CAA3E35EED37D75B3D0_RuntimeMethod_var, L_63, L_64);
		LimitVelocityOverLifetimeModule_set_limit_m4714D5E0B04EAE01A49552690E9CC206AC5C7685((&V_0), L_65, NULL);
		// break;
		goto IL_02b9;
	}

IL_0268:
	{
		// instance.limitMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_66 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_67 = ((ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_66);
		float L_68;
		L_68 = GenericVirtualFuncInvoker1< float, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mA86928BC888E342D2C2644535E3399952F5077ED_RuntimeMethod_var, L_66, L_67);
		LimitVelocityOverLifetimeModule_set_limitMultiplier_m520C77C943C30BFE63EF0E4BEA9593D251187B28((&V_0), L_68, NULL);
		// break;
		goto IL_02b9;
	}

IL_027c:
	{
		// instance.dampen = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_69 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_70 = ((ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_69);
		float L_71;
		L_71 = GenericVirtualFuncInvoker1< float, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mA86928BC888E342D2C2644535E3399952F5077ED_RuntimeMethod_var, L_69, L_70);
		LimitVelocityOverLifetimeModule_set_dampen_mE8A893ECFE936519C3F68D440C3C6BD11065E288((&V_0), L_71, NULL);
		// break;
		goto IL_02b9;
	}

IL_0290:
	{
		// instance.separateAxes = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_72 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_73 = ((ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_72);
		bool L_74;
		L_74 = GenericVirtualFuncInvoker1< bool, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mFFB70EE53D8CD0255A4E599780F62A3EB1520E83_RuntimeMethod_var, L_72, L_73);
		LimitVelocityOverLifetimeModule_set_separateAxes_m3E1D0590D45FE0D6657D99685DA4E5A231229EF0((&V_0), L_74, NULL);
		// break;
		goto IL_02b9;
	}

IL_02a4:
	{
		// instance.space = reader.Read<UnityEngine.ParticleSystemSimulationSpace>();
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_75 = ___reader0;
		NullCheck(L_75);
		int32_t L_76;
		L_76 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisParticleSystemSimulationSpace_tB3693D8A3C0FCE63D060546071006AC4ABC60B05_mE28AF5CD31B164FD849D4D05A9C6E60F95D67243_RuntimeMethod_var, L_75);
		LimitVelocityOverLifetimeModule_set_space_m54D13D862FCB1606F37A3F053138437DEBF773D5((&V_0), L_76, NULL);
		// break;
		goto IL_02b9;
	}

IL_02b3:
	{
		// reader.Skip();
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_77 = ___reader0;
		NullCheck(L_77);
		VirtualActionInvoker0::Invoke(41 /* System.Void ES3Reader::Skip() */, L_77);
	}

IL_02b9:
	{
		// while((propertyName = reader.ReadPropertyName()) != null)
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_78 = ___reader0;
		NullCheck(L_78);
		String_t* L_79;
		L_79 = VirtualFuncInvoker0< String_t* >::Invoke(21 /* System.String ES3Reader::ReadPropertyName() */, L_78);
		String_t* L_80 = L_79;
		V_1 = L_80;
		if (L_80)
		{
			goto IL_000c;
		}
	}
	{
		// }
		return;
	}
}
// System.Void ES3Types.ES3Type_LimitVelocityOverLifetimeModule::ReadInto<UnityEngine.ParticleSystem/RotationBySpeedModule>(ES3Reader,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ES3Type_LimitVelocityOverLifetimeModule_ReadInto_TisRotationBySpeedModule_tBCB7E7C1B402D1492310016D5F8FBBA4C15C26A6_mD1E3FB3D096CCD528BE6B5C60C331405C8A53720_gshared (ES3Type_LimitVelocityOverLifetimeModule_t0B3EB57F7FF7F9D1F6D99783CAB9DF9ADCEDE92B* __this, ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* ___reader0, RuntimeObject* ___obj1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mFFB70EE53D8CD0255A4E599780F62A3EB1520E83_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_m9D6B4042B923127DEA4A2CAA3E35EED37D75B3D0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisParticleSystemSimulationSpace_tB3693D8A3C0FCE63D060546071006AC4ABC60B05_mE28AF5CD31B164FD849D4D05A9C6E60F95D67243_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mA86928BC888E342D2C2644535E3399952F5077ED_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_MinMaxCurve_t1C147718750ACBECE5D2B7F545D2A434A3C5409B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LimitVelocityOverLifetimeModule_tC52CF1434E2639EE5D81DD6BA269FF38CA17D8B1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0EA7F3FF9751D1C0670732BE07C84116AD963E2D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0FC0575E5B3BFD69FE0E6DACB4257E1AB52484B5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1B024D537329B86AB0DF96B2A714180F442F53E9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral21CEBAC0172EB4FB67A8A2698C7F35355100D5F7);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral46FADEB9E998225AA96BA7F96F3C6FE519B52F62);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral60D92E37F6F99139C65CA6248F17911C762F4DD6);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral744761D527F44F04E435DEFCA1E21E179B60B0E4);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA3C8F2A441D7C8A8A2D967375934EFA74D7FE1E8);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD18A8AB8F50A606429410D3C3F543B352E7D6033);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE0F9D9926B214819D0D0E8B1814BCF46C90D0956);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE1291C4D47635E327ECFE39842BD1A93F58C61A2);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B);
		s_Il2CppMethodInitialized = true;
	}
	LimitVelocityOverLifetimeModule_tC52CF1434E2639EE5D81DD6BA269FF38CA17D8B1 V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	uint32_t V_2 = 0;
	{
		// var instance = (UnityEngine.ParticleSystem.LimitVelocityOverLifetimeModule)obj;
		RuntimeObject* L_0 = ___obj1;
		V_0 = ((*(LimitVelocityOverLifetimeModule_tC52CF1434E2639EE5D81DD6BA269FF38CA17D8B1*)((LimitVelocityOverLifetimeModule_tC52CF1434E2639EE5D81DD6BA269FF38CA17D8B1*)(LimitVelocityOverLifetimeModule_tC52CF1434E2639EE5D81DD6BA269FF38CA17D8B1*)UnBox(L_0, LimitVelocityOverLifetimeModule_tC52CF1434E2639EE5D81DD6BA269FF38CA17D8B1_il2cpp_TypeInfo_var))));
		goto IL_02b9;
	}

IL_000c:
	{
		String_t* L_1 = V_1;
		uint32_t L_2;
		L_2 = U3CPrivateImplementationDetailsU3E_ComputeStringHash_m6EA1F233618497AEFF8902A5EDFA24C74E2F2876(L_1, NULL);
		V_2 = L_2;
		uint32_t L_3 = V_2;
		if ((!(((uint32_t)L_3) <= ((uint32_t)((int32_t)1319695307)))))
		{
			goto IL_006f;
		}
	}
	{
		uint32_t L_4 = V_2;
		if ((!(((uint32_t)L_4) <= ((uint32_t)((int32_t)691593499)))))
		{
			goto IL_0049;
		}
	}
	{
		uint32_t L_5 = V_2;
		if ((((int32_t)L_5) == ((int32_t)((int32_t)49525662))))
		{
			goto IL_00bd;
		}
	}
	{
		uint32_t L_6 = V_2;
		if ((((int32_t)L_6) == ((int32_t)((int32_t)572581548))))
		{
			goto IL_0111;
		}
	}
	{
		uint32_t L_7 = V_2;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)691593499))))
		{
			goto IL_00e7;
		}
	}
	{
		goto IL_02b3;
	}

IL_0049:
	{
		uint32_t L_8 = V_2;
		if ((((int32_t)L_8) == ((int32_t)((int32_t)853203252))))
		{
			goto IL_0150;
		}
	}
	{
		uint32_t L_9 = V_2;
		if ((((int32_t)L_9) == ((int32_t)((int32_t)894689925))))
		{
			goto IL_01a4;
		}
	}
	{
		uint32_t L_10 = V_2;
		if ((((int32_t)L_10) == ((int32_t)((int32_t)1319695307))))
		{
			goto IL_0165;
		}
	}
	{
		goto IL_02b3;
	}

IL_006f:
	{
		uint32_t L_11 = V_2;
		if ((!(((uint32_t)L_11) <= ((uint32_t)((int32_t)2072266391)))))
		{
			goto IL_0097;
		}
	}
	{
		uint32_t L_12 = V_2;
		if ((((int32_t)L_12) == ((int32_t)((int32_t)1479031685))))
		{
			goto IL_018f;
		}
	}
	{
		uint32_t L_13 = V_2;
		if ((((int32_t)L_13) == ((int32_t)((int32_t)2055488772))))
		{
			goto IL_00d2;
		}
	}
	{
		uint32_t L_14 = V_2;
		if ((((int32_t)L_14) == ((int32_t)((int32_t)2072266391))))
		{
			goto IL_00fc;
		}
	}
	{
		goto IL_02b3;
	}

IL_0097:
	{
		uint32_t L_15 = V_2;
		if ((((int32_t)L_15) == ((int32_t)((int32_t)2089044010))))
		{
			goto IL_0126;
		}
	}
	{
		uint32_t L_16 = V_2;
		if ((((int32_t)L_16) == ((int32_t)((int32_t)-1976734835))))
		{
			goto IL_013b;
		}
	}
	{
		uint32_t L_17 = V_2;
		if ((((int32_t)L_17) == ((int32_t)((int32_t)-1124873996))))
		{
			goto IL_017a;
		}
	}
	{
		goto IL_02b3;
	}

IL_00bd:
	{
		String_t* L_18 = V_1;
		bool L_19;
		L_19 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_18, _stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B, NULL);
		if (L_19)
		{
			goto IL_01b9;
		}
	}
	{
		goto IL_02b3;
	}

IL_00d2:
	{
		String_t* L_20 = V_1;
		bool L_21;
		L_21 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_20, _stringLiteral46FADEB9E998225AA96BA7F96F3C6FE519B52F62, NULL);
		if (L_21)
		{
			goto IL_01d0;
		}
	}
	{
		goto IL_02b3;
	}

IL_00e7:
	{
		String_t* L_22 = V_1;
		bool L_23;
		L_23 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_22, _stringLiteral744761D527F44F04E435DEFCA1E21E179B60B0E4, NULL);
		if (L_23)
		{
			goto IL_01e7;
		}
	}
	{
		goto IL_02b3;
	}

IL_00fc:
	{
		String_t* L_24 = V_1;
		bool L_25;
		L_25 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_24, _stringLiteral60D92E37F6F99139C65CA6248F17911C762F4DD6, NULL);
		if (L_25)
		{
			goto IL_01fe;
		}
	}
	{
		goto IL_02b3;
	}

IL_0111:
	{
		String_t* L_26 = V_1;
		bool L_27;
		L_27 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_26, _stringLiteral0FC0575E5B3BFD69FE0E6DACB4257E1AB52484B5, NULL);
		if (L_27)
		{
			goto IL_0215;
		}
	}
	{
		goto IL_02b3;
	}

IL_0126:
	{
		String_t* L_28 = V_1;
		bool L_29;
		L_29 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_28, _stringLiteralD18A8AB8F50A606429410D3C3F543B352E7D6033, NULL);
		if (L_29)
		{
			goto IL_022c;
		}
	}
	{
		goto IL_02b3;
	}

IL_013b:
	{
		String_t* L_30 = V_1;
		bool L_31;
		L_31 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_30, _stringLiteral21CEBAC0172EB4FB67A8A2698C7F35355100D5F7, NULL);
		if (L_31)
		{
			goto IL_0240;
		}
	}
	{
		goto IL_02b3;
	}

IL_0150:
	{
		String_t* L_32 = V_1;
		bool L_33;
		L_33 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_32, _stringLiteralA3C8F2A441D7C8A8A2D967375934EFA74D7FE1E8, NULL);
		if (L_33)
		{
			goto IL_0254;
		}
	}
	{
		goto IL_02b3;
	}

IL_0165:
	{
		String_t* L_34 = V_1;
		bool L_35;
		L_35 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_34, _stringLiteralE0F9D9926B214819D0D0E8B1814BCF46C90D0956, NULL);
		if (L_35)
		{
			goto IL_0268;
		}
	}
	{
		goto IL_02b3;
	}

IL_017a:
	{
		String_t* L_36 = V_1;
		bool L_37;
		L_37 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_36, _stringLiteral0EA7F3FF9751D1C0670732BE07C84116AD963E2D, NULL);
		if (L_37)
		{
			goto IL_027c;
		}
	}
	{
		goto IL_02b3;
	}

IL_018f:
	{
		String_t* L_38 = V_1;
		bool L_39;
		L_39 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_38, _stringLiteral1B024D537329B86AB0DF96B2A714180F442F53E9, NULL);
		if (L_39)
		{
			goto IL_0290;
		}
	}
	{
		goto IL_02b3;
	}

IL_01a4:
	{
		String_t* L_40 = V_1;
		bool L_41;
		L_41 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_40, _stringLiteralE1291C4D47635E327ECFE39842BD1A93F58C61A2, NULL);
		if (L_41)
		{
			goto IL_02a4;
		}
	}
	{
		goto IL_02b3;
	}

IL_01b9:
	{
		// instance.enabled = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_42 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_43 = ((ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_42);
		bool L_44;
		L_44 = GenericVirtualFuncInvoker1< bool, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mFFB70EE53D8CD0255A4E599780F62A3EB1520E83_RuntimeMethod_var, L_42, L_43);
		LimitVelocityOverLifetimeModule_set_enabled_m0C4AC7078A4009C764CDD6C852747161626030F8((&V_0), L_44, NULL);
		// break;
		goto IL_02b9;
	}

IL_01d0:
	{
		// instance.limitX = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_45 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_46 = ((ES3Type_MinMaxCurve_t1C147718750ACBECE5D2B7F545D2A434A3C5409B_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t1C147718750ACBECE5D2B7F545D2A434A3C5409B_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_45);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_47;
		L_47 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_m9D6B4042B923127DEA4A2CAA3E35EED37D75B3D0_RuntimeMethod_var, L_45, L_46);
		LimitVelocityOverLifetimeModule_set_limitX_m453163A173E91BD1FA92A85FFFB1377922264E88((&V_0), L_47, NULL);
		// break;
		goto IL_02b9;
	}

IL_01e7:
	{
		// instance.limitXMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_48 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_49 = ((ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_48);
		float L_50;
		L_50 = GenericVirtualFuncInvoker1< float, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mA86928BC888E342D2C2644535E3399952F5077ED_RuntimeMethod_var, L_48, L_49);
		LimitVelocityOverLifetimeModule_set_limitXMultiplier_m69A35DBE2A96DB94E1C5857C1AEA7700F315FB69((&V_0), L_50, NULL);
		// break;
		goto IL_02b9;
	}

IL_01fe:
	{
		// instance.limitY = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_51 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_52 = ((ES3Type_MinMaxCurve_t1C147718750ACBECE5D2B7F545D2A434A3C5409B_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t1C147718750ACBECE5D2B7F545D2A434A3C5409B_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_51);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_53;
		L_53 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_m9D6B4042B923127DEA4A2CAA3E35EED37D75B3D0_RuntimeMethod_var, L_51, L_52);
		LimitVelocityOverLifetimeModule_set_limitY_m5C4FA3E4199843D17B358EAE552BC1530944C6ED((&V_0), L_53, NULL);
		// break;
		goto IL_02b9;
	}

IL_0215:
	{
		// instance.limitYMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_54 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_55 = ((ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_54);
		float L_56;
		L_56 = GenericVirtualFuncInvoker1< float, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mA86928BC888E342D2C2644535E3399952F5077ED_RuntimeMethod_var, L_54, L_55);
		LimitVelocityOverLifetimeModule_set_limitYMultiplier_mCB16226776AA3FD95FCBFEF08939CDFCDEAD1FD7((&V_0), L_56, NULL);
		// break;
		goto IL_02b9;
	}

IL_022c:
	{
		// instance.limitZ = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_57 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_58 = ((ES3Type_MinMaxCurve_t1C147718750ACBECE5D2B7F545D2A434A3C5409B_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t1C147718750ACBECE5D2B7F545D2A434A3C5409B_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_57);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_59;
		L_59 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_m9D6B4042B923127DEA4A2CAA3E35EED37D75B3D0_RuntimeMethod_var, L_57, L_58);
		LimitVelocityOverLifetimeModule_set_limitZ_mA7AA3F6C6EB9C1E2199DE5EDBFDFCD891E66A06C((&V_0), L_59, NULL);
		// break;
		goto IL_02b9;
	}

IL_0240:
	{
		// instance.limitZMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_60 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_61 = ((ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_60);
		float L_62;
		L_62 = GenericVirtualFuncInvoker1< float, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mA86928BC888E342D2C2644535E3399952F5077ED_RuntimeMethod_var, L_60, L_61);
		LimitVelocityOverLifetimeModule_set_limitZMultiplier_mF8318B3E8798E9778CD356C773A9567EBCC414DF((&V_0), L_62, NULL);
		// break;
		goto IL_02b9;
	}

IL_0254:
	{
		// instance.limit = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_63 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_64 = ((ES3Type_MinMaxCurve_t1C147718750ACBECE5D2B7F545D2A434A3C5409B_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t1C147718750ACBECE5D2B7F545D2A434A3C5409B_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_63);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_65;
		L_65 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_m9D6B4042B923127DEA4A2CAA3E35EED37D75B3D0_RuntimeMethod_var, L_63, L_64);
		LimitVelocityOverLifetimeModule_set_limit_m4714D5E0B04EAE01A49552690E9CC206AC5C7685((&V_0), L_65, NULL);
		// break;
		goto IL_02b9;
	}

IL_0268:
	{
		// instance.limitMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_66 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_67 = ((ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_66);
		float L_68;
		L_68 = GenericVirtualFuncInvoker1< float, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mA86928BC888E342D2C2644535E3399952F5077ED_RuntimeMethod_var, L_66, L_67);
		LimitVelocityOverLifetimeModule_set_limitMultiplier_m520C77C943C30BFE63EF0E4BEA9593D251187B28((&V_0), L_68, NULL);
		// break;
		goto IL_02b9;
	}

IL_027c:
	{
		// instance.dampen = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_69 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_70 = ((ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_69);
		float L_71;
		L_71 = GenericVirtualFuncInvoker1< float, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mA86928BC888E342D2C2644535E3399952F5077ED_RuntimeMethod_var, L_69, L_70);
		LimitVelocityOverLifetimeModule_set_dampen_mE8A893ECFE936519C3F68D440C3C6BD11065E288((&V_0), L_71, NULL);
		// break;
		goto IL_02b9;
	}

IL_0290:
	{
		// instance.separateAxes = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_72 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_73 = ((ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_72);
		bool L_74;
		L_74 = GenericVirtualFuncInvoker1< bool, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mFFB70EE53D8CD0255A4E599780F62A3EB1520E83_RuntimeMethod_var, L_72, L_73);
		LimitVelocityOverLifetimeModule_set_separateAxes_m3E1D0590D45FE0D6657D99685DA4E5A231229EF0((&V_0), L_74, NULL);
		// break;
		goto IL_02b9;
	}

IL_02a4:
	{
		// instance.space = reader.Read<UnityEngine.ParticleSystemSimulationSpace>();
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_75 = ___reader0;
		NullCheck(L_75);
		int32_t L_76;
		L_76 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisParticleSystemSimulationSpace_tB3693D8A3C0FCE63D060546071006AC4ABC60B05_mE28AF5CD31B164FD849D4D05A9C6E60F95D67243_RuntimeMethod_var, L_75);
		LimitVelocityOverLifetimeModule_set_space_m54D13D862FCB1606F37A3F053138437DEBF773D5((&V_0), L_76, NULL);
		// break;
		goto IL_02b9;
	}

IL_02b3:
	{
		// reader.Skip();
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_77 = ___reader0;
		NullCheck(L_77);
		VirtualActionInvoker0::Invoke(41 /* System.Void ES3Reader::Skip() */, L_77);
	}

IL_02b9:
	{
		// while((propertyName = reader.ReadPropertyName()) != null)
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_78 = ___reader0;
		NullCheck(L_78);
		String_t* L_79;
		L_79 = VirtualFuncInvoker0< String_t* >::Invoke(21 /* System.String ES3Reader::ReadPropertyName() */, L_78);
		String_t* L_80 = L_79;
		V_1 = L_80;
		if (L_80)
		{
			goto IL_000c;
		}
	}
	{
		// }
		return;
	}
}
