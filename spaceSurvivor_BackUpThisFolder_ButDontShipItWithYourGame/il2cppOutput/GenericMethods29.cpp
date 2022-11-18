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
// UnityEngine.Material[]
struct MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D;
// UnityEngine.Transform[]
struct TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24;
// UnityEngine.AnimationCurve
struct AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354;
// ES3Reader
struct ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518;
// ES3Settings
struct ES3Settings_t5FF4E8DB95573CB739527FD69BD1823D602885C1;
// ES3Types.ES3Type
struct ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE;
// ES3Types.ES3Type_SizeBySpeedModule
struct ES3Type_SizeBySpeedModule_t2A3358BE9F6111ED907A0D4CA428148A73CD7601;
// ES3Types.ES3Type_SizeOverLifetimeModule
struct ES3Type_SizeOverLifetimeModule_tE76521DF6C9288642AE09CBD10810E97A6038CAF;
// ES3Types.ES3Type_SkinnedMeshRenderer
struct ES3Type_SkinnedMeshRenderer_tE179CAC07F64CE96B5AE4AB3EFB409C2E3E80111;
// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F;
// System.Collections.IEnumerator
struct IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA;
// UnityEngine.Material
struct Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3;
// UnityEngine.Mesh
struct Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4;
// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C;
// UnityEngine.ParticleSystem
struct ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1;
// UnityEngine.Renderer
struct Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF;
// UnityEngine.SkinnedMeshRenderer
struct SkinnedMeshRenderer_t020C4E8648EA1C4C6BA5C41502919B387E7E1C2E;
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

IL2CPP_EXTERN_C RuntimeClass* ES3Type_Bounds_t7DD589E28271A151FBD0712F3599D195980A6248_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ES3Type_GameObject_t7AACC3CCF9FD31A285F90A28AE3331E69A1F02B2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ES3Type_Mesh_tB7CD0BF677668097D339633406535F749DDDFE48_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ES3Type_MinMaxCurve_t1C147718750ACBECE5D2B7F545D2A434A3C5409B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ES3Type_Transform_t744F7C45C7A4F966265500803F08C4965797DAD7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ES3Type_Vector2_tB51CE4B1AFCBAFE7ADC540050621735C4F8D4387_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ES3Type_Vector4_t20EB9288ABFACFA144B849DBAE5F00003E5D3EF1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ES3Type_floatArray_t43478D8ECEDD09DE4F813A5C0C077252B6E3930A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ES3Type_int_t05A5E7A96442F23CE33E24A71CD349372A70E0C3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ES3Type_string_t0C89CCA6F02AF5B46E66DEF92E77FCEC83C2F068_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SizeBySpeedModule_t73995CB54A0D1B06BA100EA77972D37CDF7B4DC4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SizeOverLifetimeModule_t6711CE9659123CAA5BFBFDFA9F53174CD979AC0C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SkinnedMeshRenderer_t020C4E8648EA1C4C6BA5C41502919B387E7E1C2E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* String_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral062DB096C728515E033CF8C48A1C1F0B9A79384B;
IL2CPP_EXTERN_C String_t* _stringLiteral1B024D537329B86AB0DF96B2A714180F442F53E9;
IL2CPP_EXTERN_C String_t* _stringLiteral1F9261ABE85940E10CA48B7B42F1E5267F122734;
IL2CPP_EXTERN_C String_t* _stringLiteral23EC2E17148B28CC0FCAC476B21E689161203B19;
IL2CPP_EXTERN_C String_t* _stringLiteral2F8690361553406965679AEF125F896BC5FC61F5;
IL2CPP_EXTERN_C String_t* _stringLiteral338DFB21C4BCDE10C2A6B0F6B758581AB45E283A;
IL2CPP_EXTERN_C String_t* _stringLiteral3EC42735CF07DB9169F6821DC94EB45DE6B5E1AA;
IL2CPP_EXTERN_C String_t* _stringLiteral3EE5A4671A4E5AEBD31CA5F013A7773DC18ED22B;
IL2CPP_EXTERN_C String_t* _stringLiteral4845015737DC41475709911228278216EE4DC3AF;
IL2CPP_EXTERN_C String_t* _stringLiteral49E8F5255C0235CF3C6747DD1A447699E1AA2759;
IL2CPP_EXTERN_C String_t* _stringLiteral4E04E7564B2B76DBD228760282F0982D7BC0AFDA;
IL2CPP_EXTERN_C String_t* _stringLiteral73792CCBAF937C765700AA0D7388BC226F003166;
IL2CPP_EXTERN_C String_t* _stringLiteral7E7975F5870DE751BD38D4E3A4C0644FFCF21C5F;
IL2CPP_EXTERN_C String_t* _stringLiteral82A38EB534B163662598A55A70842F5AA8919477;
IL2CPP_EXTERN_C String_t* _stringLiteral843D6122FFBBF465C80ECD6FDFC0DF88BEAF4E14;
IL2CPP_EXTERN_C String_t* _stringLiteral892582A238DF4FFEB2A2E7DD5D90A9A7AC6C26C4;
IL2CPP_EXTERN_C String_t* _stringLiteral8C6F88DEE0DFE3513BB8B44A8CF0FEE437F4EFFB;
IL2CPP_EXTERN_C String_t* _stringLiteral8DD0A7170C2DECE4F5E82F96AB9B00AAEBA9F438;
IL2CPP_EXTERN_C String_t* _stringLiteral8F76FFC503D9127950E3EAD1DFD82A8C6C91F728;
IL2CPP_EXTERN_C String_t* _stringLiteral9384C6EF2DA5C0BD5274A0DACFF291D0ABBFD8B1;
IL2CPP_EXTERN_C String_t* _stringLiteral9CE1604D659135925CCC4DD1F526AFFE42E689F1;
IL2CPP_EXTERN_C String_t* _stringLiteral9E61658953B4F9BB4A05E3D2D2BC18990BADE934;
IL2CPP_EXTERN_C String_t* _stringLiteralA0ECA3668A8B14855295BD8DD5E88309AF31330B;
IL2CPP_EXTERN_C String_t* _stringLiteralBCA8FD5F6CF117BC613330313E82DF905908323F;
IL2CPP_EXTERN_C String_t* _stringLiteralBD0DD0004699EF86BF0FC1D161FA3766AF5126C4;
IL2CPP_EXTERN_C String_t* _stringLiteralBDBEBC1E8A863EAF2A1EFDC4D2393F1540ABF0C9;
IL2CPP_EXTERN_C String_t* _stringLiteralC51D373B25723E8ADF9BE9C06A196725DF68C54E;
IL2CPP_EXTERN_C String_t* _stringLiteralC5F2406640F4F08577B3ADFE0B94DDC1B821F406;
IL2CPP_EXTERN_C String_t* _stringLiteralC8D7651AAAFAAA9A55123A4B14C546BC27C603E7;
IL2CPP_EXTERN_C String_t* _stringLiteralCFEB83A996CD34035197889D46A13DB9901EE76F;
IL2CPP_EXTERN_C String_t* _stringLiteralD0D915A2B403702AB1F18A340F6557F4030455A2;
IL2CPP_EXTERN_C String_t* _stringLiteralDDA23639367EB0B86F361EA02AD294BDFDE6BA0B;
IL2CPP_EXTERN_C String_t* _stringLiteralE5F2AD4FF502002CA1798B22867D45AAB84AB3BD;
IL2CPP_EXTERN_C String_t* _stringLiteralF04D2BD9D99AD6218FC8C63B094FB3F1333E7F44;
IL2CPP_EXTERN_C String_t* _stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B;
IL2CPP_EXTERN_C const RuntimeMethod* ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mFFB70EE53D8CD0255A4E599780F62A3EB1520E83_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ES3Reader_Read_TisBounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3_m1DAB1D2953772FCB56E7DB24E9D86F3CB42348F4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ES3Reader_Read_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_mF17F721F02D9912C0E9F95ADE84A7350175EA7FF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ES3Reader_Read_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mEFCC4D52DD5B822D3561A53591AE11CDB25CDB6F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ES3Reader_Read_TisLightProbeUsage_tC6292C7B7CBA0E5AA2A56F40D71F58A7E06C2948_m66BEF16A5A89E757FF33443DDD5CE1051BB50376_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ES3Reader_Read_TisMaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D_mD6C0F6DE0DFCBEEE0ECC2806C3C76B9B9AA49622_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ES3Reader_Read_TisMesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4_m34F6C712B26BFE70E5AAC03798D838583D35D02A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_m9D6B4042B923127DEA4A2CAA3E35EED37D75B3D0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ES3Reader_Read_TisMotionVectorGenerationMode_tE87C61556749260EF5429A0F8FE55DAD30EEAFCB_m8282A371C977788F369BE28A7EC6D07EDA8A24D8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ES3Reader_Read_TisReflectionProbeUsage_t033508C14CD4AD926A3A215D19913DC21EA22705_m8D386D0E2DCEF800E206280828E9F9989F462116_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ES3Reader_Read_TisShadowCastingMode_tF30806698B37CF120A1A506BD7549EAF308E7C6D_mE74883DA1F57042CE2132D08265B7EDE224066CE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ES3Reader_Read_TisSingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C_m73C3BB10EE1FD2C09B6F97D71FD9BD5ACB2F4FA4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mA86928BC888E342D2C2644535E3399952F5077ED_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ES3Reader_Read_TisSkinQuality_tFFFBBA855612EBEAC68BFEBCD1D8F62B26DE3827_mF061E855D0FB551C60214FFF55182CCBDE0BF26D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ES3Reader_Read_TisString_t_mE83D478C999E69292DB9310C2993B1EE7DD28021_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ES3Reader_Read_TisTransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24_m8635375AFDE804EDFCACC9B81EF50E56F116BB14_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ES3Reader_Read_TisTransform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1_mB5F67B5F1812826BAC1CF736E8760BF608548454_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ES3Reader_Read_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_m95B09869E3B912BD36BC3571D842BA21C71EB14B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ES3Reader_Read_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_m6D7FA5D5608370867F7E593271DDFE9DB2CEBD88_RuntimeMethod_var;

struct MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D;
struct SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C;
struct TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24;

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

// ES3Types.ES3CollectionType
struct ES3CollectionType_t361B1C3C84F465FFA044FACE28E1AC3A569EDCD9  : public ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE
{
	// ES3Types.ES3Type ES3Types.ES3CollectionType::elementType
	ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* ___elementType_12;
};

// ES3Types.ES3ObjectType
struct ES3ObjectType_t97D4D5BF1057D26370EFE65DD23BA3695986EA3C  : public ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE
{
};

// ES3Types.ES3Type_Bounds
struct ES3Type_Bounds_t7DD589E28271A151FBD0712F3599D195980A6248  : public ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE
{
};

struct ES3Type_Bounds_t7DD589E28271A151FBD0712F3599D195980A6248_StaticFields
{
	// ES3Types.ES3Type ES3Types.ES3Type_Bounds::Instance
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

// ES3Types.ES3Type_SizeBySpeedModule
struct ES3Type_SizeBySpeedModule_t2A3358BE9F6111ED907A0D4CA428148A73CD7601  : public ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE
{
};

struct ES3Type_SizeBySpeedModule_t2A3358BE9F6111ED907A0D4CA428148A73CD7601_StaticFields
{
	// ES3Types.ES3Type ES3Types.ES3Type_SizeBySpeedModule::Instance
	ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* ___Instance_12;
};

// ES3Types.ES3Type_SizeOverLifetimeModule
struct ES3Type_SizeOverLifetimeModule_tE76521DF6C9288642AE09CBD10810E97A6038CAF  : public ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE
{
};

struct ES3Type_SizeOverLifetimeModule_tE76521DF6C9288642AE09CBD10810E97A6038CAF_StaticFields
{
	// ES3Types.ES3Type ES3Types.ES3Type_SizeOverLifetimeModule::Instance
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

// ES3Types.ES3Type_Vector4
struct ES3Type_Vector4_t20EB9288ABFACFA144B849DBAE5F00003E5D3EF1  : public ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE
{
};

struct ES3Type_Vector4_t20EB9288ABFACFA144B849DBAE5F00003E5D3EF1_StaticFields
{
	// ES3Types.ES3Type ES3Types.ES3Type_Vector4::Instance
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

// ES3Types.ES3Type_string
struct ES3Type_string_t0C89CCA6F02AF5B46E66DEF92E77FCEC83C2F068  : public ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE
{
};

struct ES3Type_string_t0C89CCA6F02AF5B46E66DEF92E77FCEC83C2F068_StaticFields
{
	// ES3Types.ES3Type ES3Types.ES3Type_string::Instance
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

// UnityEngine.Vector4
struct Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 
{
	// System.Single UnityEngine.Vector4::x
	float ___x_1;
	// System.Single UnityEngine.Vector4::y
	float ___y_2;
	// System.Single UnityEngine.Vector4::z
	float ___z_3;
	// System.Single UnityEngine.Vector4::w
	float ___w_4;
};

struct Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_StaticFields
{
	// UnityEngine.Vector4 UnityEngine.Vector4::zeroVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___zeroVector_5;
	// UnityEngine.Vector4 UnityEngine.Vector4::oneVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___oneVector_6;
	// UnityEngine.Vector4 UnityEngine.Vector4::positiveInfinityVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___positiveInfinityVector_7;
	// UnityEngine.Vector4 UnityEngine.Vector4::negativeInfinityVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___negativeInfinityVector_8;
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

// UnityEngine.ParticleSystem/SizeBySpeedModule
struct SizeBySpeedModule_t73995CB54A0D1B06BA100EA77972D37CDF7B4DC4 
{
	// UnityEngine.ParticleSystem UnityEngine.ParticleSystem/SizeBySpeedModule::m_ParticleSystem
	ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* ___m_ParticleSystem_0;
};
// Native definition for P/Invoke marshalling of UnityEngine.ParticleSystem/SizeBySpeedModule
struct SizeBySpeedModule_t73995CB54A0D1B06BA100EA77972D37CDF7B4DC4_marshaled_pinvoke
{
	ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* ___m_ParticleSystem_0;
};
// Native definition for COM marshalling of UnityEngine.ParticleSystem/SizeBySpeedModule
struct SizeBySpeedModule_t73995CB54A0D1B06BA100EA77972D37CDF7B4DC4_marshaled_com
{
	ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* ___m_ParticleSystem_0;
};

// UnityEngine.ParticleSystem/SizeOverLifetimeModule
struct SizeOverLifetimeModule_t6711CE9659123CAA5BFBFDFA9F53174CD979AC0C 
{
	// UnityEngine.ParticleSystem UnityEngine.ParticleSystem/SizeOverLifetimeModule::m_ParticleSystem
	ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* ___m_ParticleSystem_0;
};
// Native definition for P/Invoke marshalling of UnityEngine.ParticleSystem/SizeOverLifetimeModule
struct SizeOverLifetimeModule_t6711CE9659123CAA5BFBFDFA9F53174CD979AC0C_marshaled_pinvoke
{
	ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* ___m_ParticleSystem_0;
};
// Native definition for COM marshalling of UnityEngine.ParticleSystem/SizeOverLifetimeModule
struct SizeOverLifetimeModule_t6711CE9659123CAA5BFBFDFA9F53174CD979AC0C_marshaled_com
{
	ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* ___m_ParticleSystem_0;
};

// UnityEngine.Bounds
struct Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 
{
	// UnityEngine.Vector3 UnityEngine.Bounds::m_Center
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Center_0;
	// UnityEngine.Vector3 UnityEngine.Bounds::m_Extents
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Extents_1;
};

// ES3Types.ES3ArrayType
struct ES3ArrayType_t56F45FADA5C22710D992097C0FBC0D000408233C  : public ES3CollectionType_t361B1C3C84F465FFA044FACE28E1AC3A569EDCD9
{
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

// ES3Types.ES3Type_GameObject
struct ES3Type_GameObject_t7AACC3CCF9FD31A285F90A28AE3331E69A1F02B2  : public ES3UnityObjectType_t3436D50553BAED8BDAD2A84B56E1F267FB66B24B
{
	// System.Boolean ES3Types.ES3Type_GameObject::saveChildren
	bool ___saveChildren_15;
};

struct ES3Type_GameObject_t7AACC3CCF9FD31A285F90A28AE3331E69A1F02B2_StaticFields
{
	// ES3Types.ES3Type ES3Types.ES3Type_GameObject::Instance
	ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* ___Instance_14;
};

// ES3Types.ES3Type_Mesh
struct ES3Type_Mesh_tB7CD0BF677668097D339633406535F749DDDFE48  : public ES3UnityObjectType_t3436D50553BAED8BDAD2A84B56E1F267FB66B24B
{
};

struct ES3Type_Mesh_tB7CD0BF677668097D339633406535F749DDDFE48_StaticFields
{
	// ES3Types.ES3Type ES3Types.ES3Type_Mesh::Instance
	ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* ___Instance_12;
};

// ES3Types.ES3Type_floatArray
struct ES3Type_floatArray_t43478D8ECEDD09DE4F813A5C0C077252B6E3930A  : public ES3ArrayType_t56F45FADA5C22710D992097C0FBC0D000408233C
{
};

struct ES3Type_floatArray_t43478D8ECEDD09DE4F813A5C0C077252B6E3930A_StaticFields
{
	// ES3Types.ES3Type ES3Types.ES3Type_floatArray::Instance
	ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* ___Instance_13;
};

// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.Material
struct Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.Mesh
struct Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// ES3Types.ES3Type_SkinnedMeshRenderer
struct ES3Type_SkinnedMeshRenderer_tE179CAC07F64CE96B5AE4AB3EFB409C2E3E80111  : public ES3ComponentType_tA96FBCDEF44843795CFD0CC92E345662DD11834B
{
};

struct ES3Type_SkinnedMeshRenderer_tE179CAC07F64CE96B5AE4AB3EFB409C2E3E80111_StaticFields
{
	// ES3Types.ES3Type ES3Types.ES3Type_SkinnedMeshRenderer::Instance
	ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* ___Instance_13;
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

// UnityEngine.Renderer
struct Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.SkinnedMeshRenderer
struct SkinnedMeshRenderer_t020C4E8648EA1C4C6BA5C41502919B387E7E1C2E  : public Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF
{
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
// System.Single[]
struct SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C  : public RuntimeArray
{
	ALIGN_FIELD (8) float m_Items[1];

	inline float GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline float* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, float value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline float GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline float* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, float value)
	{
		m_Items[index] = value;
	}
};
// UnityEngine.Transform[]
struct TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24  : public RuntimeArray
{
	ALIGN_FIELD (8) Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* m_Items[1];

	inline Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// UnityEngine.Material[]
struct MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D  : public RuntimeArray
{
	ALIGN_FIELD (8) Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* m_Items[1];

	inline Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};



// System.UInt32 <PrivateImplementationDetails>::ComputeStringHash(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t U3CPrivateImplementationDetailsU3E_ComputeStringHash_m9E43873DE0DF480D27EC1C2AA3C09E74EA77F75D (String_t* ___s0, const RuntimeMethod* method) ;
// System.Boolean System.String::op_Equality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0 (String_t* ___a0, String_t* ___b1, const RuntimeMethod* method) ;
// System.Void UnityEngine.ParticleSystem/SizeBySpeedModule::set_enabled(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SizeBySpeedModule_set_enabled_m1DFF0FEFF522C52D874173B6CDAAEE94F9E8B718 (SizeBySpeedModule_t73995CB54A0D1B06BA100EA77972D37CDF7B4DC4* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.ParticleSystem/SizeBySpeedModule::set_size(UnityEngine.ParticleSystem/MinMaxCurve)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SizeBySpeedModule_set_size_mD906BB6EAE9613DDA6F623E4D4878D69ECB90729 (SizeBySpeedModule_t73995CB54A0D1B06BA100EA77972D37CDF7B4DC4* __this, MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.ParticleSystem/SizeBySpeedModule::set_sizeMultiplier(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SizeBySpeedModule_set_sizeMultiplier_mAFACCF6252B8FB92DC3A51BCE11D22126B315901 (SizeBySpeedModule_t73995CB54A0D1B06BA100EA77972D37CDF7B4DC4* __this, float ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.ParticleSystem/SizeBySpeedModule::set_x(UnityEngine.ParticleSystem/MinMaxCurve)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SizeBySpeedModule_set_x_mED5B851A688588F171B38AF31B0CC91A003DA164 (SizeBySpeedModule_t73995CB54A0D1B06BA100EA77972D37CDF7B4DC4* __this, MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.ParticleSystem/SizeBySpeedModule::set_xMultiplier(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SizeBySpeedModule_set_xMultiplier_m1803C7585C7DA6333FB4B3595EAD753FFD8ED32A (SizeBySpeedModule_t73995CB54A0D1B06BA100EA77972D37CDF7B4DC4* __this, float ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.ParticleSystem/SizeBySpeedModule::set_y(UnityEngine.ParticleSystem/MinMaxCurve)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SizeBySpeedModule_set_y_m1E9DE959AFA22DE52D24537108BD41B2D4B017E6 (SizeBySpeedModule_t73995CB54A0D1B06BA100EA77972D37CDF7B4DC4* __this, MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.ParticleSystem/SizeBySpeedModule::set_yMultiplier(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SizeBySpeedModule_set_yMultiplier_m4C9EE0927456366AC12C17543E95BAB3201C9DCB (SizeBySpeedModule_t73995CB54A0D1B06BA100EA77972D37CDF7B4DC4* __this, float ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.ParticleSystem/SizeBySpeedModule::set_z(UnityEngine.ParticleSystem/MinMaxCurve)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SizeBySpeedModule_set_z_m73C05D968B5C62551614E86A77AEF557F15734A3 (SizeBySpeedModule_t73995CB54A0D1B06BA100EA77972D37CDF7B4DC4* __this, MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.ParticleSystem/SizeBySpeedModule::set_zMultiplier(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SizeBySpeedModule_set_zMultiplier_m0B67A4AF3E30D31C14DBD5FAAA3EABFB787D9826 (SizeBySpeedModule_t73995CB54A0D1B06BA100EA77972D37CDF7B4DC4* __this, float ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.ParticleSystem/SizeBySpeedModule::set_separateAxes(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SizeBySpeedModule_set_separateAxes_m5B0BA28A01D7FED6FDDA0267135B5EAE1F9C72C7 (SizeBySpeedModule_t73995CB54A0D1B06BA100EA77972D37CDF7B4DC4* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.ParticleSystem/SizeBySpeedModule::set_range(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SizeBySpeedModule_set_range_m76B9B316654E44D6938A4A06DED0DF8B3CBCE4D7 (SizeBySpeedModule_t73995CB54A0D1B06BA100EA77972D37CDF7B4DC4* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.ParticleSystem/SizeOverLifetimeModule::set_enabled(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SizeOverLifetimeModule_set_enabled_mC45334E7AC31CCBE1CFA531D28D29E1BD38D5D6F (SizeOverLifetimeModule_t6711CE9659123CAA5BFBFDFA9F53174CD979AC0C* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.ParticleSystem/SizeOverLifetimeModule::set_size(UnityEngine.ParticleSystem/MinMaxCurve)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SizeOverLifetimeModule_set_size_m1D5987F4FB9E948DEAA5E3D8FB21D1AFEE15EBE5 (SizeOverLifetimeModule_t6711CE9659123CAA5BFBFDFA9F53174CD979AC0C* __this, MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.ParticleSystem/SizeOverLifetimeModule::set_sizeMultiplier(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SizeOverLifetimeModule_set_sizeMultiplier_mE97DDCFF7A3065E4E1709EE66C8A524268A757EF (SizeOverLifetimeModule_t6711CE9659123CAA5BFBFDFA9F53174CD979AC0C* __this, float ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.ParticleSystem/SizeOverLifetimeModule::set_x(UnityEngine.ParticleSystem/MinMaxCurve)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SizeOverLifetimeModule_set_x_m7B791B7E4BE55CC4CE1FB815C2E09DBAB05F027A (SizeOverLifetimeModule_t6711CE9659123CAA5BFBFDFA9F53174CD979AC0C* __this, MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.ParticleSystem/SizeOverLifetimeModule::set_xMultiplier(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SizeOverLifetimeModule_set_xMultiplier_mD17EFB03D20765192F5772A17573D777DB261910 (SizeOverLifetimeModule_t6711CE9659123CAA5BFBFDFA9F53174CD979AC0C* __this, float ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.ParticleSystem/SizeOverLifetimeModule::set_y(UnityEngine.ParticleSystem/MinMaxCurve)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SizeOverLifetimeModule_set_y_mB9138A8037FF0084FE6DED3DC9D81E0D926C6601 (SizeOverLifetimeModule_t6711CE9659123CAA5BFBFDFA9F53174CD979AC0C* __this, MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.ParticleSystem/SizeOverLifetimeModule::set_yMultiplier(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SizeOverLifetimeModule_set_yMultiplier_mAFF1869E535B324384AB01214B246819306439D4 (SizeOverLifetimeModule_t6711CE9659123CAA5BFBFDFA9F53174CD979AC0C* __this, float ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.ParticleSystem/SizeOverLifetimeModule::set_z(UnityEngine.ParticleSystem/MinMaxCurve)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SizeOverLifetimeModule_set_z_m2F0D3BC817F95F78D37543F7A54C9CA0D5D87263 (SizeOverLifetimeModule_t6711CE9659123CAA5BFBFDFA9F53174CD979AC0C* __this, MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.ParticleSystem/SizeOverLifetimeModule::set_zMultiplier(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SizeOverLifetimeModule_set_zMultiplier_m97864CAC5D1B8936456B33989CCBA3A12870A3F4 (SizeOverLifetimeModule_t6711CE9659123CAA5BFBFDFA9F53174CD979AC0C* __this, float ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.ParticleSystem/SizeOverLifetimeModule::set_separateAxes(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SizeOverLifetimeModule_set_separateAxes_mC07A349FA5AF44C8937B7DE7ECEEA8F871B13EED (SizeOverLifetimeModule_t6711CE9659123CAA5BFBFDFA9F53174CD979AC0C* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Collections.IEnumerator ES3Reader/ES3ReaderPropertyEnumerator::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3ReaderPropertyEnumerator_GetEnumerator_mD6FEB8C37D84D9BBAB20D1A4DDCE3407BA971CA8 (ES3ReaderPropertyEnumerator_t66947BCA34F5716A7F0FECC09CDD3D2125703EB2* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.SkinnedMeshRenderer::set_bones(UnityEngine.Transform[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SkinnedMeshRenderer_set_bones_m80B64F72E4E5C7901E3105594D964F25D00952D7 (SkinnedMeshRenderer_t020C4E8648EA1C4C6BA5C41502919B387E7E1C2E* __this, TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24* ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.SkinnedMeshRenderer::set_rootBone(UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SkinnedMeshRenderer_set_rootBone_m218D83F020040DB84BA06D99050D6A01A3C90355 (SkinnedMeshRenderer_t020C4E8648EA1C4C6BA5C41502919B387E7E1C2E* __this, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.SkinnedMeshRenderer::set_quality(UnityEngine.SkinQuality)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SkinnedMeshRenderer_set_quality_m52BBD83F9A16A3D06476C53DE12AC88D8520F7C5 (SkinnedMeshRenderer_t020C4E8648EA1C4C6BA5C41502919B387E7E1C2E* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.SkinnedMeshRenderer::set_sharedMesh(UnityEngine.Mesh)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SkinnedMeshRenderer_set_sharedMesh_m3D3A431BC8B244C21EB9D01B9A10D040D7137F98 (SkinnedMeshRenderer_t020C4E8648EA1C4C6BA5C41502919B387E7E1C2E* __this, Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.SkinnedMeshRenderer::set_updateWhenOffscreen(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SkinnedMeshRenderer_set_updateWhenOffscreen_mED749A4C7DF00418D6BBB7B6B72843A9080CFA83 (SkinnedMeshRenderer_t020C4E8648EA1C4C6BA5C41502919B387E7E1C2E* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.SkinnedMeshRenderer::set_skinnedMotionVectors(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SkinnedMeshRenderer_set_skinnedMotionVectors_mC2CF4DA01EC67148154FD02C97620C611D6C8308 (SkinnedMeshRenderer_t020C4E8648EA1C4C6BA5C41502919B387E7E1C2E* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Renderer::set_localBounds(UnityEngine.Bounds)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Renderer_set_localBounds_m1E3C7A43A7CF23326DEB34DC66805623033AB567 (Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* __this, Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Renderer::set_enabled(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Renderer_set_enabled_m015E6D7B825528A31182F267234CC6A925F71DA8 (Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Renderer::set_shadowCastingMode(UnityEngine.Rendering.ShadowCastingMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Renderer_set_shadowCastingMode_mB0CD3D153E43044388AEFF7AEFDA93E80EB36D11 (Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Renderer::set_receiveShadows(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Renderer_set_receiveShadows_mABEB4C72E96E65117B7FFFD4180247565D0C1A09 (Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Renderer::set_sharedMaterials(UnityEngine.Material[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Renderer_set_sharedMaterials_m665ADE4190214CC2AC52490B4A7373D7EE75DEB2 (Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* __this, MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D* ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Renderer::set_lightmapIndex(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Renderer_set_lightmapIndex_mB6F2202FEC2ECBA3538EBDAEE17B073CEF2B5AB8 (Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Renderer::set_realtimeLightmapIndex(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Renderer_set_realtimeLightmapIndex_mE5684918EF41D05B218AEC5D6D3675B8A8F77389 (Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Renderer::set_lightmapScaleOffset(UnityEngine.Vector4)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Renderer_set_lightmapScaleOffset_m1F7EB461298380CCD8EE337F9AAAE40BE5B732A2 (Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* __this, Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Renderer::set_motionVectorGenerationMode(UnityEngine.MotionVectorGenerationMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Renderer_set_motionVectorGenerationMode_m5768AC38CBBAD505E34281889682CA464ED3A32F (Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Renderer::set_realtimeLightmapScaleOffset(UnityEngine.Vector4)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Renderer_set_realtimeLightmapScaleOffset_m391D14F3698B3D2BD88DC001931D261E5A3448E9 (Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* __this, Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Renderer::set_lightProbeUsage(UnityEngine.Rendering.LightProbeUsage)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Renderer_set_lightProbeUsage_mDCCD970DAC3546B32EF58876BABBD3353624F703 (Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Renderer::set_lightProbeProxyVolumeOverride(UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Renderer_set_lightProbeProxyVolumeOverride_mEAF99A789A36BEDBAFCD2C2084578CF359587A21 (Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Renderer::set_probeAnchor(UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Renderer_set_probeAnchor_m0032C3CC1BBF36AC32FCCDE6F4A6F2CE73062327 (Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* __this, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Renderer::set_reflectionProbeUsage(UnityEngine.Rendering.ReflectionProbeUsage)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Renderer_set_reflectionProbeUsage_m54A268EACA655AC3C66C4CD7F8C1EF3B41F3E008 (Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Renderer::set_sortingLayerName(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Renderer_set_sortingLayerName_mF335BAE30015B49C27FF3C063B033E44C237AC8A (Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Renderer::set_sortingLayerID(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Renderer_set_sortingLayerID_m289E44FD06B6692C7B2ADD1189FE4FC013180C49 (Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Renderer::set_sortingOrder(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Renderer_set_sortingOrder_m4C67F002AD68CA0D55D20D6B78CDED3DB24467DA (Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* __this, int32_t ___value0, const RuntimeMethod* method) ;
// UnityEngine.Mesh UnityEngine.SkinnedMeshRenderer::get_sharedMesh()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* SkinnedMeshRenderer_get_sharedMesh_m73D141639F0B72EBFAEF21D667AEFCA6E119A302 (SkinnedMeshRenderer_t020C4E8648EA1C4C6BA5C41502919B387E7E1C2E* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___x0, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___y1, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Mesh::get_blendShapeCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Mesh_get_blendShapeCount_mB91EABCC5DFB3B91C4C0047851BC13FB92727408 (Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* __this, const RuntimeMethod* method) ;
// System.Void ES3Internal.ES3Debug::LogError(System.String,UnityEngine.Object,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ES3Debug_LogError_m908291C3442D9DB0247D28930122717AD39209BC (String_t* ___msg0, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___context1, int32_t ___indent2, const RuntimeMethod* method) ;
// System.Void UnityEngine.SkinnedMeshRenderer::SetBlendShapeWeight(System.Int32,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SkinnedMeshRenderer_SetBlendShapeWeight_mD5724DB29A33F007E42F3666BF4B7ABC9C7F6F5E (SkinnedMeshRenderer_t020C4E8648EA1C4C6BA5C41502919B387E7E1C2E* __this, int32_t ___index0, float ___value1, const RuntimeMethod* method) ;
// System.Object ES3Types.ES3Type_SizeBySpeedModule::Read<System.Boolean>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_SizeBySpeedModule_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m9982668B1D98F3D15F0F8FD6DAC632DF33236A88_gshared (ES3Type_SizeBySpeedModule_t2A3358BE9F6111ED907A0D4CA428148A73CD7601* __this, ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SizeBySpeedModule_t73995CB54A0D1B06BA100EA77972D37CDF7B4DC4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	SizeBySpeedModule_t73995CB54A0D1B06BA100EA77972D37CDF7B4DC4 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// var instance = new UnityEngine.ParticleSystem.SizeBySpeedModule();
		il2cpp_codegen_initobj((&V_0), sizeof(SizeBySpeedModule_t73995CB54A0D1B06BA100EA77972D37CDF7B4DC4));
		// ReadInto<T>(reader, instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_0 = ___reader0;
		SizeBySpeedModule_t73995CB54A0D1B06BA100EA77972D37CDF7B4DC4 L_1 = V_0;
		SizeBySpeedModule_t73995CB54A0D1B06BA100EA77972D37CDF7B4DC4 L_2 = L_1;
		RuntimeObject* L_3 = Box(SizeBySpeedModule_t73995CB54A0D1B06BA100EA77972D37CDF7B4DC4_il2cpp_TypeInfo_var, &L_2);
		NullCheck((ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE*)__this);
		GenericVirtualActionInvoker2< ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518*, RuntimeObject* >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 0), (ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE*)__this, L_0, L_3);
		// return instance;
		SizeBySpeedModule_t73995CB54A0D1B06BA100EA77972D37CDF7B4DC4 L_4 = V_0;
		SizeBySpeedModule_t73995CB54A0D1B06BA100EA77972D37CDF7B4DC4 L_5 = L_4;
		RuntimeObject* L_6 = Box(SizeBySpeedModule_t73995CB54A0D1B06BA100EA77972D37CDF7B4DC4_il2cpp_TypeInfo_var, &L_5);
		return L_6;
	}
}
// System.Object ES3Types.ES3Type_SizeBySpeedModule::Read<UnityEngine.Bounds>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_SizeBySpeedModule_Read_TisBounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3_m49584FC32E700E8C7B17A3E401102AC9F64780A8_gshared (ES3Type_SizeBySpeedModule_t2A3358BE9F6111ED907A0D4CA428148A73CD7601* __this, ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SizeBySpeedModule_t73995CB54A0D1B06BA100EA77972D37CDF7B4DC4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	SizeBySpeedModule_t73995CB54A0D1B06BA100EA77972D37CDF7B4DC4 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// var instance = new UnityEngine.ParticleSystem.SizeBySpeedModule();
		il2cpp_codegen_initobj((&V_0), sizeof(SizeBySpeedModule_t73995CB54A0D1B06BA100EA77972D37CDF7B4DC4));
		// ReadInto<T>(reader, instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_0 = ___reader0;
		SizeBySpeedModule_t73995CB54A0D1B06BA100EA77972D37CDF7B4DC4 L_1 = V_0;
		SizeBySpeedModule_t73995CB54A0D1B06BA100EA77972D37CDF7B4DC4 L_2 = L_1;
		RuntimeObject* L_3 = Box(SizeBySpeedModule_t73995CB54A0D1B06BA100EA77972D37CDF7B4DC4_il2cpp_TypeInfo_var, &L_2);
		NullCheck((ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE*)__this);
		GenericVirtualActionInvoker2< ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518*, RuntimeObject* >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 0), (ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE*)__this, L_0, L_3);
		// return instance;
		SizeBySpeedModule_t73995CB54A0D1B06BA100EA77972D37CDF7B4DC4 L_4 = V_0;
		SizeBySpeedModule_t73995CB54A0D1B06BA100EA77972D37CDF7B4DC4 L_5 = L_4;
		RuntimeObject* L_6 = Box(SizeBySpeedModule_t73995CB54A0D1B06BA100EA77972D37CDF7B4DC4_il2cpp_TypeInfo_var, &L_5);
		return L_6;
	}
}
// System.Object ES3Types.ES3Type_SizeBySpeedModule::Read<System.Byte>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_SizeBySpeedModule_Read_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mB8606148F39B08423812FE6B5187EB919BA56AD5_gshared (ES3Type_SizeBySpeedModule_t2A3358BE9F6111ED907A0D4CA428148A73CD7601* __this, ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SizeBySpeedModule_t73995CB54A0D1B06BA100EA77972D37CDF7B4DC4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	SizeBySpeedModule_t73995CB54A0D1B06BA100EA77972D37CDF7B4DC4 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// var instance = new UnityEngine.ParticleSystem.SizeBySpeedModule();
		il2cpp_codegen_initobj((&V_0), sizeof(SizeBySpeedModule_t73995CB54A0D1B06BA100EA77972D37CDF7B4DC4));
		// ReadInto<T>(reader, instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_0 = ___reader0;
		SizeBySpeedModule_t73995CB54A0D1B06BA100EA77972D37CDF7B4DC4 L_1 = V_0;
		SizeBySpeedModule_t73995CB54A0D1B06BA100EA77972D37CDF7B4DC4 L_2 = L_1;
		RuntimeObject* L_3 = Box(SizeBySpeedModule_t73995CB54A0D1B06BA100EA77972D37CDF7B4DC4_il2cpp_TypeInfo_var, &L_2);
		NullCheck((ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE*)__this);
		GenericVirtualActionInvoker2< ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518*, RuntimeObject* >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 0), (ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE*)__this, L_0, L_3);
		// return instance;
		SizeBySpeedModule_t73995CB54A0D1B06BA100EA77972D37CDF7B4DC4 L_4 = V_0;
		SizeBySpeedModule_t73995CB54A0D1B06BA100EA77972D37CDF7B4DC4 L_5 = L_4;
		RuntimeObject* L_6 = Box(SizeBySpeedModule_t73995CB54A0D1B06BA100EA77972D37CDF7B4DC4_il2cpp_TypeInfo_var, &L_5);
		return L_6;
	}
}
// System.Object ES3Types.ES3Type_SizeBySpeedModule::Read<UnityEngine.Color>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_SizeBySpeedModule_Read_TisColor_tD001788D726C3A7F1379BEED0260B9591F440C1F_mBF4C2E2E4B055FD53E56A9F9DA21CA43CBEA0CDC_gshared (ES3Type_SizeBySpeedModule_t2A3358BE9F6111ED907A0D4CA428148A73CD7601* __this, ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SizeBySpeedModule_t73995CB54A0D1B06BA100EA77972D37CDF7B4DC4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	SizeBySpeedModule_t73995CB54A0D1B06BA100EA77972D37CDF7B4DC4 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// var instance = new UnityEngine.ParticleSystem.SizeBySpeedModule();
		il2cpp_codegen_initobj((&V_0), sizeof(SizeBySpeedModule_t73995CB54A0D1B06BA100EA77972D37CDF7B4DC4));
		// ReadInto<T>(reader, instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_0 = ___reader0;
		SizeBySpeedModule_t73995CB54A0D1B06BA100EA77972D37CDF7B4DC4 L_1 = V_0;
		SizeBySpeedModule_t73995CB54A0D1B06BA100EA77972D37CDF7B4DC4 L_2 = L_1;
		RuntimeObject* L_3 = Box(SizeBySpeedModule_t73995CB54A0D1B06BA100EA77972D37CDF7B4DC4_il2cpp_TypeInfo_var, &L_2);
		NullCheck((ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE*)__this);
		GenericVirtualActionInvoker2< ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518*, RuntimeObject* >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 0), (ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE*)__this, L_0, L_3);
		// return instance;
		SizeBySpeedModule_t73995CB54A0D1B06BA100EA77972D37CDF7B4DC4 L_4 = V_0;
		SizeBySpeedModule_t73995CB54A0D1B06BA100EA77972D37CDF7B4DC4 L_5 = L_4;
		RuntimeObject* L_6 = Box(SizeBySpeedModule_t73995CB54A0D1B06BA100EA77972D37CDF7B4DC4_il2cpp_TypeInfo_var, &L_5);
		return L_6;
	}
}
// System.Object ES3Types.ES3Type_SizeBySpeedModule::Read<System.Int32>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_SizeBySpeedModule_Read_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mAF9CFFC4DD2B0882D055F2FE06EB2637282D0FDD_gshared (ES3Type_SizeBySpeedModule_t2A3358BE9F6111ED907A0D4CA428148A73CD7601* __this, ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SizeBySpeedModule_t73995CB54A0D1B06BA100EA77972D37CDF7B4DC4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	SizeBySpeedModule_t73995CB54A0D1B06BA100EA77972D37CDF7B4DC4 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// var instance = new UnityEngine.ParticleSystem.SizeBySpeedModule();
		il2cpp_codegen_initobj((&V_0), sizeof(SizeBySpeedModule_t73995CB54A0D1B06BA100EA77972D37CDF7B4DC4));
		// ReadInto<T>(reader, instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_0 = ___reader0;
		SizeBySpeedModule_t73995CB54A0D1B06BA100EA77972D37CDF7B4DC4 L_1 = V_0;
		SizeBySpeedModule_t73995CB54A0D1B06BA100EA77972D37CDF7B4DC4 L_2 = L_1;
		RuntimeObject* L_3 = Box(SizeBySpeedModule_t73995CB54A0D1B06BA100EA77972D37CDF7B4DC4_il2cpp_TypeInfo_var, &L_2);
		NullCheck((ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE*)__this);
		GenericVirtualActionInvoker2< ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518*, RuntimeObject* >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 0), (ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE*)__this, L_0, L_3);
		// return instance;
		SizeBySpeedModule_t73995CB54A0D1B06BA100EA77972D37CDF7B4DC4 L_4 = V_0;
		SizeBySpeedModule_t73995CB54A0D1B06BA100EA77972D37CDF7B4DC4 L_5 = L_4;
		RuntimeObject* L_6 = Box(SizeBySpeedModule_t73995CB54A0D1B06BA100EA77972D37CDF7B4DC4_il2cpp_TypeInfo_var, &L_5);
		return L_6;
	}
}
// System.Object ES3Types.ES3Type_SizeBySpeedModule::Read<System.Int32Enum>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_SizeBySpeedModule_Read_TisInt32Enum_tCBAC8BA2BFF3A845FA599F303093BBBA374B6F0C_m2B7C2C2B3D6F42761D6A5D9F5E4B4B73618672D7_gshared (ES3Type_SizeBySpeedModule_t2A3358BE9F6111ED907A0D4CA428148A73CD7601* __this, ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SizeBySpeedModule_t73995CB54A0D1B06BA100EA77972D37CDF7B4DC4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	SizeBySpeedModule_t73995CB54A0D1B06BA100EA77972D37CDF7B4DC4 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// var instance = new UnityEngine.ParticleSystem.SizeBySpeedModule();
		il2cpp_codegen_initobj((&V_0), sizeof(SizeBySpeedModule_t73995CB54A0D1B06BA100EA77972D37CDF7B4DC4));
		// ReadInto<T>(reader, instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_0 = ___reader0;
		SizeBySpeedModule_t73995CB54A0D1B06BA100EA77972D37CDF7B4DC4 L_1 = V_0;
		SizeBySpeedModule_t73995CB54A0D1B06BA100EA77972D37CDF7B4DC4 L_2 = L_1;
		RuntimeObject* L_3 = Box(SizeBySpeedModule_t73995CB54A0D1B06BA100EA77972D37CDF7B4DC4_il2cpp_TypeInfo_var, &L_2);
		NullCheck((ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE*)__this);
		GenericVirtualActionInvoker2< ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518*, RuntimeObject* >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 0), (ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE*)__this, L_0, L_3);
		// return instance;
		SizeBySpeedModule_t73995CB54A0D1B06BA100EA77972D37CDF7B4DC4 L_4 = V_0;
		SizeBySpeedModule_t73995CB54A0D1B06BA100EA77972D37CDF7B4DC4 L_5 = L_4;
		RuntimeObject* L_6 = Box(SizeBySpeedModule_t73995CB54A0D1B06BA100EA77972D37CDF7B4DC4_il2cpp_TypeInfo_var, &L_5);
		return L_6;
	}
}
// System.Object ES3Types.ES3Type_SizeBySpeedModule::Read<System.Int64>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_SizeBySpeedModule_Read_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_mEB89DFB936D6E2F626DF23C1F714E8EF6CB83EEE_gshared (ES3Type_SizeBySpeedModule_t2A3358BE9F6111ED907A0D4CA428148A73CD7601* __this, ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SizeBySpeedModule_t73995CB54A0D1B06BA100EA77972D37CDF7B4DC4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	SizeBySpeedModule_t73995CB54A0D1B06BA100EA77972D37CDF7B4DC4 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// var instance = new UnityEngine.ParticleSystem.SizeBySpeedModule();
		il2cpp_codegen_initobj((&V_0), sizeof(SizeBySpeedModule_t73995CB54A0D1B06BA100EA77972D37CDF7B4DC4));
		// ReadInto<T>(reader, instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_0 = ___reader0;
		SizeBySpeedModule_t73995CB54A0D1B06BA100EA77972D37CDF7B4DC4 L_1 = V_0;
		SizeBySpeedModule_t73995CB54A0D1B06BA100EA77972D37CDF7B4DC4 L_2 = L_1;
		RuntimeObject* L_3 = Box(SizeBySpeedModule_t73995CB54A0D1B06BA100EA77972D37CDF7B4DC4_il2cpp_TypeInfo_var, &L_2);
		NullCheck((ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE*)__this);
		GenericVirtualActionInvoker2< ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518*, RuntimeObject* >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 0), (ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE*)__this, L_0, L_3);
		// return instance;
		SizeBySpeedModule_t73995CB54A0D1B06BA100EA77972D37CDF7B4DC4 L_4 = V_0;
		SizeBySpeedModule_t73995CB54A0D1B06BA100EA77972D37CDF7B4DC4 L_5 = L_4;
		RuntimeObject* L_6 = Box(SizeBySpeedModule_t73995CB54A0D1B06BA100EA77972D37CDF7B4DC4_il2cpp_TypeInfo_var, &L_5);
		return L_6;
	}
}
// System.Object ES3Types.ES3Type_SizeBySpeedModule::Read<UnityEngine.LayerMask>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_SizeBySpeedModule_Read_TisLayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB_m8AECD731BDFDAD64D85478B72475E6C43E3B3133_gshared (ES3Type_SizeBySpeedModule_t2A3358BE9F6111ED907A0D4CA428148A73CD7601* __this, ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SizeBySpeedModule_t73995CB54A0D1B06BA100EA77972D37CDF7B4DC4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	SizeBySpeedModule_t73995CB54A0D1B06BA100EA77972D37CDF7B4DC4 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// var instance = new UnityEngine.ParticleSystem.SizeBySpeedModule();
		il2cpp_codegen_initobj((&V_0), sizeof(SizeBySpeedModule_t73995CB54A0D1B06BA100EA77972D37CDF7B4DC4));
		// ReadInto<T>(reader, instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_0 = ___reader0;
		SizeBySpeedModule_t73995CB54A0D1B06BA100EA77972D37CDF7B4DC4 L_1 = V_0;
		SizeBySpeedModule_t73995CB54A0D1B06BA100EA77972D37CDF7B4DC4 L_2 = L_1;
		RuntimeObject* L_3 = Box(SizeBySpeedModule_t73995CB54A0D1B06BA100EA77972D37CDF7B4DC4_il2cpp_TypeInfo_var, &L_2);
		NullCheck((ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE*)__this);
		GenericVirtualActionInvoker2< ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518*, RuntimeObject* >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 0), (ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE*)__this, L_0, L_3);
		// return instance;
		SizeBySpeedModule_t73995CB54A0D1B06BA100EA77972D37CDF7B4DC4 L_4 = V_0;
		SizeBySpeedModule_t73995CB54A0D1B06BA100EA77972D37CDF7B4DC4 L_5 = L_4;
		RuntimeObject* L_6 = Box(SizeBySpeedModule_t73995CB54A0D1B06BA100EA77972D37CDF7B4DC4_il2cpp_TypeInfo_var, &L_5);
		return L_6;
	}
}
// System.Object ES3Types.ES3Type_SizeBySpeedModule::Read<UnityEngine.Matrix4x4>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_SizeBySpeedModule_Read_TisMatrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6_m9DA5C4D220F92492C162F4C950F52EAF2232AB53_gshared (ES3Type_SizeBySpeedModule_t2A3358BE9F6111ED907A0D4CA428148A73CD7601* __this, ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SizeBySpeedModule_t73995CB54A0D1B06BA100EA77972D37CDF7B4DC4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	SizeBySpeedModule_t73995CB54A0D1B06BA100EA77972D37CDF7B4DC4 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// var instance = new UnityEngine.ParticleSystem.SizeBySpeedModule();
		il2cpp_codegen_initobj((&V_0), sizeof(SizeBySpeedModule_t73995CB54A0D1B06BA100EA77972D37CDF7B4DC4));
		// ReadInto<T>(reader, instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_0 = ___reader0;
		SizeBySpeedModule_t73995CB54A0D1B06BA100EA77972D37CDF7B4DC4 L_1 = V_0;
		SizeBySpeedModule_t73995CB54A0D1B06BA100EA77972D37CDF7B4DC4 L_2 = L_1;
		RuntimeObject* L_3 = Box(SizeBySpeedModule_t73995CB54A0D1B06BA100EA77972D37CDF7B4DC4_il2cpp_TypeInfo_var, &L_2);
		NullCheck((ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE*)__this);
		GenericVirtualActionInvoker2< ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518*, RuntimeObject* >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 0), (ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE*)__this, L_0, L_3);
		// return instance;
		SizeBySpeedModule_t73995CB54A0D1B06BA100EA77972D37CDF7B4DC4 L_4 = V_0;
		SizeBySpeedModule_t73995CB54A0D1B06BA100EA77972D37CDF7B4DC4 L_5 = L_4;
		RuntimeObject* L_6 = Box(SizeBySpeedModule_t73995CB54A0D1B06BA100EA77972D37CDF7B4DC4_il2cpp_TypeInfo_var, &L_5);
		return L_6;
	}
}
// System.Object ES3Types.ES3Type_SizeBySpeedModule::Read<System.Object>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_SizeBySpeedModule_Read_TisRuntimeObject_m047183693E1024A0C7558F98D208D3B0B266D022_gshared (ES3Type_SizeBySpeedModule_t2A3358BE9F6111ED907A0D4CA428148A73CD7601* __this, ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SizeBySpeedModule_t73995CB54A0D1B06BA100EA77972D37CDF7B4DC4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	SizeBySpeedModule_t73995CB54A0D1B06BA100EA77972D37CDF7B4DC4 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// var instance = new UnityEngine.ParticleSystem.SizeBySpeedModule();
		il2cpp_codegen_initobj((&V_0), sizeof(SizeBySpeedModule_t73995CB54A0D1B06BA100EA77972D37CDF7B4DC4));
		// ReadInto<T>(reader, instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_0 = ___reader0;
		SizeBySpeedModule_t73995CB54A0D1B06BA100EA77972D37CDF7B4DC4 L_1 = V_0;
		SizeBySpeedModule_t73995CB54A0D1B06BA100EA77972D37CDF7B4DC4 L_2 = L_1;
		RuntimeObject* L_3 = Box(SizeBySpeedModule_t73995CB54A0D1B06BA100EA77972D37CDF7B4DC4_il2cpp_TypeInfo_var, &L_2);
		NullCheck((ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE*)__this);
		GenericVirtualActionInvoker2< ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518*, RuntimeObject* >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 0), (ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE*)__this, L_0, L_3);
		// return instance;
		SizeBySpeedModule_t73995CB54A0D1B06BA100EA77972D37CDF7B4DC4 L_4 = V_0;
		SizeBySpeedModule_t73995CB54A0D1B06BA100EA77972D37CDF7B4DC4 L_5 = L_4;
		RuntimeObject* L_6 = Box(SizeBySpeedModule_t73995CB54A0D1B06BA100EA77972D37CDF7B4DC4_il2cpp_TypeInfo_var, &L_5);
		return L_6;
	}
}
// System.Object ES3Types.ES3Type_SizeBySpeedModule::Read<UnityEngine.Quaternion>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_SizeBySpeedModule_Read_TisQuaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_m2BCFE7EA89AA2034EDA71339739D0A8AFBD02334_gshared (ES3Type_SizeBySpeedModule_t2A3358BE9F6111ED907A0D4CA428148A73CD7601* __this, ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SizeBySpeedModule_t73995CB54A0D1B06BA100EA77972D37CDF7B4DC4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	SizeBySpeedModule_t73995CB54A0D1B06BA100EA77972D37CDF7B4DC4 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// var instance = new UnityEngine.ParticleSystem.SizeBySpeedModule();
		il2cpp_codegen_initobj((&V_0), sizeof(SizeBySpeedModule_t73995CB54A0D1B06BA100EA77972D37CDF7B4DC4));
		// ReadInto<T>(reader, instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_0 = ___reader0;
		SizeBySpeedModule_t73995CB54A0D1B06BA100EA77972D37CDF7B4DC4 L_1 = V_0;
		SizeBySpeedModule_t73995CB54A0D1B06BA100EA77972D37CDF7B4DC4 L_2 = L_1;
		RuntimeObject* L_3 = Box(SizeBySpeedModule_t73995CB54A0D1B06BA100EA77972D37CDF7B4DC4_il2cpp_TypeInfo_var, &L_2);
		NullCheck((ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE*)__this);
		GenericVirtualActionInvoker2< ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518*, RuntimeObject* >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 0), (ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE*)__this, L_0, L_3);
		// return instance;
		SizeBySpeedModule_t73995CB54A0D1B06BA100EA77972D37CDF7B4DC4 L_4 = V_0;
		SizeBySpeedModule_t73995CB54A0D1B06BA100EA77972D37CDF7B4DC4 L_5 = L_4;
		RuntimeObject* L_6 = Box(SizeBySpeedModule_t73995CB54A0D1B06BA100EA77972D37CDF7B4DC4_il2cpp_TypeInfo_var, &L_5);
		return L_6;
	}
}
// System.Object ES3Types.ES3Type_SizeBySpeedModule::Read<UnityEngine.Rect>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_SizeBySpeedModule_Read_TisRect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D_mFC3E38A65F07E3DEB383D7BB808A45E50C0CA735_gshared (ES3Type_SizeBySpeedModule_t2A3358BE9F6111ED907A0D4CA428148A73CD7601* __this, ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SizeBySpeedModule_t73995CB54A0D1B06BA100EA77972D37CDF7B4DC4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	SizeBySpeedModule_t73995CB54A0D1B06BA100EA77972D37CDF7B4DC4 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// var instance = new UnityEngine.ParticleSystem.SizeBySpeedModule();
		il2cpp_codegen_initobj((&V_0), sizeof(SizeBySpeedModule_t73995CB54A0D1B06BA100EA77972D37CDF7B4DC4));
		// ReadInto<T>(reader, instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_0 = ___reader0;
		SizeBySpeedModule_t73995CB54A0D1B06BA100EA77972D37CDF7B4DC4 L_1 = V_0;
		SizeBySpeedModule_t73995CB54A0D1B06BA100EA77972D37CDF7B4DC4 L_2 = L_1;
		RuntimeObject* L_3 = Box(SizeBySpeedModule_t73995CB54A0D1B06BA100EA77972D37CDF7B4DC4_il2cpp_TypeInfo_var, &L_2);
		NullCheck((ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE*)__this);
		GenericVirtualActionInvoker2< ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518*, RuntimeObject* >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 0), (ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE*)__this, L_0, L_3);
		// return instance;
		SizeBySpeedModule_t73995CB54A0D1B06BA100EA77972D37CDF7B4DC4 L_4 = V_0;
		SizeBySpeedModule_t73995CB54A0D1B06BA100EA77972D37CDF7B4DC4 L_5 = L_4;
		RuntimeObject* L_6 = Box(SizeBySpeedModule_t73995CB54A0D1B06BA100EA77972D37CDF7B4DC4_il2cpp_TypeInfo_var, &L_5);
		return L_6;
	}
}
// System.Object ES3Types.ES3Type_SizeBySpeedModule::Read<UnityEngine.RenderTextureDescriptor>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_SizeBySpeedModule_Read_TisRenderTextureDescriptor_t69845881CE6437E4E61F92074F2F84079F23FA46_m0E64FDD5220E0E32417E9467281EDECE4A6D3BF5_gshared (ES3Type_SizeBySpeedModule_t2A3358BE9F6111ED907A0D4CA428148A73CD7601* __this, ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SizeBySpeedModule_t73995CB54A0D1B06BA100EA77972D37CDF7B4DC4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	SizeBySpeedModule_t73995CB54A0D1B06BA100EA77972D37CDF7B4DC4 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// var instance = new UnityEngine.ParticleSystem.SizeBySpeedModule();
		il2cpp_codegen_initobj((&V_0), sizeof(SizeBySpeedModule_t73995CB54A0D1B06BA100EA77972D37CDF7B4DC4));
		// ReadInto<T>(reader, instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_0 = ___reader0;
		SizeBySpeedModule_t73995CB54A0D1B06BA100EA77972D37CDF7B4DC4 L_1 = V_0;
		SizeBySpeedModule_t73995CB54A0D1B06BA100EA77972D37CDF7B4DC4 L_2 = L_1;
		RuntimeObject* L_3 = Box(SizeBySpeedModule_t73995CB54A0D1B06BA100EA77972D37CDF7B4DC4_il2cpp_TypeInfo_var, &L_2);
		NullCheck((ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE*)__this);
		GenericVirtualActionInvoker2< ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518*, RuntimeObject* >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 0), (ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE*)__this, L_0, L_3);
		// return instance;
		SizeBySpeedModule_t73995CB54A0D1B06BA100EA77972D37CDF7B4DC4 L_4 = V_0;
		SizeBySpeedModule_t73995CB54A0D1B06BA100EA77972D37CDF7B4DC4 L_5 = L_4;
		RuntimeObject* L_6 = Box(SizeBySpeedModule_t73995CB54A0D1B06BA100EA77972D37CDF7B4DC4_il2cpp_TypeInfo_var, &L_5);
		return L_6;
	}
}
// System.Object ES3Types.ES3Type_SizeBySpeedModule::Read<System.Single>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_SizeBySpeedModule_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m78A908818FE0F455EC8435A051B073FB162BC300_gshared (ES3Type_SizeBySpeedModule_t2A3358BE9F6111ED907A0D4CA428148A73CD7601* __this, ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SizeBySpeedModule_t73995CB54A0D1B06BA100EA77972D37CDF7B4DC4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	SizeBySpeedModule_t73995CB54A0D1B06BA100EA77972D37CDF7B4DC4 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// var instance = new UnityEngine.ParticleSystem.SizeBySpeedModule();
		il2cpp_codegen_initobj((&V_0), sizeof(SizeBySpeedModule_t73995CB54A0D1B06BA100EA77972D37CDF7B4DC4));
		// ReadInto<T>(reader, instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_0 = ___reader0;
		SizeBySpeedModule_t73995CB54A0D1B06BA100EA77972D37CDF7B4DC4 L_1 = V_0;
		SizeBySpeedModule_t73995CB54A0D1B06BA100EA77972D37CDF7B4DC4 L_2 = L_1;
		RuntimeObject* L_3 = Box(SizeBySpeedModule_t73995CB54A0D1B06BA100EA77972D37CDF7B4DC4_il2cpp_TypeInfo_var, &L_2);
		NullCheck((ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE*)__this);
		GenericVirtualActionInvoker2< ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518*, RuntimeObject* >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 0), (ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE*)__this, L_0, L_3);
		// return instance;
		SizeBySpeedModule_t73995CB54A0D1B06BA100EA77972D37CDF7B4DC4 L_4 = V_0;
		SizeBySpeedModule_t73995CB54A0D1B06BA100EA77972D37CDF7B4DC4 L_5 = L_4;
		RuntimeObject* L_6 = Box(SizeBySpeedModule_t73995CB54A0D1B06BA100EA77972D37CDF7B4DC4_il2cpp_TypeInfo_var, &L_5);
		return L_6;
	}
}
// System.Object ES3Types.ES3Type_SizeBySpeedModule::Read<UnityEngine.Vector2>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_SizeBySpeedModule_Read_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_m1206122FEDBB0D0FEB6FC24655D412F6D589DD1C_gshared (ES3Type_SizeBySpeedModule_t2A3358BE9F6111ED907A0D4CA428148A73CD7601* __this, ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SizeBySpeedModule_t73995CB54A0D1B06BA100EA77972D37CDF7B4DC4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	SizeBySpeedModule_t73995CB54A0D1B06BA100EA77972D37CDF7B4DC4 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// var instance = new UnityEngine.ParticleSystem.SizeBySpeedModule();
		il2cpp_codegen_initobj((&V_0), sizeof(SizeBySpeedModule_t73995CB54A0D1B06BA100EA77972D37CDF7B4DC4));
		// ReadInto<T>(reader, instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_0 = ___reader0;
		SizeBySpeedModule_t73995CB54A0D1B06BA100EA77972D37CDF7B4DC4 L_1 = V_0;
		SizeBySpeedModule_t73995CB54A0D1B06BA100EA77972D37CDF7B4DC4 L_2 = L_1;
		RuntimeObject* L_3 = Box(SizeBySpeedModule_t73995CB54A0D1B06BA100EA77972D37CDF7B4DC4_il2cpp_TypeInfo_var, &L_2);
		NullCheck((ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE*)__this);
		GenericVirtualActionInvoker2< ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518*, RuntimeObject* >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 0), (ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE*)__this, L_0, L_3);
		// return instance;
		SizeBySpeedModule_t73995CB54A0D1B06BA100EA77972D37CDF7B4DC4 L_4 = V_0;
		SizeBySpeedModule_t73995CB54A0D1B06BA100EA77972D37CDF7B4DC4 L_5 = L_4;
		RuntimeObject* L_6 = Box(SizeBySpeedModule_t73995CB54A0D1B06BA100EA77972D37CDF7B4DC4_il2cpp_TypeInfo_var, &L_5);
		return L_6;
	}
}
// System.Object ES3Types.ES3Type_SizeBySpeedModule::Read<UnityEngine.Vector3>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_SizeBySpeedModule_Read_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_mC4E03E2077BF66355DB1CE28D29EE0B7CB485FEA_gshared (ES3Type_SizeBySpeedModule_t2A3358BE9F6111ED907A0D4CA428148A73CD7601* __this, ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SizeBySpeedModule_t73995CB54A0D1B06BA100EA77972D37CDF7B4DC4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	SizeBySpeedModule_t73995CB54A0D1B06BA100EA77972D37CDF7B4DC4 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// var instance = new UnityEngine.ParticleSystem.SizeBySpeedModule();
		il2cpp_codegen_initobj((&V_0), sizeof(SizeBySpeedModule_t73995CB54A0D1B06BA100EA77972D37CDF7B4DC4));
		// ReadInto<T>(reader, instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_0 = ___reader0;
		SizeBySpeedModule_t73995CB54A0D1B06BA100EA77972D37CDF7B4DC4 L_1 = V_0;
		SizeBySpeedModule_t73995CB54A0D1B06BA100EA77972D37CDF7B4DC4 L_2 = L_1;
		RuntimeObject* L_3 = Box(SizeBySpeedModule_t73995CB54A0D1B06BA100EA77972D37CDF7B4DC4_il2cpp_TypeInfo_var, &L_2);
		NullCheck((ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE*)__this);
		GenericVirtualActionInvoker2< ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518*, RuntimeObject* >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 0), (ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE*)__this, L_0, L_3);
		// return instance;
		SizeBySpeedModule_t73995CB54A0D1B06BA100EA77972D37CDF7B4DC4 L_4 = V_0;
		SizeBySpeedModule_t73995CB54A0D1B06BA100EA77972D37CDF7B4DC4 L_5 = L_4;
		RuntimeObject* L_6 = Box(SizeBySpeedModule_t73995CB54A0D1B06BA100EA77972D37CDF7B4DC4_il2cpp_TypeInfo_var, &L_5);
		return L_6;
	}
}
// System.Object ES3Types.ES3Type_SizeBySpeedModule::Read<UnityEngine.Vector4>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_SizeBySpeedModule_Read_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_m4C30F51F325004618C68E720DB27FC4CA444F838_gshared (ES3Type_SizeBySpeedModule_t2A3358BE9F6111ED907A0D4CA428148A73CD7601* __this, ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SizeBySpeedModule_t73995CB54A0D1B06BA100EA77972D37CDF7B4DC4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	SizeBySpeedModule_t73995CB54A0D1B06BA100EA77972D37CDF7B4DC4 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// var instance = new UnityEngine.ParticleSystem.SizeBySpeedModule();
		il2cpp_codegen_initobj((&V_0), sizeof(SizeBySpeedModule_t73995CB54A0D1B06BA100EA77972D37CDF7B4DC4));
		// ReadInto<T>(reader, instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_0 = ___reader0;
		SizeBySpeedModule_t73995CB54A0D1B06BA100EA77972D37CDF7B4DC4 L_1 = V_0;
		SizeBySpeedModule_t73995CB54A0D1B06BA100EA77972D37CDF7B4DC4 L_2 = L_1;
		RuntimeObject* L_3 = Box(SizeBySpeedModule_t73995CB54A0D1B06BA100EA77972D37CDF7B4DC4_il2cpp_TypeInfo_var, &L_2);
		NullCheck((ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE*)__this);
		GenericVirtualActionInvoker2< ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518*, RuntimeObject* >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 0), (ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE*)__this, L_0, L_3);
		// return instance;
		SizeBySpeedModule_t73995CB54A0D1B06BA100EA77972D37CDF7B4DC4 L_4 = V_0;
		SizeBySpeedModule_t73995CB54A0D1B06BA100EA77972D37CDF7B4DC4 L_5 = L_4;
		RuntimeObject* L_6 = Box(SizeBySpeedModule_t73995CB54A0D1B06BA100EA77972D37CDF7B4DC4_il2cpp_TypeInfo_var, &L_5);
		return L_6;
	}
}
// System.Object ES3Types.ES3Type_SizeBySpeedModule::Read<UnityEngine.ParticleSystem/MinMaxCurve>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_SizeBySpeedModule_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mA5F333581C24370C627E67B6C96BF0B2504213D5_gshared (ES3Type_SizeBySpeedModule_t2A3358BE9F6111ED907A0D4CA428148A73CD7601* __this, ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SizeBySpeedModule_t73995CB54A0D1B06BA100EA77972D37CDF7B4DC4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	SizeBySpeedModule_t73995CB54A0D1B06BA100EA77972D37CDF7B4DC4 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// var instance = new UnityEngine.ParticleSystem.SizeBySpeedModule();
		il2cpp_codegen_initobj((&V_0), sizeof(SizeBySpeedModule_t73995CB54A0D1B06BA100EA77972D37CDF7B4DC4));
		// ReadInto<T>(reader, instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_0 = ___reader0;
		SizeBySpeedModule_t73995CB54A0D1B06BA100EA77972D37CDF7B4DC4 L_1 = V_0;
		SizeBySpeedModule_t73995CB54A0D1B06BA100EA77972D37CDF7B4DC4 L_2 = L_1;
		RuntimeObject* L_3 = Box(SizeBySpeedModule_t73995CB54A0D1B06BA100EA77972D37CDF7B4DC4_il2cpp_TypeInfo_var, &L_2);
		NullCheck((ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE*)__this);
		GenericVirtualActionInvoker2< ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518*, RuntimeObject* >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 0), (ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE*)__this, L_0, L_3);
		// return instance;
		SizeBySpeedModule_t73995CB54A0D1B06BA100EA77972D37CDF7B4DC4 L_4 = V_0;
		SizeBySpeedModule_t73995CB54A0D1B06BA100EA77972D37CDF7B4DC4 L_5 = L_4;
		RuntimeObject* L_6 = Box(SizeBySpeedModule_t73995CB54A0D1B06BA100EA77972D37CDF7B4DC4_il2cpp_TypeInfo_var, &L_5);
		return L_6;
	}
}
// System.Object ES3Types.ES3Type_SizeBySpeedModule::Read<UnityEngine.ParticleSystem/MinMaxGradient>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_SizeBySpeedModule_Read_TisMinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69_mFCAF1CED8202010E6F9D9E259DDFD62CC2EED4E5_gshared (ES3Type_SizeBySpeedModule_t2A3358BE9F6111ED907A0D4CA428148A73CD7601* __this, ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SizeBySpeedModule_t73995CB54A0D1B06BA100EA77972D37CDF7B4DC4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	SizeBySpeedModule_t73995CB54A0D1B06BA100EA77972D37CDF7B4DC4 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// var instance = new UnityEngine.ParticleSystem.SizeBySpeedModule();
		il2cpp_codegen_initobj((&V_0), sizeof(SizeBySpeedModule_t73995CB54A0D1B06BA100EA77972D37CDF7B4DC4));
		// ReadInto<T>(reader, instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_0 = ___reader0;
		SizeBySpeedModule_t73995CB54A0D1B06BA100EA77972D37CDF7B4DC4 L_1 = V_0;
		SizeBySpeedModule_t73995CB54A0D1B06BA100EA77972D37CDF7B4DC4 L_2 = L_1;
		RuntimeObject* L_3 = Box(SizeBySpeedModule_t73995CB54A0D1B06BA100EA77972D37CDF7B4DC4_il2cpp_TypeInfo_var, &L_2);
		NullCheck((ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE*)__this);
		GenericVirtualActionInvoker2< ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518*, RuntimeObject* >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 0), (ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE*)__this, L_0, L_3);
		// return instance;
		SizeBySpeedModule_t73995CB54A0D1B06BA100EA77972D37CDF7B4DC4 L_4 = V_0;
		SizeBySpeedModule_t73995CB54A0D1B06BA100EA77972D37CDF7B4DC4 L_5 = L_4;
		RuntimeObject* L_6 = Box(SizeBySpeedModule_t73995CB54A0D1B06BA100EA77972D37CDF7B4DC4_il2cpp_TypeInfo_var, &L_5);
		return L_6;
	}
}
// System.Void ES3Types.ES3Type_SizeBySpeedModule::ReadInto<System.Object>(ES3Reader,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ES3Type_SizeBySpeedModule_ReadInto_TisRuntimeObject_m6107267BC196CBF37BD01D95E0CFF1B7B3CB9D9D_gshared (ES3Type_SizeBySpeedModule_t2A3358BE9F6111ED907A0D4CA428148A73CD7601* __this, ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* ___reader0, RuntimeObject* ___obj1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mFFB70EE53D8CD0255A4E599780F62A3EB1520E83_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_m9D6B4042B923127DEA4A2CAA3E35EED37D75B3D0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mA86928BC888E342D2C2644535E3399952F5077ED_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_m95B09869E3B912BD36BC3571D842BA21C71EB14B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_MinMaxCurve_t1C147718750ACBECE5D2B7F545D2A434A3C5409B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_Vector2_tB51CE4B1AFCBAFE7ADC540050621735C4F8D4387_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SizeBySpeedModule_t73995CB54A0D1B06BA100EA77972D37CDF7B4DC4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral062DB096C728515E033CF8C48A1C1F0B9A79384B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1B024D537329B86AB0DF96B2A714180F442F53E9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2F8690361553406965679AEF125F896BC5FC61F5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3EE5A4671A4E5AEBD31CA5F013A7773DC18ED22B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4845015737DC41475709911228278216EE4DC3AF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8C6F88DEE0DFE3513BB8B44A8CF0FEE437F4EFFB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9384C6EF2DA5C0BD5274A0DACFF291D0ABBFD8B1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9CE1604D659135925CCC4DD1F526AFFE42E689F1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9E61658953B4F9BB4A05E3D2D2BC18990BADE934);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBD0DD0004699EF86BF0FC1D161FA3766AF5126C4);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B);
		s_Il2CppMethodInitialized = true;
	}
	SizeBySpeedModule_t73995CB54A0D1B06BA100EA77972D37CDF7B4DC4 V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	uint32_t V_2 = 0;
	{
		// var instance = (UnityEngine.ParticleSystem.SizeBySpeedModule)obj;
		RuntimeObject* L_0 = ___obj1;
		V_0 = ((*(SizeBySpeedModule_t73995CB54A0D1B06BA100EA77972D37CDF7B4DC4*)((SizeBySpeedModule_t73995CB54A0D1B06BA100EA77972D37CDF7B4DC4*)(SizeBySpeedModule_t73995CB54A0D1B06BA100EA77972D37CDF7B4DC4*)UnBox(L_0, SizeBySpeedModule_t73995CB54A0D1B06BA100EA77972D37CDF7B4DC4_il2cpp_TypeInfo_var))));
		goto IL_028a;
	}

IL_000c:
	{
		String_t* L_1 = V_1;
		uint32_t L_2;
		L_2 = U3CPrivateImplementationDetailsU3E_ComputeStringHash_m9E43873DE0DF480D27EC1C2AA3C09E74EA77F75D(L_1, NULL);
		V_2 = L_2;
		uint32_t L_3 = V_2;
		if ((!(((uint32_t)L_3) <= ((uint32_t)((int32_t)1479031685)))))
		{
			goto IL_0064;
		}
	}
	{
		uint32_t L_4 = V_2;
		if ((!(((uint32_t)L_4) <= ((uint32_t)((int32_t)597743964)))))
		{
			goto IL_003e;
		}
	}
	{
		uint32_t L_5 = V_2;
		if ((((int32_t)L_5) == ((int32_t)((int32_t)49525662))))
		{
			goto IL_00b5;
		}
	}
	{
		uint32_t L_6 = V_2;
		if ((((int32_t)L_6) == ((int32_t)((int32_t)597743964))))
		{
			goto IL_00ca;
		}
	}
	{
		goto IL_0284;
	}

IL_003e:
	{
		uint32_t L_7 = V_2;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)726266686))))
		{
			goto IL_015d;
		}
	}
	{
		uint32_t L_8 = V_2;
		if ((((int32_t)L_8) == ((int32_t)((int32_t)1105436259))))
		{
			goto IL_00df;
		}
	}
	{
		uint32_t L_9 = V_2;
		if ((((int32_t)L_9) == ((int32_t)((int32_t)1479031685))))
		{
			goto IL_0172;
		}
	}
	{
		goto IL_0284;
	}

IL_0064:
	{
		uint32_t L_10 = V_2;
		if ((!(((uint32_t)L_10) <= ((uint32_t)((int32_t)-86242094)))))
		{
			goto IL_0092;
		}
	}
	{
		uint32_t L_11 = V_2;
		if ((((int32_t)L_11) == ((int32_t)((int32_t)-1013869429))))
		{
			goto IL_0133;
		}
	}
	{
		uint32_t L_12 = V_2;
		if ((((int32_t)L_12) == ((int32_t)((int32_t)-585050980))))
		{
			goto IL_0109;
		}
	}
	{
		uint32_t L_13 = V_2;
		if ((((int32_t)L_13) == ((int32_t)((int32_t)-86242094))))
		{
			goto IL_0187;
		}
	}
	{
		goto IL_0284;
	}

IL_0092:
	{
		uint32_t L_14 = V_2;
		if ((((int32_t)L_14) == ((int32_t)((int32_t)-66302220))))
		{
			goto IL_011e;
		}
	}
	{
		uint32_t L_15 = V_2;
		if ((((int32_t)L_15) == ((int32_t)((int32_t)-49524601))))
		{
			goto IL_00f4;
		}
	}
	{
		uint32_t L_16 = V_2;
		if ((((int32_t)L_16) == ((int32_t)((int32_t)-15969363))))
		{
			goto IL_0148;
		}
	}
	{
		goto IL_0284;
	}

IL_00b5:
	{
		String_t* L_17 = V_1;
		bool L_18;
		L_18 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_17, _stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B, NULL);
		if (L_18)
		{
			goto IL_019c;
		}
	}
	{
		goto IL_0284;
	}

IL_00ca:
	{
		String_t* L_19 = V_1;
		bool L_20;
		L_20 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_19, _stringLiteral3EE5A4671A4E5AEBD31CA5F013A7773DC18ED22B, NULL);
		if (L_20)
		{
			goto IL_01b3;
		}
	}
	{
		goto IL_0284;
	}

IL_00df:
	{
		String_t* L_21 = V_1;
		bool L_22;
		L_22 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_21, _stringLiteralBD0DD0004699EF86BF0FC1D161FA3766AF5126C4, NULL);
		if (L_22)
		{
			goto IL_01ca;
		}
	}
	{
		goto IL_0284;
	}

IL_00f4:
	{
		String_t* L_23 = V_1;
		bool L_24;
		L_24 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_23, _stringLiteral062DB096C728515E033CF8C48A1C1F0B9A79384B, NULL);
		if (L_24)
		{
			goto IL_01e1;
		}
	}
	{
		goto IL_0284;
	}

IL_0109:
	{
		String_t* L_25 = V_1;
		bool L_26;
		L_26 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_25, _stringLiteral8C6F88DEE0DFE3513BB8B44A8CF0FEE437F4EFFB, NULL);
		if (L_26)
		{
			goto IL_01f8;
		}
	}
	{
		goto IL_0284;
	}

IL_011e:
	{
		String_t* L_27 = V_1;
		bool L_28;
		L_28 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_27, _stringLiteral9384C6EF2DA5C0BD5274A0DACFF291D0ABBFD8B1, NULL);
		if (L_28)
		{
			goto IL_020c;
		}
	}
	{
		goto IL_0284;
	}

IL_0133:
	{
		String_t* L_29 = V_1;
		bool L_30;
		L_30 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_29, _stringLiteral9E61658953B4F9BB4A05E3D2D2BC18990BADE934, NULL);
		if (L_30)
		{
			goto IL_0220;
		}
	}
	{
		goto IL_0284;
	}

IL_0148:
	{
		String_t* L_31 = V_1;
		bool L_32;
		L_32 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_31, _stringLiteral9CE1604D659135925CCC4DD1F526AFFE42E689F1, NULL);
		if (L_32)
		{
			goto IL_0234;
		}
	}
	{
		goto IL_0284;
	}

IL_015d:
	{
		String_t* L_33 = V_1;
		bool L_34;
		L_34 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_33, _stringLiteral2F8690361553406965679AEF125F896BC5FC61F5, NULL);
		if (L_34)
		{
			goto IL_0248;
		}
	}
	{
		goto IL_0284;
	}

IL_0172:
	{
		String_t* L_35 = V_1;
		bool L_36;
		L_36 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_35, _stringLiteral1B024D537329B86AB0DF96B2A714180F442F53E9, NULL);
		if (L_36)
		{
			goto IL_025c;
		}
	}
	{
		goto IL_0284;
	}

IL_0187:
	{
		String_t* L_37 = V_1;
		bool L_38;
		L_38 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_37, _stringLiteral4845015737DC41475709911228278216EE4DC3AF, NULL);
		if (L_38)
		{
			goto IL_0270;
		}
	}
	{
		goto IL_0284;
	}

IL_019c:
	{
		// instance.enabled = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_39 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_40 = ((ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_39);
		bool L_41;
		L_41 = GenericVirtualFuncInvoker1< bool, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mFFB70EE53D8CD0255A4E599780F62A3EB1520E83_RuntimeMethod_var, L_39, L_40);
		SizeBySpeedModule_set_enabled_m1DFF0FEFF522C52D874173B6CDAAEE94F9E8B718((&V_0), L_41, NULL);
		// break;
		goto IL_028a;
	}

IL_01b3:
	{
		// instance.size = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_42 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_43 = ((ES3Type_MinMaxCurve_t1C147718750ACBECE5D2B7F545D2A434A3C5409B_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t1C147718750ACBECE5D2B7F545D2A434A3C5409B_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_42);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_44;
		L_44 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_m9D6B4042B923127DEA4A2CAA3E35EED37D75B3D0_RuntimeMethod_var, L_42, L_43);
		SizeBySpeedModule_set_size_mD906BB6EAE9613DDA6F623E4D4878D69ECB90729((&V_0), L_44, NULL);
		// break;
		goto IL_028a;
	}

IL_01ca:
	{
		// instance.sizeMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_45 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_46 = ((ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_45);
		float L_47;
		L_47 = GenericVirtualFuncInvoker1< float, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mA86928BC888E342D2C2644535E3399952F5077ED_RuntimeMethod_var, L_45, L_46);
		SizeBySpeedModule_set_sizeMultiplier_mAFACCF6252B8FB92DC3A51BCE11D22126B315901((&V_0), L_47, NULL);
		// break;
		goto IL_028a;
	}

IL_01e1:
	{
		// instance.x = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_48 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_49 = ((ES3Type_MinMaxCurve_t1C147718750ACBECE5D2B7F545D2A434A3C5409B_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t1C147718750ACBECE5D2B7F545D2A434A3C5409B_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_48);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_50;
		L_50 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_m9D6B4042B923127DEA4A2CAA3E35EED37D75B3D0_RuntimeMethod_var, L_48, L_49);
		SizeBySpeedModule_set_x_mED5B851A688588F171B38AF31B0CC91A003DA164((&V_0), L_50, NULL);
		// break;
		goto IL_028a;
	}

IL_01f8:
	{
		// instance.xMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_51 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_52 = ((ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_51);
		float L_53;
		L_53 = GenericVirtualFuncInvoker1< float, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mA86928BC888E342D2C2644535E3399952F5077ED_RuntimeMethod_var, L_51, L_52);
		SizeBySpeedModule_set_xMultiplier_m1803C7585C7DA6333FB4B3595EAD753FFD8ED32A((&V_0), L_53, NULL);
		// break;
		goto IL_028a;
	}

IL_020c:
	{
		// instance.y = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_54 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_55 = ((ES3Type_MinMaxCurve_t1C147718750ACBECE5D2B7F545D2A434A3C5409B_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t1C147718750ACBECE5D2B7F545D2A434A3C5409B_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_54);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_56;
		L_56 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_m9D6B4042B923127DEA4A2CAA3E35EED37D75B3D0_RuntimeMethod_var, L_54, L_55);
		SizeBySpeedModule_set_y_m1E9DE959AFA22DE52D24537108BD41B2D4B017E6((&V_0), L_56, NULL);
		// break;
		goto IL_028a;
	}

IL_0220:
	{
		// instance.yMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_57 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_58 = ((ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_57);
		float L_59;
		L_59 = GenericVirtualFuncInvoker1< float, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mA86928BC888E342D2C2644535E3399952F5077ED_RuntimeMethod_var, L_57, L_58);
		SizeBySpeedModule_set_yMultiplier_m4C9EE0927456366AC12C17543E95BAB3201C9DCB((&V_0), L_59, NULL);
		// break;
		goto IL_028a;
	}

IL_0234:
	{
		// instance.z = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_60 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_61 = ((ES3Type_MinMaxCurve_t1C147718750ACBECE5D2B7F545D2A434A3C5409B_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t1C147718750ACBECE5D2B7F545D2A434A3C5409B_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_60);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_62;
		L_62 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_m9D6B4042B923127DEA4A2CAA3E35EED37D75B3D0_RuntimeMethod_var, L_60, L_61);
		SizeBySpeedModule_set_z_m73C05D968B5C62551614E86A77AEF557F15734A3((&V_0), L_62, NULL);
		// break;
		goto IL_028a;
	}

IL_0248:
	{
		// instance.zMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_63 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_64 = ((ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_63);
		float L_65;
		L_65 = GenericVirtualFuncInvoker1< float, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mA86928BC888E342D2C2644535E3399952F5077ED_RuntimeMethod_var, L_63, L_64);
		SizeBySpeedModule_set_zMultiplier_m0B67A4AF3E30D31C14DBD5FAAA3EABFB787D9826((&V_0), L_65, NULL);
		// break;
		goto IL_028a;
	}

IL_025c:
	{
		// instance.separateAxes = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_66 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_67 = ((ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_66);
		bool L_68;
		L_68 = GenericVirtualFuncInvoker1< bool, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mFFB70EE53D8CD0255A4E599780F62A3EB1520E83_RuntimeMethod_var, L_66, L_67);
		SizeBySpeedModule_set_separateAxes_m5B0BA28A01D7FED6FDDA0267135B5EAE1F9C72C7((&V_0), L_68, NULL);
		// break;
		goto IL_028a;
	}

IL_0270:
	{
		// instance.range = reader.Read<UnityEngine.Vector2>(ES3Type_Vector2.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_69 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_70 = ((ES3Type_Vector2_tB51CE4B1AFCBAFE7ADC540050621735C4F8D4387_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Vector2_tB51CE4B1AFCBAFE7ADC540050621735C4F8D4387_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_69);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_71;
		L_71 = GenericVirtualFuncInvoker1< Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_m95B09869E3B912BD36BC3571D842BA21C71EB14B_RuntimeMethod_var, L_69, L_70);
		SizeBySpeedModule_set_range_m76B9B316654E44D6938A4A06DED0DF8B3CBCE4D7((&V_0), L_71, NULL);
		// break;
		goto IL_028a;
	}

IL_0284:
	{
		// reader.Skip();
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_72 = ___reader0;
		NullCheck(L_72);
		VirtualActionInvoker0::Invoke(41 /* System.Void ES3Reader::Skip() */, L_72);
	}

IL_028a:
	{
		// while((propertyName = reader.ReadPropertyName()) != null)
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_73 = ___reader0;
		NullCheck(L_73);
		String_t* L_74;
		L_74 = VirtualFuncInvoker0< String_t* >::Invoke(21 /* System.String ES3Reader::ReadPropertyName() */, L_73);
		String_t* L_75 = L_74;
		V_1 = L_75;
		if (L_75)
		{
			goto IL_000c;
		}
	}
	{
		// }
		return;
	}
}
// System.Void ES3Types.ES3Type_SizeBySpeedModule::ReadInto<UnityEngine.ParticleSystem/CollisionModule>(ES3Reader,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ES3Type_SizeBySpeedModule_ReadInto_TisCollisionModule_tEE4892D4872C2907164A66DC424F1CFA1D527083_m27682804A35C56053B3ACC116E335D298279571D_gshared (ES3Type_SizeBySpeedModule_t2A3358BE9F6111ED907A0D4CA428148A73CD7601* __this, ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* ___reader0, RuntimeObject* ___obj1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mFFB70EE53D8CD0255A4E599780F62A3EB1520E83_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_m9D6B4042B923127DEA4A2CAA3E35EED37D75B3D0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mA86928BC888E342D2C2644535E3399952F5077ED_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_m95B09869E3B912BD36BC3571D842BA21C71EB14B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_MinMaxCurve_t1C147718750ACBECE5D2B7F545D2A434A3C5409B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_Vector2_tB51CE4B1AFCBAFE7ADC540050621735C4F8D4387_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SizeBySpeedModule_t73995CB54A0D1B06BA100EA77972D37CDF7B4DC4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral062DB096C728515E033CF8C48A1C1F0B9A79384B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1B024D537329B86AB0DF96B2A714180F442F53E9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2F8690361553406965679AEF125F896BC5FC61F5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3EE5A4671A4E5AEBD31CA5F013A7773DC18ED22B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4845015737DC41475709911228278216EE4DC3AF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8C6F88DEE0DFE3513BB8B44A8CF0FEE437F4EFFB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9384C6EF2DA5C0BD5274A0DACFF291D0ABBFD8B1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9CE1604D659135925CCC4DD1F526AFFE42E689F1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9E61658953B4F9BB4A05E3D2D2BC18990BADE934);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBD0DD0004699EF86BF0FC1D161FA3766AF5126C4);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B);
		s_Il2CppMethodInitialized = true;
	}
	SizeBySpeedModule_t73995CB54A0D1B06BA100EA77972D37CDF7B4DC4 V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	uint32_t V_2 = 0;
	{
		// var instance = (UnityEngine.ParticleSystem.SizeBySpeedModule)obj;
		RuntimeObject* L_0 = ___obj1;
		V_0 = ((*(SizeBySpeedModule_t73995CB54A0D1B06BA100EA77972D37CDF7B4DC4*)((SizeBySpeedModule_t73995CB54A0D1B06BA100EA77972D37CDF7B4DC4*)(SizeBySpeedModule_t73995CB54A0D1B06BA100EA77972D37CDF7B4DC4*)UnBox(L_0, SizeBySpeedModule_t73995CB54A0D1B06BA100EA77972D37CDF7B4DC4_il2cpp_TypeInfo_var))));
		goto IL_028a;
	}

IL_000c:
	{
		String_t* L_1 = V_1;
		uint32_t L_2;
		L_2 = U3CPrivateImplementationDetailsU3E_ComputeStringHash_m9E43873DE0DF480D27EC1C2AA3C09E74EA77F75D(L_1, NULL);
		V_2 = L_2;
		uint32_t L_3 = V_2;
		if ((!(((uint32_t)L_3) <= ((uint32_t)((int32_t)1479031685)))))
		{
			goto IL_0064;
		}
	}
	{
		uint32_t L_4 = V_2;
		if ((!(((uint32_t)L_4) <= ((uint32_t)((int32_t)597743964)))))
		{
			goto IL_003e;
		}
	}
	{
		uint32_t L_5 = V_2;
		if ((((int32_t)L_5) == ((int32_t)((int32_t)49525662))))
		{
			goto IL_00b5;
		}
	}
	{
		uint32_t L_6 = V_2;
		if ((((int32_t)L_6) == ((int32_t)((int32_t)597743964))))
		{
			goto IL_00ca;
		}
	}
	{
		goto IL_0284;
	}

IL_003e:
	{
		uint32_t L_7 = V_2;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)726266686))))
		{
			goto IL_015d;
		}
	}
	{
		uint32_t L_8 = V_2;
		if ((((int32_t)L_8) == ((int32_t)((int32_t)1105436259))))
		{
			goto IL_00df;
		}
	}
	{
		uint32_t L_9 = V_2;
		if ((((int32_t)L_9) == ((int32_t)((int32_t)1479031685))))
		{
			goto IL_0172;
		}
	}
	{
		goto IL_0284;
	}

IL_0064:
	{
		uint32_t L_10 = V_2;
		if ((!(((uint32_t)L_10) <= ((uint32_t)((int32_t)-86242094)))))
		{
			goto IL_0092;
		}
	}
	{
		uint32_t L_11 = V_2;
		if ((((int32_t)L_11) == ((int32_t)((int32_t)-1013869429))))
		{
			goto IL_0133;
		}
	}
	{
		uint32_t L_12 = V_2;
		if ((((int32_t)L_12) == ((int32_t)((int32_t)-585050980))))
		{
			goto IL_0109;
		}
	}
	{
		uint32_t L_13 = V_2;
		if ((((int32_t)L_13) == ((int32_t)((int32_t)-86242094))))
		{
			goto IL_0187;
		}
	}
	{
		goto IL_0284;
	}

IL_0092:
	{
		uint32_t L_14 = V_2;
		if ((((int32_t)L_14) == ((int32_t)((int32_t)-66302220))))
		{
			goto IL_011e;
		}
	}
	{
		uint32_t L_15 = V_2;
		if ((((int32_t)L_15) == ((int32_t)((int32_t)-49524601))))
		{
			goto IL_00f4;
		}
	}
	{
		uint32_t L_16 = V_2;
		if ((((int32_t)L_16) == ((int32_t)((int32_t)-15969363))))
		{
			goto IL_0148;
		}
	}
	{
		goto IL_0284;
	}

IL_00b5:
	{
		String_t* L_17 = V_1;
		bool L_18;
		L_18 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_17, _stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B, NULL);
		if (L_18)
		{
			goto IL_019c;
		}
	}
	{
		goto IL_0284;
	}

IL_00ca:
	{
		String_t* L_19 = V_1;
		bool L_20;
		L_20 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_19, _stringLiteral3EE5A4671A4E5AEBD31CA5F013A7773DC18ED22B, NULL);
		if (L_20)
		{
			goto IL_01b3;
		}
	}
	{
		goto IL_0284;
	}

IL_00df:
	{
		String_t* L_21 = V_1;
		bool L_22;
		L_22 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_21, _stringLiteralBD0DD0004699EF86BF0FC1D161FA3766AF5126C4, NULL);
		if (L_22)
		{
			goto IL_01ca;
		}
	}
	{
		goto IL_0284;
	}

IL_00f4:
	{
		String_t* L_23 = V_1;
		bool L_24;
		L_24 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_23, _stringLiteral062DB096C728515E033CF8C48A1C1F0B9A79384B, NULL);
		if (L_24)
		{
			goto IL_01e1;
		}
	}
	{
		goto IL_0284;
	}

IL_0109:
	{
		String_t* L_25 = V_1;
		bool L_26;
		L_26 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_25, _stringLiteral8C6F88DEE0DFE3513BB8B44A8CF0FEE437F4EFFB, NULL);
		if (L_26)
		{
			goto IL_01f8;
		}
	}
	{
		goto IL_0284;
	}

IL_011e:
	{
		String_t* L_27 = V_1;
		bool L_28;
		L_28 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_27, _stringLiteral9384C6EF2DA5C0BD5274A0DACFF291D0ABBFD8B1, NULL);
		if (L_28)
		{
			goto IL_020c;
		}
	}
	{
		goto IL_0284;
	}

IL_0133:
	{
		String_t* L_29 = V_1;
		bool L_30;
		L_30 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_29, _stringLiteral9E61658953B4F9BB4A05E3D2D2BC18990BADE934, NULL);
		if (L_30)
		{
			goto IL_0220;
		}
	}
	{
		goto IL_0284;
	}

IL_0148:
	{
		String_t* L_31 = V_1;
		bool L_32;
		L_32 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_31, _stringLiteral9CE1604D659135925CCC4DD1F526AFFE42E689F1, NULL);
		if (L_32)
		{
			goto IL_0234;
		}
	}
	{
		goto IL_0284;
	}

IL_015d:
	{
		String_t* L_33 = V_1;
		bool L_34;
		L_34 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_33, _stringLiteral2F8690361553406965679AEF125F896BC5FC61F5, NULL);
		if (L_34)
		{
			goto IL_0248;
		}
	}
	{
		goto IL_0284;
	}

IL_0172:
	{
		String_t* L_35 = V_1;
		bool L_36;
		L_36 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_35, _stringLiteral1B024D537329B86AB0DF96B2A714180F442F53E9, NULL);
		if (L_36)
		{
			goto IL_025c;
		}
	}
	{
		goto IL_0284;
	}

IL_0187:
	{
		String_t* L_37 = V_1;
		bool L_38;
		L_38 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_37, _stringLiteral4845015737DC41475709911228278216EE4DC3AF, NULL);
		if (L_38)
		{
			goto IL_0270;
		}
	}
	{
		goto IL_0284;
	}

IL_019c:
	{
		// instance.enabled = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_39 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_40 = ((ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_39);
		bool L_41;
		L_41 = GenericVirtualFuncInvoker1< bool, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mFFB70EE53D8CD0255A4E599780F62A3EB1520E83_RuntimeMethod_var, L_39, L_40);
		SizeBySpeedModule_set_enabled_m1DFF0FEFF522C52D874173B6CDAAEE94F9E8B718((&V_0), L_41, NULL);
		// break;
		goto IL_028a;
	}

IL_01b3:
	{
		// instance.size = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_42 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_43 = ((ES3Type_MinMaxCurve_t1C147718750ACBECE5D2B7F545D2A434A3C5409B_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t1C147718750ACBECE5D2B7F545D2A434A3C5409B_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_42);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_44;
		L_44 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_m9D6B4042B923127DEA4A2CAA3E35EED37D75B3D0_RuntimeMethod_var, L_42, L_43);
		SizeBySpeedModule_set_size_mD906BB6EAE9613DDA6F623E4D4878D69ECB90729((&V_0), L_44, NULL);
		// break;
		goto IL_028a;
	}

IL_01ca:
	{
		// instance.sizeMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_45 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_46 = ((ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_45);
		float L_47;
		L_47 = GenericVirtualFuncInvoker1< float, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mA86928BC888E342D2C2644535E3399952F5077ED_RuntimeMethod_var, L_45, L_46);
		SizeBySpeedModule_set_sizeMultiplier_mAFACCF6252B8FB92DC3A51BCE11D22126B315901((&V_0), L_47, NULL);
		// break;
		goto IL_028a;
	}

IL_01e1:
	{
		// instance.x = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_48 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_49 = ((ES3Type_MinMaxCurve_t1C147718750ACBECE5D2B7F545D2A434A3C5409B_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t1C147718750ACBECE5D2B7F545D2A434A3C5409B_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_48);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_50;
		L_50 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_m9D6B4042B923127DEA4A2CAA3E35EED37D75B3D0_RuntimeMethod_var, L_48, L_49);
		SizeBySpeedModule_set_x_mED5B851A688588F171B38AF31B0CC91A003DA164((&V_0), L_50, NULL);
		// break;
		goto IL_028a;
	}

IL_01f8:
	{
		// instance.xMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_51 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_52 = ((ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_51);
		float L_53;
		L_53 = GenericVirtualFuncInvoker1< float, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mA86928BC888E342D2C2644535E3399952F5077ED_RuntimeMethod_var, L_51, L_52);
		SizeBySpeedModule_set_xMultiplier_m1803C7585C7DA6333FB4B3595EAD753FFD8ED32A((&V_0), L_53, NULL);
		// break;
		goto IL_028a;
	}

IL_020c:
	{
		// instance.y = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_54 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_55 = ((ES3Type_MinMaxCurve_t1C147718750ACBECE5D2B7F545D2A434A3C5409B_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t1C147718750ACBECE5D2B7F545D2A434A3C5409B_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_54);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_56;
		L_56 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_m9D6B4042B923127DEA4A2CAA3E35EED37D75B3D0_RuntimeMethod_var, L_54, L_55);
		SizeBySpeedModule_set_y_m1E9DE959AFA22DE52D24537108BD41B2D4B017E6((&V_0), L_56, NULL);
		// break;
		goto IL_028a;
	}

IL_0220:
	{
		// instance.yMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_57 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_58 = ((ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_57);
		float L_59;
		L_59 = GenericVirtualFuncInvoker1< float, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mA86928BC888E342D2C2644535E3399952F5077ED_RuntimeMethod_var, L_57, L_58);
		SizeBySpeedModule_set_yMultiplier_m4C9EE0927456366AC12C17543E95BAB3201C9DCB((&V_0), L_59, NULL);
		// break;
		goto IL_028a;
	}

IL_0234:
	{
		// instance.z = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_60 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_61 = ((ES3Type_MinMaxCurve_t1C147718750ACBECE5D2B7F545D2A434A3C5409B_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t1C147718750ACBECE5D2B7F545D2A434A3C5409B_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_60);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_62;
		L_62 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_m9D6B4042B923127DEA4A2CAA3E35EED37D75B3D0_RuntimeMethod_var, L_60, L_61);
		SizeBySpeedModule_set_z_m73C05D968B5C62551614E86A77AEF557F15734A3((&V_0), L_62, NULL);
		// break;
		goto IL_028a;
	}

IL_0248:
	{
		// instance.zMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_63 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_64 = ((ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_63);
		float L_65;
		L_65 = GenericVirtualFuncInvoker1< float, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mA86928BC888E342D2C2644535E3399952F5077ED_RuntimeMethod_var, L_63, L_64);
		SizeBySpeedModule_set_zMultiplier_m0B67A4AF3E30D31C14DBD5FAAA3EABFB787D9826((&V_0), L_65, NULL);
		// break;
		goto IL_028a;
	}

IL_025c:
	{
		// instance.separateAxes = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_66 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_67 = ((ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_66);
		bool L_68;
		L_68 = GenericVirtualFuncInvoker1< bool, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mFFB70EE53D8CD0255A4E599780F62A3EB1520E83_RuntimeMethod_var, L_66, L_67);
		SizeBySpeedModule_set_separateAxes_m5B0BA28A01D7FED6FDDA0267135B5EAE1F9C72C7((&V_0), L_68, NULL);
		// break;
		goto IL_028a;
	}

IL_0270:
	{
		// instance.range = reader.Read<UnityEngine.Vector2>(ES3Type_Vector2.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_69 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_70 = ((ES3Type_Vector2_tB51CE4B1AFCBAFE7ADC540050621735C4F8D4387_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Vector2_tB51CE4B1AFCBAFE7ADC540050621735C4F8D4387_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_69);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_71;
		L_71 = GenericVirtualFuncInvoker1< Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_m95B09869E3B912BD36BC3571D842BA21C71EB14B_RuntimeMethod_var, L_69, L_70);
		SizeBySpeedModule_set_range_m76B9B316654E44D6938A4A06DED0DF8B3CBCE4D7((&V_0), L_71, NULL);
		// break;
		goto IL_028a;
	}

IL_0284:
	{
		// reader.Skip();
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_72 = ___reader0;
		NullCheck(L_72);
		VirtualActionInvoker0::Invoke(41 /* System.Void ES3Reader::Skip() */, L_72);
	}

IL_028a:
	{
		// while((propertyName = reader.ReadPropertyName()) != null)
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_73 = ___reader0;
		NullCheck(L_73);
		String_t* L_74;
		L_74 = VirtualFuncInvoker0< String_t* >::Invoke(21 /* System.String ES3Reader::ReadPropertyName() */, L_73);
		String_t* L_75 = L_74;
		V_1 = L_75;
		if (L_75)
		{
			goto IL_000c;
		}
	}
	{
		// }
		return;
	}
}
// System.Void ES3Types.ES3Type_SizeBySpeedModule::ReadInto<UnityEngine.ParticleSystem/ColorBySpeedModule>(ES3Reader,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ES3Type_SizeBySpeedModule_ReadInto_TisColorBySpeedModule_t808C4CC668431DDE51D5AD98A81C78DDB944948B_m9EED261671EDFF8BD49CD79E6FB6F9D3B25708A7_gshared (ES3Type_SizeBySpeedModule_t2A3358BE9F6111ED907A0D4CA428148A73CD7601* __this, ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* ___reader0, RuntimeObject* ___obj1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mFFB70EE53D8CD0255A4E599780F62A3EB1520E83_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_m9D6B4042B923127DEA4A2CAA3E35EED37D75B3D0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mA86928BC888E342D2C2644535E3399952F5077ED_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_m95B09869E3B912BD36BC3571D842BA21C71EB14B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_MinMaxCurve_t1C147718750ACBECE5D2B7F545D2A434A3C5409B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_Vector2_tB51CE4B1AFCBAFE7ADC540050621735C4F8D4387_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SizeBySpeedModule_t73995CB54A0D1B06BA100EA77972D37CDF7B4DC4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral062DB096C728515E033CF8C48A1C1F0B9A79384B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1B024D537329B86AB0DF96B2A714180F442F53E9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2F8690361553406965679AEF125F896BC5FC61F5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3EE5A4671A4E5AEBD31CA5F013A7773DC18ED22B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4845015737DC41475709911228278216EE4DC3AF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8C6F88DEE0DFE3513BB8B44A8CF0FEE437F4EFFB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9384C6EF2DA5C0BD5274A0DACFF291D0ABBFD8B1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9CE1604D659135925CCC4DD1F526AFFE42E689F1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9E61658953B4F9BB4A05E3D2D2BC18990BADE934);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBD0DD0004699EF86BF0FC1D161FA3766AF5126C4);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B);
		s_Il2CppMethodInitialized = true;
	}
	SizeBySpeedModule_t73995CB54A0D1B06BA100EA77972D37CDF7B4DC4 V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	uint32_t V_2 = 0;
	{
		// var instance = (UnityEngine.ParticleSystem.SizeBySpeedModule)obj;
		RuntimeObject* L_0 = ___obj1;
		V_0 = ((*(SizeBySpeedModule_t73995CB54A0D1B06BA100EA77972D37CDF7B4DC4*)((SizeBySpeedModule_t73995CB54A0D1B06BA100EA77972D37CDF7B4DC4*)(SizeBySpeedModule_t73995CB54A0D1B06BA100EA77972D37CDF7B4DC4*)UnBox(L_0, SizeBySpeedModule_t73995CB54A0D1B06BA100EA77972D37CDF7B4DC4_il2cpp_TypeInfo_var))));
		goto IL_028a;
	}

IL_000c:
	{
		String_t* L_1 = V_1;
		uint32_t L_2;
		L_2 = U3CPrivateImplementationDetailsU3E_ComputeStringHash_m9E43873DE0DF480D27EC1C2AA3C09E74EA77F75D(L_1, NULL);
		V_2 = L_2;
		uint32_t L_3 = V_2;
		if ((!(((uint32_t)L_3) <= ((uint32_t)((int32_t)1479031685)))))
		{
			goto IL_0064;
		}
	}
	{
		uint32_t L_4 = V_2;
		if ((!(((uint32_t)L_4) <= ((uint32_t)((int32_t)597743964)))))
		{
			goto IL_003e;
		}
	}
	{
		uint32_t L_5 = V_2;
		if ((((int32_t)L_5) == ((int32_t)((int32_t)49525662))))
		{
			goto IL_00b5;
		}
	}
	{
		uint32_t L_6 = V_2;
		if ((((int32_t)L_6) == ((int32_t)((int32_t)597743964))))
		{
			goto IL_00ca;
		}
	}
	{
		goto IL_0284;
	}

IL_003e:
	{
		uint32_t L_7 = V_2;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)726266686))))
		{
			goto IL_015d;
		}
	}
	{
		uint32_t L_8 = V_2;
		if ((((int32_t)L_8) == ((int32_t)((int32_t)1105436259))))
		{
			goto IL_00df;
		}
	}
	{
		uint32_t L_9 = V_2;
		if ((((int32_t)L_9) == ((int32_t)((int32_t)1479031685))))
		{
			goto IL_0172;
		}
	}
	{
		goto IL_0284;
	}

IL_0064:
	{
		uint32_t L_10 = V_2;
		if ((!(((uint32_t)L_10) <= ((uint32_t)((int32_t)-86242094)))))
		{
			goto IL_0092;
		}
	}
	{
		uint32_t L_11 = V_2;
		if ((((int32_t)L_11) == ((int32_t)((int32_t)-1013869429))))
		{
			goto IL_0133;
		}
	}
	{
		uint32_t L_12 = V_2;
		if ((((int32_t)L_12) == ((int32_t)((int32_t)-585050980))))
		{
			goto IL_0109;
		}
	}
	{
		uint32_t L_13 = V_2;
		if ((((int32_t)L_13) == ((int32_t)((int32_t)-86242094))))
		{
			goto IL_0187;
		}
	}
	{
		goto IL_0284;
	}

IL_0092:
	{
		uint32_t L_14 = V_2;
		if ((((int32_t)L_14) == ((int32_t)((int32_t)-66302220))))
		{
			goto IL_011e;
		}
	}
	{
		uint32_t L_15 = V_2;
		if ((((int32_t)L_15) == ((int32_t)((int32_t)-49524601))))
		{
			goto IL_00f4;
		}
	}
	{
		uint32_t L_16 = V_2;
		if ((((int32_t)L_16) == ((int32_t)((int32_t)-15969363))))
		{
			goto IL_0148;
		}
	}
	{
		goto IL_0284;
	}

IL_00b5:
	{
		String_t* L_17 = V_1;
		bool L_18;
		L_18 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_17, _stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B, NULL);
		if (L_18)
		{
			goto IL_019c;
		}
	}
	{
		goto IL_0284;
	}

IL_00ca:
	{
		String_t* L_19 = V_1;
		bool L_20;
		L_20 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_19, _stringLiteral3EE5A4671A4E5AEBD31CA5F013A7773DC18ED22B, NULL);
		if (L_20)
		{
			goto IL_01b3;
		}
	}
	{
		goto IL_0284;
	}

IL_00df:
	{
		String_t* L_21 = V_1;
		bool L_22;
		L_22 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_21, _stringLiteralBD0DD0004699EF86BF0FC1D161FA3766AF5126C4, NULL);
		if (L_22)
		{
			goto IL_01ca;
		}
	}
	{
		goto IL_0284;
	}

IL_00f4:
	{
		String_t* L_23 = V_1;
		bool L_24;
		L_24 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_23, _stringLiteral062DB096C728515E033CF8C48A1C1F0B9A79384B, NULL);
		if (L_24)
		{
			goto IL_01e1;
		}
	}
	{
		goto IL_0284;
	}

IL_0109:
	{
		String_t* L_25 = V_1;
		bool L_26;
		L_26 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_25, _stringLiteral8C6F88DEE0DFE3513BB8B44A8CF0FEE437F4EFFB, NULL);
		if (L_26)
		{
			goto IL_01f8;
		}
	}
	{
		goto IL_0284;
	}

IL_011e:
	{
		String_t* L_27 = V_1;
		bool L_28;
		L_28 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_27, _stringLiteral9384C6EF2DA5C0BD5274A0DACFF291D0ABBFD8B1, NULL);
		if (L_28)
		{
			goto IL_020c;
		}
	}
	{
		goto IL_0284;
	}

IL_0133:
	{
		String_t* L_29 = V_1;
		bool L_30;
		L_30 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_29, _stringLiteral9E61658953B4F9BB4A05E3D2D2BC18990BADE934, NULL);
		if (L_30)
		{
			goto IL_0220;
		}
	}
	{
		goto IL_0284;
	}

IL_0148:
	{
		String_t* L_31 = V_1;
		bool L_32;
		L_32 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_31, _stringLiteral9CE1604D659135925CCC4DD1F526AFFE42E689F1, NULL);
		if (L_32)
		{
			goto IL_0234;
		}
	}
	{
		goto IL_0284;
	}

IL_015d:
	{
		String_t* L_33 = V_1;
		bool L_34;
		L_34 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_33, _stringLiteral2F8690361553406965679AEF125F896BC5FC61F5, NULL);
		if (L_34)
		{
			goto IL_0248;
		}
	}
	{
		goto IL_0284;
	}

IL_0172:
	{
		String_t* L_35 = V_1;
		bool L_36;
		L_36 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_35, _stringLiteral1B024D537329B86AB0DF96B2A714180F442F53E9, NULL);
		if (L_36)
		{
			goto IL_025c;
		}
	}
	{
		goto IL_0284;
	}

IL_0187:
	{
		String_t* L_37 = V_1;
		bool L_38;
		L_38 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_37, _stringLiteral4845015737DC41475709911228278216EE4DC3AF, NULL);
		if (L_38)
		{
			goto IL_0270;
		}
	}
	{
		goto IL_0284;
	}

IL_019c:
	{
		// instance.enabled = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_39 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_40 = ((ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_39);
		bool L_41;
		L_41 = GenericVirtualFuncInvoker1< bool, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mFFB70EE53D8CD0255A4E599780F62A3EB1520E83_RuntimeMethod_var, L_39, L_40);
		SizeBySpeedModule_set_enabled_m1DFF0FEFF522C52D874173B6CDAAEE94F9E8B718((&V_0), L_41, NULL);
		// break;
		goto IL_028a;
	}

IL_01b3:
	{
		// instance.size = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_42 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_43 = ((ES3Type_MinMaxCurve_t1C147718750ACBECE5D2B7F545D2A434A3C5409B_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t1C147718750ACBECE5D2B7F545D2A434A3C5409B_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_42);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_44;
		L_44 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_m9D6B4042B923127DEA4A2CAA3E35EED37D75B3D0_RuntimeMethod_var, L_42, L_43);
		SizeBySpeedModule_set_size_mD906BB6EAE9613DDA6F623E4D4878D69ECB90729((&V_0), L_44, NULL);
		// break;
		goto IL_028a;
	}

IL_01ca:
	{
		// instance.sizeMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_45 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_46 = ((ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_45);
		float L_47;
		L_47 = GenericVirtualFuncInvoker1< float, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mA86928BC888E342D2C2644535E3399952F5077ED_RuntimeMethod_var, L_45, L_46);
		SizeBySpeedModule_set_sizeMultiplier_mAFACCF6252B8FB92DC3A51BCE11D22126B315901((&V_0), L_47, NULL);
		// break;
		goto IL_028a;
	}

IL_01e1:
	{
		// instance.x = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_48 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_49 = ((ES3Type_MinMaxCurve_t1C147718750ACBECE5D2B7F545D2A434A3C5409B_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t1C147718750ACBECE5D2B7F545D2A434A3C5409B_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_48);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_50;
		L_50 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_m9D6B4042B923127DEA4A2CAA3E35EED37D75B3D0_RuntimeMethod_var, L_48, L_49);
		SizeBySpeedModule_set_x_mED5B851A688588F171B38AF31B0CC91A003DA164((&V_0), L_50, NULL);
		// break;
		goto IL_028a;
	}

IL_01f8:
	{
		// instance.xMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_51 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_52 = ((ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_51);
		float L_53;
		L_53 = GenericVirtualFuncInvoker1< float, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mA86928BC888E342D2C2644535E3399952F5077ED_RuntimeMethod_var, L_51, L_52);
		SizeBySpeedModule_set_xMultiplier_m1803C7585C7DA6333FB4B3595EAD753FFD8ED32A((&V_0), L_53, NULL);
		// break;
		goto IL_028a;
	}

IL_020c:
	{
		// instance.y = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_54 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_55 = ((ES3Type_MinMaxCurve_t1C147718750ACBECE5D2B7F545D2A434A3C5409B_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t1C147718750ACBECE5D2B7F545D2A434A3C5409B_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_54);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_56;
		L_56 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_m9D6B4042B923127DEA4A2CAA3E35EED37D75B3D0_RuntimeMethod_var, L_54, L_55);
		SizeBySpeedModule_set_y_m1E9DE959AFA22DE52D24537108BD41B2D4B017E6((&V_0), L_56, NULL);
		// break;
		goto IL_028a;
	}

IL_0220:
	{
		// instance.yMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_57 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_58 = ((ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_57);
		float L_59;
		L_59 = GenericVirtualFuncInvoker1< float, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mA86928BC888E342D2C2644535E3399952F5077ED_RuntimeMethod_var, L_57, L_58);
		SizeBySpeedModule_set_yMultiplier_m4C9EE0927456366AC12C17543E95BAB3201C9DCB((&V_0), L_59, NULL);
		// break;
		goto IL_028a;
	}

IL_0234:
	{
		// instance.z = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_60 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_61 = ((ES3Type_MinMaxCurve_t1C147718750ACBECE5D2B7F545D2A434A3C5409B_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t1C147718750ACBECE5D2B7F545D2A434A3C5409B_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_60);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_62;
		L_62 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_m9D6B4042B923127DEA4A2CAA3E35EED37D75B3D0_RuntimeMethod_var, L_60, L_61);
		SizeBySpeedModule_set_z_m73C05D968B5C62551614E86A77AEF557F15734A3((&V_0), L_62, NULL);
		// break;
		goto IL_028a;
	}

IL_0248:
	{
		// instance.zMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_63 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_64 = ((ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_63);
		float L_65;
		L_65 = GenericVirtualFuncInvoker1< float, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mA86928BC888E342D2C2644535E3399952F5077ED_RuntimeMethod_var, L_63, L_64);
		SizeBySpeedModule_set_zMultiplier_m0B67A4AF3E30D31C14DBD5FAAA3EABFB787D9826((&V_0), L_65, NULL);
		// break;
		goto IL_028a;
	}

IL_025c:
	{
		// instance.separateAxes = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_66 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_67 = ((ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_66);
		bool L_68;
		L_68 = GenericVirtualFuncInvoker1< bool, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mFFB70EE53D8CD0255A4E599780F62A3EB1520E83_RuntimeMethod_var, L_66, L_67);
		SizeBySpeedModule_set_separateAxes_m5B0BA28A01D7FED6FDDA0267135B5EAE1F9C72C7((&V_0), L_68, NULL);
		// break;
		goto IL_028a;
	}

IL_0270:
	{
		// instance.range = reader.Read<UnityEngine.Vector2>(ES3Type_Vector2.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_69 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_70 = ((ES3Type_Vector2_tB51CE4B1AFCBAFE7ADC540050621735C4F8D4387_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Vector2_tB51CE4B1AFCBAFE7ADC540050621735C4F8D4387_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_69);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_71;
		L_71 = GenericVirtualFuncInvoker1< Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_m95B09869E3B912BD36BC3571D842BA21C71EB14B_RuntimeMethod_var, L_69, L_70);
		SizeBySpeedModule_set_range_m76B9B316654E44D6938A4A06DED0DF8B3CBCE4D7((&V_0), L_71, NULL);
		// break;
		goto IL_028a;
	}

IL_0284:
	{
		// reader.Skip();
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_72 = ___reader0;
		NullCheck(L_72);
		VirtualActionInvoker0::Invoke(41 /* System.Void ES3Reader::Skip() */, L_72);
	}

IL_028a:
	{
		// while((propertyName = reader.ReadPropertyName()) != null)
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_73 = ___reader0;
		NullCheck(L_73);
		String_t* L_74;
		L_74 = VirtualFuncInvoker0< String_t* >::Invoke(21 /* System.String ES3Reader::ReadPropertyName() */, L_73);
		String_t* L_75 = L_74;
		V_1 = L_75;
		if (L_75)
		{
			goto IL_000c;
		}
	}
	{
		// }
		return;
	}
}
// System.Void ES3Types.ES3Type_SizeBySpeedModule::ReadInto<UnityEngine.ParticleSystem/ColorOverLifetimeModule>(ES3Reader,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ES3Type_SizeBySpeedModule_ReadInto_TisColorOverLifetimeModule_t758EC8315B6C19D78C418D942CD1F94FE7EEE9D9_m889C3F453E5452AA10DEE3617E8271D96BA4CDBE_gshared (ES3Type_SizeBySpeedModule_t2A3358BE9F6111ED907A0D4CA428148A73CD7601* __this, ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* ___reader0, RuntimeObject* ___obj1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mFFB70EE53D8CD0255A4E599780F62A3EB1520E83_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_m9D6B4042B923127DEA4A2CAA3E35EED37D75B3D0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mA86928BC888E342D2C2644535E3399952F5077ED_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_m95B09869E3B912BD36BC3571D842BA21C71EB14B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_MinMaxCurve_t1C147718750ACBECE5D2B7F545D2A434A3C5409B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_Vector2_tB51CE4B1AFCBAFE7ADC540050621735C4F8D4387_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SizeBySpeedModule_t73995CB54A0D1B06BA100EA77972D37CDF7B4DC4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral062DB096C728515E033CF8C48A1C1F0B9A79384B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1B024D537329B86AB0DF96B2A714180F442F53E9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2F8690361553406965679AEF125F896BC5FC61F5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3EE5A4671A4E5AEBD31CA5F013A7773DC18ED22B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4845015737DC41475709911228278216EE4DC3AF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8C6F88DEE0DFE3513BB8B44A8CF0FEE437F4EFFB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9384C6EF2DA5C0BD5274A0DACFF291D0ABBFD8B1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9CE1604D659135925CCC4DD1F526AFFE42E689F1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9E61658953B4F9BB4A05E3D2D2BC18990BADE934);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBD0DD0004699EF86BF0FC1D161FA3766AF5126C4);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B);
		s_Il2CppMethodInitialized = true;
	}
	SizeBySpeedModule_t73995CB54A0D1B06BA100EA77972D37CDF7B4DC4 V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	uint32_t V_2 = 0;
	{
		// var instance = (UnityEngine.ParticleSystem.SizeBySpeedModule)obj;
		RuntimeObject* L_0 = ___obj1;
		V_0 = ((*(SizeBySpeedModule_t73995CB54A0D1B06BA100EA77972D37CDF7B4DC4*)((SizeBySpeedModule_t73995CB54A0D1B06BA100EA77972D37CDF7B4DC4*)(SizeBySpeedModule_t73995CB54A0D1B06BA100EA77972D37CDF7B4DC4*)UnBox(L_0, SizeBySpeedModule_t73995CB54A0D1B06BA100EA77972D37CDF7B4DC4_il2cpp_TypeInfo_var))));
		goto IL_028a;
	}

IL_000c:
	{
		String_t* L_1 = V_1;
		uint32_t L_2;
		L_2 = U3CPrivateImplementationDetailsU3E_ComputeStringHash_m9E43873DE0DF480D27EC1C2AA3C09E74EA77F75D(L_1, NULL);
		V_2 = L_2;
		uint32_t L_3 = V_2;
		if ((!(((uint32_t)L_3) <= ((uint32_t)((int32_t)1479031685)))))
		{
			goto IL_0064;
		}
	}
	{
		uint32_t L_4 = V_2;
		if ((!(((uint32_t)L_4) <= ((uint32_t)((int32_t)597743964)))))
		{
			goto IL_003e;
		}
	}
	{
		uint32_t L_5 = V_2;
		if ((((int32_t)L_5) == ((int32_t)((int32_t)49525662))))
		{
			goto IL_00b5;
		}
	}
	{
		uint32_t L_6 = V_2;
		if ((((int32_t)L_6) == ((int32_t)((int32_t)597743964))))
		{
			goto IL_00ca;
		}
	}
	{
		goto IL_0284;
	}

IL_003e:
	{
		uint32_t L_7 = V_2;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)726266686))))
		{
			goto IL_015d;
		}
	}
	{
		uint32_t L_8 = V_2;
		if ((((int32_t)L_8) == ((int32_t)((int32_t)1105436259))))
		{
			goto IL_00df;
		}
	}
	{
		uint32_t L_9 = V_2;
		if ((((int32_t)L_9) == ((int32_t)((int32_t)1479031685))))
		{
			goto IL_0172;
		}
	}
	{
		goto IL_0284;
	}

IL_0064:
	{
		uint32_t L_10 = V_2;
		if ((!(((uint32_t)L_10) <= ((uint32_t)((int32_t)-86242094)))))
		{
			goto IL_0092;
		}
	}
	{
		uint32_t L_11 = V_2;
		if ((((int32_t)L_11) == ((int32_t)((int32_t)-1013869429))))
		{
			goto IL_0133;
		}
	}
	{
		uint32_t L_12 = V_2;
		if ((((int32_t)L_12) == ((int32_t)((int32_t)-585050980))))
		{
			goto IL_0109;
		}
	}
	{
		uint32_t L_13 = V_2;
		if ((((int32_t)L_13) == ((int32_t)((int32_t)-86242094))))
		{
			goto IL_0187;
		}
	}
	{
		goto IL_0284;
	}

IL_0092:
	{
		uint32_t L_14 = V_2;
		if ((((int32_t)L_14) == ((int32_t)((int32_t)-66302220))))
		{
			goto IL_011e;
		}
	}
	{
		uint32_t L_15 = V_2;
		if ((((int32_t)L_15) == ((int32_t)((int32_t)-49524601))))
		{
			goto IL_00f4;
		}
	}
	{
		uint32_t L_16 = V_2;
		if ((((int32_t)L_16) == ((int32_t)((int32_t)-15969363))))
		{
			goto IL_0148;
		}
	}
	{
		goto IL_0284;
	}

IL_00b5:
	{
		String_t* L_17 = V_1;
		bool L_18;
		L_18 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_17, _stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B, NULL);
		if (L_18)
		{
			goto IL_019c;
		}
	}
	{
		goto IL_0284;
	}

IL_00ca:
	{
		String_t* L_19 = V_1;
		bool L_20;
		L_20 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_19, _stringLiteral3EE5A4671A4E5AEBD31CA5F013A7773DC18ED22B, NULL);
		if (L_20)
		{
			goto IL_01b3;
		}
	}
	{
		goto IL_0284;
	}

IL_00df:
	{
		String_t* L_21 = V_1;
		bool L_22;
		L_22 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_21, _stringLiteralBD0DD0004699EF86BF0FC1D161FA3766AF5126C4, NULL);
		if (L_22)
		{
			goto IL_01ca;
		}
	}
	{
		goto IL_0284;
	}

IL_00f4:
	{
		String_t* L_23 = V_1;
		bool L_24;
		L_24 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_23, _stringLiteral062DB096C728515E033CF8C48A1C1F0B9A79384B, NULL);
		if (L_24)
		{
			goto IL_01e1;
		}
	}
	{
		goto IL_0284;
	}

IL_0109:
	{
		String_t* L_25 = V_1;
		bool L_26;
		L_26 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_25, _stringLiteral8C6F88DEE0DFE3513BB8B44A8CF0FEE437F4EFFB, NULL);
		if (L_26)
		{
			goto IL_01f8;
		}
	}
	{
		goto IL_0284;
	}

IL_011e:
	{
		String_t* L_27 = V_1;
		bool L_28;
		L_28 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_27, _stringLiteral9384C6EF2DA5C0BD5274A0DACFF291D0ABBFD8B1, NULL);
		if (L_28)
		{
			goto IL_020c;
		}
	}
	{
		goto IL_0284;
	}

IL_0133:
	{
		String_t* L_29 = V_1;
		bool L_30;
		L_30 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_29, _stringLiteral9E61658953B4F9BB4A05E3D2D2BC18990BADE934, NULL);
		if (L_30)
		{
			goto IL_0220;
		}
	}
	{
		goto IL_0284;
	}

IL_0148:
	{
		String_t* L_31 = V_1;
		bool L_32;
		L_32 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_31, _stringLiteral9CE1604D659135925CCC4DD1F526AFFE42E689F1, NULL);
		if (L_32)
		{
			goto IL_0234;
		}
	}
	{
		goto IL_0284;
	}

IL_015d:
	{
		String_t* L_33 = V_1;
		bool L_34;
		L_34 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_33, _stringLiteral2F8690361553406965679AEF125F896BC5FC61F5, NULL);
		if (L_34)
		{
			goto IL_0248;
		}
	}
	{
		goto IL_0284;
	}

IL_0172:
	{
		String_t* L_35 = V_1;
		bool L_36;
		L_36 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_35, _stringLiteral1B024D537329B86AB0DF96B2A714180F442F53E9, NULL);
		if (L_36)
		{
			goto IL_025c;
		}
	}
	{
		goto IL_0284;
	}

IL_0187:
	{
		String_t* L_37 = V_1;
		bool L_38;
		L_38 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_37, _stringLiteral4845015737DC41475709911228278216EE4DC3AF, NULL);
		if (L_38)
		{
			goto IL_0270;
		}
	}
	{
		goto IL_0284;
	}

IL_019c:
	{
		// instance.enabled = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_39 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_40 = ((ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_39);
		bool L_41;
		L_41 = GenericVirtualFuncInvoker1< bool, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mFFB70EE53D8CD0255A4E599780F62A3EB1520E83_RuntimeMethod_var, L_39, L_40);
		SizeBySpeedModule_set_enabled_m1DFF0FEFF522C52D874173B6CDAAEE94F9E8B718((&V_0), L_41, NULL);
		// break;
		goto IL_028a;
	}

IL_01b3:
	{
		// instance.size = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_42 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_43 = ((ES3Type_MinMaxCurve_t1C147718750ACBECE5D2B7F545D2A434A3C5409B_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t1C147718750ACBECE5D2B7F545D2A434A3C5409B_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_42);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_44;
		L_44 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_m9D6B4042B923127DEA4A2CAA3E35EED37D75B3D0_RuntimeMethod_var, L_42, L_43);
		SizeBySpeedModule_set_size_mD906BB6EAE9613DDA6F623E4D4878D69ECB90729((&V_0), L_44, NULL);
		// break;
		goto IL_028a;
	}

IL_01ca:
	{
		// instance.sizeMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_45 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_46 = ((ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_45);
		float L_47;
		L_47 = GenericVirtualFuncInvoker1< float, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mA86928BC888E342D2C2644535E3399952F5077ED_RuntimeMethod_var, L_45, L_46);
		SizeBySpeedModule_set_sizeMultiplier_mAFACCF6252B8FB92DC3A51BCE11D22126B315901((&V_0), L_47, NULL);
		// break;
		goto IL_028a;
	}

IL_01e1:
	{
		// instance.x = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_48 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_49 = ((ES3Type_MinMaxCurve_t1C147718750ACBECE5D2B7F545D2A434A3C5409B_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t1C147718750ACBECE5D2B7F545D2A434A3C5409B_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_48);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_50;
		L_50 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_m9D6B4042B923127DEA4A2CAA3E35EED37D75B3D0_RuntimeMethod_var, L_48, L_49);
		SizeBySpeedModule_set_x_mED5B851A688588F171B38AF31B0CC91A003DA164((&V_0), L_50, NULL);
		// break;
		goto IL_028a;
	}

IL_01f8:
	{
		// instance.xMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_51 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_52 = ((ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_51);
		float L_53;
		L_53 = GenericVirtualFuncInvoker1< float, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mA86928BC888E342D2C2644535E3399952F5077ED_RuntimeMethod_var, L_51, L_52);
		SizeBySpeedModule_set_xMultiplier_m1803C7585C7DA6333FB4B3595EAD753FFD8ED32A((&V_0), L_53, NULL);
		// break;
		goto IL_028a;
	}

IL_020c:
	{
		// instance.y = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_54 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_55 = ((ES3Type_MinMaxCurve_t1C147718750ACBECE5D2B7F545D2A434A3C5409B_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t1C147718750ACBECE5D2B7F545D2A434A3C5409B_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_54);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_56;
		L_56 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_m9D6B4042B923127DEA4A2CAA3E35EED37D75B3D0_RuntimeMethod_var, L_54, L_55);
		SizeBySpeedModule_set_y_m1E9DE959AFA22DE52D24537108BD41B2D4B017E6((&V_0), L_56, NULL);
		// break;
		goto IL_028a;
	}

IL_0220:
	{
		// instance.yMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_57 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_58 = ((ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_57);
		float L_59;
		L_59 = GenericVirtualFuncInvoker1< float, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mA86928BC888E342D2C2644535E3399952F5077ED_RuntimeMethod_var, L_57, L_58);
		SizeBySpeedModule_set_yMultiplier_m4C9EE0927456366AC12C17543E95BAB3201C9DCB((&V_0), L_59, NULL);
		// break;
		goto IL_028a;
	}

IL_0234:
	{
		// instance.z = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_60 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_61 = ((ES3Type_MinMaxCurve_t1C147718750ACBECE5D2B7F545D2A434A3C5409B_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t1C147718750ACBECE5D2B7F545D2A434A3C5409B_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_60);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_62;
		L_62 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_m9D6B4042B923127DEA4A2CAA3E35EED37D75B3D0_RuntimeMethod_var, L_60, L_61);
		SizeBySpeedModule_set_z_m73C05D968B5C62551614E86A77AEF557F15734A3((&V_0), L_62, NULL);
		// break;
		goto IL_028a;
	}

IL_0248:
	{
		// instance.zMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_63 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_64 = ((ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_63);
		float L_65;
		L_65 = GenericVirtualFuncInvoker1< float, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mA86928BC888E342D2C2644535E3399952F5077ED_RuntimeMethod_var, L_63, L_64);
		SizeBySpeedModule_set_zMultiplier_m0B67A4AF3E30D31C14DBD5FAAA3EABFB787D9826((&V_0), L_65, NULL);
		// break;
		goto IL_028a;
	}

IL_025c:
	{
		// instance.separateAxes = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_66 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_67 = ((ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_66);
		bool L_68;
		L_68 = GenericVirtualFuncInvoker1< bool, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mFFB70EE53D8CD0255A4E599780F62A3EB1520E83_RuntimeMethod_var, L_66, L_67);
		SizeBySpeedModule_set_separateAxes_m5B0BA28A01D7FED6FDDA0267135B5EAE1F9C72C7((&V_0), L_68, NULL);
		// break;
		goto IL_028a;
	}

IL_0270:
	{
		// instance.range = reader.Read<UnityEngine.Vector2>(ES3Type_Vector2.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_69 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_70 = ((ES3Type_Vector2_tB51CE4B1AFCBAFE7ADC540050621735C4F8D4387_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Vector2_tB51CE4B1AFCBAFE7ADC540050621735C4F8D4387_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_69);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_71;
		L_71 = GenericVirtualFuncInvoker1< Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_m95B09869E3B912BD36BC3571D842BA21C71EB14B_RuntimeMethod_var, L_69, L_70);
		SizeBySpeedModule_set_range_m76B9B316654E44D6938A4A06DED0DF8B3CBCE4D7((&V_0), L_71, NULL);
		// break;
		goto IL_028a;
	}

IL_0284:
	{
		// reader.Skip();
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_72 = ___reader0;
		NullCheck(L_72);
		VirtualActionInvoker0::Invoke(41 /* System.Void ES3Reader::Skip() */, L_72);
	}

IL_028a:
	{
		// while((propertyName = reader.ReadPropertyName()) != null)
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_73 = ___reader0;
		NullCheck(L_73);
		String_t* L_74;
		L_74 = VirtualFuncInvoker0< String_t* >::Invoke(21 /* System.String ES3Reader::ReadPropertyName() */, L_73);
		String_t* L_75 = L_74;
		V_1 = L_75;
		if (L_75)
		{
			goto IL_000c;
		}
	}
	{
		// }
		return;
	}
}
// System.Void ES3Types.ES3Type_SizeBySpeedModule::ReadInto<UnityEngine.ParticleSystem/EmissionModule>(ES3Reader,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ES3Type_SizeBySpeedModule_ReadInto_TisEmissionModule_t0F469FA4A08003F6D9C610D2F716A9DFDB9A3678_mCDEF25A21C162492550ECE20CE9108D84B35FAB0_gshared (ES3Type_SizeBySpeedModule_t2A3358BE9F6111ED907A0D4CA428148A73CD7601* __this, ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* ___reader0, RuntimeObject* ___obj1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mFFB70EE53D8CD0255A4E599780F62A3EB1520E83_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_m9D6B4042B923127DEA4A2CAA3E35EED37D75B3D0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mA86928BC888E342D2C2644535E3399952F5077ED_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_m95B09869E3B912BD36BC3571D842BA21C71EB14B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_MinMaxCurve_t1C147718750ACBECE5D2B7F545D2A434A3C5409B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_Vector2_tB51CE4B1AFCBAFE7ADC540050621735C4F8D4387_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SizeBySpeedModule_t73995CB54A0D1B06BA100EA77972D37CDF7B4DC4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral062DB096C728515E033CF8C48A1C1F0B9A79384B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1B024D537329B86AB0DF96B2A714180F442F53E9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2F8690361553406965679AEF125F896BC5FC61F5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3EE5A4671A4E5AEBD31CA5F013A7773DC18ED22B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4845015737DC41475709911228278216EE4DC3AF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8C6F88DEE0DFE3513BB8B44A8CF0FEE437F4EFFB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9384C6EF2DA5C0BD5274A0DACFF291D0ABBFD8B1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9CE1604D659135925CCC4DD1F526AFFE42E689F1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9E61658953B4F9BB4A05E3D2D2BC18990BADE934);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBD0DD0004699EF86BF0FC1D161FA3766AF5126C4);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B);
		s_Il2CppMethodInitialized = true;
	}
	SizeBySpeedModule_t73995CB54A0D1B06BA100EA77972D37CDF7B4DC4 V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	uint32_t V_2 = 0;
	{
		// var instance = (UnityEngine.ParticleSystem.SizeBySpeedModule)obj;
		RuntimeObject* L_0 = ___obj1;
		V_0 = ((*(SizeBySpeedModule_t73995CB54A0D1B06BA100EA77972D37CDF7B4DC4*)((SizeBySpeedModule_t73995CB54A0D1B06BA100EA77972D37CDF7B4DC4*)(SizeBySpeedModule_t73995CB54A0D1B06BA100EA77972D37CDF7B4DC4*)UnBox(L_0, SizeBySpeedModule_t73995CB54A0D1B06BA100EA77972D37CDF7B4DC4_il2cpp_TypeInfo_var))));
		goto IL_028a;
	}

IL_000c:
	{
		String_t* L_1 = V_1;
		uint32_t L_2;
		L_2 = U3CPrivateImplementationDetailsU3E_ComputeStringHash_m9E43873DE0DF480D27EC1C2AA3C09E74EA77F75D(L_1, NULL);
		V_2 = L_2;
		uint32_t L_3 = V_2;
		if ((!(((uint32_t)L_3) <= ((uint32_t)((int32_t)1479031685)))))
		{
			goto IL_0064;
		}
	}
	{
		uint32_t L_4 = V_2;
		if ((!(((uint32_t)L_4) <= ((uint32_t)((int32_t)597743964)))))
		{
			goto IL_003e;
		}
	}
	{
		uint32_t L_5 = V_2;
		if ((((int32_t)L_5) == ((int32_t)((int32_t)49525662))))
		{
			goto IL_00b5;
		}
	}
	{
		uint32_t L_6 = V_2;
		if ((((int32_t)L_6) == ((int32_t)((int32_t)597743964))))
		{
			goto IL_00ca;
		}
	}
	{
		goto IL_0284;
	}

IL_003e:
	{
		uint32_t L_7 = V_2;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)726266686))))
		{
			goto IL_015d;
		}
	}
	{
		uint32_t L_8 = V_2;
		if ((((int32_t)L_8) == ((int32_t)((int32_t)1105436259))))
		{
			goto IL_00df;
		}
	}
	{
		uint32_t L_9 = V_2;
		if ((((int32_t)L_9) == ((int32_t)((int32_t)1479031685))))
		{
			goto IL_0172;
		}
	}
	{
		goto IL_0284;
	}

IL_0064:
	{
		uint32_t L_10 = V_2;
		if ((!(((uint32_t)L_10) <= ((uint32_t)((int32_t)-86242094)))))
		{
			goto IL_0092;
		}
	}
	{
		uint32_t L_11 = V_2;
		if ((((int32_t)L_11) == ((int32_t)((int32_t)-1013869429))))
		{
			goto IL_0133;
		}
	}
	{
		uint32_t L_12 = V_2;
		if ((((int32_t)L_12) == ((int32_t)((int32_t)-585050980))))
		{
			goto IL_0109;
		}
	}
	{
		uint32_t L_13 = V_2;
		if ((((int32_t)L_13) == ((int32_t)((int32_t)-86242094))))
		{
			goto IL_0187;
		}
	}
	{
		goto IL_0284;
	}

IL_0092:
	{
		uint32_t L_14 = V_2;
		if ((((int32_t)L_14) == ((int32_t)((int32_t)-66302220))))
		{
			goto IL_011e;
		}
	}
	{
		uint32_t L_15 = V_2;
		if ((((int32_t)L_15) == ((int32_t)((int32_t)-49524601))))
		{
			goto IL_00f4;
		}
	}
	{
		uint32_t L_16 = V_2;
		if ((((int32_t)L_16) == ((int32_t)((int32_t)-15969363))))
		{
			goto IL_0148;
		}
	}
	{
		goto IL_0284;
	}

IL_00b5:
	{
		String_t* L_17 = V_1;
		bool L_18;
		L_18 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_17, _stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B, NULL);
		if (L_18)
		{
			goto IL_019c;
		}
	}
	{
		goto IL_0284;
	}

IL_00ca:
	{
		String_t* L_19 = V_1;
		bool L_20;
		L_20 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_19, _stringLiteral3EE5A4671A4E5AEBD31CA5F013A7773DC18ED22B, NULL);
		if (L_20)
		{
			goto IL_01b3;
		}
	}
	{
		goto IL_0284;
	}

IL_00df:
	{
		String_t* L_21 = V_1;
		bool L_22;
		L_22 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_21, _stringLiteralBD0DD0004699EF86BF0FC1D161FA3766AF5126C4, NULL);
		if (L_22)
		{
			goto IL_01ca;
		}
	}
	{
		goto IL_0284;
	}

IL_00f4:
	{
		String_t* L_23 = V_1;
		bool L_24;
		L_24 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_23, _stringLiteral062DB096C728515E033CF8C48A1C1F0B9A79384B, NULL);
		if (L_24)
		{
			goto IL_01e1;
		}
	}
	{
		goto IL_0284;
	}

IL_0109:
	{
		String_t* L_25 = V_1;
		bool L_26;
		L_26 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_25, _stringLiteral8C6F88DEE0DFE3513BB8B44A8CF0FEE437F4EFFB, NULL);
		if (L_26)
		{
			goto IL_01f8;
		}
	}
	{
		goto IL_0284;
	}

IL_011e:
	{
		String_t* L_27 = V_1;
		bool L_28;
		L_28 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_27, _stringLiteral9384C6EF2DA5C0BD5274A0DACFF291D0ABBFD8B1, NULL);
		if (L_28)
		{
			goto IL_020c;
		}
	}
	{
		goto IL_0284;
	}

IL_0133:
	{
		String_t* L_29 = V_1;
		bool L_30;
		L_30 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_29, _stringLiteral9E61658953B4F9BB4A05E3D2D2BC18990BADE934, NULL);
		if (L_30)
		{
			goto IL_0220;
		}
	}
	{
		goto IL_0284;
	}

IL_0148:
	{
		String_t* L_31 = V_1;
		bool L_32;
		L_32 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_31, _stringLiteral9CE1604D659135925CCC4DD1F526AFFE42E689F1, NULL);
		if (L_32)
		{
			goto IL_0234;
		}
	}
	{
		goto IL_0284;
	}

IL_015d:
	{
		String_t* L_33 = V_1;
		bool L_34;
		L_34 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_33, _stringLiteral2F8690361553406965679AEF125F896BC5FC61F5, NULL);
		if (L_34)
		{
			goto IL_0248;
		}
	}
	{
		goto IL_0284;
	}

IL_0172:
	{
		String_t* L_35 = V_1;
		bool L_36;
		L_36 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_35, _stringLiteral1B024D537329B86AB0DF96B2A714180F442F53E9, NULL);
		if (L_36)
		{
			goto IL_025c;
		}
	}
	{
		goto IL_0284;
	}

IL_0187:
	{
		String_t* L_37 = V_1;
		bool L_38;
		L_38 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_37, _stringLiteral4845015737DC41475709911228278216EE4DC3AF, NULL);
		if (L_38)
		{
			goto IL_0270;
		}
	}
	{
		goto IL_0284;
	}

IL_019c:
	{
		// instance.enabled = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_39 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_40 = ((ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_39);
		bool L_41;
		L_41 = GenericVirtualFuncInvoker1< bool, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mFFB70EE53D8CD0255A4E599780F62A3EB1520E83_RuntimeMethod_var, L_39, L_40);
		SizeBySpeedModule_set_enabled_m1DFF0FEFF522C52D874173B6CDAAEE94F9E8B718((&V_0), L_41, NULL);
		// break;
		goto IL_028a;
	}

IL_01b3:
	{
		// instance.size = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_42 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_43 = ((ES3Type_MinMaxCurve_t1C147718750ACBECE5D2B7F545D2A434A3C5409B_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t1C147718750ACBECE5D2B7F545D2A434A3C5409B_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_42);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_44;
		L_44 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_m9D6B4042B923127DEA4A2CAA3E35EED37D75B3D0_RuntimeMethod_var, L_42, L_43);
		SizeBySpeedModule_set_size_mD906BB6EAE9613DDA6F623E4D4878D69ECB90729((&V_0), L_44, NULL);
		// break;
		goto IL_028a;
	}

IL_01ca:
	{
		// instance.sizeMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_45 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_46 = ((ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_45);
		float L_47;
		L_47 = GenericVirtualFuncInvoker1< float, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mA86928BC888E342D2C2644535E3399952F5077ED_RuntimeMethod_var, L_45, L_46);
		SizeBySpeedModule_set_sizeMultiplier_mAFACCF6252B8FB92DC3A51BCE11D22126B315901((&V_0), L_47, NULL);
		// break;
		goto IL_028a;
	}

IL_01e1:
	{
		// instance.x = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_48 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_49 = ((ES3Type_MinMaxCurve_t1C147718750ACBECE5D2B7F545D2A434A3C5409B_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t1C147718750ACBECE5D2B7F545D2A434A3C5409B_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_48);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_50;
		L_50 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_m9D6B4042B923127DEA4A2CAA3E35EED37D75B3D0_RuntimeMethod_var, L_48, L_49);
		SizeBySpeedModule_set_x_mED5B851A688588F171B38AF31B0CC91A003DA164((&V_0), L_50, NULL);
		// break;
		goto IL_028a;
	}

IL_01f8:
	{
		// instance.xMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_51 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_52 = ((ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_51);
		float L_53;
		L_53 = GenericVirtualFuncInvoker1< float, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mA86928BC888E342D2C2644535E3399952F5077ED_RuntimeMethod_var, L_51, L_52);
		SizeBySpeedModule_set_xMultiplier_m1803C7585C7DA6333FB4B3595EAD753FFD8ED32A((&V_0), L_53, NULL);
		// break;
		goto IL_028a;
	}

IL_020c:
	{
		// instance.y = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_54 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_55 = ((ES3Type_MinMaxCurve_t1C147718750ACBECE5D2B7F545D2A434A3C5409B_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t1C147718750ACBECE5D2B7F545D2A434A3C5409B_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_54);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_56;
		L_56 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_m9D6B4042B923127DEA4A2CAA3E35EED37D75B3D0_RuntimeMethod_var, L_54, L_55);
		SizeBySpeedModule_set_y_m1E9DE959AFA22DE52D24537108BD41B2D4B017E6((&V_0), L_56, NULL);
		// break;
		goto IL_028a;
	}

IL_0220:
	{
		// instance.yMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_57 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_58 = ((ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_57);
		float L_59;
		L_59 = GenericVirtualFuncInvoker1< float, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mA86928BC888E342D2C2644535E3399952F5077ED_RuntimeMethod_var, L_57, L_58);
		SizeBySpeedModule_set_yMultiplier_m4C9EE0927456366AC12C17543E95BAB3201C9DCB((&V_0), L_59, NULL);
		// break;
		goto IL_028a;
	}

IL_0234:
	{
		// instance.z = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_60 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_61 = ((ES3Type_MinMaxCurve_t1C147718750ACBECE5D2B7F545D2A434A3C5409B_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t1C147718750ACBECE5D2B7F545D2A434A3C5409B_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_60);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_62;
		L_62 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_m9D6B4042B923127DEA4A2CAA3E35EED37D75B3D0_RuntimeMethod_var, L_60, L_61);
		SizeBySpeedModule_set_z_m73C05D968B5C62551614E86A77AEF557F15734A3((&V_0), L_62, NULL);
		// break;
		goto IL_028a;
	}

IL_0248:
	{
		// instance.zMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_63 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_64 = ((ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_63);
		float L_65;
		L_65 = GenericVirtualFuncInvoker1< float, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mA86928BC888E342D2C2644535E3399952F5077ED_RuntimeMethod_var, L_63, L_64);
		SizeBySpeedModule_set_zMultiplier_m0B67A4AF3E30D31C14DBD5FAAA3EABFB787D9826((&V_0), L_65, NULL);
		// break;
		goto IL_028a;
	}

IL_025c:
	{
		// instance.separateAxes = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_66 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_67 = ((ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_66);
		bool L_68;
		L_68 = GenericVirtualFuncInvoker1< bool, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mFFB70EE53D8CD0255A4E599780F62A3EB1520E83_RuntimeMethod_var, L_66, L_67);
		SizeBySpeedModule_set_separateAxes_m5B0BA28A01D7FED6FDDA0267135B5EAE1F9C72C7((&V_0), L_68, NULL);
		// break;
		goto IL_028a;
	}

IL_0270:
	{
		// instance.range = reader.Read<UnityEngine.Vector2>(ES3Type_Vector2.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_69 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_70 = ((ES3Type_Vector2_tB51CE4B1AFCBAFE7ADC540050621735C4F8D4387_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Vector2_tB51CE4B1AFCBAFE7ADC540050621735C4F8D4387_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_69);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_71;
		L_71 = GenericVirtualFuncInvoker1< Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_m95B09869E3B912BD36BC3571D842BA21C71EB14B_RuntimeMethod_var, L_69, L_70);
		SizeBySpeedModule_set_range_m76B9B316654E44D6938A4A06DED0DF8B3CBCE4D7((&V_0), L_71, NULL);
		// break;
		goto IL_028a;
	}

IL_0284:
	{
		// reader.Skip();
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_72 = ___reader0;
		NullCheck(L_72);
		VirtualActionInvoker0::Invoke(41 /* System.Void ES3Reader::Skip() */, L_72);
	}

IL_028a:
	{
		// while((propertyName = reader.ReadPropertyName()) != null)
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_73 = ___reader0;
		NullCheck(L_73);
		String_t* L_74;
		L_74 = VirtualFuncInvoker0< String_t* >::Invoke(21 /* System.String ES3Reader::ReadPropertyName() */, L_73);
		String_t* L_75 = L_74;
		V_1 = L_75;
		if (L_75)
		{
			goto IL_000c;
		}
	}
	{
		// }
		return;
	}
}
// System.Void ES3Types.ES3Type_SizeBySpeedModule::ReadInto<UnityEngine.ParticleSystem/ExternalForcesModule>(ES3Reader,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ES3Type_SizeBySpeedModule_ReadInto_TisExternalForcesModule_t4494E21ECF96F072432EF4DDC5F84BAF84912FC7_m3D6844968CBD3FEF6A8548031353320C36A58DA2_gshared (ES3Type_SizeBySpeedModule_t2A3358BE9F6111ED907A0D4CA428148A73CD7601* __this, ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* ___reader0, RuntimeObject* ___obj1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mFFB70EE53D8CD0255A4E599780F62A3EB1520E83_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_m9D6B4042B923127DEA4A2CAA3E35EED37D75B3D0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mA86928BC888E342D2C2644535E3399952F5077ED_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_m95B09869E3B912BD36BC3571D842BA21C71EB14B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_MinMaxCurve_t1C147718750ACBECE5D2B7F545D2A434A3C5409B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_Vector2_tB51CE4B1AFCBAFE7ADC540050621735C4F8D4387_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SizeBySpeedModule_t73995CB54A0D1B06BA100EA77972D37CDF7B4DC4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral062DB096C728515E033CF8C48A1C1F0B9A79384B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1B024D537329B86AB0DF96B2A714180F442F53E9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2F8690361553406965679AEF125F896BC5FC61F5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3EE5A4671A4E5AEBD31CA5F013A7773DC18ED22B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4845015737DC41475709911228278216EE4DC3AF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8C6F88DEE0DFE3513BB8B44A8CF0FEE437F4EFFB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9384C6EF2DA5C0BD5274A0DACFF291D0ABBFD8B1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9CE1604D659135925CCC4DD1F526AFFE42E689F1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9E61658953B4F9BB4A05E3D2D2BC18990BADE934);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBD0DD0004699EF86BF0FC1D161FA3766AF5126C4);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B);
		s_Il2CppMethodInitialized = true;
	}
	SizeBySpeedModule_t73995CB54A0D1B06BA100EA77972D37CDF7B4DC4 V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	uint32_t V_2 = 0;
	{
		// var instance = (UnityEngine.ParticleSystem.SizeBySpeedModule)obj;
		RuntimeObject* L_0 = ___obj1;
		V_0 = ((*(SizeBySpeedModule_t73995CB54A0D1B06BA100EA77972D37CDF7B4DC4*)((SizeBySpeedModule_t73995CB54A0D1B06BA100EA77972D37CDF7B4DC4*)(SizeBySpeedModule_t73995CB54A0D1B06BA100EA77972D37CDF7B4DC4*)UnBox(L_0, SizeBySpeedModule_t73995CB54A0D1B06BA100EA77972D37CDF7B4DC4_il2cpp_TypeInfo_var))));
		goto IL_028a;
	}

IL_000c:
	{
		String_t* L_1 = V_1;
		uint32_t L_2;
		L_2 = U3CPrivateImplementationDetailsU3E_ComputeStringHash_m9E43873DE0DF480D27EC1C2AA3C09E74EA77F75D(L_1, NULL);
		V_2 = L_2;
		uint32_t L_3 = V_2;
		if ((!(((uint32_t)L_3) <= ((uint32_t)((int32_t)1479031685)))))
		{
			goto IL_0064;
		}
	}
	{
		uint32_t L_4 = V_2;
		if ((!(((uint32_t)L_4) <= ((uint32_t)((int32_t)597743964)))))
		{
			goto IL_003e;
		}
	}
	{
		uint32_t L_5 = V_2;
		if ((((int32_t)L_5) == ((int32_t)((int32_t)49525662))))
		{
			goto IL_00b5;
		}
	}
	{
		uint32_t L_6 = V_2;
		if ((((int32_t)L_6) == ((int32_t)((int32_t)597743964))))
		{
			goto IL_00ca;
		}
	}
	{
		goto IL_0284;
	}

IL_003e:
	{
		uint32_t L_7 = V_2;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)726266686))))
		{
			goto IL_015d;
		}
	}
	{
		uint32_t L_8 = V_2;
		if ((((int32_t)L_8) == ((int32_t)((int32_t)1105436259))))
		{
			goto IL_00df;
		}
	}
	{
		uint32_t L_9 = V_2;
		if ((((int32_t)L_9) == ((int32_t)((int32_t)1479031685))))
		{
			goto IL_0172;
		}
	}
	{
		goto IL_0284;
	}

IL_0064:
	{
		uint32_t L_10 = V_2;
		if ((!(((uint32_t)L_10) <= ((uint32_t)((int32_t)-86242094)))))
		{
			goto IL_0092;
		}
	}
	{
		uint32_t L_11 = V_2;
		if ((((int32_t)L_11) == ((int32_t)((int32_t)-1013869429))))
		{
			goto IL_0133;
		}
	}
	{
		uint32_t L_12 = V_2;
		if ((((int32_t)L_12) == ((int32_t)((int32_t)-585050980))))
		{
			goto IL_0109;
		}
	}
	{
		uint32_t L_13 = V_2;
		if ((((int32_t)L_13) == ((int32_t)((int32_t)-86242094))))
		{
			goto IL_0187;
		}
	}
	{
		goto IL_0284;
	}

IL_0092:
	{
		uint32_t L_14 = V_2;
		if ((((int32_t)L_14) == ((int32_t)((int32_t)-66302220))))
		{
			goto IL_011e;
		}
	}
	{
		uint32_t L_15 = V_2;
		if ((((int32_t)L_15) == ((int32_t)((int32_t)-49524601))))
		{
			goto IL_00f4;
		}
	}
	{
		uint32_t L_16 = V_2;
		if ((((int32_t)L_16) == ((int32_t)((int32_t)-15969363))))
		{
			goto IL_0148;
		}
	}
	{
		goto IL_0284;
	}

IL_00b5:
	{
		String_t* L_17 = V_1;
		bool L_18;
		L_18 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_17, _stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B, NULL);
		if (L_18)
		{
			goto IL_019c;
		}
	}
	{
		goto IL_0284;
	}

IL_00ca:
	{
		String_t* L_19 = V_1;
		bool L_20;
		L_20 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_19, _stringLiteral3EE5A4671A4E5AEBD31CA5F013A7773DC18ED22B, NULL);
		if (L_20)
		{
			goto IL_01b3;
		}
	}
	{
		goto IL_0284;
	}

IL_00df:
	{
		String_t* L_21 = V_1;
		bool L_22;
		L_22 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_21, _stringLiteralBD0DD0004699EF86BF0FC1D161FA3766AF5126C4, NULL);
		if (L_22)
		{
			goto IL_01ca;
		}
	}
	{
		goto IL_0284;
	}

IL_00f4:
	{
		String_t* L_23 = V_1;
		bool L_24;
		L_24 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_23, _stringLiteral062DB096C728515E033CF8C48A1C1F0B9A79384B, NULL);
		if (L_24)
		{
			goto IL_01e1;
		}
	}
	{
		goto IL_0284;
	}

IL_0109:
	{
		String_t* L_25 = V_1;
		bool L_26;
		L_26 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_25, _stringLiteral8C6F88DEE0DFE3513BB8B44A8CF0FEE437F4EFFB, NULL);
		if (L_26)
		{
			goto IL_01f8;
		}
	}
	{
		goto IL_0284;
	}

IL_011e:
	{
		String_t* L_27 = V_1;
		bool L_28;
		L_28 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_27, _stringLiteral9384C6EF2DA5C0BD5274A0DACFF291D0ABBFD8B1, NULL);
		if (L_28)
		{
			goto IL_020c;
		}
	}
	{
		goto IL_0284;
	}

IL_0133:
	{
		String_t* L_29 = V_1;
		bool L_30;
		L_30 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_29, _stringLiteral9E61658953B4F9BB4A05E3D2D2BC18990BADE934, NULL);
		if (L_30)
		{
			goto IL_0220;
		}
	}
	{
		goto IL_0284;
	}

IL_0148:
	{
		String_t* L_31 = V_1;
		bool L_32;
		L_32 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_31, _stringLiteral9CE1604D659135925CCC4DD1F526AFFE42E689F1, NULL);
		if (L_32)
		{
			goto IL_0234;
		}
	}
	{
		goto IL_0284;
	}

IL_015d:
	{
		String_t* L_33 = V_1;
		bool L_34;
		L_34 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_33, _stringLiteral2F8690361553406965679AEF125F896BC5FC61F5, NULL);
		if (L_34)
		{
			goto IL_0248;
		}
	}
	{
		goto IL_0284;
	}

IL_0172:
	{
		String_t* L_35 = V_1;
		bool L_36;
		L_36 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_35, _stringLiteral1B024D537329B86AB0DF96B2A714180F442F53E9, NULL);
		if (L_36)
		{
			goto IL_025c;
		}
	}
	{
		goto IL_0284;
	}

IL_0187:
	{
		String_t* L_37 = V_1;
		bool L_38;
		L_38 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_37, _stringLiteral4845015737DC41475709911228278216EE4DC3AF, NULL);
		if (L_38)
		{
			goto IL_0270;
		}
	}
	{
		goto IL_0284;
	}

IL_019c:
	{
		// instance.enabled = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_39 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_40 = ((ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_39);
		bool L_41;
		L_41 = GenericVirtualFuncInvoker1< bool, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mFFB70EE53D8CD0255A4E599780F62A3EB1520E83_RuntimeMethod_var, L_39, L_40);
		SizeBySpeedModule_set_enabled_m1DFF0FEFF522C52D874173B6CDAAEE94F9E8B718((&V_0), L_41, NULL);
		// break;
		goto IL_028a;
	}

IL_01b3:
	{
		// instance.size = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_42 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_43 = ((ES3Type_MinMaxCurve_t1C147718750ACBECE5D2B7F545D2A434A3C5409B_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t1C147718750ACBECE5D2B7F545D2A434A3C5409B_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_42);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_44;
		L_44 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_m9D6B4042B923127DEA4A2CAA3E35EED37D75B3D0_RuntimeMethod_var, L_42, L_43);
		SizeBySpeedModule_set_size_mD906BB6EAE9613DDA6F623E4D4878D69ECB90729((&V_0), L_44, NULL);
		// break;
		goto IL_028a;
	}

IL_01ca:
	{
		// instance.sizeMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_45 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_46 = ((ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_45);
		float L_47;
		L_47 = GenericVirtualFuncInvoker1< float, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mA86928BC888E342D2C2644535E3399952F5077ED_RuntimeMethod_var, L_45, L_46);
		SizeBySpeedModule_set_sizeMultiplier_mAFACCF6252B8FB92DC3A51BCE11D22126B315901((&V_0), L_47, NULL);
		// break;
		goto IL_028a;
	}

IL_01e1:
	{
		// instance.x = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_48 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_49 = ((ES3Type_MinMaxCurve_t1C147718750ACBECE5D2B7F545D2A434A3C5409B_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t1C147718750ACBECE5D2B7F545D2A434A3C5409B_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_48);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_50;
		L_50 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_m9D6B4042B923127DEA4A2CAA3E35EED37D75B3D0_RuntimeMethod_var, L_48, L_49);
		SizeBySpeedModule_set_x_mED5B851A688588F171B38AF31B0CC91A003DA164((&V_0), L_50, NULL);
		// break;
		goto IL_028a;
	}

IL_01f8:
	{
		// instance.xMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_51 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_52 = ((ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_51);
		float L_53;
		L_53 = GenericVirtualFuncInvoker1< float, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mA86928BC888E342D2C2644535E3399952F5077ED_RuntimeMethod_var, L_51, L_52);
		SizeBySpeedModule_set_xMultiplier_m1803C7585C7DA6333FB4B3595EAD753FFD8ED32A((&V_0), L_53, NULL);
		// break;
		goto IL_028a;
	}

IL_020c:
	{
		// instance.y = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_54 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_55 = ((ES3Type_MinMaxCurve_t1C147718750ACBECE5D2B7F545D2A434A3C5409B_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t1C147718750ACBECE5D2B7F545D2A434A3C5409B_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_54);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_56;
		L_56 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_m9D6B4042B923127DEA4A2CAA3E35EED37D75B3D0_RuntimeMethod_var, L_54, L_55);
		SizeBySpeedModule_set_y_m1E9DE959AFA22DE52D24537108BD41B2D4B017E6((&V_0), L_56, NULL);
		// break;
		goto IL_028a;
	}

IL_0220:
	{
		// instance.yMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_57 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_58 = ((ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_57);
		float L_59;
		L_59 = GenericVirtualFuncInvoker1< float, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mA86928BC888E342D2C2644535E3399952F5077ED_RuntimeMethod_var, L_57, L_58);
		SizeBySpeedModule_set_yMultiplier_m4C9EE0927456366AC12C17543E95BAB3201C9DCB((&V_0), L_59, NULL);
		// break;
		goto IL_028a;
	}

IL_0234:
	{
		// instance.z = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_60 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_61 = ((ES3Type_MinMaxCurve_t1C147718750ACBECE5D2B7F545D2A434A3C5409B_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t1C147718750ACBECE5D2B7F545D2A434A3C5409B_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_60);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_62;
		L_62 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_m9D6B4042B923127DEA4A2CAA3E35EED37D75B3D0_RuntimeMethod_var, L_60, L_61);
		SizeBySpeedModule_set_z_m73C05D968B5C62551614E86A77AEF557F15734A3((&V_0), L_62, NULL);
		// break;
		goto IL_028a;
	}

IL_0248:
	{
		// instance.zMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_63 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_64 = ((ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_63);
		float L_65;
		L_65 = GenericVirtualFuncInvoker1< float, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mA86928BC888E342D2C2644535E3399952F5077ED_RuntimeMethod_var, L_63, L_64);
		SizeBySpeedModule_set_zMultiplier_m0B67A4AF3E30D31C14DBD5FAAA3EABFB787D9826((&V_0), L_65, NULL);
		// break;
		goto IL_028a;
	}

IL_025c:
	{
		// instance.separateAxes = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_66 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_67 = ((ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_66);
		bool L_68;
		L_68 = GenericVirtualFuncInvoker1< bool, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mFFB70EE53D8CD0255A4E599780F62A3EB1520E83_RuntimeMethod_var, L_66, L_67);
		SizeBySpeedModule_set_separateAxes_m5B0BA28A01D7FED6FDDA0267135B5EAE1F9C72C7((&V_0), L_68, NULL);
		// break;
		goto IL_028a;
	}

IL_0270:
	{
		// instance.range = reader.Read<UnityEngine.Vector2>(ES3Type_Vector2.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_69 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_70 = ((ES3Type_Vector2_tB51CE4B1AFCBAFE7ADC540050621735C4F8D4387_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Vector2_tB51CE4B1AFCBAFE7ADC540050621735C4F8D4387_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_69);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_71;
		L_71 = GenericVirtualFuncInvoker1< Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_m95B09869E3B912BD36BC3571D842BA21C71EB14B_RuntimeMethod_var, L_69, L_70);
		SizeBySpeedModule_set_range_m76B9B316654E44D6938A4A06DED0DF8B3CBCE4D7((&V_0), L_71, NULL);
		// break;
		goto IL_028a;
	}

IL_0284:
	{
		// reader.Skip();
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_72 = ___reader0;
		NullCheck(L_72);
		VirtualActionInvoker0::Invoke(41 /* System.Void ES3Reader::Skip() */, L_72);
	}

IL_028a:
	{
		// while((propertyName = reader.ReadPropertyName()) != null)
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_73 = ___reader0;
		NullCheck(L_73);
		String_t* L_74;
		L_74 = VirtualFuncInvoker0< String_t* >::Invoke(21 /* System.String ES3Reader::ReadPropertyName() */, L_73);
		String_t* L_75 = L_74;
		V_1 = L_75;
		if (L_75)
		{
			goto IL_000c;
		}
	}
	{
		// }
		return;
	}
}
// System.Void ES3Types.ES3Type_SizeBySpeedModule::ReadInto<UnityEngine.ParticleSystem/ForceOverLifetimeModule>(ES3Reader,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ES3Type_SizeBySpeedModule_ReadInto_TisForceOverLifetimeModule_t4859776EAF945AEA86044CAB63CA7A8AC8C14976_m125CC3ED130EAEAD8486AD19F1EEBF290A2E215F_gshared (ES3Type_SizeBySpeedModule_t2A3358BE9F6111ED907A0D4CA428148A73CD7601* __this, ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* ___reader0, RuntimeObject* ___obj1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mFFB70EE53D8CD0255A4E599780F62A3EB1520E83_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_m9D6B4042B923127DEA4A2CAA3E35EED37D75B3D0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mA86928BC888E342D2C2644535E3399952F5077ED_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_m95B09869E3B912BD36BC3571D842BA21C71EB14B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_MinMaxCurve_t1C147718750ACBECE5D2B7F545D2A434A3C5409B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_Vector2_tB51CE4B1AFCBAFE7ADC540050621735C4F8D4387_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SizeBySpeedModule_t73995CB54A0D1B06BA100EA77972D37CDF7B4DC4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral062DB096C728515E033CF8C48A1C1F0B9A79384B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1B024D537329B86AB0DF96B2A714180F442F53E9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2F8690361553406965679AEF125F896BC5FC61F5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3EE5A4671A4E5AEBD31CA5F013A7773DC18ED22B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4845015737DC41475709911228278216EE4DC3AF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8C6F88DEE0DFE3513BB8B44A8CF0FEE437F4EFFB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9384C6EF2DA5C0BD5274A0DACFF291D0ABBFD8B1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9CE1604D659135925CCC4DD1F526AFFE42E689F1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9E61658953B4F9BB4A05E3D2D2BC18990BADE934);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBD0DD0004699EF86BF0FC1D161FA3766AF5126C4);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B);
		s_Il2CppMethodInitialized = true;
	}
	SizeBySpeedModule_t73995CB54A0D1B06BA100EA77972D37CDF7B4DC4 V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	uint32_t V_2 = 0;
	{
		// var instance = (UnityEngine.ParticleSystem.SizeBySpeedModule)obj;
		RuntimeObject* L_0 = ___obj1;
		V_0 = ((*(SizeBySpeedModule_t73995CB54A0D1B06BA100EA77972D37CDF7B4DC4*)((SizeBySpeedModule_t73995CB54A0D1B06BA100EA77972D37CDF7B4DC4*)(SizeBySpeedModule_t73995CB54A0D1B06BA100EA77972D37CDF7B4DC4*)UnBox(L_0, SizeBySpeedModule_t73995CB54A0D1B06BA100EA77972D37CDF7B4DC4_il2cpp_TypeInfo_var))));
		goto IL_028a;
	}

IL_000c:
	{
		String_t* L_1 = V_1;
		uint32_t L_2;
		L_2 = U3CPrivateImplementationDetailsU3E_ComputeStringHash_m9E43873DE0DF480D27EC1C2AA3C09E74EA77F75D(L_1, NULL);
		V_2 = L_2;
		uint32_t L_3 = V_2;
		if ((!(((uint32_t)L_3) <= ((uint32_t)((int32_t)1479031685)))))
		{
			goto IL_0064;
		}
	}
	{
		uint32_t L_4 = V_2;
		if ((!(((uint32_t)L_4) <= ((uint32_t)((int32_t)597743964)))))
		{
			goto IL_003e;
		}
	}
	{
		uint32_t L_5 = V_2;
		if ((((int32_t)L_5) == ((int32_t)((int32_t)49525662))))
		{
			goto IL_00b5;
		}
	}
	{
		uint32_t L_6 = V_2;
		if ((((int32_t)L_6) == ((int32_t)((int32_t)597743964))))
		{
			goto IL_00ca;
		}
	}
	{
		goto IL_0284;
	}

IL_003e:
	{
		uint32_t L_7 = V_2;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)726266686))))
		{
			goto IL_015d;
		}
	}
	{
		uint32_t L_8 = V_2;
		if ((((int32_t)L_8) == ((int32_t)((int32_t)1105436259))))
		{
			goto IL_00df;
		}
	}
	{
		uint32_t L_9 = V_2;
		if ((((int32_t)L_9) == ((int32_t)((int32_t)1479031685))))
		{
			goto IL_0172;
		}
	}
	{
		goto IL_0284;
	}

IL_0064:
	{
		uint32_t L_10 = V_2;
		if ((!(((uint32_t)L_10) <= ((uint32_t)((int32_t)-86242094)))))
		{
			goto IL_0092;
		}
	}
	{
		uint32_t L_11 = V_2;
		if ((((int32_t)L_11) == ((int32_t)((int32_t)-1013869429))))
		{
			goto IL_0133;
		}
	}
	{
		uint32_t L_12 = V_2;
		if ((((int32_t)L_12) == ((int32_t)((int32_t)-585050980))))
		{
			goto IL_0109;
		}
	}
	{
		uint32_t L_13 = V_2;
		if ((((int32_t)L_13) == ((int32_t)((int32_t)-86242094))))
		{
			goto IL_0187;
		}
	}
	{
		goto IL_0284;
	}

IL_0092:
	{
		uint32_t L_14 = V_2;
		if ((((int32_t)L_14) == ((int32_t)((int32_t)-66302220))))
		{
			goto IL_011e;
		}
	}
	{
		uint32_t L_15 = V_2;
		if ((((int32_t)L_15) == ((int32_t)((int32_t)-49524601))))
		{
			goto IL_00f4;
		}
	}
	{
		uint32_t L_16 = V_2;
		if ((((int32_t)L_16) == ((int32_t)((int32_t)-15969363))))
		{
			goto IL_0148;
		}
	}
	{
		goto IL_0284;
	}

IL_00b5:
	{
		String_t* L_17 = V_1;
		bool L_18;
		L_18 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_17, _stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B, NULL);
		if (L_18)
		{
			goto IL_019c;
		}
	}
	{
		goto IL_0284;
	}

IL_00ca:
	{
		String_t* L_19 = V_1;
		bool L_20;
		L_20 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_19, _stringLiteral3EE5A4671A4E5AEBD31CA5F013A7773DC18ED22B, NULL);
		if (L_20)
		{
			goto IL_01b3;
		}
	}
	{
		goto IL_0284;
	}

IL_00df:
	{
		String_t* L_21 = V_1;
		bool L_22;
		L_22 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_21, _stringLiteralBD0DD0004699EF86BF0FC1D161FA3766AF5126C4, NULL);
		if (L_22)
		{
			goto IL_01ca;
		}
	}
	{
		goto IL_0284;
	}

IL_00f4:
	{
		String_t* L_23 = V_1;
		bool L_24;
		L_24 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_23, _stringLiteral062DB096C728515E033CF8C48A1C1F0B9A79384B, NULL);
		if (L_24)
		{
			goto IL_01e1;
		}
	}
	{
		goto IL_0284;
	}

IL_0109:
	{
		String_t* L_25 = V_1;
		bool L_26;
		L_26 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_25, _stringLiteral8C6F88DEE0DFE3513BB8B44A8CF0FEE437F4EFFB, NULL);
		if (L_26)
		{
			goto IL_01f8;
		}
	}
	{
		goto IL_0284;
	}

IL_011e:
	{
		String_t* L_27 = V_1;
		bool L_28;
		L_28 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_27, _stringLiteral9384C6EF2DA5C0BD5274A0DACFF291D0ABBFD8B1, NULL);
		if (L_28)
		{
			goto IL_020c;
		}
	}
	{
		goto IL_0284;
	}

IL_0133:
	{
		String_t* L_29 = V_1;
		bool L_30;
		L_30 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_29, _stringLiteral9E61658953B4F9BB4A05E3D2D2BC18990BADE934, NULL);
		if (L_30)
		{
			goto IL_0220;
		}
	}
	{
		goto IL_0284;
	}

IL_0148:
	{
		String_t* L_31 = V_1;
		bool L_32;
		L_32 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_31, _stringLiteral9CE1604D659135925CCC4DD1F526AFFE42E689F1, NULL);
		if (L_32)
		{
			goto IL_0234;
		}
	}
	{
		goto IL_0284;
	}

IL_015d:
	{
		String_t* L_33 = V_1;
		bool L_34;
		L_34 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_33, _stringLiteral2F8690361553406965679AEF125F896BC5FC61F5, NULL);
		if (L_34)
		{
			goto IL_0248;
		}
	}
	{
		goto IL_0284;
	}

IL_0172:
	{
		String_t* L_35 = V_1;
		bool L_36;
		L_36 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_35, _stringLiteral1B024D537329B86AB0DF96B2A714180F442F53E9, NULL);
		if (L_36)
		{
			goto IL_025c;
		}
	}
	{
		goto IL_0284;
	}

IL_0187:
	{
		String_t* L_37 = V_1;
		bool L_38;
		L_38 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_37, _stringLiteral4845015737DC41475709911228278216EE4DC3AF, NULL);
		if (L_38)
		{
			goto IL_0270;
		}
	}
	{
		goto IL_0284;
	}

IL_019c:
	{
		// instance.enabled = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_39 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_40 = ((ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_39);
		bool L_41;
		L_41 = GenericVirtualFuncInvoker1< bool, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mFFB70EE53D8CD0255A4E599780F62A3EB1520E83_RuntimeMethod_var, L_39, L_40);
		SizeBySpeedModule_set_enabled_m1DFF0FEFF522C52D874173B6CDAAEE94F9E8B718((&V_0), L_41, NULL);
		// break;
		goto IL_028a;
	}

IL_01b3:
	{
		// instance.size = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_42 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_43 = ((ES3Type_MinMaxCurve_t1C147718750ACBECE5D2B7F545D2A434A3C5409B_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t1C147718750ACBECE5D2B7F545D2A434A3C5409B_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_42);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_44;
		L_44 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_m9D6B4042B923127DEA4A2CAA3E35EED37D75B3D0_RuntimeMethod_var, L_42, L_43);
		SizeBySpeedModule_set_size_mD906BB6EAE9613DDA6F623E4D4878D69ECB90729((&V_0), L_44, NULL);
		// break;
		goto IL_028a;
	}

IL_01ca:
	{
		// instance.sizeMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_45 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_46 = ((ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_45);
		float L_47;
		L_47 = GenericVirtualFuncInvoker1< float, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mA86928BC888E342D2C2644535E3399952F5077ED_RuntimeMethod_var, L_45, L_46);
		SizeBySpeedModule_set_sizeMultiplier_mAFACCF6252B8FB92DC3A51BCE11D22126B315901((&V_0), L_47, NULL);
		// break;
		goto IL_028a;
	}

IL_01e1:
	{
		// instance.x = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_48 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_49 = ((ES3Type_MinMaxCurve_t1C147718750ACBECE5D2B7F545D2A434A3C5409B_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t1C147718750ACBECE5D2B7F545D2A434A3C5409B_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_48);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_50;
		L_50 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_m9D6B4042B923127DEA4A2CAA3E35EED37D75B3D0_RuntimeMethod_var, L_48, L_49);
		SizeBySpeedModule_set_x_mED5B851A688588F171B38AF31B0CC91A003DA164((&V_0), L_50, NULL);
		// break;
		goto IL_028a;
	}

IL_01f8:
	{
		// instance.xMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_51 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_52 = ((ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_51);
		float L_53;
		L_53 = GenericVirtualFuncInvoker1< float, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mA86928BC888E342D2C2644535E3399952F5077ED_RuntimeMethod_var, L_51, L_52);
		SizeBySpeedModule_set_xMultiplier_m1803C7585C7DA6333FB4B3595EAD753FFD8ED32A((&V_0), L_53, NULL);
		// break;
		goto IL_028a;
	}

IL_020c:
	{
		// instance.y = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_54 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_55 = ((ES3Type_MinMaxCurve_t1C147718750ACBECE5D2B7F545D2A434A3C5409B_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t1C147718750ACBECE5D2B7F545D2A434A3C5409B_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_54);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_56;
		L_56 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_m9D6B4042B923127DEA4A2CAA3E35EED37D75B3D0_RuntimeMethod_var, L_54, L_55);
		SizeBySpeedModule_set_y_m1E9DE959AFA22DE52D24537108BD41B2D4B017E6((&V_0), L_56, NULL);
		// break;
		goto IL_028a;
	}

IL_0220:
	{
		// instance.yMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_57 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_58 = ((ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_57);
		float L_59;
		L_59 = GenericVirtualFuncInvoker1< float, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mA86928BC888E342D2C2644535E3399952F5077ED_RuntimeMethod_var, L_57, L_58);
		SizeBySpeedModule_set_yMultiplier_m4C9EE0927456366AC12C17543E95BAB3201C9DCB((&V_0), L_59, NULL);
		// break;
		goto IL_028a;
	}

IL_0234:
	{
		// instance.z = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_60 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_61 = ((ES3Type_MinMaxCurve_t1C147718750ACBECE5D2B7F545D2A434A3C5409B_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t1C147718750ACBECE5D2B7F545D2A434A3C5409B_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_60);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_62;
		L_62 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_m9D6B4042B923127DEA4A2CAA3E35EED37D75B3D0_RuntimeMethod_var, L_60, L_61);
		SizeBySpeedModule_set_z_m73C05D968B5C62551614E86A77AEF557F15734A3((&V_0), L_62, NULL);
		// break;
		goto IL_028a;
	}

IL_0248:
	{
		// instance.zMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_63 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_64 = ((ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_63);
		float L_65;
		L_65 = GenericVirtualFuncInvoker1< float, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mA86928BC888E342D2C2644535E3399952F5077ED_RuntimeMethod_var, L_63, L_64);
		SizeBySpeedModule_set_zMultiplier_m0B67A4AF3E30D31C14DBD5FAAA3EABFB787D9826((&V_0), L_65, NULL);
		// break;
		goto IL_028a;
	}

IL_025c:
	{
		// instance.separateAxes = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_66 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_67 = ((ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_66);
		bool L_68;
		L_68 = GenericVirtualFuncInvoker1< bool, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mFFB70EE53D8CD0255A4E599780F62A3EB1520E83_RuntimeMethod_var, L_66, L_67);
		SizeBySpeedModule_set_separateAxes_m5B0BA28A01D7FED6FDDA0267135B5EAE1F9C72C7((&V_0), L_68, NULL);
		// break;
		goto IL_028a;
	}

IL_0270:
	{
		// instance.range = reader.Read<UnityEngine.Vector2>(ES3Type_Vector2.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_69 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_70 = ((ES3Type_Vector2_tB51CE4B1AFCBAFE7ADC540050621735C4F8D4387_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Vector2_tB51CE4B1AFCBAFE7ADC540050621735C4F8D4387_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_69);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_71;
		L_71 = GenericVirtualFuncInvoker1< Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_m95B09869E3B912BD36BC3571D842BA21C71EB14B_RuntimeMethod_var, L_69, L_70);
		SizeBySpeedModule_set_range_m76B9B316654E44D6938A4A06DED0DF8B3CBCE4D7((&V_0), L_71, NULL);
		// break;
		goto IL_028a;
	}

IL_0284:
	{
		// reader.Skip();
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_72 = ___reader0;
		NullCheck(L_72);
		VirtualActionInvoker0::Invoke(41 /* System.Void ES3Reader::Skip() */, L_72);
	}

IL_028a:
	{
		// while((propertyName = reader.ReadPropertyName()) != null)
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_73 = ___reader0;
		NullCheck(L_73);
		String_t* L_74;
		L_74 = VirtualFuncInvoker0< String_t* >::Invoke(21 /* System.String ES3Reader::ReadPropertyName() */, L_73);
		String_t* L_75 = L_74;
		V_1 = L_75;
		if (L_75)
		{
			goto IL_000c;
		}
	}
	{
		// }
		return;
	}
}
// System.Void ES3Types.ES3Type_SizeBySpeedModule::ReadInto<UnityEngine.ParticleSystem/InheritVelocityModule>(ES3Reader,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ES3Type_SizeBySpeedModule_ReadInto_TisInheritVelocityModule_tB71B2EDCAF328647DDB6BC79541D7C5E76C19562_mD888CCFC9FB6368324240600FE0B3BA374272F24_gshared (ES3Type_SizeBySpeedModule_t2A3358BE9F6111ED907A0D4CA428148A73CD7601* __this, ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* ___reader0, RuntimeObject* ___obj1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mFFB70EE53D8CD0255A4E599780F62A3EB1520E83_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_m9D6B4042B923127DEA4A2CAA3E35EED37D75B3D0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mA86928BC888E342D2C2644535E3399952F5077ED_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_m95B09869E3B912BD36BC3571D842BA21C71EB14B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_MinMaxCurve_t1C147718750ACBECE5D2B7F545D2A434A3C5409B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_Vector2_tB51CE4B1AFCBAFE7ADC540050621735C4F8D4387_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SizeBySpeedModule_t73995CB54A0D1B06BA100EA77972D37CDF7B4DC4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral062DB096C728515E033CF8C48A1C1F0B9A79384B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1B024D537329B86AB0DF96B2A714180F442F53E9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2F8690361553406965679AEF125F896BC5FC61F5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3EE5A4671A4E5AEBD31CA5F013A7773DC18ED22B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4845015737DC41475709911228278216EE4DC3AF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8C6F88DEE0DFE3513BB8B44A8CF0FEE437F4EFFB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9384C6EF2DA5C0BD5274A0DACFF291D0ABBFD8B1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9CE1604D659135925CCC4DD1F526AFFE42E689F1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9E61658953B4F9BB4A05E3D2D2BC18990BADE934);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBD0DD0004699EF86BF0FC1D161FA3766AF5126C4);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B);
		s_Il2CppMethodInitialized = true;
	}
	SizeBySpeedModule_t73995CB54A0D1B06BA100EA77972D37CDF7B4DC4 V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	uint32_t V_2 = 0;
	{
		// var instance = (UnityEngine.ParticleSystem.SizeBySpeedModule)obj;
		RuntimeObject* L_0 = ___obj1;
		V_0 = ((*(SizeBySpeedModule_t73995CB54A0D1B06BA100EA77972D37CDF7B4DC4*)((SizeBySpeedModule_t73995CB54A0D1B06BA100EA77972D37CDF7B4DC4*)(SizeBySpeedModule_t73995CB54A0D1B06BA100EA77972D37CDF7B4DC4*)UnBox(L_0, SizeBySpeedModule_t73995CB54A0D1B06BA100EA77972D37CDF7B4DC4_il2cpp_TypeInfo_var))));
		goto IL_028a;
	}

IL_000c:
	{
		String_t* L_1 = V_1;
		uint32_t L_2;
		L_2 = U3CPrivateImplementationDetailsU3E_ComputeStringHash_m9E43873DE0DF480D27EC1C2AA3C09E74EA77F75D(L_1, NULL);
		V_2 = L_2;
		uint32_t L_3 = V_2;
		if ((!(((uint32_t)L_3) <= ((uint32_t)((int32_t)1479031685)))))
		{
			goto IL_0064;
		}
	}
	{
		uint32_t L_4 = V_2;
		if ((!(((uint32_t)L_4) <= ((uint32_t)((int32_t)597743964)))))
		{
			goto IL_003e;
		}
	}
	{
		uint32_t L_5 = V_2;
		if ((((int32_t)L_5) == ((int32_t)((int32_t)49525662))))
		{
			goto IL_00b5;
		}
	}
	{
		uint32_t L_6 = V_2;
		if ((((int32_t)L_6) == ((int32_t)((int32_t)597743964))))
		{
			goto IL_00ca;
		}
	}
	{
		goto IL_0284;
	}

IL_003e:
	{
		uint32_t L_7 = V_2;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)726266686))))
		{
			goto IL_015d;
		}
	}
	{
		uint32_t L_8 = V_2;
		if ((((int32_t)L_8) == ((int32_t)((int32_t)1105436259))))
		{
			goto IL_00df;
		}
	}
	{
		uint32_t L_9 = V_2;
		if ((((int32_t)L_9) == ((int32_t)((int32_t)1479031685))))
		{
			goto IL_0172;
		}
	}
	{
		goto IL_0284;
	}

IL_0064:
	{
		uint32_t L_10 = V_2;
		if ((!(((uint32_t)L_10) <= ((uint32_t)((int32_t)-86242094)))))
		{
			goto IL_0092;
		}
	}
	{
		uint32_t L_11 = V_2;
		if ((((int32_t)L_11) == ((int32_t)((int32_t)-1013869429))))
		{
			goto IL_0133;
		}
	}
	{
		uint32_t L_12 = V_2;
		if ((((int32_t)L_12) == ((int32_t)((int32_t)-585050980))))
		{
			goto IL_0109;
		}
	}
	{
		uint32_t L_13 = V_2;
		if ((((int32_t)L_13) == ((int32_t)((int32_t)-86242094))))
		{
			goto IL_0187;
		}
	}
	{
		goto IL_0284;
	}

IL_0092:
	{
		uint32_t L_14 = V_2;
		if ((((int32_t)L_14) == ((int32_t)((int32_t)-66302220))))
		{
			goto IL_011e;
		}
	}
	{
		uint32_t L_15 = V_2;
		if ((((int32_t)L_15) == ((int32_t)((int32_t)-49524601))))
		{
			goto IL_00f4;
		}
	}
	{
		uint32_t L_16 = V_2;
		if ((((int32_t)L_16) == ((int32_t)((int32_t)-15969363))))
		{
			goto IL_0148;
		}
	}
	{
		goto IL_0284;
	}

IL_00b5:
	{
		String_t* L_17 = V_1;
		bool L_18;
		L_18 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_17, _stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B, NULL);
		if (L_18)
		{
			goto IL_019c;
		}
	}
	{
		goto IL_0284;
	}

IL_00ca:
	{
		String_t* L_19 = V_1;
		bool L_20;
		L_20 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_19, _stringLiteral3EE5A4671A4E5AEBD31CA5F013A7773DC18ED22B, NULL);
		if (L_20)
		{
			goto IL_01b3;
		}
	}
	{
		goto IL_0284;
	}

IL_00df:
	{
		String_t* L_21 = V_1;
		bool L_22;
		L_22 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_21, _stringLiteralBD0DD0004699EF86BF0FC1D161FA3766AF5126C4, NULL);
		if (L_22)
		{
			goto IL_01ca;
		}
	}
	{
		goto IL_0284;
	}

IL_00f4:
	{
		String_t* L_23 = V_1;
		bool L_24;
		L_24 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_23, _stringLiteral062DB096C728515E033CF8C48A1C1F0B9A79384B, NULL);
		if (L_24)
		{
			goto IL_01e1;
		}
	}
	{
		goto IL_0284;
	}

IL_0109:
	{
		String_t* L_25 = V_1;
		bool L_26;
		L_26 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_25, _stringLiteral8C6F88DEE0DFE3513BB8B44A8CF0FEE437F4EFFB, NULL);
		if (L_26)
		{
			goto IL_01f8;
		}
	}
	{
		goto IL_0284;
	}

IL_011e:
	{
		String_t* L_27 = V_1;
		bool L_28;
		L_28 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_27, _stringLiteral9384C6EF2DA5C0BD5274A0DACFF291D0ABBFD8B1, NULL);
		if (L_28)
		{
			goto IL_020c;
		}
	}
	{
		goto IL_0284;
	}

IL_0133:
	{
		String_t* L_29 = V_1;
		bool L_30;
		L_30 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_29, _stringLiteral9E61658953B4F9BB4A05E3D2D2BC18990BADE934, NULL);
		if (L_30)
		{
			goto IL_0220;
		}
	}
	{
		goto IL_0284;
	}

IL_0148:
	{
		String_t* L_31 = V_1;
		bool L_32;
		L_32 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_31, _stringLiteral9CE1604D659135925CCC4DD1F526AFFE42E689F1, NULL);
		if (L_32)
		{
			goto IL_0234;
		}
	}
	{
		goto IL_0284;
	}

IL_015d:
	{
		String_t* L_33 = V_1;
		bool L_34;
		L_34 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_33, _stringLiteral2F8690361553406965679AEF125F896BC5FC61F5, NULL);
		if (L_34)
		{
			goto IL_0248;
		}
	}
	{
		goto IL_0284;
	}

IL_0172:
	{
		String_t* L_35 = V_1;
		bool L_36;
		L_36 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_35, _stringLiteral1B024D537329B86AB0DF96B2A714180F442F53E9, NULL);
		if (L_36)
		{
			goto IL_025c;
		}
	}
	{
		goto IL_0284;
	}

IL_0187:
	{
		String_t* L_37 = V_1;
		bool L_38;
		L_38 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_37, _stringLiteral4845015737DC41475709911228278216EE4DC3AF, NULL);
		if (L_38)
		{
			goto IL_0270;
		}
	}
	{
		goto IL_0284;
	}

IL_019c:
	{
		// instance.enabled = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_39 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_40 = ((ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_39);
		bool L_41;
		L_41 = GenericVirtualFuncInvoker1< bool, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mFFB70EE53D8CD0255A4E599780F62A3EB1520E83_RuntimeMethod_var, L_39, L_40);
		SizeBySpeedModule_set_enabled_m1DFF0FEFF522C52D874173B6CDAAEE94F9E8B718((&V_0), L_41, NULL);
		// break;
		goto IL_028a;
	}

IL_01b3:
	{
		// instance.size = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_42 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_43 = ((ES3Type_MinMaxCurve_t1C147718750ACBECE5D2B7F545D2A434A3C5409B_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t1C147718750ACBECE5D2B7F545D2A434A3C5409B_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_42);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_44;
		L_44 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_m9D6B4042B923127DEA4A2CAA3E35EED37D75B3D0_RuntimeMethod_var, L_42, L_43);
		SizeBySpeedModule_set_size_mD906BB6EAE9613DDA6F623E4D4878D69ECB90729((&V_0), L_44, NULL);
		// break;
		goto IL_028a;
	}

IL_01ca:
	{
		// instance.sizeMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_45 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_46 = ((ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_45);
		float L_47;
		L_47 = GenericVirtualFuncInvoker1< float, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mA86928BC888E342D2C2644535E3399952F5077ED_RuntimeMethod_var, L_45, L_46);
		SizeBySpeedModule_set_sizeMultiplier_mAFACCF6252B8FB92DC3A51BCE11D22126B315901((&V_0), L_47, NULL);
		// break;
		goto IL_028a;
	}

IL_01e1:
	{
		// instance.x = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_48 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_49 = ((ES3Type_MinMaxCurve_t1C147718750ACBECE5D2B7F545D2A434A3C5409B_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t1C147718750ACBECE5D2B7F545D2A434A3C5409B_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_48);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_50;
		L_50 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_m9D6B4042B923127DEA4A2CAA3E35EED37D75B3D0_RuntimeMethod_var, L_48, L_49);
		SizeBySpeedModule_set_x_mED5B851A688588F171B38AF31B0CC91A003DA164((&V_0), L_50, NULL);
		// break;
		goto IL_028a;
	}

IL_01f8:
	{
		// instance.xMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_51 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_52 = ((ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_51);
		float L_53;
		L_53 = GenericVirtualFuncInvoker1< float, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mA86928BC888E342D2C2644535E3399952F5077ED_RuntimeMethod_var, L_51, L_52);
		SizeBySpeedModule_set_xMultiplier_m1803C7585C7DA6333FB4B3595EAD753FFD8ED32A((&V_0), L_53, NULL);
		// break;
		goto IL_028a;
	}

IL_020c:
	{
		// instance.y = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_54 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_55 = ((ES3Type_MinMaxCurve_t1C147718750ACBECE5D2B7F545D2A434A3C5409B_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t1C147718750ACBECE5D2B7F545D2A434A3C5409B_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_54);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_56;
		L_56 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_m9D6B4042B923127DEA4A2CAA3E35EED37D75B3D0_RuntimeMethod_var, L_54, L_55);
		SizeBySpeedModule_set_y_m1E9DE959AFA22DE52D24537108BD41B2D4B017E6((&V_0), L_56, NULL);
		// break;
		goto IL_028a;
	}

IL_0220:
	{
		// instance.yMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_57 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_58 = ((ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_57);
		float L_59;
		L_59 = GenericVirtualFuncInvoker1< float, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mA86928BC888E342D2C2644535E3399952F5077ED_RuntimeMethod_var, L_57, L_58);
		SizeBySpeedModule_set_yMultiplier_m4C9EE0927456366AC12C17543E95BAB3201C9DCB((&V_0), L_59, NULL);
		// break;
		goto IL_028a;
	}

IL_0234:
	{
		// instance.z = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_60 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_61 = ((ES3Type_MinMaxCurve_t1C147718750ACBECE5D2B7F545D2A434A3C5409B_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t1C147718750ACBECE5D2B7F545D2A434A3C5409B_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_60);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_62;
		L_62 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_m9D6B4042B923127DEA4A2CAA3E35EED37D75B3D0_RuntimeMethod_var, L_60, L_61);
		SizeBySpeedModule_set_z_m73C05D968B5C62551614E86A77AEF557F15734A3((&V_0), L_62, NULL);
		// break;
		goto IL_028a;
	}

IL_0248:
	{
		// instance.zMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_63 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_64 = ((ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_63);
		float L_65;
		L_65 = GenericVirtualFuncInvoker1< float, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mA86928BC888E342D2C2644535E3399952F5077ED_RuntimeMethod_var, L_63, L_64);
		SizeBySpeedModule_set_zMultiplier_m0B67A4AF3E30D31C14DBD5FAAA3EABFB787D9826((&V_0), L_65, NULL);
		// break;
		goto IL_028a;
	}

IL_025c:
	{
		// instance.separateAxes = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_66 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_67 = ((ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_66);
		bool L_68;
		L_68 = GenericVirtualFuncInvoker1< bool, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mFFB70EE53D8CD0255A4E599780F62A3EB1520E83_RuntimeMethod_var, L_66, L_67);
		SizeBySpeedModule_set_separateAxes_m5B0BA28A01D7FED6FDDA0267135B5EAE1F9C72C7((&V_0), L_68, NULL);
		// break;
		goto IL_028a;
	}

IL_0270:
	{
		// instance.range = reader.Read<UnityEngine.Vector2>(ES3Type_Vector2.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_69 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_70 = ((ES3Type_Vector2_tB51CE4B1AFCBAFE7ADC540050621735C4F8D4387_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Vector2_tB51CE4B1AFCBAFE7ADC540050621735C4F8D4387_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_69);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_71;
		L_71 = GenericVirtualFuncInvoker1< Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_m95B09869E3B912BD36BC3571D842BA21C71EB14B_RuntimeMethod_var, L_69, L_70);
		SizeBySpeedModule_set_range_m76B9B316654E44D6938A4A06DED0DF8B3CBCE4D7((&V_0), L_71, NULL);
		// break;
		goto IL_028a;
	}

IL_0284:
	{
		// reader.Skip();
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_72 = ___reader0;
		NullCheck(L_72);
		VirtualActionInvoker0::Invoke(41 /* System.Void ES3Reader::Skip() */, L_72);
	}

IL_028a:
	{
		// while((propertyName = reader.ReadPropertyName()) != null)
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_73 = ___reader0;
		NullCheck(L_73);
		String_t* L_74;
		L_74 = VirtualFuncInvoker0< String_t* >::Invoke(21 /* System.String ES3Reader::ReadPropertyName() */, L_73);
		String_t* L_75 = L_74;
		V_1 = L_75;
		if (L_75)
		{
			goto IL_000c;
		}
	}
	{
		// }
		return;
	}
}
// System.Void ES3Types.ES3Type_SizeBySpeedModule::ReadInto<UnityEngine.ParticleSystem/LightsModule>(ES3Reader,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ES3Type_SizeBySpeedModule_ReadInto_TisLightsModule_t720242ED070FD6C55E59B7536322829A22884C7E_mAA0D29B475AF38E1CCC9C3A5BACE6CE086740DEC_gshared (ES3Type_SizeBySpeedModule_t2A3358BE9F6111ED907A0D4CA428148A73CD7601* __this, ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* ___reader0, RuntimeObject* ___obj1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mFFB70EE53D8CD0255A4E599780F62A3EB1520E83_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_m9D6B4042B923127DEA4A2CAA3E35EED37D75B3D0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mA86928BC888E342D2C2644535E3399952F5077ED_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_m95B09869E3B912BD36BC3571D842BA21C71EB14B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_MinMaxCurve_t1C147718750ACBECE5D2B7F545D2A434A3C5409B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_Vector2_tB51CE4B1AFCBAFE7ADC540050621735C4F8D4387_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SizeBySpeedModule_t73995CB54A0D1B06BA100EA77972D37CDF7B4DC4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral062DB096C728515E033CF8C48A1C1F0B9A79384B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1B024D537329B86AB0DF96B2A714180F442F53E9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2F8690361553406965679AEF125F896BC5FC61F5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3EE5A4671A4E5AEBD31CA5F013A7773DC18ED22B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4845015737DC41475709911228278216EE4DC3AF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8C6F88DEE0DFE3513BB8B44A8CF0FEE437F4EFFB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9384C6EF2DA5C0BD5274A0DACFF291D0ABBFD8B1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9CE1604D659135925CCC4DD1F526AFFE42E689F1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9E61658953B4F9BB4A05E3D2D2BC18990BADE934);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBD0DD0004699EF86BF0FC1D161FA3766AF5126C4);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B);
		s_Il2CppMethodInitialized = true;
	}
	SizeBySpeedModule_t73995CB54A0D1B06BA100EA77972D37CDF7B4DC4 V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	uint32_t V_2 = 0;
	{
		// var instance = (UnityEngine.ParticleSystem.SizeBySpeedModule)obj;
		RuntimeObject* L_0 = ___obj1;
		V_0 = ((*(SizeBySpeedModule_t73995CB54A0D1B06BA100EA77972D37CDF7B4DC4*)((SizeBySpeedModule_t73995CB54A0D1B06BA100EA77972D37CDF7B4DC4*)(SizeBySpeedModule_t73995CB54A0D1B06BA100EA77972D37CDF7B4DC4*)UnBox(L_0, SizeBySpeedModule_t73995CB54A0D1B06BA100EA77972D37CDF7B4DC4_il2cpp_TypeInfo_var))));
		goto IL_028a;
	}

IL_000c:
	{
		String_t* L_1 = V_1;
		uint32_t L_2;
		L_2 = U3CPrivateImplementationDetailsU3E_ComputeStringHash_m9E43873DE0DF480D27EC1C2AA3C09E74EA77F75D(L_1, NULL);
		V_2 = L_2;
		uint32_t L_3 = V_2;
		if ((!(((uint32_t)L_3) <= ((uint32_t)((int32_t)1479031685)))))
		{
			goto IL_0064;
		}
	}
	{
		uint32_t L_4 = V_2;
		if ((!(((uint32_t)L_4) <= ((uint32_t)((int32_t)597743964)))))
		{
			goto IL_003e;
		}
	}
	{
		uint32_t L_5 = V_2;
		if ((((int32_t)L_5) == ((int32_t)((int32_t)49525662))))
		{
			goto IL_00b5;
		}
	}
	{
		uint32_t L_6 = V_2;
		if ((((int32_t)L_6) == ((int32_t)((int32_t)597743964))))
		{
			goto IL_00ca;
		}
	}
	{
		goto IL_0284;
	}

IL_003e:
	{
		uint32_t L_7 = V_2;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)726266686))))
		{
			goto IL_015d;
		}
	}
	{
		uint32_t L_8 = V_2;
		if ((((int32_t)L_8) == ((int32_t)((int32_t)1105436259))))
		{
			goto IL_00df;
		}
	}
	{
		uint32_t L_9 = V_2;
		if ((((int32_t)L_9) == ((int32_t)((int32_t)1479031685))))
		{
			goto IL_0172;
		}
	}
	{
		goto IL_0284;
	}

IL_0064:
	{
		uint32_t L_10 = V_2;
		if ((!(((uint32_t)L_10) <= ((uint32_t)((int32_t)-86242094)))))
		{
			goto IL_0092;
		}
	}
	{
		uint32_t L_11 = V_2;
		if ((((int32_t)L_11) == ((int32_t)((int32_t)-1013869429))))
		{
			goto IL_0133;
		}
	}
	{
		uint32_t L_12 = V_2;
		if ((((int32_t)L_12) == ((int32_t)((int32_t)-585050980))))
		{
			goto IL_0109;
		}
	}
	{
		uint32_t L_13 = V_2;
		if ((((int32_t)L_13) == ((int32_t)((int32_t)-86242094))))
		{
			goto IL_0187;
		}
	}
	{
		goto IL_0284;
	}

IL_0092:
	{
		uint32_t L_14 = V_2;
		if ((((int32_t)L_14) == ((int32_t)((int32_t)-66302220))))
		{
			goto IL_011e;
		}
	}
	{
		uint32_t L_15 = V_2;
		if ((((int32_t)L_15) == ((int32_t)((int32_t)-49524601))))
		{
			goto IL_00f4;
		}
	}
	{
		uint32_t L_16 = V_2;
		if ((((int32_t)L_16) == ((int32_t)((int32_t)-15969363))))
		{
			goto IL_0148;
		}
	}
	{
		goto IL_0284;
	}

IL_00b5:
	{
		String_t* L_17 = V_1;
		bool L_18;
		L_18 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_17, _stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B, NULL);
		if (L_18)
		{
			goto IL_019c;
		}
	}
	{
		goto IL_0284;
	}

IL_00ca:
	{
		String_t* L_19 = V_1;
		bool L_20;
		L_20 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_19, _stringLiteral3EE5A4671A4E5AEBD31CA5F013A7773DC18ED22B, NULL);
		if (L_20)
		{
			goto IL_01b3;
		}
	}
	{
		goto IL_0284;
	}

IL_00df:
	{
		String_t* L_21 = V_1;
		bool L_22;
		L_22 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_21, _stringLiteralBD0DD0004699EF86BF0FC1D161FA3766AF5126C4, NULL);
		if (L_22)
		{
			goto IL_01ca;
		}
	}
	{
		goto IL_0284;
	}

IL_00f4:
	{
		String_t* L_23 = V_1;
		bool L_24;
		L_24 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_23, _stringLiteral062DB096C728515E033CF8C48A1C1F0B9A79384B, NULL);
		if (L_24)
		{
			goto IL_01e1;
		}
	}
	{
		goto IL_0284;
	}

IL_0109:
	{
		String_t* L_25 = V_1;
		bool L_26;
		L_26 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_25, _stringLiteral8C6F88DEE0DFE3513BB8B44A8CF0FEE437F4EFFB, NULL);
		if (L_26)
		{
			goto IL_01f8;
		}
	}
	{
		goto IL_0284;
	}

IL_011e:
	{
		String_t* L_27 = V_1;
		bool L_28;
		L_28 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_27, _stringLiteral9384C6EF2DA5C0BD5274A0DACFF291D0ABBFD8B1, NULL);
		if (L_28)
		{
			goto IL_020c;
		}
	}
	{
		goto IL_0284;
	}

IL_0133:
	{
		String_t* L_29 = V_1;
		bool L_30;
		L_30 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_29, _stringLiteral9E61658953B4F9BB4A05E3D2D2BC18990BADE934, NULL);
		if (L_30)
		{
			goto IL_0220;
		}
	}
	{
		goto IL_0284;
	}

IL_0148:
	{
		String_t* L_31 = V_1;
		bool L_32;
		L_32 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_31, _stringLiteral9CE1604D659135925CCC4DD1F526AFFE42E689F1, NULL);
		if (L_32)
		{
			goto IL_0234;
		}
	}
	{
		goto IL_0284;
	}

IL_015d:
	{
		String_t* L_33 = V_1;
		bool L_34;
		L_34 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_33, _stringLiteral2F8690361553406965679AEF125F896BC5FC61F5, NULL);
		if (L_34)
		{
			goto IL_0248;
		}
	}
	{
		goto IL_0284;
	}

IL_0172:
	{
		String_t* L_35 = V_1;
		bool L_36;
		L_36 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_35, _stringLiteral1B024D537329B86AB0DF96B2A714180F442F53E9, NULL);
		if (L_36)
		{
			goto IL_025c;
		}
	}
	{
		goto IL_0284;
	}

IL_0187:
	{
		String_t* L_37 = V_1;
		bool L_38;
		L_38 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_37, _stringLiteral4845015737DC41475709911228278216EE4DC3AF, NULL);
		if (L_38)
		{
			goto IL_0270;
		}
	}
	{
		goto IL_0284;
	}

IL_019c:
	{
		// instance.enabled = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_39 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_40 = ((ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_39);
		bool L_41;
		L_41 = GenericVirtualFuncInvoker1< bool, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mFFB70EE53D8CD0255A4E599780F62A3EB1520E83_RuntimeMethod_var, L_39, L_40);
		SizeBySpeedModule_set_enabled_m1DFF0FEFF522C52D874173B6CDAAEE94F9E8B718((&V_0), L_41, NULL);
		// break;
		goto IL_028a;
	}

IL_01b3:
	{
		// instance.size = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_42 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_43 = ((ES3Type_MinMaxCurve_t1C147718750ACBECE5D2B7F545D2A434A3C5409B_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t1C147718750ACBECE5D2B7F545D2A434A3C5409B_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_42);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_44;
		L_44 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_m9D6B4042B923127DEA4A2CAA3E35EED37D75B3D0_RuntimeMethod_var, L_42, L_43);
		SizeBySpeedModule_set_size_mD906BB6EAE9613DDA6F623E4D4878D69ECB90729((&V_0), L_44, NULL);
		// break;
		goto IL_028a;
	}

IL_01ca:
	{
		// instance.sizeMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_45 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_46 = ((ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_45);
		float L_47;
		L_47 = GenericVirtualFuncInvoker1< float, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mA86928BC888E342D2C2644535E3399952F5077ED_RuntimeMethod_var, L_45, L_46);
		SizeBySpeedModule_set_sizeMultiplier_mAFACCF6252B8FB92DC3A51BCE11D22126B315901((&V_0), L_47, NULL);
		// break;
		goto IL_028a;
	}

IL_01e1:
	{
		// instance.x = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_48 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_49 = ((ES3Type_MinMaxCurve_t1C147718750ACBECE5D2B7F545D2A434A3C5409B_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t1C147718750ACBECE5D2B7F545D2A434A3C5409B_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_48);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_50;
		L_50 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_m9D6B4042B923127DEA4A2CAA3E35EED37D75B3D0_RuntimeMethod_var, L_48, L_49);
		SizeBySpeedModule_set_x_mED5B851A688588F171B38AF31B0CC91A003DA164((&V_0), L_50, NULL);
		// break;
		goto IL_028a;
	}

IL_01f8:
	{
		// instance.xMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_51 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_52 = ((ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_51);
		float L_53;
		L_53 = GenericVirtualFuncInvoker1< float, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mA86928BC888E342D2C2644535E3399952F5077ED_RuntimeMethod_var, L_51, L_52);
		SizeBySpeedModule_set_xMultiplier_m1803C7585C7DA6333FB4B3595EAD753FFD8ED32A((&V_0), L_53, NULL);
		// break;
		goto IL_028a;
	}

IL_020c:
	{
		// instance.y = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_54 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_55 = ((ES3Type_MinMaxCurve_t1C147718750ACBECE5D2B7F545D2A434A3C5409B_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t1C147718750ACBECE5D2B7F545D2A434A3C5409B_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_54);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_56;
		L_56 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_m9D6B4042B923127DEA4A2CAA3E35EED37D75B3D0_RuntimeMethod_var, L_54, L_55);
		SizeBySpeedModule_set_y_m1E9DE959AFA22DE52D24537108BD41B2D4B017E6((&V_0), L_56, NULL);
		// break;
		goto IL_028a;
	}

IL_0220:
	{
		// instance.yMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_57 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_58 = ((ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_57);
		float L_59;
		L_59 = GenericVirtualFuncInvoker1< float, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mA86928BC888E342D2C2644535E3399952F5077ED_RuntimeMethod_var, L_57, L_58);
		SizeBySpeedModule_set_yMultiplier_m4C9EE0927456366AC12C17543E95BAB3201C9DCB((&V_0), L_59, NULL);
		// break;
		goto IL_028a;
	}

IL_0234:
	{
		// instance.z = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_60 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_61 = ((ES3Type_MinMaxCurve_t1C147718750ACBECE5D2B7F545D2A434A3C5409B_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t1C147718750ACBECE5D2B7F545D2A434A3C5409B_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_60);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_62;
		L_62 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_m9D6B4042B923127DEA4A2CAA3E35EED37D75B3D0_RuntimeMethod_var, L_60, L_61);
		SizeBySpeedModule_set_z_m73C05D968B5C62551614E86A77AEF557F15734A3((&V_0), L_62, NULL);
		// break;
		goto IL_028a;
	}

IL_0248:
	{
		// instance.zMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_63 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_64 = ((ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_63);
		float L_65;
		L_65 = GenericVirtualFuncInvoker1< float, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mA86928BC888E342D2C2644535E3399952F5077ED_RuntimeMethod_var, L_63, L_64);
		SizeBySpeedModule_set_zMultiplier_m0B67A4AF3E30D31C14DBD5FAAA3EABFB787D9826((&V_0), L_65, NULL);
		// break;
		goto IL_028a;
	}

IL_025c:
	{
		// instance.separateAxes = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_66 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_67 = ((ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_66);
		bool L_68;
		L_68 = GenericVirtualFuncInvoker1< bool, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mFFB70EE53D8CD0255A4E599780F62A3EB1520E83_RuntimeMethod_var, L_66, L_67);
		SizeBySpeedModule_set_separateAxes_m5B0BA28A01D7FED6FDDA0267135B5EAE1F9C72C7((&V_0), L_68, NULL);
		// break;
		goto IL_028a;
	}

IL_0270:
	{
		// instance.range = reader.Read<UnityEngine.Vector2>(ES3Type_Vector2.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_69 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_70 = ((ES3Type_Vector2_tB51CE4B1AFCBAFE7ADC540050621735C4F8D4387_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Vector2_tB51CE4B1AFCBAFE7ADC540050621735C4F8D4387_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_69);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_71;
		L_71 = GenericVirtualFuncInvoker1< Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_m95B09869E3B912BD36BC3571D842BA21C71EB14B_RuntimeMethod_var, L_69, L_70);
		SizeBySpeedModule_set_range_m76B9B316654E44D6938A4A06DED0DF8B3CBCE4D7((&V_0), L_71, NULL);
		// break;
		goto IL_028a;
	}

IL_0284:
	{
		// reader.Skip();
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_72 = ___reader0;
		NullCheck(L_72);
		VirtualActionInvoker0::Invoke(41 /* System.Void ES3Reader::Skip() */, L_72);
	}

IL_028a:
	{
		// while((propertyName = reader.ReadPropertyName()) != null)
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_73 = ___reader0;
		NullCheck(L_73);
		String_t* L_74;
		L_74 = VirtualFuncInvoker0< String_t* >::Invoke(21 /* System.String ES3Reader::ReadPropertyName() */, L_73);
		String_t* L_75 = L_74;
		V_1 = L_75;
		if (L_75)
		{
			goto IL_000c;
		}
	}
	{
		// }
		return;
	}
}
// System.Void ES3Types.ES3Type_SizeBySpeedModule::ReadInto<UnityEngine.ParticleSystem/LimitVelocityOverLifetimeModule>(ES3Reader,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ES3Type_SizeBySpeedModule_ReadInto_TisLimitVelocityOverLifetimeModule_tC52CF1434E2639EE5D81DD6BA269FF38CA17D8B1_m96691D7E5E6241433F8E83309AD09E29AEDAAC02_gshared (ES3Type_SizeBySpeedModule_t2A3358BE9F6111ED907A0D4CA428148A73CD7601* __this, ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* ___reader0, RuntimeObject* ___obj1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mFFB70EE53D8CD0255A4E599780F62A3EB1520E83_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_m9D6B4042B923127DEA4A2CAA3E35EED37D75B3D0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mA86928BC888E342D2C2644535E3399952F5077ED_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_m95B09869E3B912BD36BC3571D842BA21C71EB14B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_MinMaxCurve_t1C147718750ACBECE5D2B7F545D2A434A3C5409B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_Vector2_tB51CE4B1AFCBAFE7ADC540050621735C4F8D4387_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SizeBySpeedModule_t73995CB54A0D1B06BA100EA77972D37CDF7B4DC4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral062DB096C728515E033CF8C48A1C1F0B9A79384B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1B024D537329B86AB0DF96B2A714180F442F53E9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2F8690361553406965679AEF125F896BC5FC61F5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3EE5A4671A4E5AEBD31CA5F013A7773DC18ED22B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4845015737DC41475709911228278216EE4DC3AF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8C6F88DEE0DFE3513BB8B44A8CF0FEE437F4EFFB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9384C6EF2DA5C0BD5274A0DACFF291D0ABBFD8B1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9CE1604D659135925CCC4DD1F526AFFE42E689F1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9E61658953B4F9BB4A05E3D2D2BC18990BADE934);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBD0DD0004699EF86BF0FC1D161FA3766AF5126C4);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B);
		s_Il2CppMethodInitialized = true;
	}
	SizeBySpeedModule_t73995CB54A0D1B06BA100EA77972D37CDF7B4DC4 V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	uint32_t V_2 = 0;
	{
		// var instance = (UnityEngine.ParticleSystem.SizeBySpeedModule)obj;
		RuntimeObject* L_0 = ___obj1;
		V_0 = ((*(SizeBySpeedModule_t73995CB54A0D1B06BA100EA77972D37CDF7B4DC4*)((SizeBySpeedModule_t73995CB54A0D1B06BA100EA77972D37CDF7B4DC4*)(SizeBySpeedModule_t73995CB54A0D1B06BA100EA77972D37CDF7B4DC4*)UnBox(L_0, SizeBySpeedModule_t73995CB54A0D1B06BA100EA77972D37CDF7B4DC4_il2cpp_TypeInfo_var))));
		goto IL_028a;
	}

IL_000c:
	{
		String_t* L_1 = V_1;
		uint32_t L_2;
		L_2 = U3CPrivateImplementationDetailsU3E_ComputeStringHash_m9E43873DE0DF480D27EC1C2AA3C09E74EA77F75D(L_1, NULL);
		V_2 = L_2;
		uint32_t L_3 = V_2;
		if ((!(((uint32_t)L_3) <= ((uint32_t)((int32_t)1479031685)))))
		{
			goto IL_0064;
		}
	}
	{
		uint32_t L_4 = V_2;
		if ((!(((uint32_t)L_4) <= ((uint32_t)((int32_t)597743964)))))
		{
			goto IL_003e;
		}
	}
	{
		uint32_t L_5 = V_2;
		if ((((int32_t)L_5) == ((int32_t)((int32_t)49525662))))
		{
			goto IL_00b5;
		}
	}
	{
		uint32_t L_6 = V_2;
		if ((((int32_t)L_6) == ((int32_t)((int32_t)597743964))))
		{
			goto IL_00ca;
		}
	}
	{
		goto IL_0284;
	}

IL_003e:
	{
		uint32_t L_7 = V_2;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)726266686))))
		{
			goto IL_015d;
		}
	}
	{
		uint32_t L_8 = V_2;
		if ((((int32_t)L_8) == ((int32_t)((int32_t)1105436259))))
		{
			goto IL_00df;
		}
	}
	{
		uint32_t L_9 = V_2;
		if ((((int32_t)L_9) == ((int32_t)((int32_t)1479031685))))
		{
			goto IL_0172;
		}
	}
	{
		goto IL_0284;
	}

IL_0064:
	{
		uint32_t L_10 = V_2;
		if ((!(((uint32_t)L_10) <= ((uint32_t)((int32_t)-86242094)))))
		{
			goto IL_0092;
		}
	}
	{
		uint32_t L_11 = V_2;
		if ((((int32_t)L_11) == ((int32_t)((int32_t)-1013869429))))
		{
			goto IL_0133;
		}
	}
	{
		uint32_t L_12 = V_2;
		if ((((int32_t)L_12) == ((int32_t)((int32_t)-585050980))))
		{
			goto IL_0109;
		}
	}
	{
		uint32_t L_13 = V_2;
		if ((((int32_t)L_13) == ((int32_t)((int32_t)-86242094))))
		{
			goto IL_0187;
		}
	}
	{
		goto IL_0284;
	}

IL_0092:
	{
		uint32_t L_14 = V_2;
		if ((((int32_t)L_14) == ((int32_t)((int32_t)-66302220))))
		{
			goto IL_011e;
		}
	}
	{
		uint32_t L_15 = V_2;
		if ((((int32_t)L_15) == ((int32_t)((int32_t)-49524601))))
		{
			goto IL_00f4;
		}
	}
	{
		uint32_t L_16 = V_2;
		if ((((int32_t)L_16) == ((int32_t)((int32_t)-15969363))))
		{
			goto IL_0148;
		}
	}
	{
		goto IL_0284;
	}

IL_00b5:
	{
		String_t* L_17 = V_1;
		bool L_18;
		L_18 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_17, _stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B, NULL);
		if (L_18)
		{
			goto IL_019c;
		}
	}
	{
		goto IL_0284;
	}

IL_00ca:
	{
		String_t* L_19 = V_1;
		bool L_20;
		L_20 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_19, _stringLiteral3EE5A4671A4E5AEBD31CA5F013A7773DC18ED22B, NULL);
		if (L_20)
		{
			goto IL_01b3;
		}
	}
	{
		goto IL_0284;
	}

IL_00df:
	{
		String_t* L_21 = V_1;
		bool L_22;
		L_22 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_21, _stringLiteralBD0DD0004699EF86BF0FC1D161FA3766AF5126C4, NULL);
		if (L_22)
		{
			goto IL_01ca;
		}
	}
	{
		goto IL_0284;
	}

IL_00f4:
	{
		String_t* L_23 = V_1;
		bool L_24;
		L_24 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_23, _stringLiteral062DB096C728515E033CF8C48A1C1F0B9A79384B, NULL);
		if (L_24)
		{
			goto IL_01e1;
		}
	}
	{
		goto IL_0284;
	}

IL_0109:
	{
		String_t* L_25 = V_1;
		bool L_26;
		L_26 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_25, _stringLiteral8C6F88DEE0DFE3513BB8B44A8CF0FEE437F4EFFB, NULL);
		if (L_26)
		{
			goto IL_01f8;
		}
	}
	{
		goto IL_0284;
	}

IL_011e:
	{
		String_t* L_27 = V_1;
		bool L_28;
		L_28 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_27, _stringLiteral9384C6EF2DA5C0BD5274A0DACFF291D0ABBFD8B1, NULL);
		if (L_28)
		{
			goto IL_020c;
		}
	}
	{
		goto IL_0284;
	}

IL_0133:
	{
		String_t* L_29 = V_1;
		bool L_30;
		L_30 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_29, _stringLiteral9E61658953B4F9BB4A05E3D2D2BC18990BADE934, NULL);
		if (L_30)
		{
			goto IL_0220;
		}
	}
	{
		goto IL_0284;
	}

IL_0148:
	{
		String_t* L_31 = V_1;
		bool L_32;
		L_32 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_31, _stringLiteral9CE1604D659135925CCC4DD1F526AFFE42E689F1, NULL);
		if (L_32)
		{
			goto IL_0234;
		}
	}
	{
		goto IL_0284;
	}

IL_015d:
	{
		String_t* L_33 = V_1;
		bool L_34;
		L_34 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_33, _stringLiteral2F8690361553406965679AEF125F896BC5FC61F5, NULL);
		if (L_34)
		{
			goto IL_0248;
		}
	}
	{
		goto IL_0284;
	}

IL_0172:
	{
		String_t* L_35 = V_1;
		bool L_36;
		L_36 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_35, _stringLiteral1B024D537329B86AB0DF96B2A714180F442F53E9, NULL);
		if (L_36)
		{
			goto IL_025c;
		}
	}
	{
		goto IL_0284;
	}

IL_0187:
	{
		String_t* L_37 = V_1;
		bool L_38;
		L_38 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_37, _stringLiteral4845015737DC41475709911228278216EE4DC3AF, NULL);
		if (L_38)
		{
			goto IL_0270;
		}
	}
	{
		goto IL_0284;
	}

IL_019c:
	{
		// instance.enabled = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_39 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_40 = ((ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_39);
		bool L_41;
		L_41 = GenericVirtualFuncInvoker1< bool, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mFFB70EE53D8CD0255A4E599780F62A3EB1520E83_RuntimeMethod_var, L_39, L_40);
		SizeBySpeedModule_set_enabled_m1DFF0FEFF522C52D874173B6CDAAEE94F9E8B718((&V_0), L_41, NULL);
		// break;
		goto IL_028a;
	}

IL_01b3:
	{
		// instance.size = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_42 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_43 = ((ES3Type_MinMaxCurve_t1C147718750ACBECE5D2B7F545D2A434A3C5409B_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t1C147718750ACBECE5D2B7F545D2A434A3C5409B_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_42);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_44;
		L_44 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_m9D6B4042B923127DEA4A2CAA3E35EED37D75B3D0_RuntimeMethod_var, L_42, L_43);
		SizeBySpeedModule_set_size_mD906BB6EAE9613DDA6F623E4D4878D69ECB90729((&V_0), L_44, NULL);
		// break;
		goto IL_028a;
	}

IL_01ca:
	{
		// instance.sizeMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_45 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_46 = ((ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_45);
		float L_47;
		L_47 = GenericVirtualFuncInvoker1< float, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mA86928BC888E342D2C2644535E3399952F5077ED_RuntimeMethod_var, L_45, L_46);
		SizeBySpeedModule_set_sizeMultiplier_mAFACCF6252B8FB92DC3A51BCE11D22126B315901((&V_0), L_47, NULL);
		// break;
		goto IL_028a;
	}

IL_01e1:
	{
		// instance.x = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_48 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_49 = ((ES3Type_MinMaxCurve_t1C147718750ACBECE5D2B7F545D2A434A3C5409B_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t1C147718750ACBECE5D2B7F545D2A434A3C5409B_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_48);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_50;
		L_50 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_m9D6B4042B923127DEA4A2CAA3E35EED37D75B3D0_RuntimeMethod_var, L_48, L_49);
		SizeBySpeedModule_set_x_mED5B851A688588F171B38AF31B0CC91A003DA164((&V_0), L_50, NULL);
		// break;
		goto IL_028a;
	}

IL_01f8:
	{
		// instance.xMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_51 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_52 = ((ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_51);
		float L_53;
		L_53 = GenericVirtualFuncInvoker1< float, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mA86928BC888E342D2C2644535E3399952F5077ED_RuntimeMethod_var, L_51, L_52);
		SizeBySpeedModule_set_xMultiplier_m1803C7585C7DA6333FB4B3595EAD753FFD8ED32A((&V_0), L_53, NULL);
		// break;
		goto IL_028a;
	}

IL_020c:
	{
		// instance.y = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_54 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_55 = ((ES3Type_MinMaxCurve_t1C147718750ACBECE5D2B7F545D2A434A3C5409B_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t1C147718750ACBECE5D2B7F545D2A434A3C5409B_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_54);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_56;
		L_56 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_m9D6B4042B923127DEA4A2CAA3E35EED37D75B3D0_RuntimeMethod_var, L_54, L_55);
		SizeBySpeedModule_set_y_m1E9DE959AFA22DE52D24537108BD41B2D4B017E6((&V_0), L_56, NULL);
		// break;
		goto IL_028a;
	}

IL_0220:
	{
		// instance.yMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_57 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_58 = ((ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_57);
		float L_59;
		L_59 = GenericVirtualFuncInvoker1< float, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mA86928BC888E342D2C2644535E3399952F5077ED_RuntimeMethod_var, L_57, L_58);
		SizeBySpeedModule_set_yMultiplier_m4C9EE0927456366AC12C17543E95BAB3201C9DCB((&V_0), L_59, NULL);
		// break;
		goto IL_028a;
	}

IL_0234:
	{
		// instance.z = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_60 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_61 = ((ES3Type_MinMaxCurve_t1C147718750ACBECE5D2B7F545D2A434A3C5409B_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t1C147718750ACBECE5D2B7F545D2A434A3C5409B_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_60);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_62;
		L_62 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_m9D6B4042B923127DEA4A2CAA3E35EED37D75B3D0_RuntimeMethod_var, L_60, L_61);
		SizeBySpeedModule_set_z_m73C05D968B5C62551614E86A77AEF557F15734A3((&V_0), L_62, NULL);
		// break;
		goto IL_028a;
	}

IL_0248:
	{
		// instance.zMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_63 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_64 = ((ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_63);
		float L_65;
		L_65 = GenericVirtualFuncInvoker1< float, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mA86928BC888E342D2C2644535E3399952F5077ED_RuntimeMethod_var, L_63, L_64);
		SizeBySpeedModule_set_zMultiplier_m0B67A4AF3E30D31C14DBD5FAAA3EABFB787D9826((&V_0), L_65, NULL);
		// break;
		goto IL_028a;
	}

IL_025c:
	{
		// instance.separateAxes = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_66 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_67 = ((ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_66);
		bool L_68;
		L_68 = GenericVirtualFuncInvoker1< bool, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mFFB70EE53D8CD0255A4E599780F62A3EB1520E83_RuntimeMethod_var, L_66, L_67);
		SizeBySpeedModule_set_separateAxes_m5B0BA28A01D7FED6FDDA0267135B5EAE1F9C72C7((&V_0), L_68, NULL);
		// break;
		goto IL_028a;
	}

IL_0270:
	{
		// instance.range = reader.Read<UnityEngine.Vector2>(ES3Type_Vector2.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_69 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_70 = ((ES3Type_Vector2_tB51CE4B1AFCBAFE7ADC540050621735C4F8D4387_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Vector2_tB51CE4B1AFCBAFE7ADC540050621735C4F8D4387_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_69);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_71;
		L_71 = GenericVirtualFuncInvoker1< Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_m95B09869E3B912BD36BC3571D842BA21C71EB14B_RuntimeMethod_var, L_69, L_70);
		SizeBySpeedModule_set_range_m76B9B316654E44D6938A4A06DED0DF8B3CBCE4D7((&V_0), L_71, NULL);
		// break;
		goto IL_028a;
	}

IL_0284:
	{
		// reader.Skip();
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_72 = ___reader0;
		NullCheck(L_72);
		VirtualActionInvoker0::Invoke(41 /* System.Void ES3Reader::Skip() */, L_72);
	}

IL_028a:
	{
		// while((propertyName = reader.ReadPropertyName()) != null)
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_73 = ___reader0;
		NullCheck(L_73);
		String_t* L_74;
		L_74 = VirtualFuncInvoker0< String_t* >::Invoke(21 /* System.String ES3Reader::ReadPropertyName() */, L_73);
		String_t* L_75 = L_74;
		V_1 = L_75;
		if (L_75)
		{
			goto IL_000c;
		}
	}
	{
		// }
		return;
	}
}
// System.Void ES3Types.ES3Type_SizeBySpeedModule::ReadInto<UnityEngine.ParticleSystem/MainModule>(ES3Reader,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ES3Type_SizeBySpeedModule_ReadInto_TisMainModule_tC7ECD8330C14B0808478A748048988A6085CE2A9_m5EE596656DA5BD5D9D90BE069396F02183DF859E_gshared (ES3Type_SizeBySpeedModule_t2A3358BE9F6111ED907A0D4CA428148A73CD7601* __this, ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* ___reader0, RuntimeObject* ___obj1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mFFB70EE53D8CD0255A4E599780F62A3EB1520E83_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_m9D6B4042B923127DEA4A2CAA3E35EED37D75B3D0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mA86928BC888E342D2C2644535E3399952F5077ED_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_m95B09869E3B912BD36BC3571D842BA21C71EB14B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_MinMaxCurve_t1C147718750ACBECE5D2B7F545D2A434A3C5409B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_Vector2_tB51CE4B1AFCBAFE7ADC540050621735C4F8D4387_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SizeBySpeedModule_t73995CB54A0D1B06BA100EA77972D37CDF7B4DC4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral062DB096C728515E033CF8C48A1C1F0B9A79384B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1B024D537329B86AB0DF96B2A714180F442F53E9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2F8690361553406965679AEF125F896BC5FC61F5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3EE5A4671A4E5AEBD31CA5F013A7773DC18ED22B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4845015737DC41475709911228278216EE4DC3AF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8C6F88DEE0DFE3513BB8B44A8CF0FEE437F4EFFB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9384C6EF2DA5C0BD5274A0DACFF291D0ABBFD8B1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9CE1604D659135925CCC4DD1F526AFFE42E689F1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9E61658953B4F9BB4A05E3D2D2BC18990BADE934);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBD0DD0004699EF86BF0FC1D161FA3766AF5126C4);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B);
		s_Il2CppMethodInitialized = true;
	}
	SizeBySpeedModule_t73995CB54A0D1B06BA100EA77972D37CDF7B4DC4 V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	uint32_t V_2 = 0;
	{
		// var instance = (UnityEngine.ParticleSystem.SizeBySpeedModule)obj;
		RuntimeObject* L_0 = ___obj1;
		V_0 = ((*(SizeBySpeedModule_t73995CB54A0D1B06BA100EA77972D37CDF7B4DC4*)((SizeBySpeedModule_t73995CB54A0D1B06BA100EA77972D37CDF7B4DC4*)(SizeBySpeedModule_t73995CB54A0D1B06BA100EA77972D37CDF7B4DC4*)UnBox(L_0, SizeBySpeedModule_t73995CB54A0D1B06BA100EA77972D37CDF7B4DC4_il2cpp_TypeInfo_var))));
		goto IL_028a;
	}

IL_000c:
	{
		String_t* L_1 = V_1;
		uint32_t L_2;
		L_2 = U3CPrivateImplementationDetailsU3E_ComputeStringHash_m9E43873DE0DF480D27EC1C2AA3C09E74EA77F75D(L_1, NULL);
		V_2 = L_2;
		uint32_t L_3 = V_2;
		if ((!(((uint32_t)L_3) <= ((uint32_t)((int32_t)1479031685)))))
		{
			goto IL_0064;
		}
	}
	{
		uint32_t L_4 = V_2;
		if ((!(((uint32_t)L_4) <= ((uint32_t)((int32_t)597743964)))))
		{
			goto IL_003e;
		}
	}
	{
		uint32_t L_5 = V_2;
		if ((((int32_t)L_5) == ((int32_t)((int32_t)49525662))))
		{
			goto IL_00b5;
		}
	}
	{
		uint32_t L_6 = V_2;
		if ((((int32_t)L_6) == ((int32_t)((int32_t)597743964))))
		{
			goto IL_00ca;
		}
	}
	{
		goto IL_0284;
	}

IL_003e:
	{
		uint32_t L_7 = V_2;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)726266686))))
		{
			goto IL_015d;
		}
	}
	{
		uint32_t L_8 = V_2;
		if ((((int32_t)L_8) == ((int32_t)((int32_t)1105436259))))
		{
			goto IL_00df;
		}
	}
	{
		uint32_t L_9 = V_2;
		if ((((int32_t)L_9) == ((int32_t)((int32_t)1479031685))))
		{
			goto IL_0172;
		}
	}
	{
		goto IL_0284;
	}

IL_0064:
	{
		uint32_t L_10 = V_2;
		if ((!(((uint32_t)L_10) <= ((uint32_t)((int32_t)-86242094)))))
		{
			goto IL_0092;
		}
	}
	{
		uint32_t L_11 = V_2;
		if ((((int32_t)L_11) == ((int32_t)((int32_t)-1013869429))))
		{
			goto IL_0133;
		}
	}
	{
		uint32_t L_12 = V_2;
		if ((((int32_t)L_12) == ((int32_t)((int32_t)-585050980))))
		{
			goto IL_0109;
		}
	}
	{
		uint32_t L_13 = V_2;
		if ((((int32_t)L_13) == ((int32_t)((int32_t)-86242094))))
		{
			goto IL_0187;
		}
	}
	{
		goto IL_0284;
	}

IL_0092:
	{
		uint32_t L_14 = V_2;
		if ((((int32_t)L_14) == ((int32_t)((int32_t)-66302220))))
		{
			goto IL_011e;
		}
	}
	{
		uint32_t L_15 = V_2;
		if ((((int32_t)L_15) == ((int32_t)((int32_t)-49524601))))
		{
			goto IL_00f4;
		}
	}
	{
		uint32_t L_16 = V_2;
		if ((((int32_t)L_16) == ((int32_t)((int32_t)-15969363))))
		{
			goto IL_0148;
		}
	}
	{
		goto IL_0284;
	}

IL_00b5:
	{
		String_t* L_17 = V_1;
		bool L_18;
		L_18 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_17, _stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B, NULL);
		if (L_18)
		{
			goto IL_019c;
		}
	}
	{
		goto IL_0284;
	}

IL_00ca:
	{
		String_t* L_19 = V_1;
		bool L_20;
		L_20 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_19, _stringLiteral3EE5A4671A4E5AEBD31CA5F013A7773DC18ED22B, NULL);
		if (L_20)
		{
			goto IL_01b3;
		}
	}
	{
		goto IL_0284;
	}

IL_00df:
	{
		String_t* L_21 = V_1;
		bool L_22;
		L_22 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_21, _stringLiteralBD0DD0004699EF86BF0FC1D161FA3766AF5126C4, NULL);
		if (L_22)
		{
			goto IL_01ca;
		}
	}
	{
		goto IL_0284;
	}

IL_00f4:
	{
		String_t* L_23 = V_1;
		bool L_24;
		L_24 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_23, _stringLiteral062DB096C728515E033CF8C48A1C1F0B9A79384B, NULL);
		if (L_24)
		{
			goto IL_01e1;
		}
	}
	{
		goto IL_0284;
	}

IL_0109:
	{
		String_t* L_25 = V_1;
		bool L_26;
		L_26 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_25, _stringLiteral8C6F88DEE0DFE3513BB8B44A8CF0FEE437F4EFFB, NULL);
		if (L_26)
		{
			goto IL_01f8;
		}
	}
	{
		goto IL_0284;
	}

IL_011e:
	{
		String_t* L_27 = V_1;
		bool L_28;
		L_28 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_27, _stringLiteral9384C6EF2DA5C0BD5274A0DACFF291D0ABBFD8B1, NULL);
		if (L_28)
		{
			goto IL_020c;
		}
	}
	{
		goto IL_0284;
	}

IL_0133:
	{
		String_t* L_29 = V_1;
		bool L_30;
		L_30 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_29, _stringLiteral9E61658953B4F9BB4A05E3D2D2BC18990BADE934, NULL);
		if (L_30)
		{
			goto IL_0220;
		}
	}
	{
		goto IL_0284;
	}

IL_0148:
	{
		String_t* L_31 = V_1;
		bool L_32;
		L_32 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_31, _stringLiteral9CE1604D659135925CCC4DD1F526AFFE42E689F1, NULL);
		if (L_32)
		{
			goto IL_0234;
		}
	}
	{
		goto IL_0284;
	}

IL_015d:
	{
		String_t* L_33 = V_1;
		bool L_34;
		L_34 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_33, _stringLiteral2F8690361553406965679AEF125F896BC5FC61F5, NULL);
		if (L_34)
		{
			goto IL_0248;
		}
	}
	{
		goto IL_0284;
	}

IL_0172:
	{
		String_t* L_35 = V_1;
		bool L_36;
		L_36 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_35, _stringLiteral1B024D537329B86AB0DF96B2A714180F442F53E9, NULL);
		if (L_36)
		{
			goto IL_025c;
		}
	}
	{
		goto IL_0284;
	}

IL_0187:
	{
		String_t* L_37 = V_1;
		bool L_38;
		L_38 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_37, _stringLiteral4845015737DC41475709911228278216EE4DC3AF, NULL);
		if (L_38)
		{
			goto IL_0270;
		}
	}
	{
		goto IL_0284;
	}

IL_019c:
	{
		// instance.enabled = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_39 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_40 = ((ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_39);
		bool L_41;
		L_41 = GenericVirtualFuncInvoker1< bool, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mFFB70EE53D8CD0255A4E599780F62A3EB1520E83_RuntimeMethod_var, L_39, L_40);
		SizeBySpeedModule_set_enabled_m1DFF0FEFF522C52D874173B6CDAAEE94F9E8B718((&V_0), L_41, NULL);
		// break;
		goto IL_028a;
	}

IL_01b3:
	{
		// instance.size = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_42 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_43 = ((ES3Type_MinMaxCurve_t1C147718750ACBECE5D2B7F545D2A434A3C5409B_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t1C147718750ACBECE5D2B7F545D2A434A3C5409B_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_42);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_44;
		L_44 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_m9D6B4042B923127DEA4A2CAA3E35EED37D75B3D0_RuntimeMethod_var, L_42, L_43);
		SizeBySpeedModule_set_size_mD906BB6EAE9613DDA6F623E4D4878D69ECB90729((&V_0), L_44, NULL);
		// break;
		goto IL_028a;
	}

IL_01ca:
	{
		// instance.sizeMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_45 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_46 = ((ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_45);
		float L_47;
		L_47 = GenericVirtualFuncInvoker1< float, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mA86928BC888E342D2C2644535E3399952F5077ED_RuntimeMethod_var, L_45, L_46);
		SizeBySpeedModule_set_sizeMultiplier_mAFACCF6252B8FB92DC3A51BCE11D22126B315901((&V_0), L_47, NULL);
		// break;
		goto IL_028a;
	}

IL_01e1:
	{
		// instance.x = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_48 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_49 = ((ES3Type_MinMaxCurve_t1C147718750ACBECE5D2B7F545D2A434A3C5409B_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t1C147718750ACBECE5D2B7F545D2A434A3C5409B_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_48);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_50;
		L_50 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_m9D6B4042B923127DEA4A2CAA3E35EED37D75B3D0_RuntimeMethod_var, L_48, L_49);
		SizeBySpeedModule_set_x_mED5B851A688588F171B38AF31B0CC91A003DA164((&V_0), L_50, NULL);
		// break;
		goto IL_028a;
	}

IL_01f8:
	{
		// instance.xMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_51 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_52 = ((ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_51);
		float L_53;
		L_53 = GenericVirtualFuncInvoker1< float, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mA86928BC888E342D2C2644535E3399952F5077ED_RuntimeMethod_var, L_51, L_52);
		SizeBySpeedModule_set_xMultiplier_m1803C7585C7DA6333FB4B3595EAD753FFD8ED32A((&V_0), L_53, NULL);
		// break;
		goto IL_028a;
	}

IL_020c:
	{
		// instance.y = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_54 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_55 = ((ES3Type_MinMaxCurve_t1C147718750ACBECE5D2B7F545D2A434A3C5409B_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t1C147718750ACBECE5D2B7F545D2A434A3C5409B_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_54);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_56;
		L_56 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_m9D6B4042B923127DEA4A2CAA3E35EED37D75B3D0_RuntimeMethod_var, L_54, L_55);
		SizeBySpeedModule_set_y_m1E9DE959AFA22DE52D24537108BD41B2D4B017E6((&V_0), L_56, NULL);
		// break;
		goto IL_028a;
	}

IL_0220:
	{
		// instance.yMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_57 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_58 = ((ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_57);
		float L_59;
		L_59 = GenericVirtualFuncInvoker1< float, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mA86928BC888E342D2C2644535E3399952F5077ED_RuntimeMethod_var, L_57, L_58);
		SizeBySpeedModule_set_yMultiplier_m4C9EE0927456366AC12C17543E95BAB3201C9DCB((&V_0), L_59, NULL);
		// break;
		goto IL_028a;
	}

IL_0234:
	{
		// instance.z = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_60 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_61 = ((ES3Type_MinMaxCurve_t1C147718750ACBECE5D2B7F545D2A434A3C5409B_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t1C147718750ACBECE5D2B7F545D2A434A3C5409B_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_60);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_62;
		L_62 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_m9D6B4042B923127DEA4A2CAA3E35EED37D75B3D0_RuntimeMethod_var, L_60, L_61);
		SizeBySpeedModule_set_z_m73C05D968B5C62551614E86A77AEF557F15734A3((&V_0), L_62, NULL);
		// break;
		goto IL_028a;
	}

IL_0248:
	{
		// instance.zMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_63 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_64 = ((ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_63);
		float L_65;
		L_65 = GenericVirtualFuncInvoker1< float, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mA86928BC888E342D2C2644535E3399952F5077ED_RuntimeMethod_var, L_63, L_64);
		SizeBySpeedModule_set_zMultiplier_m0B67A4AF3E30D31C14DBD5FAAA3EABFB787D9826((&V_0), L_65, NULL);
		// break;
		goto IL_028a;
	}

IL_025c:
	{
		// instance.separateAxes = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_66 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_67 = ((ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_66);
		bool L_68;
		L_68 = GenericVirtualFuncInvoker1< bool, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mFFB70EE53D8CD0255A4E599780F62A3EB1520E83_RuntimeMethod_var, L_66, L_67);
		SizeBySpeedModule_set_separateAxes_m5B0BA28A01D7FED6FDDA0267135B5EAE1F9C72C7((&V_0), L_68, NULL);
		// break;
		goto IL_028a;
	}

IL_0270:
	{
		// instance.range = reader.Read<UnityEngine.Vector2>(ES3Type_Vector2.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_69 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_70 = ((ES3Type_Vector2_tB51CE4B1AFCBAFE7ADC540050621735C4F8D4387_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Vector2_tB51CE4B1AFCBAFE7ADC540050621735C4F8D4387_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_69);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_71;
		L_71 = GenericVirtualFuncInvoker1< Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_m95B09869E3B912BD36BC3571D842BA21C71EB14B_RuntimeMethod_var, L_69, L_70);
		SizeBySpeedModule_set_range_m76B9B316654E44D6938A4A06DED0DF8B3CBCE4D7((&V_0), L_71, NULL);
		// break;
		goto IL_028a;
	}

IL_0284:
	{
		// reader.Skip();
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_72 = ___reader0;
		NullCheck(L_72);
		VirtualActionInvoker0::Invoke(41 /* System.Void ES3Reader::Skip() */, L_72);
	}

IL_028a:
	{
		// while((propertyName = reader.ReadPropertyName()) != null)
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_73 = ___reader0;
		NullCheck(L_73);
		String_t* L_74;
		L_74 = VirtualFuncInvoker0< String_t* >::Invoke(21 /* System.String ES3Reader::ReadPropertyName() */, L_73);
		String_t* L_75 = L_74;
		V_1 = L_75;
		if (L_75)
		{
			goto IL_000c;
		}
	}
	{
		// }
		return;
	}
}
// System.Void ES3Types.ES3Type_SizeBySpeedModule::ReadInto<UnityEngine.ParticleSystem/NoiseModule>(ES3Reader,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ES3Type_SizeBySpeedModule_ReadInto_TisNoiseModule_tF8D6CB544A887C0C93D05A228B65E41DBD1F3AE0_m2307C344F3F4E4D95FA1EE74782554C6F004806B_gshared (ES3Type_SizeBySpeedModule_t2A3358BE9F6111ED907A0D4CA428148A73CD7601* __this, ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* ___reader0, RuntimeObject* ___obj1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mFFB70EE53D8CD0255A4E599780F62A3EB1520E83_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_m9D6B4042B923127DEA4A2CAA3E35EED37D75B3D0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mA86928BC888E342D2C2644535E3399952F5077ED_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_m95B09869E3B912BD36BC3571D842BA21C71EB14B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_MinMaxCurve_t1C147718750ACBECE5D2B7F545D2A434A3C5409B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_Vector2_tB51CE4B1AFCBAFE7ADC540050621735C4F8D4387_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SizeBySpeedModule_t73995CB54A0D1B06BA100EA77972D37CDF7B4DC4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral062DB096C728515E033CF8C48A1C1F0B9A79384B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1B024D537329B86AB0DF96B2A714180F442F53E9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2F8690361553406965679AEF125F896BC5FC61F5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3EE5A4671A4E5AEBD31CA5F013A7773DC18ED22B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4845015737DC41475709911228278216EE4DC3AF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8C6F88DEE0DFE3513BB8B44A8CF0FEE437F4EFFB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9384C6EF2DA5C0BD5274A0DACFF291D0ABBFD8B1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9CE1604D659135925CCC4DD1F526AFFE42E689F1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9E61658953B4F9BB4A05E3D2D2BC18990BADE934);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBD0DD0004699EF86BF0FC1D161FA3766AF5126C4);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B);
		s_Il2CppMethodInitialized = true;
	}
	SizeBySpeedModule_t73995CB54A0D1B06BA100EA77972D37CDF7B4DC4 V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	uint32_t V_2 = 0;
	{
		// var instance = (UnityEngine.ParticleSystem.SizeBySpeedModule)obj;
		RuntimeObject* L_0 = ___obj1;
		V_0 = ((*(SizeBySpeedModule_t73995CB54A0D1B06BA100EA77972D37CDF7B4DC4*)((SizeBySpeedModule_t73995CB54A0D1B06BA100EA77972D37CDF7B4DC4*)(SizeBySpeedModule_t73995CB54A0D1B06BA100EA77972D37CDF7B4DC4*)UnBox(L_0, SizeBySpeedModule_t73995CB54A0D1B06BA100EA77972D37CDF7B4DC4_il2cpp_TypeInfo_var))));
		goto IL_028a;
	}

IL_000c:
	{
		String_t* L_1 = V_1;
		uint32_t L_2;
		L_2 = U3CPrivateImplementationDetailsU3E_ComputeStringHash_m9E43873DE0DF480D27EC1C2AA3C09E74EA77F75D(L_1, NULL);
		V_2 = L_2;
		uint32_t L_3 = V_2;
		if ((!(((uint32_t)L_3) <= ((uint32_t)((int32_t)1479031685)))))
		{
			goto IL_0064;
		}
	}
	{
		uint32_t L_4 = V_2;
		if ((!(((uint32_t)L_4) <= ((uint32_t)((int32_t)597743964)))))
		{
			goto IL_003e;
		}
	}
	{
		uint32_t L_5 = V_2;
		if ((((int32_t)L_5) == ((int32_t)((int32_t)49525662))))
		{
			goto IL_00b5;
		}
	}
	{
		uint32_t L_6 = V_2;
		if ((((int32_t)L_6) == ((int32_t)((int32_t)597743964))))
		{
			goto IL_00ca;
		}
	}
	{
		goto IL_0284;
	}

IL_003e:
	{
		uint32_t L_7 = V_2;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)726266686))))
		{
			goto IL_015d;
		}
	}
	{
		uint32_t L_8 = V_2;
		if ((((int32_t)L_8) == ((int32_t)((int32_t)1105436259))))
		{
			goto IL_00df;
		}
	}
	{
		uint32_t L_9 = V_2;
		if ((((int32_t)L_9) == ((int32_t)((int32_t)1479031685))))
		{
			goto IL_0172;
		}
	}
	{
		goto IL_0284;
	}

IL_0064:
	{
		uint32_t L_10 = V_2;
		if ((!(((uint32_t)L_10) <= ((uint32_t)((int32_t)-86242094)))))
		{
			goto IL_0092;
		}
	}
	{
		uint32_t L_11 = V_2;
		if ((((int32_t)L_11) == ((int32_t)((int32_t)-1013869429))))
		{
			goto IL_0133;
		}
	}
	{
		uint32_t L_12 = V_2;
		if ((((int32_t)L_12) == ((int32_t)((int32_t)-585050980))))
		{
			goto IL_0109;
		}
	}
	{
		uint32_t L_13 = V_2;
		if ((((int32_t)L_13) == ((int32_t)((int32_t)-86242094))))
		{
			goto IL_0187;
		}
	}
	{
		goto IL_0284;
	}

IL_0092:
	{
		uint32_t L_14 = V_2;
		if ((((int32_t)L_14) == ((int32_t)((int32_t)-66302220))))
		{
			goto IL_011e;
		}
	}
	{
		uint32_t L_15 = V_2;
		if ((((int32_t)L_15) == ((int32_t)((int32_t)-49524601))))
		{
			goto IL_00f4;
		}
	}
	{
		uint32_t L_16 = V_2;
		if ((((int32_t)L_16) == ((int32_t)((int32_t)-15969363))))
		{
			goto IL_0148;
		}
	}
	{
		goto IL_0284;
	}

IL_00b5:
	{
		String_t* L_17 = V_1;
		bool L_18;
		L_18 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_17, _stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B, NULL);
		if (L_18)
		{
			goto IL_019c;
		}
	}
	{
		goto IL_0284;
	}

IL_00ca:
	{
		String_t* L_19 = V_1;
		bool L_20;
		L_20 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_19, _stringLiteral3EE5A4671A4E5AEBD31CA5F013A7773DC18ED22B, NULL);
		if (L_20)
		{
			goto IL_01b3;
		}
	}
	{
		goto IL_0284;
	}

IL_00df:
	{
		String_t* L_21 = V_1;
		bool L_22;
		L_22 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_21, _stringLiteralBD0DD0004699EF86BF0FC1D161FA3766AF5126C4, NULL);
		if (L_22)
		{
			goto IL_01ca;
		}
	}
	{
		goto IL_0284;
	}

IL_00f4:
	{
		String_t* L_23 = V_1;
		bool L_24;
		L_24 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_23, _stringLiteral062DB096C728515E033CF8C48A1C1F0B9A79384B, NULL);
		if (L_24)
		{
			goto IL_01e1;
		}
	}
	{
		goto IL_0284;
	}

IL_0109:
	{
		String_t* L_25 = V_1;
		bool L_26;
		L_26 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_25, _stringLiteral8C6F88DEE0DFE3513BB8B44A8CF0FEE437F4EFFB, NULL);
		if (L_26)
		{
			goto IL_01f8;
		}
	}
	{
		goto IL_0284;
	}

IL_011e:
	{
		String_t* L_27 = V_1;
		bool L_28;
		L_28 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_27, _stringLiteral9384C6EF2DA5C0BD5274A0DACFF291D0ABBFD8B1, NULL);
		if (L_28)
		{
			goto IL_020c;
		}
	}
	{
		goto IL_0284;
	}

IL_0133:
	{
		String_t* L_29 = V_1;
		bool L_30;
		L_30 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_29, _stringLiteral9E61658953B4F9BB4A05E3D2D2BC18990BADE934, NULL);
		if (L_30)
		{
			goto IL_0220;
		}
	}
	{
		goto IL_0284;
	}

IL_0148:
	{
		String_t* L_31 = V_1;
		bool L_32;
		L_32 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_31, _stringLiteral9CE1604D659135925CCC4DD1F526AFFE42E689F1, NULL);
		if (L_32)
		{
			goto IL_0234;
		}
	}
	{
		goto IL_0284;
	}

IL_015d:
	{
		String_t* L_33 = V_1;
		bool L_34;
		L_34 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_33, _stringLiteral2F8690361553406965679AEF125F896BC5FC61F5, NULL);
		if (L_34)
		{
			goto IL_0248;
		}
	}
	{
		goto IL_0284;
	}

IL_0172:
	{
		String_t* L_35 = V_1;
		bool L_36;
		L_36 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_35, _stringLiteral1B024D537329B86AB0DF96B2A714180F442F53E9, NULL);
		if (L_36)
		{
			goto IL_025c;
		}
	}
	{
		goto IL_0284;
	}

IL_0187:
	{
		String_t* L_37 = V_1;
		bool L_38;
		L_38 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_37, _stringLiteral4845015737DC41475709911228278216EE4DC3AF, NULL);
		if (L_38)
		{
			goto IL_0270;
		}
	}
	{
		goto IL_0284;
	}

IL_019c:
	{
		// instance.enabled = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_39 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_40 = ((ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_39);
		bool L_41;
		L_41 = GenericVirtualFuncInvoker1< bool, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mFFB70EE53D8CD0255A4E599780F62A3EB1520E83_RuntimeMethod_var, L_39, L_40);
		SizeBySpeedModule_set_enabled_m1DFF0FEFF522C52D874173B6CDAAEE94F9E8B718((&V_0), L_41, NULL);
		// break;
		goto IL_028a;
	}

IL_01b3:
	{
		// instance.size = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_42 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_43 = ((ES3Type_MinMaxCurve_t1C147718750ACBECE5D2B7F545D2A434A3C5409B_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t1C147718750ACBECE5D2B7F545D2A434A3C5409B_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_42);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_44;
		L_44 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_m9D6B4042B923127DEA4A2CAA3E35EED37D75B3D0_RuntimeMethod_var, L_42, L_43);
		SizeBySpeedModule_set_size_mD906BB6EAE9613DDA6F623E4D4878D69ECB90729((&V_0), L_44, NULL);
		// break;
		goto IL_028a;
	}

IL_01ca:
	{
		// instance.sizeMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_45 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_46 = ((ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_45);
		float L_47;
		L_47 = GenericVirtualFuncInvoker1< float, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mA86928BC888E342D2C2644535E3399952F5077ED_RuntimeMethod_var, L_45, L_46);
		SizeBySpeedModule_set_sizeMultiplier_mAFACCF6252B8FB92DC3A51BCE11D22126B315901((&V_0), L_47, NULL);
		// break;
		goto IL_028a;
	}

IL_01e1:
	{
		// instance.x = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_48 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_49 = ((ES3Type_MinMaxCurve_t1C147718750ACBECE5D2B7F545D2A434A3C5409B_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t1C147718750ACBECE5D2B7F545D2A434A3C5409B_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_48);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_50;
		L_50 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_m9D6B4042B923127DEA4A2CAA3E35EED37D75B3D0_RuntimeMethod_var, L_48, L_49);
		SizeBySpeedModule_set_x_mED5B851A688588F171B38AF31B0CC91A003DA164((&V_0), L_50, NULL);
		// break;
		goto IL_028a;
	}

IL_01f8:
	{
		// instance.xMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_51 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_52 = ((ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_51);
		float L_53;
		L_53 = GenericVirtualFuncInvoker1< float, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mA86928BC888E342D2C2644535E3399952F5077ED_RuntimeMethod_var, L_51, L_52);
		SizeBySpeedModule_set_xMultiplier_m1803C7585C7DA6333FB4B3595EAD753FFD8ED32A((&V_0), L_53, NULL);
		// break;
		goto IL_028a;
	}

IL_020c:
	{
		// instance.y = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_54 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_55 = ((ES3Type_MinMaxCurve_t1C147718750ACBECE5D2B7F545D2A434A3C5409B_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t1C147718750ACBECE5D2B7F545D2A434A3C5409B_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_54);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_56;
		L_56 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_m9D6B4042B923127DEA4A2CAA3E35EED37D75B3D0_RuntimeMethod_var, L_54, L_55);
		SizeBySpeedModule_set_y_m1E9DE959AFA22DE52D24537108BD41B2D4B017E6((&V_0), L_56, NULL);
		// break;
		goto IL_028a;
	}

IL_0220:
	{
		// instance.yMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_57 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_58 = ((ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_57);
		float L_59;
		L_59 = GenericVirtualFuncInvoker1< float, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mA86928BC888E342D2C2644535E3399952F5077ED_RuntimeMethod_var, L_57, L_58);
		SizeBySpeedModule_set_yMultiplier_m4C9EE0927456366AC12C17543E95BAB3201C9DCB((&V_0), L_59, NULL);
		// break;
		goto IL_028a;
	}

IL_0234:
	{
		// instance.z = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_60 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_61 = ((ES3Type_MinMaxCurve_t1C147718750ACBECE5D2B7F545D2A434A3C5409B_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t1C147718750ACBECE5D2B7F545D2A434A3C5409B_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_60);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_62;
		L_62 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_m9D6B4042B923127DEA4A2CAA3E35EED37D75B3D0_RuntimeMethod_var, L_60, L_61);
		SizeBySpeedModule_set_z_m73C05D968B5C62551614E86A77AEF557F15734A3((&V_0), L_62, NULL);
		// break;
		goto IL_028a;
	}

IL_0248:
	{
		// instance.zMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_63 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_64 = ((ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_63);
		float L_65;
		L_65 = GenericVirtualFuncInvoker1< float, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mA86928BC888E342D2C2644535E3399952F5077ED_RuntimeMethod_var, L_63, L_64);
		SizeBySpeedModule_set_zMultiplier_m0B67A4AF3E30D31C14DBD5FAAA3EABFB787D9826((&V_0), L_65, NULL);
		// break;
		goto IL_028a;
	}

IL_025c:
	{
		// instance.separateAxes = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_66 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_67 = ((ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_66);
		bool L_68;
		L_68 = GenericVirtualFuncInvoker1< bool, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mFFB70EE53D8CD0255A4E599780F62A3EB1520E83_RuntimeMethod_var, L_66, L_67);
		SizeBySpeedModule_set_separateAxes_m5B0BA28A01D7FED6FDDA0267135B5EAE1F9C72C7((&V_0), L_68, NULL);
		// break;
		goto IL_028a;
	}

IL_0270:
	{
		// instance.range = reader.Read<UnityEngine.Vector2>(ES3Type_Vector2.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_69 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_70 = ((ES3Type_Vector2_tB51CE4B1AFCBAFE7ADC540050621735C4F8D4387_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Vector2_tB51CE4B1AFCBAFE7ADC540050621735C4F8D4387_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_69);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_71;
		L_71 = GenericVirtualFuncInvoker1< Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_m95B09869E3B912BD36BC3571D842BA21C71EB14B_RuntimeMethod_var, L_69, L_70);
		SizeBySpeedModule_set_range_m76B9B316654E44D6938A4A06DED0DF8B3CBCE4D7((&V_0), L_71, NULL);
		// break;
		goto IL_028a;
	}

IL_0284:
	{
		// reader.Skip();
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_72 = ___reader0;
		NullCheck(L_72);
		VirtualActionInvoker0::Invoke(41 /* System.Void ES3Reader::Skip() */, L_72);
	}

IL_028a:
	{
		// while((propertyName = reader.ReadPropertyName()) != null)
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_73 = ___reader0;
		NullCheck(L_73);
		String_t* L_74;
		L_74 = VirtualFuncInvoker0< String_t* >::Invoke(21 /* System.String ES3Reader::ReadPropertyName() */, L_73);
		String_t* L_75 = L_74;
		V_1 = L_75;
		if (L_75)
		{
			goto IL_000c;
		}
	}
	{
		// }
		return;
	}
}
// System.Void ES3Types.ES3Type_SizeBySpeedModule::ReadInto<UnityEngine.ParticleSystem/RotationBySpeedModule>(ES3Reader,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ES3Type_SizeBySpeedModule_ReadInto_TisRotationBySpeedModule_tBCB7E7C1B402D1492310016D5F8FBBA4C15C26A6_mC267619965F1D4C6D7E562CD036B8FA5750EE550_gshared (ES3Type_SizeBySpeedModule_t2A3358BE9F6111ED907A0D4CA428148A73CD7601* __this, ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* ___reader0, RuntimeObject* ___obj1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mFFB70EE53D8CD0255A4E599780F62A3EB1520E83_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_m9D6B4042B923127DEA4A2CAA3E35EED37D75B3D0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mA86928BC888E342D2C2644535E3399952F5077ED_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_m95B09869E3B912BD36BC3571D842BA21C71EB14B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_MinMaxCurve_t1C147718750ACBECE5D2B7F545D2A434A3C5409B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_Vector2_tB51CE4B1AFCBAFE7ADC540050621735C4F8D4387_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SizeBySpeedModule_t73995CB54A0D1B06BA100EA77972D37CDF7B4DC4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral062DB096C728515E033CF8C48A1C1F0B9A79384B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1B024D537329B86AB0DF96B2A714180F442F53E9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2F8690361553406965679AEF125F896BC5FC61F5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3EE5A4671A4E5AEBD31CA5F013A7773DC18ED22B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4845015737DC41475709911228278216EE4DC3AF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8C6F88DEE0DFE3513BB8B44A8CF0FEE437F4EFFB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9384C6EF2DA5C0BD5274A0DACFF291D0ABBFD8B1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9CE1604D659135925CCC4DD1F526AFFE42E689F1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9E61658953B4F9BB4A05E3D2D2BC18990BADE934);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBD0DD0004699EF86BF0FC1D161FA3766AF5126C4);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B);
		s_Il2CppMethodInitialized = true;
	}
	SizeBySpeedModule_t73995CB54A0D1B06BA100EA77972D37CDF7B4DC4 V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	uint32_t V_2 = 0;
	{
		// var instance = (UnityEngine.ParticleSystem.SizeBySpeedModule)obj;
		RuntimeObject* L_0 = ___obj1;
		V_0 = ((*(SizeBySpeedModule_t73995CB54A0D1B06BA100EA77972D37CDF7B4DC4*)((SizeBySpeedModule_t73995CB54A0D1B06BA100EA77972D37CDF7B4DC4*)(SizeBySpeedModule_t73995CB54A0D1B06BA100EA77972D37CDF7B4DC4*)UnBox(L_0, SizeBySpeedModule_t73995CB54A0D1B06BA100EA77972D37CDF7B4DC4_il2cpp_TypeInfo_var))));
		goto IL_028a;
	}

IL_000c:
	{
		String_t* L_1 = V_1;
		uint32_t L_2;
		L_2 = U3CPrivateImplementationDetailsU3E_ComputeStringHash_m9E43873DE0DF480D27EC1C2AA3C09E74EA77F75D(L_1, NULL);
		V_2 = L_2;
		uint32_t L_3 = V_2;
		if ((!(((uint32_t)L_3) <= ((uint32_t)((int32_t)1479031685)))))
		{
			goto IL_0064;
		}
	}
	{
		uint32_t L_4 = V_2;
		if ((!(((uint32_t)L_4) <= ((uint32_t)((int32_t)597743964)))))
		{
			goto IL_003e;
		}
	}
	{
		uint32_t L_5 = V_2;
		if ((((int32_t)L_5) == ((int32_t)((int32_t)49525662))))
		{
			goto IL_00b5;
		}
	}
	{
		uint32_t L_6 = V_2;
		if ((((int32_t)L_6) == ((int32_t)((int32_t)597743964))))
		{
			goto IL_00ca;
		}
	}
	{
		goto IL_0284;
	}

IL_003e:
	{
		uint32_t L_7 = V_2;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)726266686))))
		{
			goto IL_015d;
		}
	}
	{
		uint32_t L_8 = V_2;
		if ((((int32_t)L_8) == ((int32_t)((int32_t)1105436259))))
		{
			goto IL_00df;
		}
	}
	{
		uint32_t L_9 = V_2;
		if ((((int32_t)L_9) == ((int32_t)((int32_t)1479031685))))
		{
			goto IL_0172;
		}
	}
	{
		goto IL_0284;
	}

IL_0064:
	{
		uint32_t L_10 = V_2;
		if ((!(((uint32_t)L_10) <= ((uint32_t)((int32_t)-86242094)))))
		{
			goto IL_0092;
		}
	}
	{
		uint32_t L_11 = V_2;
		if ((((int32_t)L_11) == ((int32_t)((int32_t)-1013869429))))
		{
			goto IL_0133;
		}
	}
	{
		uint32_t L_12 = V_2;
		if ((((int32_t)L_12) == ((int32_t)((int32_t)-585050980))))
		{
			goto IL_0109;
		}
	}
	{
		uint32_t L_13 = V_2;
		if ((((int32_t)L_13) == ((int32_t)((int32_t)-86242094))))
		{
			goto IL_0187;
		}
	}
	{
		goto IL_0284;
	}

IL_0092:
	{
		uint32_t L_14 = V_2;
		if ((((int32_t)L_14) == ((int32_t)((int32_t)-66302220))))
		{
			goto IL_011e;
		}
	}
	{
		uint32_t L_15 = V_2;
		if ((((int32_t)L_15) == ((int32_t)((int32_t)-49524601))))
		{
			goto IL_00f4;
		}
	}
	{
		uint32_t L_16 = V_2;
		if ((((int32_t)L_16) == ((int32_t)((int32_t)-15969363))))
		{
			goto IL_0148;
		}
	}
	{
		goto IL_0284;
	}

IL_00b5:
	{
		String_t* L_17 = V_1;
		bool L_18;
		L_18 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_17, _stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B, NULL);
		if (L_18)
		{
			goto IL_019c;
		}
	}
	{
		goto IL_0284;
	}

IL_00ca:
	{
		String_t* L_19 = V_1;
		bool L_20;
		L_20 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_19, _stringLiteral3EE5A4671A4E5AEBD31CA5F013A7773DC18ED22B, NULL);
		if (L_20)
		{
			goto IL_01b3;
		}
	}
	{
		goto IL_0284;
	}

IL_00df:
	{
		String_t* L_21 = V_1;
		bool L_22;
		L_22 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_21, _stringLiteralBD0DD0004699EF86BF0FC1D161FA3766AF5126C4, NULL);
		if (L_22)
		{
			goto IL_01ca;
		}
	}
	{
		goto IL_0284;
	}

IL_00f4:
	{
		String_t* L_23 = V_1;
		bool L_24;
		L_24 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_23, _stringLiteral062DB096C728515E033CF8C48A1C1F0B9A79384B, NULL);
		if (L_24)
		{
			goto IL_01e1;
		}
	}
	{
		goto IL_0284;
	}

IL_0109:
	{
		String_t* L_25 = V_1;
		bool L_26;
		L_26 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_25, _stringLiteral8C6F88DEE0DFE3513BB8B44A8CF0FEE437F4EFFB, NULL);
		if (L_26)
		{
			goto IL_01f8;
		}
	}
	{
		goto IL_0284;
	}

IL_011e:
	{
		String_t* L_27 = V_1;
		bool L_28;
		L_28 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_27, _stringLiteral9384C6EF2DA5C0BD5274A0DACFF291D0ABBFD8B1, NULL);
		if (L_28)
		{
			goto IL_020c;
		}
	}
	{
		goto IL_0284;
	}

IL_0133:
	{
		String_t* L_29 = V_1;
		bool L_30;
		L_30 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_29, _stringLiteral9E61658953B4F9BB4A05E3D2D2BC18990BADE934, NULL);
		if (L_30)
		{
			goto IL_0220;
		}
	}
	{
		goto IL_0284;
	}

IL_0148:
	{
		String_t* L_31 = V_1;
		bool L_32;
		L_32 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_31, _stringLiteral9CE1604D659135925CCC4DD1F526AFFE42E689F1, NULL);
		if (L_32)
		{
			goto IL_0234;
		}
	}
	{
		goto IL_0284;
	}

IL_015d:
	{
		String_t* L_33 = V_1;
		bool L_34;
		L_34 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_33, _stringLiteral2F8690361553406965679AEF125F896BC5FC61F5, NULL);
		if (L_34)
		{
			goto IL_0248;
		}
	}
	{
		goto IL_0284;
	}

IL_0172:
	{
		String_t* L_35 = V_1;
		bool L_36;
		L_36 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_35, _stringLiteral1B024D537329B86AB0DF96B2A714180F442F53E9, NULL);
		if (L_36)
		{
			goto IL_025c;
		}
	}
	{
		goto IL_0284;
	}

IL_0187:
	{
		String_t* L_37 = V_1;
		bool L_38;
		L_38 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_37, _stringLiteral4845015737DC41475709911228278216EE4DC3AF, NULL);
		if (L_38)
		{
			goto IL_0270;
		}
	}
	{
		goto IL_0284;
	}

IL_019c:
	{
		// instance.enabled = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_39 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_40 = ((ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_39);
		bool L_41;
		L_41 = GenericVirtualFuncInvoker1< bool, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mFFB70EE53D8CD0255A4E599780F62A3EB1520E83_RuntimeMethod_var, L_39, L_40);
		SizeBySpeedModule_set_enabled_m1DFF0FEFF522C52D874173B6CDAAEE94F9E8B718((&V_0), L_41, NULL);
		// break;
		goto IL_028a;
	}

IL_01b3:
	{
		// instance.size = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_42 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_43 = ((ES3Type_MinMaxCurve_t1C147718750ACBECE5D2B7F545D2A434A3C5409B_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t1C147718750ACBECE5D2B7F545D2A434A3C5409B_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_42);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_44;
		L_44 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_m9D6B4042B923127DEA4A2CAA3E35EED37D75B3D0_RuntimeMethod_var, L_42, L_43);
		SizeBySpeedModule_set_size_mD906BB6EAE9613DDA6F623E4D4878D69ECB90729((&V_0), L_44, NULL);
		// break;
		goto IL_028a;
	}

IL_01ca:
	{
		// instance.sizeMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_45 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_46 = ((ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_45);
		float L_47;
		L_47 = GenericVirtualFuncInvoker1< float, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mA86928BC888E342D2C2644535E3399952F5077ED_RuntimeMethod_var, L_45, L_46);
		SizeBySpeedModule_set_sizeMultiplier_mAFACCF6252B8FB92DC3A51BCE11D22126B315901((&V_0), L_47, NULL);
		// break;
		goto IL_028a;
	}

IL_01e1:
	{
		// instance.x = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_48 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_49 = ((ES3Type_MinMaxCurve_t1C147718750ACBECE5D2B7F545D2A434A3C5409B_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t1C147718750ACBECE5D2B7F545D2A434A3C5409B_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_48);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_50;
		L_50 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_m9D6B4042B923127DEA4A2CAA3E35EED37D75B3D0_RuntimeMethod_var, L_48, L_49);
		SizeBySpeedModule_set_x_mED5B851A688588F171B38AF31B0CC91A003DA164((&V_0), L_50, NULL);
		// break;
		goto IL_028a;
	}

IL_01f8:
	{
		// instance.xMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_51 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_52 = ((ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_51);
		float L_53;
		L_53 = GenericVirtualFuncInvoker1< float, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mA86928BC888E342D2C2644535E3399952F5077ED_RuntimeMethod_var, L_51, L_52);
		SizeBySpeedModule_set_xMultiplier_m1803C7585C7DA6333FB4B3595EAD753FFD8ED32A((&V_0), L_53, NULL);
		// break;
		goto IL_028a;
	}

IL_020c:
	{
		// instance.y = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_54 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_55 = ((ES3Type_MinMaxCurve_t1C147718750ACBECE5D2B7F545D2A434A3C5409B_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t1C147718750ACBECE5D2B7F545D2A434A3C5409B_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_54);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_56;
		L_56 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_m9D6B4042B923127DEA4A2CAA3E35EED37D75B3D0_RuntimeMethod_var, L_54, L_55);
		SizeBySpeedModule_set_y_m1E9DE959AFA22DE52D24537108BD41B2D4B017E6((&V_0), L_56, NULL);
		// break;
		goto IL_028a;
	}

IL_0220:
	{
		// instance.yMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_57 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_58 = ((ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_57);
		float L_59;
		L_59 = GenericVirtualFuncInvoker1< float, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mA86928BC888E342D2C2644535E3399952F5077ED_RuntimeMethod_var, L_57, L_58);
		SizeBySpeedModule_set_yMultiplier_m4C9EE0927456366AC12C17543E95BAB3201C9DCB((&V_0), L_59, NULL);
		// break;
		goto IL_028a;
	}

IL_0234:
	{
		// instance.z = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_60 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_61 = ((ES3Type_MinMaxCurve_t1C147718750ACBECE5D2B7F545D2A434A3C5409B_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t1C147718750ACBECE5D2B7F545D2A434A3C5409B_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_60);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_62;
		L_62 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_m9D6B4042B923127DEA4A2CAA3E35EED37D75B3D0_RuntimeMethod_var, L_60, L_61);
		SizeBySpeedModule_set_z_m73C05D968B5C62551614E86A77AEF557F15734A3((&V_0), L_62, NULL);
		// break;
		goto IL_028a;
	}

IL_0248:
	{
		// instance.zMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_63 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_64 = ((ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_63);
		float L_65;
		L_65 = GenericVirtualFuncInvoker1< float, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mA86928BC888E342D2C2644535E3399952F5077ED_RuntimeMethod_var, L_63, L_64);
		SizeBySpeedModule_set_zMultiplier_m0B67A4AF3E30D31C14DBD5FAAA3EABFB787D9826((&V_0), L_65, NULL);
		// break;
		goto IL_028a;
	}

IL_025c:
	{
		// instance.separateAxes = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_66 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_67 = ((ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_66);
		bool L_68;
		L_68 = GenericVirtualFuncInvoker1< bool, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mFFB70EE53D8CD0255A4E599780F62A3EB1520E83_RuntimeMethod_var, L_66, L_67);
		SizeBySpeedModule_set_separateAxes_m5B0BA28A01D7FED6FDDA0267135B5EAE1F9C72C7((&V_0), L_68, NULL);
		// break;
		goto IL_028a;
	}

IL_0270:
	{
		// instance.range = reader.Read<UnityEngine.Vector2>(ES3Type_Vector2.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_69 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_70 = ((ES3Type_Vector2_tB51CE4B1AFCBAFE7ADC540050621735C4F8D4387_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Vector2_tB51CE4B1AFCBAFE7ADC540050621735C4F8D4387_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_69);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_71;
		L_71 = GenericVirtualFuncInvoker1< Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_m95B09869E3B912BD36BC3571D842BA21C71EB14B_RuntimeMethod_var, L_69, L_70);
		SizeBySpeedModule_set_range_m76B9B316654E44D6938A4A06DED0DF8B3CBCE4D7((&V_0), L_71, NULL);
		// break;
		goto IL_028a;
	}

IL_0284:
	{
		// reader.Skip();
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_72 = ___reader0;
		NullCheck(L_72);
		VirtualActionInvoker0::Invoke(41 /* System.Void ES3Reader::Skip() */, L_72);
	}

IL_028a:
	{
		// while((propertyName = reader.ReadPropertyName()) != null)
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_73 = ___reader0;
		NullCheck(L_73);
		String_t* L_74;
		L_74 = VirtualFuncInvoker0< String_t* >::Invoke(21 /* System.String ES3Reader::ReadPropertyName() */, L_73);
		String_t* L_75 = L_74;
		V_1 = L_75;
		if (L_75)
		{
			goto IL_000c;
		}
	}
	{
		// }
		return;
	}
}
// System.Void ES3Types.ES3Type_SizeBySpeedModule::ReadInto<UnityEngine.ParticleSystem/RotationOverLifetimeModule>(ES3Reader,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ES3Type_SizeBySpeedModule_ReadInto_TisRotationOverLifetimeModule_tEE08858451167B6DDE6DD36FDCF11E74C77D79E6_m377FCD5F4580DC8ADA35D66C33CA1908E9F64883_gshared (ES3Type_SizeBySpeedModule_t2A3358BE9F6111ED907A0D4CA428148A73CD7601* __this, ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* ___reader0, RuntimeObject* ___obj1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mFFB70EE53D8CD0255A4E599780F62A3EB1520E83_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_m9D6B4042B923127DEA4A2CAA3E35EED37D75B3D0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mA86928BC888E342D2C2644535E3399952F5077ED_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_m95B09869E3B912BD36BC3571D842BA21C71EB14B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_MinMaxCurve_t1C147718750ACBECE5D2B7F545D2A434A3C5409B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_Vector2_tB51CE4B1AFCBAFE7ADC540050621735C4F8D4387_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SizeBySpeedModule_t73995CB54A0D1B06BA100EA77972D37CDF7B4DC4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral062DB096C728515E033CF8C48A1C1F0B9A79384B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1B024D537329B86AB0DF96B2A714180F442F53E9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2F8690361553406965679AEF125F896BC5FC61F5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3EE5A4671A4E5AEBD31CA5F013A7773DC18ED22B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4845015737DC41475709911228278216EE4DC3AF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8C6F88DEE0DFE3513BB8B44A8CF0FEE437F4EFFB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9384C6EF2DA5C0BD5274A0DACFF291D0ABBFD8B1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9CE1604D659135925CCC4DD1F526AFFE42E689F1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9E61658953B4F9BB4A05E3D2D2BC18990BADE934);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBD0DD0004699EF86BF0FC1D161FA3766AF5126C4);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B);
		s_Il2CppMethodInitialized = true;
	}
	SizeBySpeedModule_t73995CB54A0D1B06BA100EA77972D37CDF7B4DC4 V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	uint32_t V_2 = 0;
	{
		// var instance = (UnityEngine.ParticleSystem.SizeBySpeedModule)obj;
		RuntimeObject* L_0 = ___obj1;
		V_0 = ((*(SizeBySpeedModule_t73995CB54A0D1B06BA100EA77972D37CDF7B4DC4*)((SizeBySpeedModule_t73995CB54A0D1B06BA100EA77972D37CDF7B4DC4*)(SizeBySpeedModule_t73995CB54A0D1B06BA100EA77972D37CDF7B4DC4*)UnBox(L_0, SizeBySpeedModule_t73995CB54A0D1B06BA100EA77972D37CDF7B4DC4_il2cpp_TypeInfo_var))));
		goto IL_028a;
	}

IL_000c:
	{
		String_t* L_1 = V_1;
		uint32_t L_2;
		L_2 = U3CPrivateImplementationDetailsU3E_ComputeStringHash_m9E43873DE0DF480D27EC1C2AA3C09E74EA77F75D(L_1, NULL);
		V_2 = L_2;
		uint32_t L_3 = V_2;
		if ((!(((uint32_t)L_3) <= ((uint32_t)((int32_t)1479031685)))))
		{
			goto IL_0064;
		}
	}
	{
		uint32_t L_4 = V_2;
		if ((!(((uint32_t)L_4) <= ((uint32_t)((int32_t)597743964)))))
		{
			goto IL_003e;
		}
	}
	{
		uint32_t L_5 = V_2;
		if ((((int32_t)L_5) == ((int32_t)((int32_t)49525662))))
		{
			goto IL_00b5;
		}
	}
	{
		uint32_t L_6 = V_2;
		if ((((int32_t)L_6) == ((int32_t)((int32_t)597743964))))
		{
			goto IL_00ca;
		}
	}
	{
		goto IL_0284;
	}

IL_003e:
	{
		uint32_t L_7 = V_2;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)726266686))))
		{
			goto IL_015d;
		}
	}
	{
		uint32_t L_8 = V_2;
		if ((((int32_t)L_8) == ((int32_t)((int32_t)1105436259))))
		{
			goto IL_00df;
		}
	}
	{
		uint32_t L_9 = V_2;
		if ((((int32_t)L_9) == ((int32_t)((int32_t)1479031685))))
		{
			goto IL_0172;
		}
	}
	{
		goto IL_0284;
	}

IL_0064:
	{
		uint32_t L_10 = V_2;
		if ((!(((uint32_t)L_10) <= ((uint32_t)((int32_t)-86242094)))))
		{
			goto IL_0092;
		}
	}
	{
		uint32_t L_11 = V_2;
		if ((((int32_t)L_11) == ((int32_t)((int32_t)-1013869429))))
		{
			goto IL_0133;
		}
	}
	{
		uint32_t L_12 = V_2;
		if ((((int32_t)L_12) == ((int32_t)((int32_t)-585050980))))
		{
			goto IL_0109;
		}
	}
	{
		uint32_t L_13 = V_2;
		if ((((int32_t)L_13) == ((int32_t)((int32_t)-86242094))))
		{
			goto IL_0187;
		}
	}
	{
		goto IL_0284;
	}

IL_0092:
	{
		uint32_t L_14 = V_2;
		if ((((int32_t)L_14) == ((int32_t)((int32_t)-66302220))))
		{
			goto IL_011e;
		}
	}
	{
		uint32_t L_15 = V_2;
		if ((((int32_t)L_15) == ((int32_t)((int32_t)-49524601))))
		{
			goto IL_00f4;
		}
	}
	{
		uint32_t L_16 = V_2;
		if ((((int32_t)L_16) == ((int32_t)((int32_t)-15969363))))
		{
			goto IL_0148;
		}
	}
	{
		goto IL_0284;
	}

IL_00b5:
	{
		String_t* L_17 = V_1;
		bool L_18;
		L_18 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_17, _stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B, NULL);
		if (L_18)
		{
			goto IL_019c;
		}
	}
	{
		goto IL_0284;
	}

IL_00ca:
	{
		String_t* L_19 = V_1;
		bool L_20;
		L_20 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_19, _stringLiteral3EE5A4671A4E5AEBD31CA5F013A7773DC18ED22B, NULL);
		if (L_20)
		{
			goto IL_01b3;
		}
	}
	{
		goto IL_0284;
	}

IL_00df:
	{
		String_t* L_21 = V_1;
		bool L_22;
		L_22 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_21, _stringLiteralBD0DD0004699EF86BF0FC1D161FA3766AF5126C4, NULL);
		if (L_22)
		{
			goto IL_01ca;
		}
	}
	{
		goto IL_0284;
	}

IL_00f4:
	{
		String_t* L_23 = V_1;
		bool L_24;
		L_24 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_23, _stringLiteral062DB096C728515E033CF8C48A1C1F0B9A79384B, NULL);
		if (L_24)
		{
			goto IL_01e1;
		}
	}
	{
		goto IL_0284;
	}

IL_0109:
	{
		String_t* L_25 = V_1;
		bool L_26;
		L_26 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_25, _stringLiteral8C6F88DEE0DFE3513BB8B44A8CF0FEE437F4EFFB, NULL);
		if (L_26)
		{
			goto IL_01f8;
		}
	}
	{
		goto IL_0284;
	}

IL_011e:
	{
		String_t* L_27 = V_1;
		bool L_28;
		L_28 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_27, _stringLiteral9384C6EF2DA5C0BD5274A0DACFF291D0ABBFD8B1, NULL);
		if (L_28)
		{
			goto IL_020c;
		}
	}
	{
		goto IL_0284;
	}

IL_0133:
	{
		String_t* L_29 = V_1;
		bool L_30;
		L_30 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_29, _stringLiteral9E61658953B4F9BB4A05E3D2D2BC18990BADE934, NULL);
		if (L_30)
		{
			goto IL_0220;
		}
	}
	{
		goto IL_0284;
	}

IL_0148:
	{
		String_t* L_31 = V_1;
		bool L_32;
		L_32 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_31, _stringLiteral9CE1604D659135925CCC4DD1F526AFFE42E689F1, NULL);
		if (L_32)
		{
			goto IL_0234;
		}
	}
	{
		goto IL_0284;
	}

IL_015d:
	{
		String_t* L_33 = V_1;
		bool L_34;
		L_34 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_33, _stringLiteral2F8690361553406965679AEF125F896BC5FC61F5, NULL);
		if (L_34)
		{
			goto IL_0248;
		}
	}
	{
		goto IL_0284;
	}

IL_0172:
	{
		String_t* L_35 = V_1;
		bool L_36;
		L_36 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_35, _stringLiteral1B024D537329B86AB0DF96B2A714180F442F53E9, NULL);
		if (L_36)
		{
			goto IL_025c;
		}
	}
	{
		goto IL_0284;
	}

IL_0187:
	{
		String_t* L_37 = V_1;
		bool L_38;
		L_38 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_37, _stringLiteral4845015737DC41475709911228278216EE4DC3AF, NULL);
		if (L_38)
		{
			goto IL_0270;
		}
	}
	{
		goto IL_0284;
	}

IL_019c:
	{
		// instance.enabled = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_39 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_40 = ((ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_39);
		bool L_41;
		L_41 = GenericVirtualFuncInvoker1< bool, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mFFB70EE53D8CD0255A4E599780F62A3EB1520E83_RuntimeMethod_var, L_39, L_40);
		SizeBySpeedModule_set_enabled_m1DFF0FEFF522C52D874173B6CDAAEE94F9E8B718((&V_0), L_41, NULL);
		// break;
		goto IL_028a;
	}

IL_01b3:
	{
		// instance.size = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_42 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_43 = ((ES3Type_MinMaxCurve_t1C147718750ACBECE5D2B7F545D2A434A3C5409B_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t1C147718750ACBECE5D2B7F545D2A434A3C5409B_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_42);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_44;
		L_44 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_m9D6B4042B923127DEA4A2CAA3E35EED37D75B3D0_RuntimeMethod_var, L_42, L_43);
		SizeBySpeedModule_set_size_mD906BB6EAE9613DDA6F623E4D4878D69ECB90729((&V_0), L_44, NULL);
		// break;
		goto IL_028a;
	}

IL_01ca:
	{
		// instance.sizeMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_45 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_46 = ((ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_45);
		float L_47;
		L_47 = GenericVirtualFuncInvoker1< float, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mA86928BC888E342D2C2644535E3399952F5077ED_RuntimeMethod_var, L_45, L_46);
		SizeBySpeedModule_set_sizeMultiplier_mAFACCF6252B8FB92DC3A51BCE11D22126B315901((&V_0), L_47, NULL);
		// break;
		goto IL_028a;
	}

IL_01e1:
	{
		// instance.x = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_48 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_49 = ((ES3Type_MinMaxCurve_t1C147718750ACBECE5D2B7F545D2A434A3C5409B_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t1C147718750ACBECE5D2B7F545D2A434A3C5409B_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_48);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_50;
		L_50 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_m9D6B4042B923127DEA4A2CAA3E35EED37D75B3D0_RuntimeMethod_var, L_48, L_49);
		SizeBySpeedModule_set_x_mED5B851A688588F171B38AF31B0CC91A003DA164((&V_0), L_50, NULL);
		// break;
		goto IL_028a;
	}

IL_01f8:
	{
		// instance.xMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_51 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_52 = ((ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_51);
		float L_53;
		L_53 = GenericVirtualFuncInvoker1< float, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mA86928BC888E342D2C2644535E3399952F5077ED_RuntimeMethod_var, L_51, L_52);
		SizeBySpeedModule_set_xMultiplier_m1803C7585C7DA6333FB4B3595EAD753FFD8ED32A((&V_0), L_53, NULL);
		// break;
		goto IL_028a;
	}

IL_020c:
	{
		// instance.y = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_54 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_55 = ((ES3Type_MinMaxCurve_t1C147718750ACBECE5D2B7F545D2A434A3C5409B_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t1C147718750ACBECE5D2B7F545D2A434A3C5409B_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_54);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_56;
		L_56 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_m9D6B4042B923127DEA4A2CAA3E35EED37D75B3D0_RuntimeMethod_var, L_54, L_55);
		SizeBySpeedModule_set_y_m1E9DE959AFA22DE52D24537108BD41B2D4B017E6((&V_0), L_56, NULL);
		// break;
		goto IL_028a;
	}

IL_0220:
	{
		// instance.yMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_57 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_58 = ((ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_57);
		float L_59;
		L_59 = GenericVirtualFuncInvoker1< float, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mA86928BC888E342D2C2644535E3399952F5077ED_RuntimeMethod_var, L_57, L_58);
		SizeBySpeedModule_set_yMultiplier_m4C9EE0927456366AC12C17543E95BAB3201C9DCB((&V_0), L_59, NULL);
		// break;
		goto IL_028a;
	}

IL_0234:
	{
		// instance.z = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_60 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_61 = ((ES3Type_MinMaxCurve_t1C147718750ACBECE5D2B7F545D2A434A3C5409B_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t1C147718750ACBECE5D2B7F545D2A434A3C5409B_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_60);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_62;
		L_62 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_m9D6B4042B923127DEA4A2CAA3E35EED37D75B3D0_RuntimeMethod_var, L_60, L_61);
		SizeBySpeedModule_set_z_m73C05D968B5C62551614E86A77AEF557F15734A3((&V_0), L_62, NULL);
		// break;
		goto IL_028a;
	}

IL_0248:
	{
		// instance.zMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_63 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_64 = ((ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_63);
		float L_65;
		L_65 = GenericVirtualFuncInvoker1< float, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mA86928BC888E342D2C2644535E3399952F5077ED_RuntimeMethod_var, L_63, L_64);
		SizeBySpeedModule_set_zMultiplier_m0B67A4AF3E30D31C14DBD5FAAA3EABFB787D9826((&V_0), L_65, NULL);
		// break;
		goto IL_028a;
	}

IL_025c:
	{
		// instance.separateAxes = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_66 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_67 = ((ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_66);
		bool L_68;
		L_68 = GenericVirtualFuncInvoker1< bool, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mFFB70EE53D8CD0255A4E599780F62A3EB1520E83_RuntimeMethod_var, L_66, L_67);
		SizeBySpeedModule_set_separateAxes_m5B0BA28A01D7FED6FDDA0267135B5EAE1F9C72C7((&V_0), L_68, NULL);
		// break;
		goto IL_028a;
	}

IL_0270:
	{
		// instance.range = reader.Read<UnityEngine.Vector2>(ES3Type_Vector2.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_69 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_70 = ((ES3Type_Vector2_tB51CE4B1AFCBAFE7ADC540050621735C4F8D4387_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Vector2_tB51CE4B1AFCBAFE7ADC540050621735C4F8D4387_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_69);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_71;
		L_71 = GenericVirtualFuncInvoker1< Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_m95B09869E3B912BD36BC3571D842BA21C71EB14B_RuntimeMethod_var, L_69, L_70);
		SizeBySpeedModule_set_range_m76B9B316654E44D6938A4A06DED0DF8B3CBCE4D7((&V_0), L_71, NULL);
		// break;
		goto IL_028a;
	}

IL_0284:
	{
		// reader.Skip();
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_72 = ___reader0;
		NullCheck(L_72);
		VirtualActionInvoker0::Invoke(41 /* System.Void ES3Reader::Skip() */, L_72);
	}

IL_028a:
	{
		// while((propertyName = reader.ReadPropertyName()) != null)
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_73 = ___reader0;
		NullCheck(L_73);
		String_t* L_74;
		L_74 = VirtualFuncInvoker0< String_t* >::Invoke(21 /* System.String ES3Reader::ReadPropertyName() */, L_73);
		String_t* L_75 = L_74;
		V_1 = L_75;
		if (L_75)
		{
			goto IL_000c;
		}
	}
	{
		// }
		return;
	}
}
// System.Void ES3Types.ES3Type_SizeBySpeedModule::ReadInto<UnityEngine.ParticleSystem/SubEmittersModule>(ES3Reader,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ES3Type_SizeBySpeedModule_ReadInto_TisSubEmittersModule_t94F5AD231EAFB50A16E697186A630B07BF8B949B_mE813B4D0CD8EA872615C08166715EE84BC5FD8CD_gshared (ES3Type_SizeBySpeedModule_t2A3358BE9F6111ED907A0D4CA428148A73CD7601* __this, ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* ___reader0, RuntimeObject* ___obj1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mFFB70EE53D8CD0255A4E599780F62A3EB1520E83_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_m9D6B4042B923127DEA4A2CAA3E35EED37D75B3D0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mA86928BC888E342D2C2644535E3399952F5077ED_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_m95B09869E3B912BD36BC3571D842BA21C71EB14B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_MinMaxCurve_t1C147718750ACBECE5D2B7F545D2A434A3C5409B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_Vector2_tB51CE4B1AFCBAFE7ADC540050621735C4F8D4387_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SizeBySpeedModule_t73995CB54A0D1B06BA100EA77972D37CDF7B4DC4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral062DB096C728515E033CF8C48A1C1F0B9A79384B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1B024D537329B86AB0DF96B2A714180F442F53E9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2F8690361553406965679AEF125F896BC5FC61F5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3EE5A4671A4E5AEBD31CA5F013A7773DC18ED22B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4845015737DC41475709911228278216EE4DC3AF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8C6F88DEE0DFE3513BB8B44A8CF0FEE437F4EFFB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9384C6EF2DA5C0BD5274A0DACFF291D0ABBFD8B1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9CE1604D659135925CCC4DD1F526AFFE42E689F1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9E61658953B4F9BB4A05E3D2D2BC18990BADE934);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBD0DD0004699EF86BF0FC1D161FA3766AF5126C4);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B);
		s_Il2CppMethodInitialized = true;
	}
	SizeBySpeedModule_t73995CB54A0D1B06BA100EA77972D37CDF7B4DC4 V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	uint32_t V_2 = 0;
	{
		// var instance = (UnityEngine.ParticleSystem.SizeBySpeedModule)obj;
		RuntimeObject* L_0 = ___obj1;
		V_0 = ((*(SizeBySpeedModule_t73995CB54A0D1B06BA100EA77972D37CDF7B4DC4*)((SizeBySpeedModule_t73995CB54A0D1B06BA100EA77972D37CDF7B4DC4*)(SizeBySpeedModule_t73995CB54A0D1B06BA100EA77972D37CDF7B4DC4*)UnBox(L_0, SizeBySpeedModule_t73995CB54A0D1B06BA100EA77972D37CDF7B4DC4_il2cpp_TypeInfo_var))));
		goto IL_028a;
	}

IL_000c:
	{
		String_t* L_1 = V_1;
		uint32_t L_2;
		L_2 = U3CPrivateImplementationDetailsU3E_ComputeStringHash_m9E43873DE0DF480D27EC1C2AA3C09E74EA77F75D(L_1, NULL);
		V_2 = L_2;
		uint32_t L_3 = V_2;
		if ((!(((uint32_t)L_3) <= ((uint32_t)((int32_t)1479031685)))))
		{
			goto IL_0064;
		}
	}
	{
		uint32_t L_4 = V_2;
		if ((!(((uint32_t)L_4) <= ((uint32_t)((int32_t)597743964)))))
		{
			goto IL_003e;
		}
	}
	{
		uint32_t L_5 = V_2;
		if ((((int32_t)L_5) == ((int32_t)((int32_t)49525662))))
		{
			goto IL_00b5;
		}
	}
	{
		uint32_t L_6 = V_2;
		if ((((int32_t)L_6) == ((int32_t)((int32_t)597743964))))
		{
			goto IL_00ca;
		}
	}
	{
		goto IL_0284;
	}

IL_003e:
	{
		uint32_t L_7 = V_2;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)726266686))))
		{
			goto IL_015d;
		}
	}
	{
		uint32_t L_8 = V_2;
		if ((((int32_t)L_8) == ((int32_t)((int32_t)1105436259))))
		{
			goto IL_00df;
		}
	}
	{
		uint32_t L_9 = V_2;
		if ((((int32_t)L_9) == ((int32_t)((int32_t)1479031685))))
		{
			goto IL_0172;
		}
	}
	{
		goto IL_0284;
	}

IL_0064:
	{
		uint32_t L_10 = V_2;
		if ((!(((uint32_t)L_10) <= ((uint32_t)((int32_t)-86242094)))))
		{
			goto IL_0092;
		}
	}
	{
		uint32_t L_11 = V_2;
		if ((((int32_t)L_11) == ((int32_t)((int32_t)-1013869429))))
		{
			goto IL_0133;
		}
	}
	{
		uint32_t L_12 = V_2;
		if ((((int32_t)L_12) == ((int32_t)((int32_t)-585050980))))
		{
			goto IL_0109;
		}
	}
	{
		uint32_t L_13 = V_2;
		if ((((int32_t)L_13) == ((int32_t)((int32_t)-86242094))))
		{
			goto IL_0187;
		}
	}
	{
		goto IL_0284;
	}

IL_0092:
	{
		uint32_t L_14 = V_2;
		if ((((int32_t)L_14) == ((int32_t)((int32_t)-66302220))))
		{
			goto IL_011e;
		}
	}
	{
		uint32_t L_15 = V_2;
		if ((((int32_t)L_15) == ((int32_t)((int32_t)-49524601))))
		{
			goto IL_00f4;
		}
	}
	{
		uint32_t L_16 = V_2;
		if ((((int32_t)L_16) == ((int32_t)((int32_t)-15969363))))
		{
			goto IL_0148;
		}
	}
	{
		goto IL_0284;
	}

IL_00b5:
	{
		String_t* L_17 = V_1;
		bool L_18;
		L_18 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_17, _stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B, NULL);
		if (L_18)
		{
			goto IL_019c;
		}
	}
	{
		goto IL_0284;
	}

IL_00ca:
	{
		String_t* L_19 = V_1;
		bool L_20;
		L_20 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_19, _stringLiteral3EE5A4671A4E5AEBD31CA5F013A7773DC18ED22B, NULL);
		if (L_20)
		{
			goto IL_01b3;
		}
	}
	{
		goto IL_0284;
	}

IL_00df:
	{
		String_t* L_21 = V_1;
		bool L_22;
		L_22 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_21, _stringLiteralBD0DD0004699EF86BF0FC1D161FA3766AF5126C4, NULL);
		if (L_22)
		{
			goto IL_01ca;
		}
	}
	{
		goto IL_0284;
	}

IL_00f4:
	{
		String_t* L_23 = V_1;
		bool L_24;
		L_24 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_23, _stringLiteral062DB096C728515E033CF8C48A1C1F0B9A79384B, NULL);
		if (L_24)
		{
			goto IL_01e1;
		}
	}
	{
		goto IL_0284;
	}

IL_0109:
	{
		String_t* L_25 = V_1;
		bool L_26;
		L_26 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_25, _stringLiteral8C6F88DEE0DFE3513BB8B44A8CF0FEE437F4EFFB, NULL);
		if (L_26)
		{
			goto IL_01f8;
		}
	}
	{
		goto IL_0284;
	}

IL_011e:
	{
		String_t* L_27 = V_1;
		bool L_28;
		L_28 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_27, _stringLiteral9384C6EF2DA5C0BD5274A0DACFF291D0ABBFD8B1, NULL);
		if (L_28)
		{
			goto IL_020c;
		}
	}
	{
		goto IL_0284;
	}

IL_0133:
	{
		String_t* L_29 = V_1;
		bool L_30;
		L_30 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_29, _stringLiteral9E61658953B4F9BB4A05E3D2D2BC18990BADE934, NULL);
		if (L_30)
		{
			goto IL_0220;
		}
	}
	{
		goto IL_0284;
	}

IL_0148:
	{
		String_t* L_31 = V_1;
		bool L_32;
		L_32 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_31, _stringLiteral9CE1604D659135925CCC4DD1F526AFFE42E689F1, NULL);
		if (L_32)
		{
			goto IL_0234;
		}
	}
	{
		goto IL_0284;
	}

IL_015d:
	{
		String_t* L_33 = V_1;
		bool L_34;
		L_34 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_33, _stringLiteral2F8690361553406965679AEF125F896BC5FC61F5, NULL);
		if (L_34)
		{
			goto IL_0248;
		}
	}
	{
		goto IL_0284;
	}

IL_0172:
	{
		String_t* L_35 = V_1;
		bool L_36;
		L_36 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_35, _stringLiteral1B024D537329B86AB0DF96B2A714180F442F53E9, NULL);
		if (L_36)
		{
			goto IL_025c;
		}
	}
	{
		goto IL_0284;
	}

IL_0187:
	{
		String_t* L_37 = V_1;
		bool L_38;
		L_38 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_37, _stringLiteral4845015737DC41475709911228278216EE4DC3AF, NULL);
		if (L_38)
		{
			goto IL_0270;
		}
	}
	{
		goto IL_0284;
	}

IL_019c:
	{
		// instance.enabled = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_39 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_40 = ((ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_39);
		bool L_41;
		L_41 = GenericVirtualFuncInvoker1< bool, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mFFB70EE53D8CD0255A4E599780F62A3EB1520E83_RuntimeMethod_var, L_39, L_40);
		SizeBySpeedModule_set_enabled_m1DFF0FEFF522C52D874173B6CDAAEE94F9E8B718((&V_0), L_41, NULL);
		// break;
		goto IL_028a;
	}

IL_01b3:
	{
		// instance.size = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_42 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_43 = ((ES3Type_MinMaxCurve_t1C147718750ACBECE5D2B7F545D2A434A3C5409B_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t1C147718750ACBECE5D2B7F545D2A434A3C5409B_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_42);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_44;
		L_44 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_m9D6B4042B923127DEA4A2CAA3E35EED37D75B3D0_RuntimeMethod_var, L_42, L_43);
		SizeBySpeedModule_set_size_mD906BB6EAE9613DDA6F623E4D4878D69ECB90729((&V_0), L_44, NULL);
		// break;
		goto IL_028a;
	}

IL_01ca:
	{
		// instance.sizeMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_45 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_46 = ((ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_45);
		float L_47;
		L_47 = GenericVirtualFuncInvoker1< float, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mA86928BC888E342D2C2644535E3399952F5077ED_RuntimeMethod_var, L_45, L_46);
		SizeBySpeedModule_set_sizeMultiplier_mAFACCF6252B8FB92DC3A51BCE11D22126B315901((&V_0), L_47, NULL);
		// break;
		goto IL_028a;
	}

IL_01e1:
	{
		// instance.x = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_48 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_49 = ((ES3Type_MinMaxCurve_t1C147718750ACBECE5D2B7F545D2A434A3C5409B_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t1C147718750ACBECE5D2B7F545D2A434A3C5409B_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_48);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_50;
		L_50 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_m9D6B4042B923127DEA4A2CAA3E35EED37D75B3D0_RuntimeMethod_var, L_48, L_49);
		SizeBySpeedModule_set_x_mED5B851A688588F171B38AF31B0CC91A003DA164((&V_0), L_50, NULL);
		// break;
		goto IL_028a;
	}

IL_01f8:
	{
		// instance.xMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_51 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_52 = ((ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_51);
		float L_53;
		L_53 = GenericVirtualFuncInvoker1< float, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mA86928BC888E342D2C2644535E3399952F5077ED_RuntimeMethod_var, L_51, L_52);
		SizeBySpeedModule_set_xMultiplier_m1803C7585C7DA6333FB4B3595EAD753FFD8ED32A((&V_0), L_53, NULL);
		// break;
		goto IL_028a;
	}

IL_020c:
	{
		// instance.y = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_54 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_55 = ((ES3Type_MinMaxCurve_t1C147718750ACBECE5D2B7F545D2A434A3C5409B_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t1C147718750ACBECE5D2B7F545D2A434A3C5409B_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_54);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_56;
		L_56 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_m9D6B4042B923127DEA4A2CAA3E35EED37D75B3D0_RuntimeMethod_var, L_54, L_55);
		SizeBySpeedModule_set_y_m1E9DE959AFA22DE52D24537108BD41B2D4B017E6((&V_0), L_56, NULL);
		// break;
		goto IL_028a;
	}

IL_0220:
	{
		// instance.yMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_57 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_58 = ((ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_57);
		float L_59;
		L_59 = GenericVirtualFuncInvoker1< float, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mA86928BC888E342D2C2644535E3399952F5077ED_RuntimeMethod_var, L_57, L_58);
		SizeBySpeedModule_set_yMultiplier_m4C9EE0927456366AC12C17543E95BAB3201C9DCB((&V_0), L_59, NULL);
		// break;
		goto IL_028a;
	}

IL_0234:
	{
		// instance.z = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_60 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_61 = ((ES3Type_MinMaxCurve_t1C147718750ACBECE5D2B7F545D2A434A3C5409B_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t1C147718750ACBECE5D2B7F545D2A434A3C5409B_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_60);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_62;
		L_62 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_m9D6B4042B923127DEA4A2CAA3E35EED37D75B3D0_RuntimeMethod_var, L_60, L_61);
		SizeBySpeedModule_set_z_m73C05D968B5C62551614E86A77AEF557F15734A3((&V_0), L_62, NULL);
		// break;
		goto IL_028a;
	}

IL_0248:
	{
		// instance.zMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_63 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_64 = ((ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_63);
		float L_65;
		L_65 = GenericVirtualFuncInvoker1< float, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mA86928BC888E342D2C2644535E3399952F5077ED_RuntimeMethod_var, L_63, L_64);
		SizeBySpeedModule_set_zMultiplier_m0B67A4AF3E30D31C14DBD5FAAA3EABFB787D9826((&V_0), L_65, NULL);
		// break;
		goto IL_028a;
	}

IL_025c:
	{
		// instance.separateAxes = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_66 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_67 = ((ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_66);
		bool L_68;
		L_68 = GenericVirtualFuncInvoker1< bool, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mFFB70EE53D8CD0255A4E599780F62A3EB1520E83_RuntimeMethod_var, L_66, L_67);
		SizeBySpeedModule_set_separateAxes_m5B0BA28A01D7FED6FDDA0267135B5EAE1F9C72C7((&V_0), L_68, NULL);
		// break;
		goto IL_028a;
	}

IL_0270:
	{
		// instance.range = reader.Read<UnityEngine.Vector2>(ES3Type_Vector2.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_69 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_70 = ((ES3Type_Vector2_tB51CE4B1AFCBAFE7ADC540050621735C4F8D4387_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Vector2_tB51CE4B1AFCBAFE7ADC540050621735C4F8D4387_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_69);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_71;
		L_71 = GenericVirtualFuncInvoker1< Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_m95B09869E3B912BD36BC3571D842BA21C71EB14B_RuntimeMethod_var, L_69, L_70);
		SizeBySpeedModule_set_range_m76B9B316654E44D6938A4A06DED0DF8B3CBCE4D7((&V_0), L_71, NULL);
		// break;
		goto IL_028a;
	}

IL_0284:
	{
		// reader.Skip();
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_72 = ___reader0;
		NullCheck(L_72);
		VirtualActionInvoker0::Invoke(41 /* System.Void ES3Reader::Skip() */, L_72);
	}

IL_028a:
	{
		// while((propertyName = reader.ReadPropertyName()) != null)
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_73 = ___reader0;
		NullCheck(L_73);
		String_t* L_74;
		L_74 = VirtualFuncInvoker0< String_t* >::Invoke(21 /* System.String ES3Reader::ReadPropertyName() */, L_73);
		String_t* L_75 = L_74;
		V_1 = L_75;
		if (L_75)
		{
			goto IL_000c;
		}
	}
	{
		// }
		return;
	}
}
// System.Void ES3Types.ES3Type_SizeBySpeedModule::ReadInto<UnityEngine.ParticleSystem/TextureSheetAnimationModule>(ES3Reader,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ES3Type_SizeBySpeedModule_ReadInto_TisTextureSheetAnimationModule_tB53F451F252E24ACC3EF80D770DB4FBE1A13D1F6_mD361F3E42C105C6ED6FD8443FAC3A10A3D44E967_gshared (ES3Type_SizeBySpeedModule_t2A3358BE9F6111ED907A0D4CA428148A73CD7601* __this, ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* ___reader0, RuntimeObject* ___obj1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mFFB70EE53D8CD0255A4E599780F62A3EB1520E83_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_m9D6B4042B923127DEA4A2CAA3E35EED37D75B3D0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mA86928BC888E342D2C2644535E3399952F5077ED_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_m95B09869E3B912BD36BC3571D842BA21C71EB14B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_MinMaxCurve_t1C147718750ACBECE5D2B7F545D2A434A3C5409B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_Vector2_tB51CE4B1AFCBAFE7ADC540050621735C4F8D4387_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SizeBySpeedModule_t73995CB54A0D1B06BA100EA77972D37CDF7B4DC4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral062DB096C728515E033CF8C48A1C1F0B9A79384B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1B024D537329B86AB0DF96B2A714180F442F53E9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2F8690361553406965679AEF125F896BC5FC61F5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3EE5A4671A4E5AEBD31CA5F013A7773DC18ED22B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4845015737DC41475709911228278216EE4DC3AF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8C6F88DEE0DFE3513BB8B44A8CF0FEE437F4EFFB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9384C6EF2DA5C0BD5274A0DACFF291D0ABBFD8B1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9CE1604D659135925CCC4DD1F526AFFE42E689F1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9E61658953B4F9BB4A05E3D2D2BC18990BADE934);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBD0DD0004699EF86BF0FC1D161FA3766AF5126C4);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B);
		s_Il2CppMethodInitialized = true;
	}
	SizeBySpeedModule_t73995CB54A0D1B06BA100EA77972D37CDF7B4DC4 V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	uint32_t V_2 = 0;
	{
		// var instance = (UnityEngine.ParticleSystem.SizeBySpeedModule)obj;
		RuntimeObject* L_0 = ___obj1;
		V_0 = ((*(SizeBySpeedModule_t73995CB54A0D1B06BA100EA77972D37CDF7B4DC4*)((SizeBySpeedModule_t73995CB54A0D1B06BA100EA77972D37CDF7B4DC4*)(SizeBySpeedModule_t73995CB54A0D1B06BA100EA77972D37CDF7B4DC4*)UnBox(L_0, SizeBySpeedModule_t73995CB54A0D1B06BA100EA77972D37CDF7B4DC4_il2cpp_TypeInfo_var))));
		goto IL_028a;
	}

IL_000c:
	{
		String_t* L_1 = V_1;
		uint32_t L_2;
		L_2 = U3CPrivateImplementationDetailsU3E_ComputeStringHash_m9E43873DE0DF480D27EC1C2AA3C09E74EA77F75D(L_1, NULL);
		V_2 = L_2;
		uint32_t L_3 = V_2;
		if ((!(((uint32_t)L_3) <= ((uint32_t)((int32_t)1479031685)))))
		{
			goto IL_0064;
		}
	}
	{
		uint32_t L_4 = V_2;
		if ((!(((uint32_t)L_4) <= ((uint32_t)((int32_t)597743964)))))
		{
			goto IL_003e;
		}
	}
	{
		uint32_t L_5 = V_2;
		if ((((int32_t)L_5) == ((int32_t)((int32_t)49525662))))
		{
			goto IL_00b5;
		}
	}
	{
		uint32_t L_6 = V_2;
		if ((((int32_t)L_6) == ((int32_t)((int32_t)597743964))))
		{
			goto IL_00ca;
		}
	}
	{
		goto IL_0284;
	}

IL_003e:
	{
		uint32_t L_7 = V_2;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)726266686))))
		{
			goto IL_015d;
		}
	}
	{
		uint32_t L_8 = V_2;
		if ((((int32_t)L_8) == ((int32_t)((int32_t)1105436259))))
		{
			goto IL_00df;
		}
	}
	{
		uint32_t L_9 = V_2;
		if ((((int32_t)L_9) == ((int32_t)((int32_t)1479031685))))
		{
			goto IL_0172;
		}
	}
	{
		goto IL_0284;
	}

IL_0064:
	{
		uint32_t L_10 = V_2;
		if ((!(((uint32_t)L_10) <= ((uint32_t)((int32_t)-86242094)))))
		{
			goto IL_0092;
		}
	}
	{
		uint32_t L_11 = V_2;
		if ((((int32_t)L_11) == ((int32_t)((int32_t)-1013869429))))
		{
			goto IL_0133;
		}
	}
	{
		uint32_t L_12 = V_2;
		if ((((int32_t)L_12) == ((int32_t)((int32_t)-585050980))))
		{
			goto IL_0109;
		}
	}
	{
		uint32_t L_13 = V_2;
		if ((((int32_t)L_13) == ((int32_t)((int32_t)-86242094))))
		{
			goto IL_0187;
		}
	}
	{
		goto IL_0284;
	}

IL_0092:
	{
		uint32_t L_14 = V_2;
		if ((((int32_t)L_14) == ((int32_t)((int32_t)-66302220))))
		{
			goto IL_011e;
		}
	}
	{
		uint32_t L_15 = V_2;
		if ((((int32_t)L_15) == ((int32_t)((int32_t)-49524601))))
		{
			goto IL_00f4;
		}
	}
	{
		uint32_t L_16 = V_2;
		if ((((int32_t)L_16) == ((int32_t)((int32_t)-15969363))))
		{
			goto IL_0148;
		}
	}
	{
		goto IL_0284;
	}

IL_00b5:
	{
		String_t* L_17 = V_1;
		bool L_18;
		L_18 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_17, _stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B, NULL);
		if (L_18)
		{
			goto IL_019c;
		}
	}
	{
		goto IL_0284;
	}

IL_00ca:
	{
		String_t* L_19 = V_1;
		bool L_20;
		L_20 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_19, _stringLiteral3EE5A4671A4E5AEBD31CA5F013A7773DC18ED22B, NULL);
		if (L_20)
		{
			goto IL_01b3;
		}
	}
	{
		goto IL_0284;
	}

IL_00df:
	{
		String_t* L_21 = V_1;
		bool L_22;
		L_22 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_21, _stringLiteralBD0DD0004699EF86BF0FC1D161FA3766AF5126C4, NULL);
		if (L_22)
		{
			goto IL_01ca;
		}
	}
	{
		goto IL_0284;
	}

IL_00f4:
	{
		String_t* L_23 = V_1;
		bool L_24;
		L_24 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_23, _stringLiteral062DB096C728515E033CF8C48A1C1F0B9A79384B, NULL);
		if (L_24)
		{
			goto IL_01e1;
		}
	}
	{
		goto IL_0284;
	}

IL_0109:
	{
		String_t* L_25 = V_1;
		bool L_26;
		L_26 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_25, _stringLiteral8C6F88DEE0DFE3513BB8B44A8CF0FEE437F4EFFB, NULL);
		if (L_26)
		{
			goto IL_01f8;
		}
	}
	{
		goto IL_0284;
	}

IL_011e:
	{
		String_t* L_27 = V_1;
		bool L_28;
		L_28 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_27, _stringLiteral9384C6EF2DA5C0BD5274A0DACFF291D0ABBFD8B1, NULL);
		if (L_28)
		{
			goto IL_020c;
		}
	}
	{
		goto IL_0284;
	}

IL_0133:
	{
		String_t* L_29 = V_1;
		bool L_30;
		L_30 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_29, _stringLiteral9E61658953B4F9BB4A05E3D2D2BC18990BADE934, NULL);
		if (L_30)
		{
			goto IL_0220;
		}
	}
	{
		goto IL_0284;
	}

IL_0148:
	{
		String_t* L_31 = V_1;
		bool L_32;
		L_32 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_31, _stringLiteral9CE1604D659135925CCC4DD1F526AFFE42E689F1, NULL);
		if (L_32)
		{
			goto IL_0234;
		}
	}
	{
		goto IL_0284;
	}

IL_015d:
	{
		String_t* L_33 = V_1;
		bool L_34;
		L_34 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_33, _stringLiteral2F8690361553406965679AEF125F896BC5FC61F5, NULL);
		if (L_34)
		{
			goto IL_0248;
		}
	}
	{
		goto IL_0284;
	}

IL_0172:
	{
		String_t* L_35 = V_1;
		bool L_36;
		L_36 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_35, _stringLiteral1B024D537329B86AB0DF96B2A714180F442F53E9, NULL);
		if (L_36)
		{
			goto IL_025c;
		}
	}
	{
		goto IL_0284;
	}

IL_0187:
	{
		String_t* L_37 = V_1;
		bool L_38;
		L_38 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_37, _stringLiteral4845015737DC41475709911228278216EE4DC3AF, NULL);
		if (L_38)
		{
			goto IL_0270;
		}
	}
	{
		goto IL_0284;
	}

IL_019c:
	{
		// instance.enabled = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_39 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_40 = ((ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_39);
		bool L_41;
		L_41 = GenericVirtualFuncInvoker1< bool, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mFFB70EE53D8CD0255A4E599780F62A3EB1520E83_RuntimeMethod_var, L_39, L_40);
		SizeBySpeedModule_set_enabled_m1DFF0FEFF522C52D874173B6CDAAEE94F9E8B718((&V_0), L_41, NULL);
		// break;
		goto IL_028a;
	}

IL_01b3:
	{
		// instance.size = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_42 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_43 = ((ES3Type_MinMaxCurve_t1C147718750ACBECE5D2B7F545D2A434A3C5409B_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t1C147718750ACBECE5D2B7F545D2A434A3C5409B_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_42);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_44;
		L_44 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_m9D6B4042B923127DEA4A2CAA3E35EED37D75B3D0_RuntimeMethod_var, L_42, L_43);
		SizeBySpeedModule_set_size_mD906BB6EAE9613DDA6F623E4D4878D69ECB90729((&V_0), L_44, NULL);
		// break;
		goto IL_028a;
	}

IL_01ca:
	{
		// instance.sizeMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_45 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_46 = ((ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_45);
		float L_47;
		L_47 = GenericVirtualFuncInvoker1< float, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mA86928BC888E342D2C2644535E3399952F5077ED_RuntimeMethod_var, L_45, L_46);
		SizeBySpeedModule_set_sizeMultiplier_mAFACCF6252B8FB92DC3A51BCE11D22126B315901((&V_0), L_47, NULL);
		// break;
		goto IL_028a;
	}

IL_01e1:
	{
		// instance.x = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_48 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_49 = ((ES3Type_MinMaxCurve_t1C147718750ACBECE5D2B7F545D2A434A3C5409B_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t1C147718750ACBECE5D2B7F545D2A434A3C5409B_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_48);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_50;
		L_50 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_m9D6B4042B923127DEA4A2CAA3E35EED37D75B3D0_RuntimeMethod_var, L_48, L_49);
		SizeBySpeedModule_set_x_mED5B851A688588F171B38AF31B0CC91A003DA164((&V_0), L_50, NULL);
		// break;
		goto IL_028a;
	}

IL_01f8:
	{
		// instance.xMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_51 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_52 = ((ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_51);
		float L_53;
		L_53 = GenericVirtualFuncInvoker1< float, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mA86928BC888E342D2C2644535E3399952F5077ED_RuntimeMethod_var, L_51, L_52);
		SizeBySpeedModule_set_xMultiplier_m1803C7585C7DA6333FB4B3595EAD753FFD8ED32A((&V_0), L_53, NULL);
		// break;
		goto IL_028a;
	}

IL_020c:
	{
		// instance.y = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_54 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_55 = ((ES3Type_MinMaxCurve_t1C147718750ACBECE5D2B7F545D2A434A3C5409B_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t1C147718750ACBECE5D2B7F545D2A434A3C5409B_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_54);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_56;
		L_56 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_m9D6B4042B923127DEA4A2CAA3E35EED37D75B3D0_RuntimeMethod_var, L_54, L_55);
		SizeBySpeedModule_set_y_m1E9DE959AFA22DE52D24537108BD41B2D4B017E6((&V_0), L_56, NULL);
		// break;
		goto IL_028a;
	}

IL_0220:
	{
		// instance.yMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_57 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_58 = ((ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_57);
		float L_59;
		L_59 = GenericVirtualFuncInvoker1< float, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mA86928BC888E342D2C2644535E3399952F5077ED_RuntimeMethod_var, L_57, L_58);
		SizeBySpeedModule_set_yMultiplier_m4C9EE0927456366AC12C17543E95BAB3201C9DCB((&V_0), L_59, NULL);
		// break;
		goto IL_028a;
	}

IL_0234:
	{
		// instance.z = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_60 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_61 = ((ES3Type_MinMaxCurve_t1C147718750ACBECE5D2B7F545D2A434A3C5409B_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t1C147718750ACBECE5D2B7F545D2A434A3C5409B_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_60);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_62;
		L_62 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_m9D6B4042B923127DEA4A2CAA3E35EED37D75B3D0_RuntimeMethod_var, L_60, L_61);
		SizeBySpeedModule_set_z_m73C05D968B5C62551614E86A77AEF557F15734A3((&V_0), L_62, NULL);
		// break;
		goto IL_028a;
	}

IL_0248:
	{
		// instance.zMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_63 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_64 = ((ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_63);
		float L_65;
		L_65 = GenericVirtualFuncInvoker1< float, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mA86928BC888E342D2C2644535E3399952F5077ED_RuntimeMethod_var, L_63, L_64);
		SizeBySpeedModule_set_zMultiplier_m0B67A4AF3E30D31C14DBD5FAAA3EABFB787D9826((&V_0), L_65, NULL);
		// break;
		goto IL_028a;
	}

IL_025c:
	{
		// instance.separateAxes = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_66 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_67 = ((ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_66);
		bool L_68;
		L_68 = GenericVirtualFuncInvoker1< bool, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mFFB70EE53D8CD0255A4E599780F62A3EB1520E83_RuntimeMethod_var, L_66, L_67);
		SizeBySpeedModule_set_separateAxes_m5B0BA28A01D7FED6FDDA0267135B5EAE1F9C72C7((&V_0), L_68, NULL);
		// break;
		goto IL_028a;
	}

IL_0270:
	{
		// instance.range = reader.Read<UnityEngine.Vector2>(ES3Type_Vector2.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_69 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_70 = ((ES3Type_Vector2_tB51CE4B1AFCBAFE7ADC540050621735C4F8D4387_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Vector2_tB51CE4B1AFCBAFE7ADC540050621735C4F8D4387_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_69);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_71;
		L_71 = GenericVirtualFuncInvoker1< Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_m95B09869E3B912BD36BC3571D842BA21C71EB14B_RuntimeMethod_var, L_69, L_70);
		SizeBySpeedModule_set_range_m76B9B316654E44D6938A4A06DED0DF8B3CBCE4D7((&V_0), L_71, NULL);
		// break;
		goto IL_028a;
	}

IL_0284:
	{
		// reader.Skip();
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_72 = ___reader0;
		NullCheck(L_72);
		VirtualActionInvoker0::Invoke(41 /* System.Void ES3Reader::Skip() */, L_72);
	}

IL_028a:
	{
		// while((propertyName = reader.ReadPropertyName()) != null)
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_73 = ___reader0;
		NullCheck(L_73);
		String_t* L_74;
		L_74 = VirtualFuncInvoker0< String_t* >::Invoke(21 /* System.String ES3Reader::ReadPropertyName() */, L_73);
		String_t* L_75 = L_74;
		V_1 = L_75;
		if (L_75)
		{
			goto IL_000c;
		}
	}
	{
		// }
		return;
	}
}
// System.Void ES3Types.ES3Type_SizeBySpeedModule::ReadInto<UnityEngine.ParticleSystem/TrailModule>(ES3Reader,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ES3Type_SizeBySpeedModule_ReadInto_TisTrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D_m83252B2B68D3D86C511A6746182649FB42719318_gshared (ES3Type_SizeBySpeedModule_t2A3358BE9F6111ED907A0D4CA428148A73CD7601* __this, ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* ___reader0, RuntimeObject* ___obj1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mFFB70EE53D8CD0255A4E599780F62A3EB1520E83_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_m9D6B4042B923127DEA4A2CAA3E35EED37D75B3D0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mA86928BC888E342D2C2644535E3399952F5077ED_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_m95B09869E3B912BD36BC3571D842BA21C71EB14B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_MinMaxCurve_t1C147718750ACBECE5D2B7F545D2A434A3C5409B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_Vector2_tB51CE4B1AFCBAFE7ADC540050621735C4F8D4387_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SizeBySpeedModule_t73995CB54A0D1B06BA100EA77972D37CDF7B4DC4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral062DB096C728515E033CF8C48A1C1F0B9A79384B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1B024D537329B86AB0DF96B2A714180F442F53E9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2F8690361553406965679AEF125F896BC5FC61F5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3EE5A4671A4E5AEBD31CA5F013A7773DC18ED22B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4845015737DC41475709911228278216EE4DC3AF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8C6F88DEE0DFE3513BB8B44A8CF0FEE437F4EFFB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9384C6EF2DA5C0BD5274A0DACFF291D0ABBFD8B1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9CE1604D659135925CCC4DD1F526AFFE42E689F1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9E61658953B4F9BB4A05E3D2D2BC18990BADE934);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBD0DD0004699EF86BF0FC1D161FA3766AF5126C4);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B);
		s_Il2CppMethodInitialized = true;
	}
	SizeBySpeedModule_t73995CB54A0D1B06BA100EA77972D37CDF7B4DC4 V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	uint32_t V_2 = 0;
	{
		// var instance = (UnityEngine.ParticleSystem.SizeBySpeedModule)obj;
		RuntimeObject* L_0 = ___obj1;
		V_0 = ((*(SizeBySpeedModule_t73995CB54A0D1B06BA100EA77972D37CDF7B4DC4*)((SizeBySpeedModule_t73995CB54A0D1B06BA100EA77972D37CDF7B4DC4*)(SizeBySpeedModule_t73995CB54A0D1B06BA100EA77972D37CDF7B4DC4*)UnBox(L_0, SizeBySpeedModule_t73995CB54A0D1B06BA100EA77972D37CDF7B4DC4_il2cpp_TypeInfo_var))));
		goto IL_028a;
	}

IL_000c:
	{
		String_t* L_1 = V_1;
		uint32_t L_2;
		L_2 = U3CPrivateImplementationDetailsU3E_ComputeStringHash_m9E43873DE0DF480D27EC1C2AA3C09E74EA77F75D(L_1, NULL);
		V_2 = L_2;
		uint32_t L_3 = V_2;
		if ((!(((uint32_t)L_3) <= ((uint32_t)((int32_t)1479031685)))))
		{
			goto IL_0064;
		}
	}
	{
		uint32_t L_4 = V_2;
		if ((!(((uint32_t)L_4) <= ((uint32_t)((int32_t)597743964)))))
		{
			goto IL_003e;
		}
	}
	{
		uint32_t L_5 = V_2;
		if ((((int32_t)L_5) == ((int32_t)((int32_t)49525662))))
		{
			goto IL_00b5;
		}
	}
	{
		uint32_t L_6 = V_2;
		if ((((int32_t)L_6) == ((int32_t)((int32_t)597743964))))
		{
			goto IL_00ca;
		}
	}
	{
		goto IL_0284;
	}

IL_003e:
	{
		uint32_t L_7 = V_2;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)726266686))))
		{
			goto IL_015d;
		}
	}
	{
		uint32_t L_8 = V_2;
		if ((((int32_t)L_8) == ((int32_t)((int32_t)1105436259))))
		{
			goto IL_00df;
		}
	}
	{
		uint32_t L_9 = V_2;
		if ((((int32_t)L_9) == ((int32_t)((int32_t)1479031685))))
		{
			goto IL_0172;
		}
	}
	{
		goto IL_0284;
	}

IL_0064:
	{
		uint32_t L_10 = V_2;
		if ((!(((uint32_t)L_10) <= ((uint32_t)((int32_t)-86242094)))))
		{
			goto IL_0092;
		}
	}
	{
		uint32_t L_11 = V_2;
		if ((((int32_t)L_11) == ((int32_t)((int32_t)-1013869429))))
		{
			goto IL_0133;
		}
	}
	{
		uint32_t L_12 = V_2;
		if ((((int32_t)L_12) == ((int32_t)((int32_t)-585050980))))
		{
			goto IL_0109;
		}
	}
	{
		uint32_t L_13 = V_2;
		if ((((int32_t)L_13) == ((int32_t)((int32_t)-86242094))))
		{
			goto IL_0187;
		}
	}
	{
		goto IL_0284;
	}

IL_0092:
	{
		uint32_t L_14 = V_2;
		if ((((int32_t)L_14) == ((int32_t)((int32_t)-66302220))))
		{
			goto IL_011e;
		}
	}
	{
		uint32_t L_15 = V_2;
		if ((((int32_t)L_15) == ((int32_t)((int32_t)-49524601))))
		{
			goto IL_00f4;
		}
	}
	{
		uint32_t L_16 = V_2;
		if ((((int32_t)L_16) == ((int32_t)((int32_t)-15969363))))
		{
			goto IL_0148;
		}
	}
	{
		goto IL_0284;
	}

IL_00b5:
	{
		String_t* L_17 = V_1;
		bool L_18;
		L_18 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_17, _stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B, NULL);
		if (L_18)
		{
			goto IL_019c;
		}
	}
	{
		goto IL_0284;
	}

IL_00ca:
	{
		String_t* L_19 = V_1;
		bool L_20;
		L_20 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_19, _stringLiteral3EE5A4671A4E5AEBD31CA5F013A7773DC18ED22B, NULL);
		if (L_20)
		{
			goto IL_01b3;
		}
	}
	{
		goto IL_0284;
	}

IL_00df:
	{
		String_t* L_21 = V_1;
		bool L_22;
		L_22 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_21, _stringLiteralBD0DD0004699EF86BF0FC1D161FA3766AF5126C4, NULL);
		if (L_22)
		{
			goto IL_01ca;
		}
	}
	{
		goto IL_0284;
	}

IL_00f4:
	{
		String_t* L_23 = V_1;
		bool L_24;
		L_24 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_23, _stringLiteral062DB096C728515E033CF8C48A1C1F0B9A79384B, NULL);
		if (L_24)
		{
			goto IL_01e1;
		}
	}
	{
		goto IL_0284;
	}

IL_0109:
	{
		String_t* L_25 = V_1;
		bool L_26;
		L_26 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_25, _stringLiteral8C6F88DEE0DFE3513BB8B44A8CF0FEE437F4EFFB, NULL);
		if (L_26)
		{
			goto IL_01f8;
		}
	}
	{
		goto IL_0284;
	}

IL_011e:
	{
		String_t* L_27 = V_1;
		bool L_28;
		L_28 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_27, _stringLiteral9384C6EF2DA5C0BD5274A0DACFF291D0ABBFD8B1, NULL);
		if (L_28)
		{
			goto IL_020c;
		}
	}
	{
		goto IL_0284;
	}

IL_0133:
	{
		String_t* L_29 = V_1;
		bool L_30;
		L_30 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_29, _stringLiteral9E61658953B4F9BB4A05E3D2D2BC18990BADE934, NULL);
		if (L_30)
		{
			goto IL_0220;
		}
	}
	{
		goto IL_0284;
	}

IL_0148:
	{
		String_t* L_31 = V_1;
		bool L_32;
		L_32 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_31, _stringLiteral9CE1604D659135925CCC4DD1F526AFFE42E689F1, NULL);
		if (L_32)
		{
			goto IL_0234;
		}
	}
	{
		goto IL_0284;
	}

IL_015d:
	{
		String_t* L_33 = V_1;
		bool L_34;
		L_34 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_33, _stringLiteral2F8690361553406965679AEF125F896BC5FC61F5, NULL);
		if (L_34)
		{
			goto IL_0248;
		}
	}
	{
		goto IL_0284;
	}

IL_0172:
	{
		String_t* L_35 = V_1;
		bool L_36;
		L_36 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_35, _stringLiteral1B024D537329B86AB0DF96B2A714180F442F53E9, NULL);
		if (L_36)
		{
			goto IL_025c;
		}
	}
	{
		goto IL_0284;
	}

IL_0187:
	{
		String_t* L_37 = V_1;
		bool L_38;
		L_38 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_37, _stringLiteral4845015737DC41475709911228278216EE4DC3AF, NULL);
		if (L_38)
		{
			goto IL_0270;
		}
	}
	{
		goto IL_0284;
	}

IL_019c:
	{
		// instance.enabled = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_39 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_40 = ((ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_39);
		bool L_41;
		L_41 = GenericVirtualFuncInvoker1< bool, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mFFB70EE53D8CD0255A4E599780F62A3EB1520E83_RuntimeMethod_var, L_39, L_40);
		SizeBySpeedModule_set_enabled_m1DFF0FEFF522C52D874173B6CDAAEE94F9E8B718((&V_0), L_41, NULL);
		// break;
		goto IL_028a;
	}

IL_01b3:
	{
		// instance.size = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_42 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_43 = ((ES3Type_MinMaxCurve_t1C147718750ACBECE5D2B7F545D2A434A3C5409B_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t1C147718750ACBECE5D2B7F545D2A434A3C5409B_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_42);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_44;
		L_44 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_m9D6B4042B923127DEA4A2CAA3E35EED37D75B3D0_RuntimeMethod_var, L_42, L_43);
		SizeBySpeedModule_set_size_mD906BB6EAE9613DDA6F623E4D4878D69ECB90729((&V_0), L_44, NULL);
		// break;
		goto IL_028a;
	}

IL_01ca:
	{
		// instance.sizeMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_45 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_46 = ((ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_45);
		float L_47;
		L_47 = GenericVirtualFuncInvoker1< float, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mA86928BC888E342D2C2644535E3399952F5077ED_RuntimeMethod_var, L_45, L_46);
		SizeBySpeedModule_set_sizeMultiplier_mAFACCF6252B8FB92DC3A51BCE11D22126B315901((&V_0), L_47, NULL);
		// break;
		goto IL_028a;
	}

IL_01e1:
	{
		// instance.x = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_48 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_49 = ((ES3Type_MinMaxCurve_t1C147718750ACBECE5D2B7F545D2A434A3C5409B_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t1C147718750ACBECE5D2B7F545D2A434A3C5409B_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_48);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_50;
		L_50 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_m9D6B4042B923127DEA4A2CAA3E35EED37D75B3D0_RuntimeMethod_var, L_48, L_49);
		SizeBySpeedModule_set_x_mED5B851A688588F171B38AF31B0CC91A003DA164((&V_0), L_50, NULL);
		// break;
		goto IL_028a;
	}

IL_01f8:
	{
		// instance.xMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_51 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_52 = ((ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_51);
		float L_53;
		L_53 = GenericVirtualFuncInvoker1< float, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mA86928BC888E342D2C2644535E3399952F5077ED_RuntimeMethod_var, L_51, L_52);
		SizeBySpeedModule_set_xMultiplier_m1803C7585C7DA6333FB4B3595EAD753FFD8ED32A((&V_0), L_53, NULL);
		// break;
		goto IL_028a;
	}

IL_020c:
	{
		// instance.y = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_54 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_55 = ((ES3Type_MinMaxCurve_t1C147718750ACBECE5D2B7F545D2A434A3C5409B_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t1C147718750ACBECE5D2B7F545D2A434A3C5409B_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_54);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_56;
		L_56 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_m9D6B4042B923127DEA4A2CAA3E35EED37D75B3D0_RuntimeMethod_var, L_54, L_55);
		SizeBySpeedModule_set_y_m1E9DE959AFA22DE52D24537108BD41B2D4B017E6((&V_0), L_56, NULL);
		// break;
		goto IL_028a;
	}

IL_0220:
	{
		// instance.yMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_57 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_58 = ((ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_57);
		float L_59;
		L_59 = GenericVirtualFuncInvoker1< float, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mA86928BC888E342D2C2644535E3399952F5077ED_RuntimeMethod_var, L_57, L_58);
		SizeBySpeedModule_set_yMultiplier_m4C9EE0927456366AC12C17543E95BAB3201C9DCB((&V_0), L_59, NULL);
		// break;
		goto IL_028a;
	}

IL_0234:
	{
		// instance.z = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_60 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_61 = ((ES3Type_MinMaxCurve_t1C147718750ACBECE5D2B7F545D2A434A3C5409B_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t1C147718750ACBECE5D2B7F545D2A434A3C5409B_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_60);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_62;
		L_62 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_m9D6B4042B923127DEA4A2CAA3E35EED37D75B3D0_RuntimeMethod_var, L_60, L_61);
		SizeBySpeedModule_set_z_m73C05D968B5C62551614E86A77AEF557F15734A3((&V_0), L_62, NULL);
		// break;
		goto IL_028a;
	}

IL_0248:
	{
		// instance.zMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_63 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_64 = ((ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_63);
		float L_65;
		L_65 = GenericVirtualFuncInvoker1< float, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mA86928BC888E342D2C2644535E3399952F5077ED_RuntimeMethod_var, L_63, L_64);
		SizeBySpeedModule_set_zMultiplier_m0B67A4AF3E30D31C14DBD5FAAA3EABFB787D9826((&V_0), L_65, NULL);
		// break;
		goto IL_028a;
	}

IL_025c:
	{
		// instance.separateAxes = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_66 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_67 = ((ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_66);
		bool L_68;
		L_68 = GenericVirtualFuncInvoker1< bool, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mFFB70EE53D8CD0255A4E599780F62A3EB1520E83_RuntimeMethod_var, L_66, L_67);
		SizeBySpeedModule_set_separateAxes_m5B0BA28A01D7FED6FDDA0267135B5EAE1F9C72C7((&V_0), L_68, NULL);
		// break;
		goto IL_028a;
	}

IL_0270:
	{
		// instance.range = reader.Read<UnityEngine.Vector2>(ES3Type_Vector2.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_69 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_70 = ((ES3Type_Vector2_tB51CE4B1AFCBAFE7ADC540050621735C4F8D4387_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Vector2_tB51CE4B1AFCBAFE7ADC540050621735C4F8D4387_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_69);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_71;
		L_71 = GenericVirtualFuncInvoker1< Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_m95B09869E3B912BD36BC3571D842BA21C71EB14B_RuntimeMethod_var, L_69, L_70);
		SizeBySpeedModule_set_range_m76B9B316654E44D6938A4A06DED0DF8B3CBCE4D7((&V_0), L_71, NULL);
		// break;
		goto IL_028a;
	}

IL_0284:
	{
		// reader.Skip();
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_72 = ___reader0;
		NullCheck(L_72);
		VirtualActionInvoker0::Invoke(41 /* System.Void ES3Reader::Skip() */, L_72);
	}

IL_028a:
	{
		// while((propertyName = reader.ReadPropertyName()) != null)
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_73 = ___reader0;
		NullCheck(L_73);
		String_t* L_74;
		L_74 = VirtualFuncInvoker0< String_t* >::Invoke(21 /* System.String ES3Reader::ReadPropertyName() */, L_73);
		String_t* L_75 = L_74;
		V_1 = L_75;
		if (L_75)
		{
			goto IL_000c;
		}
	}
	{
		// }
		return;
	}
}
// System.Void ES3Types.ES3Type_SizeBySpeedModule::ReadInto<UnityEngine.ParticleSystem/TriggerModule>(ES3Reader,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ES3Type_SizeBySpeedModule_ReadInto_TisTriggerModule_tDEE844919206259DA831ADCA3B1B2D915CB767B1_m97AFCDCB359067EDFE699A0A71520F6AD6BF5655_gshared (ES3Type_SizeBySpeedModule_t2A3358BE9F6111ED907A0D4CA428148A73CD7601* __this, ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* ___reader0, RuntimeObject* ___obj1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mFFB70EE53D8CD0255A4E599780F62A3EB1520E83_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_m9D6B4042B923127DEA4A2CAA3E35EED37D75B3D0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mA86928BC888E342D2C2644535E3399952F5077ED_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_m95B09869E3B912BD36BC3571D842BA21C71EB14B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_MinMaxCurve_t1C147718750ACBECE5D2B7F545D2A434A3C5409B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_Vector2_tB51CE4B1AFCBAFE7ADC540050621735C4F8D4387_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SizeBySpeedModule_t73995CB54A0D1B06BA100EA77972D37CDF7B4DC4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral062DB096C728515E033CF8C48A1C1F0B9A79384B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1B024D537329B86AB0DF96B2A714180F442F53E9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2F8690361553406965679AEF125F896BC5FC61F5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3EE5A4671A4E5AEBD31CA5F013A7773DC18ED22B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4845015737DC41475709911228278216EE4DC3AF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8C6F88DEE0DFE3513BB8B44A8CF0FEE437F4EFFB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9384C6EF2DA5C0BD5274A0DACFF291D0ABBFD8B1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9CE1604D659135925CCC4DD1F526AFFE42E689F1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9E61658953B4F9BB4A05E3D2D2BC18990BADE934);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBD0DD0004699EF86BF0FC1D161FA3766AF5126C4);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B);
		s_Il2CppMethodInitialized = true;
	}
	SizeBySpeedModule_t73995CB54A0D1B06BA100EA77972D37CDF7B4DC4 V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	uint32_t V_2 = 0;
	{
		// var instance = (UnityEngine.ParticleSystem.SizeBySpeedModule)obj;
		RuntimeObject* L_0 = ___obj1;
		V_0 = ((*(SizeBySpeedModule_t73995CB54A0D1B06BA100EA77972D37CDF7B4DC4*)((SizeBySpeedModule_t73995CB54A0D1B06BA100EA77972D37CDF7B4DC4*)(SizeBySpeedModule_t73995CB54A0D1B06BA100EA77972D37CDF7B4DC4*)UnBox(L_0, SizeBySpeedModule_t73995CB54A0D1B06BA100EA77972D37CDF7B4DC4_il2cpp_TypeInfo_var))));
		goto IL_028a;
	}

IL_000c:
	{
		String_t* L_1 = V_1;
		uint32_t L_2;
		L_2 = U3CPrivateImplementationDetailsU3E_ComputeStringHash_m9E43873DE0DF480D27EC1C2AA3C09E74EA77F75D(L_1, NULL);
		V_2 = L_2;
		uint32_t L_3 = V_2;
		if ((!(((uint32_t)L_3) <= ((uint32_t)((int32_t)1479031685)))))
		{
			goto IL_0064;
		}
	}
	{
		uint32_t L_4 = V_2;
		if ((!(((uint32_t)L_4) <= ((uint32_t)((int32_t)597743964)))))
		{
			goto IL_003e;
		}
	}
	{
		uint32_t L_5 = V_2;
		if ((((int32_t)L_5) == ((int32_t)((int32_t)49525662))))
		{
			goto IL_00b5;
		}
	}
	{
		uint32_t L_6 = V_2;
		if ((((int32_t)L_6) == ((int32_t)((int32_t)597743964))))
		{
			goto IL_00ca;
		}
	}
	{
		goto IL_0284;
	}

IL_003e:
	{
		uint32_t L_7 = V_2;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)726266686))))
		{
			goto IL_015d;
		}
	}
	{
		uint32_t L_8 = V_2;
		if ((((int32_t)L_8) == ((int32_t)((int32_t)1105436259))))
		{
			goto IL_00df;
		}
	}
	{
		uint32_t L_9 = V_2;
		if ((((int32_t)L_9) == ((int32_t)((int32_t)1479031685))))
		{
			goto IL_0172;
		}
	}
	{
		goto IL_0284;
	}

IL_0064:
	{
		uint32_t L_10 = V_2;
		if ((!(((uint32_t)L_10) <= ((uint32_t)((int32_t)-86242094)))))
		{
			goto IL_0092;
		}
	}
	{
		uint32_t L_11 = V_2;
		if ((((int32_t)L_11) == ((int32_t)((int32_t)-1013869429))))
		{
			goto IL_0133;
		}
	}
	{
		uint32_t L_12 = V_2;
		if ((((int32_t)L_12) == ((int32_t)((int32_t)-585050980))))
		{
			goto IL_0109;
		}
	}
	{
		uint32_t L_13 = V_2;
		if ((((int32_t)L_13) == ((int32_t)((int32_t)-86242094))))
		{
			goto IL_0187;
		}
	}
	{
		goto IL_0284;
	}

IL_0092:
	{
		uint32_t L_14 = V_2;
		if ((((int32_t)L_14) == ((int32_t)((int32_t)-66302220))))
		{
			goto IL_011e;
		}
	}
	{
		uint32_t L_15 = V_2;
		if ((((int32_t)L_15) == ((int32_t)((int32_t)-49524601))))
		{
			goto IL_00f4;
		}
	}
	{
		uint32_t L_16 = V_2;
		if ((((int32_t)L_16) == ((int32_t)((int32_t)-15969363))))
		{
			goto IL_0148;
		}
	}
	{
		goto IL_0284;
	}

IL_00b5:
	{
		String_t* L_17 = V_1;
		bool L_18;
		L_18 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_17, _stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B, NULL);
		if (L_18)
		{
			goto IL_019c;
		}
	}
	{
		goto IL_0284;
	}

IL_00ca:
	{
		String_t* L_19 = V_1;
		bool L_20;
		L_20 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_19, _stringLiteral3EE5A4671A4E5AEBD31CA5F013A7773DC18ED22B, NULL);
		if (L_20)
		{
			goto IL_01b3;
		}
	}
	{
		goto IL_0284;
	}

IL_00df:
	{
		String_t* L_21 = V_1;
		bool L_22;
		L_22 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_21, _stringLiteralBD0DD0004699EF86BF0FC1D161FA3766AF5126C4, NULL);
		if (L_22)
		{
			goto IL_01ca;
		}
	}
	{
		goto IL_0284;
	}

IL_00f4:
	{
		String_t* L_23 = V_1;
		bool L_24;
		L_24 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_23, _stringLiteral062DB096C728515E033CF8C48A1C1F0B9A79384B, NULL);
		if (L_24)
		{
			goto IL_01e1;
		}
	}
	{
		goto IL_0284;
	}

IL_0109:
	{
		String_t* L_25 = V_1;
		bool L_26;
		L_26 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_25, _stringLiteral8C6F88DEE0DFE3513BB8B44A8CF0FEE437F4EFFB, NULL);
		if (L_26)
		{
			goto IL_01f8;
		}
	}
	{
		goto IL_0284;
	}

IL_011e:
	{
		String_t* L_27 = V_1;
		bool L_28;
		L_28 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_27, _stringLiteral9384C6EF2DA5C0BD5274A0DACFF291D0ABBFD8B1, NULL);
		if (L_28)
		{
			goto IL_020c;
		}
	}
	{
		goto IL_0284;
	}

IL_0133:
	{
		String_t* L_29 = V_1;
		bool L_30;
		L_30 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_29, _stringLiteral9E61658953B4F9BB4A05E3D2D2BC18990BADE934, NULL);
		if (L_30)
		{
			goto IL_0220;
		}
	}
	{
		goto IL_0284;
	}

IL_0148:
	{
		String_t* L_31 = V_1;
		bool L_32;
		L_32 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_31, _stringLiteral9CE1604D659135925CCC4DD1F526AFFE42E689F1, NULL);
		if (L_32)
		{
			goto IL_0234;
		}
	}
	{
		goto IL_0284;
	}

IL_015d:
	{
		String_t* L_33 = V_1;
		bool L_34;
		L_34 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_33, _stringLiteral2F8690361553406965679AEF125F896BC5FC61F5, NULL);
		if (L_34)
		{
			goto IL_0248;
		}
	}
	{
		goto IL_0284;
	}

IL_0172:
	{
		String_t* L_35 = V_1;
		bool L_36;
		L_36 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_35, _stringLiteral1B024D537329B86AB0DF96B2A714180F442F53E9, NULL);
		if (L_36)
		{
			goto IL_025c;
		}
	}
	{
		goto IL_0284;
	}

IL_0187:
	{
		String_t* L_37 = V_1;
		bool L_38;
		L_38 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_37, _stringLiteral4845015737DC41475709911228278216EE4DC3AF, NULL);
		if (L_38)
		{
			goto IL_0270;
		}
	}
	{
		goto IL_0284;
	}

IL_019c:
	{
		// instance.enabled = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_39 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_40 = ((ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_39);
		bool L_41;
		L_41 = GenericVirtualFuncInvoker1< bool, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mFFB70EE53D8CD0255A4E599780F62A3EB1520E83_RuntimeMethod_var, L_39, L_40);
		SizeBySpeedModule_set_enabled_m1DFF0FEFF522C52D874173B6CDAAEE94F9E8B718((&V_0), L_41, NULL);
		// break;
		goto IL_028a;
	}

IL_01b3:
	{
		// instance.size = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_42 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_43 = ((ES3Type_MinMaxCurve_t1C147718750ACBECE5D2B7F545D2A434A3C5409B_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t1C147718750ACBECE5D2B7F545D2A434A3C5409B_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_42);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_44;
		L_44 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_m9D6B4042B923127DEA4A2CAA3E35EED37D75B3D0_RuntimeMethod_var, L_42, L_43);
		SizeBySpeedModule_set_size_mD906BB6EAE9613DDA6F623E4D4878D69ECB90729((&V_0), L_44, NULL);
		// break;
		goto IL_028a;
	}

IL_01ca:
	{
		// instance.sizeMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_45 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_46 = ((ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_45);
		float L_47;
		L_47 = GenericVirtualFuncInvoker1< float, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mA86928BC888E342D2C2644535E3399952F5077ED_RuntimeMethod_var, L_45, L_46);
		SizeBySpeedModule_set_sizeMultiplier_mAFACCF6252B8FB92DC3A51BCE11D22126B315901((&V_0), L_47, NULL);
		// break;
		goto IL_028a;
	}

IL_01e1:
	{
		// instance.x = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_48 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_49 = ((ES3Type_MinMaxCurve_t1C147718750ACBECE5D2B7F545D2A434A3C5409B_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t1C147718750ACBECE5D2B7F545D2A434A3C5409B_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_48);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_50;
		L_50 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_m9D6B4042B923127DEA4A2CAA3E35EED37D75B3D0_RuntimeMethod_var, L_48, L_49);
		SizeBySpeedModule_set_x_mED5B851A688588F171B38AF31B0CC91A003DA164((&V_0), L_50, NULL);
		// break;
		goto IL_028a;
	}

IL_01f8:
	{
		// instance.xMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_51 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_52 = ((ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_51);
		float L_53;
		L_53 = GenericVirtualFuncInvoker1< float, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mA86928BC888E342D2C2644535E3399952F5077ED_RuntimeMethod_var, L_51, L_52);
		SizeBySpeedModule_set_xMultiplier_m1803C7585C7DA6333FB4B3595EAD753FFD8ED32A((&V_0), L_53, NULL);
		// break;
		goto IL_028a;
	}

IL_020c:
	{
		// instance.y = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_54 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_55 = ((ES3Type_MinMaxCurve_t1C147718750ACBECE5D2B7F545D2A434A3C5409B_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t1C147718750ACBECE5D2B7F545D2A434A3C5409B_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_54);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_56;
		L_56 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_m9D6B4042B923127DEA4A2CAA3E35EED37D75B3D0_RuntimeMethod_var, L_54, L_55);
		SizeBySpeedModule_set_y_m1E9DE959AFA22DE52D24537108BD41B2D4B017E6((&V_0), L_56, NULL);
		// break;
		goto IL_028a;
	}

IL_0220:
	{
		// instance.yMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_57 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_58 = ((ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_57);
		float L_59;
		L_59 = GenericVirtualFuncInvoker1< float, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mA86928BC888E342D2C2644535E3399952F5077ED_RuntimeMethod_var, L_57, L_58);
		SizeBySpeedModule_set_yMultiplier_m4C9EE0927456366AC12C17543E95BAB3201C9DCB((&V_0), L_59, NULL);
		// break;
		goto IL_028a;
	}

IL_0234:
	{
		// instance.z = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_60 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_61 = ((ES3Type_MinMaxCurve_t1C147718750ACBECE5D2B7F545D2A434A3C5409B_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t1C147718750ACBECE5D2B7F545D2A434A3C5409B_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_60);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_62;
		L_62 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_m9D6B4042B923127DEA4A2CAA3E35EED37D75B3D0_RuntimeMethod_var, L_60, L_61);
		SizeBySpeedModule_set_z_m73C05D968B5C62551614E86A77AEF557F15734A3((&V_0), L_62, NULL);
		// break;
		goto IL_028a;
	}

IL_0248:
	{
		// instance.zMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_63 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_64 = ((ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_63);
		float L_65;
		L_65 = GenericVirtualFuncInvoker1< float, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mA86928BC888E342D2C2644535E3399952F5077ED_RuntimeMethod_var, L_63, L_64);
		SizeBySpeedModule_set_zMultiplier_m0B67A4AF3E30D31C14DBD5FAAA3EABFB787D9826((&V_0), L_65, NULL);
		// break;
		goto IL_028a;
	}

IL_025c:
	{
		// instance.separateAxes = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_66 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_67 = ((ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_66);
		bool L_68;
		L_68 = GenericVirtualFuncInvoker1< bool, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mFFB70EE53D8CD0255A4E599780F62A3EB1520E83_RuntimeMethod_var, L_66, L_67);
		SizeBySpeedModule_set_separateAxes_m5B0BA28A01D7FED6FDDA0267135B5EAE1F9C72C7((&V_0), L_68, NULL);
		// break;
		goto IL_028a;
	}

IL_0270:
	{
		// instance.range = reader.Read<UnityEngine.Vector2>(ES3Type_Vector2.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_69 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_70 = ((ES3Type_Vector2_tB51CE4B1AFCBAFE7ADC540050621735C4F8D4387_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Vector2_tB51CE4B1AFCBAFE7ADC540050621735C4F8D4387_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_69);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_71;
		L_71 = GenericVirtualFuncInvoker1< Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_m95B09869E3B912BD36BC3571D842BA21C71EB14B_RuntimeMethod_var, L_69, L_70);
		SizeBySpeedModule_set_range_m76B9B316654E44D6938A4A06DED0DF8B3CBCE4D7((&V_0), L_71, NULL);
		// break;
		goto IL_028a;
	}

IL_0284:
	{
		// reader.Skip();
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_72 = ___reader0;
		NullCheck(L_72);
		VirtualActionInvoker0::Invoke(41 /* System.Void ES3Reader::Skip() */, L_72);
	}

IL_028a:
	{
		// while((propertyName = reader.ReadPropertyName()) != null)
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_73 = ___reader0;
		NullCheck(L_73);
		String_t* L_74;
		L_74 = VirtualFuncInvoker0< String_t* >::Invoke(21 /* System.String ES3Reader::ReadPropertyName() */, L_73);
		String_t* L_75 = L_74;
		V_1 = L_75;
		if (L_75)
		{
			goto IL_000c;
		}
	}
	{
		// }
		return;
	}
}
// System.Void ES3Types.ES3Type_SizeBySpeedModule::ReadInto<UnityEngine.ParticleSystem/VelocityOverLifetimeModule>(ES3Reader,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ES3Type_SizeBySpeedModule_ReadInto_TisVelocityOverLifetimeModule_tB4A3291E3D2E850257EE3F8344AAEDA06D7FCE56_m4665928881C6373A9142B2911CFC833828569520_gshared (ES3Type_SizeBySpeedModule_t2A3358BE9F6111ED907A0D4CA428148A73CD7601* __this, ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* ___reader0, RuntimeObject* ___obj1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mFFB70EE53D8CD0255A4E599780F62A3EB1520E83_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_m9D6B4042B923127DEA4A2CAA3E35EED37D75B3D0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mA86928BC888E342D2C2644535E3399952F5077ED_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_m95B09869E3B912BD36BC3571D842BA21C71EB14B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_MinMaxCurve_t1C147718750ACBECE5D2B7F545D2A434A3C5409B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_Vector2_tB51CE4B1AFCBAFE7ADC540050621735C4F8D4387_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SizeBySpeedModule_t73995CB54A0D1B06BA100EA77972D37CDF7B4DC4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral062DB096C728515E033CF8C48A1C1F0B9A79384B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1B024D537329B86AB0DF96B2A714180F442F53E9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2F8690361553406965679AEF125F896BC5FC61F5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3EE5A4671A4E5AEBD31CA5F013A7773DC18ED22B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4845015737DC41475709911228278216EE4DC3AF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8C6F88DEE0DFE3513BB8B44A8CF0FEE437F4EFFB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9384C6EF2DA5C0BD5274A0DACFF291D0ABBFD8B1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9CE1604D659135925CCC4DD1F526AFFE42E689F1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9E61658953B4F9BB4A05E3D2D2BC18990BADE934);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBD0DD0004699EF86BF0FC1D161FA3766AF5126C4);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B);
		s_Il2CppMethodInitialized = true;
	}
	SizeBySpeedModule_t73995CB54A0D1B06BA100EA77972D37CDF7B4DC4 V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	uint32_t V_2 = 0;
	{
		// var instance = (UnityEngine.ParticleSystem.SizeBySpeedModule)obj;
		RuntimeObject* L_0 = ___obj1;
		V_0 = ((*(SizeBySpeedModule_t73995CB54A0D1B06BA100EA77972D37CDF7B4DC4*)((SizeBySpeedModule_t73995CB54A0D1B06BA100EA77972D37CDF7B4DC4*)(SizeBySpeedModule_t73995CB54A0D1B06BA100EA77972D37CDF7B4DC4*)UnBox(L_0, SizeBySpeedModule_t73995CB54A0D1B06BA100EA77972D37CDF7B4DC4_il2cpp_TypeInfo_var))));
		goto IL_028a;
	}

IL_000c:
	{
		String_t* L_1 = V_1;
		uint32_t L_2;
		L_2 = U3CPrivateImplementationDetailsU3E_ComputeStringHash_m9E43873DE0DF480D27EC1C2AA3C09E74EA77F75D(L_1, NULL);
		V_2 = L_2;
		uint32_t L_3 = V_2;
		if ((!(((uint32_t)L_3) <= ((uint32_t)((int32_t)1479031685)))))
		{
			goto IL_0064;
		}
	}
	{
		uint32_t L_4 = V_2;
		if ((!(((uint32_t)L_4) <= ((uint32_t)((int32_t)597743964)))))
		{
			goto IL_003e;
		}
	}
	{
		uint32_t L_5 = V_2;
		if ((((int32_t)L_5) == ((int32_t)((int32_t)49525662))))
		{
			goto IL_00b5;
		}
	}
	{
		uint32_t L_6 = V_2;
		if ((((int32_t)L_6) == ((int32_t)((int32_t)597743964))))
		{
			goto IL_00ca;
		}
	}
	{
		goto IL_0284;
	}

IL_003e:
	{
		uint32_t L_7 = V_2;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)726266686))))
		{
			goto IL_015d;
		}
	}
	{
		uint32_t L_8 = V_2;
		if ((((int32_t)L_8) == ((int32_t)((int32_t)1105436259))))
		{
			goto IL_00df;
		}
	}
	{
		uint32_t L_9 = V_2;
		if ((((int32_t)L_9) == ((int32_t)((int32_t)1479031685))))
		{
			goto IL_0172;
		}
	}
	{
		goto IL_0284;
	}

IL_0064:
	{
		uint32_t L_10 = V_2;
		if ((!(((uint32_t)L_10) <= ((uint32_t)((int32_t)-86242094)))))
		{
			goto IL_0092;
		}
	}
	{
		uint32_t L_11 = V_2;
		if ((((int32_t)L_11) == ((int32_t)((int32_t)-1013869429))))
		{
			goto IL_0133;
		}
	}
	{
		uint32_t L_12 = V_2;
		if ((((int32_t)L_12) == ((int32_t)((int32_t)-585050980))))
		{
			goto IL_0109;
		}
	}
	{
		uint32_t L_13 = V_2;
		if ((((int32_t)L_13) == ((int32_t)((int32_t)-86242094))))
		{
			goto IL_0187;
		}
	}
	{
		goto IL_0284;
	}

IL_0092:
	{
		uint32_t L_14 = V_2;
		if ((((int32_t)L_14) == ((int32_t)((int32_t)-66302220))))
		{
			goto IL_011e;
		}
	}
	{
		uint32_t L_15 = V_2;
		if ((((int32_t)L_15) == ((int32_t)((int32_t)-49524601))))
		{
			goto IL_00f4;
		}
	}
	{
		uint32_t L_16 = V_2;
		if ((((int32_t)L_16) == ((int32_t)((int32_t)-15969363))))
		{
			goto IL_0148;
		}
	}
	{
		goto IL_0284;
	}

IL_00b5:
	{
		String_t* L_17 = V_1;
		bool L_18;
		L_18 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_17, _stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B, NULL);
		if (L_18)
		{
			goto IL_019c;
		}
	}
	{
		goto IL_0284;
	}

IL_00ca:
	{
		String_t* L_19 = V_1;
		bool L_20;
		L_20 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_19, _stringLiteral3EE5A4671A4E5AEBD31CA5F013A7773DC18ED22B, NULL);
		if (L_20)
		{
			goto IL_01b3;
		}
	}
	{
		goto IL_0284;
	}

IL_00df:
	{
		String_t* L_21 = V_1;
		bool L_22;
		L_22 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_21, _stringLiteralBD0DD0004699EF86BF0FC1D161FA3766AF5126C4, NULL);
		if (L_22)
		{
			goto IL_01ca;
		}
	}
	{
		goto IL_0284;
	}

IL_00f4:
	{
		String_t* L_23 = V_1;
		bool L_24;
		L_24 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_23, _stringLiteral062DB096C728515E033CF8C48A1C1F0B9A79384B, NULL);
		if (L_24)
		{
			goto IL_01e1;
		}
	}
	{
		goto IL_0284;
	}

IL_0109:
	{
		String_t* L_25 = V_1;
		bool L_26;
		L_26 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_25, _stringLiteral8C6F88DEE0DFE3513BB8B44A8CF0FEE437F4EFFB, NULL);
		if (L_26)
		{
			goto IL_01f8;
		}
	}
	{
		goto IL_0284;
	}

IL_011e:
	{
		String_t* L_27 = V_1;
		bool L_28;
		L_28 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_27, _stringLiteral9384C6EF2DA5C0BD5274A0DACFF291D0ABBFD8B1, NULL);
		if (L_28)
		{
			goto IL_020c;
		}
	}
	{
		goto IL_0284;
	}

IL_0133:
	{
		String_t* L_29 = V_1;
		bool L_30;
		L_30 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_29, _stringLiteral9E61658953B4F9BB4A05E3D2D2BC18990BADE934, NULL);
		if (L_30)
		{
			goto IL_0220;
		}
	}
	{
		goto IL_0284;
	}

IL_0148:
	{
		String_t* L_31 = V_1;
		bool L_32;
		L_32 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_31, _stringLiteral9CE1604D659135925CCC4DD1F526AFFE42E689F1, NULL);
		if (L_32)
		{
			goto IL_0234;
		}
	}
	{
		goto IL_0284;
	}

IL_015d:
	{
		String_t* L_33 = V_1;
		bool L_34;
		L_34 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_33, _stringLiteral2F8690361553406965679AEF125F896BC5FC61F5, NULL);
		if (L_34)
		{
			goto IL_0248;
		}
	}
	{
		goto IL_0284;
	}

IL_0172:
	{
		String_t* L_35 = V_1;
		bool L_36;
		L_36 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_35, _stringLiteral1B024D537329B86AB0DF96B2A714180F442F53E9, NULL);
		if (L_36)
		{
			goto IL_025c;
		}
	}
	{
		goto IL_0284;
	}

IL_0187:
	{
		String_t* L_37 = V_1;
		bool L_38;
		L_38 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_37, _stringLiteral4845015737DC41475709911228278216EE4DC3AF, NULL);
		if (L_38)
		{
			goto IL_0270;
		}
	}
	{
		goto IL_0284;
	}

IL_019c:
	{
		// instance.enabled = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_39 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_40 = ((ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_39);
		bool L_41;
		L_41 = GenericVirtualFuncInvoker1< bool, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mFFB70EE53D8CD0255A4E599780F62A3EB1520E83_RuntimeMethod_var, L_39, L_40);
		SizeBySpeedModule_set_enabled_m1DFF0FEFF522C52D874173B6CDAAEE94F9E8B718((&V_0), L_41, NULL);
		// break;
		goto IL_028a;
	}

IL_01b3:
	{
		// instance.size = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_42 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_43 = ((ES3Type_MinMaxCurve_t1C147718750ACBECE5D2B7F545D2A434A3C5409B_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t1C147718750ACBECE5D2B7F545D2A434A3C5409B_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_42);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_44;
		L_44 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_m9D6B4042B923127DEA4A2CAA3E35EED37D75B3D0_RuntimeMethod_var, L_42, L_43);
		SizeBySpeedModule_set_size_mD906BB6EAE9613DDA6F623E4D4878D69ECB90729((&V_0), L_44, NULL);
		// break;
		goto IL_028a;
	}

IL_01ca:
	{
		// instance.sizeMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_45 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_46 = ((ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_45);
		float L_47;
		L_47 = GenericVirtualFuncInvoker1< float, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mA86928BC888E342D2C2644535E3399952F5077ED_RuntimeMethod_var, L_45, L_46);
		SizeBySpeedModule_set_sizeMultiplier_mAFACCF6252B8FB92DC3A51BCE11D22126B315901((&V_0), L_47, NULL);
		// break;
		goto IL_028a;
	}

IL_01e1:
	{
		// instance.x = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_48 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_49 = ((ES3Type_MinMaxCurve_t1C147718750ACBECE5D2B7F545D2A434A3C5409B_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t1C147718750ACBECE5D2B7F545D2A434A3C5409B_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_48);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_50;
		L_50 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_m9D6B4042B923127DEA4A2CAA3E35EED37D75B3D0_RuntimeMethod_var, L_48, L_49);
		SizeBySpeedModule_set_x_mED5B851A688588F171B38AF31B0CC91A003DA164((&V_0), L_50, NULL);
		// break;
		goto IL_028a;
	}

IL_01f8:
	{
		// instance.xMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_51 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_52 = ((ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_51);
		float L_53;
		L_53 = GenericVirtualFuncInvoker1< float, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mA86928BC888E342D2C2644535E3399952F5077ED_RuntimeMethod_var, L_51, L_52);
		SizeBySpeedModule_set_xMultiplier_m1803C7585C7DA6333FB4B3595EAD753FFD8ED32A((&V_0), L_53, NULL);
		// break;
		goto IL_028a;
	}

IL_020c:
	{
		// instance.y = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_54 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_55 = ((ES3Type_MinMaxCurve_t1C147718750ACBECE5D2B7F545D2A434A3C5409B_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t1C147718750ACBECE5D2B7F545D2A434A3C5409B_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_54);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_56;
		L_56 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_m9D6B4042B923127DEA4A2CAA3E35EED37D75B3D0_RuntimeMethod_var, L_54, L_55);
		SizeBySpeedModule_set_y_m1E9DE959AFA22DE52D24537108BD41B2D4B017E6((&V_0), L_56, NULL);
		// break;
		goto IL_028a;
	}

IL_0220:
	{
		// instance.yMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_57 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_58 = ((ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_57);
		float L_59;
		L_59 = GenericVirtualFuncInvoker1< float, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mA86928BC888E342D2C2644535E3399952F5077ED_RuntimeMethod_var, L_57, L_58);
		SizeBySpeedModule_set_yMultiplier_m4C9EE0927456366AC12C17543E95BAB3201C9DCB((&V_0), L_59, NULL);
		// break;
		goto IL_028a;
	}

IL_0234:
	{
		// instance.z = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_60 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_61 = ((ES3Type_MinMaxCurve_t1C147718750ACBECE5D2B7F545D2A434A3C5409B_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t1C147718750ACBECE5D2B7F545D2A434A3C5409B_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_60);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_62;
		L_62 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_m9D6B4042B923127DEA4A2CAA3E35EED37D75B3D0_RuntimeMethod_var, L_60, L_61);
		SizeBySpeedModule_set_z_m73C05D968B5C62551614E86A77AEF557F15734A3((&V_0), L_62, NULL);
		// break;
		goto IL_028a;
	}

IL_0248:
	{
		// instance.zMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_63 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_64 = ((ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_63);
		float L_65;
		L_65 = GenericVirtualFuncInvoker1< float, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mA86928BC888E342D2C2644535E3399952F5077ED_RuntimeMethod_var, L_63, L_64);
		SizeBySpeedModule_set_zMultiplier_m0B67A4AF3E30D31C14DBD5FAAA3EABFB787D9826((&V_0), L_65, NULL);
		// break;
		goto IL_028a;
	}

IL_025c:
	{
		// instance.separateAxes = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_66 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_67 = ((ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_66);
		bool L_68;
		L_68 = GenericVirtualFuncInvoker1< bool, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mFFB70EE53D8CD0255A4E599780F62A3EB1520E83_RuntimeMethod_var, L_66, L_67);
		SizeBySpeedModule_set_separateAxes_m5B0BA28A01D7FED6FDDA0267135B5EAE1F9C72C7((&V_0), L_68, NULL);
		// break;
		goto IL_028a;
	}

IL_0270:
	{
		// instance.range = reader.Read<UnityEngine.Vector2>(ES3Type_Vector2.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_69 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_70 = ((ES3Type_Vector2_tB51CE4B1AFCBAFE7ADC540050621735C4F8D4387_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Vector2_tB51CE4B1AFCBAFE7ADC540050621735C4F8D4387_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_69);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_71;
		L_71 = GenericVirtualFuncInvoker1< Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_m95B09869E3B912BD36BC3571D842BA21C71EB14B_RuntimeMethod_var, L_69, L_70);
		SizeBySpeedModule_set_range_m76B9B316654E44D6938A4A06DED0DF8B3CBCE4D7((&V_0), L_71, NULL);
		// break;
		goto IL_028a;
	}

IL_0284:
	{
		// reader.Skip();
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_72 = ___reader0;
		NullCheck(L_72);
		VirtualActionInvoker0::Invoke(41 /* System.Void ES3Reader::Skip() */, L_72);
	}

IL_028a:
	{
		// while((propertyName = reader.ReadPropertyName()) != null)
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_73 = ___reader0;
		NullCheck(L_73);
		String_t* L_74;
		L_74 = VirtualFuncInvoker0< String_t* >::Invoke(21 /* System.String ES3Reader::ReadPropertyName() */, L_73);
		String_t* L_75 = L_74;
		V_1 = L_75;
		if (L_75)
		{
			goto IL_000c;
		}
	}
	{
		// }
		return;
	}
}
// System.Object ES3Types.ES3Type_SizeOverLifetimeModule::Read<System.Boolean>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_SizeOverLifetimeModule_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m0685931368F7B5084854FADE192C6A1132F6D234_gshared (ES3Type_SizeOverLifetimeModule_tE76521DF6C9288642AE09CBD10810E97A6038CAF* __this, ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SizeOverLifetimeModule_t6711CE9659123CAA5BFBFDFA9F53174CD979AC0C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	SizeOverLifetimeModule_t6711CE9659123CAA5BFBFDFA9F53174CD979AC0C V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// var instance = new UnityEngine.ParticleSystem.SizeOverLifetimeModule();
		il2cpp_codegen_initobj((&V_0), sizeof(SizeOverLifetimeModule_t6711CE9659123CAA5BFBFDFA9F53174CD979AC0C));
		// ReadInto<T>(reader, instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_0 = ___reader0;
		SizeOverLifetimeModule_t6711CE9659123CAA5BFBFDFA9F53174CD979AC0C L_1 = V_0;
		SizeOverLifetimeModule_t6711CE9659123CAA5BFBFDFA9F53174CD979AC0C L_2 = L_1;
		RuntimeObject* L_3 = Box(SizeOverLifetimeModule_t6711CE9659123CAA5BFBFDFA9F53174CD979AC0C_il2cpp_TypeInfo_var, &L_2);
		NullCheck((ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE*)__this);
		GenericVirtualActionInvoker2< ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518*, RuntimeObject* >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 0), (ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE*)__this, L_0, L_3);
		// return instance;
		SizeOverLifetimeModule_t6711CE9659123CAA5BFBFDFA9F53174CD979AC0C L_4 = V_0;
		SizeOverLifetimeModule_t6711CE9659123CAA5BFBFDFA9F53174CD979AC0C L_5 = L_4;
		RuntimeObject* L_6 = Box(SizeOverLifetimeModule_t6711CE9659123CAA5BFBFDFA9F53174CD979AC0C_il2cpp_TypeInfo_var, &L_5);
		return L_6;
	}
}
// System.Object ES3Types.ES3Type_SizeOverLifetimeModule::Read<UnityEngine.Bounds>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_SizeOverLifetimeModule_Read_TisBounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3_m17B23559A4F501264E82396FEA099D8B137AE756_gshared (ES3Type_SizeOverLifetimeModule_tE76521DF6C9288642AE09CBD10810E97A6038CAF* __this, ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SizeOverLifetimeModule_t6711CE9659123CAA5BFBFDFA9F53174CD979AC0C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	SizeOverLifetimeModule_t6711CE9659123CAA5BFBFDFA9F53174CD979AC0C V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// var instance = new UnityEngine.ParticleSystem.SizeOverLifetimeModule();
		il2cpp_codegen_initobj((&V_0), sizeof(SizeOverLifetimeModule_t6711CE9659123CAA5BFBFDFA9F53174CD979AC0C));
		// ReadInto<T>(reader, instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_0 = ___reader0;
		SizeOverLifetimeModule_t6711CE9659123CAA5BFBFDFA9F53174CD979AC0C L_1 = V_0;
		SizeOverLifetimeModule_t6711CE9659123CAA5BFBFDFA9F53174CD979AC0C L_2 = L_1;
		RuntimeObject* L_3 = Box(SizeOverLifetimeModule_t6711CE9659123CAA5BFBFDFA9F53174CD979AC0C_il2cpp_TypeInfo_var, &L_2);
		NullCheck((ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE*)__this);
		GenericVirtualActionInvoker2< ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518*, RuntimeObject* >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 0), (ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE*)__this, L_0, L_3);
		// return instance;
		SizeOverLifetimeModule_t6711CE9659123CAA5BFBFDFA9F53174CD979AC0C L_4 = V_0;
		SizeOverLifetimeModule_t6711CE9659123CAA5BFBFDFA9F53174CD979AC0C L_5 = L_4;
		RuntimeObject* L_6 = Box(SizeOverLifetimeModule_t6711CE9659123CAA5BFBFDFA9F53174CD979AC0C_il2cpp_TypeInfo_var, &L_5);
		return L_6;
	}
}
// System.Object ES3Types.ES3Type_SizeOverLifetimeModule::Read<System.Byte>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_SizeOverLifetimeModule_Read_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m0D5C783C7DF07C69C5A22475B9CA4AED7F0DF0CC_gshared (ES3Type_SizeOverLifetimeModule_tE76521DF6C9288642AE09CBD10810E97A6038CAF* __this, ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SizeOverLifetimeModule_t6711CE9659123CAA5BFBFDFA9F53174CD979AC0C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	SizeOverLifetimeModule_t6711CE9659123CAA5BFBFDFA9F53174CD979AC0C V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// var instance = new UnityEngine.ParticleSystem.SizeOverLifetimeModule();
		il2cpp_codegen_initobj((&V_0), sizeof(SizeOverLifetimeModule_t6711CE9659123CAA5BFBFDFA9F53174CD979AC0C));
		// ReadInto<T>(reader, instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_0 = ___reader0;
		SizeOverLifetimeModule_t6711CE9659123CAA5BFBFDFA9F53174CD979AC0C L_1 = V_0;
		SizeOverLifetimeModule_t6711CE9659123CAA5BFBFDFA9F53174CD979AC0C L_2 = L_1;
		RuntimeObject* L_3 = Box(SizeOverLifetimeModule_t6711CE9659123CAA5BFBFDFA9F53174CD979AC0C_il2cpp_TypeInfo_var, &L_2);
		NullCheck((ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE*)__this);
		GenericVirtualActionInvoker2< ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518*, RuntimeObject* >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 0), (ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE*)__this, L_0, L_3);
		// return instance;
		SizeOverLifetimeModule_t6711CE9659123CAA5BFBFDFA9F53174CD979AC0C L_4 = V_0;
		SizeOverLifetimeModule_t6711CE9659123CAA5BFBFDFA9F53174CD979AC0C L_5 = L_4;
		RuntimeObject* L_6 = Box(SizeOverLifetimeModule_t6711CE9659123CAA5BFBFDFA9F53174CD979AC0C_il2cpp_TypeInfo_var, &L_5);
		return L_6;
	}
}
// System.Object ES3Types.ES3Type_SizeOverLifetimeModule::Read<UnityEngine.Color>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_SizeOverLifetimeModule_Read_TisColor_tD001788D726C3A7F1379BEED0260B9591F440C1F_m00112136423A481E1270348FFB5E39B464A9E407_gshared (ES3Type_SizeOverLifetimeModule_tE76521DF6C9288642AE09CBD10810E97A6038CAF* __this, ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SizeOverLifetimeModule_t6711CE9659123CAA5BFBFDFA9F53174CD979AC0C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	SizeOverLifetimeModule_t6711CE9659123CAA5BFBFDFA9F53174CD979AC0C V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// var instance = new UnityEngine.ParticleSystem.SizeOverLifetimeModule();
		il2cpp_codegen_initobj((&V_0), sizeof(SizeOverLifetimeModule_t6711CE9659123CAA5BFBFDFA9F53174CD979AC0C));
		// ReadInto<T>(reader, instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_0 = ___reader0;
		SizeOverLifetimeModule_t6711CE9659123CAA5BFBFDFA9F53174CD979AC0C L_1 = V_0;
		SizeOverLifetimeModule_t6711CE9659123CAA5BFBFDFA9F53174CD979AC0C L_2 = L_1;
		RuntimeObject* L_3 = Box(SizeOverLifetimeModule_t6711CE9659123CAA5BFBFDFA9F53174CD979AC0C_il2cpp_TypeInfo_var, &L_2);
		NullCheck((ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE*)__this);
		GenericVirtualActionInvoker2< ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518*, RuntimeObject* >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 0), (ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE*)__this, L_0, L_3);
		// return instance;
		SizeOverLifetimeModule_t6711CE9659123CAA5BFBFDFA9F53174CD979AC0C L_4 = V_0;
		SizeOverLifetimeModule_t6711CE9659123CAA5BFBFDFA9F53174CD979AC0C L_5 = L_4;
		RuntimeObject* L_6 = Box(SizeOverLifetimeModule_t6711CE9659123CAA5BFBFDFA9F53174CD979AC0C_il2cpp_TypeInfo_var, &L_5);
		return L_6;
	}
}
// System.Object ES3Types.ES3Type_SizeOverLifetimeModule::Read<System.Int32>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_SizeOverLifetimeModule_Read_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mAB63E067E962A0EEEB64A704876EF69874502A12_gshared (ES3Type_SizeOverLifetimeModule_tE76521DF6C9288642AE09CBD10810E97A6038CAF* __this, ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SizeOverLifetimeModule_t6711CE9659123CAA5BFBFDFA9F53174CD979AC0C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	SizeOverLifetimeModule_t6711CE9659123CAA5BFBFDFA9F53174CD979AC0C V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// var instance = new UnityEngine.ParticleSystem.SizeOverLifetimeModule();
		il2cpp_codegen_initobj((&V_0), sizeof(SizeOverLifetimeModule_t6711CE9659123CAA5BFBFDFA9F53174CD979AC0C));
		// ReadInto<T>(reader, instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_0 = ___reader0;
		SizeOverLifetimeModule_t6711CE9659123CAA5BFBFDFA9F53174CD979AC0C L_1 = V_0;
		SizeOverLifetimeModule_t6711CE9659123CAA5BFBFDFA9F53174CD979AC0C L_2 = L_1;
		RuntimeObject* L_3 = Box(SizeOverLifetimeModule_t6711CE9659123CAA5BFBFDFA9F53174CD979AC0C_il2cpp_TypeInfo_var, &L_2);
		NullCheck((ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE*)__this);
		GenericVirtualActionInvoker2< ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518*, RuntimeObject* >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 0), (ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE*)__this, L_0, L_3);
		// return instance;
		SizeOverLifetimeModule_t6711CE9659123CAA5BFBFDFA9F53174CD979AC0C L_4 = V_0;
		SizeOverLifetimeModule_t6711CE9659123CAA5BFBFDFA9F53174CD979AC0C L_5 = L_4;
		RuntimeObject* L_6 = Box(SizeOverLifetimeModule_t6711CE9659123CAA5BFBFDFA9F53174CD979AC0C_il2cpp_TypeInfo_var, &L_5);
		return L_6;
	}
}
// System.Object ES3Types.ES3Type_SizeOverLifetimeModule::Read<System.Int32Enum>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_SizeOverLifetimeModule_Read_TisInt32Enum_tCBAC8BA2BFF3A845FA599F303093BBBA374B6F0C_m46BFA6367EB09B9CAEBCEFFEB31A24312C331FFC_gshared (ES3Type_SizeOverLifetimeModule_tE76521DF6C9288642AE09CBD10810E97A6038CAF* __this, ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SizeOverLifetimeModule_t6711CE9659123CAA5BFBFDFA9F53174CD979AC0C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	SizeOverLifetimeModule_t6711CE9659123CAA5BFBFDFA9F53174CD979AC0C V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// var instance = new UnityEngine.ParticleSystem.SizeOverLifetimeModule();
		il2cpp_codegen_initobj((&V_0), sizeof(SizeOverLifetimeModule_t6711CE9659123CAA5BFBFDFA9F53174CD979AC0C));
		// ReadInto<T>(reader, instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_0 = ___reader0;
		SizeOverLifetimeModule_t6711CE9659123CAA5BFBFDFA9F53174CD979AC0C L_1 = V_0;
		SizeOverLifetimeModule_t6711CE9659123CAA5BFBFDFA9F53174CD979AC0C L_2 = L_1;
		RuntimeObject* L_3 = Box(SizeOverLifetimeModule_t6711CE9659123CAA5BFBFDFA9F53174CD979AC0C_il2cpp_TypeInfo_var, &L_2);
		NullCheck((ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE*)__this);
		GenericVirtualActionInvoker2< ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518*, RuntimeObject* >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 0), (ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE*)__this, L_0, L_3);
		// return instance;
		SizeOverLifetimeModule_t6711CE9659123CAA5BFBFDFA9F53174CD979AC0C L_4 = V_0;
		SizeOverLifetimeModule_t6711CE9659123CAA5BFBFDFA9F53174CD979AC0C L_5 = L_4;
		RuntimeObject* L_6 = Box(SizeOverLifetimeModule_t6711CE9659123CAA5BFBFDFA9F53174CD979AC0C_il2cpp_TypeInfo_var, &L_5);
		return L_6;
	}
}
// System.Object ES3Types.ES3Type_SizeOverLifetimeModule::Read<System.Int64>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_SizeOverLifetimeModule_Read_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_m56F1F64BD834D79E8D4BD19C85459584D1C345F1_gshared (ES3Type_SizeOverLifetimeModule_tE76521DF6C9288642AE09CBD10810E97A6038CAF* __this, ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SizeOverLifetimeModule_t6711CE9659123CAA5BFBFDFA9F53174CD979AC0C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	SizeOverLifetimeModule_t6711CE9659123CAA5BFBFDFA9F53174CD979AC0C V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// var instance = new UnityEngine.ParticleSystem.SizeOverLifetimeModule();
		il2cpp_codegen_initobj((&V_0), sizeof(SizeOverLifetimeModule_t6711CE9659123CAA5BFBFDFA9F53174CD979AC0C));
		// ReadInto<T>(reader, instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_0 = ___reader0;
		SizeOverLifetimeModule_t6711CE9659123CAA5BFBFDFA9F53174CD979AC0C L_1 = V_0;
		SizeOverLifetimeModule_t6711CE9659123CAA5BFBFDFA9F53174CD979AC0C L_2 = L_1;
		RuntimeObject* L_3 = Box(SizeOverLifetimeModule_t6711CE9659123CAA5BFBFDFA9F53174CD979AC0C_il2cpp_TypeInfo_var, &L_2);
		NullCheck((ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE*)__this);
		GenericVirtualActionInvoker2< ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518*, RuntimeObject* >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 0), (ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE*)__this, L_0, L_3);
		// return instance;
		SizeOverLifetimeModule_t6711CE9659123CAA5BFBFDFA9F53174CD979AC0C L_4 = V_0;
		SizeOverLifetimeModule_t6711CE9659123CAA5BFBFDFA9F53174CD979AC0C L_5 = L_4;
		RuntimeObject* L_6 = Box(SizeOverLifetimeModule_t6711CE9659123CAA5BFBFDFA9F53174CD979AC0C_il2cpp_TypeInfo_var, &L_5);
		return L_6;
	}
}
// System.Object ES3Types.ES3Type_SizeOverLifetimeModule::Read<UnityEngine.LayerMask>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_SizeOverLifetimeModule_Read_TisLayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB_mC88A93EC57C92664C6B2A03A9719AE85CCE4BC28_gshared (ES3Type_SizeOverLifetimeModule_tE76521DF6C9288642AE09CBD10810E97A6038CAF* __this, ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SizeOverLifetimeModule_t6711CE9659123CAA5BFBFDFA9F53174CD979AC0C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	SizeOverLifetimeModule_t6711CE9659123CAA5BFBFDFA9F53174CD979AC0C V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// var instance = new UnityEngine.ParticleSystem.SizeOverLifetimeModule();
		il2cpp_codegen_initobj((&V_0), sizeof(SizeOverLifetimeModule_t6711CE9659123CAA5BFBFDFA9F53174CD979AC0C));
		// ReadInto<T>(reader, instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_0 = ___reader0;
		SizeOverLifetimeModule_t6711CE9659123CAA5BFBFDFA9F53174CD979AC0C L_1 = V_0;
		SizeOverLifetimeModule_t6711CE9659123CAA5BFBFDFA9F53174CD979AC0C L_2 = L_1;
		RuntimeObject* L_3 = Box(SizeOverLifetimeModule_t6711CE9659123CAA5BFBFDFA9F53174CD979AC0C_il2cpp_TypeInfo_var, &L_2);
		NullCheck((ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE*)__this);
		GenericVirtualActionInvoker2< ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518*, RuntimeObject* >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 0), (ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE*)__this, L_0, L_3);
		// return instance;
		SizeOverLifetimeModule_t6711CE9659123CAA5BFBFDFA9F53174CD979AC0C L_4 = V_0;
		SizeOverLifetimeModule_t6711CE9659123CAA5BFBFDFA9F53174CD979AC0C L_5 = L_4;
		RuntimeObject* L_6 = Box(SizeOverLifetimeModule_t6711CE9659123CAA5BFBFDFA9F53174CD979AC0C_il2cpp_TypeInfo_var, &L_5);
		return L_6;
	}
}
// System.Object ES3Types.ES3Type_SizeOverLifetimeModule::Read<UnityEngine.Matrix4x4>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_SizeOverLifetimeModule_Read_TisMatrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6_m3DFDA042D3909DD8AF9B2FC97E6B6514DB1AA96C_gshared (ES3Type_SizeOverLifetimeModule_tE76521DF6C9288642AE09CBD10810E97A6038CAF* __this, ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SizeOverLifetimeModule_t6711CE9659123CAA5BFBFDFA9F53174CD979AC0C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	SizeOverLifetimeModule_t6711CE9659123CAA5BFBFDFA9F53174CD979AC0C V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// var instance = new UnityEngine.ParticleSystem.SizeOverLifetimeModule();
		il2cpp_codegen_initobj((&V_0), sizeof(SizeOverLifetimeModule_t6711CE9659123CAA5BFBFDFA9F53174CD979AC0C));
		// ReadInto<T>(reader, instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_0 = ___reader0;
		SizeOverLifetimeModule_t6711CE9659123CAA5BFBFDFA9F53174CD979AC0C L_1 = V_0;
		SizeOverLifetimeModule_t6711CE9659123CAA5BFBFDFA9F53174CD979AC0C L_2 = L_1;
		RuntimeObject* L_3 = Box(SizeOverLifetimeModule_t6711CE9659123CAA5BFBFDFA9F53174CD979AC0C_il2cpp_TypeInfo_var, &L_2);
		NullCheck((ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE*)__this);
		GenericVirtualActionInvoker2< ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518*, RuntimeObject* >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 0), (ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE*)__this, L_0, L_3);
		// return instance;
		SizeOverLifetimeModule_t6711CE9659123CAA5BFBFDFA9F53174CD979AC0C L_4 = V_0;
		SizeOverLifetimeModule_t6711CE9659123CAA5BFBFDFA9F53174CD979AC0C L_5 = L_4;
		RuntimeObject* L_6 = Box(SizeOverLifetimeModule_t6711CE9659123CAA5BFBFDFA9F53174CD979AC0C_il2cpp_TypeInfo_var, &L_5);
		return L_6;
	}
}
// System.Object ES3Types.ES3Type_SizeOverLifetimeModule::Read<System.Object>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_SizeOverLifetimeModule_Read_TisRuntimeObject_m5C569643DA8C914AFEB8CBB6B6BFF94B3088DFF4_gshared (ES3Type_SizeOverLifetimeModule_tE76521DF6C9288642AE09CBD10810E97A6038CAF* __this, ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SizeOverLifetimeModule_t6711CE9659123CAA5BFBFDFA9F53174CD979AC0C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	SizeOverLifetimeModule_t6711CE9659123CAA5BFBFDFA9F53174CD979AC0C V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// var instance = new UnityEngine.ParticleSystem.SizeOverLifetimeModule();
		il2cpp_codegen_initobj((&V_0), sizeof(SizeOverLifetimeModule_t6711CE9659123CAA5BFBFDFA9F53174CD979AC0C));
		// ReadInto<T>(reader, instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_0 = ___reader0;
		SizeOverLifetimeModule_t6711CE9659123CAA5BFBFDFA9F53174CD979AC0C L_1 = V_0;
		SizeOverLifetimeModule_t6711CE9659123CAA5BFBFDFA9F53174CD979AC0C L_2 = L_1;
		RuntimeObject* L_3 = Box(SizeOverLifetimeModule_t6711CE9659123CAA5BFBFDFA9F53174CD979AC0C_il2cpp_TypeInfo_var, &L_2);
		NullCheck((ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE*)__this);
		GenericVirtualActionInvoker2< ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518*, RuntimeObject* >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 0), (ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE*)__this, L_0, L_3);
		// return instance;
		SizeOverLifetimeModule_t6711CE9659123CAA5BFBFDFA9F53174CD979AC0C L_4 = V_0;
		SizeOverLifetimeModule_t6711CE9659123CAA5BFBFDFA9F53174CD979AC0C L_5 = L_4;
		RuntimeObject* L_6 = Box(SizeOverLifetimeModule_t6711CE9659123CAA5BFBFDFA9F53174CD979AC0C_il2cpp_TypeInfo_var, &L_5);
		return L_6;
	}
}
// System.Object ES3Types.ES3Type_SizeOverLifetimeModule::Read<UnityEngine.Quaternion>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_SizeOverLifetimeModule_Read_TisQuaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_m5CE7C39B531E70F21B1A94642C2B2B4046F92AE1_gshared (ES3Type_SizeOverLifetimeModule_tE76521DF6C9288642AE09CBD10810E97A6038CAF* __this, ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SizeOverLifetimeModule_t6711CE9659123CAA5BFBFDFA9F53174CD979AC0C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	SizeOverLifetimeModule_t6711CE9659123CAA5BFBFDFA9F53174CD979AC0C V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// var instance = new UnityEngine.ParticleSystem.SizeOverLifetimeModule();
		il2cpp_codegen_initobj((&V_0), sizeof(SizeOverLifetimeModule_t6711CE9659123CAA5BFBFDFA9F53174CD979AC0C));
		// ReadInto<T>(reader, instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_0 = ___reader0;
		SizeOverLifetimeModule_t6711CE9659123CAA5BFBFDFA9F53174CD979AC0C L_1 = V_0;
		SizeOverLifetimeModule_t6711CE9659123CAA5BFBFDFA9F53174CD979AC0C L_2 = L_1;
		RuntimeObject* L_3 = Box(SizeOverLifetimeModule_t6711CE9659123CAA5BFBFDFA9F53174CD979AC0C_il2cpp_TypeInfo_var, &L_2);
		NullCheck((ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE*)__this);
		GenericVirtualActionInvoker2< ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518*, RuntimeObject* >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 0), (ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE*)__this, L_0, L_3);
		// return instance;
		SizeOverLifetimeModule_t6711CE9659123CAA5BFBFDFA9F53174CD979AC0C L_4 = V_0;
		SizeOverLifetimeModule_t6711CE9659123CAA5BFBFDFA9F53174CD979AC0C L_5 = L_4;
		RuntimeObject* L_6 = Box(SizeOverLifetimeModule_t6711CE9659123CAA5BFBFDFA9F53174CD979AC0C_il2cpp_TypeInfo_var, &L_5);
		return L_6;
	}
}
// System.Object ES3Types.ES3Type_SizeOverLifetimeModule::Read<UnityEngine.Rect>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_SizeOverLifetimeModule_Read_TisRect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D_mFF2BEF3151CA07331508D66F5291CEBC505FC9FB_gshared (ES3Type_SizeOverLifetimeModule_tE76521DF6C9288642AE09CBD10810E97A6038CAF* __this, ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SizeOverLifetimeModule_t6711CE9659123CAA5BFBFDFA9F53174CD979AC0C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	SizeOverLifetimeModule_t6711CE9659123CAA5BFBFDFA9F53174CD979AC0C V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// var instance = new UnityEngine.ParticleSystem.SizeOverLifetimeModule();
		il2cpp_codegen_initobj((&V_0), sizeof(SizeOverLifetimeModule_t6711CE9659123CAA5BFBFDFA9F53174CD979AC0C));
		// ReadInto<T>(reader, instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_0 = ___reader0;
		SizeOverLifetimeModule_t6711CE9659123CAA5BFBFDFA9F53174CD979AC0C L_1 = V_0;
		SizeOverLifetimeModule_t6711CE9659123CAA5BFBFDFA9F53174CD979AC0C L_2 = L_1;
		RuntimeObject* L_3 = Box(SizeOverLifetimeModule_t6711CE9659123CAA5BFBFDFA9F53174CD979AC0C_il2cpp_TypeInfo_var, &L_2);
		NullCheck((ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE*)__this);
		GenericVirtualActionInvoker2< ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518*, RuntimeObject* >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 0), (ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE*)__this, L_0, L_3);
		// return instance;
		SizeOverLifetimeModule_t6711CE9659123CAA5BFBFDFA9F53174CD979AC0C L_4 = V_0;
		SizeOverLifetimeModule_t6711CE9659123CAA5BFBFDFA9F53174CD979AC0C L_5 = L_4;
		RuntimeObject* L_6 = Box(SizeOverLifetimeModule_t6711CE9659123CAA5BFBFDFA9F53174CD979AC0C_il2cpp_TypeInfo_var, &L_5);
		return L_6;
	}
}
// System.Object ES3Types.ES3Type_SizeOverLifetimeModule::Read<UnityEngine.RenderTextureDescriptor>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_SizeOverLifetimeModule_Read_TisRenderTextureDescriptor_t69845881CE6437E4E61F92074F2F84079F23FA46_m3844D3DC81A8EB569D8BF6584FC29044AF4D3370_gshared (ES3Type_SizeOverLifetimeModule_tE76521DF6C9288642AE09CBD10810E97A6038CAF* __this, ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SizeOverLifetimeModule_t6711CE9659123CAA5BFBFDFA9F53174CD979AC0C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	SizeOverLifetimeModule_t6711CE9659123CAA5BFBFDFA9F53174CD979AC0C V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// var instance = new UnityEngine.ParticleSystem.SizeOverLifetimeModule();
		il2cpp_codegen_initobj((&V_0), sizeof(SizeOverLifetimeModule_t6711CE9659123CAA5BFBFDFA9F53174CD979AC0C));
		// ReadInto<T>(reader, instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_0 = ___reader0;
		SizeOverLifetimeModule_t6711CE9659123CAA5BFBFDFA9F53174CD979AC0C L_1 = V_0;
		SizeOverLifetimeModule_t6711CE9659123CAA5BFBFDFA9F53174CD979AC0C L_2 = L_1;
		RuntimeObject* L_3 = Box(SizeOverLifetimeModule_t6711CE9659123CAA5BFBFDFA9F53174CD979AC0C_il2cpp_TypeInfo_var, &L_2);
		NullCheck((ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE*)__this);
		GenericVirtualActionInvoker2< ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518*, RuntimeObject* >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 0), (ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE*)__this, L_0, L_3);
		// return instance;
		SizeOverLifetimeModule_t6711CE9659123CAA5BFBFDFA9F53174CD979AC0C L_4 = V_0;
		SizeOverLifetimeModule_t6711CE9659123CAA5BFBFDFA9F53174CD979AC0C L_5 = L_4;
		RuntimeObject* L_6 = Box(SizeOverLifetimeModule_t6711CE9659123CAA5BFBFDFA9F53174CD979AC0C_il2cpp_TypeInfo_var, &L_5);
		return L_6;
	}
}
// System.Object ES3Types.ES3Type_SizeOverLifetimeModule::Read<System.Single>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_SizeOverLifetimeModule_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mC4E9DFCBE02498CFDA444982FE50FA9FE69B2CE1_gshared (ES3Type_SizeOverLifetimeModule_tE76521DF6C9288642AE09CBD10810E97A6038CAF* __this, ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SizeOverLifetimeModule_t6711CE9659123CAA5BFBFDFA9F53174CD979AC0C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	SizeOverLifetimeModule_t6711CE9659123CAA5BFBFDFA9F53174CD979AC0C V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// var instance = new UnityEngine.ParticleSystem.SizeOverLifetimeModule();
		il2cpp_codegen_initobj((&V_0), sizeof(SizeOverLifetimeModule_t6711CE9659123CAA5BFBFDFA9F53174CD979AC0C));
		// ReadInto<T>(reader, instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_0 = ___reader0;
		SizeOverLifetimeModule_t6711CE9659123CAA5BFBFDFA9F53174CD979AC0C L_1 = V_0;
		SizeOverLifetimeModule_t6711CE9659123CAA5BFBFDFA9F53174CD979AC0C L_2 = L_1;
		RuntimeObject* L_3 = Box(SizeOverLifetimeModule_t6711CE9659123CAA5BFBFDFA9F53174CD979AC0C_il2cpp_TypeInfo_var, &L_2);
		NullCheck((ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE*)__this);
		GenericVirtualActionInvoker2< ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518*, RuntimeObject* >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 0), (ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE*)__this, L_0, L_3);
		// return instance;
		SizeOverLifetimeModule_t6711CE9659123CAA5BFBFDFA9F53174CD979AC0C L_4 = V_0;
		SizeOverLifetimeModule_t6711CE9659123CAA5BFBFDFA9F53174CD979AC0C L_5 = L_4;
		RuntimeObject* L_6 = Box(SizeOverLifetimeModule_t6711CE9659123CAA5BFBFDFA9F53174CD979AC0C_il2cpp_TypeInfo_var, &L_5);
		return L_6;
	}
}
// System.Object ES3Types.ES3Type_SizeOverLifetimeModule::Read<UnityEngine.Vector2>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_SizeOverLifetimeModule_Read_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_m29BD6EEEAEDEC13886749B29F72510455F76C336_gshared (ES3Type_SizeOverLifetimeModule_tE76521DF6C9288642AE09CBD10810E97A6038CAF* __this, ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SizeOverLifetimeModule_t6711CE9659123CAA5BFBFDFA9F53174CD979AC0C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	SizeOverLifetimeModule_t6711CE9659123CAA5BFBFDFA9F53174CD979AC0C V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// var instance = new UnityEngine.ParticleSystem.SizeOverLifetimeModule();
		il2cpp_codegen_initobj((&V_0), sizeof(SizeOverLifetimeModule_t6711CE9659123CAA5BFBFDFA9F53174CD979AC0C));
		// ReadInto<T>(reader, instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_0 = ___reader0;
		SizeOverLifetimeModule_t6711CE9659123CAA5BFBFDFA9F53174CD979AC0C L_1 = V_0;
		SizeOverLifetimeModule_t6711CE9659123CAA5BFBFDFA9F53174CD979AC0C L_2 = L_1;
		RuntimeObject* L_3 = Box(SizeOverLifetimeModule_t6711CE9659123CAA5BFBFDFA9F53174CD979AC0C_il2cpp_TypeInfo_var, &L_2);
		NullCheck((ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE*)__this);
		GenericVirtualActionInvoker2< ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518*, RuntimeObject* >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 0), (ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE*)__this, L_0, L_3);
		// return instance;
		SizeOverLifetimeModule_t6711CE9659123CAA5BFBFDFA9F53174CD979AC0C L_4 = V_0;
		SizeOverLifetimeModule_t6711CE9659123CAA5BFBFDFA9F53174CD979AC0C L_5 = L_4;
		RuntimeObject* L_6 = Box(SizeOverLifetimeModule_t6711CE9659123CAA5BFBFDFA9F53174CD979AC0C_il2cpp_TypeInfo_var, &L_5);
		return L_6;
	}
}
// System.Object ES3Types.ES3Type_SizeOverLifetimeModule::Read<UnityEngine.Vector3>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_SizeOverLifetimeModule_Read_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_m3F634F88B1C58382843EC70467ECCAA726022735_gshared (ES3Type_SizeOverLifetimeModule_tE76521DF6C9288642AE09CBD10810E97A6038CAF* __this, ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SizeOverLifetimeModule_t6711CE9659123CAA5BFBFDFA9F53174CD979AC0C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	SizeOverLifetimeModule_t6711CE9659123CAA5BFBFDFA9F53174CD979AC0C V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// var instance = new UnityEngine.ParticleSystem.SizeOverLifetimeModule();
		il2cpp_codegen_initobj((&V_0), sizeof(SizeOverLifetimeModule_t6711CE9659123CAA5BFBFDFA9F53174CD979AC0C));
		// ReadInto<T>(reader, instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_0 = ___reader0;
		SizeOverLifetimeModule_t6711CE9659123CAA5BFBFDFA9F53174CD979AC0C L_1 = V_0;
		SizeOverLifetimeModule_t6711CE9659123CAA5BFBFDFA9F53174CD979AC0C L_2 = L_1;
		RuntimeObject* L_3 = Box(SizeOverLifetimeModule_t6711CE9659123CAA5BFBFDFA9F53174CD979AC0C_il2cpp_TypeInfo_var, &L_2);
		NullCheck((ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE*)__this);
		GenericVirtualActionInvoker2< ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518*, RuntimeObject* >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 0), (ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE*)__this, L_0, L_3);
		// return instance;
		SizeOverLifetimeModule_t6711CE9659123CAA5BFBFDFA9F53174CD979AC0C L_4 = V_0;
		SizeOverLifetimeModule_t6711CE9659123CAA5BFBFDFA9F53174CD979AC0C L_5 = L_4;
		RuntimeObject* L_6 = Box(SizeOverLifetimeModule_t6711CE9659123CAA5BFBFDFA9F53174CD979AC0C_il2cpp_TypeInfo_var, &L_5);
		return L_6;
	}
}
// System.Object ES3Types.ES3Type_SizeOverLifetimeModule::Read<UnityEngine.Vector4>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_SizeOverLifetimeModule_Read_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_mABDA6BFAFDC199B851A3C670893F0A8A3406FA62_gshared (ES3Type_SizeOverLifetimeModule_tE76521DF6C9288642AE09CBD10810E97A6038CAF* __this, ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SizeOverLifetimeModule_t6711CE9659123CAA5BFBFDFA9F53174CD979AC0C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	SizeOverLifetimeModule_t6711CE9659123CAA5BFBFDFA9F53174CD979AC0C V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// var instance = new UnityEngine.ParticleSystem.SizeOverLifetimeModule();
		il2cpp_codegen_initobj((&V_0), sizeof(SizeOverLifetimeModule_t6711CE9659123CAA5BFBFDFA9F53174CD979AC0C));
		// ReadInto<T>(reader, instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_0 = ___reader0;
		SizeOverLifetimeModule_t6711CE9659123CAA5BFBFDFA9F53174CD979AC0C L_1 = V_0;
		SizeOverLifetimeModule_t6711CE9659123CAA5BFBFDFA9F53174CD979AC0C L_2 = L_1;
		RuntimeObject* L_3 = Box(SizeOverLifetimeModule_t6711CE9659123CAA5BFBFDFA9F53174CD979AC0C_il2cpp_TypeInfo_var, &L_2);
		NullCheck((ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE*)__this);
		GenericVirtualActionInvoker2< ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518*, RuntimeObject* >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 0), (ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE*)__this, L_0, L_3);
		// return instance;
		SizeOverLifetimeModule_t6711CE9659123CAA5BFBFDFA9F53174CD979AC0C L_4 = V_0;
		SizeOverLifetimeModule_t6711CE9659123CAA5BFBFDFA9F53174CD979AC0C L_5 = L_4;
		RuntimeObject* L_6 = Box(SizeOverLifetimeModule_t6711CE9659123CAA5BFBFDFA9F53174CD979AC0C_il2cpp_TypeInfo_var, &L_5);
		return L_6;
	}
}
// System.Object ES3Types.ES3Type_SizeOverLifetimeModule::Read<UnityEngine.ParticleSystem/MinMaxCurve>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_SizeOverLifetimeModule_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_m3B10FE65937AAB01940FB9CE43FE037BF0928B3B_gshared (ES3Type_SizeOverLifetimeModule_tE76521DF6C9288642AE09CBD10810E97A6038CAF* __this, ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SizeOverLifetimeModule_t6711CE9659123CAA5BFBFDFA9F53174CD979AC0C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	SizeOverLifetimeModule_t6711CE9659123CAA5BFBFDFA9F53174CD979AC0C V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// var instance = new UnityEngine.ParticleSystem.SizeOverLifetimeModule();
		il2cpp_codegen_initobj((&V_0), sizeof(SizeOverLifetimeModule_t6711CE9659123CAA5BFBFDFA9F53174CD979AC0C));
		// ReadInto<T>(reader, instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_0 = ___reader0;
		SizeOverLifetimeModule_t6711CE9659123CAA5BFBFDFA9F53174CD979AC0C L_1 = V_0;
		SizeOverLifetimeModule_t6711CE9659123CAA5BFBFDFA9F53174CD979AC0C L_2 = L_1;
		RuntimeObject* L_3 = Box(SizeOverLifetimeModule_t6711CE9659123CAA5BFBFDFA9F53174CD979AC0C_il2cpp_TypeInfo_var, &L_2);
		NullCheck((ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE*)__this);
		GenericVirtualActionInvoker2< ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518*, RuntimeObject* >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 0), (ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE*)__this, L_0, L_3);
		// return instance;
		SizeOverLifetimeModule_t6711CE9659123CAA5BFBFDFA9F53174CD979AC0C L_4 = V_0;
		SizeOverLifetimeModule_t6711CE9659123CAA5BFBFDFA9F53174CD979AC0C L_5 = L_4;
		RuntimeObject* L_6 = Box(SizeOverLifetimeModule_t6711CE9659123CAA5BFBFDFA9F53174CD979AC0C_il2cpp_TypeInfo_var, &L_5);
		return L_6;
	}
}
// System.Object ES3Types.ES3Type_SizeOverLifetimeModule::Read<UnityEngine.ParticleSystem/MinMaxGradient>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_SizeOverLifetimeModule_Read_TisMinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69_m2628825B9AE7F9CD233C01AFC5648877CC0B011C_gshared (ES3Type_SizeOverLifetimeModule_tE76521DF6C9288642AE09CBD10810E97A6038CAF* __this, ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SizeOverLifetimeModule_t6711CE9659123CAA5BFBFDFA9F53174CD979AC0C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	SizeOverLifetimeModule_t6711CE9659123CAA5BFBFDFA9F53174CD979AC0C V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// var instance = new UnityEngine.ParticleSystem.SizeOverLifetimeModule();
		il2cpp_codegen_initobj((&V_0), sizeof(SizeOverLifetimeModule_t6711CE9659123CAA5BFBFDFA9F53174CD979AC0C));
		// ReadInto<T>(reader, instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_0 = ___reader0;
		SizeOverLifetimeModule_t6711CE9659123CAA5BFBFDFA9F53174CD979AC0C L_1 = V_0;
		SizeOverLifetimeModule_t6711CE9659123CAA5BFBFDFA9F53174CD979AC0C L_2 = L_1;
		RuntimeObject* L_3 = Box(SizeOverLifetimeModule_t6711CE9659123CAA5BFBFDFA9F53174CD979AC0C_il2cpp_TypeInfo_var, &L_2);
		NullCheck((ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE*)__this);
		GenericVirtualActionInvoker2< ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518*, RuntimeObject* >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 0), (ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE*)__this, L_0, L_3);
		// return instance;
		SizeOverLifetimeModule_t6711CE9659123CAA5BFBFDFA9F53174CD979AC0C L_4 = V_0;
		SizeOverLifetimeModule_t6711CE9659123CAA5BFBFDFA9F53174CD979AC0C L_5 = L_4;
		RuntimeObject* L_6 = Box(SizeOverLifetimeModule_t6711CE9659123CAA5BFBFDFA9F53174CD979AC0C_il2cpp_TypeInfo_var, &L_5);
		return L_6;
	}
}
// System.Void ES3Types.ES3Type_SizeOverLifetimeModule::ReadInto<System.Object>(ES3Reader,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ES3Type_SizeOverLifetimeModule_ReadInto_TisRuntimeObject_m0926050E2372EE8586602D047EF0B3B410EDABE7_gshared (ES3Type_SizeOverLifetimeModule_tE76521DF6C9288642AE09CBD10810E97A6038CAF* __this, ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* ___reader0, RuntimeObject* ___obj1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mFFB70EE53D8CD0255A4E599780F62A3EB1520E83_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_m9D6B4042B923127DEA4A2CAA3E35EED37D75B3D0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mA86928BC888E342D2C2644535E3399952F5077ED_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_MinMaxCurve_t1C147718750ACBECE5D2B7F545D2A434A3C5409B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SizeOverLifetimeModule_t6711CE9659123CAA5BFBFDFA9F53174CD979AC0C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral062DB096C728515E033CF8C48A1C1F0B9A79384B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1B024D537329B86AB0DF96B2A714180F442F53E9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2F8690361553406965679AEF125F896BC5FC61F5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3EE5A4671A4E5AEBD31CA5F013A7773DC18ED22B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8C6F88DEE0DFE3513BB8B44A8CF0FEE437F4EFFB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9384C6EF2DA5C0BD5274A0DACFF291D0ABBFD8B1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9CE1604D659135925CCC4DD1F526AFFE42E689F1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9E61658953B4F9BB4A05E3D2D2BC18990BADE934);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBD0DD0004699EF86BF0FC1D161FA3766AF5126C4);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B);
		s_Il2CppMethodInitialized = true;
	}
	SizeOverLifetimeModule_t6711CE9659123CAA5BFBFDFA9F53174CD979AC0C V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	uint32_t V_2 = 0;
	{
		// var instance = (UnityEngine.ParticleSystem.SizeOverLifetimeModule)obj;
		RuntimeObject* L_0 = ___obj1;
		V_0 = ((*(SizeOverLifetimeModule_t6711CE9659123CAA5BFBFDFA9F53174CD979AC0C*)((SizeOverLifetimeModule_t6711CE9659123CAA5BFBFDFA9F53174CD979AC0C*)(SizeOverLifetimeModule_t6711CE9659123CAA5BFBFDFA9F53174CD979AC0C*)UnBox(L_0, SizeOverLifetimeModule_t6711CE9659123CAA5BFBFDFA9F53174CD979AC0C_il2cpp_TypeInfo_var))));
		goto IL_024a;
	}

IL_000c:
	{
		String_t* L_1 = V_1;
		uint32_t L_2;
		L_2 = U3CPrivateImplementationDetailsU3E_ComputeStringHash_m9E43873DE0DF480D27EC1C2AA3C09E74EA77F75D(L_1, NULL);
		V_2 = L_2;
		uint32_t L_3 = V_2;
		if ((!(((uint32_t)L_3) <= ((uint32_t)((int32_t)1479031685)))))
		{
			goto IL_005e;
		}
	}
	{
		uint32_t L_4 = V_2;
		if ((!(((uint32_t)L_4) <= ((uint32_t)((int32_t)597743964)))))
		{
			goto IL_003b;
		}
	}
	{
		uint32_t L_5 = V_2;
		if ((((int32_t)L_5) == ((int32_t)((int32_t)49525662))))
		{
			goto IL_00a1;
		}
	}
	{
		uint32_t L_6 = V_2;
		if ((((int32_t)L_6) == ((int32_t)((int32_t)597743964))))
		{
			goto IL_00b6;
		}
	}
	{
		goto IL_0244;
	}

IL_003b:
	{
		uint32_t L_7 = V_2;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)726266686))))
		{
			goto IL_0149;
		}
	}
	{
		uint32_t L_8 = V_2;
		if ((((int32_t)L_8) == ((int32_t)((int32_t)1105436259))))
		{
			goto IL_00cb;
		}
	}
	{
		uint32_t L_9 = V_2;
		if ((((int32_t)L_9) == ((int32_t)((int32_t)1479031685))))
		{
			goto IL_015e;
		}
	}
	{
		goto IL_0244;
	}

IL_005e:
	{
		uint32_t L_10 = V_2;
		if ((!(((uint32_t)L_10) <= ((uint32_t)((int32_t)-585050980)))))
		{
			goto IL_007e;
		}
	}
	{
		uint32_t L_11 = V_2;
		if ((((int32_t)L_11) == ((int32_t)((int32_t)-1013869429))))
		{
			goto IL_011f;
		}
	}
	{
		uint32_t L_12 = V_2;
		if ((((int32_t)L_12) == ((int32_t)((int32_t)-585050980))))
		{
			goto IL_00f5;
		}
	}
	{
		goto IL_0244;
	}

IL_007e:
	{
		uint32_t L_13 = V_2;
		if ((((int32_t)L_13) == ((int32_t)((int32_t)-66302220))))
		{
			goto IL_010a;
		}
	}
	{
		uint32_t L_14 = V_2;
		if ((((int32_t)L_14) == ((int32_t)((int32_t)-49524601))))
		{
			goto IL_00e0;
		}
	}
	{
		uint32_t L_15 = V_2;
		if ((((int32_t)L_15) == ((int32_t)((int32_t)-15969363))))
		{
			goto IL_0134;
		}
	}
	{
		goto IL_0244;
	}

IL_00a1:
	{
		String_t* L_16 = V_1;
		bool L_17;
		L_17 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_16, _stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B, NULL);
		if (L_17)
		{
			goto IL_0173;
		}
	}
	{
		goto IL_0244;
	}

IL_00b6:
	{
		String_t* L_18 = V_1;
		bool L_19;
		L_19 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_18, _stringLiteral3EE5A4671A4E5AEBD31CA5F013A7773DC18ED22B, NULL);
		if (L_19)
		{
			goto IL_018a;
		}
	}
	{
		goto IL_0244;
	}

IL_00cb:
	{
		String_t* L_20 = V_1;
		bool L_21;
		L_21 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_20, _stringLiteralBD0DD0004699EF86BF0FC1D161FA3766AF5126C4, NULL);
		if (L_21)
		{
			goto IL_01a1;
		}
	}
	{
		goto IL_0244;
	}

IL_00e0:
	{
		String_t* L_22 = V_1;
		bool L_23;
		L_23 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_22, _stringLiteral062DB096C728515E033CF8C48A1C1F0B9A79384B, NULL);
		if (L_23)
		{
			goto IL_01b8;
		}
	}
	{
		goto IL_0244;
	}

IL_00f5:
	{
		String_t* L_24 = V_1;
		bool L_25;
		L_25 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_24, _stringLiteral8C6F88DEE0DFE3513BB8B44A8CF0FEE437F4EFFB, NULL);
		if (L_25)
		{
			goto IL_01cc;
		}
	}
	{
		goto IL_0244;
	}

IL_010a:
	{
		String_t* L_26 = V_1;
		bool L_27;
		L_27 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_26, _stringLiteral9384C6EF2DA5C0BD5274A0DACFF291D0ABBFD8B1, NULL);
		if (L_27)
		{
			goto IL_01e0;
		}
	}
	{
		goto IL_0244;
	}

IL_011f:
	{
		String_t* L_28 = V_1;
		bool L_29;
		L_29 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_28, _stringLiteral9E61658953B4F9BB4A05E3D2D2BC18990BADE934, NULL);
		if (L_29)
		{
			goto IL_01f4;
		}
	}
	{
		goto IL_0244;
	}

IL_0134:
	{
		String_t* L_30 = V_1;
		bool L_31;
		L_31 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_30, _stringLiteral9CE1604D659135925CCC4DD1F526AFFE42E689F1, NULL);
		if (L_31)
		{
			goto IL_0208;
		}
	}
	{
		goto IL_0244;
	}

IL_0149:
	{
		String_t* L_32 = V_1;
		bool L_33;
		L_33 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_32, _stringLiteral2F8690361553406965679AEF125F896BC5FC61F5, NULL);
		if (L_33)
		{
			goto IL_021c;
		}
	}
	{
		goto IL_0244;
	}

IL_015e:
	{
		String_t* L_34 = V_1;
		bool L_35;
		L_35 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_34, _stringLiteral1B024D537329B86AB0DF96B2A714180F442F53E9, NULL);
		if (L_35)
		{
			goto IL_0230;
		}
	}
	{
		goto IL_0244;
	}

IL_0173:
	{
		// instance.enabled = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_36 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_37 = ((ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_36);
		bool L_38;
		L_38 = GenericVirtualFuncInvoker1< bool, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mFFB70EE53D8CD0255A4E599780F62A3EB1520E83_RuntimeMethod_var, L_36, L_37);
		SizeOverLifetimeModule_set_enabled_mC45334E7AC31CCBE1CFA531D28D29E1BD38D5D6F((&V_0), L_38, NULL);
		// break;
		goto IL_024a;
	}

IL_018a:
	{
		// instance.size = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_39 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_40 = ((ES3Type_MinMaxCurve_t1C147718750ACBECE5D2B7F545D2A434A3C5409B_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t1C147718750ACBECE5D2B7F545D2A434A3C5409B_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_39);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_41;
		L_41 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_m9D6B4042B923127DEA4A2CAA3E35EED37D75B3D0_RuntimeMethod_var, L_39, L_40);
		SizeOverLifetimeModule_set_size_m1D5987F4FB9E948DEAA5E3D8FB21D1AFEE15EBE5((&V_0), L_41, NULL);
		// break;
		goto IL_024a;
	}

IL_01a1:
	{
		// instance.sizeMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_42 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_43 = ((ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_42);
		float L_44;
		L_44 = GenericVirtualFuncInvoker1< float, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mA86928BC888E342D2C2644535E3399952F5077ED_RuntimeMethod_var, L_42, L_43);
		SizeOverLifetimeModule_set_sizeMultiplier_mE97DDCFF7A3065E4E1709EE66C8A524268A757EF((&V_0), L_44, NULL);
		// break;
		goto IL_024a;
	}

IL_01b8:
	{
		// instance.x = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_45 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_46 = ((ES3Type_MinMaxCurve_t1C147718750ACBECE5D2B7F545D2A434A3C5409B_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t1C147718750ACBECE5D2B7F545D2A434A3C5409B_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_45);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_47;
		L_47 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_m9D6B4042B923127DEA4A2CAA3E35EED37D75B3D0_RuntimeMethod_var, L_45, L_46);
		SizeOverLifetimeModule_set_x_m7B791B7E4BE55CC4CE1FB815C2E09DBAB05F027A((&V_0), L_47, NULL);
		// break;
		goto IL_024a;
	}

IL_01cc:
	{
		// instance.xMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_48 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_49 = ((ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_48);
		float L_50;
		L_50 = GenericVirtualFuncInvoker1< float, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mA86928BC888E342D2C2644535E3399952F5077ED_RuntimeMethod_var, L_48, L_49);
		SizeOverLifetimeModule_set_xMultiplier_mD17EFB03D20765192F5772A17573D777DB261910((&V_0), L_50, NULL);
		// break;
		goto IL_024a;
	}

IL_01e0:
	{
		// instance.y = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_51 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_52 = ((ES3Type_MinMaxCurve_t1C147718750ACBECE5D2B7F545D2A434A3C5409B_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t1C147718750ACBECE5D2B7F545D2A434A3C5409B_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_51);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_53;
		L_53 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_m9D6B4042B923127DEA4A2CAA3E35EED37D75B3D0_RuntimeMethod_var, L_51, L_52);
		SizeOverLifetimeModule_set_y_mB9138A8037FF0084FE6DED3DC9D81E0D926C6601((&V_0), L_53, NULL);
		// break;
		goto IL_024a;
	}

IL_01f4:
	{
		// instance.yMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_54 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_55 = ((ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_54);
		float L_56;
		L_56 = GenericVirtualFuncInvoker1< float, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mA86928BC888E342D2C2644535E3399952F5077ED_RuntimeMethod_var, L_54, L_55);
		SizeOverLifetimeModule_set_yMultiplier_mAFF1869E535B324384AB01214B246819306439D4((&V_0), L_56, NULL);
		// break;
		goto IL_024a;
	}

IL_0208:
	{
		// instance.z = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_57 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_58 = ((ES3Type_MinMaxCurve_t1C147718750ACBECE5D2B7F545D2A434A3C5409B_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t1C147718750ACBECE5D2B7F545D2A434A3C5409B_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_57);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_59;
		L_59 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_m9D6B4042B923127DEA4A2CAA3E35EED37D75B3D0_RuntimeMethod_var, L_57, L_58);
		SizeOverLifetimeModule_set_z_m2F0D3BC817F95F78D37543F7A54C9CA0D5D87263((&V_0), L_59, NULL);
		// break;
		goto IL_024a;
	}

IL_021c:
	{
		// instance.zMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_60 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_61 = ((ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_60);
		float L_62;
		L_62 = GenericVirtualFuncInvoker1< float, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mA86928BC888E342D2C2644535E3399952F5077ED_RuntimeMethod_var, L_60, L_61);
		SizeOverLifetimeModule_set_zMultiplier_m97864CAC5D1B8936456B33989CCBA3A12870A3F4((&V_0), L_62, NULL);
		// break;
		goto IL_024a;
	}

IL_0230:
	{
		// instance.separateAxes = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_63 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_64 = ((ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_63);
		bool L_65;
		L_65 = GenericVirtualFuncInvoker1< bool, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mFFB70EE53D8CD0255A4E599780F62A3EB1520E83_RuntimeMethod_var, L_63, L_64);
		SizeOverLifetimeModule_set_separateAxes_mC07A349FA5AF44C8937B7DE7ECEEA8F871B13EED((&V_0), L_65, NULL);
		// break;
		goto IL_024a;
	}

IL_0244:
	{
		// reader.Skip();
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_66 = ___reader0;
		NullCheck(L_66);
		VirtualActionInvoker0::Invoke(41 /* System.Void ES3Reader::Skip() */, L_66);
	}

IL_024a:
	{
		// while((propertyName = reader.ReadPropertyName()) != null)
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_67 = ___reader0;
		NullCheck(L_67);
		String_t* L_68;
		L_68 = VirtualFuncInvoker0< String_t* >::Invoke(21 /* System.String ES3Reader::ReadPropertyName() */, L_67);
		String_t* L_69 = L_68;
		V_1 = L_69;
		if (L_69)
		{
			goto IL_000c;
		}
	}
	{
		// }
		return;
	}
}
// System.Void ES3Types.ES3Type_SizeOverLifetimeModule::ReadInto<UnityEngine.ParticleSystem/CollisionModule>(ES3Reader,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ES3Type_SizeOverLifetimeModule_ReadInto_TisCollisionModule_tEE4892D4872C2907164A66DC424F1CFA1D527083_mAC8E0D893ED6705074D9BA94F0A4EF0A5C9DE13E_gshared (ES3Type_SizeOverLifetimeModule_tE76521DF6C9288642AE09CBD10810E97A6038CAF* __this, ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* ___reader0, RuntimeObject* ___obj1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mFFB70EE53D8CD0255A4E599780F62A3EB1520E83_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_m9D6B4042B923127DEA4A2CAA3E35EED37D75B3D0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mA86928BC888E342D2C2644535E3399952F5077ED_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_MinMaxCurve_t1C147718750ACBECE5D2B7F545D2A434A3C5409B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SizeOverLifetimeModule_t6711CE9659123CAA5BFBFDFA9F53174CD979AC0C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral062DB096C728515E033CF8C48A1C1F0B9A79384B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1B024D537329B86AB0DF96B2A714180F442F53E9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2F8690361553406965679AEF125F896BC5FC61F5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3EE5A4671A4E5AEBD31CA5F013A7773DC18ED22B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8C6F88DEE0DFE3513BB8B44A8CF0FEE437F4EFFB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9384C6EF2DA5C0BD5274A0DACFF291D0ABBFD8B1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9CE1604D659135925CCC4DD1F526AFFE42E689F1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9E61658953B4F9BB4A05E3D2D2BC18990BADE934);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBD0DD0004699EF86BF0FC1D161FA3766AF5126C4);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B);
		s_Il2CppMethodInitialized = true;
	}
	SizeOverLifetimeModule_t6711CE9659123CAA5BFBFDFA9F53174CD979AC0C V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	uint32_t V_2 = 0;
	{
		// var instance = (UnityEngine.ParticleSystem.SizeOverLifetimeModule)obj;
		RuntimeObject* L_0 = ___obj1;
		V_0 = ((*(SizeOverLifetimeModule_t6711CE9659123CAA5BFBFDFA9F53174CD979AC0C*)((SizeOverLifetimeModule_t6711CE9659123CAA5BFBFDFA9F53174CD979AC0C*)(SizeOverLifetimeModule_t6711CE9659123CAA5BFBFDFA9F53174CD979AC0C*)UnBox(L_0, SizeOverLifetimeModule_t6711CE9659123CAA5BFBFDFA9F53174CD979AC0C_il2cpp_TypeInfo_var))));
		goto IL_024a;
	}

IL_000c:
	{
		String_t* L_1 = V_1;
		uint32_t L_2;
		L_2 = U3CPrivateImplementationDetailsU3E_ComputeStringHash_m9E43873DE0DF480D27EC1C2AA3C09E74EA77F75D(L_1, NULL);
		V_2 = L_2;
		uint32_t L_3 = V_2;
		if ((!(((uint32_t)L_3) <= ((uint32_t)((int32_t)1479031685)))))
		{
			goto IL_005e;
		}
	}
	{
		uint32_t L_4 = V_2;
		if ((!(((uint32_t)L_4) <= ((uint32_t)((int32_t)597743964)))))
		{
			goto IL_003b;
		}
	}
	{
		uint32_t L_5 = V_2;
		if ((((int32_t)L_5) == ((int32_t)((int32_t)49525662))))
		{
			goto IL_00a1;
		}
	}
	{
		uint32_t L_6 = V_2;
		if ((((int32_t)L_6) == ((int32_t)((int32_t)597743964))))
		{
			goto IL_00b6;
		}
	}
	{
		goto IL_0244;
	}

IL_003b:
	{
		uint32_t L_7 = V_2;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)726266686))))
		{
			goto IL_0149;
		}
	}
	{
		uint32_t L_8 = V_2;
		if ((((int32_t)L_8) == ((int32_t)((int32_t)1105436259))))
		{
			goto IL_00cb;
		}
	}
	{
		uint32_t L_9 = V_2;
		if ((((int32_t)L_9) == ((int32_t)((int32_t)1479031685))))
		{
			goto IL_015e;
		}
	}
	{
		goto IL_0244;
	}

IL_005e:
	{
		uint32_t L_10 = V_2;
		if ((!(((uint32_t)L_10) <= ((uint32_t)((int32_t)-585050980)))))
		{
			goto IL_007e;
		}
	}
	{
		uint32_t L_11 = V_2;
		if ((((int32_t)L_11) == ((int32_t)((int32_t)-1013869429))))
		{
			goto IL_011f;
		}
	}
	{
		uint32_t L_12 = V_2;
		if ((((int32_t)L_12) == ((int32_t)((int32_t)-585050980))))
		{
			goto IL_00f5;
		}
	}
	{
		goto IL_0244;
	}

IL_007e:
	{
		uint32_t L_13 = V_2;
		if ((((int32_t)L_13) == ((int32_t)((int32_t)-66302220))))
		{
			goto IL_010a;
		}
	}
	{
		uint32_t L_14 = V_2;
		if ((((int32_t)L_14) == ((int32_t)((int32_t)-49524601))))
		{
			goto IL_00e0;
		}
	}
	{
		uint32_t L_15 = V_2;
		if ((((int32_t)L_15) == ((int32_t)((int32_t)-15969363))))
		{
			goto IL_0134;
		}
	}
	{
		goto IL_0244;
	}

IL_00a1:
	{
		String_t* L_16 = V_1;
		bool L_17;
		L_17 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_16, _stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B, NULL);
		if (L_17)
		{
			goto IL_0173;
		}
	}
	{
		goto IL_0244;
	}

IL_00b6:
	{
		String_t* L_18 = V_1;
		bool L_19;
		L_19 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_18, _stringLiteral3EE5A4671A4E5AEBD31CA5F013A7773DC18ED22B, NULL);
		if (L_19)
		{
			goto IL_018a;
		}
	}
	{
		goto IL_0244;
	}

IL_00cb:
	{
		String_t* L_20 = V_1;
		bool L_21;
		L_21 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_20, _stringLiteralBD0DD0004699EF86BF0FC1D161FA3766AF5126C4, NULL);
		if (L_21)
		{
			goto IL_01a1;
		}
	}
	{
		goto IL_0244;
	}

IL_00e0:
	{
		String_t* L_22 = V_1;
		bool L_23;
		L_23 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_22, _stringLiteral062DB096C728515E033CF8C48A1C1F0B9A79384B, NULL);
		if (L_23)
		{
			goto IL_01b8;
		}
	}
	{
		goto IL_0244;
	}

IL_00f5:
	{
		String_t* L_24 = V_1;
		bool L_25;
		L_25 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_24, _stringLiteral8C6F88DEE0DFE3513BB8B44A8CF0FEE437F4EFFB, NULL);
		if (L_25)
		{
			goto IL_01cc;
		}
	}
	{
		goto IL_0244;
	}

IL_010a:
	{
		String_t* L_26 = V_1;
		bool L_27;
		L_27 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_26, _stringLiteral9384C6EF2DA5C0BD5274A0DACFF291D0ABBFD8B1, NULL);
		if (L_27)
		{
			goto IL_01e0;
		}
	}
	{
		goto IL_0244;
	}

IL_011f:
	{
		String_t* L_28 = V_1;
		bool L_29;
		L_29 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_28, _stringLiteral9E61658953B4F9BB4A05E3D2D2BC18990BADE934, NULL);
		if (L_29)
		{
			goto IL_01f4;
		}
	}
	{
		goto IL_0244;
	}

IL_0134:
	{
		String_t* L_30 = V_1;
		bool L_31;
		L_31 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_30, _stringLiteral9CE1604D659135925CCC4DD1F526AFFE42E689F1, NULL);
		if (L_31)
		{
			goto IL_0208;
		}
	}
	{
		goto IL_0244;
	}

IL_0149:
	{
		String_t* L_32 = V_1;
		bool L_33;
		L_33 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_32, _stringLiteral2F8690361553406965679AEF125F896BC5FC61F5, NULL);
		if (L_33)
		{
			goto IL_021c;
		}
	}
	{
		goto IL_0244;
	}

IL_015e:
	{
		String_t* L_34 = V_1;
		bool L_35;
		L_35 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_34, _stringLiteral1B024D537329B86AB0DF96B2A714180F442F53E9, NULL);
		if (L_35)
		{
			goto IL_0230;
		}
	}
	{
		goto IL_0244;
	}

IL_0173:
	{
		// instance.enabled = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_36 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_37 = ((ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_36);
		bool L_38;
		L_38 = GenericVirtualFuncInvoker1< bool, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mFFB70EE53D8CD0255A4E599780F62A3EB1520E83_RuntimeMethod_var, L_36, L_37);
		SizeOverLifetimeModule_set_enabled_mC45334E7AC31CCBE1CFA531D28D29E1BD38D5D6F((&V_0), L_38, NULL);
		// break;
		goto IL_024a;
	}

IL_018a:
	{
		// instance.size = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_39 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_40 = ((ES3Type_MinMaxCurve_t1C147718750ACBECE5D2B7F545D2A434A3C5409B_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t1C147718750ACBECE5D2B7F545D2A434A3C5409B_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_39);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_41;
		L_41 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_m9D6B4042B923127DEA4A2CAA3E35EED37D75B3D0_RuntimeMethod_var, L_39, L_40);
		SizeOverLifetimeModule_set_size_m1D5987F4FB9E948DEAA5E3D8FB21D1AFEE15EBE5((&V_0), L_41, NULL);
		// break;
		goto IL_024a;
	}

IL_01a1:
	{
		// instance.sizeMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_42 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_43 = ((ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_42);
		float L_44;
		L_44 = GenericVirtualFuncInvoker1< float, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mA86928BC888E342D2C2644535E3399952F5077ED_RuntimeMethod_var, L_42, L_43);
		SizeOverLifetimeModule_set_sizeMultiplier_mE97DDCFF7A3065E4E1709EE66C8A524268A757EF((&V_0), L_44, NULL);
		// break;
		goto IL_024a;
	}

IL_01b8:
	{
		// instance.x = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_45 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_46 = ((ES3Type_MinMaxCurve_t1C147718750ACBECE5D2B7F545D2A434A3C5409B_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t1C147718750ACBECE5D2B7F545D2A434A3C5409B_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_45);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_47;
		L_47 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_m9D6B4042B923127DEA4A2CAA3E35EED37D75B3D0_RuntimeMethod_var, L_45, L_46);
		SizeOverLifetimeModule_set_x_m7B791B7E4BE55CC4CE1FB815C2E09DBAB05F027A((&V_0), L_47, NULL);
		// break;
		goto IL_024a;
	}

IL_01cc:
	{
		// instance.xMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_48 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_49 = ((ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_48);
		float L_50;
		L_50 = GenericVirtualFuncInvoker1< float, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mA86928BC888E342D2C2644535E3399952F5077ED_RuntimeMethod_var, L_48, L_49);
		SizeOverLifetimeModule_set_xMultiplier_mD17EFB03D20765192F5772A17573D777DB261910((&V_0), L_50, NULL);
		// break;
		goto IL_024a;
	}

IL_01e0:
	{
		// instance.y = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_51 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_52 = ((ES3Type_MinMaxCurve_t1C147718750ACBECE5D2B7F545D2A434A3C5409B_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t1C147718750ACBECE5D2B7F545D2A434A3C5409B_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_51);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_53;
		L_53 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_m9D6B4042B923127DEA4A2CAA3E35EED37D75B3D0_RuntimeMethod_var, L_51, L_52);
		SizeOverLifetimeModule_set_y_mB9138A8037FF0084FE6DED3DC9D81E0D926C6601((&V_0), L_53, NULL);
		// break;
		goto IL_024a;
	}

IL_01f4:
	{
		// instance.yMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_54 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_55 = ((ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_54);
		float L_56;
		L_56 = GenericVirtualFuncInvoker1< float, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mA86928BC888E342D2C2644535E3399952F5077ED_RuntimeMethod_var, L_54, L_55);
		SizeOverLifetimeModule_set_yMultiplier_mAFF1869E535B324384AB01214B246819306439D4((&V_0), L_56, NULL);
		// break;
		goto IL_024a;
	}

IL_0208:
	{
		// instance.z = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_57 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_58 = ((ES3Type_MinMaxCurve_t1C147718750ACBECE5D2B7F545D2A434A3C5409B_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t1C147718750ACBECE5D2B7F545D2A434A3C5409B_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_57);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_59;
		L_59 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_m9D6B4042B923127DEA4A2CAA3E35EED37D75B3D0_RuntimeMethod_var, L_57, L_58);
		SizeOverLifetimeModule_set_z_m2F0D3BC817F95F78D37543F7A54C9CA0D5D87263((&V_0), L_59, NULL);
		// break;
		goto IL_024a;
	}

IL_021c:
	{
		// instance.zMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_60 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_61 = ((ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_60);
		float L_62;
		L_62 = GenericVirtualFuncInvoker1< float, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mA86928BC888E342D2C2644535E3399952F5077ED_RuntimeMethod_var, L_60, L_61);
		SizeOverLifetimeModule_set_zMultiplier_m97864CAC5D1B8936456B33989CCBA3A12870A3F4((&V_0), L_62, NULL);
		// break;
		goto IL_024a;
	}

IL_0230:
	{
		// instance.separateAxes = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_63 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_64 = ((ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_63);
		bool L_65;
		L_65 = GenericVirtualFuncInvoker1< bool, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mFFB70EE53D8CD0255A4E599780F62A3EB1520E83_RuntimeMethod_var, L_63, L_64);
		SizeOverLifetimeModule_set_separateAxes_mC07A349FA5AF44C8937B7DE7ECEEA8F871B13EED((&V_0), L_65, NULL);
		// break;
		goto IL_024a;
	}

IL_0244:
	{
		// reader.Skip();
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_66 = ___reader0;
		NullCheck(L_66);
		VirtualActionInvoker0::Invoke(41 /* System.Void ES3Reader::Skip() */, L_66);
	}

IL_024a:
	{
		// while((propertyName = reader.ReadPropertyName()) != null)
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_67 = ___reader0;
		NullCheck(L_67);
		String_t* L_68;
		L_68 = VirtualFuncInvoker0< String_t* >::Invoke(21 /* System.String ES3Reader::ReadPropertyName() */, L_67);
		String_t* L_69 = L_68;
		V_1 = L_69;
		if (L_69)
		{
			goto IL_000c;
		}
	}
	{
		// }
		return;
	}
}
// System.Void ES3Types.ES3Type_SizeOverLifetimeModule::ReadInto<UnityEngine.ParticleSystem/ColorBySpeedModule>(ES3Reader,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ES3Type_SizeOverLifetimeModule_ReadInto_TisColorBySpeedModule_t808C4CC668431DDE51D5AD98A81C78DDB944948B_mCD5498CC747FEB1D946726FC7E9926C164E66FAA_gshared (ES3Type_SizeOverLifetimeModule_tE76521DF6C9288642AE09CBD10810E97A6038CAF* __this, ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* ___reader0, RuntimeObject* ___obj1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mFFB70EE53D8CD0255A4E599780F62A3EB1520E83_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_m9D6B4042B923127DEA4A2CAA3E35EED37D75B3D0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mA86928BC888E342D2C2644535E3399952F5077ED_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_MinMaxCurve_t1C147718750ACBECE5D2B7F545D2A434A3C5409B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SizeOverLifetimeModule_t6711CE9659123CAA5BFBFDFA9F53174CD979AC0C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral062DB096C728515E033CF8C48A1C1F0B9A79384B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1B024D537329B86AB0DF96B2A714180F442F53E9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2F8690361553406965679AEF125F896BC5FC61F5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3EE5A4671A4E5AEBD31CA5F013A7773DC18ED22B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8C6F88DEE0DFE3513BB8B44A8CF0FEE437F4EFFB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9384C6EF2DA5C0BD5274A0DACFF291D0ABBFD8B1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9CE1604D659135925CCC4DD1F526AFFE42E689F1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9E61658953B4F9BB4A05E3D2D2BC18990BADE934);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBD0DD0004699EF86BF0FC1D161FA3766AF5126C4);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B);
		s_Il2CppMethodInitialized = true;
	}
	SizeOverLifetimeModule_t6711CE9659123CAA5BFBFDFA9F53174CD979AC0C V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	uint32_t V_2 = 0;
	{
		// var instance = (UnityEngine.ParticleSystem.SizeOverLifetimeModule)obj;
		RuntimeObject* L_0 = ___obj1;
		V_0 = ((*(SizeOverLifetimeModule_t6711CE9659123CAA5BFBFDFA9F53174CD979AC0C*)((SizeOverLifetimeModule_t6711CE9659123CAA5BFBFDFA9F53174CD979AC0C*)(SizeOverLifetimeModule_t6711CE9659123CAA5BFBFDFA9F53174CD979AC0C*)UnBox(L_0, SizeOverLifetimeModule_t6711CE9659123CAA5BFBFDFA9F53174CD979AC0C_il2cpp_TypeInfo_var))));
		goto IL_024a;
	}

IL_000c:
	{
		String_t* L_1 = V_1;
		uint32_t L_2;
		L_2 = U3CPrivateImplementationDetailsU3E_ComputeStringHash_m9E43873DE0DF480D27EC1C2AA3C09E74EA77F75D(L_1, NULL);
		V_2 = L_2;
		uint32_t L_3 = V_2;
		if ((!(((uint32_t)L_3) <= ((uint32_t)((int32_t)1479031685)))))
		{
			goto IL_005e;
		}
	}
	{
		uint32_t L_4 = V_2;
		if ((!(((uint32_t)L_4) <= ((uint32_t)((int32_t)597743964)))))
		{
			goto IL_003b;
		}
	}
	{
		uint32_t L_5 = V_2;
		if ((((int32_t)L_5) == ((int32_t)((int32_t)49525662))))
		{
			goto IL_00a1;
		}
	}
	{
		uint32_t L_6 = V_2;
		if ((((int32_t)L_6) == ((int32_t)((int32_t)597743964))))
		{
			goto IL_00b6;
		}
	}
	{
		goto IL_0244;
	}

IL_003b:
	{
		uint32_t L_7 = V_2;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)726266686))))
		{
			goto IL_0149;
		}
	}
	{
		uint32_t L_8 = V_2;
		if ((((int32_t)L_8) == ((int32_t)((int32_t)1105436259))))
		{
			goto IL_00cb;
		}
	}
	{
		uint32_t L_9 = V_2;
		if ((((int32_t)L_9) == ((int32_t)((int32_t)1479031685))))
		{
			goto IL_015e;
		}
	}
	{
		goto IL_0244;
	}

IL_005e:
	{
		uint32_t L_10 = V_2;
		if ((!(((uint32_t)L_10) <= ((uint32_t)((int32_t)-585050980)))))
		{
			goto IL_007e;
		}
	}
	{
		uint32_t L_11 = V_2;
		if ((((int32_t)L_11) == ((int32_t)((int32_t)-1013869429))))
		{
			goto IL_011f;
		}
	}
	{
		uint32_t L_12 = V_2;
		if ((((int32_t)L_12) == ((int32_t)((int32_t)-585050980))))
		{
			goto IL_00f5;
		}
	}
	{
		goto IL_0244;
	}

IL_007e:
	{
		uint32_t L_13 = V_2;
		if ((((int32_t)L_13) == ((int32_t)((int32_t)-66302220))))
		{
			goto IL_010a;
		}
	}
	{
		uint32_t L_14 = V_2;
		if ((((int32_t)L_14) == ((int32_t)((int32_t)-49524601))))
		{
			goto IL_00e0;
		}
	}
	{
		uint32_t L_15 = V_2;
		if ((((int32_t)L_15) == ((int32_t)((int32_t)-15969363))))
		{
			goto IL_0134;
		}
	}
	{
		goto IL_0244;
	}

IL_00a1:
	{
		String_t* L_16 = V_1;
		bool L_17;
		L_17 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_16, _stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B, NULL);
		if (L_17)
		{
			goto IL_0173;
		}
	}
	{
		goto IL_0244;
	}

IL_00b6:
	{
		String_t* L_18 = V_1;
		bool L_19;
		L_19 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_18, _stringLiteral3EE5A4671A4E5AEBD31CA5F013A7773DC18ED22B, NULL);
		if (L_19)
		{
			goto IL_018a;
		}
	}
	{
		goto IL_0244;
	}

IL_00cb:
	{
		String_t* L_20 = V_1;
		bool L_21;
		L_21 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_20, _stringLiteralBD0DD0004699EF86BF0FC1D161FA3766AF5126C4, NULL);
		if (L_21)
		{
			goto IL_01a1;
		}
	}
	{
		goto IL_0244;
	}

IL_00e0:
	{
		String_t* L_22 = V_1;
		bool L_23;
		L_23 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_22, _stringLiteral062DB096C728515E033CF8C48A1C1F0B9A79384B, NULL);
		if (L_23)
		{
			goto IL_01b8;
		}
	}
	{
		goto IL_0244;
	}

IL_00f5:
	{
		String_t* L_24 = V_1;
		bool L_25;
		L_25 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_24, _stringLiteral8C6F88DEE0DFE3513BB8B44A8CF0FEE437F4EFFB, NULL);
		if (L_25)
		{
			goto IL_01cc;
		}
	}
	{
		goto IL_0244;
	}

IL_010a:
	{
		String_t* L_26 = V_1;
		bool L_27;
		L_27 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_26, _stringLiteral9384C6EF2DA5C0BD5274A0DACFF291D0ABBFD8B1, NULL);
		if (L_27)
		{
			goto IL_01e0;
		}
	}
	{
		goto IL_0244;
	}

IL_011f:
	{
		String_t* L_28 = V_1;
		bool L_29;
		L_29 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_28, _stringLiteral9E61658953B4F9BB4A05E3D2D2BC18990BADE934, NULL);
		if (L_29)
		{
			goto IL_01f4;
		}
	}
	{
		goto IL_0244;
	}

IL_0134:
	{
		String_t* L_30 = V_1;
		bool L_31;
		L_31 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_30, _stringLiteral9CE1604D659135925CCC4DD1F526AFFE42E689F1, NULL);
		if (L_31)
		{
			goto IL_0208;
		}
	}
	{
		goto IL_0244;
	}

IL_0149:
	{
		String_t* L_32 = V_1;
		bool L_33;
		L_33 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_32, _stringLiteral2F8690361553406965679AEF125F896BC5FC61F5, NULL);
		if (L_33)
		{
			goto IL_021c;
		}
	}
	{
		goto IL_0244;
	}

IL_015e:
	{
		String_t* L_34 = V_1;
		bool L_35;
		L_35 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_34, _stringLiteral1B024D537329B86AB0DF96B2A714180F442F53E9, NULL);
		if (L_35)
		{
			goto IL_0230;
		}
	}
	{
		goto IL_0244;
	}

IL_0173:
	{
		// instance.enabled = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_36 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_37 = ((ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_36);
		bool L_38;
		L_38 = GenericVirtualFuncInvoker1< bool, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mFFB70EE53D8CD0255A4E599780F62A3EB1520E83_RuntimeMethod_var, L_36, L_37);
		SizeOverLifetimeModule_set_enabled_mC45334E7AC31CCBE1CFA531D28D29E1BD38D5D6F((&V_0), L_38, NULL);
		// break;
		goto IL_024a;
	}

IL_018a:
	{
		// instance.size = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_39 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_40 = ((ES3Type_MinMaxCurve_t1C147718750ACBECE5D2B7F545D2A434A3C5409B_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t1C147718750ACBECE5D2B7F545D2A434A3C5409B_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_39);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_41;
		L_41 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_m9D6B4042B923127DEA4A2CAA3E35EED37D75B3D0_RuntimeMethod_var, L_39, L_40);
		SizeOverLifetimeModule_set_size_m1D5987F4FB9E948DEAA5E3D8FB21D1AFEE15EBE5((&V_0), L_41, NULL);
		// break;
		goto IL_024a;
	}

IL_01a1:
	{
		// instance.sizeMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_42 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_43 = ((ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_42);
		float L_44;
		L_44 = GenericVirtualFuncInvoker1< float, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mA86928BC888E342D2C2644535E3399952F5077ED_RuntimeMethod_var, L_42, L_43);
		SizeOverLifetimeModule_set_sizeMultiplier_mE97DDCFF7A3065E4E1709EE66C8A524268A757EF((&V_0), L_44, NULL);
		// break;
		goto IL_024a;
	}

IL_01b8:
	{
		// instance.x = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_45 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_46 = ((ES3Type_MinMaxCurve_t1C147718750ACBECE5D2B7F545D2A434A3C5409B_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t1C147718750ACBECE5D2B7F545D2A434A3C5409B_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_45);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_47;
		L_47 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_m9D6B4042B923127DEA4A2CAA3E35EED37D75B3D0_RuntimeMethod_var, L_45, L_46);
		SizeOverLifetimeModule_set_x_m7B791B7E4BE55CC4CE1FB815C2E09DBAB05F027A((&V_0), L_47, NULL);
		// break;
		goto IL_024a;
	}

IL_01cc:
	{
		// instance.xMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_48 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_49 = ((ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_48);
		float L_50;
		L_50 = GenericVirtualFuncInvoker1< float, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mA86928BC888E342D2C2644535E3399952F5077ED_RuntimeMethod_var, L_48, L_49);
		SizeOverLifetimeModule_set_xMultiplier_mD17EFB03D20765192F5772A17573D777DB261910((&V_0), L_50, NULL);
		// break;
		goto IL_024a;
	}

IL_01e0:
	{
		// instance.y = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_51 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_52 = ((ES3Type_MinMaxCurve_t1C147718750ACBECE5D2B7F545D2A434A3C5409B_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t1C147718750ACBECE5D2B7F545D2A434A3C5409B_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_51);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_53;
		L_53 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_m9D6B4042B923127DEA4A2CAA3E35EED37D75B3D0_RuntimeMethod_var, L_51, L_52);
		SizeOverLifetimeModule_set_y_mB9138A8037FF0084FE6DED3DC9D81E0D926C6601((&V_0), L_53, NULL);
		// break;
		goto IL_024a;
	}

IL_01f4:
	{
		// instance.yMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_54 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_55 = ((ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_54);
		float L_56;
		L_56 = GenericVirtualFuncInvoker1< float, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mA86928BC888E342D2C2644535E3399952F5077ED_RuntimeMethod_var, L_54, L_55);
		SizeOverLifetimeModule_set_yMultiplier_mAFF1869E535B324384AB01214B246819306439D4((&V_0), L_56, NULL);
		// break;
		goto IL_024a;
	}

IL_0208:
	{
		// instance.z = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_57 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_58 = ((ES3Type_MinMaxCurve_t1C147718750ACBECE5D2B7F545D2A434A3C5409B_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t1C147718750ACBECE5D2B7F545D2A434A3C5409B_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_57);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_59;
		L_59 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_m9D6B4042B923127DEA4A2CAA3E35EED37D75B3D0_RuntimeMethod_var, L_57, L_58);
		SizeOverLifetimeModule_set_z_m2F0D3BC817F95F78D37543F7A54C9CA0D5D87263((&V_0), L_59, NULL);
		// break;
		goto IL_024a;
	}

IL_021c:
	{
		// instance.zMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_60 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_61 = ((ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_60);
		float L_62;
		L_62 = GenericVirtualFuncInvoker1< float, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mA86928BC888E342D2C2644535E3399952F5077ED_RuntimeMethod_var, L_60, L_61);
		SizeOverLifetimeModule_set_zMultiplier_m97864CAC5D1B8936456B33989CCBA3A12870A3F4((&V_0), L_62, NULL);
		// break;
		goto IL_024a;
	}

IL_0230:
	{
		// instance.separateAxes = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_63 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_64 = ((ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_63);
		bool L_65;
		L_65 = GenericVirtualFuncInvoker1< bool, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mFFB70EE53D8CD0255A4E599780F62A3EB1520E83_RuntimeMethod_var, L_63, L_64);
		SizeOverLifetimeModule_set_separateAxes_mC07A349FA5AF44C8937B7DE7ECEEA8F871B13EED((&V_0), L_65, NULL);
		// break;
		goto IL_024a;
	}

IL_0244:
	{
		// reader.Skip();
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_66 = ___reader0;
		NullCheck(L_66);
		VirtualActionInvoker0::Invoke(41 /* System.Void ES3Reader::Skip() */, L_66);
	}

IL_024a:
	{
		// while((propertyName = reader.ReadPropertyName()) != null)
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_67 = ___reader0;
		NullCheck(L_67);
		String_t* L_68;
		L_68 = VirtualFuncInvoker0< String_t* >::Invoke(21 /* System.String ES3Reader::ReadPropertyName() */, L_67);
		String_t* L_69 = L_68;
		V_1 = L_69;
		if (L_69)
		{
			goto IL_000c;
		}
	}
	{
		// }
		return;
	}
}
// System.Void ES3Types.ES3Type_SizeOverLifetimeModule::ReadInto<UnityEngine.ParticleSystem/ColorOverLifetimeModule>(ES3Reader,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ES3Type_SizeOverLifetimeModule_ReadInto_TisColorOverLifetimeModule_t758EC8315B6C19D78C418D942CD1F94FE7EEE9D9_mF05AC878F25316C752B175C4A88C0FE9AC2C43BE_gshared (ES3Type_SizeOverLifetimeModule_tE76521DF6C9288642AE09CBD10810E97A6038CAF* __this, ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* ___reader0, RuntimeObject* ___obj1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mFFB70EE53D8CD0255A4E599780F62A3EB1520E83_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_m9D6B4042B923127DEA4A2CAA3E35EED37D75B3D0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mA86928BC888E342D2C2644535E3399952F5077ED_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_MinMaxCurve_t1C147718750ACBECE5D2B7F545D2A434A3C5409B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SizeOverLifetimeModule_t6711CE9659123CAA5BFBFDFA9F53174CD979AC0C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral062DB096C728515E033CF8C48A1C1F0B9A79384B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1B024D537329B86AB0DF96B2A714180F442F53E9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2F8690361553406965679AEF125F896BC5FC61F5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3EE5A4671A4E5AEBD31CA5F013A7773DC18ED22B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8C6F88DEE0DFE3513BB8B44A8CF0FEE437F4EFFB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9384C6EF2DA5C0BD5274A0DACFF291D0ABBFD8B1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9CE1604D659135925CCC4DD1F526AFFE42E689F1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9E61658953B4F9BB4A05E3D2D2BC18990BADE934);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBD0DD0004699EF86BF0FC1D161FA3766AF5126C4);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B);
		s_Il2CppMethodInitialized = true;
	}
	SizeOverLifetimeModule_t6711CE9659123CAA5BFBFDFA9F53174CD979AC0C V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	uint32_t V_2 = 0;
	{
		// var instance = (UnityEngine.ParticleSystem.SizeOverLifetimeModule)obj;
		RuntimeObject* L_0 = ___obj1;
		V_0 = ((*(SizeOverLifetimeModule_t6711CE9659123CAA5BFBFDFA9F53174CD979AC0C*)((SizeOverLifetimeModule_t6711CE9659123CAA5BFBFDFA9F53174CD979AC0C*)(SizeOverLifetimeModule_t6711CE9659123CAA5BFBFDFA9F53174CD979AC0C*)UnBox(L_0, SizeOverLifetimeModule_t6711CE9659123CAA5BFBFDFA9F53174CD979AC0C_il2cpp_TypeInfo_var))));
		goto IL_024a;
	}

IL_000c:
	{
		String_t* L_1 = V_1;
		uint32_t L_2;
		L_2 = U3CPrivateImplementationDetailsU3E_ComputeStringHash_m9E43873DE0DF480D27EC1C2AA3C09E74EA77F75D(L_1, NULL);
		V_2 = L_2;
		uint32_t L_3 = V_2;
		if ((!(((uint32_t)L_3) <= ((uint32_t)((int32_t)1479031685)))))
		{
			goto IL_005e;
		}
	}
	{
		uint32_t L_4 = V_2;
		if ((!(((uint32_t)L_4) <= ((uint32_t)((int32_t)597743964)))))
		{
			goto IL_003b;
		}
	}
	{
		uint32_t L_5 = V_2;
		if ((((int32_t)L_5) == ((int32_t)((int32_t)49525662))))
		{
			goto IL_00a1;
		}
	}
	{
		uint32_t L_6 = V_2;
		if ((((int32_t)L_6) == ((int32_t)((int32_t)597743964))))
		{
			goto IL_00b6;
		}
	}
	{
		goto IL_0244;
	}

IL_003b:
	{
		uint32_t L_7 = V_2;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)726266686))))
		{
			goto IL_0149;
		}
	}
	{
		uint32_t L_8 = V_2;
		if ((((int32_t)L_8) == ((int32_t)((int32_t)1105436259))))
		{
			goto IL_00cb;
		}
	}
	{
		uint32_t L_9 = V_2;
		if ((((int32_t)L_9) == ((int32_t)((int32_t)1479031685))))
		{
			goto IL_015e;
		}
	}
	{
		goto IL_0244;
	}

IL_005e:
	{
		uint32_t L_10 = V_2;
		if ((!(((uint32_t)L_10) <= ((uint32_t)((int32_t)-585050980)))))
		{
			goto IL_007e;
		}
	}
	{
		uint32_t L_11 = V_2;
		if ((((int32_t)L_11) == ((int32_t)((int32_t)-1013869429))))
		{
			goto IL_011f;
		}
	}
	{
		uint32_t L_12 = V_2;
		if ((((int32_t)L_12) == ((int32_t)((int32_t)-585050980))))
		{
			goto IL_00f5;
		}
	}
	{
		goto IL_0244;
	}

IL_007e:
	{
		uint32_t L_13 = V_2;
		if ((((int32_t)L_13) == ((int32_t)((int32_t)-66302220))))
		{
			goto IL_010a;
		}
	}
	{
		uint32_t L_14 = V_2;
		if ((((int32_t)L_14) == ((int32_t)((int32_t)-49524601))))
		{
			goto IL_00e0;
		}
	}
	{
		uint32_t L_15 = V_2;
		if ((((int32_t)L_15) == ((int32_t)((int32_t)-15969363))))
		{
			goto IL_0134;
		}
	}
	{
		goto IL_0244;
	}

IL_00a1:
	{
		String_t* L_16 = V_1;
		bool L_17;
		L_17 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_16, _stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B, NULL);
		if (L_17)
		{
			goto IL_0173;
		}
	}
	{
		goto IL_0244;
	}

IL_00b6:
	{
		String_t* L_18 = V_1;
		bool L_19;
		L_19 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_18, _stringLiteral3EE5A4671A4E5AEBD31CA5F013A7773DC18ED22B, NULL);
		if (L_19)
		{
			goto IL_018a;
		}
	}
	{
		goto IL_0244;
	}

IL_00cb:
	{
		String_t* L_20 = V_1;
		bool L_21;
		L_21 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_20, _stringLiteralBD0DD0004699EF86BF0FC1D161FA3766AF5126C4, NULL);
		if (L_21)
		{
			goto IL_01a1;
		}
	}
	{
		goto IL_0244;
	}

IL_00e0:
	{
		String_t* L_22 = V_1;
		bool L_23;
		L_23 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_22, _stringLiteral062DB096C728515E033CF8C48A1C1F0B9A79384B, NULL);
		if (L_23)
		{
			goto IL_01b8;
		}
	}
	{
		goto IL_0244;
	}

IL_00f5:
	{
		String_t* L_24 = V_1;
		bool L_25;
		L_25 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_24, _stringLiteral8C6F88DEE0DFE3513BB8B44A8CF0FEE437F4EFFB, NULL);
		if (L_25)
		{
			goto IL_01cc;
		}
	}
	{
		goto IL_0244;
	}

IL_010a:
	{
		String_t* L_26 = V_1;
		bool L_27;
		L_27 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_26, _stringLiteral9384C6EF2DA5C0BD5274A0DACFF291D0ABBFD8B1, NULL);
		if (L_27)
		{
			goto IL_01e0;
		}
	}
	{
		goto IL_0244;
	}

IL_011f:
	{
		String_t* L_28 = V_1;
		bool L_29;
		L_29 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_28, _stringLiteral9E61658953B4F9BB4A05E3D2D2BC18990BADE934, NULL);
		if (L_29)
		{
			goto IL_01f4;
		}
	}
	{
		goto IL_0244;
	}

IL_0134:
	{
		String_t* L_30 = V_1;
		bool L_31;
		L_31 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_30, _stringLiteral9CE1604D659135925CCC4DD1F526AFFE42E689F1, NULL);
		if (L_31)
		{
			goto IL_0208;
		}
	}
	{
		goto IL_0244;
	}

IL_0149:
	{
		String_t* L_32 = V_1;
		bool L_33;
		L_33 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_32, _stringLiteral2F8690361553406965679AEF125F896BC5FC61F5, NULL);
		if (L_33)
		{
			goto IL_021c;
		}
	}
	{
		goto IL_0244;
	}

IL_015e:
	{
		String_t* L_34 = V_1;
		bool L_35;
		L_35 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_34, _stringLiteral1B024D537329B86AB0DF96B2A714180F442F53E9, NULL);
		if (L_35)
		{
			goto IL_0230;
		}
	}
	{
		goto IL_0244;
	}

IL_0173:
	{
		// instance.enabled = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_36 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_37 = ((ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_36);
		bool L_38;
		L_38 = GenericVirtualFuncInvoker1< bool, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mFFB70EE53D8CD0255A4E599780F62A3EB1520E83_RuntimeMethod_var, L_36, L_37);
		SizeOverLifetimeModule_set_enabled_mC45334E7AC31CCBE1CFA531D28D29E1BD38D5D6F((&V_0), L_38, NULL);
		// break;
		goto IL_024a;
	}

IL_018a:
	{
		// instance.size = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_39 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_40 = ((ES3Type_MinMaxCurve_t1C147718750ACBECE5D2B7F545D2A434A3C5409B_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t1C147718750ACBECE5D2B7F545D2A434A3C5409B_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_39);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_41;
		L_41 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_m9D6B4042B923127DEA4A2CAA3E35EED37D75B3D0_RuntimeMethod_var, L_39, L_40);
		SizeOverLifetimeModule_set_size_m1D5987F4FB9E948DEAA5E3D8FB21D1AFEE15EBE5((&V_0), L_41, NULL);
		// break;
		goto IL_024a;
	}

IL_01a1:
	{
		// instance.sizeMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_42 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_43 = ((ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_42);
		float L_44;
		L_44 = GenericVirtualFuncInvoker1< float, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mA86928BC888E342D2C2644535E3399952F5077ED_RuntimeMethod_var, L_42, L_43);
		SizeOverLifetimeModule_set_sizeMultiplier_mE97DDCFF7A3065E4E1709EE66C8A524268A757EF((&V_0), L_44, NULL);
		// break;
		goto IL_024a;
	}

IL_01b8:
	{
		// instance.x = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_45 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_46 = ((ES3Type_MinMaxCurve_t1C147718750ACBECE5D2B7F545D2A434A3C5409B_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t1C147718750ACBECE5D2B7F545D2A434A3C5409B_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_45);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_47;
		L_47 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_m9D6B4042B923127DEA4A2CAA3E35EED37D75B3D0_RuntimeMethod_var, L_45, L_46);
		SizeOverLifetimeModule_set_x_m7B791B7E4BE55CC4CE1FB815C2E09DBAB05F027A((&V_0), L_47, NULL);
		// break;
		goto IL_024a;
	}

IL_01cc:
	{
		// instance.xMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_48 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_49 = ((ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_48);
		float L_50;
		L_50 = GenericVirtualFuncInvoker1< float, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mA86928BC888E342D2C2644535E3399952F5077ED_RuntimeMethod_var, L_48, L_49);
		SizeOverLifetimeModule_set_xMultiplier_mD17EFB03D20765192F5772A17573D777DB261910((&V_0), L_50, NULL);
		// break;
		goto IL_024a;
	}

IL_01e0:
	{
		// instance.y = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_51 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_52 = ((ES3Type_MinMaxCurve_t1C147718750ACBECE5D2B7F545D2A434A3C5409B_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t1C147718750ACBECE5D2B7F545D2A434A3C5409B_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_51);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_53;
		L_53 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_m9D6B4042B923127DEA4A2CAA3E35EED37D75B3D0_RuntimeMethod_var, L_51, L_52);
		SizeOverLifetimeModule_set_y_mB9138A8037FF0084FE6DED3DC9D81E0D926C6601((&V_0), L_53, NULL);
		// break;
		goto IL_024a;
	}

IL_01f4:
	{
		// instance.yMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_54 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_55 = ((ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_54);
		float L_56;
		L_56 = GenericVirtualFuncInvoker1< float, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mA86928BC888E342D2C2644535E3399952F5077ED_RuntimeMethod_var, L_54, L_55);
		SizeOverLifetimeModule_set_yMultiplier_mAFF1869E535B324384AB01214B246819306439D4((&V_0), L_56, NULL);
		// break;
		goto IL_024a;
	}

IL_0208:
	{
		// instance.z = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_57 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_58 = ((ES3Type_MinMaxCurve_t1C147718750ACBECE5D2B7F545D2A434A3C5409B_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t1C147718750ACBECE5D2B7F545D2A434A3C5409B_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_57);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_59;
		L_59 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_m9D6B4042B923127DEA4A2CAA3E35EED37D75B3D0_RuntimeMethod_var, L_57, L_58);
		SizeOverLifetimeModule_set_z_m2F0D3BC817F95F78D37543F7A54C9CA0D5D87263((&V_0), L_59, NULL);
		// break;
		goto IL_024a;
	}

IL_021c:
	{
		// instance.zMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_60 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_61 = ((ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_60);
		float L_62;
		L_62 = GenericVirtualFuncInvoker1< float, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mA86928BC888E342D2C2644535E3399952F5077ED_RuntimeMethod_var, L_60, L_61);
		SizeOverLifetimeModule_set_zMultiplier_m97864CAC5D1B8936456B33989CCBA3A12870A3F4((&V_0), L_62, NULL);
		// break;
		goto IL_024a;
	}

IL_0230:
	{
		// instance.separateAxes = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_63 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_64 = ((ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_63);
		bool L_65;
		L_65 = GenericVirtualFuncInvoker1< bool, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mFFB70EE53D8CD0255A4E599780F62A3EB1520E83_RuntimeMethod_var, L_63, L_64);
		SizeOverLifetimeModule_set_separateAxes_mC07A349FA5AF44C8937B7DE7ECEEA8F871B13EED((&V_0), L_65, NULL);
		// break;
		goto IL_024a;
	}

IL_0244:
	{
		// reader.Skip();
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_66 = ___reader0;
		NullCheck(L_66);
		VirtualActionInvoker0::Invoke(41 /* System.Void ES3Reader::Skip() */, L_66);
	}

IL_024a:
	{
		// while((propertyName = reader.ReadPropertyName()) != null)
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_67 = ___reader0;
		NullCheck(L_67);
		String_t* L_68;
		L_68 = VirtualFuncInvoker0< String_t* >::Invoke(21 /* System.String ES3Reader::ReadPropertyName() */, L_67);
		String_t* L_69 = L_68;
		V_1 = L_69;
		if (L_69)
		{
			goto IL_000c;
		}
	}
	{
		// }
		return;
	}
}
// System.Void ES3Types.ES3Type_SizeOverLifetimeModule::ReadInto<UnityEngine.ParticleSystem/EmissionModule>(ES3Reader,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ES3Type_SizeOverLifetimeModule_ReadInto_TisEmissionModule_t0F469FA4A08003F6D9C610D2F716A9DFDB9A3678_mECDE66D7539BCC9245B786B63F2692A41A5C1719_gshared (ES3Type_SizeOverLifetimeModule_tE76521DF6C9288642AE09CBD10810E97A6038CAF* __this, ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* ___reader0, RuntimeObject* ___obj1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mFFB70EE53D8CD0255A4E599780F62A3EB1520E83_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_m9D6B4042B923127DEA4A2CAA3E35EED37D75B3D0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mA86928BC888E342D2C2644535E3399952F5077ED_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_MinMaxCurve_t1C147718750ACBECE5D2B7F545D2A434A3C5409B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SizeOverLifetimeModule_t6711CE9659123CAA5BFBFDFA9F53174CD979AC0C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral062DB096C728515E033CF8C48A1C1F0B9A79384B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1B024D537329B86AB0DF96B2A714180F442F53E9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2F8690361553406965679AEF125F896BC5FC61F5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3EE5A4671A4E5AEBD31CA5F013A7773DC18ED22B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8C6F88DEE0DFE3513BB8B44A8CF0FEE437F4EFFB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9384C6EF2DA5C0BD5274A0DACFF291D0ABBFD8B1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9CE1604D659135925CCC4DD1F526AFFE42E689F1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9E61658953B4F9BB4A05E3D2D2BC18990BADE934);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBD0DD0004699EF86BF0FC1D161FA3766AF5126C4);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B);
		s_Il2CppMethodInitialized = true;
	}
	SizeOverLifetimeModule_t6711CE9659123CAA5BFBFDFA9F53174CD979AC0C V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	uint32_t V_2 = 0;
	{
		// var instance = (UnityEngine.ParticleSystem.SizeOverLifetimeModule)obj;
		RuntimeObject* L_0 = ___obj1;
		V_0 = ((*(SizeOverLifetimeModule_t6711CE9659123CAA5BFBFDFA9F53174CD979AC0C*)((SizeOverLifetimeModule_t6711CE9659123CAA5BFBFDFA9F53174CD979AC0C*)(SizeOverLifetimeModule_t6711CE9659123CAA5BFBFDFA9F53174CD979AC0C*)UnBox(L_0, SizeOverLifetimeModule_t6711CE9659123CAA5BFBFDFA9F53174CD979AC0C_il2cpp_TypeInfo_var))));
		goto IL_024a;
	}

IL_000c:
	{
		String_t* L_1 = V_1;
		uint32_t L_2;
		L_2 = U3CPrivateImplementationDetailsU3E_ComputeStringHash_m9E43873DE0DF480D27EC1C2AA3C09E74EA77F75D(L_1, NULL);
		V_2 = L_2;
		uint32_t L_3 = V_2;
		if ((!(((uint32_t)L_3) <= ((uint32_t)((int32_t)1479031685)))))
		{
			goto IL_005e;
		}
	}
	{
		uint32_t L_4 = V_2;
		if ((!(((uint32_t)L_4) <= ((uint32_t)((int32_t)597743964)))))
		{
			goto IL_003b;
		}
	}
	{
		uint32_t L_5 = V_2;
		if ((((int32_t)L_5) == ((int32_t)((int32_t)49525662))))
		{
			goto IL_00a1;
		}
	}
	{
		uint32_t L_6 = V_2;
		if ((((int32_t)L_6) == ((int32_t)((int32_t)597743964))))
		{
			goto IL_00b6;
		}
	}
	{
		goto IL_0244;
	}

IL_003b:
	{
		uint32_t L_7 = V_2;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)726266686))))
		{
			goto IL_0149;
		}
	}
	{
		uint32_t L_8 = V_2;
		if ((((int32_t)L_8) == ((int32_t)((int32_t)1105436259))))
		{
			goto IL_00cb;
		}
	}
	{
		uint32_t L_9 = V_2;
		if ((((int32_t)L_9) == ((int32_t)((int32_t)1479031685))))
		{
			goto IL_015e;
		}
	}
	{
		goto IL_0244;
	}

IL_005e:
	{
		uint32_t L_10 = V_2;
		if ((!(((uint32_t)L_10) <= ((uint32_t)((int32_t)-585050980)))))
		{
			goto IL_007e;
		}
	}
	{
		uint32_t L_11 = V_2;
		if ((((int32_t)L_11) == ((int32_t)((int32_t)-1013869429))))
		{
			goto IL_011f;
		}
	}
	{
		uint32_t L_12 = V_2;
		if ((((int32_t)L_12) == ((int32_t)((int32_t)-585050980))))
		{
			goto IL_00f5;
		}
	}
	{
		goto IL_0244;
	}

IL_007e:
	{
		uint32_t L_13 = V_2;
		if ((((int32_t)L_13) == ((int32_t)((int32_t)-66302220))))
		{
			goto IL_010a;
		}
	}
	{
		uint32_t L_14 = V_2;
		if ((((int32_t)L_14) == ((int32_t)((int32_t)-49524601))))
		{
			goto IL_00e0;
		}
	}
	{
		uint32_t L_15 = V_2;
		if ((((int32_t)L_15) == ((int32_t)((int32_t)-15969363))))
		{
			goto IL_0134;
		}
	}
	{
		goto IL_0244;
	}

IL_00a1:
	{
		String_t* L_16 = V_1;
		bool L_17;
		L_17 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_16, _stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B, NULL);
		if (L_17)
		{
			goto IL_0173;
		}
	}
	{
		goto IL_0244;
	}

IL_00b6:
	{
		String_t* L_18 = V_1;
		bool L_19;
		L_19 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_18, _stringLiteral3EE5A4671A4E5AEBD31CA5F013A7773DC18ED22B, NULL);
		if (L_19)
		{
			goto IL_018a;
		}
	}
	{
		goto IL_0244;
	}

IL_00cb:
	{
		String_t* L_20 = V_1;
		bool L_21;
		L_21 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_20, _stringLiteralBD0DD0004699EF86BF0FC1D161FA3766AF5126C4, NULL);
		if (L_21)
		{
			goto IL_01a1;
		}
	}
	{
		goto IL_0244;
	}

IL_00e0:
	{
		String_t* L_22 = V_1;
		bool L_23;
		L_23 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_22, _stringLiteral062DB096C728515E033CF8C48A1C1F0B9A79384B, NULL);
		if (L_23)
		{
			goto IL_01b8;
		}
	}
	{
		goto IL_0244;
	}

IL_00f5:
	{
		String_t* L_24 = V_1;
		bool L_25;
		L_25 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_24, _stringLiteral8C6F88DEE0DFE3513BB8B44A8CF0FEE437F4EFFB, NULL);
		if (L_25)
		{
			goto IL_01cc;
		}
	}
	{
		goto IL_0244;
	}

IL_010a:
	{
		String_t* L_26 = V_1;
		bool L_27;
		L_27 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_26, _stringLiteral9384C6EF2DA5C0BD5274A0DACFF291D0ABBFD8B1, NULL);
		if (L_27)
		{
			goto IL_01e0;
		}
	}
	{
		goto IL_0244;
	}

IL_011f:
	{
		String_t* L_28 = V_1;
		bool L_29;
		L_29 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_28, _stringLiteral9E61658953B4F9BB4A05E3D2D2BC18990BADE934, NULL);
		if (L_29)
		{
			goto IL_01f4;
		}
	}
	{
		goto IL_0244;
	}

IL_0134:
	{
		String_t* L_30 = V_1;
		bool L_31;
		L_31 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_30, _stringLiteral9CE1604D659135925CCC4DD1F526AFFE42E689F1, NULL);
		if (L_31)
		{
			goto IL_0208;
		}
	}
	{
		goto IL_0244;
	}

IL_0149:
	{
		String_t* L_32 = V_1;
		bool L_33;
		L_33 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_32, _stringLiteral2F8690361553406965679AEF125F896BC5FC61F5, NULL);
		if (L_33)
		{
			goto IL_021c;
		}
	}
	{
		goto IL_0244;
	}

IL_015e:
	{
		String_t* L_34 = V_1;
		bool L_35;
		L_35 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_34, _stringLiteral1B024D537329B86AB0DF96B2A714180F442F53E9, NULL);
		if (L_35)
		{
			goto IL_0230;
		}
	}
	{
		goto IL_0244;
	}

IL_0173:
	{
		// instance.enabled = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_36 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_37 = ((ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_36);
		bool L_38;
		L_38 = GenericVirtualFuncInvoker1< bool, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mFFB70EE53D8CD0255A4E599780F62A3EB1520E83_RuntimeMethod_var, L_36, L_37);
		SizeOverLifetimeModule_set_enabled_mC45334E7AC31CCBE1CFA531D28D29E1BD38D5D6F((&V_0), L_38, NULL);
		// break;
		goto IL_024a;
	}

IL_018a:
	{
		// instance.size = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_39 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_40 = ((ES3Type_MinMaxCurve_t1C147718750ACBECE5D2B7F545D2A434A3C5409B_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t1C147718750ACBECE5D2B7F545D2A434A3C5409B_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_39);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_41;
		L_41 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_m9D6B4042B923127DEA4A2CAA3E35EED37D75B3D0_RuntimeMethod_var, L_39, L_40);
		SizeOverLifetimeModule_set_size_m1D5987F4FB9E948DEAA5E3D8FB21D1AFEE15EBE5((&V_0), L_41, NULL);
		// break;
		goto IL_024a;
	}

IL_01a1:
	{
		// instance.sizeMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_42 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_43 = ((ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_42);
		float L_44;
		L_44 = GenericVirtualFuncInvoker1< float, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mA86928BC888E342D2C2644535E3399952F5077ED_RuntimeMethod_var, L_42, L_43);
		SizeOverLifetimeModule_set_sizeMultiplier_mE97DDCFF7A3065E4E1709EE66C8A524268A757EF((&V_0), L_44, NULL);
		// break;
		goto IL_024a;
	}

IL_01b8:
	{
		// instance.x = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_45 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_46 = ((ES3Type_MinMaxCurve_t1C147718750ACBECE5D2B7F545D2A434A3C5409B_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t1C147718750ACBECE5D2B7F545D2A434A3C5409B_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_45);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_47;
		L_47 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_m9D6B4042B923127DEA4A2CAA3E35EED37D75B3D0_RuntimeMethod_var, L_45, L_46);
		SizeOverLifetimeModule_set_x_m7B791B7E4BE55CC4CE1FB815C2E09DBAB05F027A((&V_0), L_47, NULL);
		// break;
		goto IL_024a;
	}

IL_01cc:
	{
		// instance.xMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_48 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_49 = ((ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_48);
		float L_50;
		L_50 = GenericVirtualFuncInvoker1< float, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mA86928BC888E342D2C2644535E3399952F5077ED_RuntimeMethod_var, L_48, L_49);
		SizeOverLifetimeModule_set_xMultiplier_mD17EFB03D20765192F5772A17573D777DB261910((&V_0), L_50, NULL);
		// break;
		goto IL_024a;
	}

IL_01e0:
	{
		// instance.y = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_51 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_52 = ((ES3Type_MinMaxCurve_t1C147718750ACBECE5D2B7F545D2A434A3C5409B_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t1C147718750ACBECE5D2B7F545D2A434A3C5409B_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_51);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_53;
		L_53 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_m9D6B4042B923127DEA4A2CAA3E35EED37D75B3D0_RuntimeMethod_var, L_51, L_52);
		SizeOverLifetimeModule_set_y_mB9138A8037FF0084FE6DED3DC9D81E0D926C6601((&V_0), L_53, NULL);
		// break;
		goto IL_024a;
	}

IL_01f4:
	{
		// instance.yMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_54 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_55 = ((ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_54);
		float L_56;
		L_56 = GenericVirtualFuncInvoker1< float, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mA86928BC888E342D2C2644535E3399952F5077ED_RuntimeMethod_var, L_54, L_55);
		SizeOverLifetimeModule_set_yMultiplier_mAFF1869E535B324384AB01214B246819306439D4((&V_0), L_56, NULL);
		// break;
		goto IL_024a;
	}

IL_0208:
	{
		// instance.z = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_57 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_58 = ((ES3Type_MinMaxCurve_t1C147718750ACBECE5D2B7F545D2A434A3C5409B_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t1C147718750ACBECE5D2B7F545D2A434A3C5409B_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_57);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_59;
		L_59 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_m9D6B4042B923127DEA4A2CAA3E35EED37D75B3D0_RuntimeMethod_var, L_57, L_58);
		SizeOverLifetimeModule_set_z_m2F0D3BC817F95F78D37543F7A54C9CA0D5D87263((&V_0), L_59, NULL);
		// break;
		goto IL_024a;
	}

IL_021c:
	{
		// instance.zMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_60 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_61 = ((ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_60);
		float L_62;
		L_62 = GenericVirtualFuncInvoker1< float, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mA86928BC888E342D2C2644535E3399952F5077ED_RuntimeMethod_var, L_60, L_61);
		SizeOverLifetimeModule_set_zMultiplier_m97864CAC5D1B8936456B33989CCBA3A12870A3F4((&V_0), L_62, NULL);
		// break;
		goto IL_024a;
	}

IL_0230:
	{
		// instance.separateAxes = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_63 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_64 = ((ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_63);
		bool L_65;
		L_65 = GenericVirtualFuncInvoker1< bool, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mFFB70EE53D8CD0255A4E599780F62A3EB1520E83_RuntimeMethod_var, L_63, L_64);
		SizeOverLifetimeModule_set_separateAxes_mC07A349FA5AF44C8937B7DE7ECEEA8F871B13EED((&V_0), L_65, NULL);
		// break;
		goto IL_024a;
	}

IL_0244:
	{
		// reader.Skip();
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_66 = ___reader0;
		NullCheck(L_66);
		VirtualActionInvoker0::Invoke(41 /* System.Void ES3Reader::Skip() */, L_66);
	}

IL_024a:
	{
		// while((propertyName = reader.ReadPropertyName()) != null)
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_67 = ___reader0;
		NullCheck(L_67);
		String_t* L_68;
		L_68 = VirtualFuncInvoker0< String_t* >::Invoke(21 /* System.String ES3Reader::ReadPropertyName() */, L_67);
		String_t* L_69 = L_68;
		V_1 = L_69;
		if (L_69)
		{
			goto IL_000c;
		}
	}
	{
		// }
		return;
	}
}
// System.Void ES3Types.ES3Type_SizeOverLifetimeModule::ReadInto<UnityEngine.ParticleSystem/ExternalForcesModule>(ES3Reader,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ES3Type_SizeOverLifetimeModule_ReadInto_TisExternalForcesModule_t4494E21ECF96F072432EF4DDC5F84BAF84912FC7_mB6AA256292C7896D39AF52898648D4CBA3735B9B_gshared (ES3Type_SizeOverLifetimeModule_tE76521DF6C9288642AE09CBD10810E97A6038CAF* __this, ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* ___reader0, RuntimeObject* ___obj1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mFFB70EE53D8CD0255A4E599780F62A3EB1520E83_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_m9D6B4042B923127DEA4A2CAA3E35EED37D75B3D0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mA86928BC888E342D2C2644535E3399952F5077ED_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_MinMaxCurve_t1C147718750ACBECE5D2B7F545D2A434A3C5409B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SizeOverLifetimeModule_t6711CE9659123CAA5BFBFDFA9F53174CD979AC0C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral062DB096C728515E033CF8C48A1C1F0B9A79384B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1B024D537329B86AB0DF96B2A714180F442F53E9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2F8690361553406965679AEF125F896BC5FC61F5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3EE5A4671A4E5AEBD31CA5F013A7773DC18ED22B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8C6F88DEE0DFE3513BB8B44A8CF0FEE437F4EFFB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9384C6EF2DA5C0BD5274A0DACFF291D0ABBFD8B1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9CE1604D659135925CCC4DD1F526AFFE42E689F1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9E61658953B4F9BB4A05E3D2D2BC18990BADE934);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBD0DD0004699EF86BF0FC1D161FA3766AF5126C4);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B);
		s_Il2CppMethodInitialized = true;
	}
	SizeOverLifetimeModule_t6711CE9659123CAA5BFBFDFA9F53174CD979AC0C V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	uint32_t V_2 = 0;
	{
		// var instance = (UnityEngine.ParticleSystem.SizeOverLifetimeModule)obj;
		RuntimeObject* L_0 = ___obj1;
		V_0 = ((*(SizeOverLifetimeModule_t6711CE9659123CAA5BFBFDFA9F53174CD979AC0C*)((SizeOverLifetimeModule_t6711CE9659123CAA5BFBFDFA9F53174CD979AC0C*)(SizeOverLifetimeModule_t6711CE9659123CAA5BFBFDFA9F53174CD979AC0C*)UnBox(L_0, SizeOverLifetimeModule_t6711CE9659123CAA5BFBFDFA9F53174CD979AC0C_il2cpp_TypeInfo_var))));
		goto IL_024a;
	}

IL_000c:
	{
		String_t* L_1 = V_1;
		uint32_t L_2;
		L_2 = U3CPrivateImplementationDetailsU3E_ComputeStringHash_m9E43873DE0DF480D27EC1C2AA3C09E74EA77F75D(L_1, NULL);
		V_2 = L_2;
		uint32_t L_3 = V_2;
		if ((!(((uint32_t)L_3) <= ((uint32_t)((int32_t)1479031685)))))
		{
			goto IL_005e;
		}
	}
	{
		uint32_t L_4 = V_2;
		if ((!(((uint32_t)L_4) <= ((uint32_t)((int32_t)597743964)))))
		{
			goto IL_003b;
		}
	}
	{
		uint32_t L_5 = V_2;
		if ((((int32_t)L_5) == ((int32_t)((int32_t)49525662))))
		{
			goto IL_00a1;
		}
	}
	{
		uint32_t L_6 = V_2;
		if ((((int32_t)L_6) == ((int32_t)((int32_t)597743964))))
		{
			goto IL_00b6;
		}
	}
	{
		goto IL_0244;
	}

IL_003b:
	{
		uint32_t L_7 = V_2;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)726266686))))
		{
			goto IL_0149;
		}
	}
	{
		uint32_t L_8 = V_2;
		if ((((int32_t)L_8) == ((int32_t)((int32_t)1105436259))))
		{
			goto IL_00cb;
		}
	}
	{
		uint32_t L_9 = V_2;
		if ((((int32_t)L_9) == ((int32_t)((int32_t)1479031685))))
		{
			goto IL_015e;
		}
	}
	{
		goto IL_0244;
	}

IL_005e:
	{
		uint32_t L_10 = V_2;
		if ((!(((uint32_t)L_10) <= ((uint32_t)((int32_t)-585050980)))))
		{
			goto IL_007e;
		}
	}
	{
		uint32_t L_11 = V_2;
		if ((((int32_t)L_11) == ((int32_t)((int32_t)-1013869429))))
		{
			goto IL_011f;
		}
	}
	{
		uint32_t L_12 = V_2;
		if ((((int32_t)L_12) == ((int32_t)((int32_t)-585050980))))
		{
			goto IL_00f5;
		}
	}
	{
		goto IL_0244;
	}

IL_007e:
	{
		uint32_t L_13 = V_2;
		if ((((int32_t)L_13) == ((int32_t)((int32_t)-66302220))))
		{
			goto IL_010a;
		}
	}
	{
		uint32_t L_14 = V_2;
		if ((((int32_t)L_14) == ((int32_t)((int32_t)-49524601))))
		{
			goto IL_00e0;
		}
	}
	{
		uint32_t L_15 = V_2;
		if ((((int32_t)L_15) == ((int32_t)((int32_t)-15969363))))
		{
			goto IL_0134;
		}
	}
	{
		goto IL_0244;
	}

IL_00a1:
	{
		String_t* L_16 = V_1;
		bool L_17;
		L_17 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_16, _stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B, NULL);
		if (L_17)
		{
			goto IL_0173;
		}
	}
	{
		goto IL_0244;
	}

IL_00b6:
	{
		String_t* L_18 = V_1;
		bool L_19;
		L_19 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_18, _stringLiteral3EE5A4671A4E5AEBD31CA5F013A7773DC18ED22B, NULL);
		if (L_19)
		{
			goto IL_018a;
		}
	}
	{
		goto IL_0244;
	}

IL_00cb:
	{
		String_t* L_20 = V_1;
		bool L_21;
		L_21 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_20, _stringLiteralBD0DD0004699EF86BF0FC1D161FA3766AF5126C4, NULL);
		if (L_21)
		{
			goto IL_01a1;
		}
	}
	{
		goto IL_0244;
	}

IL_00e0:
	{
		String_t* L_22 = V_1;
		bool L_23;
		L_23 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_22, _stringLiteral062DB096C728515E033CF8C48A1C1F0B9A79384B, NULL);
		if (L_23)
		{
			goto IL_01b8;
		}
	}
	{
		goto IL_0244;
	}

IL_00f5:
	{
		String_t* L_24 = V_1;
		bool L_25;
		L_25 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_24, _stringLiteral8C6F88DEE0DFE3513BB8B44A8CF0FEE437F4EFFB, NULL);
		if (L_25)
		{
			goto IL_01cc;
		}
	}
	{
		goto IL_0244;
	}

IL_010a:
	{
		String_t* L_26 = V_1;
		bool L_27;
		L_27 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_26, _stringLiteral9384C6EF2DA5C0BD5274A0DACFF291D0ABBFD8B1, NULL);
		if (L_27)
		{
			goto IL_01e0;
		}
	}
	{
		goto IL_0244;
	}

IL_011f:
	{
		String_t* L_28 = V_1;
		bool L_29;
		L_29 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_28, _stringLiteral9E61658953B4F9BB4A05E3D2D2BC18990BADE934, NULL);
		if (L_29)
		{
			goto IL_01f4;
		}
	}
	{
		goto IL_0244;
	}

IL_0134:
	{
		String_t* L_30 = V_1;
		bool L_31;
		L_31 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_30, _stringLiteral9CE1604D659135925CCC4DD1F526AFFE42E689F1, NULL);
		if (L_31)
		{
			goto IL_0208;
		}
	}
	{
		goto IL_0244;
	}

IL_0149:
	{
		String_t* L_32 = V_1;
		bool L_33;
		L_33 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_32, _stringLiteral2F8690361553406965679AEF125F896BC5FC61F5, NULL);
		if (L_33)
		{
			goto IL_021c;
		}
	}
	{
		goto IL_0244;
	}

IL_015e:
	{
		String_t* L_34 = V_1;
		bool L_35;
		L_35 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_34, _stringLiteral1B024D537329B86AB0DF96B2A714180F442F53E9, NULL);
		if (L_35)
		{
			goto IL_0230;
		}
	}
	{
		goto IL_0244;
	}

IL_0173:
	{
		// instance.enabled = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_36 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_37 = ((ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_36);
		bool L_38;
		L_38 = GenericVirtualFuncInvoker1< bool, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mFFB70EE53D8CD0255A4E599780F62A3EB1520E83_RuntimeMethod_var, L_36, L_37);
		SizeOverLifetimeModule_set_enabled_mC45334E7AC31CCBE1CFA531D28D29E1BD38D5D6F((&V_0), L_38, NULL);
		// break;
		goto IL_024a;
	}

IL_018a:
	{
		// instance.size = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_39 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_40 = ((ES3Type_MinMaxCurve_t1C147718750ACBECE5D2B7F545D2A434A3C5409B_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t1C147718750ACBECE5D2B7F545D2A434A3C5409B_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_39);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_41;
		L_41 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_m9D6B4042B923127DEA4A2CAA3E35EED37D75B3D0_RuntimeMethod_var, L_39, L_40);
		SizeOverLifetimeModule_set_size_m1D5987F4FB9E948DEAA5E3D8FB21D1AFEE15EBE5((&V_0), L_41, NULL);
		// break;
		goto IL_024a;
	}

IL_01a1:
	{
		// instance.sizeMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_42 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_43 = ((ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_42);
		float L_44;
		L_44 = GenericVirtualFuncInvoker1< float, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mA86928BC888E342D2C2644535E3399952F5077ED_RuntimeMethod_var, L_42, L_43);
		SizeOverLifetimeModule_set_sizeMultiplier_mE97DDCFF7A3065E4E1709EE66C8A524268A757EF((&V_0), L_44, NULL);
		// break;
		goto IL_024a;
	}

IL_01b8:
	{
		// instance.x = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_45 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_46 = ((ES3Type_MinMaxCurve_t1C147718750ACBECE5D2B7F545D2A434A3C5409B_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t1C147718750ACBECE5D2B7F545D2A434A3C5409B_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_45);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_47;
		L_47 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_m9D6B4042B923127DEA4A2CAA3E35EED37D75B3D0_RuntimeMethod_var, L_45, L_46);
		SizeOverLifetimeModule_set_x_m7B791B7E4BE55CC4CE1FB815C2E09DBAB05F027A((&V_0), L_47, NULL);
		// break;
		goto IL_024a;
	}

IL_01cc:
	{
		// instance.xMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_48 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_49 = ((ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_48);
		float L_50;
		L_50 = GenericVirtualFuncInvoker1< float, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mA86928BC888E342D2C2644535E3399952F5077ED_RuntimeMethod_var, L_48, L_49);
		SizeOverLifetimeModule_set_xMultiplier_mD17EFB03D20765192F5772A17573D777DB261910((&V_0), L_50, NULL);
		// break;
		goto IL_024a;
	}

IL_01e0:
	{
		// instance.y = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_51 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_52 = ((ES3Type_MinMaxCurve_t1C147718750ACBECE5D2B7F545D2A434A3C5409B_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t1C147718750ACBECE5D2B7F545D2A434A3C5409B_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_51);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_53;
		L_53 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_m9D6B4042B923127DEA4A2CAA3E35EED37D75B3D0_RuntimeMethod_var, L_51, L_52);
		SizeOverLifetimeModule_set_y_mB9138A8037FF0084FE6DED3DC9D81E0D926C6601((&V_0), L_53, NULL);
		// break;
		goto IL_024a;
	}

IL_01f4:
	{
		// instance.yMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_54 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_55 = ((ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_54);
		float L_56;
		L_56 = GenericVirtualFuncInvoker1< float, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mA86928BC888E342D2C2644535E3399952F5077ED_RuntimeMethod_var, L_54, L_55);
		SizeOverLifetimeModule_set_yMultiplier_mAFF1869E535B324384AB01214B246819306439D4((&V_0), L_56, NULL);
		// break;
		goto IL_024a;
	}

IL_0208:
	{
		// instance.z = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_57 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_58 = ((ES3Type_MinMaxCurve_t1C147718750ACBECE5D2B7F545D2A434A3C5409B_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t1C147718750ACBECE5D2B7F545D2A434A3C5409B_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_57);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_59;
		L_59 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_m9D6B4042B923127DEA4A2CAA3E35EED37D75B3D0_RuntimeMethod_var, L_57, L_58);
		SizeOverLifetimeModule_set_z_m2F0D3BC817F95F78D37543F7A54C9CA0D5D87263((&V_0), L_59, NULL);
		// break;
		goto IL_024a;
	}

IL_021c:
	{
		// instance.zMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_60 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_61 = ((ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_60);
		float L_62;
		L_62 = GenericVirtualFuncInvoker1< float, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mA86928BC888E342D2C2644535E3399952F5077ED_RuntimeMethod_var, L_60, L_61);
		SizeOverLifetimeModule_set_zMultiplier_m97864CAC5D1B8936456B33989CCBA3A12870A3F4((&V_0), L_62, NULL);
		// break;
		goto IL_024a;
	}

IL_0230:
	{
		// instance.separateAxes = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_63 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_64 = ((ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_63);
		bool L_65;
		L_65 = GenericVirtualFuncInvoker1< bool, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mFFB70EE53D8CD0255A4E599780F62A3EB1520E83_RuntimeMethod_var, L_63, L_64);
		SizeOverLifetimeModule_set_separateAxes_mC07A349FA5AF44C8937B7DE7ECEEA8F871B13EED((&V_0), L_65, NULL);
		// break;
		goto IL_024a;
	}

IL_0244:
	{
		// reader.Skip();
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_66 = ___reader0;
		NullCheck(L_66);
		VirtualActionInvoker0::Invoke(41 /* System.Void ES3Reader::Skip() */, L_66);
	}

IL_024a:
	{
		// while((propertyName = reader.ReadPropertyName()) != null)
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_67 = ___reader0;
		NullCheck(L_67);
		String_t* L_68;
		L_68 = VirtualFuncInvoker0< String_t* >::Invoke(21 /* System.String ES3Reader::ReadPropertyName() */, L_67);
		String_t* L_69 = L_68;
		V_1 = L_69;
		if (L_69)
		{
			goto IL_000c;
		}
	}
	{
		// }
		return;
	}
}
// System.Void ES3Types.ES3Type_SizeOverLifetimeModule::ReadInto<UnityEngine.ParticleSystem/ForceOverLifetimeModule>(ES3Reader,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ES3Type_SizeOverLifetimeModule_ReadInto_TisForceOverLifetimeModule_t4859776EAF945AEA86044CAB63CA7A8AC8C14976_mBED85593241E941C3F075CE5C1BFD93216693DC0_gshared (ES3Type_SizeOverLifetimeModule_tE76521DF6C9288642AE09CBD10810E97A6038CAF* __this, ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* ___reader0, RuntimeObject* ___obj1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mFFB70EE53D8CD0255A4E599780F62A3EB1520E83_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_m9D6B4042B923127DEA4A2CAA3E35EED37D75B3D0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mA86928BC888E342D2C2644535E3399952F5077ED_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_MinMaxCurve_t1C147718750ACBECE5D2B7F545D2A434A3C5409B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SizeOverLifetimeModule_t6711CE9659123CAA5BFBFDFA9F53174CD979AC0C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral062DB096C728515E033CF8C48A1C1F0B9A79384B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1B024D537329B86AB0DF96B2A714180F442F53E9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2F8690361553406965679AEF125F896BC5FC61F5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3EE5A4671A4E5AEBD31CA5F013A7773DC18ED22B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8C6F88DEE0DFE3513BB8B44A8CF0FEE437F4EFFB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9384C6EF2DA5C0BD5274A0DACFF291D0ABBFD8B1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9CE1604D659135925CCC4DD1F526AFFE42E689F1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9E61658953B4F9BB4A05E3D2D2BC18990BADE934);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBD0DD0004699EF86BF0FC1D161FA3766AF5126C4);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B);
		s_Il2CppMethodInitialized = true;
	}
	SizeOverLifetimeModule_t6711CE9659123CAA5BFBFDFA9F53174CD979AC0C V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	uint32_t V_2 = 0;
	{
		// var instance = (UnityEngine.ParticleSystem.SizeOverLifetimeModule)obj;
		RuntimeObject* L_0 = ___obj1;
		V_0 = ((*(SizeOverLifetimeModule_t6711CE9659123CAA5BFBFDFA9F53174CD979AC0C*)((SizeOverLifetimeModule_t6711CE9659123CAA5BFBFDFA9F53174CD979AC0C*)(SizeOverLifetimeModule_t6711CE9659123CAA5BFBFDFA9F53174CD979AC0C*)UnBox(L_0, SizeOverLifetimeModule_t6711CE9659123CAA5BFBFDFA9F53174CD979AC0C_il2cpp_TypeInfo_var))));
		goto IL_024a;
	}

IL_000c:
	{
		String_t* L_1 = V_1;
		uint32_t L_2;
		L_2 = U3CPrivateImplementationDetailsU3E_ComputeStringHash_m9E43873DE0DF480D27EC1C2AA3C09E74EA77F75D(L_1, NULL);
		V_2 = L_2;
		uint32_t L_3 = V_2;
		if ((!(((uint32_t)L_3) <= ((uint32_t)((int32_t)1479031685)))))
		{
			goto IL_005e;
		}
	}
	{
		uint32_t L_4 = V_2;
		if ((!(((uint32_t)L_4) <= ((uint32_t)((int32_t)597743964)))))
		{
			goto IL_003b;
		}
	}
	{
		uint32_t L_5 = V_2;
		if ((((int32_t)L_5) == ((int32_t)((int32_t)49525662))))
		{
			goto IL_00a1;
		}
	}
	{
		uint32_t L_6 = V_2;
		if ((((int32_t)L_6) == ((int32_t)((int32_t)597743964))))
		{
			goto IL_00b6;
		}
	}
	{
		goto IL_0244;
	}

IL_003b:
	{
		uint32_t L_7 = V_2;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)726266686))))
		{
			goto IL_0149;
		}
	}
	{
		uint32_t L_8 = V_2;
		if ((((int32_t)L_8) == ((int32_t)((int32_t)1105436259))))
		{
			goto IL_00cb;
		}
	}
	{
		uint32_t L_9 = V_2;
		if ((((int32_t)L_9) == ((int32_t)((int32_t)1479031685))))
		{
			goto IL_015e;
		}
	}
	{
		goto IL_0244;
	}

IL_005e:
	{
		uint32_t L_10 = V_2;
		if ((!(((uint32_t)L_10) <= ((uint32_t)((int32_t)-585050980)))))
		{
			goto IL_007e;
		}
	}
	{
		uint32_t L_11 = V_2;
		if ((((int32_t)L_11) == ((int32_t)((int32_t)-1013869429))))
		{
			goto IL_011f;
		}
	}
	{
		uint32_t L_12 = V_2;
		if ((((int32_t)L_12) == ((int32_t)((int32_t)-585050980))))
		{
			goto IL_00f5;
		}
	}
	{
		goto IL_0244;
	}

IL_007e:
	{
		uint32_t L_13 = V_2;
		if ((((int32_t)L_13) == ((int32_t)((int32_t)-66302220))))
		{
			goto IL_010a;
		}
	}
	{
		uint32_t L_14 = V_2;
		if ((((int32_t)L_14) == ((int32_t)((int32_t)-49524601))))
		{
			goto IL_00e0;
		}
	}
	{
		uint32_t L_15 = V_2;
		if ((((int32_t)L_15) == ((int32_t)((int32_t)-15969363))))
		{
			goto IL_0134;
		}
	}
	{
		goto IL_0244;
	}

IL_00a1:
	{
		String_t* L_16 = V_1;
		bool L_17;
		L_17 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_16, _stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B, NULL);
		if (L_17)
		{
			goto IL_0173;
		}
	}
	{
		goto IL_0244;
	}

IL_00b6:
	{
		String_t* L_18 = V_1;
		bool L_19;
		L_19 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_18, _stringLiteral3EE5A4671A4E5AEBD31CA5F013A7773DC18ED22B, NULL);
		if (L_19)
		{
			goto IL_018a;
		}
	}
	{
		goto IL_0244;
	}

IL_00cb:
	{
		String_t* L_20 = V_1;
		bool L_21;
		L_21 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_20, _stringLiteralBD0DD0004699EF86BF0FC1D161FA3766AF5126C4, NULL);
		if (L_21)
		{
			goto IL_01a1;
		}
	}
	{
		goto IL_0244;
	}

IL_00e0:
	{
		String_t* L_22 = V_1;
		bool L_23;
		L_23 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_22, _stringLiteral062DB096C728515E033CF8C48A1C1F0B9A79384B, NULL);
		if (L_23)
		{
			goto IL_01b8;
		}
	}
	{
		goto IL_0244;
	}

IL_00f5:
	{
		String_t* L_24 = V_1;
		bool L_25;
		L_25 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_24, _stringLiteral8C6F88DEE0DFE3513BB8B44A8CF0FEE437F4EFFB, NULL);
		if (L_25)
		{
			goto IL_01cc;
		}
	}
	{
		goto IL_0244;
	}

IL_010a:
	{
		String_t* L_26 = V_1;
		bool L_27;
		L_27 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_26, _stringLiteral9384C6EF2DA5C0BD5274A0DACFF291D0ABBFD8B1, NULL);
		if (L_27)
		{
			goto IL_01e0;
		}
	}
	{
		goto IL_0244;
	}

IL_011f:
	{
		String_t* L_28 = V_1;
		bool L_29;
		L_29 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_28, _stringLiteral9E61658953B4F9BB4A05E3D2D2BC18990BADE934, NULL);
		if (L_29)
		{
			goto IL_01f4;
		}
	}
	{
		goto IL_0244;
	}

IL_0134:
	{
		String_t* L_30 = V_1;
		bool L_31;
		L_31 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_30, _stringLiteral9CE1604D659135925CCC4DD1F526AFFE42E689F1, NULL);
		if (L_31)
		{
			goto IL_0208;
		}
	}
	{
		goto IL_0244;
	}

IL_0149:
	{
		String_t* L_32 = V_1;
		bool L_33;
		L_33 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_32, _stringLiteral2F8690361553406965679AEF125F896BC5FC61F5, NULL);
		if (L_33)
		{
			goto IL_021c;
		}
	}
	{
		goto IL_0244;
	}

IL_015e:
	{
		String_t* L_34 = V_1;
		bool L_35;
		L_35 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_34, _stringLiteral1B024D537329B86AB0DF96B2A714180F442F53E9, NULL);
		if (L_35)
		{
			goto IL_0230;
		}
	}
	{
		goto IL_0244;
	}

IL_0173:
	{
		// instance.enabled = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_36 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_37 = ((ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_36);
		bool L_38;
		L_38 = GenericVirtualFuncInvoker1< bool, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mFFB70EE53D8CD0255A4E599780F62A3EB1520E83_RuntimeMethod_var, L_36, L_37);
		SizeOverLifetimeModule_set_enabled_mC45334E7AC31CCBE1CFA531D28D29E1BD38D5D6F((&V_0), L_38, NULL);
		// break;
		goto IL_024a;
	}

IL_018a:
	{
		// instance.size = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_39 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_40 = ((ES3Type_MinMaxCurve_t1C147718750ACBECE5D2B7F545D2A434A3C5409B_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t1C147718750ACBECE5D2B7F545D2A434A3C5409B_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_39);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_41;
		L_41 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_m9D6B4042B923127DEA4A2CAA3E35EED37D75B3D0_RuntimeMethod_var, L_39, L_40);
		SizeOverLifetimeModule_set_size_m1D5987F4FB9E948DEAA5E3D8FB21D1AFEE15EBE5((&V_0), L_41, NULL);
		// break;
		goto IL_024a;
	}

IL_01a1:
	{
		// instance.sizeMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_42 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_43 = ((ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_42);
		float L_44;
		L_44 = GenericVirtualFuncInvoker1< float, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mA86928BC888E342D2C2644535E3399952F5077ED_RuntimeMethod_var, L_42, L_43);
		SizeOverLifetimeModule_set_sizeMultiplier_mE97DDCFF7A3065E4E1709EE66C8A524268A757EF((&V_0), L_44, NULL);
		// break;
		goto IL_024a;
	}

IL_01b8:
	{
		// instance.x = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_45 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_46 = ((ES3Type_MinMaxCurve_t1C147718750ACBECE5D2B7F545D2A434A3C5409B_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t1C147718750ACBECE5D2B7F545D2A434A3C5409B_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_45);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_47;
		L_47 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_m9D6B4042B923127DEA4A2CAA3E35EED37D75B3D0_RuntimeMethod_var, L_45, L_46);
		SizeOverLifetimeModule_set_x_m7B791B7E4BE55CC4CE1FB815C2E09DBAB05F027A((&V_0), L_47, NULL);
		// break;
		goto IL_024a;
	}

IL_01cc:
	{
		// instance.xMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_48 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_49 = ((ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_48);
		float L_50;
		L_50 = GenericVirtualFuncInvoker1< float, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mA86928BC888E342D2C2644535E3399952F5077ED_RuntimeMethod_var, L_48, L_49);
		SizeOverLifetimeModule_set_xMultiplier_mD17EFB03D20765192F5772A17573D777DB261910((&V_0), L_50, NULL);
		// break;
		goto IL_024a;
	}

IL_01e0:
	{
		// instance.y = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_51 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_52 = ((ES3Type_MinMaxCurve_t1C147718750ACBECE5D2B7F545D2A434A3C5409B_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t1C147718750ACBECE5D2B7F545D2A434A3C5409B_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_51);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_53;
		L_53 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_m9D6B4042B923127DEA4A2CAA3E35EED37D75B3D0_RuntimeMethod_var, L_51, L_52);
		SizeOverLifetimeModule_set_y_mB9138A8037FF0084FE6DED3DC9D81E0D926C6601((&V_0), L_53, NULL);
		// break;
		goto IL_024a;
	}

IL_01f4:
	{
		// instance.yMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_54 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_55 = ((ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_54);
		float L_56;
		L_56 = GenericVirtualFuncInvoker1< float, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mA86928BC888E342D2C2644535E3399952F5077ED_RuntimeMethod_var, L_54, L_55);
		SizeOverLifetimeModule_set_yMultiplier_mAFF1869E535B324384AB01214B246819306439D4((&V_0), L_56, NULL);
		// break;
		goto IL_024a;
	}

IL_0208:
	{
		// instance.z = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_57 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_58 = ((ES3Type_MinMaxCurve_t1C147718750ACBECE5D2B7F545D2A434A3C5409B_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t1C147718750ACBECE5D2B7F545D2A434A3C5409B_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_57);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_59;
		L_59 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_m9D6B4042B923127DEA4A2CAA3E35EED37D75B3D0_RuntimeMethod_var, L_57, L_58);
		SizeOverLifetimeModule_set_z_m2F0D3BC817F95F78D37543F7A54C9CA0D5D87263((&V_0), L_59, NULL);
		// break;
		goto IL_024a;
	}

IL_021c:
	{
		// instance.zMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_60 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_61 = ((ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_60);
		float L_62;
		L_62 = GenericVirtualFuncInvoker1< float, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mA86928BC888E342D2C2644535E3399952F5077ED_RuntimeMethod_var, L_60, L_61);
		SizeOverLifetimeModule_set_zMultiplier_m97864CAC5D1B8936456B33989CCBA3A12870A3F4((&V_0), L_62, NULL);
		// break;
		goto IL_024a;
	}

IL_0230:
	{
		// instance.separateAxes = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_63 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_64 = ((ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_63);
		bool L_65;
		L_65 = GenericVirtualFuncInvoker1< bool, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mFFB70EE53D8CD0255A4E599780F62A3EB1520E83_RuntimeMethod_var, L_63, L_64);
		SizeOverLifetimeModule_set_separateAxes_mC07A349FA5AF44C8937B7DE7ECEEA8F871B13EED((&V_0), L_65, NULL);
		// break;
		goto IL_024a;
	}

IL_0244:
	{
		// reader.Skip();
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_66 = ___reader0;
		NullCheck(L_66);
		VirtualActionInvoker0::Invoke(41 /* System.Void ES3Reader::Skip() */, L_66);
	}

IL_024a:
	{
		// while((propertyName = reader.ReadPropertyName()) != null)
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_67 = ___reader0;
		NullCheck(L_67);
		String_t* L_68;
		L_68 = VirtualFuncInvoker0< String_t* >::Invoke(21 /* System.String ES3Reader::ReadPropertyName() */, L_67);
		String_t* L_69 = L_68;
		V_1 = L_69;
		if (L_69)
		{
			goto IL_000c;
		}
	}
	{
		// }
		return;
	}
}
// System.Void ES3Types.ES3Type_SizeOverLifetimeModule::ReadInto<UnityEngine.ParticleSystem/InheritVelocityModule>(ES3Reader,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ES3Type_SizeOverLifetimeModule_ReadInto_TisInheritVelocityModule_tB71B2EDCAF328647DDB6BC79541D7C5E76C19562_m7F7F688A4C4E249E14844B34CED4440B041AE689_gshared (ES3Type_SizeOverLifetimeModule_tE76521DF6C9288642AE09CBD10810E97A6038CAF* __this, ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* ___reader0, RuntimeObject* ___obj1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mFFB70EE53D8CD0255A4E599780F62A3EB1520E83_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_m9D6B4042B923127DEA4A2CAA3E35EED37D75B3D0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mA86928BC888E342D2C2644535E3399952F5077ED_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_MinMaxCurve_t1C147718750ACBECE5D2B7F545D2A434A3C5409B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SizeOverLifetimeModule_t6711CE9659123CAA5BFBFDFA9F53174CD979AC0C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral062DB096C728515E033CF8C48A1C1F0B9A79384B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1B024D537329B86AB0DF96B2A714180F442F53E9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2F8690361553406965679AEF125F896BC5FC61F5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3EE5A4671A4E5AEBD31CA5F013A7773DC18ED22B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8C6F88DEE0DFE3513BB8B44A8CF0FEE437F4EFFB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9384C6EF2DA5C0BD5274A0DACFF291D0ABBFD8B1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9CE1604D659135925CCC4DD1F526AFFE42E689F1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9E61658953B4F9BB4A05E3D2D2BC18990BADE934);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBD0DD0004699EF86BF0FC1D161FA3766AF5126C4);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B);
		s_Il2CppMethodInitialized = true;
	}
	SizeOverLifetimeModule_t6711CE9659123CAA5BFBFDFA9F53174CD979AC0C V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	uint32_t V_2 = 0;
	{
		// var instance = (UnityEngine.ParticleSystem.SizeOverLifetimeModule)obj;
		RuntimeObject* L_0 = ___obj1;
		V_0 = ((*(SizeOverLifetimeModule_t6711CE9659123CAA5BFBFDFA9F53174CD979AC0C*)((SizeOverLifetimeModule_t6711CE9659123CAA5BFBFDFA9F53174CD979AC0C*)(SizeOverLifetimeModule_t6711CE9659123CAA5BFBFDFA9F53174CD979AC0C*)UnBox(L_0, SizeOverLifetimeModule_t6711CE9659123CAA5BFBFDFA9F53174CD979AC0C_il2cpp_TypeInfo_var))));
		goto IL_024a;
	}

IL_000c:
	{
		String_t* L_1 = V_1;
		uint32_t L_2;
		L_2 = U3CPrivateImplementationDetailsU3E_ComputeStringHash_m9E43873DE0DF480D27EC1C2AA3C09E74EA77F75D(L_1, NULL);
		V_2 = L_2;
		uint32_t L_3 = V_2;
		if ((!(((uint32_t)L_3) <= ((uint32_t)((int32_t)1479031685)))))
		{
			goto IL_005e;
		}
	}
	{
		uint32_t L_4 = V_2;
		if ((!(((uint32_t)L_4) <= ((uint32_t)((int32_t)597743964)))))
		{
			goto IL_003b;
		}
	}
	{
		uint32_t L_5 = V_2;
		if ((((int32_t)L_5) == ((int32_t)((int32_t)49525662))))
		{
			goto IL_00a1;
		}
	}
	{
		uint32_t L_6 = V_2;
		if ((((int32_t)L_6) == ((int32_t)((int32_t)597743964))))
		{
			goto IL_00b6;
		}
	}
	{
		goto IL_0244;
	}

IL_003b:
	{
		uint32_t L_7 = V_2;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)726266686))))
		{
			goto IL_0149;
		}
	}
	{
		uint32_t L_8 = V_2;
		if ((((int32_t)L_8) == ((int32_t)((int32_t)1105436259))))
		{
			goto IL_00cb;
		}
	}
	{
		uint32_t L_9 = V_2;
		if ((((int32_t)L_9) == ((int32_t)((int32_t)1479031685))))
		{
			goto IL_015e;
		}
	}
	{
		goto IL_0244;
	}

IL_005e:
	{
		uint32_t L_10 = V_2;
		if ((!(((uint32_t)L_10) <= ((uint32_t)((int32_t)-585050980)))))
		{
			goto IL_007e;
		}
	}
	{
		uint32_t L_11 = V_2;
		if ((((int32_t)L_11) == ((int32_t)((int32_t)-1013869429))))
		{
			goto IL_011f;
		}
	}
	{
		uint32_t L_12 = V_2;
		if ((((int32_t)L_12) == ((int32_t)((int32_t)-585050980))))
		{
			goto IL_00f5;
		}
	}
	{
		goto IL_0244;
	}

IL_007e:
	{
		uint32_t L_13 = V_2;
		if ((((int32_t)L_13) == ((int32_t)((int32_t)-66302220))))
		{
			goto IL_010a;
		}
	}
	{
		uint32_t L_14 = V_2;
		if ((((int32_t)L_14) == ((int32_t)((int32_t)-49524601))))
		{
			goto IL_00e0;
		}
	}
	{
		uint32_t L_15 = V_2;
		if ((((int32_t)L_15) == ((int32_t)((int32_t)-15969363))))
		{
			goto IL_0134;
		}
	}
	{
		goto IL_0244;
	}

IL_00a1:
	{
		String_t* L_16 = V_1;
		bool L_17;
		L_17 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_16, _stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B, NULL);
		if (L_17)
		{
			goto IL_0173;
		}
	}
	{
		goto IL_0244;
	}

IL_00b6:
	{
		String_t* L_18 = V_1;
		bool L_19;
		L_19 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_18, _stringLiteral3EE5A4671A4E5AEBD31CA5F013A7773DC18ED22B, NULL);
		if (L_19)
		{
			goto IL_018a;
		}
	}
	{
		goto IL_0244;
	}

IL_00cb:
	{
		String_t* L_20 = V_1;
		bool L_21;
		L_21 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_20, _stringLiteralBD0DD0004699EF86BF0FC1D161FA3766AF5126C4, NULL);
		if (L_21)
		{
			goto IL_01a1;
		}
	}
	{
		goto IL_0244;
	}

IL_00e0:
	{
		String_t* L_22 = V_1;
		bool L_23;
		L_23 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_22, _stringLiteral062DB096C728515E033CF8C48A1C1F0B9A79384B, NULL);
		if (L_23)
		{
			goto IL_01b8;
		}
	}
	{
		goto IL_0244;
	}

IL_00f5:
	{
		String_t* L_24 = V_1;
		bool L_25;
		L_25 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_24, _stringLiteral8C6F88DEE0DFE3513BB8B44A8CF0FEE437F4EFFB, NULL);
		if (L_25)
		{
			goto IL_01cc;
		}
	}
	{
		goto IL_0244;
	}

IL_010a:
	{
		String_t* L_26 = V_1;
		bool L_27;
		L_27 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_26, _stringLiteral9384C6EF2DA5C0BD5274A0DACFF291D0ABBFD8B1, NULL);
		if (L_27)
		{
			goto IL_01e0;
		}
	}
	{
		goto IL_0244;
	}

IL_011f:
	{
		String_t* L_28 = V_1;
		bool L_29;
		L_29 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_28, _stringLiteral9E61658953B4F9BB4A05E3D2D2BC18990BADE934, NULL);
		if (L_29)
		{
			goto IL_01f4;
		}
	}
	{
		goto IL_0244;
	}

IL_0134:
	{
		String_t* L_30 = V_1;
		bool L_31;
		L_31 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_30, _stringLiteral9CE1604D659135925CCC4DD1F526AFFE42E689F1, NULL);
		if (L_31)
		{
			goto IL_0208;
		}
	}
	{
		goto IL_0244;
	}

IL_0149:
	{
		String_t* L_32 = V_1;
		bool L_33;
		L_33 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_32, _stringLiteral2F8690361553406965679AEF125F896BC5FC61F5, NULL);
		if (L_33)
		{
			goto IL_021c;
		}
	}
	{
		goto IL_0244;
	}

IL_015e:
	{
		String_t* L_34 = V_1;
		bool L_35;
		L_35 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_34, _stringLiteral1B024D537329B86AB0DF96B2A714180F442F53E9, NULL);
		if (L_35)
		{
			goto IL_0230;
		}
	}
	{
		goto IL_0244;
	}

IL_0173:
	{
		// instance.enabled = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_36 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_37 = ((ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_36);
		bool L_38;
		L_38 = GenericVirtualFuncInvoker1< bool, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mFFB70EE53D8CD0255A4E599780F62A3EB1520E83_RuntimeMethod_var, L_36, L_37);
		SizeOverLifetimeModule_set_enabled_mC45334E7AC31CCBE1CFA531D28D29E1BD38D5D6F((&V_0), L_38, NULL);
		// break;
		goto IL_024a;
	}

IL_018a:
	{
		// instance.size = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_39 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_40 = ((ES3Type_MinMaxCurve_t1C147718750ACBECE5D2B7F545D2A434A3C5409B_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t1C147718750ACBECE5D2B7F545D2A434A3C5409B_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_39);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_41;
		L_41 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_m9D6B4042B923127DEA4A2CAA3E35EED37D75B3D0_RuntimeMethod_var, L_39, L_40);
		SizeOverLifetimeModule_set_size_m1D5987F4FB9E948DEAA5E3D8FB21D1AFEE15EBE5((&V_0), L_41, NULL);
		// break;
		goto IL_024a;
	}

IL_01a1:
	{
		// instance.sizeMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_42 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_43 = ((ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_42);
		float L_44;
		L_44 = GenericVirtualFuncInvoker1< float, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mA86928BC888E342D2C2644535E3399952F5077ED_RuntimeMethod_var, L_42, L_43);
		SizeOverLifetimeModule_set_sizeMultiplier_mE97DDCFF7A3065E4E1709EE66C8A524268A757EF((&V_0), L_44, NULL);
		// break;
		goto IL_024a;
	}

IL_01b8:
	{
		// instance.x = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_45 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_46 = ((ES3Type_MinMaxCurve_t1C147718750ACBECE5D2B7F545D2A434A3C5409B_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t1C147718750ACBECE5D2B7F545D2A434A3C5409B_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_45);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_47;
		L_47 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_m9D6B4042B923127DEA4A2CAA3E35EED37D75B3D0_RuntimeMethod_var, L_45, L_46);
		SizeOverLifetimeModule_set_x_m7B791B7E4BE55CC4CE1FB815C2E09DBAB05F027A((&V_0), L_47, NULL);
		// break;
		goto IL_024a;
	}

IL_01cc:
	{
		// instance.xMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_48 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_49 = ((ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_48);
		float L_50;
		L_50 = GenericVirtualFuncInvoker1< float, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mA86928BC888E342D2C2644535E3399952F5077ED_RuntimeMethod_var, L_48, L_49);
		SizeOverLifetimeModule_set_xMultiplier_mD17EFB03D20765192F5772A17573D777DB261910((&V_0), L_50, NULL);
		// break;
		goto IL_024a;
	}

IL_01e0:
	{
		// instance.y = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_51 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_52 = ((ES3Type_MinMaxCurve_t1C147718750ACBECE5D2B7F545D2A434A3C5409B_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t1C147718750ACBECE5D2B7F545D2A434A3C5409B_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_51);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_53;
		L_53 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_m9D6B4042B923127DEA4A2CAA3E35EED37D75B3D0_RuntimeMethod_var, L_51, L_52);
		SizeOverLifetimeModule_set_y_mB9138A8037FF0084FE6DED3DC9D81E0D926C6601((&V_0), L_53, NULL);
		// break;
		goto IL_024a;
	}

IL_01f4:
	{
		// instance.yMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_54 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_55 = ((ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_54);
		float L_56;
		L_56 = GenericVirtualFuncInvoker1< float, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mA86928BC888E342D2C2644535E3399952F5077ED_RuntimeMethod_var, L_54, L_55);
		SizeOverLifetimeModule_set_yMultiplier_mAFF1869E535B324384AB01214B246819306439D4((&V_0), L_56, NULL);
		// break;
		goto IL_024a;
	}

IL_0208:
	{
		// instance.z = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_57 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_58 = ((ES3Type_MinMaxCurve_t1C147718750ACBECE5D2B7F545D2A434A3C5409B_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t1C147718750ACBECE5D2B7F545D2A434A3C5409B_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_57);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_59;
		L_59 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_m9D6B4042B923127DEA4A2CAA3E35EED37D75B3D0_RuntimeMethod_var, L_57, L_58);
		SizeOverLifetimeModule_set_z_m2F0D3BC817F95F78D37543F7A54C9CA0D5D87263((&V_0), L_59, NULL);
		// break;
		goto IL_024a;
	}

IL_021c:
	{
		// instance.zMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_60 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_61 = ((ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_60);
		float L_62;
		L_62 = GenericVirtualFuncInvoker1< float, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mA86928BC888E342D2C2644535E3399952F5077ED_RuntimeMethod_var, L_60, L_61);
		SizeOverLifetimeModule_set_zMultiplier_m97864CAC5D1B8936456B33989CCBA3A12870A3F4((&V_0), L_62, NULL);
		// break;
		goto IL_024a;
	}

IL_0230:
	{
		// instance.separateAxes = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_63 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_64 = ((ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_63);
		bool L_65;
		L_65 = GenericVirtualFuncInvoker1< bool, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mFFB70EE53D8CD0255A4E599780F62A3EB1520E83_RuntimeMethod_var, L_63, L_64);
		SizeOverLifetimeModule_set_separateAxes_mC07A349FA5AF44C8937B7DE7ECEEA8F871B13EED((&V_0), L_65, NULL);
		// break;
		goto IL_024a;
	}

IL_0244:
	{
		// reader.Skip();
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_66 = ___reader0;
		NullCheck(L_66);
		VirtualActionInvoker0::Invoke(41 /* System.Void ES3Reader::Skip() */, L_66);
	}

IL_024a:
	{
		// while((propertyName = reader.ReadPropertyName()) != null)
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_67 = ___reader0;
		NullCheck(L_67);
		String_t* L_68;
		L_68 = VirtualFuncInvoker0< String_t* >::Invoke(21 /* System.String ES3Reader::ReadPropertyName() */, L_67);
		String_t* L_69 = L_68;
		V_1 = L_69;
		if (L_69)
		{
			goto IL_000c;
		}
	}
	{
		// }
		return;
	}
}
// System.Void ES3Types.ES3Type_SizeOverLifetimeModule::ReadInto<UnityEngine.ParticleSystem/LightsModule>(ES3Reader,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ES3Type_SizeOverLifetimeModule_ReadInto_TisLightsModule_t720242ED070FD6C55E59B7536322829A22884C7E_m4E5B21F4F037C650428391F914D310BB3A509D0E_gshared (ES3Type_SizeOverLifetimeModule_tE76521DF6C9288642AE09CBD10810E97A6038CAF* __this, ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* ___reader0, RuntimeObject* ___obj1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mFFB70EE53D8CD0255A4E599780F62A3EB1520E83_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_m9D6B4042B923127DEA4A2CAA3E35EED37D75B3D0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mA86928BC888E342D2C2644535E3399952F5077ED_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_MinMaxCurve_t1C147718750ACBECE5D2B7F545D2A434A3C5409B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SizeOverLifetimeModule_t6711CE9659123CAA5BFBFDFA9F53174CD979AC0C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral062DB096C728515E033CF8C48A1C1F0B9A79384B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1B024D537329B86AB0DF96B2A714180F442F53E9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2F8690361553406965679AEF125F896BC5FC61F5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3EE5A4671A4E5AEBD31CA5F013A7773DC18ED22B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8C6F88DEE0DFE3513BB8B44A8CF0FEE437F4EFFB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9384C6EF2DA5C0BD5274A0DACFF291D0ABBFD8B1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9CE1604D659135925CCC4DD1F526AFFE42E689F1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9E61658953B4F9BB4A05E3D2D2BC18990BADE934);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBD0DD0004699EF86BF0FC1D161FA3766AF5126C4);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B);
		s_Il2CppMethodInitialized = true;
	}
	SizeOverLifetimeModule_t6711CE9659123CAA5BFBFDFA9F53174CD979AC0C V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	uint32_t V_2 = 0;
	{
		// var instance = (UnityEngine.ParticleSystem.SizeOverLifetimeModule)obj;
		RuntimeObject* L_0 = ___obj1;
		V_0 = ((*(SizeOverLifetimeModule_t6711CE9659123CAA5BFBFDFA9F53174CD979AC0C*)((SizeOverLifetimeModule_t6711CE9659123CAA5BFBFDFA9F53174CD979AC0C*)(SizeOverLifetimeModule_t6711CE9659123CAA5BFBFDFA9F53174CD979AC0C*)UnBox(L_0, SizeOverLifetimeModule_t6711CE9659123CAA5BFBFDFA9F53174CD979AC0C_il2cpp_TypeInfo_var))));
		goto IL_024a;
	}

IL_000c:
	{
		String_t* L_1 = V_1;
		uint32_t L_2;
		L_2 = U3CPrivateImplementationDetailsU3E_ComputeStringHash_m9E43873DE0DF480D27EC1C2AA3C09E74EA77F75D(L_1, NULL);
		V_2 = L_2;
		uint32_t L_3 = V_2;
		if ((!(((uint32_t)L_3) <= ((uint32_t)((int32_t)1479031685)))))
		{
			goto IL_005e;
		}
	}
	{
		uint32_t L_4 = V_2;
		if ((!(((uint32_t)L_4) <= ((uint32_t)((int32_t)597743964)))))
		{
			goto IL_003b;
		}
	}
	{
		uint32_t L_5 = V_2;
		if ((((int32_t)L_5) == ((int32_t)((int32_t)49525662))))
		{
			goto IL_00a1;
		}
	}
	{
		uint32_t L_6 = V_2;
		if ((((int32_t)L_6) == ((int32_t)((int32_t)597743964))))
		{
			goto IL_00b6;
		}
	}
	{
		goto IL_0244;
	}

IL_003b:
	{
		uint32_t L_7 = V_2;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)726266686))))
		{
			goto IL_0149;
		}
	}
	{
		uint32_t L_8 = V_2;
		if ((((int32_t)L_8) == ((int32_t)((int32_t)1105436259))))
		{
			goto IL_00cb;
		}
	}
	{
		uint32_t L_9 = V_2;
		if ((((int32_t)L_9) == ((int32_t)((int32_t)1479031685))))
		{
			goto IL_015e;
		}
	}
	{
		goto IL_0244;
	}

IL_005e:
	{
		uint32_t L_10 = V_2;
		if ((!(((uint32_t)L_10) <= ((uint32_t)((int32_t)-585050980)))))
		{
			goto IL_007e;
		}
	}
	{
		uint32_t L_11 = V_2;
		if ((((int32_t)L_11) == ((int32_t)((int32_t)-1013869429))))
		{
			goto IL_011f;
		}
	}
	{
		uint32_t L_12 = V_2;
		if ((((int32_t)L_12) == ((int32_t)((int32_t)-585050980))))
		{
			goto IL_00f5;
		}
	}
	{
		goto IL_0244;
	}

IL_007e:
	{
		uint32_t L_13 = V_2;
		if ((((int32_t)L_13) == ((int32_t)((int32_t)-66302220))))
		{
			goto IL_010a;
		}
	}
	{
		uint32_t L_14 = V_2;
		if ((((int32_t)L_14) == ((int32_t)((int32_t)-49524601))))
		{
			goto IL_00e0;
		}
	}
	{
		uint32_t L_15 = V_2;
		if ((((int32_t)L_15) == ((int32_t)((int32_t)-15969363))))
		{
			goto IL_0134;
		}
	}
	{
		goto IL_0244;
	}

IL_00a1:
	{
		String_t* L_16 = V_1;
		bool L_17;
		L_17 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_16, _stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B, NULL);
		if (L_17)
		{
			goto IL_0173;
		}
	}
	{
		goto IL_0244;
	}

IL_00b6:
	{
		String_t* L_18 = V_1;
		bool L_19;
		L_19 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_18, _stringLiteral3EE5A4671A4E5AEBD31CA5F013A7773DC18ED22B, NULL);
		if (L_19)
		{
			goto IL_018a;
		}
	}
	{
		goto IL_0244;
	}

IL_00cb:
	{
		String_t* L_20 = V_1;
		bool L_21;
		L_21 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_20, _stringLiteralBD0DD0004699EF86BF0FC1D161FA3766AF5126C4, NULL);
		if (L_21)
		{
			goto IL_01a1;
		}
	}
	{
		goto IL_0244;
	}

IL_00e0:
	{
		String_t* L_22 = V_1;
		bool L_23;
		L_23 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_22, _stringLiteral062DB096C728515E033CF8C48A1C1F0B9A79384B, NULL);
		if (L_23)
		{
			goto IL_01b8;
		}
	}
	{
		goto IL_0244;
	}

IL_00f5:
	{
		String_t* L_24 = V_1;
		bool L_25;
		L_25 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_24, _stringLiteral8C6F88DEE0DFE3513BB8B44A8CF0FEE437F4EFFB, NULL);
		if (L_25)
		{
			goto IL_01cc;
		}
	}
	{
		goto IL_0244;
	}

IL_010a:
	{
		String_t* L_26 = V_1;
		bool L_27;
		L_27 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_26, _stringLiteral9384C6EF2DA5C0BD5274A0DACFF291D0ABBFD8B1, NULL);
		if (L_27)
		{
			goto IL_01e0;
		}
	}
	{
		goto IL_0244;
	}

IL_011f:
	{
		String_t* L_28 = V_1;
		bool L_29;
		L_29 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_28, _stringLiteral9E61658953B4F9BB4A05E3D2D2BC18990BADE934, NULL);
		if (L_29)
		{
			goto IL_01f4;
		}
	}
	{
		goto IL_0244;
	}

IL_0134:
	{
		String_t* L_30 = V_1;
		bool L_31;
		L_31 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_30, _stringLiteral9CE1604D659135925CCC4DD1F526AFFE42E689F1, NULL);
		if (L_31)
		{
			goto IL_0208;
		}
	}
	{
		goto IL_0244;
	}

IL_0149:
	{
		String_t* L_32 = V_1;
		bool L_33;
		L_33 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_32, _stringLiteral2F8690361553406965679AEF125F896BC5FC61F5, NULL);
		if (L_33)
		{
			goto IL_021c;
		}
	}
	{
		goto IL_0244;
	}

IL_015e:
	{
		String_t* L_34 = V_1;
		bool L_35;
		L_35 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_34, _stringLiteral1B024D537329B86AB0DF96B2A714180F442F53E9, NULL);
		if (L_35)
		{
			goto IL_0230;
		}
	}
	{
		goto IL_0244;
	}

IL_0173:
	{
		// instance.enabled = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_36 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_37 = ((ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_36);
		bool L_38;
		L_38 = GenericVirtualFuncInvoker1< bool, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mFFB70EE53D8CD0255A4E599780F62A3EB1520E83_RuntimeMethod_var, L_36, L_37);
		SizeOverLifetimeModule_set_enabled_mC45334E7AC31CCBE1CFA531D28D29E1BD38D5D6F((&V_0), L_38, NULL);
		// break;
		goto IL_024a;
	}

IL_018a:
	{
		// instance.size = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_39 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_40 = ((ES3Type_MinMaxCurve_t1C147718750ACBECE5D2B7F545D2A434A3C5409B_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t1C147718750ACBECE5D2B7F545D2A434A3C5409B_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_39);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_41;
		L_41 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_m9D6B4042B923127DEA4A2CAA3E35EED37D75B3D0_RuntimeMethod_var, L_39, L_40);
		SizeOverLifetimeModule_set_size_m1D5987F4FB9E948DEAA5E3D8FB21D1AFEE15EBE5((&V_0), L_41, NULL);
		// break;
		goto IL_024a;
	}

IL_01a1:
	{
		// instance.sizeMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_42 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_43 = ((ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_42);
		float L_44;
		L_44 = GenericVirtualFuncInvoker1< float, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mA86928BC888E342D2C2644535E3399952F5077ED_RuntimeMethod_var, L_42, L_43);
		SizeOverLifetimeModule_set_sizeMultiplier_mE97DDCFF7A3065E4E1709EE66C8A524268A757EF((&V_0), L_44, NULL);
		// break;
		goto IL_024a;
	}

IL_01b8:
	{
		// instance.x = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_45 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_46 = ((ES3Type_MinMaxCurve_t1C147718750ACBECE5D2B7F545D2A434A3C5409B_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t1C147718750ACBECE5D2B7F545D2A434A3C5409B_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_45);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_47;
		L_47 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_m9D6B4042B923127DEA4A2CAA3E35EED37D75B3D0_RuntimeMethod_var, L_45, L_46);
		SizeOverLifetimeModule_set_x_m7B791B7E4BE55CC4CE1FB815C2E09DBAB05F027A((&V_0), L_47, NULL);
		// break;
		goto IL_024a;
	}

IL_01cc:
	{
		// instance.xMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_48 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_49 = ((ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_48);
		float L_50;
		L_50 = GenericVirtualFuncInvoker1< float, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mA86928BC888E342D2C2644535E3399952F5077ED_RuntimeMethod_var, L_48, L_49);
		SizeOverLifetimeModule_set_xMultiplier_mD17EFB03D20765192F5772A17573D777DB261910((&V_0), L_50, NULL);
		// break;
		goto IL_024a;
	}

IL_01e0:
	{
		// instance.y = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_51 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_52 = ((ES3Type_MinMaxCurve_t1C147718750ACBECE5D2B7F545D2A434A3C5409B_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t1C147718750ACBECE5D2B7F545D2A434A3C5409B_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_51);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_53;
		L_53 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_m9D6B4042B923127DEA4A2CAA3E35EED37D75B3D0_RuntimeMethod_var, L_51, L_52);
		SizeOverLifetimeModule_set_y_mB9138A8037FF0084FE6DED3DC9D81E0D926C6601((&V_0), L_53, NULL);
		// break;
		goto IL_024a;
	}

IL_01f4:
	{
		// instance.yMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_54 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_55 = ((ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_54);
		float L_56;
		L_56 = GenericVirtualFuncInvoker1< float, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mA86928BC888E342D2C2644535E3399952F5077ED_RuntimeMethod_var, L_54, L_55);
		SizeOverLifetimeModule_set_yMultiplier_mAFF1869E535B324384AB01214B246819306439D4((&V_0), L_56, NULL);
		// break;
		goto IL_024a;
	}

IL_0208:
	{
		// instance.z = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_57 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_58 = ((ES3Type_MinMaxCurve_t1C147718750ACBECE5D2B7F545D2A434A3C5409B_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t1C147718750ACBECE5D2B7F545D2A434A3C5409B_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_57);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_59;
		L_59 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_m9D6B4042B923127DEA4A2CAA3E35EED37D75B3D0_RuntimeMethod_var, L_57, L_58);
		SizeOverLifetimeModule_set_z_m2F0D3BC817F95F78D37543F7A54C9CA0D5D87263((&V_0), L_59, NULL);
		// break;
		goto IL_024a;
	}

IL_021c:
	{
		// instance.zMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_60 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_61 = ((ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_60);
		float L_62;
		L_62 = GenericVirtualFuncInvoker1< float, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mA86928BC888E342D2C2644535E3399952F5077ED_RuntimeMethod_var, L_60, L_61);
		SizeOverLifetimeModule_set_zMultiplier_m97864CAC5D1B8936456B33989CCBA3A12870A3F4((&V_0), L_62, NULL);
		// break;
		goto IL_024a;
	}

IL_0230:
	{
		// instance.separateAxes = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_63 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_64 = ((ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_63);
		bool L_65;
		L_65 = GenericVirtualFuncInvoker1< bool, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mFFB70EE53D8CD0255A4E599780F62A3EB1520E83_RuntimeMethod_var, L_63, L_64);
		SizeOverLifetimeModule_set_separateAxes_mC07A349FA5AF44C8937B7DE7ECEEA8F871B13EED((&V_0), L_65, NULL);
		// break;
		goto IL_024a;
	}

IL_0244:
	{
		// reader.Skip();
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_66 = ___reader0;
		NullCheck(L_66);
		VirtualActionInvoker0::Invoke(41 /* System.Void ES3Reader::Skip() */, L_66);
	}

IL_024a:
	{
		// while((propertyName = reader.ReadPropertyName()) != null)
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_67 = ___reader0;
		NullCheck(L_67);
		String_t* L_68;
		L_68 = VirtualFuncInvoker0< String_t* >::Invoke(21 /* System.String ES3Reader::ReadPropertyName() */, L_67);
		String_t* L_69 = L_68;
		V_1 = L_69;
		if (L_69)
		{
			goto IL_000c;
		}
	}
	{
		// }
		return;
	}
}
// System.Void ES3Types.ES3Type_SizeOverLifetimeModule::ReadInto<UnityEngine.ParticleSystem/LimitVelocityOverLifetimeModule>(ES3Reader,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ES3Type_SizeOverLifetimeModule_ReadInto_TisLimitVelocityOverLifetimeModule_tC52CF1434E2639EE5D81DD6BA269FF38CA17D8B1_m0B77217C03E37141685E77BBB1D7082BA34797A7_gshared (ES3Type_SizeOverLifetimeModule_tE76521DF6C9288642AE09CBD10810E97A6038CAF* __this, ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* ___reader0, RuntimeObject* ___obj1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mFFB70EE53D8CD0255A4E599780F62A3EB1520E83_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_m9D6B4042B923127DEA4A2CAA3E35EED37D75B3D0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mA86928BC888E342D2C2644535E3399952F5077ED_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_MinMaxCurve_t1C147718750ACBECE5D2B7F545D2A434A3C5409B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SizeOverLifetimeModule_t6711CE9659123CAA5BFBFDFA9F53174CD979AC0C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral062DB096C728515E033CF8C48A1C1F0B9A79384B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1B024D537329B86AB0DF96B2A714180F442F53E9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2F8690361553406965679AEF125F896BC5FC61F5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3EE5A4671A4E5AEBD31CA5F013A7773DC18ED22B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8C6F88DEE0DFE3513BB8B44A8CF0FEE437F4EFFB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9384C6EF2DA5C0BD5274A0DACFF291D0ABBFD8B1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9CE1604D659135925CCC4DD1F526AFFE42E689F1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9E61658953B4F9BB4A05E3D2D2BC18990BADE934);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBD0DD0004699EF86BF0FC1D161FA3766AF5126C4);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B);
		s_Il2CppMethodInitialized = true;
	}
	SizeOverLifetimeModule_t6711CE9659123CAA5BFBFDFA9F53174CD979AC0C V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	uint32_t V_2 = 0;
	{
		// var instance = (UnityEngine.ParticleSystem.SizeOverLifetimeModule)obj;
		RuntimeObject* L_0 = ___obj1;
		V_0 = ((*(SizeOverLifetimeModule_t6711CE9659123CAA5BFBFDFA9F53174CD979AC0C*)((SizeOverLifetimeModule_t6711CE9659123CAA5BFBFDFA9F53174CD979AC0C*)(SizeOverLifetimeModule_t6711CE9659123CAA5BFBFDFA9F53174CD979AC0C*)UnBox(L_0, SizeOverLifetimeModule_t6711CE9659123CAA5BFBFDFA9F53174CD979AC0C_il2cpp_TypeInfo_var))));
		goto IL_024a;
	}

IL_000c:
	{
		String_t* L_1 = V_1;
		uint32_t L_2;
		L_2 = U3CPrivateImplementationDetailsU3E_ComputeStringHash_m9E43873DE0DF480D27EC1C2AA3C09E74EA77F75D(L_1, NULL);
		V_2 = L_2;
		uint32_t L_3 = V_2;
		if ((!(((uint32_t)L_3) <= ((uint32_t)((int32_t)1479031685)))))
		{
			goto IL_005e;
		}
	}
	{
		uint32_t L_4 = V_2;
		if ((!(((uint32_t)L_4) <= ((uint32_t)((int32_t)597743964)))))
		{
			goto IL_003b;
		}
	}
	{
		uint32_t L_5 = V_2;
		if ((((int32_t)L_5) == ((int32_t)((int32_t)49525662))))
		{
			goto IL_00a1;
		}
	}
	{
		uint32_t L_6 = V_2;
		if ((((int32_t)L_6) == ((int32_t)((int32_t)597743964))))
		{
			goto IL_00b6;
		}
	}
	{
		goto IL_0244;
	}

IL_003b:
	{
		uint32_t L_7 = V_2;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)726266686))))
		{
			goto IL_0149;
		}
	}
	{
		uint32_t L_8 = V_2;
		if ((((int32_t)L_8) == ((int32_t)((int32_t)1105436259))))
		{
			goto IL_00cb;
		}
	}
	{
		uint32_t L_9 = V_2;
		if ((((int32_t)L_9) == ((int32_t)((int32_t)1479031685))))
		{
			goto IL_015e;
		}
	}
	{
		goto IL_0244;
	}

IL_005e:
	{
		uint32_t L_10 = V_2;
		if ((!(((uint32_t)L_10) <= ((uint32_t)((int32_t)-585050980)))))
		{
			goto IL_007e;
		}
	}
	{
		uint32_t L_11 = V_2;
		if ((((int32_t)L_11) == ((int32_t)((int32_t)-1013869429))))
		{
			goto IL_011f;
		}
	}
	{
		uint32_t L_12 = V_2;
		if ((((int32_t)L_12) == ((int32_t)((int32_t)-585050980))))
		{
			goto IL_00f5;
		}
	}
	{
		goto IL_0244;
	}

IL_007e:
	{
		uint32_t L_13 = V_2;
		if ((((int32_t)L_13) == ((int32_t)((int32_t)-66302220))))
		{
			goto IL_010a;
		}
	}
	{
		uint32_t L_14 = V_2;
		if ((((int32_t)L_14) == ((int32_t)((int32_t)-49524601))))
		{
			goto IL_00e0;
		}
	}
	{
		uint32_t L_15 = V_2;
		if ((((int32_t)L_15) == ((int32_t)((int32_t)-15969363))))
		{
			goto IL_0134;
		}
	}
	{
		goto IL_0244;
	}

IL_00a1:
	{
		String_t* L_16 = V_1;
		bool L_17;
		L_17 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_16, _stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B, NULL);
		if (L_17)
		{
			goto IL_0173;
		}
	}
	{
		goto IL_0244;
	}

IL_00b6:
	{
		String_t* L_18 = V_1;
		bool L_19;
		L_19 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_18, _stringLiteral3EE5A4671A4E5AEBD31CA5F013A7773DC18ED22B, NULL);
		if (L_19)
		{
			goto IL_018a;
		}
	}
	{
		goto IL_0244;
	}

IL_00cb:
	{
		String_t* L_20 = V_1;
		bool L_21;
		L_21 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_20, _stringLiteralBD0DD0004699EF86BF0FC1D161FA3766AF5126C4, NULL);
		if (L_21)
		{
			goto IL_01a1;
		}
	}
	{
		goto IL_0244;
	}

IL_00e0:
	{
		String_t* L_22 = V_1;
		bool L_23;
		L_23 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_22, _stringLiteral062DB096C728515E033CF8C48A1C1F0B9A79384B, NULL);
		if (L_23)
		{
			goto IL_01b8;
		}
	}
	{
		goto IL_0244;
	}

IL_00f5:
	{
		String_t* L_24 = V_1;
		bool L_25;
		L_25 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_24, _stringLiteral8C6F88DEE0DFE3513BB8B44A8CF0FEE437F4EFFB, NULL);
		if (L_25)
		{
			goto IL_01cc;
		}
	}
	{
		goto IL_0244;
	}

IL_010a:
	{
		String_t* L_26 = V_1;
		bool L_27;
		L_27 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_26, _stringLiteral9384C6EF2DA5C0BD5274A0DACFF291D0ABBFD8B1, NULL);
		if (L_27)
		{
			goto IL_01e0;
		}
	}
	{
		goto IL_0244;
	}

IL_011f:
	{
		String_t* L_28 = V_1;
		bool L_29;
		L_29 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_28, _stringLiteral9E61658953B4F9BB4A05E3D2D2BC18990BADE934, NULL);
		if (L_29)
		{
			goto IL_01f4;
		}
	}
	{
		goto IL_0244;
	}

IL_0134:
	{
		String_t* L_30 = V_1;
		bool L_31;
		L_31 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_30, _stringLiteral9CE1604D659135925CCC4DD1F526AFFE42E689F1, NULL);
		if (L_31)
		{
			goto IL_0208;
		}
	}
	{
		goto IL_0244;
	}

IL_0149:
	{
		String_t* L_32 = V_1;
		bool L_33;
		L_33 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_32, _stringLiteral2F8690361553406965679AEF125F896BC5FC61F5, NULL);
		if (L_33)
		{
			goto IL_021c;
		}
	}
	{
		goto IL_0244;
	}

IL_015e:
	{
		String_t* L_34 = V_1;
		bool L_35;
		L_35 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_34, _stringLiteral1B024D537329B86AB0DF96B2A714180F442F53E9, NULL);
		if (L_35)
		{
			goto IL_0230;
		}
	}
	{
		goto IL_0244;
	}

IL_0173:
	{
		// instance.enabled = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_36 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_37 = ((ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_36);
		bool L_38;
		L_38 = GenericVirtualFuncInvoker1< bool, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mFFB70EE53D8CD0255A4E599780F62A3EB1520E83_RuntimeMethod_var, L_36, L_37);
		SizeOverLifetimeModule_set_enabled_mC45334E7AC31CCBE1CFA531D28D29E1BD38D5D6F((&V_0), L_38, NULL);
		// break;
		goto IL_024a;
	}

IL_018a:
	{
		// instance.size = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_39 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_40 = ((ES3Type_MinMaxCurve_t1C147718750ACBECE5D2B7F545D2A434A3C5409B_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t1C147718750ACBECE5D2B7F545D2A434A3C5409B_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_39);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_41;
		L_41 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_m9D6B4042B923127DEA4A2CAA3E35EED37D75B3D0_RuntimeMethod_var, L_39, L_40);
		SizeOverLifetimeModule_set_size_m1D5987F4FB9E948DEAA5E3D8FB21D1AFEE15EBE5((&V_0), L_41, NULL);
		// break;
		goto IL_024a;
	}

IL_01a1:
	{
		// instance.sizeMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_42 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_43 = ((ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_42);
		float L_44;
		L_44 = GenericVirtualFuncInvoker1< float, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mA86928BC888E342D2C2644535E3399952F5077ED_RuntimeMethod_var, L_42, L_43);
		SizeOverLifetimeModule_set_sizeMultiplier_mE97DDCFF7A3065E4E1709EE66C8A524268A757EF((&V_0), L_44, NULL);
		// break;
		goto IL_024a;
	}

IL_01b8:
	{
		// instance.x = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_45 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_46 = ((ES3Type_MinMaxCurve_t1C147718750ACBECE5D2B7F545D2A434A3C5409B_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t1C147718750ACBECE5D2B7F545D2A434A3C5409B_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_45);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_47;
		L_47 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_m9D6B4042B923127DEA4A2CAA3E35EED37D75B3D0_RuntimeMethod_var, L_45, L_46);
		SizeOverLifetimeModule_set_x_m7B791B7E4BE55CC4CE1FB815C2E09DBAB05F027A((&V_0), L_47, NULL);
		// break;
		goto IL_024a;
	}

IL_01cc:
	{
		// instance.xMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_48 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_49 = ((ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_48);
		float L_50;
		L_50 = GenericVirtualFuncInvoker1< float, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mA86928BC888E342D2C2644535E3399952F5077ED_RuntimeMethod_var, L_48, L_49);
		SizeOverLifetimeModule_set_xMultiplier_mD17EFB03D20765192F5772A17573D777DB261910((&V_0), L_50, NULL);
		// break;
		goto IL_024a;
	}

IL_01e0:
	{
		// instance.y = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_51 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_52 = ((ES3Type_MinMaxCurve_t1C147718750ACBECE5D2B7F545D2A434A3C5409B_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t1C147718750ACBECE5D2B7F545D2A434A3C5409B_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_51);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_53;
		L_53 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_m9D6B4042B923127DEA4A2CAA3E35EED37D75B3D0_RuntimeMethod_var, L_51, L_52);
		SizeOverLifetimeModule_set_y_mB9138A8037FF0084FE6DED3DC9D81E0D926C6601((&V_0), L_53, NULL);
		// break;
		goto IL_024a;
	}

IL_01f4:
	{
		// instance.yMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_54 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_55 = ((ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_54);
		float L_56;
		L_56 = GenericVirtualFuncInvoker1< float, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mA86928BC888E342D2C2644535E3399952F5077ED_RuntimeMethod_var, L_54, L_55);
		SizeOverLifetimeModule_set_yMultiplier_mAFF1869E535B324384AB01214B246819306439D4((&V_0), L_56, NULL);
		// break;
		goto IL_024a;
	}

IL_0208:
	{
		// instance.z = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_57 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_58 = ((ES3Type_MinMaxCurve_t1C147718750ACBECE5D2B7F545D2A434A3C5409B_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t1C147718750ACBECE5D2B7F545D2A434A3C5409B_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_57);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_59;
		L_59 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_m9D6B4042B923127DEA4A2CAA3E35EED37D75B3D0_RuntimeMethod_var, L_57, L_58);
		SizeOverLifetimeModule_set_z_m2F0D3BC817F95F78D37543F7A54C9CA0D5D87263((&V_0), L_59, NULL);
		// break;
		goto IL_024a;
	}

IL_021c:
	{
		// instance.zMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_60 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_61 = ((ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_60);
		float L_62;
		L_62 = GenericVirtualFuncInvoker1< float, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mA86928BC888E342D2C2644535E3399952F5077ED_RuntimeMethod_var, L_60, L_61);
		SizeOverLifetimeModule_set_zMultiplier_m97864CAC5D1B8936456B33989CCBA3A12870A3F4((&V_0), L_62, NULL);
		// break;
		goto IL_024a;
	}

IL_0230:
	{
		// instance.separateAxes = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_63 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_64 = ((ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_63);
		bool L_65;
		L_65 = GenericVirtualFuncInvoker1< bool, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mFFB70EE53D8CD0255A4E599780F62A3EB1520E83_RuntimeMethod_var, L_63, L_64);
		SizeOverLifetimeModule_set_separateAxes_mC07A349FA5AF44C8937B7DE7ECEEA8F871B13EED((&V_0), L_65, NULL);
		// break;
		goto IL_024a;
	}

IL_0244:
	{
		// reader.Skip();
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_66 = ___reader0;
		NullCheck(L_66);
		VirtualActionInvoker0::Invoke(41 /* System.Void ES3Reader::Skip() */, L_66);
	}

IL_024a:
	{
		// while((propertyName = reader.ReadPropertyName()) != null)
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_67 = ___reader0;
		NullCheck(L_67);
		String_t* L_68;
		L_68 = VirtualFuncInvoker0< String_t* >::Invoke(21 /* System.String ES3Reader::ReadPropertyName() */, L_67);
		String_t* L_69 = L_68;
		V_1 = L_69;
		if (L_69)
		{
			goto IL_000c;
		}
	}
	{
		// }
		return;
	}
}
// System.Void ES3Types.ES3Type_SizeOverLifetimeModule::ReadInto<UnityEngine.ParticleSystem/MainModule>(ES3Reader,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ES3Type_SizeOverLifetimeModule_ReadInto_TisMainModule_tC7ECD8330C14B0808478A748048988A6085CE2A9_m3B44CE5D16341FFB525D5462144C5693DE69D476_gshared (ES3Type_SizeOverLifetimeModule_tE76521DF6C9288642AE09CBD10810E97A6038CAF* __this, ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* ___reader0, RuntimeObject* ___obj1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mFFB70EE53D8CD0255A4E599780F62A3EB1520E83_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_m9D6B4042B923127DEA4A2CAA3E35EED37D75B3D0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mA86928BC888E342D2C2644535E3399952F5077ED_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_MinMaxCurve_t1C147718750ACBECE5D2B7F545D2A434A3C5409B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SizeOverLifetimeModule_t6711CE9659123CAA5BFBFDFA9F53174CD979AC0C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral062DB096C728515E033CF8C48A1C1F0B9A79384B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1B024D537329B86AB0DF96B2A714180F442F53E9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2F8690361553406965679AEF125F896BC5FC61F5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3EE5A4671A4E5AEBD31CA5F013A7773DC18ED22B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8C6F88DEE0DFE3513BB8B44A8CF0FEE437F4EFFB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9384C6EF2DA5C0BD5274A0DACFF291D0ABBFD8B1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9CE1604D659135925CCC4DD1F526AFFE42E689F1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9E61658953B4F9BB4A05E3D2D2BC18990BADE934);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBD0DD0004699EF86BF0FC1D161FA3766AF5126C4);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B);
		s_Il2CppMethodInitialized = true;
	}
	SizeOverLifetimeModule_t6711CE9659123CAA5BFBFDFA9F53174CD979AC0C V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	uint32_t V_2 = 0;
	{
		// var instance = (UnityEngine.ParticleSystem.SizeOverLifetimeModule)obj;
		RuntimeObject* L_0 = ___obj1;
		V_0 = ((*(SizeOverLifetimeModule_t6711CE9659123CAA5BFBFDFA9F53174CD979AC0C*)((SizeOverLifetimeModule_t6711CE9659123CAA5BFBFDFA9F53174CD979AC0C*)(SizeOverLifetimeModule_t6711CE9659123CAA5BFBFDFA9F53174CD979AC0C*)UnBox(L_0, SizeOverLifetimeModule_t6711CE9659123CAA5BFBFDFA9F53174CD979AC0C_il2cpp_TypeInfo_var))));
		goto IL_024a;
	}

IL_000c:
	{
		String_t* L_1 = V_1;
		uint32_t L_2;
		L_2 = U3CPrivateImplementationDetailsU3E_ComputeStringHash_m9E43873DE0DF480D27EC1C2AA3C09E74EA77F75D(L_1, NULL);
		V_2 = L_2;
		uint32_t L_3 = V_2;
		if ((!(((uint32_t)L_3) <= ((uint32_t)((int32_t)1479031685)))))
		{
			goto IL_005e;
		}
	}
	{
		uint32_t L_4 = V_2;
		if ((!(((uint32_t)L_4) <= ((uint32_t)((int32_t)597743964)))))
		{
			goto IL_003b;
		}
	}
	{
		uint32_t L_5 = V_2;
		if ((((int32_t)L_5) == ((int32_t)((int32_t)49525662))))
		{
			goto IL_00a1;
		}
	}
	{
		uint32_t L_6 = V_2;
		if ((((int32_t)L_6) == ((int32_t)((int32_t)597743964))))
		{
			goto IL_00b6;
		}
	}
	{
		goto IL_0244;
	}

IL_003b:
	{
		uint32_t L_7 = V_2;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)726266686))))
		{
			goto IL_0149;
		}
	}
	{
		uint32_t L_8 = V_2;
		if ((((int32_t)L_8) == ((int32_t)((int32_t)1105436259))))
		{
			goto IL_00cb;
		}
	}
	{
		uint32_t L_9 = V_2;
		if ((((int32_t)L_9) == ((int32_t)((int32_t)1479031685))))
		{
			goto IL_015e;
		}
	}
	{
		goto IL_0244;
	}

IL_005e:
	{
		uint32_t L_10 = V_2;
		if ((!(((uint32_t)L_10) <= ((uint32_t)((int32_t)-585050980)))))
		{
			goto IL_007e;
		}
	}
	{
		uint32_t L_11 = V_2;
		if ((((int32_t)L_11) == ((int32_t)((int32_t)-1013869429))))
		{
			goto IL_011f;
		}
	}
	{
		uint32_t L_12 = V_2;
		if ((((int32_t)L_12) == ((int32_t)((int32_t)-585050980))))
		{
			goto IL_00f5;
		}
	}
	{
		goto IL_0244;
	}

IL_007e:
	{
		uint32_t L_13 = V_2;
		if ((((int32_t)L_13) == ((int32_t)((int32_t)-66302220))))
		{
			goto IL_010a;
		}
	}
	{
		uint32_t L_14 = V_2;
		if ((((int32_t)L_14) == ((int32_t)((int32_t)-49524601))))
		{
			goto IL_00e0;
		}
	}
	{
		uint32_t L_15 = V_2;
		if ((((int32_t)L_15) == ((int32_t)((int32_t)-15969363))))
		{
			goto IL_0134;
		}
	}
	{
		goto IL_0244;
	}

IL_00a1:
	{
		String_t* L_16 = V_1;
		bool L_17;
		L_17 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_16, _stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B, NULL);
		if (L_17)
		{
			goto IL_0173;
		}
	}
	{
		goto IL_0244;
	}

IL_00b6:
	{
		String_t* L_18 = V_1;
		bool L_19;
		L_19 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_18, _stringLiteral3EE5A4671A4E5AEBD31CA5F013A7773DC18ED22B, NULL);
		if (L_19)
		{
			goto IL_018a;
		}
	}
	{
		goto IL_0244;
	}

IL_00cb:
	{
		String_t* L_20 = V_1;
		bool L_21;
		L_21 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_20, _stringLiteralBD0DD0004699EF86BF0FC1D161FA3766AF5126C4, NULL);
		if (L_21)
		{
			goto IL_01a1;
		}
	}
	{
		goto IL_0244;
	}

IL_00e0:
	{
		String_t* L_22 = V_1;
		bool L_23;
		L_23 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_22, _stringLiteral062DB096C728515E033CF8C48A1C1F0B9A79384B, NULL);
		if (L_23)
		{
			goto IL_01b8;
		}
	}
	{
		goto IL_0244;
	}

IL_00f5:
	{
		String_t* L_24 = V_1;
		bool L_25;
		L_25 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_24, _stringLiteral8C6F88DEE0DFE3513BB8B44A8CF0FEE437F4EFFB, NULL);
		if (L_25)
		{
			goto IL_01cc;
		}
	}
	{
		goto IL_0244;
	}

IL_010a:
	{
		String_t* L_26 = V_1;
		bool L_27;
		L_27 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_26, _stringLiteral9384C6EF2DA5C0BD5274A0DACFF291D0ABBFD8B1, NULL);
		if (L_27)
		{
			goto IL_01e0;
		}
	}
	{
		goto IL_0244;
	}

IL_011f:
	{
		String_t* L_28 = V_1;
		bool L_29;
		L_29 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_28, _stringLiteral9E61658953B4F9BB4A05E3D2D2BC18990BADE934, NULL);
		if (L_29)
		{
			goto IL_01f4;
		}
	}
	{
		goto IL_0244;
	}

IL_0134:
	{
		String_t* L_30 = V_1;
		bool L_31;
		L_31 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_30, _stringLiteral9CE1604D659135925CCC4DD1F526AFFE42E689F1, NULL);
		if (L_31)
		{
			goto IL_0208;
		}
	}
	{
		goto IL_0244;
	}

IL_0149:
	{
		String_t* L_32 = V_1;
		bool L_33;
		L_33 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_32, _stringLiteral2F8690361553406965679AEF125F896BC5FC61F5, NULL);
		if (L_33)
		{
			goto IL_021c;
		}
	}
	{
		goto IL_0244;
	}

IL_015e:
	{
		String_t* L_34 = V_1;
		bool L_35;
		L_35 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_34, _stringLiteral1B024D537329B86AB0DF96B2A714180F442F53E9, NULL);
		if (L_35)
		{
			goto IL_0230;
		}
	}
	{
		goto IL_0244;
	}

IL_0173:
	{
		// instance.enabled = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_36 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_37 = ((ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_36);
		bool L_38;
		L_38 = GenericVirtualFuncInvoker1< bool, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mFFB70EE53D8CD0255A4E599780F62A3EB1520E83_RuntimeMethod_var, L_36, L_37);
		SizeOverLifetimeModule_set_enabled_mC45334E7AC31CCBE1CFA531D28D29E1BD38D5D6F((&V_0), L_38, NULL);
		// break;
		goto IL_024a;
	}

IL_018a:
	{
		// instance.size = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_39 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_40 = ((ES3Type_MinMaxCurve_t1C147718750ACBECE5D2B7F545D2A434A3C5409B_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t1C147718750ACBECE5D2B7F545D2A434A3C5409B_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_39);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_41;
		L_41 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_m9D6B4042B923127DEA4A2CAA3E35EED37D75B3D0_RuntimeMethod_var, L_39, L_40);
		SizeOverLifetimeModule_set_size_m1D5987F4FB9E948DEAA5E3D8FB21D1AFEE15EBE5((&V_0), L_41, NULL);
		// break;
		goto IL_024a;
	}

IL_01a1:
	{
		// instance.sizeMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_42 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_43 = ((ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_42);
		float L_44;
		L_44 = GenericVirtualFuncInvoker1< float, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mA86928BC888E342D2C2644535E3399952F5077ED_RuntimeMethod_var, L_42, L_43);
		SizeOverLifetimeModule_set_sizeMultiplier_mE97DDCFF7A3065E4E1709EE66C8A524268A757EF((&V_0), L_44, NULL);
		// break;
		goto IL_024a;
	}

IL_01b8:
	{
		// instance.x = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_45 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_46 = ((ES3Type_MinMaxCurve_t1C147718750ACBECE5D2B7F545D2A434A3C5409B_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t1C147718750ACBECE5D2B7F545D2A434A3C5409B_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_45);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_47;
		L_47 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_m9D6B4042B923127DEA4A2CAA3E35EED37D75B3D0_RuntimeMethod_var, L_45, L_46);
		SizeOverLifetimeModule_set_x_m7B791B7E4BE55CC4CE1FB815C2E09DBAB05F027A((&V_0), L_47, NULL);
		// break;
		goto IL_024a;
	}

IL_01cc:
	{
		// instance.xMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_48 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_49 = ((ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_48);
		float L_50;
		L_50 = GenericVirtualFuncInvoker1< float, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mA86928BC888E342D2C2644535E3399952F5077ED_RuntimeMethod_var, L_48, L_49);
		SizeOverLifetimeModule_set_xMultiplier_mD17EFB03D20765192F5772A17573D777DB261910((&V_0), L_50, NULL);
		// break;
		goto IL_024a;
	}

IL_01e0:
	{
		// instance.y = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_51 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_52 = ((ES3Type_MinMaxCurve_t1C147718750ACBECE5D2B7F545D2A434A3C5409B_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t1C147718750ACBECE5D2B7F545D2A434A3C5409B_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_51);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_53;
		L_53 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_m9D6B4042B923127DEA4A2CAA3E35EED37D75B3D0_RuntimeMethod_var, L_51, L_52);
		SizeOverLifetimeModule_set_y_mB9138A8037FF0084FE6DED3DC9D81E0D926C6601((&V_0), L_53, NULL);
		// break;
		goto IL_024a;
	}

IL_01f4:
	{
		// instance.yMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_54 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_55 = ((ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_54);
		float L_56;
		L_56 = GenericVirtualFuncInvoker1< float, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mA86928BC888E342D2C2644535E3399952F5077ED_RuntimeMethod_var, L_54, L_55);
		SizeOverLifetimeModule_set_yMultiplier_mAFF1869E535B324384AB01214B246819306439D4((&V_0), L_56, NULL);
		// break;
		goto IL_024a;
	}

IL_0208:
	{
		// instance.z = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_57 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_58 = ((ES3Type_MinMaxCurve_t1C147718750ACBECE5D2B7F545D2A434A3C5409B_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t1C147718750ACBECE5D2B7F545D2A434A3C5409B_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_57);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_59;
		L_59 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_m9D6B4042B923127DEA4A2CAA3E35EED37D75B3D0_RuntimeMethod_var, L_57, L_58);
		SizeOverLifetimeModule_set_z_m2F0D3BC817F95F78D37543F7A54C9CA0D5D87263((&V_0), L_59, NULL);
		// break;
		goto IL_024a;
	}

IL_021c:
	{
		// instance.zMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_60 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_61 = ((ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_60);
		float L_62;
		L_62 = GenericVirtualFuncInvoker1< float, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mA86928BC888E342D2C2644535E3399952F5077ED_RuntimeMethod_var, L_60, L_61);
		SizeOverLifetimeModule_set_zMultiplier_m97864CAC5D1B8936456B33989CCBA3A12870A3F4((&V_0), L_62, NULL);
		// break;
		goto IL_024a;
	}

IL_0230:
	{
		// instance.separateAxes = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_63 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_64 = ((ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_63);
		bool L_65;
		L_65 = GenericVirtualFuncInvoker1< bool, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mFFB70EE53D8CD0255A4E599780F62A3EB1520E83_RuntimeMethod_var, L_63, L_64);
		SizeOverLifetimeModule_set_separateAxes_mC07A349FA5AF44C8937B7DE7ECEEA8F871B13EED((&V_0), L_65, NULL);
		// break;
		goto IL_024a;
	}

IL_0244:
	{
		// reader.Skip();
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_66 = ___reader0;
		NullCheck(L_66);
		VirtualActionInvoker0::Invoke(41 /* System.Void ES3Reader::Skip() */, L_66);
	}

IL_024a:
	{
		// while((propertyName = reader.ReadPropertyName()) != null)
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_67 = ___reader0;
		NullCheck(L_67);
		String_t* L_68;
		L_68 = VirtualFuncInvoker0< String_t* >::Invoke(21 /* System.String ES3Reader::ReadPropertyName() */, L_67);
		String_t* L_69 = L_68;
		V_1 = L_69;
		if (L_69)
		{
			goto IL_000c;
		}
	}
	{
		// }
		return;
	}
}
// System.Void ES3Types.ES3Type_SizeOverLifetimeModule::ReadInto<UnityEngine.ParticleSystem/NoiseModule>(ES3Reader,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ES3Type_SizeOverLifetimeModule_ReadInto_TisNoiseModule_tF8D6CB544A887C0C93D05A228B65E41DBD1F3AE0_m0C9C6AC57CFDA60BD6C8E01FD18C3971CCD5F4A6_gshared (ES3Type_SizeOverLifetimeModule_tE76521DF6C9288642AE09CBD10810E97A6038CAF* __this, ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* ___reader0, RuntimeObject* ___obj1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mFFB70EE53D8CD0255A4E599780F62A3EB1520E83_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_m9D6B4042B923127DEA4A2CAA3E35EED37D75B3D0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mA86928BC888E342D2C2644535E3399952F5077ED_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_MinMaxCurve_t1C147718750ACBECE5D2B7F545D2A434A3C5409B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SizeOverLifetimeModule_t6711CE9659123CAA5BFBFDFA9F53174CD979AC0C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral062DB096C728515E033CF8C48A1C1F0B9A79384B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1B024D537329B86AB0DF96B2A714180F442F53E9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2F8690361553406965679AEF125F896BC5FC61F5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3EE5A4671A4E5AEBD31CA5F013A7773DC18ED22B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8C6F88DEE0DFE3513BB8B44A8CF0FEE437F4EFFB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9384C6EF2DA5C0BD5274A0DACFF291D0ABBFD8B1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9CE1604D659135925CCC4DD1F526AFFE42E689F1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9E61658953B4F9BB4A05E3D2D2BC18990BADE934);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBD0DD0004699EF86BF0FC1D161FA3766AF5126C4);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B);
		s_Il2CppMethodInitialized = true;
	}
	SizeOverLifetimeModule_t6711CE9659123CAA5BFBFDFA9F53174CD979AC0C V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	uint32_t V_2 = 0;
	{
		// var instance = (UnityEngine.ParticleSystem.SizeOverLifetimeModule)obj;
		RuntimeObject* L_0 = ___obj1;
		V_0 = ((*(SizeOverLifetimeModule_t6711CE9659123CAA5BFBFDFA9F53174CD979AC0C*)((SizeOverLifetimeModule_t6711CE9659123CAA5BFBFDFA9F53174CD979AC0C*)(SizeOverLifetimeModule_t6711CE9659123CAA5BFBFDFA9F53174CD979AC0C*)UnBox(L_0, SizeOverLifetimeModule_t6711CE9659123CAA5BFBFDFA9F53174CD979AC0C_il2cpp_TypeInfo_var))));
		goto IL_024a;
	}

IL_000c:
	{
		String_t* L_1 = V_1;
		uint32_t L_2;
		L_2 = U3CPrivateImplementationDetailsU3E_ComputeStringHash_m9E43873DE0DF480D27EC1C2AA3C09E74EA77F75D(L_1, NULL);
		V_2 = L_2;
		uint32_t L_3 = V_2;
		if ((!(((uint32_t)L_3) <= ((uint32_t)((int32_t)1479031685)))))
		{
			goto IL_005e;
		}
	}
	{
		uint32_t L_4 = V_2;
		if ((!(((uint32_t)L_4) <= ((uint32_t)((int32_t)597743964)))))
		{
			goto IL_003b;
		}
	}
	{
		uint32_t L_5 = V_2;
		if ((((int32_t)L_5) == ((int32_t)((int32_t)49525662))))
		{
			goto IL_00a1;
		}
	}
	{
		uint32_t L_6 = V_2;
		if ((((int32_t)L_6) == ((int32_t)((int32_t)597743964))))
		{
			goto IL_00b6;
		}
	}
	{
		goto IL_0244;
	}

IL_003b:
	{
		uint32_t L_7 = V_2;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)726266686))))
		{
			goto IL_0149;
		}
	}
	{
		uint32_t L_8 = V_2;
		if ((((int32_t)L_8) == ((int32_t)((int32_t)1105436259))))
		{
			goto IL_00cb;
		}
	}
	{
		uint32_t L_9 = V_2;
		if ((((int32_t)L_9) == ((int32_t)((int32_t)1479031685))))
		{
			goto IL_015e;
		}
	}
	{
		goto IL_0244;
	}

IL_005e:
	{
		uint32_t L_10 = V_2;
		if ((!(((uint32_t)L_10) <= ((uint32_t)((int32_t)-585050980)))))
		{
			goto IL_007e;
		}
	}
	{
		uint32_t L_11 = V_2;
		if ((((int32_t)L_11) == ((int32_t)((int32_t)-1013869429))))
		{
			goto IL_011f;
		}
	}
	{
		uint32_t L_12 = V_2;
		if ((((int32_t)L_12) == ((int32_t)((int32_t)-585050980))))
		{
			goto IL_00f5;
		}
	}
	{
		goto IL_0244;
	}

IL_007e:
	{
		uint32_t L_13 = V_2;
		if ((((int32_t)L_13) == ((int32_t)((int32_t)-66302220))))
		{
			goto IL_010a;
		}
	}
	{
		uint32_t L_14 = V_2;
		if ((((int32_t)L_14) == ((int32_t)((int32_t)-49524601))))
		{
			goto IL_00e0;
		}
	}
	{
		uint32_t L_15 = V_2;
		if ((((int32_t)L_15) == ((int32_t)((int32_t)-15969363))))
		{
			goto IL_0134;
		}
	}
	{
		goto IL_0244;
	}

IL_00a1:
	{
		String_t* L_16 = V_1;
		bool L_17;
		L_17 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_16, _stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B, NULL);
		if (L_17)
		{
			goto IL_0173;
		}
	}
	{
		goto IL_0244;
	}

IL_00b6:
	{
		String_t* L_18 = V_1;
		bool L_19;
		L_19 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_18, _stringLiteral3EE5A4671A4E5AEBD31CA5F013A7773DC18ED22B, NULL);
		if (L_19)
		{
			goto IL_018a;
		}
	}
	{
		goto IL_0244;
	}

IL_00cb:
	{
		String_t* L_20 = V_1;
		bool L_21;
		L_21 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_20, _stringLiteralBD0DD0004699EF86BF0FC1D161FA3766AF5126C4, NULL);
		if (L_21)
		{
			goto IL_01a1;
		}
	}
	{
		goto IL_0244;
	}

IL_00e0:
	{
		String_t* L_22 = V_1;
		bool L_23;
		L_23 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_22, _stringLiteral062DB096C728515E033CF8C48A1C1F0B9A79384B, NULL);
		if (L_23)
		{
			goto IL_01b8;
		}
	}
	{
		goto IL_0244;
	}

IL_00f5:
	{
		String_t* L_24 = V_1;
		bool L_25;
		L_25 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_24, _stringLiteral8C6F88DEE0DFE3513BB8B44A8CF0FEE437F4EFFB, NULL);
		if (L_25)
		{
			goto IL_01cc;
		}
	}
	{
		goto IL_0244;
	}

IL_010a:
	{
		String_t* L_26 = V_1;
		bool L_27;
		L_27 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_26, _stringLiteral9384C6EF2DA5C0BD5274A0DACFF291D0ABBFD8B1, NULL);
		if (L_27)
		{
			goto IL_01e0;
		}
	}
	{
		goto IL_0244;
	}

IL_011f:
	{
		String_t* L_28 = V_1;
		bool L_29;
		L_29 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_28, _stringLiteral9E61658953B4F9BB4A05E3D2D2BC18990BADE934, NULL);
		if (L_29)
		{
			goto IL_01f4;
		}
	}
	{
		goto IL_0244;
	}

IL_0134:
	{
		String_t* L_30 = V_1;
		bool L_31;
		L_31 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_30, _stringLiteral9CE1604D659135925CCC4DD1F526AFFE42E689F1, NULL);
		if (L_31)
		{
			goto IL_0208;
		}
	}
	{
		goto IL_0244;
	}

IL_0149:
	{
		String_t* L_32 = V_1;
		bool L_33;
		L_33 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_32, _stringLiteral2F8690361553406965679AEF125F896BC5FC61F5, NULL);
		if (L_33)
		{
			goto IL_021c;
		}
	}
	{
		goto IL_0244;
	}

IL_015e:
	{
		String_t* L_34 = V_1;
		bool L_35;
		L_35 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_34, _stringLiteral1B024D537329B86AB0DF96B2A714180F442F53E9, NULL);
		if (L_35)
		{
			goto IL_0230;
		}
	}
	{
		goto IL_0244;
	}

IL_0173:
	{
		// instance.enabled = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_36 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_37 = ((ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_36);
		bool L_38;
		L_38 = GenericVirtualFuncInvoker1< bool, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mFFB70EE53D8CD0255A4E599780F62A3EB1520E83_RuntimeMethod_var, L_36, L_37);
		SizeOverLifetimeModule_set_enabled_mC45334E7AC31CCBE1CFA531D28D29E1BD38D5D6F((&V_0), L_38, NULL);
		// break;
		goto IL_024a;
	}

IL_018a:
	{
		// instance.size = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_39 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_40 = ((ES3Type_MinMaxCurve_t1C147718750ACBECE5D2B7F545D2A434A3C5409B_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t1C147718750ACBECE5D2B7F545D2A434A3C5409B_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_39);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_41;
		L_41 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_m9D6B4042B923127DEA4A2CAA3E35EED37D75B3D0_RuntimeMethod_var, L_39, L_40);
		SizeOverLifetimeModule_set_size_m1D5987F4FB9E948DEAA5E3D8FB21D1AFEE15EBE5((&V_0), L_41, NULL);
		// break;
		goto IL_024a;
	}

IL_01a1:
	{
		// instance.sizeMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_42 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_43 = ((ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_42);
		float L_44;
		L_44 = GenericVirtualFuncInvoker1< float, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mA86928BC888E342D2C2644535E3399952F5077ED_RuntimeMethod_var, L_42, L_43);
		SizeOverLifetimeModule_set_sizeMultiplier_mE97DDCFF7A3065E4E1709EE66C8A524268A757EF((&V_0), L_44, NULL);
		// break;
		goto IL_024a;
	}

IL_01b8:
	{
		// instance.x = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_45 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_46 = ((ES3Type_MinMaxCurve_t1C147718750ACBECE5D2B7F545D2A434A3C5409B_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t1C147718750ACBECE5D2B7F545D2A434A3C5409B_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_45);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_47;
		L_47 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_m9D6B4042B923127DEA4A2CAA3E35EED37D75B3D0_RuntimeMethod_var, L_45, L_46);
		SizeOverLifetimeModule_set_x_m7B791B7E4BE55CC4CE1FB815C2E09DBAB05F027A((&V_0), L_47, NULL);
		// break;
		goto IL_024a;
	}

IL_01cc:
	{
		// instance.xMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_48 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_49 = ((ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_48);
		float L_50;
		L_50 = GenericVirtualFuncInvoker1< float, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mA86928BC888E342D2C2644535E3399952F5077ED_RuntimeMethod_var, L_48, L_49);
		SizeOverLifetimeModule_set_xMultiplier_mD17EFB03D20765192F5772A17573D777DB261910((&V_0), L_50, NULL);
		// break;
		goto IL_024a;
	}

IL_01e0:
	{
		// instance.y = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_51 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_52 = ((ES3Type_MinMaxCurve_t1C147718750ACBECE5D2B7F545D2A434A3C5409B_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t1C147718750ACBECE5D2B7F545D2A434A3C5409B_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_51);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_53;
		L_53 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_m9D6B4042B923127DEA4A2CAA3E35EED37D75B3D0_RuntimeMethod_var, L_51, L_52);
		SizeOverLifetimeModule_set_y_mB9138A8037FF0084FE6DED3DC9D81E0D926C6601((&V_0), L_53, NULL);
		// break;
		goto IL_024a;
	}

IL_01f4:
	{
		// instance.yMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_54 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_55 = ((ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_54);
		float L_56;
		L_56 = GenericVirtualFuncInvoker1< float, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mA86928BC888E342D2C2644535E3399952F5077ED_RuntimeMethod_var, L_54, L_55);
		SizeOverLifetimeModule_set_yMultiplier_mAFF1869E535B324384AB01214B246819306439D4((&V_0), L_56, NULL);
		// break;
		goto IL_024a;
	}

IL_0208:
	{
		// instance.z = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_57 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_58 = ((ES3Type_MinMaxCurve_t1C147718750ACBECE5D2B7F545D2A434A3C5409B_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t1C147718750ACBECE5D2B7F545D2A434A3C5409B_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_57);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_59;
		L_59 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_m9D6B4042B923127DEA4A2CAA3E35EED37D75B3D0_RuntimeMethod_var, L_57, L_58);
		SizeOverLifetimeModule_set_z_m2F0D3BC817F95F78D37543F7A54C9CA0D5D87263((&V_0), L_59, NULL);
		// break;
		goto IL_024a;
	}

IL_021c:
	{
		// instance.zMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_60 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_61 = ((ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_60);
		float L_62;
		L_62 = GenericVirtualFuncInvoker1< float, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mA86928BC888E342D2C2644535E3399952F5077ED_RuntimeMethod_var, L_60, L_61);
		SizeOverLifetimeModule_set_zMultiplier_m97864CAC5D1B8936456B33989CCBA3A12870A3F4((&V_0), L_62, NULL);
		// break;
		goto IL_024a;
	}

IL_0230:
	{
		// instance.separateAxes = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_63 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_64 = ((ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_63);
		bool L_65;
		L_65 = GenericVirtualFuncInvoker1< bool, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mFFB70EE53D8CD0255A4E599780F62A3EB1520E83_RuntimeMethod_var, L_63, L_64);
		SizeOverLifetimeModule_set_separateAxes_mC07A349FA5AF44C8937B7DE7ECEEA8F871B13EED((&V_0), L_65, NULL);
		// break;
		goto IL_024a;
	}

IL_0244:
	{
		// reader.Skip();
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_66 = ___reader0;
		NullCheck(L_66);
		VirtualActionInvoker0::Invoke(41 /* System.Void ES3Reader::Skip() */, L_66);
	}

IL_024a:
	{
		// while((propertyName = reader.ReadPropertyName()) != null)
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_67 = ___reader0;
		NullCheck(L_67);
		String_t* L_68;
		L_68 = VirtualFuncInvoker0< String_t* >::Invoke(21 /* System.String ES3Reader::ReadPropertyName() */, L_67);
		String_t* L_69 = L_68;
		V_1 = L_69;
		if (L_69)
		{
			goto IL_000c;
		}
	}
	{
		// }
		return;
	}
}
// System.Void ES3Types.ES3Type_SizeOverLifetimeModule::ReadInto<UnityEngine.ParticleSystem/RotationBySpeedModule>(ES3Reader,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ES3Type_SizeOverLifetimeModule_ReadInto_TisRotationBySpeedModule_tBCB7E7C1B402D1492310016D5F8FBBA4C15C26A6_m33E91E34885B637FEF77C8D952F8A48A76F82DDC_gshared (ES3Type_SizeOverLifetimeModule_tE76521DF6C9288642AE09CBD10810E97A6038CAF* __this, ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* ___reader0, RuntimeObject* ___obj1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mFFB70EE53D8CD0255A4E599780F62A3EB1520E83_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_m9D6B4042B923127DEA4A2CAA3E35EED37D75B3D0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mA86928BC888E342D2C2644535E3399952F5077ED_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_MinMaxCurve_t1C147718750ACBECE5D2B7F545D2A434A3C5409B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SizeOverLifetimeModule_t6711CE9659123CAA5BFBFDFA9F53174CD979AC0C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral062DB096C728515E033CF8C48A1C1F0B9A79384B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1B024D537329B86AB0DF96B2A714180F442F53E9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2F8690361553406965679AEF125F896BC5FC61F5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3EE5A4671A4E5AEBD31CA5F013A7773DC18ED22B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8C6F88DEE0DFE3513BB8B44A8CF0FEE437F4EFFB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9384C6EF2DA5C0BD5274A0DACFF291D0ABBFD8B1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9CE1604D659135925CCC4DD1F526AFFE42E689F1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9E61658953B4F9BB4A05E3D2D2BC18990BADE934);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBD0DD0004699EF86BF0FC1D161FA3766AF5126C4);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B);
		s_Il2CppMethodInitialized = true;
	}
	SizeOverLifetimeModule_t6711CE9659123CAA5BFBFDFA9F53174CD979AC0C V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	uint32_t V_2 = 0;
	{
		// var instance = (UnityEngine.ParticleSystem.SizeOverLifetimeModule)obj;
		RuntimeObject* L_0 = ___obj1;
		V_0 = ((*(SizeOverLifetimeModule_t6711CE9659123CAA5BFBFDFA9F53174CD979AC0C*)((SizeOverLifetimeModule_t6711CE9659123CAA5BFBFDFA9F53174CD979AC0C*)(SizeOverLifetimeModule_t6711CE9659123CAA5BFBFDFA9F53174CD979AC0C*)UnBox(L_0, SizeOverLifetimeModule_t6711CE9659123CAA5BFBFDFA9F53174CD979AC0C_il2cpp_TypeInfo_var))));
		goto IL_024a;
	}

IL_000c:
	{
		String_t* L_1 = V_1;
		uint32_t L_2;
		L_2 = U3CPrivateImplementationDetailsU3E_ComputeStringHash_m9E43873DE0DF480D27EC1C2AA3C09E74EA77F75D(L_1, NULL);
		V_2 = L_2;
		uint32_t L_3 = V_2;
		if ((!(((uint32_t)L_3) <= ((uint32_t)((int32_t)1479031685)))))
		{
			goto IL_005e;
		}
	}
	{
		uint32_t L_4 = V_2;
		if ((!(((uint32_t)L_4) <= ((uint32_t)((int32_t)597743964)))))
		{
			goto IL_003b;
		}
	}
	{
		uint32_t L_5 = V_2;
		if ((((int32_t)L_5) == ((int32_t)((int32_t)49525662))))
		{
			goto IL_00a1;
		}
	}
	{
		uint32_t L_6 = V_2;
		if ((((int32_t)L_6) == ((int32_t)((int32_t)597743964))))
		{
			goto IL_00b6;
		}
	}
	{
		goto IL_0244;
	}

IL_003b:
	{
		uint32_t L_7 = V_2;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)726266686))))
		{
			goto IL_0149;
		}
	}
	{
		uint32_t L_8 = V_2;
		if ((((int32_t)L_8) == ((int32_t)((int32_t)1105436259))))
		{
			goto IL_00cb;
		}
	}
	{
		uint32_t L_9 = V_2;
		if ((((int32_t)L_9) == ((int32_t)((int32_t)1479031685))))
		{
			goto IL_015e;
		}
	}
	{
		goto IL_0244;
	}

IL_005e:
	{
		uint32_t L_10 = V_2;
		if ((!(((uint32_t)L_10) <= ((uint32_t)((int32_t)-585050980)))))
		{
			goto IL_007e;
		}
	}
	{
		uint32_t L_11 = V_2;
		if ((((int32_t)L_11) == ((int32_t)((int32_t)-1013869429))))
		{
			goto IL_011f;
		}
	}
	{
		uint32_t L_12 = V_2;
		if ((((int32_t)L_12) == ((int32_t)((int32_t)-585050980))))
		{
			goto IL_00f5;
		}
	}
	{
		goto IL_0244;
	}

IL_007e:
	{
		uint32_t L_13 = V_2;
		if ((((int32_t)L_13) == ((int32_t)((int32_t)-66302220))))
		{
			goto IL_010a;
		}
	}
	{
		uint32_t L_14 = V_2;
		if ((((int32_t)L_14) == ((int32_t)((int32_t)-49524601))))
		{
			goto IL_00e0;
		}
	}
	{
		uint32_t L_15 = V_2;
		if ((((int32_t)L_15) == ((int32_t)((int32_t)-15969363))))
		{
			goto IL_0134;
		}
	}
	{
		goto IL_0244;
	}

IL_00a1:
	{
		String_t* L_16 = V_1;
		bool L_17;
		L_17 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_16, _stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B, NULL);
		if (L_17)
		{
			goto IL_0173;
		}
	}
	{
		goto IL_0244;
	}

IL_00b6:
	{
		String_t* L_18 = V_1;
		bool L_19;
		L_19 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_18, _stringLiteral3EE5A4671A4E5AEBD31CA5F013A7773DC18ED22B, NULL);
		if (L_19)
		{
			goto IL_018a;
		}
	}
	{
		goto IL_0244;
	}

IL_00cb:
	{
		String_t* L_20 = V_1;
		bool L_21;
		L_21 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_20, _stringLiteralBD0DD0004699EF86BF0FC1D161FA3766AF5126C4, NULL);
		if (L_21)
		{
			goto IL_01a1;
		}
	}
	{
		goto IL_0244;
	}

IL_00e0:
	{
		String_t* L_22 = V_1;
		bool L_23;
		L_23 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_22, _stringLiteral062DB096C728515E033CF8C48A1C1F0B9A79384B, NULL);
		if (L_23)
		{
			goto IL_01b8;
		}
	}
	{
		goto IL_0244;
	}

IL_00f5:
	{
		String_t* L_24 = V_1;
		bool L_25;
		L_25 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_24, _stringLiteral8C6F88DEE0DFE3513BB8B44A8CF0FEE437F4EFFB, NULL);
		if (L_25)
		{
			goto IL_01cc;
		}
	}
	{
		goto IL_0244;
	}

IL_010a:
	{
		String_t* L_26 = V_1;
		bool L_27;
		L_27 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_26, _stringLiteral9384C6EF2DA5C0BD5274A0DACFF291D0ABBFD8B1, NULL);
		if (L_27)
		{
			goto IL_01e0;
		}
	}
	{
		goto IL_0244;
	}

IL_011f:
	{
		String_t* L_28 = V_1;
		bool L_29;
		L_29 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_28, _stringLiteral9E61658953B4F9BB4A05E3D2D2BC18990BADE934, NULL);
		if (L_29)
		{
			goto IL_01f4;
		}
	}
	{
		goto IL_0244;
	}

IL_0134:
	{
		String_t* L_30 = V_1;
		bool L_31;
		L_31 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_30, _stringLiteral9CE1604D659135925CCC4DD1F526AFFE42E689F1, NULL);
		if (L_31)
		{
			goto IL_0208;
		}
	}
	{
		goto IL_0244;
	}

IL_0149:
	{
		String_t* L_32 = V_1;
		bool L_33;
		L_33 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_32, _stringLiteral2F8690361553406965679AEF125F896BC5FC61F5, NULL);
		if (L_33)
		{
			goto IL_021c;
		}
	}
	{
		goto IL_0244;
	}

IL_015e:
	{
		String_t* L_34 = V_1;
		bool L_35;
		L_35 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_34, _stringLiteral1B024D537329B86AB0DF96B2A714180F442F53E9, NULL);
		if (L_35)
		{
			goto IL_0230;
		}
	}
	{
		goto IL_0244;
	}

IL_0173:
	{
		// instance.enabled = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_36 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_37 = ((ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_36);
		bool L_38;
		L_38 = GenericVirtualFuncInvoker1< bool, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mFFB70EE53D8CD0255A4E599780F62A3EB1520E83_RuntimeMethod_var, L_36, L_37);
		SizeOverLifetimeModule_set_enabled_mC45334E7AC31CCBE1CFA531D28D29E1BD38D5D6F((&V_0), L_38, NULL);
		// break;
		goto IL_024a;
	}

IL_018a:
	{
		// instance.size = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_39 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_40 = ((ES3Type_MinMaxCurve_t1C147718750ACBECE5D2B7F545D2A434A3C5409B_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t1C147718750ACBECE5D2B7F545D2A434A3C5409B_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_39);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_41;
		L_41 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_m9D6B4042B923127DEA4A2CAA3E35EED37D75B3D0_RuntimeMethod_var, L_39, L_40);
		SizeOverLifetimeModule_set_size_m1D5987F4FB9E948DEAA5E3D8FB21D1AFEE15EBE5((&V_0), L_41, NULL);
		// break;
		goto IL_024a;
	}

IL_01a1:
	{
		// instance.sizeMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_42 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_43 = ((ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_42);
		float L_44;
		L_44 = GenericVirtualFuncInvoker1< float, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mA86928BC888E342D2C2644535E3399952F5077ED_RuntimeMethod_var, L_42, L_43);
		SizeOverLifetimeModule_set_sizeMultiplier_mE97DDCFF7A3065E4E1709EE66C8A524268A757EF((&V_0), L_44, NULL);
		// break;
		goto IL_024a;
	}

IL_01b8:
	{
		// instance.x = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_45 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_46 = ((ES3Type_MinMaxCurve_t1C147718750ACBECE5D2B7F545D2A434A3C5409B_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t1C147718750ACBECE5D2B7F545D2A434A3C5409B_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_45);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_47;
		L_47 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_m9D6B4042B923127DEA4A2CAA3E35EED37D75B3D0_RuntimeMethod_var, L_45, L_46);
		SizeOverLifetimeModule_set_x_m7B791B7E4BE55CC4CE1FB815C2E09DBAB05F027A((&V_0), L_47, NULL);
		// break;
		goto IL_024a;
	}

IL_01cc:
	{
		// instance.xMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_48 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_49 = ((ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_48);
		float L_50;
		L_50 = GenericVirtualFuncInvoker1< float, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mA86928BC888E342D2C2644535E3399952F5077ED_RuntimeMethod_var, L_48, L_49);
		SizeOverLifetimeModule_set_xMultiplier_mD17EFB03D20765192F5772A17573D777DB261910((&V_0), L_50, NULL);
		// break;
		goto IL_024a;
	}

IL_01e0:
	{
		// instance.y = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_51 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_52 = ((ES3Type_MinMaxCurve_t1C147718750ACBECE5D2B7F545D2A434A3C5409B_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t1C147718750ACBECE5D2B7F545D2A434A3C5409B_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_51);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_53;
		L_53 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_m9D6B4042B923127DEA4A2CAA3E35EED37D75B3D0_RuntimeMethod_var, L_51, L_52);
		SizeOverLifetimeModule_set_y_mB9138A8037FF0084FE6DED3DC9D81E0D926C6601((&V_0), L_53, NULL);
		// break;
		goto IL_024a;
	}

IL_01f4:
	{
		// instance.yMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_54 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_55 = ((ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_54);
		float L_56;
		L_56 = GenericVirtualFuncInvoker1< float, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mA86928BC888E342D2C2644535E3399952F5077ED_RuntimeMethod_var, L_54, L_55);
		SizeOverLifetimeModule_set_yMultiplier_mAFF1869E535B324384AB01214B246819306439D4((&V_0), L_56, NULL);
		// break;
		goto IL_024a;
	}

IL_0208:
	{
		// instance.z = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_57 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_58 = ((ES3Type_MinMaxCurve_t1C147718750ACBECE5D2B7F545D2A434A3C5409B_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t1C147718750ACBECE5D2B7F545D2A434A3C5409B_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_57);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_59;
		L_59 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_m9D6B4042B923127DEA4A2CAA3E35EED37D75B3D0_RuntimeMethod_var, L_57, L_58);
		SizeOverLifetimeModule_set_z_m2F0D3BC817F95F78D37543F7A54C9CA0D5D87263((&V_0), L_59, NULL);
		// break;
		goto IL_024a;
	}

IL_021c:
	{
		// instance.zMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_60 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_61 = ((ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_60);
		float L_62;
		L_62 = GenericVirtualFuncInvoker1< float, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mA86928BC888E342D2C2644535E3399952F5077ED_RuntimeMethod_var, L_60, L_61);
		SizeOverLifetimeModule_set_zMultiplier_m97864CAC5D1B8936456B33989CCBA3A12870A3F4((&V_0), L_62, NULL);
		// break;
		goto IL_024a;
	}

IL_0230:
	{
		// instance.separateAxes = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_63 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_64 = ((ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_63);
		bool L_65;
		L_65 = GenericVirtualFuncInvoker1< bool, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mFFB70EE53D8CD0255A4E599780F62A3EB1520E83_RuntimeMethod_var, L_63, L_64);
		SizeOverLifetimeModule_set_separateAxes_mC07A349FA5AF44C8937B7DE7ECEEA8F871B13EED((&V_0), L_65, NULL);
		// break;
		goto IL_024a;
	}

IL_0244:
	{
		// reader.Skip();
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_66 = ___reader0;
		NullCheck(L_66);
		VirtualActionInvoker0::Invoke(41 /* System.Void ES3Reader::Skip() */, L_66);
	}

IL_024a:
	{
		// while((propertyName = reader.ReadPropertyName()) != null)
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_67 = ___reader0;
		NullCheck(L_67);
		String_t* L_68;
		L_68 = VirtualFuncInvoker0< String_t* >::Invoke(21 /* System.String ES3Reader::ReadPropertyName() */, L_67);
		String_t* L_69 = L_68;
		V_1 = L_69;
		if (L_69)
		{
			goto IL_000c;
		}
	}
	{
		// }
		return;
	}
}
// System.Void ES3Types.ES3Type_SizeOverLifetimeModule::ReadInto<UnityEngine.ParticleSystem/RotationOverLifetimeModule>(ES3Reader,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ES3Type_SizeOverLifetimeModule_ReadInto_TisRotationOverLifetimeModule_tEE08858451167B6DDE6DD36FDCF11E74C77D79E6_m6F9F533E46549CB7F5F69525C71953956E822A21_gshared (ES3Type_SizeOverLifetimeModule_tE76521DF6C9288642AE09CBD10810E97A6038CAF* __this, ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* ___reader0, RuntimeObject* ___obj1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mFFB70EE53D8CD0255A4E599780F62A3EB1520E83_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_m9D6B4042B923127DEA4A2CAA3E35EED37D75B3D0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mA86928BC888E342D2C2644535E3399952F5077ED_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_MinMaxCurve_t1C147718750ACBECE5D2B7F545D2A434A3C5409B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SizeOverLifetimeModule_t6711CE9659123CAA5BFBFDFA9F53174CD979AC0C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral062DB096C728515E033CF8C48A1C1F0B9A79384B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1B024D537329B86AB0DF96B2A714180F442F53E9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2F8690361553406965679AEF125F896BC5FC61F5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3EE5A4671A4E5AEBD31CA5F013A7773DC18ED22B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8C6F88DEE0DFE3513BB8B44A8CF0FEE437F4EFFB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9384C6EF2DA5C0BD5274A0DACFF291D0ABBFD8B1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9CE1604D659135925CCC4DD1F526AFFE42E689F1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9E61658953B4F9BB4A05E3D2D2BC18990BADE934);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBD0DD0004699EF86BF0FC1D161FA3766AF5126C4);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B);
		s_Il2CppMethodInitialized = true;
	}
	SizeOverLifetimeModule_t6711CE9659123CAA5BFBFDFA9F53174CD979AC0C V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	uint32_t V_2 = 0;
	{
		// var instance = (UnityEngine.ParticleSystem.SizeOverLifetimeModule)obj;
		RuntimeObject* L_0 = ___obj1;
		V_0 = ((*(SizeOverLifetimeModule_t6711CE9659123CAA5BFBFDFA9F53174CD979AC0C*)((SizeOverLifetimeModule_t6711CE9659123CAA5BFBFDFA9F53174CD979AC0C*)(SizeOverLifetimeModule_t6711CE9659123CAA5BFBFDFA9F53174CD979AC0C*)UnBox(L_0, SizeOverLifetimeModule_t6711CE9659123CAA5BFBFDFA9F53174CD979AC0C_il2cpp_TypeInfo_var))));
		goto IL_024a;
	}

IL_000c:
	{
		String_t* L_1 = V_1;
		uint32_t L_2;
		L_2 = U3CPrivateImplementationDetailsU3E_ComputeStringHash_m9E43873DE0DF480D27EC1C2AA3C09E74EA77F75D(L_1, NULL);
		V_2 = L_2;
		uint32_t L_3 = V_2;
		if ((!(((uint32_t)L_3) <= ((uint32_t)((int32_t)1479031685)))))
		{
			goto IL_005e;
		}
	}
	{
		uint32_t L_4 = V_2;
		if ((!(((uint32_t)L_4) <= ((uint32_t)((int32_t)597743964)))))
		{
			goto IL_003b;
		}
	}
	{
		uint32_t L_5 = V_2;
		if ((((int32_t)L_5) == ((int32_t)((int32_t)49525662))))
		{
			goto IL_00a1;
		}
	}
	{
		uint32_t L_6 = V_2;
		if ((((int32_t)L_6) == ((int32_t)((int32_t)597743964))))
		{
			goto IL_00b6;
		}
	}
	{
		goto IL_0244;
	}

IL_003b:
	{
		uint32_t L_7 = V_2;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)726266686))))
		{
			goto IL_0149;
		}
	}
	{
		uint32_t L_8 = V_2;
		if ((((int32_t)L_8) == ((int32_t)((int32_t)1105436259))))
		{
			goto IL_00cb;
		}
	}
	{
		uint32_t L_9 = V_2;
		if ((((int32_t)L_9) == ((int32_t)((int32_t)1479031685))))
		{
			goto IL_015e;
		}
	}
	{
		goto IL_0244;
	}

IL_005e:
	{
		uint32_t L_10 = V_2;
		if ((!(((uint32_t)L_10) <= ((uint32_t)((int32_t)-585050980)))))
		{
			goto IL_007e;
		}
	}
	{
		uint32_t L_11 = V_2;
		if ((((int32_t)L_11) == ((int32_t)((int32_t)-1013869429))))
		{
			goto IL_011f;
		}
	}
	{
		uint32_t L_12 = V_2;
		if ((((int32_t)L_12) == ((int32_t)((int32_t)-585050980))))
		{
			goto IL_00f5;
		}
	}
	{
		goto IL_0244;
	}

IL_007e:
	{
		uint32_t L_13 = V_2;
		if ((((int32_t)L_13) == ((int32_t)((int32_t)-66302220))))
		{
			goto IL_010a;
		}
	}
	{
		uint32_t L_14 = V_2;
		if ((((int32_t)L_14) == ((int32_t)((int32_t)-49524601))))
		{
			goto IL_00e0;
		}
	}
	{
		uint32_t L_15 = V_2;
		if ((((int32_t)L_15) == ((int32_t)((int32_t)-15969363))))
		{
			goto IL_0134;
		}
	}
	{
		goto IL_0244;
	}

IL_00a1:
	{
		String_t* L_16 = V_1;
		bool L_17;
		L_17 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_16, _stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B, NULL);
		if (L_17)
		{
			goto IL_0173;
		}
	}
	{
		goto IL_0244;
	}

IL_00b6:
	{
		String_t* L_18 = V_1;
		bool L_19;
		L_19 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_18, _stringLiteral3EE5A4671A4E5AEBD31CA5F013A7773DC18ED22B, NULL);
		if (L_19)
		{
			goto IL_018a;
		}
	}
	{
		goto IL_0244;
	}

IL_00cb:
	{
		String_t* L_20 = V_1;
		bool L_21;
		L_21 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_20, _stringLiteralBD0DD0004699EF86BF0FC1D161FA3766AF5126C4, NULL);
		if (L_21)
		{
			goto IL_01a1;
		}
	}
	{
		goto IL_0244;
	}

IL_00e0:
	{
		String_t* L_22 = V_1;
		bool L_23;
		L_23 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_22, _stringLiteral062DB096C728515E033CF8C48A1C1F0B9A79384B, NULL);
		if (L_23)
		{
			goto IL_01b8;
		}
	}
	{
		goto IL_0244;
	}

IL_00f5:
	{
		String_t* L_24 = V_1;
		bool L_25;
		L_25 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_24, _stringLiteral8C6F88DEE0DFE3513BB8B44A8CF0FEE437F4EFFB, NULL);
		if (L_25)
		{
			goto IL_01cc;
		}
	}
	{
		goto IL_0244;
	}

IL_010a:
	{
		String_t* L_26 = V_1;
		bool L_27;
		L_27 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_26, _stringLiteral9384C6EF2DA5C0BD5274A0DACFF291D0ABBFD8B1, NULL);
		if (L_27)
		{
			goto IL_01e0;
		}
	}
	{
		goto IL_0244;
	}

IL_011f:
	{
		String_t* L_28 = V_1;
		bool L_29;
		L_29 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_28, _stringLiteral9E61658953B4F9BB4A05E3D2D2BC18990BADE934, NULL);
		if (L_29)
		{
			goto IL_01f4;
		}
	}
	{
		goto IL_0244;
	}

IL_0134:
	{
		String_t* L_30 = V_1;
		bool L_31;
		L_31 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_30, _stringLiteral9CE1604D659135925CCC4DD1F526AFFE42E689F1, NULL);
		if (L_31)
		{
			goto IL_0208;
		}
	}
	{
		goto IL_0244;
	}

IL_0149:
	{
		String_t* L_32 = V_1;
		bool L_33;
		L_33 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_32, _stringLiteral2F8690361553406965679AEF125F896BC5FC61F5, NULL);
		if (L_33)
		{
			goto IL_021c;
		}
	}
	{
		goto IL_0244;
	}

IL_015e:
	{
		String_t* L_34 = V_1;
		bool L_35;
		L_35 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_34, _stringLiteral1B024D537329B86AB0DF96B2A714180F442F53E9, NULL);
		if (L_35)
		{
			goto IL_0230;
		}
	}
	{
		goto IL_0244;
	}

IL_0173:
	{
		// instance.enabled = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_36 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_37 = ((ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_36);
		bool L_38;
		L_38 = GenericVirtualFuncInvoker1< bool, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mFFB70EE53D8CD0255A4E599780F62A3EB1520E83_RuntimeMethod_var, L_36, L_37);
		SizeOverLifetimeModule_set_enabled_mC45334E7AC31CCBE1CFA531D28D29E1BD38D5D6F((&V_0), L_38, NULL);
		// break;
		goto IL_024a;
	}

IL_018a:
	{
		// instance.size = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_39 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_40 = ((ES3Type_MinMaxCurve_t1C147718750ACBECE5D2B7F545D2A434A3C5409B_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t1C147718750ACBECE5D2B7F545D2A434A3C5409B_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_39);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_41;
		L_41 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_m9D6B4042B923127DEA4A2CAA3E35EED37D75B3D0_RuntimeMethod_var, L_39, L_40);
		SizeOverLifetimeModule_set_size_m1D5987F4FB9E948DEAA5E3D8FB21D1AFEE15EBE5((&V_0), L_41, NULL);
		// break;
		goto IL_024a;
	}

IL_01a1:
	{
		// instance.sizeMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_42 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_43 = ((ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_42);
		float L_44;
		L_44 = GenericVirtualFuncInvoker1< float, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mA86928BC888E342D2C2644535E3399952F5077ED_RuntimeMethod_var, L_42, L_43);
		SizeOverLifetimeModule_set_sizeMultiplier_mE97DDCFF7A3065E4E1709EE66C8A524268A757EF((&V_0), L_44, NULL);
		// break;
		goto IL_024a;
	}

IL_01b8:
	{
		// instance.x = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_45 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_46 = ((ES3Type_MinMaxCurve_t1C147718750ACBECE5D2B7F545D2A434A3C5409B_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t1C147718750ACBECE5D2B7F545D2A434A3C5409B_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_45);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_47;
		L_47 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_m9D6B4042B923127DEA4A2CAA3E35EED37D75B3D0_RuntimeMethod_var, L_45, L_46);
		SizeOverLifetimeModule_set_x_m7B791B7E4BE55CC4CE1FB815C2E09DBAB05F027A((&V_0), L_47, NULL);
		// break;
		goto IL_024a;
	}

IL_01cc:
	{
		// instance.xMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_48 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_49 = ((ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_48);
		float L_50;
		L_50 = GenericVirtualFuncInvoker1< float, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mA86928BC888E342D2C2644535E3399952F5077ED_RuntimeMethod_var, L_48, L_49);
		SizeOverLifetimeModule_set_xMultiplier_mD17EFB03D20765192F5772A17573D777DB261910((&V_0), L_50, NULL);
		// break;
		goto IL_024a;
	}

IL_01e0:
	{
		// instance.y = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_51 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_52 = ((ES3Type_MinMaxCurve_t1C147718750ACBECE5D2B7F545D2A434A3C5409B_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t1C147718750ACBECE5D2B7F545D2A434A3C5409B_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_51);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_53;
		L_53 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_m9D6B4042B923127DEA4A2CAA3E35EED37D75B3D0_RuntimeMethod_var, L_51, L_52);
		SizeOverLifetimeModule_set_y_mB9138A8037FF0084FE6DED3DC9D81E0D926C6601((&V_0), L_53, NULL);
		// break;
		goto IL_024a;
	}

IL_01f4:
	{
		// instance.yMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_54 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_55 = ((ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_54);
		float L_56;
		L_56 = GenericVirtualFuncInvoker1< float, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mA86928BC888E342D2C2644535E3399952F5077ED_RuntimeMethod_var, L_54, L_55);
		SizeOverLifetimeModule_set_yMultiplier_mAFF1869E535B324384AB01214B246819306439D4((&V_0), L_56, NULL);
		// break;
		goto IL_024a;
	}

IL_0208:
	{
		// instance.z = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_57 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_58 = ((ES3Type_MinMaxCurve_t1C147718750ACBECE5D2B7F545D2A434A3C5409B_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t1C147718750ACBECE5D2B7F545D2A434A3C5409B_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_57);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_59;
		L_59 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_m9D6B4042B923127DEA4A2CAA3E35EED37D75B3D0_RuntimeMethod_var, L_57, L_58);
		SizeOverLifetimeModule_set_z_m2F0D3BC817F95F78D37543F7A54C9CA0D5D87263((&V_0), L_59, NULL);
		// break;
		goto IL_024a;
	}

IL_021c:
	{
		// instance.zMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_60 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_61 = ((ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_60);
		float L_62;
		L_62 = GenericVirtualFuncInvoker1< float, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mA86928BC888E342D2C2644535E3399952F5077ED_RuntimeMethod_var, L_60, L_61);
		SizeOverLifetimeModule_set_zMultiplier_m97864CAC5D1B8936456B33989CCBA3A12870A3F4((&V_0), L_62, NULL);
		// break;
		goto IL_024a;
	}

IL_0230:
	{
		// instance.separateAxes = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_63 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_64 = ((ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_63);
		bool L_65;
		L_65 = GenericVirtualFuncInvoker1< bool, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mFFB70EE53D8CD0255A4E599780F62A3EB1520E83_RuntimeMethod_var, L_63, L_64);
		SizeOverLifetimeModule_set_separateAxes_mC07A349FA5AF44C8937B7DE7ECEEA8F871B13EED((&V_0), L_65, NULL);
		// break;
		goto IL_024a;
	}

IL_0244:
	{
		// reader.Skip();
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_66 = ___reader0;
		NullCheck(L_66);
		VirtualActionInvoker0::Invoke(41 /* System.Void ES3Reader::Skip() */, L_66);
	}

IL_024a:
	{
		// while((propertyName = reader.ReadPropertyName()) != null)
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_67 = ___reader0;
		NullCheck(L_67);
		String_t* L_68;
		L_68 = VirtualFuncInvoker0< String_t* >::Invoke(21 /* System.String ES3Reader::ReadPropertyName() */, L_67);
		String_t* L_69 = L_68;
		V_1 = L_69;
		if (L_69)
		{
			goto IL_000c;
		}
	}
	{
		// }
		return;
	}
}
// System.Void ES3Types.ES3Type_SizeOverLifetimeModule::ReadInto<UnityEngine.ParticleSystem/SubEmittersModule>(ES3Reader,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ES3Type_SizeOverLifetimeModule_ReadInto_TisSubEmittersModule_t94F5AD231EAFB50A16E697186A630B07BF8B949B_m12444A01462D0C19173C2F7773BCFE361C6612B7_gshared (ES3Type_SizeOverLifetimeModule_tE76521DF6C9288642AE09CBD10810E97A6038CAF* __this, ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* ___reader0, RuntimeObject* ___obj1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mFFB70EE53D8CD0255A4E599780F62A3EB1520E83_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_m9D6B4042B923127DEA4A2CAA3E35EED37D75B3D0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mA86928BC888E342D2C2644535E3399952F5077ED_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_MinMaxCurve_t1C147718750ACBECE5D2B7F545D2A434A3C5409B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SizeOverLifetimeModule_t6711CE9659123CAA5BFBFDFA9F53174CD979AC0C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral062DB096C728515E033CF8C48A1C1F0B9A79384B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1B024D537329B86AB0DF96B2A714180F442F53E9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2F8690361553406965679AEF125F896BC5FC61F5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3EE5A4671A4E5AEBD31CA5F013A7773DC18ED22B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8C6F88DEE0DFE3513BB8B44A8CF0FEE437F4EFFB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9384C6EF2DA5C0BD5274A0DACFF291D0ABBFD8B1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9CE1604D659135925CCC4DD1F526AFFE42E689F1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9E61658953B4F9BB4A05E3D2D2BC18990BADE934);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBD0DD0004699EF86BF0FC1D161FA3766AF5126C4);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B);
		s_Il2CppMethodInitialized = true;
	}
	SizeOverLifetimeModule_t6711CE9659123CAA5BFBFDFA9F53174CD979AC0C V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	uint32_t V_2 = 0;
	{
		// var instance = (UnityEngine.ParticleSystem.SizeOverLifetimeModule)obj;
		RuntimeObject* L_0 = ___obj1;
		V_0 = ((*(SizeOverLifetimeModule_t6711CE9659123CAA5BFBFDFA9F53174CD979AC0C*)((SizeOverLifetimeModule_t6711CE9659123CAA5BFBFDFA9F53174CD979AC0C*)(SizeOverLifetimeModule_t6711CE9659123CAA5BFBFDFA9F53174CD979AC0C*)UnBox(L_0, SizeOverLifetimeModule_t6711CE9659123CAA5BFBFDFA9F53174CD979AC0C_il2cpp_TypeInfo_var))));
		goto IL_024a;
	}

IL_000c:
	{
		String_t* L_1 = V_1;
		uint32_t L_2;
		L_2 = U3CPrivateImplementationDetailsU3E_ComputeStringHash_m9E43873DE0DF480D27EC1C2AA3C09E74EA77F75D(L_1, NULL);
		V_2 = L_2;
		uint32_t L_3 = V_2;
		if ((!(((uint32_t)L_3) <= ((uint32_t)((int32_t)1479031685)))))
		{
			goto IL_005e;
		}
	}
	{
		uint32_t L_4 = V_2;
		if ((!(((uint32_t)L_4) <= ((uint32_t)((int32_t)597743964)))))
		{
			goto IL_003b;
		}
	}
	{
		uint32_t L_5 = V_2;
		if ((((int32_t)L_5) == ((int32_t)((int32_t)49525662))))
		{
			goto IL_00a1;
		}
	}
	{
		uint32_t L_6 = V_2;
		if ((((int32_t)L_6) == ((int32_t)((int32_t)597743964))))
		{
			goto IL_00b6;
		}
	}
	{
		goto IL_0244;
	}

IL_003b:
	{
		uint32_t L_7 = V_2;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)726266686))))
		{
			goto IL_0149;
		}
	}
	{
		uint32_t L_8 = V_2;
		if ((((int32_t)L_8) == ((int32_t)((int32_t)1105436259))))
		{
			goto IL_00cb;
		}
	}
	{
		uint32_t L_9 = V_2;
		if ((((int32_t)L_9) == ((int32_t)((int32_t)1479031685))))
		{
			goto IL_015e;
		}
	}
	{
		goto IL_0244;
	}

IL_005e:
	{
		uint32_t L_10 = V_2;
		if ((!(((uint32_t)L_10) <= ((uint32_t)((int32_t)-585050980)))))
		{
			goto IL_007e;
		}
	}
	{
		uint32_t L_11 = V_2;
		if ((((int32_t)L_11) == ((int32_t)((int32_t)-1013869429))))
		{
			goto IL_011f;
		}
	}
	{
		uint32_t L_12 = V_2;
		if ((((int32_t)L_12) == ((int32_t)((int32_t)-585050980))))
		{
			goto IL_00f5;
		}
	}
	{
		goto IL_0244;
	}

IL_007e:
	{
		uint32_t L_13 = V_2;
		if ((((int32_t)L_13) == ((int32_t)((int32_t)-66302220))))
		{
			goto IL_010a;
		}
	}
	{
		uint32_t L_14 = V_2;
		if ((((int32_t)L_14) == ((int32_t)((int32_t)-49524601))))
		{
			goto IL_00e0;
		}
	}
	{
		uint32_t L_15 = V_2;
		if ((((int32_t)L_15) == ((int32_t)((int32_t)-15969363))))
		{
			goto IL_0134;
		}
	}
	{
		goto IL_0244;
	}

IL_00a1:
	{
		String_t* L_16 = V_1;
		bool L_17;
		L_17 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_16, _stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B, NULL);
		if (L_17)
		{
			goto IL_0173;
		}
	}
	{
		goto IL_0244;
	}

IL_00b6:
	{
		String_t* L_18 = V_1;
		bool L_19;
		L_19 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_18, _stringLiteral3EE5A4671A4E5AEBD31CA5F013A7773DC18ED22B, NULL);
		if (L_19)
		{
			goto IL_018a;
		}
	}
	{
		goto IL_0244;
	}

IL_00cb:
	{
		String_t* L_20 = V_1;
		bool L_21;
		L_21 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_20, _stringLiteralBD0DD0004699EF86BF0FC1D161FA3766AF5126C4, NULL);
		if (L_21)
		{
			goto IL_01a1;
		}
	}
	{
		goto IL_0244;
	}

IL_00e0:
	{
		String_t* L_22 = V_1;
		bool L_23;
		L_23 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_22, _stringLiteral062DB096C728515E033CF8C48A1C1F0B9A79384B, NULL);
		if (L_23)
		{
			goto IL_01b8;
		}
	}
	{
		goto IL_0244;
	}

IL_00f5:
	{
		String_t* L_24 = V_1;
		bool L_25;
		L_25 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_24, _stringLiteral8C6F88DEE0DFE3513BB8B44A8CF0FEE437F4EFFB, NULL);
		if (L_25)
		{
			goto IL_01cc;
		}
	}
	{
		goto IL_0244;
	}

IL_010a:
	{
		String_t* L_26 = V_1;
		bool L_27;
		L_27 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_26, _stringLiteral9384C6EF2DA5C0BD5274A0DACFF291D0ABBFD8B1, NULL);
		if (L_27)
		{
			goto IL_01e0;
		}
	}
	{
		goto IL_0244;
	}

IL_011f:
	{
		String_t* L_28 = V_1;
		bool L_29;
		L_29 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_28, _stringLiteral9E61658953B4F9BB4A05E3D2D2BC18990BADE934, NULL);
		if (L_29)
		{
			goto IL_01f4;
		}
	}
	{
		goto IL_0244;
	}

IL_0134:
	{
		String_t* L_30 = V_1;
		bool L_31;
		L_31 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_30, _stringLiteral9CE1604D659135925CCC4DD1F526AFFE42E689F1, NULL);
		if (L_31)
		{
			goto IL_0208;
		}
	}
	{
		goto IL_0244;
	}

IL_0149:
	{
		String_t* L_32 = V_1;
		bool L_33;
		L_33 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_32, _stringLiteral2F8690361553406965679AEF125F896BC5FC61F5, NULL);
		if (L_33)
		{
			goto IL_021c;
		}
	}
	{
		goto IL_0244;
	}

IL_015e:
	{
		String_t* L_34 = V_1;
		bool L_35;
		L_35 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_34, _stringLiteral1B024D537329B86AB0DF96B2A714180F442F53E9, NULL);
		if (L_35)
		{
			goto IL_0230;
		}
	}
	{
		goto IL_0244;
	}

IL_0173:
	{
		// instance.enabled = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_36 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_37 = ((ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_36);
		bool L_38;
		L_38 = GenericVirtualFuncInvoker1< bool, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mFFB70EE53D8CD0255A4E599780F62A3EB1520E83_RuntimeMethod_var, L_36, L_37);
		SizeOverLifetimeModule_set_enabled_mC45334E7AC31CCBE1CFA531D28D29E1BD38D5D6F((&V_0), L_38, NULL);
		// break;
		goto IL_024a;
	}

IL_018a:
	{
		// instance.size = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_39 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_40 = ((ES3Type_MinMaxCurve_t1C147718750ACBECE5D2B7F545D2A434A3C5409B_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t1C147718750ACBECE5D2B7F545D2A434A3C5409B_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_39);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_41;
		L_41 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_m9D6B4042B923127DEA4A2CAA3E35EED37D75B3D0_RuntimeMethod_var, L_39, L_40);
		SizeOverLifetimeModule_set_size_m1D5987F4FB9E948DEAA5E3D8FB21D1AFEE15EBE5((&V_0), L_41, NULL);
		// break;
		goto IL_024a;
	}

IL_01a1:
	{
		// instance.sizeMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_42 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_43 = ((ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_42);
		float L_44;
		L_44 = GenericVirtualFuncInvoker1< float, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mA86928BC888E342D2C2644535E3399952F5077ED_RuntimeMethod_var, L_42, L_43);
		SizeOverLifetimeModule_set_sizeMultiplier_mE97DDCFF7A3065E4E1709EE66C8A524268A757EF((&V_0), L_44, NULL);
		// break;
		goto IL_024a;
	}

IL_01b8:
	{
		// instance.x = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_45 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_46 = ((ES3Type_MinMaxCurve_t1C147718750ACBECE5D2B7F545D2A434A3C5409B_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t1C147718750ACBECE5D2B7F545D2A434A3C5409B_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_45);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_47;
		L_47 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_m9D6B4042B923127DEA4A2CAA3E35EED37D75B3D0_RuntimeMethod_var, L_45, L_46);
		SizeOverLifetimeModule_set_x_m7B791B7E4BE55CC4CE1FB815C2E09DBAB05F027A((&V_0), L_47, NULL);
		// break;
		goto IL_024a;
	}

IL_01cc:
	{
		// instance.xMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_48 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_49 = ((ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_48);
		float L_50;
		L_50 = GenericVirtualFuncInvoker1< float, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mA86928BC888E342D2C2644535E3399952F5077ED_RuntimeMethod_var, L_48, L_49);
		SizeOverLifetimeModule_set_xMultiplier_mD17EFB03D20765192F5772A17573D777DB261910((&V_0), L_50, NULL);
		// break;
		goto IL_024a;
	}

IL_01e0:
	{
		// instance.y = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_51 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_52 = ((ES3Type_MinMaxCurve_t1C147718750ACBECE5D2B7F545D2A434A3C5409B_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t1C147718750ACBECE5D2B7F545D2A434A3C5409B_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_51);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_53;
		L_53 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_m9D6B4042B923127DEA4A2CAA3E35EED37D75B3D0_RuntimeMethod_var, L_51, L_52);
		SizeOverLifetimeModule_set_y_mB9138A8037FF0084FE6DED3DC9D81E0D926C6601((&V_0), L_53, NULL);
		// break;
		goto IL_024a;
	}

IL_01f4:
	{
		// instance.yMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_54 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_55 = ((ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_54);
		float L_56;
		L_56 = GenericVirtualFuncInvoker1< float, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mA86928BC888E342D2C2644535E3399952F5077ED_RuntimeMethod_var, L_54, L_55);
		SizeOverLifetimeModule_set_yMultiplier_mAFF1869E535B324384AB01214B246819306439D4((&V_0), L_56, NULL);
		// break;
		goto IL_024a;
	}

IL_0208:
	{
		// instance.z = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_57 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_58 = ((ES3Type_MinMaxCurve_t1C147718750ACBECE5D2B7F545D2A434A3C5409B_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t1C147718750ACBECE5D2B7F545D2A434A3C5409B_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_57);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_59;
		L_59 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_m9D6B4042B923127DEA4A2CAA3E35EED37D75B3D0_RuntimeMethod_var, L_57, L_58);
		SizeOverLifetimeModule_set_z_m2F0D3BC817F95F78D37543F7A54C9CA0D5D87263((&V_0), L_59, NULL);
		// break;
		goto IL_024a;
	}

IL_021c:
	{
		// instance.zMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_60 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_61 = ((ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_60);
		float L_62;
		L_62 = GenericVirtualFuncInvoker1< float, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mA86928BC888E342D2C2644535E3399952F5077ED_RuntimeMethod_var, L_60, L_61);
		SizeOverLifetimeModule_set_zMultiplier_m97864CAC5D1B8936456B33989CCBA3A12870A3F4((&V_0), L_62, NULL);
		// break;
		goto IL_024a;
	}

IL_0230:
	{
		// instance.separateAxes = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_63 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_64 = ((ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_63);
		bool L_65;
		L_65 = GenericVirtualFuncInvoker1< bool, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mFFB70EE53D8CD0255A4E599780F62A3EB1520E83_RuntimeMethod_var, L_63, L_64);
		SizeOverLifetimeModule_set_separateAxes_mC07A349FA5AF44C8937B7DE7ECEEA8F871B13EED((&V_0), L_65, NULL);
		// break;
		goto IL_024a;
	}

IL_0244:
	{
		// reader.Skip();
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_66 = ___reader0;
		NullCheck(L_66);
		VirtualActionInvoker0::Invoke(41 /* System.Void ES3Reader::Skip() */, L_66);
	}

IL_024a:
	{
		// while((propertyName = reader.ReadPropertyName()) != null)
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_67 = ___reader0;
		NullCheck(L_67);
		String_t* L_68;
		L_68 = VirtualFuncInvoker0< String_t* >::Invoke(21 /* System.String ES3Reader::ReadPropertyName() */, L_67);
		String_t* L_69 = L_68;
		V_1 = L_69;
		if (L_69)
		{
			goto IL_000c;
		}
	}
	{
		// }
		return;
	}
}
// System.Void ES3Types.ES3Type_SizeOverLifetimeModule::ReadInto<UnityEngine.ParticleSystem/TextureSheetAnimationModule>(ES3Reader,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ES3Type_SizeOverLifetimeModule_ReadInto_TisTextureSheetAnimationModule_tB53F451F252E24ACC3EF80D770DB4FBE1A13D1F6_m406DFF369421DBF888FC134A42BB8B0904D7878B_gshared (ES3Type_SizeOverLifetimeModule_tE76521DF6C9288642AE09CBD10810E97A6038CAF* __this, ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* ___reader0, RuntimeObject* ___obj1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mFFB70EE53D8CD0255A4E599780F62A3EB1520E83_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_m9D6B4042B923127DEA4A2CAA3E35EED37D75B3D0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mA86928BC888E342D2C2644535E3399952F5077ED_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_MinMaxCurve_t1C147718750ACBECE5D2B7F545D2A434A3C5409B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SizeOverLifetimeModule_t6711CE9659123CAA5BFBFDFA9F53174CD979AC0C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral062DB096C728515E033CF8C48A1C1F0B9A79384B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1B024D537329B86AB0DF96B2A714180F442F53E9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2F8690361553406965679AEF125F896BC5FC61F5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3EE5A4671A4E5AEBD31CA5F013A7773DC18ED22B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8C6F88DEE0DFE3513BB8B44A8CF0FEE437F4EFFB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9384C6EF2DA5C0BD5274A0DACFF291D0ABBFD8B1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9CE1604D659135925CCC4DD1F526AFFE42E689F1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9E61658953B4F9BB4A05E3D2D2BC18990BADE934);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBD0DD0004699EF86BF0FC1D161FA3766AF5126C4);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B);
		s_Il2CppMethodInitialized = true;
	}
	SizeOverLifetimeModule_t6711CE9659123CAA5BFBFDFA9F53174CD979AC0C V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	uint32_t V_2 = 0;
	{
		// var instance = (UnityEngine.ParticleSystem.SizeOverLifetimeModule)obj;
		RuntimeObject* L_0 = ___obj1;
		V_0 = ((*(SizeOverLifetimeModule_t6711CE9659123CAA5BFBFDFA9F53174CD979AC0C*)((SizeOverLifetimeModule_t6711CE9659123CAA5BFBFDFA9F53174CD979AC0C*)(SizeOverLifetimeModule_t6711CE9659123CAA5BFBFDFA9F53174CD979AC0C*)UnBox(L_0, SizeOverLifetimeModule_t6711CE9659123CAA5BFBFDFA9F53174CD979AC0C_il2cpp_TypeInfo_var))));
		goto IL_024a;
	}

IL_000c:
	{
		String_t* L_1 = V_1;
		uint32_t L_2;
		L_2 = U3CPrivateImplementationDetailsU3E_ComputeStringHash_m9E43873DE0DF480D27EC1C2AA3C09E74EA77F75D(L_1, NULL);
		V_2 = L_2;
		uint32_t L_3 = V_2;
		if ((!(((uint32_t)L_3) <= ((uint32_t)((int32_t)1479031685)))))
		{
			goto IL_005e;
		}
	}
	{
		uint32_t L_4 = V_2;
		if ((!(((uint32_t)L_4) <= ((uint32_t)((int32_t)597743964)))))
		{
			goto IL_003b;
		}
	}
	{
		uint32_t L_5 = V_2;
		if ((((int32_t)L_5) == ((int32_t)((int32_t)49525662))))
		{
			goto IL_00a1;
		}
	}
	{
		uint32_t L_6 = V_2;
		if ((((int32_t)L_6) == ((int32_t)((int32_t)597743964))))
		{
			goto IL_00b6;
		}
	}
	{
		goto IL_0244;
	}

IL_003b:
	{
		uint32_t L_7 = V_2;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)726266686))))
		{
			goto IL_0149;
		}
	}
	{
		uint32_t L_8 = V_2;
		if ((((int32_t)L_8) == ((int32_t)((int32_t)1105436259))))
		{
			goto IL_00cb;
		}
	}
	{
		uint32_t L_9 = V_2;
		if ((((int32_t)L_9) == ((int32_t)((int32_t)1479031685))))
		{
			goto IL_015e;
		}
	}
	{
		goto IL_0244;
	}

IL_005e:
	{
		uint32_t L_10 = V_2;
		if ((!(((uint32_t)L_10) <= ((uint32_t)((int32_t)-585050980)))))
		{
			goto IL_007e;
		}
	}
	{
		uint32_t L_11 = V_2;
		if ((((int32_t)L_11) == ((int32_t)((int32_t)-1013869429))))
		{
			goto IL_011f;
		}
	}
	{
		uint32_t L_12 = V_2;
		if ((((int32_t)L_12) == ((int32_t)((int32_t)-585050980))))
		{
			goto IL_00f5;
		}
	}
	{
		goto IL_0244;
	}

IL_007e:
	{
		uint32_t L_13 = V_2;
		if ((((int32_t)L_13) == ((int32_t)((int32_t)-66302220))))
		{
			goto IL_010a;
		}
	}
	{
		uint32_t L_14 = V_2;
		if ((((int32_t)L_14) == ((int32_t)((int32_t)-49524601))))
		{
			goto IL_00e0;
		}
	}
	{
		uint32_t L_15 = V_2;
		if ((((int32_t)L_15) == ((int32_t)((int32_t)-15969363))))
		{
			goto IL_0134;
		}
	}
	{
		goto IL_0244;
	}

IL_00a1:
	{
		String_t* L_16 = V_1;
		bool L_17;
		L_17 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_16, _stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B, NULL);
		if (L_17)
		{
			goto IL_0173;
		}
	}
	{
		goto IL_0244;
	}

IL_00b6:
	{
		String_t* L_18 = V_1;
		bool L_19;
		L_19 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_18, _stringLiteral3EE5A4671A4E5AEBD31CA5F013A7773DC18ED22B, NULL);
		if (L_19)
		{
			goto IL_018a;
		}
	}
	{
		goto IL_0244;
	}

IL_00cb:
	{
		String_t* L_20 = V_1;
		bool L_21;
		L_21 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_20, _stringLiteralBD0DD0004699EF86BF0FC1D161FA3766AF5126C4, NULL);
		if (L_21)
		{
			goto IL_01a1;
		}
	}
	{
		goto IL_0244;
	}

IL_00e0:
	{
		String_t* L_22 = V_1;
		bool L_23;
		L_23 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_22, _stringLiteral062DB096C728515E033CF8C48A1C1F0B9A79384B, NULL);
		if (L_23)
		{
			goto IL_01b8;
		}
	}
	{
		goto IL_0244;
	}

IL_00f5:
	{
		String_t* L_24 = V_1;
		bool L_25;
		L_25 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_24, _stringLiteral8C6F88DEE0DFE3513BB8B44A8CF0FEE437F4EFFB, NULL);
		if (L_25)
		{
			goto IL_01cc;
		}
	}
	{
		goto IL_0244;
	}

IL_010a:
	{
		String_t* L_26 = V_1;
		bool L_27;
		L_27 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_26, _stringLiteral9384C6EF2DA5C0BD5274A0DACFF291D0ABBFD8B1, NULL);
		if (L_27)
		{
			goto IL_01e0;
		}
	}
	{
		goto IL_0244;
	}

IL_011f:
	{
		String_t* L_28 = V_1;
		bool L_29;
		L_29 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_28, _stringLiteral9E61658953B4F9BB4A05E3D2D2BC18990BADE934, NULL);
		if (L_29)
		{
			goto IL_01f4;
		}
	}
	{
		goto IL_0244;
	}

IL_0134:
	{
		String_t* L_30 = V_1;
		bool L_31;
		L_31 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_30, _stringLiteral9CE1604D659135925CCC4DD1F526AFFE42E689F1, NULL);
		if (L_31)
		{
			goto IL_0208;
		}
	}
	{
		goto IL_0244;
	}

IL_0149:
	{
		String_t* L_32 = V_1;
		bool L_33;
		L_33 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_32, _stringLiteral2F8690361553406965679AEF125F896BC5FC61F5, NULL);
		if (L_33)
		{
			goto IL_021c;
		}
	}
	{
		goto IL_0244;
	}

IL_015e:
	{
		String_t* L_34 = V_1;
		bool L_35;
		L_35 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_34, _stringLiteral1B024D537329B86AB0DF96B2A714180F442F53E9, NULL);
		if (L_35)
		{
			goto IL_0230;
		}
	}
	{
		goto IL_0244;
	}

IL_0173:
	{
		// instance.enabled = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_36 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_37 = ((ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_36);
		bool L_38;
		L_38 = GenericVirtualFuncInvoker1< bool, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mFFB70EE53D8CD0255A4E599780F62A3EB1520E83_RuntimeMethod_var, L_36, L_37);
		SizeOverLifetimeModule_set_enabled_mC45334E7AC31CCBE1CFA531D28D29E1BD38D5D6F((&V_0), L_38, NULL);
		// break;
		goto IL_024a;
	}

IL_018a:
	{
		// instance.size = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_39 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_40 = ((ES3Type_MinMaxCurve_t1C147718750ACBECE5D2B7F545D2A434A3C5409B_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t1C147718750ACBECE5D2B7F545D2A434A3C5409B_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_39);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_41;
		L_41 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_m9D6B4042B923127DEA4A2CAA3E35EED37D75B3D0_RuntimeMethod_var, L_39, L_40);
		SizeOverLifetimeModule_set_size_m1D5987F4FB9E948DEAA5E3D8FB21D1AFEE15EBE5((&V_0), L_41, NULL);
		// break;
		goto IL_024a;
	}

IL_01a1:
	{
		// instance.sizeMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_42 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_43 = ((ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_42);
		float L_44;
		L_44 = GenericVirtualFuncInvoker1< float, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mA86928BC888E342D2C2644535E3399952F5077ED_RuntimeMethod_var, L_42, L_43);
		SizeOverLifetimeModule_set_sizeMultiplier_mE97DDCFF7A3065E4E1709EE66C8A524268A757EF((&V_0), L_44, NULL);
		// break;
		goto IL_024a;
	}

IL_01b8:
	{
		// instance.x = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_45 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_46 = ((ES3Type_MinMaxCurve_t1C147718750ACBECE5D2B7F545D2A434A3C5409B_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t1C147718750ACBECE5D2B7F545D2A434A3C5409B_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_45);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_47;
		L_47 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_m9D6B4042B923127DEA4A2CAA3E35EED37D75B3D0_RuntimeMethod_var, L_45, L_46);
		SizeOverLifetimeModule_set_x_m7B791B7E4BE55CC4CE1FB815C2E09DBAB05F027A((&V_0), L_47, NULL);
		// break;
		goto IL_024a;
	}

IL_01cc:
	{
		// instance.xMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_48 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_49 = ((ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_48);
		float L_50;
		L_50 = GenericVirtualFuncInvoker1< float, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mA86928BC888E342D2C2644535E3399952F5077ED_RuntimeMethod_var, L_48, L_49);
		SizeOverLifetimeModule_set_xMultiplier_mD17EFB03D20765192F5772A17573D777DB261910((&V_0), L_50, NULL);
		// break;
		goto IL_024a;
	}

IL_01e0:
	{
		// instance.y = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_51 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_52 = ((ES3Type_MinMaxCurve_t1C147718750ACBECE5D2B7F545D2A434A3C5409B_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t1C147718750ACBECE5D2B7F545D2A434A3C5409B_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_51);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_53;
		L_53 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_m9D6B4042B923127DEA4A2CAA3E35EED37D75B3D0_RuntimeMethod_var, L_51, L_52);
		SizeOverLifetimeModule_set_y_mB9138A8037FF0084FE6DED3DC9D81E0D926C6601((&V_0), L_53, NULL);
		// break;
		goto IL_024a;
	}

IL_01f4:
	{
		// instance.yMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_54 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_55 = ((ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_54);
		float L_56;
		L_56 = GenericVirtualFuncInvoker1< float, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mA86928BC888E342D2C2644535E3399952F5077ED_RuntimeMethod_var, L_54, L_55);
		SizeOverLifetimeModule_set_yMultiplier_mAFF1869E535B324384AB01214B246819306439D4((&V_0), L_56, NULL);
		// break;
		goto IL_024a;
	}

IL_0208:
	{
		// instance.z = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_57 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_58 = ((ES3Type_MinMaxCurve_t1C147718750ACBECE5D2B7F545D2A434A3C5409B_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t1C147718750ACBECE5D2B7F545D2A434A3C5409B_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_57);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_59;
		L_59 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_m9D6B4042B923127DEA4A2CAA3E35EED37D75B3D0_RuntimeMethod_var, L_57, L_58);
		SizeOverLifetimeModule_set_z_m2F0D3BC817F95F78D37543F7A54C9CA0D5D87263((&V_0), L_59, NULL);
		// break;
		goto IL_024a;
	}

IL_021c:
	{
		// instance.zMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_60 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_61 = ((ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_60);
		float L_62;
		L_62 = GenericVirtualFuncInvoker1< float, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mA86928BC888E342D2C2644535E3399952F5077ED_RuntimeMethod_var, L_60, L_61);
		SizeOverLifetimeModule_set_zMultiplier_m97864CAC5D1B8936456B33989CCBA3A12870A3F4((&V_0), L_62, NULL);
		// break;
		goto IL_024a;
	}

IL_0230:
	{
		// instance.separateAxes = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_63 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_64 = ((ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_63);
		bool L_65;
		L_65 = GenericVirtualFuncInvoker1< bool, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mFFB70EE53D8CD0255A4E599780F62A3EB1520E83_RuntimeMethod_var, L_63, L_64);
		SizeOverLifetimeModule_set_separateAxes_mC07A349FA5AF44C8937B7DE7ECEEA8F871B13EED((&V_0), L_65, NULL);
		// break;
		goto IL_024a;
	}

IL_0244:
	{
		// reader.Skip();
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_66 = ___reader0;
		NullCheck(L_66);
		VirtualActionInvoker0::Invoke(41 /* System.Void ES3Reader::Skip() */, L_66);
	}

IL_024a:
	{
		// while((propertyName = reader.ReadPropertyName()) != null)
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_67 = ___reader0;
		NullCheck(L_67);
		String_t* L_68;
		L_68 = VirtualFuncInvoker0< String_t* >::Invoke(21 /* System.String ES3Reader::ReadPropertyName() */, L_67);
		String_t* L_69 = L_68;
		V_1 = L_69;
		if (L_69)
		{
			goto IL_000c;
		}
	}
	{
		// }
		return;
	}
}
// System.Void ES3Types.ES3Type_SizeOverLifetimeModule::ReadInto<UnityEngine.ParticleSystem/TrailModule>(ES3Reader,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ES3Type_SizeOverLifetimeModule_ReadInto_TisTrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D_m0C856200438EF6ED43B5A7B3045E14C9FF976A57_gshared (ES3Type_SizeOverLifetimeModule_tE76521DF6C9288642AE09CBD10810E97A6038CAF* __this, ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* ___reader0, RuntimeObject* ___obj1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mFFB70EE53D8CD0255A4E599780F62A3EB1520E83_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_m9D6B4042B923127DEA4A2CAA3E35EED37D75B3D0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mA86928BC888E342D2C2644535E3399952F5077ED_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_MinMaxCurve_t1C147718750ACBECE5D2B7F545D2A434A3C5409B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SizeOverLifetimeModule_t6711CE9659123CAA5BFBFDFA9F53174CD979AC0C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral062DB096C728515E033CF8C48A1C1F0B9A79384B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1B024D537329B86AB0DF96B2A714180F442F53E9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2F8690361553406965679AEF125F896BC5FC61F5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3EE5A4671A4E5AEBD31CA5F013A7773DC18ED22B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8C6F88DEE0DFE3513BB8B44A8CF0FEE437F4EFFB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9384C6EF2DA5C0BD5274A0DACFF291D0ABBFD8B1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9CE1604D659135925CCC4DD1F526AFFE42E689F1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9E61658953B4F9BB4A05E3D2D2BC18990BADE934);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBD0DD0004699EF86BF0FC1D161FA3766AF5126C4);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B);
		s_Il2CppMethodInitialized = true;
	}
	SizeOverLifetimeModule_t6711CE9659123CAA5BFBFDFA9F53174CD979AC0C V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	uint32_t V_2 = 0;
	{
		// var instance = (UnityEngine.ParticleSystem.SizeOverLifetimeModule)obj;
		RuntimeObject* L_0 = ___obj1;
		V_0 = ((*(SizeOverLifetimeModule_t6711CE9659123CAA5BFBFDFA9F53174CD979AC0C*)((SizeOverLifetimeModule_t6711CE9659123CAA5BFBFDFA9F53174CD979AC0C*)(SizeOverLifetimeModule_t6711CE9659123CAA5BFBFDFA9F53174CD979AC0C*)UnBox(L_0, SizeOverLifetimeModule_t6711CE9659123CAA5BFBFDFA9F53174CD979AC0C_il2cpp_TypeInfo_var))));
		goto IL_024a;
	}

IL_000c:
	{
		String_t* L_1 = V_1;
		uint32_t L_2;
		L_2 = U3CPrivateImplementationDetailsU3E_ComputeStringHash_m9E43873DE0DF480D27EC1C2AA3C09E74EA77F75D(L_1, NULL);
		V_2 = L_2;
		uint32_t L_3 = V_2;
		if ((!(((uint32_t)L_3) <= ((uint32_t)((int32_t)1479031685)))))
		{
			goto IL_005e;
		}
	}
	{
		uint32_t L_4 = V_2;
		if ((!(((uint32_t)L_4) <= ((uint32_t)((int32_t)597743964)))))
		{
			goto IL_003b;
		}
	}
	{
		uint32_t L_5 = V_2;
		if ((((int32_t)L_5) == ((int32_t)((int32_t)49525662))))
		{
			goto IL_00a1;
		}
	}
	{
		uint32_t L_6 = V_2;
		if ((((int32_t)L_6) == ((int32_t)((int32_t)597743964))))
		{
			goto IL_00b6;
		}
	}
	{
		goto IL_0244;
	}

IL_003b:
	{
		uint32_t L_7 = V_2;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)726266686))))
		{
			goto IL_0149;
		}
	}
	{
		uint32_t L_8 = V_2;
		if ((((int32_t)L_8) == ((int32_t)((int32_t)1105436259))))
		{
			goto IL_00cb;
		}
	}
	{
		uint32_t L_9 = V_2;
		if ((((int32_t)L_9) == ((int32_t)((int32_t)1479031685))))
		{
			goto IL_015e;
		}
	}
	{
		goto IL_0244;
	}

IL_005e:
	{
		uint32_t L_10 = V_2;
		if ((!(((uint32_t)L_10) <= ((uint32_t)((int32_t)-585050980)))))
		{
			goto IL_007e;
		}
	}
	{
		uint32_t L_11 = V_2;
		if ((((int32_t)L_11) == ((int32_t)((int32_t)-1013869429))))
		{
			goto IL_011f;
		}
	}
	{
		uint32_t L_12 = V_2;
		if ((((int32_t)L_12) == ((int32_t)((int32_t)-585050980))))
		{
			goto IL_00f5;
		}
	}
	{
		goto IL_0244;
	}

IL_007e:
	{
		uint32_t L_13 = V_2;
		if ((((int32_t)L_13) == ((int32_t)((int32_t)-66302220))))
		{
			goto IL_010a;
		}
	}
	{
		uint32_t L_14 = V_2;
		if ((((int32_t)L_14) == ((int32_t)((int32_t)-49524601))))
		{
			goto IL_00e0;
		}
	}
	{
		uint32_t L_15 = V_2;
		if ((((int32_t)L_15) == ((int32_t)((int32_t)-15969363))))
		{
			goto IL_0134;
		}
	}
	{
		goto IL_0244;
	}

IL_00a1:
	{
		String_t* L_16 = V_1;
		bool L_17;
		L_17 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_16, _stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B, NULL);
		if (L_17)
		{
			goto IL_0173;
		}
	}
	{
		goto IL_0244;
	}

IL_00b6:
	{
		String_t* L_18 = V_1;
		bool L_19;
		L_19 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_18, _stringLiteral3EE5A4671A4E5AEBD31CA5F013A7773DC18ED22B, NULL);
		if (L_19)
		{
			goto IL_018a;
		}
	}
	{
		goto IL_0244;
	}

IL_00cb:
	{
		String_t* L_20 = V_1;
		bool L_21;
		L_21 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_20, _stringLiteralBD0DD0004699EF86BF0FC1D161FA3766AF5126C4, NULL);
		if (L_21)
		{
			goto IL_01a1;
		}
	}
	{
		goto IL_0244;
	}

IL_00e0:
	{
		String_t* L_22 = V_1;
		bool L_23;
		L_23 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_22, _stringLiteral062DB096C728515E033CF8C48A1C1F0B9A79384B, NULL);
		if (L_23)
		{
			goto IL_01b8;
		}
	}
	{
		goto IL_0244;
	}

IL_00f5:
	{
		String_t* L_24 = V_1;
		bool L_25;
		L_25 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_24, _stringLiteral8C6F88DEE0DFE3513BB8B44A8CF0FEE437F4EFFB, NULL);
		if (L_25)
		{
			goto IL_01cc;
		}
	}
	{
		goto IL_0244;
	}

IL_010a:
	{
		String_t* L_26 = V_1;
		bool L_27;
		L_27 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_26, _stringLiteral9384C6EF2DA5C0BD5274A0DACFF291D0ABBFD8B1, NULL);
		if (L_27)
		{
			goto IL_01e0;
		}
	}
	{
		goto IL_0244;
	}

IL_011f:
	{
		String_t* L_28 = V_1;
		bool L_29;
		L_29 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_28, _stringLiteral9E61658953B4F9BB4A05E3D2D2BC18990BADE934, NULL);
		if (L_29)
		{
			goto IL_01f4;
		}
	}
	{
		goto IL_0244;
	}

IL_0134:
	{
		String_t* L_30 = V_1;
		bool L_31;
		L_31 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_30, _stringLiteral9CE1604D659135925CCC4DD1F526AFFE42E689F1, NULL);
		if (L_31)
		{
			goto IL_0208;
		}
	}
	{
		goto IL_0244;
	}

IL_0149:
	{
		String_t* L_32 = V_1;
		bool L_33;
		L_33 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_32, _stringLiteral2F8690361553406965679AEF125F896BC5FC61F5, NULL);
		if (L_33)
		{
			goto IL_021c;
		}
	}
	{
		goto IL_0244;
	}

IL_015e:
	{
		String_t* L_34 = V_1;
		bool L_35;
		L_35 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_34, _stringLiteral1B024D537329B86AB0DF96B2A714180F442F53E9, NULL);
		if (L_35)
		{
			goto IL_0230;
		}
	}
	{
		goto IL_0244;
	}

IL_0173:
	{
		// instance.enabled = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_36 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_37 = ((ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_36);
		bool L_38;
		L_38 = GenericVirtualFuncInvoker1< bool, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mFFB70EE53D8CD0255A4E599780F62A3EB1520E83_RuntimeMethod_var, L_36, L_37);
		SizeOverLifetimeModule_set_enabled_mC45334E7AC31CCBE1CFA531D28D29E1BD38D5D6F((&V_0), L_38, NULL);
		// break;
		goto IL_024a;
	}

IL_018a:
	{
		// instance.size = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_39 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_40 = ((ES3Type_MinMaxCurve_t1C147718750ACBECE5D2B7F545D2A434A3C5409B_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t1C147718750ACBECE5D2B7F545D2A434A3C5409B_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_39);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_41;
		L_41 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_m9D6B4042B923127DEA4A2CAA3E35EED37D75B3D0_RuntimeMethod_var, L_39, L_40);
		SizeOverLifetimeModule_set_size_m1D5987F4FB9E948DEAA5E3D8FB21D1AFEE15EBE5((&V_0), L_41, NULL);
		// break;
		goto IL_024a;
	}

IL_01a1:
	{
		// instance.sizeMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_42 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_43 = ((ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_42);
		float L_44;
		L_44 = GenericVirtualFuncInvoker1< float, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mA86928BC888E342D2C2644535E3399952F5077ED_RuntimeMethod_var, L_42, L_43);
		SizeOverLifetimeModule_set_sizeMultiplier_mE97DDCFF7A3065E4E1709EE66C8A524268A757EF((&V_0), L_44, NULL);
		// break;
		goto IL_024a;
	}

IL_01b8:
	{
		// instance.x = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_45 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_46 = ((ES3Type_MinMaxCurve_t1C147718750ACBECE5D2B7F545D2A434A3C5409B_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t1C147718750ACBECE5D2B7F545D2A434A3C5409B_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_45);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_47;
		L_47 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_m9D6B4042B923127DEA4A2CAA3E35EED37D75B3D0_RuntimeMethod_var, L_45, L_46);
		SizeOverLifetimeModule_set_x_m7B791B7E4BE55CC4CE1FB815C2E09DBAB05F027A((&V_0), L_47, NULL);
		// break;
		goto IL_024a;
	}

IL_01cc:
	{
		// instance.xMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_48 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_49 = ((ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_48);
		float L_50;
		L_50 = GenericVirtualFuncInvoker1< float, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mA86928BC888E342D2C2644535E3399952F5077ED_RuntimeMethod_var, L_48, L_49);
		SizeOverLifetimeModule_set_xMultiplier_mD17EFB03D20765192F5772A17573D777DB261910((&V_0), L_50, NULL);
		// break;
		goto IL_024a;
	}

IL_01e0:
	{
		// instance.y = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_51 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_52 = ((ES3Type_MinMaxCurve_t1C147718750ACBECE5D2B7F545D2A434A3C5409B_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t1C147718750ACBECE5D2B7F545D2A434A3C5409B_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_51);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_53;
		L_53 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_m9D6B4042B923127DEA4A2CAA3E35EED37D75B3D0_RuntimeMethod_var, L_51, L_52);
		SizeOverLifetimeModule_set_y_mB9138A8037FF0084FE6DED3DC9D81E0D926C6601((&V_0), L_53, NULL);
		// break;
		goto IL_024a;
	}

IL_01f4:
	{
		// instance.yMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_54 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_55 = ((ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_54);
		float L_56;
		L_56 = GenericVirtualFuncInvoker1< float, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mA86928BC888E342D2C2644535E3399952F5077ED_RuntimeMethod_var, L_54, L_55);
		SizeOverLifetimeModule_set_yMultiplier_mAFF1869E535B324384AB01214B246819306439D4((&V_0), L_56, NULL);
		// break;
		goto IL_024a;
	}

IL_0208:
	{
		// instance.z = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_57 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_58 = ((ES3Type_MinMaxCurve_t1C147718750ACBECE5D2B7F545D2A434A3C5409B_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t1C147718750ACBECE5D2B7F545D2A434A3C5409B_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_57);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_59;
		L_59 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_m9D6B4042B923127DEA4A2CAA3E35EED37D75B3D0_RuntimeMethod_var, L_57, L_58);
		SizeOverLifetimeModule_set_z_m2F0D3BC817F95F78D37543F7A54C9CA0D5D87263((&V_0), L_59, NULL);
		// break;
		goto IL_024a;
	}

IL_021c:
	{
		// instance.zMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_60 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_61 = ((ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_60);
		float L_62;
		L_62 = GenericVirtualFuncInvoker1< float, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mA86928BC888E342D2C2644535E3399952F5077ED_RuntimeMethod_var, L_60, L_61);
		SizeOverLifetimeModule_set_zMultiplier_m97864CAC5D1B8936456B33989CCBA3A12870A3F4((&V_0), L_62, NULL);
		// break;
		goto IL_024a;
	}

IL_0230:
	{
		// instance.separateAxes = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_63 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_64 = ((ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_63);
		bool L_65;
		L_65 = GenericVirtualFuncInvoker1< bool, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mFFB70EE53D8CD0255A4E599780F62A3EB1520E83_RuntimeMethod_var, L_63, L_64);
		SizeOverLifetimeModule_set_separateAxes_mC07A349FA5AF44C8937B7DE7ECEEA8F871B13EED((&V_0), L_65, NULL);
		// break;
		goto IL_024a;
	}

IL_0244:
	{
		// reader.Skip();
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_66 = ___reader0;
		NullCheck(L_66);
		VirtualActionInvoker0::Invoke(41 /* System.Void ES3Reader::Skip() */, L_66);
	}

IL_024a:
	{
		// while((propertyName = reader.ReadPropertyName()) != null)
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_67 = ___reader0;
		NullCheck(L_67);
		String_t* L_68;
		L_68 = VirtualFuncInvoker0< String_t* >::Invoke(21 /* System.String ES3Reader::ReadPropertyName() */, L_67);
		String_t* L_69 = L_68;
		V_1 = L_69;
		if (L_69)
		{
			goto IL_000c;
		}
	}
	{
		// }
		return;
	}
}
// System.Void ES3Types.ES3Type_SizeOverLifetimeModule::ReadInto<UnityEngine.ParticleSystem/TriggerModule>(ES3Reader,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ES3Type_SizeOverLifetimeModule_ReadInto_TisTriggerModule_tDEE844919206259DA831ADCA3B1B2D915CB767B1_mD359A477DD878985B65FC6AC3A80E54D76EC716D_gshared (ES3Type_SizeOverLifetimeModule_tE76521DF6C9288642AE09CBD10810E97A6038CAF* __this, ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* ___reader0, RuntimeObject* ___obj1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mFFB70EE53D8CD0255A4E599780F62A3EB1520E83_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_m9D6B4042B923127DEA4A2CAA3E35EED37D75B3D0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mA86928BC888E342D2C2644535E3399952F5077ED_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_MinMaxCurve_t1C147718750ACBECE5D2B7F545D2A434A3C5409B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SizeOverLifetimeModule_t6711CE9659123CAA5BFBFDFA9F53174CD979AC0C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral062DB096C728515E033CF8C48A1C1F0B9A79384B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1B024D537329B86AB0DF96B2A714180F442F53E9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2F8690361553406965679AEF125F896BC5FC61F5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3EE5A4671A4E5AEBD31CA5F013A7773DC18ED22B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8C6F88DEE0DFE3513BB8B44A8CF0FEE437F4EFFB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9384C6EF2DA5C0BD5274A0DACFF291D0ABBFD8B1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9CE1604D659135925CCC4DD1F526AFFE42E689F1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9E61658953B4F9BB4A05E3D2D2BC18990BADE934);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBD0DD0004699EF86BF0FC1D161FA3766AF5126C4);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B);
		s_Il2CppMethodInitialized = true;
	}
	SizeOverLifetimeModule_t6711CE9659123CAA5BFBFDFA9F53174CD979AC0C V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	uint32_t V_2 = 0;
	{
		// var instance = (UnityEngine.ParticleSystem.SizeOverLifetimeModule)obj;
		RuntimeObject* L_0 = ___obj1;
		V_0 = ((*(SizeOverLifetimeModule_t6711CE9659123CAA5BFBFDFA9F53174CD979AC0C*)((SizeOverLifetimeModule_t6711CE9659123CAA5BFBFDFA9F53174CD979AC0C*)(SizeOverLifetimeModule_t6711CE9659123CAA5BFBFDFA9F53174CD979AC0C*)UnBox(L_0, SizeOverLifetimeModule_t6711CE9659123CAA5BFBFDFA9F53174CD979AC0C_il2cpp_TypeInfo_var))));
		goto IL_024a;
	}

IL_000c:
	{
		String_t* L_1 = V_1;
		uint32_t L_2;
		L_2 = U3CPrivateImplementationDetailsU3E_ComputeStringHash_m9E43873DE0DF480D27EC1C2AA3C09E74EA77F75D(L_1, NULL);
		V_2 = L_2;
		uint32_t L_3 = V_2;
		if ((!(((uint32_t)L_3) <= ((uint32_t)((int32_t)1479031685)))))
		{
			goto IL_005e;
		}
	}
	{
		uint32_t L_4 = V_2;
		if ((!(((uint32_t)L_4) <= ((uint32_t)((int32_t)597743964)))))
		{
			goto IL_003b;
		}
	}
	{
		uint32_t L_5 = V_2;
		if ((((int32_t)L_5) == ((int32_t)((int32_t)49525662))))
		{
			goto IL_00a1;
		}
	}
	{
		uint32_t L_6 = V_2;
		if ((((int32_t)L_6) == ((int32_t)((int32_t)597743964))))
		{
			goto IL_00b6;
		}
	}
	{
		goto IL_0244;
	}

IL_003b:
	{
		uint32_t L_7 = V_2;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)726266686))))
		{
			goto IL_0149;
		}
	}
	{
		uint32_t L_8 = V_2;
		if ((((int32_t)L_8) == ((int32_t)((int32_t)1105436259))))
		{
			goto IL_00cb;
		}
	}
	{
		uint32_t L_9 = V_2;
		if ((((int32_t)L_9) == ((int32_t)((int32_t)1479031685))))
		{
			goto IL_015e;
		}
	}
	{
		goto IL_0244;
	}

IL_005e:
	{
		uint32_t L_10 = V_2;
		if ((!(((uint32_t)L_10) <= ((uint32_t)((int32_t)-585050980)))))
		{
			goto IL_007e;
		}
	}
	{
		uint32_t L_11 = V_2;
		if ((((int32_t)L_11) == ((int32_t)((int32_t)-1013869429))))
		{
			goto IL_011f;
		}
	}
	{
		uint32_t L_12 = V_2;
		if ((((int32_t)L_12) == ((int32_t)((int32_t)-585050980))))
		{
			goto IL_00f5;
		}
	}
	{
		goto IL_0244;
	}

IL_007e:
	{
		uint32_t L_13 = V_2;
		if ((((int32_t)L_13) == ((int32_t)((int32_t)-66302220))))
		{
			goto IL_010a;
		}
	}
	{
		uint32_t L_14 = V_2;
		if ((((int32_t)L_14) == ((int32_t)((int32_t)-49524601))))
		{
			goto IL_00e0;
		}
	}
	{
		uint32_t L_15 = V_2;
		if ((((int32_t)L_15) == ((int32_t)((int32_t)-15969363))))
		{
			goto IL_0134;
		}
	}
	{
		goto IL_0244;
	}

IL_00a1:
	{
		String_t* L_16 = V_1;
		bool L_17;
		L_17 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_16, _stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B, NULL);
		if (L_17)
		{
			goto IL_0173;
		}
	}
	{
		goto IL_0244;
	}

IL_00b6:
	{
		String_t* L_18 = V_1;
		bool L_19;
		L_19 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_18, _stringLiteral3EE5A4671A4E5AEBD31CA5F013A7773DC18ED22B, NULL);
		if (L_19)
		{
			goto IL_018a;
		}
	}
	{
		goto IL_0244;
	}

IL_00cb:
	{
		String_t* L_20 = V_1;
		bool L_21;
		L_21 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_20, _stringLiteralBD0DD0004699EF86BF0FC1D161FA3766AF5126C4, NULL);
		if (L_21)
		{
			goto IL_01a1;
		}
	}
	{
		goto IL_0244;
	}

IL_00e0:
	{
		String_t* L_22 = V_1;
		bool L_23;
		L_23 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_22, _stringLiteral062DB096C728515E033CF8C48A1C1F0B9A79384B, NULL);
		if (L_23)
		{
			goto IL_01b8;
		}
	}
	{
		goto IL_0244;
	}

IL_00f5:
	{
		String_t* L_24 = V_1;
		bool L_25;
		L_25 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_24, _stringLiteral8C6F88DEE0DFE3513BB8B44A8CF0FEE437F4EFFB, NULL);
		if (L_25)
		{
			goto IL_01cc;
		}
	}
	{
		goto IL_0244;
	}

IL_010a:
	{
		String_t* L_26 = V_1;
		bool L_27;
		L_27 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_26, _stringLiteral9384C6EF2DA5C0BD5274A0DACFF291D0ABBFD8B1, NULL);
		if (L_27)
		{
			goto IL_01e0;
		}
	}
	{
		goto IL_0244;
	}

IL_011f:
	{
		String_t* L_28 = V_1;
		bool L_29;
		L_29 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_28, _stringLiteral9E61658953B4F9BB4A05E3D2D2BC18990BADE934, NULL);
		if (L_29)
		{
			goto IL_01f4;
		}
	}
	{
		goto IL_0244;
	}

IL_0134:
	{
		String_t* L_30 = V_1;
		bool L_31;
		L_31 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_30, _stringLiteral9CE1604D659135925CCC4DD1F526AFFE42E689F1, NULL);
		if (L_31)
		{
			goto IL_0208;
		}
	}
	{
		goto IL_0244;
	}

IL_0149:
	{
		String_t* L_32 = V_1;
		bool L_33;
		L_33 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_32, _stringLiteral2F8690361553406965679AEF125F896BC5FC61F5, NULL);
		if (L_33)
		{
			goto IL_021c;
		}
	}
	{
		goto IL_0244;
	}

IL_015e:
	{
		String_t* L_34 = V_1;
		bool L_35;
		L_35 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_34, _stringLiteral1B024D537329B86AB0DF96B2A714180F442F53E9, NULL);
		if (L_35)
		{
			goto IL_0230;
		}
	}
	{
		goto IL_0244;
	}

IL_0173:
	{
		// instance.enabled = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_36 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_37 = ((ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_36);
		bool L_38;
		L_38 = GenericVirtualFuncInvoker1< bool, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mFFB70EE53D8CD0255A4E599780F62A3EB1520E83_RuntimeMethod_var, L_36, L_37);
		SizeOverLifetimeModule_set_enabled_mC45334E7AC31CCBE1CFA531D28D29E1BD38D5D6F((&V_0), L_38, NULL);
		// break;
		goto IL_024a;
	}

IL_018a:
	{
		// instance.size = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_39 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_40 = ((ES3Type_MinMaxCurve_t1C147718750ACBECE5D2B7F545D2A434A3C5409B_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t1C147718750ACBECE5D2B7F545D2A434A3C5409B_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_39);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_41;
		L_41 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_m9D6B4042B923127DEA4A2CAA3E35EED37D75B3D0_RuntimeMethod_var, L_39, L_40);
		SizeOverLifetimeModule_set_size_m1D5987F4FB9E948DEAA5E3D8FB21D1AFEE15EBE5((&V_0), L_41, NULL);
		// break;
		goto IL_024a;
	}

IL_01a1:
	{
		// instance.sizeMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_42 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_43 = ((ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_42);
		float L_44;
		L_44 = GenericVirtualFuncInvoker1< float, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mA86928BC888E342D2C2644535E3399952F5077ED_RuntimeMethod_var, L_42, L_43);
		SizeOverLifetimeModule_set_sizeMultiplier_mE97DDCFF7A3065E4E1709EE66C8A524268A757EF((&V_0), L_44, NULL);
		// break;
		goto IL_024a;
	}

IL_01b8:
	{
		// instance.x = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_45 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_46 = ((ES3Type_MinMaxCurve_t1C147718750ACBECE5D2B7F545D2A434A3C5409B_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t1C147718750ACBECE5D2B7F545D2A434A3C5409B_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_45);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_47;
		L_47 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_m9D6B4042B923127DEA4A2CAA3E35EED37D75B3D0_RuntimeMethod_var, L_45, L_46);
		SizeOverLifetimeModule_set_x_m7B791B7E4BE55CC4CE1FB815C2E09DBAB05F027A((&V_0), L_47, NULL);
		// break;
		goto IL_024a;
	}

IL_01cc:
	{
		// instance.xMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_48 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_49 = ((ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_48);
		float L_50;
		L_50 = GenericVirtualFuncInvoker1< float, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mA86928BC888E342D2C2644535E3399952F5077ED_RuntimeMethod_var, L_48, L_49);
		SizeOverLifetimeModule_set_xMultiplier_mD17EFB03D20765192F5772A17573D777DB261910((&V_0), L_50, NULL);
		// break;
		goto IL_024a;
	}

IL_01e0:
	{
		// instance.y = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_51 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_52 = ((ES3Type_MinMaxCurve_t1C147718750ACBECE5D2B7F545D2A434A3C5409B_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t1C147718750ACBECE5D2B7F545D2A434A3C5409B_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_51);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_53;
		L_53 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_m9D6B4042B923127DEA4A2CAA3E35EED37D75B3D0_RuntimeMethod_var, L_51, L_52);
		SizeOverLifetimeModule_set_y_mB9138A8037FF0084FE6DED3DC9D81E0D926C6601((&V_0), L_53, NULL);
		// break;
		goto IL_024a;
	}

IL_01f4:
	{
		// instance.yMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_54 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_55 = ((ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_54);
		float L_56;
		L_56 = GenericVirtualFuncInvoker1< float, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mA86928BC888E342D2C2644535E3399952F5077ED_RuntimeMethod_var, L_54, L_55);
		SizeOverLifetimeModule_set_yMultiplier_mAFF1869E535B324384AB01214B246819306439D4((&V_0), L_56, NULL);
		// break;
		goto IL_024a;
	}

IL_0208:
	{
		// instance.z = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_57 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_58 = ((ES3Type_MinMaxCurve_t1C147718750ACBECE5D2B7F545D2A434A3C5409B_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t1C147718750ACBECE5D2B7F545D2A434A3C5409B_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_57);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_59;
		L_59 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_m9D6B4042B923127DEA4A2CAA3E35EED37D75B3D0_RuntimeMethod_var, L_57, L_58);
		SizeOverLifetimeModule_set_z_m2F0D3BC817F95F78D37543F7A54C9CA0D5D87263((&V_0), L_59, NULL);
		// break;
		goto IL_024a;
	}

IL_021c:
	{
		// instance.zMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_60 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_61 = ((ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_60);
		float L_62;
		L_62 = GenericVirtualFuncInvoker1< float, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mA86928BC888E342D2C2644535E3399952F5077ED_RuntimeMethod_var, L_60, L_61);
		SizeOverLifetimeModule_set_zMultiplier_m97864CAC5D1B8936456B33989CCBA3A12870A3F4((&V_0), L_62, NULL);
		// break;
		goto IL_024a;
	}

IL_0230:
	{
		// instance.separateAxes = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_63 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_64 = ((ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_63);
		bool L_65;
		L_65 = GenericVirtualFuncInvoker1< bool, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mFFB70EE53D8CD0255A4E599780F62A3EB1520E83_RuntimeMethod_var, L_63, L_64);
		SizeOverLifetimeModule_set_separateAxes_mC07A349FA5AF44C8937B7DE7ECEEA8F871B13EED((&V_0), L_65, NULL);
		// break;
		goto IL_024a;
	}

IL_0244:
	{
		// reader.Skip();
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_66 = ___reader0;
		NullCheck(L_66);
		VirtualActionInvoker0::Invoke(41 /* System.Void ES3Reader::Skip() */, L_66);
	}

IL_024a:
	{
		// while((propertyName = reader.ReadPropertyName()) != null)
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_67 = ___reader0;
		NullCheck(L_67);
		String_t* L_68;
		L_68 = VirtualFuncInvoker0< String_t* >::Invoke(21 /* System.String ES3Reader::ReadPropertyName() */, L_67);
		String_t* L_69 = L_68;
		V_1 = L_69;
		if (L_69)
		{
			goto IL_000c;
		}
	}
	{
		// }
		return;
	}
}
// System.Void ES3Types.ES3Type_SizeOverLifetimeModule::ReadInto<UnityEngine.ParticleSystem/VelocityOverLifetimeModule>(ES3Reader,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ES3Type_SizeOverLifetimeModule_ReadInto_TisVelocityOverLifetimeModule_tB4A3291E3D2E850257EE3F8344AAEDA06D7FCE56_mF3504E3AE969D2A5C11B94F8DEE8F08F296A5E0F_gshared (ES3Type_SizeOverLifetimeModule_tE76521DF6C9288642AE09CBD10810E97A6038CAF* __this, ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* ___reader0, RuntimeObject* ___obj1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mFFB70EE53D8CD0255A4E599780F62A3EB1520E83_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_m9D6B4042B923127DEA4A2CAA3E35EED37D75B3D0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mA86928BC888E342D2C2644535E3399952F5077ED_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_MinMaxCurve_t1C147718750ACBECE5D2B7F545D2A434A3C5409B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SizeOverLifetimeModule_t6711CE9659123CAA5BFBFDFA9F53174CD979AC0C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral062DB096C728515E033CF8C48A1C1F0B9A79384B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1B024D537329B86AB0DF96B2A714180F442F53E9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2F8690361553406965679AEF125F896BC5FC61F5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3EE5A4671A4E5AEBD31CA5F013A7773DC18ED22B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8C6F88DEE0DFE3513BB8B44A8CF0FEE437F4EFFB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9384C6EF2DA5C0BD5274A0DACFF291D0ABBFD8B1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9CE1604D659135925CCC4DD1F526AFFE42E689F1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9E61658953B4F9BB4A05E3D2D2BC18990BADE934);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBD0DD0004699EF86BF0FC1D161FA3766AF5126C4);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B);
		s_Il2CppMethodInitialized = true;
	}
	SizeOverLifetimeModule_t6711CE9659123CAA5BFBFDFA9F53174CD979AC0C V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	uint32_t V_2 = 0;
	{
		// var instance = (UnityEngine.ParticleSystem.SizeOverLifetimeModule)obj;
		RuntimeObject* L_0 = ___obj1;
		V_0 = ((*(SizeOverLifetimeModule_t6711CE9659123CAA5BFBFDFA9F53174CD979AC0C*)((SizeOverLifetimeModule_t6711CE9659123CAA5BFBFDFA9F53174CD979AC0C*)(SizeOverLifetimeModule_t6711CE9659123CAA5BFBFDFA9F53174CD979AC0C*)UnBox(L_0, SizeOverLifetimeModule_t6711CE9659123CAA5BFBFDFA9F53174CD979AC0C_il2cpp_TypeInfo_var))));
		goto IL_024a;
	}

IL_000c:
	{
		String_t* L_1 = V_1;
		uint32_t L_2;
		L_2 = U3CPrivateImplementationDetailsU3E_ComputeStringHash_m9E43873DE0DF480D27EC1C2AA3C09E74EA77F75D(L_1, NULL);
		V_2 = L_2;
		uint32_t L_3 = V_2;
		if ((!(((uint32_t)L_3) <= ((uint32_t)((int32_t)1479031685)))))
		{
			goto IL_005e;
		}
	}
	{
		uint32_t L_4 = V_2;
		if ((!(((uint32_t)L_4) <= ((uint32_t)((int32_t)597743964)))))
		{
			goto IL_003b;
		}
	}
	{
		uint32_t L_5 = V_2;
		if ((((int32_t)L_5) == ((int32_t)((int32_t)49525662))))
		{
			goto IL_00a1;
		}
	}
	{
		uint32_t L_6 = V_2;
		if ((((int32_t)L_6) == ((int32_t)((int32_t)597743964))))
		{
			goto IL_00b6;
		}
	}
	{
		goto IL_0244;
	}

IL_003b:
	{
		uint32_t L_7 = V_2;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)726266686))))
		{
			goto IL_0149;
		}
	}
	{
		uint32_t L_8 = V_2;
		if ((((int32_t)L_8) == ((int32_t)((int32_t)1105436259))))
		{
			goto IL_00cb;
		}
	}
	{
		uint32_t L_9 = V_2;
		if ((((int32_t)L_9) == ((int32_t)((int32_t)1479031685))))
		{
			goto IL_015e;
		}
	}
	{
		goto IL_0244;
	}

IL_005e:
	{
		uint32_t L_10 = V_2;
		if ((!(((uint32_t)L_10) <= ((uint32_t)((int32_t)-585050980)))))
		{
			goto IL_007e;
		}
	}
	{
		uint32_t L_11 = V_2;
		if ((((int32_t)L_11) == ((int32_t)((int32_t)-1013869429))))
		{
			goto IL_011f;
		}
	}
	{
		uint32_t L_12 = V_2;
		if ((((int32_t)L_12) == ((int32_t)((int32_t)-585050980))))
		{
			goto IL_00f5;
		}
	}
	{
		goto IL_0244;
	}

IL_007e:
	{
		uint32_t L_13 = V_2;
		if ((((int32_t)L_13) == ((int32_t)((int32_t)-66302220))))
		{
			goto IL_010a;
		}
	}
	{
		uint32_t L_14 = V_2;
		if ((((int32_t)L_14) == ((int32_t)((int32_t)-49524601))))
		{
			goto IL_00e0;
		}
	}
	{
		uint32_t L_15 = V_2;
		if ((((int32_t)L_15) == ((int32_t)((int32_t)-15969363))))
		{
			goto IL_0134;
		}
	}
	{
		goto IL_0244;
	}

IL_00a1:
	{
		String_t* L_16 = V_1;
		bool L_17;
		L_17 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_16, _stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B, NULL);
		if (L_17)
		{
			goto IL_0173;
		}
	}
	{
		goto IL_0244;
	}

IL_00b6:
	{
		String_t* L_18 = V_1;
		bool L_19;
		L_19 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_18, _stringLiteral3EE5A4671A4E5AEBD31CA5F013A7773DC18ED22B, NULL);
		if (L_19)
		{
			goto IL_018a;
		}
	}
	{
		goto IL_0244;
	}

IL_00cb:
	{
		String_t* L_20 = V_1;
		bool L_21;
		L_21 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_20, _stringLiteralBD0DD0004699EF86BF0FC1D161FA3766AF5126C4, NULL);
		if (L_21)
		{
			goto IL_01a1;
		}
	}
	{
		goto IL_0244;
	}

IL_00e0:
	{
		String_t* L_22 = V_1;
		bool L_23;
		L_23 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_22, _stringLiteral062DB096C728515E033CF8C48A1C1F0B9A79384B, NULL);
		if (L_23)
		{
			goto IL_01b8;
		}
	}
	{
		goto IL_0244;
	}

IL_00f5:
	{
		String_t* L_24 = V_1;
		bool L_25;
		L_25 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_24, _stringLiteral8C6F88DEE0DFE3513BB8B44A8CF0FEE437F4EFFB, NULL);
		if (L_25)
		{
			goto IL_01cc;
		}
	}
	{
		goto IL_0244;
	}

IL_010a:
	{
		String_t* L_26 = V_1;
		bool L_27;
		L_27 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_26, _stringLiteral9384C6EF2DA5C0BD5274A0DACFF291D0ABBFD8B1, NULL);
		if (L_27)
		{
			goto IL_01e0;
		}
	}
	{
		goto IL_0244;
	}

IL_011f:
	{
		String_t* L_28 = V_1;
		bool L_29;
		L_29 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_28, _stringLiteral9E61658953B4F9BB4A05E3D2D2BC18990BADE934, NULL);
		if (L_29)
		{
			goto IL_01f4;
		}
	}
	{
		goto IL_0244;
	}

IL_0134:
	{
		String_t* L_30 = V_1;
		bool L_31;
		L_31 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_30, _stringLiteral9CE1604D659135925CCC4DD1F526AFFE42E689F1, NULL);
		if (L_31)
		{
			goto IL_0208;
		}
	}
	{
		goto IL_0244;
	}

IL_0149:
	{
		String_t* L_32 = V_1;
		bool L_33;
		L_33 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_32, _stringLiteral2F8690361553406965679AEF125F896BC5FC61F5, NULL);
		if (L_33)
		{
			goto IL_021c;
		}
	}
	{
		goto IL_0244;
	}

IL_015e:
	{
		String_t* L_34 = V_1;
		bool L_35;
		L_35 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_34, _stringLiteral1B024D537329B86AB0DF96B2A714180F442F53E9, NULL);
		if (L_35)
		{
			goto IL_0230;
		}
	}
	{
		goto IL_0244;
	}

IL_0173:
	{
		// instance.enabled = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_36 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_37 = ((ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_36);
		bool L_38;
		L_38 = GenericVirtualFuncInvoker1< bool, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mFFB70EE53D8CD0255A4E599780F62A3EB1520E83_RuntimeMethod_var, L_36, L_37);
		SizeOverLifetimeModule_set_enabled_mC45334E7AC31CCBE1CFA531D28D29E1BD38D5D6F((&V_0), L_38, NULL);
		// break;
		goto IL_024a;
	}

IL_018a:
	{
		// instance.size = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_39 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_40 = ((ES3Type_MinMaxCurve_t1C147718750ACBECE5D2B7F545D2A434A3C5409B_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t1C147718750ACBECE5D2B7F545D2A434A3C5409B_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_39);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_41;
		L_41 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_m9D6B4042B923127DEA4A2CAA3E35EED37D75B3D0_RuntimeMethod_var, L_39, L_40);
		SizeOverLifetimeModule_set_size_m1D5987F4FB9E948DEAA5E3D8FB21D1AFEE15EBE5((&V_0), L_41, NULL);
		// break;
		goto IL_024a;
	}

IL_01a1:
	{
		// instance.sizeMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_42 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_43 = ((ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_42);
		float L_44;
		L_44 = GenericVirtualFuncInvoker1< float, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mA86928BC888E342D2C2644535E3399952F5077ED_RuntimeMethod_var, L_42, L_43);
		SizeOverLifetimeModule_set_sizeMultiplier_mE97DDCFF7A3065E4E1709EE66C8A524268A757EF((&V_0), L_44, NULL);
		// break;
		goto IL_024a;
	}

IL_01b8:
	{
		// instance.x = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_45 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_46 = ((ES3Type_MinMaxCurve_t1C147718750ACBECE5D2B7F545D2A434A3C5409B_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t1C147718750ACBECE5D2B7F545D2A434A3C5409B_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_45);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_47;
		L_47 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_m9D6B4042B923127DEA4A2CAA3E35EED37D75B3D0_RuntimeMethod_var, L_45, L_46);
		SizeOverLifetimeModule_set_x_m7B791B7E4BE55CC4CE1FB815C2E09DBAB05F027A((&V_0), L_47, NULL);
		// break;
		goto IL_024a;
	}

IL_01cc:
	{
		// instance.xMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_48 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_49 = ((ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_48);
		float L_50;
		L_50 = GenericVirtualFuncInvoker1< float, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mA86928BC888E342D2C2644535E3399952F5077ED_RuntimeMethod_var, L_48, L_49);
		SizeOverLifetimeModule_set_xMultiplier_mD17EFB03D20765192F5772A17573D777DB261910((&V_0), L_50, NULL);
		// break;
		goto IL_024a;
	}

IL_01e0:
	{
		// instance.y = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_51 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_52 = ((ES3Type_MinMaxCurve_t1C147718750ACBECE5D2B7F545D2A434A3C5409B_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t1C147718750ACBECE5D2B7F545D2A434A3C5409B_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_51);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_53;
		L_53 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_m9D6B4042B923127DEA4A2CAA3E35EED37D75B3D0_RuntimeMethod_var, L_51, L_52);
		SizeOverLifetimeModule_set_y_mB9138A8037FF0084FE6DED3DC9D81E0D926C6601((&V_0), L_53, NULL);
		// break;
		goto IL_024a;
	}

IL_01f4:
	{
		// instance.yMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_54 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_55 = ((ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_54);
		float L_56;
		L_56 = GenericVirtualFuncInvoker1< float, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mA86928BC888E342D2C2644535E3399952F5077ED_RuntimeMethod_var, L_54, L_55);
		SizeOverLifetimeModule_set_yMultiplier_mAFF1869E535B324384AB01214B246819306439D4((&V_0), L_56, NULL);
		// break;
		goto IL_024a;
	}

IL_0208:
	{
		// instance.z = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_57 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_58 = ((ES3Type_MinMaxCurve_t1C147718750ACBECE5D2B7F545D2A434A3C5409B_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t1C147718750ACBECE5D2B7F545D2A434A3C5409B_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_57);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_59;
		L_59 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_m9D6B4042B923127DEA4A2CAA3E35EED37D75B3D0_RuntimeMethod_var, L_57, L_58);
		SizeOverLifetimeModule_set_z_m2F0D3BC817F95F78D37543F7A54C9CA0D5D87263((&V_0), L_59, NULL);
		// break;
		goto IL_024a;
	}

IL_021c:
	{
		// instance.zMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_60 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_61 = ((ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_60);
		float L_62;
		L_62 = GenericVirtualFuncInvoker1< float, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mA86928BC888E342D2C2644535E3399952F5077ED_RuntimeMethod_var, L_60, L_61);
		SizeOverLifetimeModule_set_zMultiplier_m97864CAC5D1B8936456B33989CCBA3A12870A3F4((&V_0), L_62, NULL);
		// break;
		goto IL_024a;
	}

IL_0230:
	{
		// instance.separateAxes = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_63 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_64 = ((ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_63);
		bool L_65;
		L_65 = GenericVirtualFuncInvoker1< bool, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mFFB70EE53D8CD0255A4E599780F62A3EB1520E83_RuntimeMethod_var, L_63, L_64);
		SizeOverLifetimeModule_set_separateAxes_mC07A349FA5AF44C8937B7DE7ECEEA8F871B13EED((&V_0), L_65, NULL);
		// break;
		goto IL_024a;
	}

IL_0244:
	{
		// reader.Skip();
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_66 = ___reader0;
		NullCheck(L_66);
		VirtualActionInvoker0::Invoke(41 /* System.Void ES3Reader::Skip() */, L_66);
	}

IL_024a:
	{
		// while((propertyName = reader.ReadPropertyName()) != null)
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_67 = ___reader0;
		NullCheck(L_67);
		String_t* L_68;
		L_68 = VirtualFuncInvoker0< String_t* >::Invoke(21 /* System.String ES3Reader::ReadPropertyName() */, L_67);
		String_t* L_69 = L_68;
		V_1 = L_69;
		if (L_69)
		{
			goto IL_000c;
		}
	}
	{
		// }
		return;
	}
}
// System.Void ES3Types.ES3Type_SkinnedMeshRenderer::ReadComponent<System.Object>(ES3Reader,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ES3Type_SkinnedMeshRenderer_ReadComponent_TisRuntimeObject_m24F87EDB0EFE54AFDB1D5498CB0038D2A996471F_gshared (ES3Type_SkinnedMeshRenderer_tE179CAC07F64CE96B5AE4AB3EFB409C2E3E80111* __this, ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* ___reader0, RuntimeObject* ___obj1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mFFB70EE53D8CD0255A4E599780F62A3EB1520E83_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisBounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3_m1DAB1D2953772FCB56E7DB24E9D86F3CB42348F4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_mF17F721F02D9912C0E9F95ADE84A7350175EA7FF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mEFCC4D52DD5B822D3561A53591AE11CDB25CDB6F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisLightProbeUsage_tC6292C7B7CBA0E5AA2A56F40D71F58A7E06C2948_m66BEF16A5A89E757FF33443DDD5CE1051BB50376_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisMaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D_mD6C0F6DE0DFCBEEE0ECC2806C3C76B9B9AA49622_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisMesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4_m34F6C712B26BFE70E5AAC03798D838583D35D02A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisMotionVectorGenerationMode_tE87C61556749260EF5429A0F8FE55DAD30EEAFCB_m8282A371C977788F369BE28A7EC6D07EDA8A24D8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisReflectionProbeUsage_t033508C14CD4AD926A3A215D19913DC21EA22705_m8D386D0E2DCEF800E206280828E9F9989F462116_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisShadowCastingMode_tF30806698B37CF120A1A506BD7549EAF308E7C6D_mE74883DA1F57042CE2132D08265B7EDE224066CE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisSingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C_m73C3BB10EE1FD2C09B6F97D71FD9BD5ACB2F4FA4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisSkinQuality_tFFFBBA855612EBEAC68BFEBCD1D8F62B26DE3827_mF061E855D0FB551C60214FFF55182CCBDE0BF26D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisString_t_mE83D478C999E69292DB9310C2993B1EE7DD28021_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisTransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24_m8635375AFDE804EDFCACC9B81EF50E56F116BB14_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisTransform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1_mB5F67B5F1812826BAC1CF736E8760BF608548454_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_m6D7FA5D5608370867F7E593271DDFE9DB2CEBD88_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_Bounds_t7DD589E28271A151FBD0712F3599D195980A6248_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_GameObject_t7AACC3CCF9FD31A285F90A28AE3331E69A1F02B2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_Mesh_tB7CD0BF677668097D339633406535F749DDDFE48_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_Transform_t744F7C45C7A4F966265500803F08C4965797DAD7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_Vector4_t20EB9288ABFACFA144B849DBAE5F00003E5D3EF1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_floatArray_t43478D8ECEDD09DE4F813A5C0C077252B6E3930A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_int_t05A5E7A96442F23CE33E24A71CD349372A70E0C3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_string_t0C89CCA6F02AF5B46E66DEF92E77FCEC83C2F068_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SkinnedMeshRenderer_t020C4E8648EA1C4C6BA5C41502919B387E7E1C2E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1F9261ABE85940E10CA48B7B42F1E5267F122734);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral23EC2E17148B28CC0FCAC476B21E689161203B19);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral338DFB21C4BCDE10C2A6B0F6B758581AB45E283A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3EC42735CF07DB9169F6821DC94EB45DE6B5E1AA);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral49E8F5255C0235CF3C6747DD1A447699E1AA2759);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4E04E7564B2B76DBD228760282F0982D7BC0AFDA);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral73792CCBAF937C765700AA0D7388BC226F003166);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7E7975F5870DE751BD38D4E3A4C0644FFCF21C5F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral82A38EB534B163662598A55A70842F5AA8919477);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral843D6122FFBBF465C80ECD6FDFC0DF88BEAF4E14);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral892582A238DF4FFEB2A2E7DD5D90A9A7AC6C26C4);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8DD0A7170C2DECE4F5E82F96AB9B00AAEBA9F438);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8F76FFC503D9127950E3EAD1DFD82A8C6C91F728);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA0ECA3668A8B14855295BD8DD5E88309AF31330B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBCA8FD5F6CF117BC613330313E82DF905908323F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBDBEBC1E8A863EAF2A1EFDC4D2393F1540ABF0C9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC51D373B25723E8ADF9BE9C06A196725DF68C54E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC5F2406640F4F08577B3ADFE0B94DDC1B821F406);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC8D7651AAAFAAA9A55123A4B14C546BC27C603E7);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCFEB83A996CD34035197889D46A13DB9901EE76F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD0D915A2B403702AB1F18A340F6557F4030455A2);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDDA23639367EB0B86F361EA02AD294BDFDE6BA0B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE5F2AD4FF502002CA1798B22867D45AAB84AB3BD);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF04D2BD9D99AD6218FC8C63B094FB3F1333E7F44);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B);
		s_Il2CppMethodInitialized = true;
	}
	SkinnedMeshRenderer_t020C4E8648EA1C4C6BA5C41502919B387E7E1C2E* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	String_t* V_2 = NULL;
	SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* V_3 = NULL;
	uint32_t V_4 = 0;
	int32_t V_5 = 0;
	RuntimeObject* V_6 = NULL;
	{
		// var instance = (UnityEngine.SkinnedMeshRenderer)obj;
		RuntimeObject* L_0 = ___obj1;
		V_0 = ((SkinnedMeshRenderer_t020C4E8648EA1C4C6BA5C41502919B387E7E1C2E*)CastclassClass((RuntimeObject*)L_0, SkinnedMeshRenderer_t020C4E8648EA1C4C6BA5C41502919B387E7E1C2E_il2cpp_TypeInfo_var));
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

FINALLY_05e5:
			{// begin finally (depth: 1)
				{
					RuntimeObject* L_4 = V_1;
					V_6 = ((RuntimeObject*)IsInst((RuntimeObject*)L_4, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var));
					RuntimeObject* L_5 = V_6;
					if (!L_5)
					{
						goto IL_05f8;
					}
				}
				{
					RuntimeObject* L_6 = V_6;
					NullCheck(L_6);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_6);
				}

IL_05f8:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_05d8_1;
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
				L_10 = U3CPrivateImplementationDetailsU3E_ComputeStringHash_m9E43873DE0DF480D27EC1C2AA3C09E74EA77F75D(L_9, NULL);
				V_4 = L_10;
				uint32_t L_11 = V_4;
				if ((!(((uint32_t)L_11) <= ((uint32_t)((int32_t)1435400483)))))
				{
					goto IL_00f7_1;
				}
			}
			{
				uint32_t L_12 = V_4;
				if ((!(((uint32_t)L_12) <= ((uint32_t)((int32_t)394058932)))))
				{
					goto IL_009c_1;
				}
			}
			{
				uint32_t L_13 = V_4;
				if ((!(((uint32_t)L_13) <= ((uint32_t)((int32_t)257228247)))))
				{
					goto IL_0073_1;
				}
			}
			{
				uint32_t L_14 = V_4;
				if ((((int32_t)L_14) == ((int32_t)((int32_t)49525662))))
				{
					goto IL_0246_1;
				}
			}
			{
				uint32_t L_15 = V_4;
				if ((((int32_t)L_15) == ((int32_t)((int32_t)242590710))))
				{
					goto IL_0396_1;
				}
			}
			{
				uint32_t L_16 = V_4;
				if ((((int32_t)L_16) == ((int32_t)((int32_t)257228247))))
				{
					goto IL_021c_1;
				}
			}
			{
				goto IL_05d2_1;
			}

IL_0073_1:
			{
				uint32_t L_17 = V_4;
				if ((((int32_t)L_17) == ((int32_t)((int32_t)258071601))))
				{
					goto IL_0342_1;
				}
			}
			{
				uint32_t L_18 = V_4;
				if ((((int32_t)L_18) == ((int32_t)((int32_t)369730773))))
				{
					goto IL_029a_1;
				}
			}
			{
				uint32_t L_19 = V_4;
				if ((((int32_t)L_19) == ((int32_t)((int32_t)394058932))))
				{
					goto IL_02c4_1;
				}
			}
			{
				goto IL_05d2_1;
			}

IL_009c_1:
			{
				uint32_t L_20 = V_4;
				if ((!(((uint32_t)L_20) <= ((uint32_t)((int32_t)899577978)))))
				{
					goto IL_00ce_1;
				}
			}
			{
				uint32_t L_21 = V_4;
				if ((((int32_t)L_21) == ((int32_t)((int32_t)441150745))))
				{
					goto IL_01f2_1;
				}
			}
			{
				uint32_t L_22 = V_4;
				if ((((int32_t)L_22) == ((int32_t)((int32_t)560621451))))
				{
					goto IL_0270_1;
				}
			}
			{
				uint32_t L_23 = V_4;
				if ((((int32_t)L_23) == ((int32_t)((int32_t)899577978))))
				{
					goto IL_02af_1;
				}
			}
			{
				goto IL_05d2_1;
			}

IL_00ce_1:
			{
				uint32_t L_24 = V_4;
				if ((((int32_t)L_24) == ((int32_t)((int32_t)1039612288))))
				{
					goto IL_032d_1;
				}
			}
			{
				uint32_t L_25 = V_4;
				if ((((int32_t)L_25) == ((int32_t)((int32_t)1284321245))))
				{
					goto IL_0207_1;
				}
			}
			{
				uint32_t L_26 = V_4;
				if ((((int32_t)L_26) == ((int32_t)((int32_t)1435400483))))
				{
					goto IL_0357_1;
				}
			}
			{
				goto IL_05d2_1;
			}

IL_00f7_1:
			{
				uint32_t L_27 = V_4;
				if ((!(((uint32_t)L_27) <= ((uint32_t)((int32_t)-1592541260)))))
				{
					goto IL_0158_1;
				}
			}
			{
				uint32_t L_28 = V_4;
				if ((!(((uint32_t)L_28) <= ((uint32_t)((int32_t)2056288458)))))
				{
					goto IL_0132_1;
				}
			}
			{
				uint32_t L_29 = V_4;
				if ((((int32_t)L_29) == ((int32_t)((int32_t)1681590497))))
				{
					goto IL_0381_1;
				}
			}
			{
				uint32_t L_30 = V_4;
				if ((((int32_t)L_30) == ((int32_t)((int32_t)1913193519))))
				{
					goto IL_01c8_1;
				}
			}
			{
				uint32_t L_31 = V_4;
				if ((((int32_t)L_31) == ((int32_t)((int32_t)2056288458))))
				{
					goto IL_0285_1;
				}
			}
			{
				goto IL_05d2_1;
			}

IL_0132_1:
			{
				uint32_t L_32 = V_4;
				if ((((int32_t)L_32) == ((int32_t)((int32_t)2066010489))))
				{
					goto IL_02d9_1;
				}
			}
			{
				uint32_t L_33 = V_4;
				if ((((int32_t)L_33) == ((int32_t)((int32_t)-1697296346))))
				{
					goto IL_01dd_1;
				}
			}
			{
				uint32_t L_34 = V_4;
				if ((((int32_t)L_34) == ((int32_t)((int32_t)-1592541260))))
				{
					goto IL_01b3_1;
				}
			}
			{
				goto IL_05d2_1;
			}

IL_0158_1:
			{
				uint32_t L_35 = V_4;
				if ((!(((uint32_t)L_35) <= ((uint32_t)((int32_t)-641088577)))))
				{
					goto IL_018a_1;
				}
			}
			{
				uint32_t L_36 = V_4;
				if ((((int32_t)L_36) == ((int32_t)((int32_t)-1450632603))))
				{
					goto IL_025b_1;
				}
			}
			{
				uint32_t L_37 = V_4;
				if ((((int32_t)L_37) == ((int32_t)((int32_t)-879427281))))
				{
					goto IL_02ee_1;
				}
			}
			{
				uint32_t L_38 = V_4;
				if ((((int32_t)L_38) == ((int32_t)((int32_t)-641088577))))
				{
					goto IL_0318_1;
				}
			}
			{
				goto IL_05d2_1;
			}

IL_018a_1:
			{
				uint32_t L_39 = V_4;
				if ((((int32_t)L_39) == ((int32_t)((int32_t)-373578199))))
				{
					goto IL_0231_1;
				}
			}
			{
				uint32_t L_40 = V_4;
				if ((((int32_t)L_40) == ((int32_t)((int32_t)-170312451))))
				{
					goto IL_036c_1;
				}
			}
			{
				uint32_t L_41 = V_4;
				if ((((int32_t)L_41) == ((int32_t)((int32_t)-95858950))))
				{
					goto IL_0303_1;
				}
			}
			{
				goto IL_05d2_1;
			}

IL_01b3_1:
			{
				String_t* L_42 = V_2;
				bool L_43;
				L_43 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_42, _stringLiteral49E8F5255C0235CF3C6747DD1A447699E1AA2759, NULL);
				if (L_43)
				{
					goto IL_03ab_1;
				}
			}
			{
				goto IL_05d2_1;
			}

IL_01c8_1:
			{
				String_t* L_44 = V_2;
				bool L_45;
				L_45 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_44, _stringLiteral4E04E7564B2B76DBD228760282F0982D7BC0AFDA, NULL);
				if (L_45)
				{
					goto IL_03bc_1;
				}
			}
			{
				goto IL_05d2_1;
			}

IL_01dd_1:
			{
				String_t* L_46 = V_2;
				bool L_47;
				L_47 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_46, _stringLiteralC5F2406640F4F08577B3ADFE0B94DDC1B821F406, NULL);
				if (L_47)
				{
					goto IL_03d2_1;
				}
			}
			{
				goto IL_05d2_1;
			}

IL_01f2_1:
			{
				String_t* L_48 = V_2;
				bool L_49;
				L_49 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_48, _stringLiteralBCA8FD5F6CF117BC613330313E82DF905908323F, NULL);
				if (L_49)
				{
					goto IL_03e3_1;
				}
			}
			{
				goto IL_05d2_1;
			}

IL_0207_1:
			{
				String_t* L_50 = V_2;
				bool L_51;
				L_51 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_50, _stringLiteralC51D373B25723E8ADF9BE9C06A196725DF68C54E, NULL);
				if (L_51)
				{
					goto IL_03f9_1;
				}
			}
			{
				goto IL_05d2_1;
			}

IL_021c_1:
			{
				String_t* L_52 = V_2;
				bool L_53;
				L_53 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_52, _stringLiteralE5F2AD4FF502002CA1798B22867D45AAB84AB3BD, NULL);
				if (L_53)
				{
					goto IL_040f_1;
				}
			}
			{
				goto IL_05d2_1;
			}

IL_0231_1:
			{
				String_t* L_54 = V_2;
				bool L_55;
				L_55 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_54, _stringLiteralCFEB83A996CD34035197889D46A13DB9901EE76F, NULL);
				if (L_55)
				{
					goto IL_0425_1;
				}
			}
			{
				goto IL_05d2_1;
			}

IL_0246_1:
			{
				String_t* L_56 = V_2;
				bool L_57;
				L_57 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_56, _stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B, NULL);
				if (L_57)
				{
					goto IL_043b_1;
				}
			}
			{
				goto IL_05d2_1;
			}

IL_025b_1:
			{
				String_t* L_58 = V_2;
				bool L_59;
				L_59 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_58, _stringLiteralD0D915A2B403702AB1F18A340F6557F4030455A2, NULL);
				if (L_59)
				{
					goto IL_0451_1;
				}
			}
			{
				goto IL_05d2_1;
			}

IL_0270_1:
			{
				String_t* L_60 = V_2;
				bool L_61;
				L_61 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_60, _stringLiteralDDA23639367EB0B86F361EA02AD294BDFDE6BA0B, NULL);
				if (L_61)
				{
					goto IL_0462_1;
				}
			}
			{
				goto IL_05d2_1;
			}

IL_0285_1:
			{
				String_t* L_62 = V_2;
				bool L_63;
				L_63 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_62, _stringLiteral23EC2E17148B28CC0FCAC476B21E689161203B19, NULL);
				if (L_63)
				{
					goto IL_0478_1;
				}
			}
			{
				goto IL_05d2_1;
			}

IL_029a_1:
			{
				String_t* L_64 = V_2;
				bool L_65;
				L_65 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_64, _stringLiteral82A38EB534B163662598A55A70842F5AA8919477, NULL);
				if (L_65)
				{
					goto IL_0489_1;
				}
			}
			{
				goto IL_05d2_1;
			}

IL_02af_1:
			{
				String_t* L_66 = V_2;
				bool L_67;
				L_67 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_66, _stringLiteral73792CCBAF937C765700AA0D7388BC226F003166, NULL);
				if (L_67)
				{
					goto IL_049f_1;
				}
			}
			{
				goto IL_05d2_1;
			}

IL_02c4_1:
			{
				String_t* L_68 = V_2;
				bool L_69;
				L_69 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_68, _stringLiteralA0ECA3668A8B14855295BD8DD5E88309AF31330B, NULL);
				if (L_69)
				{
					goto IL_04b5_1;
				}
			}
			{
				goto IL_05d2_1;
			}

IL_02d9_1:
			{
				String_t* L_70 = V_2;
				bool L_71;
				L_71 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_70, _stringLiteral8DD0A7170C2DECE4F5E82F96AB9B00AAEBA9F438, NULL);
				if (L_71)
				{
					goto IL_04cb_1;
				}
			}
			{
				goto IL_05d2_1;
			}

IL_02ee_1:
			{
				String_t* L_72 = V_2;
				bool L_73;
				L_73 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_72, _stringLiteralBDBEBC1E8A863EAF2A1EFDC4D2393F1540ABF0C9, NULL);
				if (L_73)
				{
					goto IL_04dc_1;
				}
			}
			{
				goto IL_05d2_1;
			}

IL_0303_1:
			{
				String_t* L_74 = V_2;
				bool L_75;
				L_75 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_74, _stringLiteral8F76FFC503D9127950E3EAD1DFD82A8C6C91F728, NULL);
				if (L_75)
				{
					goto IL_04f2_1;
				}
			}
			{
				goto IL_05d2_1;
			}

IL_0318_1:
			{
				String_t* L_76 = V_2;
				bool L_77;
				L_77 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_76, _stringLiteralC8D7651AAAFAAA9A55123A4B14C546BC27C603E7, NULL);
				if (L_77)
				{
					goto IL_0503_1;
				}
			}
			{
				goto IL_05d2_1;
			}

IL_032d_1:
			{
				String_t* L_78 = V_2;
				bool L_79;
				L_79 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_78, _stringLiteral338DFB21C4BCDE10C2A6B0F6B758581AB45E283A, NULL);
				if (L_79)
				{
					goto IL_0519_1;
				}
			}
			{
				goto IL_05d2_1;
			}

IL_0342_1:
			{
				String_t* L_80 = V_2;
				bool L_81;
				L_81 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_80, _stringLiteral843D6122FFBBF465C80ECD6FDFC0DF88BEAF4E14, NULL);
				if (L_81)
				{
					goto IL_052f_1;
				}
			}
			{
				goto IL_05d2_1;
			}

IL_0357_1:
			{
				String_t* L_82 = V_2;
				bool L_83;
				L_83 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_82, _stringLiteral3EC42735CF07DB9169F6821DC94EB45DE6B5E1AA, NULL);
				if (L_83)
				{
					goto IL_0540_1;
				}
			}
			{
				goto IL_05d2_1;
			}

IL_036c_1:
			{
				String_t* L_84 = V_2;
				bool L_85;
				L_85 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_84, _stringLiteral892582A238DF4FFEB2A2E7DD5D90A9A7AC6C26C4, NULL);
				if (L_85)
				{
					goto IL_0556_1;
				}
			}
			{
				goto IL_05d2_1;
			}

IL_0381_1:
			{
				String_t* L_86 = V_2;
				bool L_87;
				L_87 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_86, _stringLiteral1F9261ABE85940E10CA48B7B42F1E5267F122734, NULL);
				if (L_87)
				{
					goto IL_0569_1;
				}
			}
			{
				goto IL_05d2_1;
			}

IL_0396_1:
			{
				String_t* L_88 = V_2;
				bool L_89;
				L_89 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_88, _stringLiteralF04D2BD9D99AD6218FC8C63B094FB3F1333E7F44, NULL);
				if (L_89)
				{
					goto IL_057c_1;
				}
			}
			{
				goto IL_05d2_1;
			}

IL_03ab_1:
			{
				// instance.bones = reader.Read<UnityEngine.Transform[]>();
				SkinnedMeshRenderer_t020C4E8648EA1C4C6BA5C41502919B387E7E1C2E* L_90 = V_0;
				ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_91 = ___reader0;
				NullCheck(L_91);
				TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24* L_92;
				L_92 = GenericVirtualFuncInvoker0< TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24* >::Invoke(ES3Reader_Read_TisTransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24_m8635375AFDE804EDFCACC9B81EF50E56F116BB14_RuntimeMethod_var, L_91);
				NullCheck(L_90);
				SkinnedMeshRenderer_set_bones_m80B64F72E4E5C7901E3105594D964F25D00952D7(L_90, L_92, NULL);
				// break;
				goto IL_05d8_1;
			}

IL_03bc_1:
			{
				// instance.rootBone = reader.Read<UnityEngine.Transform>(ES3Type_Transform.Instance);
				SkinnedMeshRenderer_t020C4E8648EA1C4C6BA5C41502919B387E7E1C2E* L_93 = V_0;
				ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_94 = ___reader0;
				ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_95 = ((ES3Type_Transform_t744F7C45C7A4F966265500803F08C4965797DAD7_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Transform_t744F7C45C7A4F966265500803F08C4965797DAD7_il2cpp_TypeInfo_var))->___Instance_14;
				NullCheck(L_94);
				Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_96;
				L_96 = GenericVirtualFuncInvoker1< Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1*, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisTransform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1_mB5F67B5F1812826BAC1CF736E8760BF608548454_RuntimeMethod_var, L_94, L_95);
				NullCheck(L_93);
				SkinnedMeshRenderer_set_rootBone_m218D83F020040DB84BA06D99050D6A01A3C90355(L_93, L_96, NULL);
				// break;
				goto IL_05d8_1;
			}

IL_03d2_1:
			{
				// instance.quality = reader.Read<UnityEngine.SkinQuality>();
				SkinnedMeshRenderer_t020C4E8648EA1C4C6BA5C41502919B387E7E1C2E* L_97 = V_0;
				ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_98 = ___reader0;
				NullCheck(L_98);
				int32_t L_99;
				L_99 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisSkinQuality_tFFFBBA855612EBEAC68BFEBCD1D8F62B26DE3827_mF061E855D0FB551C60214FFF55182CCBDE0BF26D_RuntimeMethod_var, L_98);
				NullCheck(L_97);
				SkinnedMeshRenderer_set_quality_m52BBD83F9A16A3D06476C53DE12AC88D8520F7C5(L_97, L_99, NULL);
				// break;
				goto IL_05d8_1;
			}

IL_03e3_1:
			{
				// instance.sharedMesh = reader.Read<UnityEngine.Mesh>(ES3Type_Mesh.Instance);
				SkinnedMeshRenderer_t020C4E8648EA1C4C6BA5C41502919B387E7E1C2E* L_100 = V_0;
				ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_101 = ___reader0;
				ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_102 = ((ES3Type_Mesh_tB7CD0BF677668097D339633406535F749DDDFE48_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Mesh_tB7CD0BF677668097D339633406535F749DDDFE48_il2cpp_TypeInfo_var))->___Instance_12;
				NullCheck(L_101);
				Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_103;
				L_103 = GenericVirtualFuncInvoker1< Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4*, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisMesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4_m34F6C712B26BFE70E5AAC03798D838583D35D02A_RuntimeMethod_var, L_101, L_102);
				NullCheck(L_100);
				SkinnedMeshRenderer_set_sharedMesh_m3D3A431BC8B244C21EB9D01B9A10D040D7137F98(L_100, L_103, NULL);
				// break;
				goto IL_05d8_1;
			}

IL_03f9_1:
			{
				// instance.updateWhenOffscreen = reader.Read<System.Boolean>(ES3Type_bool.Instance);
				SkinnedMeshRenderer_t020C4E8648EA1C4C6BA5C41502919B387E7E1C2E* L_104 = V_0;
				ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_105 = ___reader0;
				ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_106 = ((ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_il2cpp_TypeInfo_var))->___Instance_12;
				NullCheck(L_105);
				bool L_107;
				L_107 = GenericVirtualFuncInvoker1< bool, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mFFB70EE53D8CD0255A4E599780F62A3EB1520E83_RuntimeMethod_var, L_105, L_106);
				NullCheck(L_104);
				SkinnedMeshRenderer_set_updateWhenOffscreen_mED749A4C7DF00418D6BBB7B6B72843A9080CFA83(L_104, L_107, NULL);
				// break;
				goto IL_05d8_1;
			}

IL_040f_1:
			{
				// instance.skinnedMotionVectors = reader.Read<System.Boolean>(ES3Type_bool.Instance);
				SkinnedMeshRenderer_t020C4E8648EA1C4C6BA5C41502919B387E7E1C2E* L_108 = V_0;
				ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_109 = ___reader0;
				ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_110 = ((ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_il2cpp_TypeInfo_var))->___Instance_12;
				NullCheck(L_109);
				bool L_111;
				L_111 = GenericVirtualFuncInvoker1< bool, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mFFB70EE53D8CD0255A4E599780F62A3EB1520E83_RuntimeMethod_var, L_109, L_110);
				NullCheck(L_108);
				SkinnedMeshRenderer_set_skinnedMotionVectors_mC2CF4DA01EC67148154FD02C97620C611D6C8308(L_108, L_111, NULL);
				// break;
				goto IL_05d8_1;
			}

IL_0425_1:
			{
				// instance.localBounds = reader.Read<UnityEngine.Bounds>(ES3Type_Bounds.Instance);
				SkinnedMeshRenderer_t020C4E8648EA1C4C6BA5C41502919B387E7E1C2E* L_112 = V_0;
				ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_113 = ___reader0;
				ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_114 = ((ES3Type_Bounds_t7DD589E28271A151FBD0712F3599D195980A6248_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Bounds_t7DD589E28271A151FBD0712F3599D195980A6248_il2cpp_TypeInfo_var))->___Instance_12;
				NullCheck(L_113);
				Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 L_115;
				L_115 = GenericVirtualFuncInvoker1< Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisBounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3_m1DAB1D2953772FCB56E7DB24E9D86F3CB42348F4_RuntimeMethod_var, L_113, L_114);
				NullCheck((Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF*)L_112);
				Renderer_set_localBounds_m1E3C7A43A7CF23326DEB34DC66805623033AB567((Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF*)L_112, L_115, NULL);
				// break;
				goto IL_05d8_1;
			}

IL_043b_1:
			{
				// instance.enabled = reader.Read<System.Boolean>(ES3Type_bool.Instance);
				SkinnedMeshRenderer_t020C4E8648EA1C4C6BA5C41502919B387E7E1C2E* L_116 = V_0;
				ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_117 = ___reader0;
				ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_118 = ((ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_il2cpp_TypeInfo_var))->___Instance_12;
				NullCheck(L_117);
				bool L_119;
				L_119 = GenericVirtualFuncInvoker1< bool, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mFFB70EE53D8CD0255A4E599780F62A3EB1520E83_RuntimeMethod_var, L_117, L_118);
				NullCheck((Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF*)L_116);
				Renderer_set_enabled_m015E6D7B825528A31182F267234CC6A925F71DA8((Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF*)L_116, L_119, NULL);
				// break;
				goto IL_05d8_1;
			}

IL_0451_1:
			{
				// instance.shadowCastingMode = reader.Read<UnityEngine.Rendering.ShadowCastingMode>();
				SkinnedMeshRenderer_t020C4E8648EA1C4C6BA5C41502919B387E7E1C2E* L_120 = V_0;
				ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_121 = ___reader0;
				NullCheck(L_121);
				int32_t L_122;
				L_122 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisShadowCastingMode_tF30806698B37CF120A1A506BD7549EAF308E7C6D_mE74883DA1F57042CE2132D08265B7EDE224066CE_RuntimeMethod_var, L_121);
				NullCheck((Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF*)L_120);
				Renderer_set_shadowCastingMode_mB0CD3D153E43044388AEFF7AEFDA93E80EB36D11((Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF*)L_120, L_122, NULL);
				// break;
				goto IL_05d8_1;
			}

IL_0462_1:
			{
				// instance.receiveShadows = reader.Read<System.Boolean>(ES3Type_bool.Instance);
				SkinnedMeshRenderer_t020C4E8648EA1C4C6BA5C41502919B387E7E1C2E* L_123 = V_0;
				ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_124 = ___reader0;
				ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_125 = ((ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_il2cpp_TypeInfo_var))->___Instance_12;
				NullCheck(L_124);
				bool L_126;
				L_126 = GenericVirtualFuncInvoker1< bool, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mFFB70EE53D8CD0255A4E599780F62A3EB1520E83_RuntimeMethod_var, L_124, L_125);
				NullCheck((Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF*)L_123);
				Renderer_set_receiveShadows_mABEB4C72E96E65117B7FFFD4180247565D0C1A09((Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF*)L_123, L_126, NULL);
				// break;
				goto IL_05d8_1;
			}

IL_0478_1:
			{
				// instance.sharedMaterials = reader.Read<UnityEngine.Material[]>();
				SkinnedMeshRenderer_t020C4E8648EA1C4C6BA5C41502919B387E7E1C2E* L_127 = V_0;
				ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_128 = ___reader0;
				NullCheck(L_128);
				MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D* L_129;
				L_129 = GenericVirtualFuncInvoker0< MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D* >::Invoke(ES3Reader_Read_TisMaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D_mD6C0F6DE0DFCBEEE0ECC2806C3C76B9B9AA49622_RuntimeMethod_var, L_128);
				NullCheck((Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF*)L_127);
				Renderer_set_sharedMaterials_m665ADE4190214CC2AC52490B4A7373D7EE75DEB2((Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF*)L_127, L_129, NULL);
				// break;
				goto IL_05d8_1;
			}

IL_0489_1:
			{
				// instance.lightmapIndex = reader.Read<System.Int32>(ES3Type_int.Instance);
				SkinnedMeshRenderer_t020C4E8648EA1C4C6BA5C41502919B387E7E1C2E* L_130 = V_0;
				ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_131 = ___reader0;
				ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_132 = ((ES3Type_int_t05A5E7A96442F23CE33E24A71CD349372A70E0C3_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_int_t05A5E7A96442F23CE33E24A71CD349372A70E0C3_il2cpp_TypeInfo_var))->___Instance_12;
				NullCheck(L_131);
				int32_t L_133;
				L_133 = GenericVirtualFuncInvoker1< int32_t, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mEFCC4D52DD5B822D3561A53591AE11CDB25CDB6F_RuntimeMethod_var, L_131, L_132);
				NullCheck((Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF*)L_130);
				Renderer_set_lightmapIndex_mB6F2202FEC2ECBA3538EBDAEE17B073CEF2B5AB8((Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF*)L_130, L_133, NULL);
				// break;
				goto IL_05d8_1;
			}

IL_049f_1:
			{
				// instance.realtimeLightmapIndex = reader.Read<System.Int32>(ES3Type_int.Instance);
				SkinnedMeshRenderer_t020C4E8648EA1C4C6BA5C41502919B387E7E1C2E* L_134 = V_0;
				ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_135 = ___reader0;
				ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_136 = ((ES3Type_int_t05A5E7A96442F23CE33E24A71CD349372A70E0C3_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_int_t05A5E7A96442F23CE33E24A71CD349372A70E0C3_il2cpp_TypeInfo_var))->___Instance_12;
				NullCheck(L_135);
				int32_t L_137;
				L_137 = GenericVirtualFuncInvoker1< int32_t, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mEFCC4D52DD5B822D3561A53591AE11CDB25CDB6F_RuntimeMethod_var, L_135, L_136);
				NullCheck((Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF*)L_134);
				Renderer_set_realtimeLightmapIndex_mE5684918EF41D05B218AEC5D6D3675B8A8F77389((Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF*)L_134, L_137, NULL);
				// break;
				goto IL_05d8_1;
			}

IL_04b5_1:
			{
				// instance.lightmapScaleOffset = reader.Read<UnityEngine.Vector4>(ES3Type_Vector4.Instance);
				SkinnedMeshRenderer_t020C4E8648EA1C4C6BA5C41502919B387E7E1C2E* L_138 = V_0;
				ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_139 = ___reader0;
				ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_140 = ((ES3Type_Vector4_t20EB9288ABFACFA144B849DBAE5F00003E5D3EF1_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Vector4_t20EB9288ABFACFA144B849DBAE5F00003E5D3EF1_il2cpp_TypeInfo_var))->___Instance_12;
				NullCheck(L_139);
				Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_141;
				L_141 = GenericVirtualFuncInvoker1< Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_m6D7FA5D5608370867F7E593271DDFE9DB2CEBD88_RuntimeMethod_var, L_139, L_140);
				NullCheck((Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF*)L_138);
				Renderer_set_lightmapScaleOffset_m1F7EB461298380CCD8EE337F9AAAE40BE5B732A2((Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF*)L_138, L_141, NULL);
				// break;
				goto IL_05d8_1;
			}

IL_04cb_1:
			{
				// instance.motionVectorGenerationMode = reader.Read<UnityEngine.MotionVectorGenerationMode>();
				SkinnedMeshRenderer_t020C4E8648EA1C4C6BA5C41502919B387E7E1C2E* L_142 = V_0;
				ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_143 = ___reader0;
				NullCheck(L_143);
				int32_t L_144;
				L_144 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisMotionVectorGenerationMode_tE87C61556749260EF5429A0F8FE55DAD30EEAFCB_m8282A371C977788F369BE28A7EC6D07EDA8A24D8_RuntimeMethod_var, L_143);
				NullCheck((Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF*)L_142);
				Renderer_set_motionVectorGenerationMode_m5768AC38CBBAD505E34281889682CA464ED3A32F((Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF*)L_142, L_144, NULL);
				// break;
				goto IL_05d8_1;
			}

IL_04dc_1:
			{
				// instance.realtimeLightmapScaleOffset = reader.Read<UnityEngine.Vector4>(ES3Type_Vector4.Instance);
				SkinnedMeshRenderer_t020C4E8648EA1C4C6BA5C41502919B387E7E1C2E* L_145 = V_0;
				ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_146 = ___reader0;
				ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_147 = ((ES3Type_Vector4_t20EB9288ABFACFA144B849DBAE5F00003E5D3EF1_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Vector4_t20EB9288ABFACFA144B849DBAE5F00003E5D3EF1_il2cpp_TypeInfo_var))->___Instance_12;
				NullCheck(L_146);
				Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_148;
				L_148 = GenericVirtualFuncInvoker1< Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_m6D7FA5D5608370867F7E593271DDFE9DB2CEBD88_RuntimeMethod_var, L_146, L_147);
				NullCheck((Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF*)L_145);
				Renderer_set_realtimeLightmapScaleOffset_m391D14F3698B3D2BD88DC001931D261E5A3448E9((Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF*)L_145, L_148, NULL);
				// break;
				goto IL_05d8_1;
			}

IL_04f2_1:
			{
				// instance.lightProbeUsage = reader.Read<UnityEngine.Rendering.LightProbeUsage>();
				SkinnedMeshRenderer_t020C4E8648EA1C4C6BA5C41502919B387E7E1C2E* L_149 = V_0;
				ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_150 = ___reader0;
				NullCheck(L_150);
				int32_t L_151;
				L_151 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisLightProbeUsage_tC6292C7B7CBA0E5AA2A56F40D71F58A7E06C2948_m66BEF16A5A89E757FF33443DDD5CE1051BB50376_RuntimeMethod_var, L_150);
				NullCheck((Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF*)L_149);
				Renderer_set_lightProbeUsage_mDCCD970DAC3546B32EF58876BABBD3353624F703((Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF*)L_149, L_151, NULL);
				// break;
				goto IL_05d8_1;
			}

IL_0503_1:
			{
				// instance.lightProbeProxyVolumeOverride = reader.Read<UnityEngine.GameObject>(ES3Type_GameObject.Instance);
				SkinnedMeshRenderer_t020C4E8648EA1C4C6BA5C41502919B387E7E1C2E* L_152 = V_0;
				ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_153 = ___reader0;
				ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_154 = ((ES3Type_GameObject_t7AACC3CCF9FD31A285F90A28AE3331E69A1F02B2_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_GameObject_t7AACC3CCF9FD31A285F90A28AE3331E69A1F02B2_il2cpp_TypeInfo_var))->___Instance_14;
				NullCheck(L_153);
				GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_155;
				L_155 = GenericVirtualFuncInvoker1< GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_mF17F721F02D9912C0E9F95ADE84A7350175EA7FF_RuntimeMethod_var, L_153, L_154);
				NullCheck((Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF*)L_152);
				Renderer_set_lightProbeProxyVolumeOverride_mEAF99A789A36BEDBAFCD2C2084578CF359587A21((Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF*)L_152, L_155, NULL);
				// break;
				goto IL_05d8_1;
			}

IL_0519_1:
			{
				// instance.probeAnchor = reader.Read<UnityEngine.Transform>(ES3Type_Transform.Instance);
				SkinnedMeshRenderer_t020C4E8648EA1C4C6BA5C41502919B387E7E1C2E* L_156 = V_0;
				ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_157 = ___reader0;
				ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_158 = ((ES3Type_Transform_t744F7C45C7A4F966265500803F08C4965797DAD7_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Transform_t744F7C45C7A4F966265500803F08C4965797DAD7_il2cpp_TypeInfo_var))->___Instance_14;
				NullCheck(L_157);
				Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_159;
				L_159 = GenericVirtualFuncInvoker1< Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1*, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisTransform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1_mB5F67B5F1812826BAC1CF736E8760BF608548454_RuntimeMethod_var, L_157, L_158);
				NullCheck((Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF*)L_156);
				Renderer_set_probeAnchor_m0032C3CC1BBF36AC32FCCDE6F4A6F2CE73062327((Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF*)L_156, L_159, NULL);
				// break;
				goto IL_05d8_1;
			}

IL_052f_1:
			{
				// instance.reflectionProbeUsage = reader.Read<UnityEngine.Rendering.ReflectionProbeUsage>();
				SkinnedMeshRenderer_t020C4E8648EA1C4C6BA5C41502919B387E7E1C2E* L_160 = V_0;
				ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_161 = ___reader0;
				NullCheck(L_161);
				int32_t L_162;
				L_162 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisReflectionProbeUsage_t033508C14CD4AD926A3A215D19913DC21EA22705_m8D386D0E2DCEF800E206280828E9F9989F462116_RuntimeMethod_var, L_161);
				NullCheck((Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF*)L_160);
				Renderer_set_reflectionProbeUsage_m54A268EACA655AC3C66C4CD7F8C1EF3B41F3E008((Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF*)L_160, L_162, NULL);
				// break;
				goto IL_05d8_1;
			}

IL_0540_1:
			{
				// instance.sortingLayerName = reader.Read<System.String>(ES3Type_string.Instance);
				SkinnedMeshRenderer_t020C4E8648EA1C4C6BA5C41502919B387E7E1C2E* L_163 = V_0;
				ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_164 = ___reader0;
				ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_165 = ((ES3Type_string_t0C89CCA6F02AF5B46E66DEF92E77FCEC83C2F068_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_string_t0C89CCA6F02AF5B46E66DEF92E77FCEC83C2F068_il2cpp_TypeInfo_var))->___Instance_12;
				NullCheck(L_164);
				String_t* L_166;
				L_166 = GenericVirtualFuncInvoker1< String_t*, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisString_t_mE83D478C999E69292DB9310C2993B1EE7DD28021_RuntimeMethod_var, L_164, L_165);
				NullCheck((Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF*)L_163);
				Renderer_set_sortingLayerName_mF335BAE30015B49C27FF3C063B033E44C237AC8A((Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF*)L_163, L_166, NULL);
				// break;
				goto IL_05d8_1;
			}

IL_0556_1:
			{
				// instance.sortingLayerID = reader.Read<System.Int32>(ES3Type_int.Instance);
				SkinnedMeshRenderer_t020C4E8648EA1C4C6BA5C41502919B387E7E1C2E* L_167 = V_0;
				ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_168 = ___reader0;
				ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_169 = ((ES3Type_int_t05A5E7A96442F23CE33E24A71CD349372A70E0C3_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_int_t05A5E7A96442F23CE33E24A71CD349372A70E0C3_il2cpp_TypeInfo_var))->___Instance_12;
				NullCheck(L_168);
				int32_t L_170;
				L_170 = GenericVirtualFuncInvoker1< int32_t, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mEFCC4D52DD5B822D3561A53591AE11CDB25CDB6F_RuntimeMethod_var, L_168, L_169);
				NullCheck((Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF*)L_167);
				Renderer_set_sortingLayerID_m289E44FD06B6692C7B2ADD1189FE4FC013180C49((Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF*)L_167, L_170, NULL);
				// break;
				goto IL_05d8_1;
			}

IL_0569_1:
			{
				// instance.sortingOrder = reader.Read<System.Int32>(ES3Type_int.Instance);
				SkinnedMeshRenderer_t020C4E8648EA1C4C6BA5C41502919B387E7E1C2E* L_171 = V_0;
				ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_172 = ___reader0;
				ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_173 = ((ES3Type_int_t05A5E7A96442F23CE33E24A71CD349372A70E0C3_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_int_t05A5E7A96442F23CE33E24A71CD349372A70E0C3_il2cpp_TypeInfo_var))->___Instance_12;
				NullCheck(L_172);
				int32_t L_174;
				L_174 = GenericVirtualFuncInvoker1< int32_t, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mEFCC4D52DD5B822D3561A53591AE11CDB25CDB6F_RuntimeMethod_var, L_172, L_173);
				NullCheck((Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF*)L_171);
				Renderer_set_sortingOrder_m4C67F002AD68CA0D55D20D6B78CDED3DB24467DA((Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF*)L_171, L_174, NULL);
				// break;
				goto IL_05d8_1;
			}

IL_057c_1:
			{
				// var blendShapeWeights = reader.Read<System.Single[]>(ES3Type_floatArray.Instance);
				ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_175 = ___reader0;
				ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_176 = ((ES3Type_floatArray_t43478D8ECEDD09DE4F813A5C0C077252B6E3930A_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_floatArray_t43478D8ECEDD09DE4F813A5C0C077252B6E3930A_il2cpp_TypeInfo_var))->___Instance_13;
				NullCheck(L_175);
				SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_177;
				L_177 = GenericVirtualFuncInvoker1< SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisSingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C_m73C3BB10EE1FD2C09B6F97D71FD9BD5ACB2F4FA4_RuntimeMethod_var, L_175, L_176);
				V_3 = L_177;
				// if (instance.sharedMesh == null) break;
				SkinnedMeshRenderer_t020C4E8648EA1C4C6BA5C41502919B387E7E1C2E* L_178 = V_0;
				NullCheck(L_178);
				Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_179;
				L_179 = SkinnedMeshRenderer_get_sharedMesh_m73D141639F0B72EBFAEF21D667AEFCA6E119A302(L_178, NULL);
				il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
				bool L_180;
				L_180 = Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)L_179, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
				if (L_180)
				{
					goto IL_05d8_1;
				}
			}
			{
				// if (blendShapeWeights.Length != instance.sharedMesh.blendShapeCount)
				SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_181 = V_3;
				NullCheck(L_181);
				SkinnedMeshRenderer_t020C4E8648EA1C4C6BA5C41502919B387E7E1C2E* L_182 = V_0;
				NullCheck(L_182);
				Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_183;
				L_183 = SkinnedMeshRenderer_get_sharedMesh_m73D141639F0B72EBFAEF21D667AEFCA6E119A302(L_182, NULL);
				NullCheck(L_183);
				int32_t L_184;
				L_184 = Mesh_get_blendShapeCount_mB91EABCC5DFB3B91C4C0047851BC13FB92727408(L_183, NULL);
				if ((((int32_t)((int32_t)(((RuntimeArray*)L_181)->max_length))) == ((int32_t)L_184)))
				{
					goto IL_05b2_1;
				}
			}
			{
				// ES3Internal.ES3Debug.LogError("The number of blend shape weights we are loading does not match the number of blend shapes in this SkinnedMeshRenderer's Mesh");
				ES3Debug_LogError_m908291C3442D9DB0247D28930122717AD39209BC(_stringLiteral7E7975F5870DE751BD38D4E3A4C0644FFCF21C5F, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, 0, NULL);
			}

IL_05b2_1:
			{
				// for (int i = 0; i < blendShapeWeights.Length; i++)
				V_5 = 0;
				goto IL_05c9_1;
			}

IL_05b7_1:
			{
				// instance.SetBlendShapeWeight(i, blendShapeWeights[i]);
				SkinnedMeshRenderer_t020C4E8648EA1C4C6BA5C41502919B387E7E1C2E* L_185 = V_0;
				int32_t L_186 = V_5;
				SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_187 = V_3;
				int32_t L_188 = V_5;
				NullCheck(L_187);
				int32_t L_189 = L_188;
				float L_190 = (L_187)->GetAt(static_cast<il2cpp_array_size_t>(L_189));
				NullCheck(L_185);
				SkinnedMeshRenderer_SetBlendShapeWeight_mD5724DB29A33F007E42F3666BF4B7ABC9C7F6F5E(L_185, L_186, L_190, NULL);
				// for (int i = 0; i < blendShapeWeights.Length; i++)
				int32_t L_191 = V_5;
				V_5 = ((int32_t)il2cpp_codegen_add(L_191, 1));
			}

IL_05c9_1:
			{
				// for (int i = 0; i < blendShapeWeights.Length; i++)
				int32_t L_192 = V_5;
				SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_193 = V_3;
				NullCheck(L_193);
				if ((((int32_t)L_192) < ((int32_t)((int32_t)(((RuntimeArray*)L_193)->max_length)))))
				{
					goto IL_05b7_1;
				}
			}
			{
				// break;
				goto IL_05d8_1;
			}

IL_05d2_1:
			{
				// reader.Skip();
				ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_194 = ___reader0;
				NullCheck(L_194);
				VirtualActionInvoker0::Invoke(41 /* System.Void ES3Reader::Skip() */, L_194);
			}

IL_05d8_1:
			{
				// foreach(string propertyName in reader.Properties)
				RuntimeObject* L_195 = V_1;
				NullCheck(L_195);
				bool L_196;
				L_196 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_195);
				if (L_196)
				{
					goto IL_0018_1;
				}
			}
			{
				goto IL_05f9;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_05f9:
	{
		// }
		return;
	}
}
