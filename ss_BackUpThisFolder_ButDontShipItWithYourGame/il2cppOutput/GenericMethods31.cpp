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

// UnityEngine.BoneWeight[]
struct BoneWeightU5BU5D_t76F390D8CBA0ADCB87EB98B135C8886857DFE651;
// UnityEngine.Color32[]
struct Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259;
// ES3Internal.ES3Member[]
struct ES3MemberU5BU5D_t985708A4E9373BBDD77FF87081DB836863066E48;
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
// UnityEngine.Material[]
struct MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D;
// UnityEngine.Matrix4x4[]
struct Matrix4x4U5BU5D_t9C51C93425FABC022B506D2DB3A5FA70F9752C4D;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C;
// UnityEngine.Vector4[]
struct Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD;
// UnityEngine.AnimationCurve
struct AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354;
// UnityEngine.Collider
struct Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76;
// ES3Reader
struct ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518;
// ES3Settings
struct ES3Settings_t5FF4E8DB95573CB739527FD69BD1823D602885C1;
// ES3Types.ES3Type
struct ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE;
// ES3Types.ES3Type_Matrix4x4
struct ES3Type_Matrix4x4_t9AC0DD88A660CC29B53E58E1E569A6CCBB1EFE3C;
// ES3Types.ES3Type_Mesh
struct ES3Type_Mesh_tB7CD0BF677668097D339633406535F749DDDFE48;
// ES3Types.ES3Type_MeshCollider
struct ES3Type_MeshCollider_tA8109C5749E5D9BB9FCBB3AD7C5F94EEFE979523;
// ES3Types.ES3Type_MeshFilter
struct ES3Type_MeshFilter_tFA3639E83C44E316068AEF87DEE5D8BFFD64C5C3;
// ES3Types.ES3Type_MeshRenderer
struct ES3Type_MeshRenderer_tACCD9205BF829C22AFFE5FE2EFA25EE18337E2B1;
// ES3Types.ES3Type_MinMaxCurve
struct ES3Type_MinMaxCurve_t1C147718750ACBECE5D2B7F545D2A434A3C5409B;
// ES3Types.ES3Type_MinMaxGradient
struct ES3Type_MinMaxGradient_tDE2B65F0D3CF28657A6F04D48DA23B56D4F30CD9;
// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F;
// UnityEngine.Gradient
struct Gradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E;
// System.Collections.IEnumerator
struct IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA;
// UnityEngine.Material
struct Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3;
// UnityEngine.Mesh
struct Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4;
// UnityEngine.MeshCollider
struct MeshCollider_tB525E4DDE383252364ED0BDD32CF2B53914EE455;
// UnityEngine.MeshFilter
struct MeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5;
// UnityEngine.MeshRenderer
struct MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE;
// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C;
// UnityEngine.PhysicMaterial
struct PhysicMaterial_t4ECED34E04BB2148333467208361A5FBFDCD7131;
// UnityEngine.Renderer
struct Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF;
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

IL2CPP_EXTERN_C RuntimeClass* ES3Type_AnimationCurve_tF623128FF51FC3C48A6749619C4915CBE2995CA4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ES3Type_BoneWeightArray_tFAA92ECC1D6765E1F70FFEA9DF3B2B31B6145CCF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ES3Type_Bounds_t7DD589E28271A151FBD0712F3599D195980A6248_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ES3Type_Color32Array_tF57FE9123BFDB6D72D08528E212B3254A6274B61_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ES3Type_Color_t673DF1A1D899E95FF5E687BDC6EE2D5A8A98D958_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ES3Type_GameObject_t7AACC3CCF9FD31A285F90A28AE3331E69A1F02B2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ES3Type_Gradient_tCEF49FD7276F763D540521D30F768BB3C8A5C669_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ES3Type_Matrix4x4Array_t47DDEE22DEA2102D3AA242FF6DF7F33B39ADAE95_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ES3Type_Mesh_tB7CD0BF677668097D339633406535F749DDDFE48_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ES3Type_PhysicMaterial_tF23AD4DEE1D030C59463D762562CF18BB163D35F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ES3Type_Transform_t744F7C45C7A4F966265500803F08C4965797DAD7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ES3Type_Vector2Array_t9039B2B68EDC2EFCCB6D15820CDAFBE7FCB99411_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ES3Type_Vector3Array_t71629B81DCF76559D1A197C5F6357C0410EBED6D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ES3Type_Vector4Array_t1262F5AED18360AAACF70C910DCAE04310FAD446_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ES3Type_Vector4_t20EB9288ABFACFA144B849DBAE5F00003E5D3EF1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ES3Type_intArray_t0282F806407A0709B1F055D1AF105C52C39BB6E6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ES3Type_int_t05A5E7A96442F23CE33E24A71CD349372A70E0C3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ES3Type_string_t0C89CCA6F02AF5B46E66DEF92E77FCEC83C2F068_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MeshCollider_tB525E4DDE383252364ED0BDD32CF2B53914EE455_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* String_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral057B3BF6FF011F75099CE84564ABE58C872288F4;
IL2CPP_EXTERN_C String_t* _stringLiteral05F6EAE9494DB0450DB43C3691D64129962ED751;
IL2CPP_EXTERN_C String_t* _stringLiteral1F9261ABE85940E10CA48B7B42F1E5267F122734;
IL2CPP_EXTERN_C String_t* _stringLiteral227C22F51E4B6583CFC54387461605DDBBB00D14;
IL2CPP_EXTERN_C String_t* _stringLiteral23EC2E17148B28CC0FCAC476B21E689161203B19;
IL2CPP_EXTERN_C String_t* _stringLiteral27906925D50A15B990B586241F08C8ED14226340;
IL2CPP_EXTERN_C String_t* _stringLiteral2E4D3331FC63E1049224549936FAF640E4D0E137;
IL2CPP_EXTERN_C String_t* _stringLiteral338DFB21C4BCDE10C2A6B0F6B758581AB45E283A;
IL2CPP_EXTERN_C String_t* _stringLiteral3450A2BB8216F70D528215A296AEDB3D212C7EED;
IL2CPP_EXTERN_C String_t* _stringLiteral36587A0761A180514C267B50EA888F89871F71DF;
IL2CPP_EXTERN_C String_t* _stringLiteral3C5CBA73DE477A987F6CACAA771042311F4D7450;
IL2CPP_EXTERN_C String_t* _stringLiteral3EC42735CF07DB9169F6821DC94EB45DE6B5E1AA;
IL2CPP_EXTERN_C String_t* _stringLiteral3F8C67011B093417D89377E9DBF57017943FDA11;
IL2CPP_EXTERN_C String_t* _stringLiteral3FDCFD736F0A209B476605D31B517A9412093986;
IL2CPP_EXTERN_C String_t* _stringLiteral416E9D0238C213CFB1C61EDAB93C78CA25E2D04B;
IL2CPP_EXTERN_C String_t* _stringLiteral695F5F858DF14780BC5525F0AA16CE70EB9C45E8;
IL2CPP_EXTERN_C String_t* _stringLiteral6C9DED8087C891AE33ACFFCE806DBFF63795F56F;
IL2CPP_EXTERN_C String_t* _stringLiteral72ECDD9F8744E37D4431E7D17FE954DD88ABF383;
IL2CPP_EXTERN_C String_t* _stringLiteral73792CCBAF937C765700AA0D7388BC226F003166;
IL2CPP_EXTERN_C String_t* _stringLiteral778102C3E486149200F26500543D0E817D018B30;
IL2CPP_EXTERN_C String_t* _stringLiteral7EF771DC1DDB512A8FAB7AF357549BD349530F7D;
IL2CPP_EXTERN_C String_t* _stringLiteral82A38EB534B163662598A55A70842F5AA8919477;
IL2CPP_EXTERN_C String_t* _stringLiteral843D6122FFBBF465C80ECD6FDFC0DF88BEAF4E14;
IL2CPP_EXTERN_C String_t* _stringLiteral852E085EDE387EE50CF0089DAF2F7960EF50B09A;
IL2CPP_EXTERN_C String_t* _stringLiteral87E6319336195D789899F4791CCD5F2437BCC0B0;
IL2CPP_EXTERN_C String_t* _stringLiteral892582A238DF4FFEB2A2E7DD5D90A9A7AC6C26C4;
IL2CPP_EXTERN_C String_t* _stringLiteral8DD0A7170C2DECE4F5E82F96AB9B00AAEBA9F438;
IL2CPP_EXTERN_C String_t* _stringLiteral8F76FFC503D9127950E3EAD1DFD82A8C6C91F728;
IL2CPP_EXTERN_C String_t* _stringLiteral901354A635771DDD959835AF907BCC0E66B8C186;
IL2CPP_EXTERN_C String_t* _stringLiteral99B5B7F51660385511EC8AC7334ABBB898CFC2BF;
IL2CPP_EXTERN_C String_t* _stringLiteral9A92D5C8DA89C6E80E74B010F4E5AAA4F4E0C945;
IL2CPP_EXTERN_C String_t* _stringLiteralA0ECA3668A8B14855295BD8DD5E88309AF31330B;
IL2CPP_EXTERN_C String_t* _stringLiteralA61873D60BF9FB4C32F7EA140D55CF8C712B7E86;
IL2CPP_EXTERN_C String_t* _stringLiteralAF248E82BE9EBA1ADBF067429FAEE5A5B6E05A74;
IL2CPP_EXTERN_C String_t* _stringLiteralB1C30CF60A2E69EC232854CAED20E364C46D862F;
IL2CPP_EXTERN_C String_t* _stringLiteralB5831A880405F69C8EF7F43534BF4D880F2B9A12;
IL2CPP_EXTERN_C String_t* _stringLiteralB780B47DCEE9180898A6245E7652C29FC7F6A7BC;
IL2CPP_EXTERN_C String_t* _stringLiteralBAAD864060C726C9944913CA5D3695DC7027ADAA;
IL2CPP_EXTERN_C String_t* _stringLiteralBCA8FD5F6CF117BC613330313E82DF905908323F;
IL2CPP_EXTERN_C String_t* _stringLiteralBDBEBC1E8A863EAF2A1EFDC4D2393F1540ABF0C9;
IL2CPP_EXTERN_C String_t* _stringLiteralBF92C939C85D8888B68A1C0E975839B22C2F1CA0;
IL2CPP_EXTERN_C String_t* _stringLiteralC8D7651AAAFAAA9A55123A4B14C546BC27C603E7;
IL2CPP_EXTERN_C String_t* _stringLiteralD0D915A2B403702AB1F18A340F6557F4030455A2;
IL2CPP_EXTERN_C String_t* _stringLiteralD18BDC2D30848C2775BAB81B1520EB5760429863;
IL2CPP_EXTERN_C String_t* _stringLiteralD4A11128F810D574390DA344F324014E964D1876;
IL2CPP_EXTERN_C String_t* _stringLiteralD52AA944806C2B3BFAE356FC41F3C256E5900C8D;
IL2CPP_EXTERN_C String_t* _stringLiteralD66FED67EA1ADEC87F718BC4CEE5ABBE11B4ED17;
IL2CPP_EXTERN_C String_t* _stringLiteralDD0F04E0A3F0BA1F904E0E27720F367F4228C69D;
IL2CPP_EXTERN_C String_t* _stringLiteralDDA23639367EB0B86F361EA02AD294BDFDE6BA0B;
IL2CPP_EXTERN_C String_t* _stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B;
IL2CPP_EXTERN_C const RuntimeMethod* ES3Reader_ReadProperty_TisInt32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_mDD082AEE8B879E881D914C842E79E8EA68C254F2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ES3Reader_ReadProperty_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_mEDC5DE4C01230CE888EE3982FA48F79B598E86DF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ES3Reader_Read_TisAnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_m10F5F132336385185365E73EF668D8D369D3A4A1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ES3Reader_Read_TisBoneWeightU5BU5D_t76F390D8CBA0ADCB87EB98B135C8886857DFE651_m76CB2F6905E271B24E09EE9FB67CBB8172A6B440_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mFFB70EE53D8CD0255A4E599780F62A3EB1520E83_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ES3Reader_Read_TisBounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3_m1DAB1D2953772FCB56E7DB24E9D86F3CB42348F4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ES3Reader_Read_TisColor32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259_m2A78033772A6489F2170F21F8075D8AC586AC084_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ES3Reader_Read_TisColor_tD001788D726C3A7F1379BEED0260B9591F440C1F_m74315D96C24FBB27ED6BD82D4A055A7C3F63CF6D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ES3Reader_Read_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_mF17F721F02D9912C0E9F95ADE84A7350175EA7FF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ES3Reader_Read_TisGradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E_mF96940E05808C12C825D9208C3A2156E5E7A51CD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ES3Reader_Read_TisInt32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_mD1505C01A552AB4C12E6AA1589FCD990DBE6A7FA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ES3Reader_Read_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mEFCC4D52DD5B822D3561A53591AE11CDB25CDB6F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ES3Reader_Read_TisLightProbeUsage_tC6292C7B7CBA0E5AA2A56F40D71F58A7E06C2948_m66BEF16A5A89E757FF33443DDD5CE1051BB50376_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ES3Reader_Read_TisMaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D_mD6C0F6DE0DFCBEEE0ECC2806C3C76B9B9AA49622_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ES3Reader_Read_TisMatrix4x4U5BU5D_t9C51C93425FABC022B506D2DB3A5FA70F9752C4D_m2B358332EF877DDDEF43FD877390D40D97C7D017_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ES3Reader_Read_TisMesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4_m34F6C712B26BFE70E5AAC03798D838583D35D02A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ES3Reader_Read_TisMotionVectorGenerationMode_tE87C61556749260EF5429A0F8FE55DAD30EEAFCB_m8282A371C977788F369BE28A7EC6D07EDA8A24D8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ES3Reader_Read_TisParticleSystemCurveMode_t8BE38B5D6B050709BAE31B5556CFC3DA69FC8405_m066E552CFA7510B509D2175EB72B2402EC615596_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ES3Reader_Read_TisParticleSystemGradientMode_t5525A27D816AC28297038E5A98856B29095C4C1A_mDD6D024B2606F58AEBD67AEDBB6C628A585CE28E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ES3Reader_Read_TisPhysicMaterial_t4ECED34E04BB2148333467208361A5FBFDCD7131_m89694050B5BE6F19D4FA72BAFB61293A02DA5BBF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ES3Reader_Read_TisReflectionProbeUsage_t033508C14CD4AD926A3A215D19913DC21EA22705_m8D386D0E2DCEF800E206280828E9F9989F462116_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ES3Reader_Read_TisShadowCastingMode_tF30806698B37CF120A1A506BD7549EAF308E7C6D_mE74883DA1F57042CE2132D08265B7EDE224066CE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mA86928BC888E342D2C2644535E3399952F5077ED_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ES3Reader_Read_TisString_t_mE83D478C999E69292DB9310C2993B1EE7DD28021_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ES3Reader_Read_TisTransform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1_mB5F67B5F1812826BAC1CF736E8760BF608548454_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ES3Reader_Read_TisVector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA_mAEBB0376131E5E70758FE2F9CDF22B3500994D70_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ES3Reader_Read_TisVector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C_mA2F2FDABF03BDE9693365F378CCF9E075DB20E83_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ES3Reader_Read_TisVector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD_m0EBB9026A04116D4F7D58168C297A420028FEF2D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ES3Reader_Read_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_m6D7FA5D5608370867F7E593271DDFE9DB2CEBD88_RuntimeMethod_var;

struct BoneWeightU5BU5D_t76F390D8CBA0ADCB87EB98B135C8886857DFE651;
struct Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259;
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
struct MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D;
struct Matrix4x4U5BU5D_t9C51C93425FABC022B506D2DB3A5FA70F9752C4D;
struct Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA;
struct Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C;
struct Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD;

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

// UnityEngine.BoneWeight
struct BoneWeight_t7E7DACA0D0F56698E05EBBD839D1D343502EA11F 
{
	// System.Single UnityEngine.BoneWeight::m_Weight0
	float ___m_Weight0_0;
	// System.Single UnityEngine.BoneWeight::m_Weight1
	float ___m_Weight1_1;
	// System.Single UnityEngine.BoneWeight::m_Weight2
	float ___m_Weight2_2;
	// System.Single UnityEngine.BoneWeight::m_Weight3
	float ___m_Weight3_3;
	// System.Int32 UnityEngine.BoneWeight::m_BoneIndex0
	int32_t ___m_BoneIndex0_4;
	// System.Int32 UnityEngine.BoneWeight::m_BoneIndex1
	int32_t ___m_BoneIndex1_5;
	// System.Int32 UnityEngine.BoneWeight::m_BoneIndex2
	int32_t ___m_BoneIndex2_6;
	// System.Int32 UnityEngine.BoneWeight::m_BoneIndex3
	int32_t ___m_BoneIndex3_7;
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

// ES3Types.ES3Type_AnimationCurve
struct ES3Type_AnimationCurve_tF623128FF51FC3C48A6749619C4915CBE2995CA4  : public ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE
{
};

struct ES3Type_AnimationCurve_tF623128FF51FC3C48A6749619C4915CBE2995CA4_StaticFields
{
	// ES3Types.ES3Type ES3Types.ES3Type_AnimationCurve::Instance
	ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* ___Instance_12;
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

// ES3Types.ES3Type_Color
struct ES3Type_Color_t673DF1A1D899E95FF5E687BDC6EE2D5A8A98D958  : public ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE
{
};

struct ES3Type_Color_t673DF1A1D899E95FF5E687BDC6EE2D5A8A98D958_StaticFields
{
	// ES3Types.ES3Type ES3Types.ES3Type_Color::Instance
	ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* ___Instance_12;
};

// ES3Types.ES3Type_Gradient
struct ES3Type_Gradient_tCEF49FD7276F763D540521D30F768BB3C8A5C669  : public ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE
{
};

struct ES3Type_Gradient_tCEF49FD7276F763D540521D30F768BB3C8A5C669_StaticFields
{
	// ES3Types.ES3Type ES3Types.ES3Type_Gradient::Instance
	ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* ___Instance_12;
};

// ES3Types.ES3Type_Matrix4x4
struct ES3Type_Matrix4x4_t9AC0DD88A660CC29B53E58E1E569A6CCBB1EFE3C  : public ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE
{
};

struct ES3Type_Matrix4x4_t9AC0DD88A660CC29B53E58E1E569A6CCBB1EFE3C_StaticFields
{
	// ES3Types.ES3Type ES3Types.ES3Type_Matrix4x4::Instance
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

// UnityEngine.Matrix4x4
struct Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 
{
	// System.Single UnityEngine.Matrix4x4::m00
	float ___m00_0;
	// System.Single UnityEngine.Matrix4x4::m10
	float ___m10_1;
	// System.Single UnityEngine.Matrix4x4::m20
	float ___m20_2;
	// System.Single UnityEngine.Matrix4x4::m30
	float ___m30_3;
	// System.Single UnityEngine.Matrix4x4::m01
	float ___m01_4;
	// System.Single UnityEngine.Matrix4x4::m11
	float ___m11_5;
	// System.Single UnityEngine.Matrix4x4::m21
	float ___m21_6;
	// System.Single UnityEngine.Matrix4x4::m31
	float ___m31_7;
	// System.Single UnityEngine.Matrix4x4::m02
	float ___m02_8;
	// System.Single UnityEngine.Matrix4x4::m12
	float ___m12_9;
	// System.Single UnityEngine.Matrix4x4::m22
	float ___m22_10;
	// System.Single UnityEngine.Matrix4x4::m32
	float ___m32_11;
	// System.Single UnityEngine.Matrix4x4::m03
	float ___m03_12;
	// System.Single UnityEngine.Matrix4x4::m13
	float ___m13_13;
	// System.Single UnityEngine.Matrix4x4::m23
	float ___m23_14;
	// System.Single UnityEngine.Matrix4x4::m33
	float ___m33_15;
};

struct Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6_StaticFields
{
	// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::zeroMatrix
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___zeroMatrix_16;
	// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::identityMatrix
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___identityMatrix_17;
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

// UnityEngine.AnimationCurve
struct AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354  : public RuntimeObject
{
	// System.IntPtr UnityEngine.AnimationCurve::m_Ptr
	intptr_t ___m_Ptr_0;
};
// Native definition for P/Invoke marshalling of UnityEngine.AnimationCurve
struct AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.AnimationCurve
struct AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_marshaled_com
{
	intptr_t ___m_Ptr_0;
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

// ES3Types.ES3Type_PhysicMaterial
struct ES3Type_PhysicMaterial_tF23AD4DEE1D030C59463D762562CF18BB163D35F  : public ES3ObjectType_t97D4D5BF1057D26370EFE65DD23BA3695986EA3C
{
};

struct ES3Type_PhysicMaterial_tF23AD4DEE1D030C59463D762562CF18BB163D35F_StaticFields
{
	// ES3Types.ES3Type ES3Types.ES3Type_PhysicMaterial::Instance
	ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* ___Instance_12;
};

// ES3Types.ES3UnityObjectType
struct ES3UnityObjectType_t3436D50553BAED8BDAD2A84B56E1F267FB66B24B  : public ES3ObjectType_t97D4D5BF1057D26370EFE65DD23BA3695986EA3C
{
};

// UnityEngine.Gradient
struct Gradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E  : public RuntimeObject
{
	// System.IntPtr UnityEngine.Gradient::m_Ptr
	intptr_t ___m_Ptr_0;
};
// Native definition for P/Invoke marshalling of UnityEngine.Gradient
struct Gradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.Gradient
struct Gradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E_marshaled_com
{
	intptr_t ___m_Ptr_0;
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

// ES3Types.ES3Type_BoneWeightArray
struct ES3Type_BoneWeightArray_tFAA92ECC1D6765E1F70FFEA9DF3B2B31B6145CCF  : public ES3ArrayType_t56F45FADA5C22710D992097C0FBC0D000408233C
{
};

struct ES3Type_BoneWeightArray_tFAA92ECC1D6765E1F70FFEA9DF3B2B31B6145CCF_StaticFields
{
	// ES3Types.ES3Type ES3Types.ES3Type_BoneWeightArray::Instance
	ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* ___Instance_13;
};

// ES3Types.ES3Type_Color32Array
struct ES3Type_Color32Array_tF57FE9123BFDB6D72D08528E212B3254A6274B61  : public ES3ArrayType_t56F45FADA5C22710D992097C0FBC0D000408233C
{
};

struct ES3Type_Color32Array_tF57FE9123BFDB6D72D08528E212B3254A6274B61_StaticFields
{
	// ES3Types.ES3Type ES3Types.ES3Type_Color32Array::Instance
	ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* ___Instance_13;
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

// ES3Types.ES3Type_Matrix4x4Array
struct ES3Type_Matrix4x4Array_t47DDEE22DEA2102D3AA242FF6DF7F33B39ADAE95  : public ES3ArrayType_t56F45FADA5C22710D992097C0FBC0D000408233C
{
};

struct ES3Type_Matrix4x4Array_t47DDEE22DEA2102D3AA242FF6DF7F33B39ADAE95_StaticFields
{
	// ES3Types.ES3Type ES3Types.ES3Type_Matrix4x4Array::Instance
	ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* ___Instance_13;
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

// ES3Types.ES3Type_Vector2Array
struct ES3Type_Vector2Array_t9039B2B68EDC2EFCCB6D15820CDAFBE7FCB99411  : public ES3ArrayType_t56F45FADA5C22710D992097C0FBC0D000408233C
{
};

struct ES3Type_Vector2Array_t9039B2B68EDC2EFCCB6D15820CDAFBE7FCB99411_StaticFields
{
	// ES3Types.ES3Type ES3Types.ES3Type_Vector2Array::Instance
	ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* ___Instance_13;
};

// ES3Types.ES3Type_Vector3Array
struct ES3Type_Vector3Array_t71629B81DCF76559D1A197C5F6357C0410EBED6D  : public ES3ArrayType_t56F45FADA5C22710D992097C0FBC0D000408233C
{
};

struct ES3Type_Vector3Array_t71629B81DCF76559D1A197C5F6357C0410EBED6D_StaticFields
{
	// ES3Types.ES3Type ES3Types.ES3Type_Vector3Array::Instance
	ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* ___Instance_13;
};

// ES3Types.ES3Type_Vector4Array
struct ES3Type_Vector4Array_t1262F5AED18360AAACF70C910DCAE04310FAD446  : public ES3ArrayType_t56F45FADA5C22710D992097C0FBC0D000408233C
{
};

struct ES3Type_Vector4Array_t1262F5AED18360AAACF70C910DCAE04310FAD446_StaticFields
{
	// ES3Types.ES3Type ES3Types.ES3Type_Vector4Array::Instance
	ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* ___Instance_13;
};

// ES3Types.ES3Type_intArray
struct ES3Type_intArray_t0282F806407A0709B1F055D1AF105C52C39BB6E6  : public ES3ArrayType_t56F45FADA5C22710D992097C0FBC0D000408233C
{
};

struct ES3Type_intArray_t0282F806407A0709B1F055D1AF105C52C39BB6E6_StaticFields
{
	// ES3Types.ES3Type ES3Types.ES3Type_intArray::Instance
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

// UnityEngine.PhysicMaterial
struct PhysicMaterial_t4ECED34E04BB2148333467208361A5FBFDCD7131  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.Collider
struct Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// ES3Types.ES3Type_MeshCollider
struct ES3Type_MeshCollider_tA8109C5749E5D9BB9FCBB3AD7C5F94EEFE979523  : public ES3ComponentType_tA96FBCDEF44843795CFD0CC92E345662DD11834B
{
};

struct ES3Type_MeshCollider_tA8109C5749E5D9BB9FCBB3AD7C5F94EEFE979523_StaticFields
{
	// ES3Types.ES3Type ES3Types.ES3Type_MeshCollider::Instance
	ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* ___Instance_13;
};

// ES3Types.ES3Type_MeshFilter
struct ES3Type_MeshFilter_tFA3639E83C44E316068AEF87DEE5D8BFFD64C5C3  : public ES3ComponentType_tA96FBCDEF44843795CFD0CC92E345662DD11834B
{
};

struct ES3Type_MeshFilter_tFA3639E83C44E316068AEF87DEE5D8BFFD64C5C3_StaticFields
{
	// ES3Types.ES3Type ES3Types.ES3Type_MeshFilter::Instance
	ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* ___Instance_13;
};

// ES3Types.ES3Type_MeshRenderer
struct ES3Type_MeshRenderer_tACCD9205BF829C22AFFE5FE2EFA25EE18337E2B1  : public ES3ComponentType_tA96FBCDEF44843795CFD0CC92E345662DD11834B
{
};

struct ES3Type_MeshRenderer_tACCD9205BF829C22AFFE5FE2EFA25EE18337E2B1_StaticFields
{
	// ES3Types.ES3Type ES3Types.ES3Type_MeshRenderer::Instance
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

// UnityEngine.MeshFilter
struct MeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.Renderer
struct Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.MeshCollider
struct MeshCollider_tB525E4DDE383252364ED0BDD32CF2B53914EE455  : public Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76
{
};

// UnityEngine.MeshRenderer
struct MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE  : public Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF
{
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
// UnityEngine.BoneWeight[]
struct BoneWeightU5BU5D_t76F390D8CBA0ADCB87EB98B135C8886857DFE651  : public RuntimeArray
{
	ALIGN_FIELD (8) BoneWeight_t7E7DACA0D0F56698E05EBBD839D1D343502EA11F m_Items[1];

	inline BoneWeight_t7E7DACA0D0F56698E05EBBD839D1D343502EA11F GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline BoneWeight_t7E7DACA0D0F56698E05EBBD839D1D343502EA11F* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, BoneWeight_t7E7DACA0D0F56698E05EBBD839D1D343502EA11F value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline BoneWeight_t7E7DACA0D0F56698E05EBBD839D1D343502EA11F GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline BoneWeight_t7E7DACA0D0F56698E05EBBD839D1D343502EA11F* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, BoneWeight_t7E7DACA0D0F56698E05EBBD839D1D343502EA11F value)
	{
		m_Items[index] = value;
	}
};
// UnityEngine.Matrix4x4[]
struct Matrix4x4U5BU5D_t9C51C93425FABC022B506D2DB3A5FA70F9752C4D  : public RuntimeArray
{
	ALIGN_FIELD (8) Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 m_Items[1];

	inline Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 value)
	{
		m_Items[index] = value;
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
// UnityEngine.Vector4[]
struct Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD  : public RuntimeArray
{
	ALIGN_FIELD (8) Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 m_Items[1];

	inline Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 value)
	{
		m_Items[index] = value;
	}
};
// UnityEngine.Vector2[]
struct Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA  : public RuntimeArray
{
	ALIGN_FIELD (8) Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 m_Items[1];

	inline Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 value)
	{
		m_Items[index] = value;
	}
};
// UnityEngine.Color32[]
struct Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259  : public RuntimeArray
{
	ALIGN_FIELD (8) Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B m_Items[1];

	inline Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B value)
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


// T ES3Reader::ReadProperty<UnityEngine.Vector4>(ES3Types.ES3Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ES3Reader_ReadProperty_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_mEDC5DE4C01230CE888EE3982FA48F79B598E86DF_gshared (ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* __this, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* ___type0, const RuntimeMethod* method) ;
// T ES3Reader::ReadProperty<System.Object>(ES3Types.ES3Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Reader_ReadProperty_TisRuntimeObject_m2E586A12F3136DA85107A76F690CB8954A573DE3_gshared (ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* __this, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* ___type0, const RuntimeMethod* method) ;

// T ES3Reader::ReadProperty<UnityEngine.Vector4>(ES3Types.ES3Type)
inline Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ES3Reader_ReadProperty_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_mEDC5DE4C01230CE888EE3982FA48F79B598E86DF (ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* __this, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* ___type0, const RuntimeMethod* method)
{
	return ((  Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 (*) (ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518*, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE*, const RuntimeMethod*))ES3Reader_ReadProperty_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_mEDC5DE4C01230CE888EE3982FA48F79B598E86DF_gshared)(__this, ___type0, method);
}
// System.Void UnityEngine.Matrix4x4::SetColumn(System.Int32,UnityEngine.Vector4)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Matrix4x4_SetColumn_mC1CBEB2C29C0A9F1434C601786CE1B6DED1E1234 (Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6* __this, int32_t ___index0, Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___column1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Mesh::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mesh__ctor_m5A9AECEDDAFFD84811ED8928012BDE97A9CEBD00 (Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___x0, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___y1, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Mesh::get_isReadable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Mesh_get_isReadable_m3309900DB9B66BD321128839E6801722D15CD1E0 (Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* __this, const RuntimeMethod* method) ;
// System.Void ES3Internal.ES3Debug::LogWarning(System.String,UnityEngine.Object,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ES3Debug_LogWarning_m3A8D37932B2AD03A86BE3527F7109DEDFB33EDE5 (String_t* ___msg0, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___context1, int32_t ___indent2, const RuntimeMethod* method) ;
// System.Collections.IEnumerator ES3Reader/ES3ReaderPropertyEnumerator::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3ReaderPropertyEnumerator_GetEnumerator_mD6FEB8C37D84D9BBAB20D1A4DDCE3407BA971CA8 (ES3ReaderPropertyEnumerator_t66947BCA34F5716A7F0FECC09CDD3D2125703EB2* __this, const RuntimeMethod* method) ;
// System.UInt32 <PrivateImplementationDetails>::ComputeStringHash(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t U3CPrivateImplementationDetailsU3E_ComputeStringHash_m6EA1F233618497AEFF8902A5EDFA24C74E2F2876 (String_t* ___s0, const RuntimeMethod* method) ;
// System.Boolean System.String::op_Equality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1 (String_t* ___a0, String_t* ___b1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Mesh::set_bounds(UnityEngine.Bounds)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mesh_set_bounds_m2E526E9B61ACA77D644C22A9D8EB49583012B54E (Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* __this, Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Mesh::set_boneWeights(UnityEngine.BoneWeight[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mesh_set_boneWeights_m4924E79620EDC7AAA1D05CFE8B535BB37F0E8FA7 (Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* __this, BoneWeightU5BU5D_t76F390D8CBA0ADCB87EB98B135C8886857DFE651* ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Mesh::set_bindposes(UnityEngine.Matrix4x4[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mesh_set_bindposes_m7BD70B3BC121F436B5836EABDE5E99CAD64C82FF (Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* __this, Matrix4x4U5BU5D_t9C51C93425FABC022B506D2DB3A5FA70F9752C4D* ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Mesh::set_vertices(UnityEngine.Vector3[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mesh_set_vertices_m5BB814D89E9ACA00DBF19F7D8E22CB73AC73FE5C (Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* __this, Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Mesh::set_normals(UnityEngine.Vector3[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mesh_set_normals_m85D73193C49211BE9FA135FF72D5749B16A4760B (Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* __this, Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Mesh::set_tangents(UnityEngine.Vector4[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mesh_set_tangents_mF547B7E4F9C70FB7CD6168139180A70AD306169B (Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* __this, Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Mesh::set_uv(UnityEngine.Vector2[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mesh_set_uv_m6ED9C50E0DA8166DD48AC40FD6C828B9AD2E9617 (Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* __this, Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Mesh::set_uv2(UnityEngine.Vector2[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mesh_set_uv2_m37B442C04EBB029C0AD9545C54F95D9BDAD8E9B5 (Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* __this, Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Mesh::set_uv3(UnityEngine.Vector2[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mesh_set_uv3_m447FE1800C6FA36F8E4AD996A001F4A26E04A5A2 (Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* __this, Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Mesh::set_uv4(UnityEngine.Vector2[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mesh_set_uv4_mC87359C3EEA7219ABF70375148B98DC95577F9A3 (Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* __this, Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Mesh::set_colors32(UnityEngine.Color32[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mesh_set_colors32_m0E4462B7A1D613E6FB15DD7584BCE5491C17820F (Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* __this, Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259* ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Mesh::set_triangles(System.Int32[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mesh_set_triangles_m124405320579A8D92711BB5A124644963A26F60B (Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* __this, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Mesh::set_subMeshCount(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mesh_set_subMeshCount_m8E4DB392DB0621F7DFF8543FF3943A13072B8A28 (Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* __this, int32_t ___value0, const RuntimeMethod* method) ;
// T ES3Reader::ReadProperty<System.Int32[]>(ES3Types.ES3Type)
inline Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ES3Reader_ReadProperty_TisInt32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_mDD082AEE8B879E881D914C842E79E8EA68C254F2 (ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* __this, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* ___type0, const RuntimeMethod* method)
{
	return ((  Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* (*) (ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518*, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE*, const RuntimeMethod*))ES3Reader_ReadProperty_TisRuntimeObject_m2E586A12F3136DA85107A76F690CB8954A573DE3_gshared)(__this, ___type0, method);
}
// System.Void UnityEngine.Mesh::SetTriangles(System.Int32[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mesh_SetTriangles_mD97664344427EB85BB6DC2EF91479E03B9114258 (Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* __this, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___triangles0, int32_t ___submesh1, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Mesh::get_subMeshCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Mesh_get_subMeshCount_mC0141293D0F339D8D721CCA2612B32E6FD7E3F8B (Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.MeshCollider::set_sharedMesh(UnityEngine.Mesh)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MeshCollider_set_sharedMesh_m05F87B9AC04139285EBBCC159F77B51C6940E79C (MeshCollider_tB525E4DDE383252364ED0BDD32CF2B53914EE455* __this, Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.MeshCollider::set_convex(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MeshCollider_set_convex_m20482D687240D0921BA76B77983403E55A2E3CE1 (MeshCollider_tB525E4DDE383252364ED0BDD32CF2B53914EE455* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Collider::set_enabled(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Collider_set_enabled_m8D5C3B5047592D227A52560FC9723D176E209F70 (Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Collider::set_isTrigger(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Collider_set_isTrigger_mFCD22F3EB5E28C97863956AB725D53F7F4B7CA78 (Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Collider::set_contactOffset(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Collider_set_contactOffset_mEDA8D778F641338733D140E76FCA0D6B29203B52 (Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* __this, float ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Collider::set_sharedMaterial(UnityEngine.PhysicMaterial)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Collider_set_sharedMaterial_m2AC21AB939A377ABACF8282CDC52EE61B54107ED (Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* __this, PhysicMaterial_t4ECED34E04BB2148333467208361A5FBFDCD7131* ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.MeshFilter::set_sharedMesh(UnityEngine.Mesh)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MeshFilter_set_sharedMesh_m946F7E3F583761982642BDA4753784AF1DF6E16F (MeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5* __this, Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.MeshRenderer::set_additionalVertexStreams(UnityEngine.Mesh)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MeshRenderer_set_additionalVertexStreams_m868D054ACBD5ECCE2B5B43781F7932F886B86379 (MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE* __this, Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___value0, const RuntimeMethod* method) ;
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
// System.Void UnityEngine.ParticleSystem/MinMaxCurve::set_mode(UnityEngine.ParticleSystemCurveMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MinMaxCurve_set_mode_m6870C4CA0FE7AF1029F45040B827C9F0A6A80A86 (MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.ParticleSystem/MinMaxCurve::set_curveMultiplier(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MinMaxCurve_set_curveMultiplier_m9FCF7F21AECE399ACD9FEB9ADEEBD93FD12DDABC (MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23* __this, float ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.ParticleSystem/MinMaxCurve::set_curveMax(UnityEngine.AnimationCurve)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MinMaxCurve_set_curveMax_m39B9E8AE4E62E874DA99AA7108C2C47C6CA333DF (MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23* __this, AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.ParticleSystem/MinMaxCurve::set_curveMin(UnityEngine.AnimationCurve)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MinMaxCurve_set_curveMin_m17ADE22B882B75CBE87836C85C477A05122D9E75 (MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23* __this, AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.ParticleSystem/MinMaxCurve::set_constantMax(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MinMaxCurve_set_constantMax_mDB7B011E5B1EA76429B2A1FFDE6C06E82D290DC1 (MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23* __this, float ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.ParticleSystem/MinMaxCurve::set_constantMin(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MinMaxCurve_set_constantMin_mBF7CF2A9F167AD06C327EE6EA37BA427E1CE548C (MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23* __this, float ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.ParticleSystem/MinMaxCurve::set_constant(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MinMaxCurve_set_constant_mB6E4F22F67D3ED641FEBB387351F17451BB6A897 (MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23* __this, float ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.ParticleSystem/MinMaxCurve::set_curve(UnityEngine.AnimationCurve)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MinMaxCurve_set_curve_mC745A6526FBF122F96DA597997DFAB9D7D2529BF (MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23* __this, AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.ParticleSystem/MinMaxGradient::set_mode(UnityEngine.ParticleSystemGradientMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MinMaxGradient_set_mode_mCD15C79CD57AD7D400D7B171E10BC5E24F64295E (MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.ParticleSystem/MinMaxGradient::set_gradientMax(UnityEngine.Gradient)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MinMaxGradient_set_gradientMax_mC432C0AEA15FE74D6E6E6E2058BE039361D57ABB (MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69* __this, Gradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E* ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.ParticleSystem/MinMaxGradient::set_gradientMin(UnityEngine.Gradient)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MinMaxGradient_set_gradientMin_m4152642243D268E1A95A7FC0B58E8F179A933609 (MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69* __this, Gradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E* ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.ParticleSystem/MinMaxGradient::set_colorMax(UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MinMaxGradient_set_colorMax_m28A85822E89FC80D1F5B49225DEC4ABCF86CAE33 (MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69* __this, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.ParticleSystem/MinMaxGradient::set_colorMin(UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MinMaxGradient_set_colorMin_m7D3D987AB86FE01E7BC4AD856AAEE703F18EF1EF (MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69* __this, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.ParticleSystem/MinMaxGradient::set_color(UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MinMaxGradient_set_color_m0890DD6E249DE8552C04AFC4F959DD37EA05033B (MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69* __this, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.ParticleSystem/MinMaxGradient::set_gradient(UnityEngine.Gradient)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MinMaxGradient_set_gradient_m6AAD335DD1A2BD5C091B608C604825C32CFB825D (MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69* __this, Gradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E* ___value0, const RuntimeMethod* method) ;
// System.Object ES3Types.ES3Type_Matrix4x4::Read<System.Boolean>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_Matrix4x4_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mD2129EE047EC430456C0D0FBA500826D0026D4D9_gshared (ES3Type_Matrix4x4_t9AC0DD88A660CC29B53E58E1E569A6CCBB1EFE3C* __this, ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_ReadProperty_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_mEDC5DE4C01230CE888EE3982FA48F79B598E86DF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_Vector4_t20EB9288ABFACFA144B849DBAE5F00003E5D3EF1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// var matrix = new Matrix4x4();
		il2cpp_codegen_initobj((&V_0), sizeof(Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6));
		// matrix.SetColumn(0,    reader.ReadProperty<Vector4>(ES3Type_Vector4.Instance));
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_0 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_1 = ((ES3Type_Vector4_t20EB9288ABFACFA144B849DBAE5F00003E5D3EF1_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Vector4_t20EB9288ABFACFA144B849DBAE5F00003E5D3EF1_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_0);
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_2;
		L_2 = ES3Reader_ReadProperty_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_mEDC5DE4C01230CE888EE3982FA48F79B598E86DF(L_0, L_1, ES3Reader_ReadProperty_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_mEDC5DE4C01230CE888EE3982FA48F79B598E86DF_RuntimeMethod_var);
		Matrix4x4_SetColumn_mC1CBEB2C29C0A9F1434C601786CE1B6DED1E1234((&V_0), 0, L_2, NULL);
		// matrix.SetColumn(1,    reader.ReadProperty<Vector4>(ES3Type_Vector4.Instance));
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_3 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_4 = ((ES3Type_Vector4_t20EB9288ABFACFA144B849DBAE5F00003E5D3EF1_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Vector4_t20EB9288ABFACFA144B849DBAE5F00003E5D3EF1_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_3);
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_5;
		L_5 = ES3Reader_ReadProperty_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_mEDC5DE4C01230CE888EE3982FA48F79B598E86DF(L_3, L_4, ES3Reader_ReadProperty_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_mEDC5DE4C01230CE888EE3982FA48F79B598E86DF_RuntimeMethod_var);
		Matrix4x4_SetColumn_mC1CBEB2C29C0A9F1434C601786CE1B6DED1E1234((&V_0), 1, L_5, NULL);
		// matrix.SetColumn(2,    reader.ReadProperty<Vector4>(ES3Type_Vector4.Instance));
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_6 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_7 = ((ES3Type_Vector4_t20EB9288ABFACFA144B849DBAE5F00003E5D3EF1_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Vector4_t20EB9288ABFACFA144B849DBAE5F00003E5D3EF1_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_6);
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_8;
		L_8 = ES3Reader_ReadProperty_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_mEDC5DE4C01230CE888EE3982FA48F79B598E86DF(L_6, L_7, ES3Reader_ReadProperty_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_mEDC5DE4C01230CE888EE3982FA48F79B598E86DF_RuntimeMethod_var);
		Matrix4x4_SetColumn_mC1CBEB2C29C0A9F1434C601786CE1B6DED1E1234((&V_0), 2, L_8, NULL);
		// matrix.SetColumn(3,    reader.ReadProperty<Vector4>(ES3Type_Vector4.Instance));
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_9 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_10 = ((ES3Type_Vector4_t20EB9288ABFACFA144B849DBAE5F00003E5D3EF1_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Vector4_t20EB9288ABFACFA144B849DBAE5F00003E5D3EF1_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_9);
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_11;
		L_11 = ES3Reader_ReadProperty_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_mEDC5DE4C01230CE888EE3982FA48F79B598E86DF(L_9, L_10, ES3Reader_ReadProperty_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_mEDC5DE4C01230CE888EE3982FA48F79B598E86DF_RuntimeMethod_var);
		Matrix4x4_SetColumn_mC1CBEB2C29C0A9F1434C601786CE1B6DED1E1234((&V_0), 3, L_11, NULL);
		// return matrix;
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_12 = V_0;
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_13 = L_12;
		RuntimeObject* L_14 = Box(Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6_il2cpp_TypeInfo_var, &L_13);
		return L_14;
	}
}
// System.Object ES3Types.ES3Type_Matrix4x4::Read<UnityEngine.Bounds>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_Matrix4x4_Read_TisBounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3_m2B8EFA4BA840B6D83F487073D418F784CFDC25CB_gshared (ES3Type_Matrix4x4_t9AC0DD88A660CC29B53E58E1E569A6CCBB1EFE3C* __this, ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_ReadProperty_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_mEDC5DE4C01230CE888EE3982FA48F79B598E86DF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_Vector4_t20EB9288ABFACFA144B849DBAE5F00003E5D3EF1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// var matrix = new Matrix4x4();
		il2cpp_codegen_initobj((&V_0), sizeof(Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6));
		// matrix.SetColumn(0,    reader.ReadProperty<Vector4>(ES3Type_Vector4.Instance));
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_0 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_1 = ((ES3Type_Vector4_t20EB9288ABFACFA144B849DBAE5F00003E5D3EF1_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Vector4_t20EB9288ABFACFA144B849DBAE5F00003E5D3EF1_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_0);
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_2;
		L_2 = ES3Reader_ReadProperty_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_mEDC5DE4C01230CE888EE3982FA48F79B598E86DF(L_0, L_1, ES3Reader_ReadProperty_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_mEDC5DE4C01230CE888EE3982FA48F79B598E86DF_RuntimeMethod_var);
		Matrix4x4_SetColumn_mC1CBEB2C29C0A9F1434C601786CE1B6DED1E1234((&V_0), 0, L_2, NULL);
		// matrix.SetColumn(1,    reader.ReadProperty<Vector4>(ES3Type_Vector4.Instance));
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_3 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_4 = ((ES3Type_Vector4_t20EB9288ABFACFA144B849DBAE5F00003E5D3EF1_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Vector4_t20EB9288ABFACFA144B849DBAE5F00003E5D3EF1_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_3);
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_5;
		L_5 = ES3Reader_ReadProperty_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_mEDC5DE4C01230CE888EE3982FA48F79B598E86DF(L_3, L_4, ES3Reader_ReadProperty_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_mEDC5DE4C01230CE888EE3982FA48F79B598E86DF_RuntimeMethod_var);
		Matrix4x4_SetColumn_mC1CBEB2C29C0A9F1434C601786CE1B6DED1E1234((&V_0), 1, L_5, NULL);
		// matrix.SetColumn(2,    reader.ReadProperty<Vector4>(ES3Type_Vector4.Instance));
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_6 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_7 = ((ES3Type_Vector4_t20EB9288ABFACFA144B849DBAE5F00003E5D3EF1_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Vector4_t20EB9288ABFACFA144B849DBAE5F00003E5D3EF1_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_6);
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_8;
		L_8 = ES3Reader_ReadProperty_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_mEDC5DE4C01230CE888EE3982FA48F79B598E86DF(L_6, L_7, ES3Reader_ReadProperty_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_mEDC5DE4C01230CE888EE3982FA48F79B598E86DF_RuntimeMethod_var);
		Matrix4x4_SetColumn_mC1CBEB2C29C0A9F1434C601786CE1B6DED1E1234((&V_0), 2, L_8, NULL);
		// matrix.SetColumn(3,    reader.ReadProperty<Vector4>(ES3Type_Vector4.Instance));
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_9 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_10 = ((ES3Type_Vector4_t20EB9288ABFACFA144B849DBAE5F00003E5D3EF1_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Vector4_t20EB9288ABFACFA144B849DBAE5F00003E5D3EF1_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_9);
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_11;
		L_11 = ES3Reader_ReadProperty_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_mEDC5DE4C01230CE888EE3982FA48F79B598E86DF(L_9, L_10, ES3Reader_ReadProperty_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_mEDC5DE4C01230CE888EE3982FA48F79B598E86DF_RuntimeMethod_var);
		Matrix4x4_SetColumn_mC1CBEB2C29C0A9F1434C601786CE1B6DED1E1234((&V_0), 3, L_11, NULL);
		// return matrix;
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_12 = V_0;
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_13 = L_12;
		RuntimeObject* L_14 = Box(Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6_il2cpp_TypeInfo_var, &L_13);
		return L_14;
	}
}
// System.Object ES3Types.ES3Type_Matrix4x4::Read<System.Byte>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_Matrix4x4_Read_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m1ACC90578FAA83E2607338AC3999B723B0684807_gshared (ES3Type_Matrix4x4_t9AC0DD88A660CC29B53E58E1E569A6CCBB1EFE3C* __this, ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_ReadProperty_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_mEDC5DE4C01230CE888EE3982FA48F79B598E86DF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_Vector4_t20EB9288ABFACFA144B849DBAE5F00003E5D3EF1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// var matrix = new Matrix4x4();
		il2cpp_codegen_initobj((&V_0), sizeof(Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6));
		// matrix.SetColumn(0,    reader.ReadProperty<Vector4>(ES3Type_Vector4.Instance));
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_0 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_1 = ((ES3Type_Vector4_t20EB9288ABFACFA144B849DBAE5F00003E5D3EF1_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Vector4_t20EB9288ABFACFA144B849DBAE5F00003E5D3EF1_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_0);
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_2;
		L_2 = ES3Reader_ReadProperty_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_mEDC5DE4C01230CE888EE3982FA48F79B598E86DF(L_0, L_1, ES3Reader_ReadProperty_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_mEDC5DE4C01230CE888EE3982FA48F79B598E86DF_RuntimeMethod_var);
		Matrix4x4_SetColumn_mC1CBEB2C29C0A9F1434C601786CE1B6DED1E1234((&V_0), 0, L_2, NULL);
		// matrix.SetColumn(1,    reader.ReadProperty<Vector4>(ES3Type_Vector4.Instance));
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_3 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_4 = ((ES3Type_Vector4_t20EB9288ABFACFA144B849DBAE5F00003E5D3EF1_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Vector4_t20EB9288ABFACFA144B849DBAE5F00003E5D3EF1_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_3);
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_5;
		L_5 = ES3Reader_ReadProperty_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_mEDC5DE4C01230CE888EE3982FA48F79B598E86DF(L_3, L_4, ES3Reader_ReadProperty_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_mEDC5DE4C01230CE888EE3982FA48F79B598E86DF_RuntimeMethod_var);
		Matrix4x4_SetColumn_mC1CBEB2C29C0A9F1434C601786CE1B6DED1E1234((&V_0), 1, L_5, NULL);
		// matrix.SetColumn(2,    reader.ReadProperty<Vector4>(ES3Type_Vector4.Instance));
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_6 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_7 = ((ES3Type_Vector4_t20EB9288ABFACFA144B849DBAE5F00003E5D3EF1_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Vector4_t20EB9288ABFACFA144B849DBAE5F00003E5D3EF1_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_6);
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_8;
		L_8 = ES3Reader_ReadProperty_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_mEDC5DE4C01230CE888EE3982FA48F79B598E86DF(L_6, L_7, ES3Reader_ReadProperty_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_mEDC5DE4C01230CE888EE3982FA48F79B598E86DF_RuntimeMethod_var);
		Matrix4x4_SetColumn_mC1CBEB2C29C0A9F1434C601786CE1B6DED1E1234((&V_0), 2, L_8, NULL);
		// matrix.SetColumn(3,    reader.ReadProperty<Vector4>(ES3Type_Vector4.Instance));
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_9 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_10 = ((ES3Type_Vector4_t20EB9288ABFACFA144B849DBAE5F00003E5D3EF1_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Vector4_t20EB9288ABFACFA144B849DBAE5F00003E5D3EF1_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_9);
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_11;
		L_11 = ES3Reader_ReadProperty_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_mEDC5DE4C01230CE888EE3982FA48F79B598E86DF(L_9, L_10, ES3Reader_ReadProperty_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_mEDC5DE4C01230CE888EE3982FA48F79B598E86DF_RuntimeMethod_var);
		Matrix4x4_SetColumn_mC1CBEB2C29C0A9F1434C601786CE1B6DED1E1234((&V_0), 3, L_11, NULL);
		// return matrix;
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_12 = V_0;
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_13 = L_12;
		RuntimeObject* L_14 = Box(Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6_il2cpp_TypeInfo_var, &L_13);
		return L_14;
	}
}
// System.Object ES3Types.ES3Type_Matrix4x4::Read<UnityEngine.Color>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_Matrix4x4_Read_TisColor_tD001788D726C3A7F1379BEED0260B9591F440C1F_mDA680E797F73162422B58A28DB7C53FAFBC6630D_gshared (ES3Type_Matrix4x4_t9AC0DD88A660CC29B53E58E1E569A6CCBB1EFE3C* __this, ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_ReadProperty_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_mEDC5DE4C01230CE888EE3982FA48F79B598E86DF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_Vector4_t20EB9288ABFACFA144B849DBAE5F00003E5D3EF1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// var matrix = new Matrix4x4();
		il2cpp_codegen_initobj((&V_0), sizeof(Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6));
		// matrix.SetColumn(0,    reader.ReadProperty<Vector4>(ES3Type_Vector4.Instance));
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_0 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_1 = ((ES3Type_Vector4_t20EB9288ABFACFA144B849DBAE5F00003E5D3EF1_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Vector4_t20EB9288ABFACFA144B849DBAE5F00003E5D3EF1_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_0);
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_2;
		L_2 = ES3Reader_ReadProperty_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_mEDC5DE4C01230CE888EE3982FA48F79B598E86DF(L_0, L_1, ES3Reader_ReadProperty_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_mEDC5DE4C01230CE888EE3982FA48F79B598E86DF_RuntimeMethod_var);
		Matrix4x4_SetColumn_mC1CBEB2C29C0A9F1434C601786CE1B6DED1E1234((&V_0), 0, L_2, NULL);
		// matrix.SetColumn(1,    reader.ReadProperty<Vector4>(ES3Type_Vector4.Instance));
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_3 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_4 = ((ES3Type_Vector4_t20EB9288ABFACFA144B849DBAE5F00003E5D3EF1_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Vector4_t20EB9288ABFACFA144B849DBAE5F00003E5D3EF1_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_3);
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_5;
		L_5 = ES3Reader_ReadProperty_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_mEDC5DE4C01230CE888EE3982FA48F79B598E86DF(L_3, L_4, ES3Reader_ReadProperty_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_mEDC5DE4C01230CE888EE3982FA48F79B598E86DF_RuntimeMethod_var);
		Matrix4x4_SetColumn_mC1CBEB2C29C0A9F1434C601786CE1B6DED1E1234((&V_0), 1, L_5, NULL);
		// matrix.SetColumn(2,    reader.ReadProperty<Vector4>(ES3Type_Vector4.Instance));
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_6 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_7 = ((ES3Type_Vector4_t20EB9288ABFACFA144B849DBAE5F00003E5D3EF1_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Vector4_t20EB9288ABFACFA144B849DBAE5F00003E5D3EF1_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_6);
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_8;
		L_8 = ES3Reader_ReadProperty_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_mEDC5DE4C01230CE888EE3982FA48F79B598E86DF(L_6, L_7, ES3Reader_ReadProperty_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_mEDC5DE4C01230CE888EE3982FA48F79B598E86DF_RuntimeMethod_var);
		Matrix4x4_SetColumn_mC1CBEB2C29C0A9F1434C601786CE1B6DED1E1234((&V_0), 2, L_8, NULL);
		// matrix.SetColumn(3,    reader.ReadProperty<Vector4>(ES3Type_Vector4.Instance));
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_9 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_10 = ((ES3Type_Vector4_t20EB9288ABFACFA144B849DBAE5F00003E5D3EF1_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Vector4_t20EB9288ABFACFA144B849DBAE5F00003E5D3EF1_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_9);
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_11;
		L_11 = ES3Reader_ReadProperty_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_mEDC5DE4C01230CE888EE3982FA48F79B598E86DF(L_9, L_10, ES3Reader_ReadProperty_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_mEDC5DE4C01230CE888EE3982FA48F79B598E86DF_RuntimeMethod_var);
		Matrix4x4_SetColumn_mC1CBEB2C29C0A9F1434C601786CE1B6DED1E1234((&V_0), 3, L_11, NULL);
		// return matrix;
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_12 = V_0;
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_13 = L_12;
		RuntimeObject* L_14 = Box(Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6_il2cpp_TypeInfo_var, &L_13);
		return L_14;
	}
}
// System.Object ES3Types.ES3Type_Matrix4x4::Read<System.Int32>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_Matrix4x4_Read_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m334A7709D7F10BDE4A7F7BAC0D9CF51CA45A6F74_gshared (ES3Type_Matrix4x4_t9AC0DD88A660CC29B53E58E1E569A6CCBB1EFE3C* __this, ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_ReadProperty_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_mEDC5DE4C01230CE888EE3982FA48F79B598E86DF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_Vector4_t20EB9288ABFACFA144B849DBAE5F00003E5D3EF1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// var matrix = new Matrix4x4();
		il2cpp_codegen_initobj((&V_0), sizeof(Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6));
		// matrix.SetColumn(0,    reader.ReadProperty<Vector4>(ES3Type_Vector4.Instance));
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_0 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_1 = ((ES3Type_Vector4_t20EB9288ABFACFA144B849DBAE5F00003E5D3EF1_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Vector4_t20EB9288ABFACFA144B849DBAE5F00003E5D3EF1_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_0);
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_2;
		L_2 = ES3Reader_ReadProperty_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_mEDC5DE4C01230CE888EE3982FA48F79B598E86DF(L_0, L_1, ES3Reader_ReadProperty_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_mEDC5DE4C01230CE888EE3982FA48F79B598E86DF_RuntimeMethod_var);
		Matrix4x4_SetColumn_mC1CBEB2C29C0A9F1434C601786CE1B6DED1E1234((&V_0), 0, L_2, NULL);
		// matrix.SetColumn(1,    reader.ReadProperty<Vector4>(ES3Type_Vector4.Instance));
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_3 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_4 = ((ES3Type_Vector4_t20EB9288ABFACFA144B849DBAE5F00003E5D3EF1_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Vector4_t20EB9288ABFACFA144B849DBAE5F00003E5D3EF1_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_3);
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_5;
		L_5 = ES3Reader_ReadProperty_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_mEDC5DE4C01230CE888EE3982FA48F79B598E86DF(L_3, L_4, ES3Reader_ReadProperty_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_mEDC5DE4C01230CE888EE3982FA48F79B598E86DF_RuntimeMethod_var);
		Matrix4x4_SetColumn_mC1CBEB2C29C0A9F1434C601786CE1B6DED1E1234((&V_0), 1, L_5, NULL);
		// matrix.SetColumn(2,    reader.ReadProperty<Vector4>(ES3Type_Vector4.Instance));
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_6 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_7 = ((ES3Type_Vector4_t20EB9288ABFACFA144B849DBAE5F00003E5D3EF1_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Vector4_t20EB9288ABFACFA144B849DBAE5F00003E5D3EF1_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_6);
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_8;
		L_8 = ES3Reader_ReadProperty_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_mEDC5DE4C01230CE888EE3982FA48F79B598E86DF(L_6, L_7, ES3Reader_ReadProperty_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_mEDC5DE4C01230CE888EE3982FA48F79B598E86DF_RuntimeMethod_var);
		Matrix4x4_SetColumn_mC1CBEB2C29C0A9F1434C601786CE1B6DED1E1234((&V_0), 2, L_8, NULL);
		// matrix.SetColumn(3,    reader.ReadProperty<Vector4>(ES3Type_Vector4.Instance));
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_9 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_10 = ((ES3Type_Vector4_t20EB9288ABFACFA144B849DBAE5F00003E5D3EF1_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Vector4_t20EB9288ABFACFA144B849DBAE5F00003E5D3EF1_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_9);
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_11;
		L_11 = ES3Reader_ReadProperty_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_mEDC5DE4C01230CE888EE3982FA48F79B598E86DF(L_9, L_10, ES3Reader_ReadProperty_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_mEDC5DE4C01230CE888EE3982FA48F79B598E86DF_RuntimeMethod_var);
		Matrix4x4_SetColumn_mC1CBEB2C29C0A9F1434C601786CE1B6DED1E1234((&V_0), 3, L_11, NULL);
		// return matrix;
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_12 = V_0;
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_13 = L_12;
		RuntimeObject* L_14 = Box(Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6_il2cpp_TypeInfo_var, &L_13);
		return L_14;
	}
}
// System.Object ES3Types.ES3Type_Matrix4x4::Read<System.Int32Enum>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_Matrix4x4_Read_TisInt32Enum_tCBAC8BA2BFF3A845FA599F303093BBBA374B6F0C_m81A797A2826AB9DBF284EE94BA99167AF06B2274_gshared (ES3Type_Matrix4x4_t9AC0DD88A660CC29B53E58E1E569A6CCBB1EFE3C* __this, ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_ReadProperty_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_mEDC5DE4C01230CE888EE3982FA48F79B598E86DF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_Vector4_t20EB9288ABFACFA144B849DBAE5F00003E5D3EF1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// var matrix = new Matrix4x4();
		il2cpp_codegen_initobj((&V_0), sizeof(Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6));
		// matrix.SetColumn(0,    reader.ReadProperty<Vector4>(ES3Type_Vector4.Instance));
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_0 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_1 = ((ES3Type_Vector4_t20EB9288ABFACFA144B849DBAE5F00003E5D3EF1_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Vector4_t20EB9288ABFACFA144B849DBAE5F00003E5D3EF1_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_0);
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_2;
		L_2 = ES3Reader_ReadProperty_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_mEDC5DE4C01230CE888EE3982FA48F79B598E86DF(L_0, L_1, ES3Reader_ReadProperty_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_mEDC5DE4C01230CE888EE3982FA48F79B598E86DF_RuntimeMethod_var);
		Matrix4x4_SetColumn_mC1CBEB2C29C0A9F1434C601786CE1B6DED1E1234((&V_0), 0, L_2, NULL);
		// matrix.SetColumn(1,    reader.ReadProperty<Vector4>(ES3Type_Vector4.Instance));
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_3 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_4 = ((ES3Type_Vector4_t20EB9288ABFACFA144B849DBAE5F00003E5D3EF1_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Vector4_t20EB9288ABFACFA144B849DBAE5F00003E5D3EF1_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_3);
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_5;
		L_5 = ES3Reader_ReadProperty_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_mEDC5DE4C01230CE888EE3982FA48F79B598E86DF(L_3, L_4, ES3Reader_ReadProperty_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_mEDC5DE4C01230CE888EE3982FA48F79B598E86DF_RuntimeMethod_var);
		Matrix4x4_SetColumn_mC1CBEB2C29C0A9F1434C601786CE1B6DED1E1234((&V_0), 1, L_5, NULL);
		// matrix.SetColumn(2,    reader.ReadProperty<Vector4>(ES3Type_Vector4.Instance));
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_6 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_7 = ((ES3Type_Vector4_t20EB9288ABFACFA144B849DBAE5F00003E5D3EF1_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Vector4_t20EB9288ABFACFA144B849DBAE5F00003E5D3EF1_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_6);
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_8;
		L_8 = ES3Reader_ReadProperty_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_mEDC5DE4C01230CE888EE3982FA48F79B598E86DF(L_6, L_7, ES3Reader_ReadProperty_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_mEDC5DE4C01230CE888EE3982FA48F79B598E86DF_RuntimeMethod_var);
		Matrix4x4_SetColumn_mC1CBEB2C29C0A9F1434C601786CE1B6DED1E1234((&V_0), 2, L_8, NULL);
		// matrix.SetColumn(3,    reader.ReadProperty<Vector4>(ES3Type_Vector4.Instance));
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_9 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_10 = ((ES3Type_Vector4_t20EB9288ABFACFA144B849DBAE5F00003E5D3EF1_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Vector4_t20EB9288ABFACFA144B849DBAE5F00003E5D3EF1_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_9);
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_11;
		L_11 = ES3Reader_ReadProperty_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_mEDC5DE4C01230CE888EE3982FA48F79B598E86DF(L_9, L_10, ES3Reader_ReadProperty_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_mEDC5DE4C01230CE888EE3982FA48F79B598E86DF_RuntimeMethod_var);
		Matrix4x4_SetColumn_mC1CBEB2C29C0A9F1434C601786CE1B6DED1E1234((&V_0), 3, L_11, NULL);
		// return matrix;
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_12 = V_0;
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_13 = L_12;
		RuntimeObject* L_14 = Box(Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6_il2cpp_TypeInfo_var, &L_13);
		return L_14;
	}
}
// System.Object ES3Types.ES3Type_Matrix4x4::Read<System.Int64>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_Matrix4x4_Read_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_m6EF4A0F38E5B98904FE4322E7C9B3EC02E977723_gshared (ES3Type_Matrix4x4_t9AC0DD88A660CC29B53E58E1E569A6CCBB1EFE3C* __this, ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_ReadProperty_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_mEDC5DE4C01230CE888EE3982FA48F79B598E86DF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_Vector4_t20EB9288ABFACFA144B849DBAE5F00003E5D3EF1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// var matrix = new Matrix4x4();
		il2cpp_codegen_initobj((&V_0), sizeof(Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6));
		// matrix.SetColumn(0,    reader.ReadProperty<Vector4>(ES3Type_Vector4.Instance));
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_0 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_1 = ((ES3Type_Vector4_t20EB9288ABFACFA144B849DBAE5F00003E5D3EF1_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Vector4_t20EB9288ABFACFA144B849DBAE5F00003E5D3EF1_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_0);
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_2;
		L_2 = ES3Reader_ReadProperty_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_mEDC5DE4C01230CE888EE3982FA48F79B598E86DF(L_0, L_1, ES3Reader_ReadProperty_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_mEDC5DE4C01230CE888EE3982FA48F79B598E86DF_RuntimeMethod_var);
		Matrix4x4_SetColumn_mC1CBEB2C29C0A9F1434C601786CE1B6DED1E1234((&V_0), 0, L_2, NULL);
		// matrix.SetColumn(1,    reader.ReadProperty<Vector4>(ES3Type_Vector4.Instance));
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_3 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_4 = ((ES3Type_Vector4_t20EB9288ABFACFA144B849DBAE5F00003E5D3EF1_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Vector4_t20EB9288ABFACFA144B849DBAE5F00003E5D3EF1_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_3);
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_5;
		L_5 = ES3Reader_ReadProperty_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_mEDC5DE4C01230CE888EE3982FA48F79B598E86DF(L_3, L_4, ES3Reader_ReadProperty_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_mEDC5DE4C01230CE888EE3982FA48F79B598E86DF_RuntimeMethod_var);
		Matrix4x4_SetColumn_mC1CBEB2C29C0A9F1434C601786CE1B6DED1E1234((&V_0), 1, L_5, NULL);
		// matrix.SetColumn(2,    reader.ReadProperty<Vector4>(ES3Type_Vector4.Instance));
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_6 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_7 = ((ES3Type_Vector4_t20EB9288ABFACFA144B849DBAE5F00003E5D3EF1_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Vector4_t20EB9288ABFACFA144B849DBAE5F00003E5D3EF1_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_6);
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_8;
		L_8 = ES3Reader_ReadProperty_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_mEDC5DE4C01230CE888EE3982FA48F79B598E86DF(L_6, L_7, ES3Reader_ReadProperty_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_mEDC5DE4C01230CE888EE3982FA48F79B598E86DF_RuntimeMethod_var);
		Matrix4x4_SetColumn_mC1CBEB2C29C0A9F1434C601786CE1B6DED1E1234((&V_0), 2, L_8, NULL);
		// matrix.SetColumn(3,    reader.ReadProperty<Vector4>(ES3Type_Vector4.Instance));
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_9 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_10 = ((ES3Type_Vector4_t20EB9288ABFACFA144B849DBAE5F00003E5D3EF1_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Vector4_t20EB9288ABFACFA144B849DBAE5F00003E5D3EF1_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_9);
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_11;
		L_11 = ES3Reader_ReadProperty_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_mEDC5DE4C01230CE888EE3982FA48F79B598E86DF(L_9, L_10, ES3Reader_ReadProperty_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_mEDC5DE4C01230CE888EE3982FA48F79B598E86DF_RuntimeMethod_var);
		Matrix4x4_SetColumn_mC1CBEB2C29C0A9F1434C601786CE1B6DED1E1234((&V_0), 3, L_11, NULL);
		// return matrix;
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_12 = V_0;
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_13 = L_12;
		RuntimeObject* L_14 = Box(Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6_il2cpp_TypeInfo_var, &L_13);
		return L_14;
	}
}
// System.Object ES3Types.ES3Type_Matrix4x4::Read<UnityEngine.LayerMask>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_Matrix4x4_Read_TisLayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB_m1026D8649B57028241E3FBCF91E3F054AC54C9E1_gshared (ES3Type_Matrix4x4_t9AC0DD88A660CC29B53E58E1E569A6CCBB1EFE3C* __this, ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_ReadProperty_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_mEDC5DE4C01230CE888EE3982FA48F79B598E86DF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_Vector4_t20EB9288ABFACFA144B849DBAE5F00003E5D3EF1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// var matrix = new Matrix4x4();
		il2cpp_codegen_initobj((&V_0), sizeof(Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6));
		// matrix.SetColumn(0,    reader.ReadProperty<Vector4>(ES3Type_Vector4.Instance));
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_0 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_1 = ((ES3Type_Vector4_t20EB9288ABFACFA144B849DBAE5F00003E5D3EF1_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Vector4_t20EB9288ABFACFA144B849DBAE5F00003E5D3EF1_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_0);
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_2;
		L_2 = ES3Reader_ReadProperty_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_mEDC5DE4C01230CE888EE3982FA48F79B598E86DF(L_0, L_1, ES3Reader_ReadProperty_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_mEDC5DE4C01230CE888EE3982FA48F79B598E86DF_RuntimeMethod_var);
		Matrix4x4_SetColumn_mC1CBEB2C29C0A9F1434C601786CE1B6DED1E1234((&V_0), 0, L_2, NULL);
		// matrix.SetColumn(1,    reader.ReadProperty<Vector4>(ES3Type_Vector4.Instance));
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_3 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_4 = ((ES3Type_Vector4_t20EB9288ABFACFA144B849DBAE5F00003E5D3EF1_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Vector4_t20EB9288ABFACFA144B849DBAE5F00003E5D3EF1_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_3);
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_5;
		L_5 = ES3Reader_ReadProperty_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_mEDC5DE4C01230CE888EE3982FA48F79B598E86DF(L_3, L_4, ES3Reader_ReadProperty_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_mEDC5DE4C01230CE888EE3982FA48F79B598E86DF_RuntimeMethod_var);
		Matrix4x4_SetColumn_mC1CBEB2C29C0A9F1434C601786CE1B6DED1E1234((&V_0), 1, L_5, NULL);
		// matrix.SetColumn(2,    reader.ReadProperty<Vector4>(ES3Type_Vector4.Instance));
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_6 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_7 = ((ES3Type_Vector4_t20EB9288ABFACFA144B849DBAE5F00003E5D3EF1_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Vector4_t20EB9288ABFACFA144B849DBAE5F00003E5D3EF1_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_6);
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_8;
		L_8 = ES3Reader_ReadProperty_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_mEDC5DE4C01230CE888EE3982FA48F79B598E86DF(L_6, L_7, ES3Reader_ReadProperty_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_mEDC5DE4C01230CE888EE3982FA48F79B598E86DF_RuntimeMethod_var);
		Matrix4x4_SetColumn_mC1CBEB2C29C0A9F1434C601786CE1B6DED1E1234((&V_0), 2, L_8, NULL);
		// matrix.SetColumn(3,    reader.ReadProperty<Vector4>(ES3Type_Vector4.Instance));
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_9 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_10 = ((ES3Type_Vector4_t20EB9288ABFACFA144B849DBAE5F00003E5D3EF1_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Vector4_t20EB9288ABFACFA144B849DBAE5F00003E5D3EF1_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_9);
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_11;
		L_11 = ES3Reader_ReadProperty_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_mEDC5DE4C01230CE888EE3982FA48F79B598E86DF(L_9, L_10, ES3Reader_ReadProperty_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_mEDC5DE4C01230CE888EE3982FA48F79B598E86DF_RuntimeMethod_var);
		Matrix4x4_SetColumn_mC1CBEB2C29C0A9F1434C601786CE1B6DED1E1234((&V_0), 3, L_11, NULL);
		// return matrix;
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_12 = V_0;
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_13 = L_12;
		RuntimeObject* L_14 = Box(Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6_il2cpp_TypeInfo_var, &L_13);
		return L_14;
	}
}
// System.Object ES3Types.ES3Type_Matrix4x4::Read<UnityEngine.Matrix4x4>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_Matrix4x4_Read_TisMatrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6_mB3D4D7BFFE0EAA3FE6E16D7936F11C787FF6DC28_gshared (ES3Type_Matrix4x4_t9AC0DD88A660CC29B53E58E1E569A6CCBB1EFE3C* __this, ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_ReadProperty_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_mEDC5DE4C01230CE888EE3982FA48F79B598E86DF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_Vector4_t20EB9288ABFACFA144B849DBAE5F00003E5D3EF1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// var matrix = new Matrix4x4();
		il2cpp_codegen_initobj((&V_0), sizeof(Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6));
		// matrix.SetColumn(0,    reader.ReadProperty<Vector4>(ES3Type_Vector4.Instance));
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_0 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_1 = ((ES3Type_Vector4_t20EB9288ABFACFA144B849DBAE5F00003E5D3EF1_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Vector4_t20EB9288ABFACFA144B849DBAE5F00003E5D3EF1_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_0);
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_2;
		L_2 = ES3Reader_ReadProperty_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_mEDC5DE4C01230CE888EE3982FA48F79B598E86DF(L_0, L_1, ES3Reader_ReadProperty_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_mEDC5DE4C01230CE888EE3982FA48F79B598E86DF_RuntimeMethod_var);
		Matrix4x4_SetColumn_mC1CBEB2C29C0A9F1434C601786CE1B6DED1E1234((&V_0), 0, L_2, NULL);
		// matrix.SetColumn(1,    reader.ReadProperty<Vector4>(ES3Type_Vector4.Instance));
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_3 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_4 = ((ES3Type_Vector4_t20EB9288ABFACFA144B849DBAE5F00003E5D3EF1_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Vector4_t20EB9288ABFACFA144B849DBAE5F00003E5D3EF1_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_3);
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_5;
		L_5 = ES3Reader_ReadProperty_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_mEDC5DE4C01230CE888EE3982FA48F79B598E86DF(L_3, L_4, ES3Reader_ReadProperty_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_mEDC5DE4C01230CE888EE3982FA48F79B598E86DF_RuntimeMethod_var);
		Matrix4x4_SetColumn_mC1CBEB2C29C0A9F1434C601786CE1B6DED1E1234((&V_0), 1, L_5, NULL);
		// matrix.SetColumn(2,    reader.ReadProperty<Vector4>(ES3Type_Vector4.Instance));
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_6 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_7 = ((ES3Type_Vector4_t20EB9288ABFACFA144B849DBAE5F00003E5D3EF1_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Vector4_t20EB9288ABFACFA144B849DBAE5F00003E5D3EF1_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_6);
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_8;
		L_8 = ES3Reader_ReadProperty_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_mEDC5DE4C01230CE888EE3982FA48F79B598E86DF(L_6, L_7, ES3Reader_ReadProperty_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_mEDC5DE4C01230CE888EE3982FA48F79B598E86DF_RuntimeMethod_var);
		Matrix4x4_SetColumn_mC1CBEB2C29C0A9F1434C601786CE1B6DED1E1234((&V_0), 2, L_8, NULL);
		// matrix.SetColumn(3,    reader.ReadProperty<Vector4>(ES3Type_Vector4.Instance));
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_9 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_10 = ((ES3Type_Vector4_t20EB9288ABFACFA144B849DBAE5F00003E5D3EF1_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Vector4_t20EB9288ABFACFA144B849DBAE5F00003E5D3EF1_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_9);
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_11;
		L_11 = ES3Reader_ReadProperty_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_mEDC5DE4C01230CE888EE3982FA48F79B598E86DF(L_9, L_10, ES3Reader_ReadProperty_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_mEDC5DE4C01230CE888EE3982FA48F79B598E86DF_RuntimeMethod_var);
		Matrix4x4_SetColumn_mC1CBEB2C29C0A9F1434C601786CE1B6DED1E1234((&V_0), 3, L_11, NULL);
		// return matrix;
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_12 = V_0;
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_13 = L_12;
		RuntimeObject* L_14 = Box(Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6_il2cpp_TypeInfo_var, &L_13);
		return L_14;
	}
}
// System.Object ES3Types.ES3Type_Matrix4x4::Read<System.Object>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_Matrix4x4_Read_TisRuntimeObject_m271FEE9D38C01375E75F3BCF905C398E3408B1D3_gshared (ES3Type_Matrix4x4_t9AC0DD88A660CC29B53E58E1E569A6CCBB1EFE3C* __this, ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_ReadProperty_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_mEDC5DE4C01230CE888EE3982FA48F79B598E86DF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_Vector4_t20EB9288ABFACFA144B849DBAE5F00003E5D3EF1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// var matrix = new Matrix4x4();
		il2cpp_codegen_initobj((&V_0), sizeof(Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6));
		// matrix.SetColumn(0,    reader.ReadProperty<Vector4>(ES3Type_Vector4.Instance));
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_0 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_1 = ((ES3Type_Vector4_t20EB9288ABFACFA144B849DBAE5F00003E5D3EF1_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Vector4_t20EB9288ABFACFA144B849DBAE5F00003E5D3EF1_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_0);
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_2;
		L_2 = ES3Reader_ReadProperty_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_mEDC5DE4C01230CE888EE3982FA48F79B598E86DF(L_0, L_1, ES3Reader_ReadProperty_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_mEDC5DE4C01230CE888EE3982FA48F79B598E86DF_RuntimeMethod_var);
		Matrix4x4_SetColumn_mC1CBEB2C29C0A9F1434C601786CE1B6DED1E1234((&V_0), 0, L_2, NULL);
		// matrix.SetColumn(1,    reader.ReadProperty<Vector4>(ES3Type_Vector4.Instance));
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_3 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_4 = ((ES3Type_Vector4_t20EB9288ABFACFA144B849DBAE5F00003E5D3EF1_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Vector4_t20EB9288ABFACFA144B849DBAE5F00003E5D3EF1_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_3);
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_5;
		L_5 = ES3Reader_ReadProperty_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_mEDC5DE4C01230CE888EE3982FA48F79B598E86DF(L_3, L_4, ES3Reader_ReadProperty_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_mEDC5DE4C01230CE888EE3982FA48F79B598E86DF_RuntimeMethod_var);
		Matrix4x4_SetColumn_mC1CBEB2C29C0A9F1434C601786CE1B6DED1E1234((&V_0), 1, L_5, NULL);
		// matrix.SetColumn(2,    reader.ReadProperty<Vector4>(ES3Type_Vector4.Instance));
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_6 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_7 = ((ES3Type_Vector4_t20EB9288ABFACFA144B849DBAE5F00003E5D3EF1_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Vector4_t20EB9288ABFACFA144B849DBAE5F00003E5D3EF1_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_6);
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_8;
		L_8 = ES3Reader_ReadProperty_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_mEDC5DE4C01230CE888EE3982FA48F79B598E86DF(L_6, L_7, ES3Reader_ReadProperty_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_mEDC5DE4C01230CE888EE3982FA48F79B598E86DF_RuntimeMethod_var);
		Matrix4x4_SetColumn_mC1CBEB2C29C0A9F1434C601786CE1B6DED1E1234((&V_0), 2, L_8, NULL);
		// matrix.SetColumn(3,    reader.ReadProperty<Vector4>(ES3Type_Vector4.Instance));
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_9 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_10 = ((ES3Type_Vector4_t20EB9288ABFACFA144B849DBAE5F00003E5D3EF1_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Vector4_t20EB9288ABFACFA144B849DBAE5F00003E5D3EF1_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_9);
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_11;
		L_11 = ES3Reader_ReadProperty_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_mEDC5DE4C01230CE888EE3982FA48F79B598E86DF(L_9, L_10, ES3Reader_ReadProperty_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_mEDC5DE4C01230CE888EE3982FA48F79B598E86DF_RuntimeMethod_var);
		Matrix4x4_SetColumn_mC1CBEB2C29C0A9F1434C601786CE1B6DED1E1234((&V_0), 3, L_11, NULL);
		// return matrix;
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_12 = V_0;
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_13 = L_12;
		RuntimeObject* L_14 = Box(Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6_il2cpp_TypeInfo_var, &L_13);
		return L_14;
	}
}
// System.Object ES3Types.ES3Type_Matrix4x4::Read<UnityEngine.Quaternion>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_Matrix4x4_Read_TisQuaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_m65C49141AB73FDE4A73D0765888DCA92D2362898_gshared (ES3Type_Matrix4x4_t9AC0DD88A660CC29B53E58E1E569A6CCBB1EFE3C* __this, ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_ReadProperty_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_mEDC5DE4C01230CE888EE3982FA48F79B598E86DF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_Vector4_t20EB9288ABFACFA144B849DBAE5F00003E5D3EF1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// var matrix = new Matrix4x4();
		il2cpp_codegen_initobj((&V_0), sizeof(Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6));
		// matrix.SetColumn(0,    reader.ReadProperty<Vector4>(ES3Type_Vector4.Instance));
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_0 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_1 = ((ES3Type_Vector4_t20EB9288ABFACFA144B849DBAE5F00003E5D3EF1_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Vector4_t20EB9288ABFACFA144B849DBAE5F00003E5D3EF1_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_0);
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_2;
		L_2 = ES3Reader_ReadProperty_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_mEDC5DE4C01230CE888EE3982FA48F79B598E86DF(L_0, L_1, ES3Reader_ReadProperty_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_mEDC5DE4C01230CE888EE3982FA48F79B598E86DF_RuntimeMethod_var);
		Matrix4x4_SetColumn_mC1CBEB2C29C0A9F1434C601786CE1B6DED1E1234((&V_0), 0, L_2, NULL);
		// matrix.SetColumn(1,    reader.ReadProperty<Vector4>(ES3Type_Vector4.Instance));
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_3 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_4 = ((ES3Type_Vector4_t20EB9288ABFACFA144B849DBAE5F00003E5D3EF1_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Vector4_t20EB9288ABFACFA144B849DBAE5F00003E5D3EF1_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_3);
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_5;
		L_5 = ES3Reader_ReadProperty_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_mEDC5DE4C01230CE888EE3982FA48F79B598E86DF(L_3, L_4, ES3Reader_ReadProperty_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_mEDC5DE4C01230CE888EE3982FA48F79B598E86DF_RuntimeMethod_var);
		Matrix4x4_SetColumn_mC1CBEB2C29C0A9F1434C601786CE1B6DED1E1234((&V_0), 1, L_5, NULL);
		// matrix.SetColumn(2,    reader.ReadProperty<Vector4>(ES3Type_Vector4.Instance));
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_6 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_7 = ((ES3Type_Vector4_t20EB9288ABFACFA144B849DBAE5F00003E5D3EF1_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Vector4_t20EB9288ABFACFA144B849DBAE5F00003E5D3EF1_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_6);
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_8;
		L_8 = ES3Reader_ReadProperty_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_mEDC5DE4C01230CE888EE3982FA48F79B598E86DF(L_6, L_7, ES3Reader_ReadProperty_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_mEDC5DE4C01230CE888EE3982FA48F79B598E86DF_RuntimeMethod_var);
		Matrix4x4_SetColumn_mC1CBEB2C29C0A9F1434C601786CE1B6DED1E1234((&V_0), 2, L_8, NULL);
		// matrix.SetColumn(3,    reader.ReadProperty<Vector4>(ES3Type_Vector4.Instance));
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_9 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_10 = ((ES3Type_Vector4_t20EB9288ABFACFA144B849DBAE5F00003E5D3EF1_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Vector4_t20EB9288ABFACFA144B849DBAE5F00003E5D3EF1_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_9);
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_11;
		L_11 = ES3Reader_ReadProperty_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_mEDC5DE4C01230CE888EE3982FA48F79B598E86DF(L_9, L_10, ES3Reader_ReadProperty_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_mEDC5DE4C01230CE888EE3982FA48F79B598E86DF_RuntimeMethod_var);
		Matrix4x4_SetColumn_mC1CBEB2C29C0A9F1434C601786CE1B6DED1E1234((&V_0), 3, L_11, NULL);
		// return matrix;
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_12 = V_0;
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_13 = L_12;
		RuntimeObject* L_14 = Box(Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6_il2cpp_TypeInfo_var, &L_13);
		return L_14;
	}
}
// System.Object ES3Types.ES3Type_Matrix4x4::Read<UnityEngine.Rect>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_Matrix4x4_Read_TisRect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D_mC260464D70C1978ED2CC28BAC3F56F38E993CF95_gshared (ES3Type_Matrix4x4_t9AC0DD88A660CC29B53E58E1E569A6CCBB1EFE3C* __this, ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_ReadProperty_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_mEDC5DE4C01230CE888EE3982FA48F79B598E86DF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_Vector4_t20EB9288ABFACFA144B849DBAE5F00003E5D3EF1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// var matrix = new Matrix4x4();
		il2cpp_codegen_initobj((&V_0), sizeof(Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6));
		// matrix.SetColumn(0,    reader.ReadProperty<Vector4>(ES3Type_Vector4.Instance));
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_0 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_1 = ((ES3Type_Vector4_t20EB9288ABFACFA144B849DBAE5F00003E5D3EF1_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Vector4_t20EB9288ABFACFA144B849DBAE5F00003E5D3EF1_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_0);
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_2;
		L_2 = ES3Reader_ReadProperty_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_mEDC5DE4C01230CE888EE3982FA48F79B598E86DF(L_0, L_1, ES3Reader_ReadProperty_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_mEDC5DE4C01230CE888EE3982FA48F79B598E86DF_RuntimeMethod_var);
		Matrix4x4_SetColumn_mC1CBEB2C29C0A9F1434C601786CE1B6DED1E1234((&V_0), 0, L_2, NULL);
		// matrix.SetColumn(1,    reader.ReadProperty<Vector4>(ES3Type_Vector4.Instance));
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_3 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_4 = ((ES3Type_Vector4_t20EB9288ABFACFA144B849DBAE5F00003E5D3EF1_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Vector4_t20EB9288ABFACFA144B849DBAE5F00003E5D3EF1_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_3);
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_5;
		L_5 = ES3Reader_ReadProperty_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_mEDC5DE4C01230CE888EE3982FA48F79B598E86DF(L_3, L_4, ES3Reader_ReadProperty_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_mEDC5DE4C01230CE888EE3982FA48F79B598E86DF_RuntimeMethod_var);
		Matrix4x4_SetColumn_mC1CBEB2C29C0A9F1434C601786CE1B6DED1E1234((&V_0), 1, L_5, NULL);
		// matrix.SetColumn(2,    reader.ReadProperty<Vector4>(ES3Type_Vector4.Instance));
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_6 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_7 = ((ES3Type_Vector4_t20EB9288ABFACFA144B849DBAE5F00003E5D3EF1_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Vector4_t20EB9288ABFACFA144B849DBAE5F00003E5D3EF1_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_6);
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_8;
		L_8 = ES3Reader_ReadProperty_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_mEDC5DE4C01230CE888EE3982FA48F79B598E86DF(L_6, L_7, ES3Reader_ReadProperty_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_mEDC5DE4C01230CE888EE3982FA48F79B598E86DF_RuntimeMethod_var);
		Matrix4x4_SetColumn_mC1CBEB2C29C0A9F1434C601786CE1B6DED1E1234((&V_0), 2, L_8, NULL);
		// matrix.SetColumn(3,    reader.ReadProperty<Vector4>(ES3Type_Vector4.Instance));
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_9 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_10 = ((ES3Type_Vector4_t20EB9288ABFACFA144B849DBAE5F00003E5D3EF1_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Vector4_t20EB9288ABFACFA144B849DBAE5F00003E5D3EF1_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_9);
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_11;
		L_11 = ES3Reader_ReadProperty_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_mEDC5DE4C01230CE888EE3982FA48F79B598E86DF(L_9, L_10, ES3Reader_ReadProperty_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_mEDC5DE4C01230CE888EE3982FA48F79B598E86DF_RuntimeMethod_var);
		Matrix4x4_SetColumn_mC1CBEB2C29C0A9F1434C601786CE1B6DED1E1234((&V_0), 3, L_11, NULL);
		// return matrix;
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_12 = V_0;
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_13 = L_12;
		RuntimeObject* L_14 = Box(Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6_il2cpp_TypeInfo_var, &L_13);
		return L_14;
	}
}
// System.Object ES3Types.ES3Type_Matrix4x4::Read<UnityEngine.RenderTextureDescriptor>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_Matrix4x4_Read_TisRenderTextureDescriptor_t69845881CE6437E4E61F92074F2F84079F23FA46_mC08213A3AB8BDD4FBE0A6665079FB150930EE84B_gshared (ES3Type_Matrix4x4_t9AC0DD88A660CC29B53E58E1E569A6CCBB1EFE3C* __this, ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_ReadProperty_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_mEDC5DE4C01230CE888EE3982FA48F79B598E86DF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_Vector4_t20EB9288ABFACFA144B849DBAE5F00003E5D3EF1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// var matrix = new Matrix4x4();
		il2cpp_codegen_initobj((&V_0), sizeof(Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6));
		// matrix.SetColumn(0,    reader.ReadProperty<Vector4>(ES3Type_Vector4.Instance));
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_0 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_1 = ((ES3Type_Vector4_t20EB9288ABFACFA144B849DBAE5F00003E5D3EF1_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Vector4_t20EB9288ABFACFA144B849DBAE5F00003E5D3EF1_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_0);
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_2;
		L_2 = ES3Reader_ReadProperty_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_mEDC5DE4C01230CE888EE3982FA48F79B598E86DF(L_0, L_1, ES3Reader_ReadProperty_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_mEDC5DE4C01230CE888EE3982FA48F79B598E86DF_RuntimeMethod_var);
		Matrix4x4_SetColumn_mC1CBEB2C29C0A9F1434C601786CE1B6DED1E1234((&V_0), 0, L_2, NULL);
		// matrix.SetColumn(1,    reader.ReadProperty<Vector4>(ES3Type_Vector4.Instance));
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_3 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_4 = ((ES3Type_Vector4_t20EB9288ABFACFA144B849DBAE5F00003E5D3EF1_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Vector4_t20EB9288ABFACFA144B849DBAE5F00003E5D3EF1_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_3);
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_5;
		L_5 = ES3Reader_ReadProperty_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_mEDC5DE4C01230CE888EE3982FA48F79B598E86DF(L_3, L_4, ES3Reader_ReadProperty_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_mEDC5DE4C01230CE888EE3982FA48F79B598E86DF_RuntimeMethod_var);
		Matrix4x4_SetColumn_mC1CBEB2C29C0A9F1434C601786CE1B6DED1E1234((&V_0), 1, L_5, NULL);
		// matrix.SetColumn(2,    reader.ReadProperty<Vector4>(ES3Type_Vector4.Instance));
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_6 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_7 = ((ES3Type_Vector4_t20EB9288ABFACFA144B849DBAE5F00003E5D3EF1_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Vector4_t20EB9288ABFACFA144B849DBAE5F00003E5D3EF1_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_6);
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_8;
		L_8 = ES3Reader_ReadProperty_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_mEDC5DE4C01230CE888EE3982FA48F79B598E86DF(L_6, L_7, ES3Reader_ReadProperty_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_mEDC5DE4C01230CE888EE3982FA48F79B598E86DF_RuntimeMethod_var);
		Matrix4x4_SetColumn_mC1CBEB2C29C0A9F1434C601786CE1B6DED1E1234((&V_0), 2, L_8, NULL);
		// matrix.SetColumn(3,    reader.ReadProperty<Vector4>(ES3Type_Vector4.Instance));
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_9 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_10 = ((ES3Type_Vector4_t20EB9288ABFACFA144B849DBAE5F00003E5D3EF1_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Vector4_t20EB9288ABFACFA144B849DBAE5F00003E5D3EF1_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_9);
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_11;
		L_11 = ES3Reader_ReadProperty_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_mEDC5DE4C01230CE888EE3982FA48F79B598E86DF(L_9, L_10, ES3Reader_ReadProperty_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_mEDC5DE4C01230CE888EE3982FA48F79B598E86DF_RuntimeMethod_var);
		Matrix4x4_SetColumn_mC1CBEB2C29C0A9F1434C601786CE1B6DED1E1234((&V_0), 3, L_11, NULL);
		// return matrix;
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_12 = V_0;
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_13 = L_12;
		RuntimeObject* L_14 = Box(Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6_il2cpp_TypeInfo_var, &L_13);
		return L_14;
	}
}
// System.Object ES3Types.ES3Type_Matrix4x4::Read<System.Single>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_Matrix4x4_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m0497BA020D852EDCA18BEB40BDBD1386C2E3959F_gshared (ES3Type_Matrix4x4_t9AC0DD88A660CC29B53E58E1E569A6CCBB1EFE3C* __this, ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_ReadProperty_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_mEDC5DE4C01230CE888EE3982FA48F79B598E86DF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_Vector4_t20EB9288ABFACFA144B849DBAE5F00003E5D3EF1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// var matrix = new Matrix4x4();
		il2cpp_codegen_initobj((&V_0), sizeof(Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6));
		// matrix.SetColumn(0,    reader.ReadProperty<Vector4>(ES3Type_Vector4.Instance));
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_0 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_1 = ((ES3Type_Vector4_t20EB9288ABFACFA144B849DBAE5F00003E5D3EF1_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Vector4_t20EB9288ABFACFA144B849DBAE5F00003E5D3EF1_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_0);
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_2;
		L_2 = ES3Reader_ReadProperty_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_mEDC5DE4C01230CE888EE3982FA48F79B598E86DF(L_0, L_1, ES3Reader_ReadProperty_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_mEDC5DE4C01230CE888EE3982FA48F79B598E86DF_RuntimeMethod_var);
		Matrix4x4_SetColumn_mC1CBEB2C29C0A9F1434C601786CE1B6DED1E1234((&V_0), 0, L_2, NULL);
		// matrix.SetColumn(1,    reader.ReadProperty<Vector4>(ES3Type_Vector4.Instance));
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_3 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_4 = ((ES3Type_Vector4_t20EB9288ABFACFA144B849DBAE5F00003E5D3EF1_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Vector4_t20EB9288ABFACFA144B849DBAE5F00003E5D3EF1_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_3);
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_5;
		L_5 = ES3Reader_ReadProperty_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_mEDC5DE4C01230CE888EE3982FA48F79B598E86DF(L_3, L_4, ES3Reader_ReadProperty_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_mEDC5DE4C01230CE888EE3982FA48F79B598E86DF_RuntimeMethod_var);
		Matrix4x4_SetColumn_mC1CBEB2C29C0A9F1434C601786CE1B6DED1E1234((&V_0), 1, L_5, NULL);
		// matrix.SetColumn(2,    reader.ReadProperty<Vector4>(ES3Type_Vector4.Instance));
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_6 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_7 = ((ES3Type_Vector4_t20EB9288ABFACFA144B849DBAE5F00003E5D3EF1_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Vector4_t20EB9288ABFACFA144B849DBAE5F00003E5D3EF1_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_6);
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_8;
		L_8 = ES3Reader_ReadProperty_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_mEDC5DE4C01230CE888EE3982FA48F79B598E86DF(L_6, L_7, ES3Reader_ReadProperty_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_mEDC5DE4C01230CE888EE3982FA48F79B598E86DF_RuntimeMethod_var);
		Matrix4x4_SetColumn_mC1CBEB2C29C0A9F1434C601786CE1B6DED1E1234((&V_0), 2, L_8, NULL);
		// matrix.SetColumn(3,    reader.ReadProperty<Vector4>(ES3Type_Vector4.Instance));
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_9 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_10 = ((ES3Type_Vector4_t20EB9288ABFACFA144B849DBAE5F00003E5D3EF1_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Vector4_t20EB9288ABFACFA144B849DBAE5F00003E5D3EF1_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_9);
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_11;
		L_11 = ES3Reader_ReadProperty_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_mEDC5DE4C01230CE888EE3982FA48F79B598E86DF(L_9, L_10, ES3Reader_ReadProperty_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_mEDC5DE4C01230CE888EE3982FA48F79B598E86DF_RuntimeMethod_var);
		Matrix4x4_SetColumn_mC1CBEB2C29C0A9F1434C601786CE1B6DED1E1234((&V_0), 3, L_11, NULL);
		// return matrix;
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_12 = V_0;
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_13 = L_12;
		RuntimeObject* L_14 = Box(Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6_il2cpp_TypeInfo_var, &L_13);
		return L_14;
	}
}
// System.Object ES3Types.ES3Type_Matrix4x4::Read<UnityEngine.Vector2>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_Matrix4x4_Read_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_m2D09C3A47A04E92DE2204DABD8AE0F0DFA0E7A4A_gshared (ES3Type_Matrix4x4_t9AC0DD88A660CC29B53E58E1E569A6CCBB1EFE3C* __this, ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_ReadProperty_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_mEDC5DE4C01230CE888EE3982FA48F79B598E86DF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_Vector4_t20EB9288ABFACFA144B849DBAE5F00003E5D3EF1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// var matrix = new Matrix4x4();
		il2cpp_codegen_initobj((&V_0), sizeof(Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6));
		// matrix.SetColumn(0,    reader.ReadProperty<Vector4>(ES3Type_Vector4.Instance));
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_0 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_1 = ((ES3Type_Vector4_t20EB9288ABFACFA144B849DBAE5F00003E5D3EF1_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Vector4_t20EB9288ABFACFA144B849DBAE5F00003E5D3EF1_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_0);
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_2;
		L_2 = ES3Reader_ReadProperty_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_mEDC5DE4C01230CE888EE3982FA48F79B598E86DF(L_0, L_1, ES3Reader_ReadProperty_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_mEDC5DE4C01230CE888EE3982FA48F79B598E86DF_RuntimeMethod_var);
		Matrix4x4_SetColumn_mC1CBEB2C29C0A9F1434C601786CE1B6DED1E1234((&V_0), 0, L_2, NULL);
		// matrix.SetColumn(1,    reader.ReadProperty<Vector4>(ES3Type_Vector4.Instance));
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_3 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_4 = ((ES3Type_Vector4_t20EB9288ABFACFA144B849DBAE5F00003E5D3EF1_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Vector4_t20EB9288ABFACFA144B849DBAE5F00003E5D3EF1_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_3);
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_5;
		L_5 = ES3Reader_ReadProperty_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_mEDC5DE4C01230CE888EE3982FA48F79B598E86DF(L_3, L_4, ES3Reader_ReadProperty_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_mEDC5DE4C01230CE888EE3982FA48F79B598E86DF_RuntimeMethod_var);
		Matrix4x4_SetColumn_mC1CBEB2C29C0A9F1434C601786CE1B6DED1E1234((&V_0), 1, L_5, NULL);
		// matrix.SetColumn(2,    reader.ReadProperty<Vector4>(ES3Type_Vector4.Instance));
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_6 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_7 = ((ES3Type_Vector4_t20EB9288ABFACFA144B849DBAE5F00003E5D3EF1_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Vector4_t20EB9288ABFACFA144B849DBAE5F00003E5D3EF1_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_6);
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_8;
		L_8 = ES3Reader_ReadProperty_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_mEDC5DE4C01230CE888EE3982FA48F79B598E86DF(L_6, L_7, ES3Reader_ReadProperty_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_mEDC5DE4C01230CE888EE3982FA48F79B598E86DF_RuntimeMethod_var);
		Matrix4x4_SetColumn_mC1CBEB2C29C0A9F1434C601786CE1B6DED1E1234((&V_0), 2, L_8, NULL);
		// matrix.SetColumn(3,    reader.ReadProperty<Vector4>(ES3Type_Vector4.Instance));
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_9 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_10 = ((ES3Type_Vector4_t20EB9288ABFACFA144B849DBAE5F00003E5D3EF1_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Vector4_t20EB9288ABFACFA144B849DBAE5F00003E5D3EF1_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_9);
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_11;
		L_11 = ES3Reader_ReadProperty_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_mEDC5DE4C01230CE888EE3982FA48F79B598E86DF(L_9, L_10, ES3Reader_ReadProperty_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_mEDC5DE4C01230CE888EE3982FA48F79B598E86DF_RuntimeMethod_var);
		Matrix4x4_SetColumn_mC1CBEB2C29C0A9F1434C601786CE1B6DED1E1234((&V_0), 3, L_11, NULL);
		// return matrix;
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_12 = V_0;
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_13 = L_12;
		RuntimeObject* L_14 = Box(Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6_il2cpp_TypeInfo_var, &L_13);
		return L_14;
	}
}
// System.Object ES3Types.ES3Type_Matrix4x4::Read<UnityEngine.Vector3>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_Matrix4x4_Read_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_mD73E901BD49ACC91E5F644166B38D73F679D27CC_gshared (ES3Type_Matrix4x4_t9AC0DD88A660CC29B53E58E1E569A6CCBB1EFE3C* __this, ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_ReadProperty_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_mEDC5DE4C01230CE888EE3982FA48F79B598E86DF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_Vector4_t20EB9288ABFACFA144B849DBAE5F00003E5D3EF1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// var matrix = new Matrix4x4();
		il2cpp_codegen_initobj((&V_0), sizeof(Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6));
		// matrix.SetColumn(0,    reader.ReadProperty<Vector4>(ES3Type_Vector4.Instance));
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_0 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_1 = ((ES3Type_Vector4_t20EB9288ABFACFA144B849DBAE5F00003E5D3EF1_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Vector4_t20EB9288ABFACFA144B849DBAE5F00003E5D3EF1_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_0);
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_2;
		L_2 = ES3Reader_ReadProperty_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_mEDC5DE4C01230CE888EE3982FA48F79B598E86DF(L_0, L_1, ES3Reader_ReadProperty_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_mEDC5DE4C01230CE888EE3982FA48F79B598E86DF_RuntimeMethod_var);
		Matrix4x4_SetColumn_mC1CBEB2C29C0A9F1434C601786CE1B6DED1E1234((&V_0), 0, L_2, NULL);
		// matrix.SetColumn(1,    reader.ReadProperty<Vector4>(ES3Type_Vector4.Instance));
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_3 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_4 = ((ES3Type_Vector4_t20EB9288ABFACFA144B849DBAE5F00003E5D3EF1_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Vector4_t20EB9288ABFACFA144B849DBAE5F00003E5D3EF1_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_3);
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_5;
		L_5 = ES3Reader_ReadProperty_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_mEDC5DE4C01230CE888EE3982FA48F79B598E86DF(L_3, L_4, ES3Reader_ReadProperty_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_mEDC5DE4C01230CE888EE3982FA48F79B598E86DF_RuntimeMethod_var);
		Matrix4x4_SetColumn_mC1CBEB2C29C0A9F1434C601786CE1B6DED1E1234((&V_0), 1, L_5, NULL);
		// matrix.SetColumn(2,    reader.ReadProperty<Vector4>(ES3Type_Vector4.Instance));
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_6 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_7 = ((ES3Type_Vector4_t20EB9288ABFACFA144B849DBAE5F00003E5D3EF1_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Vector4_t20EB9288ABFACFA144B849DBAE5F00003E5D3EF1_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_6);
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_8;
		L_8 = ES3Reader_ReadProperty_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_mEDC5DE4C01230CE888EE3982FA48F79B598E86DF(L_6, L_7, ES3Reader_ReadProperty_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_mEDC5DE4C01230CE888EE3982FA48F79B598E86DF_RuntimeMethod_var);
		Matrix4x4_SetColumn_mC1CBEB2C29C0A9F1434C601786CE1B6DED1E1234((&V_0), 2, L_8, NULL);
		// matrix.SetColumn(3,    reader.ReadProperty<Vector4>(ES3Type_Vector4.Instance));
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_9 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_10 = ((ES3Type_Vector4_t20EB9288ABFACFA144B849DBAE5F00003E5D3EF1_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Vector4_t20EB9288ABFACFA144B849DBAE5F00003E5D3EF1_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_9);
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_11;
		L_11 = ES3Reader_ReadProperty_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_mEDC5DE4C01230CE888EE3982FA48F79B598E86DF(L_9, L_10, ES3Reader_ReadProperty_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_mEDC5DE4C01230CE888EE3982FA48F79B598E86DF_RuntimeMethod_var);
		Matrix4x4_SetColumn_mC1CBEB2C29C0A9F1434C601786CE1B6DED1E1234((&V_0), 3, L_11, NULL);
		// return matrix;
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_12 = V_0;
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_13 = L_12;
		RuntimeObject* L_14 = Box(Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6_il2cpp_TypeInfo_var, &L_13);
		return L_14;
	}
}
// System.Object ES3Types.ES3Type_Matrix4x4::Read<UnityEngine.Vector4>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_Matrix4x4_Read_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_m4B1477CCA73529C48C41554F87668A40805B25E7_gshared (ES3Type_Matrix4x4_t9AC0DD88A660CC29B53E58E1E569A6CCBB1EFE3C* __this, ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_ReadProperty_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_mEDC5DE4C01230CE888EE3982FA48F79B598E86DF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_Vector4_t20EB9288ABFACFA144B849DBAE5F00003E5D3EF1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// var matrix = new Matrix4x4();
		il2cpp_codegen_initobj((&V_0), sizeof(Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6));
		// matrix.SetColumn(0,    reader.ReadProperty<Vector4>(ES3Type_Vector4.Instance));
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_0 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_1 = ((ES3Type_Vector4_t20EB9288ABFACFA144B849DBAE5F00003E5D3EF1_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Vector4_t20EB9288ABFACFA144B849DBAE5F00003E5D3EF1_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_0);
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_2;
		L_2 = ES3Reader_ReadProperty_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_mEDC5DE4C01230CE888EE3982FA48F79B598E86DF(L_0, L_1, ES3Reader_ReadProperty_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_mEDC5DE4C01230CE888EE3982FA48F79B598E86DF_RuntimeMethod_var);
		Matrix4x4_SetColumn_mC1CBEB2C29C0A9F1434C601786CE1B6DED1E1234((&V_0), 0, L_2, NULL);
		// matrix.SetColumn(1,    reader.ReadProperty<Vector4>(ES3Type_Vector4.Instance));
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_3 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_4 = ((ES3Type_Vector4_t20EB9288ABFACFA144B849DBAE5F00003E5D3EF1_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Vector4_t20EB9288ABFACFA144B849DBAE5F00003E5D3EF1_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_3);
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_5;
		L_5 = ES3Reader_ReadProperty_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_mEDC5DE4C01230CE888EE3982FA48F79B598E86DF(L_3, L_4, ES3Reader_ReadProperty_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_mEDC5DE4C01230CE888EE3982FA48F79B598E86DF_RuntimeMethod_var);
		Matrix4x4_SetColumn_mC1CBEB2C29C0A9F1434C601786CE1B6DED1E1234((&V_0), 1, L_5, NULL);
		// matrix.SetColumn(2,    reader.ReadProperty<Vector4>(ES3Type_Vector4.Instance));
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_6 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_7 = ((ES3Type_Vector4_t20EB9288ABFACFA144B849DBAE5F00003E5D3EF1_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Vector4_t20EB9288ABFACFA144B849DBAE5F00003E5D3EF1_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_6);
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_8;
		L_8 = ES3Reader_ReadProperty_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_mEDC5DE4C01230CE888EE3982FA48F79B598E86DF(L_6, L_7, ES3Reader_ReadProperty_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_mEDC5DE4C01230CE888EE3982FA48F79B598E86DF_RuntimeMethod_var);
		Matrix4x4_SetColumn_mC1CBEB2C29C0A9F1434C601786CE1B6DED1E1234((&V_0), 2, L_8, NULL);
		// matrix.SetColumn(3,    reader.ReadProperty<Vector4>(ES3Type_Vector4.Instance));
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_9 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_10 = ((ES3Type_Vector4_t20EB9288ABFACFA144B849DBAE5F00003E5D3EF1_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Vector4_t20EB9288ABFACFA144B849DBAE5F00003E5D3EF1_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_9);
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_11;
		L_11 = ES3Reader_ReadProperty_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_mEDC5DE4C01230CE888EE3982FA48F79B598E86DF(L_9, L_10, ES3Reader_ReadProperty_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_mEDC5DE4C01230CE888EE3982FA48F79B598E86DF_RuntimeMethod_var);
		Matrix4x4_SetColumn_mC1CBEB2C29C0A9F1434C601786CE1B6DED1E1234((&V_0), 3, L_11, NULL);
		// return matrix;
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_12 = V_0;
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_13 = L_12;
		RuntimeObject* L_14 = Box(Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6_il2cpp_TypeInfo_var, &L_13);
		return L_14;
	}
}
// System.Object ES3Types.ES3Type_Matrix4x4::Read<UnityEngine.ParticleSystem/MinMaxCurve>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_Matrix4x4_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_m551120E47B30E11182CEAA43C238ABB227B1F09E_gshared (ES3Type_Matrix4x4_t9AC0DD88A660CC29B53E58E1E569A6CCBB1EFE3C* __this, ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_ReadProperty_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_mEDC5DE4C01230CE888EE3982FA48F79B598E86DF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_Vector4_t20EB9288ABFACFA144B849DBAE5F00003E5D3EF1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// var matrix = new Matrix4x4();
		il2cpp_codegen_initobj((&V_0), sizeof(Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6));
		// matrix.SetColumn(0,    reader.ReadProperty<Vector4>(ES3Type_Vector4.Instance));
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_0 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_1 = ((ES3Type_Vector4_t20EB9288ABFACFA144B849DBAE5F00003E5D3EF1_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Vector4_t20EB9288ABFACFA144B849DBAE5F00003E5D3EF1_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_0);
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_2;
		L_2 = ES3Reader_ReadProperty_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_mEDC5DE4C01230CE888EE3982FA48F79B598E86DF(L_0, L_1, ES3Reader_ReadProperty_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_mEDC5DE4C01230CE888EE3982FA48F79B598E86DF_RuntimeMethod_var);
		Matrix4x4_SetColumn_mC1CBEB2C29C0A9F1434C601786CE1B6DED1E1234((&V_0), 0, L_2, NULL);
		// matrix.SetColumn(1,    reader.ReadProperty<Vector4>(ES3Type_Vector4.Instance));
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_3 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_4 = ((ES3Type_Vector4_t20EB9288ABFACFA144B849DBAE5F00003E5D3EF1_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Vector4_t20EB9288ABFACFA144B849DBAE5F00003E5D3EF1_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_3);
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_5;
		L_5 = ES3Reader_ReadProperty_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_mEDC5DE4C01230CE888EE3982FA48F79B598E86DF(L_3, L_4, ES3Reader_ReadProperty_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_mEDC5DE4C01230CE888EE3982FA48F79B598E86DF_RuntimeMethod_var);
		Matrix4x4_SetColumn_mC1CBEB2C29C0A9F1434C601786CE1B6DED1E1234((&V_0), 1, L_5, NULL);
		// matrix.SetColumn(2,    reader.ReadProperty<Vector4>(ES3Type_Vector4.Instance));
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_6 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_7 = ((ES3Type_Vector4_t20EB9288ABFACFA144B849DBAE5F00003E5D3EF1_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Vector4_t20EB9288ABFACFA144B849DBAE5F00003E5D3EF1_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_6);
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_8;
		L_8 = ES3Reader_ReadProperty_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_mEDC5DE4C01230CE888EE3982FA48F79B598E86DF(L_6, L_7, ES3Reader_ReadProperty_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_mEDC5DE4C01230CE888EE3982FA48F79B598E86DF_RuntimeMethod_var);
		Matrix4x4_SetColumn_mC1CBEB2C29C0A9F1434C601786CE1B6DED1E1234((&V_0), 2, L_8, NULL);
		// matrix.SetColumn(3,    reader.ReadProperty<Vector4>(ES3Type_Vector4.Instance));
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_9 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_10 = ((ES3Type_Vector4_t20EB9288ABFACFA144B849DBAE5F00003E5D3EF1_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Vector4_t20EB9288ABFACFA144B849DBAE5F00003E5D3EF1_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_9);
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_11;
		L_11 = ES3Reader_ReadProperty_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_mEDC5DE4C01230CE888EE3982FA48F79B598E86DF(L_9, L_10, ES3Reader_ReadProperty_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_mEDC5DE4C01230CE888EE3982FA48F79B598E86DF_RuntimeMethod_var);
		Matrix4x4_SetColumn_mC1CBEB2C29C0A9F1434C601786CE1B6DED1E1234((&V_0), 3, L_11, NULL);
		// return matrix;
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_12 = V_0;
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_13 = L_12;
		RuntimeObject* L_14 = Box(Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6_il2cpp_TypeInfo_var, &L_13);
		return L_14;
	}
}
// System.Object ES3Types.ES3Type_Matrix4x4::Read<UnityEngine.ParticleSystem/MinMaxGradient>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_Matrix4x4_Read_TisMinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69_mF0EFCDDEC21B60B7817606F30BD17AC766E5051E_gshared (ES3Type_Matrix4x4_t9AC0DD88A660CC29B53E58E1E569A6CCBB1EFE3C* __this, ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_ReadProperty_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_mEDC5DE4C01230CE888EE3982FA48F79B598E86DF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_Vector4_t20EB9288ABFACFA144B849DBAE5F00003E5D3EF1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// var matrix = new Matrix4x4();
		il2cpp_codegen_initobj((&V_0), sizeof(Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6));
		// matrix.SetColumn(0,    reader.ReadProperty<Vector4>(ES3Type_Vector4.Instance));
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_0 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_1 = ((ES3Type_Vector4_t20EB9288ABFACFA144B849DBAE5F00003E5D3EF1_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Vector4_t20EB9288ABFACFA144B849DBAE5F00003E5D3EF1_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_0);
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_2;
		L_2 = ES3Reader_ReadProperty_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_mEDC5DE4C01230CE888EE3982FA48F79B598E86DF(L_0, L_1, ES3Reader_ReadProperty_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_mEDC5DE4C01230CE888EE3982FA48F79B598E86DF_RuntimeMethod_var);
		Matrix4x4_SetColumn_mC1CBEB2C29C0A9F1434C601786CE1B6DED1E1234((&V_0), 0, L_2, NULL);
		// matrix.SetColumn(1,    reader.ReadProperty<Vector4>(ES3Type_Vector4.Instance));
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_3 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_4 = ((ES3Type_Vector4_t20EB9288ABFACFA144B849DBAE5F00003E5D3EF1_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Vector4_t20EB9288ABFACFA144B849DBAE5F00003E5D3EF1_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_3);
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_5;
		L_5 = ES3Reader_ReadProperty_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_mEDC5DE4C01230CE888EE3982FA48F79B598E86DF(L_3, L_4, ES3Reader_ReadProperty_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_mEDC5DE4C01230CE888EE3982FA48F79B598E86DF_RuntimeMethod_var);
		Matrix4x4_SetColumn_mC1CBEB2C29C0A9F1434C601786CE1B6DED1E1234((&V_0), 1, L_5, NULL);
		// matrix.SetColumn(2,    reader.ReadProperty<Vector4>(ES3Type_Vector4.Instance));
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_6 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_7 = ((ES3Type_Vector4_t20EB9288ABFACFA144B849DBAE5F00003E5D3EF1_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Vector4_t20EB9288ABFACFA144B849DBAE5F00003E5D3EF1_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_6);
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_8;
		L_8 = ES3Reader_ReadProperty_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_mEDC5DE4C01230CE888EE3982FA48F79B598E86DF(L_6, L_7, ES3Reader_ReadProperty_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_mEDC5DE4C01230CE888EE3982FA48F79B598E86DF_RuntimeMethod_var);
		Matrix4x4_SetColumn_mC1CBEB2C29C0A9F1434C601786CE1B6DED1E1234((&V_0), 2, L_8, NULL);
		// matrix.SetColumn(3,    reader.ReadProperty<Vector4>(ES3Type_Vector4.Instance));
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_9 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_10 = ((ES3Type_Vector4_t20EB9288ABFACFA144B849DBAE5F00003E5D3EF1_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Vector4_t20EB9288ABFACFA144B849DBAE5F00003E5D3EF1_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_9);
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_11;
		L_11 = ES3Reader_ReadProperty_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_mEDC5DE4C01230CE888EE3982FA48F79B598E86DF(L_9, L_10, ES3Reader_ReadProperty_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_mEDC5DE4C01230CE888EE3982FA48F79B598E86DF_RuntimeMethod_var);
		Matrix4x4_SetColumn_mC1CBEB2C29C0A9F1434C601786CE1B6DED1E1234((&V_0), 3, L_11, NULL);
		// return matrix;
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_12 = V_0;
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_13 = L_12;
		RuntimeObject* L_14 = Box(Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6_il2cpp_TypeInfo_var, &L_13);
		return L_14;
	}
}
// System.Object ES3Types.ES3Type_Mesh::ReadUnityObject<System.Object>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_Mesh_ReadUnityObject_TisRuntimeObject_m3EEA3FC9F936FB1802811CBA510681916DA96DE1_gshared (ES3Type_Mesh_tB7CD0BF677668097D339633406535F749DDDFE48* __this, ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* V_0 = NULL;
	{
		// var obj = new Mesh();
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_0 = (Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4*)il2cpp_codegen_object_new(Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Mesh__ctor_m5A9AECEDDAFFD84811ED8928012BDE97A9CEBD00(L_0, NULL);
		V_0 = L_0;
		// ReadUnityObject<T>(reader, obj);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_1 = ___reader0;
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_2 = V_0;
		NullCheck((ES3UnityObjectType_t3436D50553BAED8BDAD2A84B56E1F267FB66B24B*)__this);
		GenericVirtualActionInvoker2< ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518*, RuntimeObject* >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 0), (ES3UnityObjectType_t3436D50553BAED8BDAD2A84B56E1F267FB66B24B*)__this, L_1, (RuntimeObject*)L_2);
		// return obj;
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_3 = V_0;
		return (RuntimeObject*)L_3;
	}
}
// System.Void ES3Types.ES3Type_Mesh::ReadUnityObject<System.Object>(ES3Reader,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ES3Type_Mesh_ReadUnityObject_TisRuntimeObject_m3A3855A4EE51B8CED28F3ADD76E36A57C9FC6D45_gshared (ES3Type_Mesh_tB7CD0BF677668097D339633406535F749DDDFE48* __this, ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* ___reader0, RuntimeObject* ___obj1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_ReadProperty_TisInt32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_mDD082AEE8B879E881D914C842E79E8EA68C254F2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisBoneWeightU5BU5D_t76F390D8CBA0ADCB87EB98B135C8886857DFE651_m76CB2F6905E271B24E09EE9FB67CBB8172A6B440_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisBounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3_m1DAB1D2953772FCB56E7DB24E9D86F3CB42348F4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisColor32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259_m2A78033772A6489F2170F21F8075D8AC586AC084_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisInt32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_mD1505C01A552AB4C12E6AA1589FCD990DBE6A7FA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mEFCC4D52DD5B822D3561A53591AE11CDB25CDB6F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisMatrix4x4U5BU5D_t9C51C93425FABC022B506D2DB3A5FA70F9752C4D_m2B358332EF877DDDEF43FD877390D40D97C7D017_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisVector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA_mAEBB0376131E5E70758FE2F9CDF22B3500994D70_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisVector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C_mA2F2FDABF03BDE9693365F378CCF9E075DB20E83_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisVector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD_m0EBB9026A04116D4F7D58168C297A420028FEF2D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_BoneWeightArray_tFAA92ECC1D6765E1F70FFEA9DF3B2B31B6145CCF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_Bounds_t7DD589E28271A151FBD0712F3599D195980A6248_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_Color32Array_tF57FE9123BFDB6D72D08528E212B3254A6274B61_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_Matrix4x4Array_t47DDEE22DEA2102D3AA242FF6DF7F33B39ADAE95_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_Vector2Array_t9039B2B68EDC2EFCCB6D15820CDAFBE7FCB99411_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_Vector3Array_t71629B81DCF76559D1A197C5F6357C0410EBED6D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_Vector4Array_t1262F5AED18360AAACF70C910DCAE04310FAD446_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_intArray_t0282F806407A0709B1F055D1AF105C52C39BB6E6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_int_t05A5E7A96442F23CE33E24A71CD349372A70E0C3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral057B3BF6FF011F75099CE84564ABE58C872288F4);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral05F6EAE9494DB0450DB43C3691D64129962ED751);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2E4D3331FC63E1049224549936FAF640E4D0E137);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3F8C67011B093417D89377E9DBF57017943FDA11);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3FDCFD736F0A209B476605D31B517A9412093986);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral695F5F858DF14780BC5525F0AA16CE70EB9C45E8);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7EF771DC1DDB512A8FAB7AF357549BD349530F7D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9A92D5C8DA89C6E80E74B010F4E5AAA4F4E0C945);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB1C30CF60A2E69EC232854CAED20E364C46D862F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB780B47DCEE9180898A6245E7652C29FC7F6A7BC);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBF92C939C85D8888B68A1C0E975839B22C2F1CA0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD18BDC2D30848C2775BAB81B1520EB5760429863);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD52AA944806C2B3BFAE356FC41F3C256E5900C8D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD66FED67EA1ADEC87F718BC4CEE5ABBE11B4ED17);
		s_Il2CppMethodInitialized = true;
	}
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	String_t* V_2 = NULL;
	uint32_t V_3 = 0;
	int32_t V_4 = 0;
	RuntimeObject* V_5 = NULL;
	{
		// var instance = (UnityEngine.Mesh)obj;
		RuntimeObject* L_0 = ___obj1;
		V_0 = ((Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4*)CastclassSealed((RuntimeObject*)L_0, Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4_il2cpp_TypeInfo_var));
		// if (instance == null)
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_1 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)L_1, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
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
		// if (!instance.isReadable)
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_3 = V_0;
		NullCheck(L_3);
		bool L_4;
		L_4 = Mesh_get_isReadable_m3309900DB9B66BD321128839E6801722D15CD1E0(L_3, NULL);
		if (L_4)
		{
			goto IL_0025;
		}
	}
	{
		// ES3Internal.ES3Debug.LogWarning("Easy Save cannot load the vertices for this Mesh because it is not marked as readable, so it will be loaded by reference. To load the vertex data for this Mesh, check the 'Read/Write Enabled' checkbox in its Import Settings.", instance);
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_5 = V_0;
		ES3Debug_LogWarning_m3A8D37932B2AD03A86BE3527F7109DEDFB33EDE5(_stringLiteralD18BDC2D30848C2775BAB81B1520EB5760429863, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)L_5, 0, NULL);
	}

IL_0025:
	{
		// foreach (string propertyName in reader.Properties)
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_6 = ___reader0;
		NullCheck(L_6);
		ES3ReaderPropertyEnumerator_t66947BCA34F5716A7F0FECC09CDD3D2125703EB2* L_7;
		L_7 = VirtualFuncInvoker0< ES3ReaderPropertyEnumerator_t66947BCA34F5716A7F0FECC09CDD3D2125703EB2* >::Invoke(39 /* ES3Reader/ES3ReaderPropertyEnumerator ES3Reader::get_Properties() */, L_6);
		NullCheck(L_7);
		RuntimeObject* L_8;
		L_8 = ES3ReaderPropertyEnumerator_GetEnumerator_mD6FEB8C37D84D9BBAB20D1A4DDCE3407BA971CA8(L_7, NULL);
		V_1 = L_8;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_037f:
			{// begin finally (depth: 1)
				{
					RuntimeObject* L_9 = V_1;
					V_5 = ((RuntimeObject*)IsInst((RuntimeObject*)L_9, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var));
					RuntimeObject* L_10 = V_5;
					if (!L_10)
					{
						goto IL_0392;
					}
				}
				{
					RuntimeObject* L_11 = V_5;
					NullCheck(L_11);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_11);
				}

IL_0392:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0372_1;
			}

IL_0036_1:
			{
				// foreach (string propertyName in reader.Properties)
				RuntimeObject* L_12 = V_1;
				NullCheck(L_12);
				RuntimeObject* L_13;
				L_13 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(1 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_12);
				V_2 = ((String_t*)CastclassSealed((RuntimeObject*)L_13, String_t_il2cpp_TypeInfo_var));
				// if (!instance.isReadable)
				Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_14 = V_0;
				NullCheck(L_14);
				bool L_15;
				L_15 = Mesh_get_isReadable_m3309900DB9B66BD321128839E6801722D15CD1E0(L_14, NULL);
				if (L_15)
				{
					goto IL_0055_1;
				}
			}
			{
				// reader.Skip();
				ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_16 = ___reader0;
				NullCheck(L_16);
				VirtualActionInvoker0::Invoke(41 /* System.Void ES3Reader::Skip() */, L_16);
				// continue;
				goto IL_0372_1;
			}

IL_0055_1:
			{
				String_t* L_17 = V_2;
				uint32_t L_18;
				L_18 = U3CPrivateImplementationDetailsU3E_ComputeStringHash_m6EA1F233618497AEFF8902A5EDFA24C74E2F2876(L_17, NULL);
				V_3 = L_18;
				uint32_t L_19 = V_3;
				if ((!(((uint32_t)L_19) <= ((uint32_t)((int32_t)-1971520285)))))
				{
					goto IL_00b8_1;
				}
			}
			{
				uint32_t L_20 = V_3;
				if ((!(((uint32_t)L_20) <= ((uint32_t)((int32_t)1029089800)))))
				{
					goto IL_0092_1;
				}
			}
			{
				uint32_t L_21 = V_3;
				if ((((int32_t)L_21) == ((int32_t)((int32_t)247908339))))
				{
					goto IL_0178_1;
				}
			}
			{
				uint32_t L_22 = V_3;
				if ((((int32_t)L_22) == ((int32_t)((int32_t)502968136))))
				{
					goto IL_0139_1;
				}
			}
			{
				uint32_t L_23 = V_3;
				if ((((int32_t)L_23) == ((int32_t)((int32_t)1029089800))))
				{
					goto IL_0124_1;
				}
			}
			{
				goto IL_036c_1;
			}

IL_0092_1:
			{
				uint32_t L_24 = V_3;
				if ((((int32_t)L_24) == ((int32_t)((int32_t)1229132946))))
				{
					goto IL_01a2_1;
				}
			}
			{
				uint32_t L_25 = V_3;
				if ((((int32_t)L_25) == ((int32_t)((int32_t)2082523534))))
				{
					goto IL_0163_1;
				}
			}
			{
				uint32_t L_26 = V_3;
				if ((((int32_t)L_26) == ((int32_t)((int32_t)-1971520285))))
				{
					goto IL_018d_1;
				}
			}
			{
				goto IL_036c_1;
			}

IL_00b8_1:
			{
				uint32_t L_27 = V_3;
				if ((!(((uint32_t)L_27) <= ((uint32_t)((int32_t)-609673453)))))
				{
					goto IL_00e6_1;
				}
			}
			{
				uint32_t L_28 = V_3;
				if ((((int32_t)L_28) == ((int32_t)((int32_t)-1068190384))))
				{
					goto IL_014e_1;
				}
			}
			{
				uint32_t L_29 = V_3;
				if ((((int32_t)L_29) == ((int32_t)((int32_t)-660245694))))
				{
					goto IL_020b_1;
				}
			}
			{
				uint32_t L_30 = V_3;
				if ((((int32_t)L_30) == ((int32_t)((int32_t)-609673453))))
				{
					goto IL_0220_1;
				}
			}
			{
				goto IL_036c_1;
			}

IL_00e6_1:
			{
				uint32_t L_31 = V_3;
				if ((!(((uint32_t)L_31) <= ((uint32_t)((int32_t)-191268896)))))
				{
					goto IL_0109_1;
				}
			}
			{
				uint32_t L_32 = V_3;
				if ((((int32_t)L_32) == ((int32_t)((int32_t)-220709380))))
				{
					goto IL_01f6_1;
				}
			}
			{
				uint32_t L_33 = V_3;
				if ((((int32_t)L_33) == ((int32_t)((int32_t)-191268896))))
				{
					goto IL_01b7_1;
				}
			}
			{
				goto IL_036c_1;
			}

IL_0109_1:
			{
				uint32_t L_34 = V_3;
				if ((((int32_t)L_34) == ((int32_t)((int32_t)-174491277))))
				{
					goto IL_01cc_1;
				}
			}
			{
				uint32_t L_35 = V_3;
				if ((((int32_t)L_35) == ((int32_t)((int32_t)-90603182))))
				{
					goto IL_01e1_1;
				}
			}
			{
				goto IL_036c_1;
			}

IL_0124_1:
			{
				String_t* L_36 = V_2;
				bool L_37;
				L_37 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_36, _stringLiteral057B3BF6FF011F75099CE84564ABE58C872288F4, NULL);
				if (L_37)
				{
					goto IL_0235_1;
				}
			}
			{
				goto IL_036c_1;
			}

IL_0139_1:
			{
				String_t* L_38 = V_2;
				bool L_39;
				L_39 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_38, _stringLiteralB780B47DCEE9180898A6245E7652C29FC7F6A7BC, NULL);
				if (L_39)
				{
					goto IL_024b_1;
				}
			}
			{
				goto IL_036c_1;
			}

IL_014e_1:
			{
				String_t* L_40 = V_2;
				bool L_41;
				L_41 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_40, _stringLiteral3FDCFD736F0A209B476605D31B517A9412093986, NULL);
				if (L_41)
				{
					goto IL_0261_1;
				}
			}
			{
				goto IL_036c_1;
			}

IL_0163_1:
			{
				String_t* L_42 = V_2;
				bool L_43;
				L_43 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_42, _stringLiteralB1C30CF60A2E69EC232854CAED20E364C46D862F, NULL);
				if (L_43)
				{
					goto IL_0277_1;
				}
			}
			{
				goto IL_036c_1;
			}

IL_0178_1:
			{
				String_t* L_44 = V_2;
				bool L_45;
				L_45 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_44, _stringLiteralBF92C939C85D8888B68A1C0E975839B22C2F1CA0, NULL);
				if (L_45)
				{
					goto IL_028d_1;
				}
			}
			{
				goto IL_036c_1;
			}

IL_018d_1:
			{
				String_t* L_46 = V_2;
				bool L_47;
				L_47 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_46, _stringLiteral695F5F858DF14780BC5525F0AA16CE70EB9C45E8, NULL);
				if (L_47)
				{
					goto IL_02a3_1;
				}
			}
			{
				goto IL_036c_1;
			}

IL_01a2_1:
			{
				String_t* L_48 = V_2;
				bool L_49;
				L_49 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_48, _stringLiteral2E4D3331FC63E1049224549936FAF640E4D0E137, NULL);
				if (L_49)
				{
					goto IL_02b9_1;
				}
			}
			{
				goto IL_036c_1;
			}

IL_01b7_1:
			{
				String_t* L_50 = V_2;
				bool L_51;
				L_51 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_50, _stringLiteral9A92D5C8DA89C6E80E74B010F4E5AAA4F4E0C945, NULL);
				if (L_51)
				{
					goto IL_02cf_1;
				}
			}
			{
				goto IL_036c_1;
			}

IL_01cc_1:
			{
				String_t* L_52 = V_2;
				bool L_53;
				L_53 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_52, _stringLiteral05F6EAE9494DB0450DB43C3691D64129962ED751, NULL);
				if (L_53)
				{
					goto IL_02e5_1;
				}
			}
			{
				goto IL_036c_1;
			}

IL_01e1_1:
			{
				String_t* L_54 = V_2;
				bool L_55;
				L_55 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_54, _stringLiteralD66FED67EA1ADEC87F718BC4CEE5ABBE11B4ED17, NULL);
				if (L_55)
				{
					goto IL_02f8_1;
				}
			}
			{
				goto IL_036c_1;
			}

IL_01f6_1:
			{
				String_t* L_56 = V_2;
				bool L_57;
				L_57 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_56, _stringLiteralD52AA944806C2B3BFAE356FC41F3C256E5900C8D, NULL);
				if (L_57)
				{
					goto IL_030b_1;
				}
			}
			{
				goto IL_036c_1;
			}

IL_020b_1:
			{
				String_t* L_58 = V_2;
				bool L_59;
				L_59 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_58, _stringLiteral7EF771DC1DDB512A8FAB7AF357549BD349530F7D, NULL);
				if (L_59)
				{
					goto IL_031e_1;
				}
			}
			{
				goto IL_036c_1;
			}

IL_0220_1:
			{
				String_t* L_60 = V_2;
				bool L_61;
				L_61 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_60, _stringLiteral3F8C67011B093417D89377E9DBF57017943FDA11, NULL);
				if (L_61)
				{
					goto IL_0331_1;
				}
			}
			{
				goto IL_036c_1;
			}

IL_0235_1:
			{
				// instance.bounds = reader.Read<UnityEngine.Bounds>(ES3Type_Bounds.Instance);
				Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_62 = V_0;
				ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_63 = ___reader0;
				ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_64 = ((ES3Type_Bounds_t7DD589E28271A151FBD0712F3599D195980A6248_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Bounds_t7DD589E28271A151FBD0712F3599D195980A6248_il2cpp_TypeInfo_var))->___Instance_12;
				NullCheck(L_63);
				Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 L_65;
				L_65 = GenericVirtualFuncInvoker1< Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisBounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3_m1DAB1D2953772FCB56E7DB24E9D86F3CB42348F4_RuntimeMethod_var, L_63, L_64);
				NullCheck(L_62);
				Mesh_set_bounds_m2E526E9B61ACA77D644C22A9D8EB49583012B54E(L_62, L_65, NULL);
				// break;
				goto IL_0372_1;
			}

IL_024b_1:
			{
				// instance.boneWeights = reader.Read<UnityEngine.BoneWeight[]>(ES3Type_BoneWeightArray.Instance);
				Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_66 = V_0;
				ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_67 = ___reader0;
				ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_68 = ((ES3Type_BoneWeightArray_tFAA92ECC1D6765E1F70FFEA9DF3B2B31B6145CCF_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_BoneWeightArray_tFAA92ECC1D6765E1F70FFEA9DF3B2B31B6145CCF_il2cpp_TypeInfo_var))->___Instance_13;
				NullCheck(L_67);
				BoneWeightU5BU5D_t76F390D8CBA0ADCB87EB98B135C8886857DFE651* L_69;
				L_69 = GenericVirtualFuncInvoker1< BoneWeightU5BU5D_t76F390D8CBA0ADCB87EB98B135C8886857DFE651*, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisBoneWeightU5BU5D_t76F390D8CBA0ADCB87EB98B135C8886857DFE651_m76CB2F6905E271B24E09EE9FB67CBB8172A6B440_RuntimeMethod_var, L_67, L_68);
				NullCheck(L_66);
				Mesh_set_boneWeights_m4924E79620EDC7AAA1D05CFE8B535BB37F0E8FA7(L_66, L_69, NULL);
				// break;
				goto IL_0372_1;
			}

IL_0261_1:
			{
				// instance.bindposes = reader.Read<UnityEngine.Matrix4x4[]>(ES3Type_Matrix4x4Array.Instance);
				Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_70 = V_0;
				ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_71 = ___reader0;
				ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_72 = ((ES3Type_Matrix4x4Array_t47DDEE22DEA2102D3AA242FF6DF7F33B39ADAE95_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Matrix4x4Array_t47DDEE22DEA2102D3AA242FF6DF7F33B39ADAE95_il2cpp_TypeInfo_var))->___Instance_13;
				NullCheck(L_71);
				Matrix4x4U5BU5D_t9C51C93425FABC022B506D2DB3A5FA70F9752C4D* L_73;
				L_73 = GenericVirtualFuncInvoker1< Matrix4x4U5BU5D_t9C51C93425FABC022B506D2DB3A5FA70F9752C4D*, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisMatrix4x4U5BU5D_t9C51C93425FABC022B506D2DB3A5FA70F9752C4D_m2B358332EF877DDDEF43FD877390D40D97C7D017_RuntimeMethod_var, L_71, L_72);
				NullCheck(L_70);
				Mesh_set_bindposes_m7BD70B3BC121F436B5836EABDE5E99CAD64C82FF(L_70, L_73, NULL);
				// break;
				goto IL_0372_1;
			}

IL_0277_1:
			{
				// instance.vertices = reader.Read<UnityEngine.Vector3[]>(ES3Type_Vector3Array.Instance);
				Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_74 = V_0;
				ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_75 = ___reader0;
				ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_76 = ((ES3Type_Vector3Array_t71629B81DCF76559D1A197C5F6357C0410EBED6D_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Vector3Array_t71629B81DCF76559D1A197C5F6357C0410EBED6D_il2cpp_TypeInfo_var))->___Instance_13;
				NullCheck(L_75);
				Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_77;
				L_77 = GenericVirtualFuncInvoker1< Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C*, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisVector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C_mA2F2FDABF03BDE9693365F378CCF9E075DB20E83_RuntimeMethod_var, L_75, L_76);
				NullCheck(L_74);
				Mesh_set_vertices_m5BB814D89E9ACA00DBF19F7D8E22CB73AC73FE5C(L_74, L_77, NULL);
				// break;
				goto IL_0372_1;
			}

IL_028d_1:
			{
				// instance.normals = reader.Read<UnityEngine.Vector3[]>(ES3Type_Vector3Array.Instance);
				Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_78 = V_0;
				ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_79 = ___reader0;
				ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_80 = ((ES3Type_Vector3Array_t71629B81DCF76559D1A197C5F6357C0410EBED6D_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Vector3Array_t71629B81DCF76559D1A197C5F6357C0410EBED6D_il2cpp_TypeInfo_var))->___Instance_13;
				NullCheck(L_79);
				Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_81;
				L_81 = GenericVirtualFuncInvoker1< Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C*, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisVector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C_mA2F2FDABF03BDE9693365F378CCF9E075DB20E83_RuntimeMethod_var, L_79, L_80);
				NullCheck(L_78);
				Mesh_set_normals_m85D73193C49211BE9FA135FF72D5749B16A4760B(L_78, L_81, NULL);
				// break;
				goto IL_0372_1;
			}

IL_02a3_1:
			{
				// instance.tangents = reader.Read<UnityEngine.Vector4[]>(ES3Type_Vector4Array.Instance);
				Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_82 = V_0;
				ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_83 = ___reader0;
				ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_84 = ((ES3Type_Vector4Array_t1262F5AED18360AAACF70C910DCAE04310FAD446_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Vector4Array_t1262F5AED18360AAACF70C910DCAE04310FAD446_il2cpp_TypeInfo_var))->___Instance_13;
				NullCheck(L_83);
				Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* L_85;
				L_85 = GenericVirtualFuncInvoker1< Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD*, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisVector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD_m0EBB9026A04116D4F7D58168C297A420028FEF2D_RuntimeMethod_var, L_83, L_84);
				NullCheck(L_82);
				Mesh_set_tangents_mF547B7E4F9C70FB7CD6168139180A70AD306169B(L_82, L_85, NULL);
				// break;
				goto IL_0372_1;
			}

IL_02b9_1:
			{
				// instance.uv = reader.Read<UnityEngine.Vector2[]>(ES3Type_Vector2Array.Instance);
				Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_86 = V_0;
				ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_87 = ___reader0;
				ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_88 = ((ES3Type_Vector2Array_t9039B2B68EDC2EFCCB6D15820CDAFBE7FCB99411_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Vector2Array_t9039B2B68EDC2EFCCB6D15820CDAFBE7FCB99411_il2cpp_TypeInfo_var))->___Instance_13;
				NullCheck(L_87);
				Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* L_89;
				L_89 = GenericVirtualFuncInvoker1< Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA*, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisVector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA_mAEBB0376131E5E70758FE2F9CDF22B3500994D70_RuntimeMethod_var, L_87, L_88);
				NullCheck(L_86);
				Mesh_set_uv_m6ED9C50E0DA8166DD48AC40FD6C828B9AD2E9617(L_86, L_89, NULL);
				// break;
				goto IL_0372_1;
			}

IL_02cf_1:
			{
				// instance.uv2 = reader.Read<UnityEngine.Vector2[]>(ES3Type_Vector2Array.Instance);
				Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_90 = V_0;
				ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_91 = ___reader0;
				ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_92 = ((ES3Type_Vector2Array_t9039B2B68EDC2EFCCB6D15820CDAFBE7FCB99411_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Vector2Array_t9039B2B68EDC2EFCCB6D15820CDAFBE7FCB99411_il2cpp_TypeInfo_var))->___Instance_13;
				NullCheck(L_91);
				Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* L_93;
				L_93 = GenericVirtualFuncInvoker1< Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA*, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisVector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA_mAEBB0376131E5E70758FE2F9CDF22B3500994D70_RuntimeMethod_var, L_91, L_92);
				NullCheck(L_90);
				Mesh_set_uv2_m37B442C04EBB029C0AD9545C54F95D9BDAD8E9B5(L_90, L_93, NULL);
				// break;
				goto IL_0372_1;
			}

IL_02e5_1:
			{
				// instance.uv3 = reader.Read<UnityEngine.Vector2[]>(ES3Type_Vector2Array.Instance);
				Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_94 = V_0;
				ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_95 = ___reader0;
				ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_96 = ((ES3Type_Vector2Array_t9039B2B68EDC2EFCCB6D15820CDAFBE7FCB99411_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Vector2Array_t9039B2B68EDC2EFCCB6D15820CDAFBE7FCB99411_il2cpp_TypeInfo_var))->___Instance_13;
				NullCheck(L_95);
				Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* L_97;
				L_97 = GenericVirtualFuncInvoker1< Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA*, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisVector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA_mAEBB0376131E5E70758FE2F9CDF22B3500994D70_RuntimeMethod_var, L_95, L_96);
				NullCheck(L_94);
				Mesh_set_uv3_m447FE1800C6FA36F8E4AD996A001F4A26E04A5A2(L_94, L_97, NULL);
				// break;
				goto IL_0372_1;
			}

IL_02f8_1:
			{
				// instance.uv4 = reader.Read<UnityEngine.Vector2[]>(ES3Type_Vector2Array.Instance);
				Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_98 = V_0;
				ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_99 = ___reader0;
				ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_100 = ((ES3Type_Vector2Array_t9039B2B68EDC2EFCCB6D15820CDAFBE7FCB99411_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Vector2Array_t9039B2B68EDC2EFCCB6D15820CDAFBE7FCB99411_il2cpp_TypeInfo_var))->___Instance_13;
				NullCheck(L_99);
				Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* L_101;
				L_101 = GenericVirtualFuncInvoker1< Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA*, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisVector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA_mAEBB0376131E5E70758FE2F9CDF22B3500994D70_RuntimeMethod_var, L_99, L_100);
				NullCheck(L_98);
				Mesh_set_uv4_mC87359C3EEA7219ABF70375148B98DC95577F9A3(L_98, L_101, NULL);
				// break;
				goto IL_0372_1;
			}

IL_030b_1:
			{
				// instance.colors32 = reader.Read<UnityEngine.Color32[]>(ES3Type_Color32Array.Instance);
				Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_102 = V_0;
				ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_103 = ___reader0;
				ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_104 = ((ES3Type_Color32Array_tF57FE9123BFDB6D72D08528E212B3254A6274B61_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Color32Array_tF57FE9123BFDB6D72D08528E212B3254A6274B61_il2cpp_TypeInfo_var))->___Instance_13;
				NullCheck(L_103);
				Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259* L_105;
				L_105 = GenericVirtualFuncInvoker1< Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259*, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisColor32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259_m2A78033772A6489F2170F21F8075D8AC586AC084_RuntimeMethod_var, L_103, L_104);
				NullCheck(L_102);
				Mesh_set_colors32_m0E4462B7A1D613E6FB15DD7584BCE5491C17820F(L_102, L_105, NULL);
				// break;
				goto IL_0372_1;
			}

IL_031e_1:
			{
				// instance.triangles = reader.Read<System.Int32[]>(ES3Type_intArray.Instance);
				Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_106 = V_0;
				ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_107 = ___reader0;
				ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_108 = ((ES3Type_intArray_t0282F806407A0709B1F055D1AF105C52C39BB6E6_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_intArray_t0282F806407A0709B1F055D1AF105C52C39BB6E6_il2cpp_TypeInfo_var))->___Instance_13;
				NullCheck(L_107);
				Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_109;
				L_109 = GenericVirtualFuncInvoker1< Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisInt32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_mD1505C01A552AB4C12E6AA1589FCD990DBE6A7FA_RuntimeMethod_var, L_107, L_108);
				NullCheck(L_106);
				Mesh_set_triangles_m124405320579A8D92711BB5A124644963A26F60B(L_106, L_109, NULL);
				// break;
				goto IL_0372_1;
			}

IL_0331_1:
			{
				// instance.subMeshCount = reader.Read<System.Int32>(ES3Type_int.Instance);
				Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_110 = V_0;
				ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_111 = ___reader0;
				ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_112 = ((ES3Type_int_t05A5E7A96442F23CE33E24A71CD349372A70E0C3_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_int_t05A5E7A96442F23CE33E24A71CD349372A70E0C3_il2cpp_TypeInfo_var))->___Instance_12;
				NullCheck(L_111);
				int32_t L_113;
				L_113 = GenericVirtualFuncInvoker1< int32_t, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mEFCC4D52DD5B822D3561A53591AE11CDB25CDB6F_RuntimeMethod_var, L_111, L_112);
				NullCheck(L_110);
				Mesh_set_subMeshCount_m8E4DB392DB0621F7DFF8543FF3943A13072B8A28(L_110, L_113, NULL);
				// for(int i=0; i<instance.subMeshCount; i++)
				V_4 = 0;
				goto IL_0360_1;
			}

IL_0347_1:
			{
				// instance.SetTriangles(reader.ReadProperty<int[]>(ES3Type_intArray.Instance), i);
				Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_114 = V_0;
				ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_115 = ___reader0;
				ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_116 = ((ES3Type_intArray_t0282F806407A0709B1F055D1AF105C52C39BB6E6_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_intArray_t0282F806407A0709B1F055D1AF105C52C39BB6E6_il2cpp_TypeInfo_var))->___Instance_13;
				NullCheck(L_115);
				Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_117;
				L_117 = ES3Reader_ReadProperty_TisInt32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_mDD082AEE8B879E881D914C842E79E8EA68C254F2(L_115, L_116, ES3Reader_ReadProperty_TisInt32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_mDD082AEE8B879E881D914C842E79E8EA68C254F2_RuntimeMethod_var);
				int32_t L_118 = V_4;
				NullCheck(L_114);
				Mesh_SetTriangles_mD97664344427EB85BB6DC2EF91479E03B9114258(L_114, L_117, L_118, NULL);
				// for(int i=0; i<instance.subMeshCount; i++)
				int32_t L_119 = V_4;
				V_4 = ((int32_t)il2cpp_codegen_add(L_119, 1));
			}

IL_0360_1:
			{
				// for(int i=0; i<instance.subMeshCount; i++)
				int32_t L_120 = V_4;
				Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_121 = V_0;
				NullCheck(L_121);
				int32_t L_122;
				L_122 = Mesh_get_subMeshCount_mC0141293D0F339D8D721CCA2612B32E6FD7E3F8B(L_121, NULL);
				if ((((int32_t)L_120) < ((int32_t)L_122)))
				{
					goto IL_0347_1;
				}
			}
			{
				// break;
				goto IL_0372_1;
			}

IL_036c_1:
			{
				// reader.Skip();
				ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_123 = ___reader0;
				NullCheck(L_123);
				VirtualActionInvoker0::Invoke(41 /* System.Void ES3Reader::Skip() */, L_123);
			}

IL_0372_1:
			{
				// foreach (string propertyName in reader.Properties)
				RuntimeObject* L_124 = V_1;
				NullCheck(L_124);
				bool L_125;
				L_125 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_124);
				if (L_125)
				{
					goto IL_0036_1;
				}
			}
			{
				goto IL_0393;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0393:
	{
		// }
		return;
	}
}
// System.Void ES3Types.ES3Type_MeshCollider::ReadComponent<System.Object>(ES3Reader,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ES3Type_MeshCollider_ReadComponent_TisRuntimeObject_m12F4E135411779B97D9F822CBC3083B48A742E82_gshared (ES3Type_MeshCollider_tA8109C5749E5D9BB9FCBB3AD7C5F94EEFE979523* __this, ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* ___reader0, RuntimeObject* ___obj1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mFFB70EE53D8CD0255A4E599780F62A3EB1520E83_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisMesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4_m34F6C712B26BFE70E5AAC03798D838583D35D02A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisPhysicMaterial_t4ECED34E04BB2148333467208361A5FBFDCD7131_m89694050B5BE6F19D4FA72BAFB61293A02DA5BBF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mA86928BC888E342D2C2644535E3399952F5077ED_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_Mesh_tB7CD0BF677668097D339633406535F749DDDFE48_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_PhysicMaterial_tF23AD4DEE1D030C59463D762562CF18BB163D35F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MeshCollider_tB525E4DDE383252364ED0BDD32CF2B53914EE455_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3450A2BB8216F70D528215A296AEDB3D212C7EED);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral416E9D0238C213CFB1C61EDAB93C78CA25E2D04B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral72ECDD9F8744E37D4431E7D17FE954DD88ABF383);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBAAD864060C726C9944913CA5D3695DC7027ADAA);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBCA8FD5F6CF117BC613330313E82DF905908323F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B);
		s_Il2CppMethodInitialized = true;
	}
	MeshCollider_tB525E4DDE383252364ED0BDD32CF2B53914EE455* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	String_t* V_2 = NULL;
	RuntimeObject* V_3 = NULL;
	{
		// var instance = (UnityEngine.MeshCollider)obj;
		RuntimeObject* L_0 = ___obj1;
		V_0 = ((MeshCollider_tB525E4DDE383252364ED0BDD32CF2B53914EE455*)CastclassClass((RuntimeObject*)L_0, MeshCollider_tB525E4DDE383252364ED0BDD32CF2B53914EE455_il2cpp_TypeInfo_var));
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

FINALLY_00f9:
			{// begin finally (depth: 1)
				{
					RuntimeObject* L_4 = V_1;
					V_3 = ((RuntimeObject*)IsInst((RuntimeObject*)L_4, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var));
					RuntimeObject* L_5 = V_3;
					if (!L_5)
					{
						goto IL_0109;
					}
				}
				{
					RuntimeObject* L_6 = V_3;
					NullCheck(L_6);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_6);
				}

IL_0109:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_00ec_1;
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
				L_10 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_9, _stringLiteralBCA8FD5F6CF117BC613330313E82DF905908323F, NULL);
				if (L_10)
				{
					goto IL_0074_1;
				}
			}
			{
				String_t* L_11 = V_2;
				bool L_12;
				L_12 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_11, _stringLiteralBAAD864060C726C9944913CA5D3695DC7027ADAA, NULL);
				if (L_12)
				{
					goto IL_0087_1;
				}
			}
			{
				String_t* L_13 = V_2;
				bool L_14;
				L_14 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_13, _stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B, NULL);
				if (L_14)
				{
					goto IL_009a_1;
				}
			}
			{
				String_t* L_15 = V_2;
				bool L_16;
				L_16 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_15, _stringLiteral416E9D0238C213CFB1C61EDAB93C78CA25E2D04B, NULL);
				if (L_16)
				{
					goto IL_00ad_1;
				}
			}
			{
				String_t* L_17 = V_2;
				bool L_18;
				L_18 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_17, _stringLiteral72ECDD9F8744E37D4431E7D17FE954DD88ABF383, NULL);
				if (L_18)
				{
					goto IL_00c0_1;
				}
			}
			{
				String_t* L_19 = V_2;
				bool L_20;
				L_20 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_19, _stringLiteral3450A2BB8216F70D528215A296AEDB3D212C7EED, NULL);
				if (L_20)
				{
					goto IL_00d3_1;
				}
			}
			{
				goto IL_00e6_1;
			}

IL_0074_1:
			{
				// instance.sharedMesh = reader.Read<UnityEngine.Mesh>(ES3Type_Mesh.Instance);
				MeshCollider_tB525E4DDE383252364ED0BDD32CF2B53914EE455* L_21 = V_0;
				ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_22 = ___reader0;
				ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_23 = ((ES3Type_Mesh_tB7CD0BF677668097D339633406535F749DDDFE48_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Mesh_tB7CD0BF677668097D339633406535F749DDDFE48_il2cpp_TypeInfo_var))->___Instance_12;
				NullCheck(L_22);
				Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_24;
				L_24 = GenericVirtualFuncInvoker1< Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4*, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisMesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4_m34F6C712B26BFE70E5AAC03798D838583D35D02A_RuntimeMethod_var, L_22, L_23);
				NullCheck(L_21);
				MeshCollider_set_sharedMesh_m05F87B9AC04139285EBBCC159F77B51C6940E79C(L_21, L_24, NULL);
				// break;
				goto IL_00ec_1;
			}

IL_0087_1:
			{
				// instance.convex = reader.Read<System.Boolean>(ES3Type_bool.Instance);
				MeshCollider_tB525E4DDE383252364ED0BDD32CF2B53914EE455* L_25 = V_0;
				ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_26 = ___reader0;
				ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_27 = ((ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_il2cpp_TypeInfo_var))->___Instance_12;
				NullCheck(L_26);
				bool L_28;
				L_28 = GenericVirtualFuncInvoker1< bool, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mFFB70EE53D8CD0255A4E599780F62A3EB1520E83_RuntimeMethod_var, L_26, L_27);
				NullCheck(L_25);
				MeshCollider_set_convex_m20482D687240D0921BA76B77983403E55A2E3CE1(L_25, L_28, NULL);
				// break;
				goto IL_00ec_1;
			}

IL_009a_1:
			{
				// instance.enabled = reader.Read<System.Boolean>(ES3Type_bool.Instance);
				MeshCollider_tB525E4DDE383252364ED0BDD32CF2B53914EE455* L_29 = V_0;
				ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_30 = ___reader0;
				ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_31 = ((ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_il2cpp_TypeInfo_var))->___Instance_12;
				NullCheck(L_30);
				bool L_32;
				L_32 = GenericVirtualFuncInvoker1< bool, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mFFB70EE53D8CD0255A4E599780F62A3EB1520E83_RuntimeMethod_var, L_30, L_31);
				NullCheck((Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76*)L_29);
				Collider_set_enabled_m8D5C3B5047592D227A52560FC9723D176E209F70((Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76*)L_29, L_32, NULL);
				// break;
				goto IL_00ec_1;
			}

IL_00ad_1:
			{
				// instance.isTrigger = reader.Read<System.Boolean>(ES3Type_bool.Instance);
				MeshCollider_tB525E4DDE383252364ED0BDD32CF2B53914EE455* L_33 = V_0;
				ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_34 = ___reader0;
				ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_35 = ((ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_il2cpp_TypeInfo_var))->___Instance_12;
				NullCheck(L_34);
				bool L_36;
				L_36 = GenericVirtualFuncInvoker1< bool, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mFFB70EE53D8CD0255A4E599780F62A3EB1520E83_RuntimeMethod_var, L_34, L_35);
				NullCheck((Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76*)L_33);
				Collider_set_isTrigger_mFCD22F3EB5E28C97863956AB725D53F7F4B7CA78((Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76*)L_33, L_36, NULL);
				// break;
				goto IL_00ec_1;
			}

IL_00c0_1:
			{
				// instance.contactOffset = reader.Read<System.Single>(ES3Type_float.Instance);
				MeshCollider_tB525E4DDE383252364ED0BDD32CF2B53914EE455* L_37 = V_0;
				ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_38 = ___reader0;
				ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_39 = ((ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var))->___Instance_12;
				NullCheck(L_38);
				float L_40;
				L_40 = GenericVirtualFuncInvoker1< float, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mA86928BC888E342D2C2644535E3399952F5077ED_RuntimeMethod_var, L_38, L_39);
				NullCheck((Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76*)L_37);
				Collider_set_contactOffset_mEDA8D778F641338733D140E76FCA0D6B29203B52((Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76*)L_37, L_40, NULL);
				// break;
				goto IL_00ec_1;
			}

IL_00d3_1:
			{
				// instance.sharedMaterial = reader.Read<UnityEngine.PhysicMaterial>(ES3Type_PhysicMaterial.Instance);
				MeshCollider_tB525E4DDE383252364ED0BDD32CF2B53914EE455* L_41 = V_0;
				ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_42 = ___reader0;
				ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_43 = ((ES3Type_PhysicMaterial_tF23AD4DEE1D030C59463D762562CF18BB163D35F_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_PhysicMaterial_tF23AD4DEE1D030C59463D762562CF18BB163D35F_il2cpp_TypeInfo_var))->___Instance_12;
				NullCheck(L_42);
				PhysicMaterial_t4ECED34E04BB2148333467208361A5FBFDCD7131* L_44;
				L_44 = GenericVirtualFuncInvoker1< PhysicMaterial_t4ECED34E04BB2148333467208361A5FBFDCD7131*, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisPhysicMaterial_t4ECED34E04BB2148333467208361A5FBFDCD7131_m89694050B5BE6F19D4FA72BAFB61293A02DA5BBF_RuntimeMethod_var, L_42, L_43);
				NullCheck((Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76*)L_41);
				Collider_set_sharedMaterial_m2AC21AB939A377ABACF8282CDC52EE61B54107ED((Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76*)L_41, L_44, NULL);
				// break;
				goto IL_00ec_1;
			}

IL_00e6_1:
			{
				// reader.Skip();
				ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_45 = ___reader0;
				NullCheck(L_45);
				VirtualActionInvoker0::Invoke(41 /* System.Void ES3Reader::Skip() */, L_45);
			}

IL_00ec_1:
			{
				// foreach(string propertyName in reader.Properties)
				RuntimeObject* L_46 = V_1;
				NullCheck(L_46);
				bool L_47;
				L_47 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_46);
				if (L_47)
				{
					goto IL_0018_1;
				}
			}
			{
				goto IL_010a;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_010a:
	{
		// }
		return;
	}
}
// System.Void ES3Types.ES3Type_MeshFilter::ReadComponent<System.Object>(ES3Reader,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ES3Type_MeshFilter_ReadComponent_TisRuntimeObject_m6C2711D7C6DB0E1C07754089B495CEFE24499F7C_gshared (ES3Type_MeshFilter_tFA3639E83C44E316068AEF87DEE5D8BFFD64C5C3* __this, ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* ___reader0, RuntimeObject* ___obj1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisMesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4_m34F6C712B26BFE70E5AAC03798D838583D35D02A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_Mesh_tB7CD0BF677668097D339633406535F749DDDFE48_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBCA8FD5F6CF117BC613330313E82DF905908323F);
		s_Il2CppMethodInitialized = true;
	}
	MeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	RuntimeObject* V_2 = NULL;
	{
		// var instance = (UnityEngine.MeshFilter)obj;
		RuntimeObject* L_0 = ___obj1;
		V_0 = ((MeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5*)CastclassSealed((RuntimeObject*)L_0, MeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5_il2cpp_TypeInfo_var));
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

FINALLY_004f:
			{// begin finally (depth: 1)
				{
					RuntimeObject* L_4 = V_1;
					V_2 = ((RuntimeObject*)IsInst((RuntimeObject*)L_4, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var));
					RuntimeObject* L_5 = V_2;
					if (!L_5)
					{
						goto IL_005f;
					}
				}
				{
					RuntimeObject* L_6 = V_2;
					NullCheck(L_6);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_6);
				}

IL_005f:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0045_1;
			}

IL_0015_1:
			{
				// foreach(string propertyName in reader.Properties)
				RuntimeObject* L_7 = V_1;
				NullCheck(L_7);
				RuntimeObject* L_8;
				L_8 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(1 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_7);
				bool L_9;
				L_9 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(((String_t*)CastclassSealed((RuntimeObject*)L_8, String_t_il2cpp_TypeInfo_var)), _stringLiteralBCA8FD5F6CF117BC613330313E82DF905908323F, NULL);
				if (!L_9)
				{
					goto IL_003f_1;
				}
			}
			{
				// instance.sharedMesh = reader.Read<UnityEngine.Mesh>(ES3Type_Mesh.Instance);
				MeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5* L_10 = V_0;
				ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_11 = ___reader0;
				ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_12 = ((ES3Type_Mesh_tB7CD0BF677668097D339633406535F749DDDFE48_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Mesh_tB7CD0BF677668097D339633406535F749DDDFE48_il2cpp_TypeInfo_var))->___Instance_12;
				NullCheck(L_11);
				Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_13;
				L_13 = GenericVirtualFuncInvoker1< Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4*, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisMesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4_m34F6C712B26BFE70E5AAC03798D838583D35D02A_RuntimeMethod_var, L_11, L_12);
				NullCheck(L_10);
				MeshFilter_set_sharedMesh_m946F7E3F583761982642BDA4753784AF1DF6E16F(L_10, L_13, NULL);
				// break;
				goto IL_0045_1;
			}

IL_003f_1:
			{
				// reader.Skip();
				ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_14 = ___reader0;
				NullCheck(L_14);
				VirtualActionInvoker0::Invoke(41 /* System.Void ES3Reader::Skip() */, L_14);
			}

IL_0045_1:
			{
				// foreach(string propertyName in reader.Properties)
				RuntimeObject* L_15 = V_1;
				NullCheck(L_15);
				bool L_16;
				L_16 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_15);
				if (L_16)
				{
					goto IL_0015_1;
				}
			}
			{
				goto IL_0060;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0060:
	{
		// }
		return;
	}
}
// System.Void ES3Types.ES3Type_MeshRenderer::ReadComponent<System.Object>(ES3Reader,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ES3Type_MeshRenderer_ReadComponent_TisRuntimeObject_m2BCE60F3FA696DE14EC8974781846E8E6F9BDB89_gshared (ES3Type_MeshRenderer_tACCD9205BF829C22AFFE5FE2EFA25EE18337E2B1* __this, ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* ___reader0, RuntimeObject* ___obj1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mFFB70EE53D8CD0255A4E599780F62A3EB1520E83_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_mF17F721F02D9912C0E9F95ADE84A7350175EA7FF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mEFCC4D52DD5B822D3561A53591AE11CDB25CDB6F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisLightProbeUsage_tC6292C7B7CBA0E5AA2A56F40D71F58A7E06C2948_m66BEF16A5A89E757FF33443DDD5CE1051BB50376_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisMaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D_mD6C0F6DE0DFCBEEE0ECC2806C3C76B9B9AA49622_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisMesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4_m34F6C712B26BFE70E5AAC03798D838583D35D02A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisMotionVectorGenerationMode_tE87C61556749260EF5429A0F8FE55DAD30EEAFCB_m8282A371C977788F369BE28A7EC6D07EDA8A24D8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisReflectionProbeUsage_t033508C14CD4AD926A3A215D19913DC21EA22705_m8D386D0E2DCEF800E206280828E9F9989F462116_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisShadowCastingMode_tF30806698B37CF120A1A506BD7549EAF308E7C6D_mE74883DA1F57042CE2132D08265B7EDE224066CE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisString_t_mE83D478C999E69292DB9310C2993B1EE7DD28021_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisTransform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1_mB5F67B5F1812826BAC1CF736E8760BF608548454_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_m6D7FA5D5608370867F7E593271DDFE9DB2CEBD88_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_GameObject_t7AACC3CCF9FD31A285F90A28AE3331E69A1F02B2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_Mesh_tB7CD0BF677668097D339633406535F749DDDFE48_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_Transform_t744F7C45C7A4F966265500803F08C4965797DAD7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_Vector4_t20EB9288ABFACFA144B849DBAE5F00003E5D3EF1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_int_t05A5E7A96442F23CE33E24A71CD349372A70E0C3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_string_t0C89CCA6F02AF5B46E66DEF92E77FCEC83C2F068_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1F9261ABE85940E10CA48B7B42F1E5267F122734);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral23EC2E17148B28CC0FCAC476B21E689161203B19);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral338DFB21C4BCDE10C2A6B0F6B758581AB45E283A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3EC42735CF07DB9169F6821DC94EB45DE6B5E1AA);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral73792CCBAF937C765700AA0D7388BC226F003166);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral82A38EB534B163662598A55A70842F5AA8919477);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral843D6122FFBBF465C80ECD6FDFC0DF88BEAF4E14);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral892582A238DF4FFEB2A2E7DD5D90A9A7AC6C26C4);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8DD0A7170C2DECE4F5E82F96AB9B00AAEBA9F438);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8F76FFC503D9127950E3EAD1DFD82A8C6C91F728);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA0ECA3668A8B14855295BD8DD5E88309AF31330B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA61873D60BF9FB4C32F7EA140D55CF8C712B7E86);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBDBEBC1E8A863EAF2A1EFDC4D2393F1540ABF0C9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC8D7651AAAFAAA9A55123A4B14C546BC27C603E7);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD0D915A2B403702AB1F18A340F6557F4030455A2);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDDA23639367EB0B86F361EA02AD294BDFDE6BA0B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B);
		s_Il2CppMethodInitialized = true;
	}
	MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	String_t* V_2 = NULL;
	uint32_t V_3 = 0;
	RuntimeObject* V_4 = NULL;
	{
		// var instance = (UnityEngine.MeshRenderer)obj;
		RuntimeObject* L_0 = ___obj1;
		V_0 = ((MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE*)CastclassClass((RuntimeObject*)L_0, MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE_il2cpp_TypeInfo_var));
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

FINALLY_0406:
			{// begin finally (depth: 1)
				{
					RuntimeObject* L_4 = V_1;
					V_4 = ((RuntimeObject*)IsInst((RuntimeObject*)L_4, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var));
					RuntimeObject* L_5 = V_4;
					if (!L_5)
					{
						goto IL_0419;
					}
				}
				{
					RuntimeObject* L_6 = V_4;
					NullCheck(L_6);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_6);
				}

IL_0419:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_03f9_1;
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
				if ((!(((uint32_t)L_11) <= ((uint32_t)((int32_t)1039612288)))))
				{
					goto IL_00ba_1;
				}
			}
			{
				uint32_t L_12 = V_3;
				if ((!(((uint32_t)L_12) <= ((uint32_t)((int32_t)394058932)))))
				{
					goto IL_007c_1;
				}
			}
			{
				uint32_t L_13 = V_3;
				if ((!(((uint32_t)L_13) <= ((uint32_t)((int32_t)258071601)))))
				{
					goto IL_0061_1;
				}
			}
			{
				uint32_t L_14 = V_3;
				if ((((int32_t)L_14) == ((int32_t)((int32_t)49525662))))
				{
					goto IL_015b_1;
				}
			}
			{
				uint32_t L_15 = V_3;
				if ((((int32_t)L_15) == ((int32_t)((int32_t)258071601))))
				{
					goto IL_0257_1;
				}
			}
			{
				goto IL_03f3_1;
			}

IL_0061_1:
			{
				uint32_t L_16 = V_3;
				if ((((int32_t)L_16) == ((int32_t)((int32_t)369730773))))
				{
					goto IL_01af_1;
				}
			}
			{
				uint32_t L_17 = V_3;
				if ((((int32_t)L_17) == ((int32_t)((int32_t)394058932))))
				{
					goto IL_01d9_1;
				}
			}
			{
				goto IL_03f3_1;
			}

IL_007c_1:
			{
				uint32_t L_18 = V_3;
				if ((!(((uint32_t)L_18) <= ((uint32_t)((int32_t)594369155)))))
				{
					goto IL_009f_1;
				}
			}
			{
				uint32_t L_19 = V_3;
				if ((((int32_t)L_19) == ((int32_t)((int32_t)560621451))))
				{
					goto IL_0185_1;
				}
			}
			{
				uint32_t L_20 = V_3;
				if ((((int32_t)L_20) == ((int32_t)((int32_t)594369155))))
				{
					goto IL_0146_1;
				}
			}
			{
				goto IL_03f3_1;
			}

IL_009f_1:
			{
				uint32_t L_21 = V_3;
				if ((((int32_t)L_21) == ((int32_t)((int32_t)899577978))))
				{
					goto IL_01c4_1;
				}
			}
			{
				uint32_t L_22 = V_3;
				if ((((int32_t)L_22) == ((int32_t)((int32_t)1039612288))))
				{
					goto IL_0242_1;
				}
			}
			{
				goto IL_03f3_1;
			}

IL_00ba_1:
			{
				uint32_t L_23 = V_3;
				if ((!(((uint32_t)L_23) <= ((uint32_t)((int32_t)2066010489)))))
				{
					goto IL_0100_1;
				}
			}
			{
				uint32_t L_24 = V_3;
				if ((!(((uint32_t)L_24) <= ((uint32_t)((int32_t)1681590497)))))
				{
					goto IL_00e5_1;
				}
			}
			{
				uint32_t L_25 = V_3;
				if ((((int32_t)L_25) == ((int32_t)((int32_t)1435400483))))
				{
					goto IL_026c_1;
				}
			}
			{
				uint32_t L_26 = V_3;
				if ((((int32_t)L_26) == ((int32_t)((int32_t)1681590497))))
				{
					goto IL_0296_1;
				}
			}
			{
				goto IL_03f3_1;
			}

IL_00e5_1:
			{
				uint32_t L_27 = V_3;
				if ((((int32_t)L_27) == ((int32_t)((int32_t)2056288458))))
				{
					goto IL_019a_1;
				}
			}
			{
				uint32_t L_28 = V_3;
				if ((((int32_t)L_28) == ((int32_t)((int32_t)2066010489))))
				{
					goto IL_01ee_1;
				}
			}
			{
				goto IL_03f3_1;
			}

IL_0100_1:
			{
				uint32_t L_29 = V_3;
				if ((!(((uint32_t)L_29) <= ((uint32_t)((int32_t)-879427281)))))
				{
					goto IL_0120_1;
				}
			}
			{
				uint32_t L_30 = V_3;
				if ((((int32_t)L_30) == ((int32_t)((int32_t)-1450632603))))
				{
					goto IL_0170_1;
				}
			}
			{
				uint32_t L_31 = V_3;
				if ((((int32_t)L_31) == ((int32_t)((int32_t)-879427281))))
				{
					goto IL_0203_1;
				}
			}
			{
				goto IL_03f3_1;
			}

IL_0120_1:
			{
				uint32_t L_32 = V_3;
				if ((((int32_t)L_32) == ((int32_t)((int32_t)-641088577))))
				{
					goto IL_022d_1;
				}
			}
			{
				uint32_t L_33 = V_3;
				if ((((int32_t)L_33) == ((int32_t)((int32_t)-170312451))))
				{
					goto IL_0281_1;
				}
			}
			{
				uint32_t L_34 = V_3;
				if ((((int32_t)L_34) == ((int32_t)((int32_t)-95858950))))
				{
					goto IL_0218_1;
				}
			}
			{
				goto IL_03f3_1;
			}

IL_0146_1:
			{
				String_t* L_35 = V_2;
				bool L_36;
				L_36 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_35, _stringLiteralA61873D60BF9FB4C32F7EA140D55CF8C712B7E86, NULL);
				if (L_36)
				{
					goto IL_02ab_1;
				}
			}
			{
				goto IL_03f3_1;
			}

IL_015b_1:
			{
				String_t* L_37 = V_2;
				bool L_38;
				L_38 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_37, _stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B, NULL);
				if (L_38)
				{
					goto IL_02c1_1;
				}
			}
			{
				goto IL_03f3_1;
			}

IL_0170_1:
			{
				String_t* L_39 = V_2;
				bool L_40;
				L_40 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_39, _stringLiteralD0D915A2B403702AB1F18A340F6557F4030455A2, NULL);
				if (L_40)
				{
					goto IL_02d7_1;
				}
			}
			{
				goto IL_03f3_1;
			}

IL_0185_1:
			{
				String_t* L_41 = V_2;
				bool L_42;
				L_42 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_41, _stringLiteralDDA23639367EB0B86F361EA02AD294BDFDE6BA0B, NULL);
				if (L_42)
				{
					goto IL_02e8_1;
				}
			}
			{
				goto IL_03f3_1;
			}

IL_019a_1:
			{
				String_t* L_43 = V_2;
				bool L_44;
				L_44 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_43, _stringLiteral23EC2E17148B28CC0FCAC476B21E689161203B19, NULL);
				if (L_44)
				{
					goto IL_02fe_1;
				}
			}
			{
				goto IL_03f3_1;
			}

IL_01af_1:
			{
				String_t* L_45 = V_2;
				bool L_46;
				L_46 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_45, _stringLiteral82A38EB534B163662598A55A70842F5AA8919477, NULL);
				if (L_46)
				{
					goto IL_030f_1;
				}
			}
			{
				goto IL_03f3_1;
			}

IL_01c4_1:
			{
				String_t* L_47 = V_2;
				bool L_48;
				L_48 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_47, _stringLiteral73792CCBAF937C765700AA0D7388BC226F003166, NULL);
				if (L_48)
				{
					goto IL_0325_1;
				}
			}
			{
				goto IL_03f3_1;
			}

IL_01d9_1:
			{
				String_t* L_49 = V_2;
				bool L_50;
				L_50 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_49, _stringLiteralA0ECA3668A8B14855295BD8DD5E88309AF31330B, NULL);
				if (L_50)
				{
					goto IL_033b_1;
				}
			}
			{
				goto IL_03f3_1;
			}

IL_01ee_1:
			{
				String_t* L_51 = V_2;
				bool L_52;
				L_52 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_51, _stringLiteral8DD0A7170C2DECE4F5E82F96AB9B00AAEBA9F438, NULL);
				if (L_52)
				{
					goto IL_0351_1;
				}
			}
			{
				goto IL_03f3_1;
			}

IL_0203_1:
			{
				String_t* L_53 = V_2;
				bool L_54;
				L_54 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_53, _stringLiteralBDBEBC1E8A863EAF2A1EFDC4D2393F1540ABF0C9, NULL);
				if (L_54)
				{
					goto IL_0362_1;
				}
			}
			{
				goto IL_03f3_1;
			}

IL_0218_1:
			{
				String_t* L_55 = V_2;
				bool L_56;
				L_56 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_55, _stringLiteral8F76FFC503D9127950E3EAD1DFD82A8C6C91F728, NULL);
				if (L_56)
				{
					goto IL_0378_1;
				}
			}
			{
				goto IL_03f3_1;
			}

IL_022d_1:
			{
				String_t* L_57 = V_2;
				bool L_58;
				L_58 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_57, _stringLiteralC8D7651AAAFAAA9A55123A4B14C546BC27C603E7, NULL);
				if (L_58)
				{
					goto IL_0386_1;
				}
			}
			{
				goto IL_03f3_1;
			}

IL_0242_1:
			{
				String_t* L_59 = V_2;
				bool L_60;
				L_60 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_59, _stringLiteral338DFB21C4BCDE10C2A6B0F6B758581AB45E283A, NULL);
				if (L_60)
				{
					goto IL_0399_1;
				}
			}
			{
				goto IL_03f3_1;
			}

IL_0257_1:
			{
				String_t* L_61 = V_2;
				bool L_62;
				L_62 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_61, _stringLiteral843D6122FFBBF465C80ECD6FDFC0DF88BEAF4E14, NULL);
				if (L_62)
				{
					goto IL_03ac_1;
				}
			}
			{
				goto IL_03f3_1;
			}

IL_026c_1:
			{
				String_t* L_63 = V_2;
				bool L_64;
				L_64 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_63, _stringLiteral3EC42735CF07DB9169F6821DC94EB45DE6B5E1AA, NULL);
				if (L_64)
				{
					goto IL_03ba_1;
				}
			}
			{
				goto IL_03f3_1;
			}

IL_0281_1:
			{
				String_t* L_65 = V_2;
				bool L_66;
				L_66 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_65, _stringLiteral892582A238DF4FFEB2A2E7DD5D90A9A7AC6C26C4, NULL);
				if (L_66)
				{
					goto IL_03cd_1;
				}
			}
			{
				goto IL_03f3_1;
			}

IL_0296_1:
			{
				String_t* L_67 = V_2;
				bool L_68;
				L_68 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_67, _stringLiteral1F9261ABE85940E10CA48B7B42F1E5267F122734, NULL);
				if (L_68)
				{
					goto IL_03e0_1;
				}
			}
			{
				goto IL_03f3_1;
			}

IL_02ab_1:
			{
				// instance.additionalVertexStreams = reader.Read<UnityEngine.Mesh>(ES3Type_Mesh.Instance);
				MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE* L_69 = V_0;
				ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_70 = ___reader0;
				ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_71 = ((ES3Type_Mesh_tB7CD0BF677668097D339633406535F749DDDFE48_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Mesh_tB7CD0BF677668097D339633406535F749DDDFE48_il2cpp_TypeInfo_var))->___Instance_12;
				NullCheck(L_70);
				Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_72;
				L_72 = GenericVirtualFuncInvoker1< Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4*, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisMesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4_m34F6C712B26BFE70E5AAC03798D838583D35D02A_RuntimeMethod_var, L_70, L_71);
				NullCheck(L_69);
				MeshRenderer_set_additionalVertexStreams_m868D054ACBD5ECCE2B5B43781F7932F886B86379(L_69, L_72, NULL);
				// break;
				goto IL_03f9_1;
			}

IL_02c1_1:
			{
				// instance.enabled = reader.Read<System.Boolean>(ES3Type_bool.Instance);
				MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE* L_73 = V_0;
				ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_74 = ___reader0;
				ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_75 = ((ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_il2cpp_TypeInfo_var))->___Instance_12;
				NullCheck(L_74);
				bool L_76;
				L_76 = GenericVirtualFuncInvoker1< bool, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mFFB70EE53D8CD0255A4E599780F62A3EB1520E83_RuntimeMethod_var, L_74, L_75);
				NullCheck((Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF*)L_73);
				Renderer_set_enabled_m015E6D7B825528A31182F267234CC6A925F71DA8((Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF*)L_73, L_76, NULL);
				// break;
				goto IL_03f9_1;
			}

IL_02d7_1:
			{
				// instance.shadowCastingMode = reader.Read<UnityEngine.Rendering.ShadowCastingMode>();
				MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE* L_77 = V_0;
				ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_78 = ___reader0;
				NullCheck(L_78);
				int32_t L_79;
				L_79 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisShadowCastingMode_tF30806698B37CF120A1A506BD7549EAF308E7C6D_mE74883DA1F57042CE2132D08265B7EDE224066CE_RuntimeMethod_var, L_78);
				NullCheck((Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF*)L_77);
				Renderer_set_shadowCastingMode_mB0CD3D153E43044388AEFF7AEFDA93E80EB36D11((Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF*)L_77, L_79, NULL);
				// break;
				goto IL_03f9_1;
			}

IL_02e8_1:
			{
				// instance.receiveShadows = reader.Read<System.Boolean>(ES3Type_bool.Instance);
				MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE* L_80 = V_0;
				ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_81 = ___reader0;
				ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_82 = ((ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_il2cpp_TypeInfo_var))->___Instance_12;
				NullCheck(L_81);
				bool L_83;
				L_83 = GenericVirtualFuncInvoker1< bool, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mFFB70EE53D8CD0255A4E599780F62A3EB1520E83_RuntimeMethod_var, L_81, L_82);
				NullCheck((Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF*)L_80);
				Renderer_set_receiveShadows_mABEB4C72E96E65117B7FFFD4180247565D0C1A09((Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF*)L_80, L_83, NULL);
				// break;
				goto IL_03f9_1;
			}

IL_02fe_1:
			{
				// instance.sharedMaterials = reader.Read<UnityEngine.Material[]>();
				MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE* L_84 = V_0;
				ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_85 = ___reader0;
				NullCheck(L_85);
				MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D* L_86;
				L_86 = GenericVirtualFuncInvoker0< MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D* >::Invoke(ES3Reader_Read_TisMaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D_mD6C0F6DE0DFCBEEE0ECC2806C3C76B9B9AA49622_RuntimeMethod_var, L_85);
				NullCheck((Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF*)L_84);
				Renderer_set_sharedMaterials_m665ADE4190214CC2AC52490B4A7373D7EE75DEB2((Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF*)L_84, L_86, NULL);
				// break;
				goto IL_03f9_1;
			}

IL_030f_1:
			{
				// instance.lightmapIndex = reader.Read<System.Int32>(ES3Type_int.Instance);
				MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE* L_87 = V_0;
				ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_88 = ___reader0;
				ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_89 = ((ES3Type_int_t05A5E7A96442F23CE33E24A71CD349372A70E0C3_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_int_t05A5E7A96442F23CE33E24A71CD349372A70E0C3_il2cpp_TypeInfo_var))->___Instance_12;
				NullCheck(L_88);
				int32_t L_90;
				L_90 = GenericVirtualFuncInvoker1< int32_t, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mEFCC4D52DD5B822D3561A53591AE11CDB25CDB6F_RuntimeMethod_var, L_88, L_89);
				NullCheck((Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF*)L_87);
				Renderer_set_lightmapIndex_mB6F2202FEC2ECBA3538EBDAEE17B073CEF2B5AB8((Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF*)L_87, L_90, NULL);
				// break;
				goto IL_03f9_1;
			}

IL_0325_1:
			{
				// instance.realtimeLightmapIndex = reader.Read<System.Int32>(ES3Type_int.Instance);
				MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE* L_91 = V_0;
				ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_92 = ___reader0;
				ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_93 = ((ES3Type_int_t05A5E7A96442F23CE33E24A71CD349372A70E0C3_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_int_t05A5E7A96442F23CE33E24A71CD349372A70E0C3_il2cpp_TypeInfo_var))->___Instance_12;
				NullCheck(L_92);
				int32_t L_94;
				L_94 = GenericVirtualFuncInvoker1< int32_t, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mEFCC4D52DD5B822D3561A53591AE11CDB25CDB6F_RuntimeMethod_var, L_92, L_93);
				NullCheck((Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF*)L_91);
				Renderer_set_realtimeLightmapIndex_mE5684918EF41D05B218AEC5D6D3675B8A8F77389((Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF*)L_91, L_94, NULL);
				// break;
				goto IL_03f9_1;
			}

IL_033b_1:
			{
				// instance.lightmapScaleOffset = reader.Read<UnityEngine.Vector4>(ES3Type_Vector4.Instance);
				MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE* L_95 = V_0;
				ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_96 = ___reader0;
				ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_97 = ((ES3Type_Vector4_t20EB9288ABFACFA144B849DBAE5F00003E5D3EF1_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Vector4_t20EB9288ABFACFA144B849DBAE5F00003E5D3EF1_il2cpp_TypeInfo_var))->___Instance_12;
				NullCheck(L_96);
				Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_98;
				L_98 = GenericVirtualFuncInvoker1< Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_m6D7FA5D5608370867F7E593271DDFE9DB2CEBD88_RuntimeMethod_var, L_96, L_97);
				NullCheck((Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF*)L_95);
				Renderer_set_lightmapScaleOffset_m1F7EB461298380CCD8EE337F9AAAE40BE5B732A2((Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF*)L_95, L_98, NULL);
				// break;
				goto IL_03f9_1;
			}

IL_0351_1:
			{
				// instance.motionVectorGenerationMode = reader.Read<UnityEngine.MotionVectorGenerationMode>();
				MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE* L_99 = V_0;
				ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_100 = ___reader0;
				NullCheck(L_100);
				int32_t L_101;
				L_101 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisMotionVectorGenerationMode_tE87C61556749260EF5429A0F8FE55DAD30EEAFCB_m8282A371C977788F369BE28A7EC6D07EDA8A24D8_RuntimeMethod_var, L_100);
				NullCheck((Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF*)L_99);
				Renderer_set_motionVectorGenerationMode_m5768AC38CBBAD505E34281889682CA464ED3A32F((Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF*)L_99, L_101, NULL);
				// break;
				goto IL_03f9_1;
			}

IL_0362_1:
			{
				// instance.realtimeLightmapScaleOffset = reader.Read<UnityEngine.Vector4>(ES3Type_Vector4.Instance);
				MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE* L_102 = V_0;
				ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_103 = ___reader0;
				ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_104 = ((ES3Type_Vector4_t20EB9288ABFACFA144B849DBAE5F00003E5D3EF1_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Vector4_t20EB9288ABFACFA144B849DBAE5F00003E5D3EF1_il2cpp_TypeInfo_var))->___Instance_12;
				NullCheck(L_103);
				Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_105;
				L_105 = GenericVirtualFuncInvoker1< Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_m6D7FA5D5608370867F7E593271DDFE9DB2CEBD88_RuntimeMethod_var, L_103, L_104);
				NullCheck((Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF*)L_102);
				Renderer_set_realtimeLightmapScaleOffset_m391D14F3698B3D2BD88DC001931D261E5A3448E9((Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF*)L_102, L_105, NULL);
				// break;
				goto IL_03f9_1;
			}

IL_0378_1:
			{
				// instance.lightProbeUsage = reader.Read<UnityEngine.Rendering.LightProbeUsage>();
				MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE* L_106 = V_0;
				ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_107 = ___reader0;
				NullCheck(L_107);
				int32_t L_108;
				L_108 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisLightProbeUsage_tC6292C7B7CBA0E5AA2A56F40D71F58A7E06C2948_m66BEF16A5A89E757FF33443DDD5CE1051BB50376_RuntimeMethod_var, L_107);
				NullCheck((Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF*)L_106);
				Renderer_set_lightProbeUsage_mDCCD970DAC3546B32EF58876BABBD3353624F703((Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF*)L_106, L_108, NULL);
				// break;
				goto IL_03f9_1;
			}

IL_0386_1:
			{
				// instance.lightProbeProxyVolumeOverride = reader.Read<UnityEngine.GameObject>(ES3Type_GameObject.Instance);
				MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE* L_109 = V_0;
				ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_110 = ___reader0;
				ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_111 = ((ES3Type_GameObject_t7AACC3CCF9FD31A285F90A28AE3331E69A1F02B2_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_GameObject_t7AACC3CCF9FD31A285F90A28AE3331E69A1F02B2_il2cpp_TypeInfo_var))->___Instance_14;
				NullCheck(L_110);
				GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_112;
				L_112 = GenericVirtualFuncInvoker1< GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_mF17F721F02D9912C0E9F95ADE84A7350175EA7FF_RuntimeMethod_var, L_110, L_111);
				NullCheck((Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF*)L_109);
				Renderer_set_lightProbeProxyVolumeOverride_mEAF99A789A36BEDBAFCD2C2084578CF359587A21((Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF*)L_109, L_112, NULL);
				// break;
				goto IL_03f9_1;
			}

IL_0399_1:
			{
				// instance.probeAnchor = reader.Read<UnityEngine.Transform>(ES3Type_Transform.Instance);
				MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE* L_113 = V_0;
				ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_114 = ___reader0;
				ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_115 = ((ES3Type_Transform_t744F7C45C7A4F966265500803F08C4965797DAD7_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Transform_t744F7C45C7A4F966265500803F08C4965797DAD7_il2cpp_TypeInfo_var))->___Instance_14;
				NullCheck(L_114);
				Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_116;
				L_116 = GenericVirtualFuncInvoker1< Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1*, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisTransform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1_mB5F67B5F1812826BAC1CF736E8760BF608548454_RuntimeMethod_var, L_114, L_115);
				NullCheck((Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF*)L_113);
				Renderer_set_probeAnchor_m0032C3CC1BBF36AC32FCCDE6F4A6F2CE73062327((Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF*)L_113, L_116, NULL);
				// break;
				goto IL_03f9_1;
			}

IL_03ac_1:
			{
				// instance.reflectionProbeUsage = reader.Read<UnityEngine.Rendering.ReflectionProbeUsage>();
				MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE* L_117 = V_0;
				ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_118 = ___reader0;
				NullCheck(L_118);
				int32_t L_119;
				L_119 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisReflectionProbeUsage_t033508C14CD4AD926A3A215D19913DC21EA22705_m8D386D0E2DCEF800E206280828E9F9989F462116_RuntimeMethod_var, L_118);
				NullCheck((Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF*)L_117);
				Renderer_set_reflectionProbeUsage_m54A268EACA655AC3C66C4CD7F8C1EF3B41F3E008((Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF*)L_117, L_119, NULL);
				// break;
				goto IL_03f9_1;
			}

IL_03ba_1:
			{
				// instance.sortingLayerName = reader.Read<System.String>(ES3Type_string.Instance);
				MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE* L_120 = V_0;
				ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_121 = ___reader0;
				ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_122 = ((ES3Type_string_t0C89CCA6F02AF5B46E66DEF92E77FCEC83C2F068_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_string_t0C89CCA6F02AF5B46E66DEF92E77FCEC83C2F068_il2cpp_TypeInfo_var))->___Instance_12;
				NullCheck(L_121);
				String_t* L_123;
				L_123 = GenericVirtualFuncInvoker1< String_t*, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisString_t_mE83D478C999E69292DB9310C2993B1EE7DD28021_RuntimeMethod_var, L_121, L_122);
				NullCheck((Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF*)L_120);
				Renderer_set_sortingLayerName_mF335BAE30015B49C27FF3C063B033E44C237AC8A((Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF*)L_120, L_123, NULL);
				// break;
				goto IL_03f9_1;
			}

IL_03cd_1:
			{
				// instance.sortingLayerID = reader.Read<System.Int32>(ES3Type_int.Instance);
				MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE* L_124 = V_0;
				ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_125 = ___reader0;
				ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_126 = ((ES3Type_int_t05A5E7A96442F23CE33E24A71CD349372A70E0C3_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_int_t05A5E7A96442F23CE33E24A71CD349372A70E0C3_il2cpp_TypeInfo_var))->___Instance_12;
				NullCheck(L_125);
				int32_t L_127;
				L_127 = GenericVirtualFuncInvoker1< int32_t, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mEFCC4D52DD5B822D3561A53591AE11CDB25CDB6F_RuntimeMethod_var, L_125, L_126);
				NullCheck((Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF*)L_124);
				Renderer_set_sortingLayerID_m289E44FD06B6692C7B2ADD1189FE4FC013180C49((Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF*)L_124, L_127, NULL);
				// break;
				goto IL_03f9_1;
			}

IL_03e0_1:
			{
				// instance.sortingOrder = reader.Read<System.Int32>(ES3Type_int.Instance);
				MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE* L_128 = V_0;
				ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_129 = ___reader0;
				ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_130 = ((ES3Type_int_t05A5E7A96442F23CE33E24A71CD349372A70E0C3_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_int_t05A5E7A96442F23CE33E24A71CD349372A70E0C3_il2cpp_TypeInfo_var))->___Instance_12;
				NullCheck(L_129);
				int32_t L_131;
				L_131 = GenericVirtualFuncInvoker1< int32_t, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mEFCC4D52DD5B822D3561A53591AE11CDB25CDB6F_RuntimeMethod_var, L_129, L_130);
				NullCheck((Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF*)L_128);
				Renderer_set_sortingOrder_m4C67F002AD68CA0D55D20D6B78CDED3DB24467DA((Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF*)L_128, L_131, NULL);
				// break;
				goto IL_03f9_1;
			}

IL_03f3_1:
			{
				// reader.Skip();
				ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_132 = ___reader0;
				NullCheck(L_132);
				VirtualActionInvoker0::Invoke(41 /* System.Void ES3Reader::Skip() */, L_132);
			}

IL_03f9_1:
			{
				// foreach(string propertyName in reader.Properties)
				RuntimeObject* L_133 = V_1;
				NullCheck(L_133);
				bool L_134;
				L_134 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_133);
				if (L_134)
				{
					goto IL_0018_1;
				}
			}
			{
				goto IL_041a;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_041a:
	{
		// }
		return;
	}
}
// System.Object ES3Types.ES3Type_MinMaxCurve::Read<System.Boolean>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_MinMaxCurve_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m45F18CA79F02CF81CDE2A332267761F4308E2BA0_gshared (ES3Type_MinMaxCurve_t1C147718750ACBECE5D2B7F545D2A434A3C5409B* __this, ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisAnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_m10F5F132336385185365E73EF668D8D369D3A4A1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisParticleSystemCurveMode_t8BE38B5D6B050709BAE31B5556CFC3DA69FC8405_m066E552CFA7510B509D2175EB72B2402EC615596_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mA86928BC888E342D2C2644535E3399952F5077ED_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_AnimationCurve_tF623128FF51FC3C48A6749619C4915CBE2995CA4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral227C22F51E4B6583CFC54387461605DDBBB00D14);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral27906925D50A15B990B586241F08C8ED14226340);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral36587A0761A180514C267B50EA888F89871F71DF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6C9DED8087C891AE33ACFFCE806DBFF63795F56F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral87E6319336195D789899F4791CCD5F2437BCC0B0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAF248E82BE9EBA1ADBF067429FAEE5A5B6E05A74);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB5831A880405F69C8EF7F43534BF4D880F2B9A12);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD4A11128F810D574390DA344F324014E964D1876);
		s_Il2CppMethodInitialized = true;
	}
	MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	uint32_t V_2 = 0;
	{
		// var instance = new UnityEngine.ParticleSystem.MinMaxCurve();
		il2cpp_codegen_initobj((&V_0), sizeof(MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23));
		goto IL_01d3;
	}

IL_000d:
	{
		String_t* L_0 = V_1;
		uint32_t L_1;
		L_1 = U3CPrivateImplementationDetailsU3E_ComputeStringHash_m6EA1F233618497AEFF8902A5EDFA24C74E2F2876(L_0, NULL);
		V_2 = L_1;
		uint32_t L_2 = V_2;
		if ((!(((uint32_t)L_2) <= ((uint32_t)((int32_t)-725866558)))))
		{
			goto IL_0054;
		}
	}
	{
		uint32_t L_3 = V_2;
		if ((!(((uint32_t)L_3) <= ((uint32_t)((int32_t)740975083)))))
		{
			goto IL_003c;
		}
	}
	{
		uint32_t L_4 = V_2;
		if ((((int32_t)L_4) == ((int32_t)((int32_t)110225957))))
		{
			goto IL_0105;
		}
	}
	{
		uint32_t L_5 = V_2;
		if ((((int32_t)L_5) == ((int32_t)((int32_t)740975083))))
		{
			goto IL_009c;
		}
	}
	{
		goto IL_01cd;
	}

IL_003c:
	{
		uint32_t L_6 = V_2;
		if ((((int32_t)L_6) == ((int32_t)((int32_t)-1724381676))))
		{
			goto IL_011a;
		}
	}
	{
		uint32_t L_7 = V_2;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)-725866558))))
		{
			goto IL_00b1;
		}
	}
	{
		goto IL_01cd;
	}

IL_0054:
	{
		uint32_t L_8 = V_2;
		if ((!(((uint32_t)L_8) <= ((uint32_t)((int32_t)-559473464)))))
		{
			goto IL_0074;
		}
	}
	{
		uint32_t L_9 = V_2;
		if ((((int32_t)L_9) == ((int32_t)((int32_t)-581632105))))
		{
			goto IL_00f0;
		}
	}
	{
		uint32_t L_10 = V_2;
		if ((((int32_t)L_10) == ((int32_t)((int32_t)-559473464))))
		{
			goto IL_00c6;
		}
	}
	{
		goto IL_01cd;
	}

IL_0074:
	{
		uint32_t L_11 = V_2;
		if ((((int32_t)L_11) == ((int32_t)((int32_t)-345465511))))
		{
			goto IL_00db;
		}
	}
	{
		uint32_t L_12 = V_2;
		if ((!(((uint32_t)L_12) == ((uint32_t)((int32_t)-328277998)))))
		{
			goto IL_01cd;
		}
	}
	{
		String_t* L_13 = V_1;
		bool L_14;
		L_14 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_13, _stringLiteralAF248E82BE9EBA1ADBF067429FAEE5A5B6E05A74, NULL);
		if (L_14)
		{
			goto IL_012f;
		}
	}
	{
		goto IL_01cd;
	}

IL_009c:
	{
		String_t* L_15 = V_1;
		bool L_16;
		L_16 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_15, _stringLiteral227C22F51E4B6583CFC54387461605DDBBB00D14, NULL);
		if (L_16)
		{
			goto IL_0141;
		}
	}
	{
		goto IL_01cd;
	}

IL_00b1:
	{
		String_t* L_17 = V_1;
		bool L_18;
		L_18 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_17, _stringLiteral27906925D50A15B990B586241F08C8ED14226340, NULL);
		if (L_18)
		{
			goto IL_0155;
		}
	}
	{
		goto IL_01cd;
	}

IL_00c6:
	{
		String_t* L_19 = V_1;
		bool L_20;
		L_20 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_19, _stringLiteralD4A11128F810D574390DA344F324014E964D1876, NULL);
		if (L_20)
		{
			goto IL_0169;
		}
	}
	{
		goto IL_01cd;
	}

IL_00db:
	{
		String_t* L_21 = V_1;
		bool L_22;
		L_22 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_21, _stringLiteralB5831A880405F69C8EF7F43534BF4D880F2B9A12, NULL);
		if (L_22)
		{
			goto IL_017d;
		}
	}
	{
		goto IL_01cd;
	}

IL_00f0:
	{
		String_t* L_23 = V_1;
		bool L_24;
		L_24 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_23, _stringLiteral36587A0761A180514C267B50EA888F89871F71DF, NULL);
		if (L_24)
		{
			goto IL_0191;
		}
	}
	{
		goto IL_01cd;
	}

IL_0105:
	{
		String_t* L_25 = V_1;
		bool L_26;
		L_26 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_25, _stringLiteral87E6319336195D789899F4791CCD5F2437BCC0B0, NULL);
		if (L_26)
		{
			goto IL_01a5;
		}
	}
	{
		goto IL_01cd;
	}

IL_011a:
	{
		String_t* L_27 = V_1;
		bool L_28;
		L_28 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_27, _stringLiteral6C9DED8087C891AE33ACFFCE806DBFF63795F56F, NULL);
		if (L_28)
		{
			goto IL_01b9;
		}
	}
	{
		goto IL_01cd;
	}

IL_012f:
	{
		// instance.mode = reader.Read<UnityEngine.ParticleSystemCurveMode>();
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_29 = ___reader0;
		NullCheck(L_29);
		int32_t L_30;
		L_30 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisParticleSystemCurveMode_t8BE38B5D6B050709BAE31B5556CFC3DA69FC8405_m066E552CFA7510B509D2175EB72B2402EC615596_RuntimeMethod_var, L_29);
		MinMaxCurve_set_mode_m6870C4CA0FE7AF1029F45040B827C9F0A6A80A86((&V_0), L_30, NULL);
		// break;
		goto IL_01d3;
	}

IL_0141:
	{
		// instance.curveMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_31 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_32 = ((ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_31);
		float L_33;
		L_33 = GenericVirtualFuncInvoker1< float, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mA86928BC888E342D2C2644535E3399952F5077ED_RuntimeMethod_var, L_31, L_32);
		MinMaxCurve_set_curveMultiplier_m9FCF7F21AECE399ACD9FEB9ADEEBD93FD12DDABC((&V_0), L_33, NULL);
		// break;
		goto IL_01d3;
	}

IL_0155:
	{
		// instance.curveMax = reader.Read<UnityEngine.AnimationCurve>(ES3Type_AnimationCurve.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_34 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_35 = ((ES3Type_AnimationCurve_tF623128FF51FC3C48A6749619C4915CBE2995CA4_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_AnimationCurve_tF623128FF51FC3C48A6749619C4915CBE2995CA4_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_34);
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_36;
		L_36 = GenericVirtualFuncInvoker1< AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354*, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisAnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_m10F5F132336385185365E73EF668D8D369D3A4A1_RuntimeMethod_var, L_34, L_35);
		MinMaxCurve_set_curveMax_m39B9E8AE4E62E874DA99AA7108C2C47C6CA333DF((&V_0), L_36, NULL);
		// break;
		goto IL_01d3;
	}

IL_0169:
	{
		// instance.curveMin = reader.Read<UnityEngine.AnimationCurve>(ES3Type_AnimationCurve.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_37 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_38 = ((ES3Type_AnimationCurve_tF623128FF51FC3C48A6749619C4915CBE2995CA4_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_AnimationCurve_tF623128FF51FC3C48A6749619C4915CBE2995CA4_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_37);
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_39;
		L_39 = GenericVirtualFuncInvoker1< AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354*, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisAnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_m10F5F132336385185365E73EF668D8D369D3A4A1_RuntimeMethod_var, L_37, L_38);
		MinMaxCurve_set_curveMin_m17ADE22B882B75CBE87836C85C477A05122D9E75((&V_0), L_39, NULL);
		// break;
		goto IL_01d3;
	}

IL_017d:
	{
		// instance.constantMax = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_40 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_41 = ((ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_40);
		float L_42;
		L_42 = GenericVirtualFuncInvoker1< float, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mA86928BC888E342D2C2644535E3399952F5077ED_RuntimeMethod_var, L_40, L_41);
		MinMaxCurve_set_constantMax_mDB7B011E5B1EA76429B2A1FFDE6C06E82D290DC1((&V_0), L_42, NULL);
		// break;
		goto IL_01d3;
	}

IL_0191:
	{
		// instance.constantMin = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_43 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_44 = ((ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_43);
		float L_45;
		L_45 = GenericVirtualFuncInvoker1< float, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mA86928BC888E342D2C2644535E3399952F5077ED_RuntimeMethod_var, L_43, L_44);
		MinMaxCurve_set_constantMin_mBF7CF2A9F167AD06C327EE6EA37BA427E1CE548C((&V_0), L_45, NULL);
		// break;
		goto IL_01d3;
	}

IL_01a5:
	{
		// instance.constant = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_46 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_47 = ((ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_46);
		float L_48;
		L_48 = GenericVirtualFuncInvoker1< float, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mA86928BC888E342D2C2644535E3399952F5077ED_RuntimeMethod_var, L_46, L_47);
		MinMaxCurve_set_constant_mB6E4F22F67D3ED641FEBB387351F17451BB6A897((&V_0), L_48, NULL);
		// break;
		goto IL_01d3;
	}

IL_01b9:
	{
		// instance.curve = reader.Read<UnityEngine.AnimationCurve>(ES3Type_AnimationCurve.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_49 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_50 = ((ES3Type_AnimationCurve_tF623128FF51FC3C48A6749619C4915CBE2995CA4_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_AnimationCurve_tF623128FF51FC3C48A6749619C4915CBE2995CA4_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_49);
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_51;
		L_51 = GenericVirtualFuncInvoker1< AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354*, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisAnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_m10F5F132336385185365E73EF668D8D369D3A4A1_RuntimeMethod_var, L_49, L_50);
		MinMaxCurve_set_curve_mC745A6526FBF122F96DA597997DFAB9D7D2529BF((&V_0), L_51, NULL);
		// break;
		goto IL_01d3;
	}

IL_01cd:
	{
		// reader.Skip();
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_52 = ___reader0;
		NullCheck(L_52);
		VirtualActionInvoker0::Invoke(41 /* System.Void ES3Reader::Skip() */, L_52);
	}

IL_01d3:
	{
		// while((propertyName = reader.ReadPropertyName()) != null)
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_53 = ___reader0;
		NullCheck(L_53);
		String_t* L_54;
		L_54 = VirtualFuncInvoker0< String_t* >::Invoke(21 /* System.String ES3Reader::ReadPropertyName() */, L_53);
		String_t* L_55 = L_54;
		V_1 = L_55;
		if (L_55)
		{
			goto IL_000d;
		}
	}
	{
		// return instance;
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_56 = V_0;
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_57 = L_56;
		RuntimeObject* L_58 = Box(MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_il2cpp_TypeInfo_var, &L_57);
		return L_58;
	}
}
// System.Object ES3Types.ES3Type_MinMaxCurve::Read<UnityEngine.Bounds>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_MinMaxCurve_Read_TisBounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3_m2E4765E16FBC6FEB97164C85632FECE9FC5EE11C_gshared (ES3Type_MinMaxCurve_t1C147718750ACBECE5D2B7F545D2A434A3C5409B* __this, ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisAnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_m10F5F132336385185365E73EF668D8D369D3A4A1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisParticleSystemCurveMode_t8BE38B5D6B050709BAE31B5556CFC3DA69FC8405_m066E552CFA7510B509D2175EB72B2402EC615596_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mA86928BC888E342D2C2644535E3399952F5077ED_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_AnimationCurve_tF623128FF51FC3C48A6749619C4915CBE2995CA4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral227C22F51E4B6583CFC54387461605DDBBB00D14);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral27906925D50A15B990B586241F08C8ED14226340);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral36587A0761A180514C267B50EA888F89871F71DF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6C9DED8087C891AE33ACFFCE806DBFF63795F56F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral87E6319336195D789899F4791CCD5F2437BCC0B0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAF248E82BE9EBA1ADBF067429FAEE5A5B6E05A74);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB5831A880405F69C8EF7F43534BF4D880F2B9A12);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD4A11128F810D574390DA344F324014E964D1876);
		s_Il2CppMethodInitialized = true;
	}
	MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	uint32_t V_2 = 0;
	{
		// var instance = new UnityEngine.ParticleSystem.MinMaxCurve();
		il2cpp_codegen_initobj((&V_0), sizeof(MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23));
		goto IL_01d3;
	}

IL_000d:
	{
		String_t* L_0 = V_1;
		uint32_t L_1;
		L_1 = U3CPrivateImplementationDetailsU3E_ComputeStringHash_m6EA1F233618497AEFF8902A5EDFA24C74E2F2876(L_0, NULL);
		V_2 = L_1;
		uint32_t L_2 = V_2;
		if ((!(((uint32_t)L_2) <= ((uint32_t)((int32_t)-725866558)))))
		{
			goto IL_0054;
		}
	}
	{
		uint32_t L_3 = V_2;
		if ((!(((uint32_t)L_3) <= ((uint32_t)((int32_t)740975083)))))
		{
			goto IL_003c;
		}
	}
	{
		uint32_t L_4 = V_2;
		if ((((int32_t)L_4) == ((int32_t)((int32_t)110225957))))
		{
			goto IL_0105;
		}
	}
	{
		uint32_t L_5 = V_2;
		if ((((int32_t)L_5) == ((int32_t)((int32_t)740975083))))
		{
			goto IL_009c;
		}
	}
	{
		goto IL_01cd;
	}

IL_003c:
	{
		uint32_t L_6 = V_2;
		if ((((int32_t)L_6) == ((int32_t)((int32_t)-1724381676))))
		{
			goto IL_011a;
		}
	}
	{
		uint32_t L_7 = V_2;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)-725866558))))
		{
			goto IL_00b1;
		}
	}
	{
		goto IL_01cd;
	}

IL_0054:
	{
		uint32_t L_8 = V_2;
		if ((!(((uint32_t)L_8) <= ((uint32_t)((int32_t)-559473464)))))
		{
			goto IL_0074;
		}
	}
	{
		uint32_t L_9 = V_2;
		if ((((int32_t)L_9) == ((int32_t)((int32_t)-581632105))))
		{
			goto IL_00f0;
		}
	}
	{
		uint32_t L_10 = V_2;
		if ((((int32_t)L_10) == ((int32_t)((int32_t)-559473464))))
		{
			goto IL_00c6;
		}
	}
	{
		goto IL_01cd;
	}

IL_0074:
	{
		uint32_t L_11 = V_2;
		if ((((int32_t)L_11) == ((int32_t)((int32_t)-345465511))))
		{
			goto IL_00db;
		}
	}
	{
		uint32_t L_12 = V_2;
		if ((!(((uint32_t)L_12) == ((uint32_t)((int32_t)-328277998)))))
		{
			goto IL_01cd;
		}
	}
	{
		String_t* L_13 = V_1;
		bool L_14;
		L_14 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_13, _stringLiteralAF248E82BE9EBA1ADBF067429FAEE5A5B6E05A74, NULL);
		if (L_14)
		{
			goto IL_012f;
		}
	}
	{
		goto IL_01cd;
	}

IL_009c:
	{
		String_t* L_15 = V_1;
		bool L_16;
		L_16 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_15, _stringLiteral227C22F51E4B6583CFC54387461605DDBBB00D14, NULL);
		if (L_16)
		{
			goto IL_0141;
		}
	}
	{
		goto IL_01cd;
	}

IL_00b1:
	{
		String_t* L_17 = V_1;
		bool L_18;
		L_18 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_17, _stringLiteral27906925D50A15B990B586241F08C8ED14226340, NULL);
		if (L_18)
		{
			goto IL_0155;
		}
	}
	{
		goto IL_01cd;
	}

IL_00c6:
	{
		String_t* L_19 = V_1;
		bool L_20;
		L_20 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_19, _stringLiteralD4A11128F810D574390DA344F324014E964D1876, NULL);
		if (L_20)
		{
			goto IL_0169;
		}
	}
	{
		goto IL_01cd;
	}

IL_00db:
	{
		String_t* L_21 = V_1;
		bool L_22;
		L_22 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_21, _stringLiteralB5831A880405F69C8EF7F43534BF4D880F2B9A12, NULL);
		if (L_22)
		{
			goto IL_017d;
		}
	}
	{
		goto IL_01cd;
	}

IL_00f0:
	{
		String_t* L_23 = V_1;
		bool L_24;
		L_24 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_23, _stringLiteral36587A0761A180514C267B50EA888F89871F71DF, NULL);
		if (L_24)
		{
			goto IL_0191;
		}
	}
	{
		goto IL_01cd;
	}

IL_0105:
	{
		String_t* L_25 = V_1;
		bool L_26;
		L_26 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_25, _stringLiteral87E6319336195D789899F4791CCD5F2437BCC0B0, NULL);
		if (L_26)
		{
			goto IL_01a5;
		}
	}
	{
		goto IL_01cd;
	}

IL_011a:
	{
		String_t* L_27 = V_1;
		bool L_28;
		L_28 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_27, _stringLiteral6C9DED8087C891AE33ACFFCE806DBFF63795F56F, NULL);
		if (L_28)
		{
			goto IL_01b9;
		}
	}
	{
		goto IL_01cd;
	}

IL_012f:
	{
		// instance.mode = reader.Read<UnityEngine.ParticleSystemCurveMode>();
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_29 = ___reader0;
		NullCheck(L_29);
		int32_t L_30;
		L_30 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisParticleSystemCurveMode_t8BE38B5D6B050709BAE31B5556CFC3DA69FC8405_m066E552CFA7510B509D2175EB72B2402EC615596_RuntimeMethod_var, L_29);
		MinMaxCurve_set_mode_m6870C4CA0FE7AF1029F45040B827C9F0A6A80A86((&V_0), L_30, NULL);
		// break;
		goto IL_01d3;
	}

IL_0141:
	{
		// instance.curveMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_31 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_32 = ((ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_31);
		float L_33;
		L_33 = GenericVirtualFuncInvoker1< float, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mA86928BC888E342D2C2644535E3399952F5077ED_RuntimeMethod_var, L_31, L_32);
		MinMaxCurve_set_curveMultiplier_m9FCF7F21AECE399ACD9FEB9ADEEBD93FD12DDABC((&V_0), L_33, NULL);
		// break;
		goto IL_01d3;
	}

IL_0155:
	{
		// instance.curveMax = reader.Read<UnityEngine.AnimationCurve>(ES3Type_AnimationCurve.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_34 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_35 = ((ES3Type_AnimationCurve_tF623128FF51FC3C48A6749619C4915CBE2995CA4_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_AnimationCurve_tF623128FF51FC3C48A6749619C4915CBE2995CA4_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_34);
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_36;
		L_36 = GenericVirtualFuncInvoker1< AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354*, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisAnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_m10F5F132336385185365E73EF668D8D369D3A4A1_RuntimeMethod_var, L_34, L_35);
		MinMaxCurve_set_curveMax_m39B9E8AE4E62E874DA99AA7108C2C47C6CA333DF((&V_0), L_36, NULL);
		// break;
		goto IL_01d3;
	}

IL_0169:
	{
		// instance.curveMin = reader.Read<UnityEngine.AnimationCurve>(ES3Type_AnimationCurve.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_37 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_38 = ((ES3Type_AnimationCurve_tF623128FF51FC3C48A6749619C4915CBE2995CA4_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_AnimationCurve_tF623128FF51FC3C48A6749619C4915CBE2995CA4_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_37);
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_39;
		L_39 = GenericVirtualFuncInvoker1< AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354*, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisAnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_m10F5F132336385185365E73EF668D8D369D3A4A1_RuntimeMethod_var, L_37, L_38);
		MinMaxCurve_set_curveMin_m17ADE22B882B75CBE87836C85C477A05122D9E75((&V_0), L_39, NULL);
		// break;
		goto IL_01d3;
	}

IL_017d:
	{
		// instance.constantMax = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_40 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_41 = ((ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_40);
		float L_42;
		L_42 = GenericVirtualFuncInvoker1< float, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mA86928BC888E342D2C2644535E3399952F5077ED_RuntimeMethod_var, L_40, L_41);
		MinMaxCurve_set_constantMax_mDB7B011E5B1EA76429B2A1FFDE6C06E82D290DC1((&V_0), L_42, NULL);
		// break;
		goto IL_01d3;
	}

IL_0191:
	{
		// instance.constantMin = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_43 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_44 = ((ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_43);
		float L_45;
		L_45 = GenericVirtualFuncInvoker1< float, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mA86928BC888E342D2C2644535E3399952F5077ED_RuntimeMethod_var, L_43, L_44);
		MinMaxCurve_set_constantMin_mBF7CF2A9F167AD06C327EE6EA37BA427E1CE548C((&V_0), L_45, NULL);
		// break;
		goto IL_01d3;
	}

IL_01a5:
	{
		// instance.constant = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_46 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_47 = ((ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_46);
		float L_48;
		L_48 = GenericVirtualFuncInvoker1< float, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mA86928BC888E342D2C2644535E3399952F5077ED_RuntimeMethod_var, L_46, L_47);
		MinMaxCurve_set_constant_mB6E4F22F67D3ED641FEBB387351F17451BB6A897((&V_0), L_48, NULL);
		// break;
		goto IL_01d3;
	}

IL_01b9:
	{
		// instance.curve = reader.Read<UnityEngine.AnimationCurve>(ES3Type_AnimationCurve.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_49 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_50 = ((ES3Type_AnimationCurve_tF623128FF51FC3C48A6749619C4915CBE2995CA4_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_AnimationCurve_tF623128FF51FC3C48A6749619C4915CBE2995CA4_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_49);
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_51;
		L_51 = GenericVirtualFuncInvoker1< AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354*, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisAnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_m10F5F132336385185365E73EF668D8D369D3A4A1_RuntimeMethod_var, L_49, L_50);
		MinMaxCurve_set_curve_mC745A6526FBF122F96DA597997DFAB9D7D2529BF((&V_0), L_51, NULL);
		// break;
		goto IL_01d3;
	}

IL_01cd:
	{
		// reader.Skip();
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_52 = ___reader0;
		NullCheck(L_52);
		VirtualActionInvoker0::Invoke(41 /* System.Void ES3Reader::Skip() */, L_52);
	}

IL_01d3:
	{
		// while((propertyName = reader.ReadPropertyName()) != null)
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_53 = ___reader0;
		NullCheck(L_53);
		String_t* L_54;
		L_54 = VirtualFuncInvoker0< String_t* >::Invoke(21 /* System.String ES3Reader::ReadPropertyName() */, L_53);
		String_t* L_55 = L_54;
		V_1 = L_55;
		if (L_55)
		{
			goto IL_000d;
		}
	}
	{
		// return instance;
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_56 = V_0;
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_57 = L_56;
		RuntimeObject* L_58 = Box(MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_il2cpp_TypeInfo_var, &L_57);
		return L_58;
	}
}
// System.Object ES3Types.ES3Type_MinMaxCurve::Read<System.Byte>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_MinMaxCurve_Read_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mDCB6124BFFE6E332839DCC6D15FA3F5C3AEC27BB_gshared (ES3Type_MinMaxCurve_t1C147718750ACBECE5D2B7F545D2A434A3C5409B* __this, ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisAnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_m10F5F132336385185365E73EF668D8D369D3A4A1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisParticleSystemCurveMode_t8BE38B5D6B050709BAE31B5556CFC3DA69FC8405_m066E552CFA7510B509D2175EB72B2402EC615596_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mA86928BC888E342D2C2644535E3399952F5077ED_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_AnimationCurve_tF623128FF51FC3C48A6749619C4915CBE2995CA4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral227C22F51E4B6583CFC54387461605DDBBB00D14);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral27906925D50A15B990B586241F08C8ED14226340);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral36587A0761A180514C267B50EA888F89871F71DF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6C9DED8087C891AE33ACFFCE806DBFF63795F56F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral87E6319336195D789899F4791CCD5F2437BCC0B0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAF248E82BE9EBA1ADBF067429FAEE5A5B6E05A74);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB5831A880405F69C8EF7F43534BF4D880F2B9A12);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD4A11128F810D574390DA344F324014E964D1876);
		s_Il2CppMethodInitialized = true;
	}
	MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	uint32_t V_2 = 0;
	{
		// var instance = new UnityEngine.ParticleSystem.MinMaxCurve();
		il2cpp_codegen_initobj((&V_0), sizeof(MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23));
		goto IL_01d3;
	}

IL_000d:
	{
		String_t* L_0 = V_1;
		uint32_t L_1;
		L_1 = U3CPrivateImplementationDetailsU3E_ComputeStringHash_m6EA1F233618497AEFF8902A5EDFA24C74E2F2876(L_0, NULL);
		V_2 = L_1;
		uint32_t L_2 = V_2;
		if ((!(((uint32_t)L_2) <= ((uint32_t)((int32_t)-725866558)))))
		{
			goto IL_0054;
		}
	}
	{
		uint32_t L_3 = V_2;
		if ((!(((uint32_t)L_3) <= ((uint32_t)((int32_t)740975083)))))
		{
			goto IL_003c;
		}
	}
	{
		uint32_t L_4 = V_2;
		if ((((int32_t)L_4) == ((int32_t)((int32_t)110225957))))
		{
			goto IL_0105;
		}
	}
	{
		uint32_t L_5 = V_2;
		if ((((int32_t)L_5) == ((int32_t)((int32_t)740975083))))
		{
			goto IL_009c;
		}
	}
	{
		goto IL_01cd;
	}

IL_003c:
	{
		uint32_t L_6 = V_2;
		if ((((int32_t)L_6) == ((int32_t)((int32_t)-1724381676))))
		{
			goto IL_011a;
		}
	}
	{
		uint32_t L_7 = V_2;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)-725866558))))
		{
			goto IL_00b1;
		}
	}
	{
		goto IL_01cd;
	}

IL_0054:
	{
		uint32_t L_8 = V_2;
		if ((!(((uint32_t)L_8) <= ((uint32_t)((int32_t)-559473464)))))
		{
			goto IL_0074;
		}
	}
	{
		uint32_t L_9 = V_2;
		if ((((int32_t)L_9) == ((int32_t)((int32_t)-581632105))))
		{
			goto IL_00f0;
		}
	}
	{
		uint32_t L_10 = V_2;
		if ((((int32_t)L_10) == ((int32_t)((int32_t)-559473464))))
		{
			goto IL_00c6;
		}
	}
	{
		goto IL_01cd;
	}

IL_0074:
	{
		uint32_t L_11 = V_2;
		if ((((int32_t)L_11) == ((int32_t)((int32_t)-345465511))))
		{
			goto IL_00db;
		}
	}
	{
		uint32_t L_12 = V_2;
		if ((!(((uint32_t)L_12) == ((uint32_t)((int32_t)-328277998)))))
		{
			goto IL_01cd;
		}
	}
	{
		String_t* L_13 = V_1;
		bool L_14;
		L_14 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_13, _stringLiteralAF248E82BE9EBA1ADBF067429FAEE5A5B6E05A74, NULL);
		if (L_14)
		{
			goto IL_012f;
		}
	}
	{
		goto IL_01cd;
	}

IL_009c:
	{
		String_t* L_15 = V_1;
		bool L_16;
		L_16 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_15, _stringLiteral227C22F51E4B6583CFC54387461605DDBBB00D14, NULL);
		if (L_16)
		{
			goto IL_0141;
		}
	}
	{
		goto IL_01cd;
	}

IL_00b1:
	{
		String_t* L_17 = V_1;
		bool L_18;
		L_18 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_17, _stringLiteral27906925D50A15B990B586241F08C8ED14226340, NULL);
		if (L_18)
		{
			goto IL_0155;
		}
	}
	{
		goto IL_01cd;
	}

IL_00c6:
	{
		String_t* L_19 = V_1;
		bool L_20;
		L_20 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_19, _stringLiteralD4A11128F810D574390DA344F324014E964D1876, NULL);
		if (L_20)
		{
			goto IL_0169;
		}
	}
	{
		goto IL_01cd;
	}

IL_00db:
	{
		String_t* L_21 = V_1;
		bool L_22;
		L_22 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_21, _stringLiteralB5831A880405F69C8EF7F43534BF4D880F2B9A12, NULL);
		if (L_22)
		{
			goto IL_017d;
		}
	}
	{
		goto IL_01cd;
	}

IL_00f0:
	{
		String_t* L_23 = V_1;
		bool L_24;
		L_24 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_23, _stringLiteral36587A0761A180514C267B50EA888F89871F71DF, NULL);
		if (L_24)
		{
			goto IL_0191;
		}
	}
	{
		goto IL_01cd;
	}

IL_0105:
	{
		String_t* L_25 = V_1;
		bool L_26;
		L_26 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_25, _stringLiteral87E6319336195D789899F4791CCD5F2437BCC0B0, NULL);
		if (L_26)
		{
			goto IL_01a5;
		}
	}
	{
		goto IL_01cd;
	}

IL_011a:
	{
		String_t* L_27 = V_1;
		bool L_28;
		L_28 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_27, _stringLiteral6C9DED8087C891AE33ACFFCE806DBFF63795F56F, NULL);
		if (L_28)
		{
			goto IL_01b9;
		}
	}
	{
		goto IL_01cd;
	}

IL_012f:
	{
		// instance.mode = reader.Read<UnityEngine.ParticleSystemCurveMode>();
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_29 = ___reader0;
		NullCheck(L_29);
		int32_t L_30;
		L_30 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisParticleSystemCurveMode_t8BE38B5D6B050709BAE31B5556CFC3DA69FC8405_m066E552CFA7510B509D2175EB72B2402EC615596_RuntimeMethod_var, L_29);
		MinMaxCurve_set_mode_m6870C4CA0FE7AF1029F45040B827C9F0A6A80A86((&V_0), L_30, NULL);
		// break;
		goto IL_01d3;
	}

IL_0141:
	{
		// instance.curveMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_31 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_32 = ((ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_31);
		float L_33;
		L_33 = GenericVirtualFuncInvoker1< float, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mA86928BC888E342D2C2644535E3399952F5077ED_RuntimeMethod_var, L_31, L_32);
		MinMaxCurve_set_curveMultiplier_m9FCF7F21AECE399ACD9FEB9ADEEBD93FD12DDABC((&V_0), L_33, NULL);
		// break;
		goto IL_01d3;
	}

IL_0155:
	{
		// instance.curveMax = reader.Read<UnityEngine.AnimationCurve>(ES3Type_AnimationCurve.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_34 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_35 = ((ES3Type_AnimationCurve_tF623128FF51FC3C48A6749619C4915CBE2995CA4_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_AnimationCurve_tF623128FF51FC3C48A6749619C4915CBE2995CA4_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_34);
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_36;
		L_36 = GenericVirtualFuncInvoker1< AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354*, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisAnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_m10F5F132336385185365E73EF668D8D369D3A4A1_RuntimeMethod_var, L_34, L_35);
		MinMaxCurve_set_curveMax_m39B9E8AE4E62E874DA99AA7108C2C47C6CA333DF((&V_0), L_36, NULL);
		// break;
		goto IL_01d3;
	}

IL_0169:
	{
		// instance.curveMin = reader.Read<UnityEngine.AnimationCurve>(ES3Type_AnimationCurve.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_37 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_38 = ((ES3Type_AnimationCurve_tF623128FF51FC3C48A6749619C4915CBE2995CA4_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_AnimationCurve_tF623128FF51FC3C48A6749619C4915CBE2995CA4_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_37);
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_39;
		L_39 = GenericVirtualFuncInvoker1< AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354*, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisAnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_m10F5F132336385185365E73EF668D8D369D3A4A1_RuntimeMethod_var, L_37, L_38);
		MinMaxCurve_set_curveMin_m17ADE22B882B75CBE87836C85C477A05122D9E75((&V_0), L_39, NULL);
		// break;
		goto IL_01d3;
	}

IL_017d:
	{
		// instance.constantMax = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_40 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_41 = ((ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_40);
		float L_42;
		L_42 = GenericVirtualFuncInvoker1< float, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mA86928BC888E342D2C2644535E3399952F5077ED_RuntimeMethod_var, L_40, L_41);
		MinMaxCurve_set_constantMax_mDB7B011E5B1EA76429B2A1FFDE6C06E82D290DC1((&V_0), L_42, NULL);
		// break;
		goto IL_01d3;
	}

IL_0191:
	{
		// instance.constantMin = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_43 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_44 = ((ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_43);
		float L_45;
		L_45 = GenericVirtualFuncInvoker1< float, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mA86928BC888E342D2C2644535E3399952F5077ED_RuntimeMethod_var, L_43, L_44);
		MinMaxCurve_set_constantMin_mBF7CF2A9F167AD06C327EE6EA37BA427E1CE548C((&V_0), L_45, NULL);
		// break;
		goto IL_01d3;
	}

IL_01a5:
	{
		// instance.constant = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_46 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_47 = ((ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_46);
		float L_48;
		L_48 = GenericVirtualFuncInvoker1< float, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mA86928BC888E342D2C2644535E3399952F5077ED_RuntimeMethod_var, L_46, L_47);
		MinMaxCurve_set_constant_mB6E4F22F67D3ED641FEBB387351F17451BB6A897((&V_0), L_48, NULL);
		// break;
		goto IL_01d3;
	}

IL_01b9:
	{
		// instance.curve = reader.Read<UnityEngine.AnimationCurve>(ES3Type_AnimationCurve.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_49 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_50 = ((ES3Type_AnimationCurve_tF623128FF51FC3C48A6749619C4915CBE2995CA4_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_AnimationCurve_tF623128FF51FC3C48A6749619C4915CBE2995CA4_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_49);
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_51;
		L_51 = GenericVirtualFuncInvoker1< AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354*, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisAnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_m10F5F132336385185365E73EF668D8D369D3A4A1_RuntimeMethod_var, L_49, L_50);
		MinMaxCurve_set_curve_mC745A6526FBF122F96DA597997DFAB9D7D2529BF((&V_0), L_51, NULL);
		// break;
		goto IL_01d3;
	}

IL_01cd:
	{
		// reader.Skip();
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_52 = ___reader0;
		NullCheck(L_52);
		VirtualActionInvoker0::Invoke(41 /* System.Void ES3Reader::Skip() */, L_52);
	}

IL_01d3:
	{
		// while((propertyName = reader.ReadPropertyName()) != null)
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_53 = ___reader0;
		NullCheck(L_53);
		String_t* L_54;
		L_54 = VirtualFuncInvoker0< String_t* >::Invoke(21 /* System.String ES3Reader::ReadPropertyName() */, L_53);
		String_t* L_55 = L_54;
		V_1 = L_55;
		if (L_55)
		{
			goto IL_000d;
		}
	}
	{
		// return instance;
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_56 = V_0;
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_57 = L_56;
		RuntimeObject* L_58 = Box(MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_il2cpp_TypeInfo_var, &L_57);
		return L_58;
	}
}
// System.Object ES3Types.ES3Type_MinMaxCurve::Read<UnityEngine.Color>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_MinMaxCurve_Read_TisColor_tD001788D726C3A7F1379BEED0260B9591F440C1F_m2D5F543D9051317B0F25805C30F4868EDF53B44F_gshared (ES3Type_MinMaxCurve_t1C147718750ACBECE5D2B7F545D2A434A3C5409B* __this, ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisAnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_m10F5F132336385185365E73EF668D8D369D3A4A1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisParticleSystemCurveMode_t8BE38B5D6B050709BAE31B5556CFC3DA69FC8405_m066E552CFA7510B509D2175EB72B2402EC615596_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mA86928BC888E342D2C2644535E3399952F5077ED_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_AnimationCurve_tF623128FF51FC3C48A6749619C4915CBE2995CA4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral227C22F51E4B6583CFC54387461605DDBBB00D14);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral27906925D50A15B990B586241F08C8ED14226340);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral36587A0761A180514C267B50EA888F89871F71DF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6C9DED8087C891AE33ACFFCE806DBFF63795F56F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral87E6319336195D789899F4791CCD5F2437BCC0B0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAF248E82BE9EBA1ADBF067429FAEE5A5B6E05A74);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB5831A880405F69C8EF7F43534BF4D880F2B9A12);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD4A11128F810D574390DA344F324014E964D1876);
		s_Il2CppMethodInitialized = true;
	}
	MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	uint32_t V_2 = 0;
	{
		// var instance = new UnityEngine.ParticleSystem.MinMaxCurve();
		il2cpp_codegen_initobj((&V_0), sizeof(MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23));
		goto IL_01d3;
	}

IL_000d:
	{
		String_t* L_0 = V_1;
		uint32_t L_1;
		L_1 = U3CPrivateImplementationDetailsU3E_ComputeStringHash_m6EA1F233618497AEFF8902A5EDFA24C74E2F2876(L_0, NULL);
		V_2 = L_1;
		uint32_t L_2 = V_2;
		if ((!(((uint32_t)L_2) <= ((uint32_t)((int32_t)-725866558)))))
		{
			goto IL_0054;
		}
	}
	{
		uint32_t L_3 = V_2;
		if ((!(((uint32_t)L_3) <= ((uint32_t)((int32_t)740975083)))))
		{
			goto IL_003c;
		}
	}
	{
		uint32_t L_4 = V_2;
		if ((((int32_t)L_4) == ((int32_t)((int32_t)110225957))))
		{
			goto IL_0105;
		}
	}
	{
		uint32_t L_5 = V_2;
		if ((((int32_t)L_5) == ((int32_t)((int32_t)740975083))))
		{
			goto IL_009c;
		}
	}
	{
		goto IL_01cd;
	}

IL_003c:
	{
		uint32_t L_6 = V_2;
		if ((((int32_t)L_6) == ((int32_t)((int32_t)-1724381676))))
		{
			goto IL_011a;
		}
	}
	{
		uint32_t L_7 = V_2;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)-725866558))))
		{
			goto IL_00b1;
		}
	}
	{
		goto IL_01cd;
	}

IL_0054:
	{
		uint32_t L_8 = V_2;
		if ((!(((uint32_t)L_8) <= ((uint32_t)((int32_t)-559473464)))))
		{
			goto IL_0074;
		}
	}
	{
		uint32_t L_9 = V_2;
		if ((((int32_t)L_9) == ((int32_t)((int32_t)-581632105))))
		{
			goto IL_00f0;
		}
	}
	{
		uint32_t L_10 = V_2;
		if ((((int32_t)L_10) == ((int32_t)((int32_t)-559473464))))
		{
			goto IL_00c6;
		}
	}
	{
		goto IL_01cd;
	}

IL_0074:
	{
		uint32_t L_11 = V_2;
		if ((((int32_t)L_11) == ((int32_t)((int32_t)-345465511))))
		{
			goto IL_00db;
		}
	}
	{
		uint32_t L_12 = V_2;
		if ((!(((uint32_t)L_12) == ((uint32_t)((int32_t)-328277998)))))
		{
			goto IL_01cd;
		}
	}
	{
		String_t* L_13 = V_1;
		bool L_14;
		L_14 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_13, _stringLiteralAF248E82BE9EBA1ADBF067429FAEE5A5B6E05A74, NULL);
		if (L_14)
		{
			goto IL_012f;
		}
	}
	{
		goto IL_01cd;
	}

IL_009c:
	{
		String_t* L_15 = V_1;
		bool L_16;
		L_16 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_15, _stringLiteral227C22F51E4B6583CFC54387461605DDBBB00D14, NULL);
		if (L_16)
		{
			goto IL_0141;
		}
	}
	{
		goto IL_01cd;
	}

IL_00b1:
	{
		String_t* L_17 = V_1;
		bool L_18;
		L_18 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_17, _stringLiteral27906925D50A15B990B586241F08C8ED14226340, NULL);
		if (L_18)
		{
			goto IL_0155;
		}
	}
	{
		goto IL_01cd;
	}

IL_00c6:
	{
		String_t* L_19 = V_1;
		bool L_20;
		L_20 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_19, _stringLiteralD4A11128F810D574390DA344F324014E964D1876, NULL);
		if (L_20)
		{
			goto IL_0169;
		}
	}
	{
		goto IL_01cd;
	}

IL_00db:
	{
		String_t* L_21 = V_1;
		bool L_22;
		L_22 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_21, _stringLiteralB5831A880405F69C8EF7F43534BF4D880F2B9A12, NULL);
		if (L_22)
		{
			goto IL_017d;
		}
	}
	{
		goto IL_01cd;
	}

IL_00f0:
	{
		String_t* L_23 = V_1;
		bool L_24;
		L_24 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_23, _stringLiteral36587A0761A180514C267B50EA888F89871F71DF, NULL);
		if (L_24)
		{
			goto IL_0191;
		}
	}
	{
		goto IL_01cd;
	}

IL_0105:
	{
		String_t* L_25 = V_1;
		bool L_26;
		L_26 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_25, _stringLiteral87E6319336195D789899F4791CCD5F2437BCC0B0, NULL);
		if (L_26)
		{
			goto IL_01a5;
		}
	}
	{
		goto IL_01cd;
	}

IL_011a:
	{
		String_t* L_27 = V_1;
		bool L_28;
		L_28 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_27, _stringLiteral6C9DED8087C891AE33ACFFCE806DBFF63795F56F, NULL);
		if (L_28)
		{
			goto IL_01b9;
		}
	}
	{
		goto IL_01cd;
	}

IL_012f:
	{
		// instance.mode = reader.Read<UnityEngine.ParticleSystemCurveMode>();
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_29 = ___reader0;
		NullCheck(L_29);
		int32_t L_30;
		L_30 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisParticleSystemCurveMode_t8BE38B5D6B050709BAE31B5556CFC3DA69FC8405_m066E552CFA7510B509D2175EB72B2402EC615596_RuntimeMethod_var, L_29);
		MinMaxCurve_set_mode_m6870C4CA0FE7AF1029F45040B827C9F0A6A80A86((&V_0), L_30, NULL);
		// break;
		goto IL_01d3;
	}

IL_0141:
	{
		// instance.curveMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_31 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_32 = ((ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_31);
		float L_33;
		L_33 = GenericVirtualFuncInvoker1< float, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mA86928BC888E342D2C2644535E3399952F5077ED_RuntimeMethod_var, L_31, L_32);
		MinMaxCurve_set_curveMultiplier_m9FCF7F21AECE399ACD9FEB9ADEEBD93FD12DDABC((&V_0), L_33, NULL);
		// break;
		goto IL_01d3;
	}

IL_0155:
	{
		// instance.curveMax = reader.Read<UnityEngine.AnimationCurve>(ES3Type_AnimationCurve.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_34 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_35 = ((ES3Type_AnimationCurve_tF623128FF51FC3C48A6749619C4915CBE2995CA4_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_AnimationCurve_tF623128FF51FC3C48A6749619C4915CBE2995CA4_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_34);
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_36;
		L_36 = GenericVirtualFuncInvoker1< AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354*, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisAnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_m10F5F132336385185365E73EF668D8D369D3A4A1_RuntimeMethod_var, L_34, L_35);
		MinMaxCurve_set_curveMax_m39B9E8AE4E62E874DA99AA7108C2C47C6CA333DF((&V_0), L_36, NULL);
		// break;
		goto IL_01d3;
	}

IL_0169:
	{
		// instance.curveMin = reader.Read<UnityEngine.AnimationCurve>(ES3Type_AnimationCurve.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_37 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_38 = ((ES3Type_AnimationCurve_tF623128FF51FC3C48A6749619C4915CBE2995CA4_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_AnimationCurve_tF623128FF51FC3C48A6749619C4915CBE2995CA4_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_37);
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_39;
		L_39 = GenericVirtualFuncInvoker1< AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354*, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisAnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_m10F5F132336385185365E73EF668D8D369D3A4A1_RuntimeMethod_var, L_37, L_38);
		MinMaxCurve_set_curveMin_m17ADE22B882B75CBE87836C85C477A05122D9E75((&V_0), L_39, NULL);
		// break;
		goto IL_01d3;
	}

IL_017d:
	{
		// instance.constantMax = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_40 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_41 = ((ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_40);
		float L_42;
		L_42 = GenericVirtualFuncInvoker1< float, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mA86928BC888E342D2C2644535E3399952F5077ED_RuntimeMethod_var, L_40, L_41);
		MinMaxCurve_set_constantMax_mDB7B011E5B1EA76429B2A1FFDE6C06E82D290DC1((&V_0), L_42, NULL);
		// break;
		goto IL_01d3;
	}

IL_0191:
	{
		// instance.constantMin = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_43 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_44 = ((ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_43);
		float L_45;
		L_45 = GenericVirtualFuncInvoker1< float, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mA86928BC888E342D2C2644535E3399952F5077ED_RuntimeMethod_var, L_43, L_44);
		MinMaxCurve_set_constantMin_mBF7CF2A9F167AD06C327EE6EA37BA427E1CE548C((&V_0), L_45, NULL);
		// break;
		goto IL_01d3;
	}

IL_01a5:
	{
		// instance.constant = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_46 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_47 = ((ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_46);
		float L_48;
		L_48 = GenericVirtualFuncInvoker1< float, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mA86928BC888E342D2C2644535E3399952F5077ED_RuntimeMethod_var, L_46, L_47);
		MinMaxCurve_set_constant_mB6E4F22F67D3ED641FEBB387351F17451BB6A897((&V_0), L_48, NULL);
		// break;
		goto IL_01d3;
	}

IL_01b9:
	{
		// instance.curve = reader.Read<UnityEngine.AnimationCurve>(ES3Type_AnimationCurve.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_49 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_50 = ((ES3Type_AnimationCurve_tF623128FF51FC3C48A6749619C4915CBE2995CA4_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_AnimationCurve_tF623128FF51FC3C48A6749619C4915CBE2995CA4_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_49);
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_51;
		L_51 = GenericVirtualFuncInvoker1< AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354*, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisAnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_m10F5F132336385185365E73EF668D8D369D3A4A1_RuntimeMethod_var, L_49, L_50);
		MinMaxCurve_set_curve_mC745A6526FBF122F96DA597997DFAB9D7D2529BF((&V_0), L_51, NULL);
		// break;
		goto IL_01d3;
	}

IL_01cd:
	{
		// reader.Skip();
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_52 = ___reader0;
		NullCheck(L_52);
		VirtualActionInvoker0::Invoke(41 /* System.Void ES3Reader::Skip() */, L_52);
	}

IL_01d3:
	{
		// while((propertyName = reader.ReadPropertyName()) != null)
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_53 = ___reader0;
		NullCheck(L_53);
		String_t* L_54;
		L_54 = VirtualFuncInvoker0< String_t* >::Invoke(21 /* System.String ES3Reader::ReadPropertyName() */, L_53);
		String_t* L_55 = L_54;
		V_1 = L_55;
		if (L_55)
		{
			goto IL_000d;
		}
	}
	{
		// return instance;
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_56 = V_0;
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_57 = L_56;
		RuntimeObject* L_58 = Box(MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_il2cpp_TypeInfo_var, &L_57);
		return L_58;
	}
}
// System.Object ES3Types.ES3Type_MinMaxCurve::Read<System.Int32>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_MinMaxCurve_Read_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mD6684E66CD929106E0D9FFC21190F94EC0C51763_gshared (ES3Type_MinMaxCurve_t1C147718750ACBECE5D2B7F545D2A434A3C5409B* __this, ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisAnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_m10F5F132336385185365E73EF668D8D369D3A4A1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisParticleSystemCurveMode_t8BE38B5D6B050709BAE31B5556CFC3DA69FC8405_m066E552CFA7510B509D2175EB72B2402EC615596_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mA86928BC888E342D2C2644535E3399952F5077ED_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_AnimationCurve_tF623128FF51FC3C48A6749619C4915CBE2995CA4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral227C22F51E4B6583CFC54387461605DDBBB00D14);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral27906925D50A15B990B586241F08C8ED14226340);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral36587A0761A180514C267B50EA888F89871F71DF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6C9DED8087C891AE33ACFFCE806DBFF63795F56F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral87E6319336195D789899F4791CCD5F2437BCC0B0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAF248E82BE9EBA1ADBF067429FAEE5A5B6E05A74);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB5831A880405F69C8EF7F43534BF4D880F2B9A12);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD4A11128F810D574390DA344F324014E964D1876);
		s_Il2CppMethodInitialized = true;
	}
	MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	uint32_t V_2 = 0;
	{
		// var instance = new UnityEngine.ParticleSystem.MinMaxCurve();
		il2cpp_codegen_initobj((&V_0), sizeof(MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23));
		goto IL_01d3;
	}

IL_000d:
	{
		String_t* L_0 = V_1;
		uint32_t L_1;
		L_1 = U3CPrivateImplementationDetailsU3E_ComputeStringHash_m6EA1F233618497AEFF8902A5EDFA24C74E2F2876(L_0, NULL);
		V_2 = L_1;
		uint32_t L_2 = V_2;
		if ((!(((uint32_t)L_2) <= ((uint32_t)((int32_t)-725866558)))))
		{
			goto IL_0054;
		}
	}
	{
		uint32_t L_3 = V_2;
		if ((!(((uint32_t)L_3) <= ((uint32_t)((int32_t)740975083)))))
		{
			goto IL_003c;
		}
	}
	{
		uint32_t L_4 = V_2;
		if ((((int32_t)L_4) == ((int32_t)((int32_t)110225957))))
		{
			goto IL_0105;
		}
	}
	{
		uint32_t L_5 = V_2;
		if ((((int32_t)L_5) == ((int32_t)((int32_t)740975083))))
		{
			goto IL_009c;
		}
	}
	{
		goto IL_01cd;
	}

IL_003c:
	{
		uint32_t L_6 = V_2;
		if ((((int32_t)L_6) == ((int32_t)((int32_t)-1724381676))))
		{
			goto IL_011a;
		}
	}
	{
		uint32_t L_7 = V_2;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)-725866558))))
		{
			goto IL_00b1;
		}
	}
	{
		goto IL_01cd;
	}

IL_0054:
	{
		uint32_t L_8 = V_2;
		if ((!(((uint32_t)L_8) <= ((uint32_t)((int32_t)-559473464)))))
		{
			goto IL_0074;
		}
	}
	{
		uint32_t L_9 = V_2;
		if ((((int32_t)L_9) == ((int32_t)((int32_t)-581632105))))
		{
			goto IL_00f0;
		}
	}
	{
		uint32_t L_10 = V_2;
		if ((((int32_t)L_10) == ((int32_t)((int32_t)-559473464))))
		{
			goto IL_00c6;
		}
	}
	{
		goto IL_01cd;
	}

IL_0074:
	{
		uint32_t L_11 = V_2;
		if ((((int32_t)L_11) == ((int32_t)((int32_t)-345465511))))
		{
			goto IL_00db;
		}
	}
	{
		uint32_t L_12 = V_2;
		if ((!(((uint32_t)L_12) == ((uint32_t)((int32_t)-328277998)))))
		{
			goto IL_01cd;
		}
	}
	{
		String_t* L_13 = V_1;
		bool L_14;
		L_14 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_13, _stringLiteralAF248E82BE9EBA1ADBF067429FAEE5A5B6E05A74, NULL);
		if (L_14)
		{
			goto IL_012f;
		}
	}
	{
		goto IL_01cd;
	}

IL_009c:
	{
		String_t* L_15 = V_1;
		bool L_16;
		L_16 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_15, _stringLiteral227C22F51E4B6583CFC54387461605DDBBB00D14, NULL);
		if (L_16)
		{
			goto IL_0141;
		}
	}
	{
		goto IL_01cd;
	}

IL_00b1:
	{
		String_t* L_17 = V_1;
		bool L_18;
		L_18 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_17, _stringLiteral27906925D50A15B990B586241F08C8ED14226340, NULL);
		if (L_18)
		{
			goto IL_0155;
		}
	}
	{
		goto IL_01cd;
	}

IL_00c6:
	{
		String_t* L_19 = V_1;
		bool L_20;
		L_20 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_19, _stringLiteralD4A11128F810D574390DA344F324014E964D1876, NULL);
		if (L_20)
		{
			goto IL_0169;
		}
	}
	{
		goto IL_01cd;
	}

IL_00db:
	{
		String_t* L_21 = V_1;
		bool L_22;
		L_22 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_21, _stringLiteralB5831A880405F69C8EF7F43534BF4D880F2B9A12, NULL);
		if (L_22)
		{
			goto IL_017d;
		}
	}
	{
		goto IL_01cd;
	}

IL_00f0:
	{
		String_t* L_23 = V_1;
		bool L_24;
		L_24 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_23, _stringLiteral36587A0761A180514C267B50EA888F89871F71DF, NULL);
		if (L_24)
		{
			goto IL_0191;
		}
	}
	{
		goto IL_01cd;
	}

IL_0105:
	{
		String_t* L_25 = V_1;
		bool L_26;
		L_26 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_25, _stringLiteral87E6319336195D789899F4791CCD5F2437BCC0B0, NULL);
		if (L_26)
		{
			goto IL_01a5;
		}
	}
	{
		goto IL_01cd;
	}

IL_011a:
	{
		String_t* L_27 = V_1;
		bool L_28;
		L_28 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_27, _stringLiteral6C9DED8087C891AE33ACFFCE806DBFF63795F56F, NULL);
		if (L_28)
		{
			goto IL_01b9;
		}
	}
	{
		goto IL_01cd;
	}

IL_012f:
	{
		// instance.mode = reader.Read<UnityEngine.ParticleSystemCurveMode>();
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_29 = ___reader0;
		NullCheck(L_29);
		int32_t L_30;
		L_30 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisParticleSystemCurveMode_t8BE38B5D6B050709BAE31B5556CFC3DA69FC8405_m066E552CFA7510B509D2175EB72B2402EC615596_RuntimeMethod_var, L_29);
		MinMaxCurve_set_mode_m6870C4CA0FE7AF1029F45040B827C9F0A6A80A86((&V_0), L_30, NULL);
		// break;
		goto IL_01d3;
	}

IL_0141:
	{
		// instance.curveMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_31 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_32 = ((ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_31);
		float L_33;
		L_33 = GenericVirtualFuncInvoker1< float, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mA86928BC888E342D2C2644535E3399952F5077ED_RuntimeMethod_var, L_31, L_32);
		MinMaxCurve_set_curveMultiplier_m9FCF7F21AECE399ACD9FEB9ADEEBD93FD12DDABC((&V_0), L_33, NULL);
		// break;
		goto IL_01d3;
	}

IL_0155:
	{
		// instance.curveMax = reader.Read<UnityEngine.AnimationCurve>(ES3Type_AnimationCurve.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_34 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_35 = ((ES3Type_AnimationCurve_tF623128FF51FC3C48A6749619C4915CBE2995CA4_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_AnimationCurve_tF623128FF51FC3C48A6749619C4915CBE2995CA4_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_34);
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_36;
		L_36 = GenericVirtualFuncInvoker1< AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354*, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisAnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_m10F5F132336385185365E73EF668D8D369D3A4A1_RuntimeMethod_var, L_34, L_35);
		MinMaxCurve_set_curveMax_m39B9E8AE4E62E874DA99AA7108C2C47C6CA333DF((&V_0), L_36, NULL);
		// break;
		goto IL_01d3;
	}

IL_0169:
	{
		// instance.curveMin = reader.Read<UnityEngine.AnimationCurve>(ES3Type_AnimationCurve.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_37 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_38 = ((ES3Type_AnimationCurve_tF623128FF51FC3C48A6749619C4915CBE2995CA4_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_AnimationCurve_tF623128FF51FC3C48A6749619C4915CBE2995CA4_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_37);
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_39;
		L_39 = GenericVirtualFuncInvoker1< AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354*, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisAnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_m10F5F132336385185365E73EF668D8D369D3A4A1_RuntimeMethod_var, L_37, L_38);
		MinMaxCurve_set_curveMin_m17ADE22B882B75CBE87836C85C477A05122D9E75((&V_0), L_39, NULL);
		// break;
		goto IL_01d3;
	}

IL_017d:
	{
		// instance.constantMax = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_40 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_41 = ((ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_40);
		float L_42;
		L_42 = GenericVirtualFuncInvoker1< float, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mA86928BC888E342D2C2644535E3399952F5077ED_RuntimeMethod_var, L_40, L_41);
		MinMaxCurve_set_constantMax_mDB7B011E5B1EA76429B2A1FFDE6C06E82D290DC1((&V_0), L_42, NULL);
		// break;
		goto IL_01d3;
	}

IL_0191:
	{
		// instance.constantMin = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_43 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_44 = ((ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_43);
		float L_45;
		L_45 = GenericVirtualFuncInvoker1< float, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mA86928BC888E342D2C2644535E3399952F5077ED_RuntimeMethod_var, L_43, L_44);
		MinMaxCurve_set_constantMin_mBF7CF2A9F167AD06C327EE6EA37BA427E1CE548C((&V_0), L_45, NULL);
		// break;
		goto IL_01d3;
	}

IL_01a5:
	{
		// instance.constant = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_46 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_47 = ((ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_46);
		float L_48;
		L_48 = GenericVirtualFuncInvoker1< float, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mA86928BC888E342D2C2644535E3399952F5077ED_RuntimeMethod_var, L_46, L_47);
		MinMaxCurve_set_constant_mB6E4F22F67D3ED641FEBB387351F17451BB6A897((&V_0), L_48, NULL);
		// break;
		goto IL_01d3;
	}

IL_01b9:
	{
		// instance.curve = reader.Read<UnityEngine.AnimationCurve>(ES3Type_AnimationCurve.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_49 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_50 = ((ES3Type_AnimationCurve_tF623128FF51FC3C48A6749619C4915CBE2995CA4_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_AnimationCurve_tF623128FF51FC3C48A6749619C4915CBE2995CA4_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_49);
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_51;
		L_51 = GenericVirtualFuncInvoker1< AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354*, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisAnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_m10F5F132336385185365E73EF668D8D369D3A4A1_RuntimeMethod_var, L_49, L_50);
		MinMaxCurve_set_curve_mC745A6526FBF122F96DA597997DFAB9D7D2529BF((&V_0), L_51, NULL);
		// break;
		goto IL_01d3;
	}

IL_01cd:
	{
		// reader.Skip();
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_52 = ___reader0;
		NullCheck(L_52);
		VirtualActionInvoker0::Invoke(41 /* System.Void ES3Reader::Skip() */, L_52);
	}

IL_01d3:
	{
		// while((propertyName = reader.ReadPropertyName()) != null)
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_53 = ___reader0;
		NullCheck(L_53);
		String_t* L_54;
		L_54 = VirtualFuncInvoker0< String_t* >::Invoke(21 /* System.String ES3Reader::ReadPropertyName() */, L_53);
		String_t* L_55 = L_54;
		V_1 = L_55;
		if (L_55)
		{
			goto IL_000d;
		}
	}
	{
		// return instance;
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_56 = V_0;
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_57 = L_56;
		RuntimeObject* L_58 = Box(MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_il2cpp_TypeInfo_var, &L_57);
		return L_58;
	}
}
// System.Object ES3Types.ES3Type_MinMaxCurve::Read<System.Int32Enum>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_MinMaxCurve_Read_TisInt32Enum_tCBAC8BA2BFF3A845FA599F303093BBBA374B6F0C_mF2A03DD50C0FC62CCB8028A498F2DC4597572FD6_gshared (ES3Type_MinMaxCurve_t1C147718750ACBECE5D2B7F545D2A434A3C5409B* __this, ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisAnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_m10F5F132336385185365E73EF668D8D369D3A4A1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisParticleSystemCurveMode_t8BE38B5D6B050709BAE31B5556CFC3DA69FC8405_m066E552CFA7510B509D2175EB72B2402EC615596_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mA86928BC888E342D2C2644535E3399952F5077ED_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_AnimationCurve_tF623128FF51FC3C48A6749619C4915CBE2995CA4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral227C22F51E4B6583CFC54387461605DDBBB00D14);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral27906925D50A15B990B586241F08C8ED14226340);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral36587A0761A180514C267B50EA888F89871F71DF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6C9DED8087C891AE33ACFFCE806DBFF63795F56F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral87E6319336195D789899F4791CCD5F2437BCC0B0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAF248E82BE9EBA1ADBF067429FAEE5A5B6E05A74);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB5831A880405F69C8EF7F43534BF4D880F2B9A12);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD4A11128F810D574390DA344F324014E964D1876);
		s_Il2CppMethodInitialized = true;
	}
	MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	uint32_t V_2 = 0;
	{
		// var instance = new UnityEngine.ParticleSystem.MinMaxCurve();
		il2cpp_codegen_initobj((&V_0), sizeof(MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23));
		goto IL_01d3;
	}

IL_000d:
	{
		String_t* L_0 = V_1;
		uint32_t L_1;
		L_1 = U3CPrivateImplementationDetailsU3E_ComputeStringHash_m6EA1F233618497AEFF8902A5EDFA24C74E2F2876(L_0, NULL);
		V_2 = L_1;
		uint32_t L_2 = V_2;
		if ((!(((uint32_t)L_2) <= ((uint32_t)((int32_t)-725866558)))))
		{
			goto IL_0054;
		}
	}
	{
		uint32_t L_3 = V_2;
		if ((!(((uint32_t)L_3) <= ((uint32_t)((int32_t)740975083)))))
		{
			goto IL_003c;
		}
	}
	{
		uint32_t L_4 = V_2;
		if ((((int32_t)L_4) == ((int32_t)((int32_t)110225957))))
		{
			goto IL_0105;
		}
	}
	{
		uint32_t L_5 = V_2;
		if ((((int32_t)L_5) == ((int32_t)((int32_t)740975083))))
		{
			goto IL_009c;
		}
	}
	{
		goto IL_01cd;
	}

IL_003c:
	{
		uint32_t L_6 = V_2;
		if ((((int32_t)L_6) == ((int32_t)((int32_t)-1724381676))))
		{
			goto IL_011a;
		}
	}
	{
		uint32_t L_7 = V_2;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)-725866558))))
		{
			goto IL_00b1;
		}
	}
	{
		goto IL_01cd;
	}

IL_0054:
	{
		uint32_t L_8 = V_2;
		if ((!(((uint32_t)L_8) <= ((uint32_t)((int32_t)-559473464)))))
		{
			goto IL_0074;
		}
	}
	{
		uint32_t L_9 = V_2;
		if ((((int32_t)L_9) == ((int32_t)((int32_t)-581632105))))
		{
			goto IL_00f0;
		}
	}
	{
		uint32_t L_10 = V_2;
		if ((((int32_t)L_10) == ((int32_t)((int32_t)-559473464))))
		{
			goto IL_00c6;
		}
	}
	{
		goto IL_01cd;
	}

IL_0074:
	{
		uint32_t L_11 = V_2;
		if ((((int32_t)L_11) == ((int32_t)((int32_t)-345465511))))
		{
			goto IL_00db;
		}
	}
	{
		uint32_t L_12 = V_2;
		if ((!(((uint32_t)L_12) == ((uint32_t)((int32_t)-328277998)))))
		{
			goto IL_01cd;
		}
	}
	{
		String_t* L_13 = V_1;
		bool L_14;
		L_14 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_13, _stringLiteralAF248E82BE9EBA1ADBF067429FAEE5A5B6E05A74, NULL);
		if (L_14)
		{
			goto IL_012f;
		}
	}
	{
		goto IL_01cd;
	}

IL_009c:
	{
		String_t* L_15 = V_1;
		bool L_16;
		L_16 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_15, _stringLiteral227C22F51E4B6583CFC54387461605DDBBB00D14, NULL);
		if (L_16)
		{
			goto IL_0141;
		}
	}
	{
		goto IL_01cd;
	}

IL_00b1:
	{
		String_t* L_17 = V_1;
		bool L_18;
		L_18 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_17, _stringLiteral27906925D50A15B990B586241F08C8ED14226340, NULL);
		if (L_18)
		{
			goto IL_0155;
		}
	}
	{
		goto IL_01cd;
	}

IL_00c6:
	{
		String_t* L_19 = V_1;
		bool L_20;
		L_20 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_19, _stringLiteralD4A11128F810D574390DA344F324014E964D1876, NULL);
		if (L_20)
		{
			goto IL_0169;
		}
	}
	{
		goto IL_01cd;
	}

IL_00db:
	{
		String_t* L_21 = V_1;
		bool L_22;
		L_22 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_21, _stringLiteralB5831A880405F69C8EF7F43534BF4D880F2B9A12, NULL);
		if (L_22)
		{
			goto IL_017d;
		}
	}
	{
		goto IL_01cd;
	}

IL_00f0:
	{
		String_t* L_23 = V_1;
		bool L_24;
		L_24 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_23, _stringLiteral36587A0761A180514C267B50EA888F89871F71DF, NULL);
		if (L_24)
		{
			goto IL_0191;
		}
	}
	{
		goto IL_01cd;
	}

IL_0105:
	{
		String_t* L_25 = V_1;
		bool L_26;
		L_26 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_25, _stringLiteral87E6319336195D789899F4791CCD5F2437BCC0B0, NULL);
		if (L_26)
		{
			goto IL_01a5;
		}
	}
	{
		goto IL_01cd;
	}

IL_011a:
	{
		String_t* L_27 = V_1;
		bool L_28;
		L_28 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_27, _stringLiteral6C9DED8087C891AE33ACFFCE806DBFF63795F56F, NULL);
		if (L_28)
		{
			goto IL_01b9;
		}
	}
	{
		goto IL_01cd;
	}

IL_012f:
	{
		// instance.mode = reader.Read<UnityEngine.ParticleSystemCurveMode>();
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_29 = ___reader0;
		NullCheck(L_29);
		int32_t L_30;
		L_30 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisParticleSystemCurveMode_t8BE38B5D6B050709BAE31B5556CFC3DA69FC8405_m066E552CFA7510B509D2175EB72B2402EC615596_RuntimeMethod_var, L_29);
		MinMaxCurve_set_mode_m6870C4CA0FE7AF1029F45040B827C9F0A6A80A86((&V_0), L_30, NULL);
		// break;
		goto IL_01d3;
	}

IL_0141:
	{
		// instance.curveMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_31 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_32 = ((ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_31);
		float L_33;
		L_33 = GenericVirtualFuncInvoker1< float, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mA86928BC888E342D2C2644535E3399952F5077ED_RuntimeMethod_var, L_31, L_32);
		MinMaxCurve_set_curveMultiplier_m9FCF7F21AECE399ACD9FEB9ADEEBD93FD12DDABC((&V_0), L_33, NULL);
		// break;
		goto IL_01d3;
	}

IL_0155:
	{
		// instance.curveMax = reader.Read<UnityEngine.AnimationCurve>(ES3Type_AnimationCurve.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_34 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_35 = ((ES3Type_AnimationCurve_tF623128FF51FC3C48A6749619C4915CBE2995CA4_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_AnimationCurve_tF623128FF51FC3C48A6749619C4915CBE2995CA4_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_34);
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_36;
		L_36 = GenericVirtualFuncInvoker1< AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354*, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisAnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_m10F5F132336385185365E73EF668D8D369D3A4A1_RuntimeMethod_var, L_34, L_35);
		MinMaxCurve_set_curveMax_m39B9E8AE4E62E874DA99AA7108C2C47C6CA333DF((&V_0), L_36, NULL);
		// break;
		goto IL_01d3;
	}

IL_0169:
	{
		// instance.curveMin = reader.Read<UnityEngine.AnimationCurve>(ES3Type_AnimationCurve.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_37 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_38 = ((ES3Type_AnimationCurve_tF623128FF51FC3C48A6749619C4915CBE2995CA4_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_AnimationCurve_tF623128FF51FC3C48A6749619C4915CBE2995CA4_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_37);
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_39;
		L_39 = GenericVirtualFuncInvoker1< AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354*, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisAnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_m10F5F132336385185365E73EF668D8D369D3A4A1_RuntimeMethod_var, L_37, L_38);
		MinMaxCurve_set_curveMin_m17ADE22B882B75CBE87836C85C477A05122D9E75((&V_0), L_39, NULL);
		// break;
		goto IL_01d3;
	}

IL_017d:
	{
		// instance.constantMax = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_40 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_41 = ((ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_40);
		float L_42;
		L_42 = GenericVirtualFuncInvoker1< float, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mA86928BC888E342D2C2644535E3399952F5077ED_RuntimeMethod_var, L_40, L_41);
		MinMaxCurve_set_constantMax_mDB7B011E5B1EA76429B2A1FFDE6C06E82D290DC1((&V_0), L_42, NULL);
		// break;
		goto IL_01d3;
	}

IL_0191:
	{
		// instance.constantMin = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_43 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_44 = ((ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_43);
		float L_45;
		L_45 = GenericVirtualFuncInvoker1< float, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mA86928BC888E342D2C2644535E3399952F5077ED_RuntimeMethod_var, L_43, L_44);
		MinMaxCurve_set_constantMin_mBF7CF2A9F167AD06C327EE6EA37BA427E1CE548C((&V_0), L_45, NULL);
		// break;
		goto IL_01d3;
	}

IL_01a5:
	{
		// instance.constant = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_46 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_47 = ((ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_46);
		float L_48;
		L_48 = GenericVirtualFuncInvoker1< float, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mA86928BC888E342D2C2644535E3399952F5077ED_RuntimeMethod_var, L_46, L_47);
		MinMaxCurve_set_constant_mB6E4F22F67D3ED641FEBB387351F17451BB6A897((&V_0), L_48, NULL);
		// break;
		goto IL_01d3;
	}

IL_01b9:
	{
		// instance.curve = reader.Read<UnityEngine.AnimationCurve>(ES3Type_AnimationCurve.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_49 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_50 = ((ES3Type_AnimationCurve_tF623128FF51FC3C48A6749619C4915CBE2995CA4_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_AnimationCurve_tF623128FF51FC3C48A6749619C4915CBE2995CA4_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_49);
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_51;
		L_51 = GenericVirtualFuncInvoker1< AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354*, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisAnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_m10F5F132336385185365E73EF668D8D369D3A4A1_RuntimeMethod_var, L_49, L_50);
		MinMaxCurve_set_curve_mC745A6526FBF122F96DA597997DFAB9D7D2529BF((&V_0), L_51, NULL);
		// break;
		goto IL_01d3;
	}

IL_01cd:
	{
		// reader.Skip();
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_52 = ___reader0;
		NullCheck(L_52);
		VirtualActionInvoker0::Invoke(41 /* System.Void ES3Reader::Skip() */, L_52);
	}

IL_01d3:
	{
		// while((propertyName = reader.ReadPropertyName()) != null)
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_53 = ___reader0;
		NullCheck(L_53);
		String_t* L_54;
		L_54 = VirtualFuncInvoker0< String_t* >::Invoke(21 /* System.String ES3Reader::ReadPropertyName() */, L_53);
		String_t* L_55 = L_54;
		V_1 = L_55;
		if (L_55)
		{
			goto IL_000d;
		}
	}
	{
		// return instance;
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_56 = V_0;
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_57 = L_56;
		RuntimeObject* L_58 = Box(MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_il2cpp_TypeInfo_var, &L_57);
		return L_58;
	}
}
// System.Object ES3Types.ES3Type_MinMaxCurve::Read<System.Int64>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_MinMaxCurve_Read_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_m2476C09F5A8A11E264556B82DCDE9BBAA60F46D2_gshared (ES3Type_MinMaxCurve_t1C147718750ACBECE5D2B7F545D2A434A3C5409B* __this, ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisAnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_m10F5F132336385185365E73EF668D8D369D3A4A1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisParticleSystemCurveMode_t8BE38B5D6B050709BAE31B5556CFC3DA69FC8405_m066E552CFA7510B509D2175EB72B2402EC615596_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mA86928BC888E342D2C2644535E3399952F5077ED_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_AnimationCurve_tF623128FF51FC3C48A6749619C4915CBE2995CA4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral227C22F51E4B6583CFC54387461605DDBBB00D14);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral27906925D50A15B990B586241F08C8ED14226340);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral36587A0761A180514C267B50EA888F89871F71DF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6C9DED8087C891AE33ACFFCE806DBFF63795F56F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral87E6319336195D789899F4791CCD5F2437BCC0B0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAF248E82BE9EBA1ADBF067429FAEE5A5B6E05A74);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB5831A880405F69C8EF7F43534BF4D880F2B9A12);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD4A11128F810D574390DA344F324014E964D1876);
		s_Il2CppMethodInitialized = true;
	}
	MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	uint32_t V_2 = 0;
	{
		// var instance = new UnityEngine.ParticleSystem.MinMaxCurve();
		il2cpp_codegen_initobj((&V_0), sizeof(MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23));
		goto IL_01d3;
	}

IL_000d:
	{
		String_t* L_0 = V_1;
		uint32_t L_1;
		L_1 = U3CPrivateImplementationDetailsU3E_ComputeStringHash_m6EA1F233618497AEFF8902A5EDFA24C74E2F2876(L_0, NULL);
		V_2 = L_1;
		uint32_t L_2 = V_2;
		if ((!(((uint32_t)L_2) <= ((uint32_t)((int32_t)-725866558)))))
		{
			goto IL_0054;
		}
	}
	{
		uint32_t L_3 = V_2;
		if ((!(((uint32_t)L_3) <= ((uint32_t)((int32_t)740975083)))))
		{
			goto IL_003c;
		}
	}
	{
		uint32_t L_4 = V_2;
		if ((((int32_t)L_4) == ((int32_t)((int32_t)110225957))))
		{
			goto IL_0105;
		}
	}
	{
		uint32_t L_5 = V_2;
		if ((((int32_t)L_5) == ((int32_t)((int32_t)740975083))))
		{
			goto IL_009c;
		}
	}
	{
		goto IL_01cd;
	}

IL_003c:
	{
		uint32_t L_6 = V_2;
		if ((((int32_t)L_6) == ((int32_t)((int32_t)-1724381676))))
		{
			goto IL_011a;
		}
	}
	{
		uint32_t L_7 = V_2;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)-725866558))))
		{
			goto IL_00b1;
		}
	}
	{
		goto IL_01cd;
	}

IL_0054:
	{
		uint32_t L_8 = V_2;
		if ((!(((uint32_t)L_8) <= ((uint32_t)((int32_t)-559473464)))))
		{
			goto IL_0074;
		}
	}
	{
		uint32_t L_9 = V_2;
		if ((((int32_t)L_9) == ((int32_t)((int32_t)-581632105))))
		{
			goto IL_00f0;
		}
	}
	{
		uint32_t L_10 = V_2;
		if ((((int32_t)L_10) == ((int32_t)((int32_t)-559473464))))
		{
			goto IL_00c6;
		}
	}
	{
		goto IL_01cd;
	}

IL_0074:
	{
		uint32_t L_11 = V_2;
		if ((((int32_t)L_11) == ((int32_t)((int32_t)-345465511))))
		{
			goto IL_00db;
		}
	}
	{
		uint32_t L_12 = V_2;
		if ((!(((uint32_t)L_12) == ((uint32_t)((int32_t)-328277998)))))
		{
			goto IL_01cd;
		}
	}
	{
		String_t* L_13 = V_1;
		bool L_14;
		L_14 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_13, _stringLiteralAF248E82BE9EBA1ADBF067429FAEE5A5B6E05A74, NULL);
		if (L_14)
		{
			goto IL_012f;
		}
	}
	{
		goto IL_01cd;
	}

IL_009c:
	{
		String_t* L_15 = V_1;
		bool L_16;
		L_16 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_15, _stringLiteral227C22F51E4B6583CFC54387461605DDBBB00D14, NULL);
		if (L_16)
		{
			goto IL_0141;
		}
	}
	{
		goto IL_01cd;
	}

IL_00b1:
	{
		String_t* L_17 = V_1;
		bool L_18;
		L_18 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_17, _stringLiteral27906925D50A15B990B586241F08C8ED14226340, NULL);
		if (L_18)
		{
			goto IL_0155;
		}
	}
	{
		goto IL_01cd;
	}

IL_00c6:
	{
		String_t* L_19 = V_1;
		bool L_20;
		L_20 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_19, _stringLiteralD4A11128F810D574390DA344F324014E964D1876, NULL);
		if (L_20)
		{
			goto IL_0169;
		}
	}
	{
		goto IL_01cd;
	}

IL_00db:
	{
		String_t* L_21 = V_1;
		bool L_22;
		L_22 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_21, _stringLiteralB5831A880405F69C8EF7F43534BF4D880F2B9A12, NULL);
		if (L_22)
		{
			goto IL_017d;
		}
	}
	{
		goto IL_01cd;
	}

IL_00f0:
	{
		String_t* L_23 = V_1;
		bool L_24;
		L_24 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_23, _stringLiteral36587A0761A180514C267B50EA888F89871F71DF, NULL);
		if (L_24)
		{
			goto IL_0191;
		}
	}
	{
		goto IL_01cd;
	}

IL_0105:
	{
		String_t* L_25 = V_1;
		bool L_26;
		L_26 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_25, _stringLiteral87E6319336195D789899F4791CCD5F2437BCC0B0, NULL);
		if (L_26)
		{
			goto IL_01a5;
		}
	}
	{
		goto IL_01cd;
	}

IL_011a:
	{
		String_t* L_27 = V_1;
		bool L_28;
		L_28 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_27, _stringLiteral6C9DED8087C891AE33ACFFCE806DBFF63795F56F, NULL);
		if (L_28)
		{
			goto IL_01b9;
		}
	}
	{
		goto IL_01cd;
	}

IL_012f:
	{
		// instance.mode = reader.Read<UnityEngine.ParticleSystemCurveMode>();
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_29 = ___reader0;
		NullCheck(L_29);
		int32_t L_30;
		L_30 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisParticleSystemCurveMode_t8BE38B5D6B050709BAE31B5556CFC3DA69FC8405_m066E552CFA7510B509D2175EB72B2402EC615596_RuntimeMethod_var, L_29);
		MinMaxCurve_set_mode_m6870C4CA0FE7AF1029F45040B827C9F0A6A80A86((&V_0), L_30, NULL);
		// break;
		goto IL_01d3;
	}

IL_0141:
	{
		// instance.curveMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_31 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_32 = ((ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_31);
		float L_33;
		L_33 = GenericVirtualFuncInvoker1< float, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mA86928BC888E342D2C2644535E3399952F5077ED_RuntimeMethod_var, L_31, L_32);
		MinMaxCurve_set_curveMultiplier_m9FCF7F21AECE399ACD9FEB9ADEEBD93FD12DDABC((&V_0), L_33, NULL);
		// break;
		goto IL_01d3;
	}

IL_0155:
	{
		// instance.curveMax = reader.Read<UnityEngine.AnimationCurve>(ES3Type_AnimationCurve.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_34 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_35 = ((ES3Type_AnimationCurve_tF623128FF51FC3C48A6749619C4915CBE2995CA4_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_AnimationCurve_tF623128FF51FC3C48A6749619C4915CBE2995CA4_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_34);
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_36;
		L_36 = GenericVirtualFuncInvoker1< AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354*, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisAnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_m10F5F132336385185365E73EF668D8D369D3A4A1_RuntimeMethod_var, L_34, L_35);
		MinMaxCurve_set_curveMax_m39B9E8AE4E62E874DA99AA7108C2C47C6CA333DF((&V_0), L_36, NULL);
		// break;
		goto IL_01d3;
	}

IL_0169:
	{
		// instance.curveMin = reader.Read<UnityEngine.AnimationCurve>(ES3Type_AnimationCurve.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_37 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_38 = ((ES3Type_AnimationCurve_tF623128FF51FC3C48A6749619C4915CBE2995CA4_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_AnimationCurve_tF623128FF51FC3C48A6749619C4915CBE2995CA4_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_37);
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_39;
		L_39 = GenericVirtualFuncInvoker1< AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354*, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisAnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_m10F5F132336385185365E73EF668D8D369D3A4A1_RuntimeMethod_var, L_37, L_38);
		MinMaxCurve_set_curveMin_m17ADE22B882B75CBE87836C85C477A05122D9E75((&V_0), L_39, NULL);
		// break;
		goto IL_01d3;
	}

IL_017d:
	{
		// instance.constantMax = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_40 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_41 = ((ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_40);
		float L_42;
		L_42 = GenericVirtualFuncInvoker1< float, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mA86928BC888E342D2C2644535E3399952F5077ED_RuntimeMethod_var, L_40, L_41);
		MinMaxCurve_set_constantMax_mDB7B011E5B1EA76429B2A1FFDE6C06E82D290DC1((&V_0), L_42, NULL);
		// break;
		goto IL_01d3;
	}

IL_0191:
	{
		// instance.constantMin = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_43 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_44 = ((ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_43);
		float L_45;
		L_45 = GenericVirtualFuncInvoker1< float, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mA86928BC888E342D2C2644535E3399952F5077ED_RuntimeMethod_var, L_43, L_44);
		MinMaxCurve_set_constantMin_mBF7CF2A9F167AD06C327EE6EA37BA427E1CE548C((&V_0), L_45, NULL);
		// break;
		goto IL_01d3;
	}

IL_01a5:
	{
		// instance.constant = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_46 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_47 = ((ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_46);
		float L_48;
		L_48 = GenericVirtualFuncInvoker1< float, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mA86928BC888E342D2C2644535E3399952F5077ED_RuntimeMethod_var, L_46, L_47);
		MinMaxCurve_set_constant_mB6E4F22F67D3ED641FEBB387351F17451BB6A897((&V_0), L_48, NULL);
		// break;
		goto IL_01d3;
	}

IL_01b9:
	{
		// instance.curve = reader.Read<UnityEngine.AnimationCurve>(ES3Type_AnimationCurve.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_49 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_50 = ((ES3Type_AnimationCurve_tF623128FF51FC3C48A6749619C4915CBE2995CA4_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_AnimationCurve_tF623128FF51FC3C48A6749619C4915CBE2995CA4_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_49);
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_51;
		L_51 = GenericVirtualFuncInvoker1< AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354*, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisAnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_m10F5F132336385185365E73EF668D8D369D3A4A1_RuntimeMethod_var, L_49, L_50);
		MinMaxCurve_set_curve_mC745A6526FBF122F96DA597997DFAB9D7D2529BF((&V_0), L_51, NULL);
		// break;
		goto IL_01d3;
	}

IL_01cd:
	{
		// reader.Skip();
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_52 = ___reader0;
		NullCheck(L_52);
		VirtualActionInvoker0::Invoke(41 /* System.Void ES3Reader::Skip() */, L_52);
	}

IL_01d3:
	{
		// while((propertyName = reader.ReadPropertyName()) != null)
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_53 = ___reader0;
		NullCheck(L_53);
		String_t* L_54;
		L_54 = VirtualFuncInvoker0< String_t* >::Invoke(21 /* System.String ES3Reader::ReadPropertyName() */, L_53);
		String_t* L_55 = L_54;
		V_1 = L_55;
		if (L_55)
		{
			goto IL_000d;
		}
	}
	{
		// return instance;
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_56 = V_0;
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_57 = L_56;
		RuntimeObject* L_58 = Box(MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_il2cpp_TypeInfo_var, &L_57);
		return L_58;
	}
}
// System.Object ES3Types.ES3Type_MinMaxCurve::Read<UnityEngine.LayerMask>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_MinMaxCurve_Read_TisLayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB_mAF8BEF8F1731B064B7B77D3E3335C8EEC6548BFC_gshared (ES3Type_MinMaxCurve_t1C147718750ACBECE5D2B7F545D2A434A3C5409B* __this, ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisAnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_m10F5F132336385185365E73EF668D8D369D3A4A1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisParticleSystemCurveMode_t8BE38B5D6B050709BAE31B5556CFC3DA69FC8405_m066E552CFA7510B509D2175EB72B2402EC615596_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mA86928BC888E342D2C2644535E3399952F5077ED_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_AnimationCurve_tF623128FF51FC3C48A6749619C4915CBE2995CA4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral227C22F51E4B6583CFC54387461605DDBBB00D14);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral27906925D50A15B990B586241F08C8ED14226340);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral36587A0761A180514C267B50EA888F89871F71DF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6C9DED8087C891AE33ACFFCE806DBFF63795F56F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral87E6319336195D789899F4791CCD5F2437BCC0B0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAF248E82BE9EBA1ADBF067429FAEE5A5B6E05A74);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB5831A880405F69C8EF7F43534BF4D880F2B9A12);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD4A11128F810D574390DA344F324014E964D1876);
		s_Il2CppMethodInitialized = true;
	}
	MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	uint32_t V_2 = 0;
	{
		// var instance = new UnityEngine.ParticleSystem.MinMaxCurve();
		il2cpp_codegen_initobj((&V_0), sizeof(MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23));
		goto IL_01d3;
	}

IL_000d:
	{
		String_t* L_0 = V_1;
		uint32_t L_1;
		L_1 = U3CPrivateImplementationDetailsU3E_ComputeStringHash_m6EA1F233618497AEFF8902A5EDFA24C74E2F2876(L_0, NULL);
		V_2 = L_1;
		uint32_t L_2 = V_2;
		if ((!(((uint32_t)L_2) <= ((uint32_t)((int32_t)-725866558)))))
		{
			goto IL_0054;
		}
	}
	{
		uint32_t L_3 = V_2;
		if ((!(((uint32_t)L_3) <= ((uint32_t)((int32_t)740975083)))))
		{
			goto IL_003c;
		}
	}
	{
		uint32_t L_4 = V_2;
		if ((((int32_t)L_4) == ((int32_t)((int32_t)110225957))))
		{
			goto IL_0105;
		}
	}
	{
		uint32_t L_5 = V_2;
		if ((((int32_t)L_5) == ((int32_t)((int32_t)740975083))))
		{
			goto IL_009c;
		}
	}
	{
		goto IL_01cd;
	}

IL_003c:
	{
		uint32_t L_6 = V_2;
		if ((((int32_t)L_6) == ((int32_t)((int32_t)-1724381676))))
		{
			goto IL_011a;
		}
	}
	{
		uint32_t L_7 = V_2;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)-725866558))))
		{
			goto IL_00b1;
		}
	}
	{
		goto IL_01cd;
	}

IL_0054:
	{
		uint32_t L_8 = V_2;
		if ((!(((uint32_t)L_8) <= ((uint32_t)((int32_t)-559473464)))))
		{
			goto IL_0074;
		}
	}
	{
		uint32_t L_9 = V_2;
		if ((((int32_t)L_9) == ((int32_t)((int32_t)-581632105))))
		{
			goto IL_00f0;
		}
	}
	{
		uint32_t L_10 = V_2;
		if ((((int32_t)L_10) == ((int32_t)((int32_t)-559473464))))
		{
			goto IL_00c6;
		}
	}
	{
		goto IL_01cd;
	}

IL_0074:
	{
		uint32_t L_11 = V_2;
		if ((((int32_t)L_11) == ((int32_t)((int32_t)-345465511))))
		{
			goto IL_00db;
		}
	}
	{
		uint32_t L_12 = V_2;
		if ((!(((uint32_t)L_12) == ((uint32_t)((int32_t)-328277998)))))
		{
			goto IL_01cd;
		}
	}
	{
		String_t* L_13 = V_1;
		bool L_14;
		L_14 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_13, _stringLiteralAF248E82BE9EBA1ADBF067429FAEE5A5B6E05A74, NULL);
		if (L_14)
		{
			goto IL_012f;
		}
	}
	{
		goto IL_01cd;
	}

IL_009c:
	{
		String_t* L_15 = V_1;
		bool L_16;
		L_16 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_15, _stringLiteral227C22F51E4B6583CFC54387461605DDBBB00D14, NULL);
		if (L_16)
		{
			goto IL_0141;
		}
	}
	{
		goto IL_01cd;
	}

IL_00b1:
	{
		String_t* L_17 = V_1;
		bool L_18;
		L_18 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_17, _stringLiteral27906925D50A15B990B586241F08C8ED14226340, NULL);
		if (L_18)
		{
			goto IL_0155;
		}
	}
	{
		goto IL_01cd;
	}

IL_00c6:
	{
		String_t* L_19 = V_1;
		bool L_20;
		L_20 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_19, _stringLiteralD4A11128F810D574390DA344F324014E964D1876, NULL);
		if (L_20)
		{
			goto IL_0169;
		}
	}
	{
		goto IL_01cd;
	}

IL_00db:
	{
		String_t* L_21 = V_1;
		bool L_22;
		L_22 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_21, _stringLiteralB5831A880405F69C8EF7F43534BF4D880F2B9A12, NULL);
		if (L_22)
		{
			goto IL_017d;
		}
	}
	{
		goto IL_01cd;
	}

IL_00f0:
	{
		String_t* L_23 = V_1;
		bool L_24;
		L_24 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_23, _stringLiteral36587A0761A180514C267B50EA888F89871F71DF, NULL);
		if (L_24)
		{
			goto IL_0191;
		}
	}
	{
		goto IL_01cd;
	}

IL_0105:
	{
		String_t* L_25 = V_1;
		bool L_26;
		L_26 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_25, _stringLiteral87E6319336195D789899F4791CCD5F2437BCC0B0, NULL);
		if (L_26)
		{
			goto IL_01a5;
		}
	}
	{
		goto IL_01cd;
	}

IL_011a:
	{
		String_t* L_27 = V_1;
		bool L_28;
		L_28 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_27, _stringLiteral6C9DED8087C891AE33ACFFCE806DBFF63795F56F, NULL);
		if (L_28)
		{
			goto IL_01b9;
		}
	}
	{
		goto IL_01cd;
	}

IL_012f:
	{
		// instance.mode = reader.Read<UnityEngine.ParticleSystemCurveMode>();
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_29 = ___reader0;
		NullCheck(L_29);
		int32_t L_30;
		L_30 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisParticleSystemCurveMode_t8BE38B5D6B050709BAE31B5556CFC3DA69FC8405_m066E552CFA7510B509D2175EB72B2402EC615596_RuntimeMethod_var, L_29);
		MinMaxCurve_set_mode_m6870C4CA0FE7AF1029F45040B827C9F0A6A80A86((&V_0), L_30, NULL);
		// break;
		goto IL_01d3;
	}

IL_0141:
	{
		// instance.curveMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_31 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_32 = ((ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_31);
		float L_33;
		L_33 = GenericVirtualFuncInvoker1< float, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mA86928BC888E342D2C2644535E3399952F5077ED_RuntimeMethod_var, L_31, L_32);
		MinMaxCurve_set_curveMultiplier_m9FCF7F21AECE399ACD9FEB9ADEEBD93FD12DDABC((&V_0), L_33, NULL);
		// break;
		goto IL_01d3;
	}

IL_0155:
	{
		// instance.curveMax = reader.Read<UnityEngine.AnimationCurve>(ES3Type_AnimationCurve.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_34 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_35 = ((ES3Type_AnimationCurve_tF623128FF51FC3C48A6749619C4915CBE2995CA4_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_AnimationCurve_tF623128FF51FC3C48A6749619C4915CBE2995CA4_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_34);
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_36;
		L_36 = GenericVirtualFuncInvoker1< AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354*, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisAnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_m10F5F132336385185365E73EF668D8D369D3A4A1_RuntimeMethod_var, L_34, L_35);
		MinMaxCurve_set_curveMax_m39B9E8AE4E62E874DA99AA7108C2C47C6CA333DF((&V_0), L_36, NULL);
		// break;
		goto IL_01d3;
	}

IL_0169:
	{
		// instance.curveMin = reader.Read<UnityEngine.AnimationCurve>(ES3Type_AnimationCurve.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_37 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_38 = ((ES3Type_AnimationCurve_tF623128FF51FC3C48A6749619C4915CBE2995CA4_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_AnimationCurve_tF623128FF51FC3C48A6749619C4915CBE2995CA4_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_37);
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_39;
		L_39 = GenericVirtualFuncInvoker1< AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354*, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisAnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_m10F5F132336385185365E73EF668D8D369D3A4A1_RuntimeMethod_var, L_37, L_38);
		MinMaxCurve_set_curveMin_m17ADE22B882B75CBE87836C85C477A05122D9E75((&V_0), L_39, NULL);
		// break;
		goto IL_01d3;
	}

IL_017d:
	{
		// instance.constantMax = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_40 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_41 = ((ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_40);
		float L_42;
		L_42 = GenericVirtualFuncInvoker1< float, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mA86928BC888E342D2C2644535E3399952F5077ED_RuntimeMethod_var, L_40, L_41);
		MinMaxCurve_set_constantMax_mDB7B011E5B1EA76429B2A1FFDE6C06E82D290DC1((&V_0), L_42, NULL);
		// break;
		goto IL_01d3;
	}

IL_0191:
	{
		// instance.constantMin = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_43 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_44 = ((ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_43);
		float L_45;
		L_45 = GenericVirtualFuncInvoker1< float, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mA86928BC888E342D2C2644535E3399952F5077ED_RuntimeMethod_var, L_43, L_44);
		MinMaxCurve_set_constantMin_mBF7CF2A9F167AD06C327EE6EA37BA427E1CE548C((&V_0), L_45, NULL);
		// break;
		goto IL_01d3;
	}

IL_01a5:
	{
		// instance.constant = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_46 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_47 = ((ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_46);
		float L_48;
		L_48 = GenericVirtualFuncInvoker1< float, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mA86928BC888E342D2C2644535E3399952F5077ED_RuntimeMethod_var, L_46, L_47);
		MinMaxCurve_set_constant_mB6E4F22F67D3ED641FEBB387351F17451BB6A897((&V_0), L_48, NULL);
		// break;
		goto IL_01d3;
	}

IL_01b9:
	{
		// instance.curve = reader.Read<UnityEngine.AnimationCurve>(ES3Type_AnimationCurve.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_49 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_50 = ((ES3Type_AnimationCurve_tF623128FF51FC3C48A6749619C4915CBE2995CA4_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_AnimationCurve_tF623128FF51FC3C48A6749619C4915CBE2995CA4_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_49);
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_51;
		L_51 = GenericVirtualFuncInvoker1< AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354*, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisAnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_m10F5F132336385185365E73EF668D8D369D3A4A1_RuntimeMethod_var, L_49, L_50);
		MinMaxCurve_set_curve_mC745A6526FBF122F96DA597997DFAB9D7D2529BF((&V_0), L_51, NULL);
		// break;
		goto IL_01d3;
	}

IL_01cd:
	{
		// reader.Skip();
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_52 = ___reader0;
		NullCheck(L_52);
		VirtualActionInvoker0::Invoke(41 /* System.Void ES3Reader::Skip() */, L_52);
	}

IL_01d3:
	{
		// while((propertyName = reader.ReadPropertyName()) != null)
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_53 = ___reader0;
		NullCheck(L_53);
		String_t* L_54;
		L_54 = VirtualFuncInvoker0< String_t* >::Invoke(21 /* System.String ES3Reader::ReadPropertyName() */, L_53);
		String_t* L_55 = L_54;
		V_1 = L_55;
		if (L_55)
		{
			goto IL_000d;
		}
	}
	{
		// return instance;
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_56 = V_0;
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_57 = L_56;
		RuntimeObject* L_58 = Box(MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_il2cpp_TypeInfo_var, &L_57);
		return L_58;
	}
}
// System.Object ES3Types.ES3Type_MinMaxCurve::Read<UnityEngine.Matrix4x4>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_MinMaxCurve_Read_TisMatrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6_mB10965E19C08AA3BD874F7C00506C54E153A698F_gshared (ES3Type_MinMaxCurve_t1C147718750ACBECE5D2B7F545D2A434A3C5409B* __this, ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisAnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_m10F5F132336385185365E73EF668D8D369D3A4A1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisParticleSystemCurveMode_t8BE38B5D6B050709BAE31B5556CFC3DA69FC8405_m066E552CFA7510B509D2175EB72B2402EC615596_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mA86928BC888E342D2C2644535E3399952F5077ED_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_AnimationCurve_tF623128FF51FC3C48A6749619C4915CBE2995CA4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral227C22F51E4B6583CFC54387461605DDBBB00D14);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral27906925D50A15B990B586241F08C8ED14226340);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral36587A0761A180514C267B50EA888F89871F71DF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6C9DED8087C891AE33ACFFCE806DBFF63795F56F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral87E6319336195D789899F4791CCD5F2437BCC0B0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAF248E82BE9EBA1ADBF067429FAEE5A5B6E05A74);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB5831A880405F69C8EF7F43534BF4D880F2B9A12);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD4A11128F810D574390DA344F324014E964D1876);
		s_Il2CppMethodInitialized = true;
	}
	MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	uint32_t V_2 = 0;
	{
		// var instance = new UnityEngine.ParticleSystem.MinMaxCurve();
		il2cpp_codegen_initobj((&V_0), sizeof(MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23));
		goto IL_01d3;
	}

IL_000d:
	{
		String_t* L_0 = V_1;
		uint32_t L_1;
		L_1 = U3CPrivateImplementationDetailsU3E_ComputeStringHash_m6EA1F233618497AEFF8902A5EDFA24C74E2F2876(L_0, NULL);
		V_2 = L_1;
		uint32_t L_2 = V_2;
		if ((!(((uint32_t)L_2) <= ((uint32_t)((int32_t)-725866558)))))
		{
			goto IL_0054;
		}
	}
	{
		uint32_t L_3 = V_2;
		if ((!(((uint32_t)L_3) <= ((uint32_t)((int32_t)740975083)))))
		{
			goto IL_003c;
		}
	}
	{
		uint32_t L_4 = V_2;
		if ((((int32_t)L_4) == ((int32_t)((int32_t)110225957))))
		{
			goto IL_0105;
		}
	}
	{
		uint32_t L_5 = V_2;
		if ((((int32_t)L_5) == ((int32_t)((int32_t)740975083))))
		{
			goto IL_009c;
		}
	}
	{
		goto IL_01cd;
	}

IL_003c:
	{
		uint32_t L_6 = V_2;
		if ((((int32_t)L_6) == ((int32_t)((int32_t)-1724381676))))
		{
			goto IL_011a;
		}
	}
	{
		uint32_t L_7 = V_2;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)-725866558))))
		{
			goto IL_00b1;
		}
	}
	{
		goto IL_01cd;
	}

IL_0054:
	{
		uint32_t L_8 = V_2;
		if ((!(((uint32_t)L_8) <= ((uint32_t)((int32_t)-559473464)))))
		{
			goto IL_0074;
		}
	}
	{
		uint32_t L_9 = V_2;
		if ((((int32_t)L_9) == ((int32_t)((int32_t)-581632105))))
		{
			goto IL_00f0;
		}
	}
	{
		uint32_t L_10 = V_2;
		if ((((int32_t)L_10) == ((int32_t)((int32_t)-559473464))))
		{
			goto IL_00c6;
		}
	}
	{
		goto IL_01cd;
	}

IL_0074:
	{
		uint32_t L_11 = V_2;
		if ((((int32_t)L_11) == ((int32_t)((int32_t)-345465511))))
		{
			goto IL_00db;
		}
	}
	{
		uint32_t L_12 = V_2;
		if ((!(((uint32_t)L_12) == ((uint32_t)((int32_t)-328277998)))))
		{
			goto IL_01cd;
		}
	}
	{
		String_t* L_13 = V_1;
		bool L_14;
		L_14 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_13, _stringLiteralAF248E82BE9EBA1ADBF067429FAEE5A5B6E05A74, NULL);
		if (L_14)
		{
			goto IL_012f;
		}
	}
	{
		goto IL_01cd;
	}

IL_009c:
	{
		String_t* L_15 = V_1;
		bool L_16;
		L_16 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_15, _stringLiteral227C22F51E4B6583CFC54387461605DDBBB00D14, NULL);
		if (L_16)
		{
			goto IL_0141;
		}
	}
	{
		goto IL_01cd;
	}

IL_00b1:
	{
		String_t* L_17 = V_1;
		bool L_18;
		L_18 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_17, _stringLiteral27906925D50A15B990B586241F08C8ED14226340, NULL);
		if (L_18)
		{
			goto IL_0155;
		}
	}
	{
		goto IL_01cd;
	}

IL_00c6:
	{
		String_t* L_19 = V_1;
		bool L_20;
		L_20 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_19, _stringLiteralD4A11128F810D574390DA344F324014E964D1876, NULL);
		if (L_20)
		{
			goto IL_0169;
		}
	}
	{
		goto IL_01cd;
	}

IL_00db:
	{
		String_t* L_21 = V_1;
		bool L_22;
		L_22 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_21, _stringLiteralB5831A880405F69C8EF7F43534BF4D880F2B9A12, NULL);
		if (L_22)
		{
			goto IL_017d;
		}
	}
	{
		goto IL_01cd;
	}

IL_00f0:
	{
		String_t* L_23 = V_1;
		bool L_24;
		L_24 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_23, _stringLiteral36587A0761A180514C267B50EA888F89871F71DF, NULL);
		if (L_24)
		{
			goto IL_0191;
		}
	}
	{
		goto IL_01cd;
	}

IL_0105:
	{
		String_t* L_25 = V_1;
		bool L_26;
		L_26 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_25, _stringLiteral87E6319336195D789899F4791CCD5F2437BCC0B0, NULL);
		if (L_26)
		{
			goto IL_01a5;
		}
	}
	{
		goto IL_01cd;
	}

IL_011a:
	{
		String_t* L_27 = V_1;
		bool L_28;
		L_28 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_27, _stringLiteral6C9DED8087C891AE33ACFFCE806DBFF63795F56F, NULL);
		if (L_28)
		{
			goto IL_01b9;
		}
	}
	{
		goto IL_01cd;
	}

IL_012f:
	{
		// instance.mode = reader.Read<UnityEngine.ParticleSystemCurveMode>();
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_29 = ___reader0;
		NullCheck(L_29);
		int32_t L_30;
		L_30 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisParticleSystemCurveMode_t8BE38B5D6B050709BAE31B5556CFC3DA69FC8405_m066E552CFA7510B509D2175EB72B2402EC615596_RuntimeMethod_var, L_29);
		MinMaxCurve_set_mode_m6870C4CA0FE7AF1029F45040B827C9F0A6A80A86((&V_0), L_30, NULL);
		// break;
		goto IL_01d3;
	}

IL_0141:
	{
		// instance.curveMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_31 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_32 = ((ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_31);
		float L_33;
		L_33 = GenericVirtualFuncInvoker1< float, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mA86928BC888E342D2C2644535E3399952F5077ED_RuntimeMethod_var, L_31, L_32);
		MinMaxCurve_set_curveMultiplier_m9FCF7F21AECE399ACD9FEB9ADEEBD93FD12DDABC((&V_0), L_33, NULL);
		// break;
		goto IL_01d3;
	}

IL_0155:
	{
		// instance.curveMax = reader.Read<UnityEngine.AnimationCurve>(ES3Type_AnimationCurve.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_34 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_35 = ((ES3Type_AnimationCurve_tF623128FF51FC3C48A6749619C4915CBE2995CA4_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_AnimationCurve_tF623128FF51FC3C48A6749619C4915CBE2995CA4_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_34);
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_36;
		L_36 = GenericVirtualFuncInvoker1< AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354*, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisAnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_m10F5F132336385185365E73EF668D8D369D3A4A1_RuntimeMethod_var, L_34, L_35);
		MinMaxCurve_set_curveMax_m39B9E8AE4E62E874DA99AA7108C2C47C6CA333DF((&V_0), L_36, NULL);
		// break;
		goto IL_01d3;
	}

IL_0169:
	{
		// instance.curveMin = reader.Read<UnityEngine.AnimationCurve>(ES3Type_AnimationCurve.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_37 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_38 = ((ES3Type_AnimationCurve_tF623128FF51FC3C48A6749619C4915CBE2995CA4_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_AnimationCurve_tF623128FF51FC3C48A6749619C4915CBE2995CA4_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_37);
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_39;
		L_39 = GenericVirtualFuncInvoker1< AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354*, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisAnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_m10F5F132336385185365E73EF668D8D369D3A4A1_RuntimeMethod_var, L_37, L_38);
		MinMaxCurve_set_curveMin_m17ADE22B882B75CBE87836C85C477A05122D9E75((&V_0), L_39, NULL);
		// break;
		goto IL_01d3;
	}

IL_017d:
	{
		// instance.constantMax = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_40 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_41 = ((ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_40);
		float L_42;
		L_42 = GenericVirtualFuncInvoker1< float, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mA86928BC888E342D2C2644535E3399952F5077ED_RuntimeMethod_var, L_40, L_41);
		MinMaxCurve_set_constantMax_mDB7B011E5B1EA76429B2A1FFDE6C06E82D290DC1((&V_0), L_42, NULL);
		// break;
		goto IL_01d3;
	}

IL_0191:
	{
		// instance.constantMin = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_43 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_44 = ((ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_43);
		float L_45;
		L_45 = GenericVirtualFuncInvoker1< float, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mA86928BC888E342D2C2644535E3399952F5077ED_RuntimeMethod_var, L_43, L_44);
		MinMaxCurve_set_constantMin_mBF7CF2A9F167AD06C327EE6EA37BA427E1CE548C((&V_0), L_45, NULL);
		// break;
		goto IL_01d3;
	}

IL_01a5:
	{
		// instance.constant = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_46 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_47 = ((ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_46);
		float L_48;
		L_48 = GenericVirtualFuncInvoker1< float, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mA86928BC888E342D2C2644535E3399952F5077ED_RuntimeMethod_var, L_46, L_47);
		MinMaxCurve_set_constant_mB6E4F22F67D3ED641FEBB387351F17451BB6A897((&V_0), L_48, NULL);
		// break;
		goto IL_01d3;
	}

IL_01b9:
	{
		// instance.curve = reader.Read<UnityEngine.AnimationCurve>(ES3Type_AnimationCurve.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_49 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_50 = ((ES3Type_AnimationCurve_tF623128FF51FC3C48A6749619C4915CBE2995CA4_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_AnimationCurve_tF623128FF51FC3C48A6749619C4915CBE2995CA4_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_49);
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_51;
		L_51 = GenericVirtualFuncInvoker1< AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354*, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisAnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_m10F5F132336385185365E73EF668D8D369D3A4A1_RuntimeMethod_var, L_49, L_50);
		MinMaxCurve_set_curve_mC745A6526FBF122F96DA597997DFAB9D7D2529BF((&V_0), L_51, NULL);
		// break;
		goto IL_01d3;
	}

IL_01cd:
	{
		// reader.Skip();
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_52 = ___reader0;
		NullCheck(L_52);
		VirtualActionInvoker0::Invoke(41 /* System.Void ES3Reader::Skip() */, L_52);
	}

IL_01d3:
	{
		// while((propertyName = reader.ReadPropertyName()) != null)
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_53 = ___reader0;
		NullCheck(L_53);
		String_t* L_54;
		L_54 = VirtualFuncInvoker0< String_t* >::Invoke(21 /* System.String ES3Reader::ReadPropertyName() */, L_53);
		String_t* L_55 = L_54;
		V_1 = L_55;
		if (L_55)
		{
			goto IL_000d;
		}
	}
	{
		// return instance;
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_56 = V_0;
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_57 = L_56;
		RuntimeObject* L_58 = Box(MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_il2cpp_TypeInfo_var, &L_57);
		return L_58;
	}
}
// System.Object ES3Types.ES3Type_MinMaxCurve::Read<System.Object>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_MinMaxCurve_Read_TisRuntimeObject_m053506FEEEC956A9C6175CF15689A5A851552EA0_gshared (ES3Type_MinMaxCurve_t1C147718750ACBECE5D2B7F545D2A434A3C5409B* __this, ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisAnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_m10F5F132336385185365E73EF668D8D369D3A4A1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisParticleSystemCurveMode_t8BE38B5D6B050709BAE31B5556CFC3DA69FC8405_m066E552CFA7510B509D2175EB72B2402EC615596_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mA86928BC888E342D2C2644535E3399952F5077ED_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_AnimationCurve_tF623128FF51FC3C48A6749619C4915CBE2995CA4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral227C22F51E4B6583CFC54387461605DDBBB00D14);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral27906925D50A15B990B586241F08C8ED14226340);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral36587A0761A180514C267B50EA888F89871F71DF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6C9DED8087C891AE33ACFFCE806DBFF63795F56F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral87E6319336195D789899F4791CCD5F2437BCC0B0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAF248E82BE9EBA1ADBF067429FAEE5A5B6E05A74);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB5831A880405F69C8EF7F43534BF4D880F2B9A12);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD4A11128F810D574390DA344F324014E964D1876);
		s_Il2CppMethodInitialized = true;
	}
	MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	uint32_t V_2 = 0;
	{
		// var instance = new UnityEngine.ParticleSystem.MinMaxCurve();
		il2cpp_codegen_initobj((&V_0), sizeof(MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23));
		goto IL_01d3;
	}

IL_000d:
	{
		String_t* L_0 = V_1;
		uint32_t L_1;
		L_1 = U3CPrivateImplementationDetailsU3E_ComputeStringHash_m6EA1F233618497AEFF8902A5EDFA24C74E2F2876(L_0, NULL);
		V_2 = L_1;
		uint32_t L_2 = V_2;
		if ((!(((uint32_t)L_2) <= ((uint32_t)((int32_t)-725866558)))))
		{
			goto IL_0054;
		}
	}
	{
		uint32_t L_3 = V_2;
		if ((!(((uint32_t)L_3) <= ((uint32_t)((int32_t)740975083)))))
		{
			goto IL_003c;
		}
	}
	{
		uint32_t L_4 = V_2;
		if ((((int32_t)L_4) == ((int32_t)((int32_t)110225957))))
		{
			goto IL_0105;
		}
	}
	{
		uint32_t L_5 = V_2;
		if ((((int32_t)L_5) == ((int32_t)((int32_t)740975083))))
		{
			goto IL_009c;
		}
	}
	{
		goto IL_01cd;
	}

IL_003c:
	{
		uint32_t L_6 = V_2;
		if ((((int32_t)L_6) == ((int32_t)((int32_t)-1724381676))))
		{
			goto IL_011a;
		}
	}
	{
		uint32_t L_7 = V_2;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)-725866558))))
		{
			goto IL_00b1;
		}
	}
	{
		goto IL_01cd;
	}

IL_0054:
	{
		uint32_t L_8 = V_2;
		if ((!(((uint32_t)L_8) <= ((uint32_t)((int32_t)-559473464)))))
		{
			goto IL_0074;
		}
	}
	{
		uint32_t L_9 = V_2;
		if ((((int32_t)L_9) == ((int32_t)((int32_t)-581632105))))
		{
			goto IL_00f0;
		}
	}
	{
		uint32_t L_10 = V_2;
		if ((((int32_t)L_10) == ((int32_t)((int32_t)-559473464))))
		{
			goto IL_00c6;
		}
	}
	{
		goto IL_01cd;
	}

IL_0074:
	{
		uint32_t L_11 = V_2;
		if ((((int32_t)L_11) == ((int32_t)((int32_t)-345465511))))
		{
			goto IL_00db;
		}
	}
	{
		uint32_t L_12 = V_2;
		if ((!(((uint32_t)L_12) == ((uint32_t)((int32_t)-328277998)))))
		{
			goto IL_01cd;
		}
	}
	{
		String_t* L_13 = V_1;
		bool L_14;
		L_14 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_13, _stringLiteralAF248E82BE9EBA1ADBF067429FAEE5A5B6E05A74, NULL);
		if (L_14)
		{
			goto IL_012f;
		}
	}
	{
		goto IL_01cd;
	}

IL_009c:
	{
		String_t* L_15 = V_1;
		bool L_16;
		L_16 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_15, _stringLiteral227C22F51E4B6583CFC54387461605DDBBB00D14, NULL);
		if (L_16)
		{
			goto IL_0141;
		}
	}
	{
		goto IL_01cd;
	}

IL_00b1:
	{
		String_t* L_17 = V_1;
		bool L_18;
		L_18 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_17, _stringLiteral27906925D50A15B990B586241F08C8ED14226340, NULL);
		if (L_18)
		{
			goto IL_0155;
		}
	}
	{
		goto IL_01cd;
	}

IL_00c6:
	{
		String_t* L_19 = V_1;
		bool L_20;
		L_20 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_19, _stringLiteralD4A11128F810D574390DA344F324014E964D1876, NULL);
		if (L_20)
		{
			goto IL_0169;
		}
	}
	{
		goto IL_01cd;
	}

IL_00db:
	{
		String_t* L_21 = V_1;
		bool L_22;
		L_22 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_21, _stringLiteralB5831A880405F69C8EF7F43534BF4D880F2B9A12, NULL);
		if (L_22)
		{
			goto IL_017d;
		}
	}
	{
		goto IL_01cd;
	}

IL_00f0:
	{
		String_t* L_23 = V_1;
		bool L_24;
		L_24 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_23, _stringLiteral36587A0761A180514C267B50EA888F89871F71DF, NULL);
		if (L_24)
		{
			goto IL_0191;
		}
	}
	{
		goto IL_01cd;
	}

IL_0105:
	{
		String_t* L_25 = V_1;
		bool L_26;
		L_26 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_25, _stringLiteral87E6319336195D789899F4791CCD5F2437BCC0B0, NULL);
		if (L_26)
		{
			goto IL_01a5;
		}
	}
	{
		goto IL_01cd;
	}

IL_011a:
	{
		String_t* L_27 = V_1;
		bool L_28;
		L_28 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_27, _stringLiteral6C9DED8087C891AE33ACFFCE806DBFF63795F56F, NULL);
		if (L_28)
		{
			goto IL_01b9;
		}
	}
	{
		goto IL_01cd;
	}

IL_012f:
	{
		// instance.mode = reader.Read<UnityEngine.ParticleSystemCurveMode>();
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_29 = ___reader0;
		NullCheck(L_29);
		int32_t L_30;
		L_30 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisParticleSystemCurveMode_t8BE38B5D6B050709BAE31B5556CFC3DA69FC8405_m066E552CFA7510B509D2175EB72B2402EC615596_RuntimeMethod_var, L_29);
		MinMaxCurve_set_mode_m6870C4CA0FE7AF1029F45040B827C9F0A6A80A86((&V_0), L_30, NULL);
		// break;
		goto IL_01d3;
	}

IL_0141:
	{
		// instance.curveMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_31 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_32 = ((ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_31);
		float L_33;
		L_33 = GenericVirtualFuncInvoker1< float, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mA86928BC888E342D2C2644535E3399952F5077ED_RuntimeMethod_var, L_31, L_32);
		MinMaxCurve_set_curveMultiplier_m9FCF7F21AECE399ACD9FEB9ADEEBD93FD12DDABC((&V_0), L_33, NULL);
		// break;
		goto IL_01d3;
	}

IL_0155:
	{
		// instance.curveMax = reader.Read<UnityEngine.AnimationCurve>(ES3Type_AnimationCurve.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_34 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_35 = ((ES3Type_AnimationCurve_tF623128FF51FC3C48A6749619C4915CBE2995CA4_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_AnimationCurve_tF623128FF51FC3C48A6749619C4915CBE2995CA4_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_34);
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_36;
		L_36 = GenericVirtualFuncInvoker1< AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354*, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisAnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_m10F5F132336385185365E73EF668D8D369D3A4A1_RuntimeMethod_var, L_34, L_35);
		MinMaxCurve_set_curveMax_m39B9E8AE4E62E874DA99AA7108C2C47C6CA333DF((&V_0), L_36, NULL);
		// break;
		goto IL_01d3;
	}

IL_0169:
	{
		// instance.curveMin = reader.Read<UnityEngine.AnimationCurve>(ES3Type_AnimationCurve.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_37 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_38 = ((ES3Type_AnimationCurve_tF623128FF51FC3C48A6749619C4915CBE2995CA4_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_AnimationCurve_tF623128FF51FC3C48A6749619C4915CBE2995CA4_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_37);
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_39;
		L_39 = GenericVirtualFuncInvoker1< AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354*, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisAnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_m10F5F132336385185365E73EF668D8D369D3A4A1_RuntimeMethod_var, L_37, L_38);
		MinMaxCurve_set_curveMin_m17ADE22B882B75CBE87836C85C477A05122D9E75((&V_0), L_39, NULL);
		// break;
		goto IL_01d3;
	}

IL_017d:
	{
		// instance.constantMax = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_40 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_41 = ((ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_40);
		float L_42;
		L_42 = GenericVirtualFuncInvoker1< float, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mA86928BC888E342D2C2644535E3399952F5077ED_RuntimeMethod_var, L_40, L_41);
		MinMaxCurve_set_constantMax_mDB7B011E5B1EA76429B2A1FFDE6C06E82D290DC1((&V_0), L_42, NULL);
		// break;
		goto IL_01d3;
	}

IL_0191:
	{
		// instance.constantMin = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_43 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_44 = ((ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_43);
		float L_45;
		L_45 = GenericVirtualFuncInvoker1< float, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mA86928BC888E342D2C2644535E3399952F5077ED_RuntimeMethod_var, L_43, L_44);
		MinMaxCurve_set_constantMin_mBF7CF2A9F167AD06C327EE6EA37BA427E1CE548C((&V_0), L_45, NULL);
		// break;
		goto IL_01d3;
	}

IL_01a5:
	{
		// instance.constant = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_46 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_47 = ((ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_46);
		float L_48;
		L_48 = GenericVirtualFuncInvoker1< float, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mA86928BC888E342D2C2644535E3399952F5077ED_RuntimeMethod_var, L_46, L_47);
		MinMaxCurve_set_constant_mB6E4F22F67D3ED641FEBB387351F17451BB6A897((&V_0), L_48, NULL);
		// break;
		goto IL_01d3;
	}

IL_01b9:
	{
		// instance.curve = reader.Read<UnityEngine.AnimationCurve>(ES3Type_AnimationCurve.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_49 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_50 = ((ES3Type_AnimationCurve_tF623128FF51FC3C48A6749619C4915CBE2995CA4_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_AnimationCurve_tF623128FF51FC3C48A6749619C4915CBE2995CA4_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_49);
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_51;
		L_51 = GenericVirtualFuncInvoker1< AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354*, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisAnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_m10F5F132336385185365E73EF668D8D369D3A4A1_RuntimeMethod_var, L_49, L_50);
		MinMaxCurve_set_curve_mC745A6526FBF122F96DA597997DFAB9D7D2529BF((&V_0), L_51, NULL);
		// break;
		goto IL_01d3;
	}

IL_01cd:
	{
		// reader.Skip();
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_52 = ___reader0;
		NullCheck(L_52);
		VirtualActionInvoker0::Invoke(41 /* System.Void ES3Reader::Skip() */, L_52);
	}

IL_01d3:
	{
		// while((propertyName = reader.ReadPropertyName()) != null)
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_53 = ___reader0;
		NullCheck(L_53);
		String_t* L_54;
		L_54 = VirtualFuncInvoker0< String_t* >::Invoke(21 /* System.String ES3Reader::ReadPropertyName() */, L_53);
		String_t* L_55 = L_54;
		V_1 = L_55;
		if (L_55)
		{
			goto IL_000d;
		}
	}
	{
		// return instance;
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_56 = V_0;
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_57 = L_56;
		RuntimeObject* L_58 = Box(MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_il2cpp_TypeInfo_var, &L_57);
		return L_58;
	}
}
// System.Object ES3Types.ES3Type_MinMaxCurve::Read<UnityEngine.Quaternion>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_MinMaxCurve_Read_TisQuaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_m6C55892F14F81D25C1BD1937225862E284DA30B6_gshared (ES3Type_MinMaxCurve_t1C147718750ACBECE5D2B7F545D2A434A3C5409B* __this, ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisAnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_m10F5F132336385185365E73EF668D8D369D3A4A1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisParticleSystemCurveMode_t8BE38B5D6B050709BAE31B5556CFC3DA69FC8405_m066E552CFA7510B509D2175EB72B2402EC615596_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mA86928BC888E342D2C2644535E3399952F5077ED_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_AnimationCurve_tF623128FF51FC3C48A6749619C4915CBE2995CA4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral227C22F51E4B6583CFC54387461605DDBBB00D14);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral27906925D50A15B990B586241F08C8ED14226340);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral36587A0761A180514C267B50EA888F89871F71DF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6C9DED8087C891AE33ACFFCE806DBFF63795F56F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral87E6319336195D789899F4791CCD5F2437BCC0B0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAF248E82BE9EBA1ADBF067429FAEE5A5B6E05A74);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB5831A880405F69C8EF7F43534BF4D880F2B9A12);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD4A11128F810D574390DA344F324014E964D1876);
		s_Il2CppMethodInitialized = true;
	}
	MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	uint32_t V_2 = 0;
	{
		// var instance = new UnityEngine.ParticleSystem.MinMaxCurve();
		il2cpp_codegen_initobj((&V_0), sizeof(MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23));
		goto IL_01d3;
	}

IL_000d:
	{
		String_t* L_0 = V_1;
		uint32_t L_1;
		L_1 = U3CPrivateImplementationDetailsU3E_ComputeStringHash_m6EA1F233618497AEFF8902A5EDFA24C74E2F2876(L_0, NULL);
		V_2 = L_1;
		uint32_t L_2 = V_2;
		if ((!(((uint32_t)L_2) <= ((uint32_t)((int32_t)-725866558)))))
		{
			goto IL_0054;
		}
	}
	{
		uint32_t L_3 = V_2;
		if ((!(((uint32_t)L_3) <= ((uint32_t)((int32_t)740975083)))))
		{
			goto IL_003c;
		}
	}
	{
		uint32_t L_4 = V_2;
		if ((((int32_t)L_4) == ((int32_t)((int32_t)110225957))))
		{
			goto IL_0105;
		}
	}
	{
		uint32_t L_5 = V_2;
		if ((((int32_t)L_5) == ((int32_t)((int32_t)740975083))))
		{
			goto IL_009c;
		}
	}
	{
		goto IL_01cd;
	}

IL_003c:
	{
		uint32_t L_6 = V_2;
		if ((((int32_t)L_6) == ((int32_t)((int32_t)-1724381676))))
		{
			goto IL_011a;
		}
	}
	{
		uint32_t L_7 = V_2;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)-725866558))))
		{
			goto IL_00b1;
		}
	}
	{
		goto IL_01cd;
	}

IL_0054:
	{
		uint32_t L_8 = V_2;
		if ((!(((uint32_t)L_8) <= ((uint32_t)((int32_t)-559473464)))))
		{
			goto IL_0074;
		}
	}
	{
		uint32_t L_9 = V_2;
		if ((((int32_t)L_9) == ((int32_t)((int32_t)-581632105))))
		{
			goto IL_00f0;
		}
	}
	{
		uint32_t L_10 = V_2;
		if ((((int32_t)L_10) == ((int32_t)((int32_t)-559473464))))
		{
			goto IL_00c6;
		}
	}
	{
		goto IL_01cd;
	}

IL_0074:
	{
		uint32_t L_11 = V_2;
		if ((((int32_t)L_11) == ((int32_t)((int32_t)-345465511))))
		{
			goto IL_00db;
		}
	}
	{
		uint32_t L_12 = V_2;
		if ((!(((uint32_t)L_12) == ((uint32_t)((int32_t)-328277998)))))
		{
			goto IL_01cd;
		}
	}
	{
		String_t* L_13 = V_1;
		bool L_14;
		L_14 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_13, _stringLiteralAF248E82BE9EBA1ADBF067429FAEE5A5B6E05A74, NULL);
		if (L_14)
		{
			goto IL_012f;
		}
	}
	{
		goto IL_01cd;
	}

IL_009c:
	{
		String_t* L_15 = V_1;
		bool L_16;
		L_16 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_15, _stringLiteral227C22F51E4B6583CFC54387461605DDBBB00D14, NULL);
		if (L_16)
		{
			goto IL_0141;
		}
	}
	{
		goto IL_01cd;
	}

IL_00b1:
	{
		String_t* L_17 = V_1;
		bool L_18;
		L_18 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_17, _stringLiteral27906925D50A15B990B586241F08C8ED14226340, NULL);
		if (L_18)
		{
			goto IL_0155;
		}
	}
	{
		goto IL_01cd;
	}

IL_00c6:
	{
		String_t* L_19 = V_1;
		bool L_20;
		L_20 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_19, _stringLiteralD4A11128F810D574390DA344F324014E964D1876, NULL);
		if (L_20)
		{
			goto IL_0169;
		}
	}
	{
		goto IL_01cd;
	}

IL_00db:
	{
		String_t* L_21 = V_1;
		bool L_22;
		L_22 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_21, _stringLiteralB5831A880405F69C8EF7F43534BF4D880F2B9A12, NULL);
		if (L_22)
		{
			goto IL_017d;
		}
	}
	{
		goto IL_01cd;
	}

IL_00f0:
	{
		String_t* L_23 = V_1;
		bool L_24;
		L_24 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_23, _stringLiteral36587A0761A180514C267B50EA888F89871F71DF, NULL);
		if (L_24)
		{
			goto IL_0191;
		}
	}
	{
		goto IL_01cd;
	}

IL_0105:
	{
		String_t* L_25 = V_1;
		bool L_26;
		L_26 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_25, _stringLiteral87E6319336195D789899F4791CCD5F2437BCC0B0, NULL);
		if (L_26)
		{
			goto IL_01a5;
		}
	}
	{
		goto IL_01cd;
	}

IL_011a:
	{
		String_t* L_27 = V_1;
		bool L_28;
		L_28 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_27, _stringLiteral6C9DED8087C891AE33ACFFCE806DBFF63795F56F, NULL);
		if (L_28)
		{
			goto IL_01b9;
		}
	}
	{
		goto IL_01cd;
	}

IL_012f:
	{
		// instance.mode = reader.Read<UnityEngine.ParticleSystemCurveMode>();
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_29 = ___reader0;
		NullCheck(L_29);
		int32_t L_30;
		L_30 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisParticleSystemCurveMode_t8BE38B5D6B050709BAE31B5556CFC3DA69FC8405_m066E552CFA7510B509D2175EB72B2402EC615596_RuntimeMethod_var, L_29);
		MinMaxCurve_set_mode_m6870C4CA0FE7AF1029F45040B827C9F0A6A80A86((&V_0), L_30, NULL);
		// break;
		goto IL_01d3;
	}

IL_0141:
	{
		// instance.curveMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_31 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_32 = ((ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_31);
		float L_33;
		L_33 = GenericVirtualFuncInvoker1< float, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mA86928BC888E342D2C2644535E3399952F5077ED_RuntimeMethod_var, L_31, L_32);
		MinMaxCurve_set_curveMultiplier_m9FCF7F21AECE399ACD9FEB9ADEEBD93FD12DDABC((&V_0), L_33, NULL);
		// break;
		goto IL_01d3;
	}

IL_0155:
	{
		// instance.curveMax = reader.Read<UnityEngine.AnimationCurve>(ES3Type_AnimationCurve.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_34 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_35 = ((ES3Type_AnimationCurve_tF623128FF51FC3C48A6749619C4915CBE2995CA4_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_AnimationCurve_tF623128FF51FC3C48A6749619C4915CBE2995CA4_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_34);
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_36;
		L_36 = GenericVirtualFuncInvoker1< AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354*, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisAnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_m10F5F132336385185365E73EF668D8D369D3A4A1_RuntimeMethod_var, L_34, L_35);
		MinMaxCurve_set_curveMax_m39B9E8AE4E62E874DA99AA7108C2C47C6CA333DF((&V_0), L_36, NULL);
		// break;
		goto IL_01d3;
	}

IL_0169:
	{
		// instance.curveMin = reader.Read<UnityEngine.AnimationCurve>(ES3Type_AnimationCurve.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_37 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_38 = ((ES3Type_AnimationCurve_tF623128FF51FC3C48A6749619C4915CBE2995CA4_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_AnimationCurve_tF623128FF51FC3C48A6749619C4915CBE2995CA4_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_37);
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_39;
		L_39 = GenericVirtualFuncInvoker1< AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354*, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisAnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_m10F5F132336385185365E73EF668D8D369D3A4A1_RuntimeMethod_var, L_37, L_38);
		MinMaxCurve_set_curveMin_m17ADE22B882B75CBE87836C85C477A05122D9E75((&V_0), L_39, NULL);
		// break;
		goto IL_01d3;
	}

IL_017d:
	{
		// instance.constantMax = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_40 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_41 = ((ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_40);
		float L_42;
		L_42 = GenericVirtualFuncInvoker1< float, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mA86928BC888E342D2C2644535E3399952F5077ED_RuntimeMethod_var, L_40, L_41);
		MinMaxCurve_set_constantMax_mDB7B011E5B1EA76429B2A1FFDE6C06E82D290DC1((&V_0), L_42, NULL);
		// break;
		goto IL_01d3;
	}

IL_0191:
	{
		// instance.constantMin = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_43 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_44 = ((ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_43);
		float L_45;
		L_45 = GenericVirtualFuncInvoker1< float, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mA86928BC888E342D2C2644535E3399952F5077ED_RuntimeMethod_var, L_43, L_44);
		MinMaxCurve_set_constantMin_mBF7CF2A9F167AD06C327EE6EA37BA427E1CE548C((&V_0), L_45, NULL);
		// break;
		goto IL_01d3;
	}

IL_01a5:
	{
		// instance.constant = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_46 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_47 = ((ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_46);
		float L_48;
		L_48 = GenericVirtualFuncInvoker1< float, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mA86928BC888E342D2C2644535E3399952F5077ED_RuntimeMethod_var, L_46, L_47);
		MinMaxCurve_set_constant_mB6E4F22F67D3ED641FEBB387351F17451BB6A897((&V_0), L_48, NULL);
		// break;
		goto IL_01d3;
	}

IL_01b9:
	{
		// instance.curve = reader.Read<UnityEngine.AnimationCurve>(ES3Type_AnimationCurve.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_49 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_50 = ((ES3Type_AnimationCurve_tF623128FF51FC3C48A6749619C4915CBE2995CA4_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_AnimationCurve_tF623128FF51FC3C48A6749619C4915CBE2995CA4_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_49);
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_51;
		L_51 = GenericVirtualFuncInvoker1< AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354*, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisAnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_m10F5F132336385185365E73EF668D8D369D3A4A1_RuntimeMethod_var, L_49, L_50);
		MinMaxCurve_set_curve_mC745A6526FBF122F96DA597997DFAB9D7D2529BF((&V_0), L_51, NULL);
		// break;
		goto IL_01d3;
	}

IL_01cd:
	{
		// reader.Skip();
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_52 = ___reader0;
		NullCheck(L_52);
		VirtualActionInvoker0::Invoke(41 /* System.Void ES3Reader::Skip() */, L_52);
	}

IL_01d3:
	{
		// while((propertyName = reader.ReadPropertyName()) != null)
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_53 = ___reader0;
		NullCheck(L_53);
		String_t* L_54;
		L_54 = VirtualFuncInvoker0< String_t* >::Invoke(21 /* System.String ES3Reader::ReadPropertyName() */, L_53);
		String_t* L_55 = L_54;
		V_1 = L_55;
		if (L_55)
		{
			goto IL_000d;
		}
	}
	{
		// return instance;
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_56 = V_0;
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_57 = L_56;
		RuntimeObject* L_58 = Box(MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_il2cpp_TypeInfo_var, &L_57);
		return L_58;
	}
}
// System.Object ES3Types.ES3Type_MinMaxCurve::Read<UnityEngine.Rect>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_MinMaxCurve_Read_TisRect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D_m2A58891F749C1702FBE8DB42EF19F5822E208FFE_gshared (ES3Type_MinMaxCurve_t1C147718750ACBECE5D2B7F545D2A434A3C5409B* __this, ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisAnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_m10F5F132336385185365E73EF668D8D369D3A4A1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisParticleSystemCurveMode_t8BE38B5D6B050709BAE31B5556CFC3DA69FC8405_m066E552CFA7510B509D2175EB72B2402EC615596_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mA86928BC888E342D2C2644535E3399952F5077ED_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_AnimationCurve_tF623128FF51FC3C48A6749619C4915CBE2995CA4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral227C22F51E4B6583CFC54387461605DDBBB00D14);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral27906925D50A15B990B586241F08C8ED14226340);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral36587A0761A180514C267B50EA888F89871F71DF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6C9DED8087C891AE33ACFFCE806DBFF63795F56F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral87E6319336195D789899F4791CCD5F2437BCC0B0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAF248E82BE9EBA1ADBF067429FAEE5A5B6E05A74);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB5831A880405F69C8EF7F43534BF4D880F2B9A12);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD4A11128F810D574390DA344F324014E964D1876);
		s_Il2CppMethodInitialized = true;
	}
	MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	uint32_t V_2 = 0;
	{
		// var instance = new UnityEngine.ParticleSystem.MinMaxCurve();
		il2cpp_codegen_initobj((&V_0), sizeof(MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23));
		goto IL_01d3;
	}

IL_000d:
	{
		String_t* L_0 = V_1;
		uint32_t L_1;
		L_1 = U3CPrivateImplementationDetailsU3E_ComputeStringHash_m6EA1F233618497AEFF8902A5EDFA24C74E2F2876(L_0, NULL);
		V_2 = L_1;
		uint32_t L_2 = V_2;
		if ((!(((uint32_t)L_2) <= ((uint32_t)((int32_t)-725866558)))))
		{
			goto IL_0054;
		}
	}
	{
		uint32_t L_3 = V_2;
		if ((!(((uint32_t)L_3) <= ((uint32_t)((int32_t)740975083)))))
		{
			goto IL_003c;
		}
	}
	{
		uint32_t L_4 = V_2;
		if ((((int32_t)L_4) == ((int32_t)((int32_t)110225957))))
		{
			goto IL_0105;
		}
	}
	{
		uint32_t L_5 = V_2;
		if ((((int32_t)L_5) == ((int32_t)((int32_t)740975083))))
		{
			goto IL_009c;
		}
	}
	{
		goto IL_01cd;
	}

IL_003c:
	{
		uint32_t L_6 = V_2;
		if ((((int32_t)L_6) == ((int32_t)((int32_t)-1724381676))))
		{
			goto IL_011a;
		}
	}
	{
		uint32_t L_7 = V_2;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)-725866558))))
		{
			goto IL_00b1;
		}
	}
	{
		goto IL_01cd;
	}

IL_0054:
	{
		uint32_t L_8 = V_2;
		if ((!(((uint32_t)L_8) <= ((uint32_t)((int32_t)-559473464)))))
		{
			goto IL_0074;
		}
	}
	{
		uint32_t L_9 = V_2;
		if ((((int32_t)L_9) == ((int32_t)((int32_t)-581632105))))
		{
			goto IL_00f0;
		}
	}
	{
		uint32_t L_10 = V_2;
		if ((((int32_t)L_10) == ((int32_t)((int32_t)-559473464))))
		{
			goto IL_00c6;
		}
	}
	{
		goto IL_01cd;
	}

IL_0074:
	{
		uint32_t L_11 = V_2;
		if ((((int32_t)L_11) == ((int32_t)((int32_t)-345465511))))
		{
			goto IL_00db;
		}
	}
	{
		uint32_t L_12 = V_2;
		if ((!(((uint32_t)L_12) == ((uint32_t)((int32_t)-328277998)))))
		{
			goto IL_01cd;
		}
	}
	{
		String_t* L_13 = V_1;
		bool L_14;
		L_14 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_13, _stringLiteralAF248E82BE9EBA1ADBF067429FAEE5A5B6E05A74, NULL);
		if (L_14)
		{
			goto IL_012f;
		}
	}
	{
		goto IL_01cd;
	}

IL_009c:
	{
		String_t* L_15 = V_1;
		bool L_16;
		L_16 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_15, _stringLiteral227C22F51E4B6583CFC54387461605DDBBB00D14, NULL);
		if (L_16)
		{
			goto IL_0141;
		}
	}
	{
		goto IL_01cd;
	}

IL_00b1:
	{
		String_t* L_17 = V_1;
		bool L_18;
		L_18 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_17, _stringLiteral27906925D50A15B990B586241F08C8ED14226340, NULL);
		if (L_18)
		{
			goto IL_0155;
		}
	}
	{
		goto IL_01cd;
	}

IL_00c6:
	{
		String_t* L_19 = V_1;
		bool L_20;
		L_20 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_19, _stringLiteralD4A11128F810D574390DA344F324014E964D1876, NULL);
		if (L_20)
		{
			goto IL_0169;
		}
	}
	{
		goto IL_01cd;
	}

IL_00db:
	{
		String_t* L_21 = V_1;
		bool L_22;
		L_22 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_21, _stringLiteralB5831A880405F69C8EF7F43534BF4D880F2B9A12, NULL);
		if (L_22)
		{
			goto IL_017d;
		}
	}
	{
		goto IL_01cd;
	}

IL_00f0:
	{
		String_t* L_23 = V_1;
		bool L_24;
		L_24 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_23, _stringLiteral36587A0761A180514C267B50EA888F89871F71DF, NULL);
		if (L_24)
		{
			goto IL_0191;
		}
	}
	{
		goto IL_01cd;
	}

IL_0105:
	{
		String_t* L_25 = V_1;
		bool L_26;
		L_26 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_25, _stringLiteral87E6319336195D789899F4791CCD5F2437BCC0B0, NULL);
		if (L_26)
		{
			goto IL_01a5;
		}
	}
	{
		goto IL_01cd;
	}

IL_011a:
	{
		String_t* L_27 = V_1;
		bool L_28;
		L_28 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_27, _stringLiteral6C9DED8087C891AE33ACFFCE806DBFF63795F56F, NULL);
		if (L_28)
		{
			goto IL_01b9;
		}
	}
	{
		goto IL_01cd;
	}

IL_012f:
	{
		// instance.mode = reader.Read<UnityEngine.ParticleSystemCurveMode>();
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_29 = ___reader0;
		NullCheck(L_29);
		int32_t L_30;
		L_30 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisParticleSystemCurveMode_t8BE38B5D6B050709BAE31B5556CFC3DA69FC8405_m066E552CFA7510B509D2175EB72B2402EC615596_RuntimeMethod_var, L_29);
		MinMaxCurve_set_mode_m6870C4CA0FE7AF1029F45040B827C9F0A6A80A86((&V_0), L_30, NULL);
		// break;
		goto IL_01d3;
	}

IL_0141:
	{
		// instance.curveMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_31 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_32 = ((ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_31);
		float L_33;
		L_33 = GenericVirtualFuncInvoker1< float, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mA86928BC888E342D2C2644535E3399952F5077ED_RuntimeMethod_var, L_31, L_32);
		MinMaxCurve_set_curveMultiplier_m9FCF7F21AECE399ACD9FEB9ADEEBD93FD12DDABC((&V_0), L_33, NULL);
		// break;
		goto IL_01d3;
	}

IL_0155:
	{
		// instance.curveMax = reader.Read<UnityEngine.AnimationCurve>(ES3Type_AnimationCurve.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_34 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_35 = ((ES3Type_AnimationCurve_tF623128FF51FC3C48A6749619C4915CBE2995CA4_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_AnimationCurve_tF623128FF51FC3C48A6749619C4915CBE2995CA4_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_34);
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_36;
		L_36 = GenericVirtualFuncInvoker1< AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354*, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisAnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_m10F5F132336385185365E73EF668D8D369D3A4A1_RuntimeMethod_var, L_34, L_35);
		MinMaxCurve_set_curveMax_m39B9E8AE4E62E874DA99AA7108C2C47C6CA333DF((&V_0), L_36, NULL);
		// break;
		goto IL_01d3;
	}

IL_0169:
	{
		// instance.curveMin = reader.Read<UnityEngine.AnimationCurve>(ES3Type_AnimationCurve.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_37 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_38 = ((ES3Type_AnimationCurve_tF623128FF51FC3C48A6749619C4915CBE2995CA4_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_AnimationCurve_tF623128FF51FC3C48A6749619C4915CBE2995CA4_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_37);
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_39;
		L_39 = GenericVirtualFuncInvoker1< AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354*, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisAnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_m10F5F132336385185365E73EF668D8D369D3A4A1_RuntimeMethod_var, L_37, L_38);
		MinMaxCurve_set_curveMin_m17ADE22B882B75CBE87836C85C477A05122D9E75((&V_0), L_39, NULL);
		// break;
		goto IL_01d3;
	}

IL_017d:
	{
		// instance.constantMax = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_40 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_41 = ((ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_40);
		float L_42;
		L_42 = GenericVirtualFuncInvoker1< float, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mA86928BC888E342D2C2644535E3399952F5077ED_RuntimeMethod_var, L_40, L_41);
		MinMaxCurve_set_constantMax_mDB7B011E5B1EA76429B2A1FFDE6C06E82D290DC1((&V_0), L_42, NULL);
		// break;
		goto IL_01d3;
	}

IL_0191:
	{
		// instance.constantMin = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_43 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_44 = ((ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_43);
		float L_45;
		L_45 = GenericVirtualFuncInvoker1< float, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mA86928BC888E342D2C2644535E3399952F5077ED_RuntimeMethod_var, L_43, L_44);
		MinMaxCurve_set_constantMin_mBF7CF2A9F167AD06C327EE6EA37BA427E1CE548C((&V_0), L_45, NULL);
		// break;
		goto IL_01d3;
	}

IL_01a5:
	{
		// instance.constant = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_46 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_47 = ((ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_46);
		float L_48;
		L_48 = GenericVirtualFuncInvoker1< float, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mA86928BC888E342D2C2644535E3399952F5077ED_RuntimeMethod_var, L_46, L_47);
		MinMaxCurve_set_constant_mB6E4F22F67D3ED641FEBB387351F17451BB6A897((&V_0), L_48, NULL);
		// break;
		goto IL_01d3;
	}

IL_01b9:
	{
		// instance.curve = reader.Read<UnityEngine.AnimationCurve>(ES3Type_AnimationCurve.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_49 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_50 = ((ES3Type_AnimationCurve_tF623128FF51FC3C48A6749619C4915CBE2995CA4_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_AnimationCurve_tF623128FF51FC3C48A6749619C4915CBE2995CA4_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_49);
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_51;
		L_51 = GenericVirtualFuncInvoker1< AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354*, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisAnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_m10F5F132336385185365E73EF668D8D369D3A4A1_RuntimeMethod_var, L_49, L_50);
		MinMaxCurve_set_curve_mC745A6526FBF122F96DA597997DFAB9D7D2529BF((&V_0), L_51, NULL);
		// break;
		goto IL_01d3;
	}

IL_01cd:
	{
		// reader.Skip();
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_52 = ___reader0;
		NullCheck(L_52);
		VirtualActionInvoker0::Invoke(41 /* System.Void ES3Reader::Skip() */, L_52);
	}

IL_01d3:
	{
		// while((propertyName = reader.ReadPropertyName()) != null)
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_53 = ___reader0;
		NullCheck(L_53);
		String_t* L_54;
		L_54 = VirtualFuncInvoker0< String_t* >::Invoke(21 /* System.String ES3Reader::ReadPropertyName() */, L_53);
		String_t* L_55 = L_54;
		V_1 = L_55;
		if (L_55)
		{
			goto IL_000d;
		}
	}
	{
		// return instance;
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_56 = V_0;
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_57 = L_56;
		RuntimeObject* L_58 = Box(MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_il2cpp_TypeInfo_var, &L_57);
		return L_58;
	}
}
// System.Object ES3Types.ES3Type_MinMaxCurve::Read<UnityEngine.RenderTextureDescriptor>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_MinMaxCurve_Read_TisRenderTextureDescriptor_t69845881CE6437E4E61F92074F2F84079F23FA46_m3BF2B86B32050C5DC52641923BA4FE8EEC481B4B_gshared (ES3Type_MinMaxCurve_t1C147718750ACBECE5D2B7F545D2A434A3C5409B* __this, ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisAnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_m10F5F132336385185365E73EF668D8D369D3A4A1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisParticleSystemCurveMode_t8BE38B5D6B050709BAE31B5556CFC3DA69FC8405_m066E552CFA7510B509D2175EB72B2402EC615596_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mA86928BC888E342D2C2644535E3399952F5077ED_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_AnimationCurve_tF623128FF51FC3C48A6749619C4915CBE2995CA4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral227C22F51E4B6583CFC54387461605DDBBB00D14);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral27906925D50A15B990B586241F08C8ED14226340);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral36587A0761A180514C267B50EA888F89871F71DF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6C9DED8087C891AE33ACFFCE806DBFF63795F56F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral87E6319336195D789899F4791CCD5F2437BCC0B0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAF248E82BE9EBA1ADBF067429FAEE5A5B6E05A74);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB5831A880405F69C8EF7F43534BF4D880F2B9A12);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD4A11128F810D574390DA344F324014E964D1876);
		s_Il2CppMethodInitialized = true;
	}
	MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	uint32_t V_2 = 0;
	{
		// var instance = new UnityEngine.ParticleSystem.MinMaxCurve();
		il2cpp_codegen_initobj((&V_0), sizeof(MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23));
		goto IL_01d3;
	}

IL_000d:
	{
		String_t* L_0 = V_1;
		uint32_t L_1;
		L_1 = U3CPrivateImplementationDetailsU3E_ComputeStringHash_m6EA1F233618497AEFF8902A5EDFA24C74E2F2876(L_0, NULL);
		V_2 = L_1;
		uint32_t L_2 = V_2;
		if ((!(((uint32_t)L_2) <= ((uint32_t)((int32_t)-725866558)))))
		{
			goto IL_0054;
		}
	}
	{
		uint32_t L_3 = V_2;
		if ((!(((uint32_t)L_3) <= ((uint32_t)((int32_t)740975083)))))
		{
			goto IL_003c;
		}
	}
	{
		uint32_t L_4 = V_2;
		if ((((int32_t)L_4) == ((int32_t)((int32_t)110225957))))
		{
			goto IL_0105;
		}
	}
	{
		uint32_t L_5 = V_2;
		if ((((int32_t)L_5) == ((int32_t)((int32_t)740975083))))
		{
			goto IL_009c;
		}
	}
	{
		goto IL_01cd;
	}

IL_003c:
	{
		uint32_t L_6 = V_2;
		if ((((int32_t)L_6) == ((int32_t)((int32_t)-1724381676))))
		{
			goto IL_011a;
		}
	}
	{
		uint32_t L_7 = V_2;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)-725866558))))
		{
			goto IL_00b1;
		}
	}
	{
		goto IL_01cd;
	}

IL_0054:
	{
		uint32_t L_8 = V_2;
		if ((!(((uint32_t)L_8) <= ((uint32_t)((int32_t)-559473464)))))
		{
			goto IL_0074;
		}
	}
	{
		uint32_t L_9 = V_2;
		if ((((int32_t)L_9) == ((int32_t)((int32_t)-581632105))))
		{
			goto IL_00f0;
		}
	}
	{
		uint32_t L_10 = V_2;
		if ((((int32_t)L_10) == ((int32_t)((int32_t)-559473464))))
		{
			goto IL_00c6;
		}
	}
	{
		goto IL_01cd;
	}

IL_0074:
	{
		uint32_t L_11 = V_2;
		if ((((int32_t)L_11) == ((int32_t)((int32_t)-345465511))))
		{
			goto IL_00db;
		}
	}
	{
		uint32_t L_12 = V_2;
		if ((!(((uint32_t)L_12) == ((uint32_t)((int32_t)-328277998)))))
		{
			goto IL_01cd;
		}
	}
	{
		String_t* L_13 = V_1;
		bool L_14;
		L_14 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_13, _stringLiteralAF248E82BE9EBA1ADBF067429FAEE5A5B6E05A74, NULL);
		if (L_14)
		{
			goto IL_012f;
		}
	}
	{
		goto IL_01cd;
	}

IL_009c:
	{
		String_t* L_15 = V_1;
		bool L_16;
		L_16 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_15, _stringLiteral227C22F51E4B6583CFC54387461605DDBBB00D14, NULL);
		if (L_16)
		{
			goto IL_0141;
		}
	}
	{
		goto IL_01cd;
	}

IL_00b1:
	{
		String_t* L_17 = V_1;
		bool L_18;
		L_18 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_17, _stringLiteral27906925D50A15B990B586241F08C8ED14226340, NULL);
		if (L_18)
		{
			goto IL_0155;
		}
	}
	{
		goto IL_01cd;
	}

IL_00c6:
	{
		String_t* L_19 = V_1;
		bool L_20;
		L_20 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_19, _stringLiteralD4A11128F810D574390DA344F324014E964D1876, NULL);
		if (L_20)
		{
			goto IL_0169;
		}
	}
	{
		goto IL_01cd;
	}

IL_00db:
	{
		String_t* L_21 = V_1;
		bool L_22;
		L_22 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_21, _stringLiteralB5831A880405F69C8EF7F43534BF4D880F2B9A12, NULL);
		if (L_22)
		{
			goto IL_017d;
		}
	}
	{
		goto IL_01cd;
	}

IL_00f0:
	{
		String_t* L_23 = V_1;
		bool L_24;
		L_24 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_23, _stringLiteral36587A0761A180514C267B50EA888F89871F71DF, NULL);
		if (L_24)
		{
			goto IL_0191;
		}
	}
	{
		goto IL_01cd;
	}

IL_0105:
	{
		String_t* L_25 = V_1;
		bool L_26;
		L_26 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_25, _stringLiteral87E6319336195D789899F4791CCD5F2437BCC0B0, NULL);
		if (L_26)
		{
			goto IL_01a5;
		}
	}
	{
		goto IL_01cd;
	}

IL_011a:
	{
		String_t* L_27 = V_1;
		bool L_28;
		L_28 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_27, _stringLiteral6C9DED8087C891AE33ACFFCE806DBFF63795F56F, NULL);
		if (L_28)
		{
			goto IL_01b9;
		}
	}
	{
		goto IL_01cd;
	}

IL_012f:
	{
		// instance.mode = reader.Read<UnityEngine.ParticleSystemCurveMode>();
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_29 = ___reader0;
		NullCheck(L_29);
		int32_t L_30;
		L_30 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisParticleSystemCurveMode_t8BE38B5D6B050709BAE31B5556CFC3DA69FC8405_m066E552CFA7510B509D2175EB72B2402EC615596_RuntimeMethod_var, L_29);
		MinMaxCurve_set_mode_m6870C4CA0FE7AF1029F45040B827C9F0A6A80A86((&V_0), L_30, NULL);
		// break;
		goto IL_01d3;
	}

IL_0141:
	{
		// instance.curveMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_31 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_32 = ((ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_31);
		float L_33;
		L_33 = GenericVirtualFuncInvoker1< float, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mA86928BC888E342D2C2644535E3399952F5077ED_RuntimeMethod_var, L_31, L_32);
		MinMaxCurve_set_curveMultiplier_m9FCF7F21AECE399ACD9FEB9ADEEBD93FD12DDABC((&V_0), L_33, NULL);
		// break;
		goto IL_01d3;
	}

IL_0155:
	{
		// instance.curveMax = reader.Read<UnityEngine.AnimationCurve>(ES3Type_AnimationCurve.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_34 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_35 = ((ES3Type_AnimationCurve_tF623128FF51FC3C48A6749619C4915CBE2995CA4_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_AnimationCurve_tF623128FF51FC3C48A6749619C4915CBE2995CA4_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_34);
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_36;
		L_36 = GenericVirtualFuncInvoker1< AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354*, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisAnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_m10F5F132336385185365E73EF668D8D369D3A4A1_RuntimeMethod_var, L_34, L_35);
		MinMaxCurve_set_curveMax_m39B9E8AE4E62E874DA99AA7108C2C47C6CA333DF((&V_0), L_36, NULL);
		// break;
		goto IL_01d3;
	}

IL_0169:
	{
		// instance.curveMin = reader.Read<UnityEngine.AnimationCurve>(ES3Type_AnimationCurve.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_37 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_38 = ((ES3Type_AnimationCurve_tF623128FF51FC3C48A6749619C4915CBE2995CA4_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_AnimationCurve_tF623128FF51FC3C48A6749619C4915CBE2995CA4_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_37);
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_39;
		L_39 = GenericVirtualFuncInvoker1< AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354*, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisAnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_m10F5F132336385185365E73EF668D8D369D3A4A1_RuntimeMethod_var, L_37, L_38);
		MinMaxCurve_set_curveMin_m17ADE22B882B75CBE87836C85C477A05122D9E75((&V_0), L_39, NULL);
		// break;
		goto IL_01d3;
	}

IL_017d:
	{
		// instance.constantMax = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_40 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_41 = ((ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_40);
		float L_42;
		L_42 = GenericVirtualFuncInvoker1< float, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mA86928BC888E342D2C2644535E3399952F5077ED_RuntimeMethod_var, L_40, L_41);
		MinMaxCurve_set_constantMax_mDB7B011E5B1EA76429B2A1FFDE6C06E82D290DC1((&V_0), L_42, NULL);
		// break;
		goto IL_01d3;
	}

IL_0191:
	{
		// instance.constantMin = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_43 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_44 = ((ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_43);
		float L_45;
		L_45 = GenericVirtualFuncInvoker1< float, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mA86928BC888E342D2C2644535E3399952F5077ED_RuntimeMethod_var, L_43, L_44);
		MinMaxCurve_set_constantMin_mBF7CF2A9F167AD06C327EE6EA37BA427E1CE548C((&V_0), L_45, NULL);
		// break;
		goto IL_01d3;
	}

IL_01a5:
	{
		// instance.constant = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_46 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_47 = ((ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_46);
		float L_48;
		L_48 = GenericVirtualFuncInvoker1< float, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mA86928BC888E342D2C2644535E3399952F5077ED_RuntimeMethod_var, L_46, L_47);
		MinMaxCurve_set_constant_mB6E4F22F67D3ED641FEBB387351F17451BB6A897((&V_0), L_48, NULL);
		// break;
		goto IL_01d3;
	}

IL_01b9:
	{
		// instance.curve = reader.Read<UnityEngine.AnimationCurve>(ES3Type_AnimationCurve.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_49 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_50 = ((ES3Type_AnimationCurve_tF623128FF51FC3C48A6749619C4915CBE2995CA4_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_AnimationCurve_tF623128FF51FC3C48A6749619C4915CBE2995CA4_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_49);
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_51;
		L_51 = GenericVirtualFuncInvoker1< AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354*, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisAnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_m10F5F132336385185365E73EF668D8D369D3A4A1_RuntimeMethod_var, L_49, L_50);
		MinMaxCurve_set_curve_mC745A6526FBF122F96DA597997DFAB9D7D2529BF((&V_0), L_51, NULL);
		// break;
		goto IL_01d3;
	}

IL_01cd:
	{
		// reader.Skip();
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_52 = ___reader0;
		NullCheck(L_52);
		VirtualActionInvoker0::Invoke(41 /* System.Void ES3Reader::Skip() */, L_52);
	}

IL_01d3:
	{
		// while((propertyName = reader.ReadPropertyName()) != null)
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_53 = ___reader0;
		NullCheck(L_53);
		String_t* L_54;
		L_54 = VirtualFuncInvoker0< String_t* >::Invoke(21 /* System.String ES3Reader::ReadPropertyName() */, L_53);
		String_t* L_55 = L_54;
		V_1 = L_55;
		if (L_55)
		{
			goto IL_000d;
		}
	}
	{
		// return instance;
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_56 = V_0;
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_57 = L_56;
		RuntimeObject* L_58 = Box(MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_il2cpp_TypeInfo_var, &L_57);
		return L_58;
	}
}
// System.Object ES3Types.ES3Type_MinMaxCurve::Read<System.Single>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_MinMaxCurve_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m774B07873338CC8A66E135C532755158F4B348A8_gshared (ES3Type_MinMaxCurve_t1C147718750ACBECE5D2B7F545D2A434A3C5409B* __this, ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisAnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_m10F5F132336385185365E73EF668D8D369D3A4A1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisParticleSystemCurveMode_t8BE38B5D6B050709BAE31B5556CFC3DA69FC8405_m066E552CFA7510B509D2175EB72B2402EC615596_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mA86928BC888E342D2C2644535E3399952F5077ED_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_AnimationCurve_tF623128FF51FC3C48A6749619C4915CBE2995CA4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral227C22F51E4B6583CFC54387461605DDBBB00D14);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral27906925D50A15B990B586241F08C8ED14226340);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral36587A0761A180514C267B50EA888F89871F71DF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6C9DED8087C891AE33ACFFCE806DBFF63795F56F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral87E6319336195D789899F4791CCD5F2437BCC0B0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAF248E82BE9EBA1ADBF067429FAEE5A5B6E05A74);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB5831A880405F69C8EF7F43534BF4D880F2B9A12);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD4A11128F810D574390DA344F324014E964D1876);
		s_Il2CppMethodInitialized = true;
	}
	MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	uint32_t V_2 = 0;
	{
		// var instance = new UnityEngine.ParticleSystem.MinMaxCurve();
		il2cpp_codegen_initobj((&V_0), sizeof(MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23));
		goto IL_01d3;
	}

IL_000d:
	{
		String_t* L_0 = V_1;
		uint32_t L_1;
		L_1 = U3CPrivateImplementationDetailsU3E_ComputeStringHash_m6EA1F233618497AEFF8902A5EDFA24C74E2F2876(L_0, NULL);
		V_2 = L_1;
		uint32_t L_2 = V_2;
		if ((!(((uint32_t)L_2) <= ((uint32_t)((int32_t)-725866558)))))
		{
			goto IL_0054;
		}
	}
	{
		uint32_t L_3 = V_2;
		if ((!(((uint32_t)L_3) <= ((uint32_t)((int32_t)740975083)))))
		{
			goto IL_003c;
		}
	}
	{
		uint32_t L_4 = V_2;
		if ((((int32_t)L_4) == ((int32_t)((int32_t)110225957))))
		{
			goto IL_0105;
		}
	}
	{
		uint32_t L_5 = V_2;
		if ((((int32_t)L_5) == ((int32_t)((int32_t)740975083))))
		{
			goto IL_009c;
		}
	}
	{
		goto IL_01cd;
	}

IL_003c:
	{
		uint32_t L_6 = V_2;
		if ((((int32_t)L_6) == ((int32_t)((int32_t)-1724381676))))
		{
			goto IL_011a;
		}
	}
	{
		uint32_t L_7 = V_2;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)-725866558))))
		{
			goto IL_00b1;
		}
	}
	{
		goto IL_01cd;
	}

IL_0054:
	{
		uint32_t L_8 = V_2;
		if ((!(((uint32_t)L_8) <= ((uint32_t)((int32_t)-559473464)))))
		{
			goto IL_0074;
		}
	}
	{
		uint32_t L_9 = V_2;
		if ((((int32_t)L_9) == ((int32_t)((int32_t)-581632105))))
		{
			goto IL_00f0;
		}
	}
	{
		uint32_t L_10 = V_2;
		if ((((int32_t)L_10) == ((int32_t)((int32_t)-559473464))))
		{
			goto IL_00c6;
		}
	}
	{
		goto IL_01cd;
	}

IL_0074:
	{
		uint32_t L_11 = V_2;
		if ((((int32_t)L_11) == ((int32_t)((int32_t)-345465511))))
		{
			goto IL_00db;
		}
	}
	{
		uint32_t L_12 = V_2;
		if ((!(((uint32_t)L_12) == ((uint32_t)((int32_t)-328277998)))))
		{
			goto IL_01cd;
		}
	}
	{
		String_t* L_13 = V_1;
		bool L_14;
		L_14 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_13, _stringLiteralAF248E82BE9EBA1ADBF067429FAEE5A5B6E05A74, NULL);
		if (L_14)
		{
			goto IL_012f;
		}
	}
	{
		goto IL_01cd;
	}

IL_009c:
	{
		String_t* L_15 = V_1;
		bool L_16;
		L_16 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_15, _stringLiteral227C22F51E4B6583CFC54387461605DDBBB00D14, NULL);
		if (L_16)
		{
			goto IL_0141;
		}
	}
	{
		goto IL_01cd;
	}

IL_00b1:
	{
		String_t* L_17 = V_1;
		bool L_18;
		L_18 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_17, _stringLiteral27906925D50A15B990B586241F08C8ED14226340, NULL);
		if (L_18)
		{
			goto IL_0155;
		}
	}
	{
		goto IL_01cd;
	}

IL_00c6:
	{
		String_t* L_19 = V_1;
		bool L_20;
		L_20 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_19, _stringLiteralD4A11128F810D574390DA344F324014E964D1876, NULL);
		if (L_20)
		{
			goto IL_0169;
		}
	}
	{
		goto IL_01cd;
	}

IL_00db:
	{
		String_t* L_21 = V_1;
		bool L_22;
		L_22 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_21, _stringLiteralB5831A880405F69C8EF7F43534BF4D880F2B9A12, NULL);
		if (L_22)
		{
			goto IL_017d;
		}
	}
	{
		goto IL_01cd;
	}

IL_00f0:
	{
		String_t* L_23 = V_1;
		bool L_24;
		L_24 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_23, _stringLiteral36587A0761A180514C267B50EA888F89871F71DF, NULL);
		if (L_24)
		{
			goto IL_0191;
		}
	}
	{
		goto IL_01cd;
	}

IL_0105:
	{
		String_t* L_25 = V_1;
		bool L_26;
		L_26 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_25, _stringLiteral87E6319336195D789899F4791CCD5F2437BCC0B0, NULL);
		if (L_26)
		{
			goto IL_01a5;
		}
	}
	{
		goto IL_01cd;
	}

IL_011a:
	{
		String_t* L_27 = V_1;
		bool L_28;
		L_28 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_27, _stringLiteral6C9DED8087C891AE33ACFFCE806DBFF63795F56F, NULL);
		if (L_28)
		{
			goto IL_01b9;
		}
	}
	{
		goto IL_01cd;
	}

IL_012f:
	{
		// instance.mode = reader.Read<UnityEngine.ParticleSystemCurveMode>();
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_29 = ___reader0;
		NullCheck(L_29);
		int32_t L_30;
		L_30 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisParticleSystemCurveMode_t8BE38B5D6B050709BAE31B5556CFC3DA69FC8405_m066E552CFA7510B509D2175EB72B2402EC615596_RuntimeMethod_var, L_29);
		MinMaxCurve_set_mode_m6870C4CA0FE7AF1029F45040B827C9F0A6A80A86((&V_0), L_30, NULL);
		// break;
		goto IL_01d3;
	}

IL_0141:
	{
		// instance.curveMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_31 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_32 = ((ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_31);
		float L_33;
		L_33 = GenericVirtualFuncInvoker1< float, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mA86928BC888E342D2C2644535E3399952F5077ED_RuntimeMethod_var, L_31, L_32);
		MinMaxCurve_set_curveMultiplier_m9FCF7F21AECE399ACD9FEB9ADEEBD93FD12DDABC((&V_0), L_33, NULL);
		// break;
		goto IL_01d3;
	}

IL_0155:
	{
		// instance.curveMax = reader.Read<UnityEngine.AnimationCurve>(ES3Type_AnimationCurve.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_34 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_35 = ((ES3Type_AnimationCurve_tF623128FF51FC3C48A6749619C4915CBE2995CA4_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_AnimationCurve_tF623128FF51FC3C48A6749619C4915CBE2995CA4_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_34);
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_36;
		L_36 = GenericVirtualFuncInvoker1< AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354*, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisAnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_m10F5F132336385185365E73EF668D8D369D3A4A1_RuntimeMethod_var, L_34, L_35);
		MinMaxCurve_set_curveMax_m39B9E8AE4E62E874DA99AA7108C2C47C6CA333DF((&V_0), L_36, NULL);
		// break;
		goto IL_01d3;
	}

IL_0169:
	{
		// instance.curveMin = reader.Read<UnityEngine.AnimationCurve>(ES3Type_AnimationCurve.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_37 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_38 = ((ES3Type_AnimationCurve_tF623128FF51FC3C48A6749619C4915CBE2995CA4_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_AnimationCurve_tF623128FF51FC3C48A6749619C4915CBE2995CA4_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_37);
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_39;
		L_39 = GenericVirtualFuncInvoker1< AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354*, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisAnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_m10F5F132336385185365E73EF668D8D369D3A4A1_RuntimeMethod_var, L_37, L_38);
		MinMaxCurve_set_curveMin_m17ADE22B882B75CBE87836C85C477A05122D9E75((&V_0), L_39, NULL);
		// break;
		goto IL_01d3;
	}

IL_017d:
	{
		// instance.constantMax = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_40 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_41 = ((ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_40);
		float L_42;
		L_42 = GenericVirtualFuncInvoker1< float, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mA86928BC888E342D2C2644535E3399952F5077ED_RuntimeMethod_var, L_40, L_41);
		MinMaxCurve_set_constantMax_mDB7B011E5B1EA76429B2A1FFDE6C06E82D290DC1((&V_0), L_42, NULL);
		// break;
		goto IL_01d3;
	}

IL_0191:
	{
		// instance.constantMin = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_43 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_44 = ((ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_43);
		float L_45;
		L_45 = GenericVirtualFuncInvoker1< float, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mA86928BC888E342D2C2644535E3399952F5077ED_RuntimeMethod_var, L_43, L_44);
		MinMaxCurve_set_constantMin_mBF7CF2A9F167AD06C327EE6EA37BA427E1CE548C((&V_0), L_45, NULL);
		// break;
		goto IL_01d3;
	}

IL_01a5:
	{
		// instance.constant = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_46 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_47 = ((ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_46);
		float L_48;
		L_48 = GenericVirtualFuncInvoker1< float, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mA86928BC888E342D2C2644535E3399952F5077ED_RuntimeMethod_var, L_46, L_47);
		MinMaxCurve_set_constant_mB6E4F22F67D3ED641FEBB387351F17451BB6A897((&V_0), L_48, NULL);
		// break;
		goto IL_01d3;
	}

IL_01b9:
	{
		// instance.curve = reader.Read<UnityEngine.AnimationCurve>(ES3Type_AnimationCurve.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_49 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_50 = ((ES3Type_AnimationCurve_tF623128FF51FC3C48A6749619C4915CBE2995CA4_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_AnimationCurve_tF623128FF51FC3C48A6749619C4915CBE2995CA4_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_49);
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_51;
		L_51 = GenericVirtualFuncInvoker1< AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354*, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisAnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_m10F5F132336385185365E73EF668D8D369D3A4A1_RuntimeMethod_var, L_49, L_50);
		MinMaxCurve_set_curve_mC745A6526FBF122F96DA597997DFAB9D7D2529BF((&V_0), L_51, NULL);
		// break;
		goto IL_01d3;
	}

IL_01cd:
	{
		// reader.Skip();
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_52 = ___reader0;
		NullCheck(L_52);
		VirtualActionInvoker0::Invoke(41 /* System.Void ES3Reader::Skip() */, L_52);
	}

IL_01d3:
	{
		// while((propertyName = reader.ReadPropertyName()) != null)
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_53 = ___reader0;
		NullCheck(L_53);
		String_t* L_54;
		L_54 = VirtualFuncInvoker0< String_t* >::Invoke(21 /* System.String ES3Reader::ReadPropertyName() */, L_53);
		String_t* L_55 = L_54;
		V_1 = L_55;
		if (L_55)
		{
			goto IL_000d;
		}
	}
	{
		// return instance;
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_56 = V_0;
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_57 = L_56;
		RuntimeObject* L_58 = Box(MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_il2cpp_TypeInfo_var, &L_57);
		return L_58;
	}
}
// System.Object ES3Types.ES3Type_MinMaxCurve::Read<UnityEngine.Vector2>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_MinMaxCurve_Read_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_mDD5A9EF9A6E11A75D32DB56D4649D8A04AC15A4A_gshared (ES3Type_MinMaxCurve_t1C147718750ACBECE5D2B7F545D2A434A3C5409B* __this, ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisAnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_m10F5F132336385185365E73EF668D8D369D3A4A1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisParticleSystemCurveMode_t8BE38B5D6B050709BAE31B5556CFC3DA69FC8405_m066E552CFA7510B509D2175EB72B2402EC615596_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mA86928BC888E342D2C2644535E3399952F5077ED_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_AnimationCurve_tF623128FF51FC3C48A6749619C4915CBE2995CA4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral227C22F51E4B6583CFC54387461605DDBBB00D14);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral27906925D50A15B990B586241F08C8ED14226340);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral36587A0761A180514C267B50EA888F89871F71DF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6C9DED8087C891AE33ACFFCE806DBFF63795F56F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral87E6319336195D789899F4791CCD5F2437BCC0B0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAF248E82BE9EBA1ADBF067429FAEE5A5B6E05A74);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB5831A880405F69C8EF7F43534BF4D880F2B9A12);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD4A11128F810D574390DA344F324014E964D1876);
		s_Il2CppMethodInitialized = true;
	}
	MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	uint32_t V_2 = 0;
	{
		// var instance = new UnityEngine.ParticleSystem.MinMaxCurve();
		il2cpp_codegen_initobj((&V_0), sizeof(MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23));
		goto IL_01d3;
	}

IL_000d:
	{
		String_t* L_0 = V_1;
		uint32_t L_1;
		L_1 = U3CPrivateImplementationDetailsU3E_ComputeStringHash_m6EA1F233618497AEFF8902A5EDFA24C74E2F2876(L_0, NULL);
		V_2 = L_1;
		uint32_t L_2 = V_2;
		if ((!(((uint32_t)L_2) <= ((uint32_t)((int32_t)-725866558)))))
		{
			goto IL_0054;
		}
	}
	{
		uint32_t L_3 = V_2;
		if ((!(((uint32_t)L_3) <= ((uint32_t)((int32_t)740975083)))))
		{
			goto IL_003c;
		}
	}
	{
		uint32_t L_4 = V_2;
		if ((((int32_t)L_4) == ((int32_t)((int32_t)110225957))))
		{
			goto IL_0105;
		}
	}
	{
		uint32_t L_5 = V_2;
		if ((((int32_t)L_5) == ((int32_t)((int32_t)740975083))))
		{
			goto IL_009c;
		}
	}
	{
		goto IL_01cd;
	}

IL_003c:
	{
		uint32_t L_6 = V_2;
		if ((((int32_t)L_6) == ((int32_t)((int32_t)-1724381676))))
		{
			goto IL_011a;
		}
	}
	{
		uint32_t L_7 = V_2;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)-725866558))))
		{
			goto IL_00b1;
		}
	}
	{
		goto IL_01cd;
	}

IL_0054:
	{
		uint32_t L_8 = V_2;
		if ((!(((uint32_t)L_8) <= ((uint32_t)((int32_t)-559473464)))))
		{
			goto IL_0074;
		}
	}
	{
		uint32_t L_9 = V_2;
		if ((((int32_t)L_9) == ((int32_t)((int32_t)-581632105))))
		{
			goto IL_00f0;
		}
	}
	{
		uint32_t L_10 = V_2;
		if ((((int32_t)L_10) == ((int32_t)((int32_t)-559473464))))
		{
			goto IL_00c6;
		}
	}
	{
		goto IL_01cd;
	}

IL_0074:
	{
		uint32_t L_11 = V_2;
		if ((((int32_t)L_11) == ((int32_t)((int32_t)-345465511))))
		{
			goto IL_00db;
		}
	}
	{
		uint32_t L_12 = V_2;
		if ((!(((uint32_t)L_12) == ((uint32_t)((int32_t)-328277998)))))
		{
			goto IL_01cd;
		}
	}
	{
		String_t* L_13 = V_1;
		bool L_14;
		L_14 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_13, _stringLiteralAF248E82BE9EBA1ADBF067429FAEE5A5B6E05A74, NULL);
		if (L_14)
		{
			goto IL_012f;
		}
	}
	{
		goto IL_01cd;
	}

IL_009c:
	{
		String_t* L_15 = V_1;
		bool L_16;
		L_16 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_15, _stringLiteral227C22F51E4B6583CFC54387461605DDBBB00D14, NULL);
		if (L_16)
		{
			goto IL_0141;
		}
	}
	{
		goto IL_01cd;
	}

IL_00b1:
	{
		String_t* L_17 = V_1;
		bool L_18;
		L_18 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_17, _stringLiteral27906925D50A15B990B586241F08C8ED14226340, NULL);
		if (L_18)
		{
			goto IL_0155;
		}
	}
	{
		goto IL_01cd;
	}

IL_00c6:
	{
		String_t* L_19 = V_1;
		bool L_20;
		L_20 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_19, _stringLiteralD4A11128F810D574390DA344F324014E964D1876, NULL);
		if (L_20)
		{
			goto IL_0169;
		}
	}
	{
		goto IL_01cd;
	}

IL_00db:
	{
		String_t* L_21 = V_1;
		bool L_22;
		L_22 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_21, _stringLiteralB5831A880405F69C8EF7F43534BF4D880F2B9A12, NULL);
		if (L_22)
		{
			goto IL_017d;
		}
	}
	{
		goto IL_01cd;
	}

IL_00f0:
	{
		String_t* L_23 = V_1;
		bool L_24;
		L_24 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_23, _stringLiteral36587A0761A180514C267B50EA888F89871F71DF, NULL);
		if (L_24)
		{
			goto IL_0191;
		}
	}
	{
		goto IL_01cd;
	}

IL_0105:
	{
		String_t* L_25 = V_1;
		bool L_26;
		L_26 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_25, _stringLiteral87E6319336195D789899F4791CCD5F2437BCC0B0, NULL);
		if (L_26)
		{
			goto IL_01a5;
		}
	}
	{
		goto IL_01cd;
	}

IL_011a:
	{
		String_t* L_27 = V_1;
		bool L_28;
		L_28 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_27, _stringLiteral6C9DED8087C891AE33ACFFCE806DBFF63795F56F, NULL);
		if (L_28)
		{
			goto IL_01b9;
		}
	}
	{
		goto IL_01cd;
	}

IL_012f:
	{
		// instance.mode = reader.Read<UnityEngine.ParticleSystemCurveMode>();
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_29 = ___reader0;
		NullCheck(L_29);
		int32_t L_30;
		L_30 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisParticleSystemCurveMode_t8BE38B5D6B050709BAE31B5556CFC3DA69FC8405_m066E552CFA7510B509D2175EB72B2402EC615596_RuntimeMethod_var, L_29);
		MinMaxCurve_set_mode_m6870C4CA0FE7AF1029F45040B827C9F0A6A80A86((&V_0), L_30, NULL);
		// break;
		goto IL_01d3;
	}

IL_0141:
	{
		// instance.curveMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_31 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_32 = ((ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_31);
		float L_33;
		L_33 = GenericVirtualFuncInvoker1< float, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mA86928BC888E342D2C2644535E3399952F5077ED_RuntimeMethod_var, L_31, L_32);
		MinMaxCurve_set_curveMultiplier_m9FCF7F21AECE399ACD9FEB9ADEEBD93FD12DDABC((&V_0), L_33, NULL);
		// break;
		goto IL_01d3;
	}

IL_0155:
	{
		// instance.curveMax = reader.Read<UnityEngine.AnimationCurve>(ES3Type_AnimationCurve.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_34 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_35 = ((ES3Type_AnimationCurve_tF623128FF51FC3C48A6749619C4915CBE2995CA4_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_AnimationCurve_tF623128FF51FC3C48A6749619C4915CBE2995CA4_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_34);
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_36;
		L_36 = GenericVirtualFuncInvoker1< AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354*, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisAnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_m10F5F132336385185365E73EF668D8D369D3A4A1_RuntimeMethod_var, L_34, L_35);
		MinMaxCurve_set_curveMax_m39B9E8AE4E62E874DA99AA7108C2C47C6CA333DF((&V_0), L_36, NULL);
		// break;
		goto IL_01d3;
	}

IL_0169:
	{
		// instance.curveMin = reader.Read<UnityEngine.AnimationCurve>(ES3Type_AnimationCurve.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_37 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_38 = ((ES3Type_AnimationCurve_tF623128FF51FC3C48A6749619C4915CBE2995CA4_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_AnimationCurve_tF623128FF51FC3C48A6749619C4915CBE2995CA4_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_37);
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_39;
		L_39 = GenericVirtualFuncInvoker1< AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354*, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisAnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_m10F5F132336385185365E73EF668D8D369D3A4A1_RuntimeMethod_var, L_37, L_38);
		MinMaxCurve_set_curveMin_m17ADE22B882B75CBE87836C85C477A05122D9E75((&V_0), L_39, NULL);
		// break;
		goto IL_01d3;
	}

IL_017d:
	{
		// instance.constantMax = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_40 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_41 = ((ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_40);
		float L_42;
		L_42 = GenericVirtualFuncInvoker1< float, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mA86928BC888E342D2C2644535E3399952F5077ED_RuntimeMethod_var, L_40, L_41);
		MinMaxCurve_set_constantMax_mDB7B011E5B1EA76429B2A1FFDE6C06E82D290DC1((&V_0), L_42, NULL);
		// break;
		goto IL_01d3;
	}

IL_0191:
	{
		// instance.constantMin = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_43 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_44 = ((ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_43);
		float L_45;
		L_45 = GenericVirtualFuncInvoker1< float, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mA86928BC888E342D2C2644535E3399952F5077ED_RuntimeMethod_var, L_43, L_44);
		MinMaxCurve_set_constantMin_mBF7CF2A9F167AD06C327EE6EA37BA427E1CE548C((&V_0), L_45, NULL);
		// break;
		goto IL_01d3;
	}

IL_01a5:
	{
		// instance.constant = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_46 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_47 = ((ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_46);
		float L_48;
		L_48 = GenericVirtualFuncInvoker1< float, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mA86928BC888E342D2C2644535E3399952F5077ED_RuntimeMethod_var, L_46, L_47);
		MinMaxCurve_set_constant_mB6E4F22F67D3ED641FEBB387351F17451BB6A897((&V_0), L_48, NULL);
		// break;
		goto IL_01d3;
	}

IL_01b9:
	{
		// instance.curve = reader.Read<UnityEngine.AnimationCurve>(ES3Type_AnimationCurve.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_49 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_50 = ((ES3Type_AnimationCurve_tF623128FF51FC3C48A6749619C4915CBE2995CA4_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_AnimationCurve_tF623128FF51FC3C48A6749619C4915CBE2995CA4_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_49);
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_51;
		L_51 = GenericVirtualFuncInvoker1< AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354*, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisAnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_m10F5F132336385185365E73EF668D8D369D3A4A1_RuntimeMethod_var, L_49, L_50);
		MinMaxCurve_set_curve_mC745A6526FBF122F96DA597997DFAB9D7D2529BF((&V_0), L_51, NULL);
		// break;
		goto IL_01d3;
	}

IL_01cd:
	{
		// reader.Skip();
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_52 = ___reader0;
		NullCheck(L_52);
		VirtualActionInvoker0::Invoke(41 /* System.Void ES3Reader::Skip() */, L_52);
	}

IL_01d3:
	{
		// while((propertyName = reader.ReadPropertyName()) != null)
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_53 = ___reader0;
		NullCheck(L_53);
		String_t* L_54;
		L_54 = VirtualFuncInvoker0< String_t* >::Invoke(21 /* System.String ES3Reader::ReadPropertyName() */, L_53);
		String_t* L_55 = L_54;
		V_1 = L_55;
		if (L_55)
		{
			goto IL_000d;
		}
	}
	{
		// return instance;
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_56 = V_0;
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_57 = L_56;
		RuntimeObject* L_58 = Box(MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_il2cpp_TypeInfo_var, &L_57);
		return L_58;
	}
}
// System.Object ES3Types.ES3Type_MinMaxCurve::Read<UnityEngine.Vector3>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_MinMaxCurve_Read_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_mA5B3333712D3473BB5C5D933C4805DC91E3EB8C4_gshared (ES3Type_MinMaxCurve_t1C147718750ACBECE5D2B7F545D2A434A3C5409B* __this, ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisAnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_m10F5F132336385185365E73EF668D8D369D3A4A1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisParticleSystemCurveMode_t8BE38B5D6B050709BAE31B5556CFC3DA69FC8405_m066E552CFA7510B509D2175EB72B2402EC615596_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mA86928BC888E342D2C2644535E3399952F5077ED_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_AnimationCurve_tF623128FF51FC3C48A6749619C4915CBE2995CA4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral227C22F51E4B6583CFC54387461605DDBBB00D14);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral27906925D50A15B990B586241F08C8ED14226340);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral36587A0761A180514C267B50EA888F89871F71DF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6C9DED8087C891AE33ACFFCE806DBFF63795F56F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral87E6319336195D789899F4791CCD5F2437BCC0B0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAF248E82BE9EBA1ADBF067429FAEE5A5B6E05A74);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB5831A880405F69C8EF7F43534BF4D880F2B9A12);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD4A11128F810D574390DA344F324014E964D1876);
		s_Il2CppMethodInitialized = true;
	}
	MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	uint32_t V_2 = 0;
	{
		// var instance = new UnityEngine.ParticleSystem.MinMaxCurve();
		il2cpp_codegen_initobj((&V_0), sizeof(MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23));
		goto IL_01d3;
	}

IL_000d:
	{
		String_t* L_0 = V_1;
		uint32_t L_1;
		L_1 = U3CPrivateImplementationDetailsU3E_ComputeStringHash_m6EA1F233618497AEFF8902A5EDFA24C74E2F2876(L_0, NULL);
		V_2 = L_1;
		uint32_t L_2 = V_2;
		if ((!(((uint32_t)L_2) <= ((uint32_t)((int32_t)-725866558)))))
		{
			goto IL_0054;
		}
	}
	{
		uint32_t L_3 = V_2;
		if ((!(((uint32_t)L_3) <= ((uint32_t)((int32_t)740975083)))))
		{
			goto IL_003c;
		}
	}
	{
		uint32_t L_4 = V_2;
		if ((((int32_t)L_4) == ((int32_t)((int32_t)110225957))))
		{
			goto IL_0105;
		}
	}
	{
		uint32_t L_5 = V_2;
		if ((((int32_t)L_5) == ((int32_t)((int32_t)740975083))))
		{
			goto IL_009c;
		}
	}
	{
		goto IL_01cd;
	}

IL_003c:
	{
		uint32_t L_6 = V_2;
		if ((((int32_t)L_6) == ((int32_t)((int32_t)-1724381676))))
		{
			goto IL_011a;
		}
	}
	{
		uint32_t L_7 = V_2;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)-725866558))))
		{
			goto IL_00b1;
		}
	}
	{
		goto IL_01cd;
	}

IL_0054:
	{
		uint32_t L_8 = V_2;
		if ((!(((uint32_t)L_8) <= ((uint32_t)((int32_t)-559473464)))))
		{
			goto IL_0074;
		}
	}
	{
		uint32_t L_9 = V_2;
		if ((((int32_t)L_9) == ((int32_t)((int32_t)-581632105))))
		{
			goto IL_00f0;
		}
	}
	{
		uint32_t L_10 = V_2;
		if ((((int32_t)L_10) == ((int32_t)((int32_t)-559473464))))
		{
			goto IL_00c6;
		}
	}
	{
		goto IL_01cd;
	}

IL_0074:
	{
		uint32_t L_11 = V_2;
		if ((((int32_t)L_11) == ((int32_t)((int32_t)-345465511))))
		{
			goto IL_00db;
		}
	}
	{
		uint32_t L_12 = V_2;
		if ((!(((uint32_t)L_12) == ((uint32_t)((int32_t)-328277998)))))
		{
			goto IL_01cd;
		}
	}
	{
		String_t* L_13 = V_1;
		bool L_14;
		L_14 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_13, _stringLiteralAF248E82BE9EBA1ADBF067429FAEE5A5B6E05A74, NULL);
		if (L_14)
		{
			goto IL_012f;
		}
	}
	{
		goto IL_01cd;
	}

IL_009c:
	{
		String_t* L_15 = V_1;
		bool L_16;
		L_16 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_15, _stringLiteral227C22F51E4B6583CFC54387461605DDBBB00D14, NULL);
		if (L_16)
		{
			goto IL_0141;
		}
	}
	{
		goto IL_01cd;
	}

IL_00b1:
	{
		String_t* L_17 = V_1;
		bool L_18;
		L_18 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_17, _stringLiteral27906925D50A15B990B586241F08C8ED14226340, NULL);
		if (L_18)
		{
			goto IL_0155;
		}
	}
	{
		goto IL_01cd;
	}

IL_00c6:
	{
		String_t* L_19 = V_1;
		bool L_20;
		L_20 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_19, _stringLiteralD4A11128F810D574390DA344F324014E964D1876, NULL);
		if (L_20)
		{
			goto IL_0169;
		}
	}
	{
		goto IL_01cd;
	}

IL_00db:
	{
		String_t* L_21 = V_1;
		bool L_22;
		L_22 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_21, _stringLiteralB5831A880405F69C8EF7F43534BF4D880F2B9A12, NULL);
		if (L_22)
		{
			goto IL_017d;
		}
	}
	{
		goto IL_01cd;
	}

IL_00f0:
	{
		String_t* L_23 = V_1;
		bool L_24;
		L_24 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_23, _stringLiteral36587A0761A180514C267B50EA888F89871F71DF, NULL);
		if (L_24)
		{
			goto IL_0191;
		}
	}
	{
		goto IL_01cd;
	}

IL_0105:
	{
		String_t* L_25 = V_1;
		bool L_26;
		L_26 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_25, _stringLiteral87E6319336195D789899F4791CCD5F2437BCC0B0, NULL);
		if (L_26)
		{
			goto IL_01a5;
		}
	}
	{
		goto IL_01cd;
	}

IL_011a:
	{
		String_t* L_27 = V_1;
		bool L_28;
		L_28 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_27, _stringLiteral6C9DED8087C891AE33ACFFCE806DBFF63795F56F, NULL);
		if (L_28)
		{
			goto IL_01b9;
		}
	}
	{
		goto IL_01cd;
	}

IL_012f:
	{
		// instance.mode = reader.Read<UnityEngine.ParticleSystemCurveMode>();
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_29 = ___reader0;
		NullCheck(L_29);
		int32_t L_30;
		L_30 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisParticleSystemCurveMode_t8BE38B5D6B050709BAE31B5556CFC3DA69FC8405_m066E552CFA7510B509D2175EB72B2402EC615596_RuntimeMethod_var, L_29);
		MinMaxCurve_set_mode_m6870C4CA0FE7AF1029F45040B827C9F0A6A80A86((&V_0), L_30, NULL);
		// break;
		goto IL_01d3;
	}

IL_0141:
	{
		// instance.curveMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_31 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_32 = ((ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_31);
		float L_33;
		L_33 = GenericVirtualFuncInvoker1< float, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mA86928BC888E342D2C2644535E3399952F5077ED_RuntimeMethod_var, L_31, L_32);
		MinMaxCurve_set_curveMultiplier_m9FCF7F21AECE399ACD9FEB9ADEEBD93FD12DDABC((&V_0), L_33, NULL);
		// break;
		goto IL_01d3;
	}

IL_0155:
	{
		// instance.curveMax = reader.Read<UnityEngine.AnimationCurve>(ES3Type_AnimationCurve.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_34 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_35 = ((ES3Type_AnimationCurve_tF623128FF51FC3C48A6749619C4915CBE2995CA4_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_AnimationCurve_tF623128FF51FC3C48A6749619C4915CBE2995CA4_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_34);
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_36;
		L_36 = GenericVirtualFuncInvoker1< AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354*, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisAnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_m10F5F132336385185365E73EF668D8D369D3A4A1_RuntimeMethod_var, L_34, L_35);
		MinMaxCurve_set_curveMax_m39B9E8AE4E62E874DA99AA7108C2C47C6CA333DF((&V_0), L_36, NULL);
		// break;
		goto IL_01d3;
	}

IL_0169:
	{
		// instance.curveMin = reader.Read<UnityEngine.AnimationCurve>(ES3Type_AnimationCurve.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_37 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_38 = ((ES3Type_AnimationCurve_tF623128FF51FC3C48A6749619C4915CBE2995CA4_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_AnimationCurve_tF623128FF51FC3C48A6749619C4915CBE2995CA4_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_37);
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_39;
		L_39 = GenericVirtualFuncInvoker1< AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354*, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisAnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_m10F5F132336385185365E73EF668D8D369D3A4A1_RuntimeMethod_var, L_37, L_38);
		MinMaxCurve_set_curveMin_m17ADE22B882B75CBE87836C85C477A05122D9E75((&V_0), L_39, NULL);
		// break;
		goto IL_01d3;
	}

IL_017d:
	{
		// instance.constantMax = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_40 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_41 = ((ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_40);
		float L_42;
		L_42 = GenericVirtualFuncInvoker1< float, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mA86928BC888E342D2C2644535E3399952F5077ED_RuntimeMethod_var, L_40, L_41);
		MinMaxCurve_set_constantMax_mDB7B011E5B1EA76429B2A1FFDE6C06E82D290DC1((&V_0), L_42, NULL);
		// break;
		goto IL_01d3;
	}

IL_0191:
	{
		// instance.constantMin = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_43 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_44 = ((ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_43);
		float L_45;
		L_45 = GenericVirtualFuncInvoker1< float, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mA86928BC888E342D2C2644535E3399952F5077ED_RuntimeMethod_var, L_43, L_44);
		MinMaxCurve_set_constantMin_mBF7CF2A9F167AD06C327EE6EA37BA427E1CE548C((&V_0), L_45, NULL);
		// break;
		goto IL_01d3;
	}

IL_01a5:
	{
		// instance.constant = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_46 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_47 = ((ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_46);
		float L_48;
		L_48 = GenericVirtualFuncInvoker1< float, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mA86928BC888E342D2C2644535E3399952F5077ED_RuntimeMethod_var, L_46, L_47);
		MinMaxCurve_set_constant_mB6E4F22F67D3ED641FEBB387351F17451BB6A897((&V_0), L_48, NULL);
		// break;
		goto IL_01d3;
	}

IL_01b9:
	{
		// instance.curve = reader.Read<UnityEngine.AnimationCurve>(ES3Type_AnimationCurve.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_49 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_50 = ((ES3Type_AnimationCurve_tF623128FF51FC3C48A6749619C4915CBE2995CA4_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_AnimationCurve_tF623128FF51FC3C48A6749619C4915CBE2995CA4_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_49);
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_51;
		L_51 = GenericVirtualFuncInvoker1< AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354*, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisAnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_m10F5F132336385185365E73EF668D8D369D3A4A1_RuntimeMethod_var, L_49, L_50);
		MinMaxCurve_set_curve_mC745A6526FBF122F96DA597997DFAB9D7D2529BF((&V_0), L_51, NULL);
		// break;
		goto IL_01d3;
	}

IL_01cd:
	{
		// reader.Skip();
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_52 = ___reader0;
		NullCheck(L_52);
		VirtualActionInvoker0::Invoke(41 /* System.Void ES3Reader::Skip() */, L_52);
	}

IL_01d3:
	{
		// while((propertyName = reader.ReadPropertyName()) != null)
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_53 = ___reader0;
		NullCheck(L_53);
		String_t* L_54;
		L_54 = VirtualFuncInvoker0< String_t* >::Invoke(21 /* System.String ES3Reader::ReadPropertyName() */, L_53);
		String_t* L_55 = L_54;
		V_1 = L_55;
		if (L_55)
		{
			goto IL_000d;
		}
	}
	{
		// return instance;
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_56 = V_0;
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_57 = L_56;
		RuntimeObject* L_58 = Box(MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_il2cpp_TypeInfo_var, &L_57);
		return L_58;
	}
}
// System.Object ES3Types.ES3Type_MinMaxCurve::Read<UnityEngine.Vector4>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_MinMaxCurve_Read_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_m9559240F9905B239D4EC33186CA6664E4575EAED_gshared (ES3Type_MinMaxCurve_t1C147718750ACBECE5D2B7F545D2A434A3C5409B* __this, ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisAnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_m10F5F132336385185365E73EF668D8D369D3A4A1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisParticleSystemCurveMode_t8BE38B5D6B050709BAE31B5556CFC3DA69FC8405_m066E552CFA7510B509D2175EB72B2402EC615596_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mA86928BC888E342D2C2644535E3399952F5077ED_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_AnimationCurve_tF623128FF51FC3C48A6749619C4915CBE2995CA4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral227C22F51E4B6583CFC54387461605DDBBB00D14);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral27906925D50A15B990B586241F08C8ED14226340);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral36587A0761A180514C267B50EA888F89871F71DF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6C9DED8087C891AE33ACFFCE806DBFF63795F56F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral87E6319336195D789899F4791CCD5F2437BCC0B0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAF248E82BE9EBA1ADBF067429FAEE5A5B6E05A74);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB5831A880405F69C8EF7F43534BF4D880F2B9A12);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD4A11128F810D574390DA344F324014E964D1876);
		s_Il2CppMethodInitialized = true;
	}
	MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	uint32_t V_2 = 0;
	{
		// var instance = new UnityEngine.ParticleSystem.MinMaxCurve();
		il2cpp_codegen_initobj((&V_0), sizeof(MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23));
		goto IL_01d3;
	}

IL_000d:
	{
		String_t* L_0 = V_1;
		uint32_t L_1;
		L_1 = U3CPrivateImplementationDetailsU3E_ComputeStringHash_m6EA1F233618497AEFF8902A5EDFA24C74E2F2876(L_0, NULL);
		V_2 = L_1;
		uint32_t L_2 = V_2;
		if ((!(((uint32_t)L_2) <= ((uint32_t)((int32_t)-725866558)))))
		{
			goto IL_0054;
		}
	}
	{
		uint32_t L_3 = V_2;
		if ((!(((uint32_t)L_3) <= ((uint32_t)((int32_t)740975083)))))
		{
			goto IL_003c;
		}
	}
	{
		uint32_t L_4 = V_2;
		if ((((int32_t)L_4) == ((int32_t)((int32_t)110225957))))
		{
			goto IL_0105;
		}
	}
	{
		uint32_t L_5 = V_2;
		if ((((int32_t)L_5) == ((int32_t)((int32_t)740975083))))
		{
			goto IL_009c;
		}
	}
	{
		goto IL_01cd;
	}

IL_003c:
	{
		uint32_t L_6 = V_2;
		if ((((int32_t)L_6) == ((int32_t)((int32_t)-1724381676))))
		{
			goto IL_011a;
		}
	}
	{
		uint32_t L_7 = V_2;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)-725866558))))
		{
			goto IL_00b1;
		}
	}
	{
		goto IL_01cd;
	}

IL_0054:
	{
		uint32_t L_8 = V_2;
		if ((!(((uint32_t)L_8) <= ((uint32_t)((int32_t)-559473464)))))
		{
			goto IL_0074;
		}
	}
	{
		uint32_t L_9 = V_2;
		if ((((int32_t)L_9) == ((int32_t)((int32_t)-581632105))))
		{
			goto IL_00f0;
		}
	}
	{
		uint32_t L_10 = V_2;
		if ((((int32_t)L_10) == ((int32_t)((int32_t)-559473464))))
		{
			goto IL_00c6;
		}
	}
	{
		goto IL_01cd;
	}

IL_0074:
	{
		uint32_t L_11 = V_2;
		if ((((int32_t)L_11) == ((int32_t)((int32_t)-345465511))))
		{
			goto IL_00db;
		}
	}
	{
		uint32_t L_12 = V_2;
		if ((!(((uint32_t)L_12) == ((uint32_t)((int32_t)-328277998)))))
		{
			goto IL_01cd;
		}
	}
	{
		String_t* L_13 = V_1;
		bool L_14;
		L_14 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_13, _stringLiteralAF248E82BE9EBA1ADBF067429FAEE5A5B6E05A74, NULL);
		if (L_14)
		{
			goto IL_012f;
		}
	}
	{
		goto IL_01cd;
	}

IL_009c:
	{
		String_t* L_15 = V_1;
		bool L_16;
		L_16 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_15, _stringLiteral227C22F51E4B6583CFC54387461605DDBBB00D14, NULL);
		if (L_16)
		{
			goto IL_0141;
		}
	}
	{
		goto IL_01cd;
	}

IL_00b1:
	{
		String_t* L_17 = V_1;
		bool L_18;
		L_18 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_17, _stringLiteral27906925D50A15B990B586241F08C8ED14226340, NULL);
		if (L_18)
		{
			goto IL_0155;
		}
	}
	{
		goto IL_01cd;
	}

IL_00c6:
	{
		String_t* L_19 = V_1;
		bool L_20;
		L_20 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_19, _stringLiteralD4A11128F810D574390DA344F324014E964D1876, NULL);
		if (L_20)
		{
			goto IL_0169;
		}
	}
	{
		goto IL_01cd;
	}

IL_00db:
	{
		String_t* L_21 = V_1;
		bool L_22;
		L_22 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_21, _stringLiteralB5831A880405F69C8EF7F43534BF4D880F2B9A12, NULL);
		if (L_22)
		{
			goto IL_017d;
		}
	}
	{
		goto IL_01cd;
	}

IL_00f0:
	{
		String_t* L_23 = V_1;
		bool L_24;
		L_24 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_23, _stringLiteral36587A0761A180514C267B50EA888F89871F71DF, NULL);
		if (L_24)
		{
			goto IL_0191;
		}
	}
	{
		goto IL_01cd;
	}

IL_0105:
	{
		String_t* L_25 = V_1;
		bool L_26;
		L_26 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_25, _stringLiteral87E6319336195D789899F4791CCD5F2437BCC0B0, NULL);
		if (L_26)
		{
			goto IL_01a5;
		}
	}
	{
		goto IL_01cd;
	}

IL_011a:
	{
		String_t* L_27 = V_1;
		bool L_28;
		L_28 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_27, _stringLiteral6C9DED8087C891AE33ACFFCE806DBFF63795F56F, NULL);
		if (L_28)
		{
			goto IL_01b9;
		}
	}
	{
		goto IL_01cd;
	}

IL_012f:
	{
		// instance.mode = reader.Read<UnityEngine.ParticleSystemCurveMode>();
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_29 = ___reader0;
		NullCheck(L_29);
		int32_t L_30;
		L_30 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisParticleSystemCurveMode_t8BE38B5D6B050709BAE31B5556CFC3DA69FC8405_m066E552CFA7510B509D2175EB72B2402EC615596_RuntimeMethod_var, L_29);
		MinMaxCurve_set_mode_m6870C4CA0FE7AF1029F45040B827C9F0A6A80A86((&V_0), L_30, NULL);
		// break;
		goto IL_01d3;
	}

IL_0141:
	{
		// instance.curveMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_31 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_32 = ((ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_31);
		float L_33;
		L_33 = GenericVirtualFuncInvoker1< float, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mA86928BC888E342D2C2644535E3399952F5077ED_RuntimeMethod_var, L_31, L_32);
		MinMaxCurve_set_curveMultiplier_m9FCF7F21AECE399ACD9FEB9ADEEBD93FD12DDABC((&V_0), L_33, NULL);
		// break;
		goto IL_01d3;
	}

IL_0155:
	{
		// instance.curveMax = reader.Read<UnityEngine.AnimationCurve>(ES3Type_AnimationCurve.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_34 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_35 = ((ES3Type_AnimationCurve_tF623128FF51FC3C48A6749619C4915CBE2995CA4_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_AnimationCurve_tF623128FF51FC3C48A6749619C4915CBE2995CA4_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_34);
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_36;
		L_36 = GenericVirtualFuncInvoker1< AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354*, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisAnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_m10F5F132336385185365E73EF668D8D369D3A4A1_RuntimeMethod_var, L_34, L_35);
		MinMaxCurve_set_curveMax_m39B9E8AE4E62E874DA99AA7108C2C47C6CA333DF((&V_0), L_36, NULL);
		// break;
		goto IL_01d3;
	}

IL_0169:
	{
		// instance.curveMin = reader.Read<UnityEngine.AnimationCurve>(ES3Type_AnimationCurve.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_37 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_38 = ((ES3Type_AnimationCurve_tF623128FF51FC3C48A6749619C4915CBE2995CA4_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_AnimationCurve_tF623128FF51FC3C48A6749619C4915CBE2995CA4_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_37);
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_39;
		L_39 = GenericVirtualFuncInvoker1< AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354*, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisAnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_m10F5F132336385185365E73EF668D8D369D3A4A1_RuntimeMethod_var, L_37, L_38);
		MinMaxCurve_set_curveMin_m17ADE22B882B75CBE87836C85C477A05122D9E75((&V_0), L_39, NULL);
		// break;
		goto IL_01d3;
	}

IL_017d:
	{
		// instance.constantMax = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_40 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_41 = ((ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_40);
		float L_42;
		L_42 = GenericVirtualFuncInvoker1< float, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mA86928BC888E342D2C2644535E3399952F5077ED_RuntimeMethod_var, L_40, L_41);
		MinMaxCurve_set_constantMax_mDB7B011E5B1EA76429B2A1FFDE6C06E82D290DC1((&V_0), L_42, NULL);
		// break;
		goto IL_01d3;
	}

IL_0191:
	{
		// instance.constantMin = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_43 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_44 = ((ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_43);
		float L_45;
		L_45 = GenericVirtualFuncInvoker1< float, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mA86928BC888E342D2C2644535E3399952F5077ED_RuntimeMethod_var, L_43, L_44);
		MinMaxCurve_set_constantMin_mBF7CF2A9F167AD06C327EE6EA37BA427E1CE548C((&V_0), L_45, NULL);
		// break;
		goto IL_01d3;
	}

IL_01a5:
	{
		// instance.constant = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_46 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_47 = ((ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_46);
		float L_48;
		L_48 = GenericVirtualFuncInvoker1< float, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mA86928BC888E342D2C2644535E3399952F5077ED_RuntimeMethod_var, L_46, L_47);
		MinMaxCurve_set_constant_mB6E4F22F67D3ED641FEBB387351F17451BB6A897((&V_0), L_48, NULL);
		// break;
		goto IL_01d3;
	}

IL_01b9:
	{
		// instance.curve = reader.Read<UnityEngine.AnimationCurve>(ES3Type_AnimationCurve.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_49 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_50 = ((ES3Type_AnimationCurve_tF623128FF51FC3C48A6749619C4915CBE2995CA4_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_AnimationCurve_tF623128FF51FC3C48A6749619C4915CBE2995CA4_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_49);
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_51;
		L_51 = GenericVirtualFuncInvoker1< AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354*, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisAnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_m10F5F132336385185365E73EF668D8D369D3A4A1_RuntimeMethod_var, L_49, L_50);
		MinMaxCurve_set_curve_mC745A6526FBF122F96DA597997DFAB9D7D2529BF((&V_0), L_51, NULL);
		// break;
		goto IL_01d3;
	}

IL_01cd:
	{
		// reader.Skip();
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_52 = ___reader0;
		NullCheck(L_52);
		VirtualActionInvoker0::Invoke(41 /* System.Void ES3Reader::Skip() */, L_52);
	}

IL_01d3:
	{
		// while((propertyName = reader.ReadPropertyName()) != null)
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_53 = ___reader0;
		NullCheck(L_53);
		String_t* L_54;
		L_54 = VirtualFuncInvoker0< String_t* >::Invoke(21 /* System.String ES3Reader::ReadPropertyName() */, L_53);
		String_t* L_55 = L_54;
		V_1 = L_55;
		if (L_55)
		{
			goto IL_000d;
		}
	}
	{
		// return instance;
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_56 = V_0;
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_57 = L_56;
		RuntimeObject* L_58 = Box(MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_il2cpp_TypeInfo_var, &L_57);
		return L_58;
	}
}
// System.Object ES3Types.ES3Type_MinMaxCurve::Read<UnityEngine.ParticleSystem/MinMaxCurve>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_MinMaxCurve_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mBB3B9B121939BBD62B9B3D820861735E7799ACA7_gshared (ES3Type_MinMaxCurve_t1C147718750ACBECE5D2B7F545D2A434A3C5409B* __this, ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisAnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_m10F5F132336385185365E73EF668D8D369D3A4A1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisParticleSystemCurveMode_t8BE38B5D6B050709BAE31B5556CFC3DA69FC8405_m066E552CFA7510B509D2175EB72B2402EC615596_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mA86928BC888E342D2C2644535E3399952F5077ED_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_AnimationCurve_tF623128FF51FC3C48A6749619C4915CBE2995CA4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral227C22F51E4B6583CFC54387461605DDBBB00D14);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral27906925D50A15B990B586241F08C8ED14226340);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral36587A0761A180514C267B50EA888F89871F71DF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6C9DED8087C891AE33ACFFCE806DBFF63795F56F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral87E6319336195D789899F4791CCD5F2437BCC0B0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAF248E82BE9EBA1ADBF067429FAEE5A5B6E05A74);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB5831A880405F69C8EF7F43534BF4D880F2B9A12);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD4A11128F810D574390DA344F324014E964D1876);
		s_Il2CppMethodInitialized = true;
	}
	MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	uint32_t V_2 = 0;
	{
		// var instance = new UnityEngine.ParticleSystem.MinMaxCurve();
		il2cpp_codegen_initobj((&V_0), sizeof(MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23));
		goto IL_01d3;
	}

IL_000d:
	{
		String_t* L_0 = V_1;
		uint32_t L_1;
		L_1 = U3CPrivateImplementationDetailsU3E_ComputeStringHash_m6EA1F233618497AEFF8902A5EDFA24C74E2F2876(L_0, NULL);
		V_2 = L_1;
		uint32_t L_2 = V_2;
		if ((!(((uint32_t)L_2) <= ((uint32_t)((int32_t)-725866558)))))
		{
			goto IL_0054;
		}
	}
	{
		uint32_t L_3 = V_2;
		if ((!(((uint32_t)L_3) <= ((uint32_t)((int32_t)740975083)))))
		{
			goto IL_003c;
		}
	}
	{
		uint32_t L_4 = V_2;
		if ((((int32_t)L_4) == ((int32_t)((int32_t)110225957))))
		{
			goto IL_0105;
		}
	}
	{
		uint32_t L_5 = V_2;
		if ((((int32_t)L_5) == ((int32_t)((int32_t)740975083))))
		{
			goto IL_009c;
		}
	}
	{
		goto IL_01cd;
	}

IL_003c:
	{
		uint32_t L_6 = V_2;
		if ((((int32_t)L_6) == ((int32_t)((int32_t)-1724381676))))
		{
			goto IL_011a;
		}
	}
	{
		uint32_t L_7 = V_2;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)-725866558))))
		{
			goto IL_00b1;
		}
	}
	{
		goto IL_01cd;
	}

IL_0054:
	{
		uint32_t L_8 = V_2;
		if ((!(((uint32_t)L_8) <= ((uint32_t)((int32_t)-559473464)))))
		{
			goto IL_0074;
		}
	}
	{
		uint32_t L_9 = V_2;
		if ((((int32_t)L_9) == ((int32_t)((int32_t)-581632105))))
		{
			goto IL_00f0;
		}
	}
	{
		uint32_t L_10 = V_2;
		if ((((int32_t)L_10) == ((int32_t)((int32_t)-559473464))))
		{
			goto IL_00c6;
		}
	}
	{
		goto IL_01cd;
	}

IL_0074:
	{
		uint32_t L_11 = V_2;
		if ((((int32_t)L_11) == ((int32_t)((int32_t)-345465511))))
		{
			goto IL_00db;
		}
	}
	{
		uint32_t L_12 = V_2;
		if ((!(((uint32_t)L_12) == ((uint32_t)((int32_t)-328277998)))))
		{
			goto IL_01cd;
		}
	}
	{
		String_t* L_13 = V_1;
		bool L_14;
		L_14 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_13, _stringLiteralAF248E82BE9EBA1ADBF067429FAEE5A5B6E05A74, NULL);
		if (L_14)
		{
			goto IL_012f;
		}
	}
	{
		goto IL_01cd;
	}

IL_009c:
	{
		String_t* L_15 = V_1;
		bool L_16;
		L_16 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_15, _stringLiteral227C22F51E4B6583CFC54387461605DDBBB00D14, NULL);
		if (L_16)
		{
			goto IL_0141;
		}
	}
	{
		goto IL_01cd;
	}

IL_00b1:
	{
		String_t* L_17 = V_1;
		bool L_18;
		L_18 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_17, _stringLiteral27906925D50A15B990B586241F08C8ED14226340, NULL);
		if (L_18)
		{
			goto IL_0155;
		}
	}
	{
		goto IL_01cd;
	}

IL_00c6:
	{
		String_t* L_19 = V_1;
		bool L_20;
		L_20 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_19, _stringLiteralD4A11128F810D574390DA344F324014E964D1876, NULL);
		if (L_20)
		{
			goto IL_0169;
		}
	}
	{
		goto IL_01cd;
	}

IL_00db:
	{
		String_t* L_21 = V_1;
		bool L_22;
		L_22 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_21, _stringLiteralB5831A880405F69C8EF7F43534BF4D880F2B9A12, NULL);
		if (L_22)
		{
			goto IL_017d;
		}
	}
	{
		goto IL_01cd;
	}

IL_00f0:
	{
		String_t* L_23 = V_1;
		bool L_24;
		L_24 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_23, _stringLiteral36587A0761A180514C267B50EA888F89871F71DF, NULL);
		if (L_24)
		{
			goto IL_0191;
		}
	}
	{
		goto IL_01cd;
	}

IL_0105:
	{
		String_t* L_25 = V_1;
		bool L_26;
		L_26 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_25, _stringLiteral87E6319336195D789899F4791CCD5F2437BCC0B0, NULL);
		if (L_26)
		{
			goto IL_01a5;
		}
	}
	{
		goto IL_01cd;
	}

IL_011a:
	{
		String_t* L_27 = V_1;
		bool L_28;
		L_28 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_27, _stringLiteral6C9DED8087C891AE33ACFFCE806DBFF63795F56F, NULL);
		if (L_28)
		{
			goto IL_01b9;
		}
	}
	{
		goto IL_01cd;
	}

IL_012f:
	{
		// instance.mode = reader.Read<UnityEngine.ParticleSystemCurveMode>();
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_29 = ___reader0;
		NullCheck(L_29);
		int32_t L_30;
		L_30 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisParticleSystemCurveMode_t8BE38B5D6B050709BAE31B5556CFC3DA69FC8405_m066E552CFA7510B509D2175EB72B2402EC615596_RuntimeMethod_var, L_29);
		MinMaxCurve_set_mode_m6870C4CA0FE7AF1029F45040B827C9F0A6A80A86((&V_0), L_30, NULL);
		// break;
		goto IL_01d3;
	}

IL_0141:
	{
		// instance.curveMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_31 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_32 = ((ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_31);
		float L_33;
		L_33 = GenericVirtualFuncInvoker1< float, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mA86928BC888E342D2C2644535E3399952F5077ED_RuntimeMethod_var, L_31, L_32);
		MinMaxCurve_set_curveMultiplier_m9FCF7F21AECE399ACD9FEB9ADEEBD93FD12DDABC((&V_0), L_33, NULL);
		// break;
		goto IL_01d3;
	}

IL_0155:
	{
		// instance.curveMax = reader.Read<UnityEngine.AnimationCurve>(ES3Type_AnimationCurve.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_34 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_35 = ((ES3Type_AnimationCurve_tF623128FF51FC3C48A6749619C4915CBE2995CA4_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_AnimationCurve_tF623128FF51FC3C48A6749619C4915CBE2995CA4_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_34);
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_36;
		L_36 = GenericVirtualFuncInvoker1< AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354*, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisAnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_m10F5F132336385185365E73EF668D8D369D3A4A1_RuntimeMethod_var, L_34, L_35);
		MinMaxCurve_set_curveMax_m39B9E8AE4E62E874DA99AA7108C2C47C6CA333DF((&V_0), L_36, NULL);
		// break;
		goto IL_01d3;
	}

IL_0169:
	{
		// instance.curveMin = reader.Read<UnityEngine.AnimationCurve>(ES3Type_AnimationCurve.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_37 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_38 = ((ES3Type_AnimationCurve_tF623128FF51FC3C48A6749619C4915CBE2995CA4_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_AnimationCurve_tF623128FF51FC3C48A6749619C4915CBE2995CA4_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_37);
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_39;
		L_39 = GenericVirtualFuncInvoker1< AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354*, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisAnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_m10F5F132336385185365E73EF668D8D369D3A4A1_RuntimeMethod_var, L_37, L_38);
		MinMaxCurve_set_curveMin_m17ADE22B882B75CBE87836C85C477A05122D9E75((&V_0), L_39, NULL);
		// break;
		goto IL_01d3;
	}

IL_017d:
	{
		// instance.constantMax = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_40 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_41 = ((ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_40);
		float L_42;
		L_42 = GenericVirtualFuncInvoker1< float, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mA86928BC888E342D2C2644535E3399952F5077ED_RuntimeMethod_var, L_40, L_41);
		MinMaxCurve_set_constantMax_mDB7B011E5B1EA76429B2A1FFDE6C06E82D290DC1((&V_0), L_42, NULL);
		// break;
		goto IL_01d3;
	}

IL_0191:
	{
		// instance.constantMin = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_43 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_44 = ((ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_43);
		float L_45;
		L_45 = GenericVirtualFuncInvoker1< float, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mA86928BC888E342D2C2644535E3399952F5077ED_RuntimeMethod_var, L_43, L_44);
		MinMaxCurve_set_constantMin_mBF7CF2A9F167AD06C327EE6EA37BA427E1CE548C((&V_0), L_45, NULL);
		// break;
		goto IL_01d3;
	}

IL_01a5:
	{
		// instance.constant = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_46 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_47 = ((ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_46);
		float L_48;
		L_48 = GenericVirtualFuncInvoker1< float, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mA86928BC888E342D2C2644535E3399952F5077ED_RuntimeMethod_var, L_46, L_47);
		MinMaxCurve_set_constant_mB6E4F22F67D3ED641FEBB387351F17451BB6A897((&V_0), L_48, NULL);
		// break;
		goto IL_01d3;
	}

IL_01b9:
	{
		// instance.curve = reader.Read<UnityEngine.AnimationCurve>(ES3Type_AnimationCurve.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_49 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_50 = ((ES3Type_AnimationCurve_tF623128FF51FC3C48A6749619C4915CBE2995CA4_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_AnimationCurve_tF623128FF51FC3C48A6749619C4915CBE2995CA4_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_49);
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_51;
		L_51 = GenericVirtualFuncInvoker1< AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354*, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisAnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_m10F5F132336385185365E73EF668D8D369D3A4A1_RuntimeMethod_var, L_49, L_50);
		MinMaxCurve_set_curve_mC745A6526FBF122F96DA597997DFAB9D7D2529BF((&V_0), L_51, NULL);
		// break;
		goto IL_01d3;
	}

IL_01cd:
	{
		// reader.Skip();
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_52 = ___reader0;
		NullCheck(L_52);
		VirtualActionInvoker0::Invoke(41 /* System.Void ES3Reader::Skip() */, L_52);
	}

IL_01d3:
	{
		// while((propertyName = reader.ReadPropertyName()) != null)
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_53 = ___reader0;
		NullCheck(L_53);
		String_t* L_54;
		L_54 = VirtualFuncInvoker0< String_t* >::Invoke(21 /* System.String ES3Reader::ReadPropertyName() */, L_53);
		String_t* L_55 = L_54;
		V_1 = L_55;
		if (L_55)
		{
			goto IL_000d;
		}
	}
	{
		// return instance;
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_56 = V_0;
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_57 = L_56;
		RuntimeObject* L_58 = Box(MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_il2cpp_TypeInfo_var, &L_57);
		return L_58;
	}
}
// System.Object ES3Types.ES3Type_MinMaxCurve::Read<UnityEngine.ParticleSystem/MinMaxGradient>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_MinMaxCurve_Read_TisMinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69_m597EA4FB7802FFEDEE05FD3EED1CBA327657293D_gshared (ES3Type_MinMaxCurve_t1C147718750ACBECE5D2B7F545D2A434A3C5409B* __this, ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisAnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_m10F5F132336385185365E73EF668D8D369D3A4A1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisParticleSystemCurveMode_t8BE38B5D6B050709BAE31B5556CFC3DA69FC8405_m066E552CFA7510B509D2175EB72B2402EC615596_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mA86928BC888E342D2C2644535E3399952F5077ED_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_AnimationCurve_tF623128FF51FC3C48A6749619C4915CBE2995CA4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral227C22F51E4B6583CFC54387461605DDBBB00D14);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral27906925D50A15B990B586241F08C8ED14226340);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral36587A0761A180514C267B50EA888F89871F71DF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6C9DED8087C891AE33ACFFCE806DBFF63795F56F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral87E6319336195D789899F4791CCD5F2437BCC0B0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAF248E82BE9EBA1ADBF067429FAEE5A5B6E05A74);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB5831A880405F69C8EF7F43534BF4D880F2B9A12);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD4A11128F810D574390DA344F324014E964D1876);
		s_Il2CppMethodInitialized = true;
	}
	MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	uint32_t V_2 = 0;
	{
		// var instance = new UnityEngine.ParticleSystem.MinMaxCurve();
		il2cpp_codegen_initobj((&V_0), sizeof(MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23));
		goto IL_01d3;
	}

IL_000d:
	{
		String_t* L_0 = V_1;
		uint32_t L_1;
		L_1 = U3CPrivateImplementationDetailsU3E_ComputeStringHash_m6EA1F233618497AEFF8902A5EDFA24C74E2F2876(L_0, NULL);
		V_2 = L_1;
		uint32_t L_2 = V_2;
		if ((!(((uint32_t)L_2) <= ((uint32_t)((int32_t)-725866558)))))
		{
			goto IL_0054;
		}
	}
	{
		uint32_t L_3 = V_2;
		if ((!(((uint32_t)L_3) <= ((uint32_t)((int32_t)740975083)))))
		{
			goto IL_003c;
		}
	}
	{
		uint32_t L_4 = V_2;
		if ((((int32_t)L_4) == ((int32_t)((int32_t)110225957))))
		{
			goto IL_0105;
		}
	}
	{
		uint32_t L_5 = V_2;
		if ((((int32_t)L_5) == ((int32_t)((int32_t)740975083))))
		{
			goto IL_009c;
		}
	}
	{
		goto IL_01cd;
	}

IL_003c:
	{
		uint32_t L_6 = V_2;
		if ((((int32_t)L_6) == ((int32_t)((int32_t)-1724381676))))
		{
			goto IL_011a;
		}
	}
	{
		uint32_t L_7 = V_2;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)-725866558))))
		{
			goto IL_00b1;
		}
	}
	{
		goto IL_01cd;
	}

IL_0054:
	{
		uint32_t L_8 = V_2;
		if ((!(((uint32_t)L_8) <= ((uint32_t)((int32_t)-559473464)))))
		{
			goto IL_0074;
		}
	}
	{
		uint32_t L_9 = V_2;
		if ((((int32_t)L_9) == ((int32_t)((int32_t)-581632105))))
		{
			goto IL_00f0;
		}
	}
	{
		uint32_t L_10 = V_2;
		if ((((int32_t)L_10) == ((int32_t)((int32_t)-559473464))))
		{
			goto IL_00c6;
		}
	}
	{
		goto IL_01cd;
	}

IL_0074:
	{
		uint32_t L_11 = V_2;
		if ((((int32_t)L_11) == ((int32_t)((int32_t)-345465511))))
		{
			goto IL_00db;
		}
	}
	{
		uint32_t L_12 = V_2;
		if ((!(((uint32_t)L_12) == ((uint32_t)((int32_t)-328277998)))))
		{
			goto IL_01cd;
		}
	}
	{
		String_t* L_13 = V_1;
		bool L_14;
		L_14 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_13, _stringLiteralAF248E82BE9EBA1ADBF067429FAEE5A5B6E05A74, NULL);
		if (L_14)
		{
			goto IL_012f;
		}
	}
	{
		goto IL_01cd;
	}

IL_009c:
	{
		String_t* L_15 = V_1;
		bool L_16;
		L_16 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_15, _stringLiteral227C22F51E4B6583CFC54387461605DDBBB00D14, NULL);
		if (L_16)
		{
			goto IL_0141;
		}
	}
	{
		goto IL_01cd;
	}

IL_00b1:
	{
		String_t* L_17 = V_1;
		bool L_18;
		L_18 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_17, _stringLiteral27906925D50A15B990B586241F08C8ED14226340, NULL);
		if (L_18)
		{
			goto IL_0155;
		}
	}
	{
		goto IL_01cd;
	}

IL_00c6:
	{
		String_t* L_19 = V_1;
		bool L_20;
		L_20 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_19, _stringLiteralD4A11128F810D574390DA344F324014E964D1876, NULL);
		if (L_20)
		{
			goto IL_0169;
		}
	}
	{
		goto IL_01cd;
	}

IL_00db:
	{
		String_t* L_21 = V_1;
		bool L_22;
		L_22 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_21, _stringLiteralB5831A880405F69C8EF7F43534BF4D880F2B9A12, NULL);
		if (L_22)
		{
			goto IL_017d;
		}
	}
	{
		goto IL_01cd;
	}

IL_00f0:
	{
		String_t* L_23 = V_1;
		bool L_24;
		L_24 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_23, _stringLiteral36587A0761A180514C267B50EA888F89871F71DF, NULL);
		if (L_24)
		{
			goto IL_0191;
		}
	}
	{
		goto IL_01cd;
	}

IL_0105:
	{
		String_t* L_25 = V_1;
		bool L_26;
		L_26 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_25, _stringLiteral87E6319336195D789899F4791CCD5F2437BCC0B0, NULL);
		if (L_26)
		{
			goto IL_01a5;
		}
	}
	{
		goto IL_01cd;
	}

IL_011a:
	{
		String_t* L_27 = V_1;
		bool L_28;
		L_28 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_27, _stringLiteral6C9DED8087C891AE33ACFFCE806DBFF63795F56F, NULL);
		if (L_28)
		{
			goto IL_01b9;
		}
	}
	{
		goto IL_01cd;
	}

IL_012f:
	{
		// instance.mode = reader.Read<UnityEngine.ParticleSystemCurveMode>();
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_29 = ___reader0;
		NullCheck(L_29);
		int32_t L_30;
		L_30 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisParticleSystemCurveMode_t8BE38B5D6B050709BAE31B5556CFC3DA69FC8405_m066E552CFA7510B509D2175EB72B2402EC615596_RuntimeMethod_var, L_29);
		MinMaxCurve_set_mode_m6870C4CA0FE7AF1029F45040B827C9F0A6A80A86((&V_0), L_30, NULL);
		// break;
		goto IL_01d3;
	}

IL_0141:
	{
		// instance.curveMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_31 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_32 = ((ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_31);
		float L_33;
		L_33 = GenericVirtualFuncInvoker1< float, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mA86928BC888E342D2C2644535E3399952F5077ED_RuntimeMethod_var, L_31, L_32);
		MinMaxCurve_set_curveMultiplier_m9FCF7F21AECE399ACD9FEB9ADEEBD93FD12DDABC((&V_0), L_33, NULL);
		// break;
		goto IL_01d3;
	}

IL_0155:
	{
		// instance.curveMax = reader.Read<UnityEngine.AnimationCurve>(ES3Type_AnimationCurve.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_34 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_35 = ((ES3Type_AnimationCurve_tF623128FF51FC3C48A6749619C4915CBE2995CA4_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_AnimationCurve_tF623128FF51FC3C48A6749619C4915CBE2995CA4_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_34);
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_36;
		L_36 = GenericVirtualFuncInvoker1< AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354*, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisAnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_m10F5F132336385185365E73EF668D8D369D3A4A1_RuntimeMethod_var, L_34, L_35);
		MinMaxCurve_set_curveMax_m39B9E8AE4E62E874DA99AA7108C2C47C6CA333DF((&V_0), L_36, NULL);
		// break;
		goto IL_01d3;
	}

IL_0169:
	{
		// instance.curveMin = reader.Read<UnityEngine.AnimationCurve>(ES3Type_AnimationCurve.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_37 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_38 = ((ES3Type_AnimationCurve_tF623128FF51FC3C48A6749619C4915CBE2995CA4_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_AnimationCurve_tF623128FF51FC3C48A6749619C4915CBE2995CA4_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_37);
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_39;
		L_39 = GenericVirtualFuncInvoker1< AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354*, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisAnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_m10F5F132336385185365E73EF668D8D369D3A4A1_RuntimeMethod_var, L_37, L_38);
		MinMaxCurve_set_curveMin_m17ADE22B882B75CBE87836C85C477A05122D9E75((&V_0), L_39, NULL);
		// break;
		goto IL_01d3;
	}

IL_017d:
	{
		// instance.constantMax = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_40 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_41 = ((ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_40);
		float L_42;
		L_42 = GenericVirtualFuncInvoker1< float, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mA86928BC888E342D2C2644535E3399952F5077ED_RuntimeMethod_var, L_40, L_41);
		MinMaxCurve_set_constantMax_mDB7B011E5B1EA76429B2A1FFDE6C06E82D290DC1((&V_0), L_42, NULL);
		// break;
		goto IL_01d3;
	}

IL_0191:
	{
		// instance.constantMin = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_43 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_44 = ((ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_43);
		float L_45;
		L_45 = GenericVirtualFuncInvoker1< float, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mA86928BC888E342D2C2644535E3399952F5077ED_RuntimeMethod_var, L_43, L_44);
		MinMaxCurve_set_constantMin_mBF7CF2A9F167AD06C327EE6EA37BA427E1CE548C((&V_0), L_45, NULL);
		// break;
		goto IL_01d3;
	}

IL_01a5:
	{
		// instance.constant = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_46 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_47 = ((ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_46);
		float L_48;
		L_48 = GenericVirtualFuncInvoker1< float, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mA86928BC888E342D2C2644535E3399952F5077ED_RuntimeMethod_var, L_46, L_47);
		MinMaxCurve_set_constant_mB6E4F22F67D3ED641FEBB387351F17451BB6A897((&V_0), L_48, NULL);
		// break;
		goto IL_01d3;
	}

IL_01b9:
	{
		// instance.curve = reader.Read<UnityEngine.AnimationCurve>(ES3Type_AnimationCurve.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_49 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_50 = ((ES3Type_AnimationCurve_tF623128FF51FC3C48A6749619C4915CBE2995CA4_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_AnimationCurve_tF623128FF51FC3C48A6749619C4915CBE2995CA4_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_49);
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_51;
		L_51 = GenericVirtualFuncInvoker1< AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354*, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisAnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_m10F5F132336385185365E73EF668D8D369D3A4A1_RuntimeMethod_var, L_49, L_50);
		MinMaxCurve_set_curve_mC745A6526FBF122F96DA597997DFAB9D7D2529BF((&V_0), L_51, NULL);
		// break;
		goto IL_01d3;
	}

IL_01cd:
	{
		// reader.Skip();
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_52 = ___reader0;
		NullCheck(L_52);
		VirtualActionInvoker0::Invoke(41 /* System.Void ES3Reader::Skip() */, L_52);
	}

IL_01d3:
	{
		// while((propertyName = reader.ReadPropertyName()) != null)
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_53 = ___reader0;
		NullCheck(L_53);
		String_t* L_54;
		L_54 = VirtualFuncInvoker0< String_t* >::Invoke(21 /* System.String ES3Reader::ReadPropertyName() */, L_53);
		String_t* L_55 = L_54;
		V_1 = L_55;
		if (L_55)
		{
			goto IL_000d;
		}
	}
	{
		// return instance;
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_56 = V_0;
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_57 = L_56;
		RuntimeObject* L_58 = Box(MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_il2cpp_TypeInfo_var, &L_57);
		return L_58;
	}
}
// System.Void ES3Types.ES3Type_MinMaxCurve::ReadInto<System.Object>(ES3Reader,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ES3Type_MinMaxCurve_ReadInto_TisRuntimeObject_m489F60BCC19AB3802A04203A991037C9290B17FA_gshared (ES3Type_MinMaxCurve_t1C147718750ACBECE5D2B7F545D2A434A3C5409B* __this, ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* ___reader0, RuntimeObject* ___obj1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisAnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_m10F5F132336385185365E73EF668D8D369D3A4A1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisParticleSystemCurveMode_t8BE38B5D6B050709BAE31B5556CFC3DA69FC8405_m066E552CFA7510B509D2175EB72B2402EC615596_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mA86928BC888E342D2C2644535E3399952F5077ED_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_AnimationCurve_tF623128FF51FC3C48A6749619C4915CBE2995CA4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral227C22F51E4B6583CFC54387461605DDBBB00D14);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral27906925D50A15B990B586241F08C8ED14226340);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral36587A0761A180514C267B50EA888F89871F71DF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6C9DED8087C891AE33ACFFCE806DBFF63795F56F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral87E6319336195D789899F4791CCD5F2437BCC0B0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAF248E82BE9EBA1ADBF067429FAEE5A5B6E05A74);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB5831A880405F69C8EF7F43534BF4D880F2B9A12);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD4A11128F810D574390DA344F324014E964D1876);
		s_Il2CppMethodInitialized = true;
	}
	MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	uint32_t V_2 = 0;
	{
		// var instance = (UnityEngine.ParticleSystem.MinMaxCurve)obj;
		RuntimeObject* L_0 = ___obj1;
		V_0 = ((*(MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23*)((MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23*)(MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23*)UnBox(L_0, MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_il2cpp_TypeInfo_var))));
		goto IL_01d2;
	}

IL_000c:
	{
		String_t* L_1 = V_1;
		uint32_t L_2;
		L_2 = U3CPrivateImplementationDetailsU3E_ComputeStringHash_m6EA1F233618497AEFF8902A5EDFA24C74E2F2876(L_1, NULL);
		V_2 = L_2;
		uint32_t L_3 = V_2;
		if ((!(((uint32_t)L_3) <= ((uint32_t)((int32_t)-725866558)))))
		{
			goto IL_0053;
		}
	}
	{
		uint32_t L_4 = V_2;
		if ((!(((uint32_t)L_4) <= ((uint32_t)((int32_t)740975083)))))
		{
			goto IL_003b;
		}
	}
	{
		uint32_t L_5 = V_2;
		if ((((int32_t)L_5) == ((int32_t)((int32_t)110225957))))
		{
			goto IL_0104;
		}
	}
	{
		uint32_t L_6 = V_2;
		if ((((int32_t)L_6) == ((int32_t)((int32_t)740975083))))
		{
			goto IL_009b;
		}
	}
	{
		goto IL_01cc;
	}

IL_003b:
	{
		uint32_t L_7 = V_2;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)-1724381676))))
		{
			goto IL_0119;
		}
	}
	{
		uint32_t L_8 = V_2;
		if ((((int32_t)L_8) == ((int32_t)((int32_t)-725866558))))
		{
			goto IL_00b0;
		}
	}
	{
		goto IL_01cc;
	}

IL_0053:
	{
		uint32_t L_9 = V_2;
		if ((!(((uint32_t)L_9) <= ((uint32_t)((int32_t)-559473464)))))
		{
			goto IL_0073;
		}
	}
	{
		uint32_t L_10 = V_2;
		if ((((int32_t)L_10) == ((int32_t)((int32_t)-581632105))))
		{
			goto IL_00ef;
		}
	}
	{
		uint32_t L_11 = V_2;
		if ((((int32_t)L_11) == ((int32_t)((int32_t)-559473464))))
		{
			goto IL_00c5;
		}
	}
	{
		goto IL_01cc;
	}

IL_0073:
	{
		uint32_t L_12 = V_2;
		if ((((int32_t)L_12) == ((int32_t)((int32_t)-345465511))))
		{
			goto IL_00da;
		}
	}
	{
		uint32_t L_13 = V_2;
		if ((!(((uint32_t)L_13) == ((uint32_t)((int32_t)-328277998)))))
		{
			goto IL_01cc;
		}
	}
	{
		String_t* L_14 = V_1;
		bool L_15;
		L_15 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_14, _stringLiteralAF248E82BE9EBA1ADBF067429FAEE5A5B6E05A74, NULL);
		if (L_15)
		{
			goto IL_012e;
		}
	}
	{
		goto IL_01cc;
	}

IL_009b:
	{
		String_t* L_16 = V_1;
		bool L_17;
		L_17 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_16, _stringLiteral227C22F51E4B6583CFC54387461605DDBBB00D14, NULL);
		if (L_17)
		{
			goto IL_0140;
		}
	}
	{
		goto IL_01cc;
	}

IL_00b0:
	{
		String_t* L_18 = V_1;
		bool L_19;
		L_19 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_18, _stringLiteral27906925D50A15B990B586241F08C8ED14226340, NULL);
		if (L_19)
		{
			goto IL_0154;
		}
	}
	{
		goto IL_01cc;
	}

IL_00c5:
	{
		String_t* L_20 = V_1;
		bool L_21;
		L_21 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_20, _stringLiteralD4A11128F810D574390DA344F324014E964D1876, NULL);
		if (L_21)
		{
			goto IL_0168;
		}
	}
	{
		goto IL_01cc;
	}

IL_00da:
	{
		String_t* L_22 = V_1;
		bool L_23;
		L_23 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_22, _stringLiteralB5831A880405F69C8EF7F43534BF4D880F2B9A12, NULL);
		if (L_23)
		{
			goto IL_017c;
		}
	}
	{
		goto IL_01cc;
	}

IL_00ef:
	{
		String_t* L_24 = V_1;
		bool L_25;
		L_25 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_24, _stringLiteral36587A0761A180514C267B50EA888F89871F71DF, NULL);
		if (L_25)
		{
			goto IL_0190;
		}
	}
	{
		goto IL_01cc;
	}

IL_0104:
	{
		String_t* L_26 = V_1;
		bool L_27;
		L_27 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_26, _stringLiteral87E6319336195D789899F4791CCD5F2437BCC0B0, NULL);
		if (L_27)
		{
			goto IL_01a4;
		}
	}
	{
		goto IL_01cc;
	}

IL_0119:
	{
		String_t* L_28 = V_1;
		bool L_29;
		L_29 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_28, _stringLiteral6C9DED8087C891AE33ACFFCE806DBFF63795F56F, NULL);
		if (L_29)
		{
			goto IL_01b8;
		}
	}
	{
		goto IL_01cc;
	}

IL_012e:
	{
		// instance.mode = reader.Read<UnityEngine.ParticleSystemCurveMode>();
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_30 = ___reader0;
		NullCheck(L_30);
		int32_t L_31;
		L_31 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisParticleSystemCurveMode_t8BE38B5D6B050709BAE31B5556CFC3DA69FC8405_m066E552CFA7510B509D2175EB72B2402EC615596_RuntimeMethod_var, L_30);
		MinMaxCurve_set_mode_m6870C4CA0FE7AF1029F45040B827C9F0A6A80A86((&V_0), L_31, NULL);
		// break;
		goto IL_01d2;
	}

IL_0140:
	{
		// instance.curveMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_32 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_33 = ((ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_32);
		float L_34;
		L_34 = GenericVirtualFuncInvoker1< float, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mA86928BC888E342D2C2644535E3399952F5077ED_RuntimeMethod_var, L_32, L_33);
		MinMaxCurve_set_curveMultiplier_m9FCF7F21AECE399ACD9FEB9ADEEBD93FD12DDABC((&V_0), L_34, NULL);
		// break;
		goto IL_01d2;
	}

IL_0154:
	{
		// instance.curveMax = reader.Read<UnityEngine.AnimationCurve>(ES3Type_AnimationCurve.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_35 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_36 = ((ES3Type_AnimationCurve_tF623128FF51FC3C48A6749619C4915CBE2995CA4_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_AnimationCurve_tF623128FF51FC3C48A6749619C4915CBE2995CA4_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_35);
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_37;
		L_37 = GenericVirtualFuncInvoker1< AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354*, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisAnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_m10F5F132336385185365E73EF668D8D369D3A4A1_RuntimeMethod_var, L_35, L_36);
		MinMaxCurve_set_curveMax_m39B9E8AE4E62E874DA99AA7108C2C47C6CA333DF((&V_0), L_37, NULL);
		// break;
		goto IL_01d2;
	}

IL_0168:
	{
		// instance.curveMin = reader.Read<UnityEngine.AnimationCurve>(ES3Type_AnimationCurve.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_38 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_39 = ((ES3Type_AnimationCurve_tF623128FF51FC3C48A6749619C4915CBE2995CA4_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_AnimationCurve_tF623128FF51FC3C48A6749619C4915CBE2995CA4_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_38);
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_40;
		L_40 = GenericVirtualFuncInvoker1< AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354*, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisAnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_m10F5F132336385185365E73EF668D8D369D3A4A1_RuntimeMethod_var, L_38, L_39);
		MinMaxCurve_set_curveMin_m17ADE22B882B75CBE87836C85C477A05122D9E75((&V_0), L_40, NULL);
		// break;
		goto IL_01d2;
	}

IL_017c:
	{
		// instance.constantMax = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_41 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_42 = ((ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_41);
		float L_43;
		L_43 = GenericVirtualFuncInvoker1< float, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mA86928BC888E342D2C2644535E3399952F5077ED_RuntimeMethod_var, L_41, L_42);
		MinMaxCurve_set_constantMax_mDB7B011E5B1EA76429B2A1FFDE6C06E82D290DC1((&V_0), L_43, NULL);
		// break;
		goto IL_01d2;
	}

IL_0190:
	{
		// instance.constantMin = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_44 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_45 = ((ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_44);
		float L_46;
		L_46 = GenericVirtualFuncInvoker1< float, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mA86928BC888E342D2C2644535E3399952F5077ED_RuntimeMethod_var, L_44, L_45);
		MinMaxCurve_set_constantMin_mBF7CF2A9F167AD06C327EE6EA37BA427E1CE548C((&V_0), L_46, NULL);
		// break;
		goto IL_01d2;
	}

IL_01a4:
	{
		// instance.constant = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_47 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_48 = ((ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_47);
		float L_49;
		L_49 = GenericVirtualFuncInvoker1< float, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mA86928BC888E342D2C2644535E3399952F5077ED_RuntimeMethod_var, L_47, L_48);
		MinMaxCurve_set_constant_mB6E4F22F67D3ED641FEBB387351F17451BB6A897((&V_0), L_49, NULL);
		// break;
		goto IL_01d2;
	}

IL_01b8:
	{
		// instance.curve = reader.Read<UnityEngine.AnimationCurve>(ES3Type_AnimationCurve.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_50 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_51 = ((ES3Type_AnimationCurve_tF623128FF51FC3C48A6749619C4915CBE2995CA4_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_AnimationCurve_tF623128FF51FC3C48A6749619C4915CBE2995CA4_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_50);
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_52;
		L_52 = GenericVirtualFuncInvoker1< AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354*, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisAnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_m10F5F132336385185365E73EF668D8D369D3A4A1_RuntimeMethod_var, L_50, L_51);
		MinMaxCurve_set_curve_mC745A6526FBF122F96DA597997DFAB9D7D2529BF((&V_0), L_52, NULL);
		// break;
		goto IL_01d2;
	}

IL_01cc:
	{
		// reader.Skip();
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_53 = ___reader0;
		NullCheck(L_53);
		VirtualActionInvoker0::Invoke(41 /* System.Void ES3Reader::Skip() */, L_53);
	}

IL_01d2:
	{
		// while((propertyName = reader.ReadPropertyName()) != null)
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_54 = ___reader0;
		NullCheck(L_54);
		String_t* L_55;
		L_55 = VirtualFuncInvoker0< String_t* >::Invoke(21 /* System.String ES3Reader::ReadPropertyName() */, L_54);
		String_t* L_56 = L_55;
		V_1 = L_56;
		if (L_56)
		{
			goto IL_000c;
		}
	}
	{
		// }
		return;
	}
}
// System.Void ES3Types.ES3Type_MinMaxCurve::ReadInto<UnityEngine.ParticleSystem/CollisionModule>(ES3Reader,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ES3Type_MinMaxCurve_ReadInto_TisCollisionModule_tEE4892D4872C2907164A66DC424F1CFA1D527083_m85A571B8ED12904C7D79D80D4A473BF24181888B_gshared (ES3Type_MinMaxCurve_t1C147718750ACBECE5D2B7F545D2A434A3C5409B* __this, ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* ___reader0, RuntimeObject* ___obj1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisAnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_m10F5F132336385185365E73EF668D8D369D3A4A1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisParticleSystemCurveMode_t8BE38B5D6B050709BAE31B5556CFC3DA69FC8405_m066E552CFA7510B509D2175EB72B2402EC615596_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mA86928BC888E342D2C2644535E3399952F5077ED_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_AnimationCurve_tF623128FF51FC3C48A6749619C4915CBE2995CA4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral227C22F51E4B6583CFC54387461605DDBBB00D14);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral27906925D50A15B990B586241F08C8ED14226340);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral36587A0761A180514C267B50EA888F89871F71DF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6C9DED8087C891AE33ACFFCE806DBFF63795F56F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral87E6319336195D789899F4791CCD5F2437BCC0B0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAF248E82BE9EBA1ADBF067429FAEE5A5B6E05A74);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB5831A880405F69C8EF7F43534BF4D880F2B9A12);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD4A11128F810D574390DA344F324014E964D1876);
		s_Il2CppMethodInitialized = true;
	}
	MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	uint32_t V_2 = 0;
	{
		// var instance = (UnityEngine.ParticleSystem.MinMaxCurve)obj;
		RuntimeObject* L_0 = ___obj1;
		V_0 = ((*(MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23*)((MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23*)(MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23*)UnBox(L_0, MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_il2cpp_TypeInfo_var))));
		goto IL_01d2;
	}

IL_000c:
	{
		String_t* L_1 = V_1;
		uint32_t L_2;
		L_2 = U3CPrivateImplementationDetailsU3E_ComputeStringHash_m6EA1F233618497AEFF8902A5EDFA24C74E2F2876(L_1, NULL);
		V_2 = L_2;
		uint32_t L_3 = V_2;
		if ((!(((uint32_t)L_3) <= ((uint32_t)((int32_t)-725866558)))))
		{
			goto IL_0053;
		}
	}
	{
		uint32_t L_4 = V_2;
		if ((!(((uint32_t)L_4) <= ((uint32_t)((int32_t)740975083)))))
		{
			goto IL_003b;
		}
	}
	{
		uint32_t L_5 = V_2;
		if ((((int32_t)L_5) == ((int32_t)((int32_t)110225957))))
		{
			goto IL_0104;
		}
	}
	{
		uint32_t L_6 = V_2;
		if ((((int32_t)L_6) == ((int32_t)((int32_t)740975083))))
		{
			goto IL_009b;
		}
	}
	{
		goto IL_01cc;
	}

IL_003b:
	{
		uint32_t L_7 = V_2;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)-1724381676))))
		{
			goto IL_0119;
		}
	}
	{
		uint32_t L_8 = V_2;
		if ((((int32_t)L_8) == ((int32_t)((int32_t)-725866558))))
		{
			goto IL_00b0;
		}
	}
	{
		goto IL_01cc;
	}

IL_0053:
	{
		uint32_t L_9 = V_2;
		if ((!(((uint32_t)L_9) <= ((uint32_t)((int32_t)-559473464)))))
		{
			goto IL_0073;
		}
	}
	{
		uint32_t L_10 = V_2;
		if ((((int32_t)L_10) == ((int32_t)((int32_t)-581632105))))
		{
			goto IL_00ef;
		}
	}
	{
		uint32_t L_11 = V_2;
		if ((((int32_t)L_11) == ((int32_t)((int32_t)-559473464))))
		{
			goto IL_00c5;
		}
	}
	{
		goto IL_01cc;
	}

IL_0073:
	{
		uint32_t L_12 = V_2;
		if ((((int32_t)L_12) == ((int32_t)((int32_t)-345465511))))
		{
			goto IL_00da;
		}
	}
	{
		uint32_t L_13 = V_2;
		if ((!(((uint32_t)L_13) == ((uint32_t)((int32_t)-328277998)))))
		{
			goto IL_01cc;
		}
	}
	{
		String_t* L_14 = V_1;
		bool L_15;
		L_15 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_14, _stringLiteralAF248E82BE9EBA1ADBF067429FAEE5A5B6E05A74, NULL);
		if (L_15)
		{
			goto IL_012e;
		}
	}
	{
		goto IL_01cc;
	}

IL_009b:
	{
		String_t* L_16 = V_1;
		bool L_17;
		L_17 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_16, _stringLiteral227C22F51E4B6583CFC54387461605DDBBB00D14, NULL);
		if (L_17)
		{
			goto IL_0140;
		}
	}
	{
		goto IL_01cc;
	}

IL_00b0:
	{
		String_t* L_18 = V_1;
		bool L_19;
		L_19 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_18, _stringLiteral27906925D50A15B990B586241F08C8ED14226340, NULL);
		if (L_19)
		{
			goto IL_0154;
		}
	}
	{
		goto IL_01cc;
	}

IL_00c5:
	{
		String_t* L_20 = V_1;
		bool L_21;
		L_21 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_20, _stringLiteralD4A11128F810D574390DA344F324014E964D1876, NULL);
		if (L_21)
		{
			goto IL_0168;
		}
	}
	{
		goto IL_01cc;
	}

IL_00da:
	{
		String_t* L_22 = V_1;
		bool L_23;
		L_23 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_22, _stringLiteralB5831A880405F69C8EF7F43534BF4D880F2B9A12, NULL);
		if (L_23)
		{
			goto IL_017c;
		}
	}
	{
		goto IL_01cc;
	}

IL_00ef:
	{
		String_t* L_24 = V_1;
		bool L_25;
		L_25 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_24, _stringLiteral36587A0761A180514C267B50EA888F89871F71DF, NULL);
		if (L_25)
		{
			goto IL_0190;
		}
	}
	{
		goto IL_01cc;
	}

IL_0104:
	{
		String_t* L_26 = V_1;
		bool L_27;
		L_27 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_26, _stringLiteral87E6319336195D789899F4791CCD5F2437BCC0B0, NULL);
		if (L_27)
		{
			goto IL_01a4;
		}
	}
	{
		goto IL_01cc;
	}

IL_0119:
	{
		String_t* L_28 = V_1;
		bool L_29;
		L_29 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_28, _stringLiteral6C9DED8087C891AE33ACFFCE806DBFF63795F56F, NULL);
		if (L_29)
		{
			goto IL_01b8;
		}
	}
	{
		goto IL_01cc;
	}

IL_012e:
	{
		// instance.mode = reader.Read<UnityEngine.ParticleSystemCurveMode>();
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_30 = ___reader0;
		NullCheck(L_30);
		int32_t L_31;
		L_31 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisParticleSystemCurveMode_t8BE38B5D6B050709BAE31B5556CFC3DA69FC8405_m066E552CFA7510B509D2175EB72B2402EC615596_RuntimeMethod_var, L_30);
		MinMaxCurve_set_mode_m6870C4CA0FE7AF1029F45040B827C9F0A6A80A86((&V_0), L_31, NULL);
		// break;
		goto IL_01d2;
	}

IL_0140:
	{
		// instance.curveMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_32 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_33 = ((ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_32);
		float L_34;
		L_34 = GenericVirtualFuncInvoker1< float, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mA86928BC888E342D2C2644535E3399952F5077ED_RuntimeMethod_var, L_32, L_33);
		MinMaxCurve_set_curveMultiplier_m9FCF7F21AECE399ACD9FEB9ADEEBD93FD12DDABC((&V_0), L_34, NULL);
		// break;
		goto IL_01d2;
	}

IL_0154:
	{
		// instance.curveMax = reader.Read<UnityEngine.AnimationCurve>(ES3Type_AnimationCurve.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_35 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_36 = ((ES3Type_AnimationCurve_tF623128FF51FC3C48A6749619C4915CBE2995CA4_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_AnimationCurve_tF623128FF51FC3C48A6749619C4915CBE2995CA4_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_35);
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_37;
		L_37 = GenericVirtualFuncInvoker1< AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354*, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisAnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_m10F5F132336385185365E73EF668D8D369D3A4A1_RuntimeMethod_var, L_35, L_36);
		MinMaxCurve_set_curveMax_m39B9E8AE4E62E874DA99AA7108C2C47C6CA333DF((&V_0), L_37, NULL);
		// break;
		goto IL_01d2;
	}

IL_0168:
	{
		// instance.curveMin = reader.Read<UnityEngine.AnimationCurve>(ES3Type_AnimationCurve.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_38 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_39 = ((ES3Type_AnimationCurve_tF623128FF51FC3C48A6749619C4915CBE2995CA4_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_AnimationCurve_tF623128FF51FC3C48A6749619C4915CBE2995CA4_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_38);
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_40;
		L_40 = GenericVirtualFuncInvoker1< AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354*, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisAnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_m10F5F132336385185365E73EF668D8D369D3A4A1_RuntimeMethod_var, L_38, L_39);
		MinMaxCurve_set_curveMin_m17ADE22B882B75CBE87836C85C477A05122D9E75((&V_0), L_40, NULL);
		// break;
		goto IL_01d2;
	}

IL_017c:
	{
		// instance.constantMax = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_41 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_42 = ((ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_41);
		float L_43;
		L_43 = GenericVirtualFuncInvoker1< float, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mA86928BC888E342D2C2644535E3399952F5077ED_RuntimeMethod_var, L_41, L_42);
		MinMaxCurve_set_constantMax_mDB7B011E5B1EA76429B2A1FFDE6C06E82D290DC1((&V_0), L_43, NULL);
		// break;
		goto IL_01d2;
	}

IL_0190:
	{
		// instance.constantMin = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_44 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_45 = ((ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_44);
		float L_46;
		L_46 = GenericVirtualFuncInvoker1< float, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mA86928BC888E342D2C2644535E3399952F5077ED_RuntimeMethod_var, L_44, L_45);
		MinMaxCurve_set_constantMin_mBF7CF2A9F167AD06C327EE6EA37BA427E1CE548C((&V_0), L_46, NULL);
		// break;
		goto IL_01d2;
	}

IL_01a4:
	{
		// instance.constant = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_47 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_48 = ((ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_47);
		float L_49;
		L_49 = GenericVirtualFuncInvoker1< float, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mA86928BC888E342D2C2644535E3399952F5077ED_RuntimeMethod_var, L_47, L_48);
		MinMaxCurve_set_constant_mB6E4F22F67D3ED641FEBB387351F17451BB6A897((&V_0), L_49, NULL);
		// break;
		goto IL_01d2;
	}

IL_01b8:
	{
		// instance.curve = reader.Read<UnityEngine.AnimationCurve>(ES3Type_AnimationCurve.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_50 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_51 = ((ES3Type_AnimationCurve_tF623128FF51FC3C48A6749619C4915CBE2995CA4_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_AnimationCurve_tF623128FF51FC3C48A6749619C4915CBE2995CA4_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_50);
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_52;
		L_52 = GenericVirtualFuncInvoker1< AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354*, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisAnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_m10F5F132336385185365E73EF668D8D369D3A4A1_RuntimeMethod_var, L_50, L_51);
		MinMaxCurve_set_curve_mC745A6526FBF122F96DA597997DFAB9D7D2529BF((&V_0), L_52, NULL);
		// break;
		goto IL_01d2;
	}

IL_01cc:
	{
		// reader.Skip();
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_53 = ___reader0;
		NullCheck(L_53);
		VirtualActionInvoker0::Invoke(41 /* System.Void ES3Reader::Skip() */, L_53);
	}

IL_01d2:
	{
		// while((propertyName = reader.ReadPropertyName()) != null)
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_54 = ___reader0;
		NullCheck(L_54);
		String_t* L_55;
		L_55 = VirtualFuncInvoker0< String_t* >::Invoke(21 /* System.String ES3Reader::ReadPropertyName() */, L_54);
		String_t* L_56 = L_55;
		V_1 = L_56;
		if (L_56)
		{
			goto IL_000c;
		}
	}
	{
		// }
		return;
	}
}
// System.Void ES3Types.ES3Type_MinMaxCurve::ReadInto<UnityEngine.ParticleSystem/ColorBySpeedModule>(ES3Reader,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ES3Type_MinMaxCurve_ReadInto_TisColorBySpeedModule_t808C4CC668431DDE51D5AD98A81C78DDB944948B_m1E5CB06B3C458BF1697B89C0AAB51DC469E120A4_gshared (ES3Type_MinMaxCurve_t1C147718750ACBECE5D2B7F545D2A434A3C5409B* __this, ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* ___reader0, RuntimeObject* ___obj1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisAnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_m10F5F132336385185365E73EF668D8D369D3A4A1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisParticleSystemCurveMode_t8BE38B5D6B050709BAE31B5556CFC3DA69FC8405_m066E552CFA7510B509D2175EB72B2402EC615596_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mA86928BC888E342D2C2644535E3399952F5077ED_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_AnimationCurve_tF623128FF51FC3C48A6749619C4915CBE2995CA4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral227C22F51E4B6583CFC54387461605DDBBB00D14);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral27906925D50A15B990B586241F08C8ED14226340);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral36587A0761A180514C267B50EA888F89871F71DF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6C9DED8087C891AE33ACFFCE806DBFF63795F56F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral87E6319336195D789899F4791CCD5F2437BCC0B0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAF248E82BE9EBA1ADBF067429FAEE5A5B6E05A74);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB5831A880405F69C8EF7F43534BF4D880F2B9A12);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD4A11128F810D574390DA344F324014E964D1876);
		s_Il2CppMethodInitialized = true;
	}
	MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	uint32_t V_2 = 0;
	{
		// var instance = (UnityEngine.ParticleSystem.MinMaxCurve)obj;
		RuntimeObject* L_0 = ___obj1;
		V_0 = ((*(MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23*)((MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23*)(MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23*)UnBox(L_0, MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_il2cpp_TypeInfo_var))));
		goto IL_01d2;
	}

IL_000c:
	{
		String_t* L_1 = V_1;
		uint32_t L_2;
		L_2 = U3CPrivateImplementationDetailsU3E_ComputeStringHash_m6EA1F233618497AEFF8902A5EDFA24C74E2F2876(L_1, NULL);
		V_2 = L_2;
		uint32_t L_3 = V_2;
		if ((!(((uint32_t)L_3) <= ((uint32_t)((int32_t)-725866558)))))
		{
			goto IL_0053;
		}
	}
	{
		uint32_t L_4 = V_2;
		if ((!(((uint32_t)L_4) <= ((uint32_t)((int32_t)740975083)))))
		{
			goto IL_003b;
		}
	}
	{
		uint32_t L_5 = V_2;
		if ((((int32_t)L_5) == ((int32_t)((int32_t)110225957))))
		{
			goto IL_0104;
		}
	}
	{
		uint32_t L_6 = V_2;
		if ((((int32_t)L_6) == ((int32_t)((int32_t)740975083))))
		{
			goto IL_009b;
		}
	}
	{
		goto IL_01cc;
	}

IL_003b:
	{
		uint32_t L_7 = V_2;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)-1724381676))))
		{
			goto IL_0119;
		}
	}
	{
		uint32_t L_8 = V_2;
		if ((((int32_t)L_8) == ((int32_t)((int32_t)-725866558))))
		{
			goto IL_00b0;
		}
	}
	{
		goto IL_01cc;
	}

IL_0053:
	{
		uint32_t L_9 = V_2;
		if ((!(((uint32_t)L_9) <= ((uint32_t)((int32_t)-559473464)))))
		{
			goto IL_0073;
		}
	}
	{
		uint32_t L_10 = V_2;
		if ((((int32_t)L_10) == ((int32_t)((int32_t)-581632105))))
		{
			goto IL_00ef;
		}
	}
	{
		uint32_t L_11 = V_2;
		if ((((int32_t)L_11) == ((int32_t)((int32_t)-559473464))))
		{
			goto IL_00c5;
		}
	}
	{
		goto IL_01cc;
	}

IL_0073:
	{
		uint32_t L_12 = V_2;
		if ((((int32_t)L_12) == ((int32_t)((int32_t)-345465511))))
		{
			goto IL_00da;
		}
	}
	{
		uint32_t L_13 = V_2;
		if ((!(((uint32_t)L_13) == ((uint32_t)((int32_t)-328277998)))))
		{
			goto IL_01cc;
		}
	}
	{
		String_t* L_14 = V_1;
		bool L_15;
		L_15 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_14, _stringLiteralAF248E82BE9EBA1ADBF067429FAEE5A5B6E05A74, NULL);
		if (L_15)
		{
			goto IL_012e;
		}
	}
	{
		goto IL_01cc;
	}

IL_009b:
	{
		String_t* L_16 = V_1;
		bool L_17;
		L_17 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_16, _stringLiteral227C22F51E4B6583CFC54387461605DDBBB00D14, NULL);
		if (L_17)
		{
			goto IL_0140;
		}
	}
	{
		goto IL_01cc;
	}

IL_00b0:
	{
		String_t* L_18 = V_1;
		bool L_19;
		L_19 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_18, _stringLiteral27906925D50A15B990B586241F08C8ED14226340, NULL);
		if (L_19)
		{
			goto IL_0154;
		}
	}
	{
		goto IL_01cc;
	}

IL_00c5:
	{
		String_t* L_20 = V_1;
		bool L_21;
		L_21 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_20, _stringLiteralD4A11128F810D574390DA344F324014E964D1876, NULL);
		if (L_21)
		{
			goto IL_0168;
		}
	}
	{
		goto IL_01cc;
	}

IL_00da:
	{
		String_t* L_22 = V_1;
		bool L_23;
		L_23 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_22, _stringLiteralB5831A880405F69C8EF7F43534BF4D880F2B9A12, NULL);
		if (L_23)
		{
			goto IL_017c;
		}
	}
	{
		goto IL_01cc;
	}

IL_00ef:
	{
		String_t* L_24 = V_1;
		bool L_25;
		L_25 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_24, _stringLiteral36587A0761A180514C267B50EA888F89871F71DF, NULL);
		if (L_25)
		{
			goto IL_0190;
		}
	}
	{
		goto IL_01cc;
	}

IL_0104:
	{
		String_t* L_26 = V_1;
		bool L_27;
		L_27 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_26, _stringLiteral87E6319336195D789899F4791CCD5F2437BCC0B0, NULL);
		if (L_27)
		{
			goto IL_01a4;
		}
	}
	{
		goto IL_01cc;
	}

IL_0119:
	{
		String_t* L_28 = V_1;
		bool L_29;
		L_29 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_28, _stringLiteral6C9DED8087C891AE33ACFFCE806DBFF63795F56F, NULL);
		if (L_29)
		{
			goto IL_01b8;
		}
	}
	{
		goto IL_01cc;
	}

IL_012e:
	{
		// instance.mode = reader.Read<UnityEngine.ParticleSystemCurveMode>();
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_30 = ___reader0;
		NullCheck(L_30);
		int32_t L_31;
		L_31 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisParticleSystemCurveMode_t8BE38B5D6B050709BAE31B5556CFC3DA69FC8405_m066E552CFA7510B509D2175EB72B2402EC615596_RuntimeMethod_var, L_30);
		MinMaxCurve_set_mode_m6870C4CA0FE7AF1029F45040B827C9F0A6A80A86((&V_0), L_31, NULL);
		// break;
		goto IL_01d2;
	}

IL_0140:
	{
		// instance.curveMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_32 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_33 = ((ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_32);
		float L_34;
		L_34 = GenericVirtualFuncInvoker1< float, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mA86928BC888E342D2C2644535E3399952F5077ED_RuntimeMethod_var, L_32, L_33);
		MinMaxCurve_set_curveMultiplier_m9FCF7F21AECE399ACD9FEB9ADEEBD93FD12DDABC((&V_0), L_34, NULL);
		// break;
		goto IL_01d2;
	}

IL_0154:
	{
		// instance.curveMax = reader.Read<UnityEngine.AnimationCurve>(ES3Type_AnimationCurve.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_35 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_36 = ((ES3Type_AnimationCurve_tF623128FF51FC3C48A6749619C4915CBE2995CA4_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_AnimationCurve_tF623128FF51FC3C48A6749619C4915CBE2995CA4_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_35);
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_37;
		L_37 = GenericVirtualFuncInvoker1< AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354*, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisAnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_m10F5F132336385185365E73EF668D8D369D3A4A1_RuntimeMethod_var, L_35, L_36);
		MinMaxCurve_set_curveMax_m39B9E8AE4E62E874DA99AA7108C2C47C6CA333DF((&V_0), L_37, NULL);
		// break;
		goto IL_01d2;
	}

IL_0168:
	{
		// instance.curveMin = reader.Read<UnityEngine.AnimationCurve>(ES3Type_AnimationCurve.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_38 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_39 = ((ES3Type_AnimationCurve_tF623128FF51FC3C48A6749619C4915CBE2995CA4_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_AnimationCurve_tF623128FF51FC3C48A6749619C4915CBE2995CA4_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_38);
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_40;
		L_40 = GenericVirtualFuncInvoker1< AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354*, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisAnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_m10F5F132336385185365E73EF668D8D369D3A4A1_RuntimeMethod_var, L_38, L_39);
		MinMaxCurve_set_curveMin_m17ADE22B882B75CBE87836C85C477A05122D9E75((&V_0), L_40, NULL);
		// break;
		goto IL_01d2;
	}

IL_017c:
	{
		// instance.constantMax = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_41 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_42 = ((ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_41);
		float L_43;
		L_43 = GenericVirtualFuncInvoker1< float, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mA86928BC888E342D2C2644535E3399952F5077ED_RuntimeMethod_var, L_41, L_42);
		MinMaxCurve_set_constantMax_mDB7B011E5B1EA76429B2A1FFDE6C06E82D290DC1((&V_0), L_43, NULL);
		// break;
		goto IL_01d2;
	}

IL_0190:
	{
		// instance.constantMin = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_44 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_45 = ((ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_44);
		float L_46;
		L_46 = GenericVirtualFuncInvoker1< float, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mA86928BC888E342D2C2644535E3399952F5077ED_RuntimeMethod_var, L_44, L_45);
		MinMaxCurve_set_constantMin_mBF7CF2A9F167AD06C327EE6EA37BA427E1CE548C((&V_0), L_46, NULL);
		// break;
		goto IL_01d2;
	}

IL_01a4:
	{
		// instance.constant = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_47 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_48 = ((ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_47);
		float L_49;
		L_49 = GenericVirtualFuncInvoker1< float, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mA86928BC888E342D2C2644535E3399952F5077ED_RuntimeMethod_var, L_47, L_48);
		MinMaxCurve_set_constant_mB6E4F22F67D3ED641FEBB387351F17451BB6A897((&V_0), L_49, NULL);
		// break;
		goto IL_01d2;
	}

IL_01b8:
	{
		// instance.curve = reader.Read<UnityEngine.AnimationCurve>(ES3Type_AnimationCurve.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_50 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_51 = ((ES3Type_AnimationCurve_tF623128FF51FC3C48A6749619C4915CBE2995CA4_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_AnimationCurve_tF623128FF51FC3C48A6749619C4915CBE2995CA4_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_50);
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_52;
		L_52 = GenericVirtualFuncInvoker1< AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354*, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisAnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_m10F5F132336385185365E73EF668D8D369D3A4A1_RuntimeMethod_var, L_50, L_51);
		MinMaxCurve_set_curve_mC745A6526FBF122F96DA597997DFAB9D7D2529BF((&V_0), L_52, NULL);
		// break;
		goto IL_01d2;
	}

IL_01cc:
	{
		// reader.Skip();
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_53 = ___reader0;
		NullCheck(L_53);
		VirtualActionInvoker0::Invoke(41 /* System.Void ES3Reader::Skip() */, L_53);
	}

IL_01d2:
	{
		// while((propertyName = reader.ReadPropertyName()) != null)
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_54 = ___reader0;
		NullCheck(L_54);
		String_t* L_55;
		L_55 = VirtualFuncInvoker0< String_t* >::Invoke(21 /* System.String ES3Reader::ReadPropertyName() */, L_54);
		String_t* L_56 = L_55;
		V_1 = L_56;
		if (L_56)
		{
			goto IL_000c;
		}
	}
	{
		// }
		return;
	}
}
// System.Void ES3Types.ES3Type_MinMaxCurve::ReadInto<UnityEngine.ParticleSystem/ColorOverLifetimeModule>(ES3Reader,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ES3Type_MinMaxCurve_ReadInto_TisColorOverLifetimeModule_t758EC8315B6C19D78C418D942CD1F94FE7EEE9D9_mC75A0664D4F16ECD0DF35EA9DFC401E4AD880294_gshared (ES3Type_MinMaxCurve_t1C147718750ACBECE5D2B7F545D2A434A3C5409B* __this, ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* ___reader0, RuntimeObject* ___obj1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisAnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_m10F5F132336385185365E73EF668D8D369D3A4A1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisParticleSystemCurveMode_t8BE38B5D6B050709BAE31B5556CFC3DA69FC8405_m066E552CFA7510B509D2175EB72B2402EC615596_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mA86928BC888E342D2C2644535E3399952F5077ED_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_AnimationCurve_tF623128FF51FC3C48A6749619C4915CBE2995CA4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral227C22F51E4B6583CFC54387461605DDBBB00D14);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral27906925D50A15B990B586241F08C8ED14226340);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral36587A0761A180514C267B50EA888F89871F71DF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6C9DED8087C891AE33ACFFCE806DBFF63795F56F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral87E6319336195D789899F4791CCD5F2437BCC0B0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAF248E82BE9EBA1ADBF067429FAEE5A5B6E05A74);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB5831A880405F69C8EF7F43534BF4D880F2B9A12);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD4A11128F810D574390DA344F324014E964D1876);
		s_Il2CppMethodInitialized = true;
	}
	MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	uint32_t V_2 = 0;
	{
		// var instance = (UnityEngine.ParticleSystem.MinMaxCurve)obj;
		RuntimeObject* L_0 = ___obj1;
		V_0 = ((*(MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23*)((MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23*)(MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23*)UnBox(L_0, MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_il2cpp_TypeInfo_var))));
		goto IL_01d2;
	}

IL_000c:
	{
		String_t* L_1 = V_1;
		uint32_t L_2;
		L_2 = U3CPrivateImplementationDetailsU3E_ComputeStringHash_m6EA1F233618497AEFF8902A5EDFA24C74E2F2876(L_1, NULL);
		V_2 = L_2;
		uint32_t L_3 = V_2;
		if ((!(((uint32_t)L_3) <= ((uint32_t)((int32_t)-725866558)))))
		{
			goto IL_0053;
		}
	}
	{
		uint32_t L_4 = V_2;
		if ((!(((uint32_t)L_4) <= ((uint32_t)((int32_t)740975083)))))
		{
			goto IL_003b;
		}
	}
	{
		uint32_t L_5 = V_2;
		if ((((int32_t)L_5) == ((int32_t)((int32_t)110225957))))
		{
			goto IL_0104;
		}
	}
	{
		uint32_t L_6 = V_2;
		if ((((int32_t)L_6) == ((int32_t)((int32_t)740975083))))
		{
			goto IL_009b;
		}
	}
	{
		goto IL_01cc;
	}

IL_003b:
	{
		uint32_t L_7 = V_2;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)-1724381676))))
		{
			goto IL_0119;
		}
	}
	{
		uint32_t L_8 = V_2;
		if ((((int32_t)L_8) == ((int32_t)((int32_t)-725866558))))
		{
			goto IL_00b0;
		}
	}
	{
		goto IL_01cc;
	}

IL_0053:
	{
		uint32_t L_9 = V_2;
		if ((!(((uint32_t)L_9) <= ((uint32_t)((int32_t)-559473464)))))
		{
			goto IL_0073;
		}
	}
	{
		uint32_t L_10 = V_2;
		if ((((int32_t)L_10) == ((int32_t)((int32_t)-581632105))))
		{
			goto IL_00ef;
		}
	}
	{
		uint32_t L_11 = V_2;
		if ((((int32_t)L_11) == ((int32_t)((int32_t)-559473464))))
		{
			goto IL_00c5;
		}
	}
	{
		goto IL_01cc;
	}

IL_0073:
	{
		uint32_t L_12 = V_2;
		if ((((int32_t)L_12) == ((int32_t)((int32_t)-345465511))))
		{
			goto IL_00da;
		}
	}
	{
		uint32_t L_13 = V_2;
		if ((!(((uint32_t)L_13) == ((uint32_t)((int32_t)-328277998)))))
		{
			goto IL_01cc;
		}
	}
	{
		String_t* L_14 = V_1;
		bool L_15;
		L_15 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_14, _stringLiteralAF248E82BE9EBA1ADBF067429FAEE5A5B6E05A74, NULL);
		if (L_15)
		{
			goto IL_012e;
		}
	}
	{
		goto IL_01cc;
	}

IL_009b:
	{
		String_t* L_16 = V_1;
		bool L_17;
		L_17 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_16, _stringLiteral227C22F51E4B6583CFC54387461605DDBBB00D14, NULL);
		if (L_17)
		{
			goto IL_0140;
		}
	}
	{
		goto IL_01cc;
	}

IL_00b0:
	{
		String_t* L_18 = V_1;
		bool L_19;
		L_19 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_18, _stringLiteral27906925D50A15B990B586241F08C8ED14226340, NULL);
		if (L_19)
		{
			goto IL_0154;
		}
	}
	{
		goto IL_01cc;
	}

IL_00c5:
	{
		String_t* L_20 = V_1;
		bool L_21;
		L_21 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_20, _stringLiteralD4A11128F810D574390DA344F324014E964D1876, NULL);
		if (L_21)
		{
			goto IL_0168;
		}
	}
	{
		goto IL_01cc;
	}

IL_00da:
	{
		String_t* L_22 = V_1;
		bool L_23;
		L_23 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_22, _stringLiteralB5831A880405F69C8EF7F43534BF4D880F2B9A12, NULL);
		if (L_23)
		{
			goto IL_017c;
		}
	}
	{
		goto IL_01cc;
	}

IL_00ef:
	{
		String_t* L_24 = V_1;
		bool L_25;
		L_25 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_24, _stringLiteral36587A0761A180514C267B50EA888F89871F71DF, NULL);
		if (L_25)
		{
			goto IL_0190;
		}
	}
	{
		goto IL_01cc;
	}

IL_0104:
	{
		String_t* L_26 = V_1;
		bool L_27;
		L_27 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_26, _stringLiteral87E6319336195D789899F4791CCD5F2437BCC0B0, NULL);
		if (L_27)
		{
			goto IL_01a4;
		}
	}
	{
		goto IL_01cc;
	}

IL_0119:
	{
		String_t* L_28 = V_1;
		bool L_29;
		L_29 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_28, _stringLiteral6C9DED8087C891AE33ACFFCE806DBFF63795F56F, NULL);
		if (L_29)
		{
			goto IL_01b8;
		}
	}
	{
		goto IL_01cc;
	}

IL_012e:
	{
		// instance.mode = reader.Read<UnityEngine.ParticleSystemCurveMode>();
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_30 = ___reader0;
		NullCheck(L_30);
		int32_t L_31;
		L_31 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisParticleSystemCurveMode_t8BE38B5D6B050709BAE31B5556CFC3DA69FC8405_m066E552CFA7510B509D2175EB72B2402EC615596_RuntimeMethod_var, L_30);
		MinMaxCurve_set_mode_m6870C4CA0FE7AF1029F45040B827C9F0A6A80A86((&V_0), L_31, NULL);
		// break;
		goto IL_01d2;
	}

IL_0140:
	{
		// instance.curveMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_32 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_33 = ((ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_32);
		float L_34;
		L_34 = GenericVirtualFuncInvoker1< float, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mA86928BC888E342D2C2644535E3399952F5077ED_RuntimeMethod_var, L_32, L_33);
		MinMaxCurve_set_curveMultiplier_m9FCF7F21AECE399ACD9FEB9ADEEBD93FD12DDABC((&V_0), L_34, NULL);
		// break;
		goto IL_01d2;
	}

IL_0154:
	{
		// instance.curveMax = reader.Read<UnityEngine.AnimationCurve>(ES3Type_AnimationCurve.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_35 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_36 = ((ES3Type_AnimationCurve_tF623128FF51FC3C48A6749619C4915CBE2995CA4_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_AnimationCurve_tF623128FF51FC3C48A6749619C4915CBE2995CA4_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_35);
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_37;
		L_37 = GenericVirtualFuncInvoker1< AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354*, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisAnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_m10F5F132336385185365E73EF668D8D369D3A4A1_RuntimeMethod_var, L_35, L_36);
		MinMaxCurve_set_curveMax_m39B9E8AE4E62E874DA99AA7108C2C47C6CA333DF((&V_0), L_37, NULL);
		// break;
		goto IL_01d2;
	}

IL_0168:
	{
		// instance.curveMin = reader.Read<UnityEngine.AnimationCurve>(ES3Type_AnimationCurve.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_38 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_39 = ((ES3Type_AnimationCurve_tF623128FF51FC3C48A6749619C4915CBE2995CA4_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_AnimationCurve_tF623128FF51FC3C48A6749619C4915CBE2995CA4_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_38);
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_40;
		L_40 = GenericVirtualFuncInvoker1< AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354*, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisAnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_m10F5F132336385185365E73EF668D8D369D3A4A1_RuntimeMethod_var, L_38, L_39);
		MinMaxCurve_set_curveMin_m17ADE22B882B75CBE87836C85C477A05122D9E75((&V_0), L_40, NULL);
		// break;
		goto IL_01d2;
	}

IL_017c:
	{
		// instance.constantMax = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_41 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_42 = ((ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_41);
		float L_43;
		L_43 = GenericVirtualFuncInvoker1< float, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mA86928BC888E342D2C2644535E3399952F5077ED_RuntimeMethod_var, L_41, L_42);
		MinMaxCurve_set_constantMax_mDB7B011E5B1EA76429B2A1FFDE6C06E82D290DC1((&V_0), L_43, NULL);
		// break;
		goto IL_01d2;
	}

IL_0190:
	{
		// instance.constantMin = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_44 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_45 = ((ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_44);
		float L_46;
		L_46 = GenericVirtualFuncInvoker1< float, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mA86928BC888E342D2C2644535E3399952F5077ED_RuntimeMethod_var, L_44, L_45);
		MinMaxCurve_set_constantMin_mBF7CF2A9F167AD06C327EE6EA37BA427E1CE548C((&V_0), L_46, NULL);
		// break;
		goto IL_01d2;
	}

IL_01a4:
	{
		// instance.constant = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_47 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_48 = ((ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_47);
		float L_49;
		L_49 = GenericVirtualFuncInvoker1< float, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mA86928BC888E342D2C2644535E3399952F5077ED_RuntimeMethod_var, L_47, L_48);
		MinMaxCurve_set_constant_mB6E4F22F67D3ED641FEBB387351F17451BB6A897((&V_0), L_49, NULL);
		// break;
		goto IL_01d2;
	}

IL_01b8:
	{
		// instance.curve = reader.Read<UnityEngine.AnimationCurve>(ES3Type_AnimationCurve.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_50 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_51 = ((ES3Type_AnimationCurve_tF623128FF51FC3C48A6749619C4915CBE2995CA4_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_AnimationCurve_tF623128FF51FC3C48A6749619C4915CBE2995CA4_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_50);
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_52;
		L_52 = GenericVirtualFuncInvoker1< AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354*, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisAnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_m10F5F132336385185365E73EF668D8D369D3A4A1_RuntimeMethod_var, L_50, L_51);
		MinMaxCurve_set_curve_mC745A6526FBF122F96DA597997DFAB9D7D2529BF((&V_0), L_52, NULL);
		// break;
		goto IL_01d2;
	}

IL_01cc:
	{
		// reader.Skip();
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_53 = ___reader0;
		NullCheck(L_53);
		VirtualActionInvoker0::Invoke(41 /* System.Void ES3Reader::Skip() */, L_53);
	}

IL_01d2:
	{
		// while((propertyName = reader.ReadPropertyName()) != null)
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_54 = ___reader0;
		NullCheck(L_54);
		String_t* L_55;
		L_55 = VirtualFuncInvoker0< String_t* >::Invoke(21 /* System.String ES3Reader::ReadPropertyName() */, L_54);
		String_t* L_56 = L_55;
		V_1 = L_56;
		if (L_56)
		{
			goto IL_000c;
		}
	}
	{
		// }
		return;
	}
}
// System.Void ES3Types.ES3Type_MinMaxCurve::ReadInto<UnityEngine.ParticleSystem/EmissionModule>(ES3Reader,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ES3Type_MinMaxCurve_ReadInto_TisEmissionModule_t0F469FA4A08003F6D9C610D2F716A9DFDB9A3678_m00C36448D6542A6E44C62595474A2D4D9812D1BE_gshared (ES3Type_MinMaxCurve_t1C147718750ACBECE5D2B7F545D2A434A3C5409B* __this, ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* ___reader0, RuntimeObject* ___obj1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisAnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_m10F5F132336385185365E73EF668D8D369D3A4A1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisParticleSystemCurveMode_t8BE38B5D6B050709BAE31B5556CFC3DA69FC8405_m066E552CFA7510B509D2175EB72B2402EC615596_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mA86928BC888E342D2C2644535E3399952F5077ED_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_AnimationCurve_tF623128FF51FC3C48A6749619C4915CBE2995CA4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral227C22F51E4B6583CFC54387461605DDBBB00D14);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral27906925D50A15B990B586241F08C8ED14226340);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral36587A0761A180514C267B50EA888F89871F71DF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6C9DED8087C891AE33ACFFCE806DBFF63795F56F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral87E6319336195D789899F4791CCD5F2437BCC0B0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAF248E82BE9EBA1ADBF067429FAEE5A5B6E05A74);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB5831A880405F69C8EF7F43534BF4D880F2B9A12);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD4A11128F810D574390DA344F324014E964D1876);
		s_Il2CppMethodInitialized = true;
	}
	MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	uint32_t V_2 = 0;
	{
		// var instance = (UnityEngine.ParticleSystem.MinMaxCurve)obj;
		RuntimeObject* L_0 = ___obj1;
		V_0 = ((*(MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23*)((MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23*)(MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23*)UnBox(L_0, MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_il2cpp_TypeInfo_var))));
		goto IL_01d2;
	}

IL_000c:
	{
		String_t* L_1 = V_1;
		uint32_t L_2;
		L_2 = U3CPrivateImplementationDetailsU3E_ComputeStringHash_m6EA1F233618497AEFF8902A5EDFA24C74E2F2876(L_1, NULL);
		V_2 = L_2;
		uint32_t L_3 = V_2;
		if ((!(((uint32_t)L_3) <= ((uint32_t)((int32_t)-725866558)))))
		{
			goto IL_0053;
		}
	}
	{
		uint32_t L_4 = V_2;
		if ((!(((uint32_t)L_4) <= ((uint32_t)((int32_t)740975083)))))
		{
			goto IL_003b;
		}
	}
	{
		uint32_t L_5 = V_2;
		if ((((int32_t)L_5) == ((int32_t)((int32_t)110225957))))
		{
			goto IL_0104;
		}
	}
	{
		uint32_t L_6 = V_2;
		if ((((int32_t)L_6) == ((int32_t)((int32_t)740975083))))
		{
			goto IL_009b;
		}
	}
	{
		goto IL_01cc;
	}

IL_003b:
	{
		uint32_t L_7 = V_2;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)-1724381676))))
		{
			goto IL_0119;
		}
	}
	{
		uint32_t L_8 = V_2;
		if ((((int32_t)L_8) == ((int32_t)((int32_t)-725866558))))
		{
			goto IL_00b0;
		}
	}
	{
		goto IL_01cc;
	}

IL_0053:
	{
		uint32_t L_9 = V_2;
		if ((!(((uint32_t)L_9) <= ((uint32_t)((int32_t)-559473464)))))
		{
			goto IL_0073;
		}
	}
	{
		uint32_t L_10 = V_2;
		if ((((int32_t)L_10) == ((int32_t)((int32_t)-581632105))))
		{
			goto IL_00ef;
		}
	}
	{
		uint32_t L_11 = V_2;
		if ((((int32_t)L_11) == ((int32_t)((int32_t)-559473464))))
		{
			goto IL_00c5;
		}
	}
	{
		goto IL_01cc;
	}

IL_0073:
	{
		uint32_t L_12 = V_2;
		if ((((int32_t)L_12) == ((int32_t)((int32_t)-345465511))))
		{
			goto IL_00da;
		}
	}
	{
		uint32_t L_13 = V_2;
		if ((!(((uint32_t)L_13) == ((uint32_t)((int32_t)-328277998)))))
		{
			goto IL_01cc;
		}
	}
	{
		String_t* L_14 = V_1;
		bool L_15;
		L_15 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_14, _stringLiteralAF248E82BE9EBA1ADBF067429FAEE5A5B6E05A74, NULL);
		if (L_15)
		{
			goto IL_012e;
		}
	}
	{
		goto IL_01cc;
	}

IL_009b:
	{
		String_t* L_16 = V_1;
		bool L_17;
		L_17 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_16, _stringLiteral227C22F51E4B6583CFC54387461605DDBBB00D14, NULL);
		if (L_17)
		{
			goto IL_0140;
		}
	}
	{
		goto IL_01cc;
	}

IL_00b0:
	{
		String_t* L_18 = V_1;
		bool L_19;
		L_19 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_18, _stringLiteral27906925D50A15B990B586241F08C8ED14226340, NULL);
		if (L_19)
		{
			goto IL_0154;
		}
	}
	{
		goto IL_01cc;
	}

IL_00c5:
	{
		String_t* L_20 = V_1;
		bool L_21;
		L_21 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_20, _stringLiteralD4A11128F810D574390DA344F324014E964D1876, NULL);
		if (L_21)
		{
			goto IL_0168;
		}
	}
	{
		goto IL_01cc;
	}

IL_00da:
	{
		String_t* L_22 = V_1;
		bool L_23;
		L_23 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_22, _stringLiteralB5831A880405F69C8EF7F43534BF4D880F2B9A12, NULL);
		if (L_23)
		{
			goto IL_017c;
		}
	}
	{
		goto IL_01cc;
	}

IL_00ef:
	{
		String_t* L_24 = V_1;
		bool L_25;
		L_25 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_24, _stringLiteral36587A0761A180514C267B50EA888F89871F71DF, NULL);
		if (L_25)
		{
			goto IL_0190;
		}
	}
	{
		goto IL_01cc;
	}

IL_0104:
	{
		String_t* L_26 = V_1;
		bool L_27;
		L_27 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_26, _stringLiteral87E6319336195D789899F4791CCD5F2437BCC0B0, NULL);
		if (L_27)
		{
			goto IL_01a4;
		}
	}
	{
		goto IL_01cc;
	}

IL_0119:
	{
		String_t* L_28 = V_1;
		bool L_29;
		L_29 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_28, _stringLiteral6C9DED8087C891AE33ACFFCE806DBFF63795F56F, NULL);
		if (L_29)
		{
			goto IL_01b8;
		}
	}
	{
		goto IL_01cc;
	}

IL_012e:
	{
		// instance.mode = reader.Read<UnityEngine.ParticleSystemCurveMode>();
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_30 = ___reader0;
		NullCheck(L_30);
		int32_t L_31;
		L_31 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisParticleSystemCurveMode_t8BE38B5D6B050709BAE31B5556CFC3DA69FC8405_m066E552CFA7510B509D2175EB72B2402EC615596_RuntimeMethod_var, L_30);
		MinMaxCurve_set_mode_m6870C4CA0FE7AF1029F45040B827C9F0A6A80A86((&V_0), L_31, NULL);
		// break;
		goto IL_01d2;
	}

IL_0140:
	{
		// instance.curveMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_32 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_33 = ((ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_32);
		float L_34;
		L_34 = GenericVirtualFuncInvoker1< float, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mA86928BC888E342D2C2644535E3399952F5077ED_RuntimeMethod_var, L_32, L_33);
		MinMaxCurve_set_curveMultiplier_m9FCF7F21AECE399ACD9FEB9ADEEBD93FD12DDABC((&V_0), L_34, NULL);
		// break;
		goto IL_01d2;
	}

IL_0154:
	{
		// instance.curveMax = reader.Read<UnityEngine.AnimationCurve>(ES3Type_AnimationCurve.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_35 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_36 = ((ES3Type_AnimationCurve_tF623128FF51FC3C48A6749619C4915CBE2995CA4_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_AnimationCurve_tF623128FF51FC3C48A6749619C4915CBE2995CA4_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_35);
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_37;
		L_37 = GenericVirtualFuncInvoker1< AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354*, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisAnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_m10F5F132336385185365E73EF668D8D369D3A4A1_RuntimeMethod_var, L_35, L_36);
		MinMaxCurve_set_curveMax_m39B9E8AE4E62E874DA99AA7108C2C47C6CA333DF((&V_0), L_37, NULL);
		// break;
		goto IL_01d2;
	}

IL_0168:
	{
		// instance.curveMin = reader.Read<UnityEngine.AnimationCurve>(ES3Type_AnimationCurve.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_38 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_39 = ((ES3Type_AnimationCurve_tF623128FF51FC3C48A6749619C4915CBE2995CA4_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_AnimationCurve_tF623128FF51FC3C48A6749619C4915CBE2995CA4_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_38);
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_40;
		L_40 = GenericVirtualFuncInvoker1< AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354*, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisAnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_m10F5F132336385185365E73EF668D8D369D3A4A1_RuntimeMethod_var, L_38, L_39);
		MinMaxCurve_set_curveMin_m17ADE22B882B75CBE87836C85C477A05122D9E75((&V_0), L_40, NULL);
		// break;
		goto IL_01d2;
	}

IL_017c:
	{
		// instance.constantMax = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_41 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_42 = ((ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_41);
		float L_43;
		L_43 = GenericVirtualFuncInvoker1< float, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mA86928BC888E342D2C2644535E3399952F5077ED_RuntimeMethod_var, L_41, L_42);
		MinMaxCurve_set_constantMax_mDB7B011E5B1EA76429B2A1FFDE6C06E82D290DC1((&V_0), L_43, NULL);
		// break;
		goto IL_01d2;
	}

IL_0190:
	{
		// instance.constantMin = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_44 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_45 = ((ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_44);
		float L_46;
		L_46 = GenericVirtualFuncInvoker1< float, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mA86928BC888E342D2C2644535E3399952F5077ED_RuntimeMethod_var, L_44, L_45);
		MinMaxCurve_set_constantMin_mBF7CF2A9F167AD06C327EE6EA37BA427E1CE548C((&V_0), L_46, NULL);
		// break;
		goto IL_01d2;
	}

IL_01a4:
	{
		// instance.constant = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_47 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_48 = ((ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_47);
		float L_49;
		L_49 = GenericVirtualFuncInvoker1< float, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mA86928BC888E342D2C2644535E3399952F5077ED_RuntimeMethod_var, L_47, L_48);
		MinMaxCurve_set_constant_mB6E4F22F67D3ED641FEBB387351F17451BB6A897((&V_0), L_49, NULL);
		// break;
		goto IL_01d2;
	}

IL_01b8:
	{
		// instance.curve = reader.Read<UnityEngine.AnimationCurve>(ES3Type_AnimationCurve.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_50 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_51 = ((ES3Type_AnimationCurve_tF623128FF51FC3C48A6749619C4915CBE2995CA4_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_AnimationCurve_tF623128FF51FC3C48A6749619C4915CBE2995CA4_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_50);
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_52;
		L_52 = GenericVirtualFuncInvoker1< AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354*, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisAnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_m10F5F132336385185365E73EF668D8D369D3A4A1_RuntimeMethod_var, L_50, L_51);
		MinMaxCurve_set_curve_mC745A6526FBF122F96DA597997DFAB9D7D2529BF((&V_0), L_52, NULL);
		// break;
		goto IL_01d2;
	}

IL_01cc:
	{
		// reader.Skip();
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_53 = ___reader0;
		NullCheck(L_53);
		VirtualActionInvoker0::Invoke(41 /* System.Void ES3Reader::Skip() */, L_53);
	}

IL_01d2:
	{
		// while((propertyName = reader.ReadPropertyName()) != null)
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_54 = ___reader0;
		NullCheck(L_54);
		String_t* L_55;
		L_55 = VirtualFuncInvoker0< String_t* >::Invoke(21 /* System.String ES3Reader::ReadPropertyName() */, L_54);
		String_t* L_56 = L_55;
		V_1 = L_56;
		if (L_56)
		{
			goto IL_000c;
		}
	}
	{
		// }
		return;
	}
}
// System.Void ES3Types.ES3Type_MinMaxCurve::ReadInto<UnityEngine.ParticleSystem/ExternalForcesModule>(ES3Reader,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ES3Type_MinMaxCurve_ReadInto_TisExternalForcesModule_t4494E21ECF96F072432EF4DDC5F84BAF84912FC7_m4999CFD588F1DCF33000AABE69869CDFED312B0E_gshared (ES3Type_MinMaxCurve_t1C147718750ACBECE5D2B7F545D2A434A3C5409B* __this, ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* ___reader0, RuntimeObject* ___obj1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisAnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_m10F5F132336385185365E73EF668D8D369D3A4A1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisParticleSystemCurveMode_t8BE38B5D6B050709BAE31B5556CFC3DA69FC8405_m066E552CFA7510B509D2175EB72B2402EC615596_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mA86928BC888E342D2C2644535E3399952F5077ED_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_AnimationCurve_tF623128FF51FC3C48A6749619C4915CBE2995CA4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral227C22F51E4B6583CFC54387461605DDBBB00D14);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral27906925D50A15B990B586241F08C8ED14226340);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral36587A0761A180514C267B50EA888F89871F71DF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6C9DED8087C891AE33ACFFCE806DBFF63795F56F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral87E6319336195D789899F4791CCD5F2437BCC0B0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAF248E82BE9EBA1ADBF067429FAEE5A5B6E05A74);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB5831A880405F69C8EF7F43534BF4D880F2B9A12);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD4A11128F810D574390DA344F324014E964D1876);
		s_Il2CppMethodInitialized = true;
	}
	MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	uint32_t V_2 = 0;
	{
		// var instance = (UnityEngine.ParticleSystem.MinMaxCurve)obj;
		RuntimeObject* L_0 = ___obj1;
		V_0 = ((*(MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23*)((MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23*)(MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23*)UnBox(L_0, MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_il2cpp_TypeInfo_var))));
		goto IL_01d2;
	}

IL_000c:
	{
		String_t* L_1 = V_1;
		uint32_t L_2;
		L_2 = U3CPrivateImplementationDetailsU3E_ComputeStringHash_m6EA1F233618497AEFF8902A5EDFA24C74E2F2876(L_1, NULL);
		V_2 = L_2;
		uint32_t L_3 = V_2;
		if ((!(((uint32_t)L_3) <= ((uint32_t)((int32_t)-725866558)))))
		{
			goto IL_0053;
		}
	}
	{
		uint32_t L_4 = V_2;
		if ((!(((uint32_t)L_4) <= ((uint32_t)((int32_t)740975083)))))
		{
			goto IL_003b;
		}
	}
	{
		uint32_t L_5 = V_2;
		if ((((int32_t)L_5) == ((int32_t)((int32_t)110225957))))
		{
			goto IL_0104;
		}
	}
	{
		uint32_t L_6 = V_2;
		if ((((int32_t)L_6) == ((int32_t)((int32_t)740975083))))
		{
			goto IL_009b;
		}
	}
	{
		goto IL_01cc;
	}

IL_003b:
	{
		uint32_t L_7 = V_2;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)-1724381676))))
		{
			goto IL_0119;
		}
	}
	{
		uint32_t L_8 = V_2;
		if ((((int32_t)L_8) == ((int32_t)((int32_t)-725866558))))
		{
			goto IL_00b0;
		}
	}
	{
		goto IL_01cc;
	}

IL_0053:
	{
		uint32_t L_9 = V_2;
		if ((!(((uint32_t)L_9) <= ((uint32_t)((int32_t)-559473464)))))
		{
			goto IL_0073;
		}
	}
	{
		uint32_t L_10 = V_2;
		if ((((int32_t)L_10) == ((int32_t)((int32_t)-581632105))))
		{
			goto IL_00ef;
		}
	}
	{
		uint32_t L_11 = V_2;
		if ((((int32_t)L_11) == ((int32_t)((int32_t)-559473464))))
		{
			goto IL_00c5;
		}
	}
	{
		goto IL_01cc;
	}

IL_0073:
	{
		uint32_t L_12 = V_2;
		if ((((int32_t)L_12) == ((int32_t)((int32_t)-345465511))))
		{
			goto IL_00da;
		}
	}
	{
		uint32_t L_13 = V_2;
		if ((!(((uint32_t)L_13) == ((uint32_t)((int32_t)-328277998)))))
		{
			goto IL_01cc;
		}
	}
	{
		String_t* L_14 = V_1;
		bool L_15;
		L_15 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_14, _stringLiteralAF248E82BE9EBA1ADBF067429FAEE5A5B6E05A74, NULL);
		if (L_15)
		{
			goto IL_012e;
		}
	}
	{
		goto IL_01cc;
	}

IL_009b:
	{
		String_t* L_16 = V_1;
		bool L_17;
		L_17 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_16, _stringLiteral227C22F51E4B6583CFC54387461605DDBBB00D14, NULL);
		if (L_17)
		{
			goto IL_0140;
		}
	}
	{
		goto IL_01cc;
	}

IL_00b0:
	{
		String_t* L_18 = V_1;
		bool L_19;
		L_19 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_18, _stringLiteral27906925D50A15B990B586241F08C8ED14226340, NULL);
		if (L_19)
		{
			goto IL_0154;
		}
	}
	{
		goto IL_01cc;
	}

IL_00c5:
	{
		String_t* L_20 = V_1;
		bool L_21;
		L_21 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_20, _stringLiteralD4A11128F810D574390DA344F324014E964D1876, NULL);
		if (L_21)
		{
			goto IL_0168;
		}
	}
	{
		goto IL_01cc;
	}

IL_00da:
	{
		String_t* L_22 = V_1;
		bool L_23;
		L_23 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_22, _stringLiteralB5831A880405F69C8EF7F43534BF4D880F2B9A12, NULL);
		if (L_23)
		{
			goto IL_017c;
		}
	}
	{
		goto IL_01cc;
	}

IL_00ef:
	{
		String_t* L_24 = V_1;
		bool L_25;
		L_25 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_24, _stringLiteral36587A0761A180514C267B50EA888F89871F71DF, NULL);
		if (L_25)
		{
			goto IL_0190;
		}
	}
	{
		goto IL_01cc;
	}

IL_0104:
	{
		String_t* L_26 = V_1;
		bool L_27;
		L_27 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_26, _stringLiteral87E6319336195D789899F4791CCD5F2437BCC0B0, NULL);
		if (L_27)
		{
			goto IL_01a4;
		}
	}
	{
		goto IL_01cc;
	}

IL_0119:
	{
		String_t* L_28 = V_1;
		bool L_29;
		L_29 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_28, _stringLiteral6C9DED8087C891AE33ACFFCE806DBFF63795F56F, NULL);
		if (L_29)
		{
			goto IL_01b8;
		}
	}
	{
		goto IL_01cc;
	}

IL_012e:
	{
		// instance.mode = reader.Read<UnityEngine.ParticleSystemCurveMode>();
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_30 = ___reader0;
		NullCheck(L_30);
		int32_t L_31;
		L_31 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisParticleSystemCurveMode_t8BE38B5D6B050709BAE31B5556CFC3DA69FC8405_m066E552CFA7510B509D2175EB72B2402EC615596_RuntimeMethod_var, L_30);
		MinMaxCurve_set_mode_m6870C4CA0FE7AF1029F45040B827C9F0A6A80A86((&V_0), L_31, NULL);
		// break;
		goto IL_01d2;
	}

IL_0140:
	{
		// instance.curveMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_32 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_33 = ((ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_32);
		float L_34;
		L_34 = GenericVirtualFuncInvoker1< float, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mA86928BC888E342D2C2644535E3399952F5077ED_RuntimeMethod_var, L_32, L_33);
		MinMaxCurve_set_curveMultiplier_m9FCF7F21AECE399ACD9FEB9ADEEBD93FD12DDABC((&V_0), L_34, NULL);
		// break;
		goto IL_01d2;
	}

IL_0154:
	{
		// instance.curveMax = reader.Read<UnityEngine.AnimationCurve>(ES3Type_AnimationCurve.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_35 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_36 = ((ES3Type_AnimationCurve_tF623128FF51FC3C48A6749619C4915CBE2995CA4_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_AnimationCurve_tF623128FF51FC3C48A6749619C4915CBE2995CA4_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_35);
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_37;
		L_37 = GenericVirtualFuncInvoker1< AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354*, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisAnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_m10F5F132336385185365E73EF668D8D369D3A4A1_RuntimeMethod_var, L_35, L_36);
		MinMaxCurve_set_curveMax_m39B9E8AE4E62E874DA99AA7108C2C47C6CA333DF((&V_0), L_37, NULL);
		// break;
		goto IL_01d2;
	}

IL_0168:
	{
		// instance.curveMin = reader.Read<UnityEngine.AnimationCurve>(ES3Type_AnimationCurve.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_38 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_39 = ((ES3Type_AnimationCurve_tF623128FF51FC3C48A6749619C4915CBE2995CA4_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_AnimationCurve_tF623128FF51FC3C48A6749619C4915CBE2995CA4_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_38);
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_40;
		L_40 = GenericVirtualFuncInvoker1< AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354*, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisAnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_m10F5F132336385185365E73EF668D8D369D3A4A1_RuntimeMethod_var, L_38, L_39);
		MinMaxCurve_set_curveMin_m17ADE22B882B75CBE87836C85C477A05122D9E75((&V_0), L_40, NULL);
		// break;
		goto IL_01d2;
	}

IL_017c:
	{
		// instance.constantMax = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_41 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_42 = ((ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_41);
		float L_43;
		L_43 = GenericVirtualFuncInvoker1< float, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mA86928BC888E342D2C2644535E3399952F5077ED_RuntimeMethod_var, L_41, L_42);
		MinMaxCurve_set_constantMax_mDB7B011E5B1EA76429B2A1FFDE6C06E82D290DC1((&V_0), L_43, NULL);
		// break;
		goto IL_01d2;
	}

IL_0190:
	{
		// instance.constantMin = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_44 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_45 = ((ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_44);
		float L_46;
		L_46 = GenericVirtualFuncInvoker1< float, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mA86928BC888E342D2C2644535E3399952F5077ED_RuntimeMethod_var, L_44, L_45);
		MinMaxCurve_set_constantMin_mBF7CF2A9F167AD06C327EE6EA37BA427E1CE548C((&V_0), L_46, NULL);
		// break;
		goto IL_01d2;
	}

IL_01a4:
	{
		// instance.constant = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_47 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_48 = ((ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_47);
		float L_49;
		L_49 = GenericVirtualFuncInvoker1< float, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mA86928BC888E342D2C2644535E3399952F5077ED_RuntimeMethod_var, L_47, L_48);
		MinMaxCurve_set_constant_mB6E4F22F67D3ED641FEBB387351F17451BB6A897((&V_0), L_49, NULL);
		// break;
		goto IL_01d2;
	}

IL_01b8:
	{
		// instance.curve = reader.Read<UnityEngine.AnimationCurve>(ES3Type_AnimationCurve.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_50 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_51 = ((ES3Type_AnimationCurve_tF623128FF51FC3C48A6749619C4915CBE2995CA4_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_AnimationCurve_tF623128FF51FC3C48A6749619C4915CBE2995CA4_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_50);
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_52;
		L_52 = GenericVirtualFuncInvoker1< AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354*, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisAnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_m10F5F132336385185365E73EF668D8D369D3A4A1_RuntimeMethod_var, L_50, L_51);
		MinMaxCurve_set_curve_mC745A6526FBF122F96DA597997DFAB9D7D2529BF((&V_0), L_52, NULL);
		// break;
		goto IL_01d2;
	}

IL_01cc:
	{
		// reader.Skip();
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_53 = ___reader0;
		NullCheck(L_53);
		VirtualActionInvoker0::Invoke(41 /* System.Void ES3Reader::Skip() */, L_53);
	}

IL_01d2:
	{
		// while((propertyName = reader.ReadPropertyName()) != null)
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_54 = ___reader0;
		NullCheck(L_54);
		String_t* L_55;
		L_55 = VirtualFuncInvoker0< String_t* >::Invoke(21 /* System.String ES3Reader::ReadPropertyName() */, L_54);
		String_t* L_56 = L_55;
		V_1 = L_56;
		if (L_56)
		{
			goto IL_000c;
		}
	}
	{
		// }
		return;
	}
}
// System.Void ES3Types.ES3Type_MinMaxCurve::ReadInto<UnityEngine.ParticleSystem/ForceOverLifetimeModule>(ES3Reader,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ES3Type_MinMaxCurve_ReadInto_TisForceOverLifetimeModule_t4859776EAF945AEA86044CAB63CA7A8AC8C14976_mF218C3E9A363013E5E036D1BE8EF866D9969DAC6_gshared (ES3Type_MinMaxCurve_t1C147718750ACBECE5D2B7F545D2A434A3C5409B* __this, ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* ___reader0, RuntimeObject* ___obj1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisAnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_m10F5F132336385185365E73EF668D8D369D3A4A1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisParticleSystemCurveMode_t8BE38B5D6B050709BAE31B5556CFC3DA69FC8405_m066E552CFA7510B509D2175EB72B2402EC615596_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mA86928BC888E342D2C2644535E3399952F5077ED_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_AnimationCurve_tF623128FF51FC3C48A6749619C4915CBE2995CA4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral227C22F51E4B6583CFC54387461605DDBBB00D14);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral27906925D50A15B990B586241F08C8ED14226340);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral36587A0761A180514C267B50EA888F89871F71DF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6C9DED8087C891AE33ACFFCE806DBFF63795F56F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral87E6319336195D789899F4791CCD5F2437BCC0B0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAF248E82BE9EBA1ADBF067429FAEE5A5B6E05A74);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB5831A880405F69C8EF7F43534BF4D880F2B9A12);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD4A11128F810D574390DA344F324014E964D1876);
		s_Il2CppMethodInitialized = true;
	}
	MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	uint32_t V_2 = 0;
	{
		// var instance = (UnityEngine.ParticleSystem.MinMaxCurve)obj;
		RuntimeObject* L_0 = ___obj1;
		V_0 = ((*(MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23*)((MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23*)(MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23*)UnBox(L_0, MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_il2cpp_TypeInfo_var))));
		goto IL_01d2;
	}

IL_000c:
	{
		String_t* L_1 = V_1;
		uint32_t L_2;
		L_2 = U3CPrivateImplementationDetailsU3E_ComputeStringHash_m6EA1F233618497AEFF8902A5EDFA24C74E2F2876(L_1, NULL);
		V_2 = L_2;
		uint32_t L_3 = V_2;
		if ((!(((uint32_t)L_3) <= ((uint32_t)((int32_t)-725866558)))))
		{
			goto IL_0053;
		}
	}
	{
		uint32_t L_4 = V_2;
		if ((!(((uint32_t)L_4) <= ((uint32_t)((int32_t)740975083)))))
		{
			goto IL_003b;
		}
	}
	{
		uint32_t L_5 = V_2;
		if ((((int32_t)L_5) == ((int32_t)((int32_t)110225957))))
		{
			goto IL_0104;
		}
	}
	{
		uint32_t L_6 = V_2;
		if ((((int32_t)L_6) == ((int32_t)((int32_t)740975083))))
		{
			goto IL_009b;
		}
	}
	{
		goto IL_01cc;
	}

IL_003b:
	{
		uint32_t L_7 = V_2;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)-1724381676))))
		{
			goto IL_0119;
		}
	}
	{
		uint32_t L_8 = V_2;
		if ((((int32_t)L_8) == ((int32_t)((int32_t)-725866558))))
		{
			goto IL_00b0;
		}
	}
	{
		goto IL_01cc;
	}

IL_0053:
	{
		uint32_t L_9 = V_2;
		if ((!(((uint32_t)L_9) <= ((uint32_t)((int32_t)-559473464)))))
		{
			goto IL_0073;
		}
	}
	{
		uint32_t L_10 = V_2;
		if ((((int32_t)L_10) == ((int32_t)((int32_t)-581632105))))
		{
			goto IL_00ef;
		}
	}
	{
		uint32_t L_11 = V_2;
		if ((((int32_t)L_11) == ((int32_t)((int32_t)-559473464))))
		{
			goto IL_00c5;
		}
	}
	{
		goto IL_01cc;
	}

IL_0073:
	{
		uint32_t L_12 = V_2;
		if ((((int32_t)L_12) == ((int32_t)((int32_t)-345465511))))
		{
			goto IL_00da;
		}
	}
	{
		uint32_t L_13 = V_2;
		if ((!(((uint32_t)L_13) == ((uint32_t)((int32_t)-328277998)))))
		{
			goto IL_01cc;
		}
	}
	{
		String_t* L_14 = V_1;
		bool L_15;
		L_15 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_14, _stringLiteralAF248E82BE9EBA1ADBF067429FAEE5A5B6E05A74, NULL);
		if (L_15)
		{
			goto IL_012e;
		}
	}
	{
		goto IL_01cc;
	}

IL_009b:
	{
		String_t* L_16 = V_1;
		bool L_17;
		L_17 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_16, _stringLiteral227C22F51E4B6583CFC54387461605DDBBB00D14, NULL);
		if (L_17)
		{
			goto IL_0140;
		}
	}
	{
		goto IL_01cc;
	}

IL_00b0:
	{
		String_t* L_18 = V_1;
		bool L_19;
		L_19 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_18, _stringLiteral27906925D50A15B990B586241F08C8ED14226340, NULL);
		if (L_19)
		{
			goto IL_0154;
		}
	}
	{
		goto IL_01cc;
	}

IL_00c5:
	{
		String_t* L_20 = V_1;
		bool L_21;
		L_21 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_20, _stringLiteralD4A11128F810D574390DA344F324014E964D1876, NULL);
		if (L_21)
		{
			goto IL_0168;
		}
	}
	{
		goto IL_01cc;
	}

IL_00da:
	{
		String_t* L_22 = V_1;
		bool L_23;
		L_23 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_22, _stringLiteralB5831A880405F69C8EF7F43534BF4D880F2B9A12, NULL);
		if (L_23)
		{
			goto IL_017c;
		}
	}
	{
		goto IL_01cc;
	}

IL_00ef:
	{
		String_t* L_24 = V_1;
		bool L_25;
		L_25 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_24, _stringLiteral36587A0761A180514C267B50EA888F89871F71DF, NULL);
		if (L_25)
		{
			goto IL_0190;
		}
	}
	{
		goto IL_01cc;
	}

IL_0104:
	{
		String_t* L_26 = V_1;
		bool L_27;
		L_27 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_26, _stringLiteral87E6319336195D789899F4791CCD5F2437BCC0B0, NULL);
		if (L_27)
		{
			goto IL_01a4;
		}
	}
	{
		goto IL_01cc;
	}

IL_0119:
	{
		String_t* L_28 = V_1;
		bool L_29;
		L_29 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_28, _stringLiteral6C9DED8087C891AE33ACFFCE806DBFF63795F56F, NULL);
		if (L_29)
		{
			goto IL_01b8;
		}
	}
	{
		goto IL_01cc;
	}

IL_012e:
	{
		// instance.mode = reader.Read<UnityEngine.ParticleSystemCurveMode>();
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_30 = ___reader0;
		NullCheck(L_30);
		int32_t L_31;
		L_31 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisParticleSystemCurveMode_t8BE38B5D6B050709BAE31B5556CFC3DA69FC8405_m066E552CFA7510B509D2175EB72B2402EC615596_RuntimeMethod_var, L_30);
		MinMaxCurve_set_mode_m6870C4CA0FE7AF1029F45040B827C9F0A6A80A86((&V_0), L_31, NULL);
		// break;
		goto IL_01d2;
	}

IL_0140:
	{
		// instance.curveMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_32 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_33 = ((ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_32);
		float L_34;
		L_34 = GenericVirtualFuncInvoker1< float, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mA86928BC888E342D2C2644535E3399952F5077ED_RuntimeMethod_var, L_32, L_33);
		MinMaxCurve_set_curveMultiplier_m9FCF7F21AECE399ACD9FEB9ADEEBD93FD12DDABC((&V_0), L_34, NULL);
		// break;
		goto IL_01d2;
	}

IL_0154:
	{
		// instance.curveMax = reader.Read<UnityEngine.AnimationCurve>(ES3Type_AnimationCurve.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_35 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_36 = ((ES3Type_AnimationCurve_tF623128FF51FC3C48A6749619C4915CBE2995CA4_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_AnimationCurve_tF623128FF51FC3C48A6749619C4915CBE2995CA4_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_35);
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_37;
		L_37 = GenericVirtualFuncInvoker1< AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354*, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisAnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_m10F5F132336385185365E73EF668D8D369D3A4A1_RuntimeMethod_var, L_35, L_36);
		MinMaxCurve_set_curveMax_m39B9E8AE4E62E874DA99AA7108C2C47C6CA333DF((&V_0), L_37, NULL);
		// break;
		goto IL_01d2;
	}

IL_0168:
	{
		// instance.curveMin = reader.Read<UnityEngine.AnimationCurve>(ES3Type_AnimationCurve.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_38 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_39 = ((ES3Type_AnimationCurve_tF623128FF51FC3C48A6749619C4915CBE2995CA4_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_AnimationCurve_tF623128FF51FC3C48A6749619C4915CBE2995CA4_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_38);
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_40;
		L_40 = GenericVirtualFuncInvoker1< AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354*, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisAnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_m10F5F132336385185365E73EF668D8D369D3A4A1_RuntimeMethod_var, L_38, L_39);
		MinMaxCurve_set_curveMin_m17ADE22B882B75CBE87836C85C477A05122D9E75((&V_0), L_40, NULL);
		// break;
		goto IL_01d2;
	}

IL_017c:
	{
		// instance.constantMax = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_41 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_42 = ((ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_41);
		float L_43;
		L_43 = GenericVirtualFuncInvoker1< float, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mA86928BC888E342D2C2644535E3399952F5077ED_RuntimeMethod_var, L_41, L_42);
		MinMaxCurve_set_constantMax_mDB7B011E5B1EA76429B2A1FFDE6C06E82D290DC1((&V_0), L_43, NULL);
		// break;
		goto IL_01d2;
	}

IL_0190:
	{
		// instance.constantMin = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_44 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_45 = ((ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_44);
		float L_46;
		L_46 = GenericVirtualFuncInvoker1< float, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mA86928BC888E342D2C2644535E3399952F5077ED_RuntimeMethod_var, L_44, L_45);
		MinMaxCurve_set_constantMin_mBF7CF2A9F167AD06C327EE6EA37BA427E1CE548C((&V_0), L_46, NULL);
		// break;
		goto IL_01d2;
	}

IL_01a4:
	{
		// instance.constant = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_47 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_48 = ((ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_47);
		float L_49;
		L_49 = GenericVirtualFuncInvoker1< float, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mA86928BC888E342D2C2644535E3399952F5077ED_RuntimeMethod_var, L_47, L_48);
		MinMaxCurve_set_constant_mB6E4F22F67D3ED641FEBB387351F17451BB6A897((&V_0), L_49, NULL);
		// break;
		goto IL_01d2;
	}

IL_01b8:
	{
		// instance.curve = reader.Read<UnityEngine.AnimationCurve>(ES3Type_AnimationCurve.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_50 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_51 = ((ES3Type_AnimationCurve_tF623128FF51FC3C48A6749619C4915CBE2995CA4_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_AnimationCurve_tF623128FF51FC3C48A6749619C4915CBE2995CA4_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_50);
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_52;
		L_52 = GenericVirtualFuncInvoker1< AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354*, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisAnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_m10F5F132336385185365E73EF668D8D369D3A4A1_RuntimeMethod_var, L_50, L_51);
		MinMaxCurve_set_curve_mC745A6526FBF122F96DA597997DFAB9D7D2529BF((&V_0), L_52, NULL);
		// break;
		goto IL_01d2;
	}

IL_01cc:
	{
		// reader.Skip();
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_53 = ___reader0;
		NullCheck(L_53);
		VirtualActionInvoker0::Invoke(41 /* System.Void ES3Reader::Skip() */, L_53);
	}

IL_01d2:
	{
		// while((propertyName = reader.ReadPropertyName()) != null)
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_54 = ___reader0;
		NullCheck(L_54);
		String_t* L_55;
		L_55 = VirtualFuncInvoker0< String_t* >::Invoke(21 /* System.String ES3Reader::ReadPropertyName() */, L_54);
		String_t* L_56 = L_55;
		V_1 = L_56;
		if (L_56)
		{
			goto IL_000c;
		}
	}
	{
		// }
		return;
	}
}
// System.Void ES3Types.ES3Type_MinMaxCurve::ReadInto<UnityEngine.ParticleSystem/InheritVelocityModule>(ES3Reader,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ES3Type_MinMaxCurve_ReadInto_TisInheritVelocityModule_tB71B2EDCAF328647DDB6BC79541D7C5E76C19562_m9FB11B332A2FB729E4B2B81B4E7A8DE437374FD5_gshared (ES3Type_MinMaxCurve_t1C147718750ACBECE5D2B7F545D2A434A3C5409B* __this, ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* ___reader0, RuntimeObject* ___obj1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisAnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_m10F5F132336385185365E73EF668D8D369D3A4A1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisParticleSystemCurveMode_t8BE38B5D6B050709BAE31B5556CFC3DA69FC8405_m066E552CFA7510B509D2175EB72B2402EC615596_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mA86928BC888E342D2C2644535E3399952F5077ED_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_AnimationCurve_tF623128FF51FC3C48A6749619C4915CBE2995CA4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral227C22F51E4B6583CFC54387461605DDBBB00D14);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral27906925D50A15B990B586241F08C8ED14226340);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral36587A0761A180514C267B50EA888F89871F71DF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6C9DED8087C891AE33ACFFCE806DBFF63795F56F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral87E6319336195D789899F4791CCD5F2437BCC0B0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAF248E82BE9EBA1ADBF067429FAEE5A5B6E05A74);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB5831A880405F69C8EF7F43534BF4D880F2B9A12);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD4A11128F810D574390DA344F324014E964D1876);
		s_Il2CppMethodInitialized = true;
	}
	MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	uint32_t V_2 = 0;
	{
		// var instance = (UnityEngine.ParticleSystem.MinMaxCurve)obj;
		RuntimeObject* L_0 = ___obj1;
		V_0 = ((*(MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23*)((MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23*)(MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23*)UnBox(L_0, MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_il2cpp_TypeInfo_var))));
		goto IL_01d2;
	}

IL_000c:
	{
		String_t* L_1 = V_1;
		uint32_t L_2;
		L_2 = U3CPrivateImplementationDetailsU3E_ComputeStringHash_m6EA1F233618497AEFF8902A5EDFA24C74E2F2876(L_1, NULL);
		V_2 = L_2;
		uint32_t L_3 = V_2;
		if ((!(((uint32_t)L_3) <= ((uint32_t)((int32_t)-725866558)))))
		{
			goto IL_0053;
		}
	}
	{
		uint32_t L_4 = V_2;
		if ((!(((uint32_t)L_4) <= ((uint32_t)((int32_t)740975083)))))
		{
			goto IL_003b;
		}
	}
	{
		uint32_t L_5 = V_2;
		if ((((int32_t)L_5) == ((int32_t)((int32_t)110225957))))
		{
			goto IL_0104;
		}
	}
	{
		uint32_t L_6 = V_2;
		if ((((int32_t)L_6) == ((int32_t)((int32_t)740975083))))
		{
			goto IL_009b;
		}
	}
	{
		goto IL_01cc;
	}

IL_003b:
	{
		uint32_t L_7 = V_2;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)-1724381676))))
		{
			goto IL_0119;
		}
	}
	{
		uint32_t L_8 = V_2;
		if ((((int32_t)L_8) == ((int32_t)((int32_t)-725866558))))
		{
			goto IL_00b0;
		}
	}
	{
		goto IL_01cc;
	}

IL_0053:
	{
		uint32_t L_9 = V_2;
		if ((!(((uint32_t)L_9) <= ((uint32_t)((int32_t)-559473464)))))
		{
			goto IL_0073;
		}
	}
	{
		uint32_t L_10 = V_2;
		if ((((int32_t)L_10) == ((int32_t)((int32_t)-581632105))))
		{
			goto IL_00ef;
		}
	}
	{
		uint32_t L_11 = V_2;
		if ((((int32_t)L_11) == ((int32_t)((int32_t)-559473464))))
		{
			goto IL_00c5;
		}
	}
	{
		goto IL_01cc;
	}

IL_0073:
	{
		uint32_t L_12 = V_2;
		if ((((int32_t)L_12) == ((int32_t)((int32_t)-345465511))))
		{
			goto IL_00da;
		}
	}
	{
		uint32_t L_13 = V_2;
		if ((!(((uint32_t)L_13) == ((uint32_t)((int32_t)-328277998)))))
		{
			goto IL_01cc;
		}
	}
	{
		String_t* L_14 = V_1;
		bool L_15;
		L_15 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_14, _stringLiteralAF248E82BE9EBA1ADBF067429FAEE5A5B6E05A74, NULL);
		if (L_15)
		{
			goto IL_012e;
		}
	}
	{
		goto IL_01cc;
	}

IL_009b:
	{
		String_t* L_16 = V_1;
		bool L_17;
		L_17 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_16, _stringLiteral227C22F51E4B6583CFC54387461605DDBBB00D14, NULL);
		if (L_17)
		{
			goto IL_0140;
		}
	}
	{
		goto IL_01cc;
	}

IL_00b0:
	{
		String_t* L_18 = V_1;
		bool L_19;
		L_19 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_18, _stringLiteral27906925D50A15B990B586241F08C8ED14226340, NULL);
		if (L_19)
		{
			goto IL_0154;
		}
	}
	{
		goto IL_01cc;
	}

IL_00c5:
	{
		String_t* L_20 = V_1;
		bool L_21;
		L_21 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_20, _stringLiteralD4A11128F810D574390DA344F324014E964D1876, NULL);
		if (L_21)
		{
			goto IL_0168;
		}
	}
	{
		goto IL_01cc;
	}

IL_00da:
	{
		String_t* L_22 = V_1;
		bool L_23;
		L_23 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_22, _stringLiteralB5831A880405F69C8EF7F43534BF4D880F2B9A12, NULL);
		if (L_23)
		{
			goto IL_017c;
		}
	}
	{
		goto IL_01cc;
	}

IL_00ef:
	{
		String_t* L_24 = V_1;
		bool L_25;
		L_25 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_24, _stringLiteral36587A0761A180514C267B50EA888F89871F71DF, NULL);
		if (L_25)
		{
			goto IL_0190;
		}
	}
	{
		goto IL_01cc;
	}

IL_0104:
	{
		String_t* L_26 = V_1;
		bool L_27;
		L_27 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_26, _stringLiteral87E6319336195D789899F4791CCD5F2437BCC0B0, NULL);
		if (L_27)
		{
			goto IL_01a4;
		}
	}
	{
		goto IL_01cc;
	}

IL_0119:
	{
		String_t* L_28 = V_1;
		bool L_29;
		L_29 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_28, _stringLiteral6C9DED8087C891AE33ACFFCE806DBFF63795F56F, NULL);
		if (L_29)
		{
			goto IL_01b8;
		}
	}
	{
		goto IL_01cc;
	}

IL_012e:
	{
		// instance.mode = reader.Read<UnityEngine.ParticleSystemCurveMode>();
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_30 = ___reader0;
		NullCheck(L_30);
		int32_t L_31;
		L_31 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisParticleSystemCurveMode_t8BE38B5D6B050709BAE31B5556CFC3DA69FC8405_m066E552CFA7510B509D2175EB72B2402EC615596_RuntimeMethod_var, L_30);
		MinMaxCurve_set_mode_m6870C4CA0FE7AF1029F45040B827C9F0A6A80A86((&V_0), L_31, NULL);
		// break;
		goto IL_01d2;
	}

IL_0140:
	{
		// instance.curveMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_32 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_33 = ((ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_32);
		float L_34;
		L_34 = GenericVirtualFuncInvoker1< float, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mA86928BC888E342D2C2644535E3399952F5077ED_RuntimeMethod_var, L_32, L_33);
		MinMaxCurve_set_curveMultiplier_m9FCF7F21AECE399ACD9FEB9ADEEBD93FD12DDABC((&V_0), L_34, NULL);
		// break;
		goto IL_01d2;
	}

IL_0154:
	{
		// instance.curveMax = reader.Read<UnityEngine.AnimationCurve>(ES3Type_AnimationCurve.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_35 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_36 = ((ES3Type_AnimationCurve_tF623128FF51FC3C48A6749619C4915CBE2995CA4_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_AnimationCurve_tF623128FF51FC3C48A6749619C4915CBE2995CA4_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_35);
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_37;
		L_37 = GenericVirtualFuncInvoker1< AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354*, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisAnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_m10F5F132336385185365E73EF668D8D369D3A4A1_RuntimeMethod_var, L_35, L_36);
		MinMaxCurve_set_curveMax_m39B9E8AE4E62E874DA99AA7108C2C47C6CA333DF((&V_0), L_37, NULL);
		// break;
		goto IL_01d2;
	}

IL_0168:
	{
		// instance.curveMin = reader.Read<UnityEngine.AnimationCurve>(ES3Type_AnimationCurve.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_38 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_39 = ((ES3Type_AnimationCurve_tF623128FF51FC3C48A6749619C4915CBE2995CA4_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_AnimationCurve_tF623128FF51FC3C48A6749619C4915CBE2995CA4_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_38);
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_40;
		L_40 = GenericVirtualFuncInvoker1< AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354*, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisAnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_m10F5F132336385185365E73EF668D8D369D3A4A1_RuntimeMethod_var, L_38, L_39);
		MinMaxCurve_set_curveMin_m17ADE22B882B75CBE87836C85C477A05122D9E75((&V_0), L_40, NULL);
		// break;
		goto IL_01d2;
	}

IL_017c:
	{
		// instance.constantMax = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_41 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_42 = ((ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_41);
		float L_43;
		L_43 = GenericVirtualFuncInvoker1< float, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mA86928BC888E342D2C2644535E3399952F5077ED_RuntimeMethod_var, L_41, L_42);
		MinMaxCurve_set_constantMax_mDB7B011E5B1EA76429B2A1FFDE6C06E82D290DC1((&V_0), L_43, NULL);
		// break;
		goto IL_01d2;
	}

IL_0190:
	{
		// instance.constantMin = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_44 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_45 = ((ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_44);
		float L_46;
		L_46 = GenericVirtualFuncInvoker1< float, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mA86928BC888E342D2C2644535E3399952F5077ED_RuntimeMethod_var, L_44, L_45);
		MinMaxCurve_set_constantMin_mBF7CF2A9F167AD06C327EE6EA37BA427E1CE548C((&V_0), L_46, NULL);
		// break;
		goto IL_01d2;
	}

IL_01a4:
	{
		// instance.constant = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_47 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_48 = ((ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_47);
		float L_49;
		L_49 = GenericVirtualFuncInvoker1< float, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mA86928BC888E342D2C2644535E3399952F5077ED_RuntimeMethod_var, L_47, L_48);
		MinMaxCurve_set_constant_mB6E4F22F67D3ED641FEBB387351F17451BB6A897((&V_0), L_49, NULL);
		// break;
		goto IL_01d2;
	}

IL_01b8:
	{
		// instance.curve = reader.Read<UnityEngine.AnimationCurve>(ES3Type_AnimationCurve.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_50 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_51 = ((ES3Type_AnimationCurve_tF623128FF51FC3C48A6749619C4915CBE2995CA4_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_AnimationCurve_tF623128FF51FC3C48A6749619C4915CBE2995CA4_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_50);
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_52;
		L_52 = GenericVirtualFuncInvoker1< AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354*, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisAnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_m10F5F132336385185365E73EF668D8D369D3A4A1_RuntimeMethod_var, L_50, L_51);
		MinMaxCurve_set_curve_mC745A6526FBF122F96DA597997DFAB9D7D2529BF((&V_0), L_52, NULL);
		// break;
		goto IL_01d2;
	}

IL_01cc:
	{
		// reader.Skip();
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_53 = ___reader0;
		NullCheck(L_53);
		VirtualActionInvoker0::Invoke(41 /* System.Void ES3Reader::Skip() */, L_53);
	}

IL_01d2:
	{
		// while((propertyName = reader.ReadPropertyName()) != null)
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_54 = ___reader0;
		NullCheck(L_54);
		String_t* L_55;
		L_55 = VirtualFuncInvoker0< String_t* >::Invoke(21 /* System.String ES3Reader::ReadPropertyName() */, L_54);
		String_t* L_56 = L_55;
		V_1 = L_56;
		if (L_56)
		{
			goto IL_000c;
		}
	}
	{
		// }
		return;
	}
}
// System.Void ES3Types.ES3Type_MinMaxCurve::ReadInto<UnityEngine.ParticleSystem/LightsModule>(ES3Reader,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ES3Type_MinMaxCurve_ReadInto_TisLightsModule_t720242ED070FD6C55E59B7536322829A22884C7E_m77D162C8AC945004A55D486F4DE9F064A3997E3F_gshared (ES3Type_MinMaxCurve_t1C147718750ACBECE5D2B7F545D2A434A3C5409B* __this, ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* ___reader0, RuntimeObject* ___obj1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisAnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_m10F5F132336385185365E73EF668D8D369D3A4A1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisParticleSystemCurveMode_t8BE38B5D6B050709BAE31B5556CFC3DA69FC8405_m066E552CFA7510B509D2175EB72B2402EC615596_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mA86928BC888E342D2C2644535E3399952F5077ED_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_AnimationCurve_tF623128FF51FC3C48A6749619C4915CBE2995CA4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral227C22F51E4B6583CFC54387461605DDBBB00D14);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral27906925D50A15B990B586241F08C8ED14226340);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral36587A0761A180514C267B50EA888F89871F71DF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6C9DED8087C891AE33ACFFCE806DBFF63795F56F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral87E6319336195D789899F4791CCD5F2437BCC0B0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAF248E82BE9EBA1ADBF067429FAEE5A5B6E05A74);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB5831A880405F69C8EF7F43534BF4D880F2B9A12);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD4A11128F810D574390DA344F324014E964D1876);
		s_Il2CppMethodInitialized = true;
	}
	MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	uint32_t V_2 = 0;
	{
		// var instance = (UnityEngine.ParticleSystem.MinMaxCurve)obj;
		RuntimeObject* L_0 = ___obj1;
		V_0 = ((*(MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23*)((MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23*)(MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23*)UnBox(L_0, MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_il2cpp_TypeInfo_var))));
		goto IL_01d2;
	}

IL_000c:
	{
		String_t* L_1 = V_1;
		uint32_t L_2;
		L_2 = U3CPrivateImplementationDetailsU3E_ComputeStringHash_m6EA1F233618497AEFF8902A5EDFA24C74E2F2876(L_1, NULL);
		V_2 = L_2;
		uint32_t L_3 = V_2;
		if ((!(((uint32_t)L_3) <= ((uint32_t)((int32_t)-725866558)))))
		{
			goto IL_0053;
		}
	}
	{
		uint32_t L_4 = V_2;
		if ((!(((uint32_t)L_4) <= ((uint32_t)((int32_t)740975083)))))
		{
			goto IL_003b;
		}
	}
	{
		uint32_t L_5 = V_2;
		if ((((int32_t)L_5) == ((int32_t)((int32_t)110225957))))
		{
			goto IL_0104;
		}
	}
	{
		uint32_t L_6 = V_2;
		if ((((int32_t)L_6) == ((int32_t)((int32_t)740975083))))
		{
			goto IL_009b;
		}
	}
	{
		goto IL_01cc;
	}

IL_003b:
	{
		uint32_t L_7 = V_2;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)-1724381676))))
		{
			goto IL_0119;
		}
	}
	{
		uint32_t L_8 = V_2;
		if ((((int32_t)L_8) == ((int32_t)((int32_t)-725866558))))
		{
			goto IL_00b0;
		}
	}
	{
		goto IL_01cc;
	}

IL_0053:
	{
		uint32_t L_9 = V_2;
		if ((!(((uint32_t)L_9) <= ((uint32_t)((int32_t)-559473464)))))
		{
			goto IL_0073;
		}
	}
	{
		uint32_t L_10 = V_2;
		if ((((int32_t)L_10) == ((int32_t)((int32_t)-581632105))))
		{
			goto IL_00ef;
		}
	}
	{
		uint32_t L_11 = V_2;
		if ((((int32_t)L_11) == ((int32_t)((int32_t)-559473464))))
		{
			goto IL_00c5;
		}
	}
	{
		goto IL_01cc;
	}

IL_0073:
	{
		uint32_t L_12 = V_2;
		if ((((int32_t)L_12) == ((int32_t)((int32_t)-345465511))))
		{
			goto IL_00da;
		}
	}
	{
		uint32_t L_13 = V_2;
		if ((!(((uint32_t)L_13) == ((uint32_t)((int32_t)-328277998)))))
		{
			goto IL_01cc;
		}
	}
	{
		String_t* L_14 = V_1;
		bool L_15;
		L_15 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_14, _stringLiteralAF248E82BE9EBA1ADBF067429FAEE5A5B6E05A74, NULL);
		if (L_15)
		{
			goto IL_012e;
		}
	}
	{
		goto IL_01cc;
	}

IL_009b:
	{
		String_t* L_16 = V_1;
		bool L_17;
		L_17 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_16, _stringLiteral227C22F51E4B6583CFC54387461605DDBBB00D14, NULL);
		if (L_17)
		{
			goto IL_0140;
		}
	}
	{
		goto IL_01cc;
	}

IL_00b0:
	{
		String_t* L_18 = V_1;
		bool L_19;
		L_19 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_18, _stringLiteral27906925D50A15B990B586241F08C8ED14226340, NULL);
		if (L_19)
		{
			goto IL_0154;
		}
	}
	{
		goto IL_01cc;
	}

IL_00c5:
	{
		String_t* L_20 = V_1;
		bool L_21;
		L_21 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_20, _stringLiteralD4A11128F810D574390DA344F324014E964D1876, NULL);
		if (L_21)
		{
			goto IL_0168;
		}
	}
	{
		goto IL_01cc;
	}

IL_00da:
	{
		String_t* L_22 = V_1;
		bool L_23;
		L_23 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_22, _stringLiteralB5831A880405F69C8EF7F43534BF4D880F2B9A12, NULL);
		if (L_23)
		{
			goto IL_017c;
		}
	}
	{
		goto IL_01cc;
	}

IL_00ef:
	{
		String_t* L_24 = V_1;
		bool L_25;
		L_25 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_24, _stringLiteral36587A0761A180514C267B50EA888F89871F71DF, NULL);
		if (L_25)
		{
			goto IL_0190;
		}
	}
	{
		goto IL_01cc;
	}

IL_0104:
	{
		String_t* L_26 = V_1;
		bool L_27;
		L_27 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_26, _stringLiteral87E6319336195D789899F4791CCD5F2437BCC0B0, NULL);
		if (L_27)
		{
			goto IL_01a4;
		}
	}
	{
		goto IL_01cc;
	}

IL_0119:
	{
		String_t* L_28 = V_1;
		bool L_29;
		L_29 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_28, _stringLiteral6C9DED8087C891AE33ACFFCE806DBFF63795F56F, NULL);
		if (L_29)
		{
			goto IL_01b8;
		}
	}
	{
		goto IL_01cc;
	}

IL_012e:
	{
		// instance.mode = reader.Read<UnityEngine.ParticleSystemCurveMode>();
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_30 = ___reader0;
		NullCheck(L_30);
		int32_t L_31;
		L_31 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisParticleSystemCurveMode_t8BE38B5D6B050709BAE31B5556CFC3DA69FC8405_m066E552CFA7510B509D2175EB72B2402EC615596_RuntimeMethod_var, L_30);
		MinMaxCurve_set_mode_m6870C4CA0FE7AF1029F45040B827C9F0A6A80A86((&V_0), L_31, NULL);
		// break;
		goto IL_01d2;
	}

IL_0140:
	{
		// instance.curveMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_32 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_33 = ((ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_32);
		float L_34;
		L_34 = GenericVirtualFuncInvoker1< float, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mA86928BC888E342D2C2644535E3399952F5077ED_RuntimeMethod_var, L_32, L_33);
		MinMaxCurve_set_curveMultiplier_m9FCF7F21AECE399ACD9FEB9ADEEBD93FD12DDABC((&V_0), L_34, NULL);
		// break;
		goto IL_01d2;
	}

IL_0154:
	{
		// instance.curveMax = reader.Read<UnityEngine.AnimationCurve>(ES3Type_AnimationCurve.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_35 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_36 = ((ES3Type_AnimationCurve_tF623128FF51FC3C48A6749619C4915CBE2995CA4_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_AnimationCurve_tF623128FF51FC3C48A6749619C4915CBE2995CA4_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_35);
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_37;
		L_37 = GenericVirtualFuncInvoker1< AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354*, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisAnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_m10F5F132336385185365E73EF668D8D369D3A4A1_RuntimeMethod_var, L_35, L_36);
		MinMaxCurve_set_curveMax_m39B9E8AE4E62E874DA99AA7108C2C47C6CA333DF((&V_0), L_37, NULL);
		// break;
		goto IL_01d2;
	}

IL_0168:
	{
		// instance.curveMin = reader.Read<UnityEngine.AnimationCurve>(ES3Type_AnimationCurve.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_38 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_39 = ((ES3Type_AnimationCurve_tF623128FF51FC3C48A6749619C4915CBE2995CA4_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_AnimationCurve_tF623128FF51FC3C48A6749619C4915CBE2995CA4_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_38);
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_40;
		L_40 = GenericVirtualFuncInvoker1< AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354*, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisAnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_m10F5F132336385185365E73EF668D8D369D3A4A1_RuntimeMethod_var, L_38, L_39);
		MinMaxCurve_set_curveMin_m17ADE22B882B75CBE87836C85C477A05122D9E75((&V_0), L_40, NULL);
		// break;
		goto IL_01d2;
	}

IL_017c:
	{
		// instance.constantMax = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_41 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_42 = ((ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_41);
		float L_43;
		L_43 = GenericVirtualFuncInvoker1< float, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mA86928BC888E342D2C2644535E3399952F5077ED_RuntimeMethod_var, L_41, L_42);
		MinMaxCurve_set_constantMax_mDB7B011E5B1EA76429B2A1FFDE6C06E82D290DC1((&V_0), L_43, NULL);
		// break;
		goto IL_01d2;
	}

IL_0190:
	{
		// instance.constantMin = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_44 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_45 = ((ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_44);
		float L_46;
		L_46 = GenericVirtualFuncInvoker1< float, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mA86928BC888E342D2C2644535E3399952F5077ED_RuntimeMethod_var, L_44, L_45);
		MinMaxCurve_set_constantMin_mBF7CF2A9F167AD06C327EE6EA37BA427E1CE548C((&V_0), L_46, NULL);
		// break;
		goto IL_01d2;
	}

IL_01a4:
	{
		// instance.constant = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_47 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_48 = ((ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_47);
		float L_49;
		L_49 = GenericVirtualFuncInvoker1< float, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mA86928BC888E342D2C2644535E3399952F5077ED_RuntimeMethod_var, L_47, L_48);
		MinMaxCurve_set_constant_mB6E4F22F67D3ED641FEBB387351F17451BB6A897((&V_0), L_49, NULL);
		// break;
		goto IL_01d2;
	}

IL_01b8:
	{
		// instance.curve = reader.Read<UnityEngine.AnimationCurve>(ES3Type_AnimationCurve.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_50 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_51 = ((ES3Type_AnimationCurve_tF623128FF51FC3C48A6749619C4915CBE2995CA4_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_AnimationCurve_tF623128FF51FC3C48A6749619C4915CBE2995CA4_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_50);
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_52;
		L_52 = GenericVirtualFuncInvoker1< AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354*, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisAnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_m10F5F132336385185365E73EF668D8D369D3A4A1_RuntimeMethod_var, L_50, L_51);
		MinMaxCurve_set_curve_mC745A6526FBF122F96DA597997DFAB9D7D2529BF((&V_0), L_52, NULL);
		// break;
		goto IL_01d2;
	}

IL_01cc:
	{
		// reader.Skip();
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_53 = ___reader0;
		NullCheck(L_53);
		VirtualActionInvoker0::Invoke(41 /* System.Void ES3Reader::Skip() */, L_53);
	}

IL_01d2:
	{
		// while((propertyName = reader.ReadPropertyName()) != null)
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_54 = ___reader0;
		NullCheck(L_54);
		String_t* L_55;
		L_55 = VirtualFuncInvoker0< String_t* >::Invoke(21 /* System.String ES3Reader::ReadPropertyName() */, L_54);
		String_t* L_56 = L_55;
		V_1 = L_56;
		if (L_56)
		{
			goto IL_000c;
		}
	}
	{
		// }
		return;
	}
}
// System.Void ES3Types.ES3Type_MinMaxCurve::ReadInto<UnityEngine.ParticleSystem/LimitVelocityOverLifetimeModule>(ES3Reader,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ES3Type_MinMaxCurve_ReadInto_TisLimitVelocityOverLifetimeModule_tC52CF1434E2639EE5D81DD6BA269FF38CA17D8B1_m6623C1A0320E9E7DC4F54C11D3E2D081DAAE5E62_gshared (ES3Type_MinMaxCurve_t1C147718750ACBECE5D2B7F545D2A434A3C5409B* __this, ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* ___reader0, RuntimeObject* ___obj1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisAnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_m10F5F132336385185365E73EF668D8D369D3A4A1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisParticleSystemCurveMode_t8BE38B5D6B050709BAE31B5556CFC3DA69FC8405_m066E552CFA7510B509D2175EB72B2402EC615596_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mA86928BC888E342D2C2644535E3399952F5077ED_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_AnimationCurve_tF623128FF51FC3C48A6749619C4915CBE2995CA4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral227C22F51E4B6583CFC54387461605DDBBB00D14);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral27906925D50A15B990B586241F08C8ED14226340);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral36587A0761A180514C267B50EA888F89871F71DF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6C9DED8087C891AE33ACFFCE806DBFF63795F56F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral87E6319336195D789899F4791CCD5F2437BCC0B0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAF248E82BE9EBA1ADBF067429FAEE5A5B6E05A74);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB5831A880405F69C8EF7F43534BF4D880F2B9A12);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD4A11128F810D574390DA344F324014E964D1876);
		s_Il2CppMethodInitialized = true;
	}
	MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	uint32_t V_2 = 0;
	{
		// var instance = (UnityEngine.ParticleSystem.MinMaxCurve)obj;
		RuntimeObject* L_0 = ___obj1;
		V_0 = ((*(MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23*)((MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23*)(MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23*)UnBox(L_0, MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_il2cpp_TypeInfo_var))));
		goto IL_01d2;
	}

IL_000c:
	{
		String_t* L_1 = V_1;
		uint32_t L_2;
		L_2 = U3CPrivateImplementationDetailsU3E_ComputeStringHash_m6EA1F233618497AEFF8902A5EDFA24C74E2F2876(L_1, NULL);
		V_2 = L_2;
		uint32_t L_3 = V_2;
		if ((!(((uint32_t)L_3) <= ((uint32_t)((int32_t)-725866558)))))
		{
			goto IL_0053;
		}
	}
	{
		uint32_t L_4 = V_2;
		if ((!(((uint32_t)L_4) <= ((uint32_t)((int32_t)740975083)))))
		{
			goto IL_003b;
		}
	}
	{
		uint32_t L_5 = V_2;
		if ((((int32_t)L_5) == ((int32_t)((int32_t)110225957))))
		{
			goto IL_0104;
		}
	}
	{
		uint32_t L_6 = V_2;
		if ((((int32_t)L_6) == ((int32_t)((int32_t)740975083))))
		{
			goto IL_009b;
		}
	}
	{
		goto IL_01cc;
	}

IL_003b:
	{
		uint32_t L_7 = V_2;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)-1724381676))))
		{
			goto IL_0119;
		}
	}
	{
		uint32_t L_8 = V_2;
		if ((((int32_t)L_8) == ((int32_t)((int32_t)-725866558))))
		{
			goto IL_00b0;
		}
	}
	{
		goto IL_01cc;
	}

IL_0053:
	{
		uint32_t L_9 = V_2;
		if ((!(((uint32_t)L_9) <= ((uint32_t)((int32_t)-559473464)))))
		{
			goto IL_0073;
		}
	}
	{
		uint32_t L_10 = V_2;
		if ((((int32_t)L_10) == ((int32_t)((int32_t)-581632105))))
		{
			goto IL_00ef;
		}
	}
	{
		uint32_t L_11 = V_2;
		if ((((int32_t)L_11) == ((int32_t)((int32_t)-559473464))))
		{
			goto IL_00c5;
		}
	}
	{
		goto IL_01cc;
	}

IL_0073:
	{
		uint32_t L_12 = V_2;
		if ((((int32_t)L_12) == ((int32_t)((int32_t)-345465511))))
		{
			goto IL_00da;
		}
	}
	{
		uint32_t L_13 = V_2;
		if ((!(((uint32_t)L_13) == ((uint32_t)((int32_t)-328277998)))))
		{
			goto IL_01cc;
		}
	}
	{
		String_t* L_14 = V_1;
		bool L_15;
		L_15 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_14, _stringLiteralAF248E82BE9EBA1ADBF067429FAEE5A5B6E05A74, NULL);
		if (L_15)
		{
			goto IL_012e;
		}
	}
	{
		goto IL_01cc;
	}

IL_009b:
	{
		String_t* L_16 = V_1;
		bool L_17;
		L_17 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_16, _stringLiteral227C22F51E4B6583CFC54387461605DDBBB00D14, NULL);
		if (L_17)
		{
			goto IL_0140;
		}
	}
	{
		goto IL_01cc;
	}

IL_00b0:
	{
		String_t* L_18 = V_1;
		bool L_19;
		L_19 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_18, _stringLiteral27906925D50A15B990B586241F08C8ED14226340, NULL);
		if (L_19)
		{
			goto IL_0154;
		}
	}
	{
		goto IL_01cc;
	}

IL_00c5:
	{
		String_t* L_20 = V_1;
		bool L_21;
		L_21 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_20, _stringLiteralD4A11128F810D574390DA344F324014E964D1876, NULL);
		if (L_21)
		{
			goto IL_0168;
		}
	}
	{
		goto IL_01cc;
	}

IL_00da:
	{
		String_t* L_22 = V_1;
		bool L_23;
		L_23 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_22, _stringLiteralB5831A880405F69C8EF7F43534BF4D880F2B9A12, NULL);
		if (L_23)
		{
			goto IL_017c;
		}
	}
	{
		goto IL_01cc;
	}

IL_00ef:
	{
		String_t* L_24 = V_1;
		bool L_25;
		L_25 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_24, _stringLiteral36587A0761A180514C267B50EA888F89871F71DF, NULL);
		if (L_25)
		{
			goto IL_0190;
		}
	}
	{
		goto IL_01cc;
	}

IL_0104:
	{
		String_t* L_26 = V_1;
		bool L_27;
		L_27 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_26, _stringLiteral87E6319336195D789899F4791CCD5F2437BCC0B0, NULL);
		if (L_27)
		{
			goto IL_01a4;
		}
	}
	{
		goto IL_01cc;
	}

IL_0119:
	{
		String_t* L_28 = V_1;
		bool L_29;
		L_29 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_28, _stringLiteral6C9DED8087C891AE33ACFFCE806DBFF63795F56F, NULL);
		if (L_29)
		{
			goto IL_01b8;
		}
	}
	{
		goto IL_01cc;
	}

IL_012e:
	{
		// instance.mode = reader.Read<UnityEngine.ParticleSystemCurveMode>();
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_30 = ___reader0;
		NullCheck(L_30);
		int32_t L_31;
		L_31 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisParticleSystemCurveMode_t8BE38B5D6B050709BAE31B5556CFC3DA69FC8405_m066E552CFA7510B509D2175EB72B2402EC615596_RuntimeMethod_var, L_30);
		MinMaxCurve_set_mode_m6870C4CA0FE7AF1029F45040B827C9F0A6A80A86((&V_0), L_31, NULL);
		// break;
		goto IL_01d2;
	}

IL_0140:
	{
		// instance.curveMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_32 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_33 = ((ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_32);
		float L_34;
		L_34 = GenericVirtualFuncInvoker1< float, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mA86928BC888E342D2C2644535E3399952F5077ED_RuntimeMethod_var, L_32, L_33);
		MinMaxCurve_set_curveMultiplier_m9FCF7F21AECE399ACD9FEB9ADEEBD93FD12DDABC((&V_0), L_34, NULL);
		// break;
		goto IL_01d2;
	}

IL_0154:
	{
		// instance.curveMax = reader.Read<UnityEngine.AnimationCurve>(ES3Type_AnimationCurve.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_35 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_36 = ((ES3Type_AnimationCurve_tF623128FF51FC3C48A6749619C4915CBE2995CA4_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_AnimationCurve_tF623128FF51FC3C48A6749619C4915CBE2995CA4_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_35);
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_37;
		L_37 = GenericVirtualFuncInvoker1< AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354*, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisAnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_m10F5F132336385185365E73EF668D8D369D3A4A1_RuntimeMethod_var, L_35, L_36);
		MinMaxCurve_set_curveMax_m39B9E8AE4E62E874DA99AA7108C2C47C6CA333DF((&V_0), L_37, NULL);
		// break;
		goto IL_01d2;
	}

IL_0168:
	{
		// instance.curveMin = reader.Read<UnityEngine.AnimationCurve>(ES3Type_AnimationCurve.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_38 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_39 = ((ES3Type_AnimationCurve_tF623128FF51FC3C48A6749619C4915CBE2995CA4_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_AnimationCurve_tF623128FF51FC3C48A6749619C4915CBE2995CA4_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_38);
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_40;
		L_40 = GenericVirtualFuncInvoker1< AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354*, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisAnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_m10F5F132336385185365E73EF668D8D369D3A4A1_RuntimeMethod_var, L_38, L_39);
		MinMaxCurve_set_curveMin_m17ADE22B882B75CBE87836C85C477A05122D9E75((&V_0), L_40, NULL);
		// break;
		goto IL_01d2;
	}

IL_017c:
	{
		// instance.constantMax = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_41 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_42 = ((ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_41);
		float L_43;
		L_43 = GenericVirtualFuncInvoker1< float, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mA86928BC888E342D2C2644535E3399952F5077ED_RuntimeMethod_var, L_41, L_42);
		MinMaxCurve_set_constantMax_mDB7B011E5B1EA76429B2A1FFDE6C06E82D290DC1((&V_0), L_43, NULL);
		// break;
		goto IL_01d2;
	}

IL_0190:
	{
		// instance.constantMin = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_44 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_45 = ((ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_44);
		float L_46;
		L_46 = GenericVirtualFuncInvoker1< float, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mA86928BC888E342D2C2644535E3399952F5077ED_RuntimeMethod_var, L_44, L_45);
		MinMaxCurve_set_constantMin_mBF7CF2A9F167AD06C327EE6EA37BA427E1CE548C((&V_0), L_46, NULL);
		// break;
		goto IL_01d2;
	}

IL_01a4:
	{
		// instance.constant = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_47 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_48 = ((ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_47);
		float L_49;
		L_49 = GenericVirtualFuncInvoker1< float, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mA86928BC888E342D2C2644535E3399952F5077ED_RuntimeMethod_var, L_47, L_48);
		MinMaxCurve_set_constant_mB6E4F22F67D3ED641FEBB387351F17451BB6A897((&V_0), L_49, NULL);
		// break;
		goto IL_01d2;
	}

IL_01b8:
	{
		// instance.curve = reader.Read<UnityEngine.AnimationCurve>(ES3Type_AnimationCurve.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_50 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_51 = ((ES3Type_AnimationCurve_tF623128FF51FC3C48A6749619C4915CBE2995CA4_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_AnimationCurve_tF623128FF51FC3C48A6749619C4915CBE2995CA4_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_50);
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_52;
		L_52 = GenericVirtualFuncInvoker1< AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354*, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisAnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_m10F5F132336385185365E73EF668D8D369D3A4A1_RuntimeMethod_var, L_50, L_51);
		MinMaxCurve_set_curve_mC745A6526FBF122F96DA597997DFAB9D7D2529BF((&V_0), L_52, NULL);
		// break;
		goto IL_01d2;
	}

IL_01cc:
	{
		// reader.Skip();
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_53 = ___reader0;
		NullCheck(L_53);
		VirtualActionInvoker0::Invoke(41 /* System.Void ES3Reader::Skip() */, L_53);
	}

IL_01d2:
	{
		// while((propertyName = reader.ReadPropertyName()) != null)
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_54 = ___reader0;
		NullCheck(L_54);
		String_t* L_55;
		L_55 = VirtualFuncInvoker0< String_t* >::Invoke(21 /* System.String ES3Reader::ReadPropertyName() */, L_54);
		String_t* L_56 = L_55;
		V_1 = L_56;
		if (L_56)
		{
			goto IL_000c;
		}
	}
	{
		// }
		return;
	}
}
// System.Void ES3Types.ES3Type_MinMaxCurve::ReadInto<UnityEngine.ParticleSystem/MainModule>(ES3Reader,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ES3Type_MinMaxCurve_ReadInto_TisMainModule_tC7ECD8330C14B0808478A748048988A6085CE2A9_m9F41A82D76D8EAFA3546C15FE79C372B4DFEE3C8_gshared (ES3Type_MinMaxCurve_t1C147718750ACBECE5D2B7F545D2A434A3C5409B* __this, ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* ___reader0, RuntimeObject* ___obj1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisAnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_m10F5F132336385185365E73EF668D8D369D3A4A1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisParticleSystemCurveMode_t8BE38B5D6B050709BAE31B5556CFC3DA69FC8405_m066E552CFA7510B509D2175EB72B2402EC615596_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mA86928BC888E342D2C2644535E3399952F5077ED_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_AnimationCurve_tF623128FF51FC3C48A6749619C4915CBE2995CA4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral227C22F51E4B6583CFC54387461605DDBBB00D14);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral27906925D50A15B990B586241F08C8ED14226340);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral36587A0761A180514C267B50EA888F89871F71DF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6C9DED8087C891AE33ACFFCE806DBFF63795F56F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral87E6319336195D789899F4791CCD5F2437BCC0B0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAF248E82BE9EBA1ADBF067429FAEE5A5B6E05A74);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB5831A880405F69C8EF7F43534BF4D880F2B9A12);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD4A11128F810D574390DA344F324014E964D1876);
		s_Il2CppMethodInitialized = true;
	}
	MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	uint32_t V_2 = 0;
	{
		// var instance = (UnityEngine.ParticleSystem.MinMaxCurve)obj;
		RuntimeObject* L_0 = ___obj1;
		V_0 = ((*(MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23*)((MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23*)(MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23*)UnBox(L_0, MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_il2cpp_TypeInfo_var))));
		goto IL_01d2;
	}

IL_000c:
	{
		String_t* L_1 = V_1;
		uint32_t L_2;
		L_2 = U3CPrivateImplementationDetailsU3E_ComputeStringHash_m6EA1F233618497AEFF8902A5EDFA24C74E2F2876(L_1, NULL);
		V_2 = L_2;
		uint32_t L_3 = V_2;
		if ((!(((uint32_t)L_3) <= ((uint32_t)((int32_t)-725866558)))))
		{
			goto IL_0053;
		}
	}
	{
		uint32_t L_4 = V_2;
		if ((!(((uint32_t)L_4) <= ((uint32_t)((int32_t)740975083)))))
		{
			goto IL_003b;
		}
	}
	{
		uint32_t L_5 = V_2;
		if ((((int32_t)L_5) == ((int32_t)((int32_t)110225957))))
		{
			goto IL_0104;
		}
	}
	{
		uint32_t L_6 = V_2;
		if ((((int32_t)L_6) == ((int32_t)((int32_t)740975083))))
		{
			goto IL_009b;
		}
	}
	{
		goto IL_01cc;
	}

IL_003b:
	{
		uint32_t L_7 = V_2;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)-1724381676))))
		{
			goto IL_0119;
		}
	}
	{
		uint32_t L_8 = V_2;
		if ((((int32_t)L_8) == ((int32_t)((int32_t)-725866558))))
		{
			goto IL_00b0;
		}
	}
	{
		goto IL_01cc;
	}

IL_0053:
	{
		uint32_t L_9 = V_2;
		if ((!(((uint32_t)L_9) <= ((uint32_t)((int32_t)-559473464)))))
		{
			goto IL_0073;
		}
	}
	{
		uint32_t L_10 = V_2;
		if ((((int32_t)L_10) == ((int32_t)((int32_t)-581632105))))
		{
			goto IL_00ef;
		}
	}
	{
		uint32_t L_11 = V_2;
		if ((((int32_t)L_11) == ((int32_t)((int32_t)-559473464))))
		{
			goto IL_00c5;
		}
	}
	{
		goto IL_01cc;
	}

IL_0073:
	{
		uint32_t L_12 = V_2;
		if ((((int32_t)L_12) == ((int32_t)((int32_t)-345465511))))
		{
			goto IL_00da;
		}
	}
	{
		uint32_t L_13 = V_2;
		if ((!(((uint32_t)L_13) == ((uint32_t)((int32_t)-328277998)))))
		{
			goto IL_01cc;
		}
	}
	{
		String_t* L_14 = V_1;
		bool L_15;
		L_15 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_14, _stringLiteralAF248E82BE9EBA1ADBF067429FAEE5A5B6E05A74, NULL);
		if (L_15)
		{
			goto IL_012e;
		}
	}
	{
		goto IL_01cc;
	}

IL_009b:
	{
		String_t* L_16 = V_1;
		bool L_17;
		L_17 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_16, _stringLiteral227C22F51E4B6583CFC54387461605DDBBB00D14, NULL);
		if (L_17)
		{
			goto IL_0140;
		}
	}
	{
		goto IL_01cc;
	}

IL_00b0:
	{
		String_t* L_18 = V_1;
		bool L_19;
		L_19 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_18, _stringLiteral27906925D50A15B990B586241F08C8ED14226340, NULL);
		if (L_19)
		{
			goto IL_0154;
		}
	}
	{
		goto IL_01cc;
	}

IL_00c5:
	{
		String_t* L_20 = V_1;
		bool L_21;
		L_21 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_20, _stringLiteralD4A11128F810D574390DA344F324014E964D1876, NULL);
		if (L_21)
		{
			goto IL_0168;
		}
	}
	{
		goto IL_01cc;
	}

IL_00da:
	{
		String_t* L_22 = V_1;
		bool L_23;
		L_23 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_22, _stringLiteralB5831A880405F69C8EF7F43534BF4D880F2B9A12, NULL);
		if (L_23)
		{
			goto IL_017c;
		}
	}
	{
		goto IL_01cc;
	}

IL_00ef:
	{
		String_t* L_24 = V_1;
		bool L_25;
		L_25 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_24, _stringLiteral36587A0761A180514C267B50EA888F89871F71DF, NULL);
		if (L_25)
		{
			goto IL_0190;
		}
	}
	{
		goto IL_01cc;
	}

IL_0104:
	{
		String_t* L_26 = V_1;
		bool L_27;
		L_27 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_26, _stringLiteral87E6319336195D789899F4791CCD5F2437BCC0B0, NULL);
		if (L_27)
		{
			goto IL_01a4;
		}
	}
	{
		goto IL_01cc;
	}

IL_0119:
	{
		String_t* L_28 = V_1;
		bool L_29;
		L_29 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_28, _stringLiteral6C9DED8087C891AE33ACFFCE806DBFF63795F56F, NULL);
		if (L_29)
		{
			goto IL_01b8;
		}
	}
	{
		goto IL_01cc;
	}

IL_012e:
	{
		// instance.mode = reader.Read<UnityEngine.ParticleSystemCurveMode>();
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_30 = ___reader0;
		NullCheck(L_30);
		int32_t L_31;
		L_31 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisParticleSystemCurveMode_t8BE38B5D6B050709BAE31B5556CFC3DA69FC8405_m066E552CFA7510B509D2175EB72B2402EC615596_RuntimeMethod_var, L_30);
		MinMaxCurve_set_mode_m6870C4CA0FE7AF1029F45040B827C9F0A6A80A86((&V_0), L_31, NULL);
		// break;
		goto IL_01d2;
	}

IL_0140:
	{
		// instance.curveMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_32 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_33 = ((ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_32);
		float L_34;
		L_34 = GenericVirtualFuncInvoker1< float, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mA86928BC888E342D2C2644535E3399952F5077ED_RuntimeMethod_var, L_32, L_33);
		MinMaxCurve_set_curveMultiplier_m9FCF7F21AECE399ACD9FEB9ADEEBD93FD12DDABC((&V_0), L_34, NULL);
		// break;
		goto IL_01d2;
	}

IL_0154:
	{
		// instance.curveMax = reader.Read<UnityEngine.AnimationCurve>(ES3Type_AnimationCurve.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_35 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_36 = ((ES3Type_AnimationCurve_tF623128FF51FC3C48A6749619C4915CBE2995CA4_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_AnimationCurve_tF623128FF51FC3C48A6749619C4915CBE2995CA4_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_35);
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_37;
		L_37 = GenericVirtualFuncInvoker1< AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354*, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisAnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_m10F5F132336385185365E73EF668D8D369D3A4A1_RuntimeMethod_var, L_35, L_36);
		MinMaxCurve_set_curveMax_m39B9E8AE4E62E874DA99AA7108C2C47C6CA333DF((&V_0), L_37, NULL);
		// break;
		goto IL_01d2;
	}

IL_0168:
	{
		// instance.curveMin = reader.Read<UnityEngine.AnimationCurve>(ES3Type_AnimationCurve.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_38 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_39 = ((ES3Type_AnimationCurve_tF623128FF51FC3C48A6749619C4915CBE2995CA4_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_AnimationCurve_tF623128FF51FC3C48A6749619C4915CBE2995CA4_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_38);
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_40;
		L_40 = GenericVirtualFuncInvoker1< AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354*, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisAnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_m10F5F132336385185365E73EF668D8D369D3A4A1_RuntimeMethod_var, L_38, L_39);
		MinMaxCurve_set_curveMin_m17ADE22B882B75CBE87836C85C477A05122D9E75((&V_0), L_40, NULL);
		// break;
		goto IL_01d2;
	}

IL_017c:
	{
		// instance.constantMax = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_41 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_42 = ((ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_41);
		float L_43;
		L_43 = GenericVirtualFuncInvoker1< float, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mA86928BC888E342D2C2644535E3399952F5077ED_RuntimeMethod_var, L_41, L_42);
		MinMaxCurve_set_constantMax_mDB7B011E5B1EA76429B2A1FFDE6C06E82D290DC1((&V_0), L_43, NULL);
		// break;
		goto IL_01d2;
	}

IL_0190:
	{
		// instance.constantMin = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_44 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_45 = ((ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_44);
		float L_46;
		L_46 = GenericVirtualFuncInvoker1< float, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mA86928BC888E342D2C2644535E3399952F5077ED_RuntimeMethod_var, L_44, L_45);
		MinMaxCurve_set_constantMin_mBF7CF2A9F167AD06C327EE6EA37BA427E1CE548C((&V_0), L_46, NULL);
		// break;
		goto IL_01d2;
	}

IL_01a4:
	{
		// instance.constant = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_47 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_48 = ((ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_47);
		float L_49;
		L_49 = GenericVirtualFuncInvoker1< float, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mA86928BC888E342D2C2644535E3399952F5077ED_RuntimeMethod_var, L_47, L_48);
		MinMaxCurve_set_constant_mB6E4F22F67D3ED641FEBB387351F17451BB6A897((&V_0), L_49, NULL);
		// break;
		goto IL_01d2;
	}

IL_01b8:
	{
		// instance.curve = reader.Read<UnityEngine.AnimationCurve>(ES3Type_AnimationCurve.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_50 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_51 = ((ES3Type_AnimationCurve_tF623128FF51FC3C48A6749619C4915CBE2995CA4_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_AnimationCurve_tF623128FF51FC3C48A6749619C4915CBE2995CA4_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_50);
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_52;
		L_52 = GenericVirtualFuncInvoker1< AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354*, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisAnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_m10F5F132336385185365E73EF668D8D369D3A4A1_RuntimeMethod_var, L_50, L_51);
		MinMaxCurve_set_curve_mC745A6526FBF122F96DA597997DFAB9D7D2529BF((&V_0), L_52, NULL);
		// break;
		goto IL_01d2;
	}

IL_01cc:
	{
		// reader.Skip();
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_53 = ___reader0;
		NullCheck(L_53);
		VirtualActionInvoker0::Invoke(41 /* System.Void ES3Reader::Skip() */, L_53);
	}

IL_01d2:
	{
		// while((propertyName = reader.ReadPropertyName()) != null)
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_54 = ___reader0;
		NullCheck(L_54);
		String_t* L_55;
		L_55 = VirtualFuncInvoker0< String_t* >::Invoke(21 /* System.String ES3Reader::ReadPropertyName() */, L_54);
		String_t* L_56 = L_55;
		V_1 = L_56;
		if (L_56)
		{
			goto IL_000c;
		}
	}
	{
		// }
		return;
	}
}
// System.Void ES3Types.ES3Type_MinMaxCurve::ReadInto<UnityEngine.ParticleSystem/NoiseModule>(ES3Reader,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ES3Type_MinMaxCurve_ReadInto_TisNoiseModule_tF8D6CB544A887C0C93D05A228B65E41DBD1F3AE0_mE1A901C3D4B56970EDBC2D97B8D99D1DD5521884_gshared (ES3Type_MinMaxCurve_t1C147718750ACBECE5D2B7F545D2A434A3C5409B* __this, ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* ___reader0, RuntimeObject* ___obj1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisAnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_m10F5F132336385185365E73EF668D8D369D3A4A1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisParticleSystemCurveMode_t8BE38B5D6B050709BAE31B5556CFC3DA69FC8405_m066E552CFA7510B509D2175EB72B2402EC615596_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mA86928BC888E342D2C2644535E3399952F5077ED_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_AnimationCurve_tF623128FF51FC3C48A6749619C4915CBE2995CA4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral227C22F51E4B6583CFC54387461605DDBBB00D14);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral27906925D50A15B990B586241F08C8ED14226340);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral36587A0761A180514C267B50EA888F89871F71DF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6C9DED8087C891AE33ACFFCE806DBFF63795F56F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral87E6319336195D789899F4791CCD5F2437BCC0B0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAF248E82BE9EBA1ADBF067429FAEE5A5B6E05A74);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB5831A880405F69C8EF7F43534BF4D880F2B9A12);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD4A11128F810D574390DA344F324014E964D1876);
		s_Il2CppMethodInitialized = true;
	}
	MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	uint32_t V_2 = 0;
	{
		// var instance = (UnityEngine.ParticleSystem.MinMaxCurve)obj;
		RuntimeObject* L_0 = ___obj1;
		V_0 = ((*(MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23*)((MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23*)(MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23*)UnBox(L_0, MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_il2cpp_TypeInfo_var))));
		goto IL_01d2;
	}

IL_000c:
	{
		String_t* L_1 = V_1;
		uint32_t L_2;
		L_2 = U3CPrivateImplementationDetailsU3E_ComputeStringHash_m6EA1F233618497AEFF8902A5EDFA24C74E2F2876(L_1, NULL);
		V_2 = L_2;
		uint32_t L_3 = V_2;
		if ((!(((uint32_t)L_3) <= ((uint32_t)((int32_t)-725866558)))))
		{
			goto IL_0053;
		}
	}
	{
		uint32_t L_4 = V_2;
		if ((!(((uint32_t)L_4) <= ((uint32_t)((int32_t)740975083)))))
		{
			goto IL_003b;
		}
	}
	{
		uint32_t L_5 = V_2;
		if ((((int32_t)L_5) == ((int32_t)((int32_t)110225957))))
		{
			goto IL_0104;
		}
	}
	{
		uint32_t L_6 = V_2;
		if ((((int32_t)L_6) == ((int32_t)((int32_t)740975083))))
		{
			goto IL_009b;
		}
	}
	{
		goto IL_01cc;
	}

IL_003b:
	{
		uint32_t L_7 = V_2;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)-1724381676))))
		{
			goto IL_0119;
		}
	}
	{
		uint32_t L_8 = V_2;
		if ((((int32_t)L_8) == ((int32_t)((int32_t)-725866558))))
		{
			goto IL_00b0;
		}
	}
	{
		goto IL_01cc;
	}

IL_0053:
	{
		uint32_t L_9 = V_2;
		if ((!(((uint32_t)L_9) <= ((uint32_t)((int32_t)-559473464)))))
		{
			goto IL_0073;
		}
	}
	{
		uint32_t L_10 = V_2;
		if ((((int32_t)L_10) == ((int32_t)((int32_t)-581632105))))
		{
			goto IL_00ef;
		}
	}
	{
		uint32_t L_11 = V_2;
		if ((((int32_t)L_11) == ((int32_t)((int32_t)-559473464))))
		{
			goto IL_00c5;
		}
	}
	{
		goto IL_01cc;
	}

IL_0073:
	{
		uint32_t L_12 = V_2;
		if ((((int32_t)L_12) == ((int32_t)((int32_t)-345465511))))
		{
			goto IL_00da;
		}
	}
	{
		uint32_t L_13 = V_2;
		if ((!(((uint32_t)L_13) == ((uint32_t)((int32_t)-328277998)))))
		{
			goto IL_01cc;
		}
	}
	{
		String_t* L_14 = V_1;
		bool L_15;
		L_15 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_14, _stringLiteralAF248E82BE9EBA1ADBF067429FAEE5A5B6E05A74, NULL);
		if (L_15)
		{
			goto IL_012e;
		}
	}
	{
		goto IL_01cc;
	}

IL_009b:
	{
		String_t* L_16 = V_1;
		bool L_17;
		L_17 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_16, _stringLiteral227C22F51E4B6583CFC54387461605DDBBB00D14, NULL);
		if (L_17)
		{
			goto IL_0140;
		}
	}
	{
		goto IL_01cc;
	}

IL_00b0:
	{
		String_t* L_18 = V_1;
		bool L_19;
		L_19 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_18, _stringLiteral27906925D50A15B990B586241F08C8ED14226340, NULL);
		if (L_19)
		{
			goto IL_0154;
		}
	}
	{
		goto IL_01cc;
	}

IL_00c5:
	{
		String_t* L_20 = V_1;
		bool L_21;
		L_21 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_20, _stringLiteralD4A11128F810D574390DA344F324014E964D1876, NULL);
		if (L_21)
		{
			goto IL_0168;
		}
	}
	{
		goto IL_01cc;
	}

IL_00da:
	{
		String_t* L_22 = V_1;
		bool L_23;
		L_23 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_22, _stringLiteralB5831A880405F69C8EF7F43534BF4D880F2B9A12, NULL);
		if (L_23)
		{
			goto IL_017c;
		}
	}
	{
		goto IL_01cc;
	}

IL_00ef:
	{
		String_t* L_24 = V_1;
		bool L_25;
		L_25 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_24, _stringLiteral36587A0761A180514C267B50EA888F89871F71DF, NULL);
		if (L_25)
		{
			goto IL_0190;
		}
	}
	{
		goto IL_01cc;
	}

IL_0104:
	{
		String_t* L_26 = V_1;
		bool L_27;
		L_27 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_26, _stringLiteral87E6319336195D789899F4791CCD5F2437BCC0B0, NULL);
		if (L_27)
		{
			goto IL_01a4;
		}
	}
	{
		goto IL_01cc;
	}

IL_0119:
	{
		String_t* L_28 = V_1;
		bool L_29;
		L_29 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_28, _stringLiteral6C9DED8087C891AE33ACFFCE806DBFF63795F56F, NULL);
		if (L_29)
		{
			goto IL_01b8;
		}
	}
	{
		goto IL_01cc;
	}

IL_012e:
	{
		// instance.mode = reader.Read<UnityEngine.ParticleSystemCurveMode>();
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_30 = ___reader0;
		NullCheck(L_30);
		int32_t L_31;
		L_31 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisParticleSystemCurveMode_t8BE38B5D6B050709BAE31B5556CFC3DA69FC8405_m066E552CFA7510B509D2175EB72B2402EC615596_RuntimeMethod_var, L_30);
		MinMaxCurve_set_mode_m6870C4CA0FE7AF1029F45040B827C9F0A6A80A86((&V_0), L_31, NULL);
		// break;
		goto IL_01d2;
	}

IL_0140:
	{
		// instance.curveMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_32 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_33 = ((ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_32);
		float L_34;
		L_34 = GenericVirtualFuncInvoker1< float, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mA86928BC888E342D2C2644535E3399952F5077ED_RuntimeMethod_var, L_32, L_33);
		MinMaxCurve_set_curveMultiplier_m9FCF7F21AECE399ACD9FEB9ADEEBD93FD12DDABC((&V_0), L_34, NULL);
		// break;
		goto IL_01d2;
	}

IL_0154:
	{
		// instance.curveMax = reader.Read<UnityEngine.AnimationCurve>(ES3Type_AnimationCurve.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_35 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_36 = ((ES3Type_AnimationCurve_tF623128FF51FC3C48A6749619C4915CBE2995CA4_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_AnimationCurve_tF623128FF51FC3C48A6749619C4915CBE2995CA4_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_35);
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_37;
		L_37 = GenericVirtualFuncInvoker1< AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354*, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisAnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_m10F5F132336385185365E73EF668D8D369D3A4A1_RuntimeMethod_var, L_35, L_36);
		MinMaxCurve_set_curveMax_m39B9E8AE4E62E874DA99AA7108C2C47C6CA333DF((&V_0), L_37, NULL);
		// break;
		goto IL_01d2;
	}

IL_0168:
	{
		// instance.curveMin = reader.Read<UnityEngine.AnimationCurve>(ES3Type_AnimationCurve.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_38 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_39 = ((ES3Type_AnimationCurve_tF623128FF51FC3C48A6749619C4915CBE2995CA4_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_AnimationCurve_tF623128FF51FC3C48A6749619C4915CBE2995CA4_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_38);
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_40;
		L_40 = GenericVirtualFuncInvoker1< AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354*, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisAnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_m10F5F132336385185365E73EF668D8D369D3A4A1_RuntimeMethod_var, L_38, L_39);
		MinMaxCurve_set_curveMin_m17ADE22B882B75CBE87836C85C477A05122D9E75((&V_0), L_40, NULL);
		// break;
		goto IL_01d2;
	}

IL_017c:
	{
		// instance.constantMax = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_41 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_42 = ((ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_41);
		float L_43;
		L_43 = GenericVirtualFuncInvoker1< float, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mA86928BC888E342D2C2644535E3399952F5077ED_RuntimeMethod_var, L_41, L_42);
		MinMaxCurve_set_constantMax_mDB7B011E5B1EA76429B2A1FFDE6C06E82D290DC1((&V_0), L_43, NULL);
		// break;
		goto IL_01d2;
	}

IL_0190:
	{
		// instance.constantMin = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_44 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_45 = ((ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_44);
		float L_46;
		L_46 = GenericVirtualFuncInvoker1< float, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mA86928BC888E342D2C2644535E3399952F5077ED_RuntimeMethod_var, L_44, L_45);
		MinMaxCurve_set_constantMin_mBF7CF2A9F167AD06C327EE6EA37BA427E1CE548C((&V_0), L_46, NULL);
		// break;
		goto IL_01d2;
	}

IL_01a4:
	{
		// instance.constant = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_47 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_48 = ((ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_47);
		float L_49;
		L_49 = GenericVirtualFuncInvoker1< float, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mA86928BC888E342D2C2644535E3399952F5077ED_RuntimeMethod_var, L_47, L_48);
		MinMaxCurve_set_constant_mB6E4F22F67D3ED641FEBB387351F17451BB6A897((&V_0), L_49, NULL);
		// break;
		goto IL_01d2;
	}

IL_01b8:
	{
		// instance.curve = reader.Read<UnityEngine.AnimationCurve>(ES3Type_AnimationCurve.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_50 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_51 = ((ES3Type_AnimationCurve_tF623128FF51FC3C48A6749619C4915CBE2995CA4_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_AnimationCurve_tF623128FF51FC3C48A6749619C4915CBE2995CA4_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_50);
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_52;
		L_52 = GenericVirtualFuncInvoker1< AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354*, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisAnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_m10F5F132336385185365E73EF668D8D369D3A4A1_RuntimeMethod_var, L_50, L_51);
		MinMaxCurve_set_curve_mC745A6526FBF122F96DA597997DFAB9D7D2529BF((&V_0), L_52, NULL);
		// break;
		goto IL_01d2;
	}

IL_01cc:
	{
		// reader.Skip();
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_53 = ___reader0;
		NullCheck(L_53);
		VirtualActionInvoker0::Invoke(41 /* System.Void ES3Reader::Skip() */, L_53);
	}

IL_01d2:
	{
		// while((propertyName = reader.ReadPropertyName()) != null)
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_54 = ___reader0;
		NullCheck(L_54);
		String_t* L_55;
		L_55 = VirtualFuncInvoker0< String_t* >::Invoke(21 /* System.String ES3Reader::ReadPropertyName() */, L_54);
		String_t* L_56 = L_55;
		V_1 = L_56;
		if (L_56)
		{
			goto IL_000c;
		}
	}
	{
		// }
		return;
	}
}
// System.Void ES3Types.ES3Type_MinMaxCurve::ReadInto<UnityEngine.ParticleSystem/RotationBySpeedModule>(ES3Reader,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ES3Type_MinMaxCurve_ReadInto_TisRotationBySpeedModule_tBCB7E7C1B402D1492310016D5F8FBBA4C15C26A6_m4855AF1F68A4A690E19C4A10A27E12BD222E7359_gshared (ES3Type_MinMaxCurve_t1C147718750ACBECE5D2B7F545D2A434A3C5409B* __this, ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* ___reader0, RuntimeObject* ___obj1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisAnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_m10F5F132336385185365E73EF668D8D369D3A4A1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisParticleSystemCurveMode_t8BE38B5D6B050709BAE31B5556CFC3DA69FC8405_m066E552CFA7510B509D2175EB72B2402EC615596_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mA86928BC888E342D2C2644535E3399952F5077ED_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_AnimationCurve_tF623128FF51FC3C48A6749619C4915CBE2995CA4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral227C22F51E4B6583CFC54387461605DDBBB00D14);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral27906925D50A15B990B586241F08C8ED14226340);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral36587A0761A180514C267B50EA888F89871F71DF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6C9DED8087C891AE33ACFFCE806DBFF63795F56F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral87E6319336195D789899F4791CCD5F2437BCC0B0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAF248E82BE9EBA1ADBF067429FAEE5A5B6E05A74);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB5831A880405F69C8EF7F43534BF4D880F2B9A12);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD4A11128F810D574390DA344F324014E964D1876);
		s_Il2CppMethodInitialized = true;
	}
	MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	uint32_t V_2 = 0;
	{
		// var instance = (UnityEngine.ParticleSystem.MinMaxCurve)obj;
		RuntimeObject* L_0 = ___obj1;
		V_0 = ((*(MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23*)((MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23*)(MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23*)UnBox(L_0, MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_il2cpp_TypeInfo_var))));
		goto IL_01d2;
	}

IL_000c:
	{
		String_t* L_1 = V_1;
		uint32_t L_2;
		L_2 = U3CPrivateImplementationDetailsU3E_ComputeStringHash_m6EA1F233618497AEFF8902A5EDFA24C74E2F2876(L_1, NULL);
		V_2 = L_2;
		uint32_t L_3 = V_2;
		if ((!(((uint32_t)L_3) <= ((uint32_t)((int32_t)-725866558)))))
		{
			goto IL_0053;
		}
	}
	{
		uint32_t L_4 = V_2;
		if ((!(((uint32_t)L_4) <= ((uint32_t)((int32_t)740975083)))))
		{
			goto IL_003b;
		}
	}
	{
		uint32_t L_5 = V_2;
		if ((((int32_t)L_5) == ((int32_t)((int32_t)110225957))))
		{
			goto IL_0104;
		}
	}
	{
		uint32_t L_6 = V_2;
		if ((((int32_t)L_6) == ((int32_t)((int32_t)740975083))))
		{
			goto IL_009b;
		}
	}
	{
		goto IL_01cc;
	}

IL_003b:
	{
		uint32_t L_7 = V_2;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)-1724381676))))
		{
			goto IL_0119;
		}
	}
	{
		uint32_t L_8 = V_2;
		if ((((int32_t)L_8) == ((int32_t)((int32_t)-725866558))))
		{
			goto IL_00b0;
		}
	}
	{
		goto IL_01cc;
	}

IL_0053:
	{
		uint32_t L_9 = V_2;
		if ((!(((uint32_t)L_9) <= ((uint32_t)((int32_t)-559473464)))))
		{
			goto IL_0073;
		}
	}
	{
		uint32_t L_10 = V_2;
		if ((((int32_t)L_10) == ((int32_t)((int32_t)-581632105))))
		{
			goto IL_00ef;
		}
	}
	{
		uint32_t L_11 = V_2;
		if ((((int32_t)L_11) == ((int32_t)((int32_t)-559473464))))
		{
			goto IL_00c5;
		}
	}
	{
		goto IL_01cc;
	}

IL_0073:
	{
		uint32_t L_12 = V_2;
		if ((((int32_t)L_12) == ((int32_t)((int32_t)-345465511))))
		{
			goto IL_00da;
		}
	}
	{
		uint32_t L_13 = V_2;
		if ((!(((uint32_t)L_13) == ((uint32_t)((int32_t)-328277998)))))
		{
			goto IL_01cc;
		}
	}
	{
		String_t* L_14 = V_1;
		bool L_15;
		L_15 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_14, _stringLiteralAF248E82BE9EBA1ADBF067429FAEE5A5B6E05A74, NULL);
		if (L_15)
		{
			goto IL_012e;
		}
	}
	{
		goto IL_01cc;
	}

IL_009b:
	{
		String_t* L_16 = V_1;
		bool L_17;
		L_17 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_16, _stringLiteral227C22F51E4B6583CFC54387461605DDBBB00D14, NULL);
		if (L_17)
		{
			goto IL_0140;
		}
	}
	{
		goto IL_01cc;
	}

IL_00b0:
	{
		String_t* L_18 = V_1;
		bool L_19;
		L_19 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_18, _stringLiteral27906925D50A15B990B586241F08C8ED14226340, NULL);
		if (L_19)
		{
			goto IL_0154;
		}
	}
	{
		goto IL_01cc;
	}

IL_00c5:
	{
		String_t* L_20 = V_1;
		bool L_21;
		L_21 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_20, _stringLiteralD4A11128F810D574390DA344F324014E964D1876, NULL);
		if (L_21)
		{
			goto IL_0168;
		}
	}
	{
		goto IL_01cc;
	}

IL_00da:
	{
		String_t* L_22 = V_1;
		bool L_23;
		L_23 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_22, _stringLiteralB5831A880405F69C8EF7F43534BF4D880F2B9A12, NULL);
		if (L_23)
		{
			goto IL_017c;
		}
	}
	{
		goto IL_01cc;
	}

IL_00ef:
	{
		String_t* L_24 = V_1;
		bool L_25;
		L_25 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_24, _stringLiteral36587A0761A180514C267B50EA888F89871F71DF, NULL);
		if (L_25)
		{
			goto IL_0190;
		}
	}
	{
		goto IL_01cc;
	}

IL_0104:
	{
		String_t* L_26 = V_1;
		bool L_27;
		L_27 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_26, _stringLiteral87E6319336195D789899F4791CCD5F2437BCC0B0, NULL);
		if (L_27)
		{
			goto IL_01a4;
		}
	}
	{
		goto IL_01cc;
	}

IL_0119:
	{
		String_t* L_28 = V_1;
		bool L_29;
		L_29 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_28, _stringLiteral6C9DED8087C891AE33ACFFCE806DBFF63795F56F, NULL);
		if (L_29)
		{
			goto IL_01b8;
		}
	}
	{
		goto IL_01cc;
	}

IL_012e:
	{
		// instance.mode = reader.Read<UnityEngine.ParticleSystemCurveMode>();
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_30 = ___reader0;
		NullCheck(L_30);
		int32_t L_31;
		L_31 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisParticleSystemCurveMode_t8BE38B5D6B050709BAE31B5556CFC3DA69FC8405_m066E552CFA7510B509D2175EB72B2402EC615596_RuntimeMethod_var, L_30);
		MinMaxCurve_set_mode_m6870C4CA0FE7AF1029F45040B827C9F0A6A80A86((&V_0), L_31, NULL);
		// break;
		goto IL_01d2;
	}

IL_0140:
	{
		// instance.curveMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_32 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_33 = ((ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_32);
		float L_34;
		L_34 = GenericVirtualFuncInvoker1< float, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mA86928BC888E342D2C2644535E3399952F5077ED_RuntimeMethod_var, L_32, L_33);
		MinMaxCurve_set_curveMultiplier_m9FCF7F21AECE399ACD9FEB9ADEEBD93FD12DDABC((&V_0), L_34, NULL);
		// break;
		goto IL_01d2;
	}

IL_0154:
	{
		// instance.curveMax = reader.Read<UnityEngine.AnimationCurve>(ES3Type_AnimationCurve.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_35 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_36 = ((ES3Type_AnimationCurve_tF623128FF51FC3C48A6749619C4915CBE2995CA4_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_AnimationCurve_tF623128FF51FC3C48A6749619C4915CBE2995CA4_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_35);
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_37;
		L_37 = GenericVirtualFuncInvoker1< AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354*, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisAnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_m10F5F132336385185365E73EF668D8D369D3A4A1_RuntimeMethod_var, L_35, L_36);
		MinMaxCurve_set_curveMax_m39B9E8AE4E62E874DA99AA7108C2C47C6CA333DF((&V_0), L_37, NULL);
		// break;
		goto IL_01d2;
	}

IL_0168:
	{
		// instance.curveMin = reader.Read<UnityEngine.AnimationCurve>(ES3Type_AnimationCurve.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_38 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_39 = ((ES3Type_AnimationCurve_tF623128FF51FC3C48A6749619C4915CBE2995CA4_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_AnimationCurve_tF623128FF51FC3C48A6749619C4915CBE2995CA4_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_38);
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_40;
		L_40 = GenericVirtualFuncInvoker1< AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354*, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisAnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_m10F5F132336385185365E73EF668D8D369D3A4A1_RuntimeMethod_var, L_38, L_39);
		MinMaxCurve_set_curveMin_m17ADE22B882B75CBE87836C85C477A05122D9E75((&V_0), L_40, NULL);
		// break;
		goto IL_01d2;
	}

IL_017c:
	{
		// instance.constantMax = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_41 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_42 = ((ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_41);
		float L_43;
		L_43 = GenericVirtualFuncInvoker1< float, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mA86928BC888E342D2C2644535E3399952F5077ED_RuntimeMethod_var, L_41, L_42);
		MinMaxCurve_set_constantMax_mDB7B011E5B1EA76429B2A1FFDE6C06E82D290DC1((&V_0), L_43, NULL);
		// break;
		goto IL_01d2;
	}

IL_0190:
	{
		// instance.constantMin = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_44 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_45 = ((ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_44);
		float L_46;
		L_46 = GenericVirtualFuncInvoker1< float, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mA86928BC888E342D2C2644535E3399952F5077ED_RuntimeMethod_var, L_44, L_45);
		MinMaxCurve_set_constantMin_mBF7CF2A9F167AD06C327EE6EA37BA427E1CE548C((&V_0), L_46, NULL);
		// break;
		goto IL_01d2;
	}

IL_01a4:
	{
		// instance.constant = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_47 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_48 = ((ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_47);
		float L_49;
		L_49 = GenericVirtualFuncInvoker1< float, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mA86928BC888E342D2C2644535E3399952F5077ED_RuntimeMethod_var, L_47, L_48);
		MinMaxCurve_set_constant_mB6E4F22F67D3ED641FEBB387351F17451BB6A897((&V_0), L_49, NULL);
		// break;
		goto IL_01d2;
	}

IL_01b8:
	{
		// instance.curve = reader.Read<UnityEngine.AnimationCurve>(ES3Type_AnimationCurve.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_50 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_51 = ((ES3Type_AnimationCurve_tF623128FF51FC3C48A6749619C4915CBE2995CA4_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_AnimationCurve_tF623128FF51FC3C48A6749619C4915CBE2995CA4_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_50);
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_52;
		L_52 = GenericVirtualFuncInvoker1< AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354*, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisAnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_m10F5F132336385185365E73EF668D8D369D3A4A1_RuntimeMethod_var, L_50, L_51);
		MinMaxCurve_set_curve_mC745A6526FBF122F96DA597997DFAB9D7D2529BF((&V_0), L_52, NULL);
		// break;
		goto IL_01d2;
	}

IL_01cc:
	{
		// reader.Skip();
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_53 = ___reader0;
		NullCheck(L_53);
		VirtualActionInvoker0::Invoke(41 /* System.Void ES3Reader::Skip() */, L_53);
	}

IL_01d2:
	{
		// while((propertyName = reader.ReadPropertyName()) != null)
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_54 = ___reader0;
		NullCheck(L_54);
		String_t* L_55;
		L_55 = VirtualFuncInvoker0< String_t* >::Invoke(21 /* System.String ES3Reader::ReadPropertyName() */, L_54);
		String_t* L_56 = L_55;
		V_1 = L_56;
		if (L_56)
		{
			goto IL_000c;
		}
	}
	{
		// }
		return;
	}
}
// System.Void ES3Types.ES3Type_MinMaxCurve::ReadInto<UnityEngine.ParticleSystem/RotationOverLifetimeModule>(ES3Reader,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ES3Type_MinMaxCurve_ReadInto_TisRotationOverLifetimeModule_tEE08858451167B6DDE6DD36FDCF11E74C77D79E6_mF3F3D4357E8D0F7FFAD4F72AD975C614147DE581_gshared (ES3Type_MinMaxCurve_t1C147718750ACBECE5D2B7F545D2A434A3C5409B* __this, ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* ___reader0, RuntimeObject* ___obj1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisAnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_m10F5F132336385185365E73EF668D8D369D3A4A1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisParticleSystemCurveMode_t8BE38B5D6B050709BAE31B5556CFC3DA69FC8405_m066E552CFA7510B509D2175EB72B2402EC615596_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mA86928BC888E342D2C2644535E3399952F5077ED_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_AnimationCurve_tF623128FF51FC3C48A6749619C4915CBE2995CA4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral227C22F51E4B6583CFC54387461605DDBBB00D14);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral27906925D50A15B990B586241F08C8ED14226340);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral36587A0761A180514C267B50EA888F89871F71DF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6C9DED8087C891AE33ACFFCE806DBFF63795F56F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral87E6319336195D789899F4791CCD5F2437BCC0B0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAF248E82BE9EBA1ADBF067429FAEE5A5B6E05A74);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB5831A880405F69C8EF7F43534BF4D880F2B9A12);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD4A11128F810D574390DA344F324014E964D1876);
		s_Il2CppMethodInitialized = true;
	}
	MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	uint32_t V_2 = 0;
	{
		// var instance = (UnityEngine.ParticleSystem.MinMaxCurve)obj;
		RuntimeObject* L_0 = ___obj1;
		V_0 = ((*(MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23*)((MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23*)(MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23*)UnBox(L_0, MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_il2cpp_TypeInfo_var))));
		goto IL_01d2;
	}

IL_000c:
	{
		String_t* L_1 = V_1;
		uint32_t L_2;
		L_2 = U3CPrivateImplementationDetailsU3E_ComputeStringHash_m6EA1F233618497AEFF8902A5EDFA24C74E2F2876(L_1, NULL);
		V_2 = L_2;
		uint32_t L_3 = V_2;
		if ((!(((uint32_t)L_3) <= ((uint32_t)((int32_t)-725866558)))))
		{
			goto IL_0053;
		}
	}
	{
		uint32_t L_4 = V_2;
		if ((!(((uint32_t)L_4) <= ((uint32_t)((int32_t)740975083)))))
		{
			goto IL_003b;
		}
	}
	{
		uint32_t L_5 = V_2;
		if ((((int32_t)L_5) == ((int32_t)((int32_t)110225957))))
		{
			goto IL_0104;
		}
	}
	{
		uint32_t L_6 = V_2;
		if ((((int32_t)L_6) == ((int32_t)((int32_t)740975083))))
		{
			goto IL_009b;
		}
	}
	{
		goto IL_01cc;
	}

IL_003b:
	{
		uint32_t L_7 = V_2;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)-1724381676))))
		{
			goto IL_0119;
		}
	}
	{
		uint32_t L_8 = V_2;
		if ((((int32_t)L_8) == ((int32_t)((int32_t)-725866558))))
		{
			goto IL_00b0;
		}
	}
	{
		goto IL_01cc;
	}

IL_0053:
	{
		uint32_t L_9 = V_2;
		if ((!(((uint32_t)L_9) <= ((uint32_t)((int32_t)-559473464)))))
		{
			goto IL_0073;
		}
	}
	{
		uint32_t L_10 = V_2;
		if ((((int32_t)L_10) == ((int32_t)((int32_t)-581632105))))
		{
			goto IL_00ef;
		}
	}
	{
		uint32_t L_11 = V_2;
		if ((((int32_t)L_11) == ((int32_t)((int32_t)-559473464))))
		{
			goto IL_00c5;
		}
	}
	{
		goto IL_01cc;
	}

IL_0073:
	{
		uint32_t L_12 = V_2;
		if ((((int32_t)L_12) == ((int32_t)((int32_t)-345465511))))
		{
			goto IL_00da;
		}
	}
	{
		uint32_t L_13 = V_2;
		if ((!(((uint32_t)L_13) == ((uint32_t)((int32_t)-328277998)))))
		{
			goto IL_01cc;
		}
	}
	{
		String_t* L_14 = V_1;
		bool L_15;
		L_15 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_14, _stringLiteralAF248E82BE9EBA1ADBF067429FAEE5A5B6E05A74, NULL);
		if (L_15)
		{
			goto IL_012e;
		}
	}
	{
		goto IL_01cc;
	}

IL_009b:
	{
		String_t* L_16 = V_1;
		bool L_17;
		L_17 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_16, _stringLiteral227C22F51E4B6583CFC54387461605DDBBB00D14, NULL);
		if (L_17)
		{
			goto IL_0140;
		}
	}
	{
		goto IL_01cc;
	}

IL_00b0:
	{
		String_t* L_18 = V_1;
		bool L_19;
		L_19 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_18, _stringLiteral27906925D50A15B990B586241F08C8ED14226340, NULL);
		if (L_19)
		{
			goto IL_0154;
		}
	}
	{
		goto IL_01cc;
	}

IL_00c5:
	{
		String_t* L_20 = V_1;
		bool L_21;
		L_21 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_20, _stringLiteralD4A11128F810D574390DA344F324014E964D1876, NULL);
		if (L_21)
		{
			goto IL_0168;
		}
	}
	{
		goto IL_01cc;
	}

IL_00da:
	{
		String_t* L_22 = V_1;
		bool L_23;
		L_23 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_22, _stringLiteralB5831A880405F69C8EF7F43534BF4D880F2B9A12, NULL);
		if (L_23)
		{
			goto IL_017c;
		}
	}
	{
		goto IL_01cc;
	}

IL_00ef:
	{
		String_t* L_24 = V_1;
		bool L_25;
		L_25 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_24, _stringLiteral36587A0761A180514C267B50EA888F89871F71DF, NULL);
		if (L_25)
		{
			goto IL_0190;
		}
	}
	{
		goto IL_01cc;
	}

IL_0104:
	{
		String_t* L_26 = V_1;
		bool L_27;
		L_27 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_26, _stringLiteral87E6319336195D789899F4791CCD5F2437BCC0B0, NULL);
		if (L_27)
		{
			goto IL_01a4;
		}
	}
	{
		goto IL_01cc;
	}

IL_0119:
	{
		String_t* L_28 = V_1;
		bool L_29;
		L_29 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_28, _stringLiteral6C9DED8087C891AE33ACFFCE806DBFF63795F56F, NULL);
		if (L_29)
		{
			goto IL_01b8;
		}
	}
	{
		goto IL_01cc;
	}

IL_012e:
	{
		// instance.mode = reader.Read<UnityEngine.ParticleSystemCurveMode>();
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_30 = ___reader0;
		NullCheck(L_30);
		int32_t L_31;
		L_31 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisParticleSystemCurveMode_t8BE38B5D6B050709BAE31B5556CFC3DA69FC8405_m066E552CFA7510B509D2175EB72B2402EC615596_RuntimeMethod_var, L_30);
		MinMaxCurve_set_mode_m6870C4CA0FE7AF1029F45040B827C9F0A6A80A86((&V_0), L_31, NULL);
		// break;
		goto IL_01d2;
	}

IL_0140:
	{
		// instance.curveMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_32 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_33 = ((ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_32);
		float L_34;
		L_34 = GenericVirtualFuncInvoker1< float, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mA86928BC888E342D2C2644535E3399952F5077ED_RuntimeMethod_var, L_32, L_33);
		MinMaxCurve_set_curveMultiplier_m9FCF7F21AECE399ACD9FEB9ADEEBD93FD12DDABC((&V_0), L_34, NULL);
		// break;
		goto IL_01d2;
	}

IL_0154:
	{
		// instance.curveMax = reader.Read<UnityEngine.AnimationCurve>(ES3Type_AnimationCurve.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_35 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_36 = ((ES3Type_AnimationCurve_tF623128FF51FC3C48A6749619C4915CBE2995CA4_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_AnimationCurve_tF623128FF51FC3C48A6749619C4915CBE2995CA4_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_35);
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_37;
		L_37 = GenericVirtualFuncInvoker1< AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354*, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisAnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_m10F5F132336385185365E73EF668D8D369D3A4A1_RuntimeMethod_var, L_35, L_36);
		MinMaxCurve_set_curveMax_m39B9E8AE4E62E874DA99AA7108C2C47C6CA333DF((&V_0), L_37, NULL);
		// break;
		goto IL_01d2;
	}

IL_0168:
	{
		// instance.curveMin = reader.Read<UnityEngine.AnimationCurve>(ES3Type_AnimationCurve.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_38 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_39 = ((ES3Type_AnimationCurve_tF623128FF51FC3C48A6749619C4915CBE2995CA4_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_AnimationCurve_tF623128FF51FC3C48A6749619C4915CBE2995CA4_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_38);
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_40;
		L_40 = GenericVirtualFuncInvoker1< AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354*, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisAnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_m10F5F132336385185365E73EF668D8D369D3A4A1_RuntimeMethod_var, L_38, L_39);
		MinMaxCurve_set_curveMin_m17ADE22B882B75CBE87836C85C477A05122D9E75((&V_0), L_40, NULL);
		// break;
		goto IL_01d2;
	}

IL_017c:
	{
		// instance.constantMax = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_41 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_42 = ((ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_41);
		float L_43;
		L_43 = GenericVirtualFuncInvoker1< float, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mA86928BC888E342D2C2644535E3399952F5077ED_RuntimeMethod_var, L_41, L_42);
		MinMaxCurve_set_constantMax_mDB7B011E5B1EA76429B2A1FFDE6C06E82D290DC1((&V_0), L_43, NULL);
		// break;
		goto IL_01d2;
	}

IL_0190:
	{
		// instance.constantMin = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_44 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_45 = ((ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_44);
		float L_46;
		L_46 = GenericVirtualFuncInvoker1< float, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mA86928BC888E342D2C2644535E3399952F5077ED_RuntimeMethod_var, L_44, L_45);
		MinMaxCurve_set_constantMin_mBF7CF2A9F167AD06C327EE6EA37BA427E1CE548C((&V_0), L_46, NULL);
		// break;
		goto IL_01d2;
	}

IL_01a4:
	{
		// instance.constant = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_47 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_48 = ((ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_47);
		float L_49;
		L_49 = GenericVirtualFuncInvoker1< float, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mA86928BC888E342D2C2644535E3399952F5077ED_RuntimeMethod_var, L_47, L_48);
		MinMaxCurve_set_constant_mB6E4F22F67D3ED641FEBB387351F17451BB6A897((&V_0), L_49, NULL);
		// break;
		goto IL_01d2;
	}

IL_01b8:
	{
		// instance.curve = reader.Read<UnityEngine.AnimationCurve>(ES3Type_AnimationCurve.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_50 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_51 = ((ES3Type_AnimationCurve_tF623128FF51FC3C48A6749619C4915CBE2995CA4_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_AnimationCurve_tF623128FF51FC3C48A6749619C4915CBE2995CA4_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_50);
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_52;
		L_52 = GenericVirtualFuncInvoker1< AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354*, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisAnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_m10F5F132336385185365E73EF668D8D369D3A4A1_RuntimeMethod_var, L_50, L_51);
		MinMaxCurve_set_curve_mC745A6526FBF122F96DA597997DFAB9D7D2529BF((&V_0), L_52, NULL);
		// break;
		goto IL_01d2;
	}

IL_01cc:
	{
		// reader.Skip();
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_53 = ___reader0;
		NullCheck(L_53);
		VirtualActionInvoker0::Invoke(41 /* System.Void ES3Reader::Skip() */, L_53);
	}

IL_01d2:
	{
		// while((propertyName = reader.ReadPropertyName()) != null)
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_54 = ___reader0;
		NullCheck(L_54);
		String_t* L_55;
		L_55 = VirtualFuncInvoker0< String_t* >::Invoke(21 /* System.String ES3Reader::ReadPropertyName() */, L_54);
		String_t* L_56 = L_55;
		V_1 = L_56;
		if (L_56)
		{
			goto IL_000c;
		}
	}
	{
		// }
		return;
	}
}
// System.Void ES3Types.ES3Type_MinMaxCurve::ReadInto<UnityEngine.ParticleSystem/SubEmittersModule>(ES3Reader,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ES3Type_MinMaxCurve_ReadInto_TisSubEmittersModule_t94F5AD231EAFB50A16E697186A630B07BF8B949B_m00CB9A0D6BFFA6CC8A64C5E2AAF8CCED32F7B5C2_gshared (ES3Type_MinMaxCurve_t1C147718750ACBECE5D2B7F545D2A434A3C5409B* __this, ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* ___reader0, RuntimeObject* ___obj1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisAnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_m10F5F132336385185365E73EF668D8D369D3A4A1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisParticleSystemCurveMode_t8BE38B5D6B050709BAE31B5556CFC3DA69FC8405_m066E552CFA7510B509D2175EB72B2402EC615596_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mA86928BC888E342D2C2644535E3399952F5077ED_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_AnimationCurve_tF623128FF51FC3C48A6749619C4915CBE2995CA4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral227C22F51E4B6583CFC54387461605DDBBB00D14);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral27906925D50A15B990B586241F08C8ED14226340);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral36587A0761A180514C267B50EA888F89871F71DF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6C9DED8087C891AE33ACFFCE806DBFF63795F56F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral87E6319336195D789899F4791CCD5F2437BCC0B0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAF248E82BE9EBA1ADBF067429FAEE5A5B6E05A74);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB5831A880405F69C8EF7F43534BF4D880F2B9A12);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD4A11128F810D574390DA344F324014E964D1876);
		s_Il2CppMethodInitialized = true;
	}
	MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	uint32_t V_2 = 0;
	{
		// var instance = (UnityEngine.ParticleSystem.MinMaxCurve)obj;
		RuntimeObject* L_0 = ___obj1;
		V_0 = ((*(MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23*)((MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23*)(MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23*)UnBox(L_0, MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_il2cpp_TypeInfo_var))));
		goto IL_01d2;
	}

IL_000c:
	{
		String_t* L_1 = V_1;
		uint32_t L_2;
		L_2 = U3CPrivateImplementationDetailsU3E_ComputeStringHash_m6EA1F233618497AEFF8902A5EDFA24C74E2F2876(L_1, NULL);
		V_2 = L_2;
		uint32_t L_3 = V_2;
		if ((!(((uint32_t)L_3) <= ((uint32_t)((int32_t)-725866558)))))
		{
			goto IL_0053;
		}
	}
	{
		uint32_t L_4 = V_2;
		if ((!(((uint32_t)L_4) <= ((uint32_t)((int32_t)740975083)))))
		{
			goto IL_003b;
		}
	}
	{
		uint32_t L_5 = V_2;
		if ((((int32_t)L_5) == ((int32_t)((int32_t)110225957))))
		{
			goto IL_0104;
		}
	}
	{
		uint32_t L_6 = V_2;
		if ((((int32_t)L_6) == ((int32_t)((int32_t)740975083))))
		{
			goto IL_009b;
		}
	}
	{
		goto IL_01cc;
	}

IL_003b:
	{
		uint32_t L_7 = V_2;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)-1724381676))))
		{
			goto IL_0119;
		}
	}
	{
		uint32_t L_8 = V_2;
		if ((((int32_t)L_8) == ((int32_t)((int32_t)-725866558))))
		{
			goto IL_00b0;
		}
	}
	{
		goto IL_01cc;
	}

IL_0053:
	{
		uint32_t L_9 = V_2;
		if ((!(((uint32_t)L_9) <= ((uint32_t)((int32_t)-559473464)))))
		{
			goto IL_0073;
		}
	}
	{
		uint32_t L_10 = V_2;
		if ((((int32_t)L_10) == ((int32_t)((int32_t)-581632105))))
		{
			goto IL_00ef;
		}
	}
	{
		uint32_t L_11 = V_2;
		if ((((int32_t)L_11) == ((int32_t)((int32_t)-559473464))))
		{
			goto IL_00c5;
		}
	}
	{
		goto IL_01cc;
	}

IL_0073:
	{
		uint32_t L_12 = V_2;
		if ((((int32_t)L_12) == ((int32_t)((int32_t)-345465511))))
		{
			goto IL_00da;
		}
	}
	{
		uint32_t L_13 = V_2;
		if ((!(((uint32_t)L_13) == ((uint32_t)((int32_t)-328277998)))))
		{
			goto IL_01cc;
		}
	}
	{
		String_t* L_14 = V_1;
		bool L_15;
		L_15 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_14, _stringLiteralAF248E82BE9EBA1ADBF067429FAEE5A5B6E05A74, NULL);
		if (L_15)
		{
			goto IL_012e;
		}
	}
	{
		goto IL_01cc;
	}

IL_009b:
	{
		String_t* L_16 = V_1;
		bool L_17;
		L_17 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_16, _stringLiteral227C22F51E4B6583CFC54387461605DDBBB00D14, NULL);
		if (L_17)
		{
			goto IL_0140;
		}
	}
	{
		goto IL_01cc;
	}

IL_00b0:
	{
		String_t* L_18 = V_1;
		bool L_19;
		L_19 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_18, _stringLiteral27906925D50A15B990B586241F08C8ED14226340, NULL);
		if (L_19)
		{
			goto IL_0154;
		}
	}
	{
		goto IL_01cc;
	}

IL_00c5:
	{
		String_t* L_20 = V_1;
		bool L_21;
		L_21 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_20, _stringLiteralD4A11128F810D574390DA344F324014E964D1876, NULL);
		if (L_21)
		{
			goto IL_0168;
		}
	}
	{
		goto IL_01cc;
	}

IL_00da:
	{
		String_t* L_22 = V_1;
		bool L_23;
		L_23 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_22, _stringLiteralB5831A880405F69C8EF7F43534BF4D880F2B9A12, NULL);
		if (L_23)
		{
			goto IL_017c;
		}
	}
	{
		goto IL_01cc;
	}

IL_00ef:
	{
		String_t* L_24 = V_1;
		bool L_25;
		L_25 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_24, _stringLiteral36587A0761A180514C267B50EA888F89871F71DF, NULL);
		if (L_25)
		{
			goto IL_0190;
		}
	}
	{
		goto IL_01cc;
	}

IL_0104:
	{
		String_t* L_26 = V_1;
		bool L_27;
		L_27 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_26, _stringLiteral87E6319336195D789899F4791CCD5F2437BCC0B0, NULL);
		if (L_27)
		{
			goto IL_01a4;
		}
	}
	{
		goto IL_01cc;
	}

IL_0119:
	{
		String_t* L_28 = V_1;
		bool L_29;
		L_29 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_28, _stringLiteral6C9DED8087C891AE33ACFFCE806DBFF63795F56F, NULL);
		if (L_29)
		{
			goto IL_01b8;
		}
	}
	{
		goto IL_01cc;
	}

IL_012e:
	{
		// instance.mode = reader.Read<UnityEngine.ParticleSystemCurveMode>();
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_30 = ___reader0;
		NullCheck(L_30);
		int32_t L_31;
		L_31 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisParticleSystemCurveMode_t8BE38B5D6B050709BAE31B5556CFC3DA69FC8405_m066E552CFA7510B509D2175EB72B2402EC615596_RuntimeMethod_var, L_30);
		MinMaxCurve_set_mode_m6870C4CA0FE7AF1029F45040B827C9F0A6A80A86((&V_0), L_31, NULL);
		// break;
		goto IL_01d2;
	}

IL_0140:
	{
		// instance.curveMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_32 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_33 = ((ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_32);
		float L_34;
		L_34 = GenericVirtualFuncInvoker1< float, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mA86928BC888E342D2C2644535E3399952F5077ED_RuntimeMethod_var, L_32, L_33);
		MinMaxCurve_set_curveMultiplier_m9FCF7F21AECE399ACD9FEB9ADEEBD93FD12DDABC((&V_0), L_34, NULL);
		// break;
		goto IL_01d2;
	}

IL_0154:
	{
		// instance.curveMax = reader.Read<UnityEngine.AnimationCurve>(ES3Type_AnimationCurve.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_35 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_36 = ((ES3Type_AnimationCurve_tF623128FF51FC3C48A6749619C4915CBE2995CA4_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_AnimationCurve_tF623128FF51FC3C48A6749619C4915CBE2995CA4_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_35);
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_37;
		L_37 = GenericVirtualFuncInvoker1< AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354*, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisAnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_m10F5F132336385185365E73EF668D8D369D3A4A1_RuntimeMethod_var, L_35, L_36);
		MinMaxCurve_set_curveMax_m39B9E8AE4E62E874DA99AA7108C2C47C6CA333DF((&V_0), L_37, NULL);
		// break;
		goto IL_01d2;
	}

IL_0168:
	{
		// instance.curveMin = reader.Read<UnityEngine.AnimationCurve>(ES3Type_AnimationCurve.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_38 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_39 = ((ES3Type_AnimationCurve_tF623128FF51FC3C48A6749619C4915CBE2995CA4_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_AnimationCurve_tF623128FF51FC3C48A6749619C4915CBE2995CA4_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_38);
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_40;
		L_40 = GenericVirtualFuncInvoker1< AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354*, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisAnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_m10F5F132336385185365E73EF668D8D369D3A4A1_RuntimeMethod_var, L_38, L_39);
		MinMaxCurve_set_curveMin_m17ADE22B882B75CBE87836C85C477A05122D9E75((&V_0), L_40, NULL);
		// break;
		goto IL_01d2;
	}

IL_017c:
	{
		// instance.constantMax = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_41 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_42 = ((ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_41);
		float L_43;
		L_43 = GenericVirtualFuncInvoker1< float, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mA86928BC888E342D2C2644535E3399952F5077ED_RuntimeMethod_var, L_41, L_42);
		MinMaxCurve_set_constantMax_mDB7B011E5B1EA76429B2A1FFDE6C06E82D290DC1((&V_0), L_43, NULL);
		// break;
		goto IL_01d2;
	}

IL_0190:
	{
		// instance.constantMin = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_44 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_45 = ((ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_44);
		float L_46;
		L_46 = GenericVirtualFuncInvoker1< float, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mA86928BC888E342D2C2644535E3399952F5077ED_RuntimeMethod_var, L_44, L_45);
		MinMaxCurve_set_constantMin_mBF7CF2A9F167AD06C327EE6EA37BA427E1CE548C((&V_0), L_46, NULL);
		// break;
		goto IL_01d2;
	}

IL_01a4:
	{
		// instance.constant = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_47 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_48 = ((ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_47);
		float L_49;
		L_49 = GenericVirtualFuncInvoker1< float, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mA86928BC888E342D2C2644535E3399952F5077ED_RuntimeMethod_var, L_47, L_48);
		MinMaxCurve_set_constant_mB6E4F22F67D3ED641FEBB387351F17451BB6A897((&V_0), L_49, NULL);
		// break;
		goto IL_01d2;
	}

IL_01b8:
	{
		// instance.curve = reader.Read<UnityEngine.AnimationCurve>(ES3Type_AnimationCurve.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_50 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_51 = ((ES3Type_AnimationCurve_tF623128FF51FC3C48A6749619C4915CBE2995CA4_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_AnimationCurve_tF623128FF51FC3C48A6749619C4915CBE2995CA4_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_50);
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_52;
		L_52 = GenericVirtualFuncInvoker1< AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354*, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisAnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_m10F5F132336385185365E73EF668D8D369D3A4A1_RuntimeMethod_var, L_50, L_51);
		MinMaxCurve_set_curve_mC745A6526FBF122F96DA597997DFAB9D7D2529BF((&V_0), L_52, NULL);
		// break;
		goto IL_01d2;
	}

IL_01cc:
	{
		// reader.Skip();
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_53 = ___reader0;
		NullCheck(L_53);
		VirtualActionInvoker0::Invoke(41 /* System.Void ES3Reader::Skip() */, L_53);
	}

IL_01d2:
	{
		// while((propertyName = reader.ReadPropertyName()) != null)
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_54 = ___reader0;
		NullCheck(L_54);
		String_t* L_55;
		L_55 = VirtualFuncInvoker0< String_t* >::Invoke(21 /* System.String ES3Reader::ReadPropertyName() */, L_54);
		String_t* L_56 = L_55;
		V_1 = L_56;
		if (L_56)
		{
			goto IL_000c;
		}
	}
	{
		// }
		return;
	}
}
// System.Void ES3Types.ES3Type_MinMaxCurve::ReadInto<UnityEngine.ParticleSystem/TextureSheetAnimationModule>(ES3Reader,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ES3Type_MinMaxCurve_ReadInto_TisTextureSheetAnimationModule_tB53F451F252E24ACC3EF80D770DB4FBE1A13D1F6_m228B0FF5EAAF52F3D9E235BE8AECEFAC4A35931F_gshared (ES3Type_MinMaxCurve_t1C147718750ACBECE5D2B7F545D2A434A3C5409B* __this, ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* ___reader0, RuntimeObject* ___obj1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisAnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_m10F5F132336385185365E73EF668D8D369D3A4A1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisParticleSystemCurveMode_t8BE38B5D6B050709BAE31B5556CFC3DA69FC8405_m066E552CFA7510B509D2175EB72B2402EC615596_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mA86928BC888E342D2C2644535E3399952F5077ED_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_AnimationCurve_tF623128FF51FC3C48A6749619C4915CBE2995CA4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral227C22F51E4B6583CFC54387461605DDBBB00D14);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral27906925D50A15B990B586241F08C8ED14226340);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral36587A0761A180514C267B50EA888F89871F71DF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6C9DED8087C891AE33ACFFCE806DBFF63795F56F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral87E6319336195D789899F4791CCD5F2437BCC0B0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAF248E82BE9EBA1ADBF067429FAEE5A5B6E05A74);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB5831A880405F69C8EF7F43534BF4D880F2B9A12);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD4A11128F810D574390DA344F324014E964D1876);
		s_Il2CppMethodInitialized = true;
	}
	MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	uint32_t V_2 = 0;
	{
		// var instance = (UnityEngine.ParticleSystem.MinMaxCurve)obj;
		RuntimeObject* L_0 = ___obj1;
		V_0 = ((*(MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23*)((MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23*)(MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23*)UnBox(L_0, MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_il2cpp_TypeInfo_var))));
		goto IL_01d2;
	}

IL_000c:
	{
		String_t* L_1 = V_1;
		uint32_t L_2;
		L_2 = U3CPrivateImplementationDetailsU3E_ComputeStringHash_m6EA1F233618497AEFF8902A5EDFA24C74E2F2876(L_1, NULL);
		V_2 = L_2;
		uint32_t L_3 = V_2;
		if ((!(((uint32_t)L_3) <= ((uint32_t)((int32_t)-725866558)))))
		{
			goto IL_0053;
		}
	}
	{
		uint32_t L_4 = V_2;
		if ((!(((uint32_t)L_4) <= ((uint32_t)((int32_t)740975083)))))
		{
			goto IL_003b;
		}
	}
	{
		uint32_t L_5 = V_2;
		if ((((int32_t)L_5) == ((int32_t)((int32_t)110225957))))
		{
			goto IL_0104;
		}
	}
	{
		uint32_t L_6 = V_2;
		if ((((int32_t)L_6) == ((int32_t)((int32_t)740975083))))
		{
			goto IL_009b;
		}
	}
	{
		goto IL_01cc;
	}

IL_003b:
	{
		uint32_t L_7 = V_2;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)-1724381676))))
		{
			goto IL_0119;
		}
	}
	{
		uint32_t L_8 = V_2;
		if ((((int32_t)L_8) == ((int32_t)((int32_t)-725866558))))
		{
			goto IL_00b0;
		}
	}
	{
		goto IL_01cc;
	}

IL_0053:
	{
		uint32_t L_9 = V_2;
		if ((!(((uint32_t)L_9) <= ((uint32_t)((int32_t)-559473464)))))
		{
			goto IL_0073;
		}
	}
	{
		uint32_t L_10 = V_2;
		if ((((int32_t)L_10) == ((int32_t)((int32_t)-581632105))))
		{
			goto IL_00ef;
		}
	}
	{
		uint32_t L_11 = V_2;
		if ((((int32_t)L_11) == ((int32_t)((int32_t)-559473464))))
		{
			goto IL_00c5;
		}
	}
	{
		goto IL_01cc;
	}

IL_0073:
	{
		uint32_t L_12 = V_2;
		if ((((int32_t)L_12) == ((int32_t)((int32_t)-345465511))))
		{
			goto IL_00da;
		}
	}
	{
		uint32_t L_13 = V_2;
		if ((!(((uint32_t)L_13) == ((uint32_t)((int32_t)-328277998)))))
		{
			goto IL_01cc;
		}
	}
	{
		String_t* L_14 = V_1;
		bool L_15;
		L_15 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_14, _stringLiteralAF248E82BE9EBA1ADBF067429FAEE5A5B6E05A74, NULL);
		if (L_15)
		{
			goto IL_012e;
		}
	}
	{
		goto IL_01cc;
	}

IL_009b:
	{
		String_t* L_16 = V_1;
		bool L_17;
		L_17 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_16, _stringLiteral227C22F51E4B6583CFC54387461605DDBBB00D14, NULL);
		if (L_17)
		{
			goto IL_0140;
		}
	}
	{
		goto IL_01cc;
	}

IL_00b0:
	{
		String_t* L_18 = V_1;
		bool L_19;
		L_19 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_18, _stringLiteral27906925D50A15B990B586241F08C8ED14226340, NULL);
		if (L_19)
		{
			goto IL_0154;
		}
	}
	{
		goto IL_01cc;
	}

IL_00c5:
	{
		String_t* L_20 = V_1;
		bool L_21;
		L_21 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_20, _stringLiteralD4A11128F810D574390DA344F324014E964D1876, NULL);
		if (L_21)
		{
			goto IL_0168;
		}
	}
	{
		goto IL_01cc;
	}

IL_00da:
	{
		String_t* L_22 = V_1;
		bool L_23;
		L_23 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_22, _stringLiteralB5831A880405F69C8EF7F43534BF4D880F2B9A12, NULL);
		if (L_23)
		{
			goto IL_017c;
		}
	}
	{
		goto IL_01cc;
	}

IL_00ef:
	{
		String_t* L_24 = V_1;
		bool L_25;
		L_25 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_24, _stringLiteral36587A0761A180514C267B50EA888F89871F71DF, NULL);
		if (L_25)
		{
			goto IL_0190;
		}
	}
	{
		goto IL_01cc;
	}

IL_0104:
	{
		String_t* L_26 = V_1;
		bool L_27;
		L_27 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_26, _stringLiteral87E6319336195D789899F4791CCD5F2437BCC0B0, NULL);
		if (L_27)
		{
			goto IL_01a4;
		}
	}
	{
		goto IL_01cc;
	}

IL_0119:
	{
		String_t* L_28 = V_1;
		bool L_29;
		L_29 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_28, _stringLiteral6C9DED8087C891AE33ACFFCE806DBFF63795F56F, NULL);
		if (L_29)
		{
			goto IL_01b8;
		}
	}
	{
		goto IL_01cc;
	}

IL_012e:
	{
		// instance.mode = reader.Read<UnityEngine.ParticleSystemCurveMode>();
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_30 = ___reader0;
		NullCheck(L_30);
		int32_t L_31;
		L_31 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisParticleSystemCurveMode_t8BE38B5D6B050709BAE31B5556CFC3DA69FC8405_m066E552CFA7510B509D2175EB72B2402EC615596_RuntimeMethod_var, L_30);
		MinMaxCurve_set_mode_m6870C4CA0FE7AF1029F45040B827C9F0A6A80A86((&V_0), L_31, NULL);
		// break;
		goto IL_01d2;
	}

IL_0140:
	{
		// instance.curveMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_32 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_33 = ((ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_32);
		float L_34;
		L_34 = GenericVirtualFuncInvoker1< float, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mA86928BC888E342D2C2644535E3399952F5077ED_RuntimeMethod_var, L_32, L_33);
		MinMaxCurve_set_curveMultiplier_m9FCF7F21AECE399ACD9FEB9ADEEBD93FD12DDABC((&V_0), L_34, NULL);
		// break;
		goto IL_01d2;
	}

IL_0154:
	{
		// instance.curveMax = reader.Read<UnityEngine.AnimationCurve>(ES3Type_AnimationCurve.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_35 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_36 = ((ES3Type_AnimationCurve_tF623128FF51FC3C48A6749619C4915CBE2995CA4_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_AnimationCurve_tF623128FF51FC3C48A6749619C4915CBE2995CA4_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_35);
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_37;
		L_37 = GenericVirtualFuncInvoker1< AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354*, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisAnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_m10F5F132336385185365E73EF668D8D369D3A4A1_RuntimeMethod_var, L_35, L_36);
		MinMaxCurve_set_curveMax_m39B9E8AE4E62E874DA99AA7108C2C47C6CA333DF((&V_0), L_37, NULL);
		// break;
		goto IL_01d2;
	}

IL_0168:
	{
		// instance.curveMin = reader.Read<UnityEngine.AnimationCurve>(ES3Type_AnimationCurve.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_38 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_39 = ((ES3Type_AnimationCurve_tF623128FF51FC3C48A6749619C4915CBE2995CA4_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_AnimationCurve_tF623128FF51FC3C48A6749619C4915CBE2995CA4_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_38);
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_40;
		L_40 = GenericVirtualFuncInvoker1< AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354*, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisAnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_m10F5F132336385185365E73EF668D8D369D3A4A1_RuntimeMethod_var, L_38, L_39);
		MinMaxCurve_set_curveMin_m17ADE22B882B75CBE87836C85C477A05122D9E75((&V_0), L_40, NULL);
		// break;
		goto IL_01d2;
	}

IL_017c:
	{
		// instance.constantMax = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_41 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_42 = ((ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_41);
		float L_43;
		L_43 = GenericVirtualFuncInvoker1< float, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mA86928BC888E342D2C2644535E3399952F5077ED_RuntimeMethod_var, L_41, L_42);
		MinMaxCurve_set_constantMax_mDB7B011E5B1EA76429B2A1FFDE6C06E82D290DC1((&V_0), L_43, NULL);
		// break;
		goto IL_01d2;
	}

IL_0190:
	{
		// instance.constantMin = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_44 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_45 = ((ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_44);
		float L_46;
		L_46 = GenericVirtualFuncInvoker1< float, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mA86928BC888E342D2C2644535E3399952F5077ED_RuntimeMethod_var, L_44, L_45);
		MinMaxCurve_set_constantMin_mBF7CF2A9F167AD06C327EE6EA37BA427E1CE548C((&V_0), L_46, NULL);
		// break;
		goto IL_01d2;
	}

IL_01a4:
	{
		// instance.constant = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_47 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_48 = ((ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_47);
		float L_49;
		L_49 = GenericVirtualFuncInvoker1< float, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mA86928BC888E342D2C2644535E3399952F5077ED_RuntimeMethod_var, L_47, L_48);
		MinMaxCurve_set_constant_mB6E4F22F67D3ED641FEBB387351F17451BB6A897((&V_0), L_49, NULL);
		// break;
		goto IL_01d2;
	}

IL_01b8:
	{
		// instance.curve = reader.Read<UnityEngine.AnimationCurve>(ES3Type_AnimationCurve.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_50 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_51 = ((ES3Type_AnimationCurve_tF623128FF51FC3C48A6749619C4915CBE2995CA4_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_AnimationCurve_tF623128FF51FC3C48A6749619C4915CBE2995CA4_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_50);
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_52;
		L_52 = GenericVirtualFuncInvoker1< AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354*, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisAnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_m10F5F132336385185365E73EF668D8D369D3A4A1_RuntimeMethod_var, L_50, L_51);
		MinMaxCurve_set_curve_mC745A6526FBF122F96DA597997DFAB9D7D2529BF((&V_0), L_52, NULL);
		// break;
		goto IL_01d2;
	}

IL_01cc:
	{
		// reader.Skip();
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_53 = ___reader0;
		NullCheck(L_53);
		VirtualActionInvoker0::Invoke(41 /* System.Void ES3Reader::Skip() */, L_53);
	}

IL_01d2:
	{
		// while((propertyName = reader.ReadPropertyName()) != null)
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_54 = ___reader0;
		NullCheck(L_54);
		String_t* L_55;
		L_55 = VirtualFuncInvoker0< String_t* >::Invoke(21 /* System.String ES3Reader::ReadPropertyName() */, L_54);
		String_t* L_56 = L_55;
		V_1 = L_56;
		if (L_56)
		{
			goto IL_000c;
		}
	}
	{
		// }
		return;
	}
}
// System.Void ES3Types.ES3Type_MinMaxCurve::ReadInto<UnityEngine.ParticleSystem/TrailModule>(ES3Reader,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ES3Type_MinMaxCurve_ReadInto_TisTrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D_m7AE92B61F9EA23F9403CE7330D65A43DA81BDC7B_gshared (ES3Type_MinMaxCurve_t1C147718750ACBECE5D2B7F545D2A434A3C5409B* __this, ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* ___reader0, RuntimeObject* ___obj1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisAnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_m10F5F132336385185365E73EF668D8D369D3A4A1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisParticleSystemCurveMode_t8BE38B5D6B050709BAE31B5556CFC3DA69FC8405_m066E552CFA7510B509D2175EB72B2402EC615596_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mA86928BC888E342D2C2644535E3399952F5077ED_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_AnimationCurve_tF623128FF51FC3C48A6749619C4915CBE2995CA4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral227C22F51E4B6583CFC54387461605DDBBB00D14);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral27906925D50A15B990B586241F08C8ED14226340);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral36587A0761A180514C267B50EA888F89871F71DF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6C9DED8087C891AE33ACFFCE806DBFF63795F56F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral87E6319336195D789899F4791CCD5F2437BCC0B0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAF248E82BE9EBA1ADBF067429FAEE5A5B6E05A74);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB5831A880405F69C8EF7F43534BF4D880F2B9A12);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD4A11128F810D574390DA344F324014E964D1876);
		s_Il2CppMethodInitialized = true;
	}
	MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	uint32_t V_2 = 0;
	{
		// var instance = (UnityEngine.ParticleSystem.MinMaxCurve)obj;
		RuntimeObject* L_0 = ___obj1;
		V_0 = ((*(MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23*)((MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23*)(MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23*)UnBox(L_0, MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_il2cpp_TypeInfo_var))));
		goto IL_01d2;
	}

IL_000c:
	{
		String_t* L_1 = V_1;
		uint32_t L_2;
		L_2 = U3CPrivateImplementationDetailsU3E_ComputeStringHash_m6EA1F233618497AEFF8902A5EDFA24C74E2F2876(L_1, NULL);
		V_2 = L_2;
		uint32_t L_3 = V_2;
		if ((!(((uint32_t)L_3) <= ((uint32_t)((int32_t)-725866558)))))
		{
			goto IL_0053;
		}
	}
	{
		uint32_t L_4 = V_2;
		if ((!(((uint32_t)L_4) <= ((uint32_t)((int32_t)740975083)))))
		{
			goto IL_003b;
		}
	}
	{
		uint32_t L_5 = V_2;
		if ((((int32_t)L_5) == ((int32_t)((int32_t)110225957))))
		{
			goto IL_0104;
		}
	}
	{
		uint32_t L_6 = V_2;
		if ((((int32_t)L_6) == ((int32_t)((int32_t)740975083))))
		{
			goto IL_009b;
		}
	}
	{
		goto IL_01cc;
	}

IL_003b:
	{
		uint32_t L_7 = V_2;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)-1724381676))))
		{
			goto IL_0119;
		}
	}
	{
		uint32_t L_8 = V_2;
		if ((((int32_t)L_8) == ((int32_t)((int32_t)-725866558))))
		{
			goto IL_00b0;
		}
	}
	{
		goto IL_01cc;
	}

IL_0053:
	{
		uint32_t L_9 = V_2;
		if ((!(((uint32_t)L_9) <= ((uint32_t)((int32_t)-559473464)))))
		{
			goto IL_0073;
		}
	}
	{
		uint32_t L_10 = V_2;
		if ((((int32_t)L_10) == ((int32_t)((int32_t)-581632105))))
		{
			goto IL_00ef;
		}
	}
	{
		uint32_t L_11 = V_2;
		if ((((int32_t)L_11) == ((int32_t)((int32_t)-559473464))))
		{
			goto IL_00c5;
		}
	}
	{
		goto IL_01cc;
	}

IL_0073:
	{
		uint32_t L_12 = V_2;
		if ((((int32_t)L_12) == ((int32_t)((int32_t)-345465511))))
		{
			goto IL_00da;
		}
	}
	{
		uint32_t L_13 = V_2;
		if ((!(((uint32_t)L_13) == ((uint32_t)((int32_t)-328277998)))))
		{
			goto IL_01cc;
		}
	}
	{
		String_t* L_14 = V_1;
		bool L_15;
		L_15 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_14, _stringLiteralAF248E82BE9EBA1ADBF067429FAEE5A5B6E05A74, NULL);
		if (L_15)
		{
			goto IL_012e;
		}
	}
	{
		goto IL_01cc;
	}

IL_009b:
	{
		String_t* L_16 = V_1;
		bool L_17;
		L_17 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_16, _stringLiteral227C22F51E4B6583CFC54387461605DDBBB00D14, NULL);
		if (L_17)
		{
			goto IL_0140;
		}
	}
	{
		goto IL_01cc;
	}

IL_00b0:
	{
		String_t* L_18 = V_1;
		bool L_19;
		L_19 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_18, _stringLiteral27906925D50A15B990B586241F08C8ED14226340, NULL);
		if (L_19)
		{
			goto IL_0154;
		}
	}
	{
		goto IL_01cc;
	}

IL_00c5:
	{
		String_t* L_20 = V_1;
		bool L_21;
		L_21 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_20, _stringLiteralD4A11128F810D574390DA344F324014E964D1876, NULL);
		if (L_21)
		{
			goto IL_0168;
		}
	}
	{
		goto IL_01cc;
	}

IL_00da:
	{
		String_t* L_22 = V_1;
		bool L_23;
		L_23 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_22, _stringLiteralB5831A880405F69C8EF7F43534BF4D880F2B9A12, NULL);
		if (L_23)
		{
			goto IL_017c;
		}
	}
	{
		goto IL_01cc;
	}

IL_00ef:
	{
		String_t* L_24 = V_1;
		bool L_25;
		L_25 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_24, _stringLiteral36587A0761A180514C267B50EA888F89871F71DF, NULL);
		if (L_25)
		{
			goto IL_0190;
		}
	}
	{
		goto IL_01cc;
	}

IL_0104:
	{
		String_t* L_26 = V_1;
		bool L_27;
		L_27 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_26, _stringLiteral87E6319336195D789899F4791CCD5F2437BCC0B0, NULL);
		if (L_27)
		{
			goto IL_01a4;
		}
	}
	{
		goto IL_01cc;
	}

IL_0119:
	{
		String_t* L_28 = V_1;
		bool L_29;
		L_29 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_28, _stringLiteral6C9DED8087C891AE33ACFFCE806DBFF63795F56F, NULL);
		if (L_29)
		{
			goto IL_01b8;
		}
	}
	{
		goto IL_01cc;
	}

IL_012e:
	{
		// instance.mode = reader.Read<UnityEngine.ParticleSystemCurveMode>();
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_30 = ___reader0;
		NullCheck(L_30);
		int32_t L_31;
		L_31 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisParticleSystemCurveMode_t8BE38B5D6B050709BAE31B5556CFC3DA69FC8405_m066E552CFA7510B509D2175EB72B2402EC615596_RuntimeMethod_var, L_30);
		MinMaxCurve_set_mode_m6870C4CA0FE7AF1029F45040B827C9F0A6A80A86((&V_0), L_31, NULL);
		// break;
		goto IL_01d2;
	}

IL_0140:
	{
		// instance.curveMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_32 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_33 = ((ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_32);
		float L_34;
		L_34 = GenericVirtualFuncInvoker1< float, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mA86928BC888E342D2C2644535E3399952F5077ED_RuntimeMethod_var, L_32, L_33);
		MinMaxCurve_set_curveMultiplier_m9FCF7F21AECE399ACD9FEB9ADEEBD93FD12DDABC((&V_0), L_34, NULL);
		// break;
		goto IL_01d2;
	}

IL_0154:
	{
		// instance.curveMax = reader.Read<UnityEngine.AnimationCurve>(ES3Type_AnimationCurve.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_35 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_36 = ((ES3Type_AnimationCurve_tF623128FF51FC3C48A6749619C4915CBE2995CA4_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_AnimationCurve_tF623128FF51FC3C48A6749619C4915CBE2995CA4_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_35);
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_37;
		L_37 = GenericVirtualFuncInvoker1< AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354*, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisAnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_m10F5F132336385185365E73EF668D8D369D3A4A1_RuntimeMethod_var, L_35, L_36);
		MinMaxCurve_set_curveMax_m39B9E8AE4E62E874DA99AA7108C2C47C6CA333DF((&V_0), L_37, NULL);
		// break;
		goto IL_01d2;
	}

IL_0168:
	{
		// instance.curveMin = reader.Read<UnityEngine.AnimationCurve>(ES3Type_AnimationCurve.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_38 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_39 = ((ES3Type_AnimationCurve_tF623128FF51FC3C48A6749619C4915CBE2995CA4_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_AnimationCurve_tF623128FF51FC3C48A6749619C4915CBE2995CA4_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_38);
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_40;
		L_40 = GenericVirtualFuncInvoker1< AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354*, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisAnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_m10F5F132336385185365E73EF668D8D369D3A4A1_RuntimeMethod_var, L_38, L_39);
		MinMaxCurve_set_curveMin_m17ADE22B882B75CBE87836C85C477A05122D9E75((&V_0), L_40, NULL);
		// break;
		goto IL_01d2;
	}

IL_017c:
	{
		// instance.constantMax = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_41 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_42 = ((ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_41);
		float L_43;
		L_43 = GenericVirtualFuncInvoker1< float, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mA86928BC888E342D2C2644535E3399952F5077ED_RuntimeMethod_var, L_41, L_42);
		MinMaxCurve_set_constantMax_mDB7B011E5B1EA76429B2A1FFDE6C06E82D290DC1((&V_0), L_43, NULL);
		// break;
		goto IL_01d2;
	}

IL_0190:
	{
		// instance.constantMin = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_44 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_45 = ((ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_44);
		float L_46;
		L_46 = GenericVirtualFuncInvoker1< float, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mA86928BC888E342D2C2644535E3399952F5077ED_RuntimeMethod_var, L_44, L_45);
		MinMaxCurve_set_constantMin_mBF7CF2A9F167AD06C327EE6EA37BA427E1CE548C((&V_0), L_46, NULL);
		// break;
		goto IL_01d2;
	}

IL_01a4:
	{
		// instance.constant = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_47 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_48 = ((ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_47);
		float L_49;
		L_49 = GenericVirtualFuncInvoker1< float, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mA86928BC888E342D2C2644535E3399952F5077ED_RuntimeMethod_var, L_47, L_48);
		MinMaxCurve_set_constant_mB6E4F22F67D3ED641FEBB387351F17451BB6A897((&V_0), L_49, NULL);
		// break;
		goto IL_01d2;
	}

IL_01b8:
	{
		// instance.curve = reader.Read<UnityEngine.AnimationCurve>(ES3Type_AnimationCurve.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_50 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_51 = ((ES3Type_AnimationCurve_tF623128FF51FC3C48A6749619C4915CBE2995CA4_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_AnimationCurve_tF623128FF51FC3C48A6749619C4915CBE2995CA4_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_50);
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_52;
		L_52 = GenericVirtualFuncInvoker1< AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354*, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisAnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_m10F5F132336385185365E73EF668D8D369D3A4A1_RuntimeMethod_var, L_50, L_51);
		MinMaxCurve_set_curve_mC745A6526FBF122F96DA597997DFAB9D7D2529BF((&V_0), L_52, NULL);
		// break;
		goto IL_01d2;
	}

IL_01cc:
	{
		// reader.Skip();
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_53 = ___reader0;
		NullCheck(L_53);
		VirtualActionInvoker0::Invoke(41 /* System.Void ES3Reader::Skip() */, L_53);
	}

IL_01d2:
	{
		// while((propertyName = reader.ReadPropertyName()) != null)
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_54 = ___reader0;
		NullCheck(L_54);
		String_t* L_55;
		L_55 = VirtualFuncInvoker0< String_t* >::Invoke(21 /* System.String ES3Reader::ReadPropertyName() */, L_54);
		String_t* L_56 = L_55;
		V_1 = L_56;
		if (L_56)
		{
			goto IL_000c;
		}
	}
	{
		// }
		return;
	}
}
// System.Void ES3Types.ES3Type_MinMaxCurve::ReadInto<UnityEngine.ParticleSystem/TriggerModule>(ES3Reader,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ES3Type_MinMaxCurve_ReadInto_TisTriggerModule_tDEE844919206259DA831ADCA3B1B2D915CB767B1_m693D8B780804870B0B81AF800FC82FBFF05D827B_gshared (ES3Type_MinMaxCurve_t1C147718750ACBECE5D2B7F545D2A434A3C5409B* __this, ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* ___reader0, RuntimeObject* ___obj1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisAnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_m10F5F132336385185365E73EF668D8D369D3A4A1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisParticleSystemCurveMode_t8BE38B5D6B050709BAE31B5556CFC3DA69FC8405_m066E552CFA7510B509D2175EB72B2402EC615596_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mA86928BC888E342D2C2644535E3399952F5077ED_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_AnimationCurve_tF623128FF51FC3C48A6749619C4915CBE2995CA4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral227C22F51E4B6583CFC54387461605DDBBB00D14);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral27906925D50A15B990B586241F08C8ED14226340);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral36587A0761A180514C267B50EA888F89871F71DF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6C9DED8087C891AE33ACFFCE806DBFF63795F56F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral87E6319336195D789899F4791CCD5F2437BCC0B0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAF248E82BE9EBA1ADBF067429FAEE5A5B6E05A74);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB5831A880405F69C8EF7F43534BF4D880F2B9A12);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD4A11128F810D574390DA344F324014E964D1876);
		s_Il2CppMethodInitialized = true;
	}
	MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	uint32_t V_2 = 0;
	{
		// var instance = (UnityEngine.ParticleSystem.MinMaxCurve)obj;
		RuntimeObject* L_0 = ___obj1;
		V_0 = ((*(MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23*)((MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23*)(MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23*)UnBox(L_0, MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_il2cpp_TypeInfo_var))));
		goto IL_01d2;
	}

IL_000c:
	{
		String_t* L_1 = V_1;
		uint32_t L_2;
		L_2 = U3CPrivateImplementationDetailsU3E_ComputeStringHash_m6EA1F233618497AEFF8902A5EDFA24C74E2F2876(L_1, NULL);
		V_2 = L_2;
		uint32_t L_3 = V_2;
		if ((!(((uint32_t)L_3) <= ((uint32_t)((int32_t)-725866558)))))
		{
			goto IL_0053;
		}
	}
	{
		uint32_t L_4 = V_2;
		if ((!(((uint32_t)L_4) <= ((uint32_t)((int32_t)740975083)))))
		{
			goto IL_003b;
		}
	}
	{
		uint32_t L_5 = V_2;
		if ((((int32_t)L_5) == ((int32_t)((int32_t)110225957))))
		{
			goto IL_0104;
		}
	}
	{
		uint32_t L_6 = V_2;
		if ((((int32_t)L_6) == ((int32_t)((int32_t)740975083))))
		{
			goto IL_009b;
		}
	}
	{
		goto IL_01cc;
	}

IL_003b:
	{
		uint32_t L_7 = V_2;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)-1724381676))))
		{
			goto IL_0119;
		}
	}
	{
		uint32_t L_8 = V_2;
		if ((((int32_t)L_8) == ((int32_t)((int32_t)-725866558))))
		{
			goto IL_00b0;
		}
	}
	{
		goto IL_01cc;
	}

IL_0053:
	{
		uint32_t L_9 = V_2;
		if ((!(((uint32_t)L_9) <= ((uint32_t)((int32_t)-559473464)))))
		{
			goto IL_0073;
		}
	}
	{
		uint32_t L_10 = V_2;
		if ((((int32_t)L_10) == ((int32_t)((int32_t)-581632105))))
		{
			goto IL_00ef;
		}
	}
	{
		uint32_t L_11 = V_2;
		if ((((int32_t)L_11) == ((int32_t)((int32_t)-559473464))))
		{
			goto IL_00c5;
		}
	}
	{
		goto IL_01cc;
	}

IL_0073:
	{
		uint32_t L_12 = V_2;
		if ((((int32_t)L_12) == ((int32_t)((int32_t)-345465511))))
		{
			goto IL_00da;
		}
	}
	{
		uint32_t L_13 = V_2;
		if ((!(((uint32_t)L_13) == ((uint32_t)((int32_t)-328277998)))))
		{
			goto IL_01cc;
		}
	}
	{
		String_t* L_14 = V_1;
		bool L_15;
		L_15 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_14, _stringLiteralAF248E82BE9EBA1ADBF067429FAEE5A5B6E05A74, NULL);
		if (L_15)
		{
			goto IL_012e;
		}
	}
	{
		goto IL_01cc;
	}

IL_009b:
	{
		String_t* L_16 = V_1;
		bool L_17;
		L_17 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_16, _stringLiteral227C22F51E4B6583CFC54387461605DDBBB00D14, NULL);
		if (L_17)
		{
			goto IL_0140;
		}
	}
	{
		goto IL_01cc;
	}

IL_00b0:
	{
		String_t* L_18 = V_1;
		bool L_19;
		L_19 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_18, _stringLiteral27906925D50A15B990B586241F08C8ED14226340, NULL);
		if (L_19)
		{
			goto IL_0154;
		}
	}
	{
		goto IL_01cc;
	}

IL_00c5:
	{
		String_t* L_20 = V_1;
		bool L_21;
		L_21 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_20, _stringLiteralD4A11128F810D574390DA344F324014E964D1876, NULL);
		if (L_21)
		{
			goto IL_0168;
		}
	}
	{
		goto IL_01cc;
	}

IL_00da:
	{
		String_t* L_22 = V_1;
		bool L_23;
		L_23 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_22, _stringLiteralB5831A880405F69C8EF7F43534BF4D880F2B9A12, NULL);
		if (L_23)
		{
			goto IL_017c;
		}
	}
	{
		goto IL_01cc;
	}

IL_00ef:
	{
		String_t* L_24 = V_1;
		bool L_25;
		L_25 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_24, _stringLiteral36587A0761A180514C267B50EA888F89871F71DF, NULL);
		if (L_25)
		{
			goto IL_0190;
		}
	}
	{
		goto IL_01cc;
	}

IL_0104:
	{
		String_t* L_26 = V_1;
		bool L_27;
		L_27 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_26, _stringLiteral87E6319336195D789899F4791CCD5F2437BCC0B0, NULL);
		if (L_27)
		{
			goto IL_01a4;
		}
	}
	{
		goto IL_01cc;
	}

IL_0119:
	{
		String_t* L_28 = V_1;
		bool L_29;
		L_29 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_28, _stringLiteral6C9DED8087C891AE33ACFFCE806DBFF63795F56F, NULL);
		if (L_29)
		{
			goto IL_01b8;
		}
	}
	{
		goto IL_01cc;
	}

IL_012e:
	{
		// instance.mode = reader.Read<UnityEngine.ParticleSystemCurveMode>();
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_30 = ___reader0;
		NullCheck(L_30);
		int32_t L_31;
		L_31 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisParticleSystemCurveMode_t8BE38B5D6B050709BAE31B5556CFC3DA69FC8405_m066E552CFA7510B509D2175EB72B2402EC615596_RuntimeMethod_var, L_30);
		MinMaxCurve_set_mode_m6870C4CA0FE7AF1029F45040B827C9F0A6A80A86((&V_0), L_31, NULL);
		// break;
		goto IL_01d2;
	}

IL_0140:
	{
		// instance.curveMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_32 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_33 = ((ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_32);
		float L_34;
		L_34 = GenericVirtualFuncInvoker1< float, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mA86928BC888E342D2C2644535E3399952F5077ED_RuntimeMethod_var, L_32, L_33);
		MinMaxCurve_set_curveMultiplier_m9FCF7F21AECE399ACD9FEB9ADEEBD93FD12DDABC((&V_0), L_34, NULL);
		// break;
		goto IL_01d2;
	}

IL_0154:
	{
		// instance.curveMax = reader.Read<UnityEngine.AnimationCurve>(ES3Type_AnimationCurve.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_35 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_36 = ((ES3Type_AnimationCurve_tF623128FF51FC3C48A6749619C4915CBE2995CA4_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_AnimationCurve_tF623128FF51FC3C48A6749619C4915CBE2995CA4_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_35);
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_37;
		L_37 = GenericVirtualFuncInvoker1< AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354*, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisAnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_m10F5F132336385185365E73EF668D8D369D3A4A1_RuntimeMethod_var, L_35, L_36);
		MinMaxCurve_set_curveMax_m39B9E8AE4E62E874DA99AA7108C2C47C6CA333DF((&V_0), L_37, NULL);
		// break;
		goto IL_01d2;
	}

IL_0168:
	{
		// instance.curveMin = reader.Read<UnityEngine.AnimationCurve>(ES3Type_AnimationCurve.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_38 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_39 = ((ES3Type_AnimationCurve_tF623128FF51FC3C48A6749619C4915CBE2995CA4_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_AnimationCurve_tF623128FF51FC3C48A6749619C4915CBE2995CA4_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_38);
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_40;
		L_40 = GenericVirtualFuncInvoker1< AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354*, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisAnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_m10F5F132336385185365E73EF668D8D369D3A4A1_RuntimeMethod_var, L_38, L_39);
		MinMaxCurve_set_curveMin_m17ADE22B882B75CBE87836C85C477A05122D9E75((&V_0), L_40, NULL);
		// break;
		goto IL_01d2;
	}

IL_017c:
	{
		// instance.constantMax = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_41 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_42 = ((ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_41);
		float L_43;
		L_43 = GenericVirtualFuncInvoker1< float, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mA86928BC888E342D2C2644535E3399952F5077ED_RuntimeMethod_var, L_41, L_42);
		MinMaxCurve_set_constantMax_mDB7B011E5B1EA76429B2A1FFDE6C06E82D290DC1((&V_0), L_43, NULL);
		// break;
		goto IL_01d2;
	}

IL_0190:
	{
		// instance.constantMin = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_44 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_45 = ((ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_44);
		float L_46;
		L_46 = GenericVirtualFuncInvoker1< float, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mA86928BC888E342D2C2644535E3399952F5077ED_RuntimeMethod_var, L_44, L_45);
		MinMaxCurve_set_constantMin_mBF7CF2A9F167AD06C327EE6EA37BA427E1CE548C((&V_0), L_46, NULL);
		// break;
		goto IL_01d2;
	}

IL_01a4:
	{
		// instance.constant = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_47 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_48 = ((ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_47);
		float L_49;
		L_49 = GenericVirtualFuncInvoker1< float, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mA86928BC888E342D2C2644535E3399952F5077ED_RuntimeMethod_var, L_47, L_48);
		MinMaxCurve_set_constant_mB6E4F22F67D3ED641FEBB387351F17451BB6A897((&V_0), L_49, NULL);
		// break;
		goto IL_01d2;
	}

IL_01b8:
	{
		// instance.curve = reader.Read<UnityEngine.AnimationCurve>(ES3Type_AnimationCurve.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_50 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_51 = ((ES3Type_AnimationCurve_tF623128FF51FC3C48A6749619C4915CBE2995CA4_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_AnimationCurve_tF623128FF51FC3C48A6749619C4915CBE2995CA4_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_50);
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_52;
		L_52 = GenericVirtualFuncInvoker1< AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354*, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisAnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_m10F5F132336385185365E73EF668D8D369D3A4A1_RuntimeMethod_var, L_50, L_51);
		MinMaxCurve_set_curve_mC745A6526FBF122F96DA597997DFAB9D7D2529BF((&V_0), L_52, NULL);
		// break;
		goto IL_01d2;
	}

IL_01cc:
	{
		// reader.Skip();
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_53 = ___reader0;
		NullCheck(L_53);
		VirtualActionInvoker0::Invoke(41 /* System.Void ES3Reader::Skip() */, L_53);
	}

IL_01d2:
	{
		// while((propertyName = reader.ReadPropertyName()) != null)
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_54 = ___reader0;
		NullCheck(L_54);
		String_t* L_55;
		L_55 = VirtualFuncInvoker0< String_t* >::Invoke(21 /* System.String ES3Reader::ReadPropertyName() */, L_54);
		String_t* L_56 = L_55;
		V_1 = L_56;
		if (L_56)
		{
			goto IL_000c;
		}
	}
	{
		// }
		return;
	}
}
// System.Void ES3Types.ES3Type_MinMaxCurve::ReadInto<UnityEngine.ParticleSystem/VelocityOverLifetimeModule>(ES3Reader,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ES3Type_MinMaxCurve_ReadInto_TisVelocityOverLifetimeModule_tB4A3291E3D2E850257EE3F8344AAEDA06D7FCE56_mBC86D7D83793CFD27EC55B118760587AD792BAE7_gshared (ES3Type_MinMaxCurve_t1C147718750ACBECE5D2B7F545D2A434A3C5409B* __this, ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* ___reader0, RuntimeObject* ___obj1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisAnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_m10F5F132336385185365E73EF668D8D369D3A4A1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisParticleSystemCurveMode_t8BE38B5D6B050709BAE31B5556CFC3DA69FC8405_m066E552CFA7510B509D2175EB72B2402EC615596_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mA86928BC888E342D2C2644535E3399952F5077ED_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_AnimationCurve_tF623128FF51FC3C48A6749619C4915CBE2995CA4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral227C22F51E4B6583CFC54387461605DDBBB00D14);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral27906925D50A15B990B586241F08C8ED14226340);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral36587A0761A180514C267B50EA888F89871F71DF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6C9DED8087C891AE33ACFFCE806DBFF63795F56F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral87E6319336195D789899F4791CCD5F2437BCC0B0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAF248E82BE9EBA1ADBF067429FAEE5A5B6E05A74);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB5831A880405F69C8EF7F43534BF4D880F2B9A12);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD4A11128F810D574390DA344F324014E964D1876);
		s_Il2CppMethodInitialized = true;
	}
	MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	uint32_t V_2 = 0;
	{
		// var instance = (UnityEngine.ParticleSystem.MinMaxCurve)obj;
		RuntimeObject* L_0 = ___obj1;
		V_0 = ((*(MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23*)((MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23*)(MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23*)UnBox(L_0, MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_il2cpp_TypeInfo_var))));
		goto IL_01d2;
	}

IL_000c:
	{
		String_t* L_1 = V_1;
		uint32_t L_2;
		L_2 = U3CPrivateImplementationDetailsU3E_ComputeStringHash_m6EA1F233618497AEFF8902A5EDFA24C74E2F2876(L_1, NULL);
		V_2 = L_2;
		uint32_t L_3 = V_2;
		if ((!(((uint32_t)L_3) <= ((uint32_t)((int32_t)-725866558)))))
		{
			goto IL_0053;
		}
	}
	{
		uint32_t L_4 = V_2;
		if ((!(((uint32_t)L_4) <= ((uint32_t)((int32_t)740975083)))))
		{
			goto IL_003b;
		}
	}
	{
		uint32_t L_5 = V_2;
		if ((((int32_t)L_5) == ((int32_t)((int32_t)110225957))))
		{
			goto IL_0104;
		}
	}
	{
		uint32_t L_6 = V_2;
		if ((((int32_t)L_6) == ((int32_t)((int32_t)740975083))))
		{
			goto IL_009b;
		}
	}
	{
		goto IL_01cc;
	}

IL_003b:
	{
		uint32_t L_7 = V_2;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)-1724381676))))
		{
			goto IL_0119;
		}
	}
	{
		uint32_t L_8 = V_2;
		if ((((int32_t)L_8) == ((int32_t)((int32_t)-725866558))))
		{
			goto IL_00b0;
		}
	}
	{
		goto IL_01cc;
	}

IL_0053:
	{
		uint32_t L_9 = V_2;
		if ((!(((uint32_t)L_9) <= ((uint32_t)((int32_t)-559473464)))))
		{
			goto IL_0073;
		}
	}
	{
		uint32_t L_10 = V_2;
		if ((((int32_t)L_10) == ((int32_t)((int32_t)-581632105))))
		{
			goto IL_00ef;
		}
	}
	{
		uint32_t L_11 = V_2;
		if ((((int32_t)L_11) == ((int32_t)((int32_t)-559473464))))
		{
			goto IL_00c5;
		}
	}
	{
		goto IL_01cc;
	}

IL_0073:
	{
		uint32_t L_12 = V_2;
		if ((((int32_t)L_12) == ((int32_t)((int32_t)-345465511))))
		{
			goto IL_00da;
		}
	}
	{
		uint32_t L_13 = V_2;
		if ((!(((uint32_t)L_13) == ((uint32_t)((int32_t)-328277998)))))
		{
			goto IL_01cc;
		}
	}
	{
		String_t* L_14 = V_1;
		bool L_15;
		L_15 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_14, _stringLiteralAF248E82BE9EBA1ADBF067429FAEE5A5B6E05A74, NULL);
		if (L_15)
		{
			goto IL_012e;
		}
	}
	{
		goto IL_01cc;
	}

IL_009b:
	{
		String_t* L_16 = V_1;
		bool L_17;
		L_17 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_16, _stringLiteral227C22F51E4B6583CFC54387461605DDBBB00D14, NULL);
		if (L_17)
		{
			goto IL_0140;
		}
	}
	{
		goto IL_01cc;
	}

IL_00b0:
	{
		String_t* L_18 = V_1;
		bool L_19;
		L_19 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_18, _stringLiteral27906925D50A15B990B586241F08C8ED14226340, NULL);
		if (L_19)
		{
			goto IL_0154;
		}
	}
	{
		goto IL_01cc;
	}

IL_00c5:
	{
		String_t* L_20 = V_1;
		bool L_21;
		L_21 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_20, _stringLiteralD4A11128F810D574390DA344F324014E964D1876, NULL);
		if (L_21)
		{
			goto IL_0168;
		}
	}
	{
		goto IL_01cc;
	}

IL_00da:
	{
		String_t* L_22 = V_1;
		bool L_23;
		L_23 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_22, _stringLiteralB5831A880405F69C8EF7F43534BF4D880F2B9A12, NULL);
		if (L_23)
		{
			goto IL_017c;
		}
	}
	{
		goto IL_01cc;
	}

IL_00ef:
	{
		String_t* L_24 = V_1;
		bool L_25;
		L_25 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_24, _stringLiteral36587A0761A180514C267B50EA888F89871F71DF, NULL);
		if (L_25)
		{
			goto IL_0190;
		}
	}
	{
		goto IL_01cc;
	}

IL_0104:
	{
		String_t* L_26 = V_1;
		bool L_27;
		L_27 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_26, _stringLiteral87E6319336195D789899F4791CCD5F2437BCC0B0, NULL);
		if (L_27)
		{
			goto IL_01a4;
		}
	}
	{
		goto IL_01cc;
	}

IL_0119:
	{
		String_t* L_28 = V_1;
		bool L_29;
		L_29 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_28, _stringLiteral6C9DED8087C891AE33ACFFCE806DBFF63795F56F, NULL);
		if (L_29)
		{
			goto IL_01b8;
		}
	}
	{
		goto IL_01cc;
	}

IL_012e:
	{
		// instance.mode = reader.Read<UnityEngine.ParticleSystemCurveMode>();
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_30 = ___reader0;
		NullCheck(L_30);
		int32_t L_31;
		L_31 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisParticleSystemCurveMode_t8BE38B5D6B050709BAE31B5556CFC3DA69FC8405_m066E552CFA7510B509D2175EB72B2402EC615596_RuntimeMethod_var, L_30);
		MinMaxCurve_set_mode_m6870C4CA0FE7AF1029F45040B827C9F0A6A80A86((&V_0), L_31, NULL);
		// break;
		goto IL_01d2;
	}

IL_0140:
	{
		// instance.curveMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_32 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_33 = ((ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_32);
		float L_34;
		L_34 = GenericVirtualFuncInvoker1< float, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mA86928BC888E342D2C2644535E3399952F5077ED_RuntimeMethod_var, L_32, L_33);
		MinMaxCurve_set_curveMultiplier_m9FCF7F21AECE399ACD9FEB9ADEEBD93FD12DDABC((&V_0), L_34, NULL);
		// break;
		goto IL_01d2;
	}

IL_0154:
	{
		// instance.curveMax = reader.Read<UnityEngine.AnimationCurve>(ES3Type_AnimationCurve.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_35 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_36 = ((ES3Type_AnimationCurve_tF623128FF51FC3C48A6749619C4915CBE2995CA4_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_AnimationCurve_tF623128FF51FC3C48A6749619C4915CBE2995CA4_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_35);
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_37;
		L_37 = GenericVirtualFuncInvoker1< AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354*, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisAnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_m10F5F132336385185365E73EF668D8D369D3A4A1_RuntimeMethod_var, L_35, L_36);
		MinMaxCurve_set_curveMax_m39B9E8AE4E62E874DA99AA7108C2C47C6CA333DF((&V_0), L_37, NULL);
		// break;
		goto IL_01d2;
	}

IL_0168:
	{
		// instance.curveMin = reader.Read<UnityEngine.AnimationCurve>(ES3Type_AnimationCurve.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_38 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_39 = ((ES3Type_AnimationCurve_tF623128FF51FC3C48A6749619C4915CBE2995CA4_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_AnimationCurve_tF623128FF51FC3C48A6749619C4915CBE2995CA4_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_38);
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_40;
		L_40 = GenericVirtualFuncInvoker1< AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354*, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisAnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_m10F5F132336385185365E73EF668D8D369D3A4A1_RuntimeMethod_var, L_38, L_39);
		MinMaxCurve_set_curveMin_m17ADE22B882B75CBE87836C85C477A05122D9E75((&V_0), L_40, NULL);
		// break;
		goto IL_01d2;
	}

IL_017c:
	{
		// instance.constantMax = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_41 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_42 = ((ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_41);
		float L_43;
		L_43 = GenericVirtualFuncInvoker1< float, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mA86928BC888E342D2C2644535E3399952F5077ED_RuntimeMethod_var, L_41, L_42);
		MinMaxCurve_set_constantMax_mDB7B011E5B1EA76429B2A1FFDE6C06E82D290DC1((&V_0), L_43, NULL);
		// break;
		goto IL_01d2;
	}

IL_0190:
	{
		// instance.constantMin = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_44 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_45 = ((ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_44);
		float L_46;
		L_46 = GenericVirtualFuncInvoker1< float, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mA86928BC888E342D2C2644535E3399952F5077ED_RuntimeMethod_var, L_44, L_45);
		MinMaxCurve_set_constantMin_mBF7CF2A9F167AD06C327EE6EA37BA427E1CE548C((&V_0), L_46, NULL);
		// break;
		goto IL_01d2;
	}

IL_01a4:
	{
		// instance.constant = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_47 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_48 = ((ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_47);
		float L_49;
		L_49 = GenericVirtualFuncInvoker1< float, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mA86928BC888E342D2C2644535E3399952F5077ED_RuntimeMethod_var, L_47, L_48);
		MinMaxCurve_set_constant_mB6E4F22F67D3ED641FEBB387351F17451BB6A897((&V_0), L_49, NULL);
		// break;
		goto IL_01d2;
	}

IL_01b8:
	{
		// instance.curve = reader.Read<UnityEngine.AnimationCurve>(ES3Type_AnimationCurve.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_50 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_51 = ((ES3Type_AnimationCurve_tF623128FF51FC3C48A6749619C4915CBE2995CA4_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_AnimationCurve_tF623128FF51FC3C48A6749619C4915CBE2995CA4_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_50);
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_52;
		L_52 = GenericVirtualFuncInvoker1< AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354*, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisAnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_m10F5F132336385185365E73EF668D8D369D3A4A1_RuntimeMethod_var, L_50, L_51);
		MinMaxCurve_set_curve_mC745A6526FBF122F96DA597997DFAB9D7D2529BF((&V_0), L_52, NULL);
		// break;
		goto IL_01d2;
	}

IL_01cc:
	{
		// reader.Skip();
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_53 = ___reader0;
		NullCheck(L_53);
		VirtualActionInvoker0::Invoke(41 /* System.Void ES3Reader::Skip() */, L_53);
	}

IL_01d2:
	{
		// while((propertyName = reader.ReadPropertyName()) != null)
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_54 = ___reader0;
		NullCheck(L_54);
		String_t* L_55;
		L_55 = VirtualFuncInvoker0< String_t* >::Invoke(21 /* System.String ES3Reader::ReadPropertyName() */, L_54);
		String_t* L_56 = L_55;
		V_1 = L_56;
		if (L_56)
		{
			goto IL_000c;
		}
	}
	{
		// }
		return;
	}
}
// System.Object ES3Types.ES3Type_MinMaxGradient::Read<System.Boolean>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_MinMaxGradient_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m528CE46A2E7C1D405F738A20CF2796C74241BB95_gshared (ES3Type_MinMaxGradient_tDE2B65F0D3CF28657A6F04D48DA23B56D4F30CD9* __this, ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisColor_tD001788D726C3A7F1379BEED0260B9591F440C1F_m74315D96C24FBB27ED6BD82D4A055A7C3F63CF6D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisGradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E_mF96940E05808C12C825D9208C3A2156E5E7A51CD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisParticleSystemGradientMode_t5525A27D816AC28297038E5A98856B29095C4C1A_mDD6D024B2606F58AEBD67AEDBB6C628A585CE28E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_Color_t673DF1A1D899E95FF5E687BDC6EE2D5A8A98D958_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_Gradient_tCEF49FD7276F763D540521D30F768BB3C8A5C669_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3C5CBA73DE477A987F6CACAA771042311F4D7450);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral778102C3E486149200F26500543D0E817D018B30);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral852E085EDE387EE50CF0089DAF2F7960EF50B09A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral901354A635771DDD959835AF907BCC0E66B8C186);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral99B5B7F51660385511EC8AC7334ABBB898CFC2BF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAF248E82BE9EBA1ADBF067429FAEE5A5B6E05A74);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDD0F04E0A3F0BA1F904E0E27720F367F4228C69D);
		s_Il2CppMethodInitialized = true;
	}
	MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69 V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	uint32_t V_2 = 0;
	{
		// var instance = new UnityEngine.ParticleSystem.MinMaxGradient();
		il2cpp_codegen_initobj((&V_0), sizeof(MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69));
		goto IL_017a;
	}

IL_000d:
	{
		String_t* L_0 = V_1;
		uint32_t L_1;
		L_1 = U3CPrivateImplementationDetailsU3E_ComputeStringHash_m6EA1F233618497AEFF8902A5EDFA24C74E2F2876(L_0, NULL);
		V_2 = L_1;
		uint32_t L_2 = V_2;
		if ((!(((uint32_t)L_2) <= ((uint32_t)((int32_t)1650383577)))))
		{
			goto IL_003c;
		}
	}
	{
		uint32_t L_3 = V_2;
		if ((((int32_t)L_3) == ((int32_t)((int32_t)1031692888))))
		{
			goto IL_00c9;
		}
	}
	{
		uint32_t L_4 = V_2;
		if ((((int32_t)L_4) == ((int32_t)((int32_t)1414216983))))
		{
			goto IL_0093;
		}
	}
	{
		uint32_t L_5 = V_2;
		if ((((int32_t)L_5) == ((int32_t)((int32_t)1650383577))))
		{
			goto IL_0081;
		}
	}
	{
		goto IL_0174;
	}

IL_003c:
	{
		uint32_t L_6 = V_2;
		if ((!(((uint32_t)L_6) <= ((uint32_t)((int32_t)-630909162)))))
		{
			goto IL_005c;
		}
	}
	{
		uint32_t L_7 = V_2;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)-1661947227))))
		{
			goto IL_00db;
		}
	}
	{
		uint32_t L_8 = V_2;
		if ((((int32_t)L_8) == ((int32_t)((int32_t)-630909162))))
		{
			goto IL_00a5;
		}
	}
	{
		goto IL_0174;
	}

IL_005c:
	{
		uint32_t L_9 = V_2;
		if ((((int32_t)L_9) == ((int32_t)((int32_t)-330191948))))
		{
			goto IL_00b7;
		}
	}
	{
		uint32_t L_10 = V_2;
		if ((!(((uint32_t)L_10) == ((uint32_t)((int32_t)-328277998)))))
		{
			goto IL_0174;
		}
	}
	{
		String_t* L_11 = V_1;
		bool L_12;
		L_12 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_11, _stringLiteralAF248E82BE9EBA1ADBF067429FAEE5A5B6E05A74, NULL);
		if (L_12)
		{
			goto IL_00ed;
		}
	}
	{
		goto IL_0174;
	}

IL_0081:
	{
		String_t* L_13 = V_1;
		bool L_14;
		L_14 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_13, _stringLiteral3C5CBA73DE477A987F6CACAA771042311F4D7450, NULL);
		if (L_14)
		{
			goto IL_00fc;
		}
	}
	{
		goto IL_0174;
	}

IL_0093:
	{
		String_t* L_15 = V_1;
		bool L_16;
		L_16 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_15, _stringLiteral901354A635771DDD959835AF907BCC0E66B8C186, NULL);
		if (L_16)
		{
			goto IL_0110;
		}
	}
	{
		goto IL_0174;
	}

IL_00a5:
	{
		String_t* L_17 = V_1;
		bool L_18;
		L_18 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_17, _stringLiteral99B5B7F51660385511EC8AC7334ABBB898CFC2BF, NULL);
		if (L_18)
		{
			goto IL_0124;
		}
	}
	{
		goto IL_0174;
	}

IL_00b7:
	{
		String_t* L_19 = V_1;
		bool L_20;
		L_20 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_19, _stringLiteral852E085EDE387EE50CF0089DAF2F7960EF50B09A, NULL);
		if (L_20)
		{
			goto IL_0138;
		}
	}
	{
		goto IL_0174;
	}

IL_00c9:
	{
		String_t* L_21 = V_1;
		bool L_22;
		L_22 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_21, _stringLiteralDD0F04E0A3F0BA1F904E0E27720F367F4228C69D, NULL);
		if (L_22)
		{
			goto IL_014c;
		}
	}
	{
		goto IL_0174;
	}

IL_00db:
	{
		String_t* L_23 = V_1;
		bool L_24;
		L_24 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_23, _stringLiteral778102C3E486149200F26500543D0E817D018B30, NULL);
		if (L_24)
		{
			goto IL_0160;
		}
	}
	{
		goto IL_0174;
	}

IL_00ed:
	{
		// instance.mode = reader.Read<UnityEngine.ParticleSystemGradientMode>();
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_25 = ___reader0;
		NullCheck(L_25);
		int32_t L_26;
		L_26 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisParticleSystemGradientMode_t5525A27D816AC28297038E5A98856B29095C4C1A_mDD6D024B2606F58AEBD67AEDBB6C628A585CE28E_RuntimeMethod_var, L_25);
		MinMaxGradient_set_mode_mCD15C79CD57AD7D400D7B171E10BC5E24F64295E((&V_0), L_26, NULL);
		// break;
		goto IL_017a;
	}

IL_00fc:
	{
		// instance.gradientMax = reader.Read<UnityEngine.Gradient>(ES3Type_Gradient.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_27 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_28 = ((ES3Type_Gradient_tCEF49FD7276F763D540521D30F768BB3C8A5C669_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Gradient_tCEF49FD7276F763D540521D30F768BB3C8A5C669_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_27);
		Gradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E* L_29;
		L_29 = GenericVirtualFuncInvoker1< Gradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E*, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisGradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E_mF96940E05808C12C825D9208C3A2156E5E7A51CD_RuntimeMethod_var, L_27, L_28);
		MinMaxGradient_set_gradientMax_mC432C0AEA15FE74D6E6E6E2058BE039361D57ABB((&V_0), L_29, NULL);
		// break;
		goto IL_017a;
	}

IL_0110:
	{
		// instance.gradientMin = reader.Read<UnityEngine.Gradient>(ES3Type_Gradient.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_30 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_31 = ((ES3Type_Gradient_tCEF49FD7276F763D540521D30F768BB3C8A5C669_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Gradient_tCEF49FD7276F763D540521D30F768BB3C8A5C669_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_30);
		Gradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E* L_32;
		L_32 = GenericVirtualFuncInvoker1< Gradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E*, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisGradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E_mF96940E05808C12C825D9208C3A2156E5E7A51CD_RuntimeMethod_var, L_30, L_31);
		MinMaxGradient_set_gradientMin_m4152642243D268E1A95A7FC0B58E8F179A933609((&V_0), L_32, NULL);
		// break;
		goto IL_017a;
	}

IL_0124:
	{
		// instance.colorMax = reader.Read<UnityEngine.Color>(ES3Type_Color.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_33 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_34 = ((ES3Type_Color_t673DF1A1D899E95FF5E687BDC6EE2D5A8A98D958_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Color_t673DF1A1D899E95FF5E687BDC6EE2D5A8A98D958_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_33);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_35;
		L_35 = GenericVirtualFuncInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisColor_tD001788D726C3A7F1379BEED0260B9591F440C1F_m74315D96C24FBB27ED6BD82D4A055A7C3F63CF6D_RuntimeMethod_var, L_33, L_34);
		MinMaxGradient_set_colorMax_m28A85822E89FC80D1F5B49225DEC4ABCF86CAE33((&V_0), L_35, NULL);
		// break;
		goto IL_017a;
	}

IL_0138:
	{
		// instance.colorMin = reader.Read<UnityEngine.Color>(ES3Type_Color.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_36 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_37 = ((ES3Type_Color_t673DF1A1D899E95FF5E687BDC6EE2D5A8A98D958_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Color_t673DF1A1D899E95FF5E687BDC6EE2D5A8A98D958_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_36);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_38;
		L_38 = GenericVirtualFuncInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisColor_tD001788D726C3A7F1379BEED0260B9591F440C1F_m74315D96C24FBB27ED6BD82D4A055A7C3F63CF6D_RuntimeMethod_var, L_36, L_37);
		MinMaxGradient_set_colorMin_m7D3D987AB86FE01E7BC4AD856AAEE703F18EF1EF((&V_0), L_38, NULL);
		// break;
		goto IL_017a;
	}

IL_014c:
	{
		// instance.color = reader.Read<UnityEngine.Color>(ES3Type_Color.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_39 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_40 = ((ES3Type_Color_t673DF1A1D899E95FF5E687BDC6EE2D5A8A98D958_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Color_t673DF1A1D899E95FF5E687BDC6EE2D5A8A98D958_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_39);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_41;
		L_41 = GenericVirtualFuncInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisColor_tD001788D726C3A7F1379BEED0260B9591F440C1F_m74315D96C24FBB27ED6BD82D4A055A7C3F63CF6D_RuntimeMethod_var, L_39, L_40);
		MinMaxGradient_set_color_m0890DD6E249DE8552C04AFC4F959DD37EA05033B((&V_0), L_41, NULL);
		// break;
		goto IL_017a;
	}

IL_0160:
	{
		// instance.gradient = reader.Read<UnityEngine.Gradient>(ES3Type_Gradient.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_42 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_43 = ((ES3Type_Gradient_tCEF49FD7276F763D540521D30F768BB3C8A5C669_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Gradient_tCEF49FD7276F763D540521D30F768BB3C8A5C669_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_42);
		Gradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E* L_44;
		L_44 = GenericVirtualFuncInvoker1< Gradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E*, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisGradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E_mF96940E05808C12C825D9208C3A2156E5E7A51CD_RuntimeMethod_var, L_42, L_43);
		MinMaxGradient_set_gradient_m6AAD335DD1A2BD5C091B608C604825C32CFB825D((&V_0), L_44, NULL);
		// break;
		goto IL_017a;
	}

IL_0174:
	{
		// reader.Skip();
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_45 = ___reader0;
		NullCheck(L_45);
		VirtualActionInvoker0::Invoke(41 /* System.Void ES3Reader::Skip() */, L_45);
	}

IL_017a:
	{
		// while((propertyName = reader.ReadPropertyName()) != null)
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_46 = ___reader0;
		NullCheck(L_46);
		String_t* L_47;
		L_47 = VirtualFuncInvoker0< String_t* >::Invoke(21 /* System.String ES3Reader::ReadPropertyName() */, L_46);
		String_t* L_48 = L_47;
		V_1 = L_48;
		if (L_48)
		{
			goto IL_000d;
		}
	}
	{
		// return instance;
		MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69 L_49 = V_0;
		MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69 L_50 = L_49;
		RuntimeObject* L_51 = Box(MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69_il2cpp_TypeInfo_var, &L_50);
		return L_51;
	}
}
// System.Object ES3Types.ES3Type_MinMaxGradient::Read<UnityEngine.Bounds>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_MinMaxGradient_Read_TisBounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3_mFEE6767878A4AE1171DDFE81942D45939E0DE5E3_gshared (ES3Type_MinMaxGradient_tDE2B65F0D3CF28657A6F04D48DA23B56D4F30CD9* __this, ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisColor_tD001788D726C3A7F1379BEED0260B9591F440C1F_m74315D96C24FBB27ED6BD82D4A055A7C3F63CF6D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisGradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E_mF96940E05808C12C825D9208C3A2156E5E7A51CD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisParticleSystemGradientMode_t5525A27D816AC28297038E5A98856B29095C4C1A_mDD6D024B2606F58AEBD67AEDBB6C628A585CE28E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_Color_t673DF1A1D899E95FF5E687BDC6EE2D5A8A98D958_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_Gradient_tCEF49FD7276F763D540521D30F768BB3C8A5C669_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3C5CBA73DE477A987F6CACAA771042311F4D7450);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral778102C3E486149200F26500543D0E817D018B30);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral852E085EDE387EE50CF0089DAF2F7960EF50B09A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral901354A635771DDD959835AF907BCC0E66B8C186);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral99B5B7F51660385511EC8AC7334ABBB898CFC2BF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAF248E82BE9EBA1ADBF067429FAEE5A5B6E05A74);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDD0F04E0A3F0BA1F904E0E27720F367F4228C69D);
		s_Il2CppMethodInitialized = true;
	}
	MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69 V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	uint32_t V_2 = 0;
	{
		// var instance = new UnityEngine.ParticleSystem.MinMaxGradient();
		il2cpp_codegen_initobj((&V_0), sizeof(MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69));
		goto IL_017a;
	}

IL_000d:
	{
		String_t* L_0 = V_1;
		uint32_t L_1;
		L_1 = U3CPrivateImplementationDetailsU3E_ComputeStringHash_m6EA1F233618497AEFF8902A5EDFA24C74E2F2876(L_0, NULL);
		V_2 = L_1;
		uint32_t L_2 = V_2;
		if ((!(((uint32_t)L_2) <= ((uint32_t)((int32_t)1650383577)))))
		{
			goto IL_003c;
		}
	}
	{
		uint32_t L_3 = V_2;
		if ((((int32_t)L_3) == ((int32_t)((int32_t)1031692888))))
		{
			goto IL_00c9;
		}
	}
	{
		uint32_t L_4 = V_2;
		if ((((int32_t)L_4) == ((int32_t)((int32_t)1414216983))))
		{
			goto IL_0093;
		}
	}
	{
		uint32_t L_5 = V_2;
		if ((((int32_t)L_5) == ((int32_t)((int32_t)1650383577))))
		{
			goto IL_0081;
		}
	}
	{
		goto IL_0174;
	}

IL_003c:
	{
		uint32_t L_6 = V_2;
		if ((!(((uint32_t)L_6) <= ((uint32_t)((int32_t)-630909162)))))
		{
			goto IL_005c;
		}
	}
	{
		uint32_t L_7 = V_2;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)-1661947227))))
		{
			goto IL_00db;
		}
	}
	{
		uint32_t L_8 = V_2;
		if ((((int32_t)L_8) == ((int32_t)((int32_t)-630909162))))
		{
			goto IL_00a5;
		}
	}
	{
		goto IL_0174;
	}

IL_005c:
	{
		uint32_t L_9 = V_2;
		if ((((int32_t)L_9) == ((int32_t)((int32_t)-330191948))))
		{
			goto IL_00b7;
		}
	}
	{
		uint32_t L_10 = V_2;
		if ((!(((uint32_t)L_10) == ((uint32_t)((int32_t)-328277998)))))
		{
			goto IL_0174;
		}
	}
	{
		String_t* L_11 = V_1;
		bool L_12;
		L_12 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_11, _stringLiteralAF248E82BE9EBA1ADBF067429FAEE5A5B6E05A74, NULL);
		if (L_12)
		{
			goto IL_00ed;
		}
	}
	{
		goto IL_0174;
	}

IL_0081:
	{
		String_t* L_13 = V_1;
		bool L_14;
		L_14 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_13, _stringLiteral3C5CBA73DE477A987F6CACAA771042311F4D7450, NULL);
		if (L_14)
		{
			goto IL_00fc;
		}
	}
	{
		goto IL_0174;
	}

IL_0093:
	{
		String_t* L_15 = V_1;
		bool L_16;
		L_16 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_15, _stringLiteral901354A635771DDD959835AF907BCC0E66B8C186, NULL);
		if (L_16)
		{
			goto IL_0110;
		}
	}
	{
		goto IL_0174;
	}

IL_00a5:
	{
		String_t* L_17 = V_1;
		bool L_18;
		L_18 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_17, _stringLiteral99B5B7F51660385511EC8AC7334ABBB898CFC2BF, NULL);
		if (L_18)
		{
			goto IL_0124;
		}
	}
	{
		goto IL_0174;
	}

IL_00b7:
	{
		String_t* L_19 = V_1;
		bool L_20;
		L_20 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_19, _stringLiteral852E085EDE387EE50CF0089DAF2F7960EF50B09A, NULL);
		if (L_20)
		{
			goto IL_0138;
		}
	}
	{
		goto IL_0174;
	}

IL_00c9:
	{
		String_t* L_21 = V_1;
		bool L_22;
		L_22 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_21, _stringLiteralDD0F04E0A3F0BA1F904E0E27720F367F4228C69D, NULL);
		if (L_22)
		{
			goto IL_014c;
		}
	}
	{
		goto IL_0174;
	}

IL_00db:
	{
		String_t* L_23 = V_1;
		bool L_24;
		L_24 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_23, _stringLiteral778102C3E486149200F26500543D0E817D018B30, NULL);
		if (L_24)
		{
			goto IL_0160;
		}
	}
	{
		goto IL_0174;
	}

IL_00ed:
	{
		// instance.mode = reader.Read<UnityEngine.ParticleSystemGradientMode>();
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_25 = ___reader0;
		NullCheck(L_25);
		int32_t L_26;
		L_26 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisParticleSystemGradientMode_t5525A27D816AC28297038E5A98856B29095C4C1A_mDD6D024B2606F58AEBD67AEDBB6C628A585CE28E_RuntimeMethod_var, L_25);
		MinMaxGradient_set_mode_mCD15C79CD57AD7D400D7B171E10BC5E24F64295E((&V_0), L_26, NULL);
		// break;
		goto IL_017a;
	}

IL_00fc:
	{
		// instance.gradientMax = reader.Read<UnityEngine.Gradient>(ES3Type_Gradient.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_27 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_28 = ((ES3Type_Gradient_tCEF49FD7276F763D540521D30F768BB3C8A5C669_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Gradient_tCEF49FD7276F763D540521D30F768BB3C8A5C669_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_27);
		Gradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E* L_29;
		L_29 = GenericVirtualFuncInvoker1< Gradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E*, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisGradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E_mF96940E05808C12C825D9208C3A2156E5E7A51CD_RuntimeMethod_var, L_27, L_28);
		MinMaxGradient_set_gradientMax_mC432C0AEA15FE74D6E6E6E2058BE039361D57ABB((&V_0), L_29, NULL);
		// break;
		goto IL_017a;
	}

IL_0110:
	{
		// instance.gradientMin = reader.Read<UnityEngine.Gradient>(ES3Type_Gradient.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_30 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_31 = ((ES3Type_Gradient_tCEF49FD7276F763D540521D30F768BB3C8A5C669_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Gradient_tCEF49FD7276F763D540521D30F768BB3C8A5C669_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_30);
		Gradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E* L_32;
		L_32 = GenericVirtualFuncInvoker1< Gradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E*, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisGradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E_mF96940E05808C12C825D9208C3A2156E5E7A51CD_RuntimeMethod_var, L_30, L_31);
		MinMaxGradient_set_gradientMin_m4152642243D268E1A95A7FC0B58E8F179A933609((&V_0), L_32, NULL);
		// break;
		goto IL_017a;
	}

IL_0124:
	{
		// instance.colorMax = reader.Read<UnityEngine.Color>(ES3Type_Color.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_33 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_34 = ((ES3Type_Color_t673DF1A1D899E95FF5E687BDC6EE2D5A8A98D958_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Color_t673DF1A1D899E95FF5E687BDC6EE2D5A8A98D958_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_33);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_35;
		L_35 = GenericVirtualFuncInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisColor_tD001788D726C3A7F1379BEED0260B9591F440C1F_m74315D96C24FBB27ED6BD82D4A055A7C3F63CF6D_RuntimeMethod_var, L_33, L_34);
		MinMaxGradient_set_colorMax_m28A85822E89FC80D1F5B49225DEC4ABCF86CAE33((&V_0), L_35, NULL);
		// break;
		goto IL_017a;
	}

IL_0138:
	{
		// instance.colorMin = reader.Read<UnityEngine.Color>(ES3Type_Color.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_36 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_37 = ((ES3Type_Color_t673DF1A1D899E95FF5E687BDC6EE2D5A8A98D958_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Color_t673DF1A1D899E95FF5E687BDC6EE2D5A8A98D958_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_36);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_38;
		L_38 = GenericVirtualFuncInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisColor_tD001788D726C3A7F1379BEED0260B9591F440C1F_m74315D96C24FBB27ED6BD82D4A055A7C3F63CF6D_RuntimeMethod_var, L_36, L_37);
		MinMaxGradient_set_colorMin_m7D3D987AB86FE01E7BC4AD856AAEE703F18EF1EF((&V_0), L_38, NULL);
		// break;
		goto IL_017a;
	}

IL_014c:
	{
		// instance.color = reader.Read<UnityEngine.Color>(ES3Type_Color.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_39 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_40 = ((ES3Type_Color_t673DF1A1D899E95FF5E687BDC6EE2D5A8A98D958_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Color_t673DF1A1D899E95FF5E687BDC6EE2D5A8A98D958_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_39);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_41;
		L_41 = GenericVirtualFuncInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisColor_tD001788D726C3A7F1379BEED0260B9591F440C1F_m74315D96C24FBB27ED6BD82D4A055A7C3F63CF6D_RuntimeMethod_var, L_39, L_40);
		MinMaxGradient_set_color_m0890DD6E249DE8552C04AFC4F959DD37EA05033B((&V_0), L_41, NULL);
		// break;
		goto IL_017a;
	}

IL_0160:
	{
		// instance.gradient = reader.Read<UnityEngine.Gradient>(ES3Type_Gradient.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_42 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_43 = ((ES3Type_Gradient_tCEF49FD7276F763D540521D30F768BB3C8A5C669_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Gradient_tCEF49FD7276F763D540521D30F768BB3C8A5C669_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_42);
		Gradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E* L_44;
		L_44 = GenericVirtualFuncInvoker1< Gradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E*, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisGradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E_mF96940E05808C12C825D9208C3A2156E5E7A51CD_RuntimeMethod_var, L_42, L_43);
		MinMaxGradient_set_gradient_m6AAD335DD1A2BD5C091B608C604825C32CFB825D((&V_0), L_44, NULL);
		// break;
		goto IL_017a;
	}

IL_0174:
	{
		// reader.Skip();
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_45 = ___reader0;
		NullCheck(L_45);
		VirtualActionInvoker0::Invoke(41 /* System.Void ES3Reader::Skip() */, L_45);
	}

IL_017a:
	{
		// while((propertyName = reader.ReadPropertyName()) != null)
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_46 = ___reader0;
		NullCheck(L_46);
		String_t* L_47;
		L_47 = VirtualFuncInvoker0< String_t* >::Invoke(21 /* System.String ES3Reader::ReadPropertyName() */, L_46);
		String_t* L_48 = L_47;
		V_1 = L_48;
		if (L_48)
		{
			goto IL_000d;
		}
	}
	{
		// return instance;
		MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69 L_49 = V_0;
		MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69 L_50 = L_49;
		RuntimeObject* L_51 = Box(MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69_il2cpp_TypeInfo_var, &L_50);
		return L_51;
	}
}
// System.Object ES3Types.ES3Type_MinMaxGradient::Read<System.Byte>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_MinMaxGradient_Read_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mA90BD784C96868F6F51A817CE177AB75DD04C35C_gshared (ES3Type_MinMaxGradient_tDE2B65F0D3CF28657A6F04D48DA23B56D4F30CD9* __this, ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisColor_tD001788D726C3A7F1379BEED0260B9591F440C1F_m74315D96C24FBB27ED6BD82D4A055A7C3F63CF6D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisGradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E_mF96940E05808C12C825D9208C3A2156E5E7A51CD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisParticleSystemGradientMode_t5525A27D816AC28297038E5A98856B29095C4C1A_mDD6D024B2606F58AEBD67AEDBB6C628A585CE28E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_Color_t673DF1A1D899E95FF5E687BDC6EE2D5A8A98D958_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_Gradient_tCEF49FD7276F763D540521D30F768BB3C8A5C669_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3C5CBA73DE477A987F6CACAA771042311F4D7450);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral778102C3E486149200F26500543D0E817D018B30);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral852E085EDE387EE50CF0089DAF2F7960EF50B09A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral901354A635771DDD959835AF907BCC0E66B8C186);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral99B5B7F51660385511EC8AC7334ABBB898CFC2BF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAF248E82BE9EBA1ADBF067429FAEE5A5B6E05A74);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDD0F04E0A3F0BA1F904E0E27720F367F4228C69D);
		s_Il2CppMethodInitialized = true;
	}
	MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69 V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	uint32_t V_2 = 0;
	{
		// var instance = new UnityEngine.ParticleSystem.MinMaxGradient();
		il2cpp_codegen_initobj((&V_0), sizeof(MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69));
		goto IL_017a;
	}

IL_000d:
	{
		String_t* L_0 = V_1;
		uint32_t L_1;
		L_1 = U3CPrivateImplementationDetailsU3E_ComputeStringHash_m6EA1F233618497AEFF8902A5EDFA24C74E2F2876(L_0, NULL);
		V_2 = L_1;
		uint32_t L_2 = V_2;
		if ((!(((uint32_t)L_2) <= ((uint32_t)((int32_t)1650383577)))))
		{
			goto IL_003c;
		}
	}
	{
		uint32_t L_3 = V_2;
		if ((((int32_t)L_3) == ((int32_t)((int32_t)1031692888))))
		{
			goto IL_00c9;
		}
	}
	{
		uint32_t L_4 = V_2;
		if ((((int32_t)L_4) == ((int32_t)((int32_t)1414216983))))
		{
			goto IL_0093;
		}
	}
	{
		uint32_t L_5 = V_2;
		if ((((int32_t)L_5) == ((int32_t)((int32_t)1650383577))))
		{
			goto IL_0081;
		}
	}
	{
		goto IL_0174;
	}

IL_003c:
	{
		uint32_t L_6 = V_2;
		if ((!(((uint32_t)L_6) <= ((uint32_t)((int32_t)-630909162)))))
		{
			goto IL_005c;
		}
	}
	{
		uint32_t L_7 = V_2;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)-1661947227))))
		{
			goto IL_00db;
		}
	}
	{
		uint32_t L_8 = V_2;
		if ((((int32_t)L_8) == ((int32_t)((int32_t)-630909162))))
		{
			goto IL_00a5;
		}
	}
	{
		goto IL_0174;
	}

IL_005c:
	{
		uint32_t L_9 = V_2;
		if ((((int32_t)L_9) == ((int32_t)((int32_t)-330191948))))
		{
			goto IL_00b7;
		}
	}
	{
		uint32_t L_10 = V_2;
		if ((!(((uint32_t)L_10) == ((uint32_t)((int32_t)-328277998)))))
		{
			goto IL_0174;
		}
	}
	{
		String_t* L_11 = V_1;
		bool L_12;
		L_12 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_11, _stringLiteralAF248E82BE9EBA1ADBF067429FAEE5A5B6E05A74, NULL);
		if (L_12)
		{
			goto IL_00ed;
		}
	}
	{
		goto IL_0174;
	}

IL_0081:
	{
		String_t* L_13 = V_1;
		bool L_14;
		L_14 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_13, _stringLiteral3C5CBA73DE477A987F6CACAA771042311F4D7450, NULL);
		if (L_14)
		{
			goto IL_00fc;
		}
	}
	{
		goto IL_0174;
	}

IL_0093:
	{
		String_t* L_15 = V_1;
		bool L_16;
		L_16 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_15, _stringLiteral901354A635771DDD959835AF907BCC0E66B8C186, NULL);
		if (L_16)
		{
			goto IL_0110;
		}
	}
	{
		goto IL_0174;
	}

IL_00a5:
	{
		String_t* L_17 = V_1;
		bool L_18;
		L_18 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_17, _stringLiteral99B5B7F51660385511EC8AC7334ABBB898CFC2BF, NULL);
		if (L_18)
		{
			goto IL_0124;
		}
	}
	{
		goto IL_0174;
	}

IL_00b7:
	{
		String_t* L_19 = V_1;
		bool L_20;
		L_20 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_19, _stringLiteral852E085EDE387EE50CF0089DAF2F7960EF50B09A, NULL);
		if (L_20)
		{
			goto IL_0138;
		}
	}
	{
		goto IL_0174;
	}

IL_00c9:
	{
		String_t* L_21 = V_1;
		bool L_22;
		L_22 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_21, _stringLiteralDD0F04E0A3F0BA1F904E0E27720F367F4228C69D, NULL);
		if (L_22)
		{
			goto IL_014c;
		}
	}
	{
		goto IL_0174;
	}

IL_00db:
	{
		String_t* L_23 = V_1;
		bool L_24;
		L_24 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_23, _stringLiteral778102C3E486149200F26500543D0E817D018B30, NULL);
		if (L_24)
		{
			goto IL_0160;
		}
	}
	{
		goto IL_0174;
	}

IL_00ed:
	{
		// instance.mode = reader.Read<UnityEngine.ParticleSystemGradientMode>();
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_25 = ___reader0;
		NullCheck(L_25);
		int32_t L_26;
		L_26 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisParticleSystemGradientMode_t5525A27D816AC28297038E5A98856B29095C4C1A_mDD6D024B2606F58AEBD67AEDBB6C628A585CE28E_RuntimeMethod_var, L_25);
		MinMaxGradient_set_mode_mCD15C79CD57AD7D400D7B171E10BC5E24F64295E((&V_0), L_26, NULL);
		// break;
		goto IL_017a;
	}

IL_00fc:
	{
		// instance.gradientMax = reader.Read<UnityEngine.Gradient>(ES3Type_Gradient.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_27 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_28 = ((ES3Type_Gradient_tCEF49FD7276F763D540521D30F768BB3C8A5C669_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Gradient_tCEF49FD7276F763D540521D30F768BB3C8A5C669_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_27);
		Gradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E* L_29;
		L_29 = GenericVirtualFuncInvoker1< Gradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E*, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisGradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E_mF96940E05808C12C825D9208C3A2156E5E7A51CD_RuntimeMethod_var, L_27, L_28);
		MinMaxGradient_set_gradientMax_mC432C0AEA15FE74D6E6E6E2058BE039361D57ABB((&V_0), L_29, NULL);
		// break;
		goto IL_017a;
	}

IL_0110:
	{
		// instance.gradientMin = reader.Read<UnityEngine.Gradient>(ES3Type_Gradient.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_30 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_31 = ((ES3Type_Gradient_tCEF49FD7276F763D540521D30F768BB3C8A5C669_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Gradient_tCEF49FD7276F763D540521D30F768BB3C8A5C669_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_30);
		Gradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E* L_32;
		L_32 = GenericVirtualFuncInvoker1< Gradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E*, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisGradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E_mF96940E05808C12C825D9208C3A2156E5E7A51CD_RuntimeMethod_var, L_30, L_31);
		MinMaxGradient_set_gradientMin_m4152642243D268E1A95A7FC0B58E8F179A933609((&V_0), L_32, NULL);
		// break;
		goto IL_017a;
	}

IL_0124:
	{
		// instance.colorMax = reader.Read<UnityEngine.Color>(ES3Type_Color.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_33 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_34 = ((ES3Type_Color_t673DF1A1D899E95FF5E687BDC6EE2D5A8A98D958_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Color_t673DF1A1D899E95FF5E687BDC6EE2D5A8A98D958_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_33);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_35;
		L_35 = GenericVirtualFuncInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisColor_tD001788D726C3A7F1379BEED0260B9591F440C1F_m74315D96C24FBB27ED6BD82D4A055A7C3F63CF6D_RuntimeMethod_var, L_33, L_34);
		MinMaxGradient_set_colorMax_m28A85822E89FC80D1F5B49225DEC4ABCF86CAE33((&V_0), L_35, NULL);
		// break;
		goto IL_017a;
	}

IL_0138:
	{
		// instance.colorMin = reader.Read<UnityEngine.Color>(ES3Type_Color.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_36 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_37 = ((ES3Type_Color_t673DF1A1D899E95FF5E687BDC6EE2D5A8A98D958_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Color_t673DF1A1D899E95FF5E687BDC6EE2D5A8A98D958_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_36);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_38;
		L_38 = GenericVirtualFuncInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisColor_tD001788D726C3A7F1379BEED0260B9591F440C1F_m74315D96C24FBB27ED6BD82D4A055A7C3F63CF6D_RuntimeMethod_var, L_36, L_37);
		MinMaxGradient_set_colorMin_m7D3D987AB86FE01E7BC4AD856AAEE703F18EF1EF((&V_0), L_38, NULL);
		// break;
		goto IL_017a;
	}

IL_014c:
	{
		// instance.color = reader.Read<UnityEngine.Color>(ES3Type_Color.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_39 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_40 = ((ES3Type_Color_t673DF1A1D899E95FF5E687BDC6EE2D5A8A98D958_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Color_t673DF1A1D899E95FF5E687BDC6EE2D5A8A98D958_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_39);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_41;
		L_41 = GenericVirtualFuncInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisColor_tD001788D726C3A7F1379BEED0260B9591F440C1F_m74315D96C24FBB27ED6BD82D4A055A7C3F63CF6D_RuntimeMethod_var, L_39, L_40);
		MinMaxGradient_set_color_m0890DD6E249DE8552C04AFC4F959DD37EA05033B((&V_0), L_41, NULL);
		// break;
		goto IL_017a;
	}

IL_0160:
	{
		// instance.gradient = reader.Read<UnityEngine.Gradient>(ES3Type_Gradient.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_42 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_43 = ((ES3Type_Gradient_tCEF49FD7276F763D540521D30F768BB3C8A5C669_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Gradient_tCEF49FD7276F763D540521D30F768BB3C8A5C669_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_42);
		Gradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E* L_44;
		L_44 = GenericVirtualFuncInvoker1< Gradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E*, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisGradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E_mF96940E05808C12C825D9208C3A2156E5E7A51CD_RuntimeMethod_var, L_42, L_43);
		MinMaxGradient_set_gradient_m6AAD335DD1A2BD5C091B608C604825C32CFB825D((&V_0), L_44, NULL);
		// break;
		goto IL_017a;
	}

IL_0174:
	{
		// reader.Skip();
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_45 = ___reader0;
		NullCheck(L_45);
		VirtualActionInvoker0::Invoke(41 /* System.Void ES3Reader::Skip() */, L_45);
	}

IL_017a:
	{
		// while((propertyName = reader.ReadPropertyName()) != null)
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_46 = ___reader0;
		NullCheck(L_46);
		String_t* L_47;
		L_47 = VirtualFuncInvoker0< String_t* >::Invoke(21 /* System.String ES3Reader::ReadPropertyName() */, L_46);
		String_t* L_48 = L_47;
		V_1 = L_48;
		if (L_48)
		{
			goto IL_000d;
		}
	}
	{
		// return instance;
		MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69 L_49 = V_0;
		MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69 L_50 = L_49;
		RuntimeObject* L_51 = Box(MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69_il2cpp_TypeInfo_var, &L_50);
		return L_51;
	}
}
// System.Object ES3Types.ES3Type_MinMaxGradient::Read<UnityEngine.Color>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_MinMaxGradient_Read_TisColor_tD001788D726C3A7F1379BEED0260B9591F440C1F_m7BAC178552B66ADC69B6CA2968CACB6F22B1671D_gshared (ES3Type_MinMaxGradient_tDE2B65F0D3CF28657A6F04D48DA23B56D4F30CD9* __this, ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisColor_tD001788D726C3A7F1379BEED0260B9591F440C1F_m74315D96C24FBB27ED6BD82D4A055A7C3F63CF6D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisGradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E_mF96940E05808C12C825D9208C3A2156E5E7A51CD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisParticleSystemGradientMode_t5525A27D816AC28297038E5A98856B29095C4C1A_mDD6D024B2606F58AEBD67AEDBB6C628A585CE28E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_Color_t673DF1A1D899E95FF5E687BDC6EE2D5A8A98D958_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_Gradient_tCEF49FD7276F763D540521D30F768BB3C8A5C669_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3C5CBA73DE477A987F6CACAA771042311F4D7450);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral778102C3E486149200F26500543D0E817D018B30);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral852E085EDE387EE50CF0089DAF2F7960EF50B09A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral901354A635771DDD959835AF907BCC0E66B8C186);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral99B5B7F51660385511EC8AC7334ABBB898CFC2BF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAF248E82BE9EBA1ADBF067429FAEE5A5B6E05A74);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDD0F04E0A3F0BA1F904E0E27720F367F4228C69D);
		s_Il2CppMethodInitialized = true;
	}
	MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69 V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	uint32_t V_2 = 0;
	{
		// var instance = new UnityEngine.ParticleSystem.MinMaxGradient();
		il2cpp_codegen_initobj((&V_0), sizeof(MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69));
		goto IL_017a;
	}

IL_000d:
	{
		String_t* L_0 = V_1;
		uint32_t L_1;
		L_1 = U3CPrivateImplementationDetailsU3E_ComputeStringHash_m6EA1F233618497AEFF8902A5EDFA24C74E2F2876(L_0, NULL);
		V_2 = L_1;
		uint32_t L_2 = V_2;
		if ((!(((uint32_t)L_2) <= ((uint32_t)((int32_t)1650383577)))))
		{
			goto IL_003c;
		}
	}
	{
		uint32_t L_3 = V_2;
		if ((((int32_t)L_3) == ((int32_t)((int32_t)1031692888))))
		{
			goto IL_00c9;
		}
	}
	{
		uint32_t L_4 = V_2;
		if ((((int32_t)L_4) == ((int32_t)((int32_t)1414216983))))
		{
			goto IL_0093;
		}
	}
	{
		uint32_t L_5 = V_2;
		if ((((int32_t)L_5) == ((int32_t)((int32_t)1650383577))))
		{
			goto IL_0081;
		}
	}
	{
		goto IL_0174;
	}

IL_003c:
	{
		uint32_t L_6 = V_2;
		if ((!(((uint32_t)L_6) <= ((uint32_t)((int32_t)-630909162)))))
		{
			goto IL_005c;
		}
	}
	{
		uint32_t L_7 = V_2;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)-1661947227))))
		{
			goto IL_00db;
		}
	}
	{
		uint32_t L_8 = V_2;
		if ((((int32_t)L_8) == ((int32_t)((int32_t)-630909162))))
		{
			goto IL_00a5;
		}
	}
	{
		goto IL_0174;
	}

IL_005c:
	{
		uint32_t L_9 = V_2;
		if ((((int32_t)L_9) == ((int32_t)((int32_t)-330191948))))
		{
			goto IL_00b7;
		}
	}
	{
		uint32_t L_10 = V_2;
		if ((!(((uint32_t)L_10) == ((uint32_t)((int32_t)-328277998)))))
		{
			goto IL_0174;
		}
	}
	{
		String_t* L_11 = V_1;
		bool L_12;
		L_12 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_11, _stringLiteralAF248E82BE9EBA1ADBF067429FAEE5A5B6E05A74, NULL);
		if (L_12)
		{
			goto IL_00ed;
		}
	}
	{
		goto IL_0174;
	}

IL_0081:
	{
		String_t* L_13 = V_1;
		bool L_14;
		L_14 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_13, _stringLiteral3C5CBA73DE477A987F6CACAA771042311F4D7450, NULL);
		if (L_14)
		{
			goto IL_00fc;
		}
	}
	{
		goto IL_0174;
	}

IL_0093:
	{
		String_t* L_15 = V_1;
		bool L_16;
		L_16 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_15, _stringLiteral901354A635771DDD959835AF907BCC0E66B8C186, NULL);
		if (L_16)
		{
			goto IL_0110;
		}
	}
	{
		goto IL_0174;
	}

IL_00a5:
	{
		String_t* L_17 = V_1;
		bool L_18;
		L_18 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_17, _stringLiteral99B5B7F51660385511EC8AC7334ABBB898CFC2BF, NULL);
		if (L_18)
		{
			goto IL_0124;
		}
	}
	{
		goto IL_0174;
	}

IL_00b7:
	{
		String_t* L_19 = V_1;
		bool L_20;
		L_20 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_19, _stringLiteral852E085EDE387EE50CF0089DAF2F7960EF50B09A, NULL);
		if (L_20)
		{
			goto IL_0138;
		}
	}
	{
		goto IL_0174;
	}

IL_00c9:
	{
		String_t* L_21 = V_1;
		bool L_22;
		L_22 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_21, _stringLiteralDD0F04E0A3F0BA1F904E0E27720F367F4228C69D, NULL);
		if (L_22)
		{
			goto IL_014c;
		}
	}
	{
		goto IL_0174;
	}

IL_00db:
	{
		String_t* L_23 = V_1;
		bool L_24;
		L_24 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_23, _stringLiteral778102C3E486149200F26500543D0E817D018B30, NULL);
		if (L_24)
		{
			goto IL_0160;
		}
	}
	{
		goto IL_0174;
	}

IL_00ed:
	{
		// instance.mode = reader.Read<UnityEngine.ParticleSystemGradientMode>();
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_25 = ___reader0;
		NullCheck(L_25);
		int32_t L_26;
		L_26 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisParticleSystemGradientMode_t5525A27D816AC28297038E5A98856B29095C4C1A_mDD6D024B2606F58AEBD67AEDBB6C628A585CE28E_RuntimeMethod_var, L_25);
		MinMaxGradient_set_mode_mCD15C79CD57AD7D400D7B171E10BC5E24F64295E((&V_0), L_26, NULL);
		// break;
		goto IL_017a;
	}

IL_00fc:
	{
		// instance.gradientMax = reader.Read<UnityEngine.Gradient>(ES3Type_Gradient.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_27 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_28 = ((ES3Type_Gradient_tCEF49FD7276F763D540521D30F768BB3C8A5C669_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Gradient_tCEF49FD7276F763D540521D30F768BB3C8A5C669_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_27);
		Gradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E* L_29;
		L_29 = GenericVirtualFuncInvoker1< Gradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E*, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisGradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E_mF96940E05808C12C825D9208C3A2156E5E7A51CD_RuntimeMethod_var, L_27, L_28);
		MinMaxGradient_set_gradientMax_mC432C0AEA15FE74D6E6E6E2058BE039361D57ABB((&V_0), L_29, NULL);
		// break;
		goto IL_017a;
	}

IL_0110:
	{
		// instance.gradientMin = reader.Read<UnityEngine.Gradient>(ES3Type_Gradient.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_30 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_31 = ((ES3Type_Gradient_tCEF49FD7276F763D540521D30F768BB3C8A5C669_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Gradient_tCEF49FD7276F763D540521D30F768BB3C8A5C669_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_30);
		Gradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E* L_32;
		L_32 = GenericVirtualFuncInvoker1< Gradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E*, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisGradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E_mF96940E05808C12C825D9208C3A2156E5E7A51CD_RuntimeMethod_var, L_30, L_31);
		MinMaxGradient_set_gradientMin_m4152642243D268E1A95A7FC0B58E8F179A933609((&V_0), L_32, NULL);
		// break;
		goto IL_017a;
	}

IL_0124:
	{
		// instance.colorMax = reader.Read<UnityEngine.Color>(ES3Type_Color.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_33 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_34 = ((ES3Type_Color_t673DF1A1D899E95FF5E687BDC6EE2D5A8A98D958_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Color_t673DF1A1D899E95FF5E687BDC6EE2D5A8A98D958_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_33);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_35;
		L_35 = GenericVirtualFuncInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisColor_tD001788D726C3A7F1379BEED0260B9591F440C1F_m74315D96C24FBB27ED6BD82D4A055A7C3F63CF6D_RuntimeMethod_var, L_33, L_34);
		MinMaxGradient_set_colorMax_m28A85822E89FC80D1F5B49225DEC4ABCF86CAE33((&V_0), L_35, NULL);
		// break;
		goto IL_017a;
	}

IL_0138:
	{
		// instance.colorMin = reader.Read<UnityEngine.Color>(ES3Type_Color.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_36 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_37 = ((ES3Type_Color_t673DF1A1D899E95FF5E687BDC6EE2D5A8A98D958_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Color_t673DF1A1D899E95FF5E687BDC6EE2D5A8A98D958_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_36);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_38;
		L_38 = GenericVirtualFuncInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisColor_tD001788D726C3A7F1379BEED0260B9591F440C1F_m74315D96C24FBB27ED6BD82D4A055A7C3F63CF6D_RuntimeMethod_var, L_36, L_37);
		MinMaxGradient_set_colorMin_m7D3D987AB86FE01E7BC4AD856AAEE703F18EF1EF((&V_0), L_38, NULL);
		// break;
		goto IL_017a;
	}

IL_014c:
	{
		// instance.color = reader.Read<UnityEngine.Color>(ES3Type_Color.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_39 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_40 = ((ES3Type_Color_t673DF1A1D899E95FF5E687BDC6EE2D5A8A98D958_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Color_t673DF1A1D899E95FF5E687BDC6EE2D5A8A98D958_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_39);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_41;
		L_41 = GenericVirtualFuncInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisColor_tD001788D726C3A7F1379BEED0260B9591F440C1F_m74315D96C24FBB27ED6BD82D4A055A7C3F63CF6D_RuntimeMethod_var, L_39, L_40);
		MinMaxGradient_set_color_m0890DD6E249DE8552C04AFC4F959DD37EA05033B((&V_0), L_41, NULL);
		// break;
		goto IL_017a;
	}

IL_0160:
	{
		// instance.gradient = reader.Read<UnityEngine.Gradient>(ES3Type_Gradient.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_42 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_43 = ((ES3Type_Gradient_tCEF49FD7276F763D540521D30F768BB3C8A5C669_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Gradient_tCEF49FD7276F763D540521D30F768BB3C8A5C669_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_42);
		Gradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E* L_44;
		L_44 = GenericVirtualFuncInvoker1< Gradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E*, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisGradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E_mF96940E05808C12C825D9208C3A2156E5E7A51CD_RuntimeMethod_var, L_42, L_43);
		MinMaxGradient_set_gradient_m6AAD335DD1A2BD5C091B608C604825C32CFB825D((&V_0), L_44, NULL);
		// break;
		goto IL_017a;
	}

IL_0174:
	{
		// reader.Skip();
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_45 = ___reader0;
		NullCheck(L_45);
		VirtualActionInvoker0::Invoke(41 /* System.Void ES3Reader::Skip() */, L_45);
	}

IL_017a:
	{
		// while((propertyName = reader.ReadPropertyName()) != null)
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_46 = ___reader0;
		NullCheck(L_46);
		String_t* L_47;
		L_47 = VirtualFuncInvoker0< String_t* >::Invoke(21 /* System.String ES3Reader::ReadPropertyName() */, L_46);
		String_t* L_48 = L_47;
		V_1 = L_48;
		if (L_48)
		{
			goto IL_000d;
		}
	}
	{
		// return instance;
		MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69 L_49 = V_0;
		MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69 L_50 = L_49;
		RuntimeObject* L_51 = Box(MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69_il2cpp_TypeInfo_var, &L_50);
		return L_51;
	}
}
// System.Object ES3Types.ES3Type_MinMaxGradient::Read<System.Int32>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_MinMaxGradient_Read_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mE0E3857891807872FED70EAB11A5955C5F749AAE_gshared (ES3Type_MinMaxGradient_tDE2B65F0D3CF28657A6F04D48DA23B56D4F30CD9* __this, ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisColor_tD001788D726C3A7F1379BEED0260B9591F440C1F_m74315D96C24FBB27ED6BD82D4A055A7C3F63CF6D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisGradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E_mF96940E05808C12C825D9208C3A2156E5E7A51CD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisParticleSystemGradientMode_t5525A27D816AC28297038E5A98856B29095C4C1A_mDD6D024B2606F58AEBD67AEDBB6C628A585CE28E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_Color_t673DF1A1D899E95FF5E687BDC6EE2D5A8A98D958_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_Gradient_tCEF49FD7276F763D540521D30F768BB3C8A5C669_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3C5CBA73DE477A987F6CACAA771042311F4D7450);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral778102C3E486149200F26500543D0E817D018B30);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral852E085EDE387EE50CF0089DAF2F7960EF50B09A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral901354A635771DDD959835AF907BCC0E66B8C186);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral99B5B7F51660385511EC8AC7334ABBB898CFC2BF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAF248E82BE9EBA1ADBF067429FAEE5A5B6E05A74);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDD0F04E0A3F0BA1F904E0E27720F367F4228C69D);
		s_Il2CppMethodInitialized = true;
	}
	MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69 V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	uint32_t V_2 = 0;
	{
		// var instance = new UnityEngine.ParticleSystem.MinMaxGradient();
		il2cpp_codegen_initobj((&V_0), sizeof(MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69));
		goto IL_017a;
	}

IL_000d:
	{
		String_t* L_0 = V_1;
		uint32_t L_1;
		L_1 = U3CPrivateImplementationDetailsU3E_ComputeStringHash_m6EA1F233618497AEFF8902A5EDFA24C74E2F2876(L_0, NULL);
		V_2 = L_1;
		uint32_t L_2 = V_2;
		if ((!(((uint32_t)L_2) <= ((uint32_t)((int32_t)1650383577)))))
		{
			goto IL_003c;
		}
	}
	{
		uint32_t L_3 = V_2;
		if ((((int32_t)L_3) == ((int32_t)((int32_t)1031692888))))
		{
			goto IL_00c9;
		}
	}
	{
		uint32_t L_4 = V_2;
		if ((((int32_t)L_4) == ((int32_t)((int32_t)1414216983))))
		{
			goto IL_0093;
		}
	}
	{
		uint32_t L_5 = V_2;
		if ((((int32_t)L_5) == ((int32_t)((int32_t)1650383577))))
		{
			goto IL_0081;
		}
	}
	{
		goto IL_0174;
	}

IL_003c:
	{
		uint32_t L_6 = V_2;
		if ((!(((uint32_t)L_6) <= ((uint32_t)((int32_t)-630909162)))))
		{
			goto IL_005c;
		}
	}
	{
		uint32_t L_7 = V_2;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)-1661947227))))
		{
			goto IL_00db;
		}
	}
	{
		uint32_t L_8 = V_2;
		if ((((int32_t)L_8) == ((int32_t)((int32_t)-630909162))))
		{
			goto IL_00a5;
		}
	}
	{
		goto IL_0174;
	}

IL_005c:
	{
		uint32_t L_9 = V_2;
		if ((((int32_t)L_9) == ((int32_t)((int32_t)-330191948))))
		{
			goto IL_00b7;
		}
	}
	{
		uint32_t L_10 = V_2;
		if ((!(((uint32_t)L_10) == ((uint32_t)((int32_t)-328277998)))))
		{
			goto IL_0174;
		}
	}
	{
		String_t* L_11 = V_1;
		bool L_12;
		L_12 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_11, _stringLiteralAF248E82BE9EBA1ADBF067429FAEE5A5B6E05A74, NULL);
		if (L_12)
		{
			goto IL_00ed;
		}
	}
	{
		goto IL_0174;
	}

IL_0081:
	{
		String_t* L_13 = V_1;
		bool L_14;
		L_14 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_13, _stringLiteral3C5CBA73DE477A987F6CACAA771042311F4D7450, NULL);
		if (L_14)
		{
			goto IL_00fc;
		}
	}
	{
		goto IL_0174;
	}

IL_0093:
	{
		String_t* L_15 = V_1;
		bool L_16;
		L_16 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_15, _stringLiteral901354A635771DDD959835AF907BCC0E66B8C186, NULL);
		if (L_16)
		{
			goto IL_0110;
		}
	}
	{
		goto IL_0174;
	}

IL_00a5:
	{
		String_t* L_17 = V_1;
		bool L_18;
		L_18 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_17, _stringLiteral99B5B7F51660385511EC8AC7334ABBB898CFC2BF, NULL);
		if (L_18)
		{
			goto IL_0124;
		}
	}
	{
		goto IL_0174;
	}

IL_00b7:
	{
		String_t* L_19 = V_1;
		bool L_20;
		L_20 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_19, _stringLiteral852E085EDE387EE50CF0089DAF2F7960EF50B09A, NULL);
		if (L_20)
		{
			goto IL_0138;
		}
	}
	{
		goto IL_0174;
	}

IL_00c9:
	{
		String_t* L_21 = V_1;
		bool L_22;
		L_22 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_21, _stringLiteralDD0F04E0A3F0BA1F904E0E27720F367F4228C69D, NULL);
		if (L_22)
		{
			goto IL_014c;
		}
	}
	{
		goto IL_0174;
	}

IL_00db:
	{
		String_t* L_23 = V_1;
		bool L_24;
		L_24 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_23, _stringLiteral778102C3E486149200F26500543D0E817D018B30, NULL);
		if (L_24)
		{
			goto IL_0160;
		}
	}
	{
		goto IL_0174;
	}

IL_00ed:
	{
		// instance.mode = reader.Read<UnityEngine.ParticleSystemGradientMode>();
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_25 = ___reader0;
		NullCheck(L_25);
		int32_t L_26;
		L_26 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisParticleSystemGradientMode_t5525A27D816AC28297038E5A98856B29095C4C1A_mDD6D024B2606F58AEBD67AEDBB6C628A585CE28E_RuntimeMethod_var, L_25);
		MinMaxGradient_set_mode_mCD15C79CD57AD7D400D7B171E10BC5E24F64295E((&V_0), L_26, NULL);
		// break;
		goto IL_017a;
	}

IL_00fc:
	{
		// instance.gradientMax = reader.Read<UnityEngine.Gradient>(ES3Type_Gradient.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_27 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_28 = ((ES3Type_Gradient_tCEF49FD7276F763D540521D30F768BB3C8A5C669_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Gradient_tCEF49FD7276F763D540521D30F768BB3C8A5C669_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_27);
		Gradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E* L_29;
		L_29 = GenericVirtualFuncInvoker1< Gradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E*, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisGradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E_mF96940E05808C12C825D9208C3A2156E5E7A51CD_RuntimeMethod_var, L_27, L_28);
		MinMaxGradient_set_gradientMax_mC432C0AEA15FE74D6E6E6E2058BE039361D57ABB((&V_0), L_29, NULL);
		// break;
		goto IL_017a;
	}

IL_0110:
	{
		// instance.gradientMin = reader.Read<UnityEngine.Gradient>(ES3Type_Gradient.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_30 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_31 = ((ES3Type_Gradient_tCEF49FD7276F763D540521D30F768BB3C8A5C669_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Gradient_tCEF49FD7276F763D540521D30F768BB3C8A5C669_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_30);
		Gradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E* L_32;
		L_32 = GenericVirtualFuncInvoker1< Gradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E*, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisGradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E_mF96940E05808C12C825D9208C3A2156E5E7A51CD_RuntimeMethod_var, L_30, L_31);
		MinMaxGradient_set_gradientMin_m4152642243D268E1A95A7FC0B58E8F179A933609((&V_0), L_32, NULL);
		// break;
		goto IL_017a;
	}

IL_0124:
	{
		// instance.colorMax = reader.Read<UnityEngine.Color>(ES3Type_Color.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_33 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_34 = ((ES3Type_Color_t673DF1A1D899E95FF5E687BDC6EE2D5A8A98D958_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Color_t673DF1A1D899E95FF5E687BDC6EE2D5A8A98D958_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_33);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_35;
		L_35 = GenericVirtualFuncInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisColor_tD001788D726C3A7F1379BEED0260B9591F440C1F_m74315D96C24FBB27ED6BD82D4A055A7C3F63CF6D_RuntimeMethod_var, L_33, L_34);
		MinMaxGradient_set_colorMax_m28A85822E89FC80D1F5B49225DEC4ABCF86CAE33((&V_0), L_35, NULL);
		// break;
		goto IL_017a;
	}

IL_0138:
	{
		// instance.colorMin = reader.Read<UnityEngine.Color>(ES3Type_Color.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_36 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_37 = ((ES3Type_Color_t673DF1A1D899E95FF5E687BDC6EE2D5A8A98D958_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Color_t673DF1A1D899E95FF5E687BDC6EE2D5A8A98D958_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_36);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_38;
		L_38 = GenericVirtualFuncInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisColor_tD001788D726C3A7F1379BEED0260B9591F440C1F_m74315D96C24FBB27ED6BD82D4A055A7C3F63CF6D_RuntimeMethod_var, L_36, L_37);
		MinMaxGradient_set_colorMin_m7D3D987AB86FE01E7BC4AD856AAEE703F18EF1EF((&V_0), L_38, NULL);
		// break;
		goto IL_017a;
	}

IL_014c:
	{
		// instance.color = reader.Read<UnityEngine.Color>(ES3Type_Color.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_39 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_40 = ((ES3Type_Color_t673DF1A1D899E95FF5E687BDC6EE2D5A8A98D958_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Color_t673DF1A1D899E95FF5E687BDC6EE2D5A8A98D958_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_39);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_41;
		L_41 = GenericVirtualFuncInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisColor_tD001788D726C3A7F1379BEED0260B9591F440C1F_m74315D96C24FBB27ED6BD82D4A055A7C3F63CF6D_RuntimeMethod_var, L_39, L_40);
		MinMaxGradient_set_color_m0890DD6E249DE8552C04AFC4F959DD37EA05033B((&V_0), L_41, NULL);
		// break;
		goto IL_017a;
	}

IL_0160:
	{
		// instance.gradient = reader.Read<UnityEngine.Gradient>(ES3Type_Gradient.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_42 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_43 = ((ES3Type_Gradient_tCEF49FD7276F763D540521D30F768BB3C8A5C669_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Gradient_tCEF49FD7276F763D540521D30F768BB3C8A5C669_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_42);
		Gradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E* L_44;
		L_44 = GenericVirtualFuncInvoker1< Gradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E*, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisGradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E_mF96940E05808C12C825D9208C3A2156E5E7A51CD_RuntimeMethod_var, L_42, L_43);
		MinMaxGradient_set_gradient_m6AAD335DD1A2BD5C091B608C604825C32CFB825D((&V_0), L_44, NULL);
		// break;
		goto IL_017a;
	}

IL_0174:
	{
		// reader.Skip();
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_45 = ___reader0;
		NullCheck(L_45);
		VirtualActionInvoker0::Invoke(41 /* System.Void ES3Reader::Skip() */, L_45);
	}

IL_017a:
	{
		// while((propertyName = reader.ReadPropertyName()) != null)
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_46 = ___reader0;
		NullCheck(L_46);
		String_t* L_47;
		L_47 = VirtualFuncInvoker0< String_t* >::Invoke(21 /* System.String ES3Reader::ReadPropertyName() */, L_46);
		String_t* L_48 = L_47;
		V_1 = L_48;
		if (L_48)
		{
			goto IL_000d;
		}
	}
	{
		// return instance;
		MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69 L_49 = V_0;
		MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69 L_50 = L_49;
		RuntimeObject* L_51 = Box(MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69_il2cpp_TypeInfo_var, &L_50);
		return L_51;
	}
}
// System.Object ES3Types.ES3Type_MinMaxGradient::Read<System.Int32Enum>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_MinMaxGradient_Read_TisInt32Enum_tCBAC8BA2BFF3A845FA599F303093BBBA374B6F0C_mB4260FD054C5593945EAACFDD75BCD8F5DFC71F8_gshared (ES3Type_MinMaxGradient_tDE2B65F0D3CF28657A6F04D48DA23B56D4F30CD9* __this, ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisColor_tD001788D726C3A7F1379BEED0260B9591F440C1F_m74315D96C24FBB27ED6BD82D4A055A7C3F63CF6D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisGradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E_mF96940E05808C12C825D9208C3A2156E5E7A51CD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisParticleSystemGradientMode_t5525A27D816AC28297038E5A98856B29095C4C1A_mDD6D024B2606F58AEBD67AEDBB6C628A585CE28E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_Color_t673DF1A1D899E95FF5E687BDC6EE2D5A8A98D958_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_Gradient_tCEF49FD7276F763D540521D30F768BB3C8A5C669_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3C5CBA73DE477A987F6CACAA771042311F4D7450);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral778102C3E486149200F26500543D0E817D018B30);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral852E085EDE387EE50CF0089DAF2F7960EF50B09A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral901354A635771DDD959835AF907BCC0E66B8C186);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral99B5B7F51660385511EC8AC7334ABBB898CFC2BF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAF248E82BE9EBA1ADBF067429FAEE5A5B6E05A74);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDD0F04E0A3F0BA1F904E0E27720F367F4228C69D);
		s_Il2CppMethodInitialized = true;
	}
	MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69 V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	uint32_t V_2 = 0;
	{
		// var instance = new UnityEngine.ParticleSystem.MinMaxGradient();
		il2cpp_codegen_initobj((&V_0), sizeof(MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69));
		goto IL_017a;
	}

IL_000d:
	{
		String_t* L_0 = V_1;
		uint32_t L_1;
		L_1 = U3CPrivateImplementationDetailsU3E_ComputeStringHash_m6EA1F233618497AEFF8902A5EDFA24C74E2F2876(L_0, NULL);
		V_2 = L_1;
		uint32_t L_2 = V_2;
		if ((!(((uint32_t)L_2) <= ((uint32_t)((int32_t)1650383577)))))
		{
			goto IL_003c;
		}
	}
	{
		uint32_t L_3 = V_2;
		if ((((int32_t)L_3) == ((int32_t)((int32_t)1031692888))))
		{
			goto IL_00c9;
		}
	}
	{
		uint32_t L_4 = V_2;
		if ((((int32_t)L_4) == ((int32_t)((int32_t)1414216983))))
		{
			goto IL_0093;
		}
	}
	{
		uint32_t L_5 = V_2;
		if ((((int32_t)L_5) == ((int32_t)((int32_t)1650383577))))
		{
			goto IL_0081;
		}
	}
	{
		goto IL_0174;
	}

IL_003c:
	{
		uint32_t L_6 = V_2;
		if ((!(((uint32_t)L_6) <= ((uint32_t)((int32_t)-630909162)))))
		{
			goto IL_005c;
		}
	}
	{
		uint32_t L_7 = V_2;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)-1661947227))))
		{
			goto IL_00db;
		}
	}
	{
		uint32_t L_8 = V_2;
		if ((((int32_t)L_8) == ((int32_t)((int32_t)-630909162))))
		{
			goto IL_00a5;
		}
	}
	{
		goto IL_0174;
	}

IL_005c:
	{
		uint32_t L_9 = V_2;
		if ((((int32_t)L_9) == ((int32_t)((int32_t)-330191948))))
		{
			goto IL_00b7;
		}
	}
	{
		uint32_t L_10 = V_2;
		if ((!(((uint32_t)L_10) == ((uint32_t)((int32_t)-328277998)))))
		{
			goto IL_0174;
		}
	}
	{
		String_t* L_11 = V_1;
		bool L_12;
		L_12 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_11, _stringLiteralAF248E82BE9EBA1ADBF067429FAEE5A5B6E05A74, NULL);
		if (L_12)
		{
			goto IL_00ed;
		}
	}
	{
		goto IL_0174;
	}

IL_0081:
	{
		String_t* L_13 = V_1;
		bool L_14;
		L_14 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_13, _stringLiteral3C5CBA73DE477A987F6CACAA771042311F4D7450, NULL);
		if (L_14)
		{
			goto IL_00fc;
		}
	}
	{
		goto IL_0174;
	}

IL_0093:
	{
		String_t* L_15 = V_1;
		bool L_16;
		L_16 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_15, _stringLiteral901354A635771DDD959835AF907BCC0E66B8C186, NULL);
		if (L_16)
		{
			goto IL_0110;
		}
	}
	{
		goto IL_0174;
	}

IL_00a5:
	{
		String_t* L_17 = V_1;
		bool L_18;
		L_18 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_17, _stringLiteral99B5B7F51660385511EC8AC7334ABBB898CFC2BF, NULL);
		if (L_18)
		{
			goto IL_0124;
		}
	}
	{
		goto IL_0174;
	}

IL_00b7:
	{
		String_t* L_19 = V_1;
		bool L_20;
		L_20 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_19, _stringLiteral852E085EDE387EE50CF0089DAF2F7960EF50B09A, NULL);
		if (L_20)
		{
			goto IL_0138;
		}
	}
	{
		goto IL_0174;
	}

IL_00c9:
	{
		String_t* L_21 = V_1;
		bool L_22;
		L_22 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_21, _stringLiteralDD0F04E0A3F0BA1F904E0E27720F367F4228C69D, NULL);
		if (L_22)
		{
			goto IL_014c;
		}
	}
	{
		goto IL_0174;
	}

IL_00db:
	{
		String_t* L_23 = V_1;
		bool L_24;
		L_24 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_23, _stringLiteral778102C3E486149200F26500543D0E817D018B30, NULL);
		if (L_24)
		{
			goto IL_0160;
		}
	}
	{
		goto IL_0174;
	}

IL_00ed:
	{
		// instance.mode = reader.Read<UnityEngine.ParticleSystemGradientMode>();
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_25 = ___reader0;
		NullCheck(L_25);
		int32_t L_26;
		L_26 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisParticleSystemGradientMode_t5525A27D816AC28297038E5A98856B29095C4C1A_mDD6D024B2606F58AEBD67AEDBB6C628A585CE28E_RuntimeMethod_var, L_25);
		MinMaxGradient_set_mode_mCD15C79CD57AD7D400D7B171E10BC5E24F64295E((&V_0), L_26, NULL);
		// break;
		goto IL_017a;
	}

IL_00fc:
	{
		// instance.gradientMax = reader.Read<UnityEngine.Gradient>(ES3Type_Gradient.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_27 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_28 = ((ES3Type_Gradient_tCEF49FD7276F763D540521D30F768BB3C8A5C669_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Gradient_tCEF49FD7276F763D540521D30F768BB3C8A5C669_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_27);
		Gradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E* L_29;
		L_29 = GenericVirtualFuncInvoker1< Gradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E*, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisGradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E_mF96940E05808C12C825D9208C3A2156E5E7A51CD_RuntimeMethod_var, L_27, L_28);
		MinMaxGradient_set_gradientMax_mC432C0AEA15FE74D6E6E6E2058BE039361D57ABB((&V_0), L_29, NULL);
		// break;
		goto IL_017a;
	}

IL_0110:
	{
		// instance.gradientMin = reader.Read<UnityEngine.Gradient>(ES3Type_Gradient.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_30 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_31 = ((ES3Type_Gradient_tCEF49FD7276F763D540521D30F768BB3C8A5C669_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Gradient_tCEF49FD7276F763D540521D30F768BB3C8A5C669_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_30);
		Gradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E* L_32;
		L_32 = GenericVirtualFuncInvoker1< Gradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E*, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisGradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E_mF96940E05808C12C825D9208C3A2156E5E7A51CD_RuntimeMethod_var, L_30, L_31);
		MinMaxGradient_set_gradientMin_m4152642243D268E1A95A7FC0B58E8F179A933609((&V_0), L_32, NULL);
		// break;
		goto IL_017a;
	}

IL_0124:
	{
		// instance.colorMax = reader.Read<UnityEngine.Color>(ES3Type_Color.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_33 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_34 = ((ES3Type_Color_t673DF1A1D899E95FF5E687BDC6EE2D5A8A98D958_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Color_t673DF1A1D899E95FF5E687BDC6EE2D5A8A98D958_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_33);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_35;
		L_35 = GenericVirtualFuncInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisColor_tD001788D726C3A7F1379BEED0260B9591F440C1F_m74315D96C24FBB27ED6BD82D4A055A7C3F63CF6D_RuntimeMethod_var, L_33, L_34);
		MinMaxGradient_set_colorMax_m28A85822E89FC80D1F5B49225DEC4ABCF86CAE33((&V_0), L_35, NULL);
		// break;
		goto IL_017a;
	}

IL_0138:
	{
		// instance.colorMin = reader.Read<UnityEngine.Color>(ES3Type_Color.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_36 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_37 = ((ES3Type_Color_t673DF1A1D899E95FF5E687BDC6EE2D5A8A98D958_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Color_t673DF1A1D899E95FF5E687BDC6EE2D5A8A98D958_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_36);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_38;
		L_38 = GenericVirtualFuncInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisColor_tD001788D726C3A7F1379BEED0260B9591F440C1F_m74315D96C24FBB27ED6BD82D4A055A7C3F63CF6D_RuntimeMethod_var, L_36, L_37);
		MinMaxGradient_set_colorMin_m7D3D987AB86FE01E7BC4AD856AAEE703F18EF1EF((&V_0), L_38, NULL);
		// break;
		goto IL_017a;
	}

IL_014c:
	{
		// instance.color = reader.Read<UnityEngine.Color>(ES3Type_Color.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_39 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_40 = ((ES3Type_Color_t673DF1A1D899E95FF5E687BDC6EE2D5A8A98D958_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Color_t673DF1A1D899E95FF5E687BDC6EE2D5A8A98D958_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_39);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_41;
		L_41 = GenericVirtualFuncInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisColor_tD001788D726C3A7F1379BEED0260B9591F440C1F_m74315D96C24FBB27ED6BD82D4A055A7C3F63CF6D_RuntimeMethod_var, L_39, L_40);
		MinMaxGradient_set_color_m0890DD6E249DE8552C04AFC4F959DD37EA05033B((&V_0), L_41, NULL);
		// break;
		goto IL_017a;
	}

IL_0160:
	{
		// instance.gradient = reader.Read<UnityEngine.Gradient>(ES3Type_Gradient.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_42 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_43 = ((ES3Type_Gradient_tCEF49FD7276F763D540521D30F768BB3C8A5C669_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Gradient_tCEF49FD7276F763D540521D30F768BB3C8A5C669_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_42);
		Gradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E* L_44;
		L_44 = GenericVirtualFuncInvoker1< Gradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E*, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisGradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E_mF96940E05808C12C825D9208C3A2156E5E7A51CD_RuntimeMethod_var, L_42, L_43);
		MinMaxGradient_set_gradient_m6AAD335DD1A2BD5C091B608C604825C32CFB825D((&V_0), L_44, NULL);
		// break;
		goto IL_017a;
	}

IL_0174:
	{
		// reader.Skip();
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_45 = ___reader0;
		NullCheck(L_45);
		VirtualActionInvoker0::Invoke(41 /* System.Void ES3Reader::Skip() */, L_45);
	}

IL_017a:
	{
		// while((propertyName = reader.ReadPropertyName()) != null)
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_46 = ___reader0;
		NullCheck(L_46);
		String_t* L_47;
		L_47 = VirtualFuncInvoker0< String_t* >::Invoke(21 /* System.String ES3Reader::ReadPropertyName() */, L_46);
		String_t* L_48 = L_47;
		V_1 = L_48;
		if (L_48)
		{
			goto IL_000d;
		}
	}
	{
		// return instance;
		MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69 L_49 = V_0;
		MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69 L_50 = L_49;
		RuntimeObject* L_51 = Box(MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69_il2cpp_TypeInfo_var, &L_50);
		return L_51;
	}
}
// System.Object ES3Types.ES3Type_MinMaxGradient::Read<System.Int64>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_MinMaxGradient_Read_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_m7B13E7E600581CCC27FCE959CA953D1A3BA1969A_gshared (ES3Type_MinMaxGradient_tDE2B65F0D3CF28657A6F04D48DA23B56D4F30CD9* __this, ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisColor_tD001788D726C3A7F1379BEED0260B9591F440C1F_m74315D96C24FBB27ED6BD82D4A055A7C3F63CF6D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisGradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E_mF96940E05808C12C825D9208C3A2156E5E7A51CD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisParticleSystemGradientMode_t5525A27D816AC28297038E5A98856B29095C4C1A_mDD6D024B2606F58AEBD67AEDBB6C628A585CE28E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_Color_t673DF1A1D899E95FF5E687BDC6EE2D5A8A98D958_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_Gradient_tCEF49FD7276F763D540521D30F768BB3C8A5C669_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3C5CBA73DE477A987F6CACAA771042311F4D7450);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral778102C3E486149200F26500543D0E817D018B30);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral852E085EDE387EE50CF0089DAF2F7960EF50B09A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral901354A635771DDD959835AF907BCC0E66B8C186);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral99B5B7F51660385511EC8AC7334ABBB898CFC2BF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAF248E82BE9EBA1ADBF067429FAEE5A5B6E05A74);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDD0F04E0A3F0BA1F904E0E27720F367F4228C69D);
		s_Il2CppMethodInitialized = true;
	}
	MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69 V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	uint32_t V_2 = 0;
	{
		// var instance = new UnityEngine.ParticleSystem.MinMaxGradient();
		il2cpp_codegen_initobj((&V_0), sizeof(MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69));
		goto IL_017a;
	}

IL_000d:
	{
		String_t* L_0 = V_1;
		uint32_t L_1;
		L_1 = U3CPrivateImplementationDetailsU3E_ComputeStringHash_m6EA1F233618497AEFF8902A5EDFA24C74E2F2876(L_0, NULL);
		V_2 = L_1;
		uint32_t L_2 = V_2;
		if ((!(((uint32_t)L_2) <= ((uint32_t)((int32_t)1650383577)))))
		{
			goto IL_003c;
		}
	}
	{
		uint32_t L_3 = V_2;
		if ((((int32_t)L_3) == ((int32_t)((int32_t)1031692888))))
		{
			goto IL_00c9;
		}
	}
	{
		uint32_t L_4 = V_2;
		if ((((int32_t)L_4) == ((int32_t)((int32_t)1414216983))))
		{
			goto IL_0093;
		}
	}
	{
		uint32_t L_5 = V_2;
		if ((((int32_t)L_5) == ((int32_t)((int32_t)1650383577))))
		{
			goto IL_0081;
		}
	}
	{
		goto IL_0174;
	}

IL_003c:
	{
		uint32_t L_6 = V_2;
		if ((!(((uint32_t)L_6) <= ((uint32_t)((int32_t)-630909162)))))
		{
			goto IL_005c;
		}
	}
	{
		uint32_t L_7 = V_2;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)-1661947227))))
		{
			goto IL_00db;
		}
	}
	{
		uint32_t L_8 = V_2;
		if ((((int32_t)L_8) == ((int32_t)((int32_t)-630909162))))
		{
			goto IL_00a5;
		}
	}
	{
		goto IL_0174;
	}

IL_005c:
	{
		uint32_t L_9 = V_2;
		if ((((int32_t)L_9) == ((int32_t)((int32_t)-330191948))))
		{
			goto IL_00b7;
		}
	}
	{
		uint32_t L_10 = V_2;
		if ((!(((uint32_t)L_10) == ((uint32_t)((int32_t)-328277998)))))
		{
			goto IL_0174;
		}
	}
	{
		String_t* L_11 = V_1;
		bool L_12;
		L_12 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_11, _stringLiteralAF248E82BE9EBA1ADBF067429FAEE5A5B6E05A74, NULL);
		if (L_12)
		{
			goto IL_00ed;
		}
	}
	{
		goto IL_0174;
	}

IL_0081:
	{
		String_t* L_13 = V_1;
		bool L_14;
		L_14 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_13, _stringLiteral3C5CBA73DE477A987F6CACAA771042311F4D7450, NULL);
		if (L_14)
		{
			goto IL_00fc;
		}
	}
	{
		goto IL_0174;
	}

IL_0093:
	{
		String_t* L_15 = V_1;
		bool L_16;
		L_16 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_15, _stringLiteral901354A635771DDD959835AF907BCC0E66B8C186, NULL);
		if (L_16)
		{
			goto IL_0110;
		}
	}
	{
		goto IL_0174;
	}

IL_00a5:
	{
		String_t* L_17 = V_1;
		bool L_18;
		L_18 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_17, _stringLiteral99B5B7F51660385511EC8AC7334ABBB898CFC2BF, NULL);
		if (L_18)
		{
			goto IL_0124;
		}
	}
	{
		goto IL_0174;
	}

IL_00b7:
	{
		String_t* L_19 = V_1;
		bool L_20;
		L_20 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_19, _stringLiteral852E085EDE387EE50CF0089DAF2F7960EF50B09A, NULL);
		if (L_20)
		{
			goto IL_0138;
		}
	}
	{
		goto IL_0174;
	}

IL_00c9:
	{
		String_t* L_21 = V_1;
		bool L_22;
		L_22 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_21, _stringLiteralDD0F04E0A3F0BA1F904E0E27720F367F4228C69D, NULL);
		if (L_22)
		{
			goto IL_014c;
		}
	}
	{
		goto IL_0174;
	}

IL_00db:
	{
		String_t* L_23 = V_1;
		bool L_24;
		L_24 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_23, _stringLiteral778102C3E486149200F26500543D0E817D018B30, NULL);
		if (L_24)
		{
			goto IL_0160;
		}
	}
	{
		goto IL_0174;
	}

IL_00ed:
	{
		// instance.mode = reader.Read<UnityEngine.ParticleSystemGradientMode>();
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_25 = ___reader0;
		NullCheck(L_25);
		int32_t L_26;
		L_26 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisParticleSystemGradientMode_t5525A27D816AC28297038E5A98856B29095C4C1A_mDD6D024B2606F58AEBD67AEDBB6C628A585CE28E_RuntimeMethod_var, L_25);
		MinMaxGradient_set_mode_mCD15C79CD57AD7D400D7B171E10BC5E24F64295E((&V_0), L_26, NULL);
		// break;
		goto IL_017a;
	}

IL_00fc:
	{
		// instance.gradientMax = reader.Read<UnityEngine.Gradient>(ES3Type_Gradient.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_27 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_28 = ((ES3Type_Gradient_tCEF49FD7276F763D540521D30F768BB3C8A5C669_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Gradient_tCEF49FD7276F763D540521D30F768BB3C8A5C669_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_27);
		Gradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E* L_29;
		L_29 = GenericVirtualFuncInvoker1< Gradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E*, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisGradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E_mF96940E05808C12C825D9208C3A2156E5E7A51CD_RuntimeMethod_var, L_27, L_28);
		MinMaxGradient_set_gradientMax_mC432C0AEA15FE74D6E6E6E2058BE039361D57ABB((&V_0), L_29, NULL);
		// break;
		goto IL_017a;
	}

IL_0110:
	{
		// instance.gradientMin = reader.Read<UnityEngine.Gradient>(ES3Type_Gradient.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_30 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_31 = ((ES3Type_Gradient_tCEF49FD7276F763D540521D30F768BB3C8A5C669_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Gradient_tCEF49FD7276F763D540521D30F768BB3C8A5C669_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_30);
		Gradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E* L_32;
		L_32 = GenericVirtualFuncInvoker1< Gradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E*, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisGradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E_mF96940E05808C12C825D9208C3A2156E5E7A51CD_RuntimeMethod_var, L_30, L_31);
		MinMaxGradient_set_gradientMin_m4152642243D268E1A95A7FC0B58E8F179A933609((&V_0), L_32, NULL);
		// break;
		goto IL_017a;
	}

IL_0124:
	{
		// instance.colorMax = reader.Read<UnityEngine.Color>(ES3Type_Color.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_33 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_34 = ((ES3Type_Color_t673DF1A1D899E95FF5E687BDC6EE2D5A8A98D958_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Color_t673DF1A1D899E95FF5E687BDC6EE2D5A8A98D958_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_33);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_35;
		L_35 = GenericVirtualFuncInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisColor_tD001788D726C3A7F1379BEED0260B9591F440C1F_m74315D96C24FBB27ED6BD82D4A055A7C3F63CF6D_RuntimeMethod_var, L_33, L_34);
		MinMaxGradient_set_colorMax_m28A85822E89FC80D1F5B49225DEC4ABCF86CAE33((&V_0), L_35, NULL);
		// break;
		goto IL_017a;
	}

IL_0138:
	{
		// instance.colorMin = reader.Read<UnityEngine.Color>(ES3Type_Color.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_36 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_37 = ((ES3Type_Color_t673DF1A1D899E95FF5E687BDC6EE2D5A8A98D958_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Color_t673DF1A1D899E95FF5E687BDC6EE2D5A8A98D958_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_36);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_38;
		L_38 = GenericVirtualFuncInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisColor_tD001788D726C3A7F1379BEED0260B9591F440C1F_m74315D96C24FBB27ED6BD82D4A055A7C3F63CF6D_RuntimeMethod_var, L_36, L_37);
		MinMaxGradient_set_colorMin_m7D3D987AB86FE01E7BC4AD856AAEE703F18EF1EF((&V_0), L_38, NULL);
		// break;
		goto IL_017a;
	}

IL_014c:
	{
		// instance.color = reader.Read<UnityEngine.Color>(ES3Type_Color.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_39 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_40 = ((ES3Type_Color_t673DF1A1D899E95FF5E687BDC6EE2D5A8A98D958_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Color_t673DF1A1D899E95FF5E687BDC6EE2D5A8A98D958_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_39);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_41;
		L_41 = GenericVirtualFuncInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisColor_tD001788D726C3A7F1379BEED0260B9591F440C1F_m74315D96C24FBB27ED6BD82D4A055A7C3F63CF6D_RuntimeMethod_var, L_39, L_40);
		MinMaxGradient_set_color_m0890DD6E249DE8552C04AFC4F959DD37EA05033B((&V_0), L_41, NULL);
		// break;
		goto IL_017a;
	}

IL_0160:
	{
		// instance.gradient = reader.Read<UnityEngine.Gradient>(ES3Type_Gradient.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_42 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_43 = ((ES3Type_Gradient_tCEF49FD7276F763D540521D30F768BB3C8A5C669_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Gradient_tCEF49FD7276F763D540521D30F768BB3C8A5C669_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_42);
		Gradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E* L_44;
		L_44 = GenericVirtualFuncInvoker1< Gradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E*, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisGradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E_mF96940E05808C12C825D9208C3A2156E5E7A51CD_RuntimeMethod_var, L_42, L_43);
		MinMaxGradient_set_gradient_m6AAD335DD1A2BD5C091B608C604825C32CFB825D((&V_0), L_44, NULL);
		// break;
		goto IL_017a;
	}

IL_0174:
	{
		// reader.Skip();
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_45 = ___reader0;
		NullCheck(L_45);
		VirtualActionInvoker0::Invoke(41 /* System.Void ES3Reader::Skip() */, L_45);
	}

IL_017a:
	{
		// while((propertyName = reader.ReadPropertyName()) != null)
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_46 = ___reader0;
		NullCheck(L_46);
		String_t* L_47;
		L_47 = VirtualFuncInvoker0< String_t* >::Invoke(21 /* System.String ES3Reader::ReadPropertyName() */, L_46);
		String_t* L_48 = L_47;
		V_1 = L_48;
		if (L_48)
		{
			goto IL_000d;
		}
	}
	{
		// return instance;
		MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69 L_49 = V_0;
		MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69 L_50 = L_49;
		RuntimeObject* L_51 = Box(MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69_il2cpp_TypeInfo_var, &L_50);
		return L_51;
	}
}
// System.Object ES3Types.ES3Type_MinMaxGradient::Read<UnityEngine.LayerMask>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_MinMaxGradient_Read_TisLayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB_m095C7075DC70EFB285609FB6CE8B2FE853C370F2_gshared (ES3Type_MinMaxGradient_tDE2B65F0D3CF28657A6F04D48DA23B56D4F30CD9* __this, ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisColor_tD001788D726C3A7F1379BEED0260B9591F440C1F_m74315D96C24FBB27ED6BD82D4A055A7C3F63CF6D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisGradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E_mF96940E05808C12C825D9208C3A2156E5E7A51CD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisParticleSystemGradientMode_t5525A27D816AC28297038E5A98856B29095C4C1A_mDD6D024B2606F58AEBD67AEDBB6C628A585CE28E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_Color_t673DF1A1D899E95FF5E687BDC6EE2D5A8A98D958_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_Gradient_tCEF49FD7276F763D540521D30F768BB3C8A5C669_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3C5CBA73DE477A987F6CACAA771042311F4D7450);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral778102C3E486149200F26500543D0E817D018B30);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral852E085EDE387EE50CF0089DAF2F7960EF50B09A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral901354A635771DDD959835AF907BCC0E66B8C186);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral99B5B7F51660385511EC8AC7334ABBB898CFC2BF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAF248E82BE9EBA1ADBF067429FAEE5A5B6E05A74);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDD0F04E0A3F0BA1F904E0E27720F367F4228C69D);
		s_Il2CppMethodInitialized = true;
	}
	MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69 V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	uint32_t V_2 = 0;
	{
		// var instance = new UnityEngine.ParticleSystem.MinMaxGradient();
		il2cpp_codegen_initobj((&V_0), sizeof(MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69));
		goto IL_017a;
	}

IL_000d:
	{
		String_t* L_0 = V_1;
		uint32_t L_1;
		L_1 = U3CPrivateImplementationDetailsU3E_ComputeStringHash_m6EA1F233618497AEFF8902A5EDFA24C74E2F2876(L_0, NULL);
		V_2 = L_1;
		uint32_t L_2 = V_2;
		if ((!(((uint32_t)L_2) <= ((uint32_t)((int32_t)1650383577)))))
		{
			goto IL_003c;
		}
	}
	{
		uint32_t L_3 = V_2;
		if ((((int32_t)L_3) == ((int32_t)((int32_t)1031692888))))
		{
			goto IL_00c9;
		}
	}
	{
		uint32_t L_4 = V_2;
		if ((((int32_t)L_4) == ((int32_t)((int32_t)1414216983))))
		{
			goto IL_0093;
		}
	}
	{
		uint32_t L_5 = V_2;
		if ((((int32_t)L_5) == ((int32_t)((int32_t)1650383577))))
		{
			goto IL_0081;
		}
	}
	{
		goto IL_0174;
	}

IL_003c:
	{
		uint32_t L_6 = V_2;
		if ((!(((uint32_t)L_6) <= ((uint32_t)((int32_t)-630909162)))))
		{
			goto IL_005c;
		}
	}
	{
		uint32_t L_7 = V_2;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)-1661947227))))
		{
			goto IL_00db;
		}
	}
	{
		uint32_t L_8 = V_2;
		if ((((int32_t)L_8) == ((int32_t)((int32_t)-630909162))))
		{
			goto IL_00a5;
		}
	}
	{
		goto IL_0174;
	}

IL_005c:
	{
		uint32_t L_9 = V_2;
		if ((((int32_t)L_9) == ((int32_t)((int32_t)-330191948))))
		{
			goto IL_00b7;
		}
	}
	{
		uint32_t L_10 = V_2;
		if ((!(((uint32_t)L_10) == ((uint32_t)((int32_t)-328277998)))))
		{
			goto IL_0174;
		}
	}
	{
		String_t* L_11 = V_1;
		bool L_12;
		L_12 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_11, _stringLiteralAF248E82BE9EBA1ADBF067429FAEE5A5B6E05A74, NULL);
		if (L_12)
		{
			goto IL_00ed;
		}
	}
	{
		goto IL_0174;
	}

IL_0081:
	{
		String_t* L_13 = V_1;
		bool L_14;
		L_14 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_13, _stringLiteral3C5CBA73DE477A987F6CACAA771042311F4D7450, NULL);
		if (L_14)
		{
			goto IL_00fc;
		}
	}
	{
		goto IL_0174;
	}

IL_0093:
	{
		String_t* L_15 = V_1;
		bool L_16;
		L_16 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_15, _stringLiteral901354A635771DDD959835AF907BCC0E66B8C186, NULL);
		if (L_16)
		{
			goto IL_0110;
		}
	}
	{
		goto IL_0174;
	}

IL_00a5:
	{
		String_t* L_17 = V_1;
		bool L_18;
		L_18 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_17, _stringLiteral99B5B7F51660385511EC8AC7334ABBB898CFC2BF, NULL);
		if (L_18)
		{
			goto IL_0124;
		}
	}
	{
		goto IL_0174;
	}

IL_00b7:
	{
		String_t* L_19 = V_1;
		bool L_20;
		L_20 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_19, _stringLiteral852E085EDE387EE50CF0089DAF2F7960EF50B09A, NULL);
		if (L_20)
		{
			goto IL_0138;
		}
	}
	{
		goto IL_0174;
	}

IL_00c9:
	{
		String_t* L_21 = V_1;
		bool L_22;
		L_22 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_21, _stringLiteralDD0F04E0A3F0BA1F904E0E27720F367F4228C69D, NULL);
		if (L_22)
		{
			goto IL_014c;
		}
	}
	{
		goto IL_0174;
	}

IL_00db:
	{
		String_t* L_23 = V_1;
		bool L_24;
		L_24 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_23, _stringLiteral778102C3E486149200F26500543D0E817D018B30, NULL);
		if (L_24)
		{
			goto IL_0160;
		}
	}
	{
		goto IL_0174;
	}

IL_00ed:
	{
		// instance.mode = reader.Read<UnityEngine.ParticleSystemGradientMode>();
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_25 = ___reader0;
		NullCheck(L_25);
		int32_t L_26;
		L_26 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisParticleSystemGradientMode_t5525A27D816AC28297038E5A98856B29095C4C1A_mDD6D024B2606F58AEBD67AEDBB6C628A585CE28E_RuntimeMethod_var, L_25);
		MinMaxGradient_set_mode_mCD15C79CD57AD7D400D7B171E10BC5E24F64295E((&V_0), L_26, NULL);
		// break;
		goto IL_017a;
	}

IL_00fc:
	{
		// instance.gradientMax = reader.Read<UnityEngine.Gradient>(ES3Type_Gradient.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_27 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_28 = ((ES3Type_Gradient_tCEF49FD7276F763D540521D30F768BB3C8A5C669_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Gradient_tCEF49FD7276F763D540521D30F768BB3C8A5C669_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_27);
		Gradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E* L_29;
		L_29 = GenericVirtualFuncInvoker1< Gradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E*, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisGradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E_mF96940E05808C12C825D9208C3A2156E5E7A51CD_RuntimeMethod_var, L_27, L_28);
		MinMaxGradient_set_gradientMax_mC432C0AEA15FE74D6E6E6E2058BE039361D57ABB((&V_0), L_29, NULL);
		// break;
		goto IL_017a;
	}

IL_0110:
	{
		// instance.gradientMin = reader.Read<UnityEngine.Gradient>(ES3Type_Gradient.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_30 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_31 = ((ES3Type_Gradient_tCEF49FD7276F763D540521D30F768BB3C8A5C669_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Gradient_tCEF49FD7276F763D540521D30F768BB3C8A5C669_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_30);
		Gradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E* L_32;
		L_32 = GenericVirtualFuncInvoker1< Gradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E*, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisGradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E_mF96940E05808C12C825D9208C3A2156E5E7A51CD_RuntimeMethod_var, L_30, L_31);
		MinMaxGradient_set_gradientMin_m4152642243D268E1A95A7FC0B58E8F179A933609((&V_0), L_32, NULL);
		// break;
		goto IL_017a;
	}

IL_0124:
	{
		// instance.colorMax = reader.Read<UnityEngine.Color>(ES3Type_Color.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_33 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_34 = ((ES3Type_Color_t673DF1A1D899E95FF5E687BDC6EE2D5A8A98D958_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Color_t673DF1A1D899E95FF5E687BDC6EE2D5A8A98D958_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_33);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_35;
		L_35 = GenericVirtualFuncInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisColor_tD001788D726C3A7F1379BEED0260B9591F440C1F_m74315D96C24FBB27ED6BD82D4A055A7C3F63CF6D_RuntimeMethod_var, L_33, L_34);
		MinMaxGradient_set_colorMax_m28A85822E89FC80D1F5B49225DEC4ABCF86CAE33((&V_0), L_35, NULL);
		// break;
		goto IL_017a;
	}

IL_0138:
	{
		// instance.colorMin = reader.Read<UnityEngine.Color>(ES3Type_Color.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_36 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_37 = ((ES3Type_Color_t673DF1A1D899E95FF5E687BDC6EE2D5A8A98D958_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Color_t673DF1A1D899E95FF5E687BDC6EE2D5A8A98D958_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_36);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_38;
		L_38 = GenericVirtualFuncInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisColor_tD001788D726C3A7F1379BEED0260B9591F440C1F_m74315D96C24FBB27ED6BD82D4A055A7C3F63CF6D_RuntimeMethod_var, L_36, L_37);
		MinMaxGradient_set_colorMin_m7D3D987AB86FE01E7BC4AD856AAEE703F18EF1EF((&V_0), L_38, NULL);
		// break;
		goto IL_017a;
	}

IL_014c:
	{
		// instance.color = reader.Read<UnityEngine.Color>(ES3Type_Color.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_39 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_40 = ((ES3Type_Color_t673DF1A1D899E95FF5E687BDC6EE2D5A8A98D958_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Color_t673DF1A1D899E95FF5E687BDC6EE2D5A8A98D958_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_39);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_41;
		L_41 = GenericVirtualFuncInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisColor_tD001788D726C3A7F1379BEED0260B9591F440C1F_m74315D96C24FBB27ED6BD82D4A055A7C3F63CF6D_RuntimeMethod_var, L_39, L_40);
		MinMaxGradient_set_color_m0890DD6E249DE8552C04AFC4F959DD37EA05033B((&V_0), L_41, NULL);
		// break;
		goto IL_017a;
	}

IL_0160:
	{
		// instance.gradient = reader.Read<UnityEngine.Gradient>(ES3Type_Gradient.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_42 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_43 = ((ES3Type_Gradient_tCEF49FD7276F763D540521D30F768BB3C8A5C669_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Gradient_tCEF49FD7276F763D540521D30F768BB3C8A5C669_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_42);
		Gradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E* L_44;
		L_44 = GenericVirtualFuncInvoker1< Gradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E*, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisGradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E_mF96940E05808C12C825D9208C3A2156E5E7A51CD_RuntimeMethod_var, L_42, L_43);
		MinMaxGradient_set_gradient_m6AAD335DD1A2BD5C091B608C604825C32CFB825D((&V_0), L_44, NULL);
		// break;
		goto IL_017a;
	}

IL_0174:
	{
		// reader.Skip();
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_45 = ___reader0;
		NullCheck(L_45);
		VirtualActionInvoker0::Invoke(41 /* System.Void ES3Reader::Skip() */, L_45);
	}

IL_017a:
	{
		// while((propertyName = reader.ReadPropertyName()) != null)
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_46 = ___reader0;
		NullCheck(L_46);
		String_t* L_47;
		L_47 = VirtualFuncInvoker0< String_t* >::Invoke(21 /* System.String ES3Reader::ReadPropertyName() */, L_46);
		String_t* L_48 = L_47;
		V_1 = L_48;
		if (L_48)
		{
			goto IL_000d;
		}
	}
	{
		// return instance;
		MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69 L_49 = V_0;
		MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69 L_50 = L_49;
		RuntimeObject* L_51 = Box(MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69_il2cpp_TypeInfo_var, &L_50);
		return L_51;
	}
}
// System.Object ES3Types.ES3Type_MinMaxGradient::Read<UnityEngine.Matrix4x4>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_MinMaxGradient_Read_TisMatrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6_m73185A73E1822C4AA1C6462296C724C1FDAD3FFD_gshared (ES3Type_MinMaxGradient_tDE2B65F0D3CF28657A6F04D48DA23B56D4F30CD9* __this, ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisColor_tD001788D726C3A7F1379BEED0260B9591F440C1F_m74315D96C24FBB27ED6BD82D4A055A7C3F63CF6D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisGradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E_mF96940E05808C12C825D9208C3A2156E5E7A51CD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisParticleSystemGradientMode_t5525A27D816AC28297038E5A98856B29095C4C1A_mDD6D024B2606F58AEBD67AEDBB6C628A585CE28E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_Color_t673DF1A1D899E95FF5E687BDC6EE2D5A8A98D958_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_Gradient_tCEF49FD7276F763D540521D30F768BB3C8A5C669_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3C5CBA73DE477A987F6CACAA771042311F4D7450);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral778102C3E486149200F26500543D0E817D018B30);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral852E085EDE387EE50CF0089DAF2F7960EF50B09A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral901354A635771DDD959835AF907BCC0E66B8C186);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral99B5B7F51660385511EC8AC7334ABBB898CFC2BF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAF248E82BE9EBA1ADBF067429FAEE5A5B6E05A74);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDD0F04E0A3F0BA1F904E0E27720F367F4228C69D);
		s_Il2CppMethodInitialized = true;
	}
	MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69 V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	uint32_t V_2 = 0;
	{
		// var instance = new UnityEngine.ParticleSystem.MinMaxGradient();
		il2cpp_codegen_initobj((&V_0), sizeof(MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69));
		goto IL_017a;
	}

IL_000d:
	{
		String_t* L_0 = V_1;
		uint32_t L_1;
		L_1 = U3CPrivateImplementationDetailsU3E_ComputeStringHash_m6EA1F233618497AEFF8902A5EDFA24C74E2F2876(L_0, NULL);
		V_2 = L_1;
		uint32_t L_2 = V_2;
		if ((!(((uint32_t)L_2) <= ((uint32_t)((int32_t)1650383577)))))
		{
			goto IL_003c;
		}
	}
	{
		uint32_t L_3 = V_2;
		if ((((int32_t)L_3) == ((int32_t)((int32_t)1031692888))))
		{
			goto IL_00c9;
		}
	}
	{
		uint32_t L_4 = V_2;
		if ((((int32_t)L_4) == ((int32_t)((int32_t)1414216983))))
		{
			goto IL_0093;
		}
	}
	{
		uint32_t L_5 = V_2;
		if ((((int32_t)L_5) == ((int32_t)((int32_t)1650383577))))
		{
			goto IL_0081;
		}
	}
	{
		goto IL_0174;
	}

IL_003c:
	{
		uint32_t L_6 = V_2;
		if ((!(((uint32_t)L_6) <= ((uint32_t)((int32_t)-630909162)))))
		{
			goto IL_005c;
		}
	}
	{
		uint32_t L_7 = V_2;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)-1661947227))))
		{
			goto IL_00db;
		}
	}
	{
		uint32_t L_8 = V_2;
		if ((((int32_t)L_8) == ((int32_t)((int32_t)-630909162))))
		{
			goto IL_00a5;
		}
	}
	{
		goto IL_0174;
	}

IL_005c:
	{
		uint32_t L_9 = V_2;
		if ((((int32_t)L_9) == ((int32_t)((int32_t)-330191948))))
		{
			goto IL_00b7;
		}
	}
	{
		uint32_t L_10 = V_2;
		if ((!(((uint32_t)L_10) == ((uint32_t)((int32_t)-328277998)))))
		{
			goto IL_0174;
		}
	}
	{
		String_t* L_11 = V_1;
		bool L_12;
		L_12 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_11, _stringLiteralAF248E82BE9EBA1ADBF067429FAEE5A5B6E05A74, NULL);
		if (L_12)
		{
			goto IL_00ed;
		}
	}
	{
		goto IL_0174;
	}

IL_0081:
	{
		String_t* L_13 = V_1;
		bool L_14;
		L_14 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_13, _stringLiteral3C5CBA73DE477A987F6CACAA771042311F4D7450, NULL);
		if (L_14)
		{
			goto IL_00fc;
		}
	}
	{
		goto IL_0174;
	}

IL_0093:
	{
		String_t* L_15 = V_1;
		bool L_16;
		L_16 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_15, _stringLiteral901354A635771DDD959835AF907BCC0E66B8C186, NULL);
		if (L_16)
		{
			goto IL_0110;
		}
	}
	{
		goto IL_0174;
	}

IL_00a5:
	{
		String_t* L_17 = V_1;
		bool L_18;
		L_18 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_17, _stringLiteral99B5B7F51660385511EC8AC7334ABBB898CFC2BF, NULL);
		if (L_18)
		{
			goto IL_0124;
		}
	}
	{
		goto IL_0174;
	}

IL_00b7:
	{
		String_t* L_19 = V_1;
		bool L_20;
		L_20 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_19, _stringLiteral852E085EDE387EE50CF0089DAF2F7960EF50B09A, NULL);
		if (L_20)
		{
			goto IL_0138;
		}
	}
	{
		goto IL_0174;
	}

IL_00c9:
	{
		String_t* L_21 = V_1;
		bool L_22;
		L_22 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_21, _stringLiteralDD0F04E0A3F0BA1F904E0E27720F367F4228C69D, NULL);
		if (L_22)
		{
			goto IL_014c;
		}
	}
	{
		goto IL_0174;
	}

IL_00db:
	{
		String_t* L_23 = V_1;
		bool L_24;
		L_24 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_23, _stringLiteral778102C3E486149200F26500543D0E817D018B30, NULL);
		if (L_24)
		{
			goto IL_0160;
		}
	}
	{
		goto IL_0174;
	}

IL_00ed:
	{
		// instance.mode = reader.Read<UnityEngine.ParticleSystemGradientMode>();
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_25 = ___reader0;
		NullCheck(L_25);
		int32_t L_26;
		L_26 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisParticleSystemGradientMode_t5525A27D816AC28297038E5A98856B29095C4C1A_mDD6D024B2606F58AEBD67AEDBB6C628A585CE28E_RuntimeMethod_var, L_25);
		MinMaxGradient_set_mode_mCD15C79CD57AD7D400D7B171E10BC5E24F64295E((&V_0), L_26, NULL);
		// break;
		goto IL_017a;
	}

IL_00fc:
	{
		// instance.gradientMax = reader.Read<UnityEngine.Gradient>(ES3Type_Gradient.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_27 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_28 = ((ES3Type_Gradient_tCEF49FD7276F763D540521D30F768BB3C8A5C669_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Gradient_tCEF49FD7276F763D540521D30F768BB3C8A5C669_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_27);
		Gradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E* L_29;
		L_29 = GenericVirtualFuncInvoker1< Gradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E*, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisGradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E_mF96940E05808C12C825D9208C3A2156E5E7A51CD_RuntimeMethod_var, L_27, L_28);
		MinMaxGradient_set_gradientMax_mC432C0AEA15FE74D6E6E6E2058BE039361D57ABB((&V_0), L_29, NULL);
		// break;
		goto IL_017a;
	}

IL_0110:
	{
		// instance.gradientMin = reader.Read<UnityEngine.Gradient>(ES3Type_Gradient.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_30 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_31 = ((ES3Type_Gradient_tCEF49FD7276F763D540521D30F768BB3C8A5C669_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Gradient_tCEF49FD7276F763D540521D30F768BB3C8A5C669_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_30);
		Gradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E* L_32;
		L_32 = GenericVirtualFuncInvoker1< Gradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E*, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisGradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E_mF96940E05808C12C825D9208C3A2156E5E7A51CD_RuntimeMethod_var, L_30, L_31);
		MinMaxGradient_set_gradientMin_m4152642243D268E1A95A7FC0B58E8F179A933609((&V_0), L_32, NULL);
		// break;
		goto IL_017a;
	}

IL_0124:
	{
		// instance.colorMax = reader.Read<UnityEngine.Color>(ES3Type_Color.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_33 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_34 = ((ES3Type_Color_t673DF1A1D899E95FF5E687BDC6EE2D5A8A98D958_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Color_t673DF1A1D899E95FF5E687BDC6EE2D5A8A98D958_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_33);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_35;
		L_35 = GenericVirtualFuncInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisColor_tD001788D726C3A7F1379BEED0260B9591F440C1F_m74315D96C24FBB27ED6BD82D4A055A7C3F63CF6D_RuntimeMethod_var, L_33, L_34);
		MinMaxGradient_set_colorMax_m28A85822E89FC80D1F5B49225DEC4ABCF86CAE33((&V_0), L_35, NULL);
		// break;
		goto IL_017a;
	}

IL_0138:
	{
		// instance.colorMin = reader.Read<UnityEngine.Color>(ES3Type_Color.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_36 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_37 = ((ES3Type_Color_t673DF1A1D899E95FF5E687BDC6EE2D5A8A98D958_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Color_t673DF1A1D899E95FF5E687BDC6EE2D5A8A98D958_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_36);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_38;
		L_38 = GenericVirtualFuncInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisColor_tD001788D726C3A7F1379BEED0260B9591F440C1F_m74315D96C24FBB27ED6BD82D4A055A7C3F63CF6D_RuntimeMethod_var, L_36, L_37);
		MinMaxGradient_set_colorMin_m7D3D987AB86FE01E7BC4AD856AAEE703F18EF1EF((&V_0), L_38, NULL);
		// break;
		goto IL_017a;
	}

IL_014c:
	{
		// instance.color = reader.Read<UnityEngine.Color>(ES3Type_Color.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_39 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_40 = ((ES3Type_Color_t673DF1A1D899E95FF5E687BDC6EE2D5A8A98D958_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Color_t673DF1A1D899E95FF5E687BDC6EE2D5A8A98D958_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_39);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_41;
		L_41 = GenericVirtualFuncInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisColor_tD001788D726C3A7F1379BEED0260B9591F440C1F_m74315D96C24FBB27ED6BD82D4A055A7C3F63CF6D_RuntimeMethod_var, L_39, L_40);
		MinMaxGradient_set_color_m0890DD6E249DE8552C04AFC4F959DD37EA05033B((&V_0), L_41, NULL);
		// break;
		goto IL_017a;
	}

IL_0160:
	{
		// instance.gradient = reader.Read<UnityEngine.Gradient>(ES3Type_Gradient.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_42 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_43 = ((ES3Type_Gradient_tCEF49FD7276F763D540521D30F768BB3C8A5C669_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Gradient_tCEF49FD7276F763D540521D30F768BB3C8A5C669_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_42);
		Gradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E* L_44;
		L_44 = GenericVirtualFuncInvoker1< Gradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E*, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisGradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E_mF96940E05808C12C825D9208C3A2156E5E7A51CD_RuntimeMethod_var, L_42, L_43);
		MinMaxGradient_set_gradient_m6AAD335DD1A2BD5C091B608C604825C32CFB825D((&V_0), L_44, NULL);
		// break;
		goto IL_017a;
	}

IL_0174:
	{
		// reader.Skip();
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_45 = ___reader0;
		NullCheck(L_45);
		VirtualActionInvoker0::Invoke(41 /* System.Void ES3Reader::Skip() */, L_45);
	}

IL_017a:
	{
		// while((propertyName = reader.ReadPropertyName()) != null)
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_46 = ___reader0;
		NullCheck(L_46);
		String_t* L_47;
		L_47 = VirtualFuncInvoker0< String_t* >::Invoke(21 /* System.String ES3Reader::ReadPropertyName() */, L_46);
		String_t* L_48 = L_47;
		V_1 = L_48;
		if (L_48)
		{
			goto IL_000d;
		}
	}
	{
		// return instance;
		MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69 L_49 = V_0;
		MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69 L_50 = L_49;
		RuntimeObject* L_51 = Box(MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69_il2cpp_TypeInfo_var, &L_50);
		return L_51;
	}
}
