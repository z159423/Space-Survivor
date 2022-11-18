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
// ES3Types.ES3Type_RotationOverLifetimeModule
struct ES3Type_RotationOverLifetimeModule_t6C58693EB8B792F0356C451990CDFF790B93A237;
// ES3Types.ES3Type_Shader
struct ES3Type_Shader_tAAA1785794F9B9772B20B61B2E57552BF02A4EDA;
// ES3Types.ES3Type_ShapeModule
struct ES3Type_ShapeModule_t2A98821A3CBBB891C72216EA1D86C9579DFD70B7;
// System.Collections.IEnumerator
struct IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA;
// UnityEngine.Mesh
struct Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4;
// UnityEngine.MeshRenderer
struct MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE;
// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C;
// UnityEngine.ParticleSystem
struct ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1;
// UnityEngine.Shader
struct Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692;
// UnityEngine.SkinnedMeshRenderer
struct SkinnedMeshRenderer_t020C4E8648EA1C4C6BA5C41502919B387E7E1C2E;
// System.String
struct String_t;
// System.Type
struct Type_t;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// ES3Reader/ES3ReaderPropertyEnumerator
struct ES3ReaderPropertyEnumerator_t66947BCA34F5716A7F0FECC09CDD3D2125703EB2;

IL2CPP_EXTERN_C RuntimeClass* ES3Type_MinMaxCurve_t1C147718750ACBECE5D2B7F545D2A434A3C5409B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ES3Type_Vector3_t29E9EC31EED86489FBD8A22FBD317F5BD5C3A3E9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ES3Type_int_t05A5E7A96442F23CE33E24A71CD349372A70E0C3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ES3Type_string_t0C89CCA6F02AF5B46E66DEF92E77FCEC83C2F068_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RotationOverLifetimeModule_tEE08858451167B6DDE6DD36FDCF11E74C77D79E6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ShapeModule_tAA38A0C5305DF2F9D96F89D4B8F762E2D034D8B2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* String_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral01837E2252AC8026A5EA3567A663017A662FBB70;
IL2CPP_EXTERN_C String_t* _stringLiteral062DB096C728515E033CF8C48A1C1F0B9A79384B;
IL2CPP_EXTERN_C String_t* _stringLiteral1228466552C1791B2019A329AFE94665D441168A;
IL2CPP_EXTERN_C String_t* _stringLiteral1B024D537329B86AB0DF96B2A714180F442F53E9;
IL2CPP_EXTERN_C String_t* _stringLiteral2F8690361553406965679AEF125F896BC5FC61F5;
IL2CPP_EXTERN_C String_t* _stringLiteral3EC3372E82B3B91672EF4EC7D6C8F3FB8E934642;
IL2CPP_EXTERN_C String_t* _stringLiteral60E56797D122AE71D3774956F66C6EEB9EA22C05;
IL2CPP_EXTERN_C String_t* _stringLiteral6686C366F645244186604A3DA4B9A58012A85F1B;
IL2CPP_EXTERN_C String_t* _stringLiteral82BECCAD895076775062861CDB46AADEF913D969;
IL2CPP_EXTERN_C String_t* _stringLiteral8C6F88DEE0DFE3513BB8B44A8CF0FEE437F4EFFB;
IL2CPP_EXTERN_C String_t* _stringLiteral8C9F18A4F030B96447955FBBA1A99FFC43B5D8E0;
IL2CPP_EXTERN_C String_t* _stringLiteral8E54BB51E569CB6A8D3C45D8AEF883A1559C1C0E;
IL2CPP_EXTERN_C String_t* _stringLiteral91811EE149061D28B38320E2430CE8888AD6398B;
IL2CPP_EXTERN_C String_t* _stringLiteral9384C6EF2DA5C0BD5274A0DACFF291D0ABBFD8B1;
IL2CPP_EXTERN_C String_t* _stringLiteral9CE1604D659135925CCC4DD1F526AFFE42E689F1;
IL2CPP_EXTERN_C String_t* _stringLiteral9E61658953B4F9BB4A05E3D2D2BC18990BADE934;
IL2CPP_EXTERN_C String_t* _stringLiteral9F10EBCE20D270FF4999A25F1E52C5E0C507BADE;
IL2CPP_EXTERN_C String_t* _stringLiteralBD49F93A7BC78A69E385CEC0E78F434BD2845A17;
IL2CPP_EXTERN_C String_t* _stringLiteralCA1B66E295BD92E9FD3B6C708F09CA69A50BEFD1;
IL2CPP_EXTERN_C String_t* _stringLiteralCE18B047107AA23D1AA9B2ED32D316148E02655F;
IL2CPP_EXTERN_C String_t* _stringLiteralE8744A8B8BD390EB66CA0CAE2376C973E6904FFB;
IL2CPP_EXTERN_C String_t* _stringLiteralEB0A157666700D8227FD4B66A26FDC02035E89BF;
IL2CPP_EXTERN_C String_t* _stringLiteralED1F119527A0BCA45125EF8E0F719985DA86C0E1;
IL2CPP_EXTERN_C String_t* _stringLiteralF66E9083C67855AB6EBB4B74342E385A72AACE32;
IL2CPP_EXTERN_C String_t* _stringLiteralF9BE17D634D1B07BCDCDA77A87710C946D81307B;
IL2CPP_EXTERN_C String_t* _stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B;
IL2CPP_EXTERN_C String_t* _stringLiteralFA5EC7168E9633DAAEAA255ECB55030EA60F064F;
IL2CPP_EXTERN_C String_t* _stringLiteralFC341A1966AF28A9A7A26EDFB78ABBF7DE4D0E1F;
IL2CPP_EXTERN_C const RuntimeMethod* ES3Reader_ReadProperty_TisString_t_mA276DF487B7BAC9562781B75307120FD89D76BC2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mFFB70EE53D8CD0255A4E599780F62A3EB1520E83_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ES3Reader_Read_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mEFCC4D52DD5B822D3561A53591AE11CDB25CDB6F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ES3Reader_Read_TisMeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE_mADE66001251FAEAB39EE97DA447D0A80EAAB85C4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ES3Reader_Read_TisMesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4_m4DD8C0823DA528C84509E776081834CEAC71FE88_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_m9D6B4042B923127DEA4A2CAA3E35EED37D75B3D0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ES3Reader_Read_TisParticleSystemMeshShapeType_t260D7CAA6014D0ACE2BCFE0BC588E1ADE3AF98E5_m2E1596CACABC5B7BB194A74A92C1E5627B3DB9D0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ES3Reader_Read_TisParticleSystemShapeType_tADE62D07EDA71578326A03B50871391EE01F73BB_m3423F2435F483F46ABB4C8EAD9B78CD03D2742FB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mA86928BC888E342D2C2644535E3399952F5077ED_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ES3Reader_Read_TisSkinnedMeshRenderer_t020C4E8648EA1C4C6BA5C41502919B387E7E1C2E_m9E77EF921E4ACFCE425D24538209CF592968463E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ES3Reader_Read_TisString_t_mE83D478C999E69292DB9310C2993B1EE7DD28021_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ES3Reader_Read_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_m41744F4EDB47642D9EF02C774ADD5EADDE749262_RuntimeMethod_var;


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

// ES3Types.ES3Type_MinMaxCurve
struct ES3Type_MinMaxCurve_t1C147718750ACBECE5D2B7F545D2A434A3C5409B  : public ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE
{
};

struct ES3Type_MinMaxCurve_t1C147718750ACBECE5D2B7F545D2A434A3C5409B_StaticFields
{
	// ES3Types.ES3Type ES3Types.ES3Type_MinMaxCurve::Instance
	ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* ___Instance_12;
};

// ES3Types.ES3Type_RotationOverLifetimeModule
struct ES3Type_RotationOverLifetimeModule_t6C58693EB8B792F0356C451990CDFF790B93A237  : public ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE
{
};

struct ES3Type_RotationOverLifetimeModule_t6C58693EB8B792F0356C451990CDFF790B93A237_StaticFields
{
	// ES3Types.ES3Type ES3Types.ES3Type_RotationOverLifetimeModule::Instance
	ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* ___Instance_12;
};

// ES3Types.ES3Type_Shader
struct ES3Type_Shader_tAAA1785794F9B9772B20B61B2E57552BF02A4EDA  : public ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE
{
};

struct ES3Type_Shader_tAAA1785794F9B9772B20B61B2E57552BF02A4EDA_StaticFields
{
	// ES3Types.ES3Type ES3Types.ES3Type_Shader::Instance
	ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* ___Instance_12;
};

// ES3Types.ES3Type_ShapeModule
struct ES3Type_ShapeModule_t2A98821A3CBBB891C72216EA1D86C9579DFD70B7  : public ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE
{
};

struct ES3Type_ShapeModule_t2A98821A3CBBB891C72216EA1D86C9579DFD70B7_StaticFields
{
	// ES3Types.ES3Type ES3Types.ES3Type_ShapeModule::Instance
	ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* ___Instance_12;
};

// ES3Types.ES3Type_Vector3
struct ES3Type_Vector3_t29E9EC31EED86489FBD8A22FBD317F5BD5C3A3E9  : public ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE
{
};

struct ES3Type_Vector3_t29E9EC31EED86489FBD8A22FBD317F5BD5C3A3E9_StaticFields
{
	// ES3Types.ES3Type ES3Types.ES3Type_Vector3::Instance
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

// UnityEngine.ParticleSystem/RotationOverLifetimeModule
struct RotationOverLifetimeModule_tEE08858451167B6DDE6DD36FDCF11E74C77D79E6 
{
	// UnityEngine.ParticleSystem UnityEngine.ParticleSystem/RotationOverLifetimeModule::m_ParticleSystem
	ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* ___m_ParticleSystem_0;
};
// Native definition for P/Invoke marshalling of UnityEngine.ParticleSystem/RotationOverLifetimeModule
struct RotationOverLifetimeModule_tEE08858451167B6DDE6DD36FDCF11E74C77D79E6_marshaled_pinvoke
{
	ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* ___m_ParticleSystem_0;
};
// Native definition for COM marshalling of UnityEngine.ParticleSystem/RotationOverLifetimeModule
struct RotationOverLifetimeModule_tEE08858451167B6DDE6DD36FDCF11E74C77D79E6_marshaled_com
{
	ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* ___m_ParticleSystem_0;
};

// UnityEngine.ParticleSystem/ShapeModule
struct ShapeModule_tAA38A0C5305DF2F9D96F89D4B8F762E2D034D8B2 
{
	// UnityEngine.ParticleSystem UnityEngine.ParticleSystem/ShapeModule::m_ParticleSystem
	ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* ___m_ParticleSystem_0;
};
// Native definition for P/Invoke marshalling of UnityEngine.ParticleSystem/ShapeModule
struct ShapeModule_tAA38A0C5305DF2F9D96F89D4B8F762E2D034D8B2_marshaled_pinvoke
{
	ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* ___m_ParticleSystem_0;
};
// Native definition for COM marshalling of UnityEngine.ParticleSystem/ShapeModule
struct ShapeModule_tAA38A0C5305DF2F9D96F89D4B8F762E2D034D8B2_marshaled_com
{
	ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* ___m_ParticleSystem_0;
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

// UnityEngine.Mesh
struct Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.Shader
struct Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.Renderer
struct Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.MeshRenderer
struct MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE  : public Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF
{
};

// UnityEngine.SkinnedMeshRenderer
struct SkinnedMeshRenderer_t020C4E8648EA1C4C6BA5C41502919B387E7E1C2E  : public Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF
{
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif


// T ES3Reader::ReadProperty<System.Object>(ES3Types.ES3Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Reader_ReadProperty_TisRuntimeObject_m2E586A12F3136DA85107A76F690CB8954A573DE3_gshared (ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* __this, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* ___type0, const RuntimeMethod* method) ;

// System.UInt32 <PrivateImplementationDetails>::ComputeStringHash(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t U3CPrivateImplementationDetailsU3E_ComputeStringHash_m9E43873DE0DF480D27EC1C2AA3C09E74EA77F75D (String_t* ___s0, const RuntimeMethod* method) ;
// System.Boolean System.String::op_Equality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0 (String_t* ___a0, String_t* ___b1, const RuntimeMethod* method) ;
// System.Void UnityEngine.ParticleSystem/RotationOverLifetimeModule::set_enabled(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RotationOverLifetimeModule_set_enabled_mDA53B4B7B9333D4E09D845446C9F9400C7E8DC66 (RotationOverLifetimeModule_tEE08858451167B6DDE6DD36FDCF11E74C77D79E6* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.ParticleSystem/RotationOverLifetimeModule::set_x(UnityEngine.ParticleSystem/MinMaxCurve)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RotationOverLifetimeModule_set_x_m26A11609B42D2C819D237DB064D28EFC1577A9C4 (RotationOverLifetimeModule_tEE08858451167B6DDE6DD36FDCF11E74C77D79E6* __this, MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.ParticleSystem/RotationOverLifetimeModule::set_xMultiplier(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RotationOverLifetimeModule_set_xMultiplier_m099A3F3041DB369575051643B3B1A2BD4BB1C1BD (RotationOverLifetimeModule_tEE08858451167B6DDE6DD36FDCF11E74C77D79E6* __this, float ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.ParticleSystem/RotationOverLifetimeModule::set_y(UnityEngine.ParticleSystem/MinMaxCurve)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RotationOverLifetimeModule_set_y_m4D757DFB1D4BFE8050616BD5D2DC035773ED75CA (RotationOverLifetimeModule_tEE08858451167B6DDE6DD36FDCF11E74C77D79E6* __this, MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.ParticleSystem/RotationOverLifetimeModule::set_yMultiplier(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RotationOverLifetimeModule_set_yMultiplier_m8DB9A9DF867858F85FCD405DA6CE3089EAFE2FAF (RotationOverLifetimeModule_tEE08858451167B6DDE6DD36FDCF11E74C77D79E6* __this, float ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.ParticleSystem/RotationOverLifetimeModule::set_z(UnityEngine.ParticleSystem/MinMaxCurve)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RotationOverLifetimeModule_set_z_m4B93DD11BAB01085FD8B482DFAB2EC7867BE08BD (RotationOverLifetimeModule_tEE08858451167B6DDE6DD36FDCF11E74C77D79E6* __this, MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.ParticleSystem/RotationOverLifetimeModule::set_zMultiplier(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RotationOverLifetimeModule_set_zMultiplier_m035DC683A4FB9B68B671745CD99628B6762D5FEF (RotationOverLifetimeModule_tEE08858451167B6DDE6DD36FDCF11E74C77D79E6* __this, float ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.ParticleSystem/RotationOverLifetimeModule::set_separateAxes(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RotationOverLifetimeModule_set_separateAxes_m8FAFD751E4B823A461521A4349B6D0544887D23E (RotationOverLifetimeModule_tEE08858451167B6DDE6DD36FDCF11E74C77D79E6* __this, bool ___value0, const RuntimeMethod* method) ;
// T ES3Reader::ReadProperty<System.String>(ES3Types.ES3Type)
inline String_t* ES3Reader_ReadProperty_TisString_t_mA276DF487B7BAC9562781B75307120FD89D76BC2 (ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* __this, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* ___type0, const RuntimeMethod* method)
{
	return ((  String_t* (*) (ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518*, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE*, const RuntimeMethod*))ES3Reader_ReadProperty_TisRuntimeObject_m2E586A12F3136DA85107A76F690CB8954A573DE3_gshared)(__this, ___type0, method);
}
// UnityEngine.Shader UnityEngine.Shader::Find(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* Shader_Find_mFF2A8FC042B9CFAA9800679CA674D52859BF3A72 (String_t* ___name0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___x0, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___y1, const RuntimeMethod* method) ;
// System.Collections.IEnumerator ES3Reader/ES3ReaderPropertyEnumerator::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3ReaderPropertyEnumerator_GetEnumerator_mD6FEB8C37D84D9BBAB20D1A4DDCE3407BA971CA8 (ES3ReaderPropertyEnumerator_t66947BCA34F5716A7F0FECC09CDD3D2125703EB2* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Object::set_name(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_set_name_mC79E6DC8FFD72479C90F0C4CC7F42A0FEAF5AE47 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Shader::set_maximumLOD(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Shader_set_maximumLOD_mC07203B1137E60D0E80E8BB991A37435220D4CE8 (Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.ParticleSystem/ShapeModule::set_enabled(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ShapeModule_set_enabled_m6BA02351FEED67A82664135B922DDA66D71DF399 (ShapeModule_tAA38A0C5305DF2F9D96F89D4B8F762E2D034D8B2* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.ParticleSystem/ShapeModule::set_shapeType(UnityEngine.ParticleSystemShapeType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ShapeModule_set_shapeType_m4B5D1EA91037AD7065FE1D23652D919FED4D6D7F (ShapeModule_tAA38A0C5305DF2F9D96F89D4B8F762E2D034D8B2* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.ParticleSystem/ShapeModule::set_randomDirectionAmount(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ShapeModule_set_randomDirectionAmount_m398CEE6D93207797559A80CE49A0C4138C96D0B3 (ShapeModule_tAA38A0C5305DF2F9D96F89D4B8F762E2D034D8B2* __this, float ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.ParticleSystem/ShapeModule::set_sphericalDirectionAmount(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ShapeModule_set_sphericalDirectionAmount_m395143D474E51CE6AAF81C9DB84028A16B9BCAAB (ShapeModule_tAA38A0C5305DF2F9D96F89D4B8F762E2D034D8B2* __this, float ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.ParticleSystem/ShapeModule::set_alignToDirection(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ShapeModule_set_alignToDirection_mD632613E0E343654E6569F22BC9EFBB9247AC581 (ShapeModule_tAA38A0C5305DF2F9D96F89D4B8F762E2D034D8B2* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.ParticleSystem/ShapeModule::set_radius(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ShapeModule_set_radius_m37F79E13EB60FA39EAE36B49DAC4AC880416E89C (ShapeModule_tAA38A0C5305DF2F9D96F89D4B8F762E2D034D8B2* __this, float ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.ParticleSystem/ShapeModule::set_angle(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ShapeModule_set_angle_m62F5F037CD1DF55172B2D64DBF8271F9F917133A (ShapeModule_tAA38A0C5305DF2F9D96F89D4B8F762E2D034D8B2* __this, float ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.ParticleSystem/ShapeModule::set_length(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ShapeModule_set_length_mD38341192A10095F9D0217993D410939F90CE621 (ShapeModule_tAA38A0C5305DF2F9D96F89D4B8F762E2D034D8B2* __this, float ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.ParticleSystem/ShapeModule::set_scale(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ShapeModule_set_scale_mDA84B80016FDA6B6EE181B108C3E59A2FFF9143D (ShapeModule_tAA38A0C5305DF2F9D96F89D4B8F762E2D034D8B2* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.ParticleSystem/ShapeModule::set_meshShapeType(UnityEngine.ParticleSystemMeshShapeType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ShapeModule_set_meshShapeType_m335ED6F02244A07F8557E900D9935A4220AD23D0 (ShapeModule_tAA38A0C5305DF2F9D96F89D4B8F762E2D034D8B2* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.ParticleSystem/ShapeModule::set_mesh(UnityEngine.Mesh)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ShapeModule_set_mesh_m75450DE287A91452C63021F100D8B6A65A921CE1 (ShapeModule_tAA38A0C5305DF2F9D96F89D4B8F762E2D034D8B2* __this, Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.ParticleSystem/ShapeModule::set_meshRenderer(UnityEngine.MeshRenderer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ShapeModule_set_meshRenderer_m25111B1DC9F173FE054264094DB19564D375D1D6 (ShapeModule_tAA38A0C5305DF2F9D96F89D4B8F762E2D034D8B2* __this, MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE* ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.ParticleSystem/ShapeModule::set_skinnedMeshRenderer(UnityEngine.SkinnedMeshRenderer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ShapeModule_set_skinnedMeshRenderer_mB3B9D58C4A9D21F990EC2000D38B5E35C7FF5807 (ShapeModule_tAA38A0C5305DF2F9D96F89D4B8F762E2D034D8B2* __this, SkinnedMeshRenderer_t020C4E8648EA1C4C6BA5C41502919B387E7E1C2E* ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.ParticleSystem/ShapeModule::set_useMeshMaterialIndex(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ShapeModule_set_useMeshMaterialIndex_m48CE9CB5BA8CAF93D4C92975B826A7BA8459B838 (ShapeModule_tAA38A0C5305DF2F9D96F89D4B8F762E2D034D8B2* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.ParticleSystem/ShapeModule::set_meshMaterialIndex(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ShapeModule_set_meshMaterialIndex_mC72EF43FC31A137D1247E748E89FE0FF5FB2C29F (ShapeModule_tAA38A0C5305DF2F9D96F89D4B8F762E2D034D8B2* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.ParticleSystem/ShapeModule::set_useMeshColors(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ShapeModule_set_useMeshColors_m2B12B03E04E2ACEE2AE68B697F462232D42D6C6E (ShapeModule_tAA38A0C5305DF2F9D96F89D4B8F762E2D034D8B2* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.ParticleSystem/ShapeModule::set_normalOffset(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ShapeModule_set_normalOffset_m24453DEF085D96323A09DEBD134283B7F23C263F (ShapeModule_tAA38A0C5305DF2F9D96F89D4B8F762E2D034D8B2* __this, float ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.ParticleSystem/ShapeModule::set_arc(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ShapeModule_set_arc_mE9EF87E2AA959143B466CD55B7DAA65FBE155D1F (ShapeModule_tAA38A0C5305DF2F9D96F89D4B8F762E2D034D8B2* __this, float ___value0, const RuntimeMethod* method) ;
// System.Void ES3Types.ES3Type_RotationOverLifetimeModule::ReadInto<UnityEngine.ParticleSystem/SubEmittersModule>(ES3Reader,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ES3Type_RotationOverLifetimeModule_ReadInto_TisSubEmittersModule_t94F5AD231EAFB50A16E697186A630B07BF8B949B_m022F39E0758E249DC7C43F505573F6A53A2C21B4_gshared (ES3Type_RotationOverLifetimeModule_t6C58693EB8B792F0356C451990CDFF790B93A237* __this, ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* ___reader0, RuntimeObject* ___obj1, const RuntimeMethod* method) 
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
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RotationOverLifetimeModule_tEE08858451167B6DDE6DD36FDCF11E74C77D79E6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral062DB096C728515E033CF8C48A1C1F0B9A79384B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1B024D537329B86AB0DF96B2A714180F442F53E9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2F8690361553406965679AEF125F896BC5FC61F5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8C6F88DEE0DFE3513BB8B44A8CF0FEE437F4EFFB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9384C6EF2DA5C0BD5274A0DACFF291D0ABBFD8B1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9CE1604D659135925CCC4DD1F526AFFE42E689F1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9E61658953B4F9BB4A05E3D2D2BC18990BADE934);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B);
		s_Il2CppMethodInitialized = true;
	}
	RotationOverLifetimeModule_tEE08858451167B6DDE6DD36FDCF11E74C77D79E6 V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	uint32_t V_2 = 0;
	{
		// var instance = (UnityEngine.ParticleSystem.RotationOverLifetimeModule)obj;
		RuntimeObject* L_0 = ___obj1;
		V_0 = ((*(RotationOverLifetimeModule_tEE08858451167B6DDE6DD36FDCF11E74C77D79E6*)((RotationOverLifetimeModule_tEE08858451167B6DDE6DD36FDCF11E74C77D79E6*)(RotationOverLifetimeModule_tEE08858451167B6DDE6DD36FDCF11E74C77D79E6*)UnBox(L_0, RotationOverLifetimeModule_tEE08858451167B6DDE6DD36FDCF11E74C77D79E6_il2cpp_TypeInfo_var))));
		goto IL_01d9;
	}

IL_000c:
	{
		String_t* L_1 = V_1;
		uint32_t L_2;
		L_2 = U3CPrivateImplementationDetailsU3E_ComputeStringHash_m9E43873DE0DF480D27EC1C2AA3C09E74EA77F75D(L_1, NULL);
		V_2 = L_2;
		uint32_t L_3 = V_2;
		if ((!(((uint32_t)L_3) <= ((uint32_t)((int32_t)-1013869429)))))
		{
			goto IL_0056;
		}
	}
	{
		uint32_t L_4 = V_2;
		if ((!(((uint32_t)L_4) <= ((uint32_t)((int32_t)726266686)))))
		{
			goto IL_003b;
		}
	}
	{
		uint32_t L_5 = V_2;
		if ((((int32_t)L_5) == ((int32_t)((int32_t)49525662))))
		{
			goto IL_0088;
		}
	}
	{
		uint32_t L_6 = V_2;
		if ((((int32_t)L_6) == ((int32_t)((int32_t)726266686))))
		{
			goto IL_0106;
		}
	}
	{
		goto IL_01d3;
	}

IL_003b:
	{
		uint32_t L_7 = V_2;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)1479031685))))
		{
			goto IL_011b;
		}
	}
	{
		uint32_t L_8 = V_2;
		if ((((int32_t)L_8) == ((int32_t)((int32_t)-1013869429))))
		{
			goto IL_00dc;
		}
	}
	{
		goto IL_01d3;
	}

IL_0056:
	{
		uint32_t L_9 = V_2;
		if ((!(((uint32_t)L_9) <= ((uint32_t)((int32_t)-66302220)))))
		{
			goto IL_0073;
		}
	}
	{
		uint32_t L_10 = V_2;
		if ((((int32_t)L_10) == ((int32_t)((int32_t)-585050980))))
		{
			goto IL_00b2;
		}
	}
	{
		uint32_t L_11 = V_2;
		if ((((int32_t)L_11) == ((int32_t)((int32_t)-66302220))))
		{
			goto IL_00c7;
		}
	}
	{
		goto IL_01d3;
	}

IL_0073:
	{
		uint32_t L_12 = V_2;
		if ((((int32_t)L_12) == ((int32_t)((int32_t)-49524601))))
		{
			goto IL_009d;
		}
	}
	{
		uint32_t L_13 = V_2;
		if ((((int32_t)L_13) == ((int32_t)((int32_t)-15969363))))
		{
			goto IL_00f1;
		}
	}
	{
		goto IL_01d3;
	}

IL_0088:
	{
		String_t* L_14 = V_1;
		bool L_15;
		L_15 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_14, _stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B, NULL);
		if (L_15)
		{
			goto IL_0130;
		}
	}
	{
		goto IL_01d3;
	}

IL_009d:
	{
		String_t* L_16 = V_1;
		bool L_17;
		L_17 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_16, _stringLiteral062DB096C728515E033CF8C48A1C1F0B9A79384B, NULL);
		if (L_17)
		{
			goto IL_0147;
		}
	}
	{
		goto IL_01d3;
	}

IL_00b2:
	{
		String_t* L_18 = V_1;
		bool L_19;
		L_19 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_18, _stringLiteral8C6F88DEE0DFE3513BB8B44A8CF0FEE437F4EFFB, NULL);
		if (L_19)
		{
			goto IL_015b;
		}
	}
	{
		goto IL_01d3;
	}

IL_00c7:
	{
		String_t* L_20 = V_1;
		bool L_21;
		L_21 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_20, _stringLiteral9384C6EF2DA5C0BD5274A0DACFF291D0ABBFD8B1, NULL);
		if (L_21)
		{
			goto IL_016f;
		}
	}
	{
		goto IL_01d3;
	}

IL_00dc:
	{
		String_t* L_22 = V_1;
		bool L_23;
		L_23 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_22, _stringLiteral9E61658953B4F9BB4A05E3D2D2BC18990BADE934, NULL);
		if (L_23)
		{
			goto IL_0183;
		}
	}
	{
		goto IL_01d3;
	}

IL_00f1:
	{
		String_t* L_24 = V_1;
		bool L_25;
		L_25 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_24, _stringLiteral9CE1604D659135925CCC4DD1F526AFFE42E689F1, NULL);
		if (L_25)
		{
			goto IL_0197;
		}
	}
	{
		goto IL_01d3;
	}

IL_0106:
	{
		String_t* L_26 = V_1;
		bool L_27;
		L_27 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_26, _stringLiteral2F8690361553406965679AEF125F896BC5FC61F5, NULL);
		if (L_27)
		{
			goto IL_01ab;
		}
	}
	{
		goto IL_01d3;
	}

IL_011b:
	{
		String_t* L_28 = V_1;
		bool L_29;
		L_29 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_28, _stringLiteral1B024D537329B86AB0DF96B2A714180F442F53E9, NULL);
		if (L_29)
		{
			goto IL_01bf;
		}
	}
	{
		goto IL_01d3;
	}

IL_0130:
	{
		// instance.enabled = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_30 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_31 = ((ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_30);
		bool L_32;
		L_32 = GenericVirtualFuncInvoker1< bool, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mFFB70EE53D8CD0255A4E599780F62A3EB1520E83_RuntimeMethod_var, L_30, L_31);
		RotationOverLifetimeModule_set_enabled_mDA53B4B7B9333D4E09D845446C9F9400C7E8DC66((&V_0), L_32, NULL);
		// break;
		goto IL_01d9;
	}

IL_0147:
	{
		// instance.x = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_33 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_34 = ((ES3Type_MinMaxCurve_t1C147718750ACBECE5D2B7F545D2A434A3C5409B_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t1C147718750ACBECE5D2B7F545D2A434A3C5409B_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_33);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_35;
		L_35 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_m9D6B4042B923127DEA4A2CAA3E35EED37D75B3D0_RuntimeMethod_var, L_33, L_34);
		RotationOverLifetimeModule_set_x_m26A11609B42D2C819D237DB064D28EFC1577A9C4((&V_0), L_35, NULL);
		// break;
		goto IL_01d9;
	}

IL_015b:
	{
		// instance.xMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_36 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_37 = ((ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_36);
		float L_38;
		L_38 = GenericVirtualFuncInvoker1< float, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mA86928BC888E342D2C2644535E3399952F5077ED_RuntimeMethod_var, L_36, L_37);
		RotationOverLifetimeModule_set_xMultiplier_m099A3F3041DB369575051643B3B1A2BD4BB1C1BD((&V_0), L_38, NULL);
		// break;
		goto IL_01d9;
	}

IL_016f:
	{
		// instance.y = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_39 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_40 = ((ES3Type_MinMaxCurve_t1C147718750ACBECE5D2B7F545D2A434A3C5409B_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t1C147718750ACBECE5D2B7F545D2A434A3C5409B_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_39);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_41;
		L_41 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_m9D6B4042B923127DEA4A2CAA3E35EED37D75B3D0_RuntimeMethod_var, L_39, L_40);
		RotationOverLifetimeModule_set_y_m4D757DFB1D4BFE8050616BD5D2DC035773ED75CA((&V_0), L_41, NULL);
		// break;
		goto IL_01d9;
	}

IL_0183:
	{
		// instance.yMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_42 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_43 = ((ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_42);
		float L_44;
		L_44 = GenericVirtualFuncInvoker1< float, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mA86928BC888E342D2C2644535E3399952F5077ED_RuntimeMethod_var, L_42, L_43);
		RotationOverLifetimeModule_set_yMultiplier_m8DB9A9DF867858F85FCD405DA6CE3089EAFE2FAF((&V_0), L_44, NULL);
		// break;
		goto IL_01d9;
	}

IL_0197:
	{
		// instance.z = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_45 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_46 = ((ES3Type_MinMaxCurve_t1C147718750ACBECE5D2B7F545D2A434A3C5409B_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t1C147718750ACBECE5D2B7F545D2A434A3C5409B_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_45);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_47;
		L_47 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_m9D6B4042B923127DEA4A2CAA3E35EED37D75B3D0_RuntimeMethod_var, L_45, L_46);
		RotationOverLifetimeModule_set_z_m4B93DD11BAB01085FD8B482DFAB2EC7867BE08BD((&V_0), L_47, NULL);
		// break;
		goto IL_01d9;
	}

IL_01ab:
	{
		// instance.zMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_48 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_49 = ((ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_48);
		float L_50;
		L_50 = GenericVirtualFuncInvoker1< float, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mA86928BC888E342D2C2644535E3399952F5077ED_RuntimeMethod_var, L_48, L_49);
		RotationOverLifetimeModule_set_zMultiplier_m035DC683A4FB9B68B671745CD99628B6762D5FEF((&V_0), L_50, NULL);
		// break;
		goto IL_01d9;
	}

IL_01bf:
	{
		// instance.separateAxes = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_51 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_52 = ((ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_51);
		bool L_53;
		L_53 = GenericVirtualFuncInvoker1< bool, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mFFB70EE53D8CD0255A4E599780F62A3EB1520E83_RuntimeMethod_var, L_51, L_52);
		RotationOverLifetimeModule_set_separateAxes_m8FAFD751E4B823A461521A4349B6D0544887D23E((&V_0), L_53, NULL);
		// break;
		goto IL_01d9;
	}

IL_01d3:
	{
		// reader.Skip();
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_54 = ___reader0;
		NullCheck(L_54);
		VirtualActionInvoker0::Invoke(41 /* System.Void ES3Reader::Skip() */, L_54);
	}

IL_01d9:
	{
		// while((propertyName = reader.ReadPropertyName()) != null)
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_55 = ___reader0;
		NullCheck(L_55);
		String_t* L_56;
		L_56 = VirtualFuncInvoker0< String_t* >::Invoke(21 /* System.String ES3Reader::ReadPropertyName() */, L_55);
		String_t* L_57 = L_56;
		V_1 = L_57;
		if (L_57)
		{
			goto IL_000c;
		}
	}
	{
		// }
		return;
	}
}
// System.Void ES3Types.ES3Type_RotationOverLifetimeModule::ReadInto<UnityEngine.ParticleSystem/TextureSheetAnimationModule>(ES3Reader,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ES3Type_RotationOverLifetimeModule_ReadInto_TisTextureSheetAnimationModule_tB53F451F252E24ACC3EF80D770DB4FBE1A13D1F6_mBA827E631340BE3716FDB9757473228FCB0F26FD_gshared (ES3Type_RotationOverLifetimeModule_t6C58693EB8B792F0356C451990CDFF790B93A237* __this, ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* ___reader0, RuntimeObject* ___obj1, const RuntimeMethod* method) 
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
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RotationOverLifetimeModule_tEE08858451167B6DDE6DD36FDCF11E74C77D79E6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral062DB096C728515E033CF8C48A1C1F0B9A79384B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1B024D537329B86AB0DF96B2A714180F442F53E9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2F8690361553406965679AEF125F896BC5FC61F5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8C6F88DEE0DFE3513BB8B44A8CF0FEE437F4EFFB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9384C6EF2DA5C0BD5274A0DACFF291D0ABBFD8B1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9CE1604D659135925CCC4DD1F526AFFE42E689F1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9E61658953B4F9BB4A05E3D2D2BC18990BADE934);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B);
		s_Il2CppMethodInitialized = true;
	}
	RotationOverLifetimeModule_tEE08858451167B6DDE6DD36FDCF11E74C77D79E6 V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	uint32_t V_2 = 0;
	{
		// var instance = (UnityEngine.ParticleSystem.RotationOverLifetimeModule)obj;
		RuntimeObject* L_0 = ___obj1;
		V_0 = ((*(RotationOverLifetimeModule_tEE08858451167B6DDE6DD36FDCF11E74C77D79E6*)((RotationOverLifetimeModule_tEE08858451167B6DDE6DD36FDCF11E74C77D79E6*)(RotationOverLifetimeModule_tEE08858451167B6DDE6DD36FDCF11E74C77D79E6*)UnBox(L_0, RotationOverLifetimeModule_tEE08858451167B6DDE6DD36FDCF11E74C77D79E6_il2cpp_TypeInfo_var))));
		goto IL_01d9;
	}

IL_000c:
	{
		String_t* L_1 = V_1;
		uint32_t L_2;
		L_2 = U3CPrivateImplementationDetailsU3E_ComputeStringHash_m9E43873DE0DF480D27EC1C2AA3C09E74EA77F75D(L_1, NULL);
		V_2 = L_2;
		uint32_t L_3 = V_2;
		if ((!(((uint32_t)L_3) <= ((uint32_t)((int32_t)-1013869429)))))
		{
			goto IL_0056;
		}
	}
	{
		uint32_t L_4 = V_2;
		if ((!(((uint32_t)L_4) <= ((uint32_t)((int32_t)726266686)))))
		{
			goto IL_003b;
		}
	}
	{
		uint32_t L_5 = V_2;
		if ((((int32_t)L_5) == ((int32_t)((int32_t)49525662))))
		{
			goto IL_0088;
		}
	}
	{
		uint32_t L_6 = V_2;
		if ((((int32_t)L_6) == ((int32_t)((int32_t)726266686))))
		{
			goto IL_0106;
		}
	}
	{
		goto IL_01d3;
	}

IL_003b:
	{
		uint32_t L_7 = V_2;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)1479031685))))
		{
			goto IL_011b;
		}
	}
	{
		uint32_t L_8 = V_2;
		if ((((int32_t)L_8) == ((int32_t)((int32_t)-1013869429))))
		{
			goto IL_00dc;
		}
	}
	{
		goto IL_01d3;
	}

IL_0056:
	{
		uint32_t L_9 = V_2;
		if ((!(((uint32_t)L_9) <= ((uint32_t)((int32_t)-66302220)))))
		{
			goto IL_0073;
		}
	}
	{
		uint32_t L_10 = V_2;
		if ((((int32_t)L_10) == ((int32_t)((int32_t)-585050980))))
		{
			goto IL_00b2;
		}
	}
	{
		uint32_t L_11 = V_2;
		if ((((int32_t)L_11) == ((int32_t)((int32_t)-66302220))))
		{
			goto IL_00c7;
		}
	}
	{
		goto IL_01d3;
	}

IL_0073:
	{
		uint32_t L_12 = V_2;
		if ((((int32_t)L_12) == ((int32_t)((int32_t)-49524601))))
		{
			goto IL_009d;
		}
	}
	{
		uint32_t L_13 = V_2;
		if ((((int32_t)L_13) == ((int32_t)((int32_t)-15969363))))
		{
			goto IL_00f1;
		}
	}
	{
		goto IL_01d3;
	}

IL_0088:
	{
		String_t* L_14 = V_1;
		bool L_15;
		L_15 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_14, _stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B, NULL);
		if (L_15)
		{
			goto IL_0130;
		}
	}
	{
		goto IL_01d3;
	}

IL_009d:
	{
		String_t* L_16 = V_1;
		bool L_17;
		L_17 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_16, _stringLiteral062DB096C728515E033CF8C48A1C1F0B9A79384B, NULL);
		if (L_17)
		{
			goto IL_0147;
		}
	}
	{
		goto IL_01d3;
	}

IL_00b2:
	{
		String_t* L_18 = V_1;
		bool L_19;
		L_19 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_18, _stringLiteral8C6F88DEE0DFE3513BB8B44A8CF0FEE437F4EFFB, NULL);
		if (L_19)
		{
			goto IL_015b;
		}
	}
	{
		goto IL_01d3;
	}

IL_00c7:
	{
		String_t* L_20 = V_1;
		bool L_21;
		L_21 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_20, _stringLiteral9384C6EF2DA5C0BD5274A0DACFF291D0ABBFD8B1, NULL);
		if (L_21)
		{
			goto IL_016f;
		}
	}
	{
		goto IL_01d3;
	}

IL_00dc:
	{
		String_t* L_22 = V_1;
		bool L_23;
		L_23 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_22, _stringLiteral9E61658953B4F9BB4A05E3D2D2BC18990BADE934, NULL);
		if (L_23)
		{
			goto IL_0183;
		}
	}
	{
		goto IL_01d3;
	}

IL_00f1:
	{
		String_t* L_24 = V_1;
		bool L_25;
		L_25 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_24, _stringLiteral9CE1604D659135925CCC4DD1F526AFFE42E689F1, NULL);
		if (L_25)
		{
			goto IL_0197;
		}
	}
	{
		goto IL_01d3;
	}

IL_0106:
	{
		String_t* L_26 = V_1;
		bool L_27;
		L_27 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_26, _stringLiteral2F8690361553406965679AEF125F896BC5FC61F5, NULL);
		if (L_27)
		{
			goto IL_01ab;
		}
	}
	{
		goto IL_01d3;
	}

IL_011b:
	{
		String_t* L_28 = V_1;
		bool L_29;
		L_29 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_28, _stringLiteral1B024D537329B86AB0DF96B2A714180F442F53E9, NULL);
		if (L_29)
		{
			goto IL_01bf;
		}
	}
	{
		goto IL_01d3;
	}

IL_0130:
	{
		// instance.enabled = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_30 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_31 = ((ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_30);
		bool L_32;
		L_32 = GenericVirtualFuncInvoker1< bool, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mFFB70EE53D8CD0255A4E599780F62A3EB1520E83_RuntimeMethod_var, L_30, L_31);
		RotationOverLifetimeModule_set_enabled_mDA53B4B7B9333D4E09D845446C9F9400C7E8DC66((&V_0), L_32, NULL);
		// break;
		goto IL_01d9;
	}

IL_0147:
	{
		// instance.x = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_33 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_34 = ((ES3Type_MinMaxCurve_t1C147718750ACBECE5D2B7F545D2A434A3C5409B_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t1C147718750ACBECE5D2B7F545D2A434A3C5409B_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_33);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_35;
		L_35 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_m9D6B4042B923127DEA4A2CAA3E35EED37D75B3D0_RuntimeMethod_var, L_33, L_34);
		RotationOverLifetimeModule_set_x_m26A11609B42D2C819D237DB064D28EFC1577A9C4((&V_0), L_35, NULL);
		// break;
		goto IL_01d9;
	}

IL_015b:
	{
		// instance.xMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_36 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_37 = ((ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_36);
		float L_38;
		L_38 = GenericVirtualFuncInvoker1< float, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mA86928BC888E342D2C2644535E3399952F5077ED_RuntimeMethod_var, L_36, L_37);
		RotationOverLifetimeModule_set_xMultiplier_m099A3F3041DB369575051643B3B1A2BD4BB1C1BD((&V_0), L_38, NULL);
		// break;
		goto IL_01d9;
	}

IL_016f:
	{
		// instance.y = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_39 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_40 = ((ES3Type_MinMaxCurve_t1C147718750ACBECE5D2B7F545D2A434A3C5409B_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t1C147718750ACBECE5D2B7F545D2A434A3C5409B_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_39);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_41;
		L_41 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_m9D6B4042B923127DEA4A2CAA3E35EED37D75B3D0_RuntimeMethod_var, L_39, L_40);
		RotationOverLifetimeModule_set_y_m4D757DFB1D4BFE8050616BD5D2DC035773ED75CA((&V_0), L_41, NULL);
		// break;
		goto IL_01d9;
	}

IL_0183:
	{
		// instance.yMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_42 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_43 = ((ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_42);
		float L_44;
		L_44 = GenericVirtualFuncInvoker1< float, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mA86928BC888E342D2C2644535E3399952F5077ED_RuntimeMethod_var, L_42, L_43);
		RotationOverLifetimeModule_set_yMultiplier_m8DB9A9DF867858F85FCD405DA6CE3089EAFE2FAF((&V_0), L_44, NULL);
		// break;
		goto IL_01d9;
	}

IL_0197:
	{
		// instance.z = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_45 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_46 = ((ES3Type_MinMaxCurve_t1C147718750ACBECE5D2B7F545D2A434A3C5409B_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t1C147718750ACBECE5D2B7F545D2A434A3C5409B_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_45);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_47;
		L_47 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_m9D6B4042B923127DEA4A2CAA3E35EED37D75B3D0_RuntimeMethod_var, L_45, L_46);
		RotationOverLifetimeModule_set_z_m4B93DD11BAB01085FD8B482DFAB2EC7867BE08BD((&V_0), L_47, NULL);
		// break;
		goto IL_01d9;
	}

IL_01ab:
	{
		// instance.zMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_48 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_49 = ((ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_48);
		float L_50;
		L_50 = GenericVirtualFuncInvoker1< float, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mA86928BC888E342D2C2644535E3399952F5077ED_RuntimeMethod_var, L_48, L_49);
		RotationOverLifetimeModule_set_zMultiplier_m035DC683A4FB9B68B671745CD99628B6762D5FEF((&V_0), L_50, NULL);
		// break;
		goto IL_01d9;
	}

IL_01bf:
	{
		// instance.separateAxes = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_51 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_52 = ((ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_51);
		bool L_53;
		L_53 = GenericVirtualFuncInvoker1< bool, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mFFB70EE53D8CD0255A4E599780F62A3EB1520E83_RuntimeMethod_var, L_51, L_52);
		RotationOverLifetimeModule_set_separateAxes_m8FAFD751E4B823A461521A4349B6D0544887D23E((&V_0), L_53, NULL);
		// break;
		goto IL_01d9;
	}

IL_01d3:
	{
		// reader.Skip();
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_54 = ___reader0;
		NullCheck(L_54);
		VirtualActionInvoker0::Invoke(41 /* System.Void ES3Reader::Skip() */, L_54);
	}

IL_01d9:
	{
		// while((propertyName = reader.ReadPropertyName()) != null)
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_55 = ___reader0;
		NullCheck(L_55);
		String_t* L_56;
		L_56 = VirtualFuncInvoker0< String_t* >::Invoke(21 /* System.String ES3Reader::ReadPropertyName() */, L_55);
		String_t* L_57 = L_56;
		V_1 = L_57;
		if (L_57)
		{
			goto IL_000c;
		}
	}
	{
		// }
		return;
	}
}
// System.Void ES3Types.ES3Type_RotationOverLifetimeModule::ReadInto<UnityEngine.ParticleSystem/TrailModule>(ES3Reader,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ES3Type_RotationOverLifetimeModule_ReadInto_TisTrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D_m1838067C0E5AA073B52273B00BCD8D989DCC39BA_gshared (ES3Type_RotationOverLifetimeModule_t6C58693EB8B792F0356C451990CDFF790B93A237* __this, ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* ___reader0, RuntimeObject* ___obj1, const RuntimeMethod* method) 
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
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RotationOverLifetimeModule_tEE08858451167B6DDE6DD36FDCF11E74C77D79E6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral062DB096C728515E033CF8C48A1C1F0B9A79384B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1B024D537329B86AB0DF96B2A714180F442F53E9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2F8690361553406965679AEF125F896BC5FC61F5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8C6F88DEE0DFE3513BB8B44A8CF0FEE437F4EFFB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9384C6EF2DA5C0BD5274A0DACFF291D0ABBFD8B1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9CE1604D659135925CCC4DD1F526AFFE42E689F1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9E61658953B4F9BB4A05E3D2D2BC18990BADE934);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B);
		s_Il2CppMethodInitialized = true;
	}
	RotationOverLifetimeModule_tEE08858451167B6DDE6DD36FDCF11E74C77D79E6 V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	uint32_t V_2 = 0;
	{
		// var instance = (UnityEngine.ParticleSystem.RotationOverLifetimeModule)obj;
		RuntimeObject* L_0 = ___obj1;
		V_0 = ((*(RotationOverLifetimeModule_tEE08858451167B6DDE6DD36FDCF11E74C77D79E6*)((RotationOverLifetimeModule_tEE08858451167B6DDE6DD36FDCF11E74C77D79E6*)(RotationOverLifetimeModule_tEE08858451167B6DDE6DD36FDCF11E74C77D79E6*)UnBox(L_0, RotationOverLifetimeModule_tEE08858451167B6DDE6DD36FDCF11E74C77D79E6_il2cpp_TypeInfo_var))));
		goto IL_01d9;
	}

IL_000c:
	{
		String_t* L_1 = V_1;
		uint32_t L_2;
		L_2 = U3CPrivateImplementationDetailsU3E_ComputeStringHash_m9E43873DE0DF480D27EC1C2AA3C09E74EA77F75D(L_1, NULL);
		V_2 = L_2;
		uint32_t L_3 = V_2;
		if ((!(((uint32_t)L_3) <= ((uint32_t)((int32_t)-1013869429)))))
		{
			goto IL_0056;
		}
	}
	{
		uint32_t L_4 = V_2;
		if ((!(((uint32_t)L_4) <= ((uint32_t)((int32_t)726266686)))))
		{
			goto IL_003b;
		}
	}
	{
		uint32_t L_5 = V_2;
		if ((((int32_t)L_5) == ((int32_t)((int32_t)49525662))))
		{
			goto IL_0088;
		}
	}
	{
		uint32_t L_6 = V_2;
		if ((((int32_t)L_6) == ((int32_t)((int32_t)726266686))))
		{
			goto IL_0106;
		}
	}
	{
		goto IL_01d3;
	}

IL_003b:
	{
		uint32_t L_7 = V_2;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)1479031685))))
		{
			goto IL_011b;
		}
	}
	{
		uint32_t L_8 = V_2;
		if ((((int32_t)L_8) == ((int32_t)((int32_t)-1013869429))))
		{
			goto IL_00dc;
		}
	}
	{
		goto IL_01d3;
	}

IL_0056:
	{
		uint32_t L_9 = V_2;
		if ((!(((uint32_t)L_9) <= ((uint32_t)((int32_t)-66302220)))))
		{
			goto IL_0073;
		}
	}
	{
		uint32_t L_10 = V_2;
		if ((((int32_t)L_10) == ((int32_t)((int32_t)-585050980))))
		{
			goto IL_00b2;
		}
	}
	{
		uint32_t L_11 = V_2;
		if ((((int32_t)L_11) == ((int32_t)((int32_t)-66302220))))
		{
			goto IL_00c7;
		}
	}
	{
		goto IL_01d3;
	}

IL_0073:
	{
		uint32_t L_12 = V_2;
		if ((((int32_t)L_12) == ((int32_t)((int32_t)-49524601))))
		{
			goto IL_009d;
		}
	}
	{
		uint32_t L_13 = V_2;
		if ((((int32_t)L_13) == ((int32_t)((int32_t)-15969363))))
		{
			goto IL_00f1;
		}
	}
	{
		goto IL_01d3;
	}

IL_0088:
	{
		String_t* L_14 = V_1;
		bool L_15;
		L_15 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_14, _stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B, NULL);
		if (L_15)
		{
			goto IL_0130;
		}
	}
	{
		goto IL_01d3;
	}

IL_009d:
	{
		String_t* L_16 = V_1;
		bool L_17;
		L_17 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_16, _stringLiteral062DB096C728515E033CF8C48A1C1F0B9A79384B, NULL);
		if (L_17)
		{
			goto IL_0147;
		}
	}
	{
		goto IL_01d3;
	}

IL_00b2:
	{
		String_t* L_18 = V_1;
		bool L_19;
		L_19 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_18, _stringLiteral8C6F88DEE0DFE3513BB8B44A8CF0FEE437F4EFFB, NULL);
		if (L_19)
		{
			goto IL_015b;
		}
	}
	{
		goto IL_01d3;
	}

IL_00c7:
	{
		String_t* L_20 = V_1;
		bool L_21;
		L_21 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_20, _stringLiteral9384C6EF2DA5C0BD5274A0DACFF291D0ABBFD8B1, NULL);
		if (L_21)
		{
			goto IL_016f;
		}
	}
	{
		goto IL_01d3;
	}

IL_00dc:
	{
		String_t* L_22 = V_1;
		bool L_23;
		L_23 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_22, _stringLiteral9E61658953B4F9BB4A05E3D2D2BC18990BADE934, NULL);
		if (L_23)
		{
			goto IL_0183;
		}
	}
	{
		goto IL_01d3;
	}

IL_00f1:
	{
		String_t* L_24 = V_1;
		bool L_25;
		L_25 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_24, _stringLiteral9CE1604D659135925CCC4DD1F526AFFE42E689F1, NULL);
		if (L_25)
		{
			goto IL_0197;
		}
	}
	{
		goto IL_01d3;
	}

IL_0106:
	{
		String_t* L_26 = V_1;
		bool L_27;
		L_27 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_26, _stringLiteral2F8690361553406965679AEF125F896BC5FC61F5, NULL);
		if (L_27)
		{
			goto IL_01ab;
		}
	}
	{
		goto IL_01d3;
	}

IL_011b:
	{
		String_t* L_28 = V_1;
		bool L_29;
		L_29 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_28, _stringLiteral1B024D537329B86AB0DF96B2A714180F442F53E9, NULL);
		if (L_29)
		{
			goto IL_01bf;
		}
	}
	{
		goto IL_01d3;
	}

IL_0130:
	{
		// instance.enabled = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_30 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_31 = ((ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_30);
		bool L_32;
		L_32 = GenericVirtualFuncInvoker1< bool, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mFFB70EE53D8CD0255A4E599780F62A3EB1520E83_RuntimeMethod_var, L_30, L_31);
		RotationOverLifetimeModule_set_enabled_mDA53B4B7B9333D4E09D845446C9F9400C7E8DC66((&V_0), L_32, NULL);
		// break;
		goto IL_01d9;
	}

IL_0147:
	{
		// instance.x = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_33 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_34 = ((ES3Type_MinMaxCurve_t1C147718750ACBECE5D2B7F545D2A434A3C5409B_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t1C147718750ACBECE5D2B7F545D2A434A3C5409B_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_33);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_35;
		L_35 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_m9D6B4042B923127DEA4A2CAA3E35EED37D75B3D0_RuntimeMethod_var, L_33, L_34);
		RotationOverLifetimeModule_set_x_m26A11609B42D2C819D237DB064D28EFC1577A9C4((&V_0), L_35, NULL);
		// break;
		goto IL_01d9;
	}

IL_015b:
	{
		// instance.xMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_36 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_37 = ((ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_36);
		float L_38;
		L_38 = GenericVirtualFuncInvoker1< float, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mA86928BC888E342D2C2644535E3399952F5077ED_RuntimeMethod_var, L_36, L_37);
		RotationOverLifetimeModule_set_xMultiplier_m099A3F3041DB369575051643B3B1A2BD4BB1C1BD((&V_0), L_38, NULL);
		// break;
		goto IL_01d9;
	}

IL_016f:
	{
		// instance.y = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_39 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_40 = ((ES3Type_MinMaxCurve_t1C147718750ACBECE5D2B7F545D2A434A3C5409B_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t1C147718750ACBECE5D2B7F545D2A434A3C5409B_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_39);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_41;
		L_41 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_m9D6B4042B923127DEA4A2CAA3E35EED37D75B3D0_RuntimeMethod_var, L_39, L_40);
		RotationOverLifetimeModule_set_y_m4D757DFB1D4BFE8050616BD5D2DC035773ED75CA((&V_0), L_41, NULL);
		// break;
		goto IL_01d9;
	}

IL_0183:
	{
		// instance.yMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_42 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_43 = ((ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_42);
		float L_44;
		L_44 = GenericVirtualFuncInvoker1< float, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mA86928BC888E342D2C2644535E3399952F5077ED_RuntimeMethod_var, L_42, L_43);
		RotationOverLifetimeModule_set_yMultiplier_m8DB9A9DF867858F85FCD405DA6CE3089EAFE2FAF((&V_0), L_44, NULL);
		// break;
		goto IL_01d9;
	}

IL_0197:
	{
		// instance.z = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_45 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_46 = ((ES3Type_MinMaxCurve_t1C147718750ACBECE5D2B7F545D2A434A3C5409B_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t1C147718750ACBECE5D2B7F545D2A434A3C5409B_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_45);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_47;
		L_47 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_m9D6B4042B923127DEA4A2CAA3E35EED37D75B3D0_RuntimeMethod_var, L_45, L_46);
		RotationOverLifetimeModule_set_z_m4B93DD11BAB01085FD8B482DFAB2EC7867BE08BD((&V_0), L_47, NULL);
		// break;
		goto IL_01d9;
	}

IL_01ab:
	{
		// instance.zMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_48 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_49 = ((ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_48);
		float L_50;
		L_50 = GenericVirtualFuncInvoker1< float, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mA86928BC888E342D2C2644535E3399952F5077ED_RuntimeMethod_var, L_48, L_49);
		RotationOverLifetimeModule_set_zMultiplier_m035DC683A4FB9B68B671745CD99628B6762D5FEF((&V_0), L_50, NULL);
		// break;
		goto IL_01d9;
	}

IL_01bf:
	{
		// instance.separateAxes = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_51 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_52 = ((ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_51);
		bool L_53;
		L_53 = GenericVirtualFuncInvoker1< bool, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mFFB70EE53D8CD0255A4E599780F62A3EB1520E83_RuntimeMethod_var, L_51, L_52);
		RotationOverLifetimeModule_set_separateAxes_m8FAFD751E4B823A461521A4349B6D0544887D23E((&V_0), L_53, NULL);
		// break;
		goto IL_01d9;
	}

IL_01d3:
	{
		// reader.Skip();
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_54 = ___reader0;
		NullCheck(L_54);
		VirtualActionInvoker0::Invoke(41 /* System.Void ES3Reader::Skip() */, L_54);
	}

IL_01d9:
	{
		// while((propertyName = reader.ReadPropertyName()) != null)
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_55 = ___reader0;
		NullCheck(L_55);
		String_t* L_56;
		L_56 = VirtualFuncInvoker0< String_t* >::Invoke(21 /* System.String ES3Reader::ReadPropertyName() */, L_55);
		String_t* L_57 = L_56;
		V_1 = L_57;
		if (L_57)
		{
			goto IL_000c;
		}
	}
	{
		// }
		return;
	}
}
// System.Void ES3Types.ES3Type_RotationOverLifetimeModule::ReadInto<UnityEngine.ParticleSystem/TriggerModule>(ES3Reader,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ES3Type_RotationOverLifetimeModule_ReadInto_TisTriggerModule_tDEE844919206259DA831ADCA3B1B2D915CB767B1_m52E6C1EC9248A41B558036960C64ECDC75AE9883_gshared (ES3Type_RotationOverLifetimeModule_t6C58693EB8B792F0356C451990CDFF790B93A237* __this, ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* ___reader0, RuntimeObject* ___obj1, const RuntimeMethod* method) 
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
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RotationOverLifetimeModule_tEE08858451167B6DDE6DD36FDCF11E74C77D79E6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral062DB096C728515E033CF8C48A1C1F0B9A79384B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1B024D537329B86AB0DF96B2A714180F442F53E9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2F8690361553406965679AEF125F896BC5FC61F5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8C6F88DEE0DFE3513BB8B44A8CF0FEE437F4EFFB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9384C6EF2DA5C0BD5274A0DACFF291D0ABBFD8B1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9CE1604D659135925CCC4DD1F526AFFE42E689F1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9E61658953B4F9BB4A05E3D2D2BC18990BADE934);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B);
		s_Il2CppMethodInitialized = true;
	}
	RotationOverLifetimeModule_tEE08858451167B6DDE6DD36FDCF11E74C77D79E6 V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	uint32_t V_2 = 0;
	{
		// var instance = (UnityEngine.ParticleSystem.RotationOverLifetimeModule)obj;
		RuntimeObject* L_0 = ___obj1;
		V_0 = ((*(RotationOverLifetimeModule_tEE08858451167B6DDE6DD36FDCF11E74C77D79E6*)((RotationOverLifetimeModule_tEE08858451167B6DDE6DD36FDCF11E74C77D79E6*)(RotationOverLifetimeModule_tEE08858451167B6DDE6DD36FDCF11E74C77D79E6*)UnBox(L_0, RotationOverLifetimeModule_tEE08858451167B6DDE6DD36FDCF11E74C77D79E6_il2cpp_TypeInfo_var))));
		goto IL_01d9;
	}

IL_000c:
	{
		String_t* L_1 = V_1;
		uint32_t L_2;
		L_2 = U3CPrivateImplementationDetailsU3E_ComputeStringHash_m9E43873DE0DF480D27EC1C2AA3C09E74EA77F75D(L_1, NULL);
		V_2 = L_2;
		uint32_t L_3 = V_2;
		if ((!(((uint32_t)L_3) <= ((uint32_t)((int32_t)-1013869429)))))
		{
			goto IL_0056;
		}
	}
	{
		uint32_t L_4 = V_2;
		if ((!(((uint32_t)L_4) <= ((uint32_t)((int32_t)726266686)))))
		{
			goto IL_003b;
		}
	}
	{
		uint32_t L_5 = V_2;
		if ((((int32_t)L_5) == ((int32_t)((int32_t)49525662))))
		{
			goto IL_0088;
		}
	}
	{
		uint32_t L_6 = V_2;
		if ((((int32_t)L_6) == ((int32_t)((int32_t)726266686))))
		{
			goto IL_0106;
		}
	}
	{
		goto IL_01d3;
	}

IL_003b:
	{
		uint32_t L_7 = V_2;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)1479031685))))
		{
			goto IL_011b;
		}
	}
	{
		uint32_t L_8 = V_2;
		if ((((int32_t)L_8) == ((int32_t)((int32_t)-1013869429))))
		{
			goto IL_00dc;
		}
	}
	{
		goto IL_01d3;
	}

IL_0056:
	{
		uint32_t L_9 = V_2;
		if ((!(((uint32_t)L_9) <= ((uint32_t)((int32_t)-66302220)))))
		{
			goto IL_0073;
		}
	}
	{
		uint32_t L_10 = V_2;
		if ((((int32_t)L_10) == ((int32_t)((int32_t)-585050980))))
		{
			goto IL_00b2;
		}
	}
	{
		uint32_t L_11 = V_2;
		if ((((int32_t)L_11) == ((int32_t)((int32_t)-66302220))))
		{
			goto IL_00c7;
		}
	}
	{
		goto IL_01d3;
	}

IL_0073:
	{
		uint32_t L_12 = V_2;
		if ((((int32_t)L_12) == ((int32_t)((int32_t)-49524601))))
		{
			goto IL_009d;
		}
	}
	{
		uint32_t L_13 = V_2;
		if ((((int32_t)L_13) == ((int32_t)((int32_t)-15969363))))
		{
			goto IL_00f1;
		}
	}
	{
		goto IL_01d3;
	}

IL_0088:
	{
		String_t* L_14 = V_1;
		bool L_15;
		L_15 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_14, _stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B, NULL);
		if (L_15)
		{
			goto IL_0130;
		}
	}
	{
		goto IL_01d3;
	}

IL_009d:
	{
		String_t* L_16 = V_1;
		bool L_17;
		L_17 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_16, _stringLiteral062DB096C728515E033CF8C48A1C1F0B9A79384B, NULL);
		if (L_17)
		{
			goto IL_0147;
		}
	}
	{
		goto IL_01d3;
	}

IL_00b2:
	{
		String_t* L_18 = V_1;
		bool L_19;
		L_19 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_18, _stringLiteral8C6F88DEE0DFE3513BB8B44A8CF0FEE437F4EFFB, NULL);
		if (L_19)
		{
			goto IL_015b;
		}
	}
	{
		goto IL_01d3;
	}

IL_00c7:
	{
		String_t* L_20 = V_1;
		bool L_21;
		L_21 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_20, _stringLiteral9384C6EF2DA5C0BD5274A0DACFF291D0ABBFD8B1, NULL);
		if (L_21)
		{
			goto IL_016f;
		}
	}
	{
		goto IL_01d3;
	}

IL_00dc:
	{
		String_t* L_22 = V_1;
		bool L_23;
		L_23 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_22, _stringLiteral9E61658953B4F9BB4A05E3D2D2BC18990BADE934, NULL);
		if (L_23)
		{
			goto IL_0183;
		}
	}
	{
		goto IL_01d3;
	}

IL_00f1:
	{
		String_t* L_24 = V_1;
		bool L_25;
		L_25 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_24, _stringLiteral9CE1604D659135925CCC4DD1F526AFFE42E689F1, NULL);
		if (L_25)
		{
			goto IL_0197;
		}
	}
	{
		goto IL_01d3;
	}

IL_0106:
	{
		String_t* L_26 = V_1;
		bool L_27;
		L_27 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_26, _stringLiteral2F8690361553406965679AEF125F896BC5FC61F5, NULL);
		if (L_27)
		{
			goto IL_01ab;
		}
	}
	{
		goto IL_01d3;
	}

IL_011b:
	{
		String_t* L_28 = V_1;
		bool L_29;
		L_29 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_28, _stringLiteral1B024D537329B86AB0DF96B2A714180F442F53E9, NULL);
		if (L_29)
		{
			goto IL_01bf;
		}
	}
	{
		goto IL_01d3;
	}

IL_0130:
	{
		// instance.enabled = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_30 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_31 = ((ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_30);
		bool L_32;
		L_32 = GenericVirtualFuncInvoker1< bool, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mFFB70EE53D8CD0255A4E599780F62A3EB1520E83_RuntimeMethod_var, L_30, L_31);
		RotationOverLifetimeModule_set_enabled_mDA53B4B7B9333D4E09D845446C9F9400C7E8DC66((&V_0), L_32, NULL);
		// break;
		goto IL_01d9;
	}

IL_0147:
	{
		// instance.x = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_33 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_34 = ((ES3Type_MinMaxCurve_t1C147718750ACBECE5D2B7F545D2A434A3C5409B_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t1C147718750ACBECE5D2B7F545D2A434A3C5409B_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_33);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_35;
		L_35 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_m9D6B4042B923127DEA4A2CAA3E35EED37D75B3D0_RuntimeMethod_var, L_33, L_34);
		RotationOverLifetimeModule_set_x_m26A11609B42D2C819D237DB064D28EFC1577A9C4((&V_0), L_35, NULL);
		// break;
		goto IL_01d9;
	}

IL_015b:
	{
		// instance.xMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_36 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_37 = ((ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_36);
		float L_38;
		L_38 = GenericVirtualFuncInvoker1< float, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mA86928BC888E342D2C2644535E3399952F5077ED_RuntimeMethod_var, L_36, L_37);
		RotationOverLifetimeModule_set_xMultiplier_m099A3F3041DB369575051643B3B1A2BD4BB1C1BD((&V_0), L_38, NULL);
		// break;
		goto IL_01d9;
	}

IL_016f:
	{
		// instance.y = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_39 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_40 = ((ES3Type_MinMaxCurve_t1C147718750ACBECE5D2B7F545D2A434A3C5409B_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t1C147718750ACBECE5D2B7F545D2A434A3C5409B_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_39);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_41;
		L_41 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_m9D6B4042B923127DEA4A2CAA3E35EED37D75B3D0_RuntimeMethod_var, L_39, L_40);
		RotationOverLifetimeModule_set_y_m4D757DFB1D4BFE8050616BD5D2DC035773ED75CA((&V_0), L_41, NULL);
		// break;
		goto IL_01d9;
	}

IL_0183:
	{
		// instance.yMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_42 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_43 = ((ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_42);
		float L_44;
		L_44 = GenericVirtualFuncInvoker1< float, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mA86928BC888E342D2C2644535E3399952F5077ED_RuntimeMethod_var, L_42, L_43);
		RotationOverLifetimeModule_set_yMultiplier_m8DB9A9DF867858F85FCD405DA6CE3089EAFE2FAF((&V_0), L_44, NULL);
		// break;
		goto IL_01d9;
	}

IL_0197:
	{
		// instance.z = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_45 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_46 = ((ES3Type_MinMaxCurve_t1C147718750ACBECE5D2B7F545D2A434A3C5409B_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t1C147718750ACBECE5D2B7F545D2A434A3C5409B_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_45);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_47;
		L_47 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_m9D6B4042B923127DEA4A2CAA3E35EED37D75B3D0_RuntimeMethod_var, L_45, L_46);
		RotationOverLifetimeModule_set_z_m4B93DD11BAB01085FD8B482DFAB2EC7867BE08BD((&V_0), L_47, NULL);
		// break;
		goto IL_01d9;
	}

IL_01ab:
	{
		// instance.zMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_48 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_49 = ((ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_48);
		float L_50;
		L_50 = GenericVirtualFuncInvoker1< float, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mA86928BC888E342D2C2644535E3399952F5077ED_RuntimeMethod_var, L_48, L_49);
		RotationOverLifetimeModule_set_zMultiplier_m035DC683A4FB9B68B671745CD99628B6762D5FEF((&V_0), L_50, NULL);
		// break;
		goto IL_01d9;
	}

IL_01bf:
	{
		// instance.separateAxes = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_51 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_52 = ((ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_51);
		bool L_53;
		L_53 = GenericVirtualFuncInvoker1< bool, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mFFB70EE53D8CD0255A4E599780F62A3EB1520E83_RuntimeMethod_var, L_51, L_52);
		RotationOverLifetimeModule_set_separateAxes_m8FAFD751E4B823A461521A4349B6D0544887D23E((&V_0), L_53, NULL);
		// break;
		goto IL_01d9;
	}

IL_01d3:
	{
		// reader.Skip();
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_54 = ___reader0;
		NullCheck(L_54);
		VirtualActionInvoker0::Invoke(41 /* System.Void ES3Reader::Skip() */, L_54);
	}

IL_01d9:
	{
		// while((propertyName = reader.ReadPropertyName()) != null)
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_55 = ___reader0;
		NullCheck(L_55);
		String_t* L_56;
		L_56 = VirtualFuncInvoker0< String_t* >::Invoke(21 /* System.String ES3Reader::ReadPropertyName() */, L_55);
		String_t* L_57 = L_56;
		V_1 = L_57;
		if (L_57)
		{
			goto IL_000c;
		}
	}
	{
		// }
		return;
	}
}
// System.Void ES3Types.ES3Type_RotationOverLifetimeModule::ReadInto<UnityEngine.ParticleSystem/VelocityOverLifetimeModule>(ES3Reader,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ES3Type_RotationOverLifetimeModule_ReadInto_TisVelocityOverLifetimeModule_tB4A3291E3D2E850257EE3F8344AAEDA06D7FCE56_m6190DFF3CEA98412C42619C3CD455D5438AFAB72_gshared (ES3Type_RotationOverLifetimeModule_t6C58693EB8B792F0356C451990CDFF790B93A237* __this, ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* ___reader0, RuntimeObject* ___obj1, const RuntimeMethod* method) 
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
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RotationOverLifetimeModule_tEE08858451167B6DDE6DD36FDCF11E74C77D79E6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral062DB096C728515E033CF8C48A1C1F0B9A79384B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1B024D537329B86AB0DF96B2A714180F442F53E9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2F8690361553406965679AEF125F896BC5FC61F5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8C6F88DEE0DFE3513BB8B44A8CF0FEE437F4EFFB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9384C6EF2DA5C0BD5274A0DACFF291D0ABBFD8B1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9CE1604D659135925CCC4DD1F526AFFE42E689F1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9E61658953B4F9BB4A05E3D2D2BC18990BADE934);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B);
		s_Il2CppMethodInitialized = true;
	}
	RotationOverLifetimeModule_tEE08858451167B6DDE6DD36FDCF11E74C77D79E6 V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	uint32_t V_2 = 0;
	{
		// var instance = (UnityEngine.ParticleSystem.RotationOverLifetimeModule)obj;
		RuntimeObject* L_0 = ___obj1;
		V_0 = ((*(RotationOverLifetimeModule_tEE08858451167B6DDE6DD36FDCF11E74C77D79E6*)((RotationOverLifetimeModule_tEE08858451167B6DDE6DD36FDCF11E74C77D79E6*)(RotationOverLifetimeModule_tEE08858451167B6DDE6DD36FDCF11E74C77D79E6*)UnBox(L_0, RotationOverLifetimeModule_tEE08858451167B6DDE6DD36FDCF11E74C77D79E6_il2cpp_TypeInfo_var))));
		goto IL_01d9;
	}

IL_000c:
	{
		String_t* L_1 = V_1;
		uint32_t L_2;
		L_2 = U3CPrivateImplementationDetailsU3E_ComputeStringHash_m9E43873DE0DF480D27EC1C2AA3C09E74EA77F75D(L_1, NULL);
		V_2 = L_2;
		uint32_t L_3 = V_2;
		if ((!(((uint32_t)L_3) <= ((uint32_t)((int32_t)-1013869429)))))
		{
			goto IL_0056;
		}
	}
	{
		uint32_t L_4 = V_2;
		if ((!(((uint32_t)L_4) <= ((uint32_t)((int32_t)726266686)))))
		{
			goto IL_003b;
		}
	}
	{
		uint32_t L_5 = V_2;
		if ((((int32_t)L_5) == ((int32_t)((int32_t)49525662))))
		{
			goto IL_0088;
		}
	}
	{
		uint32_t L_6 = V_2;
		if ((((int32_t)L_6) == ((int32_t)((int32_t)726266686))))
		{
			goto IL_0106;
		}
	}
	{
		goto IL_01d3;
	}

IL_003b:
	{
		uint32_t L_7 = V_2;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)1479031685))))
		{
			goto IL_011b;
		}
	}
	{
		uint32_t L_8 = V_2;
		if ((((int32_t)L_8) == ((int32_t)((int32_t)-1013869429))))
		{
			goto IL_00dc;
		}
	}
	{
		goto IL_01d3;
	}

IL_0056:
	{
		uint32_t L_9 = V_2;
		if ((!(((uint32_t)L_9) <= ((uint32_t)((int32_t)-66302220)))))
		{
			goto IL_0073;
		}
	}
	{
		uint32_t L_10 = V_2;
		if ((((int32_t)L_10) == ((int32_t)((int32_t)-585050980))))
		{
			goto IL_00b2;
		}
	}
	{
		uint32_t L_11 = V_2;
		if ((((int32_t)L_11) == ((int32_t)((int32_t)-66302220))))
		{
			goto IL_00c7;
		}
	}
	{
		goto IL_01d3;
	}

IL_0073:
	{
		uint32_t L_12 = V_2;
		if ((((int32_t)L_12) == ((int32_t)((int32_t)-49524601))))
		{
			goto IL_009d;
		}
	}
	{
		uint32_t L_13 = V_2;
		if ((((int32_t)L_13) == ((int32_t)((int32_t)-15969363))))
		{
			goto IL_00f1;
		}
	}
	{
		goto IL_01d3;
	}

IL_0088:
	{
		String_t* L_14 = V_1;
		bool L_15;
		L_15 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_14, _stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B, NULL);
		if (L_15)
		{
			goto IL_0130;
		}
	}
	{
		goto IL_01d3;
	}

IL_009d:
	{
		String_t* L_16 = V_1;
		bool L_17;
		L_17 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_16, _stringLiteral062DB096C728515E033CF8C48A1C1F0B9A79384B, NULL);
		if (L_17)
		{
			goto IL_0147;
		}
	}
	{
		goto IL_01d3;
	}

IL_00b2:
	{
		String_t* L_18 = V_1;
		bool L_19;
		L_19 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_18, _stringLiteral8C6F88DEE0DFE3513BB8B44A8CF0FEE437F4EFFB, NULL);
		if (L_19)
		{
			goto IL_015b;
		}
	}
	{
		goto IL_01d3;
	}

IL_00c7:
	{
		String_t* L_20 = V_1;
		bool L_21;
		L_21 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_20, _stringLiteral9384C6EF2DA5C0BD5274A0DACFF291D0ABBFD8B1, NULL);
		if (L_21)
		{
			goto IL_016f;
		}
	}
	{
		goto IL_01d3;
	}

IL_00dc:
	{
		String_t* L_22 = V_1;
		bool L_23;
		L_23 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_22, _stringLiteral9E61658953B4F9BB4A05E3D2D2BC18990BADE934, NULL);
		if (L_23)
		{
			goto IL_0183;
		}
	}
	{
		goto IL_01d3;
	}

IL_00f1:
	{
		String_t* L_24 = V_1;
		bool L_25;
		L_25 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_24, _stringLiteral9CE1604D659135925CCC4DD1F526AFFE42E689F1, NULL);
		if (L_25)
		{
			goto IL_0197;
		}
	}
	{
		goto IL_01d3;
	}

IL_0106:
	{
		String_t* L_26 = V_1;
		bool L_27;
		L_27 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_26, _stringLiteral2F8690361553406965679AEF125F896BC5FC61F5, NULL);
		if (L_27)
		{
			goto IL_01ab;
		}
	}
	{
		goto IL_01d3;
	}

IL_011b:
	{
		String_t* L_28 = V_1;
		bool L_29;
		L_29 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_28, _stringLiteral1B024D537329B86AB0DF96B2A714180F442F53E9, NULL);
		if (L_29)
		{
			goto IL_01bf;
		}
	}
	{
		goto IL_01d3;
	}

IL_0130:
	{
		// instance.enabled = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_30 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_31 = ((ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_30);
		bool L_32;
		L_32 = GenericVirtualFuncInvoker1< bool, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mFFB70EE53D8CD0255A4E599780F62A3EB1520E83_RuntimeMethod_var, L_30, L_31);
		RotationOverLifetimeModule_set_enabled_mDA53B4B7B9333D4E09D845446C9F9400C7E8DC66((&V_0), L_32, NULL);
		// break;
		goto IL_01d9;
	}

IL_0147:
	{
		// instance.x = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_33 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_34 = ((ES3Type_MinMaxCurve_t1C147718750ACBECE5D2B7F545D2A434A3C5409B_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t1C147718750ACBECE5D2B7F545D2A434A3C5409B_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_33);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_35;
		L_35 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_m9D6B4042B923127DEA4A2CAA3E35EED37D75B3D0_RuntimeMethod_var, L_33, L_34);
		RotationOverLifetimeModule_set_x_m26A11609B42D2C819D237DB064D28EFC1577A9C4((&V_0), L_35, NULL);
		// break;
		goto IL_01d9;
	}

IL_015b:
	{
		// instance.xMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_36 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_37 = ((ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_36);
		float L_38;
		L_38 = GenericVirtualFuncInvoker1< float, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mA86928BC888E342D2C2644535E3399952F5077ED_RuntimeMethod_var, L_36, L_37);
		RotationOverLifetimeModule_set_xMultiplier_m099A3F3041DB369575051643B3B1A2BD4BB1C1BD((&V_0), L_38, NULL);
		// break;
		goto IL_01d9;
	}

IL_016f:
	{
		// instance.y = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_39 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_40 = ((ES3Type_MinMaxCurve_t1C147718750ACBECE5D2B7F545D2A434A3C5409B_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t1C147718750ACBECE5D2B7F545D2A434A3C5409B_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_39);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_41;
		L_41 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_m9D6B4042B923127DEA4A2CAA3E35EED37D75B3D0_RuntimeMethod_var, L_39, L_40);
		RotationOverLifetimeModule_set_y_m4D757DFB1D4BFE8050616BD5D2DC035773ED75CA((&V_0), L_41, NULL);
		// break;
		goto IL_01d9;
	}

IL_0183:
	{
		// instance.yMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_42 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_43 = ((ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_42);
		float L_44;
		L_44 = GenericVirtualFuncInvoker1< float, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mA86928BC888E342D2C2644535E3399952F5077ED_RuntimeMethod_var, L_42, L_43);
		RotationOverLifetimeModule_set_yMultiplier_m8DB9A9DF867858F85FCD405DA6CE3089EAFE2FAF((&V_0), L_44, NULL);
		// break;
		goto IL_01d9;
	}

IL_0197:
	{
		// instance.z = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_45 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_46 = ((ES3Type_MinMaxCurve_t1C147718750ACBECE5D2B7F545D2A434A3C5409B_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t1C147718750ACBECE5D2B7F545D2A434A3C5409B_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_45);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_47;
		L_47 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_m9D6B4042B923127DEA4A2CAA3E35EED37D75B3D0_RuntimeMethod_var, L_45, L_46);
		RotationOverLifetimeModule_set_z_m4B93DD11BAB01085FD8B482DFAB2EC7867BE08BD((&V_0), L_47, NULL);
		// break;
		goto IL_01d9;
	}

IL_01ab:
	{
		// instance.zMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_48 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_49 = ((ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_48);
		float L_50;
		L_50 = GenericVirtualFuncInvoker1< float, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mA86928BC888E342D2C2644535E3399952F5077ED_RuntimeMethod_var, L_48, L_49);
		RotationOverLifetimeModule_set_zMultiplier_m035DC683A4FB9B68B671745CD99628B6762D5FEF((&V_0), L_50, NULL);
		// break;
		goto IL_01d9;
	}

IL_01bf:
	{
		// instance.separateAxes = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_51 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_52 = ((ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_51);
		bool L_53;
		L_53 = GenericVirtualFuncInvoker1< bool, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mFFB70EE53D8CD0255A4E599780F62A3EB1520E83_RuntimeMethod_var, L_51, L_52);
		RotationOverLifetimeModule_set_separateAxes_m8FAFD751E4B823A461521A4349B6D0544887D23E((&V_0), L_53, NULL);
		// break;
		goto IL_01d9;
	}

IL_01d3:
	{
		// reader.Skip();
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_54 = ___reader0;
		NullCheck(L_54);
		VirtualActionInvoker0::Invoke(41 /* System.Void ES3Reader::Skip() */, L_54);
	}

IL_01d9:
	{
		// while((propertyName = reader.ReadPropertyName()) != null)
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_55 = ___reader0;
		NullCheck(L_55);
		String_t* L_56;
		L_56 = VirtualFuncInvoker0< String_t* >::Invoke(21 /* System.String ES3Reader::ReadPropertyName() */, L_55);
		String_t* L_57 = L_56;
		V_1 = L_57;
		if (L_57)
		{
			goto IL_000c;
		}
	}
	{
		// }
		return;
	}
}
// System.Object ES3Types.ES3Type_Shader::Read<System.Boolean>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_Shader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mAC3B7AC4EB0A7413ED45652C3D1A6DA7F331D3CC_gshared (ES3Type_Shader_tAAA1785794F9B9772B20B61B2E57552BF02A4EDA* __this, ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_ReadProperty_TisString_t_mA276DF487B7BAC9562781B75307120FD89D76BC2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_string_t0C89CCA6F02AF5B46E66DEF92E77FCEC83C2F068_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3EC3372E82B3B91672EF4EC7D6C8F3FB8E934642);
		s_Il2CppMethodInitialized = true;
	}
	Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* V_0 = NULL;
	{
		// Shader obj = Shader.Find(reader.ReadProperty<string>(ES3Type_string.Instance));
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_0 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_1 = ((ES3Type_string_t0C89CCA6F02AF5B46E66DEF92E77FCEC83C2F068_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_string_t0C89CCA6F02AF5B46E66DEF92E77FCEC83C2F068_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_0);
		String_t* L_2;
		L_2 = ES3Reader_ReadProperty_TisString_t_mA276DF487B7BAC9562781B75307120FD89D76BC2(L_0, L_1, ES3Reader_ReadProperty_TisString_t_mA276DF487B7BAC9562781B75307120FD89D76BC2_RuntimeMethod_var);
		Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* L_3;
		L_3 = Shader_Find_mFF2A8FC042B9CFAA9800679CA674D52859BF3A72(L_2, NULL);
		V_0 = L_3;
		// if(obj == null)
		Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* L_4 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_5;
		L_5 = Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)L_4, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_5)
		{
			goto IL_0025;
		}
	}
	{
		// obj = Shader.Find("Diffuse");
		Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* L_6;
		L_6 = Shader_Find_mFF2A8FC042B9CFAA9800679CA674D52859BF3A72(_stringLiteral3EC3372E82B3B91672EF4EC7D6C8F3FB8E934642, NULL);
		V_0 = L_6;
	}

IL_0025:
	{
		// ReadInto<T>(reader, obj);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_7 = ___reader0;
		Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* L_8 = V_0;
		NullCheck((ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE*)__this);
		GenericVirtualActionInvoker2< ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518*, RuntimeObject* >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 0), (ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE*)__this, L_7, (RuntimeObject*)L_8);
		// return obj;
		Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* L_9 = V_0;
		return (RuntimeObject*)L_9;
	}
}
// System.Object ES3Types.ES3Type_Shader::Read<UnityEngine.Bounds>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_Shader_Read_TisBounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3_m82FEF0960F9C3DBD8FC2F70CA654D28797B7403A_gshared (ES3Type_Shader_tAAA1785794F9B9772B20B61B2E57552BF02A4EDA* __this, ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_ReadProperty_TisString_t_mA276DF487B7BAC9562781B75307120FD89D76BC2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_string_t0C89CCA6F02AF5B46E66DEF92E77FCEC83C2F068_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3EC3372E82B3B91672EF4EC7D6C8F3FB8E934642);
		s_Il2CppMethodInitialized = true;
	}
	Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* V_0 = NULL;
	{
		// Shader obj = Shader.Find(reader.ReadProperty<string>(ES3Type_string.Instance));
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_0 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_1 = ((ES3Type_string_t0C89CCA6F02AF5B46E66DEF92E77FCEC83C2F068_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_string_t0C89CCA6F02AF5B46E66DEF92E77FCEC83C2F068_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_0);
		String_t* L_2;
		L_2 = ES3Reader_ReadProperty_TisString_t_mA276DF487B7BAC9562781B75307120FD89D76BC2(L_0, L_1, ES3Reader_ReadProperty_TisString_t_mA276DF487B7BAC9562781B75307120FD89D76BC2_RuntimeMethod_var);
		Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* L_3;
		L_3 = Shader_Find_mFF2A8FC042B9CFAA9800679CA674D52859BF3A72(L_2, NULL);
		V_0 = L_3;
		// if(obj == null)
		Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* L_4 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_5;
		L_5 = Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)L_4, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_5)
		{
			goto IL_0025;
		}
	}
	{
		// obj = Shader.Find("Diffuse");
		Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* L_6;
		L_6 = Shader_Find_mFF2A8FC042B9CFAA9800679CA674D52859BF3A72(_stringLiteral3EC3372E82B3B91672EF4EC7D6C8F3FB8E934642, NULL);
		V_0 = L_6;
	}

IL_0025:
	{
		// ReadInto<T>(reader, obj);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_7 = ___reader0;
		Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* L_8 = V_0;
		NullCheck((ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE*)__this);
		GenericVirtualActionInvoker2< ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518*, RuntimeObject* >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 0), (ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE*)__this, L_7, (RuntimeObject*)L_8);
		// return obj;
		Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* L_9 = V_0;
		return (RuntimeObject*)L_9;
	}
}
// System.Object ES3Types.ES3Type_Shader::Read<System.Byte>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_Shader_Read_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mA4A4CDFFAE5CFB40ACB088AACA03FFD476CC68DC_gshared (ES3Type_Shader_tAAA1785794F9B9772B20B61B2E57552BF02A4EDA* __this, ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_ReadProperty_TisString_t_mA276DF487B7BAC9562781B75307120FD89D76BC2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_string_t0C89CCA6F02AF5B46E66DEF92E77FCEC83C2F068_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3EC3372E82B3B91672EF4EC7D6C8F3FB8E934642);
		s_Il2CppMethodInitialized = true;
	}
	Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* V_0 = NULL;
	{
		// Shader obj = Shader.Find(reader.ReadProperty<string>(ES3Type_string.Instance));
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_0 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_1 = ((ES3Type_string_t0C89CCA6F02AF5B46E66DEF92E77FCEC83C2F068_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_string_t0C89CCA6F02AF5B46E66DEF92E77FCEC83C2F068_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_0);
		String_t* L_2;
		L_2 = ES3Reader_ReadProperty_TisString_t_mA276DF487B7BAC9562781B75307120FD89D76BC2(L_0, L_1, ES3Reader_ReadProperty_TisString_t_mA276DF487B7BAC9562781B75307120FD89D76BC2_RuntimeMethod_var);
		Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* L_3;
		L_3 = Shader_Find_mFF2A8FC042B9CFAA9800679CA674D52859BF3A72(L_2, NULL);
		V_0 = L_3;
		// if(obj == null)
		Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* L_4 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_5;
		L_5 = Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)L_4, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_5)
		{
			goto IL_0025;
		}
	}
	{
		// obj = Shader.Find("Diffuse");
		Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* L_6;
		L_6 = Shader_Find_mFF2A8FC042B9CFAA9800679CA674D52859BF3A72(_stringLiteral3EC3372E82B3B91672EF4EC7D6C8F3FB8E934642, NULL);
		V_0 = L_6;
	}

IL_0025:
	{
		// ReadInto<T>(reader, obj);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_7 = ___reader0;
		Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* L_8 = V_0;
		NullCheck((ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE*)__this);
		GenericVirtualActionInvoker2< ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518*, RuntimeObject* >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 0), (ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE*)__this, L_7, (RuntimeObject*)L_8);
		// return obj;
		Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* L_9 = V_0;
		return (RuntimeObject*)L_9;
	}
}
// System.Object ES3Types.ES3Type_Shader::Read<UnityEngine.Color>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_Shader_Read_TisColor_tD001788D726C3A7F1379BEED0260B9591F440C1F_mC760EB677567F184C5230A543909CC9D3F36490B_gshared (ES3Type_Shader_tAAA1785794F9B9772B20B61B2E57552BF02A4EDA* __this, ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_ReadProperty_TisString_t_mA276DF487B7BAC9562781B75307120FD89D76BC2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_string_t0C89CCA6F02AF5B46E66DEF92E77FCEC83C2F068_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3EC3372E82B3B91672EF4EC7D6C8F3FB8E934642);
		s_Il2CppMethodInitialized = true;
	}
	Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* V_0 = NULL;
	{
		// Shader obj = Shader.Find(reader.ReadProperty<string>(ES3Type_string.Instance));
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_0 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_1 = ((ES3Type_string_t0C89CCA6F02AF5B46E66DEF92E77FCEC83C2F068_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_string_t0C89CCA6F02AF5B46E66DEF92E77FCEC83C2F068_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_0);
		String_t* L_2;
		L_2 = ES3Reader_ReadProperty_TisString_t_mA276DF487B7BAC9562781B75307120FD89D76BC2(L_0, L_1, ES3Reader_ReadProperty_TisString_t_mA276DF487B7BAC9562781B75307120FD89D76BC2_RuntimeMethod_var);
		Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* L_3;
		L_3 = Shader_Find_mFF2A8FC042B9CFAA9800679CA674D52859BF3A72(L_2, NULL);
		V_0 = L_3;
		// if(obj == null)
		Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* L_4 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_5;
		L_5 = Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)L_4, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_5)
		{
			goto IL_0025;
		}
	}
	{
		// obj = Shader.Find("Diffuse");
		Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* L_6;
		L_6 = Shader_Find_mFF2A8FC042B9CFAA9800679CA674D52859BF3A72(_stringLiteral3EC3372E82B3B91672EF4EC7D6C8F3FB8E934642, NULL);
		V_0 = L_6;
	}

IL_0025:
	{
		// ReadInto<T>(reader, obj);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_7 = ___reader0;
		Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* L_8 = V_0;
		NullCheck((ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE*)__this);
		GenericVirtualActionInvoker2< ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518*, RuntimeObject* >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 0), (ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE*)__this, L_7, (RuntimeObject*)L_8);
		// return obj;
		Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* L_9 = V_0;
		return (RuntimeObject*)L_9;
	}
}
// System.Object ES3Types.ES3Type_Shader::Read<System.Int32>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_Shader_Read_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m8A5086583D5604DC968F2CD8D2FEB600DAAED1AF_gshared (ES3Type_Shader_tAAA1785794F9B9772B20B61B2E57552BF02A4EDA* __this, ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_ReadProperty_TisString_t_mA276DF487B7BAC9562781B75307120FD89D76BC2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_string_t0C89CCA6F02AF5B46E66DEF92E77FCEC83C2F068_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3EC3372E82B3B91672EF4EC7D6C8F3FB8E934642);
		s_Il2CppMethodInitialized = true;
	}
	Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* V_0 = NULL;
	{
		// Shader obj = Shader.Find(reader.ReadProperty<string>(ES3Type_string.Instance));
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_0 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_1 = ((ES3Type_string_t0C89CCA6F02AF5B46E66DEF92E77FCEC83C2F068_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_string_t0C89CCA6F02AF5B46E66DEF92E77FCEC83C2F068_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_0);
		String_t* L_2;
		L_2 = ES3Reader_ReadProperty_TisString_t_mA276DF487B7BAC9562781B75307120FD89D76BC2(L_0, L_1, ES3Reader_ReadProperty_TisString_t_mA276DF487B7BAC9562781B75307120FD89D76BC2_RuntimeMethod_var);
		Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* L_3;
		L_3 = Shader_Find_mFF2A8FC042B9CFAA9800679CA674D52859BF3A72(L_2, NULL);
		V_0 = L_3;
		// if(obj == null)
		Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* L_4 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_5;
		L_5 = Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)L_4, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_5)
		{
			goto IL_0025;
		}
	}
	{
		// obj = Shader.Find("Diffuse");
		Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* L_6;
		L_6 = Shader_Find_mFF2A8FC042B9CFAA9800679CA674D52859BF3A72(_stringLiteral3EC3372E82B3B91672EF4EC7D6C8F3FB8E934642, NULL);
		V_0 = L_6;
	}

IL_0025:
	{
		// ReadInto<T>(reader, obj);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_7 = ___reader0;
		Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* L_8 = V_0;
		NullCheck((ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE*)__this);
		GenericVirtualActionInvoker2< ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518*, RuntimeObject* >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 0), (ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE*)__this, L_7, (RuntimeObject*)L_8);
		// return obj;
		Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* L_9 = V_0;
		return (RuntimeObject*)L_9;
	}
}
// System.Object ES3Types.ES3Type_Shader::Read<System.Int32Enum>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_Shader_Read_TisInt32Enum_tCBAC8BA2BFF3A845FA599F303093BBBA374B6F0C_m2CFD58D5D11634BB708D7F75A143C2A0ECDEF7BE_gshared (ES3Type_Shader_tAAA1785794F9B9772B20B61B2E57552BF02A4EDA* __this, ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_ReadProperty_TisString_t_mA276DF487B7BAC9562781B75307120FD89D76BC2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_string_t0C89CCA6F02AF5B46E66DEF92E77FCEC83C2F068_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3EC3372E82B3B91672EF4EC7D6C8F3FB8E934642);
		s_Il2CppMethodInitialized = true;
	}
	Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* V_0 = NULL;
	{
		// Shader obj = Shader.Find(reader.ReadProperty<string>(ES3Type_string.Instance));
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_0 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_1 = ((ES3Type_string_t0C89CCA6F02AF5B46E66DEF92E77FCEC83C2F068_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_string_t0C89CCA6F02AF5B46E66DEF92E77FCEC83C2F068_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_0);
		String_t* L_2;
		L_2 = ES3Reader_ReadProperty_TisString_t_mA276DF487B7BAC9562781B75307120FD89D76BC2(L_0, L_1, ES3Reader_ReadProperty_TisString_t_mA276DF487B7BAC9562781B75307120FD89D76BC2_RuntimeMethod_var);
		Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* L_3;
		L_3 = Shader_Find_mFF2A8FC042B9CFAA9800679CA674D52859BF3A72(L_2, NULL);
		V_0 = L_3;
		// if(obj == null)
		Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* L_4 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_5;
		L_5 = Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)L_4, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_5)
		{
			goto IL_0025;
		}
	}
	{
		// obj = Shader.Find("Diffuse");
		Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* L_6;
		L_6 = Shader_Find_mFF2A8FC042B9CFAA9800679CA674D52859BF3A72(_stringLiteral3EC3372E82B3B91672EF4EC7D6C8F3FB8E934642, NULL);
		V_0 = L_6;
	}

IL_0025:
	{
		// ReadInto<T>(reader, obj);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_7 = ___reader0;
		Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* L_8 = V_0;
		NullCheck((ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE*)__this);
		GenericVirtualActionInvoker2< ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518*, RuntimeObject* >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 0), (ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE*)__this, L_7, (RuntimeObject*)L_8);
		// return obj;
		Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* L_9 = V_0;
		return (RuntimeObject*)L_9;
	}
}
// System.Object ES3Types.ES3Type_Shader::Read<System.Int64>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_Shader_Read_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_mBC60FB32A3D8CFEC35A933770949495356014B7A_gshared (ES3Type_Shader_tAAA1785794F9B9772B20B61B2E57552BF02A4EDA* __this, ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_ReadProperty_TisString_t_mA276DF487B7BAC9562781B75307120FD89D76BC2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_string_t0C89CCA6F02AF5B46E66DEF92E77FCEC83C2F068_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3EC3372E82B3B91672EF4EC7D6C8F3FB8E934642);
		s_Il2CppMethodInitialized = true;
	}
	Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* V_0 = NULL;
	{
		// Shader obj = Shader.Find(reader.ReadProperty<string>(ES3Type_string.Instance));
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_0 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_1 = ((ES3Type_string_t0C89CCA6F02AF5B46E66DEF92E77FCEC83C2F068_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_string_t0C89CCA6F02AF5B46E66DEF92E77FCEC83C2F068_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_0);
		String_t* L_2;
		L_2 = ES3Reader_ReadProperty_TisString_t_mA276DF487B7BAC9562781B75307120FD89D76BC2(L_0, L_1, ES3Reader_ReadProperty_TisString_t_mA276DF487B7BAC9562781B75307120FD89D76BC2_RuntimeMethod_var);
		Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* L_3;
		L_3 = Shader_Find_mFF2A8FC042B9CFAA9800679CA674D52859BF3A72(L_2, NULL);
		V_0 = L_3;
		// if(obj == null)
		Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* L_4 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_5;
		L_5 = Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)L_4, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_5)
		{
			goto IL_0025;
		}
	}
	{
		// obj = Shader.Find("Diffuse");
		Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* L_6;
		L_6 = Shader_Find_mFF2A8FC042B9CFAA9800679CA674D52859BF3A72(_stringLiteral3EC3372E82B3B91672EF4EC7D6C8F3FB8E934642, NULL);
		V_0 = L_6;
	}

IL_0025:
	{
		// ReadInto<T>(reader, obj);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_7 = ___reader0;
		Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* L_8 = V_0;
		NullCheck((ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE*)__this);
		GenericVirtualActionInvoker2< ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518*, RuntimeObject* >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 0), (ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE*)__this, L_7, (RuntimeObject*)L_8);
		// return obj;
		Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* L_9 = V_0;
		return (RuntimeObject*)L_9;
	}
}
// System.Object ES3Types.ES3Type_Shader::Read<UnityEngine.LayerMask>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_Shader_Read_TisLayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB_m14426465E44D6802F03A9158F9C62CE41F2EF339_gshared (ES3Type_Shader_tAAA1785794F9B9772B20B61B2E57552BF02A4EDA* __this, ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_ReadProperty_TisString_t_mA276DF487B7BAC9562781B75307120FD89D76BC2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_string_t0C89CCA6F02AF5B46E66DEF92E77FCEC83C2F068_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3EC3372E82B3B91672EF4EC7D6C8F3FB8E934642);
		s_Il2CppMethodInitialized = true;
	}
	Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* V_0 = NULL;
	{
		// Shader obj = Shader.Find(reader.ReadProperty<string>(ES3Type_string.Instance));
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_0 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_1 = ((ES3Type_string_t0C89CCA6F02AF5B46E66DEF92E77FCEC83C2F068_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_string_t0C89CCA6F02AF5B46E66DEF92E77FCEC83C2F068_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_0);
		String_t* L_2;
		L_2 = ES3Reader_ReadProperty_TisString_t_mA276DF487B7BAC9562781B75307120FD89D76BC2(L_0, L_1, ES3Reader_ReadProperty_TisString_t_mA276DF487B7BAC9562781B75307120FD89D76BC2_RuntimeMethod_var);
		Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* L_3;
		L_3 = Shader_Find_mFF2A8FC042B9CFAA9800679CA674D52859BF3A72(L_2, NULL);
		V_0 = L_3;
		// if(obj == null)
		Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* L_4 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_5;
		L_5 = Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)L_4, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_5)
		{
			goto IL_0025;
		}
	}
	{
		// obj = Shader.Find("Diffuse");
		Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* L_6;
		L_6 = Shader_Find_mFF2A8FC042B9CFAA9800679CA674D52859BF3A72(_stringLiteral3EC3372E82B3B91672EF4EC7D6C8F3FB8E934642, NULL);
		V_0 = L_6;
	}

IL_0025:
	{
		// ReadInto<T>(reader, obj);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_7 = ___reader0;
		Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* L_8 = V_0;
		NullCheck((ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE*)__this);
		GenericVirtualActionInvoker2< ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518*, RuntimeObject* >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 0), (ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE*)__this, L_7, (RuntimeObject*)L_8);
		// return obj;
		Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* L_9 = V_0;
		return (RuntimeObject*)L_9;
	}
}
// System.Object ES3Types.ES3Type_Shader::Read<UnityEngine.Matrix4x4>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_Shader_Read_TisMatrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6_mF1A24DB4240BA560D70606F6E3D89B25722DCD3C_gshared (ES3Type_Shader_tAAA1785794F9B9772B20B61B2E57552BF02A4EDA* __this, ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_ReadProperty_TisString_t_mA276DF487B7BAC9562781B75307120FD89D76BC2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_string_t0C89CCA6F02AF5B46E66DEF92E77FCEC83C2F068_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3EC3372E82B3B91672EF4EC7D6C8F3FB8E934642);
		s_Il2CppMethodInitialized = true;
	}
	Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* V_0 = NULL;
	{
		// Shader obj = Shader.Find(reader.ReadProperty<string>(ES3Type_string.Instance));
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_0 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_1 = ((ES3Type_string_t0C89CCA6F02AF5B46E66DEF92E77FCEC83C2F068_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_string_t0C89CCA6F02AF5B46E66DEF92E77FCEC83C2F068_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_0);
		String_t* L_2;
		L_2 = ES3Reader_ReadProperty_TisString_t_mA276DF487B7BAC9562781B75307120FD89D76BC2(L_0, L_1, ES3Reader_ReadProperty_TisString_t_mA276DF487B7BAC9562781B75307120FD89D76BC2_RuntimeMethod_var);
		Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* L_3;
		L_3 = Shader_Find_mFF2A8FC042B9CFAA9800679CA674D52859BF3A72(L_2, NULL);
		V_0 = L_3;
		// if(obj == null)
		Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* L_4 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_5;
		L_5 = Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)L_4, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_5)
		{
			goto IL_0025;
		}
	}
	{
		// obj = Shader.Find("Diffuse");
		Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* L_6;
		L_6 = Shader_Find_mFF2A8FC042B9CFAA9800679CA674D52859BF3A72(_stringLiteral3EC3372E82B3B91672EF4EC7D6C8F3FB8E934642, NULL);
		V_0 = L_6;
	}

IL_0025:
	{
		// ReadInto<T>(reader, obj);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_7 = ___reader0;
		Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* L_8 = V_0;
		NullCheck((ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE*)__this);
		GenericVirtualActionInvoker2< ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518*, RuntimeObject* >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 0), (ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE*)__this, L_7, (RuntimeObject*)L_8);
		// return obj;
		Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* L_9 = V_0;
		return (RuntimeObject*)L_9;
	}
}
// System.Object ES3Types.ES3Type_Shader::Read<System.Object>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_Shader_Read_TisRuntimeObject_mFEB1725BF370A37D2047A2B30F570BE0F2063B4C_gshared (ES3Type_Shader_tAAA1785794F9B9772B20B61B2E57552BF02A4EDA* __this, ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_ReadProperty_TisString_t_mA276DF487B7BAC9562781B75307120FD89D76BC2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_string_t0C89CCA6F02AF5B46E66DEF92E77FCEC83C2F068_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3EC3372E82B3B91672EF4EC7D6C8F3FB8E934642);
		s_Il2CppMethodInitialized = true;
	}
	Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* V_0 = NULL;
	{
		// Shader obj = Shader.Find(reader.ReadProperty<string>(ES3Type_string.Instance));
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_0 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_1 = ((ES3Type_string_t0C89CCA6F02AF5B46E66DEF92E77FCEC83C2F068_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_string_t0C89CCA6F02AF5B46E66DEF92E77FCEC83C2F068_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_0);
		String_t* L_2;
		L_2 = ES3Reader_ReadProperty_TisString_t_mA276DF487B7BAC9562781B75307120FD89D76BC2(L_0, L_1, ES3Reader_ReadProperty_TisString_t_mA276DF487B7BAC9562781B75307120FD89D76BC2_RuntimeMethod_var);
		Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* L_3;
		L_3 = Shader_Find_mFF2A8FC042B9CFAA9800679CA674D52859BF3A72(L_2, NULL);
		V_0 = L_3;
		// if(obj == null)
		Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* L_4 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_5;
		L_5 = Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)L_4, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_5)
		{
			goto IL_0025;
		}
	}
	{
		// obj = Shader.Find("Diffuse");
		Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* L_6;
		L_6 = Shader_Find_mFF2A8FC042B9CFAA9800679CA674D52859BF3A72(_stringLiteral3EC3372E82B3B91672EF4EC7D6C8F3FB8E934642, NULL);
		V_0 = L_6;
	}

IL_0025:
	{
		// ReadInto<T>(reader, obj);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_7 = ___reader0;
		Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* L_8 = V_0;
		NullCheck((ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE*)__this);
		GenericVirtualActionInvoker2< ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518*, RuntimeObject* >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 0), (ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE*)__this, L_7, (RuntimeObject*)L_8);
		// return obj;
		Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* L_9 = V_0;
		return (RuntimeObject*)L_9;
	}
}
// System.Object ES3Types.ES3Type_Shader::Read<UnityEngine.Quaternion>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_Shader_Read_TisQuaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_m0282A7955B13FCE09577D493154762CF77B1624A_gshared (ES3Type_Shader_tAAA1785794F9B9772B20B61B2E57552BF02A4EDA* __this, ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_ReadProperty_TisString_t_mA276DF487B7BAC9562781B75307120FD89D76BC2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_string_t0C89CCA6F02AF5B46E66DEF92E77FCEC83C2F068_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3EC3372E82B3B91672EF4EC7D6C8F3FB8E934642);
		s_Il2CppMethodInitialized = true;
	}
	Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* V_0 = NULL;
	{
		// Shader obj = Shader.Find(reader.ReadProperty<string>(ES3Type_string.Instance));
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_0 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_1 = ((ES3Type_string_t0C89CCA6F02AF5B46E66DEF92E77FCEC83C2F068_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_string_t0C89CCA6F02AF5B46E66DEF92E77FCEC83C2F068_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_0);
		String_t* L_2;
		L_2 = ES3Reader_ReadProperty_TisString_t_mA276DF487B7BAC9562781B75307120FD89D76BC2(L_0, L_1, ES3Reader_ReadProperty_TisString_t_mA276DF487B7BAC9562781B75307120FD89D76BC2_RuntimeMethod_var);
		Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* L_3;
		L_3 = Shader_Find_mFF2A8FC042B9CFAA9800679CA674D52859BF3A72(L_2, NULL);
		V_0 = L_3;
		// if(obj == null)
		Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* L_4 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_5;
		L_5 = Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)L_4, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_5)
		{
			goto IL_0025;
		}
	}
	{
		// obj = Shader.Find("Diffuse");
		Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* L_6;
		L_6 = Shader_Find_mFF2A8FC042B9CFAA9800679CA674D52859BF3A72(_stringLiteral3EC3372E82B3B91672EF4EC7D6C8F3FB8E934642, NULL);
		V_0 = L_6;
	}

IL_0025:
	{
		// ReadInto<T>(reader, obj);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_7 = ___reader0;
		Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* L_8 = V_0;
		NullCheck((ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE*)__this);
		GenericVirtualActionInvoker2< ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518*, RuntimeObject* >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 0), (ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE*)__this, L_7, (RuntimeObject*)L_8);
		// return obj;
		Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* L_9 = V_0;
		return (RuntimeObject*)L_9;
	}
}
// System.Object ES3Types.ES3Type_Shader::Read<UnityEngine.Rect>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_Shader_Read_TisRect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D_m914EE98F9C5897D7021B1247A5929CE91FCEDE37_gshared (ES3Type_Shader_tAAA1785794F9B9772B20B61B2E57552BF02A4EDA* __this, ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_ReadProperty_TisString_t_mA276DF487B7BAC9562781B75307120FD89D76BC2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_string_t0C89CCA6F02AF5B46E66DEF92E77FCEC83C2F068_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3EC3372E82B3B91672EF4EC7D6C8F3FB8E934642);
		s_Il2CppMethodInitialized = true;
	}
	Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* V_0 = NULL;
	{
		// Shader obj = Shader.Find(reader.ReadProperty<string>(ES3Type_string.Instance));
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_0 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_1 = ((ES3Type_string_t0C89CCA6F02AF5B46E66DEF92E77FCEC83C2F068_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_string_t0C89CCA6F02AF5B46E66DEF92E77FCEC83C2F068_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_0);
		String_t* L_2;
		L_2 = ES3Reader_ReadProperty_TisString_t_mA276DF487B7BAC9562781B75307120FD89D76BC2(L_0, L_1, ES3Reader_ReadProperty_TisString_t_mA276DF487B7BAC9562781B75307120FD89D76BC2_RuntimeMethod_var);
		Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* L_3;
		L_3 = Shader_Find_mFF2A8FC042B9CFAA9800679CA674D52859BF3A72(L_2, NULL);
		V_0 = L_3;
		// if(obj == null)
		Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* L_4 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_5;
		L_5 = Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)L_4, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_5)
		{
			goto IL_0025;
		}
	}
	{
		// obj = Shader.Find("Diffuse");
		Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* L_6;
		L_6 = Shader_Find_mFF2A8FC042B9CFAA9800679CA674D52859BF3A72(_stringLiteral3EC3372E82B3B91672EF4EC7D6C8F3FB8E934642, NULL);
		V_0 = L_6;
	}

IL_0025:
	{
		// ReadInto<T>(reader, obj);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_7 = ___reader0;
		Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* L_8 = V_0;
		NullCheck((ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE*)__this);
		GenericVirtualActionInvoker2< ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518*, RuntimeObject* >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 0), (ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE*)__this, L_7, (RuntimeObject*)L_8);
		// return obj;
		Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* L_9 = V_0;
		return (RuntimeObject*)L_9;
	}
}
// System.Object ES3Types.ES3Type_Shader::Read<UnityEngine.RenderTextureDescriptor>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_Shader_Read_TisRenderTextureDescriptor_t69845881CE6437E4E61F92074F2F84079F23FA46_mCDB54B3A3B645BCB70F0B1A9958A9E3A41E2380F_gshared (ES3Type_Shader_tAAA1785794F9B9772B20B61B2E57552BF02A4EDA* __this, ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_ReadProperty_TisString_t_mA276DF487B7BAC9562781B75307120FD89D76BC2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_string_t0C89CCA6F02AF5B46E66DEF92E77FCEC83C2F068_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3EC3372E82B3B91672EF4EC7D6C8F3FB8E934642);
		s_Il2CppMethodInitialized = true;
	}
	Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* V_0 = NULL;
	{
		// Shader obj = Shader.Find(reader.ReadProperty<string>(ES3Type_string.Instance));
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_0 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_1 = ((ES3Type_string_t0C89CCA6F02AF5B46E66DEF92E77FCEC83C2F068_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_string_t0C89CCA6F02AF5B46E66DEF92E77FCEC83C2F068_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_0);
		String_t* L_2;
		L_2 = ES3Reader_ReadProperty_TisString_t_mA276DF487B7BAC9562781B75307120FD89D76BC2(L_0, L_1, ES3Reader_ReadProperty_TisString_t_mA276DF487B7BAC9562781B75307120FD89D76BC2_RuntimeMethod_var);
		Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* L_3;
		L_3 = Shader_Find_mFF2A8FC042B9CFAA9800679CA674D52859BF3A72(L_2, NULL);
		V_0 = L_3;
		// if(obj == null)
		Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* L_4 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_5;
		L_5 = Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)L_4, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_5)
		{
			goto IL_0025;
		}
	}
	{
		// obj = Shader.Find("Diffuse");
		Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* L_6;
		L_6 = Shader_Find_mFF2A8FC042B9CFAA9800679CA674D52859BF3A72(_stringLiteral3EC3372E82B3B91672EF4EC7D6C8F3FB8E934642, NULL);
		V_0 = L_6;
	}

IL_0025:
	{
		// ReadInto<T>(reader, obj);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_7 = ___reader0;
		Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* L_8 = V_0;
		NullCheck((ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE*)__this);
		GenericVirtualActionInvoker2< ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518*, RuntimeObject* >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 0), (ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE*)__this, L_7, (RuntimeObject*)L_8);
		// return obj;
		Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* L_9 = V_0;
		return (RuntimeObject*)L_9;
	}
}
// System.Object ES3Types.ES3Type_Shader::Read<System.Single>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_Shader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m27F9FFF0A02188030B432BC76FD3D0DECE4490F7_gshared (ES3Type_Shader_tAAA1785794F9B9772B20B61B2E57552BF02A4EDA* __this, ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_ReadProperty_TisString_t_mA276DF487B7BAC9562781B75307120FD89D76BC2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_string_t0C89CCA6F02AF5B46E66DEF92E77FCEC83C2F068_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3EC3372E82B3B91672EF4EC7D6C8F3FB8E934642);
		s_Il2CppMethodInitialized = true;
	}
	Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* V_0 = NULL;
	{
		// Shader obj = Shader.Find(reader.ReadProperty<string>(ES3Type_string.Instance));
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_0 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_1 = ((ES3Type_string_t0C89CCA6F02AF5B46E66DEF92E77FCEC83C2F068_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_string_t0C89CCA6F02AF5B46E66DEF92E77FCEC83C2F068_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_0);
		String_t* L_2;
		L_2 = ES3Reader_ReadProperty_TisString_t_mA276DF487B7BAC9562781B75307120FD89D76BC2(L_0, L_1, ES3Reader_ReadProperty_TisString_t_mA276DF487B7BAC9562781B75307120FD89D76BC2_RuntimeMethod_var);
		Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* L_3;
		L_3 = Shader_Find_mFF2A8FC042B9CFAA9800679CA674D52859BF3A72(L_2, NULL);
		V_0 = L_3;
		// if(obj == null)
		Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* L_4 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_5;
		L_5 = Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)L_4, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_5)
		{
			goto IL_0025;
		}
	}
	{
		// obj = Shader.Find("Diffuse");
		Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* L_6;
		L_6 = Shader_Find_mFF2A8FC042B9CFAA9800679CA674D52859BF3A72(_stringLiteral3EC3372E82B3B91672EF4EC7D6C8F3FB8E934642, NULL);
		V_0 = L_6;
	}

IL_0025:
	{
		// ReadInto<T>(reader, obj);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_7 = ___reader0;
		Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* L_8 = V_0;
		NullCheck((ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE*)__this);
		GenericVirtualActionInvoker2< ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518*, RuntimeObject* >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 0), (ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE*)__this, L_7, (RuntimeObject*)L_8);
		// return obj;
		Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* L_9 = V_0;
		return (RuntimeObject*)L_9;
	}
}
// System.Object ES3Types.ES3Type_Shader::Read<UnityEngine.Vector2>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_Shader_Read_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_mE1CDF35CEED3973CF0E85533CC66E6F71601C539_gshared (ES3Type_Shader_tAAA1785794F9B9772B20B61B2E57552BF02A4EDA* __this, ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_ReadProperty_TisString_t_mA276DF487B7BAC9562781B75307120FD89D76BC2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_string_t0C89CCA6F02AF5B46E66DEF92E77FCEC83C2F068_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3EC3372E82B3B91672EF4EC7D6C8F3FB8E934642);
		s_Il2CppMethodInitialized = true;
	}
	Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* V_0 = NULL;
	{
		// Shader obj = Shader.Find(reader.ReadProperty<string>(ES3Type_string.Instance));
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_0 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_1 = ((ES3Type_string_t0C89CCA6F02AF5B46E66DEF92E77FCEC83C2F068_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_string_t0C89CCA6F02AF5B46E66DEF92E77FCEC83C2F068_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_0);
		String_t* L_2;
		L_2 = ES3Reader_ReadProperty_TisString_t_mA276DF487B7BAC9562781B75307120FD89D76BC2(L_0, L_1, ES3Reader_ReadProperty_TisString_t_mA276DF487B7BAC9562781B75307120FD89D76BC2_RuntimeMethod_var);
		Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* L_3;
		L_3 = Shader_Find_mFF2A8FC042B9CFAA9800679CA674D52859BF3A72(L_2, NULL);
		V_0 = L_3;
		// if(obj == null)
		Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* L_4 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_5;
		L_5 = Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)L_4, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_5)
		{
			goto IL_0025;
		}
	}
	{
		// obj = Shader.Find("Diffuse");
		Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* L_6;
		L_6 = Shader_Find_mFF2A8FC042B9CFAA9800679CA674D52859BF3A72(_stringLiteral3EC3372E82B3B91672EF4EC7D6C8F3FB8E934642, NULL);
		V_0 = L_6;
	}

IL_0025:
	{
		// ReadInto<T>(reader, obj);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_7 = ___reader0;
		Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* L_8 = V_0;
		NullCheck((ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE*)__this);
		GenericVirtualActionInvoker2< ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518*, RuntimeObject* >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 0), (ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE*)__this, L_7, (RuntimeObject*)L_8);
		// return obj;
		Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* L_9 = V_0;
		return (RuntimeObject*)L_9;
	}
}
// System.Object ES3Types.ES3Type_Shader::Read<UnityEngine.Vector3>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_Shader_Read_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_m2E98AE5B2C1106AF2B1D295AE5EED7406605997B_gshared (ES3Type_Shader_tAAA1785794F9B9772B20B61B2E57552BF02A4EDA* __this, ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_ReadProperty_TisString_t_mA276DF487B7BAC9562781B75307120FD89D76BC2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_string_t0C89CCA6F02AF5B46E66DEF92E77FCEC83C2F068_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3EC3372E82B3B91672EF4EC7D6C8F3FB8E934642);
		s_Il2CppMethodInitialized = true;
	}
	Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* V_0 = NULL;
	{
		// Shader obj = Shader.Find(reader.ReadProperty<string>(ES3Type_string.Instance));
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_0 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_1 = ((ES3Type_string_t0C89CCA6F02AF5B46E66DEF92E77FCEC83C2F068_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_string_t0C89CCA6F02AF5B46E66DEF92E77FCEC83C2F068_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_0);
		String_t* L_2;
		L_2 = ES3Reader_ReadProperty_TisString_t_mA276DF487B7BAC9562781B75307120FD89D76BC2(L_0, L_1, ES3Reader_ReadProperty_TisString_t_mA276DF487B7BAC9562781B75307120FD89D76BC2_RuntimeMethod_var);
		Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* L_3;
		L_3 = Shader_Find_mFF2A8FC042B9CFAA9800679CA674D52859BF3A72(L_2, NULL);
		V_0 = L_3;
		// if(obj == null)
		Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* L_4 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_5;
		L_5 = Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)L_4, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_5)
		{
			goto IL_0025;
		}
	}
	{
		// obj = Shader.Find("Diffuse");
		Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* L_6;
		L_6 = Shader_Find_mFF2A8FC042B9CFAA9800679CA674D52859BF3A72(_stringLiteral3EC3372E82B3B91672EF4EC7D6C8F3FB8E934642, NULL);
		V_0 = L_6;
	}

IL_0025:
	{
		// ReadInto<T>(reader, obj);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_7 = ___reader0;
		Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* L_8 = V_0;
		NullCheck((ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE*)__this);
		GenericVirtualActionInvoker2< ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518*, RuntimeObject* >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 0), (ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE*)__this, L_7, (RuntimeObject*)L_8);
		// return obj;
		Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* L_9 = V_0;
		return (RuntimeObject*)L_9;
	}
}
// System.Object ES3Types.ES3Type_Shader::Read<UnityEngine.Vector4>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_Shader_Read_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_m0CC3B30FECE276EB164BFEBED52E3C64F068AABE_gshared (ES3Type_Shader_tAAA1785794F9B9772B20B61B2E57552BF02A4EDA* __this, ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_ReadProperty_TisString_t_mA276DF487B7BAC9562781B75307120FD89D76BC2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_string_t0C89CCA6F02AF5B46E66DEF92E77FCEC83C2F068_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3EC3372E82B3B91672EF4EC7D6C8F3FB8E934642);
		s_Il2CppMethodInitialized = true;
	}
	Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* V_0 = NULL;
	{
		// Shader obj = Shader.Find(reader.ReadProperty<string>(ES3Type_string.Instance));
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_0 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_1 = ((ES3Type_string_t0C89CCA6F02AF5B46E66DEF92E77FCEC83C2F068_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_string_t0C89CCA6F02AF5B46E66DEF92E77FCEC83C2F068_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_0);
		String_t* L_2;
		L_2 = ES3Reader_ReadProperty_TisString_t_mA276DF487B7BAC9562781B75307120FD89D76BC2(L_0, L_1, ES3Reader_ReadProperty_TisString_t_mA276DF487B7BAC9562781B75307120FD89D76BC2_RuntimeMethod_var);
		Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* L_3;
		L_3 = Shader_Find_mFF2A8FC042B9CFAA9800679CA674D52859BF3A72(L_2, NULL);
		V_0 = L_3;
		// if(obj == null)
		Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* L_4 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_5;
		L_5 = Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)L_4, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_5)
		{
			goto IL_0025;
		}
	}
	{
		// obj = Shader.Find("Diffuse");
		Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* L_6;
		L_6 = Shader_Find_mFF2A8FC042B9CFAA9800679CA674D52859BF3A72(_stringLiteral3EC3372E82B3B91672EF4EC7D6C8F3FB8E934642, NULL);
		V_0 = L_6;
	}

IL_0025:
	{
		// ReadInto<T>(reader, obj);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_7 = ___reader0;
		Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* L_8 = V_0;
		NullCheck((ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE*)__this);
		GenericVirtualActionInvoker2< ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518*, RuntimeObject* >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 0), (ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE*)__this, L_7, (RuntimeObject*)L_8);
		// return obj;
		Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* L_9 = V_0;
		return (RuntimeObject*)L_9;
	}
}
// System.Object ES3Types.ES3Type_Shader::Read<UnityEngine.ParticleSystem/MinMaxCurve>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_Shader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_m0CD0BD9AA1AC67FCBECF52DF71D3200119542CE4_gshared (ES3Type_Shader_tAAA1785794F9B9772B20B61B2E57552BF02A4EDA* __this, ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_ReadProperty_TisString_t_mA276DF487B7BAC9562781B75307120FD89D76BC2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_string_t0C89CCA6F02AF5B46E66DEF92E77FCEC83C2F068_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3EC3372E82B3B91672EF4EC7D6C8F3FB8E934642);
		s_Il2CppMethodInitialized = true;
	}
	Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* V_0 = NULL;
	{
		// Shader obj = Shader.Find(reader.ReadProperty<string>(ES3Type_string.Instance));
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_0 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_1 = ((ES3Type_string_t0C89CCA6F02AF5B46E66DEF92E77FCEC83C2F068_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_string_t0C89CCA6F02AF5B46E66DEF92E77FCEC83C2F068_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_0);
		String_t* L_2;
		L_2 = ES3Reader_ReadProperty_TisString_t_mA276DF487B7BAC9562781B75307120FD89D76BC2(L_0, L_1, ES3Reader_ReadProperty_TisString_t_mA276DF487B7BAC9562781B75307120FD89D76BC2_RuntimeMethod_var);
		Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* L_3;
		L_3 = Shader_Find_mFF2A8FC042B9CFAA9800679CA674D52859BF3A72(L_2, NULL);
		V_0 = L_3;
		// if(obj == null)
		Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* L_4 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_5;
		L_5 = Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)L_4, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_5)
		{
			goto IL_0025;
		}
	}
	{
		// obj = Shader.Find("Diffuse");
		Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* L_6;
		L_6 = Shader_Find_mFF2A8FC042B9CFAA9800679CA674D52859BF3A72(_stringLiteral3EC3372E82B3B91672EF4EC7D6C8F3FB8E934642, NULL);
		V_0 = L_6;
	}

IL_0025:
	{
		// ReadInto<T>(reader, obj);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_7 = ___reader0;
		Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* L_8 = V_0;
		NullCheck((ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE*)__this);
		GenericVirtualActionInvoker2< ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518*, RuntimeObject* >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 0), (ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE*)__this, L_7, (RuntimeObject*)L_8);
		// return obj;
		Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* L_9 = V_0;
		return (RuntimeObject*)L_9;
	}
}
// System.Object ES3Types.ES3Type_Shader::Read<UnityEngine.ParticleSystem/MinMaxGradient>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_Shader_Read_TisMinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69_mB06656A94638370785F1A90E64E2893984C16FAA_gshared (ES3Type_Shader_tAAA1785794F9B9772B20B61B2E57552BF02A4EDA* __this, ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_ReadProperty_TisString_t_mA276DF487B7BAC9562781B75307120FD89D76BC2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_string_t0C89CCA6F02AF5B46E66DEF92E77FCEC83C2F068_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3EC3372E82B3B91672EF4EC7D6C8F3FB8E934642);
		s_Il2CppMethodInitialized = true;
	}
	Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* V_0 = NULL;
	{
		// Shader obj = Shader.Find(reader.ReadProperty<string>(ES3Type_string.Instance));
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_0 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_1 = ((ES3Type_string_t0C89CCA6F02AF5B46E66DEF92E77FCEC83C2F068_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_string_t0C89CCA6F02AF5B46E66DEF92E77FCEC83C2F068_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_0);
		String_t* L_2;
		L_2 = ES3Reader_ReadProperty_TisString_t_mA276DF487B7BAC9562781B75307120FD89D76BC2(L_0, L_1, ES3Reader_ReadProperty_TisString_t_mA276DF487B7BAC9562781B75307120FD89D76BC2_RuntimeMethod_var);
		Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* L_3;
		L_3 = Shader_Find_mFF2A8FC042B9CFAA9800679CA674D52859BF3A72(L_2, NULL);
		V_0 = L_3;
		// if(obj == null)
		Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* L_4 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_5;
		L_5 = Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)L_4, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_5)
		{
			goto IL_0025;
		}
	}
	{
		// obj = Shader.Find("Diffuse");
		Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* L_6;
		L_6 = Shader_Find_mFF2A8FC042B9CFAA9800679CA674D52859BF3A72(_stringLiteral3EC3372E82B3B91672EF4EC7D6C8F3FB8E934642, NULL);
		V_0 = L_6;
	}

IL_0025:
	{
		// ReadInto<T>(reader, obj);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_7 = ___reader0;
		Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* L_8 = V_0;
		NullCheck((ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE*)__this);
		GenericVirtualActionInvoker2< ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518*, RuntimeObject* >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 0), (ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE*)__this, L_7, (RuntimeObject*)L_8);
		// return obj;
		Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* L_9 = V_0;
		return (RuntimeObject*)L_9;
	}
}
// System.Void ES3Types.ES3Type_Shader::ReadInto<System.Object>(ES3Reader,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ES3Type_Shader_ReadInto_TisRuntimeObject_m96103D0D19408BFE196EA2F2844A775329D109F6_gshared (ES3Type_Shader_tAAA1785794F9B9772B20B61B2E57552BF02A4EDA* __this, ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* ___reader0, RuntimeObject* ___obj1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mEFCC4D52DD5B822D3561A53591AE11CDB25CDB6F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisString_t_mE83D478C999E69292DB9310C2993B1EE7DD28021_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_int_t05A5E7A96442F23CE33E24A71CD349372A70E0C3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_string_t0C89CCA6F02AF5B46E66DEF92E77FCEC83C2F068_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9F10EBCE20D270FF4999A25F1E52C5E0C507BADE);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCE18B047107AA23D1AA9B2ED32D316148E02655F);
		s_Il2CppMethodInitialized = true;
	}
	Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	String_t* V_2 = NULL;
	RuntimeObject* V_3 = NULL;
	{
		// var instance = (UnityEngine.Shader)obj;
		RuntimeObject* L_0 = ___obj1;
		V_0 = ((Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692*)CastclassSealed((RuntimeObject*)L_0, Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692_il2cpp_TypeInfo_var));
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

FINALLY_0073:
			{// begin finally (depth: 1)
				{
					RuntimeObject* L_4 = V_1;
					V_3 = ((RuntimeObject*)IsInst((RuntimeObject*)L_4, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var));
					RuntimeObject* L_5 = V_3;
					if (!L_5)
					{
						goto IL_0083;
					}
				}
				{
					RuntimeObject* L_6 = V_3;
					NullCheck(L_6);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_6);
				}

IL_0083:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0069_1;
			}

IL_0015_1:
			{
				// foreach(string propertyName in reader.Properties)
				RuntimeObject* L_7 = V_1;
				NullCheck(L_7);
				RuntimeObject* L_8;
				L_8 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(1 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_7);
				V_2 = ((String_t*)CastclassSealed((RuntimeObject*)L_8, String_t_il2cpp_TypeInfo_var));
				String_t* L_9 = V_2;
				bool L_10;
				L_10 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_9, _stringLiteralCE18B047107AA23D1AA9B2ED32D316148E02655F, NULL);
				if (L_10)
				{
					goto IL_003d_1;
				}
			}
			{
				String_t* L_11 = V_2;
				bool L_12;
				L_12 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_11, _stringLiteral9F10EBCE20D270FF4999A25F1E52C5E0C507BADE, NULL);
				if (L_12)
				{
					goto IL_0050_1;
				}
			}
			{
				goto IL_0063_1;
			}

IL_003d_1:
			{
				// instance.name = reader.Read<string>(ES3Type_string.Instance);
				Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* L_13 = V_0;
				ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_14 = ___reader0;
				ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_15 = ((ES3Type_string_t0C89CCA6F02AF5B46E66DEF92E77FCEC83C2F068_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_string_t0C89CCA6F02AF5B46E66DEF92E77FCEC83C2F068_il2cpp_TypeInfo_var))->___Instance_12;
				NullCheck(L_14);
				String_t* L_16;
				L_16 = GenericVirtualFuncInvoker1< String_t*, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisString_t_mE83D478C999E69292DB9310C2993B1EE7DD28021_RuntimeMethod_var, L_14, L_15);
				NullCheck((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)L_13);
				Object_set_name_mC79E6DC8FFD72479C90F0C4CC7F42A0FEAF5AE47((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)L_13, L_16, NULL);
				// break;
				goto IL_0069_1;
			}

IL_0050_1:
			{
				// instance.maximumLOD = reader.Read<System.Int32>(ES3Type_int.Instance);
				Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* L_17 = V_0;
				ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_18 = ___reader0;
				ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_19 = ((ES3Type_int_t05A5E7A96442F23CE33E24A71CD349372A70E0C3_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_int_t05A5E7A96442F23CE33E24A71CD349372A70E0C3_il2cpp_TypeInfo_var))->___Instance_12;
				NullCheck(L_18);
				int32_t L_20;
				L_20 = GenericVirtualFuncInvoker1< int32_t, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mEFCC4D52DD5B822D3561A53591AE11CDB25CDB6F_RuntimeMethod_var, L_18, L_19);
				NullCheck(L_17);
				Shader_set_maximumLOD_mC07203B1137E60D0E80E8BB991A37435220D4CE8(L_17, L_20, NULL);
				// break;
				goto IL_0069_1;
			}

IL_0063_1:
			{
				// reader.Skip();
				ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_21 = ___reader0;
				NullCheck(L_21);
				VirtualActionInvoker0::Invoke(41 /* System.Void ES3Reader::Skip() */, L_21);
			}

IL_0069_1:
			{
				// foreach(string propertyName in reader.Properties)
				RuntimeObject* L_22 = V_1;
				NullCheck(L_22);
				bool L_23;
				L_23 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_22);
				if (L_23)
				{
					goto IL_0015_1;
				}
			}
			{
				goto IL_0084;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0084:
	{
		// }
		return;
	}
}
// System.Void ES3Types.ES3Type_Shader::ReadInto<UnityEngine.ParticleSystem/CollisionModule>(ES3Reader,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ES3Type_Shader_ReadInto_TisCollisionModule_tEE4892D4872C2907164A66DC424F1CFA1D527083_m47A94AF566DFFFA9E7804ED6DC3124A3407AAB25_gshared (ES3Type_Shader_tAAA1785794F9B9772B20B61B2E57552BF02A4EDA* __this, ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* ___reader0, RuntimeObject* ___obj1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mEFCC4D52DD5B822D3561A53591AE11CDB25CDB6F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisString_t_mE83D478C999E69292DB9310C2993B1EE7DD28021_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_int_t05A5E7A96442F23CE33E24A71CD349372A70E0C3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_string_t0C89CCA6F02AF5B46E66DEF92E77FCEC83C2F068_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9F10EBCE20D270FF4999A25F1E52C5E0C507BADE);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCE18B047107AA23D1AA9B2ED32D316148E02655F);
		s_Il2CppMethodInitialized = true;
	}
	Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	String_t* V_2 = NULL;
	RuntimeObject* V_3 = NULL;
	{
		// var instance = (UnityEngine.Shader)obj;
		RuntimeObject* L_0 = ___obj1;
		V_0 = ((Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692*)CastclassSealed((RuntimeObject*)L_0, Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692_il2cpp_TypeInfo_var));
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

FINALLY_0073:
			{// begin finally (depth: 1)
				{
					RuntimeObject* L_4 = V_1;
					V_3 = ((RuntimeObject*)IsInst((RuntimeObject*)L_4, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var));
					RuntimeObject* L_5 = V_3;
					if (!L_5)
					{
						goto IL_0083;
					}
				}
				{
					RuntimeObject* L_6 = V_3;
					NullCheck(L_6);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_6);
				}

IL_0083:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0069_1;
			}

IL_0015_1:
			{
				// foreach(string propertyName in reader.Properties)
				RuntimeObject* L_7 = V_1;
				NullCheck(L_7);
				RuntimeObject* L_8;
				L_8 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(1 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_7);
				V_2 = ((String_t*)CastclassSealed((RuntimeObject*)L_8, String_t_il2cpp_TypeInfo_var));
				String_t* L_9 = V_2;
				bool L_10;
				L_10 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_9, _stringLiteralCE18B047107AA23D1AA9B2ED32D316148E02655F, NULL);
				if (L_10)
				{
					goto IL_003d_1;
				}
			}
			{
				String_t* L_11 = V_2;
				bool L_12;
				L_12 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_11, _stringLiteral9F10EBCE20D270FF4999A25F1E52C5E0C507BADE, NULL);
				if (L_12)
				{
					goto IL_0050_1;
				}
			}
			{
				goto IL_0063_1;
			}

IL_003d_1:
			{
				// instance.name = reader.Read<string>(ES3Type_string.Instance);
				Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* L_13 = V_0;
				ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_14 = ___reader0;
				ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_15 = ((ES3Type_string_t0C89CCA6F02AF5B46E66DEF92E77FCEC83C2F068_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_string_t0C89CCA6F02AF5B46E66DEF92E77FCEC83C2F068_il2cpp_TypeInfo_var))->___Instance_12;
				NullCheck(L_14);
				String_t* L_16;
				L_16 = GenericVirtualFuncInvoker1< String_t*, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisString_t_mE83D478C999E69292DB9310C2993B1EE7DD28021_RuntimeMethod_var, L_14, L_15);
				NullCheck((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)L_13);
				Object_set_name_mC79E6DC8FFD72479C90F0C4CC7F42A0FEAF5AE47((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)L_13, L_16, NULL);
				// break;
				goto IL_0069_1;
			}

IL_0050_1:
			{
				// instance.maximumLOD = reader.Read<System.Int32>(ES3Type_int.Instance);
				Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* L_17 = V_0;
				ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_18 = ___reader0;
				ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_19 = ((ES3Type_int_t05A5E7A96442F23CE33E24A71CD349372A70E0C3_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_int_t05A5E7A96442F23CE33E24A71CD349372A70E0C3_il2cpp_TypeInfo_var))->___Instance_12;
				NullCheck(L_18);
				int32_t L_20;
				L_20 = GenericVirtualFuncInvoker1< int32_t, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mEFCC4D52DD5B822D3561A53591AE11CDB25CDB6F_RuntimeMethod_var, L_18, L_19);
				NullCheck(L_17);
				Shader_set_maximumLOD_mC07203B1137E60D0E80E8BB991A37435220D4CE8(L_17, L_20, NULL);
				// break;
				goto IL_0069_1;
			}

IL_0063_1:
			{
				// reader.Skip();
				ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_21 = ___reader0;
				NullCheck(L_21);
				VirtualActionInvoker0::Invoke(41 /* System.Void ES3Reader::Skip() */, L_21);
			}

IL_0069_1:
			{
				// foreach(string propertyName in reader.Properties)
				RuntimeObject* L_22 = V_1;
				NullCheck(L_22);
				bool L_23;
				L_23 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_22);
				if (L_23)
				{
					goto IL_0015_1;
				}
			}
			{
				goto IL_0084;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0084:
	{
		// }
		return;
	}
}
// System.Void ES3Types.ES3Type_Shader::ReadInto<UnityEngine.ParticleSystem/ColorBySpeedModule>(ES3Reader,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ES3Type_Shader_ReadInto_TisColorBySpeedModule_t808C4CC668431DDE51D5AD98A81C78DDB944948B_m0D743360EC31DF10C8BD101B7AEB944A4B7755F4_gshared (ES3Type_Shader_tAAA1785794F9B9772B20B61B2E57552BF02A4EDA* __this, ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* ___reader0, RuntimeObject* ___obj1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mEFCC4D52DD5B822D3561A53591AE11CDB25CDB6F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisString_t_mE83D478C999E69292DB9310C2993B1EE7DD28021_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_int_t05A5E7A96442F23CE33E24A71CD349372A70E0C3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_string_t0C89CCA6F02AF5B46E66DEF92E77FCEC83C2F068_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9F10EBCE20D270FF4999A25F1E52C5E0C507BADE);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCE18B047107AA23D1AA9B2ED32D316148E02655F);
		s_Il2CppMethodInitialized = true;
	}
	Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	String_t* V_2 = NULL;
	RuntimeObject* V_3 = NULL;
	{
		// var instance = (UnityEngine.Shader)obj;
		RuntimeObject* L_0 = ___obj1;
		V_0 = ((Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692*)CastclassSealed((RuntimeObject*)L_0, Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692_il2cpp_TypeInfo_var));
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

FINALLY_0073:
			{// begin finally (depth: 1)
				{
					RuntimeObject* L_4 = V_1;
					V_3 = ((RuntimeObject*)IsInst((RuntimeObject*)L_4, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var));
					RuntimeObject* L_5 = V_3;
					if (!L_5)
					{
						goto IL_0083;
					}
				}
				{
					RuntimeObject* L_6 = V_3;
					NullCheck(L_6);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_6);
				}

IL_0083:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0069_1;
			}

IL_0015_1:
			{
				// foreach(string propertyName in reader.Properties)
				RuntimeObject* L_7 = V_1;
				NullCheck(L_7);
				RuntimeObject* L_8;
				L_8 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(1 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_7);
				V_2 = ((String_t*)CastclassSealed((RuntimeObject*)L_8, String_t_il2cpp_TypeInfo_var));
				String_t* L_9 = V_2;
				bool L_10;
				L_10 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_9, _stringLiteralCE18B047107AA23D1AA9B2ED32D316148E02655F, NULL);
				if (L_10)
				{
					goto IL_003d_1;
				}
			}
			{
				String_t* L_11 = V_2;
				bool L_12;
				L_12 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_11, _stringLiteral9F10EBCE20D270FF4999A25F1E52C5E0C507BADE, NULL);
				if (L_12)
				{
					goto IL_0050_1;
				}
			}
			{
				goto IL_0063_1;
			}

IL_003d_1:
			{
				// instance.name = reader.Read<string>(ES3Type_string.Instance);
				Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* L_13 = V_0;
				ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_14 = ___reader0;
				ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_15 = ((ES3Type_string_t0C89CCA6F02AF5B46E66DEF92E77FCEC83C2F068_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_string_t0C89CCA6F02AF5B46E66DEF92E77FCEC83C2F068_il2cpp_TypeInfo_var))->___Instance_12;
				NullCheck(L_14);
				String_t* L_16;
				L_16 = GenericVirtualFuncInvoker1< String_t*, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisString_t_mE83D478C999E69292DB9310C2993B1EE7DD28021_RuntimeMethod_var, L_14, L_15);
				NullCheck((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)L_13);
				Object_set_name_mC79E6DC8FFD72479C90F0C4CC7F42A0FEAF5AE47((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)L_13, L_16, NULL);
				// break;
				goto IL_0069_1;
			}

IL_0050_1:
			{
				// instance.maximumLOD = reader.Read<System.Int32>(ES3Type_int.Instance);
				Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* L_17 = V_0;
				ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_18 = ___reader0;
				ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_19 = ((ES3Type_int_t05A5E7A96442F23CE33E24A71CD349372A70E0C3_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_int_t05A5E7A96442F23CE33E24A71CD349372A70E0C3_il2cpp_TypeInfo_var))->___Instance_12;
				NullCheck(L_18);
				int32_t L_20;
				L_20 = GenericVirtualFuncInvoker1< int32_t, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mEFCC4D52DD5B822D3561A53591AE11CDB25CDB6F_RuntimeMethod_var, L_18, L_19);
				NullCheck(L_17);
				Shader_set_maximumLOD_mC07203B1137E60D0E80E8BB991A37435220D4CE8(L_17, L_20, NULL);
				// break;
				goto IL_0069_1;
			}

IL_0063_1:
			{
				// reader.Skip();
				ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_21 = ___reader0;
				NullCheck(L_21);
				VirtualActionInvoker0::Invoke(41 /* System.Void ES3Reader::Skip() */, L_21);
			}

IL_0069_1:
			{
				// foreach(string propertyName in reader.Properties)
				RuntimeObject* L_22 = V_1;
				NullCheck(L_22);
				bool L_23;
				L_23 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_22);
				if (L_23)
				{
					goto IL_0015_1;
				}
			}
			{
				goto IL_0084;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0084:
	{
		// }
		return;
	}
}
// System.Void ES3Types.ES3Type_Shader::ReadInto<UnityEngine.ParticleSystem/ColorOverLifetimeModule>(ES3Reader,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ES3Type_Shader_ReadInto_TisColorOverLifetimeModule_t758EC8315B6C19D78C418D942CD1F94FE7EEE9D9_mB38246D02B8A7F042D8295B6ABD98C882F5D7CC9_gshared (ES3Type_Shader_tAAA1785794F9B9772B20B61B2E57552BF02A4EDA* __this, ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* ___reader0, RuntimeObject* ___obj1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mEFCC4D52DD5B822D3561A53591AE11CDB25CDB6F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisString_t_mE83D478C999E69292DB9310C2993B1EE7DD28021_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_int_t05A5E7A96442F23CE33E24A71CD349372A70E0C3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_string_t0C89CCA6F02AF5B46E66DEF92E77FCEC83C2F068_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9F10EBCE20D270FF4999A25F1E52C5E0C507BADE);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCE18B047107AA23D1AA9B2ED32D316148E02655F);
		s_Il2CppMethodInitialized = true;
	}
	Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	String_t* V_2 = NULL;
	RuntimeObject* V_3 = NULL;
	{
		// var instance = (UnityEngine.Shader)obj;
		RuntimeObject* L_0 = ___obj1;
		V_0 = ((Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692*)CastclassSealed((RuntimeObject*)L_0, Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692_il2cpp_TypeInfo_var));
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

FINALLY_0073:
			{// begin finally (depth: 1)
				{
					RuntimeObject* L_4 = V_1;
					V_3 = ((RuntimeObject*)IsInst((RuntimeObject*)L_4, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var));
					RuntimeObject* L_5 = V_3;
					if (!L_5)
					{
						goto IL_0083;
					}
				}
				{
					RuntimeObject* L_6 = V_3;
					NullCheck(L_6);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_6);
				}

IL_0083:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0069_1;
			}

IL_0015_1:
			{
				// foreach(string propertyName in reader.Properties)
				RuntimeObject* L_7 = V_1;
				NullCheck(L_7);
				RuntimeObject* L_8;
				L_8 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(1 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_7);
				V_2 = ((String_t*)CastclassSealed((RuntimeObject*)L_8, String_t_il2cpp_TypeInfo_var));
				String_t* L_9 = V_2;
				bool L_10;
				L_10 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_9, _stringLiteralCE18B047107AA23D1AA9B2ED32D316148E02655F, NULL);
				if (L_10)
				{
					goto IL_003d_1;
				}
			}
			{
				String_t* L_11 = V_2;
				bool L_12;
				L_12 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_11, _stringLiteral9F10EBCE20D270FF4999A25F1E52C5E0C507BADE, NULL);
				if (L_12)
				{
					goto IL_0050_1;
				}
			}
			{
				goto IL_0063_1;
			}

IL_003d_1:
			{
				// instance.name = reader.Read<string>(ES3Type_string.Instance);
				Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* L_13 = V_0;
				ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_14 = ___reader0;
				ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_15 = ((ES3Type_string_t0C89CCA6F02AF5B46E66DEF92E77FCEC83C2F068_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_string_t0C89CCA6F02AF5B46E66DEF92E77FCEC83C2F068_il2cpp_TypeInfo_var))->___Instance_12;
				NullCheck(L_14);
				String_t* L_16;
				L_16 = GenericVirtualFuncInvoker1< String_t*, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisString_t_mE83D478C999E69292DB9310C2993B1EE7DD28021_RuntimeMethod_var, L_14, L_15);
				NullCheck((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)L_13);
				Object_set_name_mC79E6DC8FFD72479C90F0C4CC7F42A0FEAF5AE47((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)L_13, L_16, NULL);
				// break;
				goto IL_0069_1;
			}

IL_0050_1:
			{
				// instance.maximumLOD = reader.Read<System.Int32>(ES3Type_int.Instance);
				Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* L_17 = V_0;
				ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_18 = ___reader0;
				ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_19 = ((ES3Type_int_t05A5E7A96442F23CE33E24A71CD349372A70E0C3_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_int_t05A5E7A96442F23CE33E24A71CD349372A70E0C3_il2cpp_TypeInfo_var))->___Instance_12;
				NullCheck(L_18);
				int32_t L_20;
				L_20 = GenericVirtualFuncInvoker1< int32_t, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mEFCC4D52DD5B822D3561A53591AE11CDB25CDB6F_RuntimeMethod_var, L_18, L_19);
				NullCheck(L_17);
				Shader_set_maximumLOD_mC07203B1137E60D0E80E8BB991A37435220D4CE8(L_17, L_20, NULL);
				// break;
				goto IL_0069_1;
			}

IL_0063_1:
			{
				// reader.Skip();
				ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_21 = ___reader0;
				NullCheck(L_21);
				VirtualActionInvoker0::Invoke(41 /* System.Void ES3Reader::Skip() */, L_21);
			}

IL_0069_1:
			{
				// foreach(string propertyName in reader.Properties)
				RuntimeObject* L_22 = V_1;
				NullCheck(L_22);
				bool L_23;
				L_23 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_22);
				if (L_23)
				{
					goto IL_0015_1;
				}
			}
			{
				goto IL_0084;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0084:
	{
		// }
		return;
	}
}
// System.Void ES3Types.ES3Type_Shader::ReadInto<UnityEngine.ParticleSystem/EmissionModule>(ES3Reader,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ES3Type_Shader_ReadInto_TisEmissionModule_t0F469FA4A08003F6D9C610D2F716A9DFDB9A3678_m988DDABE52A4F1964C3BF98F2628C1B8000A38DF_gshared (ES3Type_Shader_tAAA1785794F9B9772B20B61B2E57552BF02A4EDA* __this, ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* ___reader0, RuntimeObject* ___obj1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mEFCC4D52DD5B822D3561A53591AE11CDB25CDB6F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisString_t_mE83D478C999E69292DB9310C2993B1EE7DD28021_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_int_t05A5E7A96442F23CE33E24A71CD349372A70E0C3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_string_t0C89CCA6F02AF5B46E66DEF92E77FCEC83C2F068_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9F10EBCE20D270FF4999A25F1E52C5E0C507BADE);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCE18B047107AA23D1AA9B2ED32D316148E02655F);
		s_Il2CppMethodInitialized = true;
	}
	Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	String_t* V_2 = NULL;
	RuntimeObject* V_3 = NULL;
	{
		// var instance = (UnityEngine.Shader)obj;
		RuntimeObject* L_0 = ___obj1;
		V_0 = ((Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692*)CastclassSealed((RuntimeObject*)L_0, Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692_il2cpp_TypeInfo_var));
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

FINALLY_0073:
			{// begin finally (depth: 1)
				{
					RuntimeObject* L_4 = V_1;
					V_3 = ((RuntimeObject*)IsInst((RuntimeObject*)L_4, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var));
					RuntimeObject* L_5 = V_3;
					if (!L_5)
					{
						goto IL_0083;
					}
				}
				{
					RuntimeObject* L_6 = V_3;
					NullCheck(L_6);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_6);
				}

IL_0083:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0069_1;
			}

IL_0015_1:
			{
				// foreach(string propertyName in reader.Properties)
				RuntimeObject* L_7 = V_1;
				NullCheck(L_7);
				RuntimeObject* L_8;
				L_8 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(1 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_7);
				V_2 = ((String_t*)CastclassSealed((RuntimeObject*)L_8, String_t_il2cpp_TypeInfo_var));
				String_t* L_9 = V_2;
				bool L_10;
				L_10 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_9, _stringLiteralCE18B047107AA23D1AA9B2ED32D316148E02655F, NULL);
				if (L_10)
				{
					goto IL_003d_1;
				}
			}
			{
				String_t* L_11 = V_2;
				bool L_12;
				L_12 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_11, _stringLiteral9F10EBCE20D270FF4999A25F1E52C5E0C507BADE, NULL);
				if (L_12)
				{
					goto IL_0050_1;
				}
			}
			{
				goto IL_0063_1;
			}

IL_003d_1:
			{
				// instance.name = reader.Read<string>(ES3Type_string.Instance);
				Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* L_13 = V_0;
				ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_14 = ___reader0;
				ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_15 = ((ES3Type_string_t0C89CCA6F02AF5B46E66DEF92E77FCEC83C2F068_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_string_t0C89CCA6F02AF5B46E66DEF92E77FCEC83C2F068_il2cpp_TypeInfo_var))->___Instance_12;
				NullCheck(L_14);
				String_t* L_16;
				L_16 = GenericVirtualFuncInvoker1< String_t*, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisString_t_mE83D478C999E69292DB9310C2993B1EE7DD28021_RuntimeMethod_var, L_14, L_15);
				NullCheck((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)L_13);
				Object_set_name_mC79E6DC8FFD72479C90F0C4CC7F42A0FEAF5AE47((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)L_13, L_16, NULL);
				// break;
				goto IL_0069_1;
			}

IL_0050_1:
			{
				// instance.maximumLOD = reader.Read<System.Int32>(ES3Type_int.Instance);
				Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* L_17 = V_0;
				ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_18 = ___reader0;
				ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_19 = ((ES3Type_int_t05A5E7A96442F23CE33E24A71CD349372A70E0C3_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_int_t05A5E7A96442F23CE33E24A71CD349372A70E0C3_il2cpp_TypeInfo_var))->___Instance_12;
				NullCheck(L_18);
				int32_t L_20;
				L_20 = GenericVirtualFuncInvoker1< int32_t, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mEFCC4D52DD5B822D3561A53591AE11CDB25CDB6F_RuntimeMethod_var, L_18, L_19);
				NullCheck(L_17);
				Shader_set_maximumLOD_mC07203B1137E60D0E80E8BB991A37435220D4CE8(L_17, L_20, NULL);
				// break;
				goto IL_0069_1;
			}

IL_0063_1:
			{
				// reader.Skip();
				ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_21 = ___reader0;
				NullCheck(L_21);
				VirtualActionInvoker0::Invoke(41 /* System.Void ES3Reader::Skip() */, L_21);
			}

IL_0069_1:
			{
				// foreach(string propertyName in reader.Properties)
				RuntimeObject* L_22 = V_1;
				NullCheck(L_22);
				bool L_23;
				L_23 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_22);
				if (L_23)
				{
					goto IL_0015_1;
				}
			}
			{
				goto IL_0084;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0084:
	{
		// }
		return;
	}
}
// System.Void ES3Types.ES3Type_Shader::ReadInto<UnityEngine.ParticleSystem/ExternalForcesModule>(ES3Reader,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ES3Type_Shader_ReadInto_TisExternalForcesModule_t4494E21ECF96F072432EF4DDC5F84BAF84912FC7_m1867B013939B2F2E059663919DC9329B5ED40C99_gshared (ES3Type_Shader_tAAA1785794F9B9772B20B61B2E57552BF02A4EDA* __this, ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* ___reader0, RuntimeObject* ___obj1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mEFCC4D52DD5B822D3561A53591AE11CDB25CDB6F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisString_t_mE83D478C999E69292DB9310C2993B1EE7DD28021_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_int_t05A5E7A96442F23CE33E24A71CD349372A70E0C3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_string_t0C89CCA6F02AF5B46E66DEF92E77FCEC83C2F068_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9F10EBCE20D270FF4999A25F1E52C5E0C507BADE);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCE18B047107AA23D1AA9B2ED32D316148E02655F);
		s_Il2CppMethodInitialized = true;
	}
	Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	String_t* V_2 = NULL;
	RuntimeObject* V_3 = NULL;
	{
		// var instance = (UnityEngine.Shader)obj;
		RuntimeObject* L_0 = ___obj1;
		V_0 = ((Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692*)CastclassSealed((RuntimeObject*)L_0, Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692_il2cpp_TypeInfo_var));
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

FINALLY_0073:
			{// begin finally (depth: 1)
				{
					RuntimeObject* L_4 = V_1;
					V_3 = ((RuntimeObject*)IsInst((RuntimeObject*)L_4, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var));
					RuntimeObject* L_5 = V_3;
					if (!L_5)
					{
						goto IL_0083;
					}
				}
				{
					RuntimeObject* L_6 = V_3;
					NullCheck(L_6);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_6);
				}

IL_0083:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0069_1;
			}

IL_0015_1:
			{
				// foreach(string propertyName in reader.Properties)
				RuntimeObject* L_7 = V_1;
				NullCheck(L_7);
				RuntimeObject* L_8;
				L_8 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(1 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_7);
				V_2 = ((String_t*)CastclassSealed((RuntimeObject*)L_8, String_t_il2cpp_TypeInfo_var));
				String_t* L_9 = V_2;
				bool L_10;
				L_10 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_9, _stringLiteralCE18B047107AA23D1AA9B2ED32D316148E02655F, NULL);
				if (L_10)
				{
					goto IL_003d_1;
				}
			}
			{
				String_t* L_11 = V_2;
				bool L_12;
				L_12 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_11, _stringLiteral9F10EBCE20D270FF4999A25F1E52C5E0C507BADE, NULL);
				if (L_12)
				{
					goto IL_0050_1;
				}
			}
			{
				goto IL_0063_1;
			}

IL_003d_1:
			{
				// instance.name = reader.Read<string>(ES3Type_string.Instance);
				Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* L_13 = V_0;
				ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_14 = ___reader0;
				ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_15 = ((ES3Type_string_t0C89CCA6F02AF5B46E66DEF92E77FCEC83C2F068_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_string_t0C89CCA6F02AF5B46E66DEF92E77FCEC83C2F068_il2cpp_TypeInfo_var))->___Instance_12;
				NullCheck(L_14);
				String_t* L_16;
				L_16 = GenericVirtualFuncInvoker1< String_t*, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisString_t_mE83D478C999E69292DB9310C2993B1EE7DD28021_RuntimeMethod_var, L_14, L_15);
				NullCheck((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)L_13);
				Object_set_name_mC79E6DC8FFD72479C90F0C4CC7F42A0FEAF5AE47((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)L_13, L_16, NULL);
				// break;
				goto IL_0069_1;
			}

IL_0050_1:
			{
				// instance.maximumLOD = reader.Read<System.Int32>(ES3Type_int.Instance);
				Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* L_17 = V_0;
				ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_18 = ___reader0;
				ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_19 = ((ES3Type_int_t05A5E7A96442F23CE33E24A71CD349372A70E0C3_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_int_t05A5E7A96442F23CE33E24A71CD349372A70E0C3_il2cpp_TypeInfo_var))->___Instance_12;
				NullCheck(L_18);
				int32_t L_20;
				L_20 = GenericVirtualFuncInvoker1< int32_t, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mEFCC4D52DD5B822D3561A53591AE11CDB25CDB6F_RuntimeMethod_var, L_18, L_19);
				NullCheck(L_17);
				Shader_set_maximumLOD_mC07203B1137E60D0E80E8BB991A37435220D4CE8(L_17, L_20, NULL);
				// break;
				goto IL_0069_1;
			}

IL_0063_1:
			{
				// reader.Skip();
				ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_21 = ___reader0;
				NullCheck(L_21);
				VirtualActionInvoker0::Invoke(41 /* System.Void ES3Reader::Skip() */, L_21);
			}

IL_0069_1:
			{
				// foreach(string propertyName in reader.Properties)
				RuntimeObject* L_22 = V_1;
				NullCheck(L_22);
				bool L_23;
				L_23 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_22);
				if (L_23)
				{
					goto IL_0015_1;
				}
			}
			{
				goto IL_0084;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0084:
	{
		// }
		return;
	}
}
// System.Void ES3Types.ES3Type_Shader::ReadInto<UnityEngine.ParticleSystem/ForceOverLifetimeModule>(ES3Reader,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ES3Type_Shader_ReadInto_TisForceOverLifetimeModule_t4859776EAF945AEA86044CAB63CA7A8AC8C14976_m26D59E00F86BB49860A18CC0B6BD6AB7ADC99C20_gshared (ES3Type_Shader_tAAA1785794F9B9772B20B61B2E57552BF02A4EDA* __this, ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* ___reader0, RuntimeObject* ___obj1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mEFCC4D52DD5B822D3561A53591AE11CDB25CDB6F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisString_t_mE83D478C999E69292DB9310C2993B1EE7DD28021_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_int_t05A5E7A96442F23CE33E24A71CD349372A70E0C3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_string_t0C89CCA6F02AF5B46E66DEF92E77FCEC83C2F068_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9F10EBCE20D270FF4999A25F1E52C5E0C507BADE);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCE18B047107AA23D1AA9B2ED32D316148E02655F);
		s_Il2CppMethodInitialized = true;
	}
	Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	String_t* V_2 = NULL;
	RuntimeObject* V_3 = NULL;
	{
		// var instance = (UnityEngine.Shader)obj;
		RuntimeObject* L_0 = ___obj1;
		V_0 = ((Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692*)CastclassSealed((RuntimeObject*)L_0, Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692_il2cpp_TypeInfo_var));
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

FINALLY_0073:
			{// begin finally (depth: 1)
				{
					RuntimeObject* L_4 = V_1;
					V_3 = ((RuntimeObject*)IsInst((RuntimeObject*)L_4, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var));
					RuntimeObject* L_5 = V_3;
					if (!L_5)
					{
						goto IL_0083;
					}
				}
				{
					RuntimeObject* L_6 = V_3;
					NullCheck(L_6);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_6);
				}

IL_0083:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0069_1;
			}

IL_0015_1:
			{
				// foreach(string propertyName in reader.Properties)
				RuntimeObject* L_7 = V_1;
				NullCheck(L_7);
				RuntimeObject* L_8;
				L_8 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(1 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_7);
				V_2 = ((String_t*)CastclassSealed((RuntimeObject*)L_8, String_t_il2cpp_TypeInfo_var));
				String_t* L_9 = V_2;
				bool L_10;
				L_10 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_9, _stringLiteralCE18B047107AA23D1AA9B2ED32D316148E02655F, NULL);
				if (L_10)
				{
					goto IL_003d_1;
				}
			}
			{
				String_t* L_11 = V_2;
				bool L_12;
				L_12 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_11, _stringLiteral9F10EBCE20D270FF4999A25F1E52C5E0C507BADE, NULL);
				if (L_12)
				{
					goto IL_0050_1;
				}
			}
			{
				goto IL_0063_1;
			}

IL_003d_1:
			{
				// instance.name = reader.Read<string>(ES3Type_string.Instance);
				Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* L_13 = V_0;
				ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_14 = ___reader0;
				ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_15 = ((ES3Type_string_t0C89CCA6F02AF5B46E66DEF92E77FCEC83C2F068_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_string_t0C89CCA6F02AF5B46E66DEF92E77FCEC83C2F068_il2cpp_TypeInfo_var))->___Instance_12;
				NullCheck(L_14);
				String_t* L_16;
				L_16 = GenericVirtualFuncInvoker1< String_t*, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisString_t_mE83D478C999E69292DB9310C2993B1EE7DD28021_RuntimeMethod_var, L_14, L_15);
				NullCheck((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)L_13);
				Object_set_name_mC79E6DC8FFD72479C90F0C4CC7F42A0FEAF5AE47((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)L_13, L_16, NULL);
				// break;
				goto IL_0069_1;
			}

IL_0050_1:
			{
				// instance.maximumLOD = reader.Read<System.Int32>(ES3Type_int.Instance);
				Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* L_17 = V_0;
				ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_18 = ___reader0;
				ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_19 = ((ES3Type_int_t05A5E7A96442F23CE33E24A71CD349372A70E0C3_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_int_t05A5E7A96442F23CE33E24A71CD349372A70E0C3_il2cpp_TypeInfo_var))->___Instance_12;
				NullCheck(L_18);
				int32_t L_20;
				L_20 = GenericVirtualFuncInvoker1< int32_t, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mEFCC4D52DD5B822D3561A53591AE11CDB25CDB6F_RuntimeMethod_var, L_18, L_19);
				NullCheck(L_17);
				Shader_set_maximumLOD_mC07203B1137E60D0E80E8BB991A37435220D4CE8(L_17, L_20, NULL);
				// break;
				goto IL_0069_1;
			}

IL_0063_1:
			{
				// reader.Skip();
				ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_21 = ___reader0;
				NullCheck(L_21);
				VirtualActionInvoker0::Invoke(41 /* System.Void ES3Reader::Skip() */, L_21);
			}

IL_0069_1:
			{
				// foreach(string propertyName in reader.Properties)
				RuntimeObject* L_22 = V_1;
				NullCheck(L_22);
				bool L_23;
				L_23 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_22);
				if (L_23)
				{
					goto IL_0015_1;
				}
			}
			{
				goto IL_0084;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0084:
	{
		// }
		return;
	}
}
// System.Void ES3Types.ES3Type_Shader::ReadInto<UnityEngine.ParticleSystem/InheritVelocityModule>(ES3Reader,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ES3Type_Shader_ReadInto_TisInheritVelocityModule_tB71B2EDCAF328647DDB6BC79541D7C5E76C19562_m9F5945A32A666D1C464C985DA5F59A96AE90A1C4_gshared (ES3Type_Shader_tAAA1785794F9B9772B20B61B2E57552BF02A4EDA* __this, ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* ___reader0, RuntimeObject* ___obj1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mEFCC4D52DD5B822D3561A53591AE11CDB25CDB6F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisString_t_mE83D478C999E69292DB9310C2993B1EE7DD28021_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_int_t05A5E7A96442F23CE33E24A71CD349372A70E0C3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_string_t0C89CCA6F02AF5B46E66DEF92E77FCEC83C2F068_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9F10EBCE20D270FF4999A25F1E52C5E0C507BADE);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCE18B047107AA23D1AA9B2ED32D316148E02655F);
		s_Il2CppMethodInitialized = true;
	}
	Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	String_t* V_2 = NULL;
	RuntimeObject* V_3 = NULL;
	{
		// var instance = (UnityEngine.Shader)obj;
		RuntimeObject* L_0 = ___obj1;
		V_0 = ((Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692*)CastclassSealed((RuntimeObject*)L_0, Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692_il2cpp_TypeInfo_var));
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

FINALLY_0073:
			{// begin finally (depth: 1)
				{
					RuntimeObject* L_4 = V_1;
					V_3 = ((RuntimeObject*)IsInst((RuntimeObject*)L_4, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var));
					RuntimeObject* L_5 = V_3;
					if (!L_5)
					{
						goto IL_0083;
					}
				}
				{
					RuntimeObject* L_6 = V_3;
					NullCheck(L_6);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_6);
				}

IL_0083:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0069_1;
			}

IL_0015_1:
			{
				// foreach(string propertyName in reader.Properties)
				RuntimeObject* L_7 = V_1;
				NullCheck(L_7);
				RuntimeObject* L_8;
				L_8 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(1 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_7);
				V_2 = ((String_t*)CastclassSealed((RuntimeObject*)L_8, String_t_il2cpp_TypeInfo_var));
				String_t* L_9 = V_2;
				bool L_10;
				L_10 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_9, _stringLiteralCE18B047107AA23D1AA9B2ED32D316148E02655F, NULL);
				if (L_10)
				{
					goto IL_003d_1;
				}
			}
			{
				String_t* L_11 = V_2;
				bool L_12;
				L_12 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_11, _stringLiteral9F10EBCE20D270FF4999A25F1E52C5E0C507BADE, NULL);
				if (L_12)
				{
					goto IL_0050_1;
				}
			}
			{
				goto IL_0063_1;
			}

IL_003d_1:
			{
				// instance.name = reader.Read<string>(ES3Type_string.Instance);
				Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* L_13 = V_0;
				ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_14 = ___reader0;
				ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_15 = ((ES3Type_string_t0C89CCA6F02AF5B46E66DEF92E77FCEC83C2F068_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_string_t0C89CCA6F02AF5B46E66DEF92E77FCEC83C2F068_il2cpp_TypeInfo_var))->___Instance_12;
				NullCheck(L_14);
				String_t* L_16;
				L_16 = GenericVirtualFuncInvoker1< String_t*, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisString_t_mE83D478C999E69292DB9310C2993B1EE7DD28021_RuntimeMethod_var, L_14, L_15);
				NullCheck((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)L_13);
				Object_set_name_mC79E6DC8FFD72479C90F0C4CC7F42A0FEAF5AE47((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)L_13, L_16, NULL);
				// break;
				goto IL_0069_1;
			}

IL_0050_1:
			{
				// instance.maximumLOD = reader.Read<System.Int32>(ES3Type_int.Instance);
				Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* L_17 = V_0;
				ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_18 = ___reader0;
				ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_19 = ((ES3Type_int_t05A5E7A96442F23CE33E24A71CD349372A70E0C3_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_int_t05A5E7A96442F23CE33E24A71CD349372A70E0C3_il2cpp_TypeInfo_var))->___Instance_12;
				NullCheck(L_18);
				int32_t L_20;
				L_20 = GenericVirtualFuncInvoker1< int32_t, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mEFCC4D52DD5B822D3561A53591AE11CDB25CDB6F_RuntimeMethod_var, L_18, L_19);
				NullCheck(L_17);
				Shader_set_maximumLOD_mC07203B1137E60D0E80E8BB991A37435220D4CE8(L_17, L_20, NULL);
				// break;
				goto IL_0069_1;
			}

IL_0063_1:
			{
				// reader.Skip();
				ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_21 = ___reader0;
				NullCheck(L_21);
				VirtualActionInvoker0::Invoke(41 /* System.Void ES3Reader::Skip() */, L_21);
			}

IL_0069_1:
			{
				// foreach(string propertyName in reader.Properties)
				RuntimeObject* L_22 = V_1;
				NullCheck(L_22);
				bool L_23;
				L_23 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_22);
				if (L_23)
				{
					goto IL_0015_1;
				}
			}
			{
				goto IL_0084;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0084:
	{
		// }
		return;
	}
}
// System.Void ES3Types.ES3Type_Shader::ReadInto<UnityEngine.ParticleSystem/LightsModule>(ES3Reader,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ES3Type_Shader_ReadInto_TisLightsModule_t720242ED070FD6C55E59B7536322829A22884C7E_m5067A983168CCD83EF9037C32DB4EA0181B4FE60_gshared (ES3Type_Shader_tAAA1785794F9B9772B20B61B2E57552BF02A4EDA* __this, ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* ___reader0, RuntimeObject* ___obj1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mEFCC4D52DD5B822D3561A53591AE11CDB25CDB6F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisString_t_mE83D478C999E69292DB9310C2993B1EE7DD28021_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_int_t05A5E7A96442F23CE33E24A71CD349372A70E0C3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_string_t0C89CCA6F02AF5B46E66DEF92E77FCEC83C2F068_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9F10EBCE20D270FF4999A25F1E52C5E0C507BADE);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCE18B047107AA23D1AA9B2ED32D316148E02655F);
		s_Il2CppMethodInitialized = true;
	}
	Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	String_t* V_2 = NULL;
	RuntimeObject* V_3 = NULL;
	{
		// var instance = (UnityEngine.Shader)obj;
		RuntimeObject* L_0 = ___obj1;
		V_0 = ((Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692*)CastclassSealed((RuntimeObject*)L_0, Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692_il2cpp_TypeInfo_var));
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

FINALLY_0073:
			{// begin finally (depth: 1)
				{
					RuntimeObject* L_4 = V_1;
					V_3 = ((RuntimeObject*)IsInst((RuntimeObject*)L_4, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var));
					RuntimeObject* L_5 = V_3;
					if (!L_5)
					{
						goto IL_0083;
					}
				}
				{
					RuntimeObject* L_6 = V_3;
					NullCheck(L_6);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_6);
				}

IL_0083:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0069_1;
			}

IL_0015_1:
			{
				// foreach(string propertyName in reader.Properties)
				RuntimeObject* L_7 = V_1;
				NullCheck(L_7);
				RuntimeObject* L_8;
				L_8 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(1 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_7);
				V_2 = ((String_t*)CastclassSealed((RuntimeObject*)L_8, String_t_il2cpp_TypeInfo_var));
				String_t* L_9 = V_2;
				bool L_10;
				L_10 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_9, _stringLiteralCE18B047107AA23D1AA9B2ED32D316148E02655F, NULL);
				if (L_10)
				{
					goto IL_003d_1;
				}
			}
			{
				String_t* L_11 = V_2;
				bool L_12;
				L_12 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_11, _stringLiteral9F10EBCE20D270FF4999A25F1E52C5E0C507BADE, NULL);
				if (L_12)
				{
					goto IL_0050_1;
				}
			}
			{
				goto IL_0063_1;
			}

IL_003d_1:
			{
				// instance.name = reader.Read<string>(ES3Type_string.Instance);
				Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* L_13 = V_0;
				ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_14 = ___reader0;
				ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_15 = ((ES3Type_string_t0C89CCA6F02AF5B46E66DEF92E77FCEC83C2F068_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_string_t0C89CCA6F02AF5B46E66DEF92E77FCEC83C2F068_il2cpp_TypeInfo_var))->___Instance_12;
				NullCheck(L_14);
				String_t* L_16;
				L_16 = GenericVirtualFuncInvoker1< String_t*, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisString_t_mE83D478C999E69292DB9310C2993B1EE7DD28021_RuntimeMethod_var, L_14, L_15);
				NullCheck((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)L_13);
				Object_set_name_mC79E6DC8FFD72479C90F0C4CC7F42A0FEAF5AE47((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)L_13, L_16, NULL);
				// break;
				goto IL_0069_1;
			}

IL_0050_1:
			{
				// instance.maximumLOD = reader.Read<System.Int32>(ES3Type_int.Instance);
				Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* L_17 = V_0;
				ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_18 = ___reader0;
				ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_19 = ((ES3Type_int_t05A5E7A96442F23CE33E24A71CD349372A70E0C3_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_int_t05A5E7A96442F23CE33E24A71CD349372A70E0C3_il2cpp_TypeInfo_var))->___Instance_12;
				NullCheck(L_18);
				int32_t L_20;
				L_20 = GenericVirtualFuncInvoker1< int32_t, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mEFCC4D52DD5B822D3561A53591AE11CDB25CDB6F_RuntimeMethod_var, L_18, L_19);
				NullCheck(L_17);
				Shader_set_maximumLOD_mC07203B1137E60D0E80E8BB991A37435220D4CE8(L_17, L_20, NULL);
				// break;
				goto IL_0069_1;
			}

IL_0063_1:
			{
				// reader.Skip();
				ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_21 = ___reader0;
				NullCheck(L_21);
				VirtualActionInvoker0::Invoke(41 /* System.Void ES3Reader::Skip() */, L_21);
			}

IL_0069_1:
			{
				// foreach(string propertyName in reader.Properties)
				RuntimeObject* L_22 = V_1;
				NullCheck(L_22);
				bool L_23;
				L_23 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_22);
				if (L_23)
				{
					goto IL_0015_1;
				}
			}
			{
				goto IL_0084;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0084:
	{
		// }
		return;
	}
}
// System.Void ES3Types.ES3Type_Shader::ReadInto<UnityEngine.ParticleSystem/LimitVelocityOverLifetimeModule>(ES3Reader,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ES3Type_Shader_ReadInto_TisLimitVelocityOverLifetimeModule_tC52CF1434E2639EE5D81DD6BA269FF38CA17D8B1_m9A65CB7FEB4C654A1D515A1C25907F4DFB9D7D8E_gshared (ES3Type_Shader_tAAA1785794F9B9772B20B61B2E57552BF02A4EDA* __this, ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* ___reader0, RuntimeObject* ___obj1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mEFCC4D52DD5B822D3561A53591AE11CDB25CDB6F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisString_t_mE83D478C999E69292DB9310C2993B1EE7DD28021_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_int_t05A5E7A96442F23CE33E24A71CD349372A70E0C3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_string_t0C89CCA6F02AF5B46E66DEF92E77FCEC83C2F068_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9F10EBCE20D270FF4999A25F1E52C5E0C507BADE);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCE18B047107AA23D1AA9B2ED32D316148E02655F);
		s_Il2CppMethodInitialized = true;
	}
	Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	String_t* V_2 = NULL;
	RuntimeObject* V_3 = NULL;
	{
		// var instance = (UnityEngine.Shader)obj;
		RuntimeObject* L_0 = ___obj1;
		V_0 = ((Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692*)CastclassSealed((RuntimeObject*)L_0, Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692_il2cpp_TypeInfo_var));
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

FINALLY_0073:
			{// begin finally (depth: 1)
				{
					RuntimeObject* L_4 = V_1;
					V_3 = ((RuntimeObject*)IsInst((RuntimeObject*)L_4, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var));
					RuntimeObject* L_5 = V_3;
					if (!L_5)
					{
						goto IL_0083;
					}
				}
				{
					RuntimeObject* L_6 = V_3;
					NullCheck(L_6);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_6);
				}

IL_0083:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0069_1;
			}

IL_0015_1:
			{
				// foreach(string propertyName in reader.Properties)
				RuntimeObject* L_7 = V_1;
				NullCheck(L_7);
				RuntimeObject* L_8;
				L_8 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(1 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_7);
				V_2 = ((String_t*)CastclassSealed((RuntimeObject*)L_8, String_t_il2cpp_TypeInfo_var));
				String_t* L_9 = V_2;
				bool L_10;
				L_10 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_9, _stringLiteralCE18B047107AA23D1AA9B2ED32D316148E02655F, NULL);
				if (L_10)
				{
					goto IL_003d_1;
				}
			}
			{
				String_t* L_11 = V_2;
				bool L_12;
				L_12 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_11, _stringLiteral9F10EBCE20D270FF4999A25F1E52C5E0C507BADE, NULL);
				if (L_12)
				{
					goto IL_0050_1;
				}
			}
			{
				goto IL_0063_1;
			}

IL_003d_1:
			{
				// instance.name = reader.Read<string>(ES3Type_string.Instance);
				Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* L_13 = V_0;
				ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_14 = ___reader0;
				ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_15 = ((ES3Type_string_t0C89CCA6F02AF5B46E66DEF92E77FCEC83C2F068_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_string_t0C89CCA6F02AF5B46E66DEF92E77FCEC83C2F068_il2cpp_TypeInfo_var))->___Instance_12;
				NullCheck(L_14);
				String_t* L_16;
				L_16 = GenericVirtualFuncInvoker1< String_t*, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisString_t_mE83D478C999E69292DB9310C2993B1EE7DD28021_RuntimeMethod_var, L_14, L_15);
				NullCheck((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)L_13);
				Object_set_name_mC79E6DC8FFD72479C90F0C4CC7F42A0FEAF5AE47((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)L_13, L_16, NULL);
				// break;
				goto IL_0069_1;
			}

IL_0050_1:
			{
				// instance.maximumLOD = reader.Read<System.Int32>(ES3Type_int.Instance);
				Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* L_17 = V_0;
				ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_18 = ___reader0;
				ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_19 = ((ES3Type_int_t05A5E7A96442F23CE33E24A71CD349372A70E0C3_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_int_t05A5E7A96442F23CE33E24A71CD349372A70E0C3_il2cpp_TypeInfo_var))->___Instance_12;
				NullCheck(L_18);
				int32_t L_20;
				L_20 = GenericVirtualFuncInvoker1< int32_t, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mEFCC4D52DD5B822D3561A53591AE11CDB25CDB6F_RuntimeMethod_var, L_18, L_19);
				NullCheck(L_17);
				Shader_set_maximumLOD_mC07203B1137E60D0E80E8BB991A37435220D4CE8(L_17, L_20, NULL);
				// break;
				goto IL_0069_1;
			}

IL_0063_1:
			{
				// reader.Skip();
				ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_21 = ___reader0;
				NullCheck(L_21);
				VirtualActionInvoker0::Invoke(41 /* System.Void ES3Reader::Skip() */, L_21);
			}

IL_0069_1:
			{
				// foreach(string propertyName in reader.Properties)
				RuntimeObject* L_22 = V_1;
				NullCheck(L_22);
				bool L_23;
				L_23 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_22);
				if (L_23)
				{
					goto IL_0015_1;
				}
			}
			{
				goto IL_0084;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0084:
	{
		// }
		return;
	}
}
// System.Void ES3Types.ES3Type_Shader::ReadInto<UnityEngine.ParticleSystem/MainModule>(ES3Reader,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ES3Type_Shader_ReadInto_TisMainModule_tC7ECD8330C14B0808478A748048988A6085CE2A9_mD16C22ECAE0115CC6F2991B73E9AC13734794A8B_gshared (ES3Type_Shader_tAAA1785794F9B9772B20B61B2E57552BF02A4EDA* __this, ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* ___reader0, RuntimeObject* ___obj1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mEFCC4D52DD5B822D3561A53591AE11CDB25CDB6F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisString_t_mE83D478C999E69292DB9310C2993B1EE7DD28021_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_int_t05A5E7A96442F23CE33E24A71CD349372A70E0C3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_string_t0C89CCA6F02AF5B46E66DEF92E77FCEC83C2F068_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9F10EBCE20D270FF4999A25F1E52C5E0C507BADE);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCE18B047107AA23D1AA9B2ED32D316148E02655F);
		s_Il2CppMethodInitialized = true;
	}
	Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	String_t* V_2 = NULL;
	RuntimeObject* V_3 = NULL;
	{
		// var instance = (UnityEngine.Shader)obj;
		RuntimeObject* L_0 = ___obj1;
		V_0 = ((Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692*)CastclassSealed((RuntimeObject*)L_0, Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692_il2cpp_TypeInfo_var));
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

FINALLY_0073:
			{// begin finally (depth: 1)
				{
					RuntimeObject* L_4 = V_1;
					V_3 = ((RuntimeObject*)IsInst((RuntimeObject*)L_4, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var));
					RuntimeObject* L_5 = V_3;
					if (!L_5)
					{
						goto IL_0083;
					}
				}
				{
					RuntimeObject* L_6 = V_3;
					NullCheck(L_6);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_6);
				}

IL_0083:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0069_1;
			}

IL_0015_1:
			{
				// foreach(string propertyName in reader.Properties)
				RuntimeObject* L_7 = V_1;
				NullCheck(L_7);
				RuntimeObject* L_8;
				L_8 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(1 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_7);
				V_2 = ((String_t*)CastclassSealed((RuntimeObject*)L_8, String_t_il2cpp_TypeInfo_var));
				String_t* L_9 = V_2;
				bool L_10;
				L_10 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_9, _stringLiteralCE18B047107AA23D1AA9B2ED32D316148E02655F, NULL);
				if (L_10)
				{
					goto IL_003d_1;
				}
			}
			{
				String_t* L_11 = V_2;
				bool L_12;
				L_12 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_11, _stringLiteral9F10EBCE20D270FF4999A25F1E52C5E0C507BADE, NULL);
				if (L_12)
				{
					goto IL_0050_1;
				}
			}
			{
				goto IL_0063_1;
			}

IL_003d_1:
			{
				// instance.name = reader.Read<string>(ES3Type_string.Instance);
				Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* L_13 = V_0;
				ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_14 = ___reader0;
				ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_15 = ((ES3Type_string_t0C89CCA6F02AF5B46E66DEF92E77FCEC83C2F068_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_string_t0C89CCA6F02AF5B46E66DEF92E77FCEC83C2F068_il2cpp_TypeInfo_var))->___Instance_12;
				NullCheck(L_14);
				String_t* L_16;
				L_16 = GenericVirtualFuncInvoker1< String_t*, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisString_t_mE83D478C999E69292DB9310C2993B1EE7DD28021_RuntimeMethod_var, L_14, L_15);
				NullCheck((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)L_13);
				Object_set_name_mC79E6DC8FFD72479C90F0C4CC7F42A0FEAF5AE47((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)L_13, L_16, NULL);
				// break;
				goto IL_0069_1;
			}

IL_0050_1:
			{
				// instance.maximumLOD = reader.Read<System.Int32>(ES3Type_int.Instance);
				Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* L_17 = V_0;
				ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_18 = ___reader0;
				ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_19 = ((ES3Type_int_t05A5E7A96442F23CE33E24A71CD349372A70E0C3_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_int_t05A5E7A96442F23CE33E24A71CD349372A70E0C3_il2cpp_TypeInfo_var))->___Instance_12;
				NullCheck(L_18);
				int32_t L_20;
				L_20 = GenericVirtualFuncInvoker1< int32_t, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mEFCC4D52DD5B822D3561A53591AE11CDB25CDB6F_RuntimeMethod_var, L_18, L_19);
				NullCheck(L_17);
				Shader_set_maximumLOD_mC07203B1137E60D0E80E8BB991A37435220D4CE8(L_17, L_20, NULL);
				// break;
				goto IL_0069_1;
			}

IL_0063_1:
			{
				// reader.Skip();
				ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_21 = ___reader0;
				NullCheck(L_21);
				VirtualActionInvoker0::Invoke(41 /* System.Void ES3Reader::Skip() */, L_21);
			}

IL_0069_1:
			{
				// foreach(string propertyName in reader.Properties)
				RuntimeObject* L_22 = V_1;
				NullCheck(L_22);
				bool L_23;
				L_23 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_22);
				if (L_23)
				{
					goto IL_0015_1;
				}
			}
			{
				goto IL_0084;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0084:
	{
		// }
		return;
	}
}
// System.Void ES3Types.ES3Type_Shader::ReadInto<UnityEngine.ParticleSystem/NoiseModule>(ES3Reader,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ES3Type_Shader_ReadInto_TisNoiseModule_tF8D6CB544A887C0C93D05A228B65E41DBD1F3AE0_m451247F5D376AAEA88D119EF4063817706107BB0_gshared (ES3Type_Shader_tAAA1785794F9B9772B20B61B2E57552BF02A4EDA* __this, ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* ___reader0, RuntimeObject* ___obj1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mEFCC4D52DD5B822D3561A53591AE11CDB25CDB6F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisString_t_mE83D478C999E69292DB9310C2993B1EE7DD28021_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_int_t05A5E7A96442F23CE33E24A71CD349372A70E0C3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_string_t0C89CCA6F02AF5B46E66DEF92E77FCEC83C2F068_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9F10EBCE20D270FF4999A25F1E52C5E0C507BADE);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCE18B047107AA23D1AA9B2ED32D316148E02655F);
		s_Il2CppMethodInitialized = true;
	}
	Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	String_t* V_2 = NULL;
	RuntimeObject* V_3 = NULL;
	{
		// var instance = (UnityEngine.Shader)obj;
		RuntimeObject* L_0 = ___obj1;
		V_0 = ((Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692*)CastclassSealed((RuntimeObject*)L_0, Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692_il2cpp_TypeInfo_var));
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

FINALLY_0073:
			{// begin finally (depth: 1)
				{
					RuntimeObject* L_4 = V_1;
					V_3 = ((RuntimeObject*)IsInst((RuntimeObject*)L_4, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var));
					RuntimeObject* L_5 = V_3;
					if (!L_5)
					{
						goto IL_0083;
					}
				}
				{
					RuntimeObject* L_6 = V_3;
					NullCheck(L_6);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_6);
				}

IL_0083:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0069_1;
			}

IL_0015_1:
			{
				// foreach(string propertyName in reader.Properties)
				RuntimeObject* L_7 = V_1;
				NullCheck(L_7);
				RuntimeObject* L_8;
				L_8 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(1 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_7);
				V_2 = ((String_t*)CastclassSealed((RuntimeObject*)L_8, String_t_il2cpp_TypeInfo_var));
				String_t* L_9 = V_2;
				bool L_10;
				L_10 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_9, _stringLiteralCE18B047107AA23D1AA9B2ED32D316148E02655F, NULL);
				if (L_10)
				{
					goto IL_003d_1;
				}
			}
			{
				String_t* L_11 = V_2;
				bool L_12;
				L_12 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_11, _stringLiteral9F10EBCE20D270FF4999A25F1E52C5E0C507BADE, NULL);
				if (L_12)
				{
					goto IL_0050_1;
				}
			}
			{
				goto IL_0063_1;
			}

IL_003d_1:
			{
				// instance.name = reader.Read<string>(ES3Type_string.Instance);
				Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* L_13 = V_0;
				ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_14 = ___reader0;
				ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_15 = ((ES3Type_string_t0C89CCA6F02AF5B46E66DEF92E77FCEC83C2F068_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_string_t0C89CCA6F02AF5B46E66DEF92E77FCEC83C2F068_il2cpp_TypeInfo_var))->___Instance_12;
				NullCheck(L_14);
				String_t* L_16;
				L_16 = GenericVirtualFuncInvoker1< String_t*, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisString_t_mE83D478C999E69292DB9310C2993B1EE7DD28021_RuntimeMethod_var, L_14, L_15);
				NullCheck((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)L_13);
				Object_set_name_mC79E6DC8FFD72479C90F0C4CC7F42A0FEAF5AE47((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)L_13, L_16, NULL);
				// break;
				goto IL_0069_1;
			}

IL_0050_1:
			{
				// instance.maximumLOD = reader.Read<System.Int32>(ES3Type_int.Instance);
				Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* L_17 = V_0;
				ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_18 = ___reader0;
				ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_19 = ((ES3Type_int_t05A5E7A96442F23CE33E24A71CD349372A70E0C3_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_int_t05A5E7A96442F23CE33E24A71CD349372A70E0C3_il2cpp_TypeInfo_var))->___Instance_12;
				NullCheck(L_18);
				int32_t L_20;
				L_20 = GenericVirtualFuncInvoker1< int32_t, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mEFCC4D52DD5B822D3561A53591AE11CDB25CDB6F_RuntimeMethod_var, L_18, L_19);
				NullCheck(L_17);
				Shader_set_maximumLOD_mC07203B1137E60D0E80E8BB991A37435220D4CE8(L_17, L_20, NULL);
				// break;
				goto IL_0069_1;
			}

IL_0063_1:
			{
				// reader.Skip();
				ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_21 = ___reader0;
				NullCheck(L_21);
				VirtualActionInvoker0::Invoke(41 /* System.Void ES3Reader::Skip() */, L_21);
			}

IL_0069_1:
			{
				// foreach(string propertyName in reader.Properties)
				RuntimeObject* L_22 = V_1;
				NullCheck(L_22);
				bool L_23;
				L_23 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_22);
				if (L_23)
				{
					goto IL_0015_1;
				}
			}
			{
				goto IL_0084;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0084:
	{
		// }
		return;
	}
}
// System.Void ES3Types.ES3Type_Shader::ReadInto<UnityEngine.ParticleSystem/RotationBySpeedModule>(ES3Reader,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ES3Type_Shader_ReadInto_TisRotationBySpeedModule_tBCB7E7C1B402D1492310016D5F8FBBA4C15C26A6_m54727FB30D7A62D3639E817351195C4140B79F3D_gshared (ES3Type_Shader_tAAA1785794F9B9772B20B61B2E57552BF02A4EDA* __this, ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* ___reader0, RuntimeObject* ___obj1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mEFCC4D52DD5B822D3561A53591AE11CDB25CDB6F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisString_t_mE83D478C999E69292DB9310C2993B1EE7DD28021_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_int_t05A5E7A96442F23CE33E24A71CD349372A70E0C3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_string_t0C89CCA6F02AF5B46E66DEF92E77FCEC83C2F068_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9F10EBCE20D270FF4999A25F1E52C5E0C507BADE);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCE18B047107AA23D1AA9B2ED32D316148E02655F);
		s_Il2CppMethodInitialized = true;
	}
	Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	String_t* V_2 = NULL;
	RuntimeObject* V_3 = NULL;
	{
		// var instance = (UnityEngine.Shader)obj;
		RuntimeObject* L_0 = ___obj1;
		V_0 = ((Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692*)CastclassSealed((RuntimeObject*)L_0, Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692_il2cpp_TypeInfo_var));
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

FINALLY_0073:
			{// begin finally (depth: 1)
				{
					RuntimeObject* L_4 = V_1;
					V_3 = ((RuntimeObject*)IsInst((RuntimeObject*)L_4, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var));
					RuntimeObject* L_5 = V_3;
					if (!L_5)
					{
						goto IL_0083;
					}
				}
				{
					RuntimeObject* L_6 = V_3;
					NullCheck(L_6);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_6);
				}

IL_0083:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0069_1;
			}

IL_0015_1:
			{
				// foreach(string propertyName in reader.Properties)
				RuntimeObject* L_7 = V_1;
				NullCheck(L_7);
				RuntimeObject* L_8;
				L_8 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(1 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_7);
				V_2 = ((String_t*)CastclassSealed((RuntimeObject*)L_8, String_t_il2cpp_TypeInfo_var));
				String_t* L_9 = V_2;
				bool L_10;
				L_10 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_9, _stringLiteralCE18B047107AA23D1AA9B2ED32D316148E02655F, NULL);
				if (L_10)
				{
					goto IL_003d_1;
				}
			}
			{
				String_t* L_11 = V_2;
				bool L_12;
				L_12 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_11, _stringLiteral9F10EBCE20D270FF4999A25F1E52C5E0C507BADE, NULL);
				if (L_12)
				{
					goto IL_0050_1;
				}
			}
			{
				goto IL_0063_1;
			}

IL_003d_1:
			{
				// instance.name = reader.Read<string>(ES3Type_string.Instance);
				Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* L_13 = V_0;
				ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_14 = ___reader0;
				ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_15 = ((ES3Type_string_t0C89CCA6F02AF5B46E66DEF92E77FCEC83C2F068_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_string_t0C89CCA6F02AF5B46E66DEF92E77FCEC83C2F068_il2cpp_TypeInfo_var))->___Instance_12;
				NullCheck(L_14);
				String_t* L_16;
				L_16 = GenericVirtualFuncInvoker1< String_t*, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisString_t_mE83D478C999E69292DB9310C2993B1EE7DD28021_RuntimeMethod_var, L_14, L_15);
				NullCheck((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)L_13);
				Object_set_name_mC79E6DC8FFD72479C90F0C4CC7F42A0FEAF5AE47((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)L_13, L_16, NULL);
				// break;
				goto IL_0069_1;
			}

IL_0050_1:
			{
				// instance.maximumLOD = reader.Read<System.Int32>(ES3Type_int.Instance);
				Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* L_17 = V_0;
				ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_18 = ___reader0;
				ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_19 = ((ES3Type_int_t05A5E7A96442F23CE33E24A71CD349372A70E0C3_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_int_t05A5E7A96442F23CE33E24A71CD349372A70E0C3_il2cpp_TypeInfo_var))->___Instance_12;
				NullCheck(L_18);
				int32_t L_20;
				L_20 = GenericVirtualFuncInvoker1< int32_t, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mEFCC4D52DD5B822D3561A53591AE11CDB25CDB6F_RuntimeMethod_var, L_18, L_19);
				NullCheck(L_17);
				Shader_set_maximumLOD_mC07203B1137E60D0E80E8BB991A37435220D4CE8(L_17, L_20, NULL);
				// break;
				goto IL_0069_1;
			}

IL_0063_1:
			{
				// reader.Skip();
				ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_21 = ___reader0;
				NullCheck(L_21);
				VirtualActionInvoker0::Invoke(41 /* System.Void ES3Reader::Skip() */, L_21);
			}

IL_0069_1:
			{
				// foreach(string propertyName in reader.Properties)
				RuntimeObject* L_22 = V_1;
				NullCheck(L_22);
				bool L_23;
				L_23 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_22);
				if (L_23)
				{
					goto IL_0015_1;
				}
			}
			{
				goto IL_0084;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0084:
	{
		// }
		return;
	}
}
// System.Void ES3Types.ES3Type_Shader::ReadInto<UnityEngine.ParticleSystem/RotationOverLifetimeModule>(ES3Reader,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ES3Type_Shader_ReadInto_TisRotationOverLifetimeModule_tEE08858451167B6DDE6DD36FDCF11E74C77D79E6_m36CDB034CD4F0DF038F2480D7E384282795264FB_gshared (ES3Type_Shader_tAAA1785794F9B9772B20B61B2E57552BF02A4EDA* __this, ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* ___reader0, RuntimeObject* ___obj1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mEFCC4D52DD5B822D3561A53591AE11CDB25CDB6F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisString_t_mE83D478C999E69292DB9310C2993B1EE7DD28021_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_int_t05A5E7A96442F23CE33E24A71CD349372A70E0C3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_string_t0C89CCA6F02AF5B46E66DEF92E77FCEC83C2F068_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9F10EBCE20D270FF4999A25F1E52C5E0C507BADE);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCE18B047107AA23D1AA9B2ED32D316148E02655F);
		s_Il2CppMethodInitialized = true;
	}
	Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	String_t* V_2 = NULL;
	RuntimeObject* V_3 = NULL;
	{
		// var instance = (UnityEngine.Shader)obj;
		RuntimeObject* L_0 = ___obj1;
		V_0 = ((Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692*)CastclassSealed((RuntimeObject*)L_0, Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692_il2cpp_TypeInfo_var));
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

FINALLY_0073:
			{// begin finally (depth: 1)
				{
					RuntimeObject* L_4 = V_1;
					V_3 = ((RuntimeObject*)IsInst((RuntimeObject*)L_4, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var));
					RuntimeObject* L_5 = V_3;
					if (!L_5)
					{
						goto IL_0083;
					}
				}
				{
					RuntimeObject* L_6 = V_3;
					NullCheck(L_6);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_6);
				}

IL_0083:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0069_1;
			}

IL_0015_1:
			{
				// foreach(string propertyName in reader.Properties)
				RuntimeObject* L_7 = V_1;
				NullCheck(L_7);
				RuntimeObject* L_8;
				L_8 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(1 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_7);
				V_2 = ((String_t*)CastclassSealed((RuntimeObject*)L_8, String_t_il2cpp_TypeInfo_var));
				String_t* L_9 = V_2;
				bool L_10;
				L_10 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_9, _stringLiteralCE18B047107AA23D1AA9B2ED32D316148E02655F, NULL);
				if (L_10)
				{
					goto IL_003d_1;
				}
			}
			{
				String_t* L_11 = V_2;
				bool L_12;
				L_12 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_11, _stringLiteral9F10EBCE20D270FF4999A25F1E52C5E0C507BADE, NULL);
				if (L_12)
				{
					goto IL_0050_1;
				}
			}
			{
				goto IL_0063_1;
			}

IL_003d_1:
			{
				// instance.name = reader.Read<string>(ES3Type_string.Instance);
				Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* L_13 = V_0;
				ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_14 = ___reader0;
				ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_15 = ((ES3Type_string_t0C89CCA6F02AF5B46E66DEF92E77FCEC83C2F068_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_string_t0C89CCA6F02AF5B46E66DEF92E77FCEC83C2F068_il2cpp_TypeInfo_var))->___Instance_12;
				NullCheck(L_14);
				String_t* L_16;
				L_16 = GenericVirtualFuncInvoker1< String_t*, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisString_t_mE83D478C999E69292DB9310C2993B1EE7DD28021_RuntimeMethod_var, L_14, L_15);
				NullCheck((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)L_13);
				Object_set_name_mC79E6DC8FFD72479C90F0C4CC7F42A0FEAF5AE47((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)L_13, L_16, NULL);
				// break;
				goto IL_0069_1;
			}

IL_0050_1:
			{
				// instance.maximumLOD = reader.Read<System.Int32>(ES3Type_int.Instance);
				Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* L_17 = V_0;
				ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_18 = ___reader0;
				ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_19 = ((ES3Type_int_t05A5E7A96442F23CE33E24A71CD349372A70E0C3_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_int_t05A5E7A96442F23CE33E24A71CD349372A70E0C3_il2cpp_TypeInfo_var))->___Instance_12;
				NullCheck(L_18);
				int32_t L_20;
				L_20 = GenericVirtualFuncInvoker1< int32_t, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mEFCC4D52DD5B822D3561A53591AE11CDB25CDB6F_RuntimeMethod_var, L_18, L_19);
				NullCheck(L_17);
				Shader_set_maximumLOD_mC07203B1137E60D0E80E8BB991A37435220D4CE8(L_17, L_20, NULL);
				// break;
				goto IL_0069_1;
			}

IL_0063_1:
			{
				// reader.Skip();
				ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_21 = ___reader0;
				NullCheck(L_21);
				VirtualActionInvoker0::Invoke(41 /* System.Void ES3Reader::Skip() */, L_21);
			}

IL_0069_1:
			{
				// foreach(string propertyName in reader.Properties)
				RuntimeObject* L_22 = V_1;
				NullCheck(L_22);
				bool L_23;
				L_23 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_22);
				if (L_23)
				{
					goto IL_0015_1;
				}
			}
			{
				goto IL_0084;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0084:
	{
		// }
		return;
	}
}
// System.Void ES3Types.ES3Type_Shader::ReadInto<UnityEngine.ParticleSystem/SubEmittersModule>(ES3Reader,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ES3Type_Shader_ReadInto_TisSubEmittersModule_t94F5AD231EAFB50A16E697186A630B07BF8B949B_m4C19E35B70DAD5E888E4072C745D8C4B1B873667_gshared (ES3Type_Shader_tAAA1785794F9B9772B20B61B2E57552BF02A4EDA* __this, ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* ___reader0, RuntimeObject* ___obj1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mEFCC4D52DD5B822D3561A53591AE11CDB25CDB6F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisString_t_mE83D478C999E69292DB9310C2993B1EE7DD28021_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_int_t05A5E7A96442F23CE33E24A71CD349372A70E0C3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_string_t0C89CCA6F02AF5B46E66DEF92E77FCEC83C2F068_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9F10EBCE20D270FF4999A25F1E52C5E0C507BADE);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCE18B047107AA23D1AA9B2ED32D316148E02655F);
		s_Il2CppMethodInitialized = true;
	}
	Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	String_t* V_2 = NULL;
	RuntimeObject* V_3 = NULL;
	{
		// var instance = (UnityEngine.Shader)obj;
		RuntimeObject* L_0 = ___obj1;
		V_0 = ((Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692*)CastclassSealed((RuntimeObject*)L_0, Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692_il2cpp_TypeInfo_var));
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

FINALLY_0073:
			{// begin finally (depth: 1)
				{
					RuntimeObject* L_4 = V_1;
					V_3 = ((RuntimeObject*)IsInst((RuntimeObject*)L_4, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var));
					RuntimeObject* L_5 = V_3;
					if (!L_5)
					{
						goto IL_0083;
					}
				}
				{
					RuntimeObject* L_6 = V_3;
					NullCheck(L_6);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_6);
				}

IL_0083:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0069_1;
			}

IL_0015_1:
			{
				// foreach(string propertyName in reader.Properties)
				RuntimeObject* L_7 = V_1;
				NullCheck(L_7);
				RuntimeObject* L_8;
				L_8 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(1 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_7);
				V_2 = ((String_t*)CastclassSealed((RuntimeObject*)L_8, String_t_il2cpp_TypeInfo_var));
				String_t* L_9 = V_2;
				bool L_10;
				L_10 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_9, _stringLiteralCE18B047107AA23D1AA9B2ED32D316148E02655F, NULL);
				if (L_10)
				{
					goto IL_003d_1;
				}
			}
			{
				String_t* L_11 = V_2;
				bool L_12;
				L_12 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_11, _stringLiteral9F10EBCE20D270FF4999A25F1E52C5E0C507BADE, NULL);
				if (L_12)
				{
					goto IL_0050_1;
				}
			}
			{
				goto IL_0063_1;
			}

IL_003d_1:
			{
				// instance.name = reader.Read<string>(ES3Type_string.Instance);
				Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* L_13 = V_0;
				ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_14 = ___reader0;
				ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_15 = ((ES3Type_string_t0C89CCA6F02AF5B46E66DEF92E77FCEC83C2F068_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_string_t0C89CCA6F02AF5B46E66DEF92E77FCEC83C2F068_il2cpp_TypeInfo_var))->___Instance_12;
				NullCheck(L_14);
				String_t* L_16;
				L_16 = GenericVirtualFuncInvoker1< String_t*, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisString_t_mE83D478C999E69292DB9310C2993B1EE7DD28021_RuntimeMethod_var, L_14, L_15);
				NullCheck((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)L_13);
				Object_set_name_mC79E6DC8FFD72479C90F0C4CC7F42A0FEAF5AE47((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)L_13, L_16, NULL);
				// break;
				goto IL_0069_1;
			}

IL_0050_1:
			{
				// instance.maximumLOD = reader.Read<System.Int32>(ES3Type_int.Instance);
				Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* L_17 = V_0;
				ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_18 = ___reader0;
				ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_19 = ((ES3Type_int_t05A5E7A96442F23CE33E24A71CD349372A70E0C3_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_int_t05A5E7A96442F23CE33E24A71CD349372A70E0C3_il2cpp_TypeInfo_var))->___Instance_12;
				NullCheck(L_18);
				int32_t L_20;
				L_20 = GenericVirtualFuncInvoker1< int32_t, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mEFCC4D52DD5B822D3561A53591AE11CDB25CDB6F_RuntimeMethod_var, L_18, L_19);
				NullCheck(L_17);
				Shader_set_maximumLOD_mC07203B1137E60D0E80E8BB991A37435220D4CE8(L_17, L_20, NULL);
				// break;
				goto IL_0069_1;
			}

IL_0063_1:
			{
				// reader.Skip();
				ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_21 = ___reader0;
				NullCheck(L_21);
				VirtualActionInvoker0::Invoke(41 /* System.Void ES3Reader::Skip() */, L_21);
			}

IL_0069_1:
			{
				// foreach(string propertyName in reader.Properties)
				RuntimeObject* L_22 = V_1;
				NullCheck(L_22);
				bool L_23;
				L_23 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_22);
				if (L_23)
				{
					goto IL_0015_1;
				}
			}
			{
				goto IL_0084;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0084:
	{
		// }
		return;
	}
}
// System.Void ES3Types.ES3Type_Shader::ReadInto<UnityEngine.ParticleSystem/TextureSheetAnimationModule>(ES3Reader,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ES3Type_Shader_ReadInto_TisTextureSheetAnimationModule_tB53F451F252E24ACC3EF80D770DB4FBE1A13D1F6_mC367AE48E1D52F02544F78FBC586E84A2FB44AE9_gshared (ES3Type_Shader_tAAA1785794F9B9772B20B61B2E57552BF02A4EDA* __this, ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* ___reader0, RuntimeObject* ___obj1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mEFCC4D52DD5B822D3561A53591AE11CDB25CDB6F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisString_t_mE83D478C999E69292DB9310C2993B1EE7DD28021_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_int_t05A5E7A96442F23CE33E24A71CD349372A70E0C3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_string_t0C89CCA6F02AF5B46E66DEF92E77FCEC83C2F068_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9F10EBCE20D270FF4999A25F1E52C5E0C507BADE);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCE18B047107AA23D1AA9B2ED32D316148E02655F);
		s_Il2CppMethodInitialized = true;
	}
	Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	String_t* V_2 = NULL;
	RuntimeObject* V_3 = NULL;
	{
		// var instance = (UnityEngine.Shader)obj;
		RuntimeObject* L_0 = ___obj1;
		V_0 = ((Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692*)CastclassSealed((RuntimeObject*)L_0, Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692_il2cpp_TypeInfo_var));
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

FINALLY_0073:
			{// begin finally (depth: 1)
				{
					RuntimeObject* L_4 = V_1;
					V_3 = ((RuntimeObject*)IsInst((RuntimeObject*)L_4, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var));
					RuntimeObject* L_5 = V_3;
					if (!L_5)
					{
						goto IL_0083;
					}
				}
				{
					RuntimeObject* L_6 = V_3;
					NullCheck(L_6);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_6);
				}

IL_0083:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0069_1;
			}

IL_0015_1:
			{
				// foreach(string propertyName in reader.Properties)
				RuntimeObject* L_7 = V_1;
				NullCheck(L_7);
				RuntimeObject* L_8;
				L_8 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(1 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_7);
				V_2 = ((String_t*)CastclassSealed((RuntimeObject*)L_8, String_t_il2cpp_TypeInfo_var));
				String_t* L_9 = V_2;
				bool L_10;
				L_10 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_9, _stringLiteralCE18B047107AA23D1AA9B2ED32D316148E02655F, NULL);
				if (L_10)
				{
					goto IL_003d_1;
				}
			}
			{
				String_t* L_11 = V_2;
				bool L_12;
				L_12 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_11, _stringLiteral9F10EBCE20D270FF4999A25F1E52C5E0C507BADE, NULL);
				if (L_12)
				{
					goto IL_0050_1;
				}
			}
			{
				goto IL_0063_1;
			}

IL_003d_1:
			{
				// instance.name = reader.Read<string>(ES3Type_string.Instance);
				Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* L_13 = V_0;
				ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_14 = ___reader0;
				ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_15 = ((ES3Type_string_t0C89CCA6F02AF5B46E66DEF92E77FCEC83C2F068_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_string_t0C89CCA6F02AF5B46E66DEF92E77FCEC83C2F068_il2cpp_TypeInfo_var))->___Instance_12;
				NullCheck(L_14);
				String_t* L_16;
				L_16 = GenericVirtualFuncInvoker1< String_t*, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisString_t_mE83D478C999E69292DB9310C2993B1EE7DD28021_RuntimeMethod_var, L_14, L_15);
				NullCheck((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)L_13);
				Object_set_name_mC79E6DC8FFD72479C90F0C4CC7F42A0FEAF5AE47((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)L_13, L_16, NULL);
				// break;
				goto IL_0069_1;
			}

IL_0050_1:
			{
				// instance.maximumLOD = reader.Read<System.Int32>(ES3Type_int.Instance);
				Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* L_17 = V_0;
				ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_18 = ___reader0;
				ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_19 = ((ES3Type_int_t05A5E7A96442F23CE33E24A71CD349372A70E0C3_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_int_t05A5E7A96442F23CE33E24A71CD349372A70E0C3_il2cpp_TypeInfo_var))->___Instance_12;
				NullCheck(L_18);
				int32_t L_20;
				L_20 = GenericVirtualFuncInvoker1< int32_t, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mEFCC4D52DD5B822D3561A53591AE11CDB25CDB6F_RuntimeMethod_var, L_18, L_19);
				NullCheck(L_17);
				Shader_set_maximumLOD_mC07203B1137E60D0E80E8BB991A37435220D4CE8(L_17, L_20, NULL);
				// break;
				goto IL_0069_1;
			}

IL_0063_1:
			{
				// reader.Skip();
				ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_21 = ___reader0;
				NullCheck(L_21);
				VirtualActionInvoker0::Invoke(41 /* System.Void ES3Reader::Skip() */, L_21);
			}

IL_0069_1:
			{
				// foreach(string propertyName in reader.Properties)
				RuntimeObject* L_22 = V_1;
				NullCheck(L_22);
				bool L_23;
				L_23 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_22);
				if (L_23)
				{
					goto IL_0015_1;
				}
			}
			{
				goto IL_0084;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0084:
	{
		// }
		return;
	}
}
// System.Void ES3Types.ES3Type_Shader::ReadInto<UnityEngine.ParticleSystem/TrailModule>(ES3Reader,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ES3Type_Shader_ReadInto_TisTrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D_m368C22FC552712F9F5E446C394E8418B6E82CF27_gshared (ES3Type_Shader_tAAA1785794F9B9772B20B61B2E57552BF02A4EDA* __this, ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* ___reader0, RuntimeObject* ___obj1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mEFCC4D52DD5B822D3561A53591AE11CDB25CDB6F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisString_t_mE83D478C999E69292DB9310C2993B1EE7DD28021_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_int_t05A5E7A96442F23CE33E24A71CD349372A70E0C3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_string_t0C89CCA6F02AF5B46E66DEF92E77FCEC83C2F068_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9F10EBCE20D270FF4999A25F1E52C5E0C507BADE);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCE18B047107AA23D1AA9B2ED32D316148E02655F);
		s_Il2CppMethodInitialized = true;
	}
	Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	String_t* V_2 = NULL;
	RuntimeObject* V_3 = NULL;
	{
		// var instance = (UnityEngine.Shader)obj;
		RuntimeObject* L_0 = ___obj1;
		V_0 = ((Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692*)CastclassSealed((RuntimeObject*)L_0, Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692_il2cpp_TypeInfo_var));
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

FINALLY_0073:
			{// begin finally (depth: 1)
				{
					RuntimeObject* L_4 = V_1;
					V_3 = ((RuntimeObject*)IsInst((RuntimeObject*)L_4, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var));
					RuntimeObject* L_5 = V_3;
					if (!L_5)
					{
						goto IL_0083;
					}
				}
				{
					RuntimeObject* L_6 = V_3;
					NullCheck(L_6);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_6);
				}

IL_0083:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0069_1;
			}

IL_0015_1:
			{
				// foreach(string propertyName in reader.Properties)
				RuntimeObject* L_7 = V_1;
				NullCheck(L_7);
				RuntimeObject* L_8;
				L_8 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(1 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_7);
				V_2 = ((String_t*)CastclassSealed((RuntimeObject*)L_8, String_t_il2cpp_TypeInfo_var));
				String_t* L_9 = V_2;
				bool L_10;
				L_10 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_9, _stringLiteralCE18B047107AA23D1AA9B2ED32D316148E02655F, NULL);
				if (L_10)
				{
					goto IL_003d_1;
				}
			}
			{
				String_t* L_11 = V_2;
				bool L_12;
				L_12 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_11, _stringLiteral9F10EBCE20D270FF4999A25F1E52C5E0C507BADE, NULL);
				if (L_12)
				{
					goto IL_0050_1;
				}
			}
			{
				goto IL_0063_1;
			}

IL_003d_1:
			{
				// instance.name = reader.Read<string>(ES3Type_string.Instance);
				Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* L_13 = V_0;
				ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_14 = ___reader0;
				ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_15 = ((ES3Type_string_t0C89CCA6F02AF5B46E66DEF92E77FCEC83C2F068_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_string_t0C89CCA6F02AF5B46E66DEF92E77FCEC83C2F068_il2cpp_TypeInfo_var))->___Instance_12;
				NullCheck(L_14);
				String_t* L_16;
				L_16 = GenericVirtualFuncInvoker1< String_t*, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisString_t_mE83D478C999E69292DB9310C2993B1EE7DD28021_RuntimeMethod_var, L_14, L_15);
				NullCheck((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)L_13);
				Object_set_name_mC79E6DC8FFD72479C90F0C4CC7F42A0FEAF5AE47((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)L_13, L_16, NULL);
				// break;
				goto IL_0069_1;
			}

IL_0050_1:
			{
				// instance.maximumLOD = reader.Read<System.Int32>(ES3Type_int.Instance);
				Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* L_17 = V_0;
				ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_18 = ___reader0;
				ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_19 = ((ES3Type_int_t05A5E7A96442F23CE33E24A71CD349372A70E0C3_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_int_t05A5E7A96442F23CE33E24A71CD349372A70E0C3_il2cpp_TypeInfo_var))->___Instance_12;
				NullCheck(L_18);
				int32_t L_20;
				L_20 = GenericVirtualFuncInvoker1< int32_t, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mEFCC4D52DD5B822D3561A53591AE11CDB25CDB6F_RuntimeMethod_var, L_18, L_19);
				NullCheck(L_17);
				Shader_set_maximumLOD_mC07203B1137E60D0E80E8BB991A37435220D4CE8(L_17, L_20, NULL);
				// break;
				goto IL_0069_1;
			}

IL_0063_1:
			{
				// reader.Skip();
				ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_21 = ___reader0;
				NullCheck(L_21);
				VirtualActionInvoker0::Invoke(41 /* System.Void ES3Reader::Skip() */, L_21);
			}

IL_0069_1:
			{
				// foreach(string propertyName in reader.Properties)
				RuntimeObject* L_22 = V_1;
				NullCheck(L_22);
				bool L_23;
				L_23 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_22);
				if (L_23)
				{
					goto IL_0015_1;
				}
			}
			{
				goto IL_0084;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0084:
	{
		// }
		return;
	}
}
// System.Void ES3Types.ES3Type_Shader::ReadInto<UnityEngine.ParticleSystem/TriggerModule>(ES3Reader,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ES3Type_Shader_ReadInto_TisTriggerModule_tDEE844919206259DA831ADCA3B1B2D915CB767B1_mA739803842C5B6655EE15F2DF4E93328FA437194_gshared (ES3Type_Shader_tAAA1785794F9B9772B20B61B2E57552BF02A4EDA* __this, ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* ___reader0, RuntimeObject* ___obj1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mEFCC4D52DD5B822D3561A53591AE11CDB25CDB6F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisString_t_mE83D478C999E69292DB9310C2993B1EE7DD28021_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_int_t05A5E7A96442F23CE33E24A71CD349372A70E0C3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_string_t0C89CCA6F02AF5B46E66DEF92E77FCEC83C2F068_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9F10EBCE20D270FF4999A25F1E52C5E0C507BADE);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCE18B047107AA23D1AA9B2ED32D316148E02655F);
		s_Il2CppMethodInitialized = true;
	}
	Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	String_t* V_2 = NULL;
	RuntimeObject* V_3 = NULL;
	{
		// var instance = (UnityEngine.Shader)obj;
		RuntimeObject* L_0 = ___obj1;
		V_0 = ((Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692*)CastclassSealed((RuntimeObject*)L_0, Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692_il2cpp_TypeInfo_var));
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

FINALLY_0073:
			{// begin finally (depth: 1)
				{
					RuntimeObject* L_4 = V_1;
					V_3 = ((RuntimeObject*)IsInst((RuntimeObject*)L_4, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var));
					RuntimeObject* L_5 = V_3;
					if (!L_5)
					{
						goto IL_0083;
					}
				}
				{
					RuntimeObject* L_6 = V_3;
					NullCheck(L_6);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_6);
				}

IL_0083:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0069_1;
			}

IL_0015_1:
			{
				// foreach(string propertyName in reader.Properties)
				RuntimeObject* L_7 = V_1;
				NullCheck(L_7);
				RuntimeObject* L_8;
				L_8 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(1 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_7);
				V_2 = ((String_t*)CastclassSealed((RuntimeObject*)L_8, String_t_il2cpp_TypeInfo_var));
				String_t* L_9 = V_2;
				bool L_10;
				L_10 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_9, _stringLiteralCE18B047107AA23D1AA9B2ED32D316148E02655F, NULL);
				if (L_10)
				{
					goto IL_003d_1;
				}
			}
			{
				String_t* L_11 = V_2;
				bool L_12;
				L_12 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_11, _stringLiteral9F10EBCE20D270FF4999A25F1E52C5E0C507BADE, NULL);
				if (L_12)
				{
					goto IL_0050_1;
				}
			}
			{
				goto IL_0063_1;
			}

IL_003d_1:
			{
				// instance.name = reader.Read<string>(ES3Type_string.Instance);
				Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* L_13 = V_0;
				ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_14 = ___reader0;
				ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_15 = ((ES3Type_string_t0C89CCA6F02AF5B46E66DEF92E77FCEC83C2F068_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_string_t0C89CCA6F02AF5B46E66DEF92E77FCEC83C2F068_il2cpp_TypeInfo_var))->___Instance_12;
				NullCheck(L_14);
				String_t* L_16;
				L_16 = GenericVirtualFuncInvoker1< String_t*, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisString_t_mE83D478C999E69292DB9310C2993B1EE7DD28021_RuntimeMethod_var, L_14, L_15);
				NullCheck((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)L_13);
				Object_set_name_mC79E6DC8FFD72479C90F0C4CC7F42A0FEAF5AE47((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)L_13, L_16, NULL);
				// break;
				goto IL_0069_1;
			}

IL_0050_1:
			{
				// instance.maximumLOD = reader.Read<System.Int32>(ES3Type_int.Instance);
				Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* L_17 = V_0;
				ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_18 = ___reader0;
				ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_19 = ((ES3Type_int_t05A5E7A96442F23CE33E24A71CD349372A70E0C3_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_int_t05A5E7A96442F23CE33E24A71CD349372A70E0C3_il2cpp_TypeInfo_var))->___Instance_12;
				NullCheck(L_18);
				int32_t L_20;
				L_20 = GenericVirtualFuncInvoker1< int32_t, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mEFCC4D52DD5B822D3561A53591AE11CDB25CDB6F_RuntimeMethod_var, L_18, L_19);
				NullCheck(L_17);
				Shader_set_maximumLOD_mC07203B1137E60D0E80E8BB991A37435220D4CE8(L_17, L_20, NULL);
				// break;
				goto IL_0069_1;
			}

IL_0063_1:
			{
				// reader.Skip();
				ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_21 = ___reader0;
				NullCheck(L_21);
				VirtualActionInvoker0::Invoke(41 /* System.Void ES3Reader::Skip() */, L_21);
			}

IL_0069_1:
			{
				// foreach(string propertyName in reader.Properties)
				RuntimeObject* L_22 = V_1;
				NullCheck(L_22);
				bool L_23;
				L_23 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_22);
				if (L_23)
				{
					goto IL_0015_1;
				}
			}
			{
				goto IL_0084;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0084:
	{
		// }
		return;
	}
}
// System.Void ES3Types.ES3Type_Shader::ReadInto<UnityEngine.ParticleSystem/VelocityOverLifetimeModule>(ES3Reader,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ES3Type_Shader_ReadInto_TisVelocityOverLifetimeModule_tB4A3291E3D2E850257EE3F8344AAEDA06D7FCE56_m30A34330E6139D8E6F41324FAEB0DD47DDDFA3C4_gshared (ES3Type_Shader_tAAA1785794F9B9772B20B61B2E57552BF02A4EDA* __this, ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* ___reader0, RuntimeObject* ___obj1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mEFCC4D52DD5B822D3561A53591AE11CDB25CDB6F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisString_t_mE83D478C999E69292DB9310C2993B1EE7DD28021_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_int_t05A5E7A96442F23CE33E24A71CD349372A70E0C3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_string_t0C89CCA6F02AF5B46E66DEF92E77FCEC83C2F068_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9F10EBCE20D270FF4999A25F1E52C5E0C507BADE);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCE18B047107AA23D1AA9B2ED32D316148E02655F);
		s_Il2CppMethodInitialized = true;
	}
	Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	String_t* V_2 = NULL;
	RuntimeObject* V_3 = NULL;
	{
		// var instance = (UnityEngine.Shader)obj;
		RuntimeObject* L_0 = ___obj1;
		V_0 = ((Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692*)CastclassSealed((RuntimeObject*)L_0, Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692_il2cpp_TypeInfo_var));
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

FINALLY_0073:
			{// begin finally (depth: 1)
				{
					RuntimeObject* L_4 = V_1;
					V_3 = ((RuntimeObject*)IsInst((RuntimeObject*)L_4, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var));
					RuntimeObject* L_5 = V_3;
					if (!L_5)
					{
						goto IL_0083;
					}
				}
				{
					RuntimeObject* L_6 = V_3;
					NullCheck(L_6);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_6);
				}

IL_0083:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0069_1;
			}

IL_0015_1:
			{
				// foreach(string propertyName in reader.Properties)
				RuntimeObject* L_7 = V_1;
				NullCheck(L_7);
				RuntimeObject* L_8;
				L_8 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(1 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_7);
				V_2 = ((String_t*)CastclassSealed((RuntimeObject*)L_8, String_t_il2cpp_TypeInfo_var));
				String_t* L_9 = V_2;
				bool L_10;
				L_10 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_9, _stringLiteralCE18B047107AA23D1AA9B2ED32D316148E02655F, NULL);
				if (L_10)
				{
					goto IL_003d_1;
				}
			}
			{
				String_t* L_11 = V_2;
				bool L_12;
				L_12 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_11, _stringLiteral9F10EBCE20D270FF4999A25F1E52C5E0C507BADE, NULL);
				if (L_12)
				{
					goto IL_0050_1;
				}
			}
			{
				goto IL_0063_1;
			}

IL_003d_1:
			{
				// instance.name = reader.Read<string>(ES3Type_string.Instance);
				Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* L_13 = V_0;
				ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_14 = ___reader0;
				ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_15 = ((ES3Type_string_t0C89CCA6F02AF5B46E66DEF92E77FCEC83C2F068_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_string_t0C89CCA6F02AF5B46E66DEF92E77FCEC83C2F068_il2cpp_TypeInfo_var))->___Instance_12;
				NullCheck(L_14);
				String_t* L_16;
				L_16 = GenericVirtualFuncInvoker1< String_t*, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisString_t_mE83D478C999E69292DB9310C2993B1EE7DD28021_RuntimeMethod_var, L_14, L_15);
				NullCheck((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)L_13);
				Object_set_name_mC79E6DC8FFD72479C90F0C4CC7F42A0FEAF5AE47((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)L_13, L_16, NULL);
				// break;
				goto IL_0069_1;
			}

IL_0050_1:
			{
				// instance.maximumLOD = reader.Read<System.Int32>(ES3Type_int.Instance);
				Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* L_17 = V_0;
				ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_18 = ___reader0;
				ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_19 = ((ES3Type_int_t05A5E7A96442F23CE33E24A71CD349372A70E0C3_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_int_t05A5E7A96442F23CE33E24A71CD349372A70E0C3_il2cpp_TypeInfo_var))->___Instance_12;
				NullCheck(L_18);
				int32_t L_20;
				L_20 = GenericVirtualFuncInvoker1< int32_t, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mEFCC4D52DD5B822D3561A53591AE11CDB25CDB6F_RuntimeMethod_var, L_18, L_19);
				NullCheck(L_17);
				Shader_set_maximumLOD_mC07203B1137E60D0E80E8BB991A37435220D4CE8(L_17, L_20, NULL);
				// break;
				goto IL_0069_1;
			}

IL_0063_1:
			{
				// reader.Skip();
				ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_21 = ___reader0;
				NullCheck(L_21);
				VirtualActionInvoker0::Invoke(41 /* System.Void ES3Reader::Skip() */, L_21);
			}

IL_0069_1:
			{
				// foreach(string propertyName in reader.Properties)
				RuntimeObject* L_22 = V_1;
				NullCheck(L_22);
				bool L_23;
				L_23 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_22);
				if (L_23)
				{
					goto IL_0015_1;
				}
			}
			{
				goto IL_0084;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0084:
	{
		// }
		return;
	}
}
// System.Object ES3Types.ES3Type_ShapeModule::Read<System.Boolean>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_ShapeModule_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m741AABDD65ABD4C8D00F9204FBEE63FB0C3610C1_gshared (ES3Type_ShapeModule_t2A98821A3CBBB891C72216EA1D86C9579DFD70B7* __this, ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ShapeModule_tAA38A0C5305DF2F9D96F89D4B8F762E2D034D8B2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ShapeModule_tAA38A0C5305DF2F9D96F89D4B8F762E2D034D8B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// var instance = new UnityEngine.ParticleSystem.ShapeModule();
		il2cpp_codegen_initobj((&V_0), sizeof(ShapeModule_tAA38A0C5305DF2F9D96F89D4B8F762E2D034D8B2));
		// ReadInto<T>(reader, instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_0 = ___reader0;
		ShapeModule_tAA38A0C5305DF2F9D96F89D4B8F762E2D034D8B2 L_1 = V_0;
		ShapeModule_tAA38A0C5305DF2F9D96F89D4B8F762E2D034D8B2 L_2 = L_1;
		RuntimeObject* L_3 = Box(ShapeModule_tAA38A0C5305DF2F9D96F89D4B8F762E2D034D8B2_il2cpp_TypeInfo_var, &L_2);
		NullCheck((ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE*)__this);
		GenericVirtualActionInvoker2< ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518*, RuntimeObject* >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 0), (ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE*)__this, L_0, L_3);
		// return instance;
		ShapeModule_tAA38A0C5305DF2F9D96F89D4B8F762E2D034D8B2 L_4 = V_0;
		ShapeModule_tAA38A0C5305DF2F9D96F89D4B8F762E2D034D8B2 L_5 = L_4;
		RuntimeObject* L_6 = Box(ShapeModule_tAA38A0C5305DF2F9D96F89D4B8F762E2D034D8B2_il2cpp_TypeInfo_var, &L_5);
		return L_6;
	}
}
// System.Object ES3Types.ES3Type_ShapeModule::Read<UnityEngine.Bounds>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_ShapeModule_Read_TisBounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3_m45385EC321345CBC9B0A74EE6CA5DF4058C15DE8_gshared (ES3Type_ShapeModule_t2A98821A3CBBB891C72216EA1D86C9579DFD70B7* __this, ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ShapeModule_tAA38A0C5305DF2F9D96F89D4B8F762E2D034D8B2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ShapeModule_tAA38A0C5305DF2F9D96F89D4B8F762E2D034D8B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// var instance = new UnityEngine.ParticleSystem.ShapeModule();
		il2cpp_codegen_initobj((&V_0), sizeof(ShapeModule_tAA38A0C5305DF2F9D96F89D4B8F762E2D034D8B2));
		// ReadInto<T>(reader, instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_0 = ___reader0;
		ShapeModule_tAA38A0C5305DF2F9D96F89D4B8F762E2D034D8B2 L_1 = V_0;
		ShapeModule_tAA38A0C5305DF2F9D96F89D4B8F762E2D034D8B2 L_2 = L_1;
		RuntimeObject* L_3 = Box(ShapeModule_tAA38A0C5305DF2F9D96F89D4B8F762E2D034D8B2_il2cpp_TypeInfo_var, &L_2);
		NullCheck((ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE*)__this);
		GenericVirtualActionInvoker2< ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518*, RuntimeObject* >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 0), (ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE*)__this, L_0, L_3);
		// return instance;
		ShapeModule_tAA38A0C5305DF2F9D96F89D4B8F762E2D034D8B2 L_4 = V_0;
		ShapeModule_tAA38A0C5305DF2F9D96F89D4B8F762E2D034D8B2 L_5 = L_4;
		RuntimeObject* L_6 = Box(ShapeModule_tAA38A0C5305DF2F9D96F89D4B8F762E2D034D8B2_il2cpp_TypeInfo_var, &L_5);
		return L_6;
	}
}
// System.Object ES3Types.ES3Type_ShapeModule::Read<System.Byte>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_ShapeModule_Read_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mBE666CAF2F13B1AB25A3E595A553D60DF2CF6071_gshared (ES3Type_ShapeModule_t2A98821A3CBBB891C72216EA1D86C9579DFD70B7* __this, ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ShapeModule_tAA38A0C5305DF2F9D96F89D4B8F762E2D034D8B2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ShapeModule_tAA38A0C5305DF2F9D96F89D4B8F762E2D034D8B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// var instance = new UnityEngine.ParticleSystem.ShapeModule();
		il2cpp_codegen_initobj((&V_0), sizeof(ShapeModule_tAA38A0C5305DF2F9D96F89D4B8F762E2D034D8B2));
		// ReadInto<T>(reader, instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_0 = ___reader0;
		ShapeModule_tAA38A0C5305DF2F9D96F89D4B8F762E2D034D8B2 L_1 = V_0;
		ShapeModule_tAA38A0C5305DF2F9D96F89D4B8F762E2D034D8B2 L_2 = L_1;
		RuntimeObject* L_3 = Box(ShapeModule_tAA38A0C5305DF2F9D96F89D4B8F762E2D034D8B2_il2cpp_TypeInfo_var, &L_2);
		NullCheck((ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE*)__this);
		GenericVirtualActionInvoker2< ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518*, RuntimeObject* >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 0), (ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE*)__this, L_0, L_3);
		// return instance;
		ShapeModule_tAA38A0C5305DF2F9D96F89D4B8F762E2D034D8B2 L_4 = V_0;
		ShapeModule_tAA38A0C5305DF2F9D96F89D4B8F762E2D034D8B2 L_5 = L_4;
		RuntimeObject* L_6 = Box(ShapeModule_tAA38A0C5305DF2F9D96F89D4B8F762E2D034D8B2_il2cpp_TypeInfo_var, &L_5);
		return L_6;
	}
}
// System.Object ES3Types.ES3Type_ShapeModule::Read<UnityEngine.Color>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_ShapeModule_Read_TisColor_tD001788D726C3A7F1379BEED0260B9591F440C1F_m504F12A22374285D97D1282EF5CB2A86D03F8D6C_gshared (ES3Type_ShapeModule_t2A98821A3CBBB891C72216EA1D86C9579DFD70B7* __this, ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ShapeModule_tAA38A0C5305DF2F9D96F89D4B8F762E2D034D8B2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ShapeModule_tAA38A0C5305DF2F9D96F89D4B8F762E2D034D8B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// var instance = new UnityEngine.ParticleSystem.ShapeModule();
		il2cpp_codegen_initobj((&V_0), sizeof(ShapeModule_tAA38A0C5305DF2F9D96F89D4B8F762E2D034D8B2));
		// ReadInto<T>(reader, instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_0 = ___reader0;
		ShapeModule_tAA38A0C5305DF2F9D96F89D4B8F762E2D034D8B2 L_1 = V_0;
		ShapeModule_tAA38A0C5305DF2F9D96F89D4B8F762E2D034D8B2 L_2 = L_1;
		RuntimeObject* L_3 = Box(ShapeModule_tAA38A0C5305DF2F9D96F89D4B8F762E2D034D8B2_il2cpp_TypeInfo_var, &L_2);
		NullCheck((ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE*)__this);
		GenericVirtualActionInvoker2< ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518*, RuntimeObject* >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 0), (ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE*)__this, L_0, L_3);
		// return instance;
		ShapeModule_tAA38A0C5305DF2F9D96F89D4B8F762E2D034D8B2 L_4 = V_0;
		ShapeModule_tAA38A0C5305DF2F9D96F89D4B8F762E2D034D8B2 L_5 = L_4;
		RuntimeObject* L_6 = Box(ShapeModule_tAA38A0C5305DF2F9D96F89D4B8F762E2D034D8B2_il2cpp_TypeInfo_var, &L_5);
		return L_6;
	}
}
// System.Object ES3Types.ES3Type_ShapeModule::Read<System.Int32>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_ShapeModule_Read_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mF692073154F5E693759D61338F683FAE582C7031_gshared (ES3Type_ShapeModule_t2A98821A3CBBB891C72216EA1D86C9579DFD70B7* __this, ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ShapeModule_tAA38A0C5305DF2F9D96F89D4B8F762E2D034D8B2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ShapeModule_tAA38A0C5305DF2F9D96F89D4B8F762E2D034D8B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// var instance = new UnityEngine.ParticleSystem.ShapeModule();
		il2cpp_codegen_initobj((&V_0), sizeof(ShapeModule_tAA38A0C5305DF2F9D96F89D4B8F762E2D034D8B2));
		// ReadInto<T>(reader, instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_0 = ___reader0;
		ShapeModule_tAA38A0C5305DF2F9D96F89D4B8F762E2D034D8B2 L_1 = V_0;
		ShapeModule_tAA38A0C5305DF2F9D96F89D4B8F762E2D034D8B2 L_2 = L_1;
		RuntimeObject* L_3 = Box(ShapeModule_tAA38A0C5305DF2F9D96F89D4B8F762E2D034D8B2_il2cpp_TypeInfo_var, &L_2);
		NullCheck((ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE*)__this);
		GenericVirtualActionInvoker2< ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518*, RuntimeObject* >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 0), (ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE*)__this, L_0, L_3);
		// return instance;
		ShapeModule_tAA38A0C5305DF2F9D96F89D4B8F762E2D034D8B2 L_4 = V_0;
		ShapeModule_tAA38A0C5305DF2F9D96F89D4B8F762E2D034D8B2 L_5 = L_4;
		RuntimeObject* L_6 = Box(ShapeModule_tAA38A0C5305DF2F9D96F89D4B8F762E2D034D8B2_il2cpp_TypeInfo_var, &L_5);
		return L_6;
	}
}
// System.Object ES3Types.ES3Type_ShapeModule::Read<System.Int32Enum>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_ShapeModule_Read_TisInt32Enum_tCBAC8BA2BFF3A845FA599F303093BBBA374B6F0C_m6C3640437919A0DAAB20E9C0BE9AB6CB42AD6EC4_gshared (ES3Type_ShapeModule_t2A98821A3CBBB891C72216EA1D86C9579DFD70B7* __this, ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ShapeModule_tAA38A0C5305DF2F9D96F89D4B8F762E2D034D8B2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ShapeModule_tAA38A0C5305DF2F9D96F89D4B8F762E2D034D8B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// var instance = new UnityEngine.ParticleSystem.ShapeModule();
		il2cpp_codegen_initobj((&V_0), sizeof(ShapeModule_tAA38A0C5305DF2F9D96F89D4B8F762E2D034D8B2));
		// ReadInto<T>(reader, instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_0 = ___reader0;
		ShapeModule_tAA38A0C5305DF2F9D96F89D4B8F762E2D034D8B2 L_1 = V_0;
		ShapeModule_tAA38A0C5305DF2F9D96F89D4B8F762E2D034D8B2 L_2 = L_1;
		RuntimeObject* L_3 = Box(ShapeModule_tAA38A0C5305DF2F9D96F89D4B8F762E2D034D8B2_il2cpp_TypeInfo_var, &L_2);
		NullCheck((ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE*)__this);
		GenericVirtualActionInvoker2< ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518*, RuntimeObject* >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 0), (ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE*)__this, L_0, L_3);
		// return instance;
		ShapeModule_tAA38A0C5305DF2F9D96F89D4B8F762E2D034D8B2 L_4 = V_0;
		ShapeModule_tAA38A0C5305DF2F9D96F89D4B8F762E2D034D8B2 L_5 = L_4;
		RuntimeObject* L_6 = Box(ShapeModule_tAA38A0C5305DF2F9D96F89D4B8F762E2D034D8B2_il2cpp_TypeInfo_var, &L_5);
		return L_6;
	}
}
// System.Object ES3Types.ES3Type_ShapeModule::Read<System.Int64>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_ShapeModule_Read_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_m7029765578BCC568384A7143388B9E0B1BC7CB1D_gshared (ES3Type_ShapeModule_t2A98821A3CBBB891C72216EA1D86C9579DFD70B7* __this, ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ShapeModule_tAA38A0C5305DF2F9D96F89D4B8F762E2D034D8B2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ShapeModule_tAA38A0C5305DF2F9D96F89D4B8F762E2D034D8B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// var instance = new UnityEngine.ParticleSystem.ShapeModule();
		il2cpp_codegen_initobj((&V_0), sizeof(ShapeModule_tAA38A0C5305DF2F9D96F89D4B8F762E2D034D8B2));
		// ReadInto<T>(reader, instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_0 = ___reader0;
		ShapeModule_tAA38A0C5305DF2F9D96F89D4B8F762E2D034D8B2 L_1 = V_0;
		ShapeModule_tAA38A0C5305DF2F9D96F89D4B8F762E2D034D8B2 L_2 = L_1;
		RuntimeObject* L_3 = Box(ShapeModule_tAA38A0C5305DF2F9D96F89D4B8F762E2D034D8B2_il2cpp_TypeInfo_var, &L_2);
		NullCheck((ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE*)__this);
		GenericVirtualActionInvoker2< ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518*, RuntimeObject* >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 0), (ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE*)__this, L_0, L_3);
		// return instance;
		ShapeModule_tAA38A0C5305DF2F9D96F89D4B8F762E2D034D8B2 L_4 = V_0;
		ShapeModule_tAA38A0C5305DF2F9D96F89D4B8F762E2D034D8B2 L_5 = L_4;
		RuntimeObject* L_6 = Box(ShapeModule_tAA38A0C5305DF2F9D96F89D4B8F762E2D034D8B2_il2cpp_TypeInfo_var, &L_5);
		return L_6;
	}
}
// System.Object ES3Types.ES3Type_ShapeModule::Read<UnityEngine.LayerMask>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_ShapeModule_Read_TisLayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB_m074A28CFD912528486F59EEC4F62D8E0DE064DF5_gshared (ES3Type_ShapeModule_t2A98821A3CBBB891C72216EA1D86C9579DFD70B7* __this, ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ShapeModule_tAA38A0C5305DF2F9D96F89D4B8F762E2D034D8B2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ShapeModule_tAA38A0C5305DF2F9D96F89D4B8F762E2D034D8B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// var instance = new UnityEngine.ParticleSystem.ShapeModule();
		il2cpp_codegen_initobj((&V_0), sizeof(ShapeModule_tAA38A0C5305DF2F9D96F89D4B8F762E2D034D8B2));
		// ReadInto<T>(reader, instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_0 = ___reader0;
		ShapeModule_tAA38A0C5305DF2F9D96F89D4B8F762E2D034D8B2 L_1 = V_0;
		ShapeModule_tAA38A0C5305DF2F9D96F89D4B8F762E2D034D8B2 L_2 = L_1;
		RuntimeObject* L_3 = Box(ShapeModule_tAA38A0C5305DF2F9D96F89D4B8F762E2D034D8B2_il2cpp_TypeInfo_var, &L_2);
		NullCheck((ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE*)__this);
		GenericVirtualActionInvoker2< ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518*, RuntimeObject* >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 0), (ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE*)__this, L_0, L_3);
		// return instance;
		ShapeModule_tAA38A0C5305DF2F9D96F89D4B8F762E2D034D8B2 L_4 = V_0;
		ShapeModule_tAA38A0C5305DF2F9D96F89D4B8F762E2D034D8B2 L_5 = L_4;
		RuntimeObject* L_6 = Box(ShapeModule_tAA38A0C5305DF2F9D96F89D4B8F762E2D034D8B2_il2cpp_TypeInfo_var, &L_5);
		return L_6;
	}
}
// System.Object ES3Types.ES3Type_ShapeModule::Read<UnityEngine.Matrix4x4>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_ShapeModule_Read_TisMatrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6_m2CDA33314732F5214F107F6BC7D04E1E25E5405D_gshared (ES3Type_ShapeModule_t2A98821A3CBBB891C72216EA1D86C9579DFD70B7* __this, ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ShapeModule_tAA38A0C5305DF2F9D96F89D4B8F762E2D034D8B2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ShapeModule_tAA38A0C5305DF2F9D96F89D4B8F762E2D034D8B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// var instance = new UnityEngine.ParticleSystem.ShapeModule();
		il2cpp_codegen_initobj((&V_0), sizeof(ShapeModule_tAA38A0C5305DF2F9D96F89D4B8F762E2D034D8B2));
		// ReadInto<T>(reader, instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_0 = ___reader0;
		ShapeModule_tAA38A0C5305DF2F9D96F89D4B8F762E2D034D8B2 L_1 = V_0;
		ShapeModule_tAA38A0C5305DF2F9D96F89D4B8F762E2D034D8B2 L_2 = L_1;
		RuntimeObject* L_3 = Box(ShapeModule_tAA38A0C5305DF2F9D96F89D4B8F762E2D034D8B2_il2cpp_TypeInfo_var, &L_2);
		NullCheck((ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE*)__this);
		GenericVirtualActionInvoker2< ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518*, RuntimeObject* >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 0), (ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE*)__this, L_0, L_3);
		// return instance;
		ShapeModule_tAA38A0C5305DF2F9D96F89D4B8F762E2D034D8B2 L_4 = V_0;
		ShapeModule_tAA38A0C5305DF2F9D96F89D4B8F762E2D034D8B2 L_5 = L_4;
		RuntimeObject* L_6 = Box(ShapeModule_tAA38A0C5305DF2F9D96F89D4B8F762E2D034D8B2_il2cpp_TypeInfo_var, &L_5);
		return L_6;
	}
}
// System.Object ES3Types.ES3Type_ShapeModule::Read<System.Object>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_ShapeModule_Read_TisRuntimeObject_m9D95F9D893BF6BD86020C1376F49C3FC543C9440_gshared (ES3Type_ShapeModule_t2A98821A3CBBB891C72216EA1D86C9579DFD70B7* __this, ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ShapeModule_tAA38A0C5305DF2F9D96F89D4B8F762E2D034D8B2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ShapeModule_tAA38A0C5305DF2F9D96F89D4B8F762E2D034D8B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// var instance = new UnityEngine.ParticleSystem.ShapeModule();
		il2cpp_codegen_initobj((&V_0), sizeof(ShapeModule_tAA38A0C5305DF2F9D96F89D4B8F762E2D034D8B2));
		// ReadInto<T>(reader, instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_0 = ___reader0;
		ShapeModule_tAA38A0C5305DF2F9D96F89D4B8F762E2D034D8B2 L_1 = V_0;
		ShapeModule_tAA38A0C5305DF2F9D96F89D4B8F762E2D034D8B2 L_2 = L_1;
		RuntimeObject* L_3 = Box(ShapeModule_tAA38A0C5305DF2F9D96F89D4B8F762E2D034D8B2_il2cpp_TypeInfo_var, &L_2);
		NullCheck((ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE*)__this);
		GenericVirtualActionInvoker2< ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518*, RuntimeObject* >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 0), (ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE*)__this, L_0, L_3);
		// return instance;
		ShapeModule_tAA38A0C5305DF2F9D96F89D4B8F762E2D034D8B2 L_4 = V_0;
		ShapeModule_tAA38A0C5305DF2F9D96F89D4B8F762E2D034D8B2 L_5 = L_4;
		RuntimeObject* L_6 = Box(ShapeModule_tAA38A0C5305DF2F9D96F89D4B8F762E2D034D8B2_il2cpp_TypeInfo_var, &L_5);
		return L_6;
	}
}
// System.Object ES3Types.ES3Type_ShapeModule::Read<UnityEngine.Quaternion>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_ShapeModule_Read_TisQuaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_m07B574BD117232AB58855A06A5D0B9D808766FFD_gshared (ES3Type_ShapeModule_t2A98821A3CBBB891C72216EA1D86C9579DFD70B7* __this, ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ShapeModule_tAA38A0C5305DF2F9D96F89D4B8F762E2D034D8B2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ShapeModule_tAA38A0C5305DF2F9D96F89D4B8F762E2D034D8B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// var instance = new UnityEngine.ParticleSystem.ShapeModule();
		il2cpp_codegen_initobj((&V_0), sizeof(ShapeModule_tAA38A0C5305DF2F9D96F89D4B8F762E2D034D8B2));
		// ReadInto<T>(reader, instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_0 = ___reader0;
		ShapeModule_tAA38A0C5305DF2F9D96F89D4B8F762E2D034D8B2 L_1 = V_0;
		ShapeModule_tAA38A0C5305DF2F9D96F89D4B8F762E2D034D8B2 L_2 = L_1;
		RuntimeObject* L_3 = Box(ShapeModule_tAA38A0C5305DF2F9D96F89D4B8F762E2D034D8B2_il2cpp_TypeInfo_var, &L_2);
		NullCheck((ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE*)__this);
		GenericVirtualActionInvoker2< ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518*, RuntimeObject* >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 0), (ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE*)__this, L_0, L_3);
		// return instance;
		ShapeModule_tAA38A0C5305DF2F9D96F89D4B8F762E2D034D8B2 L_4 = V_0;
		ShapeModule_tAA38A0C5305DF2F9D96F89D4B8F762E2D034D8B2 L_5 = L_4;
		RuntimeObject* L_6 = Box(ShapeModule_tAA38A0C5305DF2F9D96F89D4B8F762E2D034D8B2_il2cpp_TypeInfo_var, &L_5);
		return L_6;
	}
}
// System.Object ES3Types.ES3Type_ShapeModule::Read<UnityEngine.Rect>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_ShapeModule_Read_TisRect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D_m6881100E3440BAA1CA8423DDA381C100285E7B30_gshared (ES3Type_ShapeModule_t2A98821A3CBBB891C72216EA1D86C9579DFD70B7* __this, ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ShapeModule_tAA38A0C5305DF2F9D96F89D4B8F762E2D034D8B2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ShapeModule_tAA38A0C5305DF2F9D96F89D4B8F762E2D034D8B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// var instance = new UnityEngine.ParticleSystem.ShapeModule();
		il2cpp_codegen_initobj((&V_0), sizeof(ShapeModule_tAA38A0C5305DF2F9D96F89D4B8F762E2D034D8B2));
		// ReadInto<T>(reader, instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_0 = ___reader0;
		ShapeModule_tAA38A0C5305DF2F9D96F89D4B8F762E2D034D8B2 L_1 = V_0;
		ShapeModule_tAA38A0C5305DF2F9D96F89D4B8F762E2D034D8B2 L_2 = L_1;
		RuntimeObject* L_3 = Box(ShapeModule_tAA38A0C5305DF2F9D96F89D4B8F762E2D034D8B2_il2cpp_TypeInfo_var, &L_2);
		NullCheck((ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE*)__this);
		GenericVirtualActionInvoker2< ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518*, RuntimeObject* >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 0), (ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE*)__this, L_0, L_3);
		// return instance;
		ShapeModule_tAA38A0C5305DF2F9D96F89D4B8F762E2D034D8B2 L_4 = V_0;
		ShapeModule_tAA38A0C5305DF2F9D96F89D4B8F762E2D034D8B2 L_5 = L_4;
		RuntimeObject* L_6 = Box(ShapeModule_tAA38A0C5305DF2F9D96F89D4B8F762E2D034D8B2_il2cpp_TypeInfo_var, &L_5);
		return L_6;
	}
}
// System.Object ES3Types.ES3Type_ShapeModule::Read<UnityEngine.RenderTextureDescriptor>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_ShapeModule_Read_TisRenderTextureDescriptor_t69845881CE6437E4E61F92074F2F84079F23FA46_mE442EB00065F202AF536DF3406B6D8970A876514_gshared (ES3Type_ShapeModule_t2A98821A3CBBB891C72216EA1D86C9579DFD70B7* __this, ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ShapeModule_tAA38A0C5305DF2F9D96F89D4B8F762E2D034D8B2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ShapeModule_tAA38A0C5305DF2F9D96F89D4B8F762E2D034D8B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// var instance = new UnityEngine.ParticleSystem.ShapeModule();
		il2cpp_codegen_initobj((&V_0), sizeof(ShapeModule_tAA38A0C5305DF2F9D96F89D4B8F762E2D034D8B2));
		// ReadInto<T>(reader, instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_0 = ___reader0;
		ShapeModule_tAA38A0C5305DF2F9D96F89D4B8F762E2D034D8B2 L_1 = V_0;
		ShapeModule_tAA38A0C5305DF2F9D96F89D4B8F762E2D034D8B2 L_2 = L_1;
		RuntimeObject* L_3 = Box(ShapeModule_tAA38A0C5305DF2F9D96F89D4B8F762E2D034D8B2_il2cpp_TypeInfo_var, &L_2);
		NullCheck((ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE*)__this);
		GenericVirtualActionInvoker2< ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518*, RuntimeObject* >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 0), (ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE*)__this, L_0, L_3);
		// return instance;
		ShapeModule_tAA38A0C5305DF2F9D96F89D4B8F762E2D034D8B2 L_4 = V_0;
		ShapeModule_tAA38A0C5305DF2F9D96F89D4B8F762E2D034D8B2 L_5 = L_4;
		RuntimeObject* L_6 = Box(ShapeModule_tAA38A0C5305DF2F9D96F89D4B8F762E2D034D8B2_il2cpp_TypeInfo_var, &L_5);
		return L_6;
	}
}
// System.Object ES3Types.ES3Type_ShapeModule::Read<System.Single>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_ShapeModule_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mB8A3651483310922E63C7DC32D977F02B0B57F54_gshared (ES3Type_ShapeModule_t2A98821A3CBBB891C72216EA1D86C9579DFD70B7* __this, ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ShapeModule_tAA38A0C5305DF2F9D96F89D4B8F762E2D034D8B2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ShapeModule_tAA38A0C5305DF2F9D96F89D4B8F762E2D034D8B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// var instance = new UnityEngine.ParticleSystem.ShapeModule();
		il2cpp_codegen_initobj((&V_0), sizeof(ShapeModule_tAA38A0C5305DF2F9D96F89D4B8F762E2D034D8B2));
		// ReadInto<T>(reader, instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_0 = ___reader0;
		ShapeModule_tAA38A0C5305DF2F9D96F89D4B8F762E2D034D8B2 L_1 = V_0;
		ShapeModule_tAA38A0C5305DF2F9D96F89D4B8F762E2D034D8B2 L_2 = L_1;
		RuntimeObject* L_3 = Box(ShapeModule_tAA38A0C5305DF2F9D96F89D4B8F762E2D034D8B2_il2cpp_TypeInfo_var, &L_2);
		NullCheck((ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE*)__this);
		GenericVirtualActionInvoker2< ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518*, RuntimeObject* >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 0), (ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE*)__this, L_0, L_3);
		// return instance;
		ShapeModule_tAA38A0C5305DF2F9D96F89D4B8F762E2D034D8B2 L_4 = V_0;
		ShapeModule_tAA38A0C5305DF2F9D96F89D4B8F762E2D034D8B2 L_5 = L_4;
		RuntimeObject* L_6 = Box(ShapeModule_tAA38A0C5305DF2F9D96F89D4B8F762E2D034D8B2_il2cpp_TypeInfo_var, &L_5);
		return L_6;
	}
}
// System.Object ES3Types.ES3Type_ShapeModule::Read<UnityEngine.Vector2>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_ShapeModule_Read_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_m776EA066B02648DDB646B294F0E402C7CA30B301_gshared (ES3Type_ShapeModule_t2A98821A3CBBB891C72216EA1D86C9579DFD70B7* __this, ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ShapeModule_tAA38A0C5305DF2F9D96F89D4B8F762E2D034D8B2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ShapeModule_tAA38A0C5305DF2F9D96F89D4B8F762E2D034D8B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// var instance = new UnityEngine.ParticleSystem.ShapeModule();
		il2cpp_codegen_initobj((&V_0), sizeof(ShapeModule_tAA38A0C5305DF2F9D96F89D4B8F762E2D034D8B2));
		// ReadInto<T>(reader, instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_0 = ___reader0;
		ShapeModule_tAA38A0C5305DF2F9D96F89D4B8F762E2D034D8B2 L_1 = V_0;
		ShapeModule_tAA38A0C5305DF2F9D96F89D4B8F762E2D034D8B2 L_2 = L_1;
		RuntimeObject* L_3 = Box(ShapeModule_tAA38A0C5305DF2F9D96F89D4B8F762E2D034D8B2_il2cpp_TypeInfo_var, &L_2);
		NullCheck((ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE*)__this);
		GenericVirtualActionInvoker2< ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518*, RuntimeObject* >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 0), (ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE*)__this, L_0, L_3);
		// return instance;
		ShapeModule_tAA38A0C5305DF2F9D96F89D4B8F762E2D034D8B2 L_4 = V_0;
		ShapeModule_tAA38A0C5305DF2F9D96F89D4B8F762E2D034D8B2 L_5 = L_4;
		RuntimeObject* L_6 = Box(ShapeModule_tAA38A0C5305DF2F9D96F89D4B8F762E2D034D8B2_il2cpp_TypeInfo_var, &L_5);
		return L_6;
	}
}
// System.Object ES3Types.ES3Type_ShapeModule::Read<UnityEngine.Vector3>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_ShapeModule_Read_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_m81C7B4C8B4CB679E5524287FFF38AE5993D338D5_gshared (ES3Type_ShapeModule_t2A98821A3CBBB891C72216EA1D86C9579DFD70B7* __this, ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ShapeModule_tAA38A0C5305DF2F9D96F89D4B8F762E2D034D8B2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ShapeModule_tAA38A0C5305DF2F9D96F89D4B8F762E2D034D8B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// var instance = new UnityEngine.ParticleSystem.ShapeModule();
		il2cpp_codegen_initobj((&V_0), sizeof(ShapeModule_tAA38A0C5305DF2F9D96F89D4B8F762E2D034D8B2));
		// ReadInto<T>(reader, instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_0 = ___reader0;
		ShapeModule_tAA38A0C5305DF2F9D96F89D4B8F762E2D034D8B2 L_1 = V_0;
		ShapeModule_tAA38A0C5305DF2F9D96F89D4B8F762E2D034D8B2 L_2 = L_1;
		RuntimeObject* L_3 = Box(ShapeModule_tAA38A0C5305DF2F9D96F89D4B8F762E2D034D8B2_il2cpp_TypeInfo_var, &L_2);
		NullCheck((ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE*)__this);
		GenericVirtualActionInvoker2< ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518*, RuntimeObject* >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 0), (ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE*)__this, L_0, L_3);
		// return instance;
		ShapeModule_tAA38A0C5305DF2F9D96F89D4B8F762E2D034D8B2 L_4 = V_0;
		ShapeModule_tAA38A0C5305DF2F9D96F89D4B8F762E2D034D8B2 L_5 = L_4;
		RuntimeObject* L_6 = Box(ShapeModule_tAA38A0C5305DF2F9D96F89D4B8F762E2D034D8B2_il2cpp_TypeInfo_var, &L_5);
		return L_6;
	}
}
// System.Object ES3Types.ES3Type_ShapeModule::Read<UnityEngine.Vector4>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_ShapeModule_Read_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_m7ED5CB6062143403F8ECD87D08D9360D64794DEC_gshared (ES3Type_ShapeModule_t2A98821A3CBBB891C72216EA1D86C9579DFD70B7* __this, ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ShapeModule_tAA38A0C5305DF2F9D96F89D4B8F762E2D034D8B2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ShapeModule_tAA38A0C5305DF2F9D96F89D4B8F762E2D034D8B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// var instance = new UnityEngine.ParticleSystem.ShapeModule();
		il2cpp_codegen_initobj((&V_0), sizeof(ShapeModule_tAA38A0C5305DF2F9D96F89D4B8F762E2D034D8B2));
		// ReadInto<T>(reader, instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_0 = ___reader0;
		ShapeModule_tAA38A0C5305DF2F9D96F89D4B8F762E2D034D8B2 L_1 = V_0;
		ShapeModule_tAA38A0C5305DF2F9D96F89D4B8F762E2D034D8B2 L_2 = L_1;
		RuntimeObject* L_3 = Box(ShapeModule_tAA38A0C5305DF2F9D96F89D4B8F762E2D034D8B2_il2cpp_TypeInfo_var, &L_2);
		NullCheck((ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE*)__this);
		GenericVirtualActionInvoker2< ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518*, RuntimeObject* >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 0), (ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE*)__this, L_0, L_3);
		// return instance;
		ShapeModule_tAA38A0C5305DF2F9D96F89D4B8F762E2D034D8B2 L_4 = V_0;
		ShapeModule_tAA38A0C5305DF2F9D96F89D4B8F762E2D034D8B2 L_5 = L_4;
		RuntimeObject* L_6 = Box(ShapeModule_tAA38A0C5305DF2F9D96F89D4B8F762E2D034D8B2_il2cpp_TypeInfo_var, &L_5);
		return L_6;
	}
}
// System.Object ES3Types.ES3Type_ShapeModule::Read<UnityEngine.ParticleSystem/MinMaxCurve>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_ShapeModule_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mFAFC4514A7064F911AA1D6D9E073A7249A4C6C0E_gshared (ES3Type_ShapeModule_t2A98821A3CBBB891C72216EA1D86C9579DFD70B7* __this, ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ShapeModule_tAA38A0C5305DF2F9D96F89D4B8F762E2D034D8B2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ShapeModule_tAA38A0C5305DF2F9D96F89D4B8F762E2D034D8B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// var instance = new UnityEngine.ParticleSystem.ShapeModule();
		il2cpp_codegen_initobj((&V_0), sizeof(ShapeModule_tAA38A0C5305DF2F9D96F89D4B8F762E2D034D8B2));
		// ReadInto<T>(reader, instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_0 = ___reader0;
		ShapeModule_tAA38A0C5305DF2F9D96F89D4B8F762E2D034D8B2 L_1 = V_0;
		ShapeModule_tAA38A0C5305DF2F9D96F89D4B8F762E2D034D8B2 L_2 = L_1;
		RuntimeObject* L_3 = Box(ShapeModule_tAA38A0C5305DF2F9D96F89D4B8F762E2D034D8B2_il2cpp_TypeInfo_var, &L_2);
		NullCheck((ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE*)__this);
		GenericVirtualActionInvoker2< ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518*, RuntimeObject* >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 0), (ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE*)__this, L_0, L_3);
		// return instance;
		ShapeModule_tAA38A0C5305DF2F9D96F89D4B8F762E2D034D8B2 L_4 = V_0;
		ShapeModule_tAA38A0C5305DF2F9D96F89D4B8F762E2D034D8B2 L_5 = L_4;
		RuntimeObject* L_6 = Box(ShapeModule_tAA38A0C5305DF2F9D96F89D4B8F762E2D034D8B2_il2cpp_TypeInfo_var, &L_5);
		return L_6;
	}
}
// System.Object ES3Types.ES3Type_ShapeModule::Read<UnityEngine.ParticleSystem/MinMaxGradient>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_ShapeModule_Read_TisMinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69_m4818762944031B4D15A0121B254084B264007633_gshared (ES3Type_ShapeModule_t2A98821A3CBBB891C72216EA1D86C9579DFD70B7* __this, ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ShapeModule_tAA38A0C5305DF2F9D96F89D4B8F762E2D034D8B2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ShapeModule_tAA38A0C5305DF2F9D96F89D4B8F762E2D034D8B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// var instance = new UnityEngine.ParticleSystem.ShapeModule();
		il2cpp_codegen_initobj((&V_0), sizeof(ShapeModule_tAA38A0C5305DF2F9D96F89D4B8F762E2D034D8B2));
		// ReadInto<T>(reader, instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_0 = ___reader0;
		ShapeModule_tAA38A0C5305DF2F9D96F89D4B8F762E2D034D8B2 L_1 = V_0;
		ShapeModule_tAA38A0C5305DF2F9D96F89D4B8F762E2D034D8B2 L_2 = L_1;
		RuntimeObject* L_3 = Box(ShapeModule_tAA38A0C5305DF2F9D96F89D4B8F762E2D034D8B2_il2cpp_TypeInfo_var, &L_2);
		NullCheck((ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE*)__this);
		GenericVirtualActionInvoker2< ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518*, RuntimeObject* >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 0), (ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE*)__this, L_0, L_3);
		// return instance;
		ShapeModule_tAA38A0C5305DF2F9D96F89D4B8F762E2D034D8B2 L_4 = V_0;
		ShapeModule_tAA38A0C5305DF2F9D96F89D4B8F762E2D034D8B2 L_5 = L_4;
		RuntimeObject* L_6 = Box(ShapeModule_tAA38A0C5305DF2F9D96F89D4B8F762E2D034D8B2_il2cpp_TypeInfo_var, &L_5);
		return L_6;
	}
}
// System.Void ES3Types.ES3Type_ShapeModule::ReadInto<System.Object>(ES3Reader,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ES3Type_ShapeModule_ReadInto_TisRuntimeObject_mA76324483E90EC154E8A1791E8F0BBBBED8636A3_gshared (ES3Type_ShapeModule_t2A98821A3CBBB891C72216EA1D86C9579DFD70B7* __this, ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* ___reader0, RuntimeObject* ___obj1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mFFB70EE53D8CD0255A4E599780F62A3EB1520E83_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mEFCC4D52DD5B822D3561A53591AE11CDB25CDB6F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisMeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE_mADE66001251FAEAB39EE97DA447D0A80EAAB85C4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisMesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4_m4DD8C0823DA528C84509E776081834CEAC71FE88_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisParticleSystemMeshShapeType_t260D7CAA6014D0ACE2BCFE0BC588E1ADE3AF98E5_m2E1596CACABC5B7BB194A74A92C1E5627B3DB9D0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisParticleSystemShapeType_tADE62D07EDA71578326A03B50871391EE01F73BB_m3423F2435F483F46ABB4C8EAD9B78CD03D2742FB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mA86928BC888E342D2C2644535E3399952F5077ED_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisSkinnedMeshRenderer_t020C4E8648EA1C4C6BA5C41502919B387E7E1C2E_m9E77EF921E4ACFCE425D24538209CF592968463E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_m41744F4EDB47642D9EF02C774ADD5EADDE749262_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_Vector3_t29E9EC31EED86489FBD8A22FBD317F5BD5C3A3E9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_int_t05A5E7A96442F23CE33E24A71CD349372A70E0C3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ShapeModule_tAA38A0C5305DF2F9D96F89D4B8F762E2D034D8B2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral01837E2252AC8026A5EA3567A663017A662FBB70);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1228466552C1791B2019A329AFE94665D441168A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral60E56797D122AE71D3774956F66C6EEB9EA22C05);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6686C366F645244186604A3DA4B9A58012A85F1B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral82BECCAD895076775062861CDB46AADEF913D969);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8C9F18A4F030B96447955FBBA1A99FFC43B5D8E0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8E54BB51E569CB6A8D3C45D8AEF883A1559C1C0E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral91811EE149061D28B38320E2430CE8888AD6398B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBD49F93A7BC78A69E385CEC0E78F434BD2845A17);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCA1B66E295BD92E9FD3B6C708F09CA69A50BEFD1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE8744A8B8BD390EB66CA0CAE2376C973E6904FFB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEB0A157666700D8227FD4B66A26FDC02035E89BF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralED1F119527A0BCA45125EF8E0F719985DA86C0E1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF66E9083C67855AB6EBB4B74342E385A72AACE32);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF9BE17D634D1B07BCDCDA77A87710C946D81307B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFA5EC7168E9633DAAEAA255ECB55030EA60F064F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFC341A1966AF28A9A7A26EDFB78ABBF7DE4D0E1F);
		s_Il2CppMethodInitialized = true;
	}
	ShapeModule_tAA38A0C5305DF2F9D96F89D4B8F762E2D034D8B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	uint32_t V_2 = 0;
	{
		// var instance = (UnityEngine.ParticleSystem.ShapeModule)obj;
		RuntimeObject* L_0 = ___obj1;
		V_0 = ((*(ShapeModule_tAA38A0C5305DF2F9D96F89D4B8F762E2D034D8B2*)((ShapeModule_tAA38A0C5305DF2F9D96F89D4B8F762E2D034D8B2*)(ShapeModule_tAA38A0C5305DF2F9D96F89D4B8F762E2D034D8B2*)UnBox(L_0, ShapeModule_tAA38A0C5305DF2F9D96F89D4B8F762E2D034D8B2_il2cpp_TypeInfo_var))));
		goto IL_0426;
	}

IL_000c:
	{
		String_t* L_1 = V_1;
		uint32_t L_2;
		L_2 = U3CPrivateImplementationDetailsU3E_ComputeStringHash_m9E43873DE0DF480D27EC1C2AA3C09E74EA77F75D(L_1, NULL);
		V_2 = L_2;
		uint32_t L_3 = V_2;
		if ((!(((uint32_t)L_3) <= ((uint32_t)((int32_t)-2104025999)))))
		{
			goto IL_00ad;
		}
	}
	{
		uint32_t L_4 = V_2;
		if ((!(((uint32_t)L_4) <= ((uint32_t)((int32_t)666576729)))))
		{
			goto IL_0064;
		}
	}
	{
		uint32_t L_5 = V_2;
		if ((!(((uint32_t)L_5) <= ((uint32_t)((int32_t)49525662)))))
		{
			goto IL_0049;
		}
	}
	{
		uint32_t L_6 = V_2;
		if ((((int32_t)L_6) == ((int32_t)((int32_t)24602224))))
		{
			goto IL_0247;
		}
	}
	{
		uint32_t L_7 = V_2;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)49525662))))
		{
			goto IL_0136;
		}
	}
	{
		goto IL_0420;
	}

IL_0049:
	{
		uint32_t L_8 = V_2;
		if ((((int32_t)L_8) == ((int32_t)((int32_t)230313139))))
		{
			goto IL_019f;
		}
	}
	{
		uint32_t L_9 = V_2;
		if ((((int32_t)L_9) == ((int32_t)((int32_t)666576729))))
		{
			goto IL_01f3;
		}
	}
	{
		goto IL_0420;
	}

IL_0064:
	{
		uint32_t L_10 = V_2;
		if ((!(((uint32_t)L_10) <= ((uint32_t)((int32_t)955488309)))))
		{
			goto IL_0087;
		}
	}
	{
		uint32_t L_11 = V_2;
		if ((((int32_t)L_11) == ((int32_t)((int32_t)923624301))))
		{
			goto IL_0232;
		}
	}
	{
		uint32_t L_12 = V_2;
		if ((((int32_t)L_12) == ((int32_t)((int32_t)955488309))))
		{
			goto IL_0286;
		}
	}
	{
		goto IL_0420;
	}

IL_0087:
	{
		uint32_t L_13 = V_2;
		if ((((int32_t)L_13) == ((int32_t)((int32_t)980363995))))
		{
			goto IL_029b;
		}
	}
	{
		uint32_t L_14 = V_2;
		if ((((int32_t)L_14) == ((int32_t)((int32_t)985988853))))
		{
			goto IL_0175;
		}
	}
	{
		uint32_t L_15 = V_2;
		if ((((int32_t)L_15) == ((int32_t)((int32_t)-2104025999))))
		{
			goto IL_01de;
		}
	}
	{
		goto IL_0420;
	}

IL_00ad:
	{
		uint32_t L_16 = V_2;
		if ((!(((uint32_t)L_16) <= ((uint32_t)((int32_t)-1473810612)))))
		{
			goto IL_00f0;
		}
	}
	{
		uint32_t L_17 = V_2;
		if ((!(((uint32_t)L_17) <= ((uint32_t)((int32_t)-1726928010)))))
		{
			goto IL_00d5;
		}
	}
	{
		uint32_t L_18 = V_2;
		if ((((int32_t)L_18) == ((int32_t)((int32_t)-2083506667))))
		{
			goto IL_01c9;
		}
	}
	{
		uint32_t L_19 = V_2;
		if ((((int32_t)L_19) == ((int32_t)((int32_t)-1726928010))))
		{
			goto IL_014b;
		}
	}
	{
		goto IL_0420;
	}

IL_00d5:
	{
		uint32_t L_20 = V_2;
		if ((((int32_t)L_20) == ((int32_t)((int32_t)-1593786692))))
		{
			goto IL_0208;
		}
	}
	{
		uint32_t L_21 = V_2;
		if ((((int32_t)L_21) == ((int32_t)((int32_t)-1473810612))))
		{
			goto IL_018a;
		}
	}
	{
		goto IL_0420;
	}

IL_00f0:
	{
		uint32_t L_22 = V_2;
		if ((!(((uint32_t)L_22) <= ((uint32_t)((int32_t)-1386986472)))))
		{
			goto IL_0110;
		}
	}
	{
		uint32_t L_23 = V_2;
		if ((((int32_t)L_23) == ((int32_t)((int32_t)-1412039661))))
		{
			goto IL_0160;
		}
	}
	{
		uint32_t L_24 = V_2;
		if ((((int32_t)L_24) == ((int32_t)((int32_t)-1386986472))))
		{
			goto IL_01b4;
		}
	}
	{
		goto IL_0420;
	}

IL_0110:
	{
		uint32_t L_25 = V_2;
		if ((((int32_t)L_25) == ((int32_t)((int32_t)-584064197))))
		{
			goto IL_021d;
		}
	}
	{
		uint32_t L_26 = V_2;
		if ((((int32_t)L_26) == ((int32_t)((int32_t)-473474755))))
		{
			goto IL_0271;
		}
	}
	{
		uint32_t L_27 = V_2;
		if ((((int32_t)L_27) == ((int32_t)((int32_t)-365686981))))
		{
			goto IL_025c;
		}
	}
	{
		goto IL_0420;
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
		goto IL_0420;
	}

IL_014b:
	{
		String_t* L_30 = V_1;
		bool L_31;
		L_31 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_30, _stringLiteral82BECCAD895076775062861CDB46AADEF913D969, NULL);
		if (L_31)
		{
			goto IL_02c7;
		}
	}
	{
		goto IL_0420;
	}

IL_0160:
	{
		String_t* L_32 = V_1;
		bool L_33;
		L_33 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_32, _stringLiteral1228466552C1791B2019A329AFE94665D441168A, NULL);
		if (L_33)
		{
			goto IL_02d9;
		}
	}
	{
		goto IL_0420;
	}

IL_0175:
	{
		String_t* L_34 = V_1;
		bool L_35;
		L_35 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_34, _stringLiteralBD49F93A7BC78A69E385CEC0E78F434BD2845A17, NULL);
		if (L_35)
		{
			goto IL_02f0;
		}
	}
	{
		goto IL_0420;
	}

IL_018a:
	{
		String_t* L_36 = V_1;
		bool L_37;
		L_37 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_36, _stringLiteralED1F119527A0BCA45125EF8E0F719985DA86C0E1, NULL);
		if (L_37)
		{
			goto IL_0307;
		}
	}
	{
		goto IL_0420;
	}

IL_019f:
	{
		String_t* L_38 = V_1;
		bool L_39;
		L_39 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_38, _stringLiteral8C9F18A4F030B96447955FBBA1A99FFC43B5D8E0, NULL);
		if (L_39)
		{
			goto IL_031e;
		}
	}
	{
		goto IL_0420;
	}

IL_01b4:
	{
		String_t* L_40 = V_1;
		bool L_41;
		L_41 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_40, _stringLiteralFC341A1966AF28A9A7A26EDFB78ABBF7DE4D0E1F, NULL);
		if (L_41)
		{
			goto IL_0335;
		}
	}
	{
		goto IL_0420;
	}

IL_01c9:
	{
		String_t* L_42 = V_1;
		bool L_43;
		L_43 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_42, _stringLiteralE8744A8B8BD390EB66CA0CAE2376C973E6904FFB, NULL);
		if (L_43)
		{
			goto IL_034c;
		}
	}
	{
		goto IL_0420;
	}

IL_01de:
	{
		String_t* L_44 = V_1;
		bool L_45;
		L_45 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_44, _stringLiteralF9BE17D634D1B07BCDCDA77A87710C946D81307B, NULL);
		if (L_45)
		{
			goto IL_0363;
		}
	}
	{
		goto IL_0420;
	}

IL_01f3:
	{
		String_t* L_46 = V_1;
		bool L_47;
		L_47 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_46, _stringLiteralFA5EC7168E9633DAAEAA255ECB55030EA60F064F, NULL);
		if (L_47)
		{
			goto IL_037a;
		}
	}
	{
		goto IL_0420;
	}

IL_0208:
	{
		String_t* L_48 = V_1;
		bool L_49;
		L_49 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_48, _stringLiteralEB0A157666700D8227FD4B66A26FDC02035E89BF, NULL);
		if (L_49)
		{
			goto IL_038c;
		}
	}
	{
		goto IL_0420;
	}

IL_021d:
	{
		String_t* L_50 = V_1;
		bool L_51;
		L_51 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_50, _stringLiteral8E54BB51E569CB6A8D3C45D8AEF883A1559C1C0E, NULL);
		if (L_51)
		{
			goto IL_039e;
		}
	}
	{
		goto IL_0420;
	}

IL_0232:
	{
		String_t* L_52 = V_1;
		bool L_53;
		L_53 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_52, _stringLiteral60E56797D122AE71D3774956F66C6EEB9EA22C05, NULL);
		if (L_53)
		{
			goto IL_03ad;
		}
	}
	{
		goto IL_0420;
	}

IL_0247:
	{
		String_t* L_54 = V_1;
		bool L_55;
		L_55 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_54, _stringLiteral01837E2252AC8026A5EA3567A663017A662FBB70, NULL);
		if (L_55)
		{
			goto IL_03bc;
		}
	}
	{
		goto IL_0420;
	}

IL_025c:
	{
		String_t* L_56 = V_1;
		bool L_57;
		L_57 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_56, _stringLiteralF66E9083C67855AB6EBB4B74342E385A72AACE32, NULL);
		if (L_57)
		{
			goto IL_03d0;
		}
	}
	{
		goto IL_0420;
	}

IL_0271:
	{
		String_t* L_58 = V_1;
		bool L_59;
		L_59 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_58, _stringLiteral91811EE149061D28B38320E2430CE8888AD6398B, NULL);
		if (L_59)
		{
			goto IL_03e4;
		}
	}
	{
		goto IL_0420;
	}

IL_0286:
	{
		String_t* L_60 = V_1;
		bool L_61;
		L_61 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_60, _stringLiteral6686C366F645244186604A3DA4B9A58012A85F1B, NULL);
		if (L_61)
		{
			goto IL_03f8;
		}
	}
	{
		goto IL_0420;
	}

IL_029b:
	{
		String_t* L_62 = V_1;
		bool L_63;
		L_63 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_62, _stringLiteralCA1B66E295BD92E9FD3B6C708F09CA69A50BEFD1, NULL);
		if (L_63)
		{
			goto IL_040c;
		}
	}
	{
		goto IL_0420;
	}

IL_02b0:
	{
		// instance.enabled = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_64 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_65 = ((ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_64);
		bool L_66;
		L_66 = GenericVirtualFuncInvoker1< bool, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mFFB70EE53D8CD0255A4E599780F62A3EB1520E83_RuntimeMethod_var, L_64, L_65);
		ShapeModule_set_enabled_m6BA02351FEED67A82664135B922DDA66D71DF399((&V_0), L_66, NULL);
		// break;
		goto IL_0426;
	}

IL_02c7:
	{
		// instance.shapeType = reader.Read<UnityEngine.ParticleSystemShapeType>();
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_67 = ___reader0;
		NullCheck(L_67);
		int32_t L_68;
		L_68 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisParticleSystemShapeType_tADE62D07EDA71578326A03B50871391EE01F73BB_m3423F2435F483F46ABB4C8EAD9B78CD03D2742FB_RuntimeMethod_var, L_67);
		ShapeModule_set_shapeType_m4B5D1EA91037AD7065FE1D23652D919FED4D6D7F((&V_0), L_68, NULL);
		// break;
		goto IL_0426;
	}

IL_02d9:
	{
		// instance.randomDirectionAmount = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_69 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_70 = ((ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_69);
		float L_71;
		L_71 = GenericVirtualFuncInvoker1< float, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mA86928BC888E342D2C2644535E3399952F5077ED_RuntimeMethod_var, L_69, L_70);
		ShapeModule_set_randomDirectionAmount_m398CEE6D93207797559A80CE49A0C4138C96D0B3((&V_0), L_71, NULL);
		// break;
		goto IL_0426;
	}

IL_02f0:
	{
		// instance.sphericalDirectionAmount = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_72 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_73 = ((ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_72);
		float L_74;
		L_74 = GenericVirtualFuncInvoker1< float, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mA86928BC888E342D2C2644535E3399952F5077ED_RuntimeMethod_var, L_72, L_73);
		ShapeModule_set_sphericalDirectionAmount_m395143D474E51CE6AAF81C9DB84028A16B9BCAAB((&V_0), L_74, NULL);
		// break;
		goto IL_0426;
	}

IL_0307:
	{
		// instance.alignToDirection = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_75 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_76 = ((ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_75);
		bool L_77;
		L_77 = GenericVirtualFuncInvoker1< bool, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mFFB70EE53D8CD0255A4E599780F62A3EB1520E83_RuntimeMethod_var, L_75, L_76);
		ShapeModule_set_alignToDirection_mD632613E0E343654E6569F22BC9EFBB9247AC581((&V_0), L_77, NULL);
		// break;
		goto IL_0426;
	}

IL_031e:
	{
		// instance.radius = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_78 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_79 = ((ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_78);
		float L_80;
		L_80 = GenericVirtualFuncInvoker1< float, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mA86928BC888E342D2C2644535E3399952F5077ED_RuntimeMethod_var, L_78, L_79);
		ShapeModule_set_radius_m37F79E13EB60FA39EAE36B49DAC4AC880416E89C((&V_0), L_80, NULL);
		// break;
		goto IL_0426;
	}

IL_0335:
	{
		// instance.angle = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_81 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_82 = ((ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_81);
		float L_83;
		L_83 = GenericVirtualFuncInvoker1< float, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mA86928BC888E342D2C2644535E3399952F5077ED_RuntimeMethod_var, L_81, L_82);
		ShapeModule_set_angle_m62F5F037CD1DF55172B2D64DBF8271F9F917133A((&V_0), L_83, NULL);
		// break;
		goto IL_0426;
	}

IL_034c:
	{
		// instance.length = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_84 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_85 = ((ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_84);
		float L_86;
		L_86 = GenericVirtualFuncInvoker1< float, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mA86928BC888E342D2C2644535E3399952F5077ED_RuntimeMethod_var, L_84, L_85);
		ShapeModule_set_length_mD38341192A10095F9D0217993D410939F90CE621((&V_0), L_86, NULL);
		// break;
		goto IL_0426;
	}

IL_0363:
	{
		// instance.scale = reader.Read<UnityEngine.Vector3>(ES3Type_Vector3.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_87 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_88 = ((ES3Type_Vector3_t29E9EC31EED86489FBD8A22FBD317F5BD5C3A3E9_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Vector3_t29E9EC31EED86489FBD8A22FBD317F5BD5C3A3E9_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_87);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_89;
		L_89 = GenericVirtualFuncInvoker1< Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_m41744F4EDB47642D9EF02C774ADD5EADDE749262_RuntimeMethod_var, L_87, L_88);
		ShapeModule_set_scale_mDA84B80016FDA6B6EE181B108C3E59A2FFF9143D((&V_0), L_89, NULL);
		// break;
		goto IL_0426;
	}

IL_037a:
	{
		// instance.meshShapeType = reader.Read<UnityEngine.ParticleSystemMeshShapeType>();
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_90 = ___reader0;
		NullCheck(L_90);
		int32_t L_91;
		L_91 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisParticleSystemMeshShapeType_t260D7CAA6014D0ACE2BCFE0BC588E1ADE3AF98E5_m2E1596CACABC5B7BB194A74A92C1E5627B3DB9D0_RuntimeMethod_var, L_90);
		ShapeModule_set_meshShapeType_m335ED6F02244A07F8557E900D9935A4220AD23D0((&V_0), L_91, NULL);
		// break;
		goto IL_0426;
	}

IL_038c:
	{
		// instance.mesh = reader.Read<UnityEngine.Mesh>();
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_92 = ___reader0;
		NullCheck(L_92);
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_93;
		L_93 = GenericVirtualFuncInvoker0< Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* >::Invoke(ES3Reader_Read_TisMesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4_m4DD8C0823DA528C84509E776081834CEAC71FE88_RuntimeMethod_var, L_92);
		ShapeModule_set_mesh_m75450DE287A91452C63021F100D8B6A65A921CE1((&V_0), L_93, NULL);
		// break;
		goto IL_0426;
	}

IL_039e:
	{
		// instance.meshRenderer = reader.Read<UnityEngine.MeshRenderer>();
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_94 = ___reader0;
		NullCheck(L_94);
		MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE* L_95;
		L_95 = GenericVirtualFuncInvoker0< MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE* >::Invoke(ES3Reader_Read_TisMeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE_mADE66001251FAEAB39EE97DA447D0A80EAAB85C4_RuntimeMethod_var, L_94);
		ShapeModule_set_meshRenderer_m25111B1DC9F173FE054264094DB19564D375D1D6((&V_0), L_95, NULL);
		// break;
		goto IL_0426;
	}

IL_03ad:
	{
		// instance.skinnedMeshRenderer = reader.Read<UnityEngine.SkinnedMeshRenderer>();
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_96 = ___reader0;
		NullCheck(L_96);
		SkinnedMeshRenderer_t020C4E8648EA1C4C6BA5C41502919B387E7E1C2E* L_97;
		L_97 = GenericVirtualFuncInvoker0< SkinnedMeshRenderer_t020C4E8648EA1C4C6BA5C41502919B387E7E1C2E* >::Invoke(ES3Reader_Read_TisSkinnedMeshRenderer_t020C4E8648EA1C4C6BA5C41502919B387E7E1C2E_m9E77EF921E4ACFCE425D24538209CF592968463E_RuntimeMethod_var, L_96);
		ShapeModule_set_skinnedMeshRenderer_mB3B9D58C4A9D21F990EC2000D38B5E35C7FF5807((&V_0), L_97, NULL);
		// break;
		goto IL_0426;
	}

IL_03bc:
	{
		// instance.useMeshMaterialIndex = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_98 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_99 = ((ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_98);
		bool L_100;
		L_100 = GenericVirtualFuncInvoker1< bool, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mFFB70EE53D8CD0255A4E599780F62A3EB1520E83_RuntimeMethod_var, L_98, L_99);
		ShapeModule_set_useMeshMaterialIndex_m48CE9CB5BA8CAF93D4C92975B826A7BA8459B838((&V_0), L_100, NULL);
		// break;
		goto IL_0426;
	}

IL_03d0:
	{
		// instance.meshMaterialIndex = reader.Read<System.Int32>(ES3Type_int.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_101 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_102 = ((ES3Type_int_t05A5E7A96442F23CE33E24A71CD349372A70E0C3_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_int_t05A5E7A96442F23CE33E24A71CD349372A70E0C3_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_101);
		int32_t L_103;
		L_103 = GenericVirtualFuncInvoker1< int32_t, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mEFCC4D52DD5B822D3561A53591AE11CDB25CDB6F_RuntimeMethod_var, L_101, L_102);
		ShapeModule_set_meshMaterialIndex_mC72EF43FC31A137D1247E748E89FE0FF5FB2C29F((&V_0), L_103, NULL);
		// break;
		goto IL_0426;
	}

IL_03e4:
	{
		// instance.useMeshColors = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_104 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_105 = ((ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_104);
		bool L_106;
		L_106 = GenericVirtualFuncInvoker1< bool, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mFFB70EE53D8CD0255A4E599780F62A3EB1520E83_RuntimeMethod_var, L_104, L_105);
		ShapeModule_set_useMeshColors_m2B12B03E04E2ACEE2AE68B697F462232D42D6C6E((&V_0), L_106, NULL);
		// break;
		goto IL_0426;
	}

IL_03f8:
	{
		// instance.normalOffset = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_107 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_108 = ((ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_107);
		float L_109;
		L_109 = GenericVirtualFuncInvoker1< float, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mA86928BC888E342D2C2644535E3399952F5077ED_RuntimeMethod_var, L_107, L_108);
		ShapeModule_set_normalOffset_m24453DEF085D96323A09DEBD134283B7F23C263F((&V_0), L_109, NULL);
		// break;
		goto IL_0426;
	}

IL_040c:
	{
		// instance.arc = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_110 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_111 = ((ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_110);
		float L_112;
		L_112 = GenericVirtualFuncInvoker1< float, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mA86928BC888E342D2C2644535E3399952F5077ED_RuntimeMethod_var, L_110, L_111);
		ShapeModule_set_arc_mE9EF87E2AA959143B466CD55B7DAA65FBE155D1F((&V_0), L_112, NULL);
		// break;
		goto IL_0426;
	}

IL_0420:
	{
		// reader.Skip();
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_113 = ___reader0;
		NullCheck(L_113);
		VirtualActionInvoker0::Invoke(41 /* System.Void ES3Reader::Skip() */, L_113);
	}

IL_0426:
	{
		// while((propertyName = reader.ReadPropertyName()) != null)
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_114 = ___reader0;
		NullCheck(L_114);
		String_t* L_115;
		L_115 = VirtualFuncInvoker0< String_t* >::Invoke(21 /* System.String ES3Reader::ReadPropertyName() */, L_114);
		String_t* L_116 = L_115;
		V_1 = L_116;
		if (L_116)
		{
			goto IL_000c;
		}
	}
	{
		// }
		return;
	}
}
// System.Void ES3Types.ES3Type_ShapeModule::ReadInto<UnityEngine.ParticleSystem/CollisionModule>(ES3Reader,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ES3Type_ShapeModule_ReadInto_TisCollisionModule_tEE4892D4872C2907164A66DC424F1CFA1D527083_m82255624BFCADA4B1739779EB88012D20602A157_gshared (ES3Type_ShapeModule_t2A98821A3CBBB891C72216EA1D86C9579DFD70B7* __this, ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* ___reader0, RuntimeObject* ___obj1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mFFB70EE53D8CD0255A4E599780F62A3EB1520E83_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mEFCC4D52DD5B822D3561A53591AE11CDB25CDB6F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisMeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE_mADE66001251FAEAB39EE97DA447D0A80EAAB85C4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisMesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4_m4DD8C0823DA528C84509E776081834CEAC71FE88_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisParticleSystemMeshShapeType_t260D7CAA6014D0ACE2BCFE0BC588E1ADE3AF98E5_m2E1596CACABC5B7BB194A74A92C1E5627B3DB9D0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisParticleSystemShapeType_tADE62D07EDA71578326A03B50871391EE01F73BB_m3423F2435F483F46ABB4C8EAD9B78CD03D2742FB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mA86928BC888E342D2C2644535E3399952F5077ED_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisSkinnedMeshRenderer_t020C4E8648EA1C4C6BA5C41502919B387E7E1C2E_m9E77EF921E4ACFCE425D24538209CF592968463E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_m41744F4EDB47642D9EF02C774ADD5EADDE749262_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_Vector3_t29E9EC31EED86489FBD8A22FBD317F5BD5C3A3E9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_int_t05A5E7A96442F23CE33E24A71CD349372A70E0C3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ShapeModule_tAA38A0C5305DF2F9D96F89D4B8F762E2D034D8B2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral01837E2252AC8026A5EA3567A663017A662FBB70);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1228466552C1791B2019A329AFE94665D441168A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral60E56797D122AE71D3774956F66C6EEB9EA22C05);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6686C366F645244186604A3DA4B9A58012A85F1B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral82BECCAD895076775062861CDB46AADEF913D969);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8C9F18A4F030B96447955FBBA1A99FFC43B5D8E0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8E54BB51E569CB6A8D3C45D8AEF883A1559C1C0E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral91811EE149061D28B38320E2430CE8888AD6398B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBD49F93A7BC78A69E385CEC0E78F434BD2845A17);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCA1B66E295BD92E9FD3B6C708F09CA69A50BEFD1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE8744A8B8BD390EB66CA0CAE2376C973E6904FFB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEB0A157666700D8227FD4B66A26FDC02035E89BF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralED1F119527A0BCA45125EF8E0F719985DA86C0E1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF66E9083C67855AB6EBB4B74342E385A72AACE32);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF9BE17D634D1B07BCDCDA77A87710C946D81307B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFA5EC7168E9633DAAEAA255ECB55030EA60F064F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFC341A1966AF28A9A7A26EDFB78ABBF7DE4D0E1F);
		s_Il2CppMethodInitialized = true;
	}
	ShapeModule_tAA38A0C5305DF2F9D96F89D4B8F762E2D034D8B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	uint32_t V_2 = 0;
	{
		// var instance = (UnityEngine.ParticleSystem.ShapeModule)obj;
		RuntimeObject* L_0 = ___obj1;
		V_0 = ((*(ShapeModule_tAA38A0C5305DF2F9D96F89D4B8F762E2D034D8B2*)((ShapeModule_tAA38A0C5305DF2F9D96F89D4B8F762E2D034D8B2*)(ShapeModule_tAA38A0C5305DF2F9D96F89D4B8F762E2D034D8B2*)UnBox(L_0, ShapeModule_tAA38A0C5305DF2F9D96F89D4B8F762E2D034D8B2_il2cpp_TypeInfo_var))));
		goto IL_0426;
	}

IL_000c:
	{
		String_t* L_1 = V_1;
		uint32_t L_2;
		L_2 = U3CPrivateImplementationDetailsU3E_ComputeStringHash_m9E43873DE0DF480D27EC1C2AA3C09E74EA77F75D(L_1, NULL);
		V_2 = L_2;
		uint32_t L_3 = V_2;
		if ((!(((uint32_t)L_3) <= ((uint32_t)((int32_t)-2104025999)))))
		{
			goto IL_00ad;
		}
	}
	{
		uint32_t L_4 = V_2;
		if ((!(((uint32_t)L_4) <= ((uint32_t)((int32_t)666576729)))))
		{
			goto IL_0064;
		}
	}
	{
		uint32_t L_5 = V_2;
		if ((!(((uint32_t)L_5) <= ((uint32_t)((int32_t)49525662)))))
		{
			goto IL_0049;
		}
	}
	{
		uint32_t L_6 = V_2;
		if ((((int32_t)L_6) == ((int32_t)((int32_t)24602224))))
		{
			goto IL_0247;
		}
	}
	{
		uint32_t L_7 = V_2;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)49525662))))
		{
			goto IL_0136;
		}
	}
	{
		goto IL_0420;
	}

IL_0049:
	{
		uint32_t L_8 = V_2;
		if ((((int32_t)L_8) == ((int32_t)((int32_t)230313139))))
		{
			goto IL_019f;
		}
	}
	{
		uint32_t L_9 = V_2;
		if ((((int32_t)L_9) == ((int32_t)((int32_t)666576729))))
		{
			goto IL_01f3;
		}
	}
	{
		goto IL_0420;
	}

IL_0064:
	{
		uint32_t L_10 = V_2;
		if ((!(((uint32_t)L_10) <= ((uint32_t)((int32_t)955488309)))))
		{
			goto IL_0087;
		}
	}
	{
		uint32_t L_11 = V_2;
		if ((((int32_t)L_11) == ((int32_t)((int32_t)923624301))))
		{
			goto IL_0232;
		}
	}
	{
		uint32_t L_12 = V_2;
		if ((((int32_t)L_12) == ((int32_t)((int32_t)955488309))))
		{
			goto IL_0286;
		}
	}
	{
		goto IL_0420;
	}

IL_0087:
	{
		uint32_t L_13 = V_2;
		if ((((int32_t)L_13) == ((int32_t)((int32_t)980363995))))
		{
			goto IL_029b;
		}
	}
	{
		uint32_t L_14 = V_2;
		if ((((int32_t)L_14) == ((int32_t)((int32_t)985988853))))
		{
			goto IL_0175;
		}
	}
	{
		uint32_t L_15 = V_2;
		if ((((int32_t)L_15) == ((int32_t)((int32_t)-2104025999))))
		{
			goto IL_01de;
		}
	}
	{
		goto IL_0420;
	}

IL_00ad:
	{
		uint32_t L_16 = V_2;
		if ((!(((uint32_t)L_16) <= ((uint32_t)((int32_t)-1473810612)))))
		{
			goto IL_00f0;
		}
	}
	{
		uint32_t L_17 = V_2;
		if ((!(((uint32_t)L_17) <= ((uint32_t)((int32_t)-1726928010)))))
		{
			goto IL_00d5;
		}
	}
	{
		uint32_t L_18 = V_2;
		if ((((int32_t)L_18) == ((int32_t)((int32_t)-2083506667))))
		{
			goto IL_01c9;
		}
	}
	{
		uint32_t L_19 = V_2;
		if ((((int32_t)L_19) == ((int32_t)((int32_t)-1726928010))))
		{
			goto IL_014b;
		}
	}
	{
		goto IL_0420;
	}

IL_00d5:
	{
		uint32_t L_20 = V_2;
		if ((((int32_t)L_20) == ((int32_t)((int32_t)-1593786692))))
		{
			goto IL_0208;
		}
	}
	{
		uint32_t L_21 = V_2;
		if ((((int32_t)L_21) == ((int32_t)((int32_t)-1473810612))))
		{
			goto IL_018a;
		}
	}
	{
		goto IL_0420;
	}

IL_00f0:
	{
		uint32_t L_22 = V_2;
		if ((!(((uint32_t)L_22) <= ((uint32_t)((int32_t)-1386986472)))))
		{
			goto IL_0110;
		}
	}
	{
		uint32_t L_23 = V_2;
		if ((((int32_t)L_23) == ((int32_t)((int32_t)-1412039661))))
		{
			goto IL_0160;
		}
	}
	{
		uint32_t L_24 = V_2;
		if ((((int32_t)L_24) == ((int32_t)((int32_t)-1386986472))))
		{
			goto IL_01b4;
		}
	}
	{
		goto IL_0420;
	}

IL_0110:
	{
		uint32_t L_25 = V_2;
		if ((((int32_t)L_25) == ((int32_t)((int32_t)-584064197))))
		{
			goto IL_021d;
		}
	}
	{
		uint32_t L_26 = V_2;
		if ((((int32_t)L_26) == ((int32_t)((int32_t)-473474755))))
		{
			goto IL_0271;
		}
	}
	{
		uint32_t L_27 = V_2;
		if ((((int32_t)L_27) == ((int32_t)((int32_t)-365686981))))
		{
			goto IL_025c;
		}
	}
	{
		goto IL_0420;
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
		goto IL_0420;
	}

IL_014b:
	{
		String_t* L_30 = V_1;
		bool L_31;
		L_31 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_30, _stringLiteral82BECCAD895076775062861CDB46AADEF913D969, NULL);
		if (L_31)
		{
			goto IL_02c7;
		}
	}
	{
		goto IL_0420;
	}

IL_0160:
	{
		String_t* L_32 = V_1;
		bool L_33;
		L_33 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_32, _stringLiteral1228466552C1791B2019A329AFE94665D441168A, NULL);
		if (L_33)
		{
			goto IL_02d9;
		}
	}
	{
		goto IL_0420;
	}

IL_0175:
	{
		String_t* L_34 = V_1;
		bool L_35;
		L_35 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_34, _stringLiteralBD49F93A7BC78A69E385CEC0E78F434BD2845A17, NULL);
		if (L_35)
		{
			goto IL_02f0;
		}
	}
	{
		goto IL_0420;
	}

IL_018a:
	{
		String_t* L_36 = V_1;
		bool L_37;
		L_37 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_36, _stringLiteralED1F119527A0BCA45125EF8E0F719985DA86C0E1, NULL);
		if (L_37)
		{
			goto IL_0307;
		}
	}
	{
		goto IL_0420;
	}

IL_019f:
	{
		String_t* L_38 = V_1;
		bool L_39;
		L_39 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_38, _stringLiteral8C9F18A4F030B96447955FBBA1A99FFC43B5D8E0, NULL);
		if (L_39)
		{
			goto IL_031e;
		}
	}
	{
		goto IL_0420;
	}

IL_01b4:
	{
		String_t* L_40 = V_1;
		bool L_41;
		L_41 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_40, _stringLiteralFC341A1966AF28A9A7A26EDFB78ABBF7DE4D0E1F, NULL);
		if (L_41)
		{
			goto IL_0335;
		}
	}
	{
		goto IL_0420;
	}

IL_01c9:
	{
		String_t* L_42 = V_1;
		bool L_43;
		L_43 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_42, _stringLiteralE8744A8B8BD390EB66CA0CAE2376C973E6904FFB, NULL);
		if (L_43)
		{
			goto IL_034c;
		}
	}
	{
		goto IL_0420;
	}

IL_01de:
	{
		String_t* L_44 = V_1;
		bool L_45;
		L_45 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_44, _stringLiteralF9BE17D634D1B07BCDCDA77A87710C946D81307B, NULL);
		if (L_45)
		{
			goto IL_0363;
		}
	}
	{
		goto IL_0420;
	}

IL_01f3:
	{
		String_t* L_46 = V_1;
		bool L_47;
		L_47 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_46, _stringLiteralFA5EC7168E9633DAAEAA255ECB55030EA60F064F, NULL);
		if (L_47)
		{
			goto IL_037a;
		}
	}
	{
		goto IL_0420;
	}

IL_0208:
	{
		String_t* L_48 = V_1;
		bool L_49;
		L_49 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_48, _stringLiteralEB0A157666700D8227FD4B66A26FDC02035E89BF, NULL);
		if (L_49)
		{
			goto IL_038c;
		}
	}
	{
		goto IL_0420;
	}

IL_021d:
	{
		String_t* L_50 = V_1;
		bool L_51;
		L_51 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_50, _stringLiteral8E54BB51E569CB6A8D3C45D8AEF883A1559C1C0E, NULL);
		if (L_51)
		{
			goto IL_039e;
		}
	}
	{
		goto IL_0420;
	}

IL_0232:
	{
		String_t* L_52 = V_1;
		bool L_53;
		L_53 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_52, _stringLiteral60E56797D122AE71D3774956F66C6EEB9EA22C05, NULL);
		if (L_53)
		{
			goto IL_03ad;
		}
	}
	{
		goto IL_0420;
	}

IL_0247:
	{
		String_t* L_54 = V_1;
		bool L_55;
		L_55 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_54, _stringLiteral01837E2252AC8026A5EA3567A663017A662FBB70, NULL);
		if (L_55)
		{
			goto IL_03bc;
		}
	}
	{
		goto IL_0420;
	}

IL_025c:
	{
		String_t* L_56 = V_1;
		bool L_57;
		L_57 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_56, _stringLiteralF66E9083C67855AB6EBB4B74342E385A72AACE32, NULL);
		if (L_57)
		{
			goto IL_03d0;
		}
	}
	{
		goto IL_0420;
	}

IL_0271:
	{
		String_t* L_58 = V_1;
		bool L_59;
		L_59 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_58, _stringLiteral91811EE149061D28B38320E2430CE8888AD6398B, NULL);
		if (L_59)
		{
			goto IL_03e4;
		}
	}
	{
		goto IL_0420;
	}

IL_0286:
	{
		String_t* L_60 = V_1;
		bool L_61;
		L_61 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_60, _stringLiteral6686C366F645244186604A3DA4B9A58012A85F1B, NULL);
		if (L_61)
		{
			goto IL_03f8;
		}
	}
	{
		goto IL_0420;
	}

IL_029b:
	{
		String_t* L_62 = V_1;
		bool L_63;
		L_63 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_62, _stringLiteralCA1B66E295BD92E9FD3B6C708F09CA69A50BEFD1, NULL);
		if (L_63)
		{
			goto IL_040c;
		}
	}
	{
		goto IL_0420;
	}

IL_02b0:
	{
		// instance.enabled = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_64 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_65 = ((ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_64);
		bool L_66;
		L_66 = GenericVirtualFuncInvoker1< bool, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mFFB70EE53D8CD0255A4E599780F62A3EB1520E83_RuntimeMethod_var, L_64, L_65);
		ShapeModule_set_enabled_m6BA02351FEED67A82664135B922DDA66D71DF399((&V_0), L_66, NULL);
		// break;
		goto IL_0426;
	}

IL_02c7:
	{
		// instance.shapeType = reader.Read<UnityEngine.ParticleSystemShapeType>();
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_67 = ___reader0;
		NullCheck(L_67);
		int32_t L_68;
		L_68 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisParticleSystemShapeType_tADE62D07EDA71578326A03B50871391EE01F73BB_m3423F2435F483F46ABB4C8EAD9B78CD03D2742FB_RuntimeMethod_var, L_67);
		ShapeModule_set_shapeType_m4B5D1EA91037AD7065FE1D23652D919FED4D6D7F((&V_0), L_68, NULL);
		// break;
		goto IL_0426;
	}

IL_02d9:
	{
		// instance.randomDirectionAmount = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_69 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_70 = ((ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_69);
		float L_71;
		L_71 = GenericVirtualFuncInvoker1< float, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mA86928BC888E342D2C2644535E3399952F5077ED_RuntimeMethod_var, L_69, L_70);
		ShapeModule_set_randomDirectionAmount_m398CEE6D93207797559A80CE49A0C4138C96D0B3((&V_0), L_71, NULL);
		// break;
		goto IL_0426;
	}

IL_02f0:
	{
		// instance.sphericalDirectionAmount = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_72 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_73 = ((ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_72);
		float L_74;
		L_74 = GenericVirtualFuncInvoker1< float, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mA86928BC888E342D2C2644535E3399952F5077ED_RuntimeMethod_var, L_72, L_73);
		ShapeModule_set_sphericalDirectionAmount_m395143D474E51CE6AAF81C9DB84028A16B9BCAAB((&V_0), L_74, NULL);
		// break;
		goto IL_0426;
	}

IL_0307:
	{
		// instance.alignToDirection = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_75 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_76 = ((ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_75);
		bool L_77;
		L_77 = GenericVirtualFuncInvoker1< bool, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mFFB70EE53D8CD0255A4E599780F62A3EB1520E83_RuntimeMethod_var, L_75, L_76);
		ShapeModule_set_alignToDirection_mD632613E0E343654E6569F22BC9EFBB9247AC581((&V_0), L_77, NULL);
		// break;
		goto IL_0426;
	}

IL_031e:
	{
		// instance.radius = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_78 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_79 = ((ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_78);
		float L_80;
		L_80 = GenericVirtualFuncInvoker1< float, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mA86928BC888E342D2C2644535E3399952F5077ED_RuntimeMethod_var, L_78, L_79);
		ShapeModule_set_radius_m37F79E13EB60FA39EAE36B49DAC4AC880416E89C((&V_0), L_80, NULL);
		// break;
		goto IL_0426;
	}

IL_0335:
	{
		// instance.angle = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_81 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_82 = ((ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_81);
		float L_83;
		L_83 = GenericVirtualFuncInvoker1< float, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mA86928BC888E342D2C2644535E3399952F5077ED_RuntimeMethod_var, L_81, L_82);
		ShapeModule_set_angle_m62F5F037CD1DF55172B2D64DBF8271F9F917133A((&V_0), L_83, NULL);
		// break;
		goto IL_0426;
	}

IL_034c:
	{
		// instance.length = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_84 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_85 = ((ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_84);
		float L_86;
		L_86 = GenericVirtualFuncInvoker1< float, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mA86928BC888E342D2C2644535E3399952F5077ED_RuntimeMethod_var, L_84, L_85);
		ShapeModule_set_length_mD38341192A10095F9D0217993D410939F90CE621((&V_0), L_86, NULL);
		// break;
		goto IL_0426;
	}

IL_0363:
	{
		// instance.scale = reader.Read<UnityEngine.Vector3>(ES3Type_Vector3.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_87 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_88 = ((ES3Type_Vector3_t29E9EC31EED86489FBD8A22FBD317F5BD5C3A3E9_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Vector3_t29E9EC31EED86489FBD8A22FBD317F5BD5C3A3E9_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_87);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_89;
		L_89 = GenericVirtualFuncInvoker1< Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_m41744F4EDB47642D9EF02C774ADD5EADDE749262_RuntimeMethod_var, L_87, L_88);
		ShapeModule_set_scale_mDA84B80016FDA6B6EE181B108C3E59A2FFF9143D((&V_0), L_89, NULL);
		// break;
		goto IL_0426;
	}

IL_037a:
	{
		// instance.meshShapeType = reader.Read<UnityEngine.ParticleSystemMeshShapeType>();
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_90 = ___reader0;
		NullCheck(L_90);
		int32_t L_91;
		L_91 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisParticleSystemMeshShapeType_t260D7CAA6014D0ACE2BCFE0BC588E1ADE3AF98E5_m2E1596CACABC5B7BB194A74A92C1E5627B3DB9D0_RuntimeMethod_var, L_90);
		ShapeModule_set_meshShapeType_m335ED6F02244A07F8557E900D9935A4220AD23D0((&V_0), L_91, NULL);
		// break;
		goto IL_0426;
	}

IL_038c:
	{
		// instance.mesh = reader.Read<UnityEngine.Mesh>();
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_92 = ___reader0;
		NullCheck(L_92);
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_93;
		L_93 = GenericVirtualFuncInvoker0< Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* >::Invoke(ES3Reader_Read_TisMesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4_m4DD8C0823DA528C84509E776081834CEAC71FE88_RuntimeMethod_var, L_92);
		ShapeModule_set_mesh_m75450DE287A91452C63021F100D8B6A65A921CE1((&V_0), L_93, NULL);
		// break;
		goto IL_0426;
	}

IL_039e:
	{
		// instance.meshRenderer = reader.Read<UnityEngine.MeshRenderer>();
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_94 = ___reader0;
		NullCheck(L_94);
		MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE* L_95;
		L_95 = GenericVirtualFuncInvoker0< MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE* >::Invoke(ES3Reader_Read_TisMeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE_mADE66001251FAEAB39EE97DA447D0A80EAAB85C4_RuntimeMethod_var, L_94);
		ShapeModule_set_meshRenderer_m25111B1DC9F173FE054264094DB19564D375D1D6((&V_0), L_95, NULL);
		// break;
		goto IL_0426;
	}

IL_03ad:
	{
		// instance.skinnedMeshRenderer = reader.Read<UnityEngine.SkinnedMeshRenderer>();
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_96 = ___reader0;
		NullCheck(L_96);
		SkinnedMeshRenderer_t020C4E8648EA1C4C6BA5C41502919B387E7E1C2E* L_97;
		L_97 = GenericVirtualFuncInvoker0< SkinnedMeshRenderer_t020C4E8648EA1C4C6BA5C41502919B387E7E1C2E* >::Invoke(ES3Reader_Read_TisSkinnedMeshRenderer_t020C4E8648EA1C4C6BA5C41502919B387E7E1C2E_m9E77EF921E4ACFCE425D24538209CF592968463E_RuntimeMethod_var, L_96);
		ShapeModule_set_skinnedMeshRenderer_mB3B9D58C4A9D21F990EC2000D38B5E35C7FF5807((&V_0), L_97, NULL);
		// break;
		goto IL_0426;
	}

IL_03bc:
	{
		// instance.useMeshMaterialIndex = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_98 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_99 = ((ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_98);
		bool L_100;
		L_100 = GenericVirtualFuncInvoker1< bool, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mFFB70EE53D8CD0255A4E599780F62A3EB1520E83_RuntimeMethod_var, L_98, L_99);
		ShapeModule_set_useMeshMaterialIndex_m48CE9CB5BA8CAF93D4C92975B826A7BA8459B838((&V_0), L_100, NULL);
		// break;
		goto IL_0426;
	}

IL_03d0:
	{
		// instance.meshMaterialIndex = reader.Read<System.Int32>(ES3Type_int.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_101 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_102 = ((ES3Type_int_t05A5E7A96442F23CE33E24A71CD349372A70E0C3_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_int_t05A5E7A96442F23CE33E24A71CD349372A70E0C3_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_101);
		int32_t L_103;
		L_103 = GenericVirtualFuncInvoker1< int32_t, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mEFCC4D52DD5B822D3561A53591AE11CDB25CDB6F_RuntimeMethod_var, L_101, L_102);
		ShapeModule_set_meshMaterialIndex_mC72EF43FC31A137D1247E748E89FE0FF5FB2C29F((&V_0), L_103, NULL);
		// break;
		goto IL_0426;
	}

IL_03e4:
	{
		// instance.useMeshColors = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_104 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_105 = ((ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_104);
		bool L_106;
		L_106 = GenericVirtualFuncInvoker1< bool, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mFFB70EE53D8CD0255A4E599780F62A3EB1520E83_RuntimeMethod_var, L_104, L_105);
		ShapeModule_set_useMeshColors_m2B12B03E04E2ACEE2AE68B697F462232D42D6C6E((&V_0), L_106, NULL);
		// break;
		goto IL_0426;
	}

IL_03f8:
	{
		// instance.normalOffset = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_107 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_108 = ((ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_107);
		float L_109;
		L_109 = GenericVirtualFuncInvoker1< float, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mA86928BC888E342D2C2644535E3399952F5077ED_RuntimeMethod_var, L_107, L_108);
		ShapeModule_set_normalOffset_m24453DEF085D96323A09DEBD134283B7F23C263F((&V_0), L_109, NULL);
		// break;
		goto IL_0426;
	}

IL_040c:
	{
		// instance.arc = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_110 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_111 = ((ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_110);
		float L_112;
		L_112 = GenericVirtualFuncInvoker1< float, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mA86928BC888E342D2C2644535E3399952F5077ED_RuntimeMethod_var, L_110, L_111);
		ShapeModule_set_arc_mE9EF87E2AA959143B466CD55B7DAA65FBE155D1F((&V_0), L_112, NULL);
		// break;
		goto IL_0426;
	}

IL_0420:
	{
		// reader.Skip();
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_113 = ___reader0;
		NullCheck(L_113);
		VirtualActionInvoker0::Invoke(41 /* System.Void ES3Reader::Skip() */, L_113);
	}

IL_0426:
	{
		// while((propertyName = reader.ReadPropertyName()) != null)
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_114 = ___reader0;
		NullCheck(L_114);
		String_t* L_115;
		L_115 = VirtualFuncInvoker0< String_t* >::Invoke(21 /* System.String ES3Reader::ReadPropertyName() */, L_114);
		String_t* L_116 = L_115;
		V_1 = L_116;
		if (L_116)
		{
			goto IL_000c;
		}
	}
	{
		// }
		return;
	}
}
// System.Void ES3Types.ES3Type_ShapeModule::ReadInto<UnityEngine.ParticleSystem/ColorBySpeedModule>(ES3Reader,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ES3Type_ShapeModule_ReadInto_TisColorBySpeedModule_t808C4CC668431DDE51D5AD98A81C78DDB944948B_m20D5341A71D8CFEC8A5F55298F4768668610BBA4_gshared (ES3Type_ShapeModule_t2A98821A3CBBB891C72216EA1D86C9579DFD70B7* __this, ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* ___reader0, RuntimeObject* ___obj1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mFFB70EE53D8CD0255A4E599780F62A3EB1520E83_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mEFCC4D52DD5B822D3561A53591AE11CDB25CDB6F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisMeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE_mADE66001251FAEAB39EE97DA447D0A80EAAB85C4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisMesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4_m4DD8C0823DA528C84509E776081834CEAC71FE88_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisParticleSystemMeshShapeType_t260D7CAA6014D0ACE2BCFE0BC588E1ADE3AF98E5_m2E1596CACABC5B7BB194A74A92C1E5627B3DB9D0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisParticleSystemShapeType_tADE62D07EDA71578326A03B50871391EE01F73BB_m3423F2435F483F46ABB4C8EAD9B78CD03D2742FB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mA86928BC888E342D2C2644535E3399952F5077ED_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisSkinnedMeshRenderer_t020C4E8648EA1C4C6BA5C41502919B387E7E1C2E_m9E77EF921E4ACFCE425D24538209CF592968463E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_m41744F4EDB47642D9EF02C774ADD5EADDE749262_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_Vector3_t29E9EC31EED86489FBD8A22FBD317F5BD5C3A3E9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_int_t05A5E7A96442F23CE33E24A71CD349372A70E0C3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ShapeModule_tAA38A0C5305DF2F9D96F89D4B8F762E2D034D8B2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral01837E2252AC8026A5EA3567A663017A662FBB70);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1228466552C1791B2019A329AFE94665D441168A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral60E56797D122AE71D3774956F66C6EEB9EA22C05);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6686C366F645244186604A3DA4B9A58012A85F1B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral82BECCAD895076775062861CDB46AADEF913D969);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8C9F18A4F030B96447955FBBA1A99FFC43B5D8E0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8E54BB51E569CB6A8D3C45D8AEF883A1559C1C0E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral91811EE149061D28B38320E2430CE8888AD6398B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBD49F93A7BC78A69E385CEC0E78F434BD2845A17);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCA1B66E295BD92E9FD3B6C708F09CA69A50BEFD1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE8744A8B8BD390EB66CA0CAE2376C973E6904FFB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEB0A157666700D8227FD4B66A26FDC02035E89BF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralED1F119527A0BCA45125EF8E0F719985DA86C0E1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF66E9083C67855AB6EBB4B74342E385A72AACE32);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF9BE17D634D1B07BCDCDA77A87710C946D81307B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFA5EC7168E9633DAAEAA255ECB55030EA60F064F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFC341A1966AF28A9A7A26EDFB78ABBF7DE4D0E1F);
		s_Il2CppMethodInitialized = true;
	}
	ShapeModule_tAA38A0C5305DF2F9D96F89D4B8F762E2D034D8B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	uint32_t V_2 = 0;
	{
		// var instance = (UnityEngine.ParticleSystem.ShapeModule)obj;
		RuntimeObject* L_0 = ___obj1;
		V_0 = ((*(ShapeModule_tAA38A0C5305DF2F9D96F89D4B8F762E2D034D8B2*)((ShapeModule_tAA38A0C5305DF2F9D96F89D4B8F762E2D034D8B2*)(ShapeModule_tAA38A0C5305DF2F9D96F89D4B8F762E2D034D8B2*)UnBox(L_0, ShapeModule_tAA38A0C5305DF2F9D96F89D4B8F762E2D034D8B2_il2cpp_TypeInfo_var))));
		goto IL_0426;
	}

IL_000c:
	{
		String_t* L_1 = V_1;
		uint32_t L_2;
		L_2 = U3CPrivateImplementationDetailsU3E_ComputeStringHash_m9E43873DE0DF480D27EC1C2AA3C09E74EA77F75D(L_1, NULL);
		V_2 = L_2;
		uint32_t L_3 = V_2;
		if ((!(((uint32_t)L_3) <= ((uint32_t)((int32_t)-2104025999)))))
		{
			goto IL_00ad;
		}
	}
	{
		uint32_t L_4 = V_2;
		if ((!(((uint32_t)L_4) <= ((uint32_t)((int32_t)666576729)))))
		{
			goto IL_0064;
		}
	}
	{
		uint32_t L_5 = V_2;
		if ((!(((uint32_t)L_5) <= ((uint32_t)((int32_t)49525662)))))
		{
			goto IL_0049;
		}
	}
	{
		uint32_t L_6 = V_2;
		if ((((int32_t)L_6) == ((int32_t)((int32_t)24602224))))
		{
			goto IL_0247;
		}
	}
	{
		uint32_t L_7 = V_2;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)49525662))))
		{
			goto IL_0136;
		}
	}
	{
		goto IL_0420;
	}

IL_0049:
	{
		uint32_t L_8 = V_2;
		if ((((int32_t)L_8) == ((int32_t)((int32_t)230313139))))
		{
			goto IL_019f;
		}
	}
	{
		uint32_t L_9 = V_2;
		if ((((int32_t)L_9) == ((int32_t)((int32_t)666576729))))
		{
			goto IL_01f3;
		}
	}
	{
		goto IL_0420;
	}

IL_0064:
	{
		uint32_t L_10 = V_2;
		if ((!(((uint32_t)L_10) <= ((uint32_t)((int32_t)955488309)))))
		{
			goto IL_0087;
		}
	}
	{
		uint32_t L_11 = V_2;
		if ((((int32_t)L_11) == ((int32_t)((int32_t)923624301))))
		{
			goto IL_0232;
		}
	}
	{
		uint32_t L_12 = V_2;
		if ((((int32_t)L_12) == ((int32_t)((int32_t)955488309))))
		{
			goto IL_0286;
		}
	}
	{
		goto IL_0420;
	}

IL_0087:
	{
		uint32_t L_13 = V_2;
		if ((((int32_t)L_13) == ((int32_t)((int32_t)980363995))))
		{
			goto IL_029b;
		}
	}
	{
		uint32_t L_14 = V_2;
		if ((((int32_t)L_14) == ((int32_t)((int32_t)985988853))))
		{
			goto IL_0175;
		}
	}
	{
		uint32_t L_15 = V_2;
		if ((((int32_t)L_15) == ((int32_t)((int32_t)-2104025999))))
		{
			goto IL_01de;
		}
	}
	{
		goto IL_0420;
	}

IL_00ad:
	{
		uint32_t L_16 = V_2;
		if ((!(((uint32_t)L_16) <= ((uint32_t)((int32_t)-1473810612)))))
		{
			goto IL_00f0;
		}
	}
	{
		uint32_t L_17 = V_2;
		if ((!(((uint32_t)L_17) <= ((uint32_t)((int32_t)-1726928010)))))
		{
			goto IL_00d5;
		}
	}
	{
		uint32_t L_18 = V_2;
		if ((((int32_t)L_18) == ((int32_t)((int32_t)-2083506667))))
		{
			goto IL_01c9;
		}
	}
	{
		uint32_t L_19 = V_2;
		if ((((int32_t)L_19) == ((int32_t)((int32_t)-1726928010))))
		{
			goto IL_014b;
		}
	}
	{
		goto IL_0420;
	}

IL_00d5:
	{
		uint32_t L_20 = V_2;
		if ((((int32_t)L_20) == ((int32_t)((int32_t)-1593786692))))
		{
			goto IL_0208;
		}
	}
	{
		uint32_t L_21 = V_2;
		if ((((int32_t)L_21) == ((int32_t)((int32_t)-1473810612))))
		{
			goto IL_018a;
		}
	}
	{
		goto IL_0420;
	}

IL_00f0:
	{
		uint32_t L_22 = V_2;
		if ((!(((uint32_t)L_22) <= ((uint32_t)((int32_t)-1386986472)))))
		{
			goto IL_0110;
		}
	}
	{
		uint32_t L_23 = V_2;
		if ((((int32_t)L_23) == ((int32_t)((int32_t)-1412039661))))
		{
			goto IL_0160;
		}
	}
	{
		uint32_t L_24 = V_2;
		if ((((int32_t)L_24) == ((int32_t)((int32_t)-1386986472))))
		{
			goto IL_01b4;
		}
	}
	{
		goto IL_0420;
	}

IL_0110:
	{
		uint32_t L_25 = V_2;
		if ((((int32_t)L_25) == ((int32_t)((int32_t)-584064197))))
		{
			goto IL_021d;
		}
	}
	{
		uint32_t L_26 = V_2;
		if ((((int32_t)L_26) == ((int32_t)((int32_t)-473474755))))
		{
			goto IL_0271;
		}
	}
	{
		uint32_t L_27 = V_2;
		if ((((int32_t)L_27) == ((int32_t)((int32_t)-365686981))))
		{
			goto IL_025c;
		}
	}
	{
		goto IL_0420;
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
		goto IL_0420;
	}

IL_014b:
	{
		String_t* L_30 = V_1;
		bool L_31;
		L_31 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_30, _stringLiteral82BECCAD895076775062861CDB46AADEF913D969, NULL);
		if (L_31)
		{
			goto IL_02c7;
		}
	}
	{
		goto IL_0420;
	}

IL_0160:
	{
		String_t* L_32 = V_1;
		bool L_33;
		L_33 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_32, _stringLiteral1228466552C1791B2019A329AFE94665D441168A, NULL);
		if (L_33)
		{
			goto IL_02d9;
		}
	}
	{
		goto IL_0420;
	}

IL_0175:
	{
		String_t* L_34 = V_1;
		bool L_35;
		L_35 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_34, _stringLiteralBD49F93A7BC78A69E385CEC0E78F434BD2845A17, NULL);
		if (L_35)
		{
			goto IL_02f0;
		}
	}
	{
		goto IL_0420;
	}

IL_018a:
	{
		String_t* L_36 = V_1;
		bool L_37;
		L_37 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_36, _stringLiteralED1F119527A0BCA45125EF8E0F719985DA86C0E1, NULL);
		if (L_37)
		{
			goto IL_0307;
		}
	}
	{
		goto IL_0420;
	}

IL_019f:
	{
		String_t* L_38 = V_1;
		bool L_39;
		L_39 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_38, _stringLiteral8C9F18A4F030B96447955FBBA1A99FFC43B5D8E0, NULL);
		if (L_39)
		{
			goto IL_031e;
		}
	}
	{
		goto IL_0420;
	}

IL_01b4:
	{
		String_t* L_40 = V_1;
		bool L_41;
		L_41 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_40, _stringLiteralFC341A1966AF28A9A7A26EDFB78ABBF7DE4D0E1F, NULL);
		if (L_41)
		{
			goto IL_0335;
		}
	}
	{
		goto IL_0420;
	}

IL_01c9:
	{
		String_t* L_42 = V_1;
		bool L_43;
		L_43 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_42, _stringLiteralE8744A8B8BD390EB66CA0CAE2376C973E6904FFB, NULL);
		if (L_43)
		{
			goto IL_034c;
		}
	}
	{
		goto IL_0420;
	}

IL_01de:
	{
		String_t* L_44 = V_1;
		bool L_45;
		L_45 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_44, _stringLiteralF9BE17D634D1B07BCDCDA77A87710C946D81307B, NULL);
		if (L_45)
		{
			goto IL_0363;
		}
	}
	{
		goto IL_0420;
	}

IL_01f3:
	{
		String_t* L_46 = V_1;
		bool L_47;
		L_47 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_46, _stringLiteralFA5EC7168E9633DAAEAA255ECB55030EA60F064F, NULL);
		if (L_47)
		{
			goto IL_037a;
		}
	}
	{
		goto IL_0420;
	}

IL_0208:
	{
		String_t* L_48 = V_1;
		bool L_49;
		L_49 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_48, _stringLiteralEB0A157666700D8227FD4B66A26FDC02035E89BF, NULL);
		if (L_49)
		{
			goto IL_038c;
		}
	}
	{
		goto IL_0420;
	}

IL_021d:
	{
		String_t* L_50 = V_1;
		bool L_51;
		L_51 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_50, _stringLiteral8E54BB51E569CB6A8D3C45D8AEF883A1559C1C0E, NULL);
		if (L_51)
		{
			goto IL_039e;
		}
	}
	{
		goto IL_0420;
	}

IL_0232:
	{
		String_t* L_52 = V_1;
		bool L_53;
		L_53 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_52, _stringLiteral60E56797D122AE71D3774956F66C6EEB9EA22C05, NULL);
		if (L_53)
		{
			goto IL_03ad;
		}
	}
	{
		goto IL_0420;
	}

IL_0247:
	{
		String_t* L_54 = V_1;
		bool L_55;
		L_55 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_54, _stringLiteral01837E2252AC8026A5EA3567A663017A662FBB70, NULL);
		if (L_55)
		{
			goto IL_03bc;
		}
	}
	{
		goto IL_0420;
	}

IL_025c:
	{
		String_t* L_56 = V_1;
		bool L_57;
		L_57 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_56, _stringLiteralF66E9083C67855AB6EBB4B74342E385A72AACE32, NULL);
		if (L_57)
		{
			goto IL_03d0;
		}
	}
	{
		goto IL_0420;
	}

IL_0271:
	{
		String_t* L_58 = V_1;
		bool L_59;
		L_59 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_58, _stringLiteral91811EE149061D28B38320E2430CE8888AD6398B, NULL);
		if (L_59)
		{
			goto IL_03e4;
		}
	}
	{
		goto IL_0420;
	}

IL_0286:
	{
		String_t* L_60 = V_1;
		bool L_61;
		L_61 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_60, _stringLiteral6686C366F645244186604A3DA4B9A58012A85F1B, NULL);
		if (L_61)
		{
			goto IL_03f8;
		}
	}
	{
		goto IL_0420;
	}

IL_029b:
	{
		String_t* L_62 = V_1;
		bool L_63;
		L_63 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_62, _stringLiteralCA1B66E295BD92E9FD3B6C708F09CA69A50BEFD1, NULL);
		if (L_63)
		{
			goto IL_040c;
		}
	}
	{
		goto IL_0420;
	}

IL_02b0:
	{
		// instance.enabled = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_64 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_65 = ((ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_64);
		bool L_66;
		L_66 = GenericVirtualFuncInvoker1< bool, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mFFB70EE53D8CD0255A4E599780F62A3EB1520E83_RuntimeMethod_var, L_64, L_65);
		ShapeModule_set_enabled_m6BA02351FEED67A82664135B922DDA66D71DF399((&V_0), L_66, NULL);
		// break;
		goto IL_0426;
	}

IL_02c7:
	{
		// instance.shapeType = reader.Read<UnityEngine.ParticleSystemShapeType>();
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_67 = ___reader0;
		NullCheck(L_67);
		int32_t L_68;
		L_68 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisParticleSystemShapeType_tADE62D07EDA71578326A03B50871391EE01F73BB_m3423F2435F483F46ABB4C8EAD9B78CD03D2742FB_RuntimeMethod_var, L_67);
		ShapeModule_set_shapeType_m4B5D1EA91037AD7065FE1D23652D919FED4D6D7F((&V_0), L_68, NULL);
		// break;
		goto IL_0426;
	}

IL_02d9:
	{
		// instance.randomDirectionAmount = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_69 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_70 = ((ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_69);
		float L_71;
		L_71 = GenericVirtualFuncInvoker1< float, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mA86928BC888E342D2C2644535E3399952F5077ED_RuntimeMethod_var, L_69, L_70);
		ShapeModule_set_randomDirectionAmount_m398CEE6D93207797559A80CE49A0C4138C96D0B3((&V_0), L_71, NULL);
		// break;
		goto IL_0426;
	}

IL_02f0:
	{
		// instance.sphericalDirectionAmount = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_72 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_73 = ((ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_72);
		float L_74;
		L_74 = GenericVirtualFuncInvoker1< float, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mA86928BC888E342D2C2644535E3399952F5077ED_RuntimeMethod_var, L_72, L_73);
		ShapeModule_set_sphericalDirectionAmount_m395143D474E51CE6AAF81C9DB84028A16B9BCAAB((&V_0), L_74, NULL);
		// break;
		goto IL_0426;
	}

IL_0307:
	{
		// instance.alignToDirection = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_75 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_76 = ((ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_75);
		bool L_77;
		L_77 = GenericVirtualFuncInvoker1< bool, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mFFB70EE53D8CD0255A4E599780F62A3EB1520E83_RuntimeMethod_var, L_75, L_76);
		ShapeModule_set_alignToDirection_mD632613E0E343654E6569F22BC9EFBB9247AC581((&V_0), L_77, NULL);
		// break;
		goto IL_0426;
	}

IL_031e:
	{
		// instance.radius = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_78 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_79 = ((ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_78);
		float L_80;
		L_80 = GenericVirtualFuncInvoker1< float, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mA86928BC888E342D2C2644535E3399952F5077ED_RuntimeMethod_var, L_78, L_79);
		ShapeModule_set_radius_m37F79E13EB60FA39EAE36B49DAC4AC880416E89C((&V_0), L_80, NULL);
		// break;
		goto IL_0426;
	}

IL_0335:
	{
		// instance.angle = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_81 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_82 = ((ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_81);
		float L_83;
		L_83 = GenericVirtualFuncInvoker1< float, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mA86928BC888E342D2C2644535E3399952F5077ED_RuntimeMethod_var, L_81, L_82);
		ShapeModule_set_angle_m62F5F037CD1DF55172B2D64DBF8271F9F917133A((&V_0), L_83, NULL);
		// break;
		goto IL_0426;
	}

IL_034c:
	{
		// instance.length = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_84 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_85 = ((ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_84);
		float L_86;
		L_86 = GenericVirtualFuncInvoker1< float, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mA86928BC888E342D2C2644535E3399952F5077ED_RuntimeMethod_var, L_84, L_85);
		ShapeModule_set_length_mD38341192A10095F9D0217993D410939F90CE621((&V_0), L_86, NULL);
		// break;
		goto IL_0426;
	}

IL_0363:
	{
		// instance.scale = reader.Read<UnityEngine.Vector3>(ES3Type_Vector3.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_87 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_88 = ((ES3Type_Vector3_t29E9EC31EED86489FBD8A22FBD317F5BD5C3A3E9_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Vector3_t29E9EC31EED86489FBD8A22FBD317F5BD5C3A3E9_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_87);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_89;
		L_89 = GenericVirtualFuncInvoker1< Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_m41744F4EDB47642D9EF02C774ADD5EADDE749262_RuntimeMethod_var, L_87, L_88);
		ShapeModule_set_scale_mDA84B80016FDA6B6EE181B108C3E59A2FFF9143D((&V_0), L_89, NULL);
		// break;
		goto IL_0426;
	}

IL_037a:
	{
		// instance.meshShapeType = reader.Read<UnityEngine.ParticleSystemMeshShapeType>();
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_90 = ___reader0;
		NullCheck(L_90);
		int32_t L_91;
		L_91 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisParticleSystemMeshShapeType_t260D7CAA6014D0ACE2BCFE0BC588E1ADE3AF98E5_m2E1596CACABC5B7BB194A74A92C1E5627B3DB9D0_RuntimeMethod_var, L_90);
		ShapeModule_set_meshShapeType_m335ED6F02244A07F8557E900D9935A4220AD23D0((&V_0), L_91, NULL);
		// break;
		goto IL_0426;
	}

IL_038c:
	{
		// instance.mesh = reader.Read<UnityEngine.Mesh>();
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_92 = ___reader0;
		NullCheck(L_92);
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_93;
		L_93 = GenericVirtualFuncInvoker0< Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* >::Invoke(ES3Reader_Read_TisMesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4_m4DD8C0823DA528C84509E776081834CEAC71FE88_RuntimeMethod_var, L_92);
		ShapeModule_set_mesh_m75450DE287A91452C63021F100D8B6A65A921CE1((&V_0), L_93, NULL);
		// break;
		goto IL_0426;
	}

IL_039e:
	{
		// instance.meshRenderer = reader.Read<UnityEngine.MeshRenderer>();
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_94 = ___reader0;
		NullCheck(L_94);
		MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE* L_95;
		L_95 = GenericVirtualFuncInvoker0< MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE* >::Invoke(ES3Reader_Read_TisMeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE_mADE66001251FAEAB39EE97DA447D0A80EAAB85C4_RuntimeMethod_var, L_94);
		ShapeModule_set_meshRenderer_m25111B1DC9F173FE054264094DB19564D375D1D6((&V_0), L_95, NULL);
		// break;
		goto IL_0426;
	}

IL_03ad:
	{
		// instance.skinnedMeshRenderer = reader.Read<UnityEngine.SkinnedMeshRenderer>();
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_96 = ___reader0;
		NullCheck(L_96);
		SkinnedMeshRenderer_t020C4E8648EA1C4C6BA5C41502919B387E7E1C2E* L_97;
		L_97 = GenericVirtualFuncInvoker0< SkinnedMeshRenderer_t020C4E8648EA1C4C6BA5C41502919B387E7E1C2E* >::Invoke(ES3Reader_Read_TisSkinnedMeshRenderer_t020C4E8648EA1C4C6BA5C41502919B387E7E1C2E_m9E77EF921E4ACFCE425D24538209CF592968463E_RuntimeMethod_var, L_96);
		ShapeModule_set_skinnedMeshRenderer_mB3B9D58C4A9D21F990EC2000D38B5E35C7FF5807((&V_0), L_97, NULL);
		// break;
		goto IL_0426;
	}

IL_03bc:
	{
		// instance.useMeshMaterialIndex = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_98 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_99 = ((ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_98);
		bool L_100;
		L_100 = GenericVirtualFuncInvoker1< bool, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mFFB70EE53D8CD0255A4E599780F62A3EB1520E83_RuntimeMethod_var, L_98, L_99);
		ShapeModule_set_useMeshMaterialIndex_m48CE9CB5BA8CAF93D4C92975B826A7BA8459B838((&V_0), L_100, NULL);
		// break;
		goto IL_0426;
	}

IL_03d0:
	{
		// instance.meshMaterialIndex = reader.Read<System.Int32>(ES3Type_int.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_101 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_102 = ((ES3Type_int_t05A5E7A96442F23CE33E24A71CD349372A70E0C3_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_int_t05A5E7A96442F23CE33E24A71CD349372A70E0C3_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_101);
		int32_t L_103;
		L_103 = GenericVirtualFuncInvoker1< int32_t, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mEFCC4D52DD5B822D3561A53591AE11CDB25CDB6F_RuntimeMethod_var, L_101, L_102);
		ShapeModule_set_meshMaterialIndex_mC72EF43FC31A137D1247E748E89FE0FF5FB2C29F((&V_0), L_103, NULL);
		// break;
		goto IL_0426;
	}

IL_03e4:
	{
		// instance.useMeshColors = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_104 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_105 = ((ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_104);
		bool L_106;
		L_106 = GenericVirtualFuncInvoker1< bool, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mFFB70EE53D8CD0255A4E599780F62A3EB1520E83_RuntimeMethod_var, L_104, L_105);
		ShapeModule_set_useMeshColors_m2B12B03E04E2ACEE2AE68B697F462232D42D6C6E((&V_0), L_106, NULL);
		// break;
		goto IL_0426;
	}

IL_03f8:
	{
		// instance.normalOffset = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_107 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_108 = ((ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_107);
		float L_109;
		L_109 = GenericVirtualFuncInvoker1< float, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mA86928BC888E342D2C2644535E3399952F5077ED_RuntimeMethod_var, L_107, L_108);
		ShapeModule_set_normalOffset_m24453DEF085D96323A09DEBD134283B7F23C263F((&V_0), L_109, NULL);
		// break;
		goto IL_0426;
	}

IL_040c:
	{
		// instance.arc = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_110 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_111 = ((ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_110);
		float L_112;
		L_112 = GenericVirtualFuncInvoker1< float, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mA86928BC888E342D2C2644535E3399952F5077ED_RuntimeMethod_var, L_110, L_111);
		ShapeModule_set_arc_mE9EF87E2AA959143B466CD55B7DAA65FBE155D1F((&V_0), L_112, NULL);
		// break;
		goto IL_0426;
	}

IL_0420:
	{
		// reader.Skip();
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_113 = ___reader0;
		NullCheck(L_113);
		VirtualActionInvoker0::Invoke(41 /* System.Void ES3Reader::Skip() */, L_113);
	}

IL_0426:
	{
		// while((propertyName = reader.ReadPropertyName()) != null)
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_114 = ___reader0;
		NullCheck(L_114);
		String_t* L_115;
		L_115 = VirtualFuncInvoker0< String_t* >::Invoke(21 /* System.String ES3Reader::ReadPropertyName() */, L_114);
		String_t* L_116 = L_115;
		V_1 = L_116;
		if (L_116)
		{
			goto IL_000c;
		}
	}
	{
		// }
		return;
	}
}
// System.Void ES3Types.ES3Type_ShapeModule::ReadInto<UnityEngine.ParticleSystem/ColorOverLifetimeModule>(ES3Reader,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ES3Type_ShapeModule_ReadInto_TisColorOverLifetimeModule_t758EC8315B6C19D78C418D942CD1F94FE7EEE9D9_m00C857BEE1CDC815ACE5FC88FDB3F29FE78EA53F_gshared (ES3Type_ShapeModule_t2A98821A3CBBB891C72216EA1D86C9579DFD70B7* __this, ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* ___reader0, RuntimeObject* ___obj1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mFFB70EE53D8CD0255A4E599780F62A3EB1520E83_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mEFCC4D52DD5B822D3561A53591AE11CDB25CDB6F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisMeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE_mADE66001251FAEAB39EE97DA447D0A80EAAB85C4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisMesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4_m4DD8C0823DA528C84509E776081834CEAC71FE88_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisParticleSystemMeshShapeType_t260D7CAA6014D0ACE2BCFE0BC588E1ADE3AF98E5_m2E1596CACABC5B7BB194A74A92C1E5627B3DB9D0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisParticleSystemShapeType_tADE62D07EDA71578326A03B50871391EE01F73BB_m3423F2435F483F46ABB4C8EAD9B78CD03D2742FB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mA86928BC888E342D2C2644535E3399952F5077ED_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisSkinnedMeshRenderer_t020C4E8648EA1C4C6BA5C41502919B387E7E1C2E_m9E77EF921E4ACFCE425D24538209CF592968463E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_m41744F4EDB47642D9EF02C774ADD5EADDE749262_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_Vector3_t29E9EC31EED86489FBD8A22FBD317F5BD5C3A3E9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_int_t05A5E7A96442F23CE33E24A71CD349372A70E0C3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ShapeModule_tAA38A0C5305DF2F9D96F89D4B8F762E2D034D8B2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral01837E2252AC8026A5EA3567A663017A662FBB70);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1228466552C1791B2019A329AFE94665D441168A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral60E56797D122AE71D3774956F66C6EEB9EA22C05);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6686C366F645244186604A3DA4B9A58012A85F1B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral82BECCAD895076775062861CDB46AADEF913D969);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8C9F18A4F030B96447955FBBA1A99FFC43B5D8E0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8E54BB51E569CB6A8D3C45D8AEF883A1559C1C0E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral91811EE149061D28B38320E2430CE8888AD6398B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBD49F93A7BC78A69E385CEC0E78F434BD2845A17);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCA1B66E295BD92E9FD3B6C708F09CA69A50BEFD1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE8744A8B8BD390EB66CA0CAE2376C973E6904FFB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEB0A157666700D8227FD4B66A26FDC02035E89BF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralED1F119527A0BCA45125EF8E0F719985DA86C0E1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF66E9083C67855AB6EBB4B74342E385A72AACE32);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF9BE17D634D1B07BCDCDA77A87710C946D81307B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFA5EC7168E9633DAAEAA255ECB55030EA60F064F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFC341A1966AF28A9A7A26EDFB78ABBF7DE4D0E1F);
		s_Il2CppMethodInitialized = true;
	}
	ShapeModule_tAA38A0C5305DF2F9D96F89D4B8F762E2D034D8B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	uint32_t V_2 = 0;
	{
		// var instance = (UnityEngine.ParticleSystem.ShapeModule)obj;
		RuntimeObject* L_0 = ___obj1;
		V_0 = ((*(ShapeModule_tAA38A0C5305DF2F9D96F89D4B8F762E2D034D8B2*)((ShapeModule_tAA38A0C5305DF2F9D96F89D4B8F762E2D034D8B2*)(ShapeModule_tAA38A0C5305DF2F9D96F89D4B8F762E2D034D8B2*)UnBox(L_0, ShapeModule_tAA38A0C5305DF2F9D96F89D4B8F762E2D034D8B2_il2cpp_TypeInfo_var))));
		goto IL_0426;
	}

IL_000c:
	{
		String_t* L_1 = V_1;
		uint32_t L_2;
		L_2 = U3CPrivateImplementationDetailsU3E_ComputeStringHash_m9E43873DE0DF480D27EC1C2AA3C09E74EA77F75D(L_1, NULL);
		V_2 = L_2;
		uint32_t L_3 = V_2;
		if ((!(((uint32_t)L_3) <= ((uint32_t)((int32_t)-2104025999)))))
		{
			goto IL_00ad;
		}
	}
	{
		uint32_t L_4 = V_2;
		if ((!(((uint32_t)L_4) <= ((uint32_t)((int32_t)666576729)))))
		{
			goto IL_0064;
		}
	}
	{
		uint32_t L_5 = V_2;
		if ((!(((uint32_t)L_5) <= ((uint32_t)((int32_t)49525662)))))
		{
			goto IL_0049;
		}
	}
	{
		uint32_t L_6 = V_2;
		if ((((int32_t)L_6) == ((int32_t)((int32_t)24602224))))
		{
			goto IL_0247;
		}
	}
	{
		uint32_t L_7 = V_2;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)49525662))))
		{
			goto IL_0136;
		}
	}
	{
		goto IL_0420;
	}

IL_0049:
	{
		uint32_t L_8 = V_2;
		if ((((int32_t)L_8) == ((int32_t)((int32_t)230313139))))
		{
			goto IL_019f;
		}
	}
	{
		uint32_t L_9 = V_2;
		if ((((int32_t)L_9) == ((int32_t)((int32_t)666576729))))
		{
			goto IL_01f3;
		}
	}
	{
		goto IL_0420;
	}

IL_0064:
	{
		uint32_t L_10 = V_2;
		if ((!(((uint32_t)L_10) <= ((uint32_t)((int32_t)955488309)))))
		{
			goto IL_0087;
		}
	}
	{
		uint32_t L_11 = V_2;
		if ((((int32_t)L_11) == ((int32_t)((int32_t)923624301))))
		{
			goto IL_0232;
		}
	}
	{
		uint32_t L_12 = V_2;
		if ((((int32_t)L_12) == ((int32_t)((int32_t)955488309))))
		{
			goto IL_0286;
		}
	}
	{
		goto IL_0420;
	}

IL_0087:
	{
		uint32_t L_13 = V_2;
		if ((((int32_t)L_13) == ((int32_t)((int32_t)980363995))))
		{
			goto IL_029b;
		}
	}
	{
		uint32_t L_14 = V_2;
		if ((((int32_t)L_14) == ((int32_t)((int32_t)985988853))))
		{
			goto IL_0175;
		}
	}
	{
		uint32_t L_15 = V_2;
		if ((((int32_t)L_15) == ((int32_t)((int32_t)-2104025999))))
		{
			goto IL_01de;
		}
	}
	{
		goto IL_0420;
	}

IL_00ad:
	{
		uint32_t L_16 = V_2;
		if ((!(((uint32_t)L_16) <= ((uint32_t)((int32_t)-1473810612)))))
		{
			goto IL_00f0;
		}
	}
	{
		uint32_t L_17 = V_2;
		if ((!(((uint32_t)L_17) <= ((uint32_t)((int32_t)-1726928010)))))
		{
			goto IL_00d5;
		}
	}
	{
		uint32_t L_18 = V_2;
		if ((((int32_t)L_18) == ((int32_t)((int32_t)-2083506667))))
		{
			goto IL_01c9;
		}
	}
	{
		uint32_t L_19 = V_2;
		if ((((int32_t)L_19) == ((int32_t)((int32_t)-1726928010))))
		{
			goto IL_014b;
		}
	}
	{
		goto IL_0420;
	}

IL_00d5:
	{
		uint32_t L_20 = V_2;
		if ((((int32_t)L_20) == ((int32_t)((int32_t)-1593786692))))
		{
			goto IL_0208;
		}
	}
	{
		uint32_t L_21 = V_2;
		if ((((int32_t)L_21) == ((int32_t)((int32_t)-1473810612))))
		{
			goto IL_018a;
		}
	}
	{
		goto IL_0420;
	}

IL_00f0:
	{
		uint32_t L_22 = V_2;
		if ((!(((uint32_t)L_22) <= ((uint32_t)((int32_t)-1386986472)))))
		{
			goto IL_0110;
		}
	}
	{
		uint32_t L_23 = V_2;
		if ((((int32_t)L_23) == ((int32_t)((int32_t)-1412039661))))
		{
			goto IL_0160;
		}
	}
	{
		uint32_t L_24 = V_2;
		if ((((int32_t)L_24) == ((int32_t)((int32_t)-1386986472))))
		{
			goto IL_01b4;
		}
	}
	{
		goto IL_0420;
	}

IL_0110:
	{
		uint32_t L_25 = V_2;
		if ((((int32_t)L_25) == ((int32_t)((int32_t)-584064197))))
		{
			goto IL_021d;
		}
	}
	{
		uint32_t L_26 = V_2;
		if ((((int32_t)L_26) == ((int32_t)((int32_t)-473474755))))
		{
			goto IL_0271;
		}
	}
	{
		uint32_t L_27 = V_2;
		if ((((int32_t)L_27) == ((int32_t)((int32_t)-365686981))))
		{
			goto IL_025c;
		}
	}
	{
		goto IL_0420;
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
		goto IL_0420;
	}

IL_014b:
	{
		String_t* L_30 = V_1;
		bool L_31;
		L_31 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_30, _stringLiteral82BECCAD895076775062861CDB46AADEF913D969, NULL);
		if (L_31)
		{
			goto IL_02c7;
		}
	}
	{
		goto IL_0420;
	}

IL_0160:
	{
		String_t* L_32 = V_1;
		bool L_33;
		L_33 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_32, _stringLiteral1228466552C1791B2019A329AFE94665D441168A, NULL);
		if (L_33)
		{
			goto IL_02d9;
		}
	}
	{
		goto IL_0420;
	}

IL_0175:
	{
		String_t* L_34 = V_1;
		bool L_35;
		L_35 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_34, _stringLiteralBD49F93A7BC78A69E385CEC0E78F434BD2845A17, NULL);
		if (L_35)
		{
			goto IL_02f0;
		}
	}
	{
		goto IL_0420;
	}

IL_018a:
	{
		String_t* L_36 = V_1;
		bool L_37;
		L_37 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_36, _stringLiteralED1F119527A0BCA45125EF8E0F719985DA86C0E1, NULL);
		if (L_37)
		{
			goto IL_0307;
		}
	}
	{
		goto IL_0420;
	}

IL_019f:
	{
		String_t* L_38 = V_1;
		bool L_39;
		L_39 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_38, _stringLiteral8C9F18A4F030B96447955FBBA1A99FFC43B5D8E0, NULL);
		if (L_39)
		{
			goto IL_031e;
		}
	}
	{
		goto IL_0420;
	}

IL_01b4:
	{
		String_t* L_40 = V_1;
		bool L_41;
		L_41 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_40, _stringLiteralFC341A1966AF28A9A7A26EDFB78ABBF7DE4D0E1F, NULL);
		if (L_41)
		{
			goto IL_0335;
		}
	}
	{
		goto IL_0420;
	}

IL_01c9:
	{
		String_t* L_42 = V_1;
		bool L_43;
		L_43 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_42, _stringLiteralE8744A8B8BD390EB66CA0CAE2376C973E6904FFB, NULL);
		if (L_43)
		{
			goto IL_034c;
		}
	}
	{
		goto IL_0420;
	}

IL_01de:
	{
		String_t* L_44 = V_1;
		bool L_45;
		L_45 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_44, _stringLiteralF9BE17D634D1B07BCDCDA77A87710C946D81307B, NULL);
		if (L_45)
		{
			goto IL_0363;
		}
	}
	{
		goto IL_0420;
	}

IL_01f3:
	{
		String_t* L_46 = V_1;
		bool L_47;
		L_47 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_46, _stringLiteralFA5EC7168E9633DAAEAA255ECB55030EA60F064F, NULL);
		if (L_47)
		{
			goto IL_037a;
		}
	}
	{
		goto IL_0420;
	}

IL_0208:
	{
		String_t* L_48 = V_1;
		bool L_49;
		L_49 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_48, _stringLiteralEB0A157666700D8227FD4B66A26FDC02035E89BF, NULL);
		if (L_49)
		{
			goto IL_038c;
		}
	}
	{
		goto IL_0420;
	}

IL_021d:
	{
		String_t* L_50 = V_1;
		bool L_51;
		L_51 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_50, _stringLiteral8E54BB51E569CB6A8D3C45D8AEF883A1559C1C0E, NULL);
		if (L_51)
		{
			goto IL_039e;
		}
	}
	{
		goto IL_0420;
	}

IL_0232:
	{
		String_t* L_52 = V_1;
		bool L_53;
		L_53 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_52, _stringLiteral60E56797D122AE71D3774956F66C6EEB9EA22C05, NULL);
		if (L_53)
		{
			goto IL_03ad;
		}
	}
	{
		goto IL_0420;
	}

IL_0247:
	{
		String_t* L_54 = V_1;
		bool L_55;
		L_55 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_54, _stringLiteral01837E2252AC8026A5EA3567A663017A662FBB70, NULL);
		if (L_55)
		{
			goto IL_03bc;
		}
	}
	{
		goto IL_0420;
	}

IL_025c:
	{
		String_t* L_56 = V_1;
		bool L_57;
		L_57 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_56, _stringLiteralF66E9083C67855AB6EBB4B74342E385A72AACE32, NULL);
		if (L_57)
		{
			goto IL_03d0;
		}
	}
	{
		goto IL_0420;
	}

IL_0271:
	{
		String_t* L_58 = V_1;
		bool L_59;
		L_59 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_58, _stringLiteral91811EE149061D28B38320E2430CE8888AD6398B, NULL);
		if (L_59)
		{
			goto IL_03e4;
		}
	}
	{
		goto IL_0420;
	}

IL_0286:
	{
		String_t* L_60 = V_1;
		bool L_61;
		L_61 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_60, _stringLiteral6686C366F645244186604A3DA4B9A58012A85F1B, NULL);
		if (L_61)
		{
			goto IL_03f8;
		}
	}
	{
		goto IL_0420;
	}

IL_029b:
	{
		String_t* L_62 = V_1;
		bool L_63;
		L_63 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_62, _stringLiteralCA1B66E295BD92E9FD3B6C708F09CA69A50BEFD1, NULL);
		if (L_63)
		{
			goto IL_040c;
		}
	}
	{
		goto IL_0420;
	}

IL_02b0:
	{
		// instance.enabled = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_64 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_65 = ((ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_64);
		bool L_66;
		L_66 = GenericVirtualFuncInvoker1< bool, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mFFB70EE53D8CD0255A4E599780F62A3EB1520E83_RuntimeMethod_var, L_64, L_65);
		ShapeModule_set_enabled_m6BA02351FEED67A82664135B922DDA66D71DF399((&V_0), L_66, NULL);
		// break;
		goto IL_0426;
	}

IL_02c7:
	{
		// instance.shapeType = reader.Read<UnityEngine.ParticleSystemShapeType>();
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_67 = ___reader0;
		NullCheck(L_67);
		int32_t L_68;
		L_68 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisParticleSystemShapeType_tADE62D07EDA71578326A03B50871391EE01F73BB_m3423F2435F483F46ABB4C8EAD9B78CD03D2742FB_RuntimeMethod_var, L_67);
		ShapeModule_set_shapeType_m4B5D1EA91037AD7065FE1D23652D919FED4D6D7F((&V_0), L_68, NULL);
		// break;
		goto IL_0426;
	}

IL_02d9:
	{
		// instance.randomDirectionAmount = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_69 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_70 = ((ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_69);
		float L_71;
		L_71 = GenericVirtualFuncInvoker1< float, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mA86928BC888E342D2C2644535E3399952F5077ED_RuntimeMethod_var, L_69, L_70);
		ShapeModule_set_randomDirectionAmount_m398CEE6D93207797559A80CE49A0C4138C96D0B3((&V_0), L_71, NULL);
		// break;
		goto IL_0426;
	}

IL_02f0:
	{
		// instance.sphericalDirectionAmount = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_72 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_73 = ((ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_72);
		float L_74;
		L_74 = GenericVirtualFuncInvoker1< float, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mA86928BC888E342D2C2644535E3399952F5077ED_RuntimeMethod_var, L_72, L_73);
		ShapeModule_set_sphericalDirectionAmount_m395143D474E51CE6AAF81C9DB84028A16B9BCAAB((&V_0), L_74, NULL);
		// break;
		goto IL_0426;
	}

IL_0307:
	{
		// instance.alignToDirection = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_75 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_76 = ((ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_75);
		bool L_77;
		L_77 = GenericVirtualFuncInvoker1< bool, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mFFB70EE53D8CD0255A4E599780F62A3EB1520E83_RuntimeMethod_var, L_75, L_76);
		ShapeModule_set_alignToDirection_mD632613E0E343654E6569F22BC9EFBB9247AC581((&V_0), L_77, NULL);
		// break;
		goto IL_0426;
	}

IL_031e:
	{
		// instance.radius = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_78 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_79 = ((ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_78);
		float L_80;
		L_80 = GenericVirtualFuncInvoker1< float, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mA86928BC888E342D2C2644535E3399952F5077ED_RuntimeMethod_var, L_78, L_79);
		ShapeModule_set_radius_m37F79E13EB60FA39EAE36B49DAC4AC880416E89C((&V_0), L_80, NULL);
		// break;
		goto IL_0426;
	}

IL_0335:
	{
		// instance.angle = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_81 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_82 = ((ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_81);
		float L_83;
		L_83 = GenericVirtualFuncInvoker1< float, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mA86928BC888E342D2C2644535E3399952F5077ED_RuntimeMethod_var, L_81, L_82);
		ShapeModule_set_angle_m62F5F037CD1DF55172B2D64DBF8271F9F917133A((&V_0), L_83, NULL);
		// break;
		goto IL_0426;
	}

IL_034c:
	{
		// instance.length = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_84 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_85 = ((ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_84);
		float L_86;
		L_86 = GenericVirtualFuncInvoker1< float, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mA86928BC888E342D2C2644535E3399952F5077ED_RuntimeMethod_var, L_84, L_85);
		ShapeModule_set_length_mD38341192A10095F9D0217993D410939F90CE621((&V_0), L_86, NULL);
		// break;
		goto IL_0426;
	}

IL_0363:
	{
		// instance.scale = reader.Read<UnityEngine.Vector3>(ES3Type_Vector3.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_87 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_88 = ((ES3Type_Vector3_t29E9EC31EED86489FBD8A22FBD317F5BD5C3A3E9_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Vector3_t29E9EC31EED86489FBD8A22FBD317F5BD5C3A3E9_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_87);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_89;
		L_89 = GenericVirtualFuncInvoker1< Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_m41744F4EDB47642D9EF02C774ADD5EADDE749262_RuntimeMethod_var, L_87, L_88);
		ShapeModule_set_scale_mDA84B80016FDA6B6EE181B108C3E59A2FFF9143D((&V_0), L_89, NULL);
		// break;
		goto IL_0426;
	}

IL_037a:
	{
		// instance.meshShapeType = reader.Read<UnityEngine.ParticleSystemMeshShapeType>();
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_90 = ___reader0;
		NullCheck(L_90);
		int32_t L_91;
		L_91 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisParticleSystemMeshShapeType_t260D7CAA6014D0ACE2BCFE0BC588E1ADE3AF98E5_m2E1596CACABC5B7BB194A74A92C1E5627B3DB9D0_RuntimeMethod_var, L_90);
		ShapeModule_set_meshShapeType_m335ED6F02244A07F8557E900D9935A4220AD23D0((&V_0), L_91, NULL);
		// break;
		goto IL_0426;
	}

IL_038c:
	{
		// instance.mesh = reader.Read<UnityEngine.Mesh>();
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_92 = ___reader0;
		NullCheck(L_92);
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_93;
		L_93 = GenericVirtualFuncInvoker0< Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* >::Invoke(ES3Reader_Read_TisMesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4_m4DD8C0823DA528C84509E776081834CEAC71FE88_RuntimeMethod_var, L_92);
		ShapeModule_set_mesh_m75450DE287A91452C63021F100D8B6A65A921CE1((&V_0), L_93, NULL);
		// break;
		goto IL_0426;
	}

IL_039e:
	{
		// instance.meshRenderer = reader.Read<UnityEngine.MeshRenderer>();
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_94 = ___reader0;
		NullCheck(L_94);
		MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE* L_95;
		L_95 = GenericVirtualFuncInvoker0< MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE* >::Invoke(ES3Reader_Read_TisMeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE_mADE66001251FAEAB39EE97DA447D0A80EAAB85C4_RuntimeMethod_var, L_94);
		ShapeModule_set_meshRenderer_m25111B1DC9F173FE054264094DB19564D375D1D6((&V_0), L_95, NULL);
		// break;
		goto IL_0426;
	}

IL_03ad:
	{
		// instance.skinnedMeshRenderer = reader.Read<UnityEngine.SkinnedMeshRenderer>();
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_96 = ___reader0;
		NullCheck(L_96);
		SkinnedMeshRenderer_t020C4E8648EA1C4C6BA5C41502919B387E7E1C2E* L_97;
		L_97 = GenericVirtualFuncInvoker0< SkinnedMeshRenderer_t020C4E8648EA1C4C6BA5C41502919B387E7E1C2E* >::Invoke(ES3Reader_Read_TisSkinnedMeshRenderer_t020C4E8648EA1C4C6BA5C41502919B387E7E1C2E_m9E77EF921E4ACFCE425D24538209CF592968463E_RuntimeMethod_var, L_96);
		ShapeModule_set_skinnedMeshRenderer_mB3B9D58C4A9D21F990EC2000D38B5E35C7FF5807((&V_0), L_97, NULL);
		// break;
		goto IL_0426;
	}

IL_03bc:
	{
		// instance.useMeshMaterialIndex = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_98 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_99 = ((ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_98);
		bool L_100;
		L_100 = GenericVirtualFuncInvoker1< bool, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mFFB70EE53D8CD0255A4E599780F62A3EB1520E83_RuntimeMethod_var, L_98, L_99);
		ShapeModule_set_useMeshMaterialIndex_m48CE9CB5BA8CAF93D4C92975B826A7BA8459B838((&V_0), L_100, NULL);
		// break;
		goto IL_0426;
	}

IL_03d0:
	{
		// instance.meshMaterialIndex = reader.Read<System.Int32>(ES3Type_int.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_101 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_102 = ((ES3Type_int_t05A5E7A96442F23CE33E24A71CD349372A70E0C3_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_int_t05A5E7A96442F23CE33E24A71CD349372A70E0C3_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_101);
		int32_t L_103;
		L_103 = GenericVirtualFuncInvoker1< int32_t, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mEFCC4D52DD5B822D3561A53591AE11CDB25CDB6F_RuntimeMethod_var, L_101, L_102);
		ShapeModule_set_meshMaterialIndex_mC72EF43FC31A137D1247E748E89FE0FF5FB2C29F((&V_0), L_103, NULL);
		// break;
		goto IL_0426;
	}

IL_03e4:
	{
		// instance.useMeshColors = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_104 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_105 = ((ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_104);
		bool L_106;
		L_106 = GenericVirtualFuncInvoker1< bool, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mFFB70EE53D8CD0255A4E599780F62A3EB1520E83_RuntimeMethod_var, L_104, L_105);
		ShapeModule_set_useMeshColors_m2B12B03E04E2ACEE2AE68B697F462232D42D6C6E((&V_0), L_106, NULL);
		// break;
		goto IL_0426;
	}

IL_03f8:
	{
		// instance.normalOffset = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_107 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_108 = ((ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_107);
		float L_109;
		L_109 = GenericVirtualFuncInvoker1< float, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mA86928BC888E342D2C2644535E3399952F5077ED_RuntimeMethod_var, L_107, L_108);
		ShapeModule_set_normalOffset_m24453DEF085D96323A09DEBD134283B7F23C263F((&V_0), L_109, NULL);
		// break;
		goto IL_0426;
	}

IL_040c:
	{
		// instance.arc = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_110 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_111 = ((ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_110);
		float L_112;
		L_112 = GenericVirtualFuncInvoker1< float, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mA86928BC888E342D2C2644535E3399952F5077ED_RuntimeMethod_var, L_110, L_111);
		ShapeModule_set_arc_mE9EF87E2AA959143B466CD55B7DAA65FBE155D1F((&V_0), L_112, NULL);
		// break;
		goto IL_0426;
	}

IL_0420:
	{
		// reader.Skip();
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_113 = ___reader0;
		NullCheck(L_113);
		VirtualActionInvoker0::Invoke(41 /* System.Void ES3Reader::Skip() */, L_113);
	}

IL_0426:
	{
		// while((propertyName = reader.ReadPropertyName()) != null)
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_114 = ___reader0;
		NullCheck(L_114);
		String_t* L_115;
		L_115 = VirtualFuncInvoker0< String_t* >::Invoke(21 /* System.String ES3Reader::ReadPropertyName() */, L_114);
		String_t* L_116 = L_115;
		V_1 = L_116;
		if (L_116)
		{
			goto IL_000c;
		}
	}
	{
		// }
		return;
	}
}
// System.Void ES3Types.ES3Type_ShapeModule::ReadInto<UnityEngine.ParticleSystem/EmissionModule>(ES3Reader,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ES3Type_ShapeModule_ReadInto_TisEmissionModule_t0F469FA4A08003F6D9C610D2F716A9DFDB9A3678_m570C1E49B36D866E6780879B87D6C80D142E7207_gshared (ES3Type_ShapeModule_t2A98821A3CBBB891C72216EA1D86C9579DFD70B7* __this, ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* ___reader0, RuntimeObject* ___obj1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mFFB70EE53D8CD0255A4E599780F62A3EB1520E83_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mEFCC4D52DD5B822D3561A53591AE11CDB25CDB6F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisMeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE_mADE66001251FAEAB39EE97DA447D0A80EAAB85C4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisMesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4_m4DD8C0823DA528C84509E776081834CEAC71FE88_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisParticleSystemMeshShapeType_t260D7CAA6014D0ACE2BCFE0BC588E1ADE3AF98E5_m2E1596CACABC5B7BB194A74A92C1E5627B3DB9D0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisParticleSystemShapeType_tADE62D07EDA71578326A03B50871391EE01F73BB_m3423F2435F483F46ABB4C8EAD9B78CD03D2742FB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mA86928BC888E342D2C2644535E3399952F5077ED_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisSkinnedMeshRenderer_t020C4E8648EA1C4C6BA5C41502919B387E7E1C2E_m9E77EF921E4ACFCE425D24538209CF592968463E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_m41744F4EDB47642D9EF02C774ADD5EADDE749262_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_Vector3_t29E9EC31EED86489FBD8A22FBD317F5BD5C3A3E9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_int_t05A5E7A96442F23CE33E24A71CD349372A70E0C3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ShapeModule_tAA38A0C5305DF2F9D96F89D4B8F762E2D034D8B2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral01837E2252AC8026A5EA3567A663017A662FBB70);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1228466552C1791B2019A329AFE94665D441168A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral60E56797D122AE71D3774956F66C6EEB9EA22C05);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6686C366F645244186604A3DA4B9A58012A85F1B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral82BECCAD895076775062861CDB46AADEF913D969);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8C9F18A4F030B96447955FBBA1A99FFC43B5D8E0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8E54BB51E569CB6A8D3C45D8AEF883A1559C1C0E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral91811EE149061D28B38320E2430CE8888AD6398B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBD49F93A7BC78A69E385CEC0E78F434BD2845A17);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCA1B66E295BD92E9FD3B6C708F09CA69A50BEFD1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE8744A8B8BD390EB66CA0CAE2376C973E6904FFB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEB0A157666700D8227FD4B66A26FDC02035E89BF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralED1F119527A0BCA45125EF8E0F719985DA86C0E1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF66E9083C67855AB6EBB4B74342E385A72AACE32);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF9BE17D634D1B07BCDCDA77A87710C946D81307B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFA5EC7168E9633DAAEAA255ECB55030EA60F064F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFC341A1966AF28A9A7A26EDFB78ABBF7DE4D0E1F);
		s_Il2CppMethodInitialized = true;
	}
	ShapeModule_tAA38A0C5305DF2F9D96F89D4B8F762E2D034D8B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	uint32_t V_2 = 0;
	{
		// var instance = (UnityEngine.ParticleSystem.ShapeModule)obj;
		RuntimeObject* L_0 = ___obj1;
		V_0 = ((*(ShapeModule_tAA38A0C5305DF2F9D96F89D4B8F762E2D034D8B2*)((ShapeModule_tAA38A0C5305DF2F9D96F89D4B8F762E2D034D8B2*)(ShapeModule_tAA38A0C5305DF2F9D96F89D4B8F762E2D034D8B2*)UnBox(L_0, ShapeModule_tAA38A0C5305DF2F9D96F89D4B8F762E2D034D8B2_il2cpp_TypeInfo_var))));
		goto IL_0426;
	}

IL_000c:
	{
		String_t* L_1 = V_1;
		uint32_t L_2;
		L_2 = U3CPrivateImplementationDetailsU3E_ComputeStringHash_m9E43873DE0DF480D27EC1C2AA3C09E74EA77F75D(L_1, NULL);
		V_2 = L_2;
		uint32_t L_3 = V_2;
		if ((!(((uint32_t)L_3) <= ((uint32_t)((int32_t)-2104025999)))))
		{
			goto IL_00ad;
		}
	}
	{
		uint32_t L_4 = V_2;
		if ((!(((uint32_t)L_4) <= ((uint32_t)((int32_t)666576729)))))
		{
			goto IL_0064;
		}
	}
	{
		uint32_t L_5 = V_2;
		if ((!(((uint32_t)L_5) <= ((uint32_t)((int32_t)49525662)))))
		{
			goto IL_0049;
		}
	}
	{
		uint32_t L_6 = V_2;
		if ((((int32_t)L_6) == ((int32_t)((int32_t)24602224))))
		{
			goto IL_0247;
		}
	}
	{
		uint32_t L_7 = V_2;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)49525662))))
		{
			goto IL_0136;
		}
	}
	{
		goto IL_0420;
	}

IL_0049:
	{
		uint32_t L_8 = V_2;
		if ((((int32_t)L_8) == ((int32_t)((int32_t)230313139))))
		{
			goto IL_019f;
		}
	}
	{
		uint32_t L_9 = V_2;
		if ((((int32_t)L_9) == ((int32_t)((int32_t)666576729))))
		{
			goto IL_01f3;
		}
	}
	{
		goto IL_0420;
	}

IL_0064:
	{
		uint32_t L_10 = V_2;
		if ((!(((uint32_t)L_10) <= ((uint32_t)((int32_t)955488309)))))
		{
			goto IL_0087;
		}
	}
	{
		uint32_t L_11 = V_2;
		if ((((int32_t)L_11) == ((int32_t)((int32_t)923624301))))
		{
			goto IL_0232;
		}
	}
	{
		uint32_t L_12 = V_2;
		if ((((int32_t)L_12) == ((int32_t)((int32_t)955488309))))
		{
			goto IL_0286;
		}
	}
	{
		goto IL_0420;
	}

IL_0087:
	{
		uint32_t L_13 = V_2;
		if ((((int32_t)L_13) == ((int32_t)((int32_t)980363995))))
		{
			goto IL_029b;
		}
	}
	{
		uint32_t L_14 = V_2;
		if ((((int32_t)L_14) == ((int32_t)((int32_t)985988853))))
		{
			goto IL_0175;
		}
	}
	{
		uint32_t L_15 = V_2;
		if ((((int32_t)L_15) == ((int32_t)((int32_t)-2104025999))))
		{
			goto IL_01de;
		}
	}
	{
		goto IL_0420;
	}

IL_00ad:
	{
		uint32_t L_16 = V_2;
		if ((!(((uint32_t)L_16) <= ((uint32_t)((int32_t)-1473810612)))))
		{
			goto IL_00f0;
		}
	}
	{
		uint32_t L_17 = V_2;
		if ((!(((uint32_t)L_17) <= ((uint32_t)((int32_t)-1726928010)))))
		{
			goto IL_00d5;
		}
	}
	{
		uint32_t L_18 = V_2;
		if ((((int32_t)L_18) == ((int32_t)((int32_t)-2083506667))))
		{
			goto IL_01c9;
		}
	}
	{
		uint32_t L_19 = V_2;
		if ((((int32_t)L_19) == ((int32_t)((int32_t)-1726928010))))
		{
			goto IL_014b;
		}
	}
	{
		goto IL_0420;
	}

IL_00d5:
	{
		uint32_t L_20 = V_2;
		if ((((int32_t)L_20) == ((int32_t)((int32_t)-1593786692))))
		{
			goto IL_0208;
		}
	}
	{
		uint32_t L_21 = V_2;
		if ((((int32_t)L_21) == ((int32_t)((int32_t)-1473810612))))
		{
			goto IL_018a;
		}
	}
	{
		goto IL_0420;
	}

IL_00f0:
	{
		uint32_t L_22 = V_2;
		if ((!(((uint32_t)L_22) <= ((uint32_t)((int32_t)-1386986472)))))
		{
			goto IL_0110;
		}
	}
	{
		uint32_t L_23 = V_2;
		if ((((int32_t)L_23) == ((int32_t)((int32_t)-1412039661))))
		{
			goto IL_0160;
		}
	}
	{
		uint32_t L_24 = V_2;
		if ((((int32_t)L_24) == ((int32_t)((int32_t)-1386986472))))
		{
			goto IL_01b4;
		}
	}
	{
		goto IL_0420;
	}

IL_0110:
	{
		uint32_t L_25 = V_2;
		if ((((int32_t)L_25) == ((int32_t)((int32_t)-584064197))))
		{
			goto IL_021d;
		}
	}
	{
		uint32_t L_26 = V_2;
		if ((((int32_t)L_26) == ((int32_t)((int32_t)-473474755))))
		{
			goto IL_0271;
		}
	}
	{
		uint32_t L_27 = V_2;
		if ((((int32_t)L_27) == ((int32_t)((int32_t)-365686981))))
		{
			goto IL_025c;
		}
	}
	{
		goto IL_0420;
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
		goto IL_0420;
	}

IL_014b:
	{
		String_t* L_30 = V_1;
		bool L_31;
		L_31 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_30, _stringLiteral82BECCAD895076775062861CDB46AADEF913D969, NULL);
		if (L_31)
		{
			goto IL_02c7;
		}
	}
	{
		goto IL_0420;
	}

IL_0160:
	{
		String_t* L_32 = V_1;
		bool L_33;
		L_33 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_32, _stringLiteral1228466552C1791B2019A329AFE94665D441168A, NULL);
		if (L_33)
		{
			goto IL_02d9;
		}
	}
	{
		goto IL_0420;
	}

IL_0175:
	{
		String_t* L_34 = V_1;
		bool L_35;
		L_35 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_34, _stringLiteralBD49F93A7BC78A69E385CEC0E78F434BD2845A17, NULL);
		if (L_35)
		{
			goto IL_02f0;
		}
	}
	{
		goto IL_0420;
	}

IL_018a:
	{
		String_t* L_36 = V_1;
		bool L_37;
		L_37 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_36, _stringLiteralED1F119527A0BCA45125EF8E0F719985DA86C0E1, NULL);
		if (L_37)
		{
			goto IL_0307;
		}
	}
	{
		goto IL_0420;
	}

IL_019f:
	{
		String_t* L_38 = V_1;
		bool L_39;
		L_39 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_38, _stringLiteral8C9F18A4F030B96447955FBBA1A99FFC43B5D8E0, NULL);
		if (L_39)
		{
			goto IL_031e;
		}
	}
	{
		goto IL_0420;
	}

IL_01b4:
	{
		String_t* L_40 = V_1;
		bool L_41;
		L_41 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_40, _stringLiteralFC341A1966AF28A9A7A26EDFB78ABBF7DE4D0E1F, NULL);
		if (L_41)
		{
			goto IL_0335;
		}
	}
	{
		goto IL_0420;
	}

IL_01c9:
	{
		String_t* L_42 = V_1;
		bool L_43;
		L_43 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_42, _stringLiteralE8744A8B8BD390EB66CA0CAE2376C973E6904FFB, NULL);
		if (L_43)
		{
			goto IL_034c;
		}
	}
	{
		goto IL_0420;
	}

IL_01de:
	{
		String_t* L_44 = V_1;
		bool L_45;
		L_45 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_44, _stringLiteralF9BE17D634D1B07BCDCDA77A87710C946D81307B, NULL);
		if (L_45)
		{
			goto IL_0363;
		}
	}
	{
		goto IL_0420;
	}

IL_01f3:
	{
		String_t* L_46 = V_1;
		bool L_47;
		L_47 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_46, _stringLiteralFA5EC7168E9633DAAEAA255ECB55030EA60F064F, NULL);
		if (L_47)
		{
			goto IL_037a;
		}
	}
	{
		goto IL_0420;
	}

IL_0208:
	{
		String_t* L_48 = V_1;
		bool L_49;
		L_49 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_48, _stringLiteralEB0A157666700D8227FD4B66A26FDC02035E89BF, NULL);
		if (L_49)
		{
			goto IL_038c;
		}
	}
	{
		goto IL_0420;
	}

IL_021d:
	{
		String_t* L_50 = V_1;
		bool L_51;
		L_51 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_50, _stringLiteral8E54BB51E569CB6A8D3C45D8AEF883A1559C1C0E, NULL);
		if (L_51)
		{
			goto IL_039e;
		}
	}
	{
		goto IL_0420;
	}

IL_0232:
	{
		String_t* L_52 = V_1;
		bool L_53;
		L_53 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_52, _stringLiteral60E56797D122AE71D3774956F66C6EEB9EA22C05, NULL);
		if (L_53)
		{
			goto IL_03ad;
		}
	}
	{
		goto IL_0420;
	}

IL_0247:
	{
		String_t* L_54 = V_1;
		bool L_55;
		L_55 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_54, _stringLiteral01837E2252AC8026A5EA3567A663017A662FBB70, NULL);
		if (L_55)
		{
			goto IL_03bc;
		}
	}
	{
		goto IL_0420;
	}

IL_025c:
	{
		String_t* L_56 = V_1;
		bool L_57;
		L_57 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_56, _stringLiteralF66E9083C67855AB6EBB4B74342E385A72AACE32, NULL);
		if (L_57)
		{
			goto IL_03d0;
		}
	}
	{
		goto IL_0420;
	}

IL_0271:
	{
		String_t* L_58 = V_1;
		bool L_59;
		L_59 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_58, _stringLiteral91811EE149061D28B38320E2430CE8888AD6398B, NULL);
		if (L_59)
		{
			goto IL_03e4;
		}
	}
	{
		goto IL_0420;
	}

IL_0286:
	{
		String_t* L_60 = V_1;
		bool L_61;
		L_61 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_60, _stringLiteral6686C366F645244186604A3DA4B9A58012A85F1B, NULL);
		if (L_61)
		{
			goto IL_03f8;
		}
	}
	{
		goto IL_0420;
	}

IL_029b:
	{
		String_t* L_62 = V_1;
		bool L_63;
		L_63 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_62, _stringLiteralCA1B66E295BD92E9FD3B6C708F09CA69A50BEFD1, NULL);
		if (L_63)
		{
			goto IL_040c;
		}
	}
	{
		goto IL_0420;
	}

IL_02b0:
	{
		// instance.enabled = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_64 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_65 = ((ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_64);
		bool L_66;
		L_66 = GenericVirtualFuncInvoker1< bool, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mFFB70EE53D8CD0255A4E599780F62A3EB1520E83_RuntimeMethod_var, L_64, L_65);
		ShapeModule_set_enabled_m6BA02351FEED67A82664135B922DDA66D71DF399((&V_0), L_66, NULL);
		// break;
		goto IL_0426;
	}

IL_02c7:
	{
		// instance.shapeType = reader.Read<UnityEngine.ParticleSystemShapeType>();
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_67 = ___reader0;
		NullCheck(L_67);
		int32_t L_68;
		L_68 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisParticleSystemShapeType_tADE62D07EDA71578326A03B50871391EE01F73BB_m3423F2435F483F46ABB4C8EAD9B78CD03D2742FB_RuntimeMethod_var, L_67);
		ShapeModule_set_shapeType_m4B5D1EA91037AD7065FE1D23652D919FED4D6D7F((&V_0), L_68, NULL);
		// break;
		goto IL_0426;
	}

IL_02d9:
	{
		// instance.randomDirectionAmount = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_69 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_70 = ((ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_69);
		float L_71;
		L_71 = GenericVirtualFuncInvoker1< float, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mA86928BC888E342D2C2644535E3399952F5077ED_RuntimeMethod_var, L_69, L_70);
		ShapeModule_set_randomDirectionAmount_m398CEE6D93207797559A80CE49A0C4138C96D0B3((&V_0), L_71, NULL);
		// break;
		goto IL_0426;
	}

IL_02f0:
	{
		// instance.sphericalDirectionAmount = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_72 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_73 = ((ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_72);
		float L_74;
		L_74 = GenericVirtualFuncInvoker1< float, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mA86928BC888E342D2C2644535E3399952F5077ED_RuntimeMethod_var, L_72, L_73);
		ShapeModule_set_sphericalDirectionAmount_m395143D474E51CE6AAF81C9DB84028A16B9BCAAB((&V_0), L_74, NULL);
		// break;
		goto IL_0426;
	}

IL_0307:
	{
		// instance.alignToDirection = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_75 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_76 = ((ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_75);
		bool L_77;
		L_77 = GenericVirtualFuncInvoker1< bool, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mFFB70EE53D8CD0255A4E599780F62A3EB1520E83_RuntimeMethod_var, L_75, L_76);
		ShapeModule_set_alignToDirection_mD632613E0E343654E6569F22BC9EFBB9247AC581((&V_0), L_77, NULL);
		// break;
		goto IL_0426;
	}

IL_031e:
	{
		// instance.radius = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_78 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_79 = ((ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_78);
		float L_80;
		L_80 = GenericVirtualFuncInvoker1< float, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mA86928BC888E342D2C2644535E3399952F5077ED_RuntimeMethod_var, L_78, L_79);
		ShapeModule_set_radius_m37F79E13EB60FA39EAE36B49DAC4AC880416E89C((&V_0), L_80, NULL);
		// break;
		goto IL_0426;
	}

IL_0335:
	{
		// instance.angle = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_81 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_82 = ((ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_81);
		float L_83;
		L_83 = GenericVirtualFuncInvoker1< float, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mA86928BC888E342D2C2644535E3399952F5077ED_RuntimeMethod_var, L_81, L_82);
		ShapeModule_set_angle_m62F5F037CD1DF55172B2D64DBF8271F9F917133A((&V_0), L_83, NULL);
		// break;
		goto IL_0426;
	}

IL_034c:
	{
		// instance.length = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_84 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_85 = ((ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_84);
		float L_86;
		L_86 = GenericVirtualFuncInvoker1< float, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mA86928BC888E342D2C2644535E3399952F5077ED_RuntimeMethod_var, L_84, L_85);
		ShapeModule_set_length_mD38341192A10095F9D0217993D410939F90CE621((&V_0), L_86, NULL);
		// break;
		goto IL_0426;
	}

IL_0363:
	{
		// instance.scale = reader.Read<UnityEngine.Vector3>(ES3Type_Vector3.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_87 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_88 = ((ES3Type_Vector3_t29E9EC31EED86489FBD8A22FBD317F5BD5C3A3E9_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Vector3_t29E9EC31EED86489FBD8A22FBD317F5BD5C3A3E9_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_87);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_89;
		L_89 = GenericVirtualFuncInvoker1< Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_m41744F4EDB47642D9EF02C774ADD5EADDE749262_RuntimeMethod_var, L_87, L_88);
		ShapeModule_set_scale_mDA84B80016FDA6B6EE181B108C3E59A2FFF9143D((&V_0), L_89, NULL);
		// break;
		goto IL_0426;
	}

IL_037a:
	{
		// instance.meshShapeType = reader.Read<UnityEngine.ParticleSystemMeshShapeType>();
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_90 = ___reader0;
		NullCheck(L_90);
		int32_t L_91;
		L_91 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisParticleSystemMeshShapeType_t260D7CAA6014D0ACE2BCFE0BC588E1ADE3AF98E5_m2E1596CACABC5B7BB194A74A92C1E5627B3DB9D0_RuntimeMethod_var, L_90);
		ShapeModule_set_meshShapeType_m335ED6F02244A07F8557E900D9935A4220AD23D0((&V_0), L_91, NULL);
		// break;
		goto IL_0426;
	}

IL_038c:
	{
		// instance.mesh = reader.Read<UnityEngine.Mesh>();
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_92 = ___reader0;
		NullCheck(L_92);
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_93;
		L_93 = GenericVirtualFuncInvoker0< Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* >::Invoke(ES3Reader_Read_TisMesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4_m4DD8C0823DA528C84509E776081834CEAC71FE88_RuntimeMethod_var, L_92);
		ShapeModule_set_mesh_m75450DE287A91452C63021F100D8B6A65A921CE1((&V_0), L_93, NULL);
		// break;
		goto IL_0426;
	}

IL_039e:
	{
		// instance.meshRenderer = reader.Read<UnityEngine.MeshRenderer>();
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_94 = ___reader0;
		NullCheck(L_94);
		MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE* L_95;
		L_95 = GenericVirtualFuncInvoker0< MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE* >::Invoke(ES3Reader_Read_TisMeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE_mADE66001251FAEAB39EE97DA447D0A80EAAB85C4_RuntimeMethod_var, L_94);
		ShapeModule_set_meshRenderer_m25111B1DC9F173FE054264094DB19564D375D1D6((&V_0), L_95, NULL);
		// break;
		goto IL_0426;
	}

IL_03ad:
	{
		// instance.skinnedMeshRenderer = reader.Read<UnityEngine.SkinnedMeshRenderer>();
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_96 = ___reader0;
		NullCheck(L_96);
		SkinnedMeshRenderer_t020C4E8648EA1C4C6BA5C41502919B387E7E1C2E* L_97;
		L_97 = GenericVirtualFuncInvoker0< SkinnedMeshRenderer_t020C4E8648EA1C4C6BA5C41502919B387E7E1C2E* >::Invoke(ES3Reader_Read_TisSkinnedMeshRenderer_t020C4E8648EA1C4C6BA5C41502919B387E7E1C2E_m9E77EF921E4ACFCE425D24538209CF592968463E_RuntimeMethod_var, L_96);
		ShapeModule_set_skinnedMeshRenderer_mB3B9D58C4A9D21F990EC2000D38B5E35C7FF5807((&V_0), L_97, NULL);
		// break;
		goto IL_0426;
	}

IL_03bc:
	{
		// instance.useMeshMaterialIndex = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_98 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_99 = ((ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_98);
		bool L_100;
		L_100 = GenericVirtualFuncInvoker1< bool, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mFFB70EE53D8CD0255A4E599780F62A3EB1520E83_RuntimeMethod_var, L_98, L_99);
		ShapeModule_set_useMeshMaterialIndex_m48CE9CB5BA8CAF93D4C92975B826A7BA8459B838((&V_0), L_100, NULL);
		// break;
		goto IL_0426;
	}

IL_03d0:
	{
		// instance.meshMaterialIndex = reader.Read<System.Int32>(ES3Type_int.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_101 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_102 = ((ES3Type_int_t05A5E7A96442F23CE33E24A71CD349372A70E0C3_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_int_t05A5E7A96442F23CE33E24A71CD349372A70E0C3_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_101);
		int32_t L_103;
		L_103 = GenericVirtualFuncInvoker1< int32_t, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mEFCC4D52DD5B822D3561A53591AE11CDB25CDB6F_RuntimeMethod_var, L_101, L_102);
		ShapeModule_set_meshMaterialIndex_mC72EF43FC31A137D1247E748E89FE0FF5FB2C29F((&V_0), L_103, NULL);
		// break;
		goto IL_0426;
	}

IL_03e4:
	{
		// instance.useMeshColors = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_104 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_105 = ((ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_104);
		bool L_106;
		L_106 = GenericVirtualFuncInvoker1< bool, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mFFB70EE53D8CD0255A4E599780F62A3EB1520E83_RuntimeMethod_var, L_104, L_105);
		ShapeModule_set_useMeshColors_m2B12B03E04E2ACEE2AE68B697F462232D42D6C6E((&V_0), L_106, NULL);
		// break;
		goto IL_0426;
	}

IL_03f8:
	{
		// instance.normalOffset = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_107 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_108 = ((ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_107);
		float L_109;
		L_109 = GenericVirtualFuncInvoker1< float, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mA86928BC888E342D2C2644535E3399952F5077ED_RuntimeMethod_var, L_107, L_108);
		ShapeModule_set_normalOffset_m24453DEF085D96323A09DEBD134283B7F23C263F((&V_0), L_109, NULL);
		// break;
		goto IL_0426;
	}

IL_040c:
	{
		// instance.arc = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_110 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_111 = ((ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_110);
		float L_112;
		L_112 = GenericVirtualFuncInvoker1< float, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mA86928BC888E342D2C2644535E3399952F5077ED_RuntimeMethod_var, L_110, L_111);
		ShapeModule_set_arc_mE9EF87E2AA959143B466CD55B7DAA65FBE155D1F((&V_0), L_112, NULL);
		// break;
		goto IL_0426;
	}

IL_0420:
	{
		// reader.Skip();
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_113 = ___reader0;
		NullCheck(L_113);
		VirtualActionInvoker0::Invoke(41 /* System.Void ES3Reader::Skip() */, L_113);
	}

IL_0426:
	{
		// while((propertyName = reader.ReadPropertyName()) != null)
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_114 = ___reader0;
		NullCheck(L_114);
		String_t* L_115;
		L_115 = VirtualFuncInvoker0< String_t* >::Invoke(21 /* System.String ES3Reader::ReadPropertyName() */, L_114);
		String_t* L_116 = L_115;
		V_1 = L_116;
		if (L_116)
		{
			goto IL_000c;
		}
	}
	{
		// }
		return;
	}
}
// System.Void ES3Types.ES3Type_ShapeModule::ReadInto<UnityEngine.ParticleSystem/ExternalForcesModule>(ES3Reader,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ES3Type_ShapeModule_ReadInto_TisExternalForcesModule_t4494E21ECF96F072432EF4DDC5F84BAF84912FC7_mA7732BD44D68604CA8CF9071BE4551D7161FF73B_gshared (ES3Type_ShapeModule_t2A98821A3CBBB891C72216EA1D86C9579DFD70B7* __this, ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* ___reader0, RuntimeObject* ___obj1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mFFB70EE53D8CD0255A4E599780F62A3EB1520E83_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mEFCC4D52DD5B822D3561A53591AE11CDB25CDB6F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisMeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE_mADE66001251FAEAB39EE97DA447D0A80EAAB85C4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisMesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4_m4DD8C0823DA528C84509E776081834CEAC71FE88_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisParticleSystemMeshShapeType_t260D7CAA6014D0ACE2BCFE0BC588E1ADE3AF98E5_m2E1596CACABC5B7BB194A74A92C1E5627B3DB9D0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisParticleSystemShapeType_tADE62D07EDA71578326A03B50871391EE01F73BB_m3423F2435F483F46ABB4C8EAD9B78CD03D2742FB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mA86928BC888E342D2C2644535E3399952F5077ED_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisSkinnedMeshRenderer_t020C4E8648EA1C4C6BA5C41502919B387E7E1C2E_m9E77EF921E4ACFCE425D24538209CF592968463E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_m41744F4EDB47642D9EF02C774ADD5EADDE749262_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_Vector3_t29E9EC31EED86489FBD8A22FBD317F5BD5C3A3E9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_int_t05A5E7A96442F23CE33E24A71CD349372A70E0C3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ShapeModule_tAA38A0C5305DF2F9D96F89D4B8F762E2D034D8B2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral01837E2252AC8026A5EA3567A663017A662FBB70);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1228466552C1791B2019A329AFE94665D441168A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral60E56797D122AE71D3774956F66C6EEB9EA22C05);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6686C366F645244186604A3DA4B9A58012A85F1B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral82BECCAD895076775062861CDB46AADEF913D969);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8C9F18A4F030B96447955FBBA1A99FFC43B5D8E0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8E54BB51E569CB6A8D3C45D8AEF883A1559C1C0E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral91811EE149061D28B38320E2430CE8888AD6398B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBD49F93A7BC78A69E385CEC0E78F434BD2845A17);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCA1B66E295BD92E9FD3B6C708F09CA69A50BEFD1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE8744A8B8BD390EB66CA0CAE2376C973E6904FFB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEB0A157666700D8227FD4B66A26FDC02035E89BF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralED1F119527A0BCA45125EF8E0F719985DA86C0E1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF66E9083C67855AB6EBB4B74342E385A72AACE32);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF9BE17D634D1B07BCDCDA77A87710C946D81307B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFA5EC7168E9633DAAEAA255ECB55030EA60F064F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFC341A1966AF28A9A7A26EDFB78ABBF7DE4D0E1F);
		s_Il2CppMethodInitialized = true;
	}
	ShapeModule_tAA38A0C5305DF2F9D96F89D4B8F762E2D034D8B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	uint32_t V_2 = 0;
	{
		// var instance = (UnityEngine.ParticleSystem.ShapeModule)obj;
		RuntimeObject* L_0 = ___obj1;
		V_0 = ((*(ShapeModule_tAA38A0C5305DF2F9D96F89D4B8F762E2D034D8B2*)((ShapeModule_tAA38A0C5305DF2F9D96F89D4B8F762E2D034D8B2*)(ShapeModule_tAA38A0C5305DF2F9D96F89D4B8F762E2D034D8B2*)UnBox(L_0, ShapeModule_tAA38A0C5305DF2F9D96F89D4B8F762E2D034D8B2_il2cpp_TypeInfo_var))));
		goto IL_0426;
	}

IL_000c:
	{
		String_t* L_1 = V_1;
		uint32_t L_2;
		L_2 = U3CPrivateImplementationDetailsU3E_ComputeStringHash_m9E43873DE0DF480D27EC1C2AA3C09E74EA77F75D(L_1, NULL);
		V_2 = L_2;
		uint32_t L_3 = V_2;
		if ((!(((uint32_t)L_3) <= ((uint32_t)((int32_t)-2104025999)))))
		{
			goto IL_00ad;
		}
	}
	{
		uint32_t L_4 = V_2;
		if ((!(((uint32_t)L_4) <= ((uint32_t)((int32_t)666576729)))))
		{
			goto IL_0064;
		}
	}
	{
		uint32_t L_5 = V_2;
		if ((!(((uint32_t)L_5) <= ((uint32_t)((int32_t)49525662)))))
		{
			goto IL_0049;
		}
	}
	{
		uint32_t L_6 = V_2;
		if ((((int32_t)L_6) == ((int32_t)((int32_t)24602224))))
		{
			goto IL_0247;
		}
	}
	{
		uint32_t L_7 = V_2;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)49525662))))
		{
			goto IL_0136;
		}
	}
	{
		goto IL_0420;
	}

IL_0049:
	{
		uint32_t L_8 = V_2;
		if ((((int32_t)L_8) == ((int32_t)((int32_t)230313139))))
		{
			goto IL_019f;
		}
	}
	{
		uint32_t L_9 = V_2;
		if ((((int32_t)L_9) == ((int32_t)((int32_t)666576729))))
		{
			goto IL_01f3;
		}
	}
	{
		goto IL_0420;
	}

IL_0064:
	{
		uint32_t L_10 = V_2;
		if ((!(((uint32_t)L_10) <= ((uint32_t)((int32_t)955488309)))))
		{
			goto IL_0087;
		}
	}
	{
		uint32_t L_11 = V_2;
		if ((((int32_t)L_11) == ((int32_t)((int32_t)923624301))))
		{
			goto IL_0232;
		}
	}
	{
		uint32_t L_12 = V_2;
		if ((((int32_t)L_12) == ((int32_t)((int32_t)955488309))))
		{
			goto IL_0286;
		}
	}
	{
		goto IL_0420;
	}

IL_0087:
	{
		uint32_t L_13 = V_2;
		if ((((int32_t)L_13) == ((int32_t)((int32_t)980363995))))
		{
			goto IL_029b;
		}
	}
	{
		uint32_t L_14 = V_2;
		if ((((int32_t)L_14) == ((int32_t)((int32_t)985988853))))
		{
			goto IL_0175;
		}
	}
	{
		uint32_t L_15 = V_2;
		if ((((int32_t)L_15) == ((int32_t)((int32_t)-2104025999))))
		{
			goto IL_01de;
		}
	}
	{
		goto IL_0420;
	}

IL_00ad:
	{
		uint32_t L_16 = V_2;
		if ((!(((uint32_t)L_16) <= ((uint32_t)((int32_t)-1473810612)))))
		{
			goto IL_00f0;
		}
	}
	{
		uint32_t L_17 = V_2;
		if ((!(((uint32_t)L_17) <= ((uint32_t)((int32_t)-1726928010)))))
		{
			goto IL_00d5;
		}
	}
	{
		uint32_t L_18 = V_2;
		if ((((int32_t)L_18) == ((int32_t)((int32_t)-2083506667))))
		{
			goto IL_01c9;
		}
	}
	{
		uint32_t L_19 = V_2;
		if ((((int32_t)L_19) == ((int32_t)((int32_t)-1726928010))))
		{
			goto IL_014b;
		}
	}
	{
		goto IL_0420;
	}

IL_00d5:
	{
		uint32_t L_20 = V_2;
		if ((((int32_t)L_20) == ((int32_t)((int32_t)-1593786692))))
		{
			goto IL_0208;
		}
	}
	{
		uint32_t L_21 = V_2;
		if ((((int32_t)L_21) == ((int32_t)((int32_t)-1473810612))))
		{
			goto IL_018a;
		}
	}
	{
		goto IL_0420;
	}

IL_00f0:
	{
		uint32_t L_22 = V_2;
		if ((!(((uint32_t)L_22) <= ((uint32_t)((int32_t)-1386986472)))))
		{
			goto IL_0110;
		}
	}
	{
		uint32_t L_23 = V_2;
		if ((((int32_t)L_23) == ((int32_t)((int32_t)-1412039661))))
		{
			goto IL_0160;
		}
	}
	{
		uint32_t L_24 = V_2;
		if ((((int32_t)L_24) == ((int32_t)((int32_t)-1386986472))))
		{
			goto IL_01b4;
		}
	}
	{
		goto IL_0420;
	}

IL_0110:
	{
		uint32_t L_25 = V_2;
		if ((((int32_t)L_25) == ((int32_t)((int32_t)-584064197))))
		{
			goto IL_021d;
		}
	}
	{
		uint32_t L_26 = V_2;
		if ((((int32_t)L_26) == ((int32_t)((int32_t)-473474755))))
		{
			goto IL_0271;
		}
	}
	{
		uint32_t L_27 = V_2;
		if ((((int32_t)L_27) == ((int32_t)((int32_t)-365686981))))
		{
			goto IL_025c;
		}
	}
	{
		goto IL_0420;
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
		goto IL_0420;
	}

IL_014b:
	{
		String_t* L_30 = V_1;
		bool L_31;
		L_31 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_30, _stringLiteral82BECCAD895076775062861CDB46AADEF913D969, NULL);
		if (L_31)
		{
			goto IL_02c7;
		}
	}
	{
		goto IL_0420;
	}

IL_0160:
	{
		String_t* L_32 = V_1;
		bool L_33;
		L_33 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_32, _stringLiteral1228466552C1791B2019A329AFE94665D441168A, NULL);
		if (L_33)
		{
			goto IL_02d9;
		}
	}
	{
		goto IL_0420;
	}

IL_0175:
	{
		String_t* L_34 = V_1;
		bool L_35;
		L_35 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_34, _stringLiteralBD49F93A7BC78A69E385CEC0E78F434BD2845A17, NULL);
		if (L_35)
		{
			goto IL_02f0;
		}
	}
	{
		goto IL_0420;
	}

IL_018a:
	{
		String_t* L_36 = V_1;
		bool L_37;
		L_37 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_36, _stringLiteralED1F119527A0BCA45125EF8E0F719985DA86C0E1, NULL);
		if (L_37)
		{
			goto IL_0307;
		}
	}
	{
		goto IL_0420;
	}

IL_019f:
	{
		String_t* L_38 = V_1;
		bool L_39;
		L_39 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_38, _stringLiteral8C9F18A4F030B96447955FBBA1A99FFC43B5D8E0, NULL);
		if (L_39)
		{
			goto IL_031e;
		}
	}
	{
		goto IL_0420;
	}

IL_01b4:
	{
		String_t* L_40 = V_1;
		bool L_41;
		L_41 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_40, _stringLiteralFC341A1966AF28A9A7A26EDFB78ABBF7DE4D0E1F, NULL);
		if (L_41)
		{
			goto IL_0335;
		}
	}
	{
		goto IL_0420;
	}

IL_01c9:
	{
		String_t* L_42 = V_1;
		bool L_43;
		L_43 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_42, _stringLiteralE8744A8B8BD390EB66CA0CAE2376C973E6904FFB, NULL);
		if (L_43)
		{
			goto IL_034c;
		}
	}
	{
		goto IL_0420;
	}

IL_01de:
	{
		String_t* L_44 = V_1;
		bool L_45;
		L_45 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_44, _stringLiteralF9BE17D634D1B07BCDCDA77A87710C946D81307B, NULL);
		if (L_45)
		{
			goto IL_0363;
		}
	}
	{
		goto IL_0420;
	}

IL_01f3:
	{
		String_t* L_46 = V_1;
		bool L_47;
		L_47 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_46, _stringLiteralFA5EC7168E9633DAAEAA255ECB55030EA60F064F, NULL);
		if (L_47)
		{
			goto IL_037a;
		}
	}
	{
		goto IL_0420;
	}

IL_0208:
	{
		String_t* L_48 = V_1;
		bool L_49;
		L_49 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_48, _stringLiteralEB0A157666700D8227FD4B66A26FDC02035E89BF, NULL);
		if (L_49)
		{
			goto IL_038c;
		}
	}
	{
		goto IL_0420;
	}

IL_021d:
	{
		String_t* L_50 = V_1;
		bool L_51;
		L_51 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_50, _stringLiteral8E54BB51E569CB6A8D3C45D8AEF883A1559C1C0E, NULL);
		if (L_51)
		{
			goto IL_039e;
		}
	}
	{
		goto IL_0420;
	}

IL_0232:
	{
		String_t* L_52 = V_1;
		bool L_53;
		L_53 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_52, _stringLiteral60E56797D122AE71D3774956F66C6EEB9EA22C05, NULL);
		if (L_53)
		{
			goto IL_03ad;
		}
	}
	{
		goto IL_0420;
	}

IL_0247:
	{
		String_t* L_54 = V_1;
		bool L_55;
		L_55 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_54, _stringLiteral01837E2252AC8026A5EA3567A663017A662FBB70, NULL);
		if (L_55)
		{
			goto IL_03bc;
		}
	}
	{
		goto IL_0420;
	}

IL_025c:
	{
		String_t* L_56 = V_1;
		bool L_57;
		L_57 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_56, _stringLiteralF66E9083C67855AB6EBB4B74342E385A72AACE32, NULL);
		if (L_57)
		{
			goto IL_03d0;
		}
	}
	{
		goto IL_0420;
	}

IL_0271:
	{
		String_t* L_58 = V_1;
		bool L_59;
		L_59 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_58, _stringLiteral91811EE149061D28B38320E2430CE8888AD6398B, NULL);
		if (L_59)
		{
			goto IL_03e4;
		}
	}
	{
		goto IL_0420;
	}

IL_0286:
	{
		String_t* L_60 = V_1;
		bool L_61;
		L_61 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_60, _stringLiteral6686C366F645244186604A3DA4B9A58012A85F1B, NULL);
		if (L_61)
		{
			goto IL_03f8;
		}
	}
	{
		goto IL_0420;
	}

IL_029b:
	{
		String_t* L_62 = V_1;
		bool L_63;
		L_63 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_62, _stringLiteralCA1B66E295BD92E9FD3B6C708F09CA69A50BEFD1, NULL);
		if (L_63)
		{
			goto IL_040c;
		}
	}
	{
		goto IL_0420;
	}

IL_02b0:
	{
		// instance.enabled = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_64 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_65 = ((ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_64);
		bool L_66;
		L_66 = GenericVirtualFuncInvoker1< bool, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mFFB70EE53D8CD0255A4E599780F62A3EB1520E83_RuntimeMethod_var, L_64, L_65);
		ShapeModule_set_enabled_m6BA02351FEED67A82664135B922DDA66D71DF399((&V_0), L_66, NULL);
		// break;
		goto IL_0426;
	}

IL_02c7:
	{
		// instance.shapeType = reader.Read<UnityEngine.ParticleSystemShapeType>();
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_67 = ___reader0;
		NullCheck(L_67);
		int32_t L_68;
		L_68 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisParticleSystemShapeType_tADE62D07EDA71578326A03B50871391EE01F73BB_m3423F2435F483F46ABB4C8EAD9B78CD03D2742FB_RuntimeMethod_var, L_67);
		ShapeModule_set_shapeType_m4B5D1EA91037AD7065FE1D23652D919FED4D6D7F((&V_0), L_68, NULL);
		// break;
		goto IL_0426;
	}

IL_02d9:
	{
		// instance.randomDirectionAmount = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_69 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_70 = ((ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_69);
		float L_71;
		L_71 = GenericVirtualFuncInvoker1< float, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mA86928BC888E342D2C2644535E3399952F5077ED_RuntimeMethod_var, L_69, L_70);
		ShapeModule_set_randomDirectionAmount_m398CEE6D93207797559A80CE49A0C4138C96D0B3((&V_0), L_71, NULL);
		// break;
		goto IL_0426;
	}

IL_02f0:
	{
		// instance.sphericalDirectionAmount = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_72 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_73 = ((ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_72);
		float L_74;
		L_74 = GenericVirtualFuncInvoker1< float, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mA86928BC888E342D2C2644535E3399952F5077ED_RuntimeMethod_var, L_72, L_73);
		ShapeModule_set_sphericalDirectionAmount_m395143D474E51CE6AAF81C9DB84028A16B9BCAAB((&V_0), L_74, NULL);
		// break;
		goto IL_0426;
	}

IL_0307:
	{
		// instance.alignToDirection = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_75 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_76 = ((ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_75);
		bool L_77;
		L_77 = GenericVirtualFuncInvoker1< bool, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mFFB70EE53D8CD0255A4E599780F62A3EB1520E83_RuntimeMethod_var, L_75, L_76);
		ShapeModule_set_alignToDirection_mD632613E0E343654E6569F22BC9EFBB9247AC581((&V_0), L_77, NULL);
		// break;
		goto IL_0426;
	}

IL_031e:
	{
		// instance.radius = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_78 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_79 = ((ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_78);
		float L_80;
		L_80 = GenericVirtualFuncInvoker1< float, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mA86928BC888E342D2C2644535E3399952F5077ED_RuntimeMethod_var, L_78, L_79);
		ShapeModule_set_radius_m37F79E13EB60FA39EAE36B49DAC4AC880416E89C((&V_0), L_80, NULL);
		// break;
		goto IL_0426;
	}

IL_0335:
	{
		// instance.angle = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_81 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_82 = ((ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_81);
		float L_83;
		L_83 = GenericVirtualFuncInvoker1< float, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mA86928BC888E342D2C2644535E3399952F5077ED_RuntimeMethod_var, L_81, L_82);
		ShapeModule_set_angle_m62F5F037CD1DF55172B2D64DBF8271F9F917133A((&V_0), L_83, NULL);
		// break;
		goto IL_0426;
	}

IL_034c:
	{
		// instance.length = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_84 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_85 = ((ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_84);
		float L_86;
		L_86 = GenericVirtualFuncInvoker1< float, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mA86928BC888E342D2C2644535E3399952F5077ED_RuntimeMethod_var, L_84, L_85);
		ShapeModule_set_length_mD38341192A10095F9D0217993D410939F90CE621((&V_0), L_86, NULL);
		// break;
		goto IL_0426;
	}

IL_0363:
	{
		// instance.scale = reader.Read<UnityEngine.Vector3>(ES3Type_Vector3.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_87 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_88 = ((ES3Type_Vector3_t29E9EC31EED86489FBD8A22FBD317F5BD5C3A3E9_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Vector3_t29E9EC31EED86489FBD8A22FBD317F5BD5C3A3E9_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_87);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_89;
		L_89 = GenericVirtualFuncInvoker1< Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_m41744F4EDB47642D9EF02C774ADD5EADDE749262_RuntimeMethod_var, L_87, L_88);
		ShapeModule_set_scale_mDA84B80016FDA6B6EE181B108C3E59A2FFF9143D((&V_0), L_89, NULL);
		// break;
		goto IL_0426;
	}

IL_037a:
	{
		// instance.meshShapeType = reader.Read<UnityEngine.ParticleSystemMeshShapeType>();
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_90 = ___reader0;
		NullCheck(L_90);
		int32_t L_91;
		L_91 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisParticleSystemMeshShapeType_t260D7CAA6014D0ACE2BCFE0BC588E1ADE3AF98E5_m2E1596CACABC5B7BB194A74A92C1E5627B3DB9D0_RuntimeMethod_var, L_90);
		ShapeModule_set_meshShapeType_m335ED6F02244A07F8557E900D9935A4220AD23D0((&V_0), L_91, NULL);
		// break;
		goto IL_0426;
	}

IL_038c:
	{
		// instance.mesh = reader.Read<UnityEngine.Mesh>();
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_92 = ___reader0;
		NullCheck(L_92);
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_93;
		L_93 = GenericVirtualFuncInvoker0< Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* >::Invoke(ES3Reader_Read_TisMesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4_m4DD8C0823DA528C84509E776081834CEAC71FE88_RuntimeMethod_var, L_92);
		ShapeModule_set_mesh_m75450DE287A91452C63021F100D8B6A65A921CE1((&V_0), L_93, NULL);
		// break;
		goto IL_0426;
	}

IL_039e:
	{
		// instance.meshRenderer = reader.Read<UnityEngine.MeshRenderer>();
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_94 = ___reader0;
		NullCheck(L_94);
		MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE* L_95;
		L_95 = GenericVirtualFuncInvoker0< MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE* >::Invoke(ES3Reader_Read_TisMeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE_mADE66001251FAEAB39EE97DA447D0A80EAAB85C4_RuntimeMethod_var, L_94);
		ShapeModule_set_meshRenderer_m25111B1DC9F173FE054264094DB19564D375D1D6((&V_0), L_95, NULL);
		// break;
		goto IL_0426;
	}

IL_03ad:
	{
		// instance.skinnedMeshRenderer = reader.Read<UnityEngine.SkinnedMeshRenderer>();
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_96 = ___reader0;
		NullCheck(L_96);
		SkinnedMeshRenderer_t020C4E8648EA1C4C6BA5C41502919B387E7E1C2E* L_97;
		L_97 = GenericVirtualFuncInvoker0< SkinnedMeshRenderer_t020C4E8648EA1C4C6BA5C41502919B387E7E1C2E* >::Invoke(ES3Reader_Read_TisSkinnedMeshRenderer_t020C4E8648EA1C4C6BA5C41502919B387E7E1C2E_m9E77EF921E4ACFCE425D24538209CF592968463E_RuntimeMethod_var, L_96);
		ShapeModule_set_skinnedMeshRenderer_mB3B9D58C4A9D21F990EC2000D38B5E35C7FF5807((&V_0), L_97, NULL);
		// break;
		goto IL_0426;
	}

IL_03bc:
	{
		// instance.useMeshMaterialIndex = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_98 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_99 = ((ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_98);
		bool L_100;
		L_100 = GenericVirtualFuncInvoker1< bool, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mFFB70EE53D8CD0255A4E599780F62A3EB1520E83_RuntimeMethod_var, L_98, L_99);
		ShapeModule_set_useMeshMaterialIndex_m48CE9CB5BA8CAF93D4C92975B826A7BA8459B838((&V_0), L_100, NULL);
		// break;
		goto IL_0426;
	}

IL_03d0:
	{
		// instance.meshMaterialIndex = reader.Read<System.Int32>(ES3Type_int.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_101 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_102 = ((ES3Type_int_t05A5E7A96442F23CE33E24A71CD349372A70E0C3_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_int_t05A5E7A96442F23CE33E24A71CD349372A70E0C3_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_101);
		int32_t L_103;
		L_103 = GenericVirtualFuncInvoker1< int32_t, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mEFCC4D52DD5B822D3561A53591AE11CDB25CDB6F_RuntimeMethod_var, L_101, L_102);
		ShapeModule_set_meshMaterialIndex_mC72EF43FC31A137D1247E748E89FE0FF5FB2C29F((&V_0), L_103, NULL);
		// break;
		goto IL_0426;
	}

IL_03e4:
	{
		// instance.useMeshColors = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_104 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_105 = ((ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_104);
		bool L_106;
		L_106 = GenericVirtualFuncInvoker1< bool, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mFFB70EE53D8CD0255A4E599780F62A3EB1520E83_RuntimeMethod_var, L_104, L_105);
		ShapeModule_set_useMeshColors_m2B12B03E04E2ACEE2AE68B697F462232D42D6C6E((&V_0), L_106, NULL);
		// break;
		goto IL_0426;
	}

IL_03f8:
	{
		// instance.normalOffset = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_107 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_108 = ((ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_107);
		float L_109;
		L_109 = GenericVirtualFuncInvoker1< float, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mA86928BC888E342D2C2644535E3399952F5077ED_RuntimeMethod_var, L_107, L_108);
		ShapeModule_set_normalOffset_m24453DEF085D96323A09DEBD134283B7F23C263F((&V_0), L_109, NULL);
		// break;
		goto IL_0426;
	}

IL_040c:
	{
		// instance.arc = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_110 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_111 = ((ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_110);
		float L_112;
		L_112 = GenericVirtualFuncInvoker1< float, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mA86928BC888E342D2C2644535E3399952F5077ED_RuntimeMethod_var, L_110, L_111);
		ShapeModule_set_arc_mE9EF87E2AA959143B466CD55B7DAA65FBE155D1F((&V_0), L_112, NULL);
		// break;
		goto IL_0426;
	}

IL_0420:
	{
		// reader.Skip();
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_113 = ___reader0;
		NullCheck(L_113);
		VirtualActionInvoker0::Invoke(41 /* System.Void ES3Reader::Skip() */, L_113);
	}

IL_0426:
	{
		// while((propertyName = reader.ReadPropertyName()) != null)
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_114 = ___reader0;
		NullCheck(L_114);
		String_t* L_115;
		L_115 = VirtualFuncInvoker0< String_t* >::Invoke(21 /* System.String ES3Reader::ReadPropertyName() */, L_114);
		String_t* L_116 = L_115;
		V_1 = L_116;
		if (L_116)
		{
			goto IL_000c;
		}
	}
	{
		// }
		return;
	}
}
// System.Void ES3Types.ES3Type_ShapeModule::ReadInto<UnityEngine.ParticleSystem/ForceOverLifetimeModule>(ES3Reader,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ES3Type_ShapeModule_ReadInto_TisForceOverLifetimeModule_t4859776EAF945AEA86044CAB63CA7A8AC8C14976_m8C1C1D585E1138FF0BA4DD7A630E4135394AB97F_gshared (ES3Type_ShapeModule_t2A98821A3CBBB891C72216EA1D86C9579DFD70B7* __this, ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* ___reader0, RuntimeObject* ___obj1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mFFB70EE53D8CD0255A4E599780F62A3EB1520E83_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mEFCC4D52DD5B822D3561A53591AE11CDB25CDB6F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisMeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE_mADE66001251FAEAB39EE97DA447D0A80EAAB85C4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisMesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4_m4DD8C0823DA528C84509E776081834CEAC71FE88_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisParticleSystemMeshShapeType_t260D7CAA6014D0ACE2BCFE0BC588E1ADE3AF98E5_m2E1596CACABC5B7BB194A74A92C1E5627B3DB9D0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisParticleSystemShapeType_tADE62D07EDA71578326A03B50871391EE01F73BB_m3423F2435F483F46ABB4C8EAD9B78CD03D2742FB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mA86928BC888E342D2C2644535E3399952F5077ED_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisSkinnedMeshRenderer_t020C4E8648EA1C4C6BA5C41502919B387E7E1C2E_m9E77EF921E4ACFCE425D24538209CF592968463E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_m41744F4EDB47642D9EF02C774ADD5EADDE749262_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_Vector3_t29E9EC31EED86489FBD8A22FBD317F5BD5C3A3E9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_int_t05A5E7A96442F23CE33E24A71CD349372A70E0C3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ShapeModule_tAA38A0C5305DF2F9D96F89D4B8F762E2D034D8B2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral01837E2252AC8026A5EA3567A663017A662FBB70);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1228466552C1791B2019A329AFE94665D441168A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral60E56797D122AE71D3774956F66C6EEB9EA22C05);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6686C366F645244186604A3DA4B9A58012A85F1B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral82BECCAD895076775062861CDB46AADEF913D969);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8C9F18A4F030B96447955FBBA1A99FFC43B5D8E0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8E54BB51E569CB6A8D3C45D8AEF883A1559C1C0E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral91811EE149061D28B38320E2430CE8888AD6398B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBD49F93A7BC78A69E385CEC0E78F434BD2845A17);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCA1B66E295BD92E9FD3B6C708F09CA69A50BEFD1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE8744A8B8BD390EB66CA0CAE2376C973E6904FFB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEB0A157666700D8227FD4B66A26FDC02035E89BF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralED1F119527A0BCA45125EF8E0F719985DA86C0E1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF66E9083C67855AB6EBB4B74342E385A72AACE32);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF9BE17D634D1B07BCDCDA77A87710C946D81307B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFA5EC7168E9633DAAEAA255ECB55030EA60F064F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFC341A1966AF28A9A7A26EDFB78ABBF7DE4D0E1F);
		s_Il2CppMethodInitialized = true;
	}
	ShapeModule_tAA38A0C5305DF2F9D96F89D4B8F762E2D034D8B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	uint32_t V_2 = 0;
	{
		// var instance = (UnityEngine.ParticleSystem.ShapeModule)obj;
		RuntimeObject* L_0 = ___obj1;
		V_0 = ((*(ShapeModule_tAA38A0C5305DF2F9D96F89D4B8F762E2D034D8B2*)((ShapeModule_tAA38A0C5305DF2F9D96F89D4B8F762E2D034D8B2*)(ShapeModule_tAA38A0C5305DF2F9D96F89D4B8F762E2D034D8B2*)UnBox(L_0, ShapeModule_tAA38A0C5305DF2F9D96F89D4B8F762E2D034D8B2_il2cpp_TypeInfo_var))));
		goto IL_0426;
	}

IL_000c:
	{
		String_t* L_1 = V_1;
		uint32_t L_2;
		L_2 = U3CPrivateImplementationDetailsU3E_ComputeStringHash_m9E43873DE0DF480D27EC1C2AA3C09E74EA77F75D(L_1, NULL);
		V_2 = L_2;
		uint32_t L_3 = V_2;
		if ((!(((uint32_t)L_3) <= ((uint32_t)((int32_t)-2104025999)))))
		{
			goto IL_00ad;
		}
	}
	{
		uint32_t L_4 = V_2;
		if ((!(((uint32_t)L_4) <= ((uint32_t)((int32_t)666576729)))))
		{
			goto IL_0064;
		}
	}
	{
		uint32_t L_5 = V_2;
		if ((!(((uint32_t)L_5) <= ((uint32_t)((int32_t)49525662)))))
		{
			goto IL_0049;
		}
	}
	{
		uint32_t L_6 = V_2;
		if ((((int32_t)L_6) == ((int32_t)((int32_t)24602224))))
		{
			goto IL_0247;
		}
	}
	{
		uint32_t L_7 = V_2;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)49525662))))
		{
			goto IL_0136;
		}
	}
	{
		goto IL_0420;
	}

IL_0049:
	{
		uint32_t L_8 = V_2;
		if ((((int32_t)L_8) == ((int32_t)((int32_t)230313139))))
		{
			goto IL_019f;
		}
	}
	{
		uint32_t L_9 = V_2;
		if ((((int32_t)L_9) == ((int32_t)((int32_t)666576729))))
		{
			goto IL_01f3;
		}
	}
	{
		goto IL_0420;
	}

IL_0064:
	{
		uint32_t L_10 = V_2;
		if ((!(((uint32_t)L_10) <= ((uint32_t)((int32_t)955488309)))))
		{
			goto IL_0087;
		}
	}
	{
		uint32_t L_11 = V_2;
		if ((((int32_t)L_11) == ((int32_t)((int32_t)923624301))))
		{
			goto IL_0232;
		}
	}
	{
		uint32_t L_12 = V_2;
		if ((((int32_t)L_12) == ((int32_t)((int32_t)955488309))))
		{
			goto IL_0286;
		}
	}
	{
		goto IL_0420;
	}

IL_0087:
	{
		uint32_t L_13 = V_2;
		if ((((int32_t)L_13) == ((int32_t)((int32_t)980363995))))
		{
			goto IL_029b;
		}
	}
	{
		uint32_t L_14 = V_2;
		if ((((int32_t)L_14) == ((int32_t)((int32_t)985988853))))
		{
			goto IL_0175;
		}
	}
	{
		uint32_t L_15 = V_2;
		if ((((int32_t)L_15) == ((int32_t)((int32_t)-2104025999))))
		{
			goto IL_01de;
		}
	}
	{
		goto IL_0420;
	}

IL_00ad:
	{
		uint32_t L_16 = V_2;
		if ((!(((uint32_t)L_16) <= ((uint32_t)((int32_t)-1473810612)))))
		{
			goto IL_00f0;
		}
	}
	{
		uint32_t L_17 = V_2;
		if ((!(((uint32_t)L_17) <= ((uint32_t)((int32_t)-1726928010)))))
		{
			goto IL_00d5;
		}
	}
	{
		uint32_t L_18 = V_2;
		if ((((int32_t)L_18) == ((int32_t)((int32_t)-2083506667))))
		{
			goto IL_01c9;
		}
	}
	{
		uint32_t L_19 = V_2;
		if ((((int32_t)L_19) == ((int32_t)((int32_t)-1726928010))))
		{
			goto IL_014b;
		}
	}
	{
		goto IL_0420;
	}

IL_00d5:
	{
		uint32_t L_20 = V_2;
		if ((((int32_t)L_20) == ((int32_t)((int32_t)-1593786692))))
		{
			goto IL_0208;
		}
	}
	{
		uint32_t L_21 = V_2;
		if ((((int32_t)L_21) == ((int32_t)((int32_t)-1473810612))))
		{
			goto IL_018a;
		}
	}
	{
		goto IL_0420;
	}

IL_00f0:
	{
		uint32_t L_22 = V_2;
		if ((!(((uint32_t)L_22) <= ((uint32_t)((int32_t)-1386986472)))))
		{
			goto IL_0110;
		}
	}
	{
		uint32_t L_23 = V_2;
		if ((((int32_t)L_23) == ((int32_t)((int32_t)-1412039661))))
		{
			goto IL_0160;
		}
	}
	{
		uint32_t L_24 = V_2;
		if ((((int32_t)L_24) == ((int32_t)((int32_t)-1386986472))))
		{
			goto IL_01b4;
		}
	}
	{
		goto IL_0420;
	}

IL_0110:
	{
		uint32_t L_25 = V_2;
		if ((((int32_t)L_25) == ((int32_t)((int32_t)-584064197))))
		{
			goto IL_021d;
		}
	}
	{
		uint32_t L_26 = V_2;
		if ((((int32_t)L_26) == ((int32_t)((int32_t)-473474755))))
		{
			goto IL_0271;
		}
	}
	{
		uint32_t L_27 = V_2;
		if ((((int32_t)L_27) == ((int32_t)((int32_t)-365686981))))
		{
			goto IL_025c;
		}
	}
	{
		goto IL_0420;
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
		goto IL_0420;
	}

IL_014b:
	{
		String_t* L_30 = V_1;
		bool L_31;
		L_31 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_30, _stringLiteral82BECCAD895076775062861CDB46AADEF913D969, NULL);
		if (L_31)
		{
			goto IL_02c7;
		}
	}
	{
		goto IL_0420;
	}

IL_0160:
	{
		String_t* L_32 = V_1;
		bool L_33;
		L_33 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_32, _stringLiteral1228466552C1791B2019A329AFE94665D441168A, NULL);
		if (L_33)
		{
			goto IL_02d9;
		}
	}
	{
		goto IL_0420;
	}

IL_0175:
	{
		String_t* L_34 = V_1;
		bool L_35;
		L_35 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_34, _stringLiteralBD49F93A7BC78A69E385CEC0E78F434BD2845A17, NULL);
		if (L_35)
		{
			goto IL_02f0;
		}
	}
	{
		goto IL_0420;
	}

IL_018a:
	{
		String_t* L_36 = V_1;
		bool L_37;
		L_37 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_36, _stringLiteralED1F119527A0BCA45125EF8E0F719985DA86C0E1, NULL);
		if (L_37)
		{
			goto IL_0307;
		}
	}
	{
		goto IL_0420;
	}

IL_019f:
	{
		String_t* L_38 = V_1;
		bool L_39;
		L_39 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_38, _stringLiteral8C9F18A4F030B96447955FBBA1A99FFC43B5D8E0, NULL);
		if (L_39)
		{
			goto IL_031e;
		}
	}
	{
		goto IL_0420;
	}

IL_01b4:
	{
		String_t* L_40 = V_1;
		bool L_41;
		L_41 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_40, _stringLiteralFC341A1966AF28A9A7A26EDFB78ABBF7DE4D0E1F, NULL);
		if (L_41)
		{
			goto IL_0335;
		}
	}
	{
		goto IL_0420;
	}

IL_01c9:
	{
		String_t* L_42 = V_1;
		bool L_43;
		L_43 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_42, _stringLiteralE8744A8B8BD390EB66CA0CAE2376C973E6904FFB, NULL);
		if (L_43)
		{
			goto IL_034c;
		}
	}
	{
		goto IL_0420;
	}

IL_01de:
	{
		String_t* L_44 = V_1;
		bool L_45;
		L_45 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_44, _stringLiteralF9BE17D634D1B07BCDCDA77A87710C946D81307B, NULL);
		if (L_45)
		{
			goto IL_0363;
		}
	}
	{
		goto IL_0420;
	}

IL_01f3:
	{
		String_t* L_46 = V_1;
		bool L_47;
		L_47 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_46, _stringLiteralFA5EC7168E9633DAAEAA255ECB55030EA60F064F, NULL);
		if (L_47)
		{
			goto IL_037a;
		}
	}
	{
		goto IL_0420;
	}

IL_0208:
	{
		String_t* L_48 = V_1;
		bool L_49;
		L_49 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_48, _stringLiteralEB0A157666700D8227FD4B66A26FDC02035E89BF, NULL);
		if (L_49)
		{
			goto IL_038c;
		}
	}
	{
		goto IL_0420;
	}

IL_021d:
	{
		String_t* L_50 = V_1;
		bool L_51;
		L_51 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_50, _stringLiteral8E54BB51E569CB6A8D3C45D8AEF883A1559C1C0E, NULL);
		if (L_51)
		{
			goto IL_039e;
		}
	}
	{
		goto IL_0420;
	}

IL_0232:
	{
		String_t* L_52 = V_1;
		bool L_53;
		L_53 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_52, _stringLiteral60E56797D122AE71D3774956F66C6EEB9EA22C05, NULL);
		if (L_53)
		{
			goto IL_03ad;
		}
	}
	{
		goto IL_0420;
	}

IL_0247:
	{
		String_t* L_54 = V_1;
		bool L_55;
		L_55 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_54, _stringLiteral01837E2252AC8026A5EA3567A663017A662FBB70, NULL);
		if (L_55)
		{
			goto IL_03bc;
		}
	}
	{
		goto IL_0420;
	}

IL_025c:
	{
		String_t* L_56 = V_1;
		bool L_57;
		L_57 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_56, _stringLiteralF66E9083C67855AB6EBB4B74342E385A72AACE32, NULL);
		if (L_57)
		{
			goto IL_03d0;
		}
	}
	{
		goto IL_0420;
	}

IL_0271:
	{
		String_t* L_58 = V_1;
		bool L_59;
		L_59 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_58, _stringLiteral91811EE149061D28B38320E2430CE8888AD6398B, NULL);
		if (L_59)
		{
			goto IL_03e4;
		}
	}
	{
		goto IL_0420;
	}

IL_0286:
	{
		String_t* L_60 = V_1;
		bool L_61;
		L_61 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_60, _stringLiteral6686C366F645244186604A3DA4B9A58012A85F1B, NULL);
		if (L_61)
		{
			goto IL_03f8;
		}
	}
	{
		goto IL_0420;
	}

IL_029b:
	{
		String_t* L_62 = V_1;
		bool L_63;
		L_63 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_62, _stringLiteralCA1B66E295BD92E9FD3B6C708F09CA69A50BEFD1, NULL);
		if (L_63)
		{
			goto IL_040c;
		}
	}
	{
		goto IL_0420;
	}

IL_02b0:
	{
		// instance.enabled = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_64 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_65 = ((ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_64);
		bool L_66;
		L_66 = GenericVirtualFuncInvoker1< bool, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mFFB70EE53D8CD0255A4E599780F62A3EB1520E83_RuntimeMethod_var, L_64, L_65);
		ShapeModule_set_enabled_m6BA02351FEED67A82664135B922DDA66D71DF399((&V_0), L_66, NULL);
		// break;
		goto IL_0426;
	}

IL_02c7:
	{
		// instance.shapeType = reader.Read<UnityEngine.ParticleSystemShapeType>();
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_67 = ___reader0;
		NullCheck(L_67);
		int32_t L_68;
		L_68 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisParticleSystemShapeType_tADE62D07EDA71578326A03B50871391EE01F73BB_m3423F2435F483F46ABB4C8EAD9B78CD03D2742FB_RuntimeMethod_var, L_67);
		ShapeModule_set_shapeType_m4B5D1EA91037AD7065FE1D23652D919FED4D6D7F((&V_0), L_68, NULL);
		// break;
		goto IL_0426;
	}

IL_02d9:
	{
		// instance.randomDirectionAmount = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_69 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_70 = ((ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_69);
		float L_71;
		L_71 = GenericVirtualFuncInvoker1< float, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mA86928BC888E342D2C2644535E3399952F5077ED_RuntimeMethod_var, L_69, L_70);
		ShapeModule_set_randomDirectionAmount_m398CEE6D93207797559A80CE49A0C4138C96D0B3((&V_0), L_71, NULL);
		// break;
		goto IL_0426;
	}

IL_02f0:
	{
		// instance.sphericalDirectionAmount = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_72 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_73 = ((ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_72);
		float L_74;
		L_74 = GenericVirtualFuncInvoker1< float, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mA86928BC888E342D2C2644535E3399952F5077ED_RuntimeMethod_var, L_72, L_73);
		ShapeModule_set_sphericalDirectionAmount_m395143D474E51CE6AAF81C9DB84028A16B9BCAAB((&V_0), L_74, NULL);
		// break;
		goto IL_0426;
	}

IL_0307:
	{
		// instance.alignToDirection = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_75 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_76 = ((ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_75);
		bool L_77;
		L_77 = GenericVirtualFuncInvoker1< bool, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mFFB70EE53D8CD0255A4E599780F62A3EB1520E83_RuntimeMethod_var, L_75, L_76);
		ShapeModule_set_alignToDirection_mD632613E0E343654E6569F22BC9EFBB9247AC581((&V_0), L_77, NULL);
		// break;
		goto IL_0426;
	}

IL_031e:
	{
		// instance.radius = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_78 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_79 = ((ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_78);
		float L_80;
		L_80 = GenericVirtualFuncInvoker1< float, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mA86928BC888E342D2C2644535E3399952F5077ED_RuntimeMethod_var, L_78, L_79);
		ShapeModule_set_radius_m37F79E13EB60FA39EAE36B49DAC4AC880416E89C((&V_0), L_80, NULL);
		// break;
		goto IL_0426;
	}

IL_0335:
	{
		// instance.angle = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_81 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_82 = ((ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_81);
		float L_83;
		L_83 = GenericVirtualFuncInvoker1< float, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mA86928BC888E342D2C2644535E3399952F5077ED_RuntimeMethod_var, L_81, L_82);
		ShapeModule_set_angle_m62F5F037CD1DF55172B2D64DBF8271F9F917133A((&V_0), L_83, NULL);
		// break;
		goto IL_0426;
	}

IL_034c:
	{
		// instance.length = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_84 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_85 = ((ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_84);
		float L_86;
		L_86 = GenericVirtualFuncInvoker1< float, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mA86928BC888E342D2C2644535E3399952F5077ED_RuntimeMethod_var, L_84, L_85);
		ShapeModule_set_length_mD38341192A10095F9D0217993D410939F90CE621((&V_0), L_86, NULL);
		// break;
		goto IL_0426;
	}

IL_0363:
	{
		// instance.scale = reader.Read<UnityEngine.Vector3>(ES3Type_Vector3.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_87 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_88 = ((ES3Type_Vector3_t29E9EC31EED86489FBD8A22FBD317F5BD5C3A3E9_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Vector3_t29E9EC31EED86489FBD8A22FBD317F5BD5C3A3E9_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_87);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_89;
		L_89 = GenericVirtualFuncInvoker1< Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_m41744F4EDB47642D9EF02C774ADD5EADDE749262_RuntimeMethod_var, L_87, L_88);
		ShapeModule_set_scale_mDA84B80016FDA6B6EE181B108C3E59A2FFF9143D((&V_0), L_89, NULL);
		// break;
		goto IL_0426;
	}

IL_037a:
	{
		// instance.meshShapeType = reader.Read<UnityEngine.ParticleSystemMeshShapeType>();
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_90 = ___reader0;
		NullCheck(L_90);
		int32_t L_91;
		L_91 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisParticleSystemMeshShapeType_t260D7CAA6014D0ACE2BCFE0BC588E1ADE3AF98E5_m2E1596CACABC5B7BB194A74A92C1E5627B3DB9D0_RuntimeMethod_var, L_90);
		ShapeModule_set_meshShapeType_m335ED6F02244A07F8557E900D9935A4220AD23D0((&V_0), L_91, NULL);
		// break;
		goto IL_0426;
	}

IL_038c:
	{
		// instance.mesh = reader.Read<UnityEngine.Mesh>();
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_92 = ___reader0;
		NullCheck(L_92);
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_93;
		L_93 = GenericVirtualFuncInvoker0< Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* >::Invoke(ES3Reader_Read_TisMesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4_m4DD8C0823DA528C84509E776081834CEAC71FE88_RuntimeMethod_var, L_92);
		ShapeModule_set_mesh_m75450DE287A91452C63021F100D8B6A65A921CE1((&V_0), L_93, NULL);
		// break;
		goto IL_0426;
	}

IL_039e:
	{
		// instance.meshRenderer = reader.Read<UnityEngine.MeshRenderer>();
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_94 = ___reader0;
		NullCheck(L_94);
		MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE* L_95;
		L_95 = GenericVirtualFuncInvoker0< MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE* >::Invoke(ES3Reader_Read_TisMeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE_mADE66001251FAEAB39EE97DA447D0A80EAAB85C4_RuntimeMethod_var, L_94);
		ShapeModule_set_meshRenderer_m25111B1DC9F173FE054264094DB19564D375D1D6((&V_0), L_95, NULL);
		// break;
		goto IL_0426;
	}

IL_03ad:
	{
		// instance.skinnedMeshRenderer = reader.Read<UnityEngine.SkinnedMeshRenderer>();
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_96 = ___reader0;
		NullCheck(L_96);
		SkinnedMeshRenderer_t020C4E8648EA1C4C6BA5C41502919B387E7E1C2E* L_97;
		L_97 = GenericVirtualFuncInvoker0< SkinnedMeshRenderer_t020C4E8648EA1C4C6BA5C41502919B387E7E1C2E* >::Invoke(ES3Reader_Read_TisSkinnedMeshRenderer_t020C4E8648EA1C4C6BA5C41502919B387E7E1C2E_m9E77EF921E4ACFCE425D24538209CF592968463E_RuntimeMethod_var, L_96);
		ShapeModule_set_skinnedMeshRenderer_mB3B9D58C4A9D21F990EC2000D38B5E35C7FF5807((&V_0), L_97, NULL);
		// break;
		goto IL_0426;
	}

IL_03bc:
	{
		// instance.useMeshMaterialIndex = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_98 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_99 = ((ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_98);
		bool L_100;
		L_100 = GenericVirtualFuncInvoker1< bool, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mFFB70EE53D8CD0255A4E599780F62A3EB1520E83_RuntimeMethod_var, L_98, L_99);
		ShapeModule_set_useMeshMaterialIndex_m48CE9CB5BA8CAF93D4C92975B826A7BA8459B838((&V_0), L_100, NULL);
		// break;
		goto IL_0426;
	}

IL_03d0:
	{
		// instance.meshMaterialIndex = reader.Read<System.Int32>(ES3Type_int.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_101 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_102 = ((ES3Type_int_t05A5E7A96442F23CE33E24A71CD349372A70E0C3_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_int_t05A5E7A96442F23CE33E24A71CD349372A70E0C3_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_101);
		int32_t L_103;
		L_103 = GenericVirtualFuncInvoker1< int32_t, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mEFCC4D52DD5B822D3561A53591AE11CDB25CDB6F_RuntimeMethod_var, L_101, L_102);
		ShapeModule_set_meshMaterialIndex_mC72EF43FC31A137D1247E748E89FE0FF5FB2C29F((&V_0), L_103, NULL);
		// break;
		goto IL_0426;
	}

IL_03e4:
	{
		// instance.useMeshColors = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_104 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_105 = ((ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_104);
		bool L_106;
		L_106 = GenericVirtualFuncInvoker1< bool, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mFFB70EE53D8CD0255A4E599780F62A3EB1520E83_RuntimeMethod_var, L_104, L_105);
		ShapeModule_set_useMeshColors_m2B12B03E04E2ACEE2AE68B697F462232D42D6C6E((&V_0), L_106, NULL);
		// break;
		goto IL_0426;
	}

IL_03f8:
	{
		// instance.normalOffset = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_107 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_108 = ((ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_107);
		float L_109;
		L_109 = GenericVirtualFuncInvoker1< float, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mA86928BC888E342D2C2644535E3399952F5077ED_RuntimeMethod_var, L_107, L_108);
		ShapeModule_set_normalOffset_m24453DEF085D96323A09DEBD134283B7F23C263F((&V_0), L_109, NULL);
		// break;
		goto IL_0426;
	}

IL_040c:
	{
		// instance.arc = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_110 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_111 = ((ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_110);
		float L_112;
		L_112 = GenericVirtualFuncInvoker1< float, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mA86928BC888E342D2C2644535E3399952F5077ED_RuntimeMethod_var, L_110, L_111);
		ShapeModule_set_arc_mE9EF87E2AA959143B466CD55B7DAA65FBE155D1F((&V_0), L_112, NULL);
		// break;
		goto IL_0426;
	}

IL_0420:
	{
		// reader.Skip();
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_113 = ___reader0;
		NullCheck(L_113);
		VirtualActionInvoker0::Invoke(41 /* System.Void ES3Reader::Skip() */, L_113);
	}

IL_0426:
	{
		// while((propertyName = reader.ReadPropertyName()) != null)
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_114 = ___reader0;
		NullCheck(L_114);
		String_t* L_115;
		L_115 = VirtualFuncInvoker0< String_t* >::Invoke(21 /* System.String ES3Reader::ReadPropertyName() */, L_114);
		String_t* L_116 = L_115;
		V_1 = L_116;
		if (L_116)
		{
			goto IL_000c;
		}
	}
	{
		// }
		return;
	}
}
// System.Void ES3Types.ES3Type_ShapeModule::ReadInto<UnityEngine.ParticleSystem/InheritVelocityModule>(ES3Reader,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ES3Type_ShapeModule_ReadInto_TisInheritVelocityModule_tB71B2EDCAF328647DDB6BC79541D7C5E76C19562_m6494FDE1B1EBF3E01164E2C92FC06AA7CC25D0E4_gshared (ES3Type_ShapeModule_t2A98821A3CBBB891C72216EA1D86C9579DFD70B7* __this, ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* ___reader0, RuntimeObject* ___obj1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mFFB70EE53D8CD0255A4E599780F62A3EB1520E83_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mEFCC4D52DD5B822D3561A53591AE11CDB25CDB6F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisMeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE_mADE66001251FAEAB39EE97DA447D0A80EAAB85C4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisMesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4_m4DD8C0823DA528C84509E776081834CEAC71FE88_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisParticleSystemMeshShapeType_t260D7CAA6014D0ACE2BCFE0BC588E1ADE3AF98E5_m2E1596CACABC5B7BB194A74A92C1E5627B3DB9D0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisParticleSystemShapeType_tADE62D07EDA71578326A03B50871391EE01F73BB_m3423F2435F483F46ABB4C8EAD9B78CD03D2742FB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mA86928BC888E342D2C2644535E3399952F5077ED_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisSkinnedMeshRenderer_t020C4E8648EA1C4C6BA5C41502919B387E7E1C2E_m9E77EF921E4ACFCE425D24538209CF592968463E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_m41744F4EDB47642D9EF02C774ADD5EADDE749262_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_Vector3_t29E9EC31EED86489FBD8A22FBD317F5BD5C3A3E9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_int_t05A5E7A96442F23CE33E24A71CD349372A70E0C3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ShapeModule_tAA38A0C5305DF2F9D96F89D4B8F762E2D034D8B2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral01837E2252AC8026A5EA3567A663017A662FBB70);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1228466552C1791B2019A329AFE94665D441168A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral60E56797D122AE71D3774956F66C6EEB9EA22C05);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6686C366F645244186604A3DA4B9A58012A85F1B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral82BECCAD895076775062861CDB46AADEF913D969);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8C9F18A4F030B96447955FBBA1A99FFC43B5D8E0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8E54BB51E569CB6A8D3C45D8AEF883A1559C1C0E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral91811EE149061D28B38320E2430CE8888AD6398B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBD49F93A7BC78A69E385CEC0E78F434BD2845A17);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCA1B66E295BD92E9FD3B6C708F09CA69A50BEFD1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE8744A8B8BD390EB66CA0CAE2376C973E6904FFB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEB0A157666700D8227FD4B66A26FDC02035E89BF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralED1F119527A0BCA45125EF8E0F719985DA86C0E1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF66E9083C67855AB6EBB4B74342E385A72AACE32);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF9BE17D634D1B07BCDCDA77A87710C946D81307B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFA5EC7168E9633DAAEAA255ECB55030EA60F064F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFC341A1966AF28A9A7A26EDFB78ABBF7DE4D0E1F);
		s_Il2CppMethodInitialized = true;
	}
	ShapeModule_tAA38A0C5305DF2F9D96F89D4B8F762E2D034D8B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	uint32_t V_2 = 0;
	{
		// var instance = (UnityEngine.ParticleSystem.ShapeModule)obj;
		RuntimeObject* L_0 = ___obj1;
		V_0 = ((*(ShapeModule_tAA38A0C5305DF2F9D96F89D4B8F762E2D034D8B2*)((ShapeModule_tAA38A0C5305DF2F9D96F89D4B8F762E2D034D8B2*)(ShapeModule_tAA38A0C5305DF2F9D96F89D4B8F762E2D034D8B2*)UnBox(L_0, ShapeModule_tAA38A0C5305DF2F9D96F89D4B8F762E2D034D8B2_il2cpp_TypeInfo_var))));
		goto IL_0426;
	}

IL_000c:
	{
		String_t* L_1 = V_1;
		uint32_t L_2;
		L_2 = U3CPrivateImplementationDetailsU3E_ComputeStringHash_m9E43873DE0DF480D27EC1C2AA3C09E74EA77F75D(L_1, NULL);
		V_2 = L_2;
		uint32_t L_3 = V_2;
		if ((!(((uint32_t)L_3) <= ((uint32_t)((int32_t)-2104025999)))))
		{
			goto IL_00ad;
		}
	}
	{
		uint32_t L_4 = V_2;
		if ((!(((uint32_t)L_4) <= ((uint32_t)((int32_t)666576729)))))
		{
			goto IL_0064;
		}
	}
	{
		uint32_t L_5 = V_2;
		if ((!(((uint32_t)L_5) <= ((uint32_t)((int32_t)49525662)))))
		{
			goto IL_0049;
		}
	}
	{
		uint32_t L_6 = V_2;
		if ((((int32_t)L_6) == ((int32_t)((int32_t)24602224))))
		{
			goto IL_0247;
		}
	}
	{
		uint32_t L_7 = V_2;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)49525662))))
		{
			goto IL_0136;
		}
	}
	{
		goto IL_0420;
	}

IL_0049:
	{
		uint32_t L_8 = V_2;
		if ((((int32_t)L_8) == ((int32_t)((int32_t)230313139))))
		{
			goto IL_019f;
		}
	}
	{
		uint32_t L_9 = V_2;
		if ((((int32_t)L_9) == ((int32_t)((int32_t)666576729))))
		{
			goto IL_01f3;
		}
	}
	{
		goto IL_0420;
	}

IL_0064:
	{
		uint32_t L_10 = V_2;
		if ((!(((uint32_t)L_10) <= ((uint32_t)((int32_t)955488309)))))
		{
			goto IL_0087;
		}
	}
	{
		uint32_t L_11 = V_2;
		if ((((int32_t)L_11) == ((int32_t)((int32_t)923624301))))
		{
			goto IL_0232;
		}
	}
	{
		uint32_t L_12 = V_2;
		if ((((int32_t)L_12) == ((int32_t)((int32_t)955488309))))
		{
			goto IL_0286;
		}
	}
	{
		goto IL_0420;
	}

IL_0087:
	{
		uint32_t L_13 = V_2;
		if ((((int32_t)L_13) == ((int32_t)((int32_t)980363995))))
		{
			goto IL_029b;
		}
	}
	{
		uint32_t L_14 = V_2;
		if ((((int32_t)L_14) == ((int32_t)((int32_t)985988853))))
		{
			goto IL_0175;
		}
	}
	{
		uint32_t L_15 = V_2;
		if ((((int32_t)L_15) == ((int32_t)((int32_t)-2104025999))))
		{
			goto IL_01de;
		}
	}
	{
		goto IL_0420;
	}

IL_00ad:
	{
		uint32_t L_16 = V_2;
		if ((!(((uint32_t)L_16) <= ((uint32_t)((int32_t)-1473810612)))))
		{
			goto IL_00f0;
		}
	}
	{
		uint32_t L_17 = V_2;
		if ((!(((uint32_t)L_17) <= ((uint32_t)((int32_t)-1726928010)))))
		{
			goto IL_00d5;
		}
	}
	{
		uint32_t L_18 = V_2;
		if ((((int32_t)L_18) == ((int32_t)((int32_t)-2083506667))))
		{
			goto IL_01c9;
		}
	}
	{
		uint32_t L_19 = V_2;
		if ((((int32_t)L_19) == ((int32_t)((int32_t)-1726928010))))
		{
			goto IL_014b;
		}
	}
	{
		goto IL_0420;
	}

IL_00d5:
	{
		uint32_t L_20 = V_2;
		if ((((int32_t)L_20) == ((int32_t)((int32_t)-1593786692))))
		{
			goto IL_0208;
		}
	}
	{
		uint32_t L_21 = V_2;
		if ((((int32_t)L_21) == ((int32_t)((int32_t)-1473810612))))
		{
			goto IL_018a;
		}
	}
	{
		goto IL_0420;
	}

IL_00f0:
	{
		uint32_t L_22 = V_2;
		if ((!(((uint32_t)L_22) <= ((uint32_t)((int32_t)-1386986472)))))
		{
			goto IL_0110;
		}
	}
	{
		uint32_t L_23 = V_2;
		if ((((int32_t)L_23) == ((int32_t)((int32_t)-1412039661))))
		{
			goto IL_0160;
		}
	}
	{
		uint32_t L_24 = V_2;
		if ((((int32_t)L_24) == ((int32_t)((int32_t)-1386986472))))
		{
			goto IL_01b4;
		}
	}
	{
		goto IL_0420;
	}

IL_0110:
	{
		uint32_t L_25 = V_2;
		if ((((int32_t)L_25) == ((int32_t)((int32_t)-584064197))))
		{
			goto IL_021d;
		}
	}
	{
		uint32_t L_26 = V_2;
		if ((((int32_t)L_26) == ((int32_t)((int32_t)-473474755))))
		{
			goto IL_0271;
		}
	}
	{
		uint32_t L_27 = V_2;
		if ((((int32_t)L_27) == ((int32_t)((int32_t)-365686981))))
		{
			goto IL_025c;
		}
	}
	{
		goto IL_0420;
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
		goto IL_0420;
	}

IL_014b:
	{
		String_t* L_30 = V_1;
		bool L_31;
		L_31 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_30, _stringLiteral82BECCAD895076775062861CDB46AADEF913D969, NULL);
		if (L_31)
		{
			goto IL_02c7;
		}
	}
	{
		goto IL_0420;
	}

IL_0160:
	{
		String_t* L_32 = V_1;
		bool L_33;
		L_33 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_32, _stringLiteral1228466552C1791B2019A329AFE94665D441168A, NULL);
		if (L_33)
		{
			goto IL_02d9;
		}
	}
	{
		goto IL_0420;
	}

IL_0175:
	{
		String_t* L_34 = V_1;
		bool L_35;
		L_35 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_34, _stringLiteralBD49F93A7BC78A69E385CEC0E78F434BD2845A17, NULL);
		if (L_35)
		{
			goto IL_02f0;
		}
	}
	{
		goto IL_0420;
	}

IL_018a:
	{
		String_t* L_36 = V_1;
		bool L_37;
		L_37 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_36, _stringLiteralED1F119527A0BCA45125EF8E0F719985DA86C0E1, NULL);
		if (L_37)
		{
			goto IL_0307;
		}
	}
	{
		goto IL_0420;
	}

IL_019f:
	{
		String_t* L_38 = V_1;
		bool L_39;
		L_39 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_38, _stringLiteral8C9F18A4F030B96447955FBBA1A99FFC43B5D8E0, NULL);
		if (L_39)
		{
			goto IL_031e;
		}
	}
	{
		goto IL_0420;
	}

IL_01b4:
	{
		String_t* L_40 = V_1;
		bool L_41;
		L_41 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_40, _stringLiteralFC341A1966AF28A9A7A26EDFB78ABBF7DE4D0E1F, NULL);
		if (L_41)
		{
			goto IL_0335;
		}
	}
	{
		goto IL_0420;
	}

IL_01c9:
	{
		String_t* L_42 = V_1;
		bool L_43;
		L_43 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_42, _stringLiteralE8744A8B8BD390EB66CA0CAE2376C973E6904FFB, NULL);
		if (L_43)
		{
			goto IL_034c;
		}
	}
	{
		goto IL_0420;
	}

IL_01de:
	{
		String_t* L_44 = V_1;
		bool L_45;
		L_45 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_44, _stringLiteralF9BE17D634D1B07BCDCDA77A87710C946D81307B, NULL);
		if (L_45)
		{
			goto IL_0363;
		}
	}
	{
		goto IL_0420;
	}

IL_01f3:
	{
		String_t* L_46 = V_1;
		bool L_47;
		L_47 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_46, _stringLiteralFA5EC7168E9633DAAEAA255ECB55030EA60F064F, NULL);
		if (L_47)
		{
			goto IL_037a;
		}
	}
	{
		goto IL_0420;
	}

IL_0208:
	{
		String_t* L_48 = V_1;
		bool L_49;
		L_49 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_48, _stringLiteralEB0A157666700D8227FD4B66A26FDC02035E89BF, NULL);
		if (L_49)
		{
			goto IL_038c;
		}
	}
	{
		goto IL_0420;
	}

IL_021d:
	{
		String_t* L_50 = V_1;
		bool L_51;
		L_51 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_50, _stringLiteral8E54BB51E569CB6A8D3C45D8AEF883A1559C1C0E, NULL);
		if (L_51)
		{
			goto IL_039e;
		}
	}
	{
		goto IL_0420;
	}

IL_0232:
	{
		String_t* L_52 = V_1;
		bool L_53;
		L_53 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_52, _stringLiteral60E56797D122AE71D3774956F66C6EEB9EA22C05, NULL);
		if (L_53)
		{
			goto IL_03ad;
		}
	}
	{
		goto IL_0420;
	}

IL_0247:
	{
		String_t* L_54 = V_1;
		bool L_55;
		L_55 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_54, _stringLiteral01837E2252AC8026A5EA3567A663017A662FBB70, NULL);
		if (L_55)
		{
			goto IL_03bc;
		}
	}
	{
		goto IL_0420;
	}

IL_025c:
	{
		String_t* L_56 = V_1;
		bool L_57;
		L_57 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_56, _stringLiteralF66E9083C67855AB6EBB4B74342E385A72AACE32, NULL);
		if (L_57)
		{
			goto IL_03d0;
		}
	}
	{
		goto IL_0420;
	}

IL_0271:
	{
		String_t* L_58 = V_1;
		bool L_59;
		L_59 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_58, _stringLiteral91811EE149061D28B38320E2430CE8888AD6398B, NULL);
		if (L_59)
		{
			goto IL_03e4;
		}
	}
	{
		goto IL_0420;
	}

IL_0286:
	{
		String_t* L_60 = V_1;
		bool L_61;
		L_61 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_60, _stringLiteral6686C366F645244186604A3DA4B9A58012A85F1B, NULL);
		if (L_61)
		{
			goto IL_03f8;
		}
	}
	{
		goto IL_0420;
	}

IL_029b:
	{
		String_t* L_62 = V_1;
		bool L_63;
		L_63 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_62, _stringLiteralCA1B66E295BD92E9FD3B6C708F09CA69A50BEFD1, NULL);
		if (L_63)
		{
			goto IL_040c;
		}
	}
	{
		goto IL_0420;
	}

IL_02b0:
	{
		// instance.enabled = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_64 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_65 = ((ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_64);
		bool L_66;
		L_66 = GenericVirtualFuncInvoker1< bool, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mFFB70EE53D8CD0255A4E599780F62A3EB1520E83_RuntimeMethod_var, L_64, L_65);
		ShapeModule_set_enabled_m6BA02351FEED67A82664135B922DDA66D71DF399((&V_0), L_66, NULL);
		// break;
		goto IL_0426;
	}

IL_02c7:
	{
		// instance.shapeType = reader.Read<UnityEngine.ParticleSystemShapeType>();
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_67 = ___reader0;
		NullCheck(L_67);
		int32_t L_68;
		L_68 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisParticleSystemShapeType_tADE62D07EDA71578326A03B50871391EE01F73BB_m3423F2435F483F46ABB4C8EAD9B78CD03D2742FB_RuntimeMethod_var, L_67);
		ShapeModule_set_shapeType_m4B5D1EA91037AD7065FE1D23652D919FED4D6D7F((&V_0), L_68, NULL);
		// break;
		goto IL_0426;
	}

IL_02d9:
	{
		// instance.randomDirectionAmount = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_69 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_70 = ((ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_69);
		float L_71;
		L_71 = GenericVirtualFuncInvoker1< float, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mA86928BC888E342D2C2644535E3399952F5077ED_RuntimeMethod_var, L_69, L_70);
		ShapeModule_set_randomDirectionAmount_m398CEE6D93207797559A80CE49A0C4138C96D0B3((&V_0), L_71, NULL);
		// break;
		goto IL_0426;
	}

IL_02f0:
	{
		// instance.sphericalDirectionAmount = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_72 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_73 = ((ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_72);
		float L_74;
		L_74 = GenericVirtualFuncInvoker1< float, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mA86928BC888E342D2C2644535E3399952F5077ED_RuntimeMethod_var, L_72, L_73);
		ShapeModule_set_sphericalDirectionAmount_m395143D474E51CE6AAF81C9DB84028A16B9BCAAB((&V_0), L_74, NULL);
		// break;
		goto IL_0426;
	}

IL_0307:
	{
		// instance.alignToDirection = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_75 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_76 = ((ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_75);
		bool L_77;
		L_77 = GenericVirtualFuncInvoker1< bool, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mFFB70EE53D8CD0255A4E599780F62A3EB1520E83_RuntimeMethod_var, L_75, L_76);
		ShapeModule_set_alignToDirection_mD632613E0E343654E6569F22BC9EFBB9247AC581((&V_0), L_77, NULL);
		// break;
		goto IL_0426;
	}

IL_031e:
	{
		// instance.radius = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_78 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_79 = ((ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_78);
		float L_80;
		L_80 = GenericVirtualFuncInvoker1< float, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mA86928BC888E342D2C2644535E3399952F5077ED_RuntimeMethod_var, L_78, L_79);
		ShapeModule_set_radius_m37F79E13EB60FA39EAE36B49DAC4AC880416E89C((&V_0), L_80, NULL);
		// break;
		goto IL_0426;
	}

IL_0335:
	{
		// instance.angle = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_81 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_82 = ((ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_81);
		float L_83;
		L_83 = GenericVirtualFuncInvoker1< float, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mA86928BC888E342D2C2644535E3399952F5077ED_RuntimeMethod_var, L_81, L_82);
		ShapeModule_set_angle_m62F5F037CD1DF55172B2D64DBF8271F9F917133A((&V_0), L_83, NULL);
		// break;
		goto IL_0426;
	}

IL_034c:
	{
		// instance.length = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_84 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_85 = ((ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_84);
		float L_86;
		L_86 = GenericVirtualFuncInvoker1< float, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mA86928BC888E342D2C2644535E3399952F5077ED_RuntimeMethod_var, L_84, L_85);
		ShapeModule_set_length_mD38341192A10095F9D0217993D410939F90CE621((&V_0), L_86, NULL);
		// break;
		goto IL_0426;
	}

IL_0363:
	{
		// instance.scale = reader.Read<UnityEngine.Vector3>(ES3Type_Vector3.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_87 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_88 = ((ES3Type_Vector3_t29E9EC31EED86489FBD8A22FBD317F5BD5C3A3E9_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Vector3_t29E9EC31EED86489FBD8A22FBD317F5BD5C3A3E9_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_87);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_89;
		L_89 = GenericVirtualFuncInvoker1< Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_m41744F4EDB47642D9EF02C774ADD5EADDE749262_RuntimeMethod_var, L_87, L_88);
		ShapeModule_set_scale_mDA84B80016FDA6B6EE181B108C3E59A2FFF9143D((&V_0), L_89, NULL);
		// break;
		goto IL_0426;
	}

IL_037a:
	{
		// instance.meshShapeType = reader.Read<UnityEngine.ParticleSystemMeshShapeType>();
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_90 = ___reader0;
		NullCheck(L_90);
		int32_t L_91;
		L_91 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisParticleSystemMeshShapeType_t260D7CAA6014D0ACE2BCFE0BC588E1ADE3AF98E5_m2E1596CACABC5B7BB194A74A92C1E5627B3DB9D0_RuntimeMethod_var, L_90);
		ShapeModule_set_meshShapeType_m335ED6F02244A07F8557E900D9935A4220AD23D0((&V_0), L_91, NULL);
		// break;
		goto IL_0426;
	}

IL_038c:
	{
		// instance.mesh = reader.Read<UnityEngine.Mesh>();
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_92 = ___reader0;
		NullCheck(L_92);
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_93;
		L_93 = GenericVirtualFuncInvoker0< Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* >::Invoke(ES3Reader_Read_TisMesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4_m4DD8C0823DA528C84509E776081834CEAC71FE88_RuntimeMethod_var, L_92);
		ShapeModule_set_mesh_m75450DE287A91452C63021F100D8B6A65A921CE1((&V_0), L_93, NULL);
		// break;
		goto IL_0426;
	}

IL_039e:
	{
		// instance.meshRenderer = reader.Read<UnityEngine.MeshRenderer>();
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_94 = ___reader0;
		NullCheck(L_94);
		MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE* L_95;
		L_95 = GenericVirtualFuncInvoker0< MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE* >::Invoke(ES3Reader_Read_TisMeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE_mADE66001251FAEAB39EE97DA447D0A80EAAB85C4_RuntimeMethod_var, L_94);
		ShapeModule_set_meshRenderer_m25111B1DC9F173FE054264094DB19564D375D1D6((&V_0), L_95, NULL);
		// break;
		goto IL_0426;
	}

IL_03ad:
	{
		// instance.skinnedMeshRenderer = reader.Read<UnityEngine.SkinnedMeshRenderer>();
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_96 = ___reader0;
		NullCheck(L_96);
		SkinnedMeshRenderer_t020C4E8648EA1C4C6BA5C41502919B387E7E1C2E* L_97;
		L_97 = GenericVirtualFuncInvoker0< SkinnedMeshRenderer_t020C4E8648EA1C4C6BA5C41502919B387E7E1C2E* >::Invoke(ES3Reader_Read_TisSkinnedMeshRenderer_t020C4E8648EA1C4C6BA5C41502919B387E7E1C2E_m9E77EF921E4ACFCE425D24538209CF592968463E_RuntimeMethod_var, L_96);
		ShapeModule_set_skinnedMeshRenderer_mB3B9D58C4A9D21F990EC2000D38B5E35C7FF5807((&V_0), L_97, NULL);
		// break;
		goto IL_0426;
	}

IL_03bc:
	{
		// instance.useMeshMaterialIndex = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_98 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_99 = ((ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_98);
		bool L_100;
		L_100 = GenericVirtualFuncInvoker1< bool, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mFFB70EE53D8CD0255A4E599780F62A3EB1520E83_RuntimeMethod_var, L_98, L_99);
		ShapeModule_set_useMeshMaterialIndex_m48CE9CB5BA8CAF93D4C92975B826A7BA8459B838((&V_0), L_100, NULL);
		// break;
		goto IL_0426;
	}

IL_03d0:
	{
		// instance.meshMaterialIndex = reader.Read<System.Int32>(ES3Type_int.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_101 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_102 = ((ES3Type_int_t05A5E7A96442F23CE33E24A71CD349372A70E0C3_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_int_t05A5E7A96442F23CE33E24A71CD349372A70E0C3_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_101);
		int32_t L_103;
		L_103 = GenericVirtualFuncInvoker1< int32_t, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mEFCC4D52DD5B822D3561A53591AE11CDB25CDB6F_RuntimeMethod_var, L_101, L_102);
		ShapeModule_set_meshMaterialIndex_mC72EF43FC31A137D1247E748E89FE0FF5FB2C29F((&V_0), L_103, NULL);
		// break;
		goto IL_0426;
	}

IL_03e4:
	{
		// instance.useMeshColors = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_104 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_105 = ((ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_104);
		bool L_106;
		L_106 = GenericVirtualFuncInvoker1< bool, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mFFB70EE53D8CD0255A4E599780F62A3EB1520E83_RuntimeMethod_var, L_104, L_105);
		ShapeModule_set_useMeshColors_m2B12B03E04E2ACEE2AE68B697F462232D42D6C6E((&V_0), L_106, NULL);
		// break;
		goto IL_0426;
	}

IL_03f8:
	{
		// instance.normalOffset = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_107 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_108 = ((ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_107);
		float L_109;
		L_109 = GenericVirtualFuncInvoker1< float, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mA86928BC888E342D2C2644535E3399952F5077ED_RuntimeMethod_var, L_107, L_108);
		ShapeModule_set_normalOffset_m24453DEF085D96323A09DEBD134283B7F23C263F((&V_0), L_109, NULL);
		// break;
		goto IL_0426;
	}

IL_040c:
	{
		// instance.arc = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_110 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_111 = ((ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_110);
		float L_112;
		L_112 = GenericVirtualFuncInvoker1< float, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mA86928BC888E342D2C2644535E3399952F5077ED_RuntimeMethod_var, L_110, L_111);
		ShapeModule_set_arc_mE9EF87E2AA959143B466CD55B7DAA65FBE155D1F((&V_0), L_112, NULL);
		// break;
		goto IL_0426;
	}

IL_0420:
	{
		// reader.Skip();
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_113 = ___reader0;
		NullCheck(L_113);
		VirtualActionInvoker0::Invoke(41 /* System.Void ES3Reader::Skip() */, L_113);
	}

IL_0426:
	{
		// while((propertyName = reader.ReadPropertyName()) != null)
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_114 = ___reader0;
		NullCheck(L_114);
		String_t* L_115;
		L_115 = VirtualFuncInvoker0< String_t* >::Invoke(21 /* System.String ES3Reader::ReadPropertyName() */, L_114);
		String_t* L_116 = L_115;
		V_1 = L_116;
		if (L_116)
		{
			goto IL_000c;
		}
	}
	{
		// }
		return;
	}
}
// System.Void ES3Types.ES3Type_ShapeModule::ReadInto<UnityEngine.ParticleSystem/LightsModule>(ES3Reader,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ES3Type_ShapeModule_ReadInto_TisLightsModule_t720242ED070FD6C55E59B7536322829A22884C7E_mA44E92CEEA460B952B250CB5B05B02A362021C0B_gshared (ES3Type_ShapeModule_t2A98821A3CBBB891C72216EA1D86C9579DFD70B7* __this, ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* ___reader0, RuntimeObject* ___obj1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mFFB70EE53D8CD0255A4E599780F62A3EB1520E83_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mEFCC4D52DD5B822D3561A53591AE11CDB25CDB6F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisMeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE_mADE66001251FAEAB39EE97DA447D0A80EAAB85C4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisMesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4_m4DD8C0823DA528C84509E776081834CEAC71FE88_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisParticleSystemMeshShapeType_t260D7CAA6014D0ACE2BCFE0BC588E1ADE3AF98E5_m2E1596CACABC5B7BB194A74A92C1E5627B3DB9D0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisParticleSystemShapeType_tADE62D07EDA71578326A03B50871391EE01F73BB_m3423F2435F483F46ABB4C8EAD9B78CD03D2742FB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mA86928BC888E342D2C2644535E3399952F5077ED_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisSkinnedMeshRenderer_t020C4E8648EA1C4C6BA5C41502919B387E7E1C2E_m9E77EF921E4ACFCE425D24538209CF592968463E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_m41744F4EDB47642D9EF02C774ADD5EADDE749262_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_Vector3_t29E9EC31EED86489FBD8A22FBD317F5BD5C3A3E9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_int_t05A5E7A96442F23CE33E24A71CD349372A70E0C3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ShapeModule_tAA38A0C5305DF2F9D96F89D4B8F762E2D034D8B2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral01837E2252AC8026A5EA3567A663017A662FBB70);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1228466552C1791B2019A329AFE94665D441168A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral60E56797D122AE71D3774956F66C6EEB9EA22C05);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6686C366F645244186604A3DA4B9A58012A85F1B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral82BECCAD895076775062861CDB46AADEF913D969);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8C9F18A4F030B96447955FBBA1A99FFC43B5D8E0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8E54BB51E569CB6A8D3C45D8AEF883A1559C1C0E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral91811EE149061D28B38320E2430CE8888AD6398B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBD49F93A7BC78A69E385CEC0E78F434BD2845A17);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCA1B66E295BD92E9FD3B6C708F09CA69A50BEFD1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE8744A8B8BD390EB66CA0CAE2376C973E6904FFB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEB0A157666700D8227FD4B66A26FDC02035E89BF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralED1F119527A0BCA45125EF8E0F719985DA86C0E1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF66E9083C67855AB6EBB4B74342E385A72AACE32);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF9BE17D634D1B07BCDCDA77A87710C946D81307B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFA5EC7168E9633DAAEAA255ECB55030EA60F064F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFC341A1966AF28A9A7A26EDFB78ABBF7DE4D0E1F);
		s_Il2CppMethodInitialized = true;
	}
	ShapeModule_tAA38A0C5305DF2F9D96F89D4B8F762E2D034D8B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	uint32_t V_2 = 0;
	{
		// var instance = (UnityEngine.ParticleSystem.ShapeModule)obj;
		RuntimeObject* L_0 = ___obj1;
		V_0 = ((*(ShapeModule_tAA38A0C5305DF2F9D96F89D4B8F762E2D034D8B2*)((ShapeModule_tAA38A0C5305DF2F9D96F89D4B8F762E2D034D8B2*)(ShapeModule_tAA38A0C5305DF2F9D96F89D4B8F762E2D034D8B2*)UnBox(L_0, ShapeModule_tAA38A0C5305DF2F9D96F89D4B8F762E2D034D8B2_il2cpp_TypeInfo_var))));
		goto IL_0426;
	}

IL_000c:
	{
		String_t* L_1 = V_1;
		uint32_t L_2;
		L_2 = U3CPrivateImplementationDetailsU3E_ComputeStringHash_m9E43873DE0DF480D27EC1C2AA3C09E74EA77F75D(L_1, NULL);
		V_2 = L_2;
		uint32_t L_3 = V_2;
		if ((!(((uint32_t)L_3) <= ((uint32_t)((int32_t)-2104025999)))))
		{
			goto IL_00ad;
		}
	}
	{
		uint32_t L_4 = V_2;
		if ((!(((uint32_t)L_4) <= ((uint32_t)((int32_t)666576729)))))
		{
			goto IL_0064;
		}
	}
	{
		uint32_t L_5 = V_2;
		if ((!(((uint32_t)L_5) <= ((uint32_t)((int32_t)49525662)))))
		{
			goto IL_0049;
		}
	}
	{
		uint32_t L_6 = V_2;
		if ((((int32_t)L_6) == ((int32_t)((int32_t)24602224))))
		{
			goto IL_0247;
		}
	}
	{
		uint32_t L_7 = V_2;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)49525662))))
		{
			goto IL_0136;
		}
	}
	{
		goto IL_0420;
	}

IL_0049:
	{
		uint32_t L_8 = V_2;
		if ((((int32_t)L_8) == ((int32_t)((int32_t)230313139))))
		{
			goto IL_019f;
		}
	}
	{
		uint32_t L_9 = V_2;
		if ((((int32_t)L_9) == ((int32_t)((int32_t)666576729))))
		{
			goto IL_01f3;
		}
	}
	{
		goto IL_0420;
	}

IL_0064:
	{
		uint32_t L_10 = V_2;
		if ((!(((uint32_t)L_10) <= ((uint32_t)((int32_t)955488309)))))
		{
			goto IL_0087;
		}
	}
	{
		uint32_t L_11 = V_2;
		if ((((int32_t)L_11) == ((int32_t)((int32_t)923624301))))
		{
			goto IL_0232;
		}
	}
	{
		uint32_t L_12 = V_2;
		if ((((int32_t)L_12) == ((int32_t)((int32_t)955488309))))
		{
			goto IL_0286;
		}
	}
	{
		goto IL_0420;
	}

IL_0087:
	{
		uint32_t L_13 = V_2;
		if ((((int32_t)L_13) == ((int32_t)((int32_t)980363995))))
		{
			goto IL_029b;
		}
	}
	{
		uint32_t L_14 = V_2;
		if ((((int32_t)L_14) == ((int32_t)((int32_t)985988853))))
		{
			goto IL_0175;
		}
	}
	{
		uint32_t L_15 = V_2;
		if ((((int32_t)L_15) == ((int32_t)((int32_t)-2104025999))))
		{
			goto IL_01de;
		}
	}
	{
		goto IL_0420;
	}

IL_00ad:
	{
		uint32_t L_16 = V_2;
		if ((!(((uint32_t)L_16) <= ((uint32_t)((int32_t)-1473810612)))))
		{
			goto IL_00f0;
		}
	}
	{
		uint32_t L_17 = V_2;
		if ((!(((uint32_t)L_17) <= ((uint32_t)((int32_t)-1726928010)))))
		{
			goto IL_00d5;
		}
	}
	{
		uint32_t L_18 = V_2;
		if ((((int32_t)L_18) == ((int32_t)((int32_t)-2083506667))))
		{
			goto IL_01c9;
		}
	}
	{
		uint32_t L_19 = V_2;
		if ((((int32_t)L_19) == ((int32_t)((int32_t)-1726928010))))
		{
			goto IL_014b;
		}
	}
	{
		goto IL_0420;
	}

IL_00d5:
	{
		uint32_t L_20 = V_2;
		if ((((int32_t)L_20) == ((int32_t)((int32_t)-1593786692))))
		{
			goto IL_0208;
		}
	}
	{
		uint32_t L_21 = V_2;
		if ((((int32_t)L_21) == ((int32_t)((int32_t)-1473810612))))
		{
			goto IL_018a;
		}
	}
	{
		goto IL_0420;
	}

IL_00f0:
	{
		uint32_t L_22 = V_2;
		if ((!(((uint32_t)L_22) <= ((uint32_t)((int32_t)-1386986472)))))
		{
			goto IL_0110;
		}
	}
	{
		uint32_t L_23 = V_2;
		if ((((int32_t)L_23) == ((int32_t)((int32_t)-1412039661))))
		{
			goto IL_0160;
		}
	}
	{
		uint32_t L_24 = V_2;
		if ((((int32_t)L_24) == ((int32_t)((int32_t)-1386986472))))
		{
			goto IL_01b4;
		}
	}
	{
		goto IL_0420;
	}

IL_0110:
	{
		uint32_t L_25 = V_2;
		if ((((int32_t)L_25) == ((int32_t)((int32_t)-584064197))))
		{
			goto IL_021d;
		}
	}
	{
		uint32_t L_26 = V_2;
		if ((((int32_t)L_26) == ((int32_t)((int32_t)-473474755))))
		{
			goto IL_0271;
		}
	}
	{
		uint32_t L_27 = V_2;
		if ((((int32_t)L_27) == ((int32_t)((int32_t)-365686981))))
		{
			goto IL_025c;
		}
	}
	{
		goto IL_0420;
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
		goto IL_0420;
	}

IL_014b:
	{
		String_t* L_30 = V_1;
		bool L_31;
		L_31 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_30, _stringLiteral82BECCAD895076775062861CDB46AADEF913D969, NULL);
		if (L_31)
		{
			goto IL_02c7;
		}
	}
	{
		goto IL_0420;
	}

IL_0160:
	{
		String_t* L_32 = V_1;
		bool L_33;
		L_33 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_32, _stringLiteral1228466552C1791B2019A329AFE94665D441168A, NULL);
		if (L_33)
		{
			goto IL_02d9;
		}
	}
	{
		goto IL_0420;
	}

IL_0175:
	{
		String_t* L_34 = V_1;
		bool L_35;
		L_35 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_34, _stringLiteralBD49F93A7BC78A69E385CEC0E78F434BD2845A17, NULL);
		if (L_35)
		{
			goto IL_02f0;
		}
	}
	{
		goto IL_0420;
	}

IL_018a:
	{
		String_t* L_36 = V_1;
		bool L_37;
		L_37 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_36, _stringLiteralED1F119527A0BCA45125EF8E0F719985DA86C0E1, NULL);
		if (L_37)
		{
			goto IL_0307;
		}
	}
	{
		goto IL_0420;
	}

IL_019f:
	{
		String_t* L_38 = V_1;
		bool L_39;
		L_39 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_38, _stringLiteral8C9F18A4F030B96447955FBBA1A99FFC43B5D8E0, NULL);
		if (L_39)
		{
			goto IL_031e;
		}
	}
	{
		goto IL_0420;
	}

IL_01b4:
	{
		String_t* L_40 = V_1;
		bool L_41;
		L_41 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_40, _stringLiteralFC341A1966AF28A9A7A26EDFB78ABBF7DE4D0E1F, NULL);
		if (L_41)
		{
			goto IL_0335;
		}
	}
	{
		goto IL_0420;
	}

IL_01c9:
	{
		String_t* L_42 = V_1;
		bool L_43;
		L_43 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_42, _stringLiteralE8744A8B8BD390EB66CA0CAE2376C973E6904FFB, NULL);
		if (L_43)
		{
			goto IL_034c;
		}
	}
	{
		goto IL_0420;
	}

IL_01de:
	{
		String_t* L_44 = V_1;
		bool L_45;
		L_45 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_44, _stringLiteralF9BE17D634D1B07BCDCDA77A87710C946D81307B, NULL);
		if (L_45)
		{
			goto IL_0363;
		}
	}
	{
		goto IL_0420;
	}

IL_01f3:
	{
		String_t* L_46 = V_1;
		bool L_47;
		L_47 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_46, _stringLiteralFA5EC7168E9633DAAEAA255ECB55030EA60F064F, NULL);
		if (L_47)
		{
			goto IL_037a;
		}
	}
	{
		goto IL_0420;
	}

IL_0208:
	{
		String_t* L_48 = V_1;
		bool L_49;
		L_49 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_48, _stringLiteralEB0A157666700D8227FD4B66A26FDC02035E89BF, NULL);
		if (L_49)
		{
			goto IL_038c;
		}
	}
	{
		goto IL_0420;
	}

IL_021d:
	{
		String_t* L_50 = V_1;
		bool L_51;
		L_51 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_50, _stringLiteral8E54BB51E569CB6A8D3C45D8AEF883A1559C1C0E, NULL);
		if (L_51)
		{
			goto IL_039e;
		}
	}
	{
		goto IL_0420;
	}

IL_0232:
	{
		String_t* L_52 = V_1;
		bool L_53;
		L_53 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_52, _stringLiteral60E56797D122AE71D3774956F66C6EEB9EA22C05, NULL);
		if (L_53)
		{
			goto IL_03ad;
		}
	}
	{
		goto IL_0420;
	}

IL_0247:
	{
		String_t* L_54 = V_1;
		bool L_55;
		L_55 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_54, _stringLiteral01837E2252AC8026A5EA3567A663017A662FBB70, NULL);
		if (L_55)
		{
			goto IL_03bc;
		}
	}
	{
		goto IL_0420;
	}

IL_025c:
	{
		String_t* L_56 = V_1;
		bool L_57;
		L_57 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_56, _stringLiteralF66E9083C67855AB6EBB4B74342E385A72AACE32, NULL);
		if (L_57)
		{
			goto IL_03d0;
		}
	}
	{
		goto IL_0420;
	}

IL_0271:
	{
		String_t* L_58 = V_1;
		bool L_59;
		L_59 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_58, _stringLiteral91811EE149061D28B38320E2430CE8888AD6398B, NULL);
		if (L_59)
		{
			goto IL_03e4;
		}
	}
	{
		goto IL_0420;
	}

IL_0286:
	{
		String_t* L_60 = V_1;
		bool L_61;
		L_61 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_60, _stringLiteral6686C366F645244186604A3DA4B9A58012A85F1B, NULL);
		if (L_61)
		{
			goto IL_03f8;
		}
	}
	{
		goto IL_0420;
	}

IL_029b:
	{
		String_t* L_62 = V_1;
		bool L_63;
		L_63 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_62, _stringLiteralCA1B66E295BD92E9FD3B6C708F09CA69A50BEFD1, NULL);
		if (L_63)
		{
			goto IL_040c;
		}
	}
	{
		goto IL_0420;
	}

IL_02b0:
	{
		// instance.enabled = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_64 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_65 = ((ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_64);
		bool L_66;
		L_66 = GenericVirtualFuncInvoker1< bool, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mFFB70EE53D8CD0255A4E599780F62A3EB1520E83_RuntimeMethod_var, L_64, L_65);
		ShapeModule_set_enabled_m6BA02351FEED67A82664135B922DDA66D71DF399((&V_0), L_66, NULL);
		// break;
		goto IL_0426;
	}

IL_02c7:
	{
		// instance.shapeType = reader.Read<UnityEngine.ParticleSystemShapeType>();
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_67 = ___reader0;
		NullCheck(L_67);
		int32_t L_68;
		L_68 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisParticleSystemShapeType_tADE62D07EDA71578326A03B50871391EE01F73BB_m3423F2435F483F46ABB4C8EAD9B78CD03D2742FB_RuntimeMethod_var, L_67);
		ShapeModule_set_shapeType_m4B5D1EA91037AD7065FE1D23652D919FED4D6D7F((&V_0), L_68, NULL);
		// break;
		goto IL_0426;
	}

IL_02d9:
	{
		// instance.randomDirectionAmount = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_69 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_70 = ((ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_69);
		float L_71;
		L_71 = GenericVirtualFuncInvoker1< float, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mA86928BC888E342D2C2644535E3399952F5077ED_RuntimeMethod_var, L_69, L_70);
		ShapeModule_set_randomDirectionAmount_m398CEE6D93207797559A80CE49A0C4138C96D0B3((&V_0), L_71, NULL);
		// break;
		goto IL_0426;
	}

IL_02f0:
	{
		// instance.sphericalDirectionAmount = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_72 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_73 = ((ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_72);
		float L_74;
		L_74 = GenericVirtualFuncInvoker1< float, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mA86928BC888E342D2C2644535E3399952F5077ED_RuntimeMethod_var, L_72, L_73);
		ShapeModule_set_sphericalDirectionAmount_m395143D474E51CE6AAF81C9DB84028A16B9BCAAB((&V_0), L_74, NULL);
		// break;
		goto IL_0426;
	}

IL_0307:
	{
		// instance.alignToDirection = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_75 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_76 = ((ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_75);
		bool L_77;
		L_77 = GenericVirtualFuncInvoker1< bool, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mFFB70EE53D8CD0255A4E599780F62A3EB1520E83_RuntimeMethod_var, L_75, L_76);
		ShapeModule_set_alignToDirection_mD632613E0E343654E6569F22BC9EFBB9247AC581((&V_0), L_77, NULL);
		// break;
		goto IL_0426;
	}

IL_031e:
	{
		// instance.radius = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_78 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_79 = ((ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_78);
		float L_80;
		L_80 = GenericVirtualFuncInvoker1< float, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mA86928BC888E342D2C2644535E3399952F5077ED_RuntimeMethod_var, L_78, L_79);
		ShapeModule_set_radius_m37F79E13EB60FA39EAE36B49DAC4AC880416E89C((&V_0), L_80, NULL);
		// break;
		goto IL_0426;
	}

IL_0335:
	{
		// instance.angle = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_81 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_82 = ((ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_81);
		float L_83;
		L_83 = GenericVirtualFuncInvoker1< float, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mA86928BC888E342D2C2644535E3399952F5077ED_RuntimeMethod_var, L_81, L_82);
		ShapeModule_set_angle_m62F5F037CD1DF55172B2D64DBF8271F9F917133A((&V_0), L_83, NULL);
		// break;
		goto IL_0426;
	}

IL_034c:
	{
		// instance.length = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_84 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_85 = ((ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_84);
		float L_86;
		L_86 = GenericVirtualFuncInvoker1< float, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mA86928BC888E342D2C2644535E3399952F5077ED_RuntimeMethod_var, L_84, L_85);
		ShapeModule_set_length_mD38341192A10095F9D0217993D410939F90CE621((&V_0), L_86, NULL);
		// break;
		goto IL_0426;
	}

IL_0363:
	{
		// instance.scale = reader.Read<UnityEngine.Vector3>(ES3Type_Vector3.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_87 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_88 = ((ES3Type_Vector3_t29E9EC31EED86489FBD8A22FBD317F5BD5C3A3E9_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Vector3_t29E9EC31EED86489FBD8A22FBD317F5BD5C3A3E9_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_87);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_89;
		L_89 = GenericVirtualFuncInvoker1< Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_m41744F4EDB47642D9EF02C774ADD5EADDE749262_RuntimeMethod_var, L_87, L_88);
		ShapeModule_set_scale_mDA84B80016FDA6B6EE181B108C3E59A2FFF9143D((&V_0), L_89, NULL);
		// break;
		goto IL_0426;
	}

IL_037a:
	{
		// instance.meshShapeType = reader.Read<UnityEngine.ParticleSystemMeshShapeType>();
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_90 = ___reader0;
		NullCheck(L_90);
		int32_t L_91;
		L_91 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisParticleSystemMeshShapeType_t260D7CAA6014D0ACE2BCFE0BC588E1ADE3AF98E5_m2E1596CACABC5B7BB194A74A92C1E5627B3DB9D0_RuntimeMethod_var, L_90);
		ShapeModule_set_meshShapeType_m335ED6F02244A07F8557E900D9935A4220AD23D0((&V_0), L_91, NULL);
		// break;
		goto IL_0426;
	}

IL_038c:
	{
		// instance.mesh = reader.Read<UnityEngine.Mesh>();
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_92 = ___reader0;
		NullCheck(L_92);
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_93;
		L_93 = GenericVirtualFuncInvoker0< Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* >::Invoke(ES3Reader_Read_TisMesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4_m4DD8C0823DA528C84509E776081834CEAC71FE88_RuntimeMethod_var, L_92);
		ShapeModule_set_mesh_m75450DE287A91452C63021F100D8B6A65A921CE1((&V_0), L_93, NULL);
		// break;
		goto IL_0426;
	}

IL_039e:
	{
		// instance.meshRenderer = reader.Read<UnityEngine.MeshRenderer>();
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_94 = ___reader0;
		NullCheck(L_94);
		MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE* L_95;
		L_95 = GenericVirtualFuncInvoker0< MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE* >::Invoke(ES3Reader_Read_TisMeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE_mADE66001251FAEAB39EE97DA447D0A80EAAB85C4_RuntimeMethod_var, L_94);
		ShapeModule_set_meshRenderer_m25111B1DC9F173FE054264094DB19564D375D1D6((&V_0), L_95, NULL);
		// break;
		goto IL_0426;
	}

IL_03ad:
	{
		// instance.skinnedMeshRenderer = reader.Read<UnityEngine.SkinnedMeshRenderer>();
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_96 = ___reader0;
		NullCheck(L_96);
		SkinnedMeshRenderer_t020C4E8648EA1C4C6BA5C41502919B387E7E1C2E* L_97;
		L_97 = GenericVirtualFuncInvoker0< SkinnedMeshRenderer_t020C4E8648EA1C4C6BA5C41502919B387E7E1C2E* >::Invoke(ES3Reader_Read_TisSkinnedMeshRenderer_t020C4E8648EA1C4C6BA5C41502919B387E7E1C2E_m9E77EF921E4ACFCE425D24538209CF592968463E_RuntimeMethod_var, L_96);
		ShapeModule_set_skinnedMeshRenderer_mB3B9D58C4A9D21F990EC2000D38B5E35C7FF5807((&V_0), L_97, NULL);
		// break;
		goto IL_0426;
	}

IL_03bc:
	{
		// instance.useMeshMaterialIndex = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_98 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_99 = ((ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_98);
		bool L_100;
		L_100 = GenericVirtualFuncInvoker1< bool, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mFFB70EE53D8CD0255A4E599780F62A3EB1520E83_RuntimeMethod_var, L_98, L_99);
		ShapeModule_set_useMeshMaterialIndex_m48CE9CB5BA8CAF93D4C92975B826A7BA8459B838((&V_0), L_100, NULL);
		// break;
		goto IL_0426;
	}

IL_03d0:
	{
		// instance.meshMaterialIndex = reader.Read<System.Int32>(ES3Type_int.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_101 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_102 = ((ES3Type_int_t05A5E7A96442F23CE33E24A71CD349372A70E0C3_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_int_t05A5E7A96442F23CE33E24A71CD349372A70E0C3_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_101);
		int32_t L_103;
		L_103 = GenericVirtualFuncInvoker1< int32_t, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mEFCC4D52DD5B822D3561A53591AE11CDB25CDB6F_RuntimeMethod_var, L_101, L_102);
		ShapeModule_set_meshMaterialIndex_mC72EF43FC31A137D1247E748E89FE0FF5FB2C29F((&V_0), L_103, NULL);
		// break;
		goto IL_0426;
	}

IL_03e4:
	{
		// instance.useMeshColors = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_104 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_105 = ((ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_104);
		bool L_106;
		L_106 = GenericVirtualFuncInvoker1< bool, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mFFB70EE53D8CD0255A4E599780F62A3EB1520E83_RuntimeMethod_var, L_104, L_105);
		ShapeModule_set_useMeshColors_m2B12B03E04E2ACEE2AE68B697F462232D42D6C6E((&V_0), L_106, NULL);
		// break;
		goto IL_0426;
	}

IL_03f8:
	{
		// instance.normalOffset = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_107 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_108 = ((ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_107);
		float L_109;
		L_109 = GenericVirtualFuncInvoker1< float, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mA86928BC888E342D2C2644535E3399952F5077ED_RuntimeMethod_var, L_107, L_108);
		ShapeModule_set_normalOffset_m24453DEF085D96323A09DEBD134283B7F23C263F((&V_0), L_109, NULL);
		// break;
		goto IL_0426;
	}

IL_040c:
	{
		// instance.arc = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_110 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_111 = ((ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_110);
		float L_112;
		L_112 = GenericVirtualFuncInvoker1< float, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mA86928BC888E342D2C2644535E3399952F5077ED_RuntimeMethod_var, L_110, L_111);
		ShapeModule_set_arc_mE9EF87E2AA959143B466CD55B7DAA65FBE155D1F((&V_0), L_112, NULL);
		// break;
		goto IL_0426;
	}

IL_0420:
	{
		// reader.Skip();
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_113 = ___reader0;
		NullCheck(L_113);
		VirtualActionInvoker0::Invoke(41 /* System.Void ES3Reader::Skip() */, L_113);
	}

IL_0426:
	{
		// while((propertyName = reader.ReadPropertyName()) != null)
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_114 = ___reader0;
		NullCheck(L_114);
		String_t* L_115;
		L_115 = VirtualFuncInvoker0< String_t* >::Invoke(21 /* System.String ES3Reader::ReadPropertyName() */, L_114);
		String_t* L_116 = L_115;
		V_1 = L_116;
		if (L_116)
		{
			goto IL_000c;
		}
	}
	{
		// }
		return;
	}
}
// System.Void ES3Types.ES3Type_ShapeModule::ReadInto<UnityEngine.ParticleSystem/LimitVelocityOverLifetimeModule>(ES3Reader,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ES3Type_ShapeModule_ReadInto_TisLimitVelocityOverLifetimeModule_tC52CF1434E2639EE5D81DD6BA269FF38CA17D8B1_m981B09EA4A7D0698C58C4A9E7B9DB16243D13502_gshared (ES3Type_ShapeModule_t2A98821A3CBBB891C72216EA1D86C9579DFD70B7* __this, ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* ___reader0, RuntimeObject* ___obj1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mFFB70EE53D8CD0255A4E599780F62A3EB1520E83_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mEFCC4D52DD5B822D3561A53591AE11CDB25CDB6F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisMeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE_mADE66001251FAEAB39EE97DA447D0A80EAAB85C4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisMesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4_m4DD8C0823DA528C84509E776081834CEAC71FE88_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisParticleSystemMeshShapeType_t260D7CAA6014D0ACE2BCFE0BC588E1ADE3AF98E5_m2E1596CACABC5B7BB194A74A92C1E5627B3DB9D0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisParticleSystemShapeType_tADE62D07EDA71578326A03B50871391EE01F73BB_m3423F2435F483F46ABB4C8EAD9B78CD03D2742FB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mA86928BC888E342D2C2644535E3399952F5077ED_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisSkinnedMeshRenderer_t020C4E8648EA1C4C6BA5C41502919B387E7E1C2E_m9E77EF921E4ACFCE425D24538209CF592968463E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_m41744F4EDB47642D9EF02C774ADD5EADDE749262_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_Vector3_t29E9EC31EED86489FBD8A22FBD317F5BD5C3A3E9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_int_t05A5E7A96442F23CE33E24A71CD349372A70E0C3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ShapeModule_tAA38A0C5305DF2F9D96F89D4B8F762E2D034D8B2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral01837E2252AC8026A5EA3567A663017A662FBB70);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1228466552C1791B2019A329AFE94665D441168A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral60E56797D122AE71D3774956F66C6EEB9EA22C05);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6686C366F645244186604A3DA4B9A58012A85F1B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral82BECCAD895076775062861CDB46AADEF913D969);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8C9F18A4F030B96447955FBBA1A99FFC43B5D8E0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8E54BB51E569CB6A8D3C45D8AEF883A1559C1C0E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral91811EE149061D28B38320E2430CE8888AD6398B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBD49F93A7BC78A69E385CEC0E78F434BD2845A17);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCA1B66E295BD92E9FD3B6C708F09CA69A50BEFD1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE8744A8B8BD390EB66CA0CAE2376C973E6904FFB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEB0A157666700D8227FD4B66A26FDC02035E89BF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralED1F119527A0BCA45125EF8E0F719985DA86C0E1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF66E9083C67855AB6EBB4B74342E385A72AACE32);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF9BE17D634D1B07BCDCDA77A87710C946D81307B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFA5EC7168E9633DAAEAA255ECB55030EA60F064F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFC341A1966AF28A9A7A26EDFB78ABBF7DE4D0E1F);
		s_Il2CppMethodInitialized = true;
	}
	ShapeModule_tAA38A0C5305DF2F9D96F89D4B8F762E2D034D8B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	uint32_t V_2 = 0;
	{
		// var instance = (UnityEngine.ParticleSystem.ShapeModule)obj;
		RuntimeObject* L_0 = ___obj1;
		V_0 = ((*(ShapeModule_tAA38A0C5305DF2F9D96F89D4B8F762E2D034D8B2*)((ShapeModule_tAA38A0C5305DF2F9D96F89D4B8F762E2D034D8B2*)(ShapeModule_tAA38A0C5305DF2F9D96F89D4B8F762E2D034D8B2*)UnBox(L_0, ShapeModule_tAA38A0C5305DF2F9D96F89D4B8F762E2D034D8B2_il2cpp_TypeInfo_var))));
		goto IL_0426;
	}

IL_000c:
	{
		String_t* L_1 = V_1;
		uint32_t L_2;
		L_2 = U3CPrivateImplementationDetailsU3E_ComputeStringHash_m9E43873DE0DF480D27EC1C2AA3C09E74EA77F75D(L_1, NULL);
		V_2 = L_2;
		uint32_t L_3 = V_2;
		if ((!(((uint32_t)L_3) <= ((uint32_t)((int32_t)-2104025999)))))
		{
			goto IL_00ad;
		}
	}
	{
		uint32_t L_4 = V_2;
		if ((!(((uint32_t)L_4) <= ((uint32_t)((int32_t)666576729)))))
		{
			goto IL_0064;
		}
	}
	{
		uint32_t L_5 = V_2;
		if ((!(((uint32_t)L_5) <= ((uint32_t)((int32_t)49525662)))))
		{
			goto IL_0049;
		}
	}
	{
		uint32_t L_6 = V_2;
		if ((((int32_t)L_6) == ((int32_t)((int32_t)24602224))))
		{
			goto IL_0247;
		}
	}
	{
		uint32_t L_7 = V_2;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)49525662))))
		{
			goto IL_0136;
		}
	}
	{
		goto IL_0420;
	}

IL_0049:
	{
		uint32_t L_8 = V_2;
		if ((((int32_t)L_8) == ((int32_t)((int32_t)230313139))))
		{
			goto IL_019f;
		}
	}
	{
		uint32_t L_9 = V_2;
		if ((((int32_t)L_9) == ((int32_t)((int32_t)666576729))))
		{
			goto IL_01f3;
		}
	}
	{
		goto IL_0420;
	}

IL_0064:
	{
		uint32_t L_10 = V_2;
		if ((!(((uint32_t)L_10) <= ((uint32_t)((int32_t)955488309)))))
		{
			goto IL_0087;
		}
	}
	{
		uint32_t L_11 = V_2;
		if ((((int32_t)L_11) == ((int32_t)((int32_t)923624301))))
		{
			goto IL_0232;
		}
	}
	{
		uint32_t L_12 = V_2;
		if ((((int32_t)L_12) == ((int32_t)((int32_t)955488309))))
		{
			goto IL_0286;
		}
	}
	{
		goto IL_0420;
	}

IL_0087:
	{
		uint32_t L_13 = V_2;
		if ((((int32_t)L_13) == ((int32_t)((int32_t)980363995))))
		{
			goto IL_029b;
		}
	}
	{
		uint32_t L_14 = V_2;
		if ((((int32_t)L_14) == ((int32_t)((int32_t)985988853))))
		{
			goto IL_0175;
		}
	}
	{
		uint32_t L_15 = V_2;
		if ((((int32_t)L_15) == ((int32_t)((int32_t)-2104025999))))
		{
			goto IL_01de;
		}
	}
	{
		goto IL_0420;
	}

IL_00ad:
	{
		uint32_t L_16 = V_2;
		if ((!(((uint32_t)L_16) <= ((uint32_t)((int32_t)-1473810612)))))
		{
			goto IL_00f0;
		}
	}
	{
		uint32_t L_17 = V_2;
		if ((!(((uint32_t)L_17) <= ((uint32_t)((int32_t)-1726928010)))))
		{
			goto IL_00d5;
		}
	}
	{
		uint32_t L_18 = V_2;
		if ((((int32_t)L_18) == ((int32_t)((int32_t)-2083506667))))
		{
			goto IL_01c9;
		}
	}
	{
		uint32_t L_19 = V_2;
		if ((((int32_t)L_19) == ((int32_t)((int32_t)-1726928010))))
		{
			goto IL_014b;
		}
	}
	{
		goto IL_0420;
	}

IL_00d5:
	{
		uint32_t L_20 = V_2;
		if ((((int32_t)L_20) == ((int32_t)((int32_t)-1593786692))))
		{
			goto IL_0208;
		}
	}
	{
		uint32_t L_21 = V_2;
		if ((((int32_t)L_21) == ((int32_t)((int32_t)-1473810612))))
		{
			goto IL_018a;
		}
	}
	{
		goto IL_0420;
	}

IL_00f0:
	{
		uint32_t L_22 = V_2;
		if ((!(((uint32_t)L_22) <= ((uint32_t)((int32_t)-1386986472)))))
		{
			goto IL_0110;
		}
	}
	{
		uint32_t L_23 = V_2;
		if ((((int32_t)L_23) == ((int32_t)((int32_t)-1412039661))))
		{
			goto IL_0160;
		}
	}
	{
		uint32_t L_24 = V_2;
		if ((((int32_t)L_24) == ((int32_t)((int32_t)-1386986472))))
		{
			goto IL_01b4;
		}
	}
	{
		goto IL_0420;
	}

IL_0110:
	{
		uint32_t L_25 = V_2;
		if ((((int32_t)L_25) == ((int32_t)((int32_t)-584064197))))
		{
			goto IL_021d;
		}
	}
	{
		uint32_t L_26 = V_2;
		if ((((int32_t)L_26) == ((int32_t)((int32_t)-473474755))))
		{
			goto IL_0271;
		}
	}
	{
		uint32_t L_27 = V_2;
		if ((((int32_t)L_27) == ((int32_t)((int32_t)-365686981))))
		{
			goto IL_025c;
		}
	}
	{
		goto IL_0420;
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
		goto IL_0420;
	}

IL_014b:
	{
		String_t* L_30 = V_1;
		bool L_31;
		L_31 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_30, _stringLiteral82BECCAD895076775062861CDB46AADEF913D969, NULL);
		if (L_31)
		{
			goto IL_02c7;
		}
	}
	{
		goto IL_0420;
	}

IL_0160:
	{
		String_t* L_32 = V_1;
		bool L_33;
		L_33 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_32, _stringLiteral1228466552C1791B2019A329AFE94665D441168A, NULL);
		if (L_33)
		{
			goto IL_02d9;
		}
	}
	{
		goto IL_0420;
	}

IL_0175:
	{
		String_t* L_34 = V_1;
		bool L_35;
		L_35 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_34, _stringLiteralBD49F93A7BC78A69E385CEC0E78F434BD2845A17, NULL);
		if (L_35)
		{
			goto IL_02f0;
		}
	}
	{
		goto IL_0420;
	}

IL_018a:
	{
		String_t* L_36 = V_1;
		bool L_37;
		L_37 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_36, _stringLiteralED1F119527A0BCA45125EF8E0F719985DA86C0E1, NULL);
		if (L_37)
		{
			goto IL_0307;
		}
	}
	{
		goto IL_0420;
	}

IL_019f:
	{
		String_t* L_38 = V_1;
		bool L_39;
		L_39 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_38, _stringLiteral8C9F18A4F030B96447955FBBA1A99FFC43B5D8E0, NULL);
		if (L_39)
		{
			goto IL_031e;
		}
	}
	{
		goto IL_0420;
	}

IL_01b4:
	{
		String_t* L_40 = V_1;
		bool L_41;
		L_41 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_40, _stringLiteralFC341A1966AF28A9A7A26EDFB78ABBF7DE4D0E1F, NULL);
		if (L_41)
		{
			goto IL_0335;
		}
	}
	{
		goto IL_0420;
	}

IL_01c9:
	{
		String_t* L_42 = V_1;
		bool L_43;
		L_43 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_42, _stringLiteralE8744A8B8BD390EB66CA0CAE2376C973E6904FFB, NULL);
		if (L_43)
		{
			goto IL_034c;
		}
	}
	{
		goto IL_0420;
	}

IL_01de:
	{
		String_t* L_44 = V_1;
		bool L_45;
		L_45 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_44, _stringLiteralF9BE17D634D1B07BCDCDA77A87710C946D81307B, NULL);
		if (L_45)
		{
			goto IL_0363;
		}
	}
	{
		goto IL_0420;
	}

IL_01f3:
	{
		String_t* L_46 = V_1;
		bool L_47;
		L_47 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_46, _stringLiteralFA5EC7168E9633DAAEAA255ECB55030EA60F064F, NULL);
		if (L_47)
		{
			goto IL_037a;
		}
	}
	{
		goto IL_0420;
	}

IL_0208:
	{
		String_t* L_48 = V_1;
		bool L_49;
		L_49 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_48, _stringLiteralEB0A157666700D8227FD4B66A26FDC02035E89BF, NULL);
		if (L_49)
		{
			goto IL_038c;
		}
	}
	{
		goto IL_0420;
	}

IL_021d:
	{
		String_t* L_50 = V_1;
		bool L_51;
		L_51 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_50, _stringLiteral8E54BB51E569CB6A8D3C45D8AEF883A1559C1C0E, NULL);
		if (L_51)
		{
			goto IL_039e;
		}
	}
	{
		goto IL_0420;
	}

IL_0232:
	{
		String_t* L_52 = V_1;
		bool L_53;
		L_53 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_52, _stringLiteral60E56797D122AE71D3774956F66C6EEB9EA22C05, NULL);
		if (L_53)
		{
			goto IL_03ad;
		}
	}
	{
		goto IL_0420;
	}

IL_0247:
	{
		String_t* L_54 = V_1;
		bool L_55;
		L_55 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_54, _stringLiteral01837E2252AC8026A5EA3567A663017A662FBB70, NULL);
		if (L_55)
		{
			goto IL_03bc;
		}
	}
	{
		goto IL_0420;
	}

IL_025c:
	{
		String_t* L_56 = V_1;
		bool L_57;
		L_57 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_56, _stringLiteralF66E9083C67855AB6EBB4B74342E385A72AACE32, NULL);
		if (L_57)
		{
			goto IL_03d0;
		}
	}
	{
		goto IL_0420;
	}

IL_0271:
	{
		String_t* L_58 = V_1;
		bool L_59;
		L_59 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_58, _stringLiteral91811EE149061D28B38320E2430CE8888AD6398B, NULL);
		if (L_59)
		{
			goto IL_03e4;
		}
	}
	{
		goto IL_0420;
	}

IL_0286:
	{
		String_t* L_60 = V_1;
		bool L_61;
		L_61 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_60, _stringLiteral6686C366F645244186604A3DA4B9A58012A85F1B, NULL);
		if (L_61)
		{
			goto IL_03f8;
		}
	}
	{
		goto IL_0420;
	}

IL_029b:
	{
		String_t* L_62 = V_1;
		bool L_63;
		L_63 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_62, _stringLiteralCA1B66E295BD92E9FD3B6C708F09CA69A50BEFD1, NULL);
		if (L_63)
		{
			goto IL_040c;
		}
	}
	{
		goto IL_0420;
	}

IL_02b0:
	{
		// instance.enabled = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_64 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_65 = ((ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_64);
		bool L_66;
		L_66 = GenericVirtualFuncInvoker1< bool, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mFFB70EE53D8CD0255A4E599780F62A3EB1520E83_RuntimeMethod_var, L_64, L_65);
		ShapeModule_set_enabled_m6BA02351FEED67A82664135B922DDA66D71DF399((&V_0), L_66, NULL);
		// break;
		goto IL_0426;
	}

IL_02c7:
	{
		// instance.shapeType = reader.Read<UnityEngine.ParticleSystemShapeType>();
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_67 = ___reader0;
		NullCheck(L_67);
		int32_t L_68;
		L_68 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisParticleSystemShapeType_tADE62D07EDA71578326A03B50871391EE01F73BB_m3423F2435F483F46ABB4C8EAD9B78CD03D2742FB_RuntimeMethod_var, L_67);
		ShapeModule_set_shapeType_m4B5D1EA91037AD7065FE1D23652D919FED4D6D7F((&V_0), L_68, NULL);
		// break;
		goto IL_0426;
	}

IL_02d9:
	{
		// instance.randomDirectionAmount = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_69 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_70 = ((ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_69);
		float L_71;
		L_71 = GenericVirtualFuncInvoker1< float, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mA86928BC888E342D2C2644535E3399952F5077ED_RuntimeMethod_var, L_69, L_70);
		ShapeModule_set_randomDirectionAmount_m398CEE6D93207797559A80CE49A0C4138C96D0B3((&V_0), L_71, NULL);
		// break;
		goto IL_0426;
	}

IL_02f0:
	{
		// instance.sphericalDirectionAmount = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_72 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_73 = ((ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_72);
		float L_74;
		L_74 = GenericVirtualFuncInvoker1< float, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mA86928BC888E342D2C2644535E3399952F5077ED_RuntimeMethod_var, L_72, L_73);
		ShapeModule_set_sphericalDirectionAmount_m395143D474E51CE6AAF81C9DB84028A16B9BCAAB((&V_0), L_74, NULL);
		// break;
		goto IL_0426;
	}

IL_0307:
	{
		// instance.alignToDirection = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_75 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_76 = ((ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_75);
		bool L_77;
		L_77 = GenericVirtualFuncInvoker1< bool, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mFFB70EE53D8CD0255A4E599780F62A3EB1520E83_RuntimeMethod_var, L_75, L_76);
		ShapeModule_set_alignToDirection_mD632613E0E343654E6569F22BC9EFBB9247AC581((&V_0), L_77, NULL);
		// break;
		goto IL_0426;
	}

IL_031e:
	{
		// instance.radius = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_78 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_79 = ((ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_78);
		float L_80;
		L_80 = GenericVirtualFuncInvoker1< float, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mA86928BC888E342D2C2644535E3399952F5077ED_RuntimeMethod_var, L_78, L_79);
		ShapeModule_set_radius_m37F79E13EB60FA39EAE36B49DAC4AC880416E89C((&V_0), L_80, NULL);
		// break;
		goto IL_0426;
	}

IL_0335:
	{
		// instance.angle = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_81 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_82 = ((ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_81);
		float L_83;
		L_83 = GenericVirtualFuncInvoker1< float, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mA86928BC888E342D2C2644535E3399952F5077ED_RuntimeMethod_var, L_81, L_82);
		ShapeModule_set_angle_m62F5F037CD1DF55172B2D64DBF8271F9F917133A((&V_0), L_83, NULL);
		// break;
		goto IL_0426;
	}

IL_034c:
	{
		// instance.length = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_84 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_85 = ((ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_84);
		float L_86;
		L_86 = GenericVirtualFuncInvoker1< float, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mA86928BC888E342D2C2644535E3399952F5077ED_RuntimeMethod_var, L_84, L_85);
		ShapeModule_set_length_mD38341192A10095F9D0217993D410939F90CE621((&V_0), L_86, NULL);
		// break;
		goto IL_0426;
	}

IL_0363:
	{
		// instance.scale = reader.Read<UnityEngine.Vector3>(ES3Type_Vector3.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_87 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_88 = ((ES3Type_Vector3_t29E9EC31EED86489FBD8A22FBD317F5BD5C3A3E9_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Vector3_t29E9EC31EED86489FBD8A22FBD317F5BD5C3A3E9_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_87);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_89;
		L_89 = GenericVirtualFuncInvoker1< Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_m41744F4EDB47642D9EF02C774ADD5EADDE749262_RuntimeMethod_var, L_87, L_88);
		ShapeModule_set_scale_mDA84B80016FDA6B6EE181B108C3E59A2FFF9143D((&V_0), L_89, NULL);
		// break;
		goto IL_0426;
	}

IL_037a:
	{
		// instance.meshShapeType = reader.Read<UnityEngine.ParticleSystemMeshShapeType>();
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_90 = ___reader0;
		NullCheck(L_90);
		int32_t L_91;
		L_91 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisParticleSystemMeshShapeType_t260D7CAA6014D0ACE2BCFE0BC588E1ADE3AF98E5_m2E1596CACABC5B7BB194A74A92C1E5627B3DB9D0_RuntimeMethod_var, L_90);
		ShapeModule_set_meshShapeType_m335ED6F02244A07F8557E900D9935A4220AD23D0((&V_0), L_91, NULL);
		// break;
		goto IL_0426;
	}

IL_038c:
	{
		// instance.mesh = reader.Read<UnityEngine.Mesh>();
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_92 = ___reader0;
		NullCheck(L_92);
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_93;
		L_93 = GenericVirtualFuncInvoker0< Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* >::Invoke(ES3Reader_Read_TisMesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4_m4DD8C0823DA528C84509E776081834CEAC71FE88_RuntimeMethod_var, L_92);
		ShapeModule_set_mesh_m75450DE287A91452C63021F100D8B6A65A921CE1((&V_0), L_93, NULL);
		// break;
		goto IL_0426;
	}

IL_039e:
	{
		// instance.meshRenderer = reader.Read<UnityEngine.MeshRenderer>();
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_94 = ___reader0;
		NullCheck(L_94);
		MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE* L_95;
		L_95 = GenericVirtualFuncInvoker0< MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE* >::Invoke(ES3Reader_Read_TisMeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE_mADE66001251FAEAB39EE97DA447D0A80EAAB85C4_RuntimeMethod_var, L_94);
		ShapeModule_set_meshRenderer_m25111B1DC9F173FE054264094DB19564D375D1D6((&V_0), L_95, NULL);
		// break;
		goto IL_0426;
	}

IL_03ad:
	{
		// instance.skinnedMeshRenderer = reader.Read<UnityEngine.SkinnedMeshRenderer>();
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_96 = ___reader0;
		NullCheck(L_96);
		SkinnedMeshRenderer_t020C4E8648EA1C4C6BA5C41502919B387E7E1C2E* L_97;
		L_97 = GenericVirtualFuncInvoker0< SkinnedMeshRenderer_t020C4E8648EA1C4C6BA5C41502919B387E7E1C2E* >::Invoke(ES3Reader_Read_TisSkinnedMeshRenderer_t020C4E8648EA1C4C6BA5C41502919B387E7E1C2E_m9E77EF921E4ACFCE425D24538209CF592968463E_RuntimeMethod_var, L_96);
		ShapeModule_set_skinnedMeshRenderer_mB3B9D58C4A9D21F990EC2000D38B5E35C7FF5807((&V_0), L_97, NULL);
		// break;
		goto IL_0426;
	}

IL_03bc:
	{
		// instance.useMeshMaterialIndex = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_98 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_99 = ((ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_98);
		bool L_100;
		L_100 = GenericVirtualFuncInvoker1< bool, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mFFB70EE53D8CD0255A4E599780F62A3EB1520E83_RuntimeMethod_var, L_98, L_99);
		ShapeModule_set_useMeshMaterialIndex_m48CE9CB5BA8CAF93D4C92975B826A7BA8459B838((&V_0), L_100, NULL);
		// break;
		goto IL_0426;
	}

IL_03d0:
	{
		// instance.meshMaterialIndex = reader.Read<System.Int32>(ES3Type_int.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_101 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_102 = ((ES3Type_int_t05A5E7A96442F23CE33E24A71CD349372A70E0C3_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_int_t05A5E7A96442F23CE33E24A71CD349372A70E0C3_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_101);
		int32_t L_103;
		L_103 = GenericVirtualFuncInvoker1< int32_t, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mEFCC4D52DD5B822D3561A53591AE11CDB25CDB6F_RuntimeMethod_var, L_101, L_102);
		ShapeModule_set_meshMaterialIndex_mC72EF43FC31A137D1247E748E89FE0FF5FB2C29F((&V_0), L_103, NULL);
		// break;
		goto IL_0426;
	}

IL_03e4:
	{
		// instance.useMeshColors = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_104 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_105 = ((ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_104);
		bool L_106;
		L_106 = GenericVirtualFuncInvoker1< bool, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mFFB70EE53D8CD0255A4E599780F62A3EB1520E83_RuntimeMethod_var, L_104, L_105);
		ShapeModule_set_useMeshColors_m2B12B03E04E2ACEE2AE68B697F462232D42D6C6E((&V_0), L_106, NULL);
		// break;
		goto IL_0426;
	}

IL_03f8:
	{
		// instance.normalOffset = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_107 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_108 = ((ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_107);
		float L_109;
		L_109 = GenericVirtualFuncInvoker1< float, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mA86928BC888E342D2C2644535E3399952F5077ED_RuntimeMethod_var, L_107, L_108);
		ShapeModule_set_normalOffset_m24453DEF085D96323A09DEBD134283B7F23C263F((&V_0), L_109, NULL);
		// break;
		goto IL_0426;
	}

IL_040c:
	{
		// instance.arc = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_110 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_111 = ((ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_110);
		float L_112;
		L_112 = GenericVirtualFuncInvoker1< float, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mA86928BC888E342D2C2644535E3399952F5077ED_RuntimeMethod_var, L_110, L_111);
		ShapeModule_set_arc_mE9EF87E2AA959143B466CD55B7DAA65FBE155D1F((&V_0), L_112, NULL);
		// break;
		goto IL_0426;
	}

IL_0420:
	{
		// reader.Skip();
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_113 = ___reader0;
		NullCheck(L_113);
		VirtualActionInvoker0::Invoke(41 /* System.Void ES3Reader::Skip() */, L_113);
	}

IL_0426:
	{
		// while((propertyName = reader.ReadPropertyName()) != null)
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_114 = ___reader0;
		NullCheck(L_114);
		String_t* L_115;
		L_115 = VirtualFuncInvoker0< String_t* >::Invoke(21 /* System.String ES3Reader::ReadPropertyName() */, L_114);
		String_t* L_116 = L_115;
		V_1 = L_116;
		if (L_116)
		{
			goto IL_000c;
		}
	}
	{
		// }
		return;
	}
}
// System.Void ES3Types.ES3Type_ShapeModule::ReadInto<UnityEngine.ParticleSystem/MainModule>(ES3Reader,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ES3Type_ShapeModule_ReadInto_TisMainModule_tC7ECD8330C14B0808478A748048988A6085CE2A9_mB0AAF26AFF7F0BEEAF10EF78ABB1B077B49A2863_gshared (ES3Type_ShapeModule_t2A98821A3CBBB891C72216EA1D86C9579DFD70B7* __this, ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* ___reader0, RuntimeObject* ___obj1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mFFB70EE53D8CD0255A4E599780F62A3EB1520E83_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mEFCC4D52DD5B822D3561A53591AE11CDB25CDB6F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisMeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE_mADE66001251FAEAB39EE97DA447D0A80EAAB85C4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisMesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4_m4DD8C0823DA528C84509E776081834CEAC71FE88_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisParticleSystemMeshShapeType_t260D7CAA6014D0ACE2BCFE0BC588E1ADE3AF98E5_m2E1596CACABC5B7BB194A74A92C1E5627B3DB9D0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisParticleSystemShapeType_tADE62D07EDA71578326A03B50871391EE01F73BB_m3423F2435F483F46ABB4C8EAD9B78CD03D2742FB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mA86928BC888E342D2C2644535E3399952F5077ED_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisSkinnedMeshRenderer_t020C4E8648EA1C4C6BA5C41502919B387E7E1C2E_m9E77EF921E4ACFCE425D24538209CF592968463E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_m41744F4EDB47642D9EF02C774ADD5EADDE749262_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_Vector3_t29E9EC31EED86489FBD8A22FBD317F5BD5C3A3E9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_int_t05A5E7A96442F23CE33E24A71CD349372A70E0C3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ShapeModule_tAA38A0C5305DF2F9D96F89D4B8F762E2D034D8B2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral01837E2252AC8026A5EA3567A663017A662FBB70);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1228466552C1791B2019A329AFE94665D441168A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral60E56797D122AE71D3774956F66C6EEB9EA22C05);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6686C366F645244186604A3DA4B9A58012A85F1B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral82BECCAD895076775062861CDB46AADEF913D969);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8C9F18A4F030B96447955FBBA1A99FFC43B5D8E0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8E54BB51E569CB6A8D3C45D8AEF883A1559C1C0E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral91811EE149061D28B38320E2430CE8888AD6398B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBD49F93A7BC78A69E385CEC0E78F434BD2845A17);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCA1B66E295BD92E9FD3B6C708F09CA69A50BEFD1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE8744A8B8BD390EB66CA0CAE2376C973E6904FFB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEB0A157666700D8227FD4B66A26FDC02035E89BF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralED1F119527A0BCA45125EF8E0F719985DA86C0E1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF66E9083C67855AB6EBB4B74342E385A72AACE32);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF9BE17D634D1B07BCDCDA77A87710C946D81307B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFA5EC7168E9633DAAEAA255ECB55030EA60F064F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFC341A1966AF28A9A7A26EDFB78ABBF7DE4D0E1F);
		s_Il2CppMethodInitialized = true;
	}
	ShapeModule_tAA38A0C5305DF2F9D96F89D4B8F762E2D034D8B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	uint32_t V_2 = 0;
	{
		// var instance = (UnityEngine.ParticleSystem.ShapeModule)obj;
		RuntimeObject* L_0 = ___obj1;
		V_0 = ((*(ShapeModule_tAA38A0C5305DF2F9D96F89D4B8F762E2D034D8B2*)((ShapeModule_tAA38A0C5305DF2F9D96F89D4B8F762E2D034D8B2*)(ShapeModule_tAA38A0C5305DF2F9D96F89D4B8F762E2D034D8B2*)UnBox(L_0, ShapeModule_tAA38A0C5305DF2F9D96F89D4B8F762E2D034D8B2_il2cpp_TypeInfo_var))));
		goto IL_0426;
	}

IL_000c:
	{
		String_t* L_1 = V_1;
		uint32_t L_2;
		L_2 = U3CPrivateImplementationDetailsU3E_ComputeStringHash_m9E43873DE0DF480D27EC1C2AA3C09E74EA77F75D(L_1, NULL);
		V_2 = L_2;
		uint32_t L_3 = V_2;
		if ((!(((uint32_t)L_3) <= ((uint32_t)((int32_t)-2104025999)))))
		{
			goto IL_00ad;
		}
	}
	{
		uint32_t L_4 = V_2;
		if ((!(((uint32_t)L_4) <= ((uint32_t)((int32_t)666576729)))))
		{
			goto IL_0064;
		}
	}
	{
		uint32_t L_5 = V_2;
		if ((!(((uint32_t)L_5) <= ((uint32_t)((int32_t)49525662)))))
		{
			goto IL_0049;
		}
	}
	{
		uint32_t L_6 = V_2;
		if ((((int32_t)L_6) == ((int32_t)((int32_t)24602224))))
		{
			goto IL_0247;
		}
	}
	{
		uint32_t L_7 = V_2;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)49525662))))
		{
			goto IL_0136;
		}
	}
	{
		goto IL_0420;
	}

IL_0049:
	{
		uint32_t L_8 = V_2;
		if ((((int32_t)L_8) == ((int32_t)((int32_t)230313139))))
		{
			goto IL_019f;
		}
	}
	{
		uint32_t L_9 = V_2;
		if ((((int32_t)L_9) == ((int32_t)((int32_t)666576729))))
		{
			goto IL_01f3;
		}
	}
	{
		goto IL_0420;
	}

IL_0064:
	{
		uint32_t L_10 = V_2;
		if ((!(((uint32_t)L_10) <= ((uint32_t)((int32_t)955488309)))))
		{
			goto IL_0087;
		}
	}
	{
		uint32_t L_11 = V_2;
		if ((((int32_t)L_11) == ((int32_t)((int32_t)923624301))))
		{
			goto IL_0232;
		}
	}
	{
		uint32_t L_12 = V_2;
		if ((((int32_t)L_12) == ((int32_t)((int32_t)955488309))))
		{
			goto IL_0286;
		}
	}
	{
		goto IL_0420;
	}

IL_0087:
	{
		uint32_t L_13 = V_2;
		if ((((int32_t)L_13) == ((int32_t)((int32_t)980363995))))
		{
			goto IL_029b;
		}
	}
	{
		uint32_t L_14 = V_2;
		if ((((int32_t)L_14) == ((int32_t)((int32_t)985988853))))
		{
			goto IL_0175;
		}
	}
	{
		uint32_t L_15 = V_2;
		if ((((int32_t)L_15) == ((int32_t)((int32_t)-2104025999))))
		{
			goto IL_01de;
		}
	}
	{
		goto IL_0420;
	}

IL_00ad:
	{
		uint32_t L_16 = V_2;
		if ((!(((uint32_t)L_16) <= ((uint32_t)((int32_t)-1473810612)))))
		{
			goto IL_00f0;
		}
	}
	{
		uint32_t L_17 = V_2;
		if ((!(((uint32_t)L_17) <= ((uint32_t)((int32_t)-1726928010)))))
		{
			goto IL_00d5;
		}
	}
	{
		uint32_t L_18 = V_2;
		if ((((int32_t)L_18) == ((int32_t)((int32_t)-2083506667))))
		{
			goto IL_01c9;
		}
	}
	{
		uint32_t L_19 = V_2;
		if ((((int32_t)L_19) == ((int32_t)((int32_t)-1726928010))))
		{
			goto IL_014b;
		}
	}
	{
		goto IL_0420;
	}

IL_00d5:
	{
		uint32_t L_20 = V_2;
		if ((((int32_t)L_20) == ((int32_t)((int32_t)-1593786692))))
		{
			goto IL_0208;
		}
	}
	{
		uint32_t L_21 = V_2;
		if ((((int32_t)L_21) == ((int32_t)((int32_t)-1473810612))))
		{
			goto IL_018a;
		}
	}
	{
		goto IL_0420;
	}

IL_00f0:
	{
		uint32_t L_22 = V_2;
		if ((!(((uint32_t)L_22) <= ((uint32_t)((int32_t)-1386986472)))))
		{
			goto IL_0110;
		}
	}
	{
		uint32_t L_23 = V_2;
		if ((((int32_t)L_23) == ((int32_t)((int32_t)-1412039661))))
		{
			goto IL_0160;
		}
	}
	{
		uint32_t L_24 = V_2;
		if ((((int32_t)L_24) == ((int32_t)((int32_t)-1386986472))))
		{
			goto IL_01b4;
		}
	}
	{
		goto IL_0420;
	}

IL_0110:
	{
		uint32_t L_25 = V_2;
		if ((((int32_t)L_25) == ((int32_t)((int32_t)-584064197))))
		{
			goto IL_021d;
		}
	}
	{
		uint32_t L_26 = V_2;
		if ((((int32_t)L_26) == ((int32_t)((int32_t)-473474755))))
		{
			goto IL_0271;
		}
	}
	{
		uint32_t L_27 = V_2;
		if ((((int32_t)L_27) == ((int32_t)((int32_t)-365686981))))
		{
			goto IL_025c;
		}
	}
	{
		goto IL_0420;
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
		goto IL_0420;
	}

IL_014b:
	{
		String_t* L_30 = V_1;
		bool L_31;
		L_31 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_30, _stringLiteral82BECCAD895076775062861CDB46AADEF913D969, NULL);
		if (L_31)
		{
			goto IL_02c7;
		}
	}
	{
		goto IL_0420;
	}

IL_0160:
	{
		String_t* L_32 = V_1;
		bool L_33;
		L_33 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_32, _stringLiteral1228466552C1791B2019A329AFE94665D441168A, NULL);
		if (L_33)
		{
			goto IL_02d9;
		}
	}
	{
		goto IL_0420;
	}

IL_0175:
	{
		String_t* L_34 = V_1;
		bool L_35;
		L_35 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_34, _stringLiteralBD49F93A7BC78A69E385CEC0E78F434BD2845A17, NULL);
		if (L_35)
		{
			goto IL_02f0;
		}
	}
	{
		goto IL_0420;
	}

IL_018a:
	{
		String_t* L_36 = V_1;
		bool L_37;
		L_37 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_36, _stringLiteralED1F119527A0BCA45125EF8E0F719985DA86C0E1, NULL);
		if (L_37)
		{
			goto IL_0307;
		}
	}
	{
		goto IL_0420;
	}

IL_019f:
	{
		String_t* L_38 = V_1;
		bool L_39;
		L_39 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_38, _stringLiteral8C9F18A4F030B96447955FBBA1A99FFC43B5D8E0, NULL);
		if (L_39)
		{
			goto IL_031e;
		}
	}
	{
		goto IL_0420;
	}

IL_01b4:
	{
		String_t* L_40 = V_1;
		bool L_41;
		L_41 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_40, _stringLiteralFC341A1966AF28A9A7A26EDFB78ABBF7DE4D0E1F, NULL);
		if (L_41)
		{
			goto IL_0335;
		}
	}
	{
		goto IL_0420;
	}

IL_01c9:
	{
		String_t* L_42 = V_1;
		bool L_43;
		L_43 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_42, _stringLiteralE8744A8B8BD390EB66CA0CAE2376C973E6904FFB, NULL);
		if (L_43)
		{
			goto IL_034c;
		}
	}
	{
		goto IL_0420;
	}

IL_01de:
	{
		String_t* L_44 = V_1;
		bool L_45;
		L_45 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_44, _stringLiteralF9BE17D634D1B07BCDCDA77A87710C946D81307B, NULL);
		if (L_45)
		{
			goto IL_0363;
		}
	}
	{
		goto IL_0420;
	}

IL_01f3:
	{
		String_t* L_46 = V_1;
		bool L_47;
		L_47 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_46, _stringLiteralFA5EC7168E9633DAAEAA255ECB55030EA60F064F, NULL);
		if (L_47)
		{
			goto IL_037a;
		}
	}
	{
		goto IL_0420;
	}

IL_0208:
	{
		String_t* L_48 = V_1;
		bool L_49;
		L_49 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_48, _stringLiteralEB0A157666700D8227FD4B66A26FDC02035E89BF, NULL);
		if (L_49)
		{
			goto IL_038c;
		}
	}
	{
		goto IL_0420;
	}

IL_021d:
	{
		String_t* L_50 = V_1;
		bool L_51;
		L_51 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_50, _stringLiteral8E54BB51E569CB6A8D3C45D8AEF883A1559C1C0E, NULL);
		if (L_51)
		{
			goto IL_039e;
		}
	}
	{
		goto IL_0420;
	}

IL_0232:
	{
		String_t* L_52 = V_1;
		bool L_53;
		L_53 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_52, _stringLiteral60E56797D122AE71D3774956F66C6EEB9EA22C05, NULL);
		if (L_53)
		{
			goto IL_03ad;
		}
	}
	{
		goto IL_0420;
	}

IL_0247:
	{
		String_t* L_54 = V_1;
		bool L_55;
		L_55 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_54, _stringLiteral01837E2252AC8026A5EA3567A663017A662FBB70, NULL);
		if (L_55)
		{
			goto IL_03bc;
		}
	}
	{
		goto IL_0420;
	}

IL_025c:
	{
		String_t* L_56 = V_1;
		bool L_57;
		L_57 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_56, _stringLiteralF66E9083C67855AB6EBB4B74342E385A72AACE32, NULL);
		if (L_57)
		{
			goto IL_03d0;
		}
	}
	{
		goto IL_0420;
	}

IL_0271:
	{
		String_t* L_58 = V_1;
		bool L_59;
		L_59 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_58, _stringLiteral91811EE149061D28B38320E2430CE8888AD6398B, NULL);
		if (L_59)
		{
			goto IL_03e4;
		}
	}
	{
		goto IL_0420;
	}

IL_0286:
	{
		String_t* L_60 = V_1;
		bool L_61;
		L_61 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_60, _stringLiteral6686C366F645244186604A3DA4B9A58012A85F1B, NULL);
		if (L_61)
		{
			goto IL_03f8;
		}
	}
	{
		goto IL_0420;
	}

IL_029b:
	{
		String_t* L_62 = V_1;
		bool L_63;
		L_63 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_62, _stringLiteralCA1B66E295BD92E9FD3B6C708F09CA69A50BEFD1, NULL);
		if (L_63)
		{
			goto IL_040c;
		}
	}
	{
		goto IL_0420;
	}

IL_02b0:
	{
		// instance.enabled = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_64 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_65 = ((ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_64);
		bool L_66;
		L_66 = GenericVirtualFuncInvoker1< bool, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mFFB70EE53D8CD0255A4E599780F62A3EB1520E83_RuntimeMethod_var, L_64, L_65);
		ShapeModule_set_enabled_m6BA02351FEED67A82664135B922DDA66D71DF399((&V_0), L_66, NULL);
		// break;
		goto IL_0426;
	}

IL_02c7:
	{
		// instance.shapeType = reader.Read<UnityEngine.ParticleSystemShapeType>();
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_67 = ___reader0;
		NullCheck(L_67);
		int32_t L_68;
		L_68 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisParticleSystemShapeType_tADE62D07EDA71578326A03B50871391EE01F73BB_m3423F2435F483F46ABB4C8EAD9B78CD03D2742FB_RuntimeMethod_var, L_67);
		ShapeModule_set_shapeType_m4B5D1EA91037AD7065FE1D23652D919FED4D6D7F((&V_0), L_68, NULL);
		// break;
		goto IL_0426;
	}

IL_02d9:
	{
		// instance.randomDirectionAmount = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_69 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_70 = ((ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_69);
		float L_71;
		L_71 = GenericVirtualFuncInvoker1< float, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mA86928BC888E342D2C2644535E3399952F5077ED_RuntimeMethod_var, L_69, L_70);
		ShapeModule_set_randomDirectionAmount_m398CEE6D93207797559A80CE49A0C4138C96D0B3((&V_0), L_71, NULL);
		// break;
		goto IL_0426;
	}

IL_02f0:
	{
		// instance.sphericalDirectionAmount = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_72 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_73 = ((ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_72);
		float L_74;
		L_74 = GenericVirtualFuncInvoker1< float, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mA86928BC888E342D2C2644535E3399952F5077ED_RuntimeMethod_var, L_72, L_73);
		ShapeModule_set_sphericalDirectionAmount_m395143D474E51CE6AAF81C9DB84028A16B9BCAAB((&V_0), L_74, NULL);
		// break;
		goto IL_0426;
	}

IL_0307:
	{
		// instance.alignToDirection = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_75 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_76 = ((ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_75);
		bool L_77;
		L_77 = GenericVirtualFuncInvoker1< bool, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mFFB70EE53D8CD0255A4E599780F62A3EB1520E83_RuntimeMethod_var, L_75, L_76);
		ShapeModule_set_alignToDirection_mD632613E0E343654E6569F22BC9EFBB9247AC581((&V_0), L_77, NULL);
		// break;
		goto IL_0426;
	}

IL_031e:
	{
		// instance.radius = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_78 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_79 = ((ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_78);
		float L_80;
		L_80 = GenericVirtualFuncInvoker1< float, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mA86928BC888E342D2C2644535E3399952F5077ED_RuntimeMethod_var, L_78, L_79);
		ShapeModule_set_radius_m37F79E13EB60FA39EAE36B49DAC4AC880416E89C((&V_0), L_80, NULL);
		// break;
		goto IL_0426;
	}

IL_0335:
	{
		// instance.angle = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_81 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_82 = ((ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_81);
		float L_83;
		L_83 = GenericVirtualFuncInvoker1< float, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mA86928BC888E342D2C2644535E3399952F5077ED_RuntimeMethod_var, L_81, L_82);
		ShapeModule_set_angle_m62F5F037CD1DF55172B2D64DBF8271F9F917133A((&V_0), L_83, NULL);
		// break;
		goto IL_0426;
	}

IL_034c:
	{
		// instance.length = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_84 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_85 = ((ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_84);
		float L_86;
		L_86 = GenericVirtualFuncInvoker1< float, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mA86928BC888E342D2C2644535E3399952F5077ED_RuntimeMethod_var, L_84, L_85);
		ShapeModule_set_length_mD38341192A10095F9D0217993D410939F90CE621((&V_0), L_86, NULL);
		// break;
		goto IL_0426;
	}

IL_0363:
	{
		// instance.scale = reader.Read<UnityEngine.Vector3>(ES3Type_Vector3.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_87 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_88 = ((ES3Type_Vector3_t29E9EC31EED86489FBD8A22FBD317F5BD5C3A3E9_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Vector3_t29E9EC31EED86489FBD8A22FBD317F5BD5C3A3E9_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_87);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_89;
		L_89 = GenericVirtualFuncInvoker1< Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_m41744F4EDB47642D9EF02C774ADD5EADDE749262_RuntimeMethod_var, L_87, L_88);
		ShapeModule_set_scale_mDA84B80016FDA6B6EE181B108C3E59A2FFF9143D((&V_0), L_89, NULL);
		// break;
		goto IL_0426;
	}

IL_037a:
	{
		// instance.meshShapeType = reader.Read<UnityEngine.ParticleSystemMeshShapeType>();
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_90 = ___reader0;
		NullCheck(L_90);
		int32_t L_91;
		L_91 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisParticleSystemMeshShapeType_t260D7CAA6014D0ACE2BCFE0BC588E1ADE3AF98E5_m2E1596CACABC5B7BB194A74A92C1E5627B3DB9D0_RuntimeMethod_var, L_90);
		ShapeModule_set_meshShapeType_m335ED6F02244A07F8557E900D9935A4220AD23D0((&V_0), L_91, NULL);
		// break;
		goto IL_0426;
	}

IL_038c:
	{
		// instance.mesh = reader.Read<UnityEngine.Mesh>();
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_92 = ___reader0;
		NullCheck(L_92);
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_93;
		L_93 = GenericVirtualFuncInvoker0< Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* >::Invoke(ES3Reader_Read_TisMesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4_m4DD8C0823DA528C84509E776081834CEAC71FE88_RuntimeMethod_var, L_92);
		ShapeModule_set_mesh_m75450DE287A91452C63021F100D8B6A65A921CE1((&V_0), L_93, NULL);
		// break;
		goto IL_0426;
	}

IL_039e:
	{
		// instance.meshRenderer = reader.Read<UnityEngine.MeshRenderer>();
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_94 = ___reader0;
		NullCheck(L_94);
		MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE* L_95;
		L_95 = GenericVirtualFuncInvoker0< MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE* >::Invoke(ES3Reader_Read_TisMeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE_mADE66001251FAEAB39EE97DA447D0A80EAAB85C4_RuntimeMethod_var, L_94);
		ShapeModule_set_meshRenderer_m25111B1DC9F173FE054264094DB19564D375D1D6((&V_0), L_95, NULL);
		// break;
		goto IL_0426;
	}

IL_03ad:
	{
		// instance.skinnedMeshRenderer = reader.Read<UnityEngine.SkinnedMeshRenderer>();
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_96 = ___reader0;
		NullCheck(L_96);
		SkinnedMeshRenderer_t020C4E8648EA1C4C6BA5C41502919B387E7E1C2E* L_97;
		L_97 = GenericVirtualFuncInvoker0< SkinnedMeshRenderer_t020C4E8648EA1C4C6BA5C41502919B387E7E1C2E* >::Invoke(ES3Reader_Read_TisSkinnedMeshRenderer_t020C4E8648EA1C4C6BA5C41502919B387E7E1C2E_m9E77EF921E4ACFCE425D24538209CF592968463E_RuntimeMethod_var, L_96);
		ShapeModule_set_skinnedMeshRenderer_mB3B9D58C4A9D21F990EC2000D38B5E35C7FF5807((&V_0), L_97, NULL);
		// break;
		goto IL_0426;
	}

IL_03bc:
	{
		// instance.useMeshMaterialIndex = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_98 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_99 = ((ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_98);
		bool L_100;
		L_100 = GenericVirtualFuncInvoker1< bool, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mFFB70EE53D8CD0255A4E599780F62A3EB1520E83_RuntimeMethod_var, L_98, L_99);
		ShapeModule_set_useMeshMaterialIndex_m48CE9CB5BA8CAF93D4C92975B826A7BA8459B838((&V_0), L_100, NULL);
		// break;
		goto IL_0426;
	}

IL_03d0:
	{
		// instance.meshMaterialIndex = reader.Read<System.Int32>(ES3Type_int.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_101 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_102 = ((ES3Type_int_t05A5E7A96442F23CE33E24A71CD349372A70E0C3_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_int_t05A5E7A96442F23CE33E24A71CD349372A70E0C3_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_101);
		int32_t L_103;
		L_103 = GenericVirtualFuncInvoker1< int32_t, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mEFCC4D52DD5B822D3561A53591AE11CDB25CDB6F_RuntimeMethod_var, L_101, L_102);
		ShapeModule_set_meshMaterialIndex_mC72EF43FC31A137D1247E748E89FE0FF5FB2C29F((&V_0), L_103, NULL);
		// break;
		goto IL_0426;
	}

IL_03e4:
	{
		// instance.useMeshColors = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_104 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_105 = ((ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_104);
		bool L_106;
		L_106 = GenericVirtualFuncInvoker1< bool, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mFFB70EE53D8CD0255A4E599780F62A3EB1520E83_RuntimeMethod_var, L_104, L_105);
		ShapeModule_set_useMeshColors_m2B12B03E04E2ACEE2AE68B697F462232D42D6C6E((&V_0), L_106, NULL);
		// break;
		goto IL_0426;
	}

IL_03f8:
	{
		// instance.normalOffset = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_107 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_108 = ((ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_107);
		float L_109;
		L_109 = GenericVirtualFuncInvoker1< float, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mA86928BC888E342D2C2644535E3399952F5077ED_RuntimeMethod_var, L_107, L_108);
		ShapeModule_set_normalOffset_m24453DEF085D96323A09DEBD134283B7F23C263F((&V_0), L_109, NULL);
		// break;
		goto IL_0426;
	}

IL_040c:
	{
		// instance.arc = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_110 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_111 = ((ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_110);
		float L_112;
		L_112 = GenericVirtualFuncInvoker1< float, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mA86928BC888E342D2C2644535E3399952F5077ED_RuntimeMethod_var, L_110, L_111);
		ShapeModule_set_arc_mE9EF87E2AA959143B466CD55B7DAA65FBE155D1F((&V_0), L_112, NULL);
		// break;
		goto IL_0426;
	}

IL_0420:
	{
		// reader.Skip();
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_113 = ___reader0;
		NullCheck(L_113);
		VirtualActionInvoker0::Invoke(41 /* System.Void ES3Reader::Skip() */, L_113);
	}

IL_0426:
	{
		// while((propertyName = reader.ReadPropertyName()) != null)
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_114 = ___reader0;
		NullCheck(L_114);
		String_t* L_115;
		L_115 = VirtualFuncInvoker0< String_t* >::Invoke(21 /* System.String ES3Reader::ReadPropertyName() */, L_114);
		String_t* L_116 = L_115;
		V_1 = L_116;
		if (L_116)
		{
			goto IL_000c;
		}
	}
	{
		// }
		return;
	}
}
// System.Void ES3Types.ES3Type_ShapeModule::ReadInto<UnityEngine.ParticleSystem/NoiseModule>(ES3Reader,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ES3Type_ShapeModule_ReadInto_TisNoiseModule_tF8D6CB544A887C0C93D05A228B65E41DBD1F3AE0_m7057B498544A57D65C585E7931BED67C7059DDB6_gshared (ES3Type_ShapeModule_t2A98821A3CBBB891C72216EA1D86C9579DFD70B7* __this, ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* ___reader0, RuntimeObject* ___obj1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mFFB70EE53D8CD0255A4E599780F62A3EB1520E83_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mEFCC4D52DD5B822D3561A53591AE11CDB25CDB6F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisMeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE_mADE66001251FAEAB39EE97DA447D0A80EAAB85C4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisMesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4_m4DD8C0823DA528C84509E776081834CEAC71FE88_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisParticleSystemMeshShapeType_t260D7CAA6014D0ACE2BCFE0BC588E1ADE3AF98E5_m2E1596CACABC5B7BB194A74A92C1E5627B3DB9D0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisParticleSystemShapeType_tADE62D07EDA71578326A03B50871391EE01F73BB_m3423F2435F483F46ABB4C8EAD9B78CD03D2742FB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mA86928BC888E342D2C2644535E3399952F5077ED_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisSkinnedMeshRenderer_t020C4E8648EA1C4C6BA5C41502919B387E7E1C2E_m9E77EF921E4ACFCE425D24538209CF592968463E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_m41744F4EDB47642D9EF02C774ADD5EADDE749262_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_Vector3_t29E9EC31EED86489FBD8A22FBD317F5BD5C3A3E9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_int_t05A5E7A96442F23CE33E24A71CD349372A70E0C3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ShapeModule_tAA38A0C5305DF2F9D96F89D4B8F762E2D034D8B2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral01837E2252AC8026A5EA3567A663017A662FBB70);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1228466552C1791B2019A329AFE94665D441168A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral60E56797D122AE71D3774956F66C6EEB9EA22C05);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6686C366F645244186604A3DA4B9A58012A85F1B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral82BECCAD895076775062861CDB46AADEF913D969);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8C9F18A4F030B96447955FBBA1A99FFC43B5D8E0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8E54BB51E569CB6A8D3C45D8AEF883A1559C1C0E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral91811EE149061D28B38320E2430CE8888AD6398B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBD49F93A7BC78A69E385CEC0E78F434BD2845A17);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCA1B66E295BD92E9FD3B6C708F09CA69A50BEFD1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE8744A8B8BD390EB66CA0CAE2376C973E6904FFB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEB0A157666700D8227FD4B66A26FDC02035E89BF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralED1F119527A0BCA45125EF8E0F719985DA86C0E1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF66E9083C67855AB6EBB4B74342E385A72AACE32);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF9BE17D634D1B07BCDCDA77A87710C946D81307B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFA5EC7168E9633DAAEAA255ECB55030EA60F064F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFC341A1966AF28A9A7A26EDFB78ABBF7DE4D0E1F);
		s_Il2CppMethodInitialized = true;
	}
	ShapeModule_tAA38A0C5305DF2F9D96F89D4B8F762E2D034D8B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	uint32_t V_2 = 0;
	{
		// var instance = (UnityEngine.ParticleSystem.ShapeModule)obj;
		RuntimeObject* L_0 = ___obj1;
		V_0 = ((*(ShapeModule_tAA38A0C5305DF2F9D96F89D4B8F762E2D034D8B2*)((ShapeModule_tAA38A0C5305DF2F9D96F89D4B8F762E2D034D8B2*)(ShapeModule_tAA38A0C5305DF2F9D96F89D4B8F762E2D034D8B2*)UnBox(L_0, ShapeModule_tAA38A0C5305DF2F9D96F89D4B8F762E2D034D8B2_il2cpp_TypeInfo_var))));
		goto IL_0426;
	}

IL_000c:
	{
		String_t* L_1 = V_1;
		uint32_t L_2;
		L_2 = U3CPrivateImplementationDetailsU3E_ComputeStringHash_m9E43873DE0DF480D27EC1C2AA3C09E74EA77F75D(L_1, NULL);
		V_2 = L_2;
		uint32_t L_3 = V_2;
		if ((!(((uint32_t)L_3) <= ((uint32_t)((int32_t)-2104025999)))))
		{
			goto IL_00ad;
		}
	}
	{
		uint32_t L_4 = V_2;
		if ((!(((uint32_t)L_4) <= ((uint32_t)((int32_t)666576729)))))
		{
			goto IL_0064;
		}
	}
	{
		uint32_t L_5 = V_2;
		if ((!(((uint32_t)L_5) <= ((uint32_t)((int32_t)49525662)))))
		{
			goto IL_0049;
		}
	}
	{
		uint32_t L_6 = V_2;
		if ((((int32_t)L_6) == ((int32_t)((int32_t)24602224))))
		{
			goto IL_0247;
		}
	}
	{
		uint32_t L_7 = V_2;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)49525662))))
		{
			goto IL_0136;
		}
	}
	{
		goto IL_0420;
	}

IL_0049:
	{
		uint32_t L_8 = V_2;
		if ((((int32_t)L_8) == ((int32_t)((int32_t)230313139))))
		{
			goto IL_019f;
		}
	}
	{
		uint32_t L_9 = V_2;
		if ((((int32_t)L_9) == ((int32_t)((int32_t)666576729))))
		{
			goto IL_01f3;
		}
	}
	{
		goto IL_0420;
	}

IL_0064:
	{
		uint32_t L_10 = V_2;
		if ((!(((uint32_t)L_10) <= ((uint32_t)((int32_t)955488309)))))
		{
			goto IL_0087;
		}
	}
	{
		uint32_t L_11 = V_2;
		if ((((int32_t)L_11) == ((int32_t)((int32_t)923624301))))
		{
			goto IL_0232;
		}
	}
	{
		uint32_t L_12 = V_2;
		if ((((int32_t)L_12) == ((int32_t)((int32_t)955488309))))
		{
			goto IL_0286;
		}
	}
	{
		goto IL_0420;
	}

IL_0087:
	{
		uint32_t L_13 = V_2;
		if ((((int32_t)L_13) == ((int32_t)((int32_t)980363995))))
		{
			goto IL_029b;
		}
	}
	{
		uint32_t L_14 = V_2;
		if ((((int32_t)L_14) == ((int32_t)((int32_t)985988853))))
		{
			goto IL_0175;
		}
	}
	{
		uint32_t L_15 = V_2;
		if ((((int32_t)L_15) == ((int32_t)((int32_t)-2104025999))))
		{
			goto IL_01de;
		}
	}
	{
		goto IL_0420;
	}

IL_00ad:
	{
		uint32_t L_16 = V_2;
		if ((!(((uint32_t)L_16) <= ((uint32_t)((int32_t)-1473810612)))))
		{
			goto IL_00f0;
		}
	}
	{
		uint32_t L_17 = V_2;
		if ((!(((uint32_t)L_17) <= ((uint32_t)((int32_t)-1726928010)))))
		{
			goto IL_00d5;
		}
	}
	{
		uint32_t L_18 = V_2;
		if ((((int32_t)L_18) == ((int32_t)((int32_t)-2083506667))))
		{
			goto IL_01c9;
		}
	}
	{
		uint32_t L_19 = V_2;
		if ((((int32_t)L_19) == ((int32_t)((int32_t)-1726928010))))
		{
			goto IL_014b;
		}
	}
	{
		goto IL_0420;
	}

IL_00d5:
	{
		uint32_t L_20 = V_2;
		if ((((int32_t)L_20) == ((int32_t)((int32_t)-1593786692))))
		{
			goto IL_0208;
		}
	}
	{
		uint32_t L_21 = V_2;
		if ((((int32_t)L_21) == ((int32_t)((int32_t)-1473810612))))
		{
			goto IL_018a;
		}
	}
	{
		goto IL_0420;
	}

IL_00f0:
	{
		uint32_t L_22 = V_2;
		if ((!(((uint32_t)L_22) <= ((uint32_t)((int32_t)-1386986472)))))
		{
			goto IL_0110;
		}
	}
	{
		uint32_t L_23 = V_2;
		if ((((int32_t)L_23) == ((int32_t)((int32_t)-1412039661))))
		{
			goto IL_0160;
		}
	}
	{
		uint32_t L_24 = V_2;
		if ((((int32_t)L_24) == ((int32_t)((int32_t)-1386986472))))
		{
			goto IL_01b4;
		}
	}
	{
		goto IL_0420;
	}

IL_0110:
	{
		uint32_t L_25 = V_2;
		if ((((int32_t)L_25) == ((int32_t)((int32_t)-584064197))))
		{
			goto IL_021d;
		}
	}
	{
		uint32_t L_26 = V_2;
		if ((((int32_t)L_26) == ((int32_t)((int32_t)-473474755))))
		{
			goto IL_0271;
		}
	}
	{
		uint32_t L_27 = V_2;
		if ((((int32_t)L_27) == ((int32_t)((int32_t)-365686981))))
		{
			goto IL_025c;
		}
	}
	{
		goto IL_0420;
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
		goto IL_0420;
	}

IL_014b:
	{
		String_t* L_30 = V_1;
		bool L_31;
		L_31 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_30, _stringLiteral82BECCAD895076775062861CDB46AADEF913D969, NULL);
		if (L_31)
		{
			goto IL_02c7;
		}
	}
	{
		goto IL_0420;
	}

IL_0160:
	{
		String_t* L_32 = V_1;
		bool L_33;
		L_33 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_32, _stringLiteral1228466552C1791B2019A329AFE94665D441168A, NULL);
		if (L_33)
		{
			goto IL_02d9;
		}
	}
	{
		goto IL_0420;
	}

IL_0175:
	{
		String_t* L_34 = V_1;
		bool L_35;
		L_35 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_34, _stringLiteralBD49F93A7BC78A69E385CEC0E78F434BD2845A17, NULL);
		if (L_35)
		{
			goto IL_02f0;
		}
	}
	{
		goto IL_0420;
	}

IL_018a:
	{
		String_t* L_36 = V_1;
		bool L_37;
		L_37 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_36, _stringLiteralED1F119527A0BCA45125EF8E0F719985DA86C0E1, NULL);
		if (L_37)
		{
			goto IL_0307;
		}
	}
	{
		goto IL_0420;
	}

IL_019f:
	{
		String_t* L_38 = V_1;
		bool L_39;
		L_39 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_38, _stringLiteral8C9F18A4F030B96447955FBBA1A99FFC43B5D8E0, NULL);
		if (L_39)
		{
			goto IL_031e;
		}
	}
	{
		goto IL_0420;
	}

IL_01b4:
	{
		String_t* L_40 = V_1;
		bool L_41;
		L_41 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_40, _stringLiteralFC341A1966AF28A9A7A26EDFB78ABBF7DE4D0E1F, NULL);
		if (L_41)
		{
			goto IL_0335;
		}
	}
	{
		goto IL_0420;
	}

IL_01c9:
	{
		String_t* L_42 = V_1;
		bool L_43;
		L_43 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_42, _stringLiteralE8744A8B8BD390EB66CA0CAE2376C973E6904FFB, NULL);
		if (L_43)
		{
			goto IL_034c;
		}
	}
	{
		goto IL_0420;
	}

IL_01de:
	{
		String_t* L_44 = V_1;
		bool L_45;
		L_45 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_44, _stringLiteralF9BE17D634D1B07BCDCDA77A87710C946D81307B, NULL);
		if (L_45)
		{
			goto IL_0363;
		}
	}
	{
		goto IL_0420;
	}

IL_01f3:
	{
		String_t* L_46 = V_1;
		bool L_47;
		L_47 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_46, _stringLiteralFA5EC7168E9633DAAEAA255ECB55030EA60F064F, NULL);
		if (L_47)
		{
			goto IL_037a;
		}
	}
	{
		goto IL_0420;
	}

IL_0208:
	{
		String_t* L_48 = V_1;
		bool L_49;
		L_49 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_48, _stringLiteralEB0A157666700D8227FD4B66A26FDC02035E89BF, NULL);
		if (L_49)
		{
			goto IL_038c;
		}
	}
	{
		goto IL_0420;
	}

IL_021d:
	{
		String_t* L_50 = V_1;
		bool L_51;
		L_51 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_50, _stringLiteral8E54BB51E569CB6A8D3C45D8AEF883A1559C1C0E, NULL);
		if (L_51)
		{
			goto IL_039e;
		}
	}
	{
		goto IL_0420;
	}

IL_0232:
	{
		String_t* L_52 = V_1;
		bool L_53;
		L_53 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_52, _stringLiteral60E56797D122AE71D3774956F66C6EEB9EA22C05, NULL);
		if (L_53)
		{
			goto IL_03ad;
		}
	}
	{
		goto IL_0420;
	}

IL_0247:
	{
		String_t* L_54 = V_1;
		bool L_55;
		L_55 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_54, _stringLiteral01837E2252AC8026A5EA3567A663017A662FBB70, NULL);
		if (L_55)
		{
			goto IL_03bc;
		}
	}
	{
		goto IL_0420;
	}

IL_025c:
	{
		String_t* L_56 = V_1;
		bool L_57;
		L_57 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_56, _stringLiteralF66E9083C67855AB6EBB4B74342E385A72AACE32, NULL);
		if (L_57)
		{
			goto IL_03d0;
		}
	}
	{
		goto IL_0420;
	}

IL_0271:
	{
		String_t* L_58 = V_1;
		bool L_59;
		L_59 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_58, _stringLiteral91811EE149061D28B38320E2430CE8888AD6398B, NULL);
		if (L_59)
		{
			goto IL_03e4;
		}
	}
	{
		goto IL_0420;
	}

IL_0286:
	{
		String_t* L_60 = V_1;
		bool L_61;
		L_61 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_60, _stringLiteral6686C366F645244186604A3DA4B9A58012A85F1B, NULL);
		if (L_61)
		{
			goto IL_03f8;
		}
	}
	{
		goto IL_0420;
	}

IL_029b:
	{
		String_t* L_62 = V_1;
		bool L_63;
		L_63 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_62, _stringLiteralCA1B66E295BD92E9FD3B6C708F09CA69A50BEFD1, NULL);
		if (L_63)
		{
			goto IL_040c;
		}
	}
	{
		goto IL_0420;
	}

IL_02b0:
	{
		// instance.enabled = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_64 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_65 = ((ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_64);
		bool L_66;
		L_66 = GenericVirtualFuncInvoker1< bool, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mFFB70EE53D8CD0255A4E599780F62A3EB1520E83_RuntimeMethod_var, L_64, L_65);
		ShapeModule_set_enabled_m6BA02351FEED67A82664135B922DDA66D71DF399((&V_0), L_66, NULL);
		// break;
		goto IL_0426;
	}

IL_02c7:
	{
		// instance.shapeType = reader.Read<UnityEngine.ParticleSystemShapeType>();
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_67 = ___reader0;
		NullCheck(L_67);
		int32_t L_68;
		L_68 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisParticleSystemShapeType_tADE62D07EDA71578326A03B50871391EE01F73BB_m3423F2435F483F46ABB4C8EAD9B78CD03D2742FB_RuntimeMethod_var, L_67);
		ShapeModule_set_shapeType_m4B5D1EA91037AD7065FE1D23652D919FED4D6D7F((&V_0), L_68, NULL);
		// break;
		goto IL_0426;
	}

IL_02d9:
	{
		// instance.randomDirectionAmount = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_69 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_70 = ((ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_69);
		float L_71;
		L_71 = GenericVirtualFuncInvoker1< float, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mA86928BC888E342D2C2644535E3399952F5077ED_RuntimeMethod_var, L_69, L_70);
		ShapeModule_set_randomDirectionAmount_m398CEE6D93207797559A80CE49A0C4138C96D0B3((&V_0), L_71, NULL);
		// break;
		goto IL_0426;
	}

IL_02f0:
	{
		// instance.sphericalDirectionAmount = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_72 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_73 = ((ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_72);
		float L_74;
		L_74 = GenericVirtualFuncInvoker1< float, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mA86928BC888E342D2C2644535E3399952F5077ED_RuntimeMethod_var, L_72, L_73);
		ShapeModule_set_sphericalDirectionAmount_m395143D474E51CE6AAF81C9DB84028A16B9BCAAB((&V_0), L_74, NULL);
		// break;
		goto IL_0426;
	}

IL_0307:
	{
		// instance.alignToDirection = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_75 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_76 = ((ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_75);
		bool L_77;
		L_77 = GenericVirtualFuncInvoker1< bool, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mFFB70EE53D8CD0255A4E599780F62A3EB1520E83_RuntimeMethod_var, L_75, L_76);
		ShapeModule_set_alignToDirection_mD632613E0E343654E6569F22BC9EFBB9247AC581((&V_0), L_77, NULL);
		// break;
		goto IL_0426;
	}

IL_031e:
	{
		// instance.radius = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_78 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_79 = ((ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_78);
		float L_80;
		L_80 = GenericVirtualFuncInvoker1< float, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mA86928BC888E342D2C2644535E3399952F5077ED_RuntimeMethod_var, L_78, L_79);
		ShapeModule_set_radius_m37F79E13EB60FA39EAE36B49DAC4AC880416E89C((&V_0), L_80, NULL);
		// break;
		goto IL_0426;
	}

IL_0335:
	{
		// instance.angle = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_81 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_82 = ((ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_81);
		float L_83;
		L_83 = GenericVirtualFuncInvoker1< float, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mA86928BC888E342D2C2644535E3399952F5077ED_RuntimeMethod_var, L_81, L_82);
		ShapeModule_set_angle_m62F5F037CD1DF55172B2D64DBF8271F9F917133A((&V_0), L_83, NULL);
		// break;
		goto IL_0426;
	}

IL_034c:
	{
		// instance.length = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_84 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_85 = ((ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_84);
		float L_86;
		L_86 = GenericVirtualFuncInvoker1< float, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mA86928BC888E342D2C2644535E3399952F5077ED_RuntimeMethod_var, L_84, L_85);
		ShapeModule_set_length_mD38341192A10095F9D0217993D410939F90CE621((&V_0), L_86, NULL);
		// break;
		goto IL_0426;
	}

IL_0363:
	{
		// instance.scale = reader.Read<UnityEngine.Vector3>(ES3Type_Vector3.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_87 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_88 = ((ES3Type_Vector3_t29E9EC31EED86489FBD8A22FBD317F5BD5C3A3E9_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Vector3_t29E9EC31EED86489FBD8A22FBD317F5BD5C3A3E9_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_87);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_89;
		L_89 = GenericVirtualFuncInvoker1< Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_m41744F4EDB47642D9EF02C774ADD5EADDE749262_RuntimeMethod_var, L_87, L_88);
		ShapeModule_set_scale_mDA84B80016FDA6B6EE181B108C3E59A2FFF9143D((&V_0), L_89, NULL);
		// break;
		goto IL_0426;
	}

IL_037a:
	{
		// instance.meshShapeType = reader.Read<UnityEngine.ParticleSystemMeshShapeType>();
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_90 = ___reader0;
		NullCheck(L_90);
		int32_t L_91;
		L_91 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisParticleSystemMeshShapeType_t260D7CAA6014D0ACE2BCFE0BC588E1ADE3AF98E5_m2E1596CACABC5B7BB194A74A92C1E5627B3DB9D0_RuntimeMethod_var, L_90);
		ShapeModule_set_meshShapeType_m335ED6F02244A07F8557E900D9935A4220AD23D0((&V_0), L_91, NULL);
		// break;
		goto IL_0426;
	}

IL_038c:
	{
		// instance.mesh = reader.Read<UnityEngine.Mesh>();
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_92 = ___reader0;
		NullCheck(L_92);
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_93;
		L_93 = GenericVirtualFuncInvoker0< Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* >::Invoke(ES3Reader_Read_TisMesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4_m4DD8C0823DA528C84509E776081834CEAC71FE88_RuntimeMethod_var, L_92);
		ShapeModule_set_mesh_m75450DE287A91452C63021F100D8B6A65A921CE1((&V_0), L_93, NULL);
		// break;
		goto IL_0426;
	}

IL_039e:
	{
		// instance.meshRenderer = reader.Read<UnityEngine.MeshRenderer>();
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_94 = ___reader0;
		NullCheck(L_94);
		MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE* L_95;
		L_95 = GenericVirtualFuncInvoker0< MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE* >::Invoke(ES3Reader_Read_TisMeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE_mADE66001251FAEAB39EE97DA447D0A80EAAB85C4_RuntimeMethod_var, L_94);
		ShapeModule_set_meshRenderer_m25111B1DC9F173FE054264094DB19564D375D1D6((&V_0), L_95, NULL);
		// break;
		goto IL_0426;
	}

IL_03ad:
	{
		// instance.skinnedMeshRenderer = reader.Read<UnityEngine.SkinnedMeshRenderer>();
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_96 = ___reader0;
		NullCheck(L_96);
		SkinnedMeshRenderer_t020C4E8648EA1C4C6BA5C41502919B387E7E1C2E* L_97;
		L_97 = GenericVirtualFuncInvoker0< SkinnedMeshRenderer_t020C4E8648EA1C4C6BA5C41502919B387E7E1C2E* >::Invoke(ES3Reader_Read_TisSkinnedMeshRenderer_t020C4E8648EA1C4C6BA5C41502919B387E7E1C2E_m9E77EF921E4ACFCE425D24538209CF592968463E_RuntimeMethod_var, L_96);
		ShapeModule_set_skinnedMeshRenderer_mB3B9D58C4A9D21F990EC2000D38B5E35C7FF5807((&V_0), L_97, NULL);
		// break;
		goto IL_0426;
	}

IL_03bc:
	{
		// instance.useMeshMaterialIndex = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_98 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_99 = ((ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_98);
		bool L_100;
		L_100 = GenericVirtualFuncInvoker1< bool, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mFFB70EE53D8CD0255A4E599780F62A3EB1520E83_RuntimeMethod_var, L_98, L_99);
		ShapeModule_set_useMeshMaterialIndex_m48CE9CB5BA8CAF93D4C92975B826A7BA8459B838((&V_0), L_100, NULL);
		// break;
		goto IL_0426;
	}

IL_03d0:
	{
		// instance.meshMaterialIndex = reader.Read<System.Int32>(ES3Type_int.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_101 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_102 = ((ES3Type_int_t05A5E7A96442F23CE33E24A71CD349372A70E0C3_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_int_t05A5E7A96442F23CE33E24A71CD349372A70E0C3_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_101);
		int32_t L_103;
		L_103 = GenericVirtualFuncInvoker1< int32_t, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mEFCC4D52DD5B822D3561A53591AE11CDB25CDB6F_RuntimeMethod_var, L_101, L_102);
		ShapeModule_set_meshMaterialIndex_mC72EF43FC31A137D1247E748E89FE0FF5FB2C29F((&V_0), L_103, NULL);
		// break;
		goto IL_0426;
	}

IL_03e4:
	{
		// instance.useMeshColors = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_104 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_105 = ((ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_104);
		bool L_106;
		L_106 = GenericVirtualFuncInvoker1< bool, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mFFB70EE53D8CD0255A4E599780F62A3EB1520E83_RuntimeMethod_var, L_104, L_105);
		ShapeModule_set_useMeshColors_m2B12B03E04E2ACEE2AE68B697F462232D42D6C6E((&V_0), L_106, NULL);
		// break;
		goto IL_0426;
	}

IL_03f8:
	{
		// instance.normalOffset = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_107 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_108 = ((ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_107);
		float L_109;
		L_109 = GenericVirtualFuncInvoker1< float, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mA86928BC888E342D2C2644535E3399952F5077ED_RuntimeMethod_var, L_107, L_108);
		ShapeModule_set_normalOffset_m24453DEF085D96323A09DEBD134283B7F23C263F((&V_0), L_109, NULL);
		// break;
		goto IL_0426;
	}

IL_040c:
	{
		// instance.arc = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_110 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_111 = ((ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_110);
		float L_112;
		L_112 = GenericVirtualFuncInvoker1< float, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mA86928BC888E342D2C2644535E3399952F5077ED_RuntimeMethod_var, L_110, L_111);
		ShapeModule_set_arc_mE9EF87E2AA959143B466CD55B7DAA65FBE155D1F((&V_0), L_112, NULL);
		// break;
		goto IL_0426;
	}

IL_0420:
	{
		// reader.Skip();
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_113 = ___reader0;
		NullCheck(L_113);
		VirtualActionInvoker0::Invoke(41 /* System.Void ES3Reader::Skip() */, L_113);
	}

IL_0426:
	{
		// while((propertyName = reader.ReadPropertyName()) != null)
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_114 = ___reader0;
		NullCheck(L_114);
		String_t* L_115;
		L_115 = VirtualFuncInvoker0< String_t* >::Invoke(21 /* System.String ES3Reader::ReadPropertyName() */, L_114);
		String_t* L_116 = L_115;
		V_1 = L_116;
		if (L_116)
		{
			goto IL_000c;
		}
	}
	{
		// }
		return;
	}
}
// System.Void ES3Types.ES3Type_ShapeModule::ReadInto<UnityEngine.ParticleSystem/RotationBySpeedModule>(ES3Reader,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ES3Type_ShapeModule_ReadInto_TisRotationBySpeedModule_tBCB7E7C1B402D1492310016D5F8FBBA4C15C26A6_m3CE8818FDE1473CEE907BF90E9B1B22C980B8209_gshared (ES3Type_ShapeModule_t2A98821A3CBBB891C72216EA1D86C9579DFD70B7* __this, ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* ___reader0, RuntimeObject* ___obj1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mFFB70EE53D8CD0255A4E599780F62A3EB1520E83_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mEFCC4D52DD5B822D3561A53591AE11CDB25CDB6F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisMeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE_mADE66001251FAEAB39EE97DA447D0A80EAAB85C4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisMesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4_m4DD8C0823DA528C84509E776081834CEAC71FE88_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisParticleSystemMeshShapeType_t260D7CAA6014D0ACE2BCFE0BC588E1ADE3AF98E5_m2E1596CACABC5B7BB194A74A92C1E5627B3DB9D0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisParticleSystemShapeType_tADE62D07EDA71578326A03B50871391EE01F73BB_m3423F2435F483F46ABB4C8EAD9B78CD03D2742FB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mA86928BC888E342D2C2644535E3399952F5077ED_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisSkinnedMeshRenderer_t020C4E8648EA1C4C6BA5C41502919B387E7E1C2E_m9E77EF921E4ACFCE425D24538209CF592968463E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_m41744F4EDB47642D9EF02C774ADD5EADDE749262_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_Vector3_t29E9EC31EED86489FBD8A22FBD317F5BD5C3A3E9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_int_t05A5E7A96442F23CE33E24A71CD349372A70E0C3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ShapeModule_tAA38A0C5305DF2F9D96F89D4B8F762E2D034D8B2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral01837E2252AC8026A5EA3567A663017A662FBB70);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1228466552C1791B2019A329AFE94665D441168A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral60E56797D122AE71D3774956F66C6EEB9EA22C05);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6686C366F645244186604A3DA4B9A58012A85F1B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral82BECCAD895076775062861CDB46AADEF913D969);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8C9F18A4F030B96447955FBBA1A99FFC43B5D8E0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8E54BB51E569CB6A8D3C45D8AEF883A1559C1C0E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral91811EE149061D28B38320E2430CE8888AD6398B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBD49F93A7BC78A69E385CEC0E78F434BD2845A17);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCA1B66E295BD92E9FD3B6C708F09CA69A50BEFD1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE8744A8B8BD390EB66CA0CAE2376C973E6904FFB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEB0A157666700D8227FD4B66A26FDC02035E89BF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralED1F119527A0BCA45125EF8E0F719985DA86C0E1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF66E9083C67855AB6EBB4B74342E385A72AACE32);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF9BE17D634D1B07BCDCDA77A87710C946D81307B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFA5EC7168E9633DAAEAA255ECB55030EA60F064F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFC341A1966AF28A9A7A26EDFB78ABBF7DE4D0E1F);
		s_Il2CppMethodInitialized = true;
	}
	ShapeModule_tAA38A0C5305DF2F9D96F89D4B8F762E2D034D8B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	uint32_t V_2 = 0;
	{
		// var instance = (UnityEngine.ParticleSystem.ShapeModule)obj;
		RuntimeObject* L_0 = ___obj1;
		V_0 = ((*(ShapeModule_tAA38A0C5305DF2F9D96F89D4B8F762E2D034D8B2*)((ShapeModule_tAA38A0C5305DF2F9D96F89D4B8F762E2D034D8B2*)(ShapeModule_tAA38A0C5305DF2F9D96F89D4B8F762E2D034D8B2*)UnBox(L_0, ShapeModule_tAA38A0C5305DF2F9D96F89D4B8F762E2D034D8B2_il2cpp_TypeInfo_var))));
		goto IL_0426;
	}

IL_000c:
	{
		String_t* L_1 = V_1;
		uint32_t L_2;
		L_2 = U3CPrivateImplementationDetailsU3E_ComputeStringHash_m9E43873DE0DF480D27EC1C2AA3C09E74EA77F75D(L_1, NULL);
		V_2 = L_2;
		uint32_t L_3 = V_2;
		if ((!(((uint32_t)L_3) <= ((uint32_t)((int32_t)-2104025999)))))
		{
			goto IL_00ad;
		}
	}
	{
		uint32_t L_4 = V_2;
		if ((!(((uint32_t)L_4) <= ((uint32_t)((int32_t)666576729)))))
		{
			goto IL_0064;
		}
	}
	{
		uint32_t L_5 = V_2;
		if ((!(((uint32_t)L_5) <= ((uint32_t)((int32_t)49525662)))))
		{
			goto IL_0049;
		}
	}
	{
		uint32_t L_6 = V_2;
		if ((((int32_t)L_6) == ((int32_t)((int32_t)24602224))))
		{
			goto IL_0247;
		}
	}
	{
		uint32_t L_7 = V_2;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)49525662))))
		{
			goto IL_0136;
		}
	}
	{
		goto IL_0420;
	}

IL_0049:
	{
		uint32_t L_8 = V_2;
		if ((((int32_t)L_8) == ((int32_t)((int32_t)230313139))))
		{
			goto IL_019f;
		}
	}
	{
		uint32_t L_9 = V_2;
		if ((((int32_t)L_9) == ((int32_t)((int32_t)666576729))))
		{
			goto IL_01f3;
		}
	}
	{
		goto IL_0420;
	}

IL_0064:
	{
		uint32_t L_10 = V_2;
		if ((!(((uint32_t)L_10) <= ((uint32_t)((int32_t)955488309)))))
		{
			goto IL_0087;
		}
	}
	{
		uint32_t L_11 = V_2;
		if ((((int32_t)L_11) == ((int32_t)((int32_t)923624301))))
		{
			goto IL_0232;
		}
	}
	{
		uint32_t L_12 = V_2;
		if ((((int32_t)L_12) == ((int32_t)((int32_t)955488309))))
		{
			goto IL_0286;
		}
	}
	{
		goto IL_0420;
	}

IL_0087:
	{
		uint32_t L_13 = V_2;
		if ((((int32_t)L_13) == ((int32_t)((int32_t)980363995))))
		{
			goto IL_029b;
		}
	}
	{
		uint32_t L_14 = V_2;
		if ((((int32_t)L_14) == ((int32_t)((int32_t)985988853))))
		{
			goto IL_0175;
		}
	}
	{
		uint32_t L_15 = V_2;
		if ((((int32_t)L_15) == ((int32_t)((int32_t)-2104025999))))
		{
			goto IL_01de;
		}
	}
	{
		goto IL_0420;
	}

IL_00ad:
	{
		uint32_t L_16 = V_2;
		if ((!(((uint32_t)L_16) <= ((uint32_t)((int32_t)-1473810612)))))
		{
			goto IL_00f0;
		}
	}
	{
		uint32_t L_17 = V_2;
		if ((!(((uint32_t)L_17) <= ((uint32_t)((int32_t)-1726928010)))))
		{
			goto IL_00d5;
		}
	}
	{
		uint32_t L_18 = V_2;
		if ((((int32_t)L_18) == ((int32_t)((int32_t)-2083506667))))
		{
			goto IL_01c9;
		}
	}
	{
		uint32_t L_19 = V_2;
		if ((((int32_t)L_19) == ((int32_t)((int32_t)-1726928010))))
		{
			goto IL_014b;
		}
	}
	{
		goto IL_0420;
	}

IL_00d5:
	{
		uint32_t L_20 = V_2;
		if ((((int32_t)L_20) == ((int32_t)((int32_t)-1593786692))))
		{
			goto IL_0208;
		}
	}
	{
		uint32_t L_21 = V_2;
		if ((((int32_t)L_21) == ((int32_t)((int32_t)-1473810612))))
		{
			goto IL_018a;
		}
	}
	{
		goto IL_0420;
	}

IL_00f0:
	{
		uint32_t L_22 = V_2;
		if ((!(((uint32_t)L_22) <= ((uint32_t)((int32_t)-1386986472)))))
		{
			goto IL_0110;
		}
	}
	{
		uint32_t L_23 = V_2;
		if ((((int32_t)L_23) == ((int32_t)((int32_t)-1412039661))))
		{
			goto IL_0160;
		}
	}
	{
		uint32_t L_24 = V_2;
		if ((((int32_t)L_24) == ((int32_t)((int32_t)-1386986472))))
		{
			goto IL_01b4;
		}
	}
	{
		goto IL_0420;
	}

IL_0110:
	{
		uint32_t L_25 = V_2;
		if ((((int32_t)L_25) == ((int32_t)((int32_t)-584064197))))
		{
			goto IL_021d;
		}
	}
	{
		uint32_t L_26 = V_2;
		if ((((int32_t)L_26) == ((int32_t)((int32_t)-473474755))))
		{
			goto IL_0271;
		}
	}
	{
		uint32_t L_27 = V_2;
		if ((((int32_t)L_27) == ((int32_t)((int32_t)-365686981))))
		{
			goto IL_025c;
		}
	}
	{
		goto IL_0420;
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
		goto IL_0420;
	}

IL_014b:
	{
		String_t* L_30 = V_1;
		bool L_31;
		L_31 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_30, _stringLiteral82BECCAD895076775062861CDB46AADEF913D969, NULL);
		if (L_31)
		{
			goto IL_02c7;
		}
	}
	{
		goto IL_0420;
	}

IL_0160:
	{
		String_t* L_32 = V_1;
		bool L_33;
		L_33 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_32, _stringLiteral1228466552C1791B2019A329AFE94665D441168A, NULL);
		if (L_33)
		{
			goto IL_02d9;
		}
	}
	{
		goto IL_0420;
	}

IL_0175:
	{
		String_t* L_34 = V_1;
		bool L_35;
		L_35 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_34, _stringLiteralBD49F93A7BC78A69E385CEC0E78F434BD2845A17, NULL);
		if (L_35)
		{
			goto IL_02f0;
		}
	}
	{
		goto IL_0420;
	}

IL_018a:
	{
		String_t* L_36 = V_1;
		bool L_37;
		L_37 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_36, _stringLiteralED1F119527A0BCA45125EF8E0F719985DA86C0E1, NULL);
		if (L_37)
		{
			goto IL_0307;
		}
	}
	{
		goto IL_0420;
	}

IL_019f:
	{
		String_t* L_38 = V_1;
		bool L_39;
		L_39 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_38, _stringLiteral8C9F18A4F030B96447955FBBA1A99FFC43B5D8E0, NULL);
		if (L_39)
		{
			goto IL_031e;
		}
	}
	{
		goto IL_0420;
	}

IL_01b4:
	{
		String_t* L_40 = V_1;
		bool L_41;
		L_41 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_40, _stringLiteralFC341A1966AF28A9A7A26EDFB78ABBF7DE4D0E1F, NULL);
		if (L_41)
		{
			goto IL_0335;
		}
	}
	{
		goto IL_0420;
	}

IL_01c9:
	{
		String_t* L_42 = V_1;
		bool L_43;
		L_43 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_42, _stringLiteralE8744A8B8BD390EB66CA0CAE2376C973E6904FFB, NULL);
		if (L_43)
		{
			goto IL_034c;
		}
	}
	{
		goto IL_0420;
	}

IL_01de:
	{
		String_t* L_44 = V_1;
		bool L_45;
		L_45 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_44, _stringLiteralF9BE17D634D1B07BCDCDA77A87710C946D81307B, NULL);
		if (L_45)
		{
			goto IL_0363;
		}
	}
	{
		goto IL_0420;
	}

IL_01f3:
	{
		String_t* L_46 = V_1;
		bool L_47;
		L_47 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_46, _stringLiteralFA5EC7168E9633DAAEAA255ECB55030EA60F064F, NULL);
		if (L_47)
		{
			goto IL_037a;
		}
	}
	{
		goto IL_0420;
	}

IL_0208:
	{
		String_t* L_48 = V_1;
		bool L_49;
		L_49 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_48, _stringLiteralEB0A157666700D8227FD4B66A26FDC02035E89BF, NULL);
		if (L_49)
		{
			goto IL_038c;
		}
	}
	{
		goto IL_0420;
	}

IL_021d:
	{
		String_t* L_50 = V_1;
		bool L_51;
		L_51 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_50, _stringLiteral8E54BB51E569CB6A8D3C45D8AEF883A1559C1C0E, NULL);
		if (L_51)
		{
			goto IL_039e;
		}
	}
	{
		goto IL_0420;
	}

IL_0232:
	{
		String_t* L_52 = V_1;
		bool L_53;
		L_53 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_52, _stringLiteral60E56797D122AE71D3774956F66C6EEB9EA22C05, NULL);
		if (L_53)
		{
			goto IL_03ad;
		}
	}
	{
		goto IL_0420;
	}

IL_0247:
	{
		String_t* L_54 = V_1;
		bool L_55;
		L_55 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_54, _stringLiteral01837E2252AC8026A5EA3567A663017A662FBB70, NULL);
		if (L_55)
		{
			goto IL_03bc;
		}
	}
	{
		goto IL_0420;
	}

IL_025c:
	{
		String_t* L_56 = V_1;
		bool L_57;
		L_57 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_56, _stringLiteralF66E9083C67855AB6EBB4B74342E385A72AACE32, NULL);
		if (L_57)
		{
			goto IL_03d0;
		}
	}
	{
		goto IL_0420;
	}

IL_0271:
	{
		String_t* L_58 = V_1;
		bool L_59;
		L_59 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_58, _stringLiteral91811EE149061D28B38320E2430CE8888AD6398B, NULL);
		if (L_59)
		{
			goto IL_03e4;
		}
	}
	{
		goto IL_0420;
	}

IL_0286:
	{
		String_t* L_60 = V_1;
		bool L_61;
		L_61 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_60, _stringLiteral6686C366F645244186604A3DA4B9A58012A85F1B, NULL);
		if (L_61)
		{
			goto IL_03f8;
		}
	}
	{
		goto IL_0420;
	}

IL_029b:
	{
		String_t* L_62 = V_1;
		bool L_63;
		L_63 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_62, _stringLiteralCA1B66E295BD92E9FD3B6C708F09CA69A50BEFD1, NULL);
		if (L_63)
		{
			goto IL_040c;
		}
	}
	{
		goto IL_0420;
	}

IL_02b0:
	{
		// instance.enabled = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_64 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_65 = ((ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_64);
		bool L_66;
		L_66 = GenericVirtualFuncInvoker1< bool, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mFFB70EE53D8CD0255A4E599780F62A3EB1520E83_RuntimeMethod_var, L_64, L_65);
		ShapeModule_set_enabled_m6BA02351FEED67A82664135B922DDA66D71DF399((&V_0), L_66, NULL);
		// break;
		goto IL_0426;
	}

IL_02c7:
	{
		// instance.shapeType = reader.Read<UnityEngine.ParticleSystemShapeType>();
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_67 = ___reader0;
		NullCheck(L_67);
		int32_t L_68;
		L_68 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisParticleSystemShapeType_tADE62D07EDA71578326A03B50871391EE01F73BB_m3423F2435F483F46ABB4C8EAD9B78CD03D2742FB_RuntimeMethod_var, L_67);
		ShapeModule_set_shapeType_m4B5D1EA91037AD7065FE1D23652D919FED4D6D7F((&V_0), L_68, NULL);
		// break;
		goto IL_0426;
	}

IL_02d9:
	{
		// instance.randomDirectionAmount = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_69 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_70 = ((ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_69);
		float L_71;
		L_71 = GenericVirtualFuncInvoker1< float, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mA86928BC888E342D2C2644535E3399952F5077ED_RuntimeMethod_var, L_69, L_70);
		ShapeModule_set_randomDirectionAmount_m398CEE6D93207797559A80CE49A0C4138C96D0B3((&V_0), L_71, NULL);
		// break;
		goto IL_0426;
	}

IL_02f0:
	{
		// instance.sphericalDirectionAmount = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_72 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_73 = ((ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_72);
		float L_74;
		L_74 = GenericVirtualFuncInvoker1< float, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mA86928BC888E342D2C2644535E3399952F5077ED_RuntimeMethod_var, L_72, L_73);
		ShapeModule_set_sphericalDirectionAmount_m395143D474E51CE6AAF81C9DB84028A16B9BCAAB((&V_0), L_74, NULL);
		// break;
		goto IL_0426;
	}

IL_0307:
	{
		// instance.alignToDirection = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_75 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_76 = ((ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_75);
		bool L_77;
		L_77 = GenericVirtualFuncInvoker1< bool, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mFFB70EE53D8CD0255A4E599780F62A3EB1520E83_RuntimeMethod_var, L_75, L_76);
		ShapeModule_set_alignToDirection_mD632613E0E343654E6569F22BC9EFBB9247AC581((&V_0), L_77, NULL);
		// break;
		goto IL_0426;
	}

IL_031e:
	{
		// instance.radius = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_78 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_79 = ((ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_78);
		float L_80;
		L_80 = GenericVirtualFuncInvoker1< float, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mA86928BC888E342D2C2644535E3399952F5077ED_RuntimeMethod_var, L_78, L_79);
		ShapeModule_set_radius_m37F79E13EB60FA39EAE36B49DAC4AC880416E89C((&V_0), L_80, NULL);
		// break;
		goto IL_0426;
	}

IL_0335:
	{
		// instance.angle = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_81 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_82 = ((ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_81);
		float L_83;
		L_83 = GenericVirtualFuncInvoker1< float, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mA86928BC888E342D2C2644535E3399952F5077ED_RuntimeMethod_var, L_81, L_82);
		ShapeModule_set_angle_m62F5F037CD1DF55172B2D64DBF8271F9F917133A((&V_0), L_83, NULL);
		// break;
		goto IL_0426;
	}

IL_034c:
	{
		// instance.length = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_84 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_85 = ((ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_84);
		float L_86;
		L_86 = GenericVirtualFuncInvoker1< float, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mA86928BC888E342D2C2644535E3399952F5077ED_RuntimeMethod_var, L_84, L_85);
		ShapeModule_set_length_mD38341192A10095F9D0217993D410939F90CE621((&V_0), L_86, NULL);
		// break;
		goto IL_0426;
	}

IL_0363:
	{
		// instance.scale = reader.Read<UnityEngine.Vector3>(ES3Type_Vector3.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_87 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_88 = ((ES3Type_Vector3_t29E9EC31EED86489FBD8A22FBD317F5BD5C3A3E9_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Vector3_t29E9EC31EED86489FBD8A22FBD317F5BD5C3A3E9_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_87);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_89;
		L_89 = GenericVirtualFuncInvoker1< Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_m41744F4EDB47642D9EF02C774ADD5EADDE749262_RuntimeMethod_var, L_87, L_88);
		ShapeModule_set_scale_mDA84B80016FDA6B6EE181B108C3E59A2FFF9143D((&V_0), L_89, NULL);
		// break;
		goto IL_0426;
	}

IL_037a:
	{
		// instance.meshShapeType = reader.Read<UnityEngine.ParticleSystemMeshShapeType>();
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_90 = ___reader0;
		NullCheck(L_90);
		int32_t L_91;
		L_91 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisParticleSystemMeshShapeType_t260D7CAA6014D0ACE2BCFE0BC588E1ADE3AF98E5_m2E1596CACABC5B7BB194A74A92C1E5627B3DB9D0_RuntimeMethod_var, L_90);
		ShapeModule_set_meshShapeType_m335ED6F02244A07F8557E900D9935A4220AD23D0((&V_0), L_91, NULL);
		// break;
		goto IL_0426;
	}

IL_038c:
	{
		// instance.mesh = reader.Read<UnityEngine.Mesh>();
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_92 = ___reader0;
		NullCheck(L_92);
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_93;
		L_93 = GenericVirtualFuncInvoker0< Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* >::Invoke(ES3Reader_Read_TisMesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4_m4DD8C0823DA528C84509E776081834CEAC71FE88_RuntimeMethod_var, L_92);
		ShapeModule_set_mesh_m75450DE287A91452C63021F100D8B6A65A921CE1((&V_0), L_93, NULL);
		// break;
		goto IL_0426;
	}

IL_039e:
	{
		// instance.meshRenderer = reader.Read<UnityEngine.MeshRenderer>();
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_94 = ___reader0;
		NullCheck(L_94);
		MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE* L_95;
		L_95 = GenericVirtualFuncInvoker0< MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE* >::Invoke(ES3Reader_Read_TisMeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE_mADE66001251FAEAB39EE97DA447D0A80EAAB85C4_RuntimeMethod_var, L_94);
		ShapeModule_set_meshRenderer_m25111B1DC9F173FE054264094DB19564D375D1D6((&V_0), L_95, NULL);
		// break;
		goto IL_0426;
	}

IL_03ad:
	{
		// instance.skinnedMeshRenderer = reader.Read<UnityEngine.SkinnedMeshRenderer>();
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_96 = ___reader0;
		NullCheck(L_96);
		SkinnedMeshRenderer_t020C4E8648EA1C4C6BA5C41502919B387E7E1C2E* L_97;
		L_97 = GenericVirtualFuncInvoker0< SkinnedMeshRenderer_t020C4E8648EA1C4C6BA5C41502919B387E7E1C2E* >::Invoke(ES3Reader_Read_TisSkinnedMeshRenderer_t020C4E8648EA1C4C6BA5C41502919B387E7E1C2E_m9E77EF921E4ACFCE425D24538209CF592968463E_RuntimeMethod_var, L_96);
		ShapeModule_set_skinnedMeshRenderer_mB3B9D58C4A9D21F990EC2000D38B5E35C7FF5807((&V_0), L_97, NULL);
		// break;
		goto IL_0426;
	}

IL_03bc:
	{
		// instance.useMeshMaterialIndex = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_98 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_99 = ((ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_98);
		bool L_100;
		L_100 = GenericVirtualFuncInvoker1< bool, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mFFB70EE53D8CD0255A4E599780F62A3EB1520E83_RuntimeMethod_var, L_98, L_99);
		ShapeModule_set_useMeshMaterialIndex_m48CE9CB5BA8CAF93D4C92975B826A7BA8459B838((&V_0), L_100, NULL);
		// break;
		goto IL_0426;
	}

IL_03d0:
	{
		// instance.meshMaterialIndex = reader.Read<System.Int32>(ES3Type_int.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_101 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_102 = ((ES3Type_int_t05A5E7A96442F23CE33E24A71CD349372A70E0C3_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_int_t05A5E7A96442F23CE33E24A71CD349372A70E0C3_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_101);
		int32_t L_103;
		L_103 = GenericVirtualFuncInvoker1< int32_t, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mEFCC4D52DD5B822D3561A53591AE11CDB25CDB6F_RuntimeMethod_var, L_101, L_102);
		ShapeModule_set_meshMaterialIndex_mC72EF43FC31A137D1247E748E89FE0FF5FB2C29F((&V_0), L_103, NULL);
		// break;
		goto IL_0426;
	}

IL_03e4:
	{
		// instance.useMeshColors = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_104 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_105 = ((ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_104);
		bool L_106;
		L_106 = GenericVirtualFuncInvoker1< bool, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mFFB70EE53D8CD0255A4E599780F62A3EB1520E83_RuntimeMethod_var, L_104, L_105);
		ShapeModule_set_useMeshColors_m2B12B03E04E2ACEE2AE68B697F462232D42D6C6E((&V_0), L_106, NULL);
		// break;
		goto IL_0426;
	}

IL_03f8:
	{
		// instance.normalOffset = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_107 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_108 = ((ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_107);
		float L_109;
		L_109 = GenericVirtualFuncInvoker1< float, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mA86928BC888E342D2C2644535E3399952F5077ED_RuntimeMethod_var, L_107, L_108);
		ShapeModule_set_normalOffset_m24453DEF085D96323A09DEBD134283B7F23C263F((&V_0), L_109, NULL);
		// break;
		goto IL_0426;
	}

IL_040c:
	{
		// instance.arc = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_110 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_111 = ((ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_110);
		float L_112;
		L_112 = GenericVirtualFuncInvoker1< float, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mA86928BC888E342D2C2644535E3399952F5077ED_RuntimeMethod_var, L_110, L_111);
		ShapeModule_set_arc_mE9EF87E2AA959143B466CD55B7DAA65FBE155D1F((&V_0), L_112, NULL);
		// break;
		goto IL_0426;
	}

IL_0420:
	{
		// reader.Skip();
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_113 = ___reader0;
		NullCheck(L_113);
		VirtualActionInvoker0::Invoke(41 /* System.Void ES3Reader::Skip() */, L_113);
	}

IL_0426:
	{
		// while((propertyName = reader.ReadPropertyName()) != null)
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_114 = ___reader0;
		NullCheck(L_114);
		String_t* L_115;
		L_115 = VirtualFuncInvoker0< String_t* >::Invoke(21 /* System.String ES3Reader::ReadPropertyName() */, L_114);
		String_t* L_116 = L_115;
		V_1 = L_116;
		if (L_116)
		{
			goto IL_000c;
		}
	}
	{
		// }
		return;
	}
}
// System.Void ES3Types.ES3Type_ShapeModule::ReadInto<UnityEngine.ParticleSystem/RotationOverLifetimeModule>(ES3Reader,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ES3Type_ShapeModule_ReadInto_TisRotationOverLifetimeModule_tEE08858451167B6DDE6DD36FDCF11E74C77D79E6_m1B7716BA061AE3BB0CDA53D49EDFA655D824E56C_gshared (ES3Type_ShapeModule_t2A98821A3CBBB891C72216EA1D86C9579DFD70B7* __this, ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* ___reader0, RuntimeObject* ___obj1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mFFB70EE53D8CD0255A4E599780F62A3EB1520E83_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mEFCC4D52DD5B822D3561A53591AE11CDB25CDB6F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisMeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE_mADE66001251FAEAB39EE97DA447D0A80EAAB85C4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisMesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4_m4DD8C0823DA528C84509E776081834CEAC71FE88_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisParticleSystemMeshShapeType_t260D7CAA6014D0ACE2BCFE0BC588E1ADE3AF98E5_m2E1596CACABC5B7BB194A74A92C1E5627B3DB9D0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisParticleSystemShapeType_tADE62D07EDA71578326A03B50871391EE01F73BB_m3423F2435F483F46ABB4C8EAD9B78CD03D2742FB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mA86928BC888E342D2C2644535E3399952F5077ED_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisSkinnedMeshRenderer_t020C4E8648EA1C4C6BA5C41502919B387E7E1C2E_m9E77EF921E4ACFCE425D24538209CF592968463E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_m41744F4EDB47642D9EF02C774ADD5EADDE749262_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_Vector3_t29E9EC31EED86489FBD8A22FBD317F5BD5C3A3E9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_int_t05A5E7A96442F23CE33E24A71CD349372A70E0C3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ShapeModule_tAA38A0C5305DF2F9D96F89D4B8F762E2D034D8B2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral01837E2252AC8026A5EA3567A663017A662FBB70);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1228466552C1791B2019A329AFE94665D441168A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral60E56797D122AE71D3774956F66C6EEB9EA22C05);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6686C366F645244186604A3DA4B9A58012A85F1B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral82BECCAD895076775062861CDB46AADEF913D969);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8C9F18A4F030B96447955FBBA1A99FFC43B5D8E0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8E54BB51E569CB6A8D3C45D8AEF883A1559C1C0E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral91811EE149061D28B38320E2430CE8888AD6398B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBD49F93A7BC78A69E385CEC0E78F434BD2845A17);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCA1B66E295BD92E9FD3B6C708F09CA69A50BEFD1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE8744A8B8BD390EB66CA0CAE2376C973E6904FFB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEB0A157666700D8227FD4B66A26FDC02035E89BF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralED1F119527A0BCA45125EF8E0F719985DA86C0E1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF66E9083C67855AB6EBB4B74342E385A72AACE32);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF9BE17D634D1B07BCDCDA77A87710C946D81307B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFA5EC7168E9633DAAEAA255ECB55030EA60F064F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFC341A1966AF28A9A7A26EDFB78ABBF7DE4D0E1F);
		s_Il2CppMethodInitialized = true;
	}
	ShapeModule_tAA38A0C5305DF2F9D96F89D4B8F762E2D034D8B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	uint32_t V_2 = 0;
	{
		// var instance = (UnityEngine.ParticleSystem.ShapeModule)obj;
		RuntimeObject* L_0 = ___obj1;
		V_0 = ((*(ShapeModule_tAA38A0C5305DF2F9D96F89D4B8F762E2D034D8B2*)((ShapeModule_tAA38A0C5305DF2F9D96F89D4B8F762E2D034D8B2*)(ShapeModule_tAA38A0C5305DF2F9D96F89D4B8F762E2D034D8B2*)UnBox(L_0, ShapeModule_tAA38A0C5305DF2F9D96F89D4B8F762E2D034D8B2_il2cpp_TypeInfo_var))));
		goto IL_0426;
	}

IL_000c:
	{
		String_t* L_1 = V_1;
		uint32_t L_2;
		L_2 = U3CPrivateImplementationDetailsU3E_ComputeStringHash_m9E43873DE0DF480D27EC1C2AA3C09E74EA77F75D(L_1, NULL);
		V_2 = L_2;
		uint32_t L_3 = V_2;
		if ((!(((uint32_t)L_3) <= ((uint32_t)((int32_t)-2104025999)))))
		{
			goto IL_00ad;
		}
	}
	{
		uint32_t L_4 = V_2;
		if ((!(((uint32_t)L_4) <= ((uint32_t)((int32_t)666576729)))))
		{
			goto IL_0064;
		}
	}
	{
		uint32_t L_5 = V_2;
		if ((!(((uint32_t)L_5) <= ((uint32_t)((int32_t)49525662)))))
		{
			goto IL_0049;
		}
	}
	{
		uint32_t L_6 = V_2;
		if ((((int32_t)L_6) == ((int32_t)((int32_t)24602224))))
		{
			goto IL_0247;
		}
	}
	{
		uint32_t L_7 = V_2;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)49525662))))
		{
			goto IL_0136;
		}
	}
	{
		goto IL_0420;
	}

IL_0049:
	{
		uint32_t L_8 = V_2;
		if ((((int32_t)L_8) == ((int32_t)((int32_t)230313139))))
		{
			goto IL_019f;
		}
	}
	{
		uint32_t L_9 = V_2;
		if ((((int32_t)L_9) == ((int32_t)((int32_t)666576729))))
		{
			goto IL_01f3;
		}
	}
	{
		goto IL_0420;
	}

IL_0064:
	{
		uint32_t L_10 = V_2;
		if ((!(((uint32_t)L_10) <= ((uint32_t)((int32_t)955488309)))))
		{
			goto IL_0087;
		}
	}
	{
		uint32_t L_11 = V_2;
		if ((((int32_t)L_11) == ((int32_t)((int32_t)923624301))))
		{
			goto IL_0232;
		}
	}
	{
		uint32_t L_12 = V_2;
		if ((((int32_t)L_12) == ((int32_t)((int32_t)955488309))))
		{
			goto IL_0286;
		}
	}
	{
		goto IL_0420;
	}

IL_0087:
	{
		uint32_t L_13 = V_2;
		if ((((int32_t)L_13) == ((int32_t)((int32_t)980363995))))
		{
			goto IL_029b;
		}
	}
	{
		uint32_t L_14 = V_2;
		if ((((int32_t)L_14) == ((int32_t)((int32_t)985988853))))
		{
			goto IL_0175;
		}
	}
	{
		uint32_t L_15 = V_2;
		if ((((int32_t)L_15) == ((int32_t)((int32_t)-2104025999))))
		{
			goto IL_01de;
		}
	}
	{
		goto IL_0420;
	}

IL_00ad:
	{
		uint32_t L_16 = V_2;
		if ((!(((uint32_t)L_16) <= ((uint32_t)((int32_t)-1473810612)))))
		{
			goto IL_00f0;
		}
	}
	{
		uint32_t L_17 = V_2;
		if ((!(((uint32_t)L_17) <= ((uint32_t)((int32_t)-1726928010)))))
		{
			goto IL_00d5;
		}
	}
	{
		uint32_t L_18 = V_2;
		if ((((int32_t)L_18) == ((int32_t)((int32_t)-2083506667))))
		{
			goto IL_01c9;
		}
	}
	{
		uint32_t L_19 = V_2;
		if ((((int32_t)L_19) == ((int32_t)((int32_t)-1726928010))))
		{
			goto IL_014b;
		}
	}
	{
		goto IL_0420;
	}

IL_00d5:
	{
		uint32_t L_20 = V_2;
		if ((((int32_t)L_20) == ((int32_t)((int32_t)-1593786692))))
		{
			goto IL_0208;
		}
	}
	{
		uint32_t L_21 = V_2;
		if ((((int32_t)L_21) == ((int32_t)((int32_t)-1473810612))))
		{
			goto IL_018a;
		}
	}
	{
		goto IL_0420;
	}

IL_00f0:
	{
		uint32_t L_22 = V_2;
		if ((!(((uint32_t)L_22) <= ((uint32_t)((int32_t)-1386986472)))))
		{
			goto IL_0110;
		}
	}
	{
		uint32_t L_23 = V_2;
		if ((((int32_t)L_23) == ((int32_t)((int32_t)-1412039661))))
		{
			goto IL_0160;
		}
	}
	{
		uint32_t L_24 = V_2;
		if ((((int32_t)L_24) == ((int32_t)((int32_t)-1386986472))))
		{
			goto IL_01b4;
		}
	}
	{
		goto IL_0420;
	}

IL_0110:
	{
		uint32_t L_25 = V_2;
		if ((((int32_t)L_25) == ((int32_t)((int32_t)-584064197))))
		{
			goto IL_021d;
		}
	}
	{
		uint32_t L_26 = V_2;
		if ((((int32_t)L_26) == ((int32_t)((int32_t)-473474755))))
		{
			goto IL_0271;
		}
	}
	{
		uint32_t L_27 = V_2;
		if ((((int32_t)L_27) == ((int32_t)((int32_t)-365686981))))
		{
			goto IL_025c;
		}
	}
	{
		goto IL_0420;
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
		goto IL_0420;
	}

IL_014b:
	{
		String_t* L_30 = V_1;
		bool L_31;
		L_31 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_30, _stringLiteral82BECCAD895076775062861CDB46AADEF913D969, NULL);
		if (L_31)
		{
			goto IL_02c7;
		}
	}
	{
		goto IL_0420;
	}

IL_0160:
	{
		String_t* L_32 = V_1;
		bool L_33;
		L_33 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_32, _stringLiteral1228466552C1791B2019A329AFE94665D441168A, NULL);
		if (L_33)
		{
			goto IL_02d9;
		}
	}
	{
		goto IL_0420;
	}

IL_0175:
	{
		String_t* L_34 = V_1;
		bool L_35;
		L_35 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_34, _stringLiteralBD49F93A7BC78A69E385CEC0E78F434BD2845A17, NULL);
		if (L_35)
		{
			goto IL_02f0;
		}
	}
	{
		goto IL_0420;
	}

IL_018a:
	{
		String_t* L_36 = V_1;
		bool L_37;
		L_37 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_36, _stringLiteralED1F119527A0BCA45125EF8E0F719985DA86C0E1, NULL);
		if (L_37)
		{
			goto IL_0307;
		}
	}
	{
		goto IL_0420;
	}

IL_019f:
	{
		String_t* L_38 = V_1;
		bool L_39;
		L_39 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_38, _stringLiteral8C9F18A4F030B96447955FBBA1A99FFC43B5D8E0, NULL);
		if (L_39)
		{
			goto IL_031e;
		}
	}
	{
		goto IL_0420;
	}

IL_01b4:
	{
		String_t* L_40 = V_1;
		bool L_41;
		L_41 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_40, _stringLiteralFC341A1966AF28A9A7A26EDFB78ABBF7DE4D0E1F, NULL);
		if (L_41)
		{
			goto IL_0335;
		}
	}
	{
		goto IL_0420;
	}

IL_01c9:
	{
		String_t* L_42 = V_1;
		bool L_43;
		L_43 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_42, _stringLiteralE8744A8B8BD390EB66CA0CAE2376C973E6904FFB, NULL);
		if (L_43)
		{
			goto IL_034c;
		}
	}
	{
		goto IL_0420;
	}

IL_01de:
	{
		String_t* L_44 = V_1;
		bool L_45;
		L_45 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_44, _stringLiteralF9BE17D634D1B07BCDCDA77A87710C946D81307B, NULL);
		if (L_45)
		{
			goto IL_0363;
		}
	}
	{
		goto IL_0420;
	}

IL_01f3:
	{
		String_t* L_46 = V_1;
		bool L_47;
		L_47 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_46, _stringLiteralFA5EC7168E9633DAAEAA255ECB55030EA60F064F, NULL);
		if (L_47)
		{
			goto IL_037a;
		}
	}
	{
		goto IL_0420;
	}

IL_0208:
	{
		String_t* L_48 = V_1;
		bool L_49;
		L_49 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_48, _stringLiteralEB0A157666700D8227FD4B66A26FDC02035E89BF, NULL);
		if (L_49)
		{
			goto IL_038c;
		}
	}
	{
		goto IL_0420;
	}

IL_021d:
	{
		String_t* L_50 = V_1;
		bool L_51;
		L_51 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_50, _stringLiteral8E54BB51E569CB6A8D3C45D8AEF883A1559C1C0E, NULL);
		if (L_51)
		{
			goto IL_039e;
		}
	}
	{
		goto IL_0420;
	}

IL_0232:
	{
		String_t* L_52 = V_1;
		bool L_53;
		L_53 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_52, _stringLiteral60E56797D122AE71D3774956F66C6EEB9EA22C05, NULL);
		if (L_53)
		{
			goto IL_03ad;
		}
	}
	{
		goto IL_0420;
	}

IL_0247:
	{
		String_t* L_54 = V_1;
		bool L_55;
		L_55 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_54, _stringLiteral01837E2252AC8026A5EA3567A663017A662FBB70, NULL);
		if (L_55)
		{
			goto IL_03bc;
		}
	}
	{
		goto IL_0420;
	}

IL_025c:
	{
		String_t* L_56 = V_1;
		bool L_57;
		L_57 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_56, _stringLiteralF66E9083C67855AB6EBB4B74342E385A72AACE32, NULL);
		if (L_57)
		{
			goto IL_03d0;
		}
	}
	{
		goto IL_0420;
	}

IL_0271:
	{
		String_t* L_58 = V_1;
		bool L_59;
		L_59 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_58, _stringLiteral91811EE149061D28B38320E2430CE8888AD6398B, NULL);
		if (L_59)
		{
			goto IL_03e4;
		}
	}
	{
		goto IL_0420;
	}

IL_0286:
	{
		String_t* L_60 = V_1;
		bool L_61;
		L_61 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_60, _stringLiteral6686C366F645244186604A3DA4B9A58012A85F1B, NULL);
		if (L_61)
		{
			goto IL_03f8;
		}
	}
	{
		goto IL_0420;
	}

IL_029b:
	{
		String_t* L_62 = V_1;
		bool L_63;
		L_63 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_62, _stringLiteralCA1B66E295BD92E9FD3B6C708F09CA69A50BEFD1, NULL);
		if (L_63)
		{
			goto IL_040c;
		}
	}
	{
		goto IL_0420;
	}

IL_02b0:
	{
		// instance.enabled = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_64 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_65 = ((ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_64);
		bool L_66;
		L_66 = GenericVirtualFuncInvoker1< bool, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mFFB70EE53D8CD0255A4E599780F62A3EB1520E83_RuntimeMethod_var, L_64, L_65);
		ShapeModule_set_enabled_m6BA02351FEED67A82664135B922DDA66D71DF399((&V_0), L_66, NULL);
		// break;
		goto IL_0426;
	}

IL_02c7:
	{
		// instance.shapeType = reader.Read<UnityEngine.ParticleSystemShapeType>();
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_67 = ___reader0;
		NullCheck(L_67);
		int32_t L_68;
		L_68 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisParticleSystemShapeType_tADE62D07EDA71578326A03B50871391EE01F73BB_m3423F2435F483F46ABB4C8EAD9B78CD03D2742FB_RuntimeMethod_var, L_67);
		ShapeModule_set_shapeType_m4B5D1EA91037AD7065FE1D23652D919FED4D6D7F((&V_0), L_68, NULL);
		// break;
		goto IL_0426;
	}

IL_02d9:
	{
		// instance.randomDirectionAmount = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_69 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_70 = ((ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_69);
		float L_71;
		L_71 = GenericVirtualFuncInvoker1< float, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mA86928BC888E342D2C2644535E3399952F5077ED_RuntimeMethod_var, L_69, L_70);
		ShapeModule_set_randomDirectionAmount_m398CEE6D93207797559A80CE49A0C4138C96D0B3((&V_0), L_71, NULL);
		// break;
		goto IL_0426;
	}

IL_02f0:
	{
		// instance.sphericalDirectionAmount = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_72 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_73 = ((ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_72);
		float L_74;
		L_74 = GenericVirtualFuncInvoker1< float, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mA86928BC888E342D2C2644535E3399952F5077ED_RuntimeMethod_var, L_72, L_73);
		ShapeModule_set_sphericalDirectionAmount_m395143D474E51CE6AAF81C9DB84028A16B9BCAAB((&V_0), L_74, NULL);
		// break;
		goto IL_0426;
	}

IL_0307:
	{
		// instance.alignToDirection = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_75 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_76 = ((ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_75);
		bool L_77;
		L_77 = GenericVirtualFuncInvoker1< bool, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mFFB70EE53D8CD0255A4E599780F62A3EB1520E83_RuntimeMethod_var, L_75, L_76);
		ShapeModule_set_alignToDirection_mD632613E0E343654E6569F22BC9EFBB9247AC581((&V_0), L_77, NULL);
		// break;
		goto IL_0426;
	}

IL_031e:
	{
		// instance.radius = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_78 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_79 = ((ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_78);
		float L_80;
		L_80 = GenericVirtualFuncInvoker1< float, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mA86928BC888E342D2C2644535E3399952F5077ED_RuntimeMethod_var, L_78, L_79);
		ShapeModule_set_radius_m37F79E13EB60FA39EAE36B49DAC4AC880416E89C((&V_0), L_80, NULL);
		// break;
		goto IL_0426;
	}

IL_0335:
	{
		// instance.angle = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_81 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_82 = ((ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_81);
		float L_83;
		L_83 = GenericVirtualFuncInvoker1< float, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mA86928BC888E342D2C2644535E3399952F5077ED_RuntimeMethod_var, L_81, L_82);
		ShapeModule_set_angle_m62F5F037CD1DF55172B2D64DBF8271F9F917133A((&V_0), L_83, NULL);
		// break;
		goto IL_0426;
	}

IL_034c:
	{
		// instance.length = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_84 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_85 = ((ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_84);
		float L_86;
		L_86 = GenericVirtualFuncInvoker1< float, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mA86928BC888E342D2C2644535E3399952F5077ED_RuntimeMethod_var, L_84, L_85);
		ShapeModule_set_length_mD38341192A10095F9D0217993D410939F90CE621((&V_0), L_86, NULL);
		// break;
		goto IL_0426;
	}

IL_0363:
	{
		// instance.scale = reader.Read<UnityEngine.Vector3>(ES3Type_Vector3.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_87 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_88 = ((ES3Type_Vector3_t29E9EC31EED86489FBD8A22FBD317F5BD5C3A3E9_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Vector3_t29E9EC31EED86489FBD8A22FBD317F5BD5C3A3E9_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_87);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_89;
		L_89 = GenericVirtualFuncInvoker1< Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_m41744F4EDB47642D9EF02C774ADD5EADDE749262_RuntimeMethod_var, L_87, L_88);
		ShapeModule_set_scale_mDA84B80016FDA6B6EE181B108C3E59A2FFF9143D((&V_0), L_89, NULL);
		// break;
		goto IL_0426;
	}

IL_037a:
	{
		// instance.meshShapeType = reader.Read<UnityEngine.ParticleSystemMeshShapeType>();
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_90 = ___reader0;
		NullCheck(L_90);
		int32_t L_91;
		L_91 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisParticleSystemMeshShapeType_t260D7CAA6014D0ACE2BCFE0BC588E1ADE3AF98E5_m2E1596CACABC5B7BB194A74A92C1E5627B3DB9D0_RuntimeMethod_var, L_90);
		ShapeModule_set_meshShapeType_m335ED6F02244A07F8557E900D9935A4220AD23D0((&V_0), L_91, NULL);
		// break;
		goto IL_0426;
	}

IL_038c:
	{
		// instance.mesh = reader.Read<UnityEngine.Mesh>();
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_92 = ___reader0;
		NullCheck(L_92);
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_93;
		L_93 = GenericVirtualFuncInvoker0< Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* >::Invoke(ES3Reader_Read_TisMesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4_m4DD8C0823DA528C84509E776081834CEAC71FE88_RuntimeMethod_var, L_92);
		ShapeModule_set_mesh_m75450DE287A91452C63021F100D8B6A65A921CE1((&V_0), L_93, NULL);
		// break;
		goto IL_0426;
	}

IL_039e:
	{
		// instance.meshRenderer = reader.Read<UnityEngine.MeshRenderer>();
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_94 = ___reader0;
		NullCheck(L_94);
		MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE* L_95;
		L_95 = GenericVirtualFuncInvoker0< MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE* >::Invoke(ES3Reader_Read_TisMeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE_mADE66001251FAEAB39EE97DA447D0A80EAAB85C4_RuntimeMethod_var, L_94);
		ShapeModule_set_meshRenderer_m25111B1DC9F173FE054264094DB19564D375D1D6((&V_0), L_95, NULL);
		// break;
		goto IL_0426;
	}

IL_03ad:
	{
		// instance.skinnedMeshRenderer = reader.Read<UnityEngine.SkinnedMeshRenderer>();
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_96 = ___reader0;
		NullCheck(L_96);
		SkinnedMeshRenderer_t020C4E8648EA1C4C6BA5C41502919B387E7E1C2E* L_97;
		L_97 = GenericVirtualFuncInvoker0< SkinnedMeshRenderer_t020C4E8648EA1C4C6BA5C41502919B387E7E1C2E* >::Invoke(ES3Reader_Read_TisSkinnedMeshRenderer_t020C4E8648EA1C4C6BA5C41502919B387E7E1C2E_m9E77EF921E4ACFCE425D24538209CF592968463E_RuntimeMethod_var, L_96);
		ShapeModule_set_skinnedMeshRenderer_mB3B9D58C4A9D21F990EC2000D38B5E35C7FF5807((&V_0), L_97, NULL);
		// break;
		goto IL_0426;
	}

IL_03bc:
	{
		// instance.useMeshMaterialIndex = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_98 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_99 = ((ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_98);
		bool L_100;
		L_100 = GenericVirtualFuncInvoker1< bool, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mFFB70EE53D8CD0255A4E599780F62A3EB1520E83_RuntimeMethod_var, L_98, L_99);
		ShapeModule_set_useMeshMaterialIndex_m48CE9CB5BA8CAF93D4C92975B826A7BA8459B838((&V_0), L_100, NULL);
		// break;
		goto IL_0426;
	}

IL_03d0:
	{
		// instance.meshMaterialIndex = reader.Read<System.Int32>(ES3Type_int.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_101 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_102 = ((ES3Type_int_t05A5E7A96442F23CE33E24A71CD349372A70E0C3_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_int_t05A5E7A96442F23CE33E24A71CD349372A70E0C3_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_101);
		int32_t L_103;
		L_103 = GenericVirtualFuncInvoker1< int32_t, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mEFCC4D52DD5B822D3561A53591AE11CDB25CDB6F_RuntimeMethod_var, L_101, L_102);
		ShapeModule_set_meshMaterialIndex_mC72EF43FC31A137D1247E748E89FE0FF5FB2C29F((&V_0), L_103, NULL);
		// break;
		goto IL_0426;
	}

IL_03e4:
	{
		// instance.useMeshColors = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_104 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_105 = ((ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_104);
		bool L_106;
		L_106 = GenericVirtualFuncInvoker1< bool, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mFFB70EE53D8CD0255A4E599780F62A3EB1520E83_RuntimeMethod_var, L_104, L_105);
		ShapeModule_set_useMeshColors_m2B12B03E04E2ACEE2AE68B697F462232D42D6C6E((&V_0), L_106, NULL);
		// break;
		goto IL_0426;
	}

IL_03f8:
	{
		// instance.normalOffset = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_107 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_108 = ((ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_107);
		float L_109;
		L_109 = GenericVirtualFuncInvoker1< float, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mA86928BC888E342D2C2644535E3399952F5077ED_RuntimeMethod_var, L_107, L_108);
		ShapeModule_set_normalOffset_m24453DEF085D96323A09DEBD134283B7F23C263F((&V_0), L_109, NULL);
		// break;
		goto IL_0426;
	}

IL_040c:
	{
		// instance.arc = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_110 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_111 = ((ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_110);
		float L_112;
		L_112 = GenericVirtualFuncInvoker1< float, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mA86928BC888E342D2C2644535E3399952F5077ED_RuntimeMethod_var, L_110, L_111);
		ShapeModule_set_arc_mE9EF87E2AA959143B466CD55B7DAA65FBE155D1F((&V_0), L_112, NULL);
		// break;
		goto IL_0426;
	}

IL_0420:
	{
		// reader.Skip();
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_113 = ___reader0;
		NullCheck(L_113);
		VirtualActionInvoker0::Invoke(41 /* System.Void ES3Reader::Skip() */, L_113);
	}

IL_0426:
	{
		// while((propertyName = reader.ReadPropertyName()) != null)
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_114 = ___reader0;
		NullCheck(L_114);
		String_t* L_115;
		L_115 = VirtualFuncInvoker0< String_t* >::Invoke(21 /* System.String ES3Reader::ReadPropertyName() */, L_114);
		String_t* L_116 = L_115;
		V_1 = L_116;
		if (L_116)
		{
			goto IL_000c;
		}
	}
	{
		// }
		return;
	}
}
// System.Void ES3Types.ES3Type_ShapeModule::ReadInto<UnityEngine.ParticleSystem/SubEmittersModule>(ES3Reader,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ES3Type_ShapeModule_ReadInto_TisSubEmittersModule_t94F5AD231EAFB50A16E697186A630B07BF8B949B_m33C5102F4CD9E75A2A00577E502F6227BF120D1F_gshared (ES3Type_ShapeModule_t2A98821A3CBBB891C72216EA1D86C9579DFD70B7* __this, ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* ___reader0, RuntimeObject* ___obj1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mFFB70EE53D8CD0255A4E599780F62A3EB1520E83_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mEFCC4D52DD5B822D3561A53591AE11CDB25CDB6F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisMeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE_mADE66001251FAEAB39EE97DA447D0A80EAAB85C4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisMesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4_m4DD8C0823DA528C84509E776081834CEAC71FE88_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisParticleSystemMeshShapeType_t260D7CAA6014D0ACE2BCFE0BC588E1ADE3AF98E5_m2E1596CACABC5B7BB194A74A92C1E5627B3DB9D0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisParticleSystemShapeType_tADE62D07EDA71578326A03B50871391EE01F73BB_m3423F2435F483F46ABB4C8EAD9B78CD03D2742FB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mA86928BC888E342D2C2644535E3399952F5077ED_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisSkinnedMeshRenderer_t020C4E8648EA1C4C6BA5C41502919B387E7E1C2E_m9E77EF921E4ACFCE425D24538209CF592968463E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_m41744F4EDB47642D9EF02C774ADD5EADDE749262_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_Vector3_t29E9EC31EED86489FBD8A22FBD317F5BD5C3A3E9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_int_t05A5E7A96442F23CE33E24A71CD349372A70E0C3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ShapeModule_tAA38A0C5305DF2F9D96F89D4B8F762E2D034D8B2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral01837E2252AC8026A5EA3567A663017A662FBB70);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1228466552C1791B2019A329AFE94665D441168A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral60E56797D122AE71D3774956F66C6EEB9EA22C05);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6686C366F645244186604A3DA4B9A58012A85F1B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral82BECCAD895076775062861CDB46AADEF913D969);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8C9F18A4F030B96447955FBBA1A99FFC43B5D8E0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8E54BB51E569CB6A8D3C45D8AEF883A1559C1C0E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral91811EE149061D28B38320E2430CE8888AD6398B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBD49F93A7BC78A69E385CEC0E78F434BD2845A17);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCA1B66E295BD92E9FD3B6C708F09CA69A50BEFD1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE8744A8B8BD390EB66CA0CAE2376C973E6904FFB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEB0A157666700D8227FD4B66A26FDC02035E89BF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralED1F119527A0BCA45125EF8E0F719985DA86C0E1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF66E9083C67855AB6EBB4B74342E385A72AACE32);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF9BE17D634D1B07BCDCDA77A87710C946D81307B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFA5EC7168E9633DAAEAA255ECB55030EA60F064F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFC341A1966AF28A9A7A26EDFB78ABBF7DE4D0E1F);
		s_Il2CppMethodInitialized = true;
	}
	ShapeModule_tAA38A0C5305DF2F9D96F89D4B8F762E2D034D8B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	uint32_t V_2 = 0;
	{
		// var instance = (UnityEngine.ParticleSystem.ShapeModule)obj;
		RuntimeObject* L_0 = ___obj1;
		V_0 = ((*(ShapeModule_tAA38A0C5305DF2F9D96F89D4B8F762E2D034D8B2*)((ShapeModule_tAA38A0C5305DF2F9D96F89D4B8F762E2D034D8B2*)(ShapeModule_tAA38A0C5305DF2F9D96F89D4B8F762E2D034D8B2*)UnBox(L_0, ShapeModule_tAA38A0C5305DF2F9D96F89D4B8F762E2D034D8B2_il2cpp_TypeInfo_var))));
		goto IL_0426;
	}

IL_000c:
	{
		String_t* L_1 = V_1;
		uint32_t L_2;
		L_2 = U3CPrivateImplementationDetailsU3E_ComputeStringHash_m9E43873DE0DF480D27EC1C2AA3C09E74EA77F75D(L_1, NULL);
		V_2 = L_2;
		uint32_t L_3 = V_2;
		if ((!(((uint32_t)L_3) <= ((uint32_t)((int32_t)-2104025999)))))
		{
			goto IL_00ad;
		}
	}
	{
		uint32_t L_4 = V_2;
		if ((!(((uint32_t)L_4) <= ((uint32_t)((int32_t)666576729)))))
		{
			goto IL_0064;
		}
	}
	{
		uint32_t L_5 = V_2;
		if ((!(((uint32_t)L_5) <= ((uint32_t)((int32_t)49525662)))))
		{
			goto IL_0049;
		}
	}
	{
		uint32_t L_6 = V_2;
		if ((((int32_t)L_6) == ((int32_t)((int32_t)24602224))))
		{
			goto IL_0247;
		}
	}
	{
		uint32_t L_7 = V_2;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)49525662))))
		{
			goto IL_0136;
		}
	}
	{
		goto IL_0420;
	}

IL_0049:
	{
		uint32_t L_8 = V_2;
		if ((((int32_t)L_8) == ((int32_t)((int32_t)230313139))))
		{
			goto IL_019f;
		}
	}
	{
		uint32_t L_9 = V_2;
		if ((((int32_t)L_9) == ((int32_t)((int32_t)666576729))))
		{
			goto IL_01f3;
		}
	}
	{
		goto IL_0420;
	}

IL_0064:
	{
		uint32_t L_10 = V_2;
		if ((!(((uint32_t)L_10) <= ((uint32_t)((int32_t)955488309)))))
		{
			goto IL_0087;
		}
	}
	{
		uint32_t L_11 = V_2;
		if ((((int32_t)L_11) == ((int32_t)((int32_t)923624301))))
		{
			goto IL_0232;
		}
	}
	{
		uint32_t L_12 = V_2;
		if ((((int32_t)L_12) == ((int32_t)((int32_t)955488309))))
		{
			goto IL_0286;
		}
	}
	{
		goto IL_0420;
	}

IL_0087:
	{
		uint32_t L_13 = V_2;
		if ((((int32_t)L_13) == ((int32_t)((int32_t)980363995))))
		{
			goto IL_029b;
		}
	}
	{
		uint32_t L_14 = V_2;
		if ((((int32_t)L_14) == ((int32_t)((int32_t)985988853))))
		{
			goto IL_0175;
		}
	}
	{
		uint32_t L_15 = V_2;
		if ((((int32_t)L_15) == ((int32_t)((int32_t)-2104025999))))
		{
			goto IL_01de;
		}
	}
	{
		goto IL_0420;
	}

IL_00ad:
	{
		uint32_t L_16 = V_2;
		if ((!(((uint32_t)L_16) <= ((uint32_t)((int32_t)-1473810612)))))
		{
			goto IL_00f0;
		}
	}
	{
		uint32_t L_17 = V_2;
		if ((!(((uint32_t)L_17) <= ((uint32_t)((int32_t)-1726928010)))))
		{
			goto IL_00d5;
		}
	}
	{
		uint32_t L_18 = V_2;
		if ((((int32_t)L_18) == ((int32_t)((int32_t)-2083506667))))
		{
			goto IL_01c9;
		}
	}
	{
		uint32_t L_19 = V_2;
		if ((((int32_t)L_19) == ((int32_t)((int32_t)-1726928010))))
		{
			goto IL_014b;
		}
	}
	{
		goto IL_0420;
	}

IL_00d5:
	{
		uint32_t L_20 = V_2;
		if ((((int32_t)L_20) == ((int32_t)((int32_t)-1593786692))))
		{
			goto IL_0208;
		}
	}
	{
		uint32_t L_21 = V_2;
		if ((((int32_t)L_21) == ((int32_t)((int32_t)-1473810612))))
		{
			goto IL_018a;
		}
	}
	{
		goto IL_0420;
	}

IL_00f0:
	{
		uint32_t L_22 = V_2;
		if ((!(((uint32_t)L_22) <= ((uint32_t)((int32_t)-1386986472)))))
		{
			goto IL_0110;
		}
	}
	{
		uint32_t L_23 = V_2;
		if ((((int32_t)L_23) == ((int32_t)((int32_t)-1412039661))))
		{
			goto IL_0160;
		}
	}
	{
		uint32_t L_24 = V_2;
		if ((((int32_t)L_24) == ((int32_t)((int32_t)-1386986472))))
		{
			goto IL_01b4;
		}
	}
	{
		goto IL_0420;
	}

IL_0110:
	{
		uint32_t L_25 = V_2;
		if ((((int32_t)L_25) == ((int32_t)((int32_t)-584064197))))
		{
			goto IL_021d;
		}
	}
	{
		uint32_t L_26 = V_2;
		if ((((int32_t)L_26) == ((int32_t)((int32_t)-473474755))))
		{
			goto IL_0271;
		}
	}
	{
		uint32_t L_27 = V_2;
		if ((((int32_t)L_27) == ((int32_t)((int32_t)-365686981))))
		{
			goto IL_025c;
		}
	}
	{
		goto IL_0420;
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
		goto IL_0420;
	}

IL_014b:
	{
		String_t* L_30 = V_1;
		bool L_31;
		L_31 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_30, _stringLiteral82BECCAD895076775062861CDB46AADEF913D969, NULL);
		if (L_31)
		{
			goto IL_02c7;
		}
	}
	{
		goto IL_0420;
	}

IL_0160:
	{
		String_t* L_32 = V_1;
		bool L_33;
		L_33 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_32, _stringLiteral1228466552C1791B2019A329AFE94665D441168A, NULL);
		if (L_33)
		{
			goto IL_02d9;
		}
	}
	{
		goto IL_0420;
	}

IL_0175:
	{
		String_t* L_34 = V_1;
		bool L_35;
		L_35 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_34, _stringLiteralBD49F93A7BC78A69E385CEC0E78F434BD2845A17, NULL);
		if (L_35)
		{
			goto IL_02f0;
		}
	}
	{
		goto IL_0420;
	}

IL_018a:
	{
		String_t* L_36 = V_1;
		bool L_37;
		L_37 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_36, _stringLiteralED1F119527A0BCA45125EF8E0F719985DA86C0E1, NULL);
		if (L_37)
		{
			goto IL_0307;
		}
	}
	{
		goto IL_0420;
	}

IL_019f:
	{
		String_t* L_38 = V_1;
		bool L_39;
		L_39 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_38, _stringLiteral8C9F18A4F030B96447955FBBA1A99FFC43B5D8E0, NULL);
		if (L_39)
		{
			goto IL_031e;
		}
	}
	{
		goto IL_0420;
	}

IL_01b4:
	{
		String_t* L_40 = V_1;
		bool L_41;
		L_41 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_40, _stringLiteralFC341A1966AF28A9A7A26EDFB78ABBF7DE4D0E1F, NULL);
		if (L_41)
		{
			goto IL_0335;
		}
	}
	{
		goto IL_0420;
	}

IL_01c9:
	{
		String_t* L_42 = V_1;
		bool L_43;
		L_43 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_42, _stringLiteralE8744A8B8BD390EB66CA0CAE2376C973E6904FFB, NULL);
		if (L_43)
		{
			goto IL_034c;
		}
	}
	{
		goto IL_0420;
	}

IL_01de:
	{
		String_t* L_44 = V_1;
		bool L_45;
		L_45 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_44, _stringLiteralF9BE17D634D1B07BCDCDA77A87710C946D81307B, NULL);
		if (L_45)
		{
			goto IL_0363;
		}
	}
	{
		goto IL_0420;
	}

IL_01f3:
	{
		String_t* L_46 = V_1;
		bool L_47;
		L_47 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_46, _stringLiteralFA5EC7168E9633DAAEAA255ECB55030EA60F064F, NULL);
		if (L_47)
		{
			goto IL_037a;
		}
	}
	{
		goto IL_0420;
	}

IL_0208:
	{
		String_t* L_48 = V_1;
		bool L_49;
		L_49 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_48, _stringLiteralEB0A157666700D8227FD4B66A26FDC02035E89BF, NULL);
		if (L_49)
		{
			goto IL_038c;
		}
	}
	{
		goto IL_0420;
	}

IL_021d:
	{
		String_t* L_50 = V_1;
		bool L_51;
		L_51 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_50, _stringLiteral8E54BB51E569CB6A8D3C45D8AEF883A1559C1C0E, NULL);
		if (L_51)
		{
			goto IL_039e;
		}
	}
	{
		goto IL_0420;
	}

IL_0232:
	{
		String_t* L_52 = V_1;
		bool L_53;
		L_53 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_52, _stringLiteral60E56797D122AE71D3774956F66C6EEB9EA22C05, NULL);
		if (L_53)
		{
			goto IL_03ad;
		}
	}
	{
		goto IL_0420;
	}

IL_0247:
	{
		String_t* L_54 = V_1;
		bool L_55;
		L_55 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_54, _stringLiteral01837E2252AC8026A5EA3567A663017A662FBB70, NULL);
		if (L_55)
		{
			goto IL_03bc;
		}
	}
	{
		goto IL_0420;
	}

IL_025c:
	{
		String_t* L_56 = V_1;
		bool L_57;
		L_57 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_56, _stringLiteralF66E9083C67855AB6EBB4B74342E385A72AACE32, NULL);
		if (L_57)
		{
			goto IL_03d0;
		}
	}
	{
		goto IL_0420;
	}

IL_0271:
	{
		String_t* L_58 = V_1;
		bool L_59;
		L_59 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_58, _stringLiteral91811EE149061D28B38320E2430CE8888AD6398B, NULL);
		if (L_59)
		{
			goto IL_03e4;
		}
	}
	{
		goto IL_0420;
	}

IL_0286:
	{
		String_t* L_60 = V_1;
		bool L_61;
		L_61 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_60, _stringLiteral6686C366F645244186604A3DA4B9A58012A85F1B, NULL);
		if (L_61)
		{
			goto IL_03f8;
		}
	}
	{
		goto IL_0420;
	}

IL_029b:
	{
		String_t* L_62 = V_1;
		bool L_63;
		L_63 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_62, _stringLiteralCA1B66E295BD92E9FD3B6C708F09CA69A50BEFD1, NULL);
		if (L_63)
		{
			goto IL_040c;
		}
	}
	{
		goto IL_0420;
	}

IL_02b0:
	{
		// instance.enabled = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_64 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_65 = ((ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_64);
		bool L_66;
		L_66 = GenericVirtualFuncInvoker1< bool, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mFFB70EE53D8CD0255A4E599780F62A3EB1520E83_RuntimeMethod_var, L_64, L_65);
		ShapeModule_set_enabled_m6BA02351FEED67A82664135B922DDA66D71DF399((&V_0), L_66, NULL);
		// break;
		goto IL_0426;
	}

IL_02c7:
	{
		// instance.shapeType = reader.Read<UnityEngine.ParticleSystemShapeType>();
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_67 = ___reader0;
		NullCheck(L_67);
		int32_t L_68;
		L_68 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisParticleSystemShapeType_tADE62D07EDA71578326A03B50871391EE01F73BB_m3423F2435F483F46ABB4C8EAD9B78CD03D2742FB_RuntimeMethod_var, L_67);
		ShapeModule_set_shapeType_m4B5D1EA91037AD7065FE1D23652D919FED4D6D7F((&V_0), L_68, NULL);
		// break;
		goto IL_0426;
	}

IL_02d9:
	{
		// instance.randomDirectionAmount = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_69 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_70 = ((ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_69);
		float L_71;
		L_71 = GenericVirtualFuncInvoker1< float, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mA86928BC888E342D2C2644535E3399952F5077ED_RuntimeMethod_var, L_69, L_70);
		ShapeModule_set_randomDirectionAmount_m398CEE6D93207797559A80CE49A0C4138C96D0B3((&V_0), L_71, NULL);
		// break;
		goto IL_0426;
	}

IL_02f0:
	{
		// instance.sphericalDirectionAmount = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_72 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_73 = ((ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_72);
		float L_74;
		L_74 = GenericVirtualFuncInvoker1< float, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mA86928BC888E342D2C2644535E3399952F5077ED_RuntimeMethod_var, L_72, L_73);
		ShapeModule_set_sphericalDirectionAmount_m395143D474E51CE6AAF81C9DB84028A16B9BCAAB((&V_0), L_74, NULL);
		// break;
		goto IL_0426;
	}

IL_0307:
	{
		// instance.alignToDirection = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_75 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_76 = ((ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_75);
		bool L_77;
		L_77 = GenericVirtualFuncInvoker1< bool, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mFFB70EE53D8CD0255A4E599780F62A3EB1520E83_RuntimeMethod_var, L_75, L_76);
		ShapeModule_set_alignToDirection_mD632613E0E343654E6569F22BC9EFBB9247AC581((&V_0), L_77, NULL);
		// break;
		goto IL_0426;
	}

IL_031e:
	{
		// instance.radius = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_78 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_79 = ((ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_78);
		float L_80;
		L_80 = GenericVirtualFuncInvoker1< float, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mA86928BC888E342D2C2644535E3399952F5077ED_RuntimeMethod_var, L_78, L_79);
		ShapeModule_set_radius_m37F79E13EB60FA39EAE36B49DAC4AC880416E89C((&V_0), L_80, NULL);
		// break;
		goto IL_0426;
	}

IL_0335:
	{
		// instance.angle = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_81 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_82 = ((ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_81);
		float L_83;
		L_83 = GenericVirtualFuncInvoker1< float, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mA86928BC888E342D2C2644535E3399952F5077ED_RuntimeMethod_var, L_81, L_82);
		ShapeModule_set_angle_m62F5F037CD1DF55172B2D64DBF8271F9F917133A((&V_0), L_83, NULL);
		// break;
		goto IL_0426;
	}

IL_034c:
	{
		// instance.length = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_84 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_85 = ((ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_84);
		float L_86;
		L_86 = GenericVirtualFuncInvoker1< float, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mA86928BC888E342D2C2644535E3399952F5077ED_RuntimeMethod_var, L_84, L_85);
		ShapeModule_set_length_mD38341192A10095F9D0217993D410939F90CE621((&V_0), L_86, NULL);
		// break;
		goto IL_0426;
	}

IL_0363:
	{
		// instance.scale = reader.Read<UnityEngine.Vector3>(ES3Type_Vector3.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_87 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_88 = ((ES3Type_Vector3_t29E9EC31EED86489FBD8A22FBD317F5BD5C3A3E9_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Vector3_t29E9EC31EED86489FBD8A22FBD317F5BD5C3A3E9_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_87);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_89;
		L_89 = GenericVirtualFuncInvoker1< Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_m41744F4EDB47642D9EF02C774ADD5EADDE749262_RuntimeMethod_var, L_87, L_88);
		ShapeModule_set_scale_mDA84B80016FDA6B6EE181B108C3E59A2FFF9143D((&V_0), L_89, NULL);
		// break;
		goto IL_0426;
	}

IL_037a:
	{
		// instance.meshShapeType = reader.Read<UnityEngine.ParticleSystemMeshShapeType>();
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_90 = ___reader0;
		NullCheck(L_90);
		int32_t L_91;
		L_91 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisParticleSystemMeshShapeType_t260D7CAA6014D0ACE2BCFE0BC588E1ADE3AF98E5_m2E1596CACABC5B7BB194A74A92C1E5627B3DB9D0_RuntimeMethod_var, L_90);
		ShapeModule_set_meshShapeType_m335ED6F02244A07F8557E900D9935A4220AD23D0((&V_0), L_91, NULL);
		// break;
		goto IL_0426;
	}

IL_038c:
	{
		// instance.mesh = reader.Read<UnityEngine.Mesh>();
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_92 = ___reader0;
		NullCheck(L_92);
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_93;
		L_93 = GenericVirtualFuncInvoker0< Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* >::Invoke(ES3Reader_Read_TisMesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4_m4DD8C0823DA528C84509E776081834CEAC71FE88_RuntimeMethod_var, L_92);
		ShapeModule_set_mesh_m75450DE287A91452C63021F100D8B6A65A921CE1((&V_0), L_93, NULL);
		// break;
		goto IL_0426;
	}

IL_039e:
	{
		// instance.meshRenderer = reader.Read<UnityEngine.MeshRenderer>();
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_94 = ___reader0;
		NullCheck(L_94);
		MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE* L_95;
		L_95 = GenericVirtualFuncInvoker0< MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE* >::Invoke(ES3Reader_Read_TisMeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE_mADE66001251FAEAB39EE97DA447D0A80EAAB85C4_RuntimeMethod_var, L_94);
		ShapeModule_set_meshRenderer_m25111B1DC9F173FE054264094DB19564D375D1D6((&V_0), L_95, NULL);
		// break;
		goto IL_0426;
	}

IL_03ad:
	{
		// instance.skinnedMeshRenderer = reader.Read<UnityEngine.SkinnedMeshRenderer>();
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_96 = ___reader0;
		NullCheck(L_96);
		SkinnedMeshRenderer_t020C4E8648EA1C4C6BA5C41502919B387E7E1C2E* L_97;
		L_97 = GenericVirtualFuncInvoker0< SkinnedMeshRenderer_t020C4E8648EA1C4C6BA5C41502919B387E7E1C2E* >::Invoke(ES3Reader_Read_TisSkinnedMeshRenderer_t020C4E8648EA1C4C6BA5C41502919B387E7E1C2E_m9E77EF921E4ACFCE425D24538209CF592968463E_RuntimeMethod_var, L_96);
		ShapeModule_set_skinnedMeshRenderer_mB3B9D58C4A9D21F990EC2000D38B5E35C7FF5807((&V_0), L_97, NULL);
		// break;
		goto IL_0426;
	}

IL_03bc:
	{
		// instance.useMeshMaterialIndex = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_98 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_99 = ((ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_98);
		bool L_100;
		L_100 = GenericVirtualFuncInvoker1< bool, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mFFB70EE53D8CD0255A4E599780F62A3EB1520E83_RuntimeMethod_var, L_98, L_99);
		ShapeModule_set_useMeshMaterialIndex_m48CE9CB5BA8CAF93D4C92975B826A7BA8459B838((&V_0), L_100, NULL);
		// break;
		goto IL_0426;
	}

IL_03d0:
	{
		// instance.meshMaterialIndex = reader.Read<System.Int32>(ES3Type_int.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_101 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_102 = ((ES3Type_int_t05A5E7A96442F23CE33E24A71CD349372A70E0C3_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_int_t05A5E7A96442F23CE33E24A71CD349372A70E0C3_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_101);
		int32_t L_103;
		L_103 = GenericVirtualFuncInvoker1< int32_t, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mEFCC4D52DD5B822D3561A53591AE11CDB25CDB6F_RuntimeMethod_var, L_101, L_102);
		ShapeModule_set_meshMaterialIndex_mC72EF43FC31A137D1247E748E89FE0FF5FB2C29F((&V_0), L_103, NULL);
		// break;
		goto IL_0426;
	}

IL_03e4:
	{
		// instance.useMeshColors = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_104 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_105 = ((ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_104);
		bool L_106;
		L_106 = GenericVirtualFuncInvoker1< bool, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mFFB70EE53D8CD0255A4E599780F62A3EB1520E83_RuntimeMethod_var, L_104, L_105);
		ShapeModule_set_useMeshColors_m2B12B03E04E2ACEE2AE68B697F462232D42D6C6E((&V_0), L_106, NULL);
		// break;
		goto IL_0426;
	}

IL_03f8:
	{
		// instance.normalOffset = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_107 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_108 = ((ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_107);
		float L_109;
		L_109 = GenericVirtualFuncInvoker1< float, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mA86928BC888E342D2C2644535E3399952F5077ED_RuntimeMethod_var, L_107, L_108);
		ShapeModule_set_normalOffset_m24453DEF085D96323A09DEBD134283B7F23C263F((&V_0), L_109, NULL);
		// break;
		goto IL_0426;
	}

IL_040c:
	{
		// instance.arc = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_110 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_111 = ((ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_110);
		float L_112;
		L_112 = GenericVirtualFuncInvoker1< float, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mA86928BC888E342D2C2644535E3399952F5077ED_RuntimeMethod_var, L_110, L_111);
		ShapeModule_set_arc_mE9EF87E2AA959143B466CD55B7DAA65FBE155D1F((&V_0), L_112, NULL);
		// break;
		goto IL_0426;
	}

IL_0420:
	{
		// reader.Skip();
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_113 = ___reader0;
		NullCheck(L_113);
		VirtualActionInvoker0::Invoke(41 /* System.Void ES3Reader::Skip() */, L_113);
	}

IL_0426:
	{
		// while((propertyName = reader.ReadPropertyName()) != null)
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_114 = ___reader0;
		NullCheck(L_114);
		String_t* L_115;
		L_115 = VirtualFuncInvoker0< String_t* >::Invoke(21 /* System.String ES3Reader::ReadPropertyName() */, L_114);
		String_t* L_116 = L_115;
		V_1 = L_116;
		if (L_116)
		{
			goto IL_000c;
		}
	}
	{
		// }
		return;
	}
}
// System.Void ES3Types.ES3Type_ShapeModule::ReadInto<UnityEngine.ParticleSystem/TextureSheetAnimationModule>(ES3Reader,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ES3Type_ShapeModule_ReadInto_TisTextureSheetAnimationModule_tB53F451F252E24ACC3EF80D770DB4FBE1A13D1F6_m7E264920AAC5686C3DFE67552BC9D140F83AB557_gshared (ES3Type_ShapeModule_t2A98821A3CBBB891C72216EA1D86C9579DFD70B7* __this, ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* ___reader0, RuntimeObject* ___obj1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mFFB70EE53D8CD0255A4E599780F62A3EB1520E83_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mEFCC4D52DD5B822D3561A53591AE11CDB25CDB6F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisMeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE_mADE66001251FAEAB39EE97DA447D0A80EAAB85C4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisMesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4_m4DD8C0823DA528C84509E776081834CEAC71FE88_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisParticleSystemMeshShapeType_t260D7CAA6014D0ACE2BCFE0BC588E1ADE3AF98E5_m2E1596CACABC5B7BB194A74A92C1E5627B3DB9D0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisParticleSystemShapeType_tADE62D07EDA71578326A03B50871391EE01F73BB_m3423F2435F483F46ABB4C8EAD9B78CD03D2742FB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mA86928BC888E342D2C2644535E3399952F5077ED_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisSkinnedMeshRenderer_t020C4E8648EA1C4C6BA5C41502919B387E7E1C2E_m9E77EF921E4ACFCE425D24538209CF592968463E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_m41744F4EDB47642D9EF02C774ADD5EADDE749262_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_Vector3_t29E9EC31EED86489FBD8A22FBD317F5BD5C3A3E9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_int_t05A5E7A96442F23CE33E24A71CD349372A70E0C3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ShapeModule_tAA38A0C5305DF2F9D96F89D4B8F762E2D034D8B2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral01837E2252AC8026A5EA3567A663017A662FBB70);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1228466552C1791B2019A329AFE94665D441168A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral60E56797D122AE71D3774956F66C6EEB9EA22C05);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6686C366F645244186604A3DA4B9A58012A85F1B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral82BECCAD895076775062861CDB46AADEF913D969);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8C9F18A4F030B96447955FBBA1A99FFC43B5D8E0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8E54BB51E569CB6A8D3C45D8AEF883A1559C1C0E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral91811EE149061D28B38320E2430CE8888AD6398B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBD49F93A7BC78A69E385CEC0E78F434BD2845A17);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCA1B66E295BD92E9FD3B6C708F09CA69A50BEFD1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE8744A8B8BD390EB66CA0CAE2376C973E6904FFB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEB0A157666700D8227FD4B66A26FDC02035E89BF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralED1F119527A0BCA45125EF8E0F719985DA86C0E1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF66E9083C67855AB6EBB4B74342E385A72AACE32);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF9BE17D634D1B07BCDCDA77A87710C946D81307B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFA5EC7168E9633DAAEAA255ECB55030EA60F064F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFC341A1966AF28A9A7A26EDFB78ABBF7DE4D0E1F);
		s_Il2CppMethodInitialized = true;
	}
	ShapeModule_tAA38A0C5305DF2F9D96F89D4B8F762E2D034D8B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	uint32_t V_2 = 0;
	{
		// var instance = (UnityEngine.ParticleSystem.ShapeModule)obj;
		RuntimeObject* L_0 = ___obj1;
		V_0 = ((*(ShapeModule_tAA38A0C5305DF2F9D96F89D4B8F762E2D034D8B2*)((ShapeModule_tAA38A0C5305DF2F9D96F89D4B8F762E2D034D8B2*)(ShapeModule_tAA38A0C5305DF2F9D96F89D4B8F762E2D034D8B2*)UnBox(L_0, ShapeModule_tAA38A0C5305DF2F9D96F89D4B8F762E2D034D8B2_il2cpp_TypeInfo_var))));
		goto IL_0426;
	}

IL_000c:
	{
		String_t* L_1 = V_1;
		uint32_t L_2;
		L_2 = U3CPrivateImplementationDetailsU3E_ComputeStringHash_m9E43873DE0DF480D27EC1C2AA3C09E74EA77F75D(L_1, NULL);
		V_2 = L_2;
		uint32_t L_3 = V_2;
		if ((!(((uint32_t)L_3) <= ((uint32_t)((int32_t)-2104025999)))))
		{
			goto IL_00ad;
		}
	}
	{
		uint32_t L_4 = V_2;
		if ((!(((uint32_t)L_4) <= ((uint32_t)((int32_t)666576729)))))
		{
			goto IL_0064;
		}
	}
	{
		uint32_t L_5 = V_2;
		if ((!(((uint32_t)L_5) <= ((uint32_t)((int32_t)49525662)))))
		{
			goto IL_0049;
		}
	}
	{
		uint32_t L_6 = V_2;
		if ((((int32_t)L_6) == ((int32_t)((int32_t)24602224))))
		{
			goto IL_0247;
		}
	}
	{
		uint32_t L_7 = V_2;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)49525662))))
		{
			goto IL_0136;
		}
	}
	{
		goto IL_0420;
	}

IL_0049:
	{
		uint32_t L_8 = V_2;
		if ((((int32_t)L_8) == ((int32_t)((int32_t)230313139))))
		{
			goto IL_019f;
		}
	}
	{
		uint32_t L_9 = V_2;
		if ((((int32_t)L_9) == ((int32_t)((int32_t)666576729))))
		{
			goto IL_01f3;
		}
	}
	{
		goto IL_0420;
	}

IL_0064:
	{
		uint32_t L_10 = V_2;
		if ((!(((uint32_t)L_10) <= ((uint32_t)((int32_t)955488309)))))
		{
			goto IL_0087;
		}
	}
	{
		uint32_t L_11 = V_2;
		if ((((int32_t)L_11) == ((int32_t)((int32_t)923624301))))
		{
			goto IL_0232;
		}
	}
	{
		uint32_t L_12 = V_2;
		if ((((int32_t)L_12) == ((int32_t)((int32_t)955488309))))
		{
			goto IL_0286;
		}
	}
	{
		goto IL_0420;
	}

IL_0087:
	{
		uint32_t L_13 = V_2;
		if ((((int32_t)L_13) == ((int32_t)((int32_t)980363995))))
		{
			goto IL_029b;
		}
	}
	{
		uint32_t L_14 = V_2;
		if ((((int32_t)L_14) == ((int32_t)((int32_t)985988853))))
		{
			goto IL_0175;
		}
	}
	{
		uint32_t L_15 = V_2;
		if ((((int32_t)L_15) == ((int32_t)((int32_t)-2104025999))))
		{
			goto IL_01de;
		}
	}
	{
		goto IL_0420;
	}

IL_00ad:
	{
		uint32_t L_16 = V_2;
		if ((!(((uint32_t)L_16) <= ((uint32_t)((int32_t)-1473810612)))))
		{
			goto IL_00f0;
		}
	}
	{
		uint32_t L_17 = V_2;
		if ((!(((uint32_t)L_17) <= ((uint32_t)((int32_t)-1726928010)))))
		{
			goto IL_00d5;
		}
	}
	{
		uint32_t L_18 = V_2;
		if ((((int32_t)L_18) == ((int32_t)((int32_t)-2083506667))))
		{
			goto IL_01c9;
		}
	}
	{
		uint32_t L_19 = V_2;
		if ((((int32_t)L_19) == ((int32_t)((int32_t)-1726928010))))
		{
			goto IL_014b;
		}
	}
	{
		goto IL_0420;
	}

IL_00d5:
	{
		uint32_t L_20 = V_2;
		if ((((int32_t)L_20) == ((int32_t)((int32_t)-1593786692))))
		{
			goto IL_0208;
		}
	}
	{
		uint32_t L_21 = V_2;
		if ((((int32_t)L_21) == ((int32_t)((int32_t)-1473810612))))
		{
			goto IL_018a;
		}
	}
	{
		goto IL_0420;
	}

IL_00f0:
	{
		uint32_t L_22 = V_2;
		if ((!(((uint32_t)L_22) <= ((uint32_t)((int32_t)-1386986472)))))
		{
			goto IL_0110;
		}
	}
	{
		uint32_t L_23 = V_2;
		if ((((int32_t)L_23) == ((int32_t)((int32_t)-1412039661))))
		{
			goto IL_0160;
		}
	}
	{
		uint32_t L_24 = V_2;
		if ((((int32_t)L_24) == ((int32_t)((int32_t)-1386986472))))
		{
			goto IL_01b4;
		}
	}
	{
		goto IL_0420;
	}

IL_0110:
	{
		uint32_t L_25 = V_2;
		if ((((int32_t)L_25) == ((int32_t)((int32_t)-584064197))))
		{
			goto IL_021d;
		}
	}
	{
		uint32_t L_26 = V_2;
		if ((((int32_t)L_26) == ((int32_t)((int32_t)-473474755))))
		{
			goto IL_0271;
		}
	}
	{
		uint32_t L_27 = V_2;
		if ((((int32_t)L_27) == ((int32_t)((int32_t)-365686981))))
		{
			goto IL_025c;
		}
	}
	{
		goto IL_0420;
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
		goto IL_0420;
	}

IL_014b:
	{
		String_t* L_30 = V_1;
		bool L_31;
		L_31 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_30, _stringLiteral82BECCAD895076775062861CDB46AADEF913D969, NULL);
		if (L_31)
		{
			goto IL_02c7;
		}
	}
	{
		goto IL_0420;
	}

IL_0160:
	{
		String_t* L_32 = V_1;
		bool L_33;
		L_33 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_32, _stringLiteral1228466552C1791B2019A329AFE94665D441168A, NULL);
		if (L_33)
		{
			goto IL_02d9;
		}
	}
	{
		goto IL_0420;
	}

IL_0175:
	{
		String_t* L_34 = V_1;
		bool L_35;
		L_35 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_34, _stringLiteralBD49F93A7BC78A69E385CEC0E78F434BD2845A17, NULL);
		if (L_35)
		{
			goto IL_02f0;
		}
	}
	{
		goto IL_0420;
	}

IL_018a:
	{
		String_t* L_36 = V_1;
		bool L_37;
		L_37 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_36, _stringLiteralED1F119527A0BCA45125EF8E0F719985DA86C0E1, NULL);
		if (L_37)
		{
			goto IL_0307;
		}
	}
	{
		goto IL_0420;
	}

IL_019f:
	{
		String_t* L_38 = V_1;
		bool L_39;
		L_39 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_38, _stringLiteral8C9F18A4F030B96447955FBBA1A99FFC43B5D8E0, NULL);
		if (L_39)
		{
			goto IL_031e;
		}
	}
	{
		goto IL_0420;
	}

IL_01b4:
	{
		String_t* L_40 = V_1;
		bool L_41;
		L_41 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_40, _stringLiteralFC341A1966AF28A9A7A26EDFB78ABBF7DE4D0E1F, NULL);
		if (L_41)
		{
			goto IL_0335;
		}
	}
	{
		goto IL_0420;
	}

IL_01c9:
	{
		String_t* L_42 = V_1;
		bool L_43;
		L_43 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_42, _stringLiteralE8744A8B8BD390EB66CA0CAE2376C973E6904FFB, NULL);
		if (L_43)
		{
			goto IL_034c;
		}
	}
	{
		goto IL_0420;
	}

IL_01de:
	{
		String_t* L_44 = V_1;
		bool L_45;
		L_45 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_44, _stringLiteralF9BE17D634D1B07BCDCDA77A87710C946D81307B, NULL);
		if (L_45)
		{
			goto IL_0363;
		}
	}
	{
		goto IL_0420;
	}

IL_01f3:
	{
		String_t* L_46 = V_1;
		bool L_47;
		L_47 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_46, _stringLiteralFA5EC7168E9633DAAEAA255ECB55030EA60F064F, NULL);
		if (L_47)
		{
			goto IL_037a;
		}
	}
	{
		goto IL_0420;
	}

IL_0208:
	{
		String_t* L_48 = V_1;
		bool L_49;
		L_49 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_48, _stringLiteralEB0A157666700D8227FD4B66A26FDC02035E89BF, NULL);
		if (L_49)
		{
			goto IL_038c;
		}
	}
	{
		goto IL_0420;
	}

IL_021d:
	{
		String_t* L_50 = V_1;
		bool L_51;
		L_51 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_50, _stringLiteral8E54BB51E569CB6A8D3C45D8AEF883A1559C1C0E, NULL);
		if (L_51)
		{
			goto IL_039e;
		}
	}
	{
		goto IL_0420;
	}

IL_0232:
	{
		String_t* L_52 = V_1;
		bool L_53;
		L_53 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_52, _stringLiteral60E56797D122AE71D3774956F66C6EEB9EA22C05, NULL);
		if (L_53)
		{
			goto IL_03ad;
		}
	}
	{
		goto IL_0420;
	}

IL_0247:
	{
		String_t* L_54 = V_1;
		bool L_55;
		L_55 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_54, _stringLiteral01837E2252AC8026A5EA3567A663017A662FBB70, NULL);
		if (L_55)
		{
			goto IL_03bc;
		}
	}
	{
		goto IL_0420;
	}

IL_025c:
	{
		String_t* L_56 = V_1;
		bool L_57;
		L_57 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_56, _stringLiteralF66E9083C67855AB6EBB4B74342E385A72AACE32, NULL);
		if (L_57)
		{
			goto IL_03d0;
		}
	}
	{
		goto IL_0420;
	}

IL_0271:
	{
		String_t* L_58 = V_1;
		bool L_59;
		L_59 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_58, _stringLiteral91811EE149061D28B38320E2430CE8888AD6398B, NULL);
		if (L_59)
		{
			goto IL_03e4;
		}
	}
	{
		goto IL_0420;
	}

IL_0286:
	{
		String_t* L_60 = V_1;
		bool L_61;
		L_61 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_60, _stringLiteral6686C366F645244186604A3DA4B9A58012A85F1B, NULL);
		if (L_61)
		{
			goto IL_03f8;
		}
	}
	{
		goto IL_0420;
	}

IL_029b:
	{
		String_t* L_62 = V_1;
		bool L_63;
		L_63 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_62, _stringLiteralCA1B66E295BD92E9FD3B6C708F09CA69A50BEFD1, NULL);
		if (L_63)
		{
			goto IL_040c;
		}
	}
	{
		goto IL_0420;
	}

IL_02b0:
	{
		// instance.enabled = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_64 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_65 = ((ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_64);
		bool L_66;
		L_66 = GenericVirtualFuncInvoker1< bool, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mFFB70EE53D8CD0255A4E599780F62A3EB1520E83_RuntimeMethod_var, L_64, L_65);
		ShapeModule_set_enabled_m6BA02351FEED67A82664135B922DDA66D71DF399((&V_0), L_66, NULL);
		// break;
		goto IL_0426;
	}

IL_02c7:
	{
		// instance.shapeType = reader.Read<UnityEngine.ParticleSystemShapeType>();
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_67 = ___reader0;
		NullCheck(L_67);
		int32_t L_68;
		L_68 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisParticleSystemShapeType_tADE62D07EDA71578326A03B50871391EE01F73BB_m3423F2435F483F46ABB4C8EAD9B78CD03D2742FB_RuntimeMethod_var, L_67);
		ShapeModule_set_shapeType_m4B5D1EA91037AD7065FE1D23652D919FED4D6D7F((&V_0), L_68, NULL);
		// break;
		goto IL_0426;
	}

IL_02d9:
	{
		// instance.randomDirectionAmount = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_69 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_70 = ((ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_69);
		float L_71;
		L_71 = GenericVirtualFuncInvoker1< float, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mA86928BC888E342D2C2644535E3399952F5077ED_RuntimeMethod_var, L_69, L_70);
		ShapeModule_set_randomDirectionAmount_m398CEE6D93207797559A80CE49A0C4138C96D0B3((&V_0), L_71, NULL);
		// break;
		goto IL_0426;
	}

IL_02f0:
	{
		// instance.sphericalDirectionAmount = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_72 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_73 = ((ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_72);
		float L_74;
		L_74 = GenericVirtualFuncInvoker1< float, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mA86928BC888E342D2C2644535E3399952F5077ED_RuntimeMethod_var, L_72, L_73);
		ShapeModule_set_sphericalDirectionAmount_m395143D474E51CE6AAF81C9DB84028A16B9BCAAB((&V_0), L_74, NULL);
		// break;
		goto IL_0426;
	}

IL_0307:
	{
		// instance.alignToDirection = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_75 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_76 = ((ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_75);
		bool L_77;
		L_77 = GenericVirtualFuncInvoker1< bool, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mFFB70EE53D8CD0255A4E599780F62A3EB1520E83_RuntimeMethod_var, L_75, L_76);
		ShapeModule_set_alignToDirection_mD632613E0E343654E6569F22BC9EFBB9247AC581((&V_0), L_77, NULL);
		// break;
		goto IL_0426;
	}

IL_031e:
	{
		// instance.radius = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_78 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_79 = ((ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_78);
		float L_80;
		L_80 = GenericVirtualFuncInvoker1< float, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mA86928BC888E342D2C2644535E3399952F5077ED_RuntimeMethod_var, L_78, L_79);
		ShapeModule_set_radius_m37F79E13EB60FA39EAE36B49DAC4AC880416E89C((&V_0), L_80, NULL);
		// break;
		goto IL_0426;
	}

IL_0335:
	{
		// instance.angle = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_81 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_82 = ((ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_81);
		float L_83;
		L_83 = GenericVirtualFuncInvoker1< float, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mA86928BC888E342D2C2644535E3399952F5077ED_RuntimeMethod_var, L_81, L_82);
		ShapeModule_set_angle_m62F5F037CD1DF55172B2D64DBF8271F9F917133A((&V_0), L_83, NULL);
		// break;
		goto IL_0426;
	}

IL_034c:
	{
		// instance.length = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_84 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_85 = ((ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_84);
		float L_86;
		L_86 = GenericVirtualFuncInvoker1< float, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mA86928BC888E342D2C2644535E3399952F5077ED_RuntimeMethod_var, L_84, L_85);
		ShapeModule_set_length_mD38341192A10095F9D0217993D410939F90CE621((&V_0), L_86, NULL);
		// break;
		goto IL_0426;
	}

IL_0363:
	{
		// instance.scale = reader.Read<UnityEngine.Vector3>(ES3Type_Vector3.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_87 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_88 = ((ES3Type_Vector3_t29E9EC31EED86489FBD8A22FBD317F5BD5C3A3E9_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Vector3_t29E9EC31EED86489FBD8A22FBD317F5BD5C3A3E9_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_87);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_89;
		L_89 = GenericVirtualFuncInvoker1< Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_m41744F4EDB47642D9EF02C774ADD5EADDE749262_RuntimeMethod_var, L_87, L_88);
		ShapeModule_set_scale_mDA84B80016FDA6B6EE181B108C3E59A2FFF9143D((&V_0), L_89, NULL);
		// break;
		goto IL_0426;
	}

IL_037a:
	{
		// instance.meshShapeType = reader.Read<UnityEngine.ParticleSystemMeshShapeType>();
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_90 = ___reader0;
		NullCheck(L_90);
		int32_t L_91;
		L_91 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisParticleSystemMeshShapeType_t260D7CAA6014D0ACE2BCFE0BC588E1ADE3AF98E5_m2E1596CACABC5B7BB194A74A92C1E5627B3DB9D0_RuntimeMethod_var, L_90);
		ShapeModule_set_meshShapeType_m335ED6F02244A07F8557E900D9935A4220AD23D0((&V_0), L_91, NULL);
		// break;
		goto IL_0426;
	}

IL_038c:
	{
		// instance.mesh = reader.Read<UnityEngine.Mesh>();
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_92 = ___reader0;
		NullCheck(L_92);
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_93;
		L_93 = GenericVirtualFuncInvoker0< Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* >::Invoke(ES3Reader_Read_TisMesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4_m4DD8C0823DA528C84509E776081834CEAC71FE88_RuntimeMethod_var, L_92);
		ShapeModule_set_mesh_m75450DE287A91452C63021F100D8B6A65A921CE1((&V_0), L_93, NULL);
		// break;
		goto IL_0426;
	}

IL_039e:
	{
		// instance.meshRenderer = reader.Read<UnityEngine.MeshRenderer>();
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_94 = ___reader0;
		NullCheck(L_94);
		MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE* L_95;
		L_95 = GenericVirtualFuncInvoker0< MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE* >::Invoke(ES3Reader_Read_TisMeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE_mADE66001251FAEAB39EE97DA447D0A80EAAB85C4_RuntimeMethod_var, L_94);
		ShapeModule_set_meshRenderer_m25111B1DC9F173FE054264094DB19564D375D1D6((&V_0), L_95, NULL);
		// break;
		goto IL_0426;
	}

IL_03ad:
	{
		// instance.skinnedMeshRenderer = reader.Read<UnityEngine.SkinnedMeshRenderer>();
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_96 = ___reader0;
		NullCheck(L_96);
		SkinnedMeshRenderer_t020C4E8648EA1C4C6BA5C41502919B387E7E1C2E* L_97;
		L_97 = GenericVirtualFuncInvoker0< SkinnedMeshRenderer_t020C4E8648EA1C4C6BA5C41502919B387E7E1C2E* >::Invoke(ES3Reader_Read_TisSkinnedMeshRenderer_t020C4E8648EA1C4C6BA5C41502919B387E7E1C2E_m9E77EF921E4ACFCE425D24538209CF592968463E_RuntimeMethod_var, L_96);
		ShapeModule_set_skinnedMeshRenderer_mB3B9D58C4A9D21F990EC2000D38B5E35C7FF5807((&V_0), L_97, NULL);
		// break;
		goto IL_0426;
	}

IL_03bc:
	{
		// instance.useMeshMaterialIndex = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_98 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_99 = ((ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_98);
		bool L_100;
		L_100 = GenericVirtualFuncInvoker1< bool, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mFFB70EE53D8CD0255A4E599780F62A3EB1520E83_RuntimeMethod_var, L_98, L_99);
		ShapeModule_set_useMeshMaterialIndex_m48CE9CB5BA8CAF93D4C92975B826A7BA8459B838((&V_0), L_100, NULL);
		// break;
		goto IL_0426;
	}

IL_03d0:
	{
		// instance.meshMaterialIndex = reader.Read<System.Int32>(ES3Type_int.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_101 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_102 = ((ES3Type_int_t05A5E7A96442F23CE33E24A71CD349372A70E0C3_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_int_t05A5E7A96442F23CE33E24A71CD349372A70E0C3_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_101);
		int32_t L_103;
		L_103 = GenericVirtualFuncInvoker1< int32_t, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mEFCC4D52DD5B822D3561A53591AE11CDB25CDB6F_RuntimeMethod_var, L_101, L_102);
		ShapeModule_set_meshMaterialIndex_mC72EF43FC31A137D1247E748E89FE0FF5FB2C29F((&V_0), L_103, NULL);
		// break;
		goto IL_0426;
	}

IL_03e4:
	{
		// instance.useMeshColors = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_104 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_105 = ((ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_104);
		bool L_106;
		L_106 = GenericVirtualFuncInvoker1< bool, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mFFB70EE53D8CD0255A4E599780F62A3EB1520E83_RuntimeMethod_var, L_104, L_105);
		ShapeModule_set_useMeshColors_m2B12B03E04E2ACEE2AE68B697F462232D42D6C6E((&V_0), L_106, NULL);
		// break;
		goto IL_0426;
	}

IL_03f8:
	{
		// instance.normalOffset = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_107 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_108 = ((ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_107);
		float L_109;
		L_109 = GenericVirtualFuncInvoker1< float, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mA86928BC888E342D2C2644535E3399952F5077ED_RuntimeMethod_var, L_107, L_108);
		ShapeModule_set_normalOffset_m24453DEF085D96323A09DEBD134283B7F23C263F((&V_0), L_109, NULL);
		// break;
		goto IL_0426;
	}

IL_040c:
	{
		// instance.arc = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_110 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_111 = ((ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_110);
		float L_112;
		L_112 = GenericVirtualFuncInvoker1< float, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mA86928BC888E342D2C2644535E3399952F5077ED_RuntimeMethod_var, L_110, L_111);
		ShapeModule_set_arc_mE9EF87E2AA959143B466CD55B7DAA65FBE155D1F((&V_0), L_112, NULL);
		// break;
		goto IL_0426;
	}

IL_0420:
	{
		// reader.Skip();
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_113 = ___reader0;
		NullCheck(L_113);
		VirtualActionInvoker0::Invoke(41 /* System.Void ES3Reader::Skip() */, L_113);
	}

IL_0426:
	{
		// while((propertyName = reader.ReadPropertyName()) != null)
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_114 = ___reader0;
		NullCheck(L_114);
		String_t* L_115;
		L_115 = VirtualFuncInvoker0< String_t* >::Invoke(21 /* System.String ES3Reader::ReadPropertyName() */, L_114);
		String_t* L_116 = L_115;
		V_1 = L_116;
		if (L_116)
		{
			goto IL_000c;
		}
	}
	{
		// }
		return;
	}
}
// System.Void ES3Types.ES3Type_ShapeModule::ReadInto<UnityEngine.ParticleSystem/TrailModule>(ES3Reader,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ES3Type_ShapeModule_ReadInto_TisTrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D_m23A6BCDEAF8D3E9CF3FEFDBDCA9105F55CA809BF_gshared (ES3Type_ShapeModule_t2A98821A3CBBB891C72216EA1D86C9579DFD70B7* __this, ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* ___reader0, RuntimeObject* ___obj1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mFFB70EE53D8CD0255A4E599780F62A3EB1520E83_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mEFCC4D52DD5B822D3561A53591AE11CDB25CDB6F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisMeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE_mADE66001251FAEAB39EE97DA447D0A80EAAB85C4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisMesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4_m4DD8C0823DA528C84509E776081834CEAC71FE88_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisParticleSystemMeshShapeType_t260D7CAA6014D0ACE2BCFE0BC588E1ADE3AF98E5_m2E1596CACABC5B7BB194A74A92C1E5627B3DB9D0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisParticleSystemShapeType_tADE62D07EDA71578326A03B50871391EE01F73BB_m3423F2435F483F46ABB4C8EAD9B78CD03D2742FB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mA86928BC888E342D2C2644535E3399952F5077ED_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisSkinnedMeshRenderer_t020C4E8648EA1C4C6BA5C41502919B387E7E1C2E_m9E77EF921E4ACFCE425D24538209CF592968463E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_m41744F4EDB47642D9EF02C774ADD5EADDE749262_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_Vector3_t29E9EC31EED86489FBD8A22FBD317F5BD5C3A3E9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_int_t05A5E7A96442F23CE33E24A71CD349372A70E0C3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ShapeModule_tAA38A0C5305DF2F9D96F89D4B8F762E2D034D8B2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral01837E2252AC8026A5EA3567A663017A662FBB70);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1228466552C1791B2019A329AFE94665D441168A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral60E56797D122AE71D3774956F66C6EEB9EA22C05);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6686C366F645244186604A3DA4B9A58012A85F1B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral82BECCAD895076775062861CDB46AADEF913D969);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8C9F18A4F030B96447955FBBA1A99FFC43B5D8E0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8E54BB51E569CB6A8D3C45D8AEF883A1559C1C0E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral91811EE149061D28B38320E2430CE8888AD6398B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBD49F93A7BC78A69E385CEC0E78F434BD2845A17);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCA1B66E295BD92E9FD3B6C708F09CA69A50BEFD1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE8744A8B8BD390EB66CA0CAE2376C973E6904FFB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEB0A157666700D8227FD4B66A26FDC02035E89BF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralED1F119527A0BCA45125EF8E0F719985DA86C0E1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF66E9083C67855AB6EBB4B74342E385A72AACE32);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF9BE17D634D1B07BCDCDA77A87710C946D81307B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFA5EC7168E9633DAAEAA255ECB55030EA60F064F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFC341A1966AF28A9A7A26EDFB78ABBF7DE4D0E1F);
		s_Il2CppMethodInitialized = true;
	}
	ShapeModule_tAA38A0C5305DF2F9D96F89D4B8F762E2D034D8B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	uint32_t V_2 = 0;
	{
		// var instance = (UnityEngine.ParticleSystem.ShapeModule)obj;
		RuntimeObject* L_0 = ___obj1;
		V_0 = ((*(ShapeModule_tAA38A0C5305DF2F9D96F89D4B8F762E2D034D8B2*)((ShapeModule_tAA38A0C5305DF2F9D96F89D4B8F762E2D034D8B2*)(ShapeModule_tAA38A0C5305DF2F9D96F89D4B8F762E2D034D8B2*)UnBox(L_0, ShapeModule_tAA38A0C5305DF2F9D96F89D4B8F762E2D034D8B2_il2cpp_TypeInfo_var))));
		goto IL_0426;
	}

IL_000c:
	{
		String_t* L_1 = V_1;
		uint32_t L_2;
		L_2 = U3CPrivateImplementationDetailsU3E_ComputeStringHash_m9E43873DE0DF480D27EC1C2AA3C09E74EA77F75D(L_1, NULL);
		V_2 = L_2;
		uint32_t L_3 = V_2;
		if ((!(((uint32_t)L_3) <= ((uint32_t)((int32_t)-2104025999)))))
		{
			goto IL_00ad;
		}
	}
	{
		uint32_t L_4 = V_2;
		if ((!(((uint32_t)L_4) <= ((uint32_t)((int32_t)666576729)))))
		{
			goto IL_0064;
		}
	}
	{
		uint32_t L_5 = V_2;
		if ((!(((uint32_t)L_5) <= ((uint32_t)((int32_t)49525662)))))
		{
			goto IL_0049;
		}
	}
	{
		uint32_t L_6 = V_2;
		if ((((int32_t)L_6) == ((int32_t)((int32_t)24602224))))
		{
			goto IL_0247;
		}
	}
	{
		uint32_t L_7 = V_2;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)49525662))))
		{
			goto IL_0136;
		}
	}
	{
		goto IL_0420;
	}

IL_0049:
	{
		uint32_t L_8 = V_2;
		if ((((int32_t)L_8) == ((int32_t)((int32_t)230313139))))
		{
			goto IL_019f;
		}
	}
	{
		uint32_t L_9 = V_2;
		if ((((int32_t)L_9) == ((int32_t)((int32_t)666576729))))
		{
			goto IL_01f3;
		}
	}
	{
		goto IL_0420;
	}

IL_0064:
	{
		uint32_t L_10 = V_2;
		if ((!(((uint32_t)L_10) <= ((uint32_t)((int32_t)955488309)))))
		{
			goto IL_0087;
		}
	}
	{
		uint32_t L_11 = V_2;
		if ((((int32_t)L_11) == ((int32_t)((int32_t)923624301))))
		{
			goto IL_0232;
		}
	}
	{
		uint32_t L_12 = V_2;
		if ((((int32_t)L_12) == ((int32_t)((int32_t)955488309))))
		{
			goto IL_0286;
		}
	}
	{
		goto IL_0420;
	}

IL_0087:
	{
		uint32_t L_13 = V_2;
		if ((((int32_t)L_13) == ((int32_t)((int32_t)980363995))))
		{
			goto IL_029b;
		}
	}
	{
		uint32_t L_14 = V_2;
		if ((((int32_t)L_14) == ((int32_t)((int32_t)985988853))))
		{
			goto IL_0175;
		}
	}
	{
		uint32_t L_15 = V_2;
		if ((((int32_t)L_15) == ((int32_t)((int32_t)-2104025999))))
		{
			goto IL_01de;
		}
	}
	{
		goto IL_0420;
	}

IL_00ad:
	{
		uint32_t L_16 = V_2;
		if ((!(((uint32_t)L_16) <= ((uint32_t)((int32_t)-1473810612)))))
		{
			goto IL_00f0;
		}
	}
	{
		uint32_t L_17 = V_2;
		if ((!(((uint32_t)L_17) <= ((uint32_t)((int32_t)-1726928010)))))
		{
			goto IL_00d5;
		}
	}
	{
		uint32_t L_18 = V_2;
		if ((((int32_t)L_18) == ((int32_t)((int32_t)-2083506667))))
		{
			goto IL_01c9;
		}
	}
	{
		uint32_t L_19 = V_2;
		if ((((int32_t)L_19) == ((int32_t)((int32_t)-1726928010))))
		{
			goto IL_014b;
		}
	}
	{
		goto IL_0420;
	}

IL_00d5:
	{
		uint32_t L_20 = V_2;
		if ((((int32_t)L_20) == ((int32_t)((int32_t)-1593786692))))
		{
			goto IL_0208;
		}
	}
	{
		uint32_t L_21 = V_2;
		if ((((int32_t)L_21) == ((int32_t)((int32_t)-1473810612))))
		{
			goto IL_018a;
		}
	}
	{
		goto IL_0420;
	}

IL_00f0:
	{
		uint32_t L_22 = V_2;
		if ((!(((uint32_t)L_22) <= ((uint32_t)((int32_t)-1386986472)))))
		{
			goto IL_0110;
		}
	}
	{
		uint32_t L_23 = V_2;
		if ((((int32_t)L_23) == ((int32_t)((int32_t)-1412039661))))
		{
			goto IL_0160;
		}
	}
	{
		uint32_t L_24 = V_2;
		if ((((int32_t)L_24) == ((int32_t)((int32_t)-1386986472))))
		{
			goto IL_01b4;
		}
	}
	{
		goto IL_0420;
	}

IL_0110:
	{
		uint32_t L_25 = V_2;
		if ((((int32_t)L_25) == ((int32_t)((int32_t)-584064197))))
		{
			goto IL_021d;
		}
	}
	{
		uint32_t L_26 = V_2;
		if ((((int32_t)L_26) == ((int32_t)((int32_t)-473474755))))
		{
			goto IL_0271;
		}
	}
	{
		uint32_t L_27 = V_2;
		if ((((int32_t)L_27) == ((int32_t)((int32_t)-365686981))))
		{
			goto IL_025c;
		}
	}
	{
		goto IL_0420;
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
		goto IL_0420;
	}

IL_014b:
	{
		String_t* L_30 = V_1;
		bool L_31;
		L_31 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_30, _stringLiteral82BECCAD895076775062861CDB46AADEF913D969, NULL);
		if (L_31)
		{
			goto IL_02c7;
		}
	}
	{
		goto IL_0420;
	}

IL_0160:
	{
		String_t* L_32 = V_1;
		bool L_33;
		L_33 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_32, _stringLiteral1228466552C1791B2019A329AFE94665D441168A, NULL);
		if (L_33)
		{
			goto IL_02d9;
		}
	}
	{
		goto IL_0420;
	}

IL_0175:
	{
		String_t* L_34 = V_1;
		bool L_35;
		L_35 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_34, _stringLiteralBD49F93A7BC78A69E385CEC0E78F434BD2845A17, NULL);
		if (L_35)
		{
			goto IL_02f0;
		}
	}
	{
		goto IL_0420;
	}

IL_018a:
	{
		String_t* L_36 = V_1;
		bool L_37;
		L_37 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_36, _stringLiteralED1F119527A0BCA45125EF8E0F719985DA86C0E1, NULL);
		if (L_37)
		{
			goto IL_0307;
		}
	}
	{
		goto IL_0420;
	}

IL_019f:
	{
		String_t* L_38 = V_1;
		bool L_39;
		L_39 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_38, _stringLiteral8C9F18A4F030B96447955FBBA1A99FFC43B5D8E0, NULL);
		if (L_39)
		{
			goto IL_031e;
		}
	}
	{
		goto IL_0420;
	}

IL_01b4:
	{
		String_t* L_40 = V_1;
		bool L_41;
		L_41 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_40, _stringLiteralFC341A1966AF28A9A7A26EDFB78ABBF7DE4D0E1F, NULL);
		if (L_41)
		{
			goto IL_0335;
		}
	}
	{
		goto IL_0420;
	}

IL_01c9:
	{
		String_t* L_42 = V_1;
		bool L_43;
		L_43 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_42, _stringLiteralE8744A8B8BD390EB66CA0CAE2376C973E6904FFB, NULL);
		if (L_43)
		{
			goto IL_034c;
		}
	}
	{
		goto IL_0420;
	}

IL_01de:
	{
		String_t* L_44 = V_1;
		bool L_45;
		L_45 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_44, _stringLiteralF9BE17D634D1B07BCDCDA77A87710C946D81307B, NULL);
		if (L_45)
		{
			goto IL_0363;
		}
	}
	{
		goto IL_0420;
	}

IL_01f3:
	{
		String_t* L_46 = V_1;
		bool L_47;
		L_47 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_46, _stringLiteralFA5EC7168E9633DAAEAA255ECB55030EA60F064F, NULL);
		if (L_47)
		{
			goto IL_037a;
		}
	}
	{
		goto IL_0420;
	}

IL_0208:
	{
		String_t* L_48 = V_1;
		bool L_49;
		L_49 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_48, _stringLiteralEB0A157666700D8227FD4B66A26FDC02035E89BF, NULL);
		if (L_49)
		{
			goto IL_038c;
		}
	}
	{
		goto IL_0420;
	}

IL_021d:
	{
		String_t* L_50 = V_1;
		bool L_51;
		L_51 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_50, _stringLiteral8E54BB51E569CB6A8D3C45D8AEF883A1559C1C0E, NULL);
		if (L_51)
		{
			goto IL_039e;
		}
	}
	{
		goto IL_0420;
	}

IL_0232:
	{
		String_t* L_52 = V_1;
		bool L_53;
		L_53 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_52, _stringLiteral60E56797D122AE71D3774956F66C6EEB9EA22C05, NULL);
		if (L_53)
		{
			goto IL_03ad;
		}
	}
	{
		goto IL_0420;
	}

IL_0247:
	{
		String_t* L_54 = V_1;
		bool L_55;
		L_55 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_54, _stringLiteral01837E2252AC8026A5EA3567A663017A662FBB70, NULL);
		if (L_55)
		{
			goto IL_03bc;
		}
	}
	{
		goto IL_0420;
	}

IL_025c:
	{
		String_t* L_56 = V_1;
		bool L_57;
		L_57 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_56, _stringLiteralF66E9083C67855AB6EBB4B74342E385A72AACE32, NULL);
		if (L_57)
		{
			goto IL_03d0;
		}
	}
	{
		goto IL_0420;
	}

IL_0271:
	{
		String_t* L_58 = V_1;
		bool L_59;
		L_59 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_58, _stringLiteral91811EE149061D28B38320E2430CE8888AD6398B, NULL);
		if (L_59)
		{
			goto IL_03e4;
		}
	}
	{
		goto IL_0420;
	}

IL_0286:
	{
		String_t* L_60 = V_1;
		bool L_61;
		L_61 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_60, _stringLiteral6686C366F645244186604A3DA4B9A58012A85F1B, NULL);
		if (L_61)
		{
			goto IL_03f8;
		}
	}
	{
		goto IL_0420;
	}

IL_029b:
	{
		String_t* L_62 = V_1;
		bool L_63;
		L_63 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_62, _stringLiteralCA1B66E295BD92E9FD3B6C708F09CA69A50BEFD1, NULL);
		if (L_63)
		{
			goto IL_040c;
		}
	}
	{
		goto IL_0420;
	}

IL_02b0:
	{
		// instance.enabled = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_64 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_65 = ((ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_64);
		bool L_66;
		L_66 = GenericVirtualFuncInvoker1< bool, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mFFB70EE53D8CD0255A4E599780F62A3EB1520E83_RuntimeMethod_var, L_64, L_65);
		ShapeModule_set_enabled_m6BA02351FEED67A82664135B922DDA66D71DF399((&V_0), L_66, NULL);
		// break;
		goto IL_0426;
	}

IL_02c7:
	{
		// instance.shapeType = reader.Read<UnityEngine.ParticleSystemShapeType>();
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_67 = ___reader0;
		NullCheck(L_67);
		int32_t L_68;
		L_68 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisParticleSystemShapeType_tADE62D07EDA71578326A03B50871391EE01F73BB_m3423F2435F483F46ABB4C8EAD9B78CD03D2742FB_RuntimeMethod_var, L_67);
		ShapeModule_set_shapeType_m4B5D1EA91037AD7065FE1D23652D919FED4D6D7F((&V_0), L_68, NULL);
		// break;
		goto IL_0426;
	}

IL_02d9:
	{
		// instance.randomDirectionAmount = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_69 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_70 = ((ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_69);
		float L_71;
		L_71 = GenericVirtualFuncInvoker1< float, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mA86928BC888E342D2C2644535E3399952F5077ED_RuntimeMethod_var, L_69, L_70);
		ShapeModule_set_randomDirectionAmount_m398CEE6D93207797559A80CE49A0C4138C96D0B3((&V_0), L_71, NULL);
		// break;
		goto IL_0426;
	}

IL_02f0:
	{
		// instance.sphericalDirectionAmount = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_72 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_73 = ((ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_72);
		float L_74;
		L_74 = GenericVirtualFuncInvoker1< float, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mA86928BC888E342D2C2644535E3399952F5077ED_RuntimeMethod_var, L_72, L_73);
		ShapeModule_set_sphericalDirectionAmount_m395143D474E51CE6AAF81C9DB84028A16B9BCAAB((&V_0), L_74, NULL);
		// break;
		goto IL_0426;
	}

IL_0307:
	{
		// instance.alignToDirection = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_75 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_76 = ((ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_75);
		bool L_77;
		L_77 = GenericVirtualFuncInvoker1< bool, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mFFB70EE53D8CD0255A4E599780F62A3EB1520E83_RuntimeMethod_var, L_75, L_76);
		ShapeModule_set_alignToDirection_mD632613E0E343654E6569F22BC9EFBB9247AC581((&V_0), L_77, NULL);
		// break;
		goto IL_0426;
	}

IL_031e:
	{
		// instance.radius = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_78 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_79 = ((ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_78);
		float L_80;
		L_80 = GenericVirtualFuncInvoker1< float, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mA86928BC888E342D2C2644535E3399952F5077ED_RuntimeMethod_var, L_78, L_79);
		ShapeModule_set_radius_m37F79E13EB60FA39EAE36B49DAC4AC880416E89C((&V_0), L_80, NULL);
		// break;
		goto IL_0426;
	}

IL_0335:
	{
		// instance.angle = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_81 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_82 = ((ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_81);
		float L_83;
		L_83 = GenericVirtualFuncInvoker1< float, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mA86928BC888E342D2C2644535E3399952F5077ED_RuntimeMethod_var, L_81, L_82);
		ShapeModule_set_angle_m62F5F037CD1DF55172B2D64DBF8271F9F917133A((&V_0), L_83, NULL);
		// break;
		goto IL_0426;
	}

IL_034c:
	{
		// instance.length = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_84 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_85 = ((ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_84);
		float L_86;
		L_86 = GenericVirtualFuncInvoker1< float, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mA86928BC888E342D2C2644535E3399952F5077ED_RuntimeMethod_var, L_84, L_85);
		ShapeModule_set_length_mD38341192A10095F9D0217993D410939F90CE621((&V_0), L_86, NULL);
		// break;
		goto IL_0426;
	}

IL_0363:
	{
		// instance.scale = reader.Read<UnityEngine.Vector3>(ES3Type_Vector3.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_87 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_88 = ((ES3Type_Vector3_t29E9EC31EED86489FBD8A22FBD317F5BD5C3A3E9_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Vector3_t29E9EC31EED86489FBD8A22FBD317F5BD5C3A3E9_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_87);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_89;
		L_89 = GenericVirtualFuncInvoker1< Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_m41744F4EDB47642D9EF02C774ADD5EADDE749262_RuntimeMethod_var, L_87, L_88);
		ShapeModule_set_scale_mDA84B80016FDA6B6EE181B108C3E59A2FFF9143D((&V_0), L_89, NULL);
		// break;
		goto IL_0426;
	}

IL_037a:
	{
		// instance.meshShapeType = reader.Read<UnityEngine.ParticleSystemMeshShapeType>();
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_90 = ___reader0;
		NullCheck(L_90);
		int32_t L_91;
		L_91 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisParticleSystemMeshShapeType_t260D7CAA6014D0ACE2BCFE0BC588E1ADE3AF98E5_m2E1596CACABC5B7BB194A74A92C1E5627B3DB9D0_RuntimeMethod_var, L_90);
		ShapeModule_set_meshShapeType_m335ED6F02244A07F8557E900D9935A4220AD23D0((&V_0), L_91, NULL);
		// break;
		goto IL_0426;
	}

IL_038c:
	{
		// instance.mesh = reader.Read<UnityEngine.Mesh>();
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_92 = ___reader0;
		NullCheck(L_92);
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_93;
		L_93 = GenericVirtualFuncInvoker0< Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* >::Invoke(ES3Reader_Read_TisMesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4_m4DD8C0823DA528C84509E776081834CEAC71FE88_RuntimeMethod_var, L_92);
		ShapeModule_set_mesh_m75450DE287A91452C63021F100D8B6A65A921CE1((&V_0), L_93, NULL);
		// break;
		goto IL_0426;
	}

IL_039e:
	{
		// instance.meshRenderer = reader.Read<UnityEngine.MeshRenderer>();
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_94 = ___reader0;
		NullCheck(L_94);
		MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE* L_95;
		L_95 = GenericVirtualFuncInvoker0< MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE* >::Invoke(ES3Reader_Read_TisMeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE_mADE66001251FAEAB39EE97DA447D0A80EAAB85C4_RuntimeMethod_var, L_94);
		ShapeModule_set_meshRenderer_m25111B1DC9F173FE054264094DB19564D375D1D6((&V_0), L_95, NULL);
		// break;
		goto IL_0426;
	}

IL_03ad:
	{
		// instance.skinnedMeshRenderer = reader.Read<UnityEngine.SkinnedMeshRenderer>();
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_96 = ___reader0;
		NullCheck(L_96);
		SkinnedMeshRenderer_t020C4E8648EA1C4C6BA5C41502919B387E7E1C2E* L_97;
		L_97 = GenericVirtualFuncInvoker0< SkinnedMeshRenderer_t020C4E8648EA1C4C6BA5C41502919B387E7E1C2E* >::Invoke(ES3Reader_Read_TisSkinnedMeshRenderer_t020C4E8648EA1C4C6BA5C41502919B387E7E1C2E_m9E77EF921E4ACFCE425D24538209CF592968463E_RuntimeMethod_var, L_96);
		ShapeModule_set_skinnedMeshRenderer_mB3B9D58C4A9D21F990EC2000D38B5E35C7FF5807((&V_0), L_97, NULL);
		// break;
		goto IL_0426;
	}

IL_03bc:
	{
		// instance.useMeshMaterialIndex = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_98 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_99 = ((ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_98);
		bool L_100;
		L_100 = GenericVirtualFuncInvoker1< bool, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mFFB70EE53D8CD0255A4E599780F62A3EB1520E83_RuntimeMethod_var, L_98, L_99);
		ShapeModule_set_useMeshMaterialIndex_m48CE9CB5BA8CAF93D4C92975B826A7BA8459B838((&V_0), L_100, NULL);
		// break;
		goto IL_0426;
	}

IL_03d0:
	{
		// instance.meshMaterialIndex = reader.Read<System.Int32>(ES3Type_int.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_101 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_102 = ((ES3Type_int_t05A5E7A96442F23CE33E24A71CD349372A70E0C3_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_int_t05A5E7A96442F23CE33E24A71CD349372A70E0C3_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_101);
		int32_t L_103;
		L_103 = GenericVirtualFuncInvoker1< int32_t, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mEFCC4D52DD5B822D3561A53591AE11CDB25CDB6F_RuntimeMethod_var, L_101, L_102);
		ShapeModule_set_meshMaterialIndex_mC72EF43FC31A137D1247E748E89FE0FF5FB2C29F((&V_0), L_103, NULL);
		// break;
		goto IL_0426;
	}

IL_03e4:
	{
		// instance.useMeshColors = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_104 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_105 = ((ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_104);
		bool L_106;
		L_106 = GenericVirtualFuncInvoker1< bool, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mFFB70EE53D8CD0255A4E599780F62A3EB1520E83_RuntimeMethod_var, L_104, L_105);
		ShapeModule_set_useMeshColors_m2B12B03E04E2ACEE2AE68B697F462232D42D6C6E((&V_0), L_106, NULL);
		// break;
		goto IL_0426;
	}

IL_03f8:
	{
		// instance.normalOffset = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_107 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_108 = ((ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_107);
		float L_109;
		L_109 = GenericVirtualFuncInvoker1< float, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mA86928BC888E342D2C2644535E3399952F5077ED_RuntimeMethod_var, L_107, L_108);
		ShapeModule_set_normalOffset_m24453DEF085D96323A09DEBD134283B7F23C263F((&V_0), L_109, NULL);
		// break;
		goto IL_0426;
	}

IL_040c:
	{
		// instance.arc = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_110 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_111 = ((ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_110);
		float L_112;
		L_112 = GenericVirtualFuncInvoker1< float, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mA86928BC888E342D2C2644535E3399952F5077ED_RuntimeMethod_var, L_110, L_111);
		ShapeModule_set_arc_mE9EF87E2AA959143B466CD55B7DAA65FBE155D1F((&V_0), L_112, NULL);
		// break;
		goto IL_0426;
	}

IL_0420:
	{
		// reader.Skip();
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_113 = ___reader0;
		NullCheck(L_113);
		VirtualActionInvoker0::Invoke(41 /* System.Void ES3Reader::Skip() */, L_113);
	}

IL_0426:
	{
		// while((propertyName = reader.ReadPropertyName()) != null)
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_114 = ___reader0;
		NullCheck(L_114);
		String_t* L_115;
		L_115 = VirtualFuncInvoker0< String_t* >::Invoke(21 /* System.String ES3Reader::ReadPropertyName() */, L_114);
		String_t* L_116 = L_115;
		V_1 = L_116;
		if (L_116)
		{
			goto IL_000c;
		}
	}
	{
		// }
		return;
	}
}
// System.Void ES3Types.ES3Type_ShapeModule::ReadInto<UnityEngine.ParticleSystem/TriggerModule>(ES3Reader,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ES3Type_ShapeModule_ReadInto_TisTriggerModule_tDEE844919206259DA831ADCA3B1B2D915CB767B1_m138AAE5E6D94C4B6BE120E58521850A3A8A913DA_gshared (ES3Type_ShapeModule_t2A98821A3CBBB891C72216EA1D86C9579DFD70B7* __this, ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* ___reader0, RuntimeObject* ___obj1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mFFB70EE53D8CD0255A4E599780F62A3EB1520E83_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mEFCC4D52DD5B822D3561A53591AE11CDB25CDB6F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisMeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE_mADE66001251FAEAB39EE97DA447D0A80EAAB85C4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisMesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4_m4DD8C0823DA528C84509E776081834CEAC71FE88_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisParticleSystemMeshShapeType_t260D7CAA6014D0ACE2BCFE0BC588E1ADE3AF98E5_m2E1596CACABC5B7BB194A74A92C1E5627B3DB9D0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisParticleSystemShapeType_tADE62D07EDA71578326A03B50871391EE01F73BB_m3423F2435F483F46ABB4C8EAD9B78CD03D2742FB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mA86928BC888E342D2C2644535E3399952F5077ED_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisSkinnedMeshRenderer_t020C4E8648EA1C4C6BA5C41502919B387E7E1C2E_m9E77EF921E4ACFCE425D24538209CF592968463E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_m41744F4EDB47642D9EF02C774ADD5EADDE749262_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_Vector3_t29E9EC31EED86489FBD8A22FBD317F5BD5C3A3E9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_int_t05A5E7A96442F23CE33E24A71CD349372A70E0C3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ShapeModule_tAA38A0C5305DF2F9D96F89D4B8F762E2D034D8B2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral01837E2252AC8026A5EA3567A663017A662FBB70);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1228466552C1791B2019A329AFE94665D441168A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral60E56797D122AE71D3774956F66C6EEB9EA22C05);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6686C366F645244186604A3DA4B9A58012A85F1B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral82BECCAD895076775062861CDB46AADEF913D969);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8C9F18A4F030B96447955FBBA1A99FFC43B5D8E0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8E54BB51E569CB6A8D3C45D8AEF883A1559C1C0E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral91811EE149061D28B38320E2430CE8888AD6398B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBD49F93A7BC78A69E385CEC0E78F434BD2845A17);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCA1B66E295BD92E9FD3B6C708F09CA69A50BEFD1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE8744A8B8BD390EB66CA0CAE2376C973E6904FFB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEB0A157666700D8227FD4B66A26FDC02035E89BF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralED1F119527A0BCA45125EF8E0F719985DA86C0E1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF66E9083C67855AB6EBB4B74342E385A72AACE32);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF9BE17D634D1B07BCDCDA77A87710C946D81307B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFA5EC7168E9633DAAEAA255ECB55030EA60F064F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFC341A1966AF28A9A7A26EDFB78ABBF7DE4D0E1F);
		s_Il2CppMethodInitialized = true;
	}
	ShapeModule_tAA38A0C5305DF2F9D96F89D4B8F762E2D034D8B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	uint32_t V_2 = 0;
	{
		// var instance = (UnityEngine.ParticleSystem.ShapeModule)obj;
		RuntimeObject* L_0 = ___obj1;
		V_0 = ((*(ShapeModule_tAA38A0C5305DF2F9D96F89D4B8F762E2D034D8B2*)((ShapeModule_tAA38A0C5305DF2F9D96F89D4B8F762E2D034D8B2*)(ShapeModule_tAA38A0C5305DF2F9D96F89D4B8F762E2D034D8B2*)UnBox(L_0, ShapeModule_tAA38A0C5305DF2F9D96F89D4B8F762E2D034D8B2_il2cpp_TypeInfo_var))));
		goto IL_0426;
	}

IL_000c:
	{
		String_t* L_1 = V_1;
		uint32_t L_2;
		L_2 = U3CPrivateImplementationDetailsU3E_ComputeStringHash_m9E43873DE0DF480D27EC1C2AA3C09E74EA77F75D(L_1, NULL);
		V_2 = L_2;
		uint32_t L_3 = V_2;
		if ((!(((uint32_t)L_3) <= ((uint32_t)((int32_t)-2104025999)))))
		{
			goto IL_00ad;
		}
	}
	{
		uint32_t L_4 = V_2;
		if ((!(((uint32_t)L_4) <= ((uint32_t)((int32_t)666576729)))))
		{
			goto IL_0064;
		}
	}
	{
		uint32_t L_5 = V_2;
		if ((!(((uint32_t)L_5) <= ((uint32_t)((int32_t)49525662)))))
		{
			goto IL_0049;
		}
	}
	{
		uint32_t L_6 = V_2;
		if ((((int32_t)L_6) == ((int32_t)((int32_t)24602224))))
		{
			goto IL_0247;
		}
	}
	{
		uint32_t L_7 = V_2;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)49525662))))
		{
			goto IL_0136;
		}
	}
	{
		goto IL_0420;
	}

IL_0049:
	{
		uint32_t L_8 = V_2;
		if ((((int32_t)L_8) == ((int32_t)((int32_t)230313139))))
		{
			goto IL_019f;
		}
	}
	{
		uint32_t L_9 = V_2;
		if ((((int32_t)L_9) == ((int32_t)((int32_t)666576729))))
		{
			goto IL_01f3;
		}
	}
	{
		goto IL_0420;
	}

IL_0064:
	{
		uint32_t L_10 = V_2;
		if ((!(((uint32_t)L_10) <= ((uint32_t)((int32_t)955488309)))))
		{
			goto IL_0087;
		}
	}
	{
		uint32_t L_11 = V_2;
		if ((((int32_t)L_11) == ((int32_t)((int32_t)923624301))))
		{
			goto IL_0232;
		}
	}
	{
		uint32_t L_12 = V_2;
		if ((((int32_t)L_12) == ((int32_t)((int32_t)955488309))))
		{
			goto IL_0286;
		}
	}
	{
		goto IL_0420;
	}

IL_0087:
	{
		uint32_t L_13 = V_2;
		if ((((int32_t)L_13) == ((int32_t)((int32_t)980363995))))
		{
			goto IL_029b;
		}
	}
	{
		uint32_t L_14 = V_2;
		if ((((int32_t)L_14) == ((int32_t)((int32_t)985988853))))
		{
			goto IL_0175;
		}
	}
	{
		uint32_t L_15 = V_2;
		if ((((int32_t)L_15) == ((int32_t)((int32_t)-2104025999))))
		{
			goto IL_01de;
		}
	}
	{
		goto IL_0420;
	}

IL_00ad:
	{
		uint32_t L_16 = V_2;
		if ((!(((uint32_t)L_16) <= ((uint32_t)((int32_t)-1473810612)))))
		{
			goto IL_00f0;
		}
	}
	{
		uint32_t L_17 = V_2;
		if ((!(((uint32_t)L_17) <= ((uint32_t)((int32_t)-1726928010)))))
		{
			goto IL_00d5;
		}
	}
	{
		uint32_t L_18 = V_2;
		if ((((int32_t)L_18) == ((int32_t)((int32_t)-2083506667))))
		{
			goto IL_01c9;
		}
	}
	{
		uint32_t L_19 = V_2;
		if ((((int32_t)L_19) == ((int32_t)((int32_t)-1726928010))))
		{
			goto IL_014b;
		}
	}
	{
		goto IL_0420;
	}

IL_00d5:
	{
		uint32_t L_20 = V_2;
		if ((((int32_t)L_20) == ((int32_t)((int32_t)-1593786692))))
		{
			goto IL_0208;
		}
	}
	{
		uint32_t L_21 = V_2;
		if ((((int32_t)L_21) == ((int32_t)((int32_t)-1473810612))))
		{
			goto IL_018a;
		}
	}
	{
		goto IL_0420;
	}

IL_00f0:
	{
		uint32_t L_22 = V_2;
		if ((!(((uint32_t)L_22) <= ((uint32_t)((int32_t)-1386986472)))))
		{
			goto IL_0110;
		}
	}
	{
		uint32_t L_23 = V_2;
		if ((((int32_t)L_23) == ((int32_t)((int32_t)-1412039661))))
		{
			goto IL_0160;
		}
	}
	{
		uint32_t L_24 = V_2;
		if ((((int32_t)L_24) == ((int32_t)((int32_t)-1386986472))))
		{
			goto IL_01b4;
		}
	}
	{
		goto IL_0420;
	}

IL_0110:
	{
		uint32_t L_25 = V_2;
		if ((((int32_t)L_25) == ((int32_t)((int32_t)-584064197))))
		{
			goto IL_021d;
		}
	}
	{
		uint32_t L_26 = V_2;
		if ((((int32_t)L_26) == ((int32_t)((int32_t)-473474755))))
		{
			goto IL_0271;
		}
	}
	{
		uint32_t L_27 = V_2;
		if ((((int32_t)L_27) == ((int32_t)((int32_t)-365686981))))
		{
			goto IL_025c;
		}
	}
	{
		goto IL_0420;
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
		goto IL_0420;
	}

IL_014b:
	{
		String_t* L_30 = V_1;
		bool L_31;
		L_31 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_30, _stringLiteral82BECCAD895076775062861CDB46AADEF913D969, NULL);
		if (L_31)
		{
			goto IL_02c7;
		}
	}
	{
		goto IL_0420;
	}

IL_0160:
	{
		String_t* L_32 = V_1;
		bool L_33;
		L_33 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_32, _stringLiteral1228466552C1791B2019A329AFE94665D441168A, NULL);
		if (L_33)
		{
			goto IL_02d9;
		}
	}
	{
		goto IL_0420;
	}

IL_0175:
	{
		String_t* L_34 = V_1;
		bool L_35;
		L_35 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_34, _stringLiteralBD49F93A7BC78A69E385CEC0E78F434BD2845A17, NULL);
		if (L_35)
		{
			goto IL_02f0;
		}
	}
	{
		goto IL_0420;
	}

IL_018a:
	{
		String_t* L_36 = V_1;
		bool L_37;
		L_37 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_36, _stringLiteralED1F119527A0BCA45125EF8E0F719985DA86C0E1, NULL);
		if (L_37)
		{
			goto IL_0307;
		}
	}
	{
		goto IL_0420;
	}

IL_019f:
	{
		String_t* L_38 = V_1;
		bool L_39;
		L_39 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_38, _stringLiteral8C9F18A4F030B96447955FBBA1A99FFC43B5D8E0, NULL);
		if (L_39)
		{
			goto IL_031e;
		}
	}
	{
		goto IL_0420;
	}

IL_01b4:
	{
		String_t* L_40 = V_1;
		bool L_41;
		L_41 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_40, _stringLiteralFC341A1966AF28A9A7A26EDFB78ABBF7DE4D0E1F, NULL);
		if (L_41)
		{
			goto IL_0335;
		}
	}
	{
		goto IL_0420;
	}

IL_01c9:
	{
		String_t* L_42 = V_1;
		bool L_43;
		L_43 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_42, _stringLiteralE8744A8B8BD390EB66CA0CAE2376C973E6904FFB, NULL);
		if (L_43)
		{
			goto IL_034c;
		}
	}
	{
		goto IL_0420;
	}

IL_01de:
	{
		String_t* L_44 = V_1;
		bool L_45;
		L_45 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_44, _stringLiteralF9BE17D634D1B07BCDCDA77A87710C946D81307B, NULL);
		if (L_45)
		{
			goto IL_0363;
		}
	}
	{
		goto IL_0420;
	}

IL_01f3:
	{
		String_t* L_46 = V_1;
		bool L_47;
		L_47 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_46, _stringLiteralFA5EC7168E9633DAAEAA255ECB55030EA60F064F, NULL);
		if (L_47)
		{
			goto IL_037a;
		}
	}
	{
		goto IL_0420;
	}

IL_0208:
	{
		String_t* L_48 = V_1;
		bool L_49;
		L_49 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_48, _stringLiteralEB0A157666700D8227FD4B66A26FDC02035E89BF, NULL);
		if (L_49)
		{
			goto IL_038c;
		}
	}
	{
		goto IL_0420;
	}

IL_021d:
	{
		String_t* L_50 = V_1;
		bool L_51;
		L_51 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_50, _stringLiteral8E54BB51E569CB6A8D3C45D8AEF883A1559C1C0E, NULL);
		if (L_51)
		{
			goto IL_039e;
		}
	}
	{
		goto IL_0420;
	}

IL_0232:
	{
		String_t* L_52 = V_1;
		bool L_53;
		L_53 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_52, _stringLiteral60E56797D122AE71D3774956F66C6EEB9EA22C05, NULL);
		if (L_53)
		{
			goto IL_03ad;
		}
	}
	{
		goto IL_0420;
	}

IL_0247:
	{
		String_t* L_54 = V_1;
		bool L_55;
		L_55 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_54, _stringLiteral01837E2252AC8026A5EA3567A663017A662FBB70, NULL);
		if (L_55)
		{
			goto IL_03bc;
		}
	}
	{
		goto IL_0420;
	}

IL_025c:
	{
		String_t* L_56 = V_1;
		bool L_57;
		L_57 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_56, _stringLiteralF66E9083C67855AB6EBB4B74342E385A72AACE32, NULL);
		if (L_57)
		{
			goto IL_03d0;
		}
	}
	{
		goto IL_0420;
	}

IL_0271:
	{
		String_t* L_58 = V_1;
		bool L_59;
		L_59 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_58, _stringLiteral91811EE149061D28B38320E2430CE8888AD6398B, NULL);
		if (L_59)
		{
			goto IL_03e4;
		}
	}
	{
		goto IL_0420;
	}

IL_0286:
	{
		String_t* L_60 = V_1;
		bool L_61;
		L_61 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_60, _stringLiteral6686C366F645244186604A3DA4B9A58012A85F1B, NULL);
		if (L_61)
		{
			goto IL_03f8;
		}
	}
	{
		goto IL_0420;
	}

IL_029b:
	{
		String_t* L_62 = V_1;
		bool L_63;
		L_63 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_62, _stringLiteralCA1B66E295BD92E9FD3B6C708F09CA69A50BEFD1, NULL);
		if (L_63)
		{
			goto IL_040c;
		}
	}
	{
		goto IL_0420;
	}

IL_02b0:
	{
		// instance.enabled = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_64 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_65 = ((ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_64);
		bool L_66;
		L_66 = GenericVirtualFuncInvoker1< bool, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mFFB70EE53D8CD0255A4E599780F62A3EB1520E83_RuntimeMethod_var, L_64, L_65);
		ShapeModule_set_enabled_m6BA02351FEED67A82664135B922DDA66D71DF399((&V_0), L_66, NULL);
		// break;
		goto IL_0426;
	}

IL_02c7:
	{
		// instance.shapeType = reader.Read<UnityEngine.ParticleSystemShapeType>();
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_67 = ___reader0;
		NullCheck(L_67);
		int32_t L_68;
		L_68 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisParticleSystemShapeType_tADE62D07EDA71578326A03B50871391EE01F73BB_m3423F2435F483F46ABB4C8EAD9B78CD03D2742FB_RuntimeMethod_var, L_67);
		ShapeModule_set_shapeType_m4B5D1EA91037AD7065FE1D23652D919FED4D6D7F((&V_0), L_68, NULL);
		// break;
		goto IL_0426;
	}

IL_02d9:
	{
		// instance.randomDirectionAmount = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_69 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_70 = ((ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_69);
		float L_71;
		L_71 = GenericVirtualFuncInvoker1< float, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mA86928BC888E342D2C2644535E3399952F5077ED_RuntimeMethod_var, L_69, L_70);
		ShapeModule_set_randomDirectionAmount_m398CEE6D93207797559A80CE49A0C4138C96D0B3((&V_0), L_71, NULL);
		// break;
		goto IL_0426;
	}

IL_02f0:
	{
		// instance.sphericalDirectionAmount = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_72 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_73 = ((ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_72);
		float L_74;
		L_74 = GenericVirtualFuncInvoker1< float, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mA86928BC888E342D2C2644535E3399952F5077ED_RuntimeMethod_var, L_72, L_73);
		ShapeModule_set_sphericalDirectionAmount_m395143D474E51CE6AAF81C9DB84028A16B9BCAAB((&V_0), L_74, NULL);
		// break;
		goto IL_0426;
	}

IL_0307:
	{
		// instance.alignToDirection = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_75 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_76 = ((ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_75);
		bool L_77;
		L_77 = GenericVirtualFuncInvoker1< bool, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mFFB70EE53D8CD0255A4E599780F62A3EB1520E83_RuntimeMethod_var, L_75, L_76);
		ShapeModule_set_alignToDirection_mD632613E0E343654E6569F22BC9EFBB9247AC581((&V_0), L_77, NULL);
		// break;
		goto IL_0426;
	}

IL_031e:
	{
		// instance.radius = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_78 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_79 = ((ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_78);
		float L_80;
		L_80 = GenericVirtualFuncInvoker1< float, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mA86928BC888E342D2C2644535E3399952F5077ED_RuntimeMethod_var, L_78, L_79);
		ShapeModule_set_radius_m37F79E13EB60FA39EAE36B49DAC4AC880416E89C((&V_0), L_80, NULL);
		// break;
		goto IL_0426;
	}

IL_0335:
	{
		// instance.angle = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_81 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_82 = ((ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_81);
		float L_83;
		L_83 = GenericVirtualFuncInvoker1< float, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mA86928BC888E342D2C2644535E3399952F5077ED_RuntimeMethod_var, L_81, L_82);
		ShapeModule_set_angle_m62F5F037CD1DF55172B2D64DBF8271F9F917133A((&V_0), L_83, NULL);
		// break;
		goto IL_0426;
	}

IL_034c:
	{
		// instance.length = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_84 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_85 = ((ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_84);
		float L_86;
		L_86 = GenericVirtualFuncInvoker1< float, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mA86928BC888E342D2C2644535E3399952F5077ED_RuntimeMethod_var, L_84, L_85);
		ShapeModule_set_length_mD38341192A10095F9D0217993D410939F90CE621((&V_0), L_86, NULL);
		// break;
		goto IL_0426;
	}

IL_0363:
	{
		// instance.scale = reader.Read<UnityEngine.Vector3>(ES3Type_Vector3.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_87 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_88 = ((ES3Type_Vector3_t29E9EC31EED86489FBD8A22FBD317F5BD5C3A3E9_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Vector3_t29E9EC31EED86489FBD8A22FBD317F5BD5C3A3E9_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_87);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_89;
		L_89 = GenericVirtualFuncInvoker1< Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_m41744F4EDB47642D9EF02C774ADD5EADDE749262_RuntimeMethod_var, L_87, L_88);
		ShapeModule_set_scale_mDA84B80016FDA6B6EE181B108C3E59A2FFF9143D((&V_0), L_89, NULL);
		// break;
		goto IL_0426;
	}

IL_037a:
	{
		// instance.meshShapeType = reader.Read<UnityEngine.ParticleSystemMeshShapeType>();
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_90 = ___reader0;
		NullCheck(L_90);
		int32_t L_91;
		L_91 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisParticleSystemMeshShapeType_t260D7CAA6014D0ACE2BCFE0BC588E1ADE3AF98E5_m2E1596CACABC5B7BB194A74A92C1E5627B3DB9D0_RuntimeMethod_var, L_90);
		ShapeModule_set_meshShapeType_m335ED6F02244A07F8557E900D9935A4220AD23D0((&V_0), L_91, NULL);
		// break;
		goto IL_0426;
	}

IL_038c:
	{
		// instance.mesh = reader.Read<UnityEngine.Mesh>();
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_92 = ___reader0;
		NullCheck(L_92);
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_93;
		L_93 = GenericVirtualFuncInvoker0< Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* >::Invoke(ES3Reader_Read_TisMesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4_m4DD8C0823DA528C84509E776081834CEAC71FE88_RuntimeMethod_var, L_92);
		ShapeModule_set_mesh_m75450DE287A91452C63021F100D8B6A65A921CE1((&V_0), L_93, NULL);
		// break;
		goto IL_0426;
	}

IL_039e:
	{
		// instance.meshRenderer = reader.Read<UnityEngine.MeshRenderer>();
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_94 = ___reader0;
		NullCheck(L_94);
		MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE* L_95;
		L_95 = GenericVirtualFuncInvoker0< MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE* >::Invoke(ES3Reader_Read_TisMeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE_mADE66001251FAEAB39EE97DA447D0A80EAAB85C4_RuntimeMethod_var, L_94);
		ShapeModule_set_meshRenderer_m25111B1DC9F173FE054264094DB19564D375D1D6((&V_0), L_95, NULL);
		// break;
		goto IL_0426;
	}

IL_03ad:
	{
		// instance.skinnedMeshRenderer = reader.Read<UnityEngine.SkinnedMeshRenderer>();
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_96 = ___reader0;
		NullCheck(L_96);
		SkinnedMeshRenderer_t020C4E8648EA1C4C6BA5C41502919B387E7E1C2E* L_97;
		L_97 = GenericVirtualFuncInvoker0< SkinnedMeshRenderer_t020C4E8648EA1C4C6BA5C41502919B387E7E1C2E* >::Invoke(ES3Reader_Read_TisSkinnedMeshRenderer_t020C4E8648EA1C4C6BA5C41502919B387E7E1C2E_m9E77EF921E4ACFCE425D24538209CF592968463E_RuntimeMethod_var, L_96);
		ShapeModule_set_skinnedMeshRenderer_mB3B9D58C4A9D21F990EC2000D38B5E35C7FF5807((&V_0), L_97, NULL);
		// break;
		goto IL_0426;
	}

IL_03bc:
	{
		// instance.useMeshMaterialIndex = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_98 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_99 = ((ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_98);
		bool L_100;
		L_100 = GenericVirtualFuncInvoker1< bool, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mFFB70EE53D8CD0255A4E599780F62A3EB1520E83_RuntimeMethod_var, L_98, L_99);
		ShapeModule_set_useMeshMaterialIndex_m48CE9CB5BA8CAF93D4C92975B826A7BA8459B838((&V_0), L_100, NULL);
		// break;
		goto IL_0426;
	}

IL_03d0:
	{
		// instance.meshMaterialIndex = reader.Read<System.Int32>(ES3Type_int.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_101 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_102 = ((ES3Type_int_t05A5E7A96442F23CE33E24A71CD349372A70E0C3_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_int_t05A5E7A96442F23CE33E24A71CD349372A70E0C3_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_101);
		int32_t L_103;
		L_103 = GenericVirtualFuncInvoker1< int32_t, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mEFCC4D52DD5B822D3561A53591AE11CDB25CDB6F_RuntimeMethod_var, L_101, L_102);
		ShapeModule_set_meshMaterialIndex_mC72EF43FC31A137D1247E748E89FE0FF5FB2C29F((&V_0), L_103, NULL);
		// break;
		goto IL_0426;
	}

IL_03e4:
	{
		// instance.useMeshColors = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_104 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_105 = ((ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_104);
		bool L_106;
		L_106 = GenericVirtualFuncInvoker1< bool, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mFFB70EE53D8CD0255A4E599780F62A3EB1520E83_RuntimeMethod_var, L_104, L_105);
		ShapeModule_set_useMeshColors_m2B12B03E04E2ACEE2AE68B697F462232D42D6C6E((&V_0), L_106, NULL);
		// break;
		goto IL_0426;
	}

IL_03f8:
	{
		// instance.normalOffset = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_107 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_108 = ((ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_107);
		float L_109;
		L_109 = GenericVirtualFuncInvoker1< float, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mA86928BC888E342D2C2644535E3399952F5077ED_RuntimeMethod_var, L_107, L_108);
		ShapeModule_set_normalOffset_m24453DEF085D96323A09DEBD134283B7F23C263F((&V_0), L_109, NULL);
		// break;
		goto IL_0426;
	}

IL_040c:
	{
		// instance.arc = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_110 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_111 = ((ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_110);
		float L_112;
		L_112 = GenericVirtualFuncInvoker1< float, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mA86928BC888E342D2C2644535E3399952F5077ED_RuntimeMethod_var, L_110, L_111);
		ShapeModule_set_arc_mE9EF87E2AA959143B466CD55B7DAA65FBE155D1F((&V_0), L_112, NULL);
		// break;
		goto IL_0426;
	}

IL_0420:
	{
		// reader.Skip();
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_113 = ___reader0;
		NullCheck(L_113);
		VirtualActionInvoker0::Invoke(41 /* System.Void ES3Reader::Skip() */, L_113);
	}

IL_0426:
	{
		// while((propertyName = reader.ReadPropertyName()) != null)
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_114 = ___reader0;
		NullCheck(L_114);
		String_t* L_115;
		L_115 = VirtualFuncInvoker0< String_t* >::Invoke(21 /* System.String ES3Reader::ReadPropertyName() */, L_114);
		String_t* L_116 = L_115;
		V_1 = L_116;
		if (L_116)
		{
			goto IL_000c;
		}
	}
	{
		// }
		return;
	}
}
// System.Void ES3Types.ES3Type_ShapeModule::ReadInto<UnityEngine.ParticleSystem/VelocityOverLifetimeModule>(ES3Reader,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ES3Type_ShapeModule_ReadInto_TisVelocityOverLifetimeModule_tB4A3291E3D2E850257EE3F8344AAEDA06D7FCE56_mB0237156617D66BCC203C55B599EBFB28DECDE33_gshared (ES3Type_ShapeModule_t2A98821A3CBBB891C72216EA1D86C9579DFD70B7* __this, ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* ___reader0, RuntimeObject* ___obj1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mFFB70EE53D8CD0255A4E599780F62A3EB1520E83_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mEFCC4D52DD5B822D3561A53591AE11CDB25CDB6F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisMeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE_mADE66001251FAEAB39EE97DA447D0A80EAAB85C4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisMesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4_m4DD8C0823DA528C84509E776081834CEAC71FE88_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisParticleSystemMeshShapeType_t260D7CAA6014D0ACE2BCFE0BC588E1ADE3AF98E5_m2E1596CACABC5B7BB194A74A92C1E5627B3DB9D0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisParticleSystemShapeType_tADE62D07EDA71578326A03B50871391EE01F73BB_m3423F2435F483F46ABB4C8EAD9B78CD03D2742FB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mA86928BC888E342D2C2644535E3399952F5077ED_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisSkinnedMeshRenderer_t020C4E8648EA1C4C6BA5C41502919B387E7E1C2E_m9E77EF921E4ACFCE425D24538209CF592968463E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_m41744F4EDB47642D9EF02C774ADD5EADDE749262_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_Vector3_t29E9EC31EED86489FBD8A22FBD317F5BD5C3A3E9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_int_t05A5E7A96442F23CE33E24A71CD349372A70E0C3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ShapeModule_tAA38A0C5305DF2F9D96F89D4B8F762E2D034D8B2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral01837E2252AC8026A5EA3567A663017A662FBB70);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1228466552C1791B2019A329AFE94665D441168A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral60E56797D122AE71D3774956F66C6EEB9EA22C05);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6686C366F645244186604A3DA4B9A58012A85F1B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral82BECCAD895076775062861CDB46AADEF913D969);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8C9F18A4F030B96447955FBBA1A99FFC43B5D8E0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8E54BB51E569CB6A8D3C45D8AEF883A1559C1C0E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral91811EE149061D28B38320E2430CE8888AD6398B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBD49F93A7BC78A69E385CEC0E78F434BD2845A17);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCA1B66E295BD92E9FD3B6C708F09CA69A50BEFD1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE8744A8B8BD390EB66CA0CAE2376C973E6904FFB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEB0A157666700D8227FD4B66A26FDC02035E89BF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralED1F119527A0BCA45125EF8E0F719985DA86C0E1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF66E9083C67855AB6EBB4B74342E385A72AACE32);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF9BE17D634D1B07BCDCDA77A87710C946D81307B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFA5EC7168E9633DAAEAA255ECB55030EA60F064F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFC341A1966AF28A9A7A26EDFB78ABBF7DE4D0E1F);
		s_Il2CppMethodInitialized = true;
	}
	ShapeModule_tAA38A0C5305DF2F9D96F89D4B8F762E2D034D8B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	uint32_t V_2 = 0;
	{
		// var instance = (UnityEngine.ParticleSystem.ShapeModule)obj;
		RuntimeObject* L_0 = ___obj1;
		V_0 = ((*(ShapeModule_tAA38A0C5305DF2F9D96F89D4B8F762E2D034D8B2*)((ShapeModule_tAA38A0C5305DF2F9D96F89D4B8F762E2D034D8B2*)(ShapeModule_tAA38A0C5305DF2F9D96F89D4B8F762E2D034D8B2*)UnBox(L_0, ShapeModule_tAA38A0C5305DF2F9D96F89D4B8F762E2D034D8B2_il2cpp_TypeInfo_var))));
		goto IL_0426;
	}

IL_000c:
	{
		String_t* L_1 = V_1;
		uint32_t L_2;
		L_2 = U3CPrivateImplementationDetailsU3E_ComputeStringHash_m9E43873DE0DF480D27EC1C2AA3C09E74EA77F75D(L_1, NULL);
		V_2 = L_2;
		uint32_t L_3 = V_2;
		if ((!(((uint32_t)L_3) <= ((uint32_t)((int32_t)-2104025999)))))
		{
			goto IL_00ad;
		}
	}
	{
		uint32_t L_4 = V_2;
		if ((!(((uint32_t)L_4) <= ((uint32_t)((int32_t)666576729)))))
		{
			goto IL_0064;
		}
	}
	{
		uint32_t L_5 = V_2;
		if ((!(((uint32_t)L_5) <= ((uint32_t)((int32_t)49525662)))))
		{
			goto IL_0049;
		}
	}
	{
		uint32_t L_6 = V_2;
		if ((((int32_t)L_6) == ((int32_t)((int32_t)24602224))))
		{
			goto IL_0247;
		}
	}
	{
		uint32_t L_7 = V_2;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)49525662))))
		{
			goto IL_0136;
		}
	}
	{
		goto IL_0420;
	}

IL_0049:
	{
		uint32_t L_8 = V_2;
		if ((((int32_t)L_8) == ((int32_t)((int32_t)230313139))))
		{
			goto IL_019f;
		}
	}
	{
		uint32_t L_9 = V_2;
		if ((((int32_t)L_9) == ((int32_t)((int32_t)666576729))))
		{
			goto IL_01f3;
		}
	}
	{
		goto IL_0420;
	}

IL_0064:
	{
		uint32_t L_10 = V_2;
		if ((!(((uint32_t)L_10) <= ((uint32_t)((int32_t)955488309)))))
		{
			goto IL_0087;
		}
	}
	{
		uint32_t L_11 = V_2;
		if ((((int32_t)L_11) == ((int32_t)((int32_t)923624301))))
		{
			goto IL_0232;
		}
	}
	{
		uint32_t L_12 = V_2;
		if ((((int32_t)L_12) == ((int32_t)((int32_t)955488309))))
		{
			goto IL_0286;
		}
	}
	{
		goto IL_0420;
	}

IL_0087:
	{
		uint32_t L_13 = V_2;
		if ((((int32_t)L_13) == ((int32_t)((int32_t)980363995))))
		{
			goto IL_029b;
		}
	}
	{
		uint32_t L_14 = V_2;
		if ((((int32_t)L_14) == ((int32_t)((int32_t)985988853))))
		{
			goto IL_0175;
		}
	}
	{
		uint32_t L_15 = V_2;
		if ((((int32_t)L_15) == ((int32_t)((int32_t)-2104025999))))
		{
			goto IL_01de;
		}
	}
	{
		goto IL_0420;
	}

IL_00ad:
	{
		uint32_t L_16 = V_2;
		if ((!(((uint32_t)L_16) <= ((uint32_t)((int32_t)-1473810612)))))
		{
			goto IL_00f0;
		}
	}
	{
		uint32_t L_17 = V_2;
		if ((!(((uint32_t)L_17) <= ((uint32_t)((int32_t)-1726928010)))))
		{
			goto IL_00d5;
		}
	}
	{
		uint32_t L_18 = V_2;
		if ((((int32_t)L_18) == ((int32_t)((int32_t)-2083506667))))
		{
			goto IL_01c9;
		}
	}
	{
		uint32_t L_19 = V_2;
		if ((((int32_t)L_19) == ((int32_t)((int32_t)-1726928010))))
		{
			goto IL_014b;
		}
	}
	{
		goto IL_0420;
	}

IL_00d5:
	{
		uint32_t L_20 = V_2;
		if ((((int32_t)L_20) == ((int32_t)((int32_t)-1593786692))))
		{
			goto IL_0208;
		}
	}
	{
		uint32_t L_21 = V_2;
		if ((((int32_t)L_21) == ((int32_t)((int32_t)-1473810612))))
		{
			goto IL_018a;
		}
	}
	{
		goto IL_0420;
	}

IL_00f0:
	{
		uint32_t L_22 = V_2;
		if ((!(((uint32_t)L_22) <= ((uint32_t)((int32_t)-1386986472)))))
		{
			goto IL_0110;
		}
	}
	{
		uint32_t L_23 = V_2;
		if ((((int32_t)L_23) == ((int32_t)((int32_t)-1412039661))))
		{
			goto IL_0160;
		}
	}
	{
		uint32_t L_24 = V_2;
		if ((((int32_t)L_24) == ((int32_t)((int32_t)-1386986472))))
		{
			goto IL_01b4;
		}
	}
	{
		goto IL_0420;
	}

IL_0110:
	{
		uint32_t L_25 = V_2;
		if ((((int32_t)L_25) == ((int32_t)((int32_t)-584064197))))
		{
			goto IL_021d;
		}
	}
	{
		uint32_t L_26 = V_2;
		if ((((int32_t)L_26) == ((int32_t)((int32_t)-473474755))))
		{
			goto IL_0271;
		}
	}
	{
		uint32_t L_27 = V_2;
		if ((((int32_t)L_27) == ((int32_t)((int32_t)-365686981))))
		{
			goto IL_025c;
		}
	}
	{
		goto IL_0420;
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
		goto IL_0420;
	}

IL_014b:
	{
		String_t* L_30 = V_1;
		bool L_31;
		L_31 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_30, _stringLiteral82BECCAD895076775062861CDB46AADEF913D969, NULL);
		if (L_31)
		{
			goto IL_02c7;
		}
	}
	{
		goto IL_0420;
	}

IL_0160:
	{
		String_t* L_32 = V_1;
		bool L_33;
		L_33 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_32, _stringLiteral1228466552C1791B2019A329AFE94665D441168A, NULL);
		if (L_33)
		{
			goto IL_02d9;
		}
	}
	{
		goto IL_0420;
	}

IL_0175:
	{
		String_t* L_34 = V_1;
		bool L_35;
		L_35 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_34, _stringLiteralBD49F93A7BC78A69E385CEC0E78F434BD2845A17, NULL);
		if (L_35)
		{
			goto IL_02f0;
		}
	}
	{
		goto IL_0420;
	}

IL_018a:
	{
		String_t* L_36 = V_1;
		bool L_37;
		L_37 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_36, _stringLiteralED1F119527A0BCA45125EF8E0F719985DA86C0E1, NULL);
		if (L_37)
		{
			goto IL_0307;
		}
	}
	{
		goto IL_0420;
	}

IL_019f:
	{
		String_t* L_38 = V_1;
		bool L_39;
		L_39 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_38, _stringLiteral8C9F18A4F030B96447955FBBA1A99FFC43B5D8E0, NULL);
		if (L_39)
		{
			goto IL_031e;
		}
	}
	{
		goto IL_0420;
	}

IL_01b4:
	{
		String_t* L_40 = V_1;
		bool L_41;
		L_41 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_40, _stringLiteralFC341A1966AF28A9A7A26EDFB78ABBF7DE4D0E1F, NULL);
		if (L_41)
		{
			goto IL_0335;
		}
	}
	{
		goto IL_0420;
	}

IL_01c9:
	{
		String_t* L_42 = V_1;
		bool L_43;
		L_43 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_42, _stringLiteralE8744A8B8BD390EB66CA0CAE2376C973E6904FFB, NULL);
		if (L_43)
		{
			goto IL_034c;
		}
	}
	{
		goto IL_0420;
	}

IL_01de:
	{
		String_t* L_44 = V_1;
		bool L_45;
		L_45 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_44, _stringLiteralF9BE17D634D1B07BCDCDA77A87710C946D81307B, NULL);
		if (L_45)
		{
			goto IL_0363;
		}
	}
	{
		goto IL_0420;
	}

IL_01f3:
	{
		String_t* L_46 = V_1;
		bool L_47;
		L_47 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_46, _stringLiteralFA5EC7168E9633DAAEAA255ECB55030EA60F064F, NULL);
		if (L_47)
		{
			goto IL_037a;
		}
	}
	{
		goto IL_0420;
	}

IL_0208:
	{
		String_t* L_48 = V_1;
		bool L_49;
		L_49 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_48, _stringLiteralEB0A157666700D8227FD4B66A26FDC02035E89BF, NULL);
		if (L_49)
		{
			goto IL_038c;
		}
	}
	{
		goto IL_0420;
	}

IL_021d:
	{
		String_t* L_50 = V_1;
		bool L_51;
		L_51 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_50, _stringLiteral8E54BB51E569CB6A8D3C45D8AEF883A1559C1C0E, NULL);
		if (L_51)
		{
			goto IL_039e;
		}
	}
	{
		goto IL_0420;
	}

IL_0232:
	{
		String_t* L_52 = V_1;
		bool L_53;
		L_53 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_52, _stringLiteral60E56797D122AE71D3774956F66C6EEB9EA22C05, NULL);
		if (L_53)
		{
			goto IL_03ad;
		}
	}
	{
		goto IL_0420;
	}

IL_0247:
	{
		String_t* L_54 = V_1;
		bool L_55;
		L_55 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_54, _stringLiteral01837E2252AC8026A5EA3567A663017A662FBB70, NULL);
		if (L_55)
		{
			goto IL_03bc;
		}
	}
	{
		goto IL_0420;
	}

IL_025c:
	{
		String_t* L_56 = V_1;
		bool L_57;
		L_57 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_56, _stringLiteralF66E9083C67855AB6EBB4B74342E385A72AACE32, NULL);
		if (L_57)
		{
			goto IL_03d0;
		}
	}
	{
		goto IL_0420;
	}

IL_0271:
	{
		String_t* L_58 = V_1;
		bool L_59;
		L_59 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_58, _stringLiteral91811EE149061D28B38320E2430CE8888AD6398B, NULL);
		if (L_59)
		{
			goto IL_03e4;
		}
	}
	{
		goto IL_0420;
	}

IL_0286:
	{
		String_t* L_60 = V_1;
		bool L_61;
		L_61 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_60, _stringLiteral6686C366F645244186604A3DA4B9A58012A85F1B, NULL);
		if (L_61)
		{
			goto IL_03f8;
		}
	}
	{
		goto IL_0420;
	}

IL_029b:
	{
		String_t* L_62 = V_1;
		bool L_63;
		L_63 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_62, _stringLiteralCA1B66E295BD92E9FD3B6C708F09CA69A50BEFD1, NULL);
		if (L_63)
		{
			goto IL_040c;
		}
	}
	{
		goto IL_0420;
	}

IL_02b0:
	{
		// instance.enabled = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_64 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_65 = ((ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_64);
		bool L_66;
		L_66 = GenericVirtualFuncInvoker1< bool, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mFFB70EE53D8CD0255A4E599780F62A3EB1520E83_RuntimeMethod_var, L_64, L_65);
		ShapeModule_set_enabled_m6BA02351FEED67A82664135B922DDA66D71DF399((&V_0), L_66, NULL);
		// break;
		goto IL_0426;
	}

IL_02c7:
	{
		// instance.shapeType = reader.Read<UnityEngine.ParticleSystemShapeType>();
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_67 = ___reader0;
		NullCheck(L_67);
		int32_t L_68;
		L_68 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisParticleSystemShapeType_tADE62D07EDA71578326A03B50871391EE01F73BB_m3423F2435F483F46ABB4C8EAD9B78CD03D2742FB_RuntimeMethod_var, L_67);
		ShapeModule_set_shapeType_m4B5D1EA91037AD7065FE1D23652D919FED4D6D7F((&V_0), L_68, NULL);
		// break;
		goto IL_0426;
	}

IL_02d9:
	{
		// instance.randomDirectionAmount = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_69 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_70 = ((ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_69);
		float L_71;
		L_71 = GenericVirtualFuncInvoker1< float, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mA86928BC888E342D2C2644535E3399952F5077ED_RuntimeMethod_var, L_69, L_70);
		ShapeModule_set_randomDirectionAmount_m398CEE6D93207797559A80CE49A0C4138C96D0B3((&V_0), L_71, NULL);
		// break;
		goto IL_0426;
	}

IL_02f0:
	{
		// instance.sphericalDirectionAmount = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_72 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_73 = ((ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_72);
		float L_74;
		L_74 = GenericVirtualFuncInvoker1< float, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mA86928BC888E342D2C2644535E3399952F5077ED_RuntimeMethod_var, L_72, L_73);
		ShapeModule_set_sphericalDirectionAmount_m395143D474E51CE6AAF81C9DB84028A16B9BCAAB((&V_0), L_74, NULL);
		// break;
		goto IL_0426;
	}

IL_0307:
	{
		// instance.alignToDirection = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_75 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_76 = ((ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_75);
		bool L_77;
		L_77 = GenericVirtualFuncInvoker1< bool, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mFFB70EE53D8CD0255A4E599780F62A3EB1520E83_RuntimeMethod_var, L_75, L_76);
		ShapeModule_set_alignToDirection_mD632613E0E343654E6569F22BC9EFBB9247AC581((&V_0), L_77, NULL);
		// break;
		goto IL_0426;
	}

IL_031e:
	{
		// instance.radius = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_78 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_79 = ((ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_78);
		float L_80;
		L_80 = GenericVirtualFuncInvoker1< float, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mA86928BC888E342D2C2644535E3399952F5077ED_RuntimeMethod_var, L_78, L_79);
		ShapeModule_set_radius_m37F79E13EB60FA39EAE36B49DAC4AC880416E89C((&V_0), L_80, NULL);
		// break;
		goto IL_0426;
	}

IL_0335:
	{
		// instance.angle = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_81 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_82 = ((ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_81);
		float L_83;
		L_83 = GenericVirtualFuncInvoker1< float, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mA86928BC888E342D2C2644535E3399952F5077ED_RuntimeMethod_var, L_81, L_82);
		ShapeModule_set_angle_m62F5F037CD1DF55172B2D64DBF8271F9F917133A((&V_0), L_83, NULL);
		// break;
		goto IL_0426;
	}

IL_034c:
	{
		// instance.length = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_84 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_85 = ((ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_84);
		float L_86;
		L_86 = GenericVirtualFuncInvoker1< float, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mA86928BC888E342D2C2644535E3399952F5077ED_RuntimeMethod_var, L_84, L_85);
		ShapeModule_set_length_mD38341192A10095F9D0217993D410939F90CE621((&V_0), L_86, NULL);
		// break;
		goto IL_0426;
	}

IL_0363:
	{
		// instance.scale = reader.Read<UnityEngine.Vector3>(ES3Type_Vector3.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_87 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_88 = ((ES3Type_Vector3_t29E9EC31EED86489FBD8A22FBD317F5BD5C3A3E9_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Vector3_t29E9EC31EED86489FBD8A22FBD317F5BD5C3A3E9_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_87);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_89;
		L_89 = GenericVirtualFuncInvoker1< Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_m41744F4EDB47642D9EF02C774ADD5EADDE749262_RuntimeMethod_var, L_87, L_88);
		ShapeModule_set_scale_mDA84B80016FDA6B6EE181B108C3E59A2FFF9143D((&V_0), L_89, NULL);
		// break;
		goto IL_0426;
	}

IL_037a:
	{
		// instance.meshShapeType = reader.Read<UnityEngine.ParticleSystemMeshShapeType>();
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_90 = ___reader0;
		NullCheck(L_90);
		int32_t L_91;
		L_91 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisParticleSystemMeshShapeType_t260D7CAA6014D0ACE2BCFE0BC588E1ADE3AF98E5_m2E1596CACABC5B7BB194A74A92C1E5627B3DB9D0_RuntimeMethod_var, L_90);
		ShapeModule_set_meshShapeType_m335ED6F02244A07F8557E900D9935A4220AD23D0((&V_0), L_91, NULL);
		// break;
		goto IL_0426;
	}

IL_038c:
	{
		// instance.mesh = reader.Read<UnityEngine.Mesh>();
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_92 = ___reader0;
		NullCheck(L_92);
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_93;
		L_93 = GenericVirtualFuncInvoker0< Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* >::Invoke(ES3Reader_Read_TisMesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4_m4DD8C0823DA528C84509E776081834CEAC71FE88_RuntimeMethod_var, L_92);
		ShapeModule_set_mesh_m75450DE287A91452C63021F100D8B6A65A921CE1((&V_0), L_93, NULL);
		// break;
		goto IL_0426;
	}

IL_039e:
	{
		// instance.meshRenderer = reader.Read<UnityEngine.MeshRenderer>();
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_94 = ___reader0;
		NullCheck(L_94);
		MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE* L_95;
		L_95 = GenericVirtualFuncInvoker0< MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE* >::Invoke(ES3Reader_Read_TisMeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE_mADE66001251FAEAB39EE97DA447D0A80EAAB85C4_RuntimeMethod_var, L_94);
		ShapeModule_set_meshRenderer_m25111B1DC9F173FE054264094DB19564D375D1D6((&V_0), L_95, NULL);
		// break;
		goto IL_0426;
	}

IL_03ad:
	{
		// instance.skinnedMeshRenderer = reader.Read<UnityEngine.SkinnedMeshRenderer>();
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_96 = ___reader0;
		NullCheck(L_96);
		SkinnedMeshRenderer_t020C4E8648EA1C4C6BA5C41502919B387E7E1C2E* L_97;
		L_97 = GenericVirtualFuncInvoker0< SkinnedMeshRenderer_t020C4E8648EA1C4C6BA5C41502919B387E7E1C2E* >::Invoke(ES3Reader_Read_TisSkinnedMeshRenderer_t020C4E8648EA1C4C6BA5C41502919B387E7E1C2E_m9E77EF921E4ACFCE425D24538209CF592968463E_RuntimeMethod_var, L_96);
		ShapeModule_set_skinnedMeshRenderer_mB3B9D58C4A9D21F990EC2000D38B5E35C7FF5807((&V_0), L_97, NULL);
		// break;
		goto IL_0426;
	}

IL_03bc:
	{
		// instance.useMeshMaterialIndex = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_98 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_99 = ((ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_98);
		bool L_100;
		L_100 = GenericVirtualFuncInvoker1< bool, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mFFB70EE53D8CD0255A4E599780F62A3EB1520E83_RuntimeMethod_var, L_98, L_99);
		ShapeModule_set_useMeshMaterialIndex_m48CE9CB5BA8CAF93D4C92975B826A7BA8459B838((&V_0), L_100, NULL);
		// break;
		goto IL_0426;
	}

IL_03d0:
	{
		// instance.meshMaterialIndex = reader.Read<System.Int32>(ES3Type_int.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_101 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_102 = ((ES3Type_int_t05A5E7A96442F23CE33E24A71CD349372A70E0C3_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_int_t05A5E7A96442F23CE33E24A71CD349372A70E0C3_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_101);
		int32_t L_103;
		L_103 = GenericVirtualFuncInvoker1< int32_t, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mEFCC4D52DD5B822D3561A53591AE11CDB25CDB6F_RuntimeMethod_var, L_101, L_102);
		ShapeModule_set_meshMaterialIndex_mC72EF43FC31A137D1247E748E89FE0FF5FB2C29F((&V_0), L_103, NULL);
		// break;
		goto IL_0426;
	}

IL_03e4:
	{
		// instance.useMeshColors = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_104 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_105 = ((ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_104);
		bool L_106;
		L_106 = GenericVirtualFuncInvoker1< bool, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mFFB70EE53D8CD0255A4E599780F62A3EB1520E83_RuntimeMethod_var, L_104, L_105);
		ShapeModule_set_useMeshColors_m2B12B03E04E2ACEE2AE68B697F462232D42D6C6E((&V_0), L_106, NULL);
		// break;
		goto IL_0426;
	}

IL_03f8:
	{
		// instance.normalOffset = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_107 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_108 = ((ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_107);
		float L_109;
		L_109 = GenericVirtualFuncInvoker1< float, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mA86928BC888E342D2C2644535E3399952F5077ED_RuntimeMethod_var, L_107, L_108);
		ShapeModule_set_normalOffset_m24453DEF085D96323A09DEBD134283B7F23C263F((&V_0), L_109, NULL);
		// break;
		goto IL_0426;
	}

IL_040c:
	{
		// instance.arc = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_110 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_111 = ((ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_110);
		float L_112;
		L_112 = GenericVirtualFuncInvoker1< float, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mA86928BC888E342D2C2644535E3399952F5077ED_RuntimeMethod_var, L_110, L_111);
		ShapeModule_set_arc_mE9EF87E2AA959143B466CD55B7DAA65FBE155D1F((&V_0), L_112, NULL);
		// break;
		goto IL_0426;
	}

IL_0420:
	{
		// reader.Skip();
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_113 = ___reader0;
		NullCheck(L_113);
		VirtualActionInvoker0::Invoke(41 /* System.Void ES3Reader::Skip() */, L_113);
	}

IL_0426:
	{
		// while((propertyName = reader.ReadPropertyName()) != null)
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_114 = ___reader0;
		NullCheck(L_114);
		String_t* L_115;
		L_115 = VirtualFuncInvoker0< String_t* >::Invoke(21 /* System.String ES3Reader::ReadPropertyName() */, L_114);
		String_t* L_116 = L_115;
		V_1 = L_116;
		if (L_116)
		{
			goto IL_000c;
		}
	}
	{
		// }
		return;
	}
}
