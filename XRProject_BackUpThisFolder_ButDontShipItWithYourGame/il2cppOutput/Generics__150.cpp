#include "pch-cpp.hpp"





template <typename R>
struct VirtualFuncInvoker0
{
	typedef R (*Func)(void*,const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj,invokeData.method);
	}
};
template <typename R, typename T1>
struct VirtualFuncInvoker1
{
	typedef R (*Func)(void*,T1,const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj,p1,invokeData.method);
	}
};
template <typename T1, typename T2>
struct InterfaceActionInvoker2
{
	typedef void (*Action)(void*,T1,T2,const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj,p1,p2,invokeData.method);
	}
};
template <typename T1, typename T2>
struct InterfaceActionInvoker2Invoker;
template <typename T1, typename T2>
struct InterfaceActionInvoker2Invoker<T1, T2*>
{
	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2* p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		void* params[2] = { &p1, p2 };
		invokeData.method->invoker_method(il2cpp_codegen_get_method_pointer(invokeData.method), invokeData.method, obj, params, params[1]);
	}
};
template <typename R>
struct InterfaceFuncInvoker0
{
	typedef R (*Func)(void*,const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj,invokeData.method);
	}
};
template <typename R, typename T1>
struct InterfaceFuncInvoker1
{
	typedef R (*Func)(void*,T1,const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj,p1,invokeData.method);
	}
};
template <typename R, typename T1>
struct InterfaceFuncInvoker1Invoker;
template <typename R, typename T1>
struct InterfaceFuncInvoker1Invoker<R, T1*>
{
	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1* p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		R ret;
		void* params[1] = { p1 };
		invokeData.method->invoker_method(il2cpp_codegen_get_method_pointer(invokeData.method), invokeData.method, obj, params, &ret);
		return ret;
	}
};
template <typename R, typename T1>
struct InvokerFuncInvoker1;
template <typename R, typename T1>
struct InvokerFuncInvoker1<R, T1*>
{
	static inline R Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1)
	{
		R ret;
		void* params[1] = { p1 };
		method->invoker_method(methodPtr, method, obj, params, &ret);
		return ret;
	}
};

struct Dictionary_2_t5C8F46F5D57502270DD9E1DA8303B23C7FE85588;
struct Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83;
struct IEnumerator_1_tC180C74C2811CF8B0D961C36318C29C45CA4D3C0;
struct IEnumerator_1_t28314E682493CA936A454DA48BFB000CAF4F5D74;
struct IEnumerator_1_t799D3B14D3B489ADD1849FECFF9C32632A4A9BC1;
struct IEnumerator_1_tF217F730C27D3BB43EE57D8255E20D734F72499F;
struct IEnumerator_1_tE3FEADCA3A678A8D3C9C75F77098E1D5967F91D7;
struct IEnumerator_1_t80CBC53998B34A547697057BE05FFFD2E32DEEBA;
struct IEnumerator_1_t737E5D96E5E3657734509E507812DBA5E7EDD547;
struct IEnumerator_1_tE07B98951C528DCEC133D87CFB6966101285E71E;
struct IEnumerator_1_t6B91C7393B4861D1F0147FBB48E8428CDEF2C1CF;
struct IEnumerator_1_t0F66F32CA3E87B57379F9A8E071D35DEBFE6C6F6;
struct IEnumerator_1_t96293398300B5893696EDED7A1CD14F91EB606E2;
struct IEnumerator_1_t8323F8C060F59949739B2A1792BF110C73B196A2;
struct IEnumerator_1_t8C3EDDEC54B75D176EE7B2192E6E6FABF7DA82B8;
struct IEnumerator_1_tC0C08C9659581E6A592DEEC8CEE4A412A400B773;
struct IEnumerator_1_tD1458B7D83AB52223A503862617A8A15E008EE1E;
struct IEnumerator_1_t1DC9BF0C441509977AE52846CAE10D10A21C5FE0;
struct IEnumerator_1_t06541250E744F82918C560E3AF79DA72DFABEC49;
struct IEnumerator_1_t2390E479B6DB7DEA6DE39BB6212EBB88FD6163B4;
struct IEnumerator_1_t86FCABE0F59D7A68362A202DAAD028929596F0CB;
struct IEnumerator_1_tFD92D349677E89FA94B8AEC66F76C0041590FEDB;
struct IEnumerator_1_tE0AB7A893B84CDD526A0231522B32E7E3185F46B;
struct IEnumerator_1_t8E25F8DB2DA1ADEC757B03633F8B8ED604476D9D;
struct IEnumerator_1_t577C7DEA9FBE33B66A93DC97B8E083AEC45B4DC1;
struct IEnumerator_1_t4E5FEE9385CD173045CB9819FA991374A5A3DE69;
struct IEnumerator_1_t5A39BC8D4B46B3762131AB270AB6DA3994AB270A;
struct IEnumerator_1_tB00265C848CC8131C088CF2E0C06FA0AA8C3E66F;
struct IEnumerator_1_t19ED78A79E477DE27E49E0BB3753CE47AD5ABA2C;
struct IEnumerator_1_tB41B292FAFD525FC5C54D7E469F0BA1A193CA8B1;
struct IEnumerator_1_t9D5AD8C382C310ECCB5FF06F8FE44118996EE79D;
struct IEnumerator_1_t75CB2681E18F7F2791528FA2CA60361FDB5DA08D;
struct IEnumerator_1_tF74C952F97E24A4AFD21162637D82942513CB35B;
struct IEnumerator_1_t70473736C2E860779B5778F060AD52DB508F1783;
struct IEnumerator_1_t17AFB84DBC584CCC2F6B9EBEE20982287A2837A8;
struct IEnumerator_1_t370106682CD9420C2E62EE409E02BCD92635034E;
struct IEnumerator_1_t2969140D251E6333E0163EC60997B1A07E5BB75C;
struct IEnumerator_1_t07B286441E95060A9FC03DA7040B70DDA9E8C82D;
struct IEnumerator_1_t3941AF258267731100230811F91DF2B1B47F5A0F;
struct IEnumerator_1_tD347B69D3F9B752863168A9BA3E7E7A42DBAEC81;
struct IEnumerator_1_tFA909B65895E40AAB1C8DD427FCA2D3EE869603F;
struct IEnumerator_1_t8D51D6ACAF43BBDE86E753BAA55368CB825DDD09;
struct IEnumerator_1_tF17EC58B706E98F0C3B062174FE1446C4925836B;
struct IEnumerator_1_tAFACDC10FF938A10B20F78C0322E92593957D2EB;
struct IEnumerator_1_tB966430C7F3B51CC795B3F89C3CDDEB54A98B55F;
struct IList_1_tA91A36EBDB5CA519DEEF07D349BC80E1B054B681;
struct IList_1_t429E5FFEB09B32AA86D0CA81D144EC71604F2376;
struct IList_1_tFCA0CAAC72A5E0287096421FF3921AF6E549EBDE;
struct IList_1_t7C94015474540F0009E4F2C369960F5CBFF622E9;
struct IList_1_tD01F121A6E09A7FB2463237A05A02D8736665FDB;
struct IList_1_t1B290ECCB9D2FD52EB25227789136D5C40BD3D5D;
struct IList_1_t7DD9C9615378C587EB066B67143D3CCED6C5E873;
struct IList_1_t969553523152AD25969D45265A0DADD2CA2F64B3;
struct IList_1_t4482EF75625FD467CBED8CAC3910516F129E8646;
struct IList_1_t9888C5EB0D8AFE50C0EBE08C18A4CEB9798D0AD0;
struct IList_1_t3A0A6C3E926DC5755900551DFAE5A1A0FC77DD52;
struct IList_1_t41354D256C86A74719FA826D7CB4874A44AFA560;
struct IList_1_t4819BEE8AD954E5567BBA6F55DEA575721AFAFAA;
struct IList_1_t0DF1E5F56EE58E1A7F1FE26A676FC9FBF4D52A07;
struct IList_1_t4EEE459A249DDE104FA2E88234C593389EE5D291;
struct IList_1_t42FF818BEA4BF4853E17DE64566576B4020C72EF;
struct IList_1_t057158FE233DC0721BC83986546CB11DD55EFDAD;
struct IList_1_t394566ACD92198848950B83D3260ADE4FEF94687;
struct IList_1_t9494D7299B8BA218A07C73766611CEBFCAC2AA28;
struct IList_1_t82892C93D8E03E68BB11DCD20470A61C1188C7B5;
struct IList_1_t64513C56286FE36490C6B63CFC793D679EFCC194;
struct IList_1_t65C1A39C099C711D4AA657C04BD97713F2B72C29;
struct IList_1_t0342E7A273BFB9F6DC6BA0C05F6D8C39EFE12DC4;
struct IList_1_t5479864CD2D3E22A61DC37D3E553C17581DD7FDB;
struct IList_1_t7AE43E9BE210CC5A9A96EC37B2087048F30F80A1;
struct IList_1_tD4524336A640CBA52D02C55E127F36B55880C425;
struct IList_1_t5719E6CB0A573CD170D27E6486DDC7957E8B04C6;
struct IList_1_t7DC7A22F42EEFA1E8D796516A9F22282DF4EB5FA;
struct IList_1_tE00655F1AC041AB3B785699F9C5A6EA951470879;
struct IList_1_t8AC59FFD0F90EC2DAD4C3FA39B2A5851F9D2987A;
struct IList_1_t4D7D7DAB02DB631C876CF3E68462F0FD9F9A8985;
struct IList_1_t723F6D5137B11A931DA716028E7AB780AB396C40;
struct IList_1_t53022DA63CBD1D5B84D7A1EE9BFA05CEB304192B;
struct IList_1_t8F542B81A30EE4F6005571BA675A2F6F0EF8B0AC;
struct IList_1_t7C2346A2A9C19BBA14BE9DD134F0F582962F4F5A;
struct IList_1_t39FBBB7BE48EA70168507CDC94D6DD376A0B8B38;
struct IList_1_tB3871F0CC677858A46DDD30562BB0930039DB2C3;
struct IList_1_t166E7698F41C5D0654B5D8B28A6701DCEEBCB91F;
struct IList_1_t7B3BE05FF22559A6D63B8878D1E20E1F73864551;
struct IList_1_t8AD7A726E4D672A7D4DB67AF8EF68CE2676CB721;
struct IList_1_t9C81BE11088820A6B57A8D5386C8FD7B66907644;
struct IList_1_t66452534898CB35D382BE6BA3EA0F0161C139704;
struct IList_1_t63EC065987E768660619B97834CC5557A4631FCC;
struct List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD;
struct List_1_t41896DF347A129D13205BBFADE03DFB21E05E459;
struct List_1_t70EE7982F45810D4B024CF720D910E67974A3094;
struct List_1_tB0B308D151FBF226396B20253C1FF11CF7D10D3A;
struct ReadOnlyCollection_1_tBE445934E4BBFAD9104AC1AFC81C07456740D5B9;
struct ReadOnlyCollection_1_tB270E5CCE3D7607E7CDDBE1B835360A0E7B07DF4;
struct ReadOnlyCollection_1_tFF6716AACE48FE7B167A53ED10AE04FA2A2AB83A;
struct ReadOnlyCollection_1_t5F8B55EF85E52FBC5F41B42D70D13BC89D4C469A;
struct ReadOnlyCollection_1_tAC9F0ECFFCE3DC3797BE610439BF76ACB015D44E;
struct ReadOnlyCollection_1_t0279BBDF584EF96177DF75FA7A456E4629B2B09E;
struct ReadOnlyCollection_1_tF3F201D52E933A4489A4C06E8B1203099F42FB01;
struct ReadOnlyCollection_1_tABD6F7BDD581540C8981BBE5012B221D4701AA0A;
struct ReadOnlyCollection_1_tA06EBFED6AD4BFBC5FCBAEAFCDE3763C5110493C;
struct ReadOnlyCollection_1_tC00260BA5B1BEF55EBEF800DF50485F5D9806E4C;
struct ReadOnlyCollection_1_tDF87C8E26187E1D6C24D2DD02E4716CC5B7ACC34;
struct ReadOnlyCollection_1_tF64E6ECDE29B9EE2538F5A045045DF7774BB8466;
struct ReadOnlyCollection_1_tAE114E8C18E180A65629D9DF0D8911860274551C;
struct ReadOnlyCollection_1_tC5795E68B14E438B5B65AF3F4C3F50CA0F951647;
struct ReadOnlyCollection_1_t9E2776C66EA6797EAB405FB5507CCFDAA18084F6;
struct ReadOnlyCollection_1_tC097ADAD4728DA15D13F639EC263BD398D57B04F;
struct ReadOnlyCollection_1_tA87EA4F23BAC952A78BDE9A5B94F3091DB5C7861;
struct ReadOnlyCollection_1_tB6FD6BA75C6F479B6860FCBA235488206BF20E52;
struct ReadOnlyCollection_1_t85346C45E00BDEEDC76B78A9F7D2D0F363A5763B;
struct ReadOnlyCollection_1_t803A81BE343B15275BCD30A219ACAC97F0B9A1C8;
struct ReadOnlyCollection_1_t6C8AC0F6B679CC534CE688032CB9948629825DA3;
struct ReadOnlyCollection_1_t32BEC0647A8F6D582FC1DA6D0BC025666732CFA7;
struct ReadOnlyCollection_1_t728B5B26312A9F49C80371AB59BF28B329A732BB;
struct ReadOnlyCollection_1_tF58B2CF3C6F9DEF3999E54AF061B5E0531EAB681;
struct ReadOnlyCollection_1_t9ED77C33BF650F562B350CE0279E194D11C3611C;
struct ReadOnlyCollection_1_t95C4CE7A3281F650247DAD055168AC75CA2E0D94;
struct ReadOnlyCollection_1_tF7EFB99EE41013DF4F1A2A749D0A473AE2657BC5;
struct ReadOnlyCollection_1_t06F71F2F3EBC6E0A34714E0A7EB3367B6D248263;
struct ReadOnlyCollection_1_tD86E076A19D3DF6CFD1AC3FEE937BD0FB0B39AF7;
struct ReadOnlyCollection_1_t5B7AA4E006906DE6818A44873F2D5987EFBF3AB8;
struct ReadOnlyCollection_1_tA097AD399F1ED95CBDEFC0663790A10C4A43DFB8;
struct ReadOnlyCollection_1_t57A9EA1D0B6B2A5908DD58EA8C84F29F53D509A1;
struct ReadOnlyCollection_1_tDA9EBC2C2934508604BBB2BA544E97C8DA1907BF;
struct ReadOnlyCollection_1_t502D44622D39E2DFE6DABEFCEA766AC61E338C30;
struct ReadOnlyCollection_1_t6902277BA0F804A3B22466CBEF4B07E1FB12E479;
struct ReadOnlyCollection_1_t430A5D085E133CDE36E20D9D8D8DFCE0600F90C9;
struct ReadOnlyCollection_1_t29EC75B4E7474909E58565DFC335C2465CD0CF16;
struct ReadOnlyCollection_1_t0072B9B1BE9DDF9C8BF0ABE59E7EEBD11BFAA293;
struct ReadOnlyCollection_1_t00EFCE24C7E2AF195B108C1FC1E1BE4F7007EC1E;
struct ReadOnlyCollection_1_t24949DD08B73EB984B4A07623392ECDAD4BA28D9;
struct ReadOnlyCollection_1_tA0E2E00CE27E5818B4957D61CE7C01975DCE7874;
struct ReadOnlyCollection_1_t045C5F3279EE63047DD20057F0ABA1319690AE3D;
struct ReadOnlyCollection_1_t0A65BF0F900AF63819F1C26D6E71BFE75180183D;
struct UnityEvent_1_tFE94844E0086443D87D620E4DCEFFEDA08BA19DE;
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
struct StyleValueHandleU5BU5D_t66B7732469E9E30B1FB9A6E386315DAB36914ADE;
struct StyleVariableU5BU5D_tFE786BD2C1F914C1605C072F0BB10C405C0B4D96;
struct SubstringU5BU5D_t9973080FDB519ED771E9FB3E6FDC90DF45211B77;
struct TimeValueU5BU5D_t3EB79C5975D39A0E711250FD8A9547F5312746DE;
struct TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB;
struct UICharInfoU5BU5D_t98D25C0197327978FA4E11B3518901A4839E086C;
struct UILineInfoU5BU5D_tDD6C8909B58F997A6FB1A17F360E8DBE387204BC;
struct UIVertexU5BU5D_tBC532486B45D071A520751A90E819C77BA4E3D2F;
struct UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA;
struct UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299;
struct UnifiedEventDataU5BU5D_tA6F386C49FA6BF649CF8CC1E04E4042455FDF6BF;
struct UniqueStyleStringU5BU5D_t47384C749ED152804F196C5613B5145349958ECA;
struct UsageHintU5BU5D_t678E554916FB102DB4E2DC2C6CC0976DC145BF23;
struct UxmlNamespaceDefinitionU5BU5D_t28B781ECD62CAF3666F6920255948A5FA6B3D319;
struct UxmlPropertyU5BU5D_tD5BDB1BE0719FB862DB6B3E0CB35022536021BCB;
struct Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA;
struct Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C;
struct Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD;
struct VertexAttributeDescriptorU5BU5D_t5D10E60612F12777F59B7E33939F9075DB0E02B2;
struct X509ChainStatusU5BU5D_tA4CB502E13E6D62B9C824B15F3193FE7EC889299;
struct XRCommonHandGesturesStateU5BU5D_tB82A1CD3BED9F0290EC8832DC2E4A7966580DF8C;
struct XRFeatureDescriptorU5BU5D_tBB735747E74DA05050B124BFE3525E40EC4114A7;
struct XRHandAimStateU5BU5D_t0076289643604F274ED85C15E336BB86EADDDB4F;
struct XRHandCaptureFrameU5BU5D_t3EB556AB49AB0D0EF28F537695ECC47024C73EA7;
struct XRHandCaptureSnapshotU5BU5D_t82ACB21B558889DC6ABE7C08D0CCAAEE90C37083;
struct XRHandJointU5BU5D_t194C7684C33D3688873DB8DB9B2A941566857EA1;
struct XRNodeStateU5BU5D_tEC64805398059D44C2FBA68AABAEFFB262B93845;
struct XRViewU5BU5D_t46B2B3C0D45A670846E736AFB362448972CB513D;
struct XrAgenticExternalToolParameterMETAX1U5BU5D_t4371BF54F74A98EE9DB85976F39AEF422DCBE143;
struct __CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979;
struct __Il2CppByteEnumU5BU5D_t4D02DF3357DB0BD78CB7064114CAFFD248D6999A;
struct __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC;
struct __Il2CppInt32EnumU5BU5D_t8FBDB13799B3615AA893F06F601FF09189B04297;
struct __Il2CppUInt32EnumU5BU5D_t59DD627323F45C05F28FE49E0DEA327606079F43;
struct float2U5BU5D_t7F04848FC796653244477DC40830B0A39D67D350;
struct IdsOfInstancesU5BU5D_t6627296D68BD3B37D56902FC2586A0C05853E3BF;
struct ShadowResolutionRequestU5BU5D_tC33A2E5E2712B8688E21C80BB2350155D029B334;
struct ConnectionEndpointU5BU5D_tC7EA802FB1607F7F212A724C8652F110B759E519;
struct ApiLayerU5BU5D_tA69051E32F2652E385B1E8FF51C4CFF6E0E2A7AF;
struct AwaitableAndFrameIndexU5BU5D_tFE5E09101F753E8B28D639C161FBC4D34F939560;
struct OrderBlockU5BU5D_tD67C39FB212889AFAAB991BE1AE144ED8D35EE88;
struct PageU5BU5D_tFCE8198B6D8AF479FBA546791B9CF3DD8A2D75C9;
struct ButtonClickActionU5BU5D_tF4F7652B56313FBAF9FD3DCEC7E302D3F1DA772A;
struct AttributeOverrideRangeU5BU5D_t1140F5D222769964617E7C7EA9F5AD34F13F5E46;
struct SerializedDataOverrideRangeU5BU5D_t88081D15A1E9C308C93F1BBA4820D764A8DAC24F;
struct Awaitable_t690337FEC1C411606E233EA36A41337B931C23CB;
struct Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235;
struct ICollection_t37E7B9DC5B4EF41D190D607F92835BF1171C0E8E;
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
struct IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA;
struct InputActionReference_t64730C6B41271E0983FC21BFB416169F5D6BC4A1;
struct MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553;
struct Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4;
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
struct String_t;
struct StyleSheet_t6FAF43FCDB45BC6BED0522A222FD4C1A9BB10428;
struct Type_t;
struct UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7;
struct UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977;
struct VisualTreeAsset_tFB5BF81F0780A412AE5A7C2C552B3EEA64EA2EEB;
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
struct XRHandCaptureSequence_t2502B9E7312D8143A2C53EF4A8CE0987BE2C3237;

IL2CPP_EXTERN_C RuntimeClass* ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ICollection_t37E7B9DC5B4EF41D190D607F92835BF1171C0E8E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerable_t6331596D5DD37C462B1B8D49CF6B319B00AB7131_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RuntimeObject_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Type_t_il2cpp_TypeInfo_var;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;
struct StyleValueHandle_t5831643AAA7AD8C5C43A4498C5E0A2545F78227D;
struct XRHandJoint_tDB955774276659AFD2294D516FC8A76A51E94783;

struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
struct StyleVariableU5BU5D_tFE786BD2C1F914C1605C072F0BB10C405C0B4D96;
struct SubstringU5BU5D_t9973080FDB519ED771E9FB3E6FDC90DF45211B77;
struct TimeValueU5BU5D_t3EB79C5975D39A0E711250FD8A9547F5312746DE;
struct UICharInfoU5BU5D_t98D25C0197327978FA4E11B3518901A4839E086C;
struct UILineInfoU5BU5D_tDD6C8909B58F997A6FB1A17F360E8DBE387204BC;
struct UIVertexU5BU5D_tBC532486B45D071A520751A90E819C77BA4E3D2F;
struct UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA;
struct UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299;
struct UnifiedEventDataU5BU5D_tA6F386C49FA6BF649CF8CC1E04E4042455FDF6BF;
struct UniqueStyleStringU5BU5D_t47384C749ED152804F196C5613B5145349958ECA;
struct UsageHintU5BU5D_t678E554916FB102DB4E2DC2C6CC0976DC145BF23;
struct UxmlNamespaceDefinitionU5BU5D_t28B781ECD62CAF3666F6920255948A5FA6B3D319;
struct UxmlPropertyU5BU5D_tD5BDB1BE0719FB862DB6B3E0CB35022536021BCB;
struct Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA;
struct Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C;
struct Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD;
struct VertexAttributeDescriptorU5BU5D_t5D10E60612F12777F59B7E33939F9075DB0E02B2;
struct X509ChainStatusU5BU5D_tA4CB502E13E6D62B9C824B15F3193FE7EC889299;
struct XRCommonHandGesturesStateU5BU5D_tB82A1CD3BED9F0290EC8832DC2E4A7966580DF8C;
struct XRFeatureDescriptorU5BU5D_tBB735747E74DA05050B124BFE3525E40EC4114A7;
struct XRHandAimStateU5BU5D_t0076289643604F274ED85C15E336BB86EADDDB4F;
struct XRHandCaptureFrameU5BU5D_t3EB556AB49AB0D0EF28F537695ECC47024C73EA7;
struct XRHandCaptureSnapshotU5BU5D_t82ACB21B558889DC6ABE7C08D0CCAAEE90C37083;
struct XRHandJointU5BU5D_t194C7684C33D3688873DB8DB9B2A941566857EA1;
struct XRNodeStateU5BU5D_tEC64805398059D44C2FBA68AABAEFFB262B93845;
struct XRViewU5BU5D_t46B2B3C0D45A670846E736AFB362448972CB513D;
struct XrAgenticExternalToolParameterMETAX1U5BU5D_t4371BF54F74A98EE9DB85976F39AEF422DCBE143;
struct __CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979;
struct __Il2CppByteEnumU5BU5D_t4D02DF3357DB0BD78CB7064114CAFFD248D6999A;
struct __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC;
struct __Il2CppInt32EnumU5BU5D_t8FBDB13799B3615AA893F06F601FF09189B04297;
struct __Il2CppUInt32EnumU5BU5D_t59DD627323F45C05F28FE49E0DEA327606079F43;
struct float2U5BU5D_t7F04848FC796653244477DC40830B0A39D67D350;
struct IdsOfInstancesU5BU5D_t6627296D68BD3B37D56902FC2586A0C05853E3BF;
struct ShadowResolutionRequestU5BU5D_tC33A2E5E2712B8688E21C80BB2350155D029B334;
struct ConnectionEndpointU5BU5D_tC7EA802FB1607F7F212A724C8652F110B759E519;
struct ApiLayerU5BU5D_tA69051E32F2652E385B1E8FF51C4CFF6E0E2A7AF;
struct AwaitableAndFrameIndexU5BU5D_tFE5E09101F753E8B28D639C161FBC4D34F939560;
struct OrderBlockU5BU5D_tD67C39FB212889AFAAB991BE1AE144ED8D35EE88;
struct PageU5BU5D_tFCE8198B6D8AF479FBA546791B9CF3DD8A2D75C9;
struct ButtonClickActionU5BU5D_tF4F7652B56313FBAF9FD3DCEC7E302D3F1DA772A;
struct AttributeOverrideRangeU5BU5D_t1140F5D222769964617E7C7EA9F5AD34F13F5E46;
struct SerializedDataOverrideRangeU5BU5D_t88081D15A1E9C308C93F1BBA4820D764A8DAC24F;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
struct ReadOnlyCollection_1_tBE445934E4BBFAD9104AC1AFC81C07456740D5B9  : public RuntimeObject
{
	RuntimeObject* ___list;
	RuntimeObject* ____syncRoot;
};
struct ReadOnlyCollection_1_tB270E5CCE3D7607E7CDDBE1B835360A0E7B07DF4  : public RuntimeObject
{
	RuntimeObject* ___list;
	RuntimeObject* ____syncRoot;
};
struct ReadOnlyCollection_1_tFF6716AACE48FE7B167A53ED10AE04FA2A2AB83A  : public RuntimeObject
{
	RuntimeObject* ___list;
	RuntimeObject* ____syncRoot;
};
struct ReadOnlyCollection_1_t5F8B55EF85E52FBC5F41B42D70D13BC89D4C469A  : public RuntimeObject
{
	RuntimeObject* ___list;
	RuntimeObject* ____syncRoot;
};
struct ReadOnlyCollection_1_tAC9F0ECFFCE3DC3797BE610439BF76ACB015D44E  : public RuntimeObject
{
	RuntimeObject* ___list;
	RuntimeObject* ____syncRoot;
};
struct ReadOnlyCollection_1_t0279BBDF584EF96177DF75FA7A456E4629B2B09E  : public RuntimeObject
{
	RuntimeObject* ___list;
	RuntimeObject* ____syncRoot;
};
struct ReadOnlyCollection_1_tF3F201D52E933A4489A4C06E8B1203099F42FB01  : public RuntimeObject
{
	RuntimeObject* ___list;
	RuntimeObject* ____syncRoot;
};
struct ReadOnlyCollection_1_tABD6F7BDD581540C8981BBE5012B221D4701AA0A  : public RuntimeObject
{
	RuntimeObject* ___list;
	RuntimeObject* ____syncRoot;
};
struct ReadOnlyCollection_1_tA06EBFED6AD4BFBC5FCBAEAFCDE3763C5110493C  : public RuntimeObject
{
	RuntimeObject* ___list;
	RuntimeObject* ____syncRoot;
};
struct ReadOnlyCollection_1_tC00260BA5B1BEF55EBEF800DF50485F5D9806E4C  : public RuntimeObject
{
	RuntimeObject* ___list;
	RuntimeObject* ____syncRoot;
};
struct ReadOnlyCollection_1_tDF87C8E26187E1D6C24D2DD02E4716CC5B7ACC34  : public RuntimeObject
{
	RuntimeObject* ___list;
	RuntimeObject* ____syncRoot;
};
struct ReadOnlyCollection_1_tF64E6ECDE29B9EE2538F5A045045DF7774BB8466  : public RuntimeObject
{
	RuntimeObject* ___list;
	RuntimeObject* ____syncRoot;
};
struct ReadOnlyCollection_1_tAE114E8C18E180A65629D9DF0D8911860274551C  : public RuntimeObject
{
	RuntimeObject* ___list;
	RuntimeObject* ____syncRoot;
};
struct ReadOnlyCollection_1_tC5795E68B14E438B5B65AF3F4C3F50CA0F951647  : public RuntimeObject
{
	RuntimeObject* ___list;
	RuntimeObject* ____syncRoot;
};
struct ReadOnlyCollection_1_t9E2776C66EA6797EAB405FB5507CCFDAA18084F6  : public RuntimeObject
{
	RuntimeObject* ___list;
	RuntimeObject* ____syncRoot;
};
struct ReadOnlyCollection_1_tC097ADAD4728DA15D13F639EC263BD398D57B04F  : public RuntimeObject
{
	RuntimeObject* ___list;
	RuntimeObject* ____syncRoot;
};
struct ReadOnlyCollection_1_tA87EA4F23BAC952A78BDE9A5B94F3091DB5C7861  : public RuntimeObject
{
	RuntimeObject* ___list;
	RuntimeObject* ____syncRoot;
};
struct ReadOnlyCollection_1_tB6FD6BA75C6F479B6860FCBA235488206BF20E52  : public RuntimeObject
{
	RuntimeObject* ___list;
	RuntimeObject* ____syncRoot;
};
struct ReadOnlyCollection_1_t85346C45E00BDEEDC76B78A9F7D2D0F363A5763B  : public RuntimeObject
{
	RuntimeObject* ___list;
	RuntimeObject* ____syncRoot;
};
struct ReadOnlyCollection_1_t803A81BE343B15275BCD30A219ACAC97F0B9A1C8  : public RuntimeObject
{
	RuntimeObject* ___list;
	RuntimeObject* ____syncRoot;
};
struct ReadOnlyCollection_1_t6C8AC0F6B679CC534CE688032CB9948629825DA3  : public RuntimeObject
{
	RuntimeObject* ___list;
	RuntimeObject* ____syncRoot;
};
struct ReadOnlyCollection_1_t32BEC0647A8F6D582FC1DA6D0BC025666732CFA7  : public RuntimeObject
{
	RuntimeObject* ___list;
	RuntimeObject* ____syncRoot;
};
struct ReadOnlyCollection_1_t728B5B26312A9F49C80371AB59BF28B329A732BB  : public RuntimeObject
{
	RuntimeObject* ___list;
	RuntimeObject* ____syncRoot;
};
struct ReadOnlyCollection_1_tF58B2CF3C6F9DEF3999E54AF061B5E0531EAB681  : public RuntimeObject
{
	RuntimeObject* ___list;
	RuntimeObject* ____syncRoot;
};
struct ReadOnlyCollection_1_t9ED77C33BF650F562B350CE0279E194D11C3611C  : public RuntimeObject
{
	RuntimeObject* ___list;
	RuntimeObject* ____syncRoot;
};
struct ReadOnlyCollection_1_t95C4CE7A3281F650247DAD055168AC75CA2E0D94  : public RuntimeObject
{
	RuntimeObject* ___list;
	RuntimeObject* ____syncRoot;
};
struct ReadOnlyCollection_1_tF7EFB99EE41013DF4F1A2A749D0A473AE2657BC5  : public RuntimeObject
{
	RuntimeObject* ___list;
	RuntimeObject* ____syncRoot;
};
struct ReadOnlyCollection_1_t06F71F2F3EBC6E0A34714E0A7EB3367B6D248263  : public RuntimeObject
{
	RuntimeObject* ___list;
	RuntimeObject* ____syncRoot;
};
struct ReadOnlyCollection_1_tD86E076A19D3DF6CFD1AC3FEE937BD0FB0B39AF7  : public RuntimeObject
{
	RuntimeObject* ___list;
	RuntimeObject* ____syncRoot;
};
struct ReadOnlyCollection_1_t5B7AA4E006906DE6818A44873F2D5987EFBF3AB8  : public RuntimeObject
{
	RuntimeObject* ___list;
	RuntimeObject* ____syncRoot;
};
struct ReadOnlyCollection_1_tA097AD399F1ED95CBDEFC0663790A10C4A43DFB8  : public RuntimeObject
{
	RuntimeObject* ___list;
	RuntimeObject* ____syncRoot;
};
struct ReadOnlyCollection_1_t57A9EA1D0B6B2A5908DD58EA8C84F29F53D509A1  : public RuntimeObject
{
	RuntimeObject* ___list;
	RuntimeObject* ____syncRoot;
};
struct ReadOnlyCollection_1_tDA9EBC2C2934508604BBB2BA544E97C8DA1907BF  : public RuntimeObject
{
	RuntimeObject* ___list;
	RuntimeObject* ____syncRoot;
};
struct ReadOnlyCollection_1_t502D44622D39E2DFE6DABEFCEA766AC61E338C30  : public RuntimeObject
{
	RuntimeObject* ___list;
	RuntimeObject* ____syncRoot;
};
struct ReadOnlyCollection_1_t6902277BA0F804A3B22466CBEF4B07E1FB12E479  : public RuntimeObject
{
	RuntimeObject* ___list;
	RuntimeObject* ____syncRoot;
};
struct ReadOnlyCollection_1_t430A5D085E133CDE36E20D9D8D8DFCE0600F90C9  : public RuntimeObject
{
	RuntimeObject* ___list;
	RuntimeObject* ____syncRoot;
};
struct ReadOnlyCollection_1_t29EC75B4E7474909E58565DFC335C2465CD0CF16  : public RuntimeObject
{
	RuntimeObject* ___list;
	RuntimeObject* ____syncRoot;
};
struct ReadOnlyCollection_1_t0072B9B1BE9DDF9C8BF0ABE59E7EEBD11BFAA293  : public RuntimeObject
{
	RuntimeObject* ___list;
	RuntimeObject* ____syncRoot;
};
struct ReadOnlyCollection_1_t00EFCE24C7E2AF195B108C1FC1E1BE4F7007EC1E  : public RuntimeObject
{
	RuntimeObject* ___list;
	RuntimeObject* ____syncRoot;
};
struct ReadOnlyCollection_1_t24949DD08B73EB984B4A07623392ECDAD4BA28D9  : public RuntimeObject
{
	RuntimeObject* ___list;
	RuntimeObject* ____syncRoot;
};
struct ReadOnlyCollection_1_tA0E2E00CE27E5818B4957D61CE7C01975DCE7874  : public RuntimeObject
{
	RuntimeObject* ___list;
	RuntimeObject* ____syncRoot;
};
struct ReadOnlyCollection_1_t045C5F3279EE63047DD20057F0ABA1319690AE3D  : public RuntimeObject
{
	RuntimeObject* ___list;
	RuntimeObject* ____syncRoot;
};
struct ReadOnlyCollection_1_t0A65BF0F900AF63819F1C26D6E71BFE75180183D  : public RuntimeObject
{
	RuntimeObject* ___list;
	RuntimeObject* ____syncRoot;
};
struct MemberInfo_t  : public RuntimeObject
{
};
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F  : public RuntimeObject
{
};
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_pinvoke
{
};
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_com
{
};
struct Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01 
{
	bool ___hasValue;
	bool ___value;
};
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	bool ___m_value;
};
struct Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B 
{
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			int32_t ___rgba;
		};
		#pragma pack(pop, tp)
		struct
		{
			int32_t ___rgba_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			uint8_t ___r;
		};
		#pragma pack(pop, tp)
		struct
		{
			uint8_t ___r_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___g_OffsetPadding[1];
			uint8_t ___g;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___g_OffsetPadding_forAlignmentOnly[1];
			uint8_t ___g_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___b_OffsetPadding[2];
			uint8_t ___b;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___b_OffsetPadding_forAlignmentOnly[2];
			uint8_t ___b_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___a_OffsetPadding[3];
			uint8_t ___a;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___a_OffsetPadding_forAlignmentOnly[3];
			uint8_t ___a_forAlignmentOnly;
		};
	};
};
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2  : public ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F
{
};
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_marshaled_pinvoke
{
};
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_marshaled_com
{
};
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C 
{
	int32_t ___m_value;
};
struct IntPtr_t 
{
	void* ___m_value;
};
struct Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 
{
	float ___m00;
	float ___m10;
	float ___m20;
	float ___m30;
	float ___m01;
	float ___m11;
	float ___m21;
	float ___m31;
	float ___m02;
	float ___m12;
	float ___m22;
	float ___m32;
	float ___m03;
	float ___m13;
	float ___m23;
	float ___m33;
};
struct Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 
{
	float ___x;
	float ___y;
	float ___z;
	float ___w;
};
struct Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D 
{
	float ___m_XMin;
	float ___m_YMin;
	float ___m_Width;
	float ___m_Height;
};
struct StyleVariable_t5D4DEC936102A13961F4F2C6214B83D6CDC56269 
{
	int32_t ___nameId;
	int32_t ___hash;
	StyleSheet_t6FAF43FCDB45BC6BED0522A222FD4C1A9BB10428* ___sheet;
	StyleValueHandleU5BU5D_t66B7732469E9E30B1FB9A6E386315DAB36914ADE* ___handles;
};
struct StyleVariable_t5D4DEC936102A13961F4F2C6214B83D6CDC56269_marshaled_pinvoke
{
	int32_t ___nameId;
	int32_t ___hash;
	StyleSheet_t6FAF43FCDB45BC6BED0522A222FD4C1A9BB10428* ___sheet;
	StyleValueHandle_t5831643AAA7AD8C5C43A4498C5E0A2545F78227D* ___handles;
};
struct StyleVariable_t5D4DEC936102A13961F4F2C6214B83D6CDC56269_marshaled_com
{
	int32_t ___nameId;
	int32_t ___hash;
	StyleSheet_t6FAF43FCDB45BC6BED0522A222FD4C1A9BB10428* ___sheet;
	StyleValueHandle_t5831643AAA7AD8C5C43A4498C5E0A2545F78227D* ___handles;
};
struct Substring_t2E16755269E6716C22074D6BC0A9099915E67849 
{
	String_t* ___m_String;
	int32_t ___m_Index;
	int32_t ___m_Length;
};
struct Substring_t2E16755269E6716C22074D6BC0A9099915E67849_marshaled_pinvoke
{
	char* ___m_String;
	int32_t ___m_Index;
	int32_t ___m_Length;
};
struct Substring_t2E16755269E6716C22074D6BC0A9099915E67849_marshaled_com
{
	Il2CppChar* ___m_String;
	int32_t ___m_Index;
	int32_t ___m_Length;
};
struct UILineInfo_tC6FF4F85BD2316FADA2148A1789B3FF0B05A6CAC 
{
	int32_t ___startCharIdx;
	int32_t ___height;
	float ___topY;
	float ___leading;
};
struct UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B 
{
	uint32_t ___m_value;
};
struct UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF 
{
	uint64_t ___m_value;
};
struct UniqueStyleString_tE980AA033ABB00413A3139B42FF22750952DAECF 
{
	int32_t ___m_Id;
};
struct UsageHint_tFD7259AF9E91500CF1D0CE602394B40FD2397AB1 
{
	String_t* ___content;
};
struct UsageHint_tFD7259AF9E91500CF1D0CE602394B40FD2397AB1_marshaled_pinvoke
{
	char* ___content;
};
struct UsageHint_tFD7259AF9E91500CF1D0CE602394B40FD2397AB1_marshaled_com
{
	Il2CppChar* ___content;
};
struct UxmlNamespaceDefinition_t6B70CA125A4C1D5F74F1C901A6F4F72637F6621B 
{
	String_t* ___prefix;
	String_t* ___resolvedNamespace;
};
struct UxmlNamespaceDefinition_t6B70CA125A4C1D5F74F1C901A6F4F72637F6621B_marshaled_pinvoke
{
	char* ___prefix;
	char* ___resolvedNamespace;
};
struct UxmlNamespaceDefinition_t6B70CA125A4C1D5F74F1C901A6F4F72637F6621B_marshaled_com
{
	Il2CppChar* ___prefix;
	Il2CppChar* ___resolvedNamespace;
};
struct UxmlProperty_t98965D0AC619F23715A51F072A885C7F07F15FE4 
{
	String_t* ___name;
	String_t* ___value;
};
struct UxmlProperty_t98965D0AC619F23715A51F072A885C7F07F15FE4_marshaled_pinvoke
{
	char* ___name;
	char* ___value;
};
struct UxmlProperty_t98965D0AC619F23715A51F072A885C7F07F15FE4_marshaled_com
{
	Il2CppChar* ___name;
	Il2CppChar* ___value;
};
struct Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 
{
	float ___x;
	float ___y;
};
struct Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 
{
	float ___x;
	float ___y;
	float ___z;
};
struct Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 
{
	float ___x;
	float ___y;
	float ___z;
	float ___w;
};
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
struct XrBool32_t9043F0492F98261850B33DEE6EA18B02D5EFA94E 
{
	uint32_t ____value;
};
struct float2_t3398D7209CB6D09FEA5C49AC55070C5E7BE0B2A5 
{
	float ___x;
	float ___y;
};
struct IdsOfInstances_t4412C0FA3A4CE4CBFCB20E15BAB081BAC990B350 
{
	int32_t ___IdOfInstance;
	int32_t ___AccelStructID;
};
struct ConnectionEndpoint_t3C9316D0A11BCB22C8F1F6A53F5E0365DFD7DBA7 
{
	String_t* ___Address;
	int32_t ___Port;
	String_t* ___Name;
	bool ___Preferred;
};
struct ConnectionEndpoint_t3C9316D0A11BCB22C8F1F6A53F5E0365DFD7DBA7_marshaled_pinvoke
{
	char* ___Address;
	int32_t ___Port;
	char* ___Name;
	int32_t ___Preferred;
};
struct ConnectionEndpoint_t3C9316D0A11BCB22C8F1F6A53F5E0365DFD7DBA7_marshaled_com
{
	Il2CppChar* ___Address;
	int32_t ___Port;
	Il2CppChar* ___Name;
	int32_t ___Preferred;
};
struct ApiLayerJson_tA04D8A5D95C066840FF10217153C0EAF410C174E 
{
	String_t* ___name;
	String_t* ___library_path;
	String_t* ___api_version;
	String_t* ___implementation_version;
	String_t* ___description;
};
struct ApiLayerJson_tA04D8A5D95C066840FF10217153C0EAF410C174E_marshaled_pinvoke
{
	char* ___name;
	char* ___library_path;
	char* ___api_version;
	char* ___implementation_version;
	char* ___description;
};
struct ApiLayerJson_tA04D8A5D95C066840FF10217153C0EAF410C174E_marshaled_com
{
	Il2CppChar* ___name;
	Il2CppChar* ___library_path;
	Il2CppChar* ___api_version;
	Il2CppChar* ___implementation_version;
	Il2CppChar* ___description;
};
struct AwaitableAndFrameIndex_t5B42EA520B0415D199F9487706ABCD53407C0161 
{
	Awaitable_t690337FEC1C411606E233EA36A41337B931C23CB* ___U3CAwaitableU3Ek__BackingField;
	int32_t ___U3CFrameIndexU3Ek__BackingField;
};
struct AwaitableAndFrameIndex_t5B42EA520B0415D199F9487706ABCD53407C0161_marshaled_pinvoke
{
	Awaitable_t690337FEC1C411606E233EA36A41337B931C23CB* ___U3CAwaitableU3Ek__BackingField;
	int32_t ___U3CFrameIndexU3Ek__BackingField;
};
struct AwaitableAndFrameIndex_t5B42EA520B0415D199F9487706ABCD53407C0161_marshaled_com
{
	Awaitable_t690337FEC1C411606E233EA36A41337B931C23CB* ___U3CAwaitableU3Ek__BackingField;
	int32_t ___U3CFrameIndexU3Ek__BackingField;
};
struct OrderBlock_t62FD6F6544F34B5298DEF2F77AAE446F269B7837 
{
	int32_t ___order;
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___callback;
};
struct OrderBlock_t62FD6F6544F34B5298DEF2F77AAE446F269B7837_marshaled_pinvoke
{
	int32_t ___order;
	Il2CppMethodPointer ___callback;
};
struct OrderBlock_t62FD6F6544F34B5298DEF2F77AAE446F269B7837_marshaled_com
{
	int32_t ___order;
	Il2CppMethodPointer ___callback;
};
struct Page_t04FE552A388BF55B12C8868E19589136957E00A5 
{
	uint16_t ___x;
	uint16_t ___y;
	int32_t ___freeSlots;
};
struct AttributeOverrideRange_t47A9929769CAD72883980AE2C29FACC19B310D49 
{
	VisualTreeAsset_tFB5BF81F0780A412AE5A7C2C552B3EEA64EA2EEB* ___sourceAsset;
	List_1_t70EE7982F45810D4B024CF720D910E67974A3094* ___attributeOverrides;
};
struct AttributeOverrideRange_t47A9929769CAD72883980AE2C29FACC19B310D49_marshaled_pinvoke
{
	VisualTreeAsset_tFB5BF81F0780A412AE5A7C2C552B3EEA64EA2EEB* ___sourceAsset;
	List_1_t70EE7982F45810D4B024CF720D910E67974A3094* ___attributeOverrides;
};
struct AttributeOverrideRange_t47A9929769CAD72883980AE2C29FACC19B310D49_marshaled_com
{
	VisualTreeAsset_tFB5BF81F0780A412AE5A7C2C552B3EEA64EA2EEB* ___sourceAsset;
	List_1_t70EE7982F45810D4B024CF720D910E67974A3094* ___attributeOverrides;
};
struct SerializedDataOverrideRange_t3A1FFF9457378F017DD8F445C7AF421B9AB65014 
{
	VisualTreeAsset_tFB5BF81F0780A412AE5A7C2C552B3EEA64EA2EEB* ___sourceAsset;
	int32_t ___templateId;
	List_1_tB0B308D151FBF226396B20253C1FF11CF7D10D3A* ___attributeOverrides;
};
struct SerializedDataOverrideRange_t3A1FFF9457378F017DD8F445C7AF421B9AB65014_marshaled_pinvoke
{
	VisualTreeAsset_tFB5BF81F0780A412AE5A7C2C552B3EEA64EA2EEB* ___sourceAsset;
	int32_t ___templateId;
	List_1_tB0B308D151FBF226396B20253C1FF11CF7D10D3A* ___attributeOverrides;
};
struct SerializedDataOverrideRange_t3A1FFF9457378F017DD8F445C7AF421B9AB65014_marshaled_com
{
	VisualTreeAsset_tFB5BF81F0780A412AE5A7C2C552B3EEA64EA2EEB* ___sourceAsset;
	int32_t ___templateId;
	List_1_tB0B308D151FBF226396B20253C1FF11CF7D10D3A* ___attributeOverrides;
};
struct U3CObjectPropertiesU3Ee__FixedBuffer_tF8D091B9A6C8FC4CA43F6B0C4A2D21706AFF2D25 
{
	union
	{
		struct
		{
			uint8_t ___FixedElementField;
		};
		uint8_t U3CObjectPropertiesU3Ee__FixedBuffer_tF8D091B9A6C8FC4CA43F6B0C4A2D21706AFF2D25__padding[4096];
	};
};
struct U3CParamDescriptionU3Ee__FixedBuffer_t0D73149566802CC6B2C4A8BBB635B7AB27E8F38B 
{
	union
	{
		struct
		{
			uint8_t ___FixedElementField;
		};
		uint8_t U3CParamDescriptionU3Ee__FixedBuffer_t0D73149566802CC6B2C4A8BBB635B7AB27E8F38B__padding[1024];
	};
};
struct U3CParamNameU3Ee__FixedBuffer_t9965D637A61F6C5FC91DA72995E074A8AB959D2B 
{
	union
	{
		struct
		{
			uint8_t ___FixedElementField;
		};
		uint8_t U3CParamNameU3Ee__FixedBuffer_t9965D637A61F6C5FC91DA72995E074A8AB959D2B__padding[64];
	};
};
struct AimStateFlags_tD153F209C7D4F17525456DBD69851A41795E5805 
{
	int32_t ___value__;
};
struct Architecture_t6C2664B4DC57F7351DD0D6F0F0E8E03210B708A7 
{
	int32_t ___value__;
};
struct AvailableTrackingData_t223756B90093C1B8974F04856043E3983BA37402 
{
	int32_t ___value__;
};
struct Exception_t  : public RuntimeObject
{
	String_t* ____className;
	String_t* ____message;
	RuntimeObject* ____data;
	Exception_t* ____innerException;
	String_t* ____helpURL;
	RuntimeObject* ____stackTrace;
	String_t* ____stackTraceString;
	String_t* ____remoteStackTraceString;
	int32_t ____remoteStackIndex;
	RuntimeObject* ____dynamicMethods;
	int32_t ____HResult;
	String_t* ____source;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces;
	IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* ___native_trace_ips;
	int32_t ___caught_in_unmanaged;
};
struct Exception_t_marshaled_pinvoke
{
	char* ____className;
	char* ____message;
	RuntimeObject* ____data;
	Exception_t_marshaled_pinvoke* ____innerException;
	char* ____helpURL;
	Il2CppIUnknown* ____stackTrace;
	char* ____stackTraceString;
	char* ____remoteStackTraceString;
	int32_t ____remoteStackIndex;
	Il2CppIUnknown* ____dynamicMethods;
	int32_t ____HResult;
	char* ____source;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces;
	Il2CppSafeArray* ___native_trace_ips;
	int32_t ___caught_in_unmanaged;
};
struct Exception_t_marshaled_com
{
	Il2CppChar* ____className;
	Il2CppChar* ____message;
	RuntimeObject* ____data;
	Exception_t_marshaled_com* ____innerException;
	Il2CppChar* ____helpURL;
	Il2CppIUnknown* ____stackTrace;
	Il2CppChar* ____stackTraceString;
	Il2CppChar* ____remoteStackTraceString;
	int32_t ____remoteStackIndex;
	Il2CppIUnknown* ____dynamicMethods;
	int32_t ____HResult;
	Il2CppChar* ____source;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces;
	Il2CppSafeArray* ___native_trace_ips;
	int32_t ___caught_in_unmanaged;
};
struct ExceptionArgument_t60E7F8D9DE5362CBE9365893983C30302D83B778 
{
	int32_t ___value__;
};
struct ExceptionResource_t609A85E253A4E615583553D91D839E2E79FDFBD9 
{
	int32_t ___value__;
};
struct FeatureType_t794EFAD24C687FA0CDC5A313581A39F5CB61CC41 
{
	int32_t ___value__;
};
struct FrameFlags_t6B4AE514667069EDA67CEDA9C780EC6FCF3FA16B 
{
	int32_t ___value__;
};
struct Handedness_tC87DA4E9D99745447BF40B631E8B479E32D8E37F 
{
	int32_t ___value__;
};
struct InputTrackingState_tCBE220E8A09D62DA1C6BD96F76943FE90F15778D 
{
	uint32_t ___value__;
};
struct Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position;
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rotation;
};
struct RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B 
{
	intptr_t ___value;
};
struct SnapshotFlags_t53689F8CEC55B1E1F1C2EA3097521A8CD5574BAE 
{
	int32_t ___value__;
};
struct TelemetryProductType_t05B4AB74828158BF2D5EE7867C66A09FA7384A2A 
{
	int32_t ___value__;
};
struct TimeUnit_t56A79CDB672E98A4EE28002BD23B6D5E0BAA2649 
{
	int32_t ___value__;
};
struct UICharInfo_t24C2EA0F2F3A938100C271891D9DEB015ABA5FBD 
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___cursorPos;
	float ___charWidth;
};
struct UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___normal;
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___tangent;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___color;
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___uv0;
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___uv1;
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___uv2;
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___uv3;
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___prevPosition;
};
struct UnifiedEventResult_t9D469C00788D9F2ED4C8F28F18CC7EBF6DA11CA9 
{
	int32_t ___value__;
};
struct VertexAttribute_tF34C1B76F20CA4AEC9D606BCD37A8A0C4A24C9A6 
{
	int32_t ___value__;
};
struct VertexAttributeFormat_tD714C51E671502B116ACE5E23F042BA80649D32F 
{
	int32_t ___value__;
};
struct X509ChainStatusFlags_t57C80D7C1F4C319F6D6B9FBDEA402E3023E6C769 
{
	int32_t ___value__;
};
struct XRCommonHandGesturesFlags_tA908D1693832C9EFF38F9C1E2974A43F5A276CC1 
{
	int32_t ___value__;
};
struct XRHandJointTrackingState_tFAA84D8000155CA6945B5402532B00365379D6DA 
{
	int32_t ___value__;
};
struct XRNode_t41F4B2F0EDD99DB33C49EC731C8C7F9DF142B5FF 
{
	int32_t ___value__;
};
struct XRView_t70E23918C68E24DB22A8614AA8717B3BA213FAB5 
{
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___projMatrix;
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___viewMatrix;
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___prevViewMatrix;
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___viewport;
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___occlusionMesh;
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___visibleMesh;
	int32_t ___textureArraySlice;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___eyeCenterUV;
	bool ___isPrevViewMatrixValid;
};
struct XRView_t70E23918C68E24DB22A8614AA8717B3BA213FAB5_marshaled_pinvoke
{
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___projMatrix;
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___viewMatrix;
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___prevViewMatrix;
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___viewport;
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___occlusionMesh;
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___visibleMesh;
	int32_t ___textureArraySlice;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___eyeCenterUV;
	int32_t ___isPrevViewMatrixValid;
};
struct XRView_t70E23918C68E24DB22A8614AA8717B3BA213FAB5_marshaled_com
{
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___projMatrix;
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___viewMatrix;
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___prevViewMatrix;
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___viewport;
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___occlusionMesh;
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___visibleMesh;
	int32_t ___textureArraySlice;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___eyeCenterUV;
	int32_t ___isPrevViewMatrixValid;
};
struct XrAgenticExternalToolParameterTypeMETAX1_t23301BA6647EA09607FE2A7B256585A23AF3BEC4 
{
	int32_t ___value__;
};
struct XrStructureType_t99AEF77046555042E617DA08DA96591B89746BB6 
{
	int32_t ___value__;
};
struct Button_tA5F6C329BA19678946F9C1B5827CA5AE3E48A5FB 
{
	int32_t ___value__;
};
struct SettingsOptions_t935A71692F21EE9D959FCAC00574AA018F8BA2CB 
{
	uint16_t ___value__;
};
struct ButtonClickMode_t27E4A19F12D0E18A7E7AF57AB82870E5121D7491 
{
	int32_t ___value__;
};
struct Nullable_1_tA335C05D06CBF21CC4A440E682704184263CB3BE 
{
	bool ___hasValue;
	int32_t ___value;
};
struct SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295  : public Exception_t
{
};
struct TimeValue_t45AE43B219493F9459363F32C79E8986B5F82E0E 
{
	float ___m_Value;
	int32_t ___m_Unit;
};
struct Type_t  : public MemberInfo_t
{
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ____impl;
};
struct VertexAttributeDescriptor_tD4231FBF57335465D16308D2A18E8E83D36BFA76 
{
	int32_t ___U3CattributeU3Ek__BackingField;
	int32_t ___U3CformatU3Ek__BackingField;
	int32_t ___U3CdimensionU3Ek__BackingField;
	int32_t ___U3CstreamU3Ek__BackingField;
};
struct X509ChainStatus_t5A57DDA24AA1FCA9F2B8D70B767CDDF388E4A80D 
{
	int32_t ___status;
	String_t* ___info;
};
struct X509ChainStatus_t5A57DDA24AA1FCA9F2B8D70B767CDDF388E4A80D_marshaled_pinvoke
{
	int32_t ___status;
	char* ___info;
};
struct X509ChainStatus_t5A57DDA24AA1FCA9F2B8D70B767CDDF388E4A80D_marshaled_com
{
	int32_t ___status;
	Il2CppChar* ___info;
};
struct XRCommonHandGesturesState_t18CE495C531D06CFA5E2FB753CB9DC9813F9D858 
{
	int32_t ___m_Handedness;
	int32_t ___m_CommonGesturesFlags;
	Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 ___m_AimPose;
	float ___m_AimActivateValue;
	float ___m_GraspValue;
	Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 ___m_GripPose;
	Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 ___m_PinchPose;
	float ___m_PinchValue;
	Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 ___m_PokePose;
	bool ___m_IsAimActivated;
	bool ___m_IsGraspFirm;
	bool ___m_IsPinchTouched;
};
struct XRCommonHandGesturesState_t18CE495C531D06CFA5E2FB753CB9DC9813F9D858_marshaled_pinvoke
{
	int32_t ___m_Handedness;
	int32_t ___m_CommonGesturesFlags;
	Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 ___m_AimPose;
	float ___m_AimActivateValue;
	float ___m_GraspValue;
	Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 ___m_GripPose;
	Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 ___m_PinchPose;
	float ___m_PinchValue;
	Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 ___m_PokePose;
	int32_t ___m_IsAimActivated;
	int32_t ___m_IsGraspFirm;
	int32_t ___m_IsPinchTouched;
};
struct XRCommonHandGesturesState_t18CE495C531D06CFA5E2FB753CB9DC9813F9D858_marshaled_com
{
	int32_t ___m_Handedness;
	int32_t ___m_CommonGesturesFlags;
	Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 ___m_AimPose;
	float ___m_AimActivateValue;
	float ___m_GraspValue;
	Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 ___m_GripPose;
	Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 ___m_PinchPose;
	float ___m_PinchValue;
	Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 ___m_PokePose;
	int32_t ___m_IsAimActivated;
	int32_t ___m_IsGraspFirm;
	int32_t ___m_IsPinchTouched;
};
struct XRFeatureDescriptor_t690E672A6BBBEFBB8AF221485C1884507EAFB5B2 
{
	String_t* ___name;
	List_1_t41896DF347A129D13205BBFADE03DFB21E05E459* ___usageHints;
	int32_t ___featureType;
	uint32_t ___customSize;
};
struct XRFeatureDescriptor_t690E672A6BBBEFBB8AF221485C1884507EAFB5B2_marshaled_pinvoke
{
	char* ___name;
	List_1_t41896DF347A129D13205BBFADE03DFB21E05E459* ___usageHints;
	int32_t ___featureType;
	uint32_t ___customSize;
};
struct XRFeatureDescriptor_t690E672A6BBBEFBB8AF221485C1884507EAFB5B2_marshaled_com
{
	Il2CppChar* ___name;
	List_1_t41896DF347A129D13205BBFADE03DFB21E05E459* ___usageHints;
	int32_t ___featureType;
	uint32_t ___customSize;
};
struct XRHandAimState_tE6FE6D8596FAD861E3D2D21DD47E1653612C44C3 
{
	int32_t ___m_Handedness;
	int32_t ___m_AimFlags;
	uint32_t ___m_TrackingState;
	int32_t ___m_Reserved0;
	int32_t ___m_Reserved1;
	float ___m_PinchStrengthIndex;
	float ___m_PinchStrengthMiddle;
	float ___m_PinchStrengthRing;
	float ___m_PinchStrengthLittle;
	Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 ___m_AimPose;
};
struct XRHandCaptureFrame_t224DFB9FF2BA856544F3CCE5DB6CE02918D9F073 
{
	XRHandCaptureSequence_t2502B9E7312D8143A2C53EF4A8CE0987BE2C3237* ___m_ContainingAsset;
	int32_t ___m_FrameFlags;
	float ___m_Timestamp;
	int32_t ___m_AlreadyFlatIndex;
	int32_t ___m_HandSnapshotsIndex;
	int32_t ___m_CommonGesturesIndex;
	int32_t ___m_AimStatesIndex;
	uint32_t ___m_HeadPoseTrackingState;
	Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 ___m_HeadPose;
	XRHandJointU5BU5D_t194C7684C33D3688873DB8DB9B2A941566857EA1* ___m_LeftHandJoints;
	XRHandJointU5BU5D_t194C7684C33D3688873DB8DB9B2A941566857EA1* ___m_RightHandJoints;
	bool ___m_IsLeftHandTracked;
	bool ___m_IsRightHandTracked;
	bool ___m_AreAllLeftJointsValid;
	bool ___m_AreAllRightJointsValid;
};
struct XRHandCaptureFrame_t224DFB9FF2BA856544F3CCE5DB6CE02918D9F073_marshaled_pinvoke
{
	XRHandCaptureSequence_t2502B9E7312D8143A2C53EF4A8CE0987BE2C3237* ___m_ContainingAsset;
	int32_t ___m_FrameFlags;
	float ___m_Timestamp;
	int32_t ___m_AlreadyFlatIndex;
	int32_t ___m_HandSnapshotsIndex;
	int32_t ___m_CommonGesturesIndex;
	int32_t ___m_AimStatesIndex;
	uint32_t ___m_HeadPoseTrackingState;
	Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 ___m_HeadPose;
	XRHandJoint_tDB955774276659AFD2294D516FC8A76A51E94783* ___m_LeftHandJoints;
	XRHandJoint_tDB955774276659AFD2294D516FC8A76A51E94783* ___m_RightHandJoints;
	int32_t ___m_IsLeftHandTracked;
	int32_t ___m_IsRightHandTracked;
	int32_t ___m_AreAllLeftJointsValid;
	int32_t ___m_AreAllRightJointsValid;
};
struct XRHandCaptureFrame_t224DFB9FF2BA856544F3CCE5DB6CE02918D9F073_marshaled_com
{
	XRHandCaptureSequence_t2502B9E7312D8143A2C53EF4A8CE0987BE2C3237* ___m_ContainingAsset;
	int32_t ___m_FrameFlags;
	float ___m_Timestamp;
	int32_t ___m_AlreadyFlatIndex;
	int32_t ___m_HandSnapshotsIndex;
	int32_t ___m_CommonGesturesIndex;
	int32_t ___m_AimStatesIndex;
	uint32_t ___m_HeadPoseTrackingState;
	Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 ___m_HeadPose;
	XRHandJoint_tDB955774276659AFD2294D516FC8A76A51E94783* ___m_LeftHandJoints;
	XRHandJoint_tDB955774276659AFD2294D516FC8A76A51E94783* ___m_RightHandJoints;
	int32_t ___m_IsLeftHandTracked;
	int32_t ___m_IsRightHandTracked;
	int32_t ___m_AreAllLeftJointsValid;
	int32_t ___m_AreAllRightJointsValid;
};
struct XRHandCaptureSnapshot_t956439CF03BF6D3AAE255BB4851DE09108C05DFE 
{
	XRHandCaptureSequence_t2502B9E7312D8143A2C53EF4A8CE0987BE2C3237* ___m_ContainingAsset;
	int32_t ___m_SnapshotFlags;
	int32_t ___m_Handedness;
	int32_t ___m_HandFlagsIndex;
	int32_t ___m_HandJointsIndex;
	int32_t ___m_RootPoseIndex;
};
struct XRHandCaptureSnapshot_t956439CF03BF6D3AAE255BB4851DE09108C05DFE_marshaled_pinvoke
{
	XRHandCaptureSequence_t2502B9E7312D8143A2C53EF4A8CE0987BE2C3237* ___m_ContainingAsset;
	int32_t ___m_SnapshotFlags;
	int32_t ___m_Handedness;
	int32_t ___m_HandFlagsIndex;
	int32_t ___m_HandJointsIndex;
	int32_t ___m_RootPoseIndex;
};
struct XRHandCaptureSnapshot_t956439CF03BF6D3AAE255BB4851DE09108C05DFE_marshaled_com
{
	XRHandCaptureSequence_t2502B9E7312D8143A2C53EF4A8CE0987BE2C3237* ___m_ContainingAsset;
	int32_t ___m_SnapshotFlags;
	int32_t ___m_Handedness;
	int32_t ___m_HandFlagsIndex;
	int32_t ___m_HandJointsIndex;
	int32_t ___m_RootPoseIndex;
};
struct XRHandJoint_tDB955774276659AFD2294D516FC8A76A51E94783 
{
	int32_t ___m_IdAndHandedness;
	Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 ___m_Pose;
	float ___m_Radius;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_LinearVelocity;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_AngularVelocity;
	int32_t ___m_TrackingState;
};
struct XRNodeState_t683158812A1D80A6BC73DB97405BB0B795A9111A 
{
	int32_t ___m_Type;
	int32_t ___m_AvailableFields;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Position;
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___m_Rotation;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Velocity;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_AngularVelocity;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Acceleration;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_AngularAcceleration;
	int32_t ___m_Tracked;
	uint64_t ___m_UniqueID;
};
struct XrAgenticExternalToolParameterMETAX1_tD64F65C7979C70B6990F1B0746E79494F94DB625 
{
	int32_t ___Type;
	void* ___Next;
	U3CParamNameU3Ee__FixedBuffer_t9965D637A61F6C5FC91DA72995E074A8AB959D2B ___ParamName;
	U3CParamDescriptionU3Ee__FixedBuffer_t0D73149566802CC6B2C4A8BBB635B7AB27E8F38B ___ParamDescription;
	int32_t ___ParamType;
	XrBool32_t9043F0492F98261850B33DEE6EA18B02D5EFA94E ___IsRequired;
	int32_t ___ArrayItemType;
	U3CObjectPropertiesU3Ee__FixedBuffer_tF8D091B9A6C8FC4CA43F6B0C4A2D21706AFF2D25 ___ObjectProperties;
};
struct ShadowResolutionRequest_tC1B869ADCA139D8D7AD8A355373F84C7F5E0FCBE 
{
	uint16_t ___visibleLightIndex;
	uint16_t ___perLightShadowSliceIndex;
	uint16_t ___requestedResolution;
	uint16_t ___offsetX;
	uint16_t ___offsetY;
	uint16_t ___allocatedResolution;
	uint16_t ___m_ShadowProperties;
};
struct ApiLayer_t99CB624F0B458A984C99D6A3009A2D8321A85227 
{
	ApiLayerJson_tA04D8A5D95C066840FF10217153C0EAF410C174E ___m_Json;
	String_t* ___m_JsonFileName;
	int32_t ___m_LibraryArchitecture;
	bool ___m_IsEnabled;
};
struct ApiLayer_t99CB624F0B458A984C99D6A3009A2D8321A85227_marshaled_pinvoke
{
	ApiLayerJson_tA04D8A5D95C066840FF10217153C0EAF410C174E_marshaled_pinvoke ___m_Json;
	char* ___m_JsonFileName;
	int32_t ___m_LibraryArchitecture;
	int32_t ___m_IsEnabled;
};
struct ApiLayer_t99CB624F0B458A984C99D6A3009A2D8321A85227_marshaled_com
{
	ApiLayerJson_tA04D8A5D95C066840FF10217153C0EAF410C174E_marshaled_com ___m_Json;
	Il2CppChar* ___m_JsonFileName;
	int32_t ___m_LibraryArchitecture;
	int32_t ___m_IsEnabled;
};
struct ButtonClickAction_t8939474B9E19930B4546768B72C22DA5A7115A0C 
{
	String_t* ___Title;
	int32_t ___Button;
	int32_t ___ButtonMode;
	InputActionReference_t64730C6B41271E0983FC21BFB416169F5D6BC4A1* ___InputActionReference;
	UnityEvent_1_tFE94844E0086443D87D620E4DCEFFEDA08BA19DE* ___CallbackWithContext;
	UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* ___Callback;
};
struct ButtonClickAction_t8939474B9E19930B4546768B72C22DA5A7115A0C_marshaled_pinvoke
{
	char* ___Title;
	int32_t ___Button;
	int32_t ___ButtonMode;
	InputActionReference_t64730C6B41271E0983FC21BFB416169F5D6BC4A1* ___InputActionReference;
	UnityEvent_1_tFE94844E0086443D87D620E4DCEFFEDA08BA19DE* ___CallbackWithContext;
	UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* ___Callback;
};
struct ButtonClickAction_t8939474B9E19930B4546768B72C22DA5A7115A0C_marshaled_com
{
	Il2CppChar* ___Title;
	int32_t ___Button;
	int32_t ___ButtonMode;
	InputActionReference_t64730C6B41271E0983FC21BFB416169F5D6BC4A1* ___InputActionReference;
	UnityEvent_1_tFE94844E0086443D87D620E4DCEFFEDA08BA19DE* ___CallbackWithContext;
	UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* ___Callback;
};
struct ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};
struct UnifiedEventData_tEDECDFB75E38F848CEBAD43511511688BF895A2B 
{
	bool ___isEssential;
	int32_t ___productType;
	String_t* ___eventName;
	String_t* ___metadata_json;
	String_t* ___project_name;
	String_t* ___entrypoint;
	String_t* ___project_guid;
	String_t* ___type;
	String_t* ___target;
	String_t* ___error_msg;
	Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01 ___is_internal_build;
	Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01 ___batch_mode;
	uint64_t ___machine_oculus_user_id;
	int32_t ___metadataHandle;
	Nullable_1_tA335C05D06CBF21CC4A440E682704184263CB3BE ___result;
	Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01 ___is_runtime;
	Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* ___MetadataDictionary;
};
struct UnifiedEventData_tEDECDFB75E38F848CEBAD43511511688BF895A2B_marshaled_pinvoke
{
	int32_t ___isEssential;
	int32_t ___productType;
	char* ___eventName;
	char* ___metadata_json;
	char* ___project_name;
	char* ___entrypoint;
	char* ___project_guid;
	char* ___type;
	char* ___target;
	char* ___error_msg;
	Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01 ___is_internal_build;
	Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01 ___batch_mode;
	uint64_t ___machine_oculus_user_id;
	int32_t ___metadataHandle;
	Nullable_1_tA335C05D06CBF21CC4A440E682704184263CB3BE ___result;
	Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01 ___is_runtime;
	Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* ___MetadataDictionary;
};
struct UnifiedEventData_tEDECDFB75E38F848CEBAD43511511688BF895A2B_marshaled_com
{
	int32_t ___isEssential;
	int32_t ___productType;
	Il2CppChar* ___eventName;
	Il2CppChar* ___metadata_json;
	Il2CppChar* ___project_name;
	Il2CppChar* ___entrypoint;
	Il2CppChar* ___project_guid;
	Il2CppChar* ___type;
	Il2CppChar* ___target;
	Il2CppChar* ___error_msg;
	Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01 ___is_internal_build;
	Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01 ___batch_mode;
	uint64_t ___machine_oculus_user_id;
	int32_t ___metadataHandle;
	Nullable_1_tA335C05D06CBF21CC4A440E682704184263CB3BE ___result;
	Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01 ___is_runtime;
	Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* ___MetadataDictionary;
};
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	String_t* ___TrueString;
	String_t* ___FalseString;
};
struct UniqueStyleString_tE980AA033ABB00413A3139B42FF22750952DAECF_StaticFields
{
	UniqueStyleString_tE980AA033ABB00413A3139B42FF22750952DAECF ___Null;
	UniqueStyleString_tE980AA033ABB00413A3139B42FF22750952DAECF ___Empty;
	Dictionary_2_t5C8F46F5D57502270DD9E1DA8303B23C7FE85588* ___k_StringToIndex;
	List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ___k_IndexToString;
};
struct UxmlNamespaceDefinition_t6B70CA125A4C1D5F74F1C901A6F4F72637F6621B_StaticFields
{
	UxmlNamespaceDefinition_t6B70CA125A4C1D5F74F1C901A6F4F72637F6621B ___U3CEmptyU3Ek__BackingField;
};
struct Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_StaticFields
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___zeroVector;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___oneVector;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___upVector;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___downVector;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___leftVector;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___rightVector;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___positiveInfinityVector;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___negativeInfinityVector;
};
struct Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___zeroVector;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___oneVector;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___upVector;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___downVector;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___leftVector;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___rightVector;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___forwardVector;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___backVector;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___positiveInfinityVector;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___negativeInfinityVector;
};
struct Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_StaticFields
{
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___zeroVector;
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___oneVector;
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___positiveInfinityVector;
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___negativeInfinityVector;
};
struct float2_t3398D7209CB6D09FEA5C49AC55070C5E7BE0B2A5_StaticFields
{
	float2_t3398D7209CB6D09FEA5C49AC55070C5E7BE0B2A5 ___zero;
};
struct UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207_StaticFields
{
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___s_DefaultColor;
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___s_DefaultTangent;
	UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 ___simpleVert;
};
struct Type_t_StaticFields
{
	Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235* ___s_defaultBinder;
	Il2CppChar ___Delimiter;
	TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* ___EmptyTypes;
	RuntimeObject* ___Missing;
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterAttribute;
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterName;
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterNameIgnoreCase;
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
struct StyleVariableU5BU5D_tFE786BD2C1F914C1605C072F0BB10C405C0B4D96  : public RuntimeArray
{
	ALIGN_FIELD (8) StyleVariable_t5D4DEC936102A13961F4F2C6214B83D6CDC56269 m_Items[1];

	inline StyleVariable_t5D4DEC936102A13961F4F2C6214B83D6CDC56269 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline StyleVariable_t5D4DEC936102A13961F4F2C6214B83D6CDC56269* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, StyleVariable_t5D4DEC936102A13961F4F2C6214B83D6CDC56269 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___sheet), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___handles), (void*)NULL);
		#endif
	}
	inline StyleVariable_t5D4DEC936102A13961F4F2C6214B83D6CDC56269 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline StyleVariable_t5D4DEC936102A13961F4F2C6214B83D6CDC56269* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, StyleVariable_t5D4DEC936102A13961F4F2C6214B83D6CDC56269 value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___sheet), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___handles), (void*)NULL);
		#endif
	}
};
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
struct SubstringU5BU5D_t9973080FDB519ED771E9FB3E6FDC90DF45211B77  : public RuntimeArray
{
	ALIGN_FIELD (8) Substring_t2E16755269E6716C22074D6BC0A9099915E67849 m_Items[1];

	inline Substring_t2E16755269E6716C22074D6BC0A9099915E67849 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Substring_t2E16755269E6716C22074D6BC0A9099915E67849* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Substring_t2E16755269E6716C22074D6BC0A9099915E67849 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___m_String), (void*)NULL);
	}
	inline Substring_t2E16755269E6716C22074D6BC0A9099915E67849 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Substring_t2E16755269E6716C22074D6BC0A9099915E67849* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Substring_t2E16755269E6716C22074D6BC0A9099915E67849 value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___m_String), (void*)NULL);
	}
};
struct TimeValueU5BU5D_t3EB79C5975D39A0E711250FD8A9547F5312746DE  : public RuntimeArray
{
	ALIGN_FIELD (8) TimeValue_t45AE43B219493F9459363F32C79E8986B5F82E0E m_Items[1];

	inline TimeValue_t45AE43B219493F9459363F32C79E8986B5F82E0E GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline TimeValue_t45AE43B219493F9459363F32C79E8986B5F82E0E* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, TimeValue_t45AE43B219493F9459363F32C79E8986B5F82E0E value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline TimeValue_t45AE43B219493F9459363F32C79E8986B5F82E0E GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline TimeValue_t45AE43B219493F9459363F32C79E8986B5F82E0E* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, TimeValue_t45AE43B219493F9459363F32C79E8986B5F82E0E value)
	{
		m_Items[index] = value;
	}
};
struct UICharInfoU5BU5D_t98D25C0197327978FA4E11B3518901A4839E086C  : public RuntimeArray
{
	ALIGN_FIELD (8) UICharInfo_t24C2EA0F2F3A938100C271891D9DEB015ABA5FBD m_Items[1];

	inline UICharInfo_t24C2EA0F2F3A938100C271891D9DEB015ABA5FBD GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline UICharInfo_t24C2EA0F2F3A938100C271891D9DEB015ABA5FBD* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, UICharInfo_t24C2EA0F2F3A938100C271891D9DEB015ABA5FBD value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline UICharInfo_t24C2EA0F2F3A938100C271891D9DEB015ABA5FBD GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline UICharInfo_t24C2EA0F2F3A938100C271891D9DEB015ABA5FBD* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, UICharInfo_t24C2EA0F2F3A938100C271891D9DEB015ABA5FBD value)
	{
		m_Items[index] = value;
	}
};
struct UILineInfoU5BU5D_tDD6C8909B58F997A6FB1A17F360E8DBE387204BC  : public RuntimeArray
{
	ALIGN_FIELD (8) UILineInfo_tC6FF4F85BD2316FADA2148A1789B3FF0B05A6CAC m_Items[1];

	inline UILineInfo_tC6FF4F85BD2316FADA2148A1789B3FF0B05A6CAC GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline UILineInfo_tC6FF4F85BD2316FADA2148A1789B3FF0B05A6CAC* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, UILineInfo_tC6FF4F85BD2316FADA2148A1789B3FF0B05A6CAC value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline UILineInfo_tC6FF4F85BD2316FADA2148A1789B3FF0B05A6CAC GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline UILineInfo_tC6FF4F85BD2316FADA2148A1789B3FF0B05A6CAC* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, UILineInfo_tC6FF4F85BD2316FADA2148A1789B3FF0B05A6CAC value)
	{
		m_Items[index] = value;
	}
};
struct UIVertexU5BU5D_tBC532486B45D071A520751A90E819C77BA4E3D2F  : public RuntimeArray
{
	ALIGN_FIELD (8) UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 m_Items[1];

	inline UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 value)
	{
		m_Items[index] = value;
	}
};
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
struct UnifiedEventDataU5BU5D_tA6F386C49FA6BF649CF8CC1E04E4042455FDF6BF  : public RuntimeArray
{
	ALIGN_FIELD (8) UnifiedEventData_tEDECDFB75E38F848CEBAD43511511688BF895A2B m_Items[1];

	inline UnifiedEventData_tEDECDFB75E38F848CEBAD43511511688BF895A2B GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline UnifiedEventData_tEDECDFB75E38F848CEBAD43511511688BF895A2B* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, UnifiedEventData_tEDECDFB75E38F848CEBAD43511511688BF895A2B value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___eventName), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___metadata_json), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___project_name), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___entrypoint), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___project_guid), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___type), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___target), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___error_msg), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___MetadataDictionary), (void*)NULL);
		#endif
	}
	inline UnifiedEventData_tEDECDFB75E38F848CEBAD43511511688BF895A2B GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline UnifiedEventData_tEDECDFB75E38F848CEBAD43511511688BF895A2B* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, UnifiedEventData_tEDECDFB75E38F848CEBAD43511511688BF895A2B value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___eventName), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___metadata_json), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___project_name), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___entrypoint), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___project_guid), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___type), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___target), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___error_msg), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___MetadataDictionary), (void*)NULL);
		#endif
	}
};
struct UniqueStyleStringU5BU5D_t47384C749ED152804F196C5613B5145349958ECA  : public RuntimeArray
{
	ALIGN_FIELD (8) UniqueStyleString_tE980AA033ABB00413A3139B42FF22750952DAECF m_Items[1];

	inline UniqueStyleString_tE980AA033ABB00413A3139B42FF22750952DAECF GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline UniqueStyleString_tE980AA033ABB00413A3139B42FF22750952DAECF* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, UniqueStyleString_tE980AA033ABB00413A3139B42FF22750952DAECF value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline UniqueStyleString_tE980AA033ABB00413A3139B42FF22750952DAECF GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline UniqueStyleString_tE980AA033ABB00413A3139B42FF22750952DAECF* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, UniqueStyleString_tE980AA033ABB00413A3139B42FF22750952DAECF value)
	{
		m_Items[index] = value;
	}
};
struct UsageHintU5BU5D_t678E554916FB102DB4E2DC2C6CC0976DC145BF23  : public RuntimeArray
{
	ALIGN_FIELD (8) UsageHint_tFD7259AF9E91500CF1D0CE602394B40FD2397AB1 m_Items[1];

	inline UsageHint_tFD7259AF9E91500CF1D0CE602394B40FD2397AB1 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline UsageHint_tFD7259AF9E91500CF1D0CE602394B40FD2397AB1* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, UsageHint_tFD7259AF9E91500CF1D0CE602394B40FD2397AB1 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___content), (void*)NULL);
	}
	inline UsageHint_tFD7259AF9E91500CF1D0CE602394B40FD2397AB1 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline UsageHint_tFD7259AF9E91500CF1D0CE602394B40FD2397AB1* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, UsageHint_tFD7259AF9E91500CF1D0CE602394B40FD2397AB1 value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___content), (void*)NULL);
	}
};
struct UxmlNamespaceDefinitionU5BU5D_t28B781ECD62CAF3666F6920255948A5FA6B3D319  : public RuntimeArray
{
	ALIGN_FIELD (8) UxmlNamespaceDefinition_t6B70CA125A4C1D5F74F1C901A6F4F72637F6621B m_Items[1];

	inline UxmlNamespaceDefinition_t6B70CA125A4C1D5F74F1C901A6F4F72637F6621B GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline UxmlNamespaceDefinition_t6B70CA125A4C1D5F74F1C901A6F4F72637F6621B* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, UxmlNamespaceDefinition_t6B70CA125A4C1D5F74F1C901A6F4F72637F6621B value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___prefix), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___resolvedNamespace), (void*)NULL);
		#endif
	}
	inline UxmlNamespaceDefinition_t6B70CA125A4C1D5F74F1C901A6F4F72637F6621B GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline UxmlNamespaceDefinition_t6B70CA125A4C1D5F74F1C901A6F4F72637F6621B* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, UxmlNamespaceDefinition_t6B70CA125A4C1D5F74F1C901A6F4F72637F6621B value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___prefix), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___resolvedNamespace), (void*)NULL);
		#endif
	}
};
struct UxmlPropertyU5BU5D_tD5BDB1BE0719FB862DB6B3E0CB35022536021BCB  : public RuntimeArray
{
	ALIGN_FIELD (8) UxmlProperty_t98965D0AC619F23715A51F072A885C7F07F15FE4 m_Items[1];

	inline UxmlProperty_t98965D0AC619F23715A51F072A885C7F07F15FE4 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline UxmlProperty_t98965D0AC619F23715A51F072A885C7F07F15FE4* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, UxmlProperty_t98965D0AC619F23715A51F072A885C7F07F15FE4 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___name), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___value), (void*)NULL);
		#endif
	}
	inline UxmlProperty_t98965D0AC619F23715A51F072A885C7F07F15FE4 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline UxmlProperty_t98965D0AC619F23715A51F072A885C7F07F15FE4* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, UxmlProperty_t98965D0AC619F23715A51F072A885C7F07F15FE4 value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___name), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___value), (void*)NULL);
		#endif
	}
};
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
struct VertexAttributeDescriptorU5BU5D_t5D10E60612F12777F59B7E33939F9075DB0E02B2  : public RuntimeArray
{
	ALIGN_FIELD (8) VertexAttributeDescriptor_tD4231FBF57335465D16308D2A18E8E83D36BFA76 m_Items[1];

	inline VertexAttributeDescriptor_tD4231FBF57335465D16308D2A18E8E83D36BFA76 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline VertexAttributeDescriptor_tD4231FBF57335465D16308D2A18E8E83D36BFA76* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, VertexAttributeDescriptor_tD4231FBF57335465D16308D2A18E8E83D36BFA76 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline VertexAttributeDescriptor_tD4231FBF57335465D16308D2A18E8E83D36BFA76 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline VertexAttributeDescriptor_tD4231FBF57335465D16308D2A18E8E83D36BFA76* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, VertexAttributeDescriptor_tD4231FBF57335465D16308D2A18E8E83D36BFA76 value)
	{
		m_Items[index] = value;
	}
};
struct X509ChainStatusU5BU5D_tA4CB502E13E6D62B9C824B15F3193FE7EC889299  : public RuntimeArray
{
	ALIGN_FIELD (8) X509ChainStatus_t5A57DDA24AA1FCA9F2B8D70B767CDDF388E4A80D m_Items[1];

	inline X509ChainStatus_t5A57DDA24AA1FCA9F2B8D70B767CDDF388E4A80D GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline X509ChainStatus_t5A57DDA24AA1FCA9F2B8D70B767CDDF388E4A80D* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, X509ChainStatus_t5A57DDA24AA1FCA9F2B8D70B767CDDF388E4A80D value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___info), (void*)NULL);
	}
	inline X509ChainStatus_t5A57DDA24AA1FCA9F2B8D70B767CDDF388E4A80D GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline X509ChainStatus_t5A57DDA24AA1FCA9F2B8D70B767CDDF388E4A80D* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, X509ChainStatus_t5A57DDA24AA1FCA9F2B8D70B767CDDF388E4A80D value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___info), (void*)NULL);
	}
};
struct XRCommonHandGesturesStateU5BU5D_tB82A1CD3BED9F0290EC8832DC2E4A7966580DF8C  : public RuntimeArray
{
	ALIGN_FIELD (8) XRCommonHandGesturesState_t18CE495C531D06CFA5E2FB753CB9DC9813F9D858 m_Items[1];

	inline XRCommonHandGesturesState_t18CE495C531D06CFA5E2FB753CB9DC9813F9D858 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline XRCommonHandGesturesState_t18CE495C531D06CFA5E2FB753CB9DC9813F9D858* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, XRCommonHandGesturesState_t18CE495C531D06CFA5E2FB753CB9DC9813F9D858 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline XRCommonHandGesturesState_t18CE495C531D06CFA5E2FB753CB9DC9813F9D858 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline XRCommonHandGesturesState_t18CE495C531D06CFA5E2FB753CB9DC9813F9D858* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, XRCommonHandGesturesState_t18CE495C531D06CFA5E2FB753CB9DC9813F9D858 value)
	{
		m_Items[index] = value;
	}
};
struct XRFeatureDescriptorU5BU5D_tBB735747E74DA05050B124BFE3525E40EC4114A7  : public RuntimeArray
{
	ALIGN_FIELD (8) XRFeatureDescriptor_t690E672A6BBBEFBB8AF221485C1884507EAFB5B2 m_Items[1];

	inline XRFeatureDescriptor_t690E672A6BBBEFBB8AF221485C1884507EAFB5B2 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline XRFeatureDescriptor_t690E672A6BBBEFBB8AF221485C1884507EAFB5B2* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, XRFeatureDescriptor_t690E672A6BBBEFBB8AF221485C1884507EAFB5B2 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___name), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___usageHints), (void*)NULL);
		#endif
	}
	inline XRFeatureDescriptor_t690E672A6BBBEFBB8AF221485C1884507EAFB5B2 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline XRFeatureDescriptor_t690E672A6BBBEFBB8AF221485C1884507EAFB5B2* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, XRFeatureDescriptor_t690E672A6BBBEFBB8AF221485C1884507EAFB5B2 value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___name), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___usageHints), (void*)NULL);
		#endif
	}
};
struct XRHandAimStateU5BU5D_t0076289643604F274ED85C15E336BB86EADDDB4F  : public RuntimeArray
{
	ALIGN_FIELD (8) XRHandAimState_tE6FE6D8596FAD861E3D2D21DD47E1653612C44C3 m_Items[1];

	inline XRHandAimState_tE6FE6D8596FAD861E3D2D21DD47E1653612C44C3 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline XRHandAimState_tE6FE6D8596FAD861E3D2D21DD47E1653612C44C3* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, XRHandAimState_tE6FE6D8596FAD861E3D2D21DD47E1653612C44C3 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline XRHandAimState_tE6FE6D8596FAD861E3D2D21DD47E1653612C44C3 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline XRHandAimState_tE6FE6D8596FAD861E3D2D21DD47E1653612C44C3* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, XRHandAimState_tE6FE6D8596FAD861E3D2D21DD47E1653612C44C3 value)
	{
		m_Items[index] = value;
	}
};
struct XRHandCaptureFrameU5BU5D_t3EB556AB49AB0D0EF28F537695ECC47024C73EA7  : public RuntimeArray
{
	ALIGN_FIELD (8) XRHandCaptureFrame_t224DFB9FF2BA856544F3CCE5DB6CE02918D9F073 m_Items[1];

	inline XRHandCaptureFrame_t224DFB9FF2BA856544F3CCE5DB6CE02918D9F073 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline XRHandCaptureFrame_t224DFB9FF2BA856544F3CCE5DB6CE02918D9F073* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, XRHandCaptureFrame_t224DFB9FF2BA856544F3CCE5DB6CE02918D9F073 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___m_ContainingAsset), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___m_LeftHandJoints), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___m_RightHandJoints), (void*)NULL);
		#endif
	}
	inline XRHandCaptureFrame_t224DFB9FF2BA856544F3CCE5DB6CE02918D9F073 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline XRHandCaptureFrame_t224DFB9FF2BA856544F3CCE5DB6CE02918D9F073* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, XRHandCaptureFrame_t224DFB9FF2BA856544F3CCE5DB6CE02918D9F073 value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___m_ContainingAsset), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___m_LeftHandJoints), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___m_RightHandJoints), (void*)NULL);
		#endif
	}
};
struct XRHandCaptureSnapshotU5BU5D_t82ACB21B558889DC6ABE7C08D0CCAAEE90C37083  : public RuntimeArray
{
	ALIGN_FIELD (8) XRHandCaptureSnapshot_t956439CF03BF6D3AAE255BB4851DE09108C05DFE m_Items[1];

	inline XRHandCaptureSnapshot_t956439CF03BF6D3AAE255BB4851DE09108C05DFE GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline XRHandCaptureSnapshot_t956439CF03BF6D3AAE255BB4851DE09108C05DFE* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, XRHandCaptureSnapshot_t956439CF03BF6D3AAE255BB4851DE09108C05DFE value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___m_ContainingAsset), (void*)NULL);
	}
	inline XRHandCaptureSnapshot_t956439CF03BF6D3AAE255BB4851DE09108C05DFE GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline XRHandCaptureSnapshot_t956439CF03BF6D3AAE255BB4851DE09108C05DFE* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, XRHandCaptureSnapshot_t956439CF03BF6D3AAE255BB4851DE09108C05DFE value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___m_ContainingAsset), (void*)NULL);
	}
};
struct XRHandJointU5BU5D_t194C7684C33D3688873DB8DB9B2A941566857EA1  : public RuntimeArray
{
	ALIGN_FIELD (8) XRHandJoint_tDB955774276659AFD2294D516FC8A76A51E94783 m_Items[1];

	inline XRHandJoint_tDB955774276659AFD2294D516FC8A76A51E94783 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline XRHandJoint_tDB955774276659AFD2294D516FC8A76A51E94783* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, XRHandJoint_tDB955774276659AFD2294D516FC8A76A51E94783 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline XRHandJoint_tDB955774276659AFD2294D516FC8A76A51E94783 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline XRHandJoint_tDB955774276659AFD2294D516FC8A76A51E94783* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, XRHandJoint_tDB955774276659AFD2294D516FC8A76A51E94783 value)
	{
		m_Items[index] = value;
	}
};
struct XRNodeStateU5BU5D_tEC64805398059D44C2FBA68AABAEFFB262B93845  : public RuntimeArray
{
	ALIGN_FIELD (8) XRNodeState_t683158812A1D80A6BC73DB97405BB0B795A9111A m_Items[1];

	inline XRNodeState_t683158812A1D80A6BC73DB97405BB0B795A9111A GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline XRNodeState_t683158812A1D80A6BC73DB97405BB0B795A9111A* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, XRNodeState_t683158812A1D80A6BC73DB97405BB0B795A9111A value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline XRNodeState_t683158812A1D80A6BC73DB97405BB0B795A9111A GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline XRNodeState_t683158812A1D80A6BC73DB97405BB0B795A9111A* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, XRNodeState_t683158812A1D80A6BC73DB97405BB0B795A9111A value)
	{
		m_Items[index] = value;
	}
};
struct XRViewU5BU5D_t46B2B3C0D45A670846E736AFB362448972CB513D  : public RuntimeArray
{
	ALIGN_FIELD (8) XRView_t70E23918C68E24DB22A8614AA8717B3BA213FAB5 m_Items[1];

	inline XRView_t70E23918C68E24DB22A8614AA8717B3BA213FAB5 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline XRView_t70E23918C68E24DB22A8614AA8717B3BA213FAB5* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, XRView_t70E23918C68E24DB22A8614AA8717B3BA213FAB5 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___occlusionMesh), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___visibleMesh), (void*)NULL);
		#endif
	}
	inline XRView_t70E23918C68E24DB22A8614AA8717B3BA213FAB5 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline XRView_t70E23918C68E24DB22A8614AA8717B3BA213FAB5* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, XRView_t70E23918C68E24DB22A8614AA8717B3BA213FAB5 value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___occlusionMesh), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___visibleMesh), (void*)NULL);
		#endif
	}
};
struct XrAgenticExternalToolParameterMETAX1U5BU5D_t4371BF54F74A98EE9DB85976F39AEF422DCBE143  : public RuntimeArray
{
	ALIGN_FIELD (8) XrAgenticExternalToolParameterMETAX1_tD64F65C7979C70B6990F1B0746E79494F94DB625 m_Items[1];

	inline XrAgenticExternalToolParameterMETAX1_tD64F65C7979C70B6990F1B0746E79494F94DB625 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline XrAgenticExternalToolParameterMETAX1_tD64F65C7979C70B6990F1B0746E79494F94DB625* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, XrAgenticExternalToolParameterMETAX1_tD64F65C7979C70B6990F1B0746E79494F94DB625 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline XrAgenticExternalToolParameterMETAX1_tD64F65C7979C70B6990F1B0746E79494F94DB625 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline XrAgenticExternalToolParameterMETAX1_tD64F65C7979C70B6990F1B0746E79494F94DB625* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, XrAgenticExternalToolParameterMETAX1_tD64F65C7979C70B6990F1B0746E79494F94DB625 value)
	{
		m_Items[index] = value;
	}
};
struct __CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979  : public RuntimeArray
{
	ALIGN_FIELD (8) Il2CppSharedGenericObject* m_Items[1];

	inline Il2CppSharedGenericObject* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Il2CppSharedGenericObject** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Il2CppSharedGenericObject* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Il2CppSharedGenericObject* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Il2CppSharedGenericObject** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Il2CppSharedGenericObject* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
struct __Il2CppByteEnumU5BU5D_t4D02DF3357DB0BD78CB7064114CAFFD248D6999A  : public RuntimeArray
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
struct __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC  : public RuntimeArray
{
	ALIGN_FIELD (8) uint8_t m_Items[1];

	inline uint8_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + il2cpp_array_calc_byte_offset(this, index);
	}
	inline uint8_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + il2cpp_array_calc_byte_offset(this, index);
	}
};
struct __Il2CppInt32EnumU5BU5D_t8FBDB13799B3615AA893F06F601FF09189B04297  : public RuntimeArray
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
struct __Il2CppUInt32EnumU5BU5D_t59DD627323F45C05F28FE49E0DEA327606079F43  : public RuntimeArray
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
struct float2U5BU5D_t7F04848FC796653244477DC40830B0A39D67D350  : public RuntimeArray
{
	ALIGN_FIELD (8) float2_t3398D7209CB6D09FEA5C49AC55070C5E7BE0B2A5 m_Items[1];

	inline float2_t3398D7209CB6D09FEA5C49AC55070C5E7BE0B2A5 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline float2_t3398D7209CB6D09FEA5C49AC55070C5E7BE0B2A5* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, float2_t3398D7209CB6D09FEA5C49AC55070C5E7BE0B2A5 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline float2_t3398D7209CB6D09FEA5C49AC55070C5E7BE0B2A5 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline float2_t3398D7209CB6D09FEA5C49AC55070C5E7BE0B2A5* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, float2_t3398D7209CB6D09FEA5C49AC55070C5E7BE0B2A5 value)
	{
		m_Items[index] = value;
	}
};
struct IdsOfInstancesU5BU5D_t6627296D68BD3B37D56902FC2586A0C05853E3BF  : public RuntimeArray
{
	ALIGN_FIELD (8) IdsOfInstances_t4412C0FA3A4CE4CBFCB20E15BAB081BAC990B350 m_Items[1];

	inline IdsOfInstances_t4412C0FA3A4CE4CBFCB20E15BAB081BAC990B350 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline IdsOfInstances_t4412C0FA3A4CE4CBFCB20E15BAB081BAC990B350* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, IdsOfInstances_t4412C0FA3A4CE4CBFCB20E15BAB081BAC990B350 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline IdsOfInstances_t4412C0FA3A4CE4CBFCB20E15BAB081BAC990B350 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline IdsOfInstances_t4412C0FA3A4CE4CBFCB20E15BAB081BAC990B350* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, IdsOfInstances_t4412C0FA3A4CE4CBFCB20E15BAB081BAC990B350 value)
	{
		m_Items[index] = value;
	}
};
struct ShadowResolutionRequestU5BU5D_tC33A2E5E2712B8688E21C80BB2350155D029B334  : public RuntimeArray
{
	ALIGN_FIELD (8) ShadowResolutionRequest_tC1B869ADCA139D8D7AD8A355373F84C7F5E0FCBE m_Items[1];

	inline ShadowResolutionRequest_tC1B869ADCA139D8D7AD8A355373F84C7F5E0FCBE GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline ShadowResolutionRequest_tC1B869ADCA139D8D7AD8A355373F84C7F5E0FCBE* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, ShadowResolutionRequest_tC1B869ADCA139D8D7AD8A355373F84C7F5E0FCBE value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline ShadowResolutionRequest_tC1B869ADCA139D8D7AD8A355373F84C7F5E0FCBE GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline ShadowResolutionRequest_tC1B869ADCA139D8D7AD8A355373F84C7F5E0FCBE* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, ShadowResolutionRequest_tC1B869ADCA139D8D7AD8A355373F84C7F5E0FCBE value)
	{
		m_Items[index] = value;
	}
};
struct ConnectionEndpointU5BU5D_tC7EA802FB1607F7F212A724C8652F110B759E519  : public RuntimeArray
{
	ALIGN_FIELD (8) ConnectionEndpoint_t3C9316D0A11BCB22C8F1F6A53F5E0365DFD7DBA7 m_Items[1];

	inline ConnectionEndpoint_t3C9316D0A11BCB22C8F1F6A53F5E0365DFD7DBA7 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline ConnectionEndpoint_t3C9316D0A11BCB22C8F1F6A53F5E0365DFD7DBA7* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, ConnectionEndpoint_t3C9316D0A11BCB22C8F1F6A53F5E0365DFD7DBA7 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___Address), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___Name), (void*)NULL);
		#endif
	}
	inline ConnectionEndpoint_t3C9316D0A11BCB22C8F1F6A53F5E0365DFD7DBA7 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline ConnectionEndpoint_t3C9316D0A11BCB22C8F1F6A53F5E0365DFD7DBA7* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, ConnectionEndpoint_t3C9316D0A11BCB22C8F1F6A53F5E0365DFD7DBA7 value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___Address), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___Name), (void*)NULL);
		#endif
	}
};
struct ApiLayerU5BU5D_tA69051E32F2652E385B1E8FF51C4CFF6E0E2A7AF  : public RuntimeArray
{
	ALIGN_FIELD (8) ApiLayer_t99CB624F0B458A984C99D6A3009A2D8321A85227 m_Items[1];

	inline ApiLayer_t99CB624F0B458A984C99D6A3009A2D8321A85227 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline ApiLayer_t99CB624F0B458A984C99D6A3009A2D8321A85227* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, ApiLayer_t99CB624F0B458A984C99D6A3009A2D8321A85227 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___m_Json))->___name), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___m_Json))->___library_path), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___m_Json))->___api_version), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___m_Json))->___implementation_version), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___m_Json))->___description), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___m_JsonFileName), (void*)NULL);
		#endif
	}
	inline ApiLayer_t99CB624F0B458A984C99D6A3009A2D8321A85227 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline ApiLayer_t99CB624F0B458A984C99D6A3009A2D8321A85227* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, ApiLayer_t99CB624F0B458A984C99D6A3009A2D8321A85227 value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___m_Json))->___name), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___m_Json))->___library_path), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___m_Json))->___api_version), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___m_Json))->___implementation_version), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___m_Json))->___description), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___m_JsonFileName), (void*)NULL);
		#endif
	}
};
struct AwaitableAndFrameIndexU5BU5D_tFE5E09101F753E8B28D639C161FBC4D34F939560  : public RuntimeArray
{
	ALIGN_FIELD (8) AwaitableAndFrameIndex_t5B42EA520B0415D199F9487706ABCD53407C0161 m_Items[1];

	inline AwaitableAndFrameIndex_t5B42EA520B0415D199F9487706ABCD53407C0161 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline AwaitableAndFrameIndex_t5B42EA520B0415D199F9487706ABCD53407C0161* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, AwaitableAndFrameIndex_t5B42EA520B0415D199F9487706ABCD53407C0161 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___U3CAwaitableU3Ek__BackingField), (void*)NULL);
	}
	inline AwaitableAndFrameIndex_t5B42EA520B0415D199F9487706ABCD53407C0161 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline AwaitableAndFrameIndex_t5B42EA520B0415D199F9487706ABCD53407C0161* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, AwaitableAndFrameIndex_t5B42EA520B0415D199F9487706ABCD53407C0161 value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___U3CAwaitableU3Ek__BackingField), (void*)NULL);
	}
};
struct OrderBlockU5BU5D_tD67C39FB212889AFAAB991BE1AE144ED8D35EE88  : public RuntimeArray
{
	ALIGN_FIELD (8) OrderBlock_t62FD6F6544F34B5298DEF2F77AAE446F269B7837 m_Items[1];

	inline OrderBlock_t62FD6F6544F34B5298DEF2F77AAE446F269B7837 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline OrderBlock_t62FD6F6544F34B5298DEF2F77AAE446F269B7837* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, OrderBlock_t62FD6F6544F34B5298DEF2F77AAE446F269B7837 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___callback), (void*)NULL);
	}
	inline OrderBlock_t62FD6F6544F34B5298DEF2F77AAE446F269B7837 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline OrderBlock_t62FD6F6544F34B5298DEF2F77AAE446F269B7837* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, OrderBlock_t62FD6F6544F34B5298DEF2F77AAE446F269B7837 value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___callback), (void*)NULL);
	}
};
struct PageU5BU5D_tFCE8198B6D8AF479FBA546791B9CF3DD8A2D75C9  : public RuntimeArray
{
	ALIGN_FIELD (8) Page_t04FE552A388BF55B12C8868E19589136957E00A5 m_Items[1];

	inline Page_t04FE552A388BF55B12C8868E19589136957E00A5 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Page_t04FE552A388BF55B12C8868E19589136957E00A5* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Page_t04FE552A388BF55B12C8868E19589136957E00A5 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Page_t04FE552A388BF55B12C8868E19589136957E00A5 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Page_t04FE552A388BF55B12C8868E19589136957E00A5* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Page_t04FE552A388BF55B12C8868E19589136957E00A5 value)
	{
		m_Items[index] = value;
	}
};
struct ButtonClickActionU5BU5D_tF4F7652B56313FBAF9FD3DCEC7E302D3F1DA772A  : public RuntimeArray
{
	ALIGN_FIELD (8) ButtonClickAction_t8939474B9E19930B4546768B72C22DA5A7115A0C m_Items[1];

	inline ButtonClickAction_t8939474B9E19930B4546768B72C22DA5A7115A0C GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline ButtonClickAction_t8939474B9E19930B4546768B72C22DA5A7115A0C* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, ButtonClickAction_t8939474B9E19930B4546768B72C22DA5A7115A0C value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___Title), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___InputActionReference), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___CallbackWithContext), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___Callback), (void*)NULL);
		#endif
	}
	inline ButtonClickAction_t8939474B9E19930B4546768B72C22DA5A7115A0C GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline ButtonClickAction_t8939474B9E19930B4546768B72C22DA5A7115A0C* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, ButtonClickAction_t8939474B9E19930B4546768B72C22DA5A7115A0C value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___Title), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___InputActionReference), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___CallbackWithContext), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___Callback), (void*)NULL);
		#endif
	}
};
struct AttributeOverrideRangeU5BU5D_t1140F5D222769964617E7C7EA9F5AD34F13F5E46  : public RuntimeArray
{
	ALIGN_FIELD (8) AttributeOverrideRange_t47A9929769CAD72883980AE2C29FACC19B310D49 m_Items[1];

	inline AttributeOverrideRange_t47A9929769CAD72883980AE2C29FACC19B310D49 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline AttributeOverrideRange_t47A9929769CAD72883980AE2C29FACC19B310D49* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, AttributeOverrideRange_t47A9929769CAD72883980AE2C29FACC19B310D49 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___sourceAsset), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___attributeOverrides), (void*)NULL);
		#endif
	}
	inline AttributeOverrideRange_t47A9929769CAD72883980AE2C29FACC19B310D49 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline AttributeOverrideRange_t47A9929769CAD72883980AE2C29FACC19B310D49* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, AttributeOverrideRange_t47A9929769CAD72883980AE2C29FACC19B310D49 value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___sourceAsset), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___attributeOverrides), (void*)NULL);
		#endif
	}
};
struct SerializedDataOverrideRangeU5BU5D_t88081D15A1E9C308C93F1BBA4820D764A8DAC24F  : public RuntimeArray
{
	ALIGN_FIELD (8) SerializedDataOverrideRange_t3A1FFF9457378F017DD8F445C7AF421B9AB65014 m_Items[1];

	inline SerializedDataOverrideRange_t3A1FFF9457378F017DD8F445C7AF421B9AB65014 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline SerializedDataOverrideRange_t3A1FFF9457378F017DD8F445C7AF421B9AB65014* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, SerializedDataOverrideRange_t3A1FFF9457378F017DD8F445C7AF421B9AB65014 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___sourceAsset), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___attributeOverrides), (void*)NULL);
		#endif
	}
	inline SerializedDataOverrideRange_t3A1FFF9457378F017DD8F445C7AF421B9AB65014 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline SerializedDataOverrideRange_t3A1FFF9457378F017DD8F445C7AF421B9AB65014* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, SerializedDataOverrideRange_t3A1FFF9457378F017DD8F445C7AF421B9AB65014 value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___sourceAsset), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___attributeOverrides), (void*)NULL);
		#endif
	}
};


IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_get_Count_mA070C2C4E69ECF4F1658E281C60BF698FD5A5A8F (ReadOnlyCollection_1_tBE445934E4BBFAD9104AC1AFC81C07456740D5B9* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_IsCompatibleObject_m3C659BC7492D6D23A67860B02DE0D2BF56988CAA (RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_Contains_m79D6B93F48A882214613F65736C4275CCC7FC3FF (ReadOnlyCollection_1_tBE445934E4BBFAD9104AC1AFC81C07456740D5B9* __this, StyleVariable_t5D4DEC936102A13961F4F2C6214B83D6CDC56269 ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_IndexOf_m59C4EFADD346BE75CA43C56F812E67C011CF75F9 (ReadOnlyCollection_1_tBE445934E4BBFAD9104AC1AFC81C07456740D5B9* __this, StyleVariable_t5D4DEC936102A13961F4F2C6214B83D6CDC56269 ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_get_Count_m21B7575FC88C1F0EB39B77529C38A0286A3B575F (ReadOnlyCollection_1_tB270E5CCE3D7607E7CDDBE1B835360A0E7B07DF4* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_IsCompatibleObject_mEECB28AFAAAC26A7C6E843A076A43DCE2F55CDCA (RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_Contains_m89291249B5D4B20D9F07C3B162755A25BC44C530 (ReadOnlyCollection_1_tB270E5CCE3D7607E7CDDBE1B835360A0E7B07DF4* __this, Substring_t2E16755269E6716C22074D6BC0A9099915E67849 ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_IndexOf_mA817652F7A04A40F42DD4F4F8C12D4E9E4508B51 (ReadOnlyCollection_1_tB270E5CCE3D7607E7CDDBE1B835360A0E7B07DF4* __this, Substring_t2E16755269E6716C22074D6BC0A9099915E67849 ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_get_Count_m1B303B771A898F2B2B6BFC1858958F3256DD3E99 (ReadOnlyCollection_1_tFF6716AACE48FE7B167A53ED10AE04FA2A2AB83A* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_IsCompatibleObject_mC19A002D4F9915FA70C0B6DE179B36F8B4DA9B87 (RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_Contains_m02DC5E9462836451750318F47E93084247533EE6 (ReadOnlyCollection_1_tFF6716AACE48FE7B167A53ED10AE04FA2A2AB83A* __this, TimeValue_t45AE43B219493F9459363F32C79E8986B5F82E0E ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_IndexOf_m51CDE7C02C2B73BD9913E8FC0ED84A4308672A73 (ReadOnlyCollection_1_tFF6716AACE48FE7B167A53ED10AE04FA2A2AB83A* __this, TimeValue_t45AE43B219493F9459363F32C79E8986B5F82E0E ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_get_Count_m208858945002AE69A132CDB66FEABE0C0525AE60 (ReadOnlyCollection_1_t5F8B55EF85E52FBC5F41B42D70D13BC89D4C469A* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_IsCompatibleObject_m7FF4D4B7DB9C5EB381294D17EF153E57E9D90F24 (RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_Contains_m05093008740300A921F7BB341479D97499CF75E0 (ReadOnlyCollection_1_t5F8B55EF85E52FBC5F41B42D70D13BC89D4C469A* __this, UICharInfo_t24C2EA0F2F3A938100C271891D9DEB015ABA5FBD ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_IndexOf_m04BB6920B51BCC3A3026DF35719210BF7C503C2C (ReadOnlyCollection_1_t5F8B55EF85E52FBC5F41B42D70D13BC89D4C469A* __this, UICharInfo_t24C2EA0F2F3A938100C271891D9DEB015ABA5FBD ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_get_Count_mF4F25BF826DF061ED78B82A6595649A22FE54A6A (ReadOnlyCollection_1_tAC9F0ECFFCE3DC3797BE610439BF76ACB015D44E* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_IsCompatibleObject_m03C42A942F85B4EC168F87B45CA0C1E0B8B991CC (RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_Contains_mC6D50D96188C20173348A47F5374EBB4820BF7FF (ReadOnlyCollection_1_tAC9F0ECFFCE3DC3797BE610439BF76ACB015D44E* __this, UILineInfo_tC6FF4F85BD2316FADA2148A1789B3FF0B05A6CAC ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_IndexOf_m545FFA46CA3E7EED5B63255AD7A4E091B9ABBF0F (ReadOnlyCollection_1_tAC9F0ECFFCE3DC3797BE610439BF76ACB015D44E* __this, UILineInfo_tC6FF4F85BD2316FADA2148A1789B3FF0B05A6CAC ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_get_Count_m1D8F54776E65523E2DFD134DD2FBCB07804B23B5 (ReadOnlyCollection_1_t0279BBDF584EF96177DF75FA7A456E4629B2B09E* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_IsCompatibleObject_m88E1CA111AE23BF4399AA4FFE4FE8867FE94C854 (RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_Contains_mAF5A0A69B2F9B8BF257C52A68C9BAA8A29F6CF17 (ReadOnlyCollection_1_t0279BBDF584EF96177DF75FA7A456E4629B2B09E* __this, UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_IndexOf_m129FB3AE63A51E593B4BAD57B4A2A9E3104812AC (ReadOnlyCollection_1_t0279BBDF584EF96177DF75FA7A456E4629B2B09E* __this, UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_get_Count_mE5F79F4C569C903ACCF6EA6A986411A6DF3A9CF0 (ReadOnlyCollection_1_tF3F201D52E933A4489A4C06E8B1203099F42FB01* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_IsCompatibleObject_m1D7518BCBEC6037EB9FF7B400662C83A568F7B26 (RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_Contains_m419531A31381A970A871D90935DF22B6CF3EBFBB (ReadOnlyCollection_1_tF3F201D52E933A4489A4C06E8B1203099F42FB01* __this, uint32_t ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_IndexOf_m9A6405BAF7999DFD7A0398A1E931E107FEA5A1A5 (ReadOnlyCollection_1_tF3F201D52E933A4489A4C06E8B1203099F42FB01* __this, uint32_t ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_get_Count_m7CADBE80BAAD2AAA5349395B3E442605E0BFEB95 (ReadOnlyCollection_1_tABD6F7BDD581540C8981BBE5012B221D4701AA0A* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_IsCompatibleObject_mE726091D2574AA01253129E1832666343C088AA1 (RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_Contains_m785F371F039A4AA57D08627D5B0808885CDEE0AA (ReadOnlyCollection_1_tABD6F7BDD581540C8981BBE5012B221D4701AA0A* __this, uint64_t ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_IndexOf_mFEF36A399F0FC585064EDABD17E3B3C465AC4F89 (ReadOnlyCollection_1_tABD6F7BDD581540C8981BBE5012B221D4701AA0A* __this, uint64_t ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_get_Count_m7B5E28E23D09FA536000D2D58A36066D9B206742 (ReadOnlyCollection_1_tA06EBFED6AD4BFBC5FCBAEAFCDE3763C5110493C* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_IsCompatibleObject_mFD8649775AED86392A2D22F6EA1E55776ED702EA (RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_Contains_mFB00F475A1D8CD0E7CA4C71EF703938A4FBDD39F (ReadOnlyCollection_1_tA06EBFED6AD4BFBC5FCBAEAFCDE3763C5110493C* __this, UnifiedEventData_tEDECDFB75E38F848CEBAD43511511688BF895A2B ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_IndexOf_m3C01EB950263ED46CDA2569759ADD8A382A8E7AF (ReadOnlyCollection_1_tA06EBFED6AD4BFBC5FCBAEAFCDE3763C5110493C* __this, UnifiedEventData_tEDECDFB75E38F848CEBAD43511511688BF895A2B ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_get_Count_mD76DB4E2C0BC4110F6110E68DA709BD4A503D2F5 (ReadOnlyCollection_1_tC00260BA5B1BEF55EBEF800DF50485F5D9806E4C* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_IsCompatibleObject_m10AE9280CDD0885F6AE0CED9BC419A220F9EF82C (RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_Contains_mFACE0C82F64A6D849DD7A5A9D94592654A6D1011 (ReadOnlyCollection_1_tC00260BA5B1BEF55EBEF800DF50485F5D9806E4C* __this, UniqueStyleString_tE980AA033ABB00413A3139B42FF22750952DAECF ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_IndexOf_m81F9A69BFD18AC9F3559949FD82DE92A9082B650 (ReadOnlyCollection_1_tC00260BA5B1BEF55EBEF800DF50485F5D9806E4C* __this, UniqueStyleString_tE980AA033ABB00413A3139B42FF22750952DAECF ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_get_Count_m45F7511554AC7932A4E66143EF8772E661046099 (ReadOnlyCollection_1_tDF87C8E26187E1D6C24D2DD02E4716CC5B7ACC34* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_IsCompatibleObject_m077B2F36B247C4636FFD0370E89515F37F912A64 (RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_Contains_mDF0074DD4769F53942460C32C27BDB6A7E6E500C (ReadOnlyCollection_1_tDF87C8E26187E1D6C24D2DD02E4716CC5B7ACC34* __this, UsageHint_tFD7259AF9E91500CF1D0CE602394B40FD2397AB1 ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_IndexOf_mD7BBE79F62B90B06912D44DAB47B960B9124DA69 (ReadOnlyCollection_1_tDF87C8E26187E1D6C24D2DD02E4716CC5B7ACC34* __this, UsageHint_tFD7259AF9E91500CF1D0CE602394B40FD2397AB1 ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_get_Count_m531C72497E9FEB4E99E08837AF225D594D2ED741 (ReadOnlyCollection_1_tF64E6ECDE29B9EE2538F5A045045DF7774BB8466* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_IsCompatibleObject_mE21DFAB52F1CF90200F86CA74489FE40660D0FA5 (RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_Contains_mFDCA34C8B2D2B075B2F75C43319A5FB2F06EBAB7 (ReadOnlyCollection_1_tF64E6ECDE29B9EE2538F5A045045DF7774BB8466* __this, UxmlNamespaceDefinition_t6B70CA125A4C1D5F74F1C901A6F4F72637F6621B ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_IndexOf_m3C139BA080D9F8D44C2E3F09CDF4AF7AB91BCD06 (ReadOnlyCollection_1_tF64E6ECDE29B9EE2538F5A045045DF7774BB8466* __this, UxmlNamespaceDefinition_t6B70CA125A4C1D5F74F1C901A6F4F72637F6621B ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_get_Count_mBFE65873D7F80153840E0C74D836129E3847B9A6 (ReadOnlyCollection_1_tAE114E8C18E180A65629D9DF0D8911860274551C* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_IsCompatibleObject_m7575D658F2FFB26CF20770C4D9570925DCAE4CBC (RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_Contains_m78939760646E138755B3431CC00567C373C50303 (ReadOnlyCollection_1_tAE114E8C18E180A65629D9DF0D8911860274551C* __this, UxmlProperty_t98965D0AC619F23715A51F072A885C7F07F15FE4 ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_IndexOf_m7523B4A1B54F01EEC15D4503072D2D24F0941740 (ReadOnlyCollection_1_tAE114E8C18E180A65629D9DF0D8911860274551C* __this, UxmlProperty_t98965D0AC619F23715A51F072A885C7F07F15FE4 ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_get_Count_mAA7CC5A5A5CC07977C0D39FB6F9B5718A6CC44A7 (ReadOnlyCollection_1_tC5795E68B14E438B5B65AF3F4C3F50CA0F951647* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_IsCompatibleObject_mD05613BFB996238A2515ABAE9DD8DAA1490B499E (RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_Contains_mE2B1A47E7F72DD933A5A1CBC95D4F517C3236FEE (ReadOnlyCollection_1_tC5795E68B14E438B5B65AF3F4C3F50CA0F951647* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_IndexOf_m2C9AF85BBA3C92FF44F5ABAD91CE9CFF5AD52FCC (ReadOnlyCollection_1_tC5795E68B14E438B5B65AF3F4C3F50CA0F951647* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_get_Count_m986EBFDE8CE6355B85CD8A03AC640405D2A43CE7 (ReadOnlyCollection_1_t9E2776C66EA6797EAB405FB5507CCFDAA18084F6* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_IsCompatibleObject_m9D0C44744D57EEB523A3A4775550761A5F80C9C3 (RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_Contains_m6BD386DDD80866871280629115122A6313FAE337 (ReadOnlyCollection_1_t9E2776C66EA6797EAB405FB5507CCFDAA18084F6* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_IndexOf_m90B344A9EBAC54E2AA81B15D0FBA3498EE0603A3 (ReadOnlyCollection_1_t9E2776C66EA6797EAB405FB5507CCFDAA18084F6* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_get_Count_m1B55A97A91F66DF4081BC160ACBA11A20C0C3D12 (ReadOnlyCollection_1_tC097ADAD4728DA15D13F639EC263BD398D57B04F* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_IsCompatibleObject_m15FC7DD980CED28245F768674D29D0E3F992837E (RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_Contains_m36DC3D6E48A3DBD5B36F8782060E21142784D828 (ReadOnlyCollection_1_tC097ADAD4728DA15D13F639EC263BD398D57B04F* __this, Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_IndexOf_m2765659E739B29A777CECAA80AEDF4D3A21FE0CE (ReadOnlyCollection_1_tC097ADAD4728DA15D13F639EC263BD398D57B04F* __this, Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_get_Count_mBCE75651A133F9CCD9FC4C86CBDE6E6076255728 (ReadOnlyCollection_1_tA87EA4F23BAC952A78BDE9A5B94F3091DB5C7861* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_IsCompatibleObject_m6E114ABEDEECA9C3CA16E3E503B90E12AD4EF0B7 (RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_Contains_mC1DD398028830B9B33CD32417B797F7AD988C1CE (ReadOnlyCollection_1_tA87EA4F23BAC952A78BDE9A5B94F3091DB5C7861* __this, VertexAttributeDescriptor_tD4231FBF57335465D16308D2A18E8E83D36BFA76 ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_IndexOf_m1CB37BA54919F404E908CDFE7022CC6D1F0E5954 (ReadOnlyCollection_1_tA87EA4F23BAC952A78BDE9A5B94F3091DB5C7861* __this, VertexAttributeDescriptor_tD4231FBF57335465D16308D2A18E8E83D36BFA76 ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_get_Count_mE3C5DAF414445B20B6B036B8BFDAB1BDDDC8E206 (ReadOnlyCollection_1_tB6FD6BA75C6F479B6860FCBA235488206BF20E52* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_IsCompatibleObject_m733A0F976869D4EB1A0B40A0CCCD60B582572C4A (RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_Contains_m6071D5F75047625A3D94C37160C90859A4969B24 (ReadOnlyCollection_1_tB6FD6BA75C6F479B6860FCBA235488206BF20E52* __this, X509ChainStatus_t5A57DDA24AA1FCA9F2B8D70B767CDDF388E4A80D ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_IndexOf_m1A4EBD2A29E3D8135601CD299CF5B0B2595BD7E9 (ReadOnlyCollection_1_tB6FD6BA75C6F479B6860FCBA235488206BF20E52* __this, X509ChainStatus_t5A57DDA24AA1FCA9F2B8D70B767CDDF388E4A80D ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_get_Count_m82272C19694C8A67763F9C55EEC7A512934A147C (ReadOnlyCollection_1_t85346C45E00BDEEDC76B78A9F7D2D0F363A5763B* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_IsCompatibleObject_mE26DF494C190F294B3998816E0CBDE90B22C7540 (RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_Contains_m57E7F0A6B61467C2A050CB5A3461E44C118CFAD8 (ReadOnlyCollection_1_t85346C45E00BDEEDC76B78A9F7D2D0F363A5763B* __this, XRCommonHandGesturesState_t18CE495C531D06CFA5E2FB753CB9DC9813F9D858 ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_IndexOf_m2953D7DBE8D0D5108349ACE912A952BEA1BD5A0A (ReadOnlyCollection_1_t85346C45E00BDEEDC76B78A9F7D2D0F363A5763B* __this, XRCommonHandGesturesState_t18CE495C531D06CFA5E2FB753CB9DC9813F9D858 ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_get_Count_m21CADB99DB74429FF3CAF70BAB078191A03241E3 (ReadOnlyCollection_1_t803A81BE343B15275BCD30A219ACAC97F0B9A1C8* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_IsCompatibleObject_mB8637EFA6E7DC55A186C227F3D362EEF524D9FAD (RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_Contains_m7F9F1C288B16CFD896954561CBA914AB70CA3C42 (ReadOnlyCollection_1_t803A81BE343B15275BCD30A219ACAC97F0B9A1C8* __this, XRFeatureDescriptor_t690E672A6BBBEFBB8AF221485C1884507EAFB5B2 ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_IndexOf_m12E94AAF0808183AA148780A69482224EAE1EACF (ReadOnlyCollection_1_t803A81BE343B15275BCD30A219ACAC97F0B9A1C8* __this, XRFeatureDescriptor_t690E672A6BBBEFBB8AF221485C1884507EAFB5B2 ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_get_Count_mFDC67CFFE108DF01F6236E669E867F19EFA81DE1 (ReadOnlyCollection_1_t6C8AC0F6B679CC534CE688032CB9948629825DA3* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_IsCompatibleObject_mD0FC65F1053DC96613273328BFA447E2C77FF83A (RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_Contains_m05E369B582D9EF63EC9526AD90CF1009187ED150 (ReadOnlyCollection_1_t6C8AC0F6B679CC534CE688032CB9948629825DA3* __this, XRHandAimState_tE6FE6D8596FAD861E3D2D21DD47E1653612C44C3 ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_IndexOf_m8B7AAB305511A6034A6B6DF982D82D92A532F61F (ReadOnlyCollection_1_t6C8AC0F6B679CC534CE688032CB9948629825DA3* __this, XRHandAimState_tE6FE6D8596FAD861E3D2D21DD47E1653612C44C3 ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_get_Count_m8006832EED0D2158E16CB362754FFB4C06977607 (ReadOnlyCollection_1_t32BEC0647A8F6D582FC1DA6D0BC025666732CFA7* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_IsCompatibleObject_m573E37B3FAAE399241D1342F625C0F1D26E2A7F1 (RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_Contains_mB3C75258EC7FF15CCFEF09A6E5940FC77B299138 (ReadOnlyCollection_1_t32BEC0647A8F6D582FC1DA6D0BC025666732CFA7* __this, XRHandCaptureFrame_t224DFB9FF2BA856544F3CCE5DB6CE02918D9F073 ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_IndexOf_mBB075C23AA0EB5E1A04C3170BA4EDF54FCD9E3D3 (ReadOnlyCollection_1_t32BEC0647A8F6D582FC1DA6D0BC025666732CFA7* __this, XRHandCaptureFrame_t224DFB9FF2BA856544F3CCE5DB6CE02918D9F073 ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_get_Count_mD86D7EA54B0FFB06E883D4DAB3BDDAF3F460B561 (ReadOnlyCollection_1_t728B5B26312A9F49C80371AB59BF28B329A732BB* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_IsCompatibleObject_m541D92BA175342AC3F18C83D00620D099E0B2717 (RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_Contains_m834BE6A68DD552527DC15F65BA716BA25AF20E32 (ReadOnlyCollection_1_t728B5B26312A9F49C80371AB59BF28B329A732BB* __this, XRHandCaptureSnapshot_t956439CF03BF6D3AAE255BB4851DE09108C05DFE ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_IndexOf_m7A086C5C0559E7D1C6B12C2C611A0C3C2244EB1B (ReadOnlyCollection_1_t728B5B26312A9F49C80371AB59BF28B329A732BB* __this, XRHandCaptureSnapshot_t956439CF03BF6D3AAE255BB4851DE09108C05DFE ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_get_Count_mA743C1558CFB688FC0D3592D0A143CB8B1E0C08F (ReadOnlyCollection_1_tF58B2CF3C6F9DEF3999E54AF061B5E0531EAB681* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_IsCompatibleObject_m5FD99DFA253915A64C82C01BE351511A8E0C3147 (RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_Contains_mCE8506D9CD8C834EE4F332A14354A1A566B174FB (ReadOnlyCollection_1_tF58B2CF3C6F9DEF3999E54AF061B5E0531EAB681* __this, XRHandJoint_tDB955774276659AFD2294D516FC8A76A51E94783 ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_IndexOf_m3DEFA1A533C01170F2DC3E1B596F961FA4016389 (ReadOnlyCollection_1_tF58B2CF3C6F9DEF3999E54AF061B5E0531EAB681* __this, XRHandJoint_tDB955774276659AFD2294D516FC8A76A51E94783 ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_get_Count_m0BCE304E7E37CC4177CC1E19A982FDBB3624BB11 (ReadOnlyCollection_1_t9ED77C33BF650F562B350CE0279E194D11C3611C* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_IsCompatibleObject_mDEF86102A0BBAFA934465B6A13BEFCA585BA3086 (RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_Contains_mE23598B242FA77FE8C32C4E003738CF735083998 (ReadOnlyCollection_1_t9ED77C33BF650F562B350CE0279E194D11C3611C* __this, XRNodeState_t683158812A1D80A6BC73DB97405BB0B795A9111A ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_IndexOf_m009EB6D087F95648DB4B1C4CA56C750BBCE6254A (ReadOnlyCollection_1_t9ED77C33BF650F562B350CE0279E194D11C3611C* __this, XRNodeState_t683158812A1D80A6BC73DB97405BB0B795A9111A ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_get_Count_mB98C38D2E69C0937FA2F0C8494D7EFDECDA1992D (ReadOnlyCollection_1_t95C4CE7A3281F650247DAD055168AC75CA2E0D94* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_IsCompatibleObject_mBBF52CC85D738F114987C654B0B3E2F4C1AE696A (RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_Contains_m332A74A4BF707ACE74A3A01578A1D5781F7A9F6C (ReadOnlyCollection_1_t95C4CE7A3281F650247DAD055168AC75CA2E0D94* __this, XRView_t70E23918C68E24DB22A8614AA8717B3BA213FAB5 ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_IndexOf_mBBC67B329E7A47849082B0A54D1039AB99E5B231 (ReadOnlyCollection_1_t95C4CE7A3281F650247DAD055168AC75CA2E0D94* __this, XRView_t70E23918C68E24DB22A8614AA8717B3BA213FAB5 ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_get_Count_m6C7D028C89C35DA23289119F3911ECCAB88803E2 (ReadOnlyCollection_1_tF7EFB99EE41013DF4F1A2A749D0A473AE2657BC5* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_IsCompatibleObject_mD0095D90AA1974A7D86685F99BCE71A6E7D20D93 (RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_Contains_m1513FB3F718C0951722ED431B611F1AB8B37D454 (ReadOnlyCollection_1_tF7EFB99EE41013DF4F1A2A749D0A473AE2657BC5* __this, XrAgenticExternalToolParameterMETAX1_tD64F65C7979C70B6990F1B0746E79494F94DB625 ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_IndexOf_m23E90012DD79F3FD0F5E2390D1A84913B1C9753B (ReadOnlyCollection_1_tF7EFB99EE41013DF4F1A2A749D0A473AE2657BC5* __this, XrAgenticExternalToolParameterMETAX1_tD64F65C7979C70B6990F1B0746E79494F94DB625 ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_get_Count_m9AF1774FE249CFF994683344F3395D6C45BA74EB_gshared (ReadOnlyCollection_1_t06F71F2F3EBC6E0A34714E0A7EB3367B6D248263* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_IsCompatibleObject_m6524BB7810330224C17351742769CA098CC80929_gshared (RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_Contains_mCA382B62077A4FA1B0D0F387651E41770EC39690_gshared (ReadOnlyCollection_1_t06F71F2F3EBC6E0A34714E0A7EB3367B6D248263* __this, Il2CppSharedGenericObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_IndexOf_mFC9BAC0925D44B0206E5F9250E502C86E0FE33EC_gshared (ReadOnlyCollection_1_t06F71F2F3EBC6E0A34714E0A7EB3367B6D248263* __this, Il2CppSharedGenericObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_get_Count_m42EA0DCED53E60AEB0F8E87B85BAAFF7E3339250_gshared (ReadOnlyCollection_1_tD86E076A19D3DF6CFD1AC3FEE937BD0FB0B39AF7* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_IsCompatibleObject_m0B1D25730B9DD494FCA9E772786682534DB20B70_gshared (RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_Contains_m5942EC87898E487139915D67666E73C2C5720BBE_gshared (ReadOnlyCollection_1_tD86E076A19D3DF6CFD1AC3FEE937BD0FB0B39AF7* __this, uint8_t ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_IndexOf_m086BD8A3EC781D359798BDF4EFCB669640D8669B_gshared (ReadOnlyCollection_1_tD86E076A19D3DF6CFD1AC3FEE937BD0FB0B39AF7* __this, uint8_t ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_get_Count_mE688C15AB77A4844B3FE1700E2713247F0B0DF9D_gshared (ReadOnlyCollection_1_tA097AD399F1ED95CBDEFC0663790A10C4A43DFB8* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_IsCompatibleObject_mCA01E7A251A192A7B0A1CBC8613CCCFE6CCDBDD0_gshared (RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_Contains_m735114B46C15E226E1ACA6FCFFCB0AB14ADBFC87_gshared (ReadOnlyCollection_1_tA097AD399F1ED95CBDEFC0663790A10C4A43DFB8* __this, int32_t ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_IndexOf_m961F572B556854820B626EDF68D43EB20197152F_gshared (ReadOnlyCollection_1_tA097AD399F1ED95CBDEFC0663790A10C4A43DFB8* __this, int32_t ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_get_Count_mA8EA6EA02972D7BF8CB6FA0098132350D435F55A_gshared (ReadOnlyCollection_1_t57A9EA1D0B6B2A5908DD58EA8C84F29F53D509A1* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_IsCompatibleObject_m0004547519D968FF5DA50C0A87FC7BC11E04578A_gshared (RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_Contains_mE1C0EA44DEB639FE3F1ED4D33CDDC26D71844898_gshared (ReadOnlyCollection_1_t57A9EA1D0B6B2A5908DD58EA8C84F29F53D509A1* __this, uint32_t ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_IndexOf_m1FD6AD4EBF448B0138CA00EE76420826A1285714_gshared (ReadOnlyCollection_1_t57A9EA1D0B6B2A5908DD58EA8C84F29F53D509A1* __this, uint32_t ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_get_Count_m6C0A093B331DA8B9A784CF3C61AFBB1006D6BB6E (ReadOnlyCollection_1_tDA9EBC2C2934508604BBB2BA544E97C8DA1907BF* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_IsCompatibleObject_m2B66B388A947DDA65092ACB0015716D7B55E6504 (RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_Contains_mA2E681DDC1D0CB4B3A55B8895EDF2B7F073A417C (ReadOnlyCollection_1_tDA9EBC2C2934508604BBB2BA544E97C8DA1907BF* __this, float2_t3398D7209CB6D09FEA5C49AC55070C5E7BE0B2A5 ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_IndexOf_mDC6A3B52E8647FB457B77CF3CCF4B133C84B646B (ReadOnlyCollection_1_tDA9EBC2C2934508604BBB2BA544E97C8DA1907BF* __this, float2_t3398D7209CB6D09FEA5C49AC55070C5E7BE0B2A5 ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_get_Count_mA1936FD531DD97BDB2429883FCC9C9D00CBEA932 (ReadOnlyCollection_1_t502D44622D39E2DFE6DABEFCEA766AC61E338C30* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_IsCompatibleObject_m86717E0B268FC5F5BE5EEA037F882F913717BC36 (RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_Contains_m61F61AD9BAE1A26C4A745A9C53C30BD2CD4D2725 (ReadOnlyCollection_1_t502D44622D39E2DFE6DABEFCEA766AC61E338C30* __this, IdsOfInstances_t4412C0FA3A4CE4CBFCB20E15BAB081BAC990B350 ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_IndexOf_mC70C67627A847C94D99F61E69307F6115DB32AC3 (ReadOnlyCollection_1_t502D44622D39E2DFE6DABEFCEA766AC61E338C30* __this, IdsOfInstances_t4412C0FA3A4CE4CBFCB20E15BAB081BAC990B350 ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_get_Count_m8BBBA71F7E653FD881BAB6DBA0B7491E201F4A1A (ReadOnlyCollection_1_t6902277BA0F804A3B22466CBEF4B07E1FB12E479* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_IsCompatibleObject_m2C114C70F2EA92C114400CDE3FC98781109BFFE2 (RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_Contains_mE965B78D4C7A68816A24B72AAB973616BE9D18E0 (ReadOnlyCollection_1_t6902277BA0F804A3B22466CBEF4B07E1FB12E479* __this, ShadowResolutionRequest_tC1B869ADCA139D8D7AD8A355373F84C7F5E0FCBE ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_IndexOf_m9C7502E77592EEE40AFD08845CBA291A2EA1DE24 (ReadOnlyCollection_1_t6902277BA0F804A3B22466CBEF4B07E1FB12E479* __this, ShadowResolutionRequest_tC1B869ADCA139D8D7AD8A355373F84C7F5E0FCBE ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_get_Count_m3554A5660CE35580F955DAF2FE36CA33EA0E222B (ReadOnlyCollection_1_t430A5D085E133CDE36E20D9D8D8DFCE0600F90C9* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_IsCompatibleObject_mA3FD6DC24CDFF8F0F54FDCFB91562EF86634E04E (RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_Contains_m9C7C610F8F83C3ECFBF7BC381D472FDC0554B50F (ReadOnlyCollection_1_t430A5D085E133CDE36E20D9D8D8DFCE0600F90C9* __this, ConnectionEndpoint_t3C9316D0A11BCB22C8F1F6A53F5E0365DFD7DBA7 ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_IndexOf_m2B1DAD09F29FA96B91F32CAD4B395F35BE6ABB53 (ReadOnlyCollection_1_t430A5D085E133CDE36E20D9D8D8DFCE0600F90C9* __this, ConnectionEndpoint_t3C9316D0A11BCB22C8F1F6A53F5E0365DFD7DBA7 ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_get_Count_mF630F44EA97169C90D35F920E85F67186863A57D (ReadOnlyCollection_1_t29EC75B4E7474909E58565DFC335C2465CD0CF16* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_IsCompatibleObject_m13237C1A78D3A5B60961585909FDA0D096B8761F (RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_Contains_m0D99482C81B07EC683E70A691025A710C226DC29 (ReadOnlyCollection_1_t29EC75B4E7474909E58565DFC335C2465CD0CF16* __this, ApiLayer_t99CB624F0B458A984C99D6A3009A2D8321A85227 ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_IndexOf_m9831AA338FD25D56CE3B0BC39A8159D10C3134A7 (ReadOnlyCollection_1_t29EC75B4E7474909E58565DFC335C2465CD0CF16* __this, ApiLayer_t99CB624F0B458A984C99D6A3009A2D8321A85227 ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_get_Count_mC7E0E87D44CEF9F2BEEDDC1BC4B0D24B71D16E97 (ReadOnlyCollection_1_t0072B9B1BE9DDF9C8BF0ABE59E7EEBD11BFAA293* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_IsCompatibleObject_mAD1FD16BD846C5E9807414D8F7DF35DAC62B8F19 (RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_Contains_m724638603012524EA3300E26FB0DCB831C3FAB0E (ReadOnlyCollection_1_t0072B9B1BE9DDF9C8BF0ABE59E7EEBD11BFAA293* __this, AwaitableAndFrameIndex_t5B42EA520B0415D199F9487706ABCD53407C0161 ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_IndexOf_mBD33E0AA2E866B762E64073D335B3E38C2752975 (ReadOnlyCollection_1_t0072B9B1BE9DDF9C8BF0ABE59E7EEBD11BFAA293* __this, AwaitableAndFrameIndex_t5B42EA520B0415D199F9487706ABCD53407C0161 ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_get_Count_m40B654ABF35A6A8B4838BCC343C8C571740B84A1 (ReadOnlyCollection_1_t00EFCE24C7E2AF195B108C1FC1E1BE4F7007EC1E* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_IsCompatibleObject_mBC98CE22AEE31378BE7BC3859B138C399101008C (RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_Contains_m9908F151D504D28AFAA1DAEF129AD20EF6B93081 (ReadOnlyCollection_1_t00EFCE24C7E2AF195B108C1FC1E1BE4F7007EC1E* __this, OrderBlock_t62FD6F6544F34B5298DEF2F77AAE446F269B7837 ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_IndexOf_mE49AD24B09B89FCDFFB51D72A2D789C79DF45B4A (ReadOnlyCollection_1_t00EFCE24C7E2AF195B108C1FC1E1BE4F7007EC1E* __this, OrderBlock_t62FD6F6544F34B5298DEF2F77AAE446F269B7837 ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_get_Count_m287F41240FA9702A3603018F5DA2111101337F87 (ReadOnlyCollection_1_t24949DD08B73EB984B4A07623392ECDAD4BA28D9* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_IsCompatibleObject_m9657834641910CDCA297C535F91DE4065340F741 (RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_Contains_m3E02CC006DCAFF38100E4A14869AF34A4E2C61B1 (ReadOnlyCollection_1_t24949DD08B73EB984B4A07623392ECDAD4BA28D9* __this, Page_t04FE552A388BF55B12C8868E19589136957E00A5 ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_IndexOf_m0E74DCAFC2A961DC0CA098117BA36A6AA644C66D (ReadOnlyCollection_1_t24949DD08B73EB984B4A07623392ECDAD4BA28D9* __this, Page_t04FE552A388BF55B12C8868E19589136957E00A5 ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_get_Count_mAFA7A25CF8FC9364D0533E562FF5D3F8067C93FC (ReadOnlyCollection_1_tA0E2E00CE27E5818B4957D61CE7C01975DCE7874* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_IsCompatibleObject_mDBDDFB3D37EF04A64B8456CF7D6EFE3C4B10DEE7 (RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_Contains_m77A509273C2E04A29E0F7C65B39D1BCDECB1CEFF (ReadOnlyCollection_1_tA0E2E00CE27E5818B4957D61CE7C01975DCE7874* __this, ButtonClickAction_t8939474B9E19930B4546768B72C22DA5A7115A0C ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_IndexOf_m914EBE0AAD35F590C1E148A6673E0374984A5BEB (ReadOnlyCollection_1_tA0E2E00CE27E5818B4957D61CE7C01975DCE7874* __this, ButtonClickAction_t8939474B9E19930B4546768B72C22DA5A7115A0C ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_get_Count_m5B47C160E54B3FA7E5BB14C5B8A0E42626BE69F2 (ReadOnlyCollection_1_t045C5F3279EE63047DD20057F0ABA1319690AE3D* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_IsCompatibleObject_m365C933BBE50D401BA82D9F311CA69E4C2504802 (RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_Contains_m4B0847087C68B65B73EA3E6E35259CF4DD1B2D8D (ReadOnlyCollection_1_t045C5F3279EE63047DD20057F0ABA1319690AE3D* __this, AttributeOverrideRange_t47A9929769CAD72883980AE2C29FACC19B310D49 ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_IndexOf_m10763E9212AE626668733F3873AA6AE157C90226 (ReadOnlyCollection_1_t045C5F3279EE63047DD20057F0ABA1319690AE3D* __this, AttributeOverrideRange_t47A9929769CAD72883980AE2C29FACC19B310D49 ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_get_Count_mA8F15C9AC8C599E164CB30A8C966CB6B8DF9D2EE (ReadOnlyCollection_1_t0A65BF0F900AF63819F1C26D6E71BFE75180183D* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_IsCompatibleObject_m5ED4BCD5F3168B64D782C291387E833318C7D50C (RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_Contains_m88C6F200CD92A99A7749F39BE082CDA1F67CAAEB (ReadOnlyCollection_1_t0A65BF0F900AF63819F1C26D6E71BFE75180183D* __this, SerializedDataOverrideRange_t3A1FFF9457378F017DD8F445C7AF421B9AB65014 ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_IndexOf_mA86F064006A9C37FA35D6D9E63BA1E3DE93D7FB6 (ReadOnlyCollection_1_t0A65BF0F900AF63819F1C26D6E71BFE75180183D* __this, SerializedDataOverrideRange_t3A1FFF9457378F017DD8F445C7AF421B9AB65014 ___0_value, const RuntimeMethod* method) ;

IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC (int32_t ___0_argument, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA (int32_t ___0_resource, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC (RuntimeArray* __this, int32_t ___0_dimension, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowIndexArgumentOutOfRange_NeedNonNegNumException_m57AAB1E093F20BFC64BDDBD90FB5B592F582B82F (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_get_Count_mA070C2C4E69ECF4F1658E281C60BF698FD5A5A8F (ReadOnlyCollection_1_tBE445934E4BBFAD9104AC1AFC81C07456740D5B9* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57 (RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ___0_handle, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58 (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_IsCompatibleObject_m3C659BC7492D6D23A67860B02DE0D2BF56988CAA (RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_Contains_m79D6B93F48A882214613F65736C4275CCC7FC3FF (ReadOnlyCollection_1_tBE445934E4BBFAD9104AC1AFC81C07456740D5B9* __this, StyleVariable_t5D4DEC936102A13961F4F2C6214B83D6CDC56269 ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_IndexOf_m59C4EFADD346BE75CA43C56F812E67C011CF75F9 (ReadOnlyCollection_1_tBE445934E4BBFAD9104AC1AFC81C07456740D5B9* __this, StyleVariable_t5D4DEC936102A13961F4F2C6214B83D6CDC56269 ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_get_Count_m21B7575FC88C1F0EB39B77529C38A0286A3B575F (ReadOnlyCollection_1_tB270E5CCE3D7607E7CDDBE1B835360A0E7B07DF4* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_IsCompatibleObject_mEECB28AFAAAC26A7C6E843A076A43DCE2F55CDCA (RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_Contains_m89291249B5D4B20D9F07C3B162755A25BC44C530 (ReadOnlyCollection_1_tB270E5CCE3D7607E7CDDBE1B835360A0E7B07DF4* __this, Substring_t2E16755269E6716C22074D6BC0A9099915E67849 ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_IndexOf_mA817652F7A04A40F42DD4F4F8C12D4E9E4508B51 (ReadOnlyCollection_1_tB270E5CCE3D7607E7CDDBE1B835360A0E7B07DF4* __this, Substring_t2E16755269E6716C22074D6BC0A9099915E67849 ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_get_Count_m1B303B771A898F2B2B6BFC1858958F3256DD3E99 (ReadOnlyCollection_1_tFF6716AACE48FE7B167A53ED10AE04FA2A2AB83A* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_IsCompatibleObject_mC19A002D4F9915FA70C0B6DE179B36F8B4DA9B87 (RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_Contains_m02DC5E9462836451750318F47E93084247533EE6 (ReadOnlyCollection_1_tFF6716AACE48FE7B167A53ED10AE04FA2A2AB83A* __this, TimeValue_t45AE43B219493F9459363F32C79E8986B5F82E0E ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_IndexOf_m51CDE7C02C2B73BD9913E8FC0ED84A4308672A73 (ReadOnlyCollection_1_tFF6716AACE48FE7B167A53ED10AE04FA2A2AB83A* __this, TimeValue_t45AE43B219493F9459363F32C79E8986B5F82E0E ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_get_Count_m208858945002AE69A132CDB66FEABE0C0525AE60 (ReadOnlyCollection_1_t5F8B55EF85E52FBC5F41B42D70D13BC89D4C469A* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_IsCompatibleObject_m7FF4D4B7DB9C5EB381294D17EF153E57E9D90F24 (RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_Contains_m05093008740300A921F7BB341479D97499CF75E0 (ReadOnlyCollection_1_t5F8B55EF85E52FBC5F41B42D70D13BC89D4C469A* __this, UICharInfo_t24C2EA0F2F3A938100C271891D9DEB015ABA5FBD ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_IndexOf_m04BB6920B51BCC3A3026DF35719210BF7C503C2C (ReadOnlyCollection_1_t5F8B55EF85E52FBC5F41B42D70D13BC89D4C469A* __this, UICharInfo_t24C2EA0F2F3A938100C271891D9DEB015ABA5FBD ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_get_Count_mF4F25BF826DF061ED78B82A6595649A22FE54A6A (ReadOnlyCollection_1_tAC9F0ECFFCE3DC3797BE610439BF76ACB015D44E* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_IsCompatibleObject_m03C42A942F85B4EC168F87B45CA0C1E0B8B991CC (RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_Contains_mC6D50D96188C20173348A47F5374EBB4820BF7FF (ReadOnlyCollection_1_tAC9F0ECFFCE3DC3797BE610439BF76ACB015D44E* __this, UILineInfo_tC6FF4F85BD2316FADA2148A1789B3FF0B05A6CAC ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_IndexOf_m545FFA46CA3E7EED5B63255AD7A4E091B9ABBF0F (ReadOnlyCollection_1_tAC9F0ECFFCE3DC3797BE610439BF76ACB015D44E* __this, UILineInfo_tC6FF4F85BD2316FADA2148A1789B3FF0B05A6CAC ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_get_Count_m1D8F54776E65523E2DFD134DD2FBCB07804B23B5 (ReadOnlyCollection_1_t0279BBDF584EF96177DF75FA7A456E4629B2B09E* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_IsCompatibleObject_m88E1CA111AE23BF4399AA4FFE4FE8867FE94C854 (RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_Contains_mAF5A0A69B2F9B8BF257C52A68C9BAA8A29F6CF17 (ReadOnlyCollection_1_t0279BBDF584EF96177DF75FA7A456E4629B2B09E* __this, UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_IndexOf_m129FB3AE63A51E593B4BAD57B4A2A9E3104812AC (ReadOnlyCollection_1_t0279BBDF584EF96177DF75FA7A456E4629B2B09E* __this, UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_get_Count_mE5F79F4C569C903ACCF6EA6A986411A6DF3A9CF0 (ReadOnlyCollection_1_tF3F201D52E933A4489A4C06E8B1203099F42FB01* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_IsCompatibleObject_m1D7518BCBEC6037EB9FF7B400662C83A568F7B26 (RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_Contains_m419531A31381A970A871D90935DF22B6CF3EBFBB (ReadOnlyCollection_1_tF3F201D52E933A4489A4C06E8B1203099F42FB01* __this, uint32_t ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_IndexOf_m9A6405BAF7999DFD7A0398A1E931E107FEA5A1A5 (ReadOnlyCollection_1_tF3F201D52E933A4489A4C06E8B1203099F42FB01* __this, uint32_t ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_get_Count_m7CADBE80BAAD2AAA5349395B3E442605E0BFEB95 (ReadOnlyCollection_1_tABD6F7BDD581540C8981BBE5012B221D4701AA0A* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_IsCompatibleObject_mE726091D2574AA01253129E1832666343C088AA1 (RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_Contains_m785F371F039A4AA57D08627D5B0808885CDEE0AA (ReadOnlyCollection_1_tABD6F7BDD581540C8981BBE5012B221D4701AA0A* __this, uint64_t ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_IndexOf_mFEF36A399F0FC585064EDABD17E3B3C465AC4F89 (ReadOnlyCollection_1_tABD6F7BDD581540C8981BBE5012B221D4701AA0A* __this, uint64_t ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_get_Count_m7B5E28E23D09FA536000D2D58A36066D9B206742 (ReadOnlyCollection_1_tA06EBFED6AD4BFBC5FCBAEAFCDE3763C5110493C* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_IsCompatibleObject_mFD8649775AED86392A2D22F6EA1E55776ED702EA (RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_Contains_mFB00F475A1D8CD0E7CA4C71EF703938A4FBDD39F (ReadOnlyCollection_1_tA06EBFED6AD4BFBC5FCBAEAFCDE3763C5110493C* __this, UnifiedEventData_tEDECDFB75E38F848CEBAD43511511688BF895A2B ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_IndexOf_m3C01EB950263ED46CDA2569759ADD8A382A8E7AF (ReadOnlyCollection_1_tA06EBFED6AD4BFBC5FCBAEAFCDE3763C5110493C* __this, UnifiedEventData_tEDECDFB75E38F848CEBAD43511511688BF895A2B ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_get_Count_mD76DB4E2C0BC4110F6110E68DA709BD4A503D2F5 (ReadOnlyCollection_1_tC00260BA5B1BEF55EBEF800DF50485F5D9806E4C* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_IsCompatibleObject_m10AE9280CDD0885F6AE0CED9BC419A220F9EF82C (RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_Contains_mFACE0C82F64A6D849DD7A5A9D94592654A6D1011 (ReadOnlyCollection_1_tC00260BA5B1BEF55EBEF800DF50485F5D9806E4C* __this, UniqueStyleString_tE980AA033ABB00413A3139B42FF22750952DAECF ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_IndexOf_m81F9A69BFD18AC9F3559949FD82DE92A9082B650 (ReadOnlyCollection_1_tC00260BA5B1BEF55EBEF800DF50485F5D9806E4C* __this, UniqueStyleString_tE980AA033ABB00413A3139B42FF22750952DAECF ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_get_Count_m45F7511554AC7932A4E66143EF8772E661046099 (ReadOnlyCollection_1_tDF87C8E26187E1D6C24D2DD02E4716CC5B7ACC34* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_IsCompatibleObject_m077B2F36B247C4636FFD0370E89515F37F912A64 (RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_Contains_mDF0074DD4769F53942460C32C27BDB6A7E6E500C (ReadOnlyCollection_1_tDF87C8E26187E1D6C24D2DD02E4716CC5B7ACC34* __this, UsageHint_tFD7259AF9E91500CF1D0CE602394B40FD2397AB1 ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_IndexOf_mD7BBE79F62B90B06912D44DAB47B960B9124DA69 (ReadOnlyCollection_1_tDF87C8E26187E1D6C24D2DD02E4716CC5B7ACC34* __this, UsageHint_tFD7259AF9E91500CF1D0CE602394B40FD2397AB1 ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_get_Count_m531C72497E9FEB4E99E08837AF225D594D2ED741 (ReadOnlyCollection_1_tF64E6ECDE29B9EE2538F5A045045DF7774BB8466* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_IsCompatibleObject_mE21DFAB52F1CF90200F86CA74489FE40660D0FA5 (RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_Contains_mFDCA34C8B2D2B075B2F75C43319A5FB2F06EBAB7 (ReadOnlyCollection_1_tF64E6ECDE29B9EE2538F5A045045DF7774BB8466* __this, UxmlNamespaceDefinition_t6B70CA125A4C1D5F74F1C901A6F4F72637F6621B ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_IndexOf_m3C139BA080D9F8D44C2E3F09CDF4AF7AB91BCD06 (ReadOnlyCollection_1_tF64E6ECDE29B9EE2538F5A045045DF7774BB8466* __this, UxmlNamespaceDefinition_t6B70CA125A4C1D5F74F1C901A6F4F72637F6621B ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_get_Count_mBFE65873D7F80153840E0C74D836129E3847B9A6 (ReadOnlyCollection_1_tAE114E8C18E180A65629D9DF0D8911860274551C* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_IsCompatibleObject_m7575D658F2FFB26CF20770C4D9570925DCAE4CBC (RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_Contains_m78939760646E138755B3431CC00567C373C50303 (ReadOnlyCollection_1_tAE114E8C18E180A65629D9DF0D8911860274551C* __this, UxmlProperty_t98965D0AC619F23715A51F072A885C7F07F15FE4 ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_IndexOf_m7523B4A1B54F01EEC15D4503072D2D24F0941740 (ReadOnlyCollection_1_tAE114E8C18E180A65629D9DF0D8911860274551C* __this, UxmlProperty_t98965D0AC619F23715A51F072A885C7F07F15FE4 ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_get_Count_mAA7CC5A5A5CC07977C0D39FB6F9B5718A6CC44A7 (ReadOnlyCollection_1_tC5795E68B14E438B5B65AF3F4C3F50CA0F951647* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_IsCompatibleObject_mD05613BFB996238A2515ABAE9DD8DAA1490B499E (RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_Contains_mE2B1A47E7F72DD933A5A1CBC95D4F517C3236FEE (ReadOnlyCollection_1_tC5795E68B14E438B5B65AF3F4C3F50CA0F951647* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_IndexOf_m2C9AF85BBA3C92FF44F5ABAD91CE9CFF5AD52FCC (ReadOnlyCollection_1_tC5795E68B14E438B5B65AF3F4C3F50CA0F951647* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_get_Count_m986EBFDE8CE6355B85CD8A03AC640405D2A43CE7 (ReadOnlyCollection_1_t9E2776C66EA6797EAB405FB5507CCFDAA18084F6* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_IsCompatibleObject_m9D0C44744D57EEB523A3A4775550761A5F80C9C3 (RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_Contains_m6BD386DDD80866871280629115122A6313FAE337 (ReadOnlyCollection_1_t9E2776C66EA6797EAB405FB5507CCFDAA18084F6* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_IndexOf_m90B344A9EBAC54E2AA81B15D0FBA3498EE0603A3 (ReadOnlyCollection_1_t9E2776C66EA6797EAB405FB5507CCFDAA18084F6* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_get_Count_m1B55A97A91F66DF4081BC160ACBA11A20C0C3D12 (ReadOnlyCollection_1_tC097ADAD4728DA15D13F639EC263BD398D57B04F* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_IsCompatibleObject_m15FC7DD980CED28245F768674D29D0E3F992837E (RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_Contains_m36DC3D6E48A3DBD5B36F8782060E21142784D828 (ReadOnlyCollection_1_tC097ADAD4728DA15D13F639EC263BD398D57B04F* __this, Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_IndexOf_m2765659E739B29A777CECAA80AEDF4D3A21FE0CE (ReadOnlyCollection_1_tC097ADAD4728DA15D13F639EC263BD398D57B04F* __this, Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_get_Count_mBCE75651A133F9CCD9FC4C86CBDE6E6076255728 (ReadOnlyCollection_1_tA87EA4F23BAC952A78BDE9A5B94F3091DB5C7861* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_IsCompatibleObject_m6E114ABEDEECA9C3CA16E3E503B90E12AD4EF0B7 (RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_Contains_mC1DD398028830B9B33CD32417B797F7AD988C1CE (ReadOnlyCollection_1_tA87EA4F23BAC952A78BDE9A5B94F3091DB5C7861* __this, VertexAttributeDescriptor_tD4231FBF57335465D16308D2A18E8E83D36BFA76 ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_IndexOf_m1CB37BA54919F404E908CDFE7022CC6D1F0E5954 (ReadOnlyCollection_1_tA87EA4F23BAC952A78BDE9A5B94F3091DB5C7861* __this, VertexAttributeDescriptor_tD4231FBF57335465D16308D2A18E8E83D36BFA76 ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_get_Count_mE3C5DAF414445B20B6B036B8BFDAB1BDDDC8E206 (ReadOnlyCollection_1_tB6FD6BA75C6F479B6860FCBA235488206BF20E52* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_IsCompatibleObject_m733A0F976869D4EB1A0B40A0CCCD60B582572C4A (RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_Contains_m6071D5F75047625A3D94C37160C90859A4969B24 (ReadOnlyCollection_1_tB6FD6BA75C6F479B6860FCBA235488206BF20E52* __this, X509ChainStatus_t5A57DDA24AA1FCA9F2B8D70B767CDDF388E4A80D ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_IndexOf_m1A4EBD2A29E3D8135601CD299CF5B0B2595BD7E9 (ReadOnlyCollection_1_tB6FD6BA75C6F479B6860FCBA235488206BF20E52* __this, X509ChainStatus_t5A57DDA24AA1FCA9F2B8D70B767CDDF388E4A80D ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_get_Count_m82272C19694C8A67763F9C55EEC7A512934A147C (ReadOnlyCollection_1_t85346C45E00BDEEDC76B78A9F7D2D0F363A5763B* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_IsCompatibleObject_mE26DF494C190F294B3998816E0CBDE90B22C7540 (RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_Contains_m57E7F0A6B61467C2A050CB5A3461E44C118CFAD8 (ReadOnlyCollection_1_t85346C45E00BDEEDC76B78A9F7D2D0F363A5763B* __this, XRCommonHandGesturesState_t18CE495C531D06CFA5E2FB753CB9DC9813F9D858 ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_IndexOf_m2953D7DBE8D0D5108349ACE912A952BEA1BD5A0A (ReadOnlyCollection_1_t85346C45E00BDEEDC76B78A9F7D2D0F363A5763B* __this, XRCommonHandGesturesState_t18CE495C531D06CFA5E2FB753CB9DC9813F9D858 ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_get_Count_m21CADB99DB74429FF3CAF70BAB078191A03241E3 (ReadOnlyCollection_1_t803A81BE343B15275BCD30A219ACAC97F0B9A1C8* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_IsCompatibleObject_mB8637EFA6E7DC55A186C227F3D362EEF524D9FAD (RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_Contains_m7F9F1C288B16CFD896954561CBA914AB70CA3C42 (ReadOnlyCollection_1_t803A81BE343B15275BCD30A219ACAC97F0B9A1C8* __this, XRFeatureDescriptor_t690E672A6BBBEFBB8AF221485C1884507EAFB5B2 ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_IndexOf_m12E94AAF0808183AA148780A69482224EAE1EACF (ReadOnlyCollection_1_t803A81BE343B15275BCD30A219ACAC97F0B9A1C8* __this, XRFeatureDescriptor_t690E672A6BBBEFBB8AF221485C1884507EAFB5B2 ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_get_Count_mFDC67CFFE108DF01F6236E669E867F19EFA81DE1 (ReadOnlyCollection_1_t6C8AC0F6B679CC534CE688032CB9948629825DA3* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_IsCompatibleObject_mD0FC65F1053DC96613273328BFA447E2C77FF83A (RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_Contains_m05E369B582D9EF63EC9526AD90CF1009187ED150 (ReadOnlyCollection_1_t6C8AC0F6B679CC534CE688032CB9948629825DA3* __this, XRHandAimState_tE6FE6D8596FAD861E3D2D21DD47E1653612C44C3 ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_IndexOf_m8B7AAB305511A6034A6B6DF982D82D92A532F61F (ReadOnlyCollection_1_t6C8AC0F6B679CC534CE688032CB9948629825DA3* __this, XRHandAimState_tE6FE6D8596FAD861E3D2D21DD47E1653612C44C3 ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_get_Count_m8006832EED0D2158E16CB362754FFB4C06977607 (ReadOnlyCollection_1_t32BEC0647A8F6D582FC1DA6D0BC025666732CFA7* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_IsCompatibleObject_m573E37B3FAAE399241D1342F625C0F1D26E2A7F1 (RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_Contains_mB3C75258EC7FF15CCFEF09A6E5940FC77B299138 (ReadOnlyCollection_1_t32BEC0647A8F6D582FC1DA6D0BC025666732CFA7* __this, XRHandCaptureFrame_t224DFB9FF2BA856544F3CCE5DB6CE02918D9F073 ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_IndexOf_mBB075C23AA0EB5E1A04C3170BA4EDF54FCD9E3D3 (ReadOnlyCollection_1_t32BEC0647A8F6D582FC1DA6D0BC025666732CFA7* __this, XRHandCaptureFrame_t224DFB9FF2BA856544F3CCE5DB6CE02918D9F073 ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_get_Count_mD86D7EA54B0FFB06E883D4DAB3BDDAF3F460B561 (ReadOnlyCollection_1_t728B5B26312A9F49C80371AB59BF28B329A732BB* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_IsCompatibleObject_m541D92BA175342AC3F18C83D00620D099E0B2717 (RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_Contains_m834BE6A68DD552527DC15F65BA716BA25AF20E32 (ReadOnlyCollection_1_t728B5B26312A9F49C80371AB59BF28B329A732BB* __this, XRHandCaptureSnapshot_t956439CF03BF6D3AAE255BB4851DE09108C05DFE ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_IndexOf_m7A086C5C0559E7D1C6B12C2C611A0C3C2244EB1B (ReadOnlyCollection_1_t728B5B26312A9F49C80371AB59BF28B329A732BB* __this, XRHandCaptureSnapshot_t956439CF03BF6D3AAE255BB4851DE09108C05DFE ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_get_Count_mA743C1558CFB688FC0D3592D0A143CB8B1E0C08F (ReadOnlyCollection_1_tF58B2CF3C6F9DEF3999E54AF061B5E0531EAB681* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_IsCompatibleObject_m5FD99DFA253915A64C82C01BE351511A8E0C3147 (RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_Contains_mCE8506D9CD8C834EE4F332A14354A1A566B174FB (ReadOnlyCollection_1_tF58B2CF3C6F9DEF3999E54AF061B5E0531EAB681* __this, XRHandJoint_tDB955774276659AFD2294D516FC8A76A51E94783 ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_IndexOf_m3DEFA1A533C01170F2DC3E1B596F961FA4016389 (ReadOnlyCollection_1_tF58B2CF3C6F9DEF3999E54AF061B5E0531EAB681* __this, XRHandJoint_tDB955774276659AFD2294D516FC8A76A51E94783 ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_get_Count_m0BCE304E7E37CC4177CC1E19A982FDBB3624BB11 (ReadOnlyCollection_1_t9ED77C33BF650F562B350CE0279E194D11C3611C* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_IsCompatibleObject_mDEF86102A0BBAFA934465B6A13BEFCA585BA3086 (RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_Contains_mE23598B242FA77FE8C32C4E003738CF735083998 (ReadOnlyCollection_1_t9ED77C33BF650F562B350CE0279E194D11C3611C* __this, XRNodeState_t683158812A1D80A6BC73DB97405BB0B795A9111A ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_IndexOf_m009EB6D087F95648DB4B1C4CA56C750BBCE6254A (ReadOnlyCollection_1_t9ED77C33BF650F562B350CE0279E194D11C3611C* __this, XRNodeState_t683158812A1D80A6BC73DB97405BB0B795A9111A ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_get_Count_mB98C38D2E69C0937FA2F0C8494D7EFDECDA1992D (ReadOnlyCollection_1_t95C4CE7A3281F650247DAD055168AC75CA2E0D94* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_IsCompatibleObject_mBBF52CC85D738F114987C654B0B3E2F4C1AE696A (RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_Contains_m332A74A4BF707ACE74A3A01578A1D5781F7A9F6C (ReadOnlyCollection_1_t95C4CE7A3281F650247DAD055168AC75CA2E0D94* __this, XRView_t70E23918C68E24DB22A8614AA8717B3BA213FAB5 ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_IndexOf_mBBC67B329E7A47849082B0A54D1039AB99E5B231 (ReadOnlyCollection_1_t95C4CE7A3281F650247DAD055168AC75CA2E0D94* __this, XRView_t70E23918C68E24DB22A8614AA8717B3BA213FAB5 ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_get_Count_m6C7D028C89C35DA23289119F3911ECCAB88803E2 (ReadOnlyCollection_1_tF7EFB99EE41013DF4F1A2A749D0A473AE2657BC5* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_IsCompatibleObject_mD0095D90AA1974A7D86685F99BCE71A6E7D20D93 (RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_Contains_m1513FB3F718C0951722ED431B611F1AB8B37D454 (ReadOnlyCollection_1_tF7EFB99EE41013DF4F1A2A749D0A473AE2657BC5* __this, XrAgenticExternalToolParameterMETAX1_tD64F65C7979C70B6990F1B0746E79494F94DB625 ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_IndexOf_m23E90012DD79F3FD0F5E2390D1A84913B1C9753B (ReadOnlyCollection_1_tF7EFB99EE41013DF4F1A2A749D0A473AE2657BC5* __this, XrAgenticExternalToolParameterMETAX1_tD64F65C7979C70B6990F1B0746E79494F94DB625 ___0_value, const RuntimeMethod* method) ;
inline int32_t ReadOnlyCollection_1_get_Count_m9AF1774FE249CFF994683344F3395D6C45BA74EB (ReadOnlyCollection_1_t06F71F2F3EBC6E0A34714E0A7EB3367B6D248263* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (ReadOnlyCollection_1_t06F71F2F3EBC6E0A34714E0A7EB3367B6D248263*, const RuntimeMethod*))ReadOnlyCollection_1_get_Count_m9AF1774FE249CFF994683344F3395D6C45BA74EB_gshared)(__this, method);
}
inline bool ReadOnlyCollection_1_IsCompatibleObject_m6524BB7810330224C17351742769CA098CC80929 (RuntimeObject* ___0_value, const RuntimeMethod* method)
{
	return ((  bool (*) (RuntimeObject*, const RuntimeMethod*))ReadOnlyCollection_1_IsCompatibleObject_m6524BB7810330224C17351742769CA098CC80929_gshared)(___0_value, method);
}
inline bool ReadOnlyCollection_1_Contains_mCA382B62077A4FA1B0D0F387651E41770EC39690 (ReadOnlyCollection_1_t06F71F2F3EBC6E0A34714E0A7EB3367B6D248263* __this, Il2CppSharedGenericObject* ___0_value, const RuntimeMethod* method)
{
	return ((  bool (*) (ReadOnlyCollection_1_t06F71F2F3EBC6E0A34714E0A7EB3367B6D248263*, Il2CppSharedGenericObject*, const RuntimeMethod*))ReadOnlyCollection_1_Contains_mCA382B62077A4FA1B0D0F387651E41770EC39690_gshared)(__this, ___0_value, method);
}
inline int32_t ReadOnlyCollection_1_IndexOf_mFC9BAC0925D44B0206E5F9250E502C86E0FE33EC (ReadOnlyCollection_1_t06F71F2F3EBC6E0A34714E0A7EB3367B6D248263* __this, Il2CppSharedGenericObject* ___0_value, const RuntimeMethod* method)
{
	return ((  int32_t (*) (ReadOnlyCollection_1_t06F71F2F3EBC6E0A34714E0A7EB3367B6D248263*, Il2CppSharedGenericObject*, const RuntimeMethod*))ReadOnlyCollection_1_IndexOf_mFC9BAC0925D44B0206E5F9250E502C86E0FE33EC_gshared)(__this, ___0_value, method);
}
inline int32_t ReadOnlyCollection_1_get_Count_m42EA0DCED53E60AEB0F8E87B85BAAFF7E3339250 (ReadOnlyCollection_1_tD86E076A19D3DF6CFD1AC3FEE937BD0FB0B39AF7* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (ReadOnlyCollection_1_tD86E076A19D3DF6CFD1AC3FEE937BD0FB0B39AF7*, const RuntimeMethod*))ReadOnlyCollection_1_get_Count_m42EA0DCED53E60AEB0F8E87B85BAAFF7E3339250_gshared)(__this, method);
}
inline bool ReadOnlyCollection_1_IsCompatibleObject_m0B1D25730B9DD494FCA9E772786682534DB20B70 (RuntimeObject* ___0_value, const RuntimeMethod* method)
{
	return ((  bool (*) (RuntimeObject*, const RuntimeMethod*))ReadOnlyCollection_1_IsCompatibleObject_m0B1D25730B9DD494FCA9E772786682534DB20B70_gshared)(___0_value, method);
}
inline bool ReadOnlyCollection_1_Contains_m5942EC87898E487139915D67666E73C2C5720BBE (ReadOnlyCollection_1_tD86E076A19D3DF6CFD1AC3FEE937BD0FB0B39AF7* __this, uint8_t ___0_value, const RuntimeMethod* method)
{
	return ((  bool (*) (ReadOnlyCollection_1_tD86E076A19D3DF6CFD1AC3FEE937BD0FB0B39AF7*, uint8_t, const RuntimeMethod*))ReadOnlyCollection_1_Contains_m5942EC87898E487139915D67666E73C2C5720BBE_gshared)(__this, ___0_value, method);
}
inline int32_t ReadOnlyCollection_1_IndexOf_m086BD8A3EC781D359798BDF4EFCB669640D8669B (ReadOnlyCollection_1_tD86E076A19D3DF6CFD1AC3FEE937BD0FB0B39AF7* __this, uint8_t ___0_value, const RuntimeMethod* method)
{
	return ((  int32_t (*) (ReadOnlyCollection_1_tD86E076A19D3DF6CFD1AC3FEE937BD0FB0B39AF7*, uint8_t, const RuntimeMethod*))ReadOnlyCollection_1_IndexOf_m086BD8A3EC781D359798BDF4EFCB669640D8669B_gshared)(__this, ___0_value, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowNotSupportedException_mB51B0F3A42F31B455852E713F424D47333326023 (int32_t ___0_resource, const RuntimeMethod* method) ;
inline int32_t ReadOnlyCollection_1_get_Count_mE688C15AB77A4844B3FE1700E2713247F0B0DF9D (ReadOnlyCollection_1_tA097AD399F1ED95CBDEFC0663790A10C4A43DFB8* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (ReadOnlyCollection_1_tA097AD399F1ED95CBDEFC0663790A10C4A43DFB8*, const RuntimeMethod*))ReadOnlyCollection_1_get_Count_mE688C15AB77A4844B3FE1700E2713247F0B0DF9D_gshared)(__this, method);
}
inline bool ReadOnlyCollection_1_IsCompatibleObject_mCA01E7A251A192A7B0A1CBC8613CCCFE6CCDBDD0 (RuntimeObject* ___0_value, const RuntimeMethod* method)
{
	return ((  bool (*) (RuntimeObject*, const RuntimeMethod*))ReadOnlyCollection_1_IsCompatibleObject_mCA01E7A251A192A7B0A1CBC8613CCCFE6CCDBDD0_gshared)(___0_value, method);
}
inline bool ReadOnlyCollection_1_Contains_m735114B46C15E226E1ACA6FCFFCB0AB14ADBFC87 (ReadOnlyCollection_1_tA097AD399F1ED95CBDEFC0663790A10C4A43DFB8* __this, int32_t ___0_value, const RuntimeMethod* method)
{
	return ((  bool (*) (ReadOnlyCollection_1_tA097AD399F1ED95CBDEFC0663790A10C4A43DFB8*, int32_t, const RuntimeMethod*))ReadOnlyCollection_1_Contains_m735114B46C15E226E1ACA6FCFFCB0AB14ADBFC87_gshared)(__this, ___0_value, method);
}
inline int32_t ReadOnlyCollection_1_IndexOf_m961F572B556854820B626EDF68D43EB20197152F (ReadOnlyCollection_1_tA097AD399F1ED95CBDEFC0663790A10C4A43DFB8* __this, int32_t ___0_value, const RuntimeMethod* method)
{
	return ((  int32_t (*) (ReadOnlyCollection_1_tA097AD399F1ED95CBDEFC0663790A10C4A43DFB8*, int32_t, const RuntimeMethod*))ReadOnlyCollection_1_IndexOf_m961F572B556854820B626EDF68D43EB20197152F_gshared)(__this, ___0_value, method);
}
inline int32_t ReadOnlyCollection_1_get_Count_mA8EA6EA02972D7BF8CB6FA0098132350D435F55A (ReadOnlyCollection_1_t57A9EA1D0B6B2A5908DD58EA8C84F29F53D509A1* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (ReadOnlyCollection_1_t57A9EA1D0B6B2A5908DD58EA8C84F29F53D509A1*, const RuntimeMethod*))ReadOnlyCollection_1_get_Count_mA8EA6EA02972D7BF8CB6FA0098132350D435F55A_gshared)(__this, method);
}
inline bool ReadOnlyCollection_1_IsCompatibleObject_m0004547519D968FF5DA50C0A87FC7BC11E04578A (RuntimeObject* ___0_value, const RuntimeMethod* method)
{
	return ((  bool (*) (RuntimeObject*, const RuntimeMethod*))ReadOnlyCollection_1_IsCompatibleObject_m0004547519D968FF5DA50C0A87FC7BC11E04578A_gshared)(___0_value, method);
}
inline bool ReadOnlyCollection_1_Contains_mE1C0EA44DEB639FE3F1ED4D33CDDC26D71844898 (ReadOnlyCollection_1_t57A9EA1D0B6B2A5908DD58EA8C84F29F53D509A1* __this, uint32_t ___0_value, const RuntimeMethod* method)
{
	return ((  bool (*) (ReadOnlyCollection_1_t57A9EA1D0B6B2A5908DD58EA8C84F29F53D509A1*, uint32_t, const RuntimeMethod*))ReadOnlyCollection_1_Contains_mE1C0EA44DEB639FE3F1ED4D33CDDC26D71844898_gshared)(__this, ___0_value, method);
}
inline int32_t ReadOnlyCollection_1_IndexOf_m1FD6AD4EBF448B0138CA00EE76420826A1285714 (ReadOnlyCollection_1_t57A9EA1D0B6B2A5908DD58EA8C84F29F53D509A1* __this, uint32_t ___0_value, const RuntimeMethod* method)
{
	return ((  int32_t (*) (ReadOnlyCollection_1_t57A9EA1D0B6B2A5908DD58EA8C84F29F53D509A1*, uint32_t, const RuntimeMethod*))ReadOnlyCollection_1_IndexOf_m1FD6AD4EBF448B0138CA00EE76420826A1285714_gshared)(__this, ___0_value, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_get_Count_m6C0A093B331DA8B9A784CF3C61AFBB1006D6BB6E (ReadOnlyCollection_1_tDA9EBC2C2934508604BBB2BA544E97C8DA1907BF* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_IsCompatibleObject_m2B66B388A947DDA65092ACB0015716D7B55E6504 (RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_Contains_mA2E681DDC1D0CB4B3A55B8895EDF2B7F073A417C (ReadOnlyCollection_1_tDA9EBC2C2934508604BBB2BA544E97C8DA1907BF* __this, float2_t3398D7209CB6D09FEA5C49AC55070C5E7BE0B2A5 ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_IndexOf_mDC6A3B52E8647FB457B77CF3CCF4B133C84B646B (ReadOnlyCollection_1_tDA9EBC2C2934508604BBB2BA544E97C8DA1907BF* __this, float2_t3398D7209CB6D09FEA5C49AC55070C5E7BE0B2A5 ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_get_Count_mA1936FD531DD97BDB2429883FCC9C9D00CBEA932 (ReadOnlyCollection_1_t502D44622D39E2DFE6DABEFCEA766AC61E338C30* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_IsCompatibleObject_m86717E0B268FC5F5BE5EEA037F882F913717BC36 (RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_Contains_m61F61AD9BAE1A26C4A745A9C53C30BD2CD4D2725 (ReadOnlyCollection_1_t502D44622D39E2DFE6DABEFCEA766AC61E338C30* __this, IdsOfInstances_t4412C0FA3A4CE4CBFCB20E15BAB081BAC990B350 ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_IndexOf_mC70C67627A847C94D99F61E69307F6115DB32AC3 (ReadOnlyCollection_1_t502D44622D39E2DFE6DABEFCEA766AC61E338C30* __this, IdsOfInstances_t4412C0FA3A4CE4CBFCB20E15BAB081BAC990B350 ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_get_Count_m8BBBA71F7E653FD881BAB6DBA0B7491E201F4A1A (ReadOnlyCollection_1_t6902277BA0F804A3B22466CBEF4B07E1FB12E479* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_IsCompatibleObject_m2C114C70F2EA92C114400CDE3FC98781109BFFE2 (RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_Contains_mE965B78D4C7A68816A24B72AAB973616BE9D18E0 (ReadOnlyCollection_1_t6902277BA0F804A3B22466CBEF4B07E1FB12E479* __this, ShadowResolutionRequest_tC1B869ADCA139D8D7AD8A355373F84C7F5E0FCBE ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_IndexOf_m9C7502E77592EEE40AFD08845CBA291A2EA1DE24 (ReadOnlyCollection_1_t6902277BA0F804A3B22466CBEF4B07E1FB12E479* __this, ShadowResolutionRequest_tC1B869ADCA139D8D7AD8A355373F84C7F5E0FCBE ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_get_Count_m3554A5660CE35580F955DAF2FE36CA33EA0E222B (ReadOnlyCollection_1_t430A5D085E133CDE36E20D9D8D8DFCE0600F90C9* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_IsCompatibleObject_mA3FD6DC24CDFF8F0F54FDCFB91562EF86634E04E (RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_Contains_m9C7C610F8F83C3ECFBF7BC381D472FDC0554B50F (ReadOnlyCollection_1_t430A5D085E133CDE36E20D9D8D8DFCE0600F90C9* __this, ConnectionEndpoint_t3C9316D0A11BCB22C8F1F6A53F5E0365DFD7DBA7 ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_IndexOf_m2B1DAD09F29FA96B91F32CAD4B395F35BE6ABB53 (ReadOnlyCollection_1_t430A5D085E133CDE36E20D9D8D8DFCE0600F90C9* __this, ConnectionEndpoint_t3C9316D0A11BCB22C8F1F6A53F5E0365DFD7DBA7 ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_get_Count_mF630F44EA97169C90D35F920E85F67186863A57D (ReadOnlyCollection_1_t29EC75B4E7474909E58565DFC335C2465CD0CF16* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_IsCompatibleObject_m13237C1A78D3A5B60961585909FDA0D096B8761F (RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_Contains_m0D99482C81B07EC683E70A691025A710C226DC29 (ReadOnlyCollection_1_t29EC75B4E7474909E58565DFC335C2465CD0CF16* __this, ApiLayer_t99CB624F0B458A984C99D6A3009A2D8321A85227 ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_IndexOf_m9831AA338FD25D56CE3B0BC39A8159D10C3134A7 (ReadOnlyCollection_1_t29EC75B4E7474909E58565DFC335C2465CD0CF16* __this, ApiLayer_t99CB624F0B458A984C99D6A3009A2D8321A85227 ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_get_Count_mC7E0E87D44CEF9F2BEEDDC1BC4B0D24B71D16E97 (ReadOnlyCollection_1_t0072B9B1BE9DDF9C8BF0ABE59E7EEBD11BFAA293* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_IsCompatibleObject_mAD1FD16BD846C5E9807414D8F7DF35DAC62B8F19 (RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_Contains_m724638603012524EA3300E26FB0DCB831C3FAB0E (ReadOnlyCollection_1_t0072B9B1BE9DDF9C8BF0ABE59E7EEBD11BFAA293* __this, AwaitableAndFrameIndex_t5B42EA520B0415D199F9487706ABCD53407C0161 ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_IndexOf_mBD33E0AA2E866B762E64073D335B3E38C2752975 (ReadOnlyCollection_1_t0072B9B1BE9DDF9C8BF0ABE59E7EEBD11BFAA293* __this, AwaitableAndFrameIndex_t5B42EA520B0415D199F9487706ABCD53407C0161 ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_get_Count_m40B654ABF35A6A8B4838BCC343C8C571740B84A1 (ReadOnlyCollection_1_t00EFCE24C7E2AF195B108C1FC1E1BE4F7007EC1E* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_IsCompatibleObject_mBC98CE22AEE31378BE7BC3859B138C399101008C (RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_Contains_m9908F151D504D28AFAA1DAEF129AD20EF6B93081 (ReadOnlyCollection_1_t00EFCE24C7E2AF195B108C1FC1E1BE4F7007EC1E* __this, OrderBlock_t62FD6F6544F34B5298DEF2F77AAE446F269B7837 ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_IndexOf_mE49AD24B09B89FCDFFB51D72A2D789C79DF45B4A (ReadOnlyCollection_1_t00EFCE24C7E2AF195B108C1FC1E1BE4F7007EC1E* __this, OrderBlock_t62FD6F6544F34B5298DEF2F77AAE446F269B7837 ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_get_Count_m287F41240FA9702A3603018F5DA2111101337F87 (ReadOnlyCollection_1_t24949DD08B73EB984B4A07623392ECDAD4BA28D9* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_IsCompatibleObject_m9657834641910CDCA297C535F91DE4065340F741 (RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_Contains_m3E02CC006DCAFF38100E4A14869AF34A4E2C61B1 (ReadOnlyCollection_1_t24949DD08B73EB984B4A07623392ECDAD4BA28D9* __this, Page_t04FE552A388BF55B12C8868E19589136957E00A5 ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_IndexOf_m0E74DCAFC2A961DC0CA098117BA36A6AA644C66D (ReadOnlyCollection_1_t24949DD08B73EB984B4A07623392ECDAD4BA28D9* __this, Page_t04FE552A388BF55B12C8868E19589136957E00A5 ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_get_Count_mAFA7A25CF8FC9364D0533E562FF5D3F8067C93FC (ReadOnlyCollection_1_tA0E2E00CE27E5818B4957D61CE7C01975DCE7874* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_IsCompatibleObject_mDBDDFB3D37EF04A64B8456CF7D6EFE3C4B10DEE7 (RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_Contains_m77A509273C2E04A29E0F7C65B39D1BCDECB1CEFF (ReadOnlyCollection_1_tA0E2E00CE27E5818B4957D61CE7C01975DCE7874* __this, ButtonClickAction_t8939474B9E19930B4546768B72C22DA5A7115A0C ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_IndexOf_m914EBE0AAD35F590C1E148A6673E0374984A5BEB (ReadOnlyCollection_1_tA0E2E00CE27E5818B4957D61CE7C01975DCE7874* __this, ButtonClickAction_t8939474B9E19930B4546768B72C22DA5A7115A0C ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_get_Count_m5B47C160E54B3FA7E5BB14C5B8A0E42626BE69F2 (ReadOnlyCollection_1_t045C5F3279EE63047DD20057F0ABA1319690AE3D* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_IsCompatibleObject_m365C933BBE50D401BA82D9F311CA69E4C2504802 (RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_Contains_m4B0847087C68B65B73EA3E6E35259CF4DD1B2D8D (ReadOnlyCollection_1_t045C5F3279EE63047DD20057F0ABA1319690AE3D* __this, AttributeOverrideRange_t47A9929769CAD72883980AE2C29FACC19B310D49 ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_IndexOf_m10763E9212AE626668733F3873AA6AE157C90226 (ReadOnlyCollection_1_t045C5F3279EE63047DD20057F0ABA1319690AE3D* __this, AttributeOverrideRange_t47A9929769CAD72883980AE2C29FACC19B310D49 ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_get_Count_mA8F15C9AC8C599E164CB30A8C966CB6B8DF9D2EE (ReadOnlyCollection_1_t0A65BF0F900AF63819F1C26D6E71BFE75180183D* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_IsCompatibleObject_m5ED4BCD5F3168B64D782C291387E833318C7D50C (RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_Contains_m88C6F200CD92A99A7749F39BE082CDA1F67CAAEB (ReadOnlyCollection_1_t0A65BF0F900AF63819F1C26D6E71BFE75180183D* __this, SerializedDataOverrideRange_t3A1FFF9457378F017DD8F445C7AF421B9AB65014 ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_IndexOf_mA86F064006A9C37FA35D6D9E63BA1E3DE93D7FB6 (ReadOnlyCollection_1_t0A65BF0F900AF63819F1C26D6E71BFE75180183D* __this, SerializedDataOverrideRange_t3A1FFF9457378F017DD8F445C7AF421B9AB65014 ___0_value, const RuntimeMethod* method) ;
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 10557
// Method Definition Index: 10558
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_get_Count_mA070C2C4E69ECF4F1658E281C60BF698FD5A5A8F (ReadOnlyCollection_1_tBE445934E4BBFAD9104AC1AFC81C07456740D5B9* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = InterfaceFuncInvoker0< int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 0), L_0);
		return L_1;
	}
}
// Method Definition Index: 10559
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StyleVariable_t5D4DEC936102A13961F4F2C6214B83D6CDC56269 ReadOnlyCollection_1_get_Item_m83AA77977B4061612400F954B4FD218E27454399 (ReadOnlyCollection_1_tBE445934E4BBFAD9104AC1AFC81C07456740D5B9* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		int32_t L_1 = ___0_index;
		NullCheck(L_0);
		StyleVariable_t5D4DEC936102A13961F4F2C6214B83D6CDC56269 L_2;
		L_2 = InterfaceFuncInvoker1< StyleVariable_t5D4DEC936102A13961F4F2C6214B83D6CDC56269, int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_0, L_1);
		return L_2;
	}
}
// Method Definition Index: 10560
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_Contains_m79D6B93F48A882214613F65736C4275CCC7FC3FF (ReadOnlyCollection_1_tBE445934E4BBFAD9104AC1AFC81C07456740D5B9* __this, StyleVariable_t5D4DEC936102A13961F4F2C6214B83D6CDC56269 ___0_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		StyleVariable_t5D4DEC936102A13961F4F2C6214B83D6CDC56269 L_1 = ___0_value;
		NullCheck(L_0);
		bool L_2;
		L_2 = InterfaceFuncInvoker1< bool, StyleVariable_t5D4DEC936102A13961F4F2C6214B83D6CDC56269 >::Invoke(4, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 0), L_0, L_1);
		return L_2;
	}
}
// Method Definition Index: 10561
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlyCollection_1_CopyTo_m91ACEEAA8B515252D55281077107BA65FA633B21 (ReadOnlyCollection_1_tBE445934E4BBFAD9104AC1AFC81C07456740D5B9* __this, StyleVariableU5BU5D_tFE786BD2C1F914C1605C072F0BB10C405C0B4D96* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		StyleVariableU5BU5D_tFE786BD2C1F914C1605C072F0BB10C405C0B4D96* L_1 = ___0_array;
		int32_t L_2 = ___1_index;
		NullCheck(L_0);
		InterfaceActionInvoker2< StyleVariableU5BU5D_tFE786BD2C1F914C1605C072F0BB10C405C0B4D96*, int32_t >::Invoke(5, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 0), L_0, L_1, L_2);
		return;
	}
}
// Method Definition Index: 10562
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ReadOnlyCollection_1_GetEnumerator_m78E323E309901995C969130D746F6BE9F499EB54 (ReadOnlyCollection_1_tBE445934E4BBFAD9104AC1AFC81C07456740D5B9* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 7), L_0);
		return L_1;
	}
}
// Method Definition Index: 10563
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_IndexOf_m59C4EFADD346BE75CA43C56F812E67C011CF75F9 (ReadOnlyCollection_1_tBE445934E4BBFAD9104AC1AFC81C07456740D5B9* __this, StyleVariable_t5D4DEC936102A13961F4F2C6214B83D6CDC56269 ___0_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		StyleVariable_t5D4DEC936102A13961F4F2C6214B83D6CDC56269 L_1 = ___0_value;
		NullCheck(L_0);
		int32_t L_2;
		L_2 = InterfaceFuncInvoker1< int32_t, StyleVariable_t5D4DEC936102A13961F4F2C6214B83D6CDC56269 >::Invoke(2, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_0, L_1);
		return L_2;
	}
}
// Method Definition Index: 10564
// Method Definition Index: 10565
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StyleVariable_t5D4DEC936102A13961F4F2C6214B83D6CDC56269 ReadOnlyCollection_1_System_Collections_Generic_IListU3CTU3E_get_Item_mF4D69089BD265A3A80C3A320FBAC1679562B41B5 (ReadOnlyCollection_1_tBE445934E4BBFAD9104AC1AFC81C07456740D5B9* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		int32_t L_1 = ___0_index;
		NullCheck(L_0);
		StyleVariable_t5D4DEC936102A13961F4F2C6214B83D6CDC56269 L_2;
		L_2 = InterfaceFuncInvoker1< StyleVariable_t5D4DEC936102A13961F4F2C6214B83D6CDC56269, int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_0, L_1);
		return L_2;
	}
}
// Method Definition Index: 10566
// Method Definition Index: 10567
// Method Definition Index: 10568
// Method Definition Index: 10569
// Method Definition Index: 10570
// Method Definition Index: 10571
// Method Definition Index: 10572
// Method Definition Index: 10573
// Method Definition Index: 10574
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlyCollection_1_System_Collections_ICollection_CopyTo_m07EE168A8E59010DC8F4BC3E2FA54C332C247E41 (ReadOnlyCollection_1_tBE445934E4BBFAD9104AC1AFC81C07456740D5B9* __this, RuntimeArray* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(Type_t_StaticInit);
	//<source_info:<no-source>:1>
	StyleVariableU5BU5D_tFE786BD2C1F914C1605C072F0BB10C405C0B4D96* V_0 = NULL;
	Type_t* V_1 = NULL;
	Type_t* V_2 = NULL;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_3 = NULL;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		RuntimeArray* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC(3, NULL);
	}

IL_0009:
	{
		RuntimeArray* L_1 = ___0_array;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = il2cpp_codegen_array_get_rank(L_1);
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_0018;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA(7, NULL);
	}

IL_0018:
	{
		RuntimeArray* L_3 = ___0_array;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(L_3, 0, NULL);
		if (!L_4)
		{
			goto IL_0027;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA(6, NULL);
	}

IL_0027:
	{
		int32_t L_5 = ___1_index;
		if ((((int32_t)L_5) >= ((int32_t)0)))
		{
			goto IL_0030;
		}
	}
	{
		ThrowHelper_ThrowIndexArgumentOutOfRange_NeedNonNegNumException_m57AAB1E093F20BFC64BDDBD90FB5B592F582B82F(NULL);
	}

IL_0030:
	{
		RuntimeArray* L_6 = ___0_array;
		NullCheck(L_6);
		int32_t L_7;
		L_7 = il2cpp_codegen_array_get_length(L_6);
		int32_t L_8 = ___1_index;
		int32_t L_9;
		L_9 = ReadOnlyCollection_1_get_Count_mA070C2C4E69ECF4F1658E281C60BF698FD5A5A8F(__this, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 10));
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_7, L_8))) >= ((int32_t)L_9)))
		{
			goto IL_0046;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA(5, NULL);
	}

IL_0046:
	{
		RuntimeArray* L_10 = ___0_array;
		V_0 = ((StyleVariableU5BU5D_tFE786BD2C1F914C1605C072F0BB10C405C0B4D96*)IsInstSealed((RuntimeObject*)L_10, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 11)));
		StyleVariableU5BU5D_tFE786BD2C1F914C1605C072F0BB10C405C0B4D96* L_11 = V_0;
		if (!L_11)
		{
			goto IL_005e;
		}
	}
	{
		RuntimeObject* L_12 = __this->___list;
		StyleVariableU5BU5D_tFE786BD2C1F914C1605C072F0BB10C405C0B4D96* L_13 = V_0;
		int32_t L_14 = ___1_index;
		NullCheck(L_12);
		InterfaceActionInvoker2< StyleVariableU5BU5D_tFE786BD2C1F914C1605C072F0BB10C405C0B4D96*, int32_t >::Invoke(5, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 0), L_12, L_13, L_14);
		return;
	}

IL_005e:
	{
		RuntimeArray* L_15 = ___0_array;
		NullCheck(L_15);
		Type_t* L_16;
		L_16 = il2cpp_codegen_object_get_type(L_15);
		NullCheck(L_16);
		Type_t* L_17;
		L_17 = VirtualFuncInvoker0< Type_t* >::Invoke(46, L_16);
		V_1 = L_17;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_18 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(il2cpp_codegen_method_rgctx(method), 12)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_19;
		L_19 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_18, NULL);
		V_2 = L_19;
		Type_t* L_20 = V_1;
		Type_t* L_21 = V_2;
		NullCheck(L_20);
		bool L_22;
		L_22 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(22, L_20, L_21);
		if (L_22)
		{
			goto IL_008c;
		}
	}
	{
		Type_t* L_23 = V_2;
		Type_t* L_24 = V_1;
		NullCheck(L_23);
		bool L_25;
		L_25 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(22, L_23, L_24);
		if (L_25)
		{
			goto IL_008c;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58(NULL);
	}

IL_008c:
	{
		RuntimeArray* L_26 = ___0_array;
		V_3 = ((ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)IsInst((RuntimeObject*)L_26, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_27 = V_3;
		if (L_27)
		{
			goto IL_009b;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58(NULL);
	}

IL_009b:
	{
		RuntimeObject* L_28 = __this->___list;
		NullCheck(L_28);
		int32_t L_29;
		L_29 = InterfaceFuncInvoker0< int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 0), L_28);
		V_4 = L_29;
	}
	try
	{
		{
			V_5 = 0;
			goto IL_00cd_1;
		}

IL_00ad_1:
		{
			ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_30 = V_3;
			int32_t L_31 = ___1_index;
			int32_t L_32 = L_31;
			___1_index = ((int32_t)il2cpp_codegen_add(L_32, 1));
			RuntimeObject* L_33 = __this->___list;
			int32_t L_34 = V_5;
			NullCheck(L_33);
			StyleVariable_t5D4DEC936102A13961F4F2C6214B83D6CDC56269 L_35;
			L_35 = InterfaceFuncInvoker1< StyleVariable_t5D4DEC936102A13961F4F2C6214B83D6CDC56269, int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_33, L_34);
			StyleVariable_t5D4DEC936102A13961F4F2C6214B83D6CDC56269 L_36 = L_35;
			RuntimeObject* L_37 = Box(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4), &L_36);
			NullCheck(L_30);
			ArrayElementTypeCheck (L_30, L_37);
			(L_30)->SetAt(static_cast<il2cpp_array_size_t>(L_32), (RuntimeObject*)L_37);
			int32_t L_38 = V_5;
			V_5 = ((int32_t)il2cpp_codegen_add(L_38, 1));
		}

IL_00cd_1:
		{
			int32_t L_39 = V_5;
			int32_t L_40 = V_4;
			if ((((int32_t)L_39) < ((int32_t)L_40)))
			{
				goto IL_00ad_1;
			}
		}
		{
			goto IL_00dd;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_00d5;
		}
		throw e;
	}

CATCH_00d5:
	{
		ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1* L_41 = ((ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1*)IL2CPP_GET_ACTIVE_EXCEPTION(ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1*));;
		ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58(NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_00dd;
	}

IL_00dd:
	{
		return;
	}
}
// Method Definition Index: 10575
// Method Definition Index: 10576
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ReadOnlyCollection_1_System_Collections_IList_get_Item_m76054C53EE82A425A55444309C6B8DC6B396F93C (ReadOnlyCollection_1_tBE445934E4BBFAD9104AC1AFC81C07456740D5B9* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		int32_t L_1 = ___0_index;
		NullCheck(L_0);
		StyleVariable_t5D4DEC936102A13961F4F2C6214B83D6CDC56269 L_2;
		L_2 = InterfaceFuncInvoker1< StyleVariable_t5D4DEC936102A13961F4F2C6214B83D6CDC56269, int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_0, L_1);
		StyleVariable_t5D4DEC936102A13961F4F2C6214B83D6CDC56269 L_3 = L_2;
		RuntimeObject* L_4 = Box(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4), &L_3);
		return L_4;
	}
}
// Method Definition Index: 10577
// Method Definition Index: 10578
// Method Definition Index: 10579
// Method Definition Index: 10580
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_IsCompatibleObject_m3C659BC7492D6D23A67860B02DE0D2BF56988CAA (RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	//<source_info:<no-source>:1>
	StyleVariable_t5D4DEC936102A13961F4F2C6214B83D6CDC56269 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		RuntimeObject* L_0 = ___0_value;
		if (((RuntimeObject*)IsInstSealed((RuntimeObject*)L_0, il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 4))))
		{
			goto IL_001f;
		}
	}
	{
		RuntimeObject* L_1 = ___0_value;
		if (L_1)
		{
			goto IL_001d;
		}
	}
	{
		il2cpp_codegen_initobj((&V_0), sizeof(StyleVariable_t5D4DEC936102A13961F4F2C6214B83D6CDC56269));
		StyleVariable_t5D4DEC936102A13961F4F2C6214B83D6CDC56269 L_2 = V_0;
		return false;
	}

IL_001d:
	{
		return (bool)0;
	}

IL_001f:
	{
		return (bool)1;
	}
}
// Method Definition Index: 10581
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_System_Collections_IList_Contains_m299DC05E2277A750755AFC7467EBC2E31323FD70 (ReadOnlyCollection_1_tBE445934E4BBFAD9104AC1AFC81C07456740D5B9* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = ___0_value;
		bool L_1;
		L_1 = ReadOnlyCollection_1_IsCompatibleObject_m3C659BC7492D6D23A67860B02DE0D2BF56988CAA(L_0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 13));
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject* L_2 = ___0_value;
		bool L_3;
		L_3 = ReadOnlyCollection_1_Contains_m79D6B93F48A882214613F65736C4275CCC7FC3FF(__this, ((*(StyleVariable_t5D4DEC936102A13961F4F2C6214B83D6CDC56269*)UnBox(L_2, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4)))), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 14));
		return L_3;
	}

IL_0015:
	{
		return (bool)0;
	}
}
// Method Definition Index: 10582
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_System_Collections_IList_IndexOf_mC89F7429FBDA4F11F098354AAAB9F7E36C386637 (ReadOnlyCollection_1_tBE445934E4BBFAD9104AC1AFC81C07456740D5B9* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = ___0_value;
		bool L_1;
		L_1 = ReadOnlyCollection_1_IsCompatibleObject_m3C659BC7492D6D23A67860B02DE0D2BF56988CAA(L_0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 13));
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject* L_2 = ___0_value;
		int32_t L_3;
		L_3 = ReadOnlyCollection_1_IndexOf_m59C4EFADD346BE75CA43C56F812E67C011CF75F9(__this, ((*(StyleVariable_t5D4DEC936102A13961F4F2C6214B83D6CDC56269*)UnBox(L_2, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4)))), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 15));
		return L_3;
	}

IL_0015:
	{
		return (-1);
	}
}
// Method Definition Index: 10583
// Method Definition Index: 10584
// Method Definition Index: 10585
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 10557
// Method Definition Index: 10558
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_get_Count_m21B7575FC88C1F0EB39B77529C38A0286A3B575F (ReadOnlyCollection_1_tB270E5CCE3D7607E7CDDBE1B835360A0E7B07DF4* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = InterfaceFuncInvoker0< int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 0), L_0);
		return L_1;
	}
}
// Method Definition Index: 10559
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Substring_t2E16755269E6716C22074D6BC0A9099915E67849 ReadOnlyCollection_1_get_Item_m6C7D2E0028439F81A27ABAF4929EE388D95C8560 (ReadOnlyCollection_1_tB270E5CCE3D7607E7CDDBE1B835360A0E7B07DF4* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		int32_t L_1 = ___0_index;
		NullCheck(L_0);
		Substring_t2E16755269E6716C22074D6BC0A9099915E67849 L_2;
		L_2 = InterfaceFuncInvoker1< Substring_t2E16755269E6716C22074D6BC0A9099915E67849, int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_0, L_1);
		return L_2;
	}
}
// Method Definition Index: 10560
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_Contains_m89291249B5D4B20D9F07C3B162755A25BC44C530 (ReadOnlyCollection_1_tB270E5CCE3D7607E7CDDBE1B835360A0E7B07DF4* __this, Substring_t2E16755269E6716C22074D6BC0A9099915E67849 ___0_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		Substring_t2E16755269E6716C22074D6BC0A9099915E67849 L_1 = ___0_value;
		NullCheck(L_0);
		bool L_2;
		L_2 = InterfaceFuncInvoker1< bool, Substring_t2E16755269E6716C22074D6BC0A9099915E67849 >::Invoke(4, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 0), L_0, L_1);
		return L_2;
	}
}
// Method Definition Index: 10561
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlyCollection_1_CopyTo_m527D02C763E4EFC677AA553F0EFB5CCE824C6B9D (ReadOnlyCollection_1_tB270E5CCE3D7607E7CDDBE1B835360A0E7B07DF4* __this, SubstringU5BU5D_t9973080FDB519ED771E9FB3E6FDC90DF45211B77* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		SubstringU5BU5D_t9973080FDB519ED771E9FB3E6FDC90DF45211B77* L_1 = ___0_array;
		int32_t L_2 = ___1_index;
		NullCheck(L_0);
		InterfaceActionInvoker2< SubstringU5BU5D_t9973080FDB519ED771E9FB3E6FDC90DF45211B77*, int32_t >::Invoke(5, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 0), L_0, L_1, L_2);
		return;
	}
}
// Method Definition Index: 10562
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ReadOnlyCollection_1_GetEnumerator_mD3078BB46A097F19E331A0D2F3FE12161024D77A (ReadOnlyCollection_1_tB270E5CCE3D7607E7CDDBE1B835360A0E7B07DF4* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 7), L_0);
		return L_1;
	}
}
// Method Definition Index: 10563
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_IndexOf_mA817652F7A04A40F42DD4F4F8C12D4E9E4508B51 (ReadOnlyCollection_1_tB270E5CCE3D7607E7CDDBE1B835360A0E7B07DF4* __this, Substring_t2E16755269E6716C22074D6BC0A9099915E67849 ___0_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		Substring_t2E16755269E6716C22074D6BC0A9099915E67849 L_1 = ___0_value;
		NullCheck(L_0);
		int32_t L_2;
		L_2 = InterfaceFuncInvoker1< int32_t, Substring_t2E16755269E6716C22074D6BC0A9099915E67849 >::Invoke(2, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_0, L_1);
		return L_2;
	}
}
// Method Definition Index: 10564
// Method Definition Index: 10565
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Substring_t2E16755269E6716C22074D6BC0A9099915E67849 ReadOnlyCollection_1_System_Collections_Generic_IListU3CTU3E_get_Item_m37C85E654D15BC8DE315159C72325DE13ADD91AF (ReadOnlyCollection_1_tB270E5CCE3D7607E7CDDBE1B835360A0E7B07DF4* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		int32_t L_1 = ___0_index;
		NullCheck(L_0);
		Substring_t2E16755269E6716C22074D6BC0A9099915E67849 L_2;
		L_2 = InterfaceFuncInvoker1< Substring_t2E16755269E6716C22074D6BC0A9099915E67849, int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_0, L_1);
		return L_2;
	}
}
// Method Definition Index: 10566
// Method Definition Index: 10567
// Method Definition Index: 10568
// Method Definition Index: 10569
// Method Definition Index: 10570
// Method Definition Index: 10571
// Method Definition Index: 10572
// Method Definition Index: 10573
// Method Definition Index: 10574
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlyCollection_1_System_Collections_ICollection_CopyTo_mE1846373CA88A6133FF4112EFD7CEF3D7E247FC9 (ReadOnlyCollection_1_tB270E5CCE3D7607E7CDDBE1B835360A0E7B07DF4* __this, RuntimeArray* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(Type_t_StaticInit);
	//<source_info:<no-source>:1>
	SubstringU5BU5D_t9973080FDB519ED771E9FB3E6FDC90DF45211B77* V_0 = NULL;
	Type_t* V_1 = NULL;
	Type_t* V_2 = NULL;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_3 = NULL;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		RuntimeArray* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC(3, NULL);
	}

IL_0009:
	{
		RuntimeArray* L_1 = ___0_array;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = il2cpp_codegen_array_get_rank(L_1);
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_0018;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA(7, NULL);
	}

IL_0018:
	{
		RuntimeArray* L_3 = ___0_array;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(L_3, 0, NULL);
		if (!L_4)
		{
			goto IL_0027;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA(6, NULL);
	}

IL_0027:
	{
		int32_t L_5 = ___1_index;
		if ((((int32_t)L_5) >= ((int32_t)0)))
		{
			goto IL_0030;
		}
	}
	{
		ThrowHelper_ThrowIndexArgumentOutOfRange_NeedNonNegNumException_m57AAB1E093F20BFC64BDDBD90FB5B592F582B82F(NULL);
	}

IL_0030:
	{
		RuntimeArray* L_6 = ___0_array;
		NullCheck(L_6);
		int32_t L_7;
		L_7 = il2cpp_codegen_array_get_length(L_6);
		int32_t L_8 = ___1_index;
		int32_t L_9;
		L_9 = ReadOnlyCollection_1_get_Count_m21B7575FC88C1F0EB39B77529C38A0286A3B575F(__this, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 10));
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_7, L_8))) >= ((int32_t)L_9)))
		{
			goto IL_0046;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA(5, NULL);
	}

IL_0046:
	{
		RuntimeArray* L_10 = ___0_array;
		V_0 = ((SubstringU5BU5D_t9973080FDB519ED771E9FB3E6FDC90DF45211B77*)IsInstSealed((RuntimeObject*)L_10, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 11)));
		SubstringU5BU5D_t9973080FDB519ED771E9FB3E6FDC90DF45211B77* L_11 = V_0;
		if (!L_11)
		{
			goto IL_005e;
		}
	}
	{
		RuntimeObject* L_12 = __this->___list;
		SubstringU5BU5D_t9973080FDB519ED771E9FB3E6FDC90DF45211B77* L_13 = V_0;
		int32_t L_14 = ___1_index;
		NullCheck(L_12);
		InterfaceActionInvoker2< SubstringU5BU5D_t9973080FDB519ED771E9FB3E6FDC90DF45211B77*, int32_t >::Invoke(5, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 0), L_12, L_13, L_14);
		return;
	}

IL_005e:
	{
		RuntimeArray* L_15 = ___0_array;
		NullCheck(L_15);
		Type_t* L_16;
		L_16 = il2cpp_codegen_object_get_type(L_15);
		NullCheck(L_16);
		Type_t* L_17;
		L_17 = VirtualFuncInvoker0< Type_t* >::Invoke(46, L_16);
		V_1 = L_17;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_18 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(il2cpp_codegen_method_rgctx(method), 12)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_19;
		L_19 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_18, NULL);
		V_2 = L_19;
		Type_t* L_20 = V_1;
		Type_t* L_21 = V_2;
		NullCheck(L_20);
		bool L_22;
		L_22 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(22, L_20, L_21);
		if (L_22)
		{
			goto IL_008c;
		}
	}
	{
		Type_t* L_23 = V_2;
		Type_t* L_24 = V_1;
		NullCheck(L_23);
		bool L_25;
		L_25 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(22, L_23, L_24);
		if (L_25)
		{
			goto IL_008c;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58(NULL);
	}

IL_008c:
	{
		RuntimeArray* L_26 = ___0_array;
		V_3 = ((ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)IsInst((RuntimeObject*)L_26, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_27 = V_3;
		if (L_27)
		{
			goto IL_009b;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58(NULL);
	}

IL_009b:
	{
		RuntimeObject* L_28 = __this->___list;
		NullCheck(L_28);
		int32_t L_29;
		L_29 = InterfaceFuncInvoker0< int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 0), L_28);
		V_4 = L_29;
	}
	try
	{
		{
			V_5 = 0;
			goto IL_00cd_1;
		}

IL_00ad_1:
		{
			ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_30 = V_3;
			int32_t L_31 = ___1_index;
			int32_t L_32 = L_31;
			___1_index = ((int32_t)il2cpp_codegen_add(L_32, 1));
			RuntimeObject* L_33 = __this->___list;
			int32_t L_34 = V_5;
			NullCheck(L_33);
			Substring_t2E16755269E6716C22074D6BC0A9099915E67849 L_35;
			L_35 = InterfaceFuncInvoker1< Substring_t2E16755269E6716C22074D6BC0A9099915E67849, int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_33, L_34);
			Substring_t2E16755269E6716C22074D6BC0A9099915E67849 L_36 = L_35;
			RuntimeObject* L_37 = Box(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4), &L_36);
			NullCheck(L_30);
			ArrayElementTypeCheck (L_30, L_37);
			(L_30)->SetAt(static_cast<il2cpp_array_size_t>(L_32), (RuntimeObject*)L_37);
			int32_t L_38 = V_5;
			V_5 = ((int32_t)il2cpp_codegen_add(L_38, 1));
		}

IL_00cd_1:
		{
			int32_t L_39 = V_5;
			int32_t L_40 = V_4;
			if ((((int32_t)L_39) < ((int32_t)L_40)))
			{
				goto IL_00ad_1;
			}
		}
		{
			goto IL_00dd;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_00d5;
		}
		throw e;
	}

CATCH_00d5:
	{
		ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1* L_41 = ((ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1*)IL2CPP_GET_ACTIVE_EXCEPTION(ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1*));;
		ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58(NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_00dd;
	}

IL_00dd:
	{
		return;
	}
}
// Method Definition Index: 10575
// Method Definition Index: 10576
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ReadOnlyCollection_1_System_Collections_IList_get_Item_m6AC2C3A0CC2A9CDFCD53A21A7C599B0145AC93B5 (ReadOnlyCollection_1_tB270E5CCE3D7607E7CDDBE1B835360A0E7B07DF4* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		int32_t L_1 = ___0_index;
		NullCheck(L_0);
		Substring_t2E16755269E6716C22074D6BC0A9099915E67849 L_2;
		L_2 = InterfaceFuncInvoker1< Substring_t2E16755269E6716C22074D6BC0A9099915E67849, int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_0, L_1);
		Substring_t2E16755269E6716C22074D6BC0A9099915E67849 L_3 = L_2;
		RuntimeObject* L_4 = Box(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4), &L_3);
		return L_4;
	}
}
// Method Definition Index: 10577
// Method Definition Index: 10578
// Method Definition Index: 10579
// Method Definition Index: 10580
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_IsCompatibleObject_mEECB28AFAAAC26A7C6E843A076A43DCE2F55CDCA (RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	//<source_info:<no-source>:1>
	Substring_t2E16755269E6716C22074D6BC0A9099915E67849 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		RuntimeObject* L_0 = ___0_value;
		if (((RuntimeObject*)IsInstSealed((RuntimeObject*)L_0, il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 4))))
		{
			goto IL_001f;
		}
	}
	{
		RuntimeObject* L_1 = ___0_value;
		if (L_1)
		{
			goto IL_001d;
		}
	}
	{
		il2cpp_codegen_initobj((&V_0), sizeof(Substring_t2E16755269E6716C22074D6BC0A9099915E67849));
		Substring_t2E16755269E6716C22074D6BC0A9099915E67849 L_2 = V_0;
		return false;
	}

IL_001d:
	{
		return (bool)0;
	}

IL_001f:
	{
		return (bool)1;
	}
}
// Method Definition Index: 10581
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_System_Collections_IList_Contains_m12FE6B60D06125FB981A831339817D94736C0229 (ReadOnlyCollection_1_tB270E5CCE3D7607E7CDDBE1B835360A0E7B07DF4* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = ___0_value;
		bool L_1;
		L_1 = ReadOnlyCollection_1_IsCompatibleObject_mEECB28AFAAAC26A7C6E843A076A43DCE2F55CDCA(L_0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 13));
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject* L_2 = ___0_value;
		bool L_3;
		L_3 = ReadOnlyCollection_1_Contains_m89291249B5D4B20D9F07C3B162755A25BC44C530(__this, ((*(Substring_t2E16755269E6716C22074D6BC0A9099915E67849*)UnBox(L_2, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4)))), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 14));
		return L_3;
	}

IL_0015:
	{
		return (bool)0;
	}
}
// Method Definition Index: 10582
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_System_Collections_IList_IndexOf_mA017823D73B9D0970F14FF3F16410DCDB45B44A8 (ReadOnlyCollection_1_tB270E5CCE3D7607E7CDDBE1B835360A0E7B07DF4* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = ___0_value;
		bool L_1;
		L_1 = ReadOnlyCollection_1_IsCompatibleObject_mEECB28AFAAAC26A7C6E843A076A43DCE2F55CDCA(L_0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 13));
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject* L_2 = ___0_value;
		int32_t L_3;
		L_3 = ReadOnlyCollection_1_IndexOf_mA817652F7A04A40F42DD4F4F8C12D4E9E4508B51(__this, ((*(Substring_t2E16755269E6716C22074D6BC0A9099915E67849*)UnBox(L_2, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4)))), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 15));
		return L_3;
	}

IL_0015:
	{
		return (-1);
	}
}
// Method Definition Index: 10583
// Method Definition Index: 10584
// Method Definition Index: 10585
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 10557
// Method Definition Index: 10558
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_get_Count_m1B303B771A898F2B2B6BFC1858958F3256DD3E99 (ReadOnlyCollection_1_tFF6716AACE48FE7B167A53ED10AE04FA2A2AB83A* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = InterfaceFuncInvoker0< int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 0), L_0);
		return L_1;
	}
}
// Method Definition Index: 10559
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TimeValue_t45AE43B219493F9459363F32C79E8986B5F82E0E ReadOnlyCollection_1_get_Item_m2DD6648DB48F70A8842B2436A7332311A6626F1A (ReadOnlyCollection_1_tFF6716AACE48FE7B167A53ED10AE04FA2A2AB83A* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		int32_t L_1 = ___0_index;
		NullCheck(L_0);
		TimeValue_t45AE43B219493F9459363F32C79E8986B5F82E0E L_2;
		L_2 = InterfaceFuncInvoker1< TimeValue_t45AE43B219493F9459363F32C79E8986B5F82E0E, int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_0, L_1);
		return L_2;
	}
}
// Method Definition Index: 10560
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_Contains_m02DC5E9462836451750318F47E93084247533EE6 (ReadOnlyCollection_1_tFF6716AACE48FE7B167A53ED10AE04FA2A2AB83A* __this, TimeValue_t45AE43B219493F9459363F32C79E8986B5F82E0E ___0_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		TimeValue_t45AE43B219493F9459363F32C79E8986B5F82E0E L_1 = ___0_value;
		NullCheck(L_0);
		bool L_2;
		L_2 = InterfaceFuncInvoker1< bool, TimeValue_t45AE43B219493F9459363F32C79E8986B5F82E0E >::Invoke(4, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 0), L_0, L_1);
		return L_2;
	}
}
// Method Definition Index: 10561
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlyCollection_1_CopyTo_m95C34D407976A5EC5CEC9903E8CAB9AD36305784 (ReadOnlyCollection_1_tFF6716AACE48FE7B167A53ED10AE04FA2A2AB83A* __this, TimeValueU5BU5D_t3EB79C5975D39A0E711250FD8A9547F5312746DE* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		TimeValueU5BU5D_t3EB79C5975D39A0E711250FD8A9547F5312746DE* L_1 = ___0_array;
		int32_t L_2 = ___1_index;
		NullCheck(L_0);
		InterfaceActionInvoker2< TimeValueU5BU5D_t3EB79C5975D39A0E711250FD8A9547F5312746DE*, int32_t >::Invoke(5, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 0), L_0, L_1, L_2);
		return;
	}
}
// Method Definition Index: 10562
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ReadOnlyCollection_1_GetEnumerator_m9C3388542BEF3E97FD35E3ECF6725440A0FEFFE9 (ReadOnlyCollection_1_tFF6716AACE48FE7B167A53ED10AE04FA2A2AB83A* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 7), L_0);
		return L_1;
	}
}
// Method Definition Index: 10563
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_IndexOf_m51CDE7C02C2B73BD9913E8FC0ED84A4308672A73 (ReadOnlyCollection_1_tFF6716AACE48FE7B167A53ED10AE04FA2A2AB83A* __this, TimeValue_t45AE43B219493F9459363F32C79E8986B5F82E0E ___0_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		TimeValue_t45AE43B219493F9459363F32C79E8986B5F82E0E L_1 = ___0_value;
		NullCheck(L_0);
		int32_t L_2;
		L_2 = InterfaceFuncInvoker1< int32_t, TimeValue_t45AE43B219493F9459363F32C79E8986B5F82E0E >::Invoke(2, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_0, L_1);
		return L_2;
	}
}
// Method Definition Index: 10564
// Method Definition Index: 10565
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TimeValue_t45AE43B219493F9459363F32C79E8986B5F82E0E ReadOnlyCollection_1_System_Collections_Generic_IListU3CTU3E_get_Item_m91343A614ED61BFB949BB44766BAE2B265DF36BE (ReadOnlyCollection_1_tFF6716AACE48FE7B167A53ED10AE04FA2A2AB83A* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		int32_t L_1 = ___0_index;
		NullCheck(L_0);
		TimeValue_t45AE43B219493F9459363F32C79E8986B5F82E0E L_2;
		L_2 = InterfaceFuncInvoker1< TimeValue_t45AE43B219493F9459363F32C79E8986B5F82E0E, int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_0, L_1);
		return L_2;
	}
}
// Method Definition Index: 10566
// Method Definition Index: 10567
// Method Definition Index: 10568
// Method Definition Index: 10569
// Method Definition Index: 10570
// Method Definition Index: 10571
// Method Definition Index: 10572
// Method Definition Index: 10573
// Method Definition Index: 10574
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlyCollection_1_System_Collections_ICollection_CopyTo_m6495C38DDBCEFD5E8720DC1909B32418EF32385A (ReadOnlyCollection_1_tFF6716AACE48FE7B167A53ED10AE04FA2A2AB83A* __this, RuntimeArray* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(Type_t_StaticInit);
	//<source_info:<no-source>:1>
	TimeValueU5BU5D_t3EB79C5975D39A0E711250FD8A9547F5312746DE* V_0 = NULL;
	Type_t* V_1 = NULL;
	Type_t* V_2 = NULL;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_3 = NULL;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		RuntimeArray* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC(3, NULL);
	}

IL_0009:
	{
		RuntimeArray* L_1 = ___0_array;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = il2cpp_codegen_array_get_rank(L_1);
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_0018;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA(7, NULL);
	}

IL_0018:
	{
		RuntimeArray* L_3 = ___0_array;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(L_3, 0, NULL);
		if (!L_4)
		{
			goto IL_0027;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA(6, NULL);
	}

IL_0027:
	{
		int32_t L_5 = ___1_index;
		if ((((int32_t)L_5) >= ((int32_t)0)))
		{
			goto IL_0030;
		}
	}
	{
		ThrowHelper_ThrowIndexArgumentOutOfRange_NeedNonNegNumException_m57AAB1E093F20BFC64BDDBD90FB5B592F582B82F(NULL);
	}

IL_0030:
	{
		RuntimeArray* L_6 = ___0_array;
		NullCheck(L_6);
		int32_t L_7;
		L_7 = il2cpp_codegen_array_get_length(L_6);
		int32_t L_8 = ___1_index;
		int32_t L_9;
		L_9 = ReadOnlyCollection_1_get_Count_m1B303B771A898F2B2B6BFC1858958F3256DD3E99(__this, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 10));
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_7, L_8))) >= ((int32_t)L_9)))
		{
			goto IL_0046;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA(5, NULL);
	}

IL_0046:
	{
		RuntimeArray* L_10 = ___0_array;
		V_0 = ((TimeValueU5BU5D_t3EB79C5975D39A0E711250FD8A9547F5312746DE*)IsInstSealed((RuntimeObject*)L_10, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 11)));
		TimeValueU5BU5D_t3EB79C5975D39A0E711250FD8A9547F5312746DE* L_11 = V_0;
		if (!L_11)
		{
			goto IL_005e;
		}
	}
	{
		RuntimeObject* L_12 = __this->___list;
		TimeValueU5BU5D_t3EB79C5975D39A0E711250FD8A9547F5312746DE* L_13 = V_0;
		int32_t L_14 = ___1_index;
		NullCheck(L_12);
		InterfaceActionInvoker2< TimeValueU5BU5D_t3EB79C5975D39A0E711250FD8A9547F5312746DE*, int32_t >::Invoke(5, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 0), L_12, L_13, L_14);
		return;
	}

IL_005e:
	{
		RuntimeArray* L_15 = ___0_array;
		NullCheck(L_15);
		Type_t* L_16;
		L_16 = il2cpp_codegen_object_get_type(L_15);
		NullCheck(L_16);
		Type_t* L_17;
		L_17 = VirtualFuncInvoker0< Type_t* >::Invoke(46, L_16);
		V_1 = L_17;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_18 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(il2cpp_codegen_method_rgctx(method), 12)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_19;
		L_19 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_18, NULL);
		V_2 = L_19;
		Type_t* L_20 = V_1;
		Type_t* L_21 = V_2;
		NullCheck(L_20);
		bool L_22;
		L_22 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(22, L_20, L_21);
		if (L_22)
		{
			goto IL_008c;
		}
	}
	{
		Type_t* L_23 = V_2;
		Type_t* L_24 = V_1;
		NullCheck(L_23);
		bool L_25;
		L_25 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(22, L_23, L_24);
		if (L_25)
		{
			goto IL_008c;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58(NULL);
	}

IL_008c:
	{
		RuntimeArray* L_26 = ___0_array;
		V_3 = ((ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)IsInst((RuntimeObject*)L_26, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_27 = V_3;
		if (L_27)
		{
			goto IL_009b;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58(NULL);
	}

IL_009b:
	{
		RuntimeObject* L_28 = __this->___list;
		NullCheck(L_28);
		int32_t L_29;
		L_29 = InterfaceFuncInvoker0< int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 0), L_28);
		V_4 = L_29;
	}
	try
	{
		{
			V_5 = 0;
			goto IL_00cd_1;
		}

IL_00ad_1:
		{
			ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_30 = V_3;
			int32_t L_31 = ___1_index;
			int32_t L_32 = L_31;
			___1_index = ((int32_t)il2cpp_codegen_add(L_32, 1));
			RuntimeObject* L_33 = __this->___list;
			int32_t L_34 = V_5;
			NullCheck(L_33);
			TimeValue_t45AE43B219493F9459363F32C79E8986B5F82E0E L_35;
			L_35 = InterfaceFuncInvoker1< TimeValue_t45AE43B219493F9459363F32C79E8986B5F82E0E, int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_33, L_34);
			TimeValue_t45AE43B219493F9459363F32C79E8986B5F82E0E L_36 = L_35;
			RuntimeObject* L_37 = Box(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4), &L_36);
			NullCheck(L_30);
			ArrayElementTypeCheck (L_30, L_37);
			(L_30)->SetAt(static_cast<il2cpp_array_size_t>(L_32), (RuntimeObject*)L_37);
			int32_t L_38 = V_5;
			V_5 = ((int32_t)il2cpp_codegen_add(L_38, 1));
		}

IL_00cd_1:
		{
			int32_t L_39 = V_5;
			int32_t L_40 = V_4;
			if ((((int32_t)L_39) < ((int32_t)L_40)))
			{
				goto IL_00ad_1;
			}
		}
		{
			goto IL_00dd;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_00d5;
		}
		throw e;
	}

CATCH_00d5:
	{
		ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1* L_41 = ((ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1*)IL2CPP_GET_ACTIVE_EXCEPTION(ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1*));;
		ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58(NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_00dd;
	}

IL_00dd:
	{
		return;
	}
}
// Method Definition Index: 10575
// Method Definition Index: 10576
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ReadOnlyCollection_1_System_Collections_IList_get_Item_mB458F24B3267DF7C6B254D98602CD21246C83C1C (ReadOnlyCollection_1_tFF6716AACE48FE7B167A53ED10AE04FA2A2AB83A* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		int32_t L_1 = ___0_index;
		NullCheck(L_0);
		TimeValue_t45AE43B219493F9459363F32C79E8986B5F82E0E L_2;
		L_2 = InterfaceFuncInvoker1< TimeValue_t45AE43B219493F9459363F32C79E8986B5F82E0E, int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_0, L_1);
		TimeValue_t45AE43B219493F9459363F32C79E8986B5F82E0E L_3 = L_2;
		RuntimeObject* L_4 = Box(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4), &L_3);
		return L_4;
	}
}
// Method Definition Index: 10577
// Method Definition Index: 10578
// Method Definition Index: 10579
// Method Definition Index: 10580
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_IsCompatibleObject_mC19A002D4F9915FA70C0B6DE179B36F8B4DA9B87 (RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	//<source_info:<no-source>:1>
	TimeValue_t45AE43B219493F9459363F32C79E8986B5F82E0E V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		RuntimeObject* L_0 = ___0_value;
		if (((RuntimeObject*)IsInstSealed((RuntimeObject*)L_0, il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 4))))
		{
			goto IL_001f;
		}
	}
	{
		RuntimeObject* L_1 = ___0_value;
		if (L_1)
		{
			goto IL_001d;
		}
	}
	{
		il2cpp_codegen_initobj((&V_0), sizeof(TimeValue_t45AE43B219493F9459363F32C79E8986B5F82E0E));
		TimeValue_t45AE43B219493F9459363F32C79E8986B5F82E0E L_2 = V_0;
		return false;
	}

IL_001d:
	{
		return (bool)0;
	}

IL_001f:
	{
		return (bool)1;
	}
}
// Method Definition Index: 10581
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_System_Collections_IList_Contains_m25451603975E07579B503AD1936529F8DC0EA1DA (ReadOnlyCollection_1_tFF6716AACE48FE7B167A53ED10AE04FA2A2AB83A* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = ___0_value;
		bool L_1;
		L_1 = ReadOnlyCollection_1_IsCompatibleObject_mC19A002D4F9915FA70C0B6DE179B36F8B4DA9B87(L_0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 13));
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject* L_2 = ___0_value;
		bool L_3;
		L_3 = ReadOnlyCollection_1_Contains_m02DC5E9462836451750318F47E93084247533EE6(__this, ((*(TimeValue_t45AE43B219493F9459363F32C79E8986B5F82E0E*)UnBox(L_2, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4)))), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 14));
		return L_3;
	}

IL_0015:
	{
		return (bool)0;
	}
}
// Method Definition Index: 10582
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_System_Collections_IList_IndexOf_m2CE8E6FEC4468C3EB5AC567E751F9AC7183AE20B (ReadOnlyCollection_1_tFF6716AACE48FE7B167A53ED10AE04FA2A2AB83A* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = ___0_value;
		bool L_1;
		L_1 = ReadOnlyCollection_1_IsCompatibleObject_mC19A002D4F9915FA70C0B6DE179B36F8B4DA9B87(L_0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 13));
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject* L_2 = ___0_value;
		int32_t L_3;
		L_3 = ReadOnlyCollection_1_IndexOf_m51CDE7C02C2B73BD9913E8FC0ED84A4308672A73(__this, ((*(TimeValue_t45AE43B219493F9459363F32C79E8986B5F82E0E*)UnBox(L_2, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4)))), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 15));
		return L_3;
	}

IL_0015:
	{
		return (-1);
	}
}
// Method Definition Index: 10583
// Method Definition Index: 10584
// Method Definition Index: 10585
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 10557
// Method Definition Index: 10558
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_get_Count_m208858945002AE69A132CDB66FEABE0C0525AE60 (ReadOnlyCollection_1_t5F8B55EF85E52FBC5F41B42D70D13BC89D4C469A* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = InterfaceFuncInvoker0< int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 0), L_0);
		return L_1;
	}
}
// Method Definition Index: 10559
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UICharInfo_t24C2EA0F2F3A938100C271891D9DEB015ABA5FBD ReadOnlyCollection_1_get_Item_m464759B7B6D10B14FDCD82B024412036E5A2E853 (ReadOnlyCollection_1_t5F8B55EF85E52FBC5F41B42D70D13BC89D4C469A* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		int32_t L_1 = ___0_index;
		NullCheck(L_0);
		UICharInfo_t24C2EA0F2F3A938100C271891D9DEB015ABA5FBD L_2;
		L_2 = InterfaceFuncInvoker1< UICharInfo_t24C2EA0F2F3A938100C271891D9DEB015ABA5FBD, int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_0, L_1);
		return L_2;
	}
}
// Method Definition Index: 10560
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_Contains_m05093008740300A921F7BB341479D97499CF75E0 (ReadOnlyCollection_1_t5F8B55EF85E52FBC5F41B42D70D13BC89D4C469A* __this, UICharInfo_t24C2EA0F2F3A938100C271891D9DEB015ABA5FBD ___0_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		UICharInfo_t24C2EA0F2F3A938100C271891D9DEB015ABA5FBD L_1 = ___0_value;
		NullCheck(L_0);
		bool L_2;
		L_2 = InterfaceFuncInvoker1< bool, UICharInfo_t24C2EA0F2F3A938100C271891D9DEB015ABA5FBD >::Invoke(4, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 0), L_0, L_1);
		return L_2;
	}
}
// Method Definition Index: 10561
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlyCollection_1_CopyTo_mB750E13BFD28A469FF9B8FFF7E63D1B3903D1613 (ReadOnlyCollection_1_t5F8B55EF85E52FBC5F41B42D70D13BC89D4C469A* __this, UICharInfoU5BU5D_t98D25C0197327978FA4E11B3518901A4839E086C* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		UICharInfoU5BU5D_t98D25C0197327978FA4E11B3518901A4839E086C* L_1 = ___0_array;
		int32_t L_2 = ___1_index;
		NullCheck(L_0);
		InterfaceActionInvoker2< UICharInfoU5BU5D_t98D25C0197327978FA4E11B3518901A4839E086C*, int32_t >::Invoke(5, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 0), L_0, L_1, L_2);
		return;
	}
}
// Method Definition Index: 10562
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ReadOnlyCollection_1_GetEnumerator_m5C49EF22E43D0EDE02FF81E69BB1E6C30239C67E (ReadOnlyCollection_1_t5F8B55EF85E52FBC5F41B42D70D13BC89D4C469A* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 7), L_0);
		return L_1;
	}
}
// Method Definition Index: 10563
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_IndexOf_m04BB6920B51BCC3A3026DF35719210BF7C503C2C (ReadOnlyCollection_1_t5F8B55EF85E52FBC5F41B42D70D13BC89D4C469A* __this, UICharInfo_t24C2EA0F2F3A938100C271891D9DEB015ABA5FBD ___0_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		UICharInfo_t24C2EA0F2F3A938100C271891D9DEB015ABA5FBD L_1 = ___0_value;
		NullCheck(L_0);
		int32_t L_2;
		L_2 = InterfaceFuncInvoker1< int32_t, UICharInfo_t24C2EA0F2F3A938100C271891D9DEB015ABA5FBD >::Invoke(2, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_0, L_1);
		return L_2;
	}
}
// Method Definition Index: 10564
// Method Definition Index: 10565
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UICharInfo_t24C2EA0F2F3A938100C271891D9DEB015ABA5FBD ReadOnlyCollection_1_System_Collections_Generic_IListU3CTU3E_get_Item_mC115C369A2479BE2EB6B69F8F520E14B1A427A36 (ReadOnlyCollection_1_t5F8B55EF85E52FBC5F41B42D70D13BC89D4C469A* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		int32_t L_1 = ___0_index;
		NullCheck(L_0);
		UICharInfo_t24C2EA0F2F3A938100C271891D9DEB015ABA5FBD L_2;
		L_2 = InterfaceFuncInvoker1< UICharInfo_t24C2EA0F2F3A938100C271891D9DEB015ABA5FBD, int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_0, L_1);
		return L_2;
	}
}
// Method Definition Index: 10566
// Method Definition Index: 10567
// Method Definition Index: 10568
// Method Definition Index: 10569
// Method Definition Index: 10570
// Method Definition Index: 10571
// Method Definition Index: 10572
// Method Definition Index: 10573
// Method Definition Index: 10574
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlyCollection_1_System_Collections_ICollection_CopyTo_mA27083155FEA081D61EDD18977496BFA07BE8B88 (ReadOnlyCollection_1_t5F8B55EF85E52FBC5F41B42D70D13BC89D4C469A* __this, RuntimeArray* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(Type_t_StaticInit);
	//<source_info:<no-source>:1>
	UICharInfoU5BU5D_t98D25C0197327978FA4E11B3518901A4839E086C* V_0 = NULL;
	Type_t* V_1 = NULL;
	Type_t* V_2 = NULL;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_3 = NULL;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		RuntimeArray* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC(3, NULL);
	}

IL_0009:
	{
		RuntimeArray* L_1 = ___0_array;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = il2cpp_codegen_array_get_rank(L_1);
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_0018;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA(7, NULL);
	}

IL_0018:
	{
		RuntimeArray* L_3 = ___0_array;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(L_3, 0, NULL);
		if (!L_4)
		{
			goto IL_0027;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA(6, NULL);
	}

IL_0027:
	{
		int32_t L_5 = ___1_index;
		if ((((int32_t)L_5) >= ((int32_t)0)))
		{
			goto IL_0030;
		}
	}
	{
		ThrowHelper_ThrowIndexArgumentOutOfRange_NeedNonNegNumException_m57AAB1E093F20BFC64BDDBD90FB5B592F582B82F(NULL);
	}

IL_0030:
	{
		RuntimeArray* L_6 = ___0_array;
		NullCheck(L_6);
		int32_t L_7;
		L_7 = il2cpp_codegen_array_get_length(L_6);
		int32_t L_8 = ___1_index;
		int32_t L_9;
		L_9 = ReadOnlyCollection_1_get_Count_m208858945002AE69A132CDB66FEABE0C0525AE60(__this, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 10));
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_7, L_8))) >= ((int32_t)L_9)))
		{
			goto IL_0046;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA(5, NULL);
	}

IL_0046:
	{
		RuntimeArray* L_10 = ___0_array;
		V_0 = ((UICharInfoU5BU5D_t98D25C0197327978FA4E11B3518901A4839E086C*)IsInstSealed((RuntimeObject*)L_10, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 11)));
		UICharInfoU5BU5D_t98D25C0197327978FA4E11B3518901A4839E086C* L_11 = V_0;
		if (!L_11)
		{
			goto IL_005e;
		}
	}
	{
		RuntimeObject* L_12 = __this->___list;
		UICharInfoU5BU5D_t98D25C0197327978FA4E11B3518901A4839E086C* L_13 = V_0;
		int32_t L_14 = ___1_index;
		NullCheck(L_12);
		InterfaceActionInvoker2< UICharInfoU5BU5D_t98D25C0197327978FA4E11B3518901A4839E086C*, int32_t >::Invoke(5, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 0), L_12, L_13, L_14);
		return;
	}

IL_005e:
	{
		RuntimeArray* L_15 = ___0_array;
		NullCheck(L_15);
		Type_t* L_16;
		L_16 = il2cpp_codegen_object_get_type(L_15);
		NullCheck(L_16);
		Type_t* L_17;
		L_17 = VirtualFuncInvoker0< Type_t* >::Invoke(46, L_16);
		V_1 = L_17;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_18 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(il2cpp_codegen_method_rgctx(method), 12)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_19;
		L_19 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_18, NULL);
		V_2 = L_19;
		Type_t* L_20 = V_1;
		Type_t* L_21 = V_2;
		NullCheck(L_20);
		bool L_22;
		L_22 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(22, L_20, L_21);
		if (L_22)
		{
			goto IL_008c;
		}
	}
	{
		Type_t* L_23 = V_2;
		Type_t* L_24 = V_1;
		NullCheck(L_23);
		bool L_25;
		L_25 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(22, L_23, L_24);
		if (L_25)
		{
			goto IL_008c;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58(NULL);
	}

IL_008c:
	{
		RuntimeArray* L_26 = ___0_array;
		V_3 = ((ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)IsInst((RuntimeObject*)L_26, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_27 = V_3;
		if (L_27)
		{
			goto IL_009b;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58(NULL);
	}

IL_009b:
	{
		RuntimeObject* L_28 = __this->___list;
		NullCheck(L_28);
		int32_t L_29;
		L_29 = InterfaceFuncInvoker0< int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 0), L_28);
		V_4 = L_29;
	}
	try
	{
		{
			V_5 = 0;
			goto IL_00cd_1;
		}

IL_00ad_1:
		{
			ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_30 = V_3;
			int32_t L_31 = ___1_index;
			int32_t L_32 = L_31;
			___1_index = ((int32_t)il2cpp_codegen_add(L_32, 1));
			RuntimeObject* L_33 = __this->___list;
			int32_t L_34 = V_5;
			NullCheck(L_33);
			UICharInfo_t24C2EA0F2F3A938100C271891D9DEB015ABA5FBD L_35;
			L_35 = InterfaceFuncInvoker1< UICharInfo_t24C2EA0F2F3A938100C271891D9DEB015ABA5FBD, int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_33, L_34);
			UICharInfo_t24C2EA0F2F3A938100C271891D9DEB015ABA5FBD L_36 = L_35;
			RuntimeObject* L_37 = Box(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4), &L_36);
			NullCheck(L_30);
			ArrayElementTypeCheck (L_30, L_37);
			(L_30)->SetAt(static_cast<il2cpp_array_size_t>(L_32), (RuntimeObject*)L_37);
			int32_t L_38 = V_5;
			V_5 = ((int32_t)il2cpp_codegen_add(L_38, 1));
		}

IL_00cd_1:
		{
			int32_t L_39 = V_5;
			int32_t L_40 = V_4;
			if ((((int32_t)L_39) < ((int32_t)L_40)))
			{
				goto IL_00ad_1;
			}
		}
		{
			goto IL_00dd;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_00d5;
		}
		throw e;
	}

CATCH_00d5:
	{
		ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1* L_41 = ((ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1*)IL2CPP_GET_ACTIVE_EXCEPTION(ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1*));;
		ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58(NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_00dd;
	}

IL_00dd:
	{
		return;
	}
}
// Method Definition Index: 10575
// Method Definition Index: 10576
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ReadOnlyCollection_1_System_Collections_IList_get_Item_mC3EC8CEC04C03F33B8B967145FE765F4787F3A7E (ReadOnlyCollection_1_t5F8B55EF85E52FBC5F41B42D70D13BC89D4C469A* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		int32_t L_1 = ___0_index;
		NullCheck(L_0);
		UICharInfo_t24C2EA0F2F3A938100C271891D9DEB015ABA5FBD L_2;
		L_2 = InterfaceFuncInvoker1< UICharInfo_t24C2EA0F2F3A938100C271891D9DEB015ABA5FBD, int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_0, L_1);
		UICharInfo_t24C2EA0F2F3A938100C271891D9DEB015ABA5FBD L_3 = L_2;
		RuntimeObject* L_4 = Box(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4), &L_3);
		return L_4;
	}
}
// Method Definition Index: 10577
// Method Definition Index: 10578
// Method Definition Index: 10579
// Method Definition Index: 10580
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_IsCompatibleObject_m7FF4D4B7DB9C5EB381294D17EF153E57E9D90F24 (RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	//<source_info:<no-source>:1>
	UICharInfo_t24C2EA0F2F3A938100C271891D9DEB015ABA5FBD V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		RuntimeObject* L_0 = ___0_value;
		if (((RuntimeObject*)IsInstSealed((RuntimeObject*)L_0, il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 4))))
		{
			goto IL_001f;
		}
	}
	{
		RuntimeObject* L_1 = ___0_value;
		if (L_1)
		{
			goto IL_001d;
		}
	}
	{
		il2cpp_codegen_initobj((&V_0), sizeof(UICharInfo_t24C2EA0F2F3A938100C271891D9DEB015ABA5FBD));
		UICharInfo_t24C2EA0F2F3A938100C271891D9DEB015ABA5FBD L_2 = V_0;
		return false;
	}

IL_001d:
	{
		return (bool)0;
	}

IL_001f:
	{
		return (bool)1;
	}
}
// Method Definition Index: 10581
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_System_Collections_IList_Contains_m8185A72D604471A35D7ABD36C0FB3ADC14078E1B (ReadOnlyCollection_1_t5F8B55EF85E52FBC5F41B42D70D13BC89D4C469A* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = ___0_value;
		bool L_1;
		L_1 = ReadOnlyCollection_1_IsCompatibleObject_m7FF4D4B7DB9C5EB381294D17EF153E57E9D90F24(L_0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 13));
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject* L_2 = ___0_value;
		bool L_3;
		L_3 = ReadOnlyCollection_1_Contains_m05093008740300A921F7BB341479D97499CF75E0(__this, ((*(UICharInfo_t24C2EA0F2F3A938100C271891D9DEB015ABA5FBD*)UnBox(L_2, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4)))), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 14));
		return L_3;
	}

IL_0015:
	{
		return (bool)0;
	}
}
// Method Definition Index: 10582
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_System_Collections_IList_IndexOf_m8E56ECCE1202DFA4F4B8D882222CB144B24A9B13 (ReadOnlyCollection_1_t5F8B55EF85E52FBC5F41B42D70D13BC89D4C469A* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = ___0_value;
		bool L_1;
		L_1 = ReadOnlyCollection_1_IsCompatibleObject_m7FF4D4B7DB9C5EB381294D17EF153E57E9D90F24(L_0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 13));
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject* L_2 = ___0_value;
		int32_t L_3;
		L_3 = ReadOnlyCollection_1_IndexOf_m04BB6920B51BCC3A3026DF35719210BF7C503C2C(__this, ((*(UICharInfo_t24C2EA0F2F3A938100C271891D9DEB015ABA5FBD*)UnBox(L_2, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4)))), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 15));
		return L_3;
	}

IL_0015:
	{
		return (-1);
	}
}
// Method Definition Index: 10583
// Method Definition Index: 10584
// Method Definition Index: 10585
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 10557
// Method Definition Index: 10558
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_get_Count_mF4F25BF826DF061ED78B82A6595649A22FE54A6A (ReadOnlyCollection_1_tAC9F0ECFFCE3DC3797BE610439BF76ACB015D44E* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = InterfaceFuncInvoker0< int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 0), L_0);
		return L_1;
	}
}
// Method Definition Index: 10559
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UILineInfo_tC6FF4F85BD2316FADA2148A1789B3FF0B05A6CAC ReadOnlyCollection_1_get_Item_mD19263BE3FE50F7022FD4FDB1C43665449F7C786 (ReadOnlyCollection_1_tAC9F0ECFFCE3DC3797BE610439BF76ACB015D44E* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		int32_t L_1 = ___0_index;
		NullCheck(L_0);
		UILineInfo_tC6FF4F85BD2316FADA2148A1789B3FF0B05A6CAC L_2;
		L_2 = InterfaceFuncInvoker1< UILineInfo_tC6FF4F85BD2316FADA2148A1789B3FF0B05A6CAC, int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_0, L_1);
		return L_2;
	}
}
// Method Definition Index: 10560
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_Contains_mC6D50D96188C20173348A47F5374EBB4820BF7FF (ReadOnlyCollection_1_tAC9F0ECFFCE3DC3797BE610439BF76ACB015D44E* __this, UILineInfo_tC6FF4F85BD2316FADA2148A1789B3FF0B05A6CAC ___0_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		UILineInfo_tC6FF4F85BD2316FADA2148A1789B3FF0B05A6CAC L_1 = ___0_value;
		NullCheck(L_0);
		bool L_2;
		L_2 = InterfaceFuncInvoker1< bool, UILineInfo_tC6FF4F85BD2316FADA2148A1789B3FF0B05A6CAC >::Invoke(4, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 0), L_0, L_1);
		return L_2;
	}
}
// Method Definition Index: 10561
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlyCollection_1_CopyTo_mB769C81D76D64D52CE3F1702FD0B42068CECF49A (ReadOnlyCollection_1_tAC9F0ECFFCE3DC3797BE610439BF76ACB015D44E* __this, UILineInfoU5BU5D_tDD6C8909B58F997A6FB1A17F360E8DBE387204BC* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		UILineInfoU5BU5D_tDD6C8909B58F997A6FB1A17F360E8DBE387204BC* L_1 = ___0_array;
		int32_t L_2 = ___1_index;
		NullCheck(L_0);
		InterfaceActionInvoker2< UILineInfoU5BU5D_tDD6C8909B58F997A6FB1A17F360E8DBE387204BC*, int32_t >::Invoke(5, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 0), L_0, L_1, L_2);
		return;
	}
}
// Method Definition Index: 10562
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ReadOnlyCollection_1_GetEnumerator_m94648297A3C23D68B3B48B029A19429B7818E0A4 (ReadOnlyCollection_1_tAC9F0ECFFCE3DC3797BE610439BF76ACB015D44E* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 7), L_0);
		return L_1;
	}
}
// Method Definition Index: 10563
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_IndexOf_m545FFA46CA3E7EED5B63255AD7A4E091B9ABBF0F (ReadOnlyCollection_1_tAC9F0ECFFCE3DC3797BE610439BF76ACB015D44E* __this, UILineInfo_tC6FF4F85BD2316FADA2148A1789B3FF0B05A6CAC ___0_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		UILineInfo_tC6FF4F85BD2316FADA2148A1789B3FF0B05A6CAC L_1 = ___0_value;
		NullCheck(L_0);
		int32_t L_2;
		L_2 = InterfaceFuncInvoker1< int32_t, UILineInfo_tC6FF4F85BD2316FADA2148A1789B3FF0B05A6CAC >::Invoke(2, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_0, L_1);
		return L_2;
	}
}
// Method Definition Index: 10564
// Method Definition Index: 10565
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UILineInfo_tC6FF4F85BD2316FADA2148A1789B3FF0B05A6CAC ReadOnlyCollection_1_System_Collections_Generic_IListU3CTU3E_get_Item_m0F9E7EBB14001DABF2365BB514C64D4C807B7E6E (ReadOnlyCollection_1_tAC9F0ECFFCE3DC3797BE610439BF76ACB015D44E* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		int32_t L_1 = ___0_index;
		NullCheck(L_0);
		UILineInfo_tC6FF4F85BD2316FADA2148A1789B3FF0B05A6CAC L_2;
		L_2 = InterfaceFuncInvoker1< UILineInfo_tC6FF4F85BD2316FADA2148A1789B3FF0B05A6CAC, int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_0, L_1);
		return L_2;
	}
}
// Method Definition Index: 10566
// Method Definition Index: 10567
// Method Definition Index: 10568
// Method Definition Index: 10569
// Method Definition Index: 10570
// Method Definition Index: 10571
// Method Definition Index: 10572
// Method Definition Index: 10573
// Method Definition Index: 10574
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlyCollection_1_System_Collections_ICollection_CopyTo_mAF3ABD65C0F8117D9ABF93ED0ABA5DAE03983543 (ReadOnlyCollection_1_tAC9F0ECFFCE3DC3797BE610439BF76ACB015D44E* __this, RuntimeArray* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(Type_t_StaticInit);
	//<source_info:<no-source>:1>
	UILineInfoU5BU5D_tDD6C8909B58F997A6FB1A17F360E8DBE387204BC* V_0 = NULL;
	Type_t* V_1 = NULL;
	Type_t* V_2 = NULL;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_3 = NULL;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		RuntimeArray* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC(3, NULL);
	}

IL_0009:
	{
		RuntimeArray* L_1 = ___0_array;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = il2cpp_codegen_array_get_rank(L_1);
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_0018;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA(7, NULL);
	}

IL_0018:
	{
		RuntimeArray* L_3 = ___0_array;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(L_3, 0, NULL);
		if (!L_4)
		{
			goto IL_0027;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA(6, NULL);
	}

IL_0027:
	{
		int32_t L_5 = ___1_index;
		if ((((int32_t)L_5) >= ((int32_t)0)))
		{
			goto IL_0030;
		}
	}
	{
		ThrowHelper_ThrowIndexArgumentOutOfRange_NeedNonNegNumException_m57AAB1E093F20BFC64BDDBD90FB5B592F582B82F(NULL);
	}

IL_0030:
	{
		RuntimeArray* L_6 = ___0_array;
		NullCheck(L_6);
		int32_t L_7;
		L_7 = il2cpp_codegen_array_get_length(L_6);
		int32_t L_8 = ___1_index;
		int32_t L_9;
		L_9 = ReadOnlyCollection_1_get_Count_mF4F25BF826DF061ED78B82A6595649A22FE54A6A(__this, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 10));
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_7, L_8))) >= ((int32_t)L_9)))
		{
			goto IL_0046;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA(5, NULL);
	}

IL_0046:
	{
		RuntimeArray* L_10 = ___0_array;
		V_0 = ((UILineInfoU5BU5D_tDD6C8909B58F997A6FB1A17F360E8DBE387204BC*)IsInstSealed((RuntimeObject*)L_10, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 11)));
		UILineInfoU5BU5D_tDD6C8909B58F997A6FB1A17F360E8DBE387204BC* L_11 = V_0;
		if (!L_11)
		{
			goto IL_005e;
		}
	}
	{
		RuntimeObject* L_12 = __this->___list;
		UILineInfoU5BU5D_tDD6C8909B58F997A6FB1A17F360E8DBE387204BC* L_13 = V_0;
		int32_t L_14 = ___1_index;
		NullCheck(L_12);
		InterfaceActionInvoker2< UILineInfoU5BU5D_tDD6C8909B58F997A6FB1A17F360E8DBE387204BC*, int32_t >::Invoke(5, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 0), L_12, L_13, L_14);
		return;
	}

IL_005e:
	{
		RuntimeArray* L_15 = ___0_array;
		NullCheck(L_15);
		Type_t* L_16;
		L_16 = il2cpp_codegen_object_get_type(L_15);
		NullCheck(L_16);
		Type_t* L_17;
		L_17 = VirtualFuncInvoker0< Type_t* >::Invoke(46, L_16);
		V_1 = L_17;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_18 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(il2cpp_codegen_method_rgctx(method), 12)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_19;
		L_19 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_18, NULL);
		V_2 = L_19;
		Type_t* L_20 = V_1;
		Type_t* L_21 = V_2;
		NullCheck(L_20);
		bool L_22;
		L_22 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(22, L_20, L_21);
		if (L_22)
		{
			goto IL_008c;
		}
	}
	{
		Type_t* L_23 = V_2;
		Type_t* L_24 = V_1;
		NullCheck(L_23);
		bool L_25;
		L_25 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(22, L_23, L_24);
		if (L_25)
		{
			goto IL_008c;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58(NULL);
	}

IL_008c:
	{
		RuntimeArray* L_26 = ___0_array;
		V_3 = ((ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)IsInst((RuntimeObject*)L_26, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_27 = V_3;
		if (L_27)
		{
			goto IL_009b;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58(NULL);
	}

IL_009b:
	{
		RuntimeObject* L_28 = __this->___list;
		NullCheck(L_28);
		int32_t L_29;
		L_29 = InterfaceFuncInvoker0< int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 0), L_28);
		V_4 = L_29;
	}
	try
	{
		{
			V_5 = 0;
			goto IL_00cd_1;
		}

IL_00ad_1:
		{
			ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_30 = V_3;
			int32_t L_31 = ___1_index;
			int32_t L_32 = L_31;
			___1_index = ((int32_t)il2cpp_codegen_add(L_32, 1));
			RuntimeObject* L_33 = __this->___list;
			int32_t L_34 = V_5;
			NullCheck(L_33);
			UILineInfo_tC6FF4F85BD2316FADA2148A1789B3FF0B05A6CAC L_35;
			L_35 = InterfaceFuncInvoker1< UILineInfo_tC6FF4F85BD2316FADA2148A1789B3FF0B05A6CAC, int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_33, L_34);
			UILineInfo_tC6FF4F85BD2316FADA2148A1789B3FF0B05A6CAC L_36 = L_35;
			RuntimeObject* L_37 = Box(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4), &L_36);
			NullCheck(L_30);
			ArrayElementTypeCheck (L_30, L_37);
			(L_30)->SetAt(static_cast<il2cpp_array_size_t>(L_32), (RuntimeObject*)L_37);
			int32_t L_38 = V_5;
			V_5 = ((int32_t)il2cpp_codegen_add(L_38, 1));
		}

IL_00cd_1:
		{
			int32_t L_39 = V_5;
			int32_t L_40 = V_4;
			if ((((int32_t)L_39) < ((int32_t)L_40)))
			{
				goto IL_00ad_1;
			}
		}
		{
			goto IL_00dd;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_00d5;
		}
		throw e;
	}

CATCH_00d5:
	{
		ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1* L_41 = ((ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1*)IL2CPP_GET_ACTIVE_EXCEPTION(ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1*));;
		ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58(NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_00dd;
	}

IL_00dd:
	{
		return;
	}
}
// Method Definition Index: 10575
// Method Definition Index: 10576
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ReadOnlyCollection_1_System_Collections_IList_get_Item_mA56336BA1075D07797DA64F584A103B36B85B304 (ReadOnlyCollection_1_tAC9F0ECFFCE3DC3797BE610439BF76ACB015D44E* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		int32_t L_1 = ___0_index;
		NullCheck(L_0);
		UILineInfo_tC6FF4F85BD2316FADA2148A1789B3FF0B05A6CAC L_2;
		L_2 = InterfaceFuncInvoker1< UILineInfo_tC6FF4F85BD2316FADA2148A1789B3FF0B05A6CAC, int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_0, L_1);
		UILineInfo_tC6FF4F85BD2316FADA2148A1789B3FF0B05A6CAC L_3 = L_2;
		RuntimeObject* L_4 = Box(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4), &L_3);
		return L_4;
	}
}
// Method Definition Index: 10577
// Method Definition Index: 10578
// Method Definition Index: 10579
// Method Definition Index: 10580
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_IsCompatibleObject_m03C42A942F85B4EC168F87B45CA0C1E0B8B991CC (RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	//<source_info:<no-source>:1>
	UILineInfo_tC6FF4F85BD2316FADA2148A1789B3FF0B05A6CAC V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		RuntimeObject* L_0 = ___0_value;
		if (((RuntimeObject*)IsInstSealed((RuntimeObject*)L_0, il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 4))))
		{
			goto IL_001f;
		}
	}
	{
		RuntimeObject* L_1 = ___0_value;
		if (L_1)
		{
			goto IL_001d;
		}
	}
	{
		il2cpp_codegen_initobj((&V_0), sizeof(UILineInfo_tC6FF4F85BD2316FADA2148A1789B3FF0B05A6CAC));
		UILineInfo_tC6FF4F85BD2316FADA2148A1789B3FF0B05A6CAC L_2 = V_0;
		return false;
	}

IL_001d:
	{
		return (bool)0;
	}

IL_001f:
	{
		return (bool)1;
	}
}
// Method Definition Index: 10581
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_System_Collections_IList_Contains_m3E2E6F719CDF0D4DDA61E3B287A088A9428653D2 (ReadOnlyCollection_1_tAC9F0ECFFCE3DC3797BE610439BF76ACB015D44E* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = ___0_value;
		bool L_1;
		L_1 = ReadOnlyCollection_1_IsCompatibleObject_m03C42A942F85B4EC168F87B45CA0C1E0B8B991CC(L_0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 13));
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject* L_2 = ___0_value;
		bool L_3;
		L_3 = ReadOnlyCollection_1_Contains_mC6D50D96188C20173348A47F5374EBB4820BF7FF(__this, ((*(UILineInfo_tC6FF4F85BD2316FADA2148A1789B3FF0B05A6CAC*)UnBox(L_2, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4)))), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 14));
		return L_3;
	}

IL_0015:
	{
		return (bool)0;
	}
}
// Method Definition Index: 10582
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_System_Collections_IList_IndexOf_m51305F78C62AB802A873B07A27C7F72FB2760637 (ReadOnlyCollection_1_tAC9F0ECFFCE3DC3797BE610439BF76ACB015D44E* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = ___0_value;
		bool L_1;
		L_1 = ReadOnlyCollection_1_IsCompatibleObject_m03C42A942F85B4EC168F87B45CA0C1E0B8B991CC(L_0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 13));
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject* L_2 = ___0_value;
		int32_t L_3;
		L_3 = ReadOnlyCollection_1_IndexOf_m545FFA46CA3E7EED5B63255AD7A4E091B9ABBF0F(__this, ((*(UILineInfo_tC6FF4F85BD2316FADA2148A1789B3FF0B05A6CAC*)UnBox(L_2, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4)))), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 15));
		return L_3;
	}

IL_0015:
	{
		return (-1);
	}
}
// Method Definition Index: 10583
// Method Definition Index: 10584
// Method Definition Index: 10585
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 10557
// Method Definition Index: 10558
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_get_Count_m1D8F54776E65523E2DFD134DD2FBCB07804B23B5 (ReadOnlyCollection_1_t0279BBDF584EF96177DF75FA7A456E4629B2B09E* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = InterfaceFuncInvoker0< int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 0), L_0);
		return L_1;
	}
}
// Method Definition Index: 10559
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 ReadOnlyCollection_1_get_Item_mC97E89BC98243E1F49212A54B72BEF69B58CEF7A (ReadOnlyCollection_1_t0279BBDF584EF96177DF75FA7A456E4629B2B09E* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		int32_t L_1 = ___0_index;
		NullCheck(L_0);
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_2;
		L_2 = InterfaceFuncInvoker1< UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207, int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_0, L_1);
		return L_2;
	}
}
// Method Definition Index: 10560
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_Contains_mAF5A0A69B2F9B8BF257C52A68C9BAA8A29F6CF17 (ReadOnlyCollection_1_t0279BBDF584EF96177DF75FA7A456E4629B2B09E* __this, UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 ___0_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_1 = ___0_value;
		NullCheck(L_0);
		bool L_2;
		L_2 = InterfaceFuncInvoker1< bool, UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 >::Invoke(4, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 0), L_0, L_1);
		return L_2;
	}
}
// Method Definition Index: 10561
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlyCollection_1_CopyTo_m8259CE3063D27B9FE180B3F7645B22F87D93D390 (ReadOnlyCollection_1_t0279BBDF584EF96177DF75FA7A456E4629B2B09E* __this, UIVertexU5BU5D_tBC532486B45D071A520751A90E819C77BA4E3D2F* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		UIVertexU5BU5D_tBC532486B45D071A520751A90E819C77BA4E3D2F* L_1 = ___0_array;
		int32_t L_2 = ___1_index;
		NullCheck(L_0);
		InterfaceActionInvoker2< UIVertexU5BU5D_tBC532486B45D071A520751A90E819C77BA4E3D2F*, int32_t >::Invoke(5, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 0), L_0, L_1, L_2);
		return;
	}
}
// Method Definition Index: 10562
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ReadOnlyCollection_1_GetEnumerator_m9853ECF358CC916DC672A4F14D4DEDCE4FBD8AC9 (ReadOnlyCollection_1_t0279BBDF584EF96177DF75FA7A456E4629B2B09E* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 7), L_0);
		return L_1;
	}
}
// Method Definition Index: 10563
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_IndexOf_m129FB3AE63A51E593B4BAD57B4A2A9E3104812AC (ReadOnlyCollection_1_t0279BBDF584EF96177DF75FA7A456E4629B2B09E* __this, UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 ___0_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_1 = ___0_value;
		NullCheck(L_0);
		int32_t L_2;
		L_2 = InterfaceFuncInvoker1< int32_t, UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 >::Invoke(2, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_0, L_1);
		return L_2;
	}
}
// Method Definition Index: 10564
// Method Definition Index: 10565
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 ReadOnlyCollection_1_System_Collections_Generic_IListU3CTU3E_get_Item_m2F6C350CB7F9B556C855533A3A615211262C2950 (ReadOnlyCollection_1_t0279BBDF584EF96177DF75FA7A456E4629B2B09E* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		int32_t L_1 = ___0_index;
		NullCheck(L_0);
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_2;
		L_2 = InterfaceFuncInvoker1< UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207, int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_0, L_1);
		return L_2;
	}
}
// Method Definition Index: 10566
// Method Definition Index: 10567
// Method Definition Index: 10568
// Method Definition Index: 10569
// Method Definition Index: 10570
// Method Definition Index: 10571
// Method Definition Index: 10572
// Method Definition Index: 10573
// Method Definition Index: 10574
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlyCollection_1_System_Collections_ICollection_CopyTo_m746E58D1AEA3B079E40F6B94E7F1A2691930884C (ReadOnlyCollection_1_t0279BBDF584EF96177DF75FA7A456E4629B2B09E* __this, RuntimeArray* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(Type_t_StaticInit);
	//<source_info:<no-source>:1>
	UIVertexU5BU5D_tBC532486B45D071A520751A90E819C77BA4E3D2F* V_0 = NULL;
	Type_t* V_1 = NULL;
	Type_t* V_2 = NULL;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_3 = NULL;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		RuntimeArray* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC(3, NULL);
	}

IL_0009:
	{
		RuntimeArray* L_1 = ___0_array;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = il2cpp_codegen_array_get_rank(L_1);
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_0018;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA(7, NULL);
	}

IL_0018:
	{
		RuntimeArray* L_3 = ___0_array;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(L_3, 0, NULL);
		if (!L_4)
		{
			goto IL_0027;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA(6, NULL);
	}

IL_0027:
	{
		int32_t L_5 = ___1_index;
		if ((((int32_t)L_5) >= ((int32_t)0)))
		{
			goto IL_0030;
		}
	}
	{
		ThrowHelper_ThrowIndexArgumentOutOfRange_NeedNonNegNumException_m57AAB1E093F20BFC64BDDBD90FB5B592F582B82F(NULL);
	}

IL_0030:
	{
		RuntimeArray* L_6 = ___0_array;
		NullCheck(L_6);
		int32_t L_7;
		L_7 = il2cpp_codegen_array_get_length(L_6);
		int32_t L_8 = ___1_index;
		int32_t L_9;
		L_9 = ReadOnlyCollection_1_get_Count_m1D8F54776E65523E2DFD134DD2FBCB07804B23B5(__this, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 10));
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_7, L_8))) >= ((int32_t)L_9)))
		{
			goto IL_0046;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA(5, NULL);
	}

IL_0046:
	{
		RuntimeArray* L_10 = ___0_array;
		V_0 = ((UIVertexU5BU5D_tBC532486B45D071A520751A90E819C77BA4E3D2F*)IsInstSealed((RuntimeObject*)L_10, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 11)));
		UIVertexU5BU5D_tBC532486B45D071A520751A90E819C77BA4E3D2F* L_11 = V_0;
		if (!L_11)
		{
			goto IL_005e;
		}
	}
	{
		RuntimeObject* L_12 = __this->___list;
		UIVertexU5BU5D_tBC532486B45D071A520751A90E819C77BA4E3D2F* L_13 = V_0;
		int32_t L_14 = ___1_index;
		NullCheck(L_12);
		InterfaceActionInvoker2< UIVertexU5BU5D_tBC532486B45D071A520751A90E819C77BA4E3D2F*, int32_t >::Invoke(5, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 0), L_12, L_13, L_14);
		return;
	}

IL_005e:
	{
		RuntimeArray* L_15 = ___0_array;
		NullCheck(L_15);
		Type_t* L_16;
		L_16 = il2cpp_codegen_object_get_type(L_15);
		NullCheck(L_16);
		Type_t* L_17;
		L_17 = VirtualFuncInvoker0< Type_t* >::Invoke(46, L_16);
		V_1 = L_17;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_18 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(il2cpp_codegen_method_rgctx(method), 12)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_19;
		L_19 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_18, NULL);
		V_2 = L_19;
		Type_t* L_20 = V_1;
		Type_t* L_21 = V_2;
		NullCheck(L_20);
		bool L_22;
		L_22 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(22, L_20, L_21);
		if (L_22)
		{
			goto IL_008c;
		}
	}
	{
		Type_t* L_23 = V_2;
		Type_t* L_24 = V_1;
		NullCheck(L_23);
		bool L_25;
		L_25 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(22, L_23, L_24);
		if (L_25)
		{
			goto IL_008c;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58(NULL);
	}

IL_008c:
	{
		RuntimeArray* L_26 = ___0_array;
		V_3 = ((ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)IsInst((RuntimeObject*)L_26, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_27 = V_3;
		if (L_27)
		{
			goto IL_009b;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58(NULL);
	}

IL_009b:
	{
		RuntimeObject* L_28 = __this->___list;
		NullCheck(L_28);
		int32_t L_29;
		L_29 = InterfaceFuncInvoker0< int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 0), L_28);
		V_4 = L_29;
	}
	try
	{
		{
			V_5 = 0;
			goto IL_00cd_1;
		}

IL_00ad_1:
		{
			ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_30 = V_3;
			int32_t L_31 = ___1_index;
			int32_t L_32 = L_31;
			___1_index = ((int32_t)il2cpp_codegen_add(L_32, 1));
			RuntimeObject* L_33 = __this->___list;
			int32_t L_34 = V_5;
			NullCheck(L_33);
			UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_35;
			L_35 = InterfaceFuncInvoker1< UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207, int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_33, L_34);
			UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_36 = L_35;
			RuntimeObject* L_37 = Box(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4), &L_36);
			NullCheck(L_30);
			ArrayElementTypeCheck (L_30, L_37);
			(L_30)->SetAt(static_cast<il2cpp_array_size_t>(L_32), (RuntimeObject*)L_37);
			int32_t L_38 = V_5;
			V_5 = ((int32_t)il2cpp_codegen_add(L_38, 1));
		}

IL_00cd_1:
		{
			int32_t L_39 = V_5;
			int32_t L_40 = V_4;
			if ((((int32_t)L_39) < ((int32_t)L_40)))
			{
				goto IL_00ad_1;
			}
		}
		{
			goto IL_00dd;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_00d5;
		}
		throw e;
	}

CATCH_00d5:
	{
		ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1* L_41 = ((ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1*)IL2CPP_GET_ACTIVE_EXCEPTION(ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1*));;
		ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58(NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_00dd;
	}

IL_00dd:
	{
		return;
	}
}
// Method Definition Index: 10575
// Method Definition Index: 10576
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ReadOnlyCollection_1_System_Collections_IList_get_Item_m21B928A407E2592BF0F388E719B03719FED65295 (ReadOnlyCollection_1_t0279BBDF584EF96177DF75FA7A456E4629B2B09E* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		int32_t L_1 = ___0_index;
		NullCheck(L_0);
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_2;
		L_2 = InterfaceFuncInvoker1< UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207, int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_0, L_1);
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_3 = L_2;
		RuntimeObject* L_4 = Box(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4), &L_3);
		return L_4;
	}
}
// Method Definition Index: 10577
// Method Definition Index: 10578
// Method Definition Index: 10579
// Method Definition Index: 10580
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_IsCompatibleObject_m88E1CA111AE23BF4399AA4FFE4FE8867FE94C854 (RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	//<source_info:<no-source>:1>
	UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		RuntimeObject* L_0 = ___0_value;
		if (((RuntimeObject*)IsInstSealed((RuntimeObject*)L_0, il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 4))))
		{
			goto IL_001f;
		}
	}
	{
		RuntimeObject* L_1 = ___0_value;
		if (L_1)
		{
			goto IL_001d;
		}
	}
	{
		il2cpp_codegen_initobj((&V_0), sizeof(UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207));
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_2 = V_0;
		return false;
	}

IL_001d:
	{
		return (bool)0;
	}

IL_001f:
	{
		return (bool)1;
	}
}
// Method Definition Index: 10581
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_System_Collections_IList_Contains_m6320576551FAE6467ECF183511D06F21F7301F18 (ReadOnlyCollection_1_t0279BBDF584EF96177DF75FA7A456E4629B2B09E* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = ___0_value;
		bool L_1;
		L_1 = ReadOnlyCollection_1_IsCompatibleObject_m88E1CA111AE23BF4399AA4FFE4FE8867FE94C854(L_0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 13));
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject* L_2 = ___0_value;
		bool L_3;
		L_3 = ReadOnlyCollection_1_Contains_mAF5A0A69B2F9B8BF257C52A68C9BAA8A29F6CF17(__this, ((*(UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207*)UnBox(L_2, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4)))), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 14));
		return L_3;
	}

IL_0015:
	{
		return (bool)0;
	}
}
// Method Definition Index: 10582
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_System_Collections_IList_IndexOf_mF4A347F03FF2F96A4BF773F3DC32AB4CE25385F4 (ReadOnlyCollection_1_t0279BBDF584EF96177DF75FA7A456E4629B2B09E* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = ___0_value;
		bool L_1;
		L_1 = ReadOnlyCollection_1_IsCompatibleObject_m88E1CA111AE23BF4399AA4FFE4FE8867FE94C854(L_0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 13));
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject* L_2 = ___0_value;
		int32_t L_3;
		L_3 = ReadOnlyCollection_1_IndexOf_m129FB3AE63A51E593B4BAD57B4A2A9E3104812AC(__this, ((*(UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207*)UnBox(L_2, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4)))), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 15));
		return L_3;
	}

IL_0015:
	{
		return (-1);
	}
}
// Method Definition Index: 10583
// Method Definition Index: 10584
// Method Definition Index: 10585
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 10557
// Method Definition Index: 10558
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_get_Count_mE5F79F4C569C903ACCF6EA6A986411A6DF3A9CF0 (ReadOnlyCollection_1_tF3F201D52E933A4489A4C06E8B1203099F42FB01* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = InterfaceFuncInvoker0< int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 0), L_0);
		return L_1;
	}
}
// Method Definition Index: 10559
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t ReadOnlyCollection_1_get_Item_m548364B64CD1B2AB453170381B17662AABD088A5 (ReadOnlyCollection_1_tF3F201D52E933A4489A4C06E8B1203099F42FB01* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		int32_t L_1 = ___0_index;
		NullCheck(L_0);
		uint32_t L_2;
		L_2 = InterfaceFuncInvoker1< uint32_t, int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_0, L_1);
		return L_2;
	}
}
// Method Definition Index: 10560
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_Contains_m419531A31381A970A871D90935DF22B6CF3EBFBB (ReadOnlyCollection_1_tF3F201D52E933A4489A4C06E8B1203099F42FB01* __this, uint32_t ___0_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		uint32_t L_1 = ___0_value;
		NullCheck(L_0);
		bool L_2;
		L_2 = InterfaceFuncInvoker1< bool, uint32_t >::Invoke(4, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 0), L_0, L_1);
		return L_2;
	}
}
// Method Definition Index: 10561
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlyCollection_1_CopyTo_m4804E7C3BE191FDA1FEE37CB1E7740E71F2E6F5E (ReadOnlyCollection_1_tF3F201D52E933A4489A4C06E8B1203099F42FB01* __this, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_1 = ___0_array;
		int32_t L_2 = ___1_index;
		NullCheck(L_0);
		InterfaceActionInvoker2< UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*, int32_t >::Invoke(5, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 0), L_0, L_1, L_2);
		return;
	}
}
// Method Definition Index: 10562
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ReadOnlyCollection_1_GetEnumerator_m5E672A43AD459BED1FF7A3ECB874DB9341B4D34C (ReadOnlyCollection_1_tF3F201D52E933A4489A4C06E8B1203099F42FB01* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 7), L_0);
		return L_1;
	}
}
// Method Definition Index: 10563
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_IndexOf_m9A6405BAF7999DFD7A0398A1E931E107FEA5A1A5 (ReadOnlyCollection_1_tF3F201D52E933A4489A4C06E8B1203099F42FB01* __this, uint32_t ___0_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		uint32_t L_1 = ___0_value;
		NullCheck(L_0);
		int32_t L_2;
		L_2 = InterfaceFuncInvoker1< int32_t, uint32_t >::Invoke(2, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_0, L_1);
		return L_2;
	}
}
// Method Definition Index: 10564
// Method Definition Index: 10565
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t ReadOnlyCollection_1_System_Collections_Generic_IListU3CTU3E_get_Item_m8D61A33C276DA945E5FA450F7B0E89FA4B276EC0 (ReadOnlyCollection_1_tF3F201D52E933A4489A4C06E8B1203099F42FB01* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		int32_t L_1 = ___0_index;
		NullCheck(L_0);
		uint32_t L_2;
		L_2 = InterfaceFuncInvoker1< uint32_t, int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_0, L_1);
		return L_2;
	}
}
// Method Definition Index: 10566
// Method Definition Index: 10567
// Method Definition Index: 10568
// Method Definition Index: 10569
// Method Definition Index: 10570
// Method Definition Index: 10571
// Method Definition Index: 10572
// Method Definition Index: 10573
// Method Definition Index: 10574
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlyCollection_1_System_Collections_ICollection_CopyTo_m867134AB573986B1120E303807BF3DD4E0FC43C8 (ReadOnlyCollection_1_tF3F201D52E933A4489A4C06E8B1203099F42FB01* __this, RuntimeArray* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(Type_t_StaticInit);
	//<source_info:<no-source>:1>
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* V_0 = NULL;
	Type_t* V_1 = NULL;
	Type_t* V_2 = NULL;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_3 = NULL;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		RuntimeArray* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC(3, NULL);
	}

IL_0009:
	{
		RuntimeArray* L_1 = ___0_array;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = il2cpp_codegen_array_get_rank(L_1);
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_0018;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA(7, NULL);
	}

IL_0018:
	{
		RuntimeArray* L_3 = ___0_array;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(L_3, 0, NULL);
		if (!L_4)
		{
			goto IL_0027;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA(6, NULL);
	}

IL_0027:
	{
		int32_t L_5 = ___1_index;
		if ((((int32_t)L_5) >= ((int32_t)0)))
		{
			goto IL_0030;
		}
	}
	{
		ThrowHelper_ThrowIndexArgumentOutOfRange_NeedNonNegNumException_m57AAB1E093F20BFC64BDDBD90FB5B592F582B82F(NULL);
	}

IL_0030:
	{
		RuntimeArray* L_6 = ___0_array;
		NullCheck(L_6);
		int32_t L_7;
		L_7 = il2cpp_codegen_array_get_length(L_6);
		int32_t L_8 = ___1_index;
		int32_t L_9;
		L_9 = ReadOnlyCollection_1_get_Count_mE5F79F4C569C903ACCF6EA6A986411A6DF3A9CF0(__this, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 10));
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_7, L_8))) >= ((int32_t)L_9)))
		{
			goto IL_0046;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA(5, NULL);
	}

IL_0046:
	{
		RuntimeArray* L_10 = ___0_array;
		V_0 = ((UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)IsInst((RuntimeObject*)L_10, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 11)));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_11 = V_0;
		if (!L_11)
		{
			goto IL_005e;
		}
	}
	{
		RuntimeObject* L_12 = __this->___list;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_13 = V_0;
		int32_t L_14 = ___1_index;
		NullCheck(L_12);
		InterfaceActionInvoker2< UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*, int32_t >::Invoke(5, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 0), L_12, L_13, L_14);
		return;
	}

IL_005e:
	{
		RuntimeArray* L_15 = ___0_array;
		NullCheck(L_15);
		Type_t* L_16;
		L_16 = il2cpp_codegen_object_get_type(L_15);
		NullCheck(L_16);
		Type_t* L_17;
		L_17 = VirtualFuncInvoker0< Type_t* >::Invoke(46, L_16);
		V_1 = L_17;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_18 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(il2cpp_codegen_method_rgctx(method), 12)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_19;
		L_19 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_18, NULL);
		V_2 = L_19;
		Type_t* L_20 = V_1;
		Type_t* L_21 = V_2;
		NullCheck(L_20);
		bool L_22;
		L_22 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(22, L_20, L_21);
		if (L_22)
		{
			goto IL_008c;
		}
	}
	{
		Type_t* L_23 = V_2;
		Type_t* L_24 = V_1;
		NullCheck(L_23);
		bool L_25;
		L_25 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(22, L_23, L_24);
		if (L_25)
		{
			goto IL_008c;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58(NULL);
	}

IL_008c:
	{
		RuntimeArray* L_26 = ___0_array;
		V_3 = ((ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)IsInst((RuntimeObject*)L_26, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_27 = V_3;
		if (L_27)
		{
			goto IL_009b;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58(NULL);
	}

IL_009b:
	{
		RuntimeObject* L_28 = __this->___list;
		NullCheck(L_28);
		int32_t L_29;
		L_29 = InterfaceFuncInvoker0< int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 0), L_28);
		V_4 = L_29;
	}
	try
	{
		{
			V_5 = 0;
			goto IL_00cd_1;
		}

IL_00ad_1:
		{
			ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_30 = V_3;
			int32_t L_31 = ___1_index;
			int32_t L_32 = L_31;
			___1_index = ((int32_t)il2cpp_codegen_add(L_32, 1));
			RuntimeObject* L_33 = __this->___list;
			int32_t L_34 = V_5;
			NullCheck(L_33);
			uint32_t L_35;
			L_35 = InterfaceFuncInvoker1< uint32_t, int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_33, L_34);
			uint32_t L_36 = L_35;
			RuntimeObject* L_37 = Box(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4), &L_36);
			NullCheck(L_30);
			ArrayElementTypeCheck (L_30, L_37);
			(L_30)->SetAt(static_cast<il2cpp_array_size_t>(L_32), (RuntimeObject*)L_37);
			int32_t L_38 = V_5;
			V_5 = ((int32_t)il2cpp_codegen_add(L_38, 1));
		}

IL_00cd_1:
		{
			int32_t L_39 = V_5;
			int32_t L_40 = V_4;
			if ((((int32_t)L_39) < ((int32_t)L_40)))
			{
				goto IL_00ad_1;
			}
		}
		{
			goto IL_00dd;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_00d5;
		}
		throw e;
	}

CATCH_00d5:
	{
		ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1* L_41 = ((ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1*)IL2CPP_GET_ACTIVE_EXCEPTION(ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1*));;
		ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58(NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_00dd;
	}

IL_00dd:
	{
		return;
	}
}
// Method Definition Index: 10575
// Method Definition Index: 10576
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ReadOnlyCollection_1_System_Collections_IList_get_Item_mADF5CE5C0A6A603A7D901F49B53EAAD35B24AACE (ReadOnlyCollection_1_tF3F201D52E933A4489A4C06E8B1203099F42FB01* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		int32_t L_1 = ___0_index;
		NullCheck(L_0);
		uint32_t L_2;
		L_2 = InterfaceFuncInvoker1< uint32_t, int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_0, L_1);
		uint32_t L_3 = L_2;
		RuntimeObject* L_4 = Box(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4), &L_3);
		return L_4;
	}
}
// Method Definition Index: 10577
// Method Definition Index: 10578
// Method Definition Index: 10579
// Method Definition Index: 10580
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_IsCompatibleObject_m1D7518BCBEC6037EB9FF7B400662C83A568F7B26 (RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	//<source_info:<no-source>:1>
	uint32_t V_0 = 0;
	{
		RuntimeObject* L_0 = ___0_value;
		if (((RuntimeObject*)IsInstSealed((RuntimeObject*)L_0, il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 4))))
		{
			goto IL_001f;
		}
	}
	{
		RuntimeObject* L_1 = ___0_value;
		if (L_1)
		{
			goto IL_001d;
		}
	}
	{
		il2cpp_codegen_initobj((&V_0), sizeof(uint32_t));
		uint32_t L_2 = V_0;
		return false;
	}

IL_001d:
	{
		return (bool)0;
	}

IL_001f:
	{
		return (bool)1;
	}
}
// Method Definition Index: 10581
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_System_Collections_IList_Contains_m892500E9C0B3AC8F96EF8A1A6786BBAD64635212 (ReadOnlyCollection_1_tF3F201D52E933A4489A4C06E8B1203099F42FB01* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = ___0_value;
		bool L_1;
		L_1 = ReadOnlyCollection_1_IsCompatibleObject_m1D7518BCBEC6037EB9FF7B400662C83A568F7B26(L_0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 13));
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject* L_2 = ___0_value;
		bool L_3;
		L_3 = ReadOnlyCollection_1_Contains_m419531A31381A970A871D90935DF22B6CF3EBFBB(__this, ((*(uint32_t*)UnBox(L_2, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4)))), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 14));
		return L_3;
	}

IL_0015:
	{
		return (bool)0;
	}
}
// Method Definition Index: 10582
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_System_Collections_IList_IndexOf_m2E0368651BDD3DE9B592E59FE5F16A5A2FD8FF7E (ReadOnlyCollection_1_tF3F201D52E933A4489A4C06E8B1203099F42FB01* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = ___0_value;
		bool L_1;
		L_1 = ReadOnlyCollection_1_IsCompatibleObject_m1D7518BCBEC6037EB9FF7B400662C83A568F7B26(L_0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 13));
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject* L_2 = ___0_value;
		int32_t L_3;
		L_3 = ReadOnlyCollection_1_IndexOf_m9A6405BAF7999DFD7A0398A1E931E107FEA5A1A5(__this, ((*(uint32_t*)UnBox(L_2, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4)))), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 15));
		return L_3;
	}

IL_0015:
	{
		return (-1);
	}
}
// Method Definition Index: 10583
// Method Definition Index: 10584
// Method Definition Index: 10585
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 10557
// Method Definition Index: 10558
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_get_Count_m7CADBE80BAAD2AAA5349395B3E442605E0BFEB95 (ReadOnlyCollection_1_tABD6F7BDD581540C8981BBE5012B221D4701AA0A* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = InterfaceFuncInvoker0< int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 0), L_0);
		return L_1;
	}
}
// Method Definition Index: 10559
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t ReadOnlyCollection_1_get_Item_m85234A93AA8EC1EB31B291BC93474B1340EFB2A3 (ReadOnlyCollection_1_tABD6F7BDD581540C8981BBE5012B221D4701AA0A* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		int32_t L_1 = ___0_index;
		NullCheck(L_0);
		uint64_t L_2;
		L_2 = InterfaceFuncInvoker1< uint64_t, int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_0, L_1);
		return L_2;
	}
}
// Method Definition Index: 10560
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_Contains_m785F371F039A4AA57D08627D5B0808885CDEE0AA (ReadOnlyCollection_1_tABD6F7BDD581540C8981BBE5012B221D4701AA0A* __this, uint64_t ___0_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		uint64_t L_1 = ___0_value;
		NullCheck(L_0);
		bool L_2;
		L_2 = InterfaceFuncInvoker1< bool, uint64_t >::Invoke(4, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 0), L_0, L_1);
		return L_2;
	}
}
// Method Definition Index: 10561
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlyCollection_1_CopyTo_m1B243ADD7B4BB57DF9D767C7BDF99F7F29F67863 (ReadOnlyCollection_1_tABD6F7BDD581540C8981BBE5012B221D4701AA0A* __this, UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_1 = ___0_array;
		int32_t L_2 = ___1_index;
		NullCheck(L_0);
		InterfaceActionInvoker2< UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299*, int32_t >::Invoke(5, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 0), L_0, L_1, L_2);
		return;
	}
}
// Method Definition Index: 10562
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ReadOnlyCollection_1_GetEnumerator_mC851327B7B80286F292607D4D6F64514BE1936AB (ReadOnlyCollection_1_tABD6F7BDD581540C8981BBE5012B221D4701AA0A* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 7), L_0);
		return L_1;
	}
}
// Method Definition Index: 10563
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_IndexOf_mFEF36A399F0FC585064EDABD17E3B3C465AC4F89 (ReadOnlyCollection_1_tABD6F7BDD581540C8981BBE5012B221D4701AA0A* __this, uint64_t ___0_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		uint64_t L_1 = ___0_value;
		NullCheck(L_0);
		int32_t L_2;
		L_2 = InterfaceFuncInvoker1< int32_t, uint64_t >::Invoke(2, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_0, L_1);
		return L_2;
	}
}
// Method Definition Index: 10564
// Method Definition Index: 10565
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t ReadOnlyCollection_1_System_Collections_Generic_IListU3CTU3E_get_Item_m8D0EF963749B3F7F1DC61408E19AB10BC52679ED (ReadOnlyCollection_1_tABD6F7BDD581540C8981BBE5012B221D4701AA0A* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		int32_t L_1 = ___0_index;
		NullCheck(L_0);
		uint64_t L_2;
		L_2 = InterfaceFuncInvoker1< uint64_t, int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_0, L_1);
		return L_2;
	}
}
// Method Definition Index: 10566
// Method Definition Index: 10567
// Method Definition Index: 10568
// Method Definition Index: 10569
// Method Definition Index: 10570
// Method Definition Index: 10571
// Method Definition Index: 10572
// Method Definition Index: 10573
// Method Definition Index: 10574
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlyCollection_1_System_Collections_ICollection_CopyTo_m50E8CBD89CE9B9464B8291B60DF758B5A8D0630F (ReadOnlyCollection_1_tABD6F7BDD581540C8981BBE5012B221D4701AA0A* __this, RuntimeArray* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(Type_t_StaticInit);
	//<source_info:<no-source>:1>
	UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* V_0 = NULL;
	Type_t* V_1 = NULL;
	Type_t* V_2 = NULL;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_3 = NULL;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		RuntimeArray* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC(3, NULL);
	}

IL_0009:
	{
		RuntimeArray* L_1 = ___0_array;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = il2cpp_codegen_array_get_rank(L_1);
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_0018;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA(7, NULL);
	}

IL_0018:
	{
		RuntimeArray* L_3 = ___0_array;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(L_3, 0, NULL);
		if (!L_4)
		{
			goto IL_0027;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA(6, NULL);
	}

IL_0027:
	{
		int32_t L_5 = ___1_index;
		if ((((int32_t)L_5) >= ((int32_t)0)))
		{
			goto IL_0030;
		}
	}
	{
		ThrowHelper_ThrowIndexArgumentOutOfRange_NeedNonNegNumException_m57AAB1E093F20BFC64BDDBD90FB5B592F582B82F(NULL);
	}

IL_0030:
	{
		RuntimeArray* L_6 = ___0_array;
		NullCheck(L_6);
		int32_t L_7;
		L_7 = il2cpp_codegen_array_get_length(L_6);
		int32_t L_8 = ___1_index;
		int32_t L_9;
		L_9 = ReadOnlyCollection_1_get_Count_m7CADBE80BAAD2AAA5349395B3E442605E0BFEB95(__this, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 10));
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_7, L_8))) >= ((int32_t)L_9)))
		{
			goto IL_0046;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA(5, NULL);
	}

IL_0046:
	{
		RuntimeArray* L_10 = ___0_array;
		V_0 = ((UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299*)IsInst((RuntimeObject*)L_10, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 11)));
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_11 = V_0;
		if (!L_11)
		{
			goto IL_005e;
		}
	}
	{
		RuntimeObject* L_12 = __this->___list;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_13 = V_0;
		int32_t L_14 = ___1_index;
		NullCheck(L_12);
		InterfaceActionInvoker2< UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299*, int32_t >::Invoke(5, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 0), L_12, L_13, L_14);
		return;
	}

IL_005e:
	{
		RuntimeArray* L_15 = ___0_array;
		NullCheck(L_15);
		Type_t* L_16;
		L_16 = il2cpp_codegen_object_get_type(L_15);
		NullCheck(L_16);
		Type_t* L_17;
		L_17 = VirtualFuncInvoker0< Type_t* >::Invoke(46, L_16);
		V_1 = L_17;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_18 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(il2cpp_codegen_method_rgctx(method), 12)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_19;
		L_19 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_18, NULL);
		V_2 = L_19;
		Type_t* L_20 = V_1;
		Type_t* L_21 = V_2;
		NullCheck(L_20);
		bool L_22;
		L_22 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(22, L_20, L_21);
		if (L_22)
		{
			goto IL_008c;
		}
	}
	{
		Type_t* L_23 = V_2;
		Type_t* L_24 = V_1;
		NullCheck(L_23);
		bool L_25;
		L_25 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(22, L_23, L_24);
		if (L_25)
		{
			goto IL_008c;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58(NULL);
	}

IL_008c:
	{
		RuntimeArray* L_26 = ___0_array;
		V_3 = ((ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)IsInst((RuntimeObject*)L_26, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_27 = V_3;
		if (L_27)
		{
			goto IL_009b;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58(NULL);
	}

IL_009b:
	{
		RuntimeObject* L_28 = __this->___list;
		NullCheck(L_28);
		int32_t L_29;
		L_29 = InterfaceFuncInvoker0< int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 0), L_28);
		V_4 = L_29;
	}
	try
	{
		{
			V_5 = 0;
			goto IL_00cd_1;
		}

IL_00ad_1:
		{
			ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_30 = V_3;
			int32_t L_31 = ___1_index;
			int32_t L_32 = L_31;
			___1_index = ((int32_t)il2cpp_codegen_add(L_32, 1));
			RuntimeObject* L_33 = __this->___list;
			int32_t L_34 = V_5;
			NullCheck(L_33);
			uint64_t L_35;
			L_35 = InterfaceFuncInvoker1< uint64_t, int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_33, L_34);
			uint64_t L_36 = L_35;
			RuntimeObject* L_37 = Box(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4), &L_36);
			NullCheck(L_30);
			ArrayElementTypeCheck (L_30, L_37);
			(L_30)->SetAt(static_cast<il2cpp_array_size_t>(L_32), (RuntimeObject*)L_37);
			int32_t L_38 = V_5;
			V_5 = ((int32_t)il2cpp_codegen_add(L_38, 1));
		}

IL_00cd_1:
		{
			int32_t L_39 = V_5;
			int32_t L_40 = V_4;
			if ((((int32_t)L_39) < ((int32_t)L_40)))
			{
				goto IL_00ad_1;
			}
		}
		{
			goto IL_00dd;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_00d5;
		}
		throw e;
	}

CATCH_00d5:
	{
		ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1* L_41 = ((ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1*)IL2CPP_GET_ACTIVE_EXCEPTION(ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1*));;
		ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58(NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_00dd;
	}

IL_00dd:
	{
		return;
	}
}
// Method Definition Index: 10575
// Method Definition Index: 10576
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ReadOnlyCollection_1_System_Collections_IList_get_Item_m659A50353B13163D60CCE95C8B49506A988427C1 (ReadOnlyCollection_1_tABD6F7BDD581540C8981BBE5012B221D4701AA0A* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		int32_t L_1 = ___0_index;
		NullCheck(L_0);
		uint64_t L_2;
		L_2 = InterfaceFuncInvoker1< uint64_t, int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_0, L_1);
		uint64_t L_3 = L_2;
		RuntimeObject* L_4 = Box(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4), &L_3);
		return L_4;
	}
}
// Method Definition Index: 10577
// Method Definition Index: 10578
// Method Definition Index: 10579
// Method Definition Index: 10580
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_IsCompatibleObject_mE726091D2574AA01253129E1832666343C088AA1 (RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	//<source_info:<no-source>:1>
	uint64_t V_0 = 0;
	{
		RuntimeObject* L_0 = ___0_value;
		if (((RuntimeObject*)IsInstSealed((RuntimeObject*)L_0, il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 4))))
		{
			goto IL_001f;
		}
	}
	{
		RuntimeObject* L_1 = ___0_value;
		if (L_1)
		{
			goto IL_001d;
		}
	}
	{
		il2cpp_codegen_initobj((&V_0), sizeof(uint64_t));
		uint64_t L_2 = V_0;
		return false;
	}

IL_001d:
	{
		return (bool)0;
	}

IL_001f:
	{
		return (bool)1;
	}
}
// Method Definition Index: 10581
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_System_Collections_IList_Contains_m4D00B8C10E5C8864BDA33AF6307FDC78EF08F365 (ReadOnlyCollection_1_tABD6F7BDD581540C8981BBE5012B221D4701AA0A* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = ___0_value;
		bool L_1;
		L_1 = ReadOnlyCollection_1_IsCompatibleObject_mE726091D2574AA01253129E1832666343C088AA1(L_0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 13));
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject* L_2 = ___0_value;
		bool L_3;
		L_3 = ReadOnlyCollection_1_Contains_m785F371F039A4AA57D08627D5B0808885CDEE0AA(__this, ((*(uint64_t*)UnBox(L_2, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4)))), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 14));
		return L_3;
	}

IL_0015:
	{
		return (bool)0;
	}
}
// Method Definition Index: 10582
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_System_Collections_IList_IndexOf_m85DAFDD5A256A78AB26EF7B868A55E4240912C87 (ReadOnlyCollection_1_tABD6F7BDD581540C8981BBE5012B221D4701AA0A* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = ___0_value;
		bool L_1;
		L_1 = ReadOnlyCollection_1_IsCompatibleObject_mE726091D2574AA01253129E1832666343C088AA1(L_0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 13));
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject* L_2 = ___0_value;
		int32_t L_3;
		L_3 = ReadOnlyCollection_1_IndexOf_mFEF36A399F0FC585064EDABD17E3B3C465AC4F89(__this, ((*(uint64_t*)UnBox(L_2, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4)))), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 15));
		return L_3;
	}

IL_0015:
	{
		return (-1);
	}
}
// Method Definition Index: 10583
// Method Definition Index: 10584
// Method Definition Index: 10585
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 10557
// Method Definition Index: 10558
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_get_Count_m7B5E28E23D09FA536000D2D58A36066D9B206742 (ReadOnlyCollection_1_tA06EBFED6AD4BFBC5FCBAEAFCDE3763C5110493C* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = InterfaceFuncInvoker0< int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 0), L_0);
		return L_1;
	}
}
// Method Definition Index: 10559
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UnifiedEventData_tEDECDFB75E38F848CEBAD43511511688BF895A2B ReadOnlyCollection_1_get_Item_m82A81F5A5C2053BA1D0DF1DFBE50F81D7486F0C4 (ReadOnlyCollection_1_tA06EBFED6AD4BFBC5FCBAEAFCDE3763C5110493C* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		int32_t L_1 = ___0_index;
		NullCheck(L_0);
		UnifiedEventData_tEDECDFB75E38F848CEBAD43511511688BF895A2B L_2;
		L_2 = InterfaceFuncInvoker1< UnifiedEventData_tEDECDFB75E38F848CEBAD43511511688BF895A2B, int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_0, L_1);
		return L_2;
	}
}
// Method Definition Index: 10560
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_Contains_mFB00F475A1D8CD0E7CA4C71EF703938A4FBDD39F (ReadOnlyCollection_1_tA06EBFED6AD4BFBC5FCBAEAFCDE3763C5110493C* __this, UnifiedEventData_tEDECDFB75E38F848CEBAD43511511688BF895A2B ___0_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		UnifiedEventData_tEDECDFB75E38F848CEBAD43511511688BF895A2B L_1 = ___0_value;
		NullCheck(L_0);
		bool L_2;
		L_2 = InterfaceFuncInvoker1< bool, UnifiedEventData_tEDECDFB75E38F848CEBAD43511511688BF895A2B >::Invoke(4, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 0), L_0, L_1);
		return L_2;
	}
}
// Method Definition Index: 10561
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlyCollection_1_CopyTo_m4081A5A44BAC82C464E2E62B3E80FC778E3527A6 (ReadOnlyCollection_1_tA06EBFED6AD4BFBC5FCBAEAFCDE3763C5110493C* __this, UnifiedEventDataU5BU5D_tA6F386C49FA6BF649CF8CC1E04E4042455FDF6BF* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		UnifiedEventDataU5BU5D_tA6F386C49FA6BF649CF8CC1E04E4042455FDF6BF* L_1 = ___0_array;
		int32_t L_2 = ___1_index;
		NullCheck(L_0);
		InterfaceActionInvoker2< UnifiedEventDataU5BU5D_tA6F386C49FA6BF649CF8CC1E04E4042455FDF6BF*, int32_t >::Invoke(5, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 0), L_0, L_1, L_2);
		return;
	}
}
// Method Definition Index: 10562
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ReadOnlyCollection_1_GetEnumerator_mE512F1DD4468F485E39C53AD7CD5D9AACE912F9C (ReadOnlyCollection_1_tA06EBFED6AD4BFBC5FCBAEAFCDE3763C5110493C* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 7), L_0);
		return L_1;
	}
}
// Method Definition Index: 10563
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_IndexOf_m3C01EB950263ED46CDA2569759ADD8A382A8E7AF (ReadOnlyCollection_1_tA06EBFED6AD4BFBC5FCBAEAFCDE3763C5110493C* __this, UnifiedEventData_tEDECDFB75E38F848CEBAD43511511688BF895A2B ___0_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		UnifiedEventData_tEDECDFB75E38F848CEBAD43511511688BF895A2B L_1 = ___0_value;
		NullCheck(L_0);
		int32_t L_2;
		L_2 = InterfaceFuncInvoker1< int32_t, UnifiedEventData_tEDECDFB75E38F848CEBAD43511511688BF895A2B >::Invoke(2, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_0, L_1);
		return L_2;
	}
}
// Method Definition Index: 10564
// Method Definition Index: 10565
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UnifiedEventData_tEDECDFB75E38F848CEBAD43511511688BF895A2B ReadOnlyCollection_1_System_Collections_Generic_IListU3CTU3E_get_Item_m8F82881E19D8AF33B0C47F4CE109CB1EE8220614 (ReadOnlyCollection_1_tA06EBFED6AD4BFBC5FCBAEAFCDE3763C5110493C* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		int32_t L_1 = ___0_index;
		NullCheck(L_0);
		UnifiedEventData_tEDECDFB75E38F848CEBAD43511511688BF895A2B L_2;
		L_2 = InterfaceFuncInvoker1< UnifiedEventData_tEDECDFB75E38F848CEBAD43511511688BF895A2B, int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_0, L_1);
		return L_2;
	}
}
// Method Definition Index: 10566
// Method Definition Index: 10567
// Method Definition Index: 10568
// Method Definition Index: 10569
// Method Definition Index: 10570
// Method Definition Index: 10571
// Method Definition Index: 10572
// Method Definition Index: 10573
// Method Definition Index: 10574
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlyCollection_1_System_Collections_ICollection_CopyTo_m47604277CF399F6ED2395D74F0D843A1408B7AD2 (ReadOnlyCollection_1_tA06EBFED6AD4BFBC5FCBAEAFCDE3763C5110493C* __this, RuntimeArray* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(Type_t_StaticInit);
	//<source_info:<no-source>:1>
	UnifiedEventDataU5BU5D_tA6F386C49FA6BF649CF8CC1E04E4042455FDF6BF* V_0 = NULL;
	Type_t* V_1 = NULL;
	Type_t* V_2 = NULL;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_3 = NULL;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		RuntimeArray* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC(3, NULL);
	}

IL_0009:
	{
		RuntimeArray* L_1 = ___0_array;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = il2cpp_codegen_array_get_rank(L_1);
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_0018;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA(7, NULL);
	}

IL_0018:
	{
		RuntimeArray* L_3 = ___0_array;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(L_3, 0, NULL);
		if (!L_4)
		{
			goto IL_0027;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA(6, NULL);
	}

IL_0027:
	{
		int32_t L_5 = ___1_index;
		if ((((int32_t)L_5) >= ((int32_t)0)))
		{
			goto IL_0030;
		}
	}
	{
		ThrowHelper_ThrowIndexArgumentOutOfRange_NeedNonNegNumException_m57AAB1E093F20BFC64BDDBD90FB5B592F582B82F(NULL);
	}

IL_0030:
	{
		RuntimeArray* L_6 = ___0_array;
		NullCheck(L_6);
		int32_t L_7;
		L_7 = il2cpp_codegen_array_get_length(L_6);
		int32_t L_8 = ___1_index;
		int32_t L_9;
		L_9 = ReadOnlyCollection_1_get_Count_m7B5E28E23D09FA536000D2D58A36066D9B206742(__this, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 10));
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_7, L_8))) >= ((int32_t)L_9)))
		{
			goto IL_0046;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA(5, NULL);
	}

IL_0046:
	{
		RuntimeArray* L_10 = ___0_array;
		V_0 = ((UnifiedEventDataU5BU5D_tA6F386C49FA6BF649CF8CC1E04E4042455FDF6BF*)IsInstSealed((RuntimeObject*)L_10, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 11)));
		UnifiedEventDataU5BU5D_tA6F386C49FA6BF649CF8CC1E04E4042455FDF6BF* L_11 = V_0;
		if (!L_11)
		{
			goto IL_005e;
		}
	}
	{
		RuntimeObject* L_12 = __this->___list;
		UnifiedEventDataU5BU5D_tA6F386C49FA6BF649CF8CC1E04E4042455FDF6BF* L_13 = V_0;
		int32_t L_14 = ___1_index;
		NullCheck(L_12);
		InterfaceActionInvoker2< UnifiedEventDataU5BU5D_tA6F386C49FA6BF649CF8CC1E04E4042455FDF6BF*, int32_t >::Invoke(5, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 0), L_12, L_13, L_14);
		return;
	}

IL_005e:
	{
		RuntimeArray* L_15 = ___0_array;
		NullCheck(L_15);
		Type_t* L_16;
		L_16 = il2cpp_codegen_object_get_type(L_15);
		NullCheck(L_16);
		Type_t* L_17;
		L_17 = VirtualFuncInvoker0< Type_t* >::Invoke(46, L_16);
		V_1 = L_17;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_18 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(il2cpp_codegen_method_rgctx(method), 12)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_19;
		L_19 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_18, NULL);
		V_2 = L_19;
		Type_t* L_20 = V_1;
		Type_t* L_21 = V_2;
		NullCheck(L_20);
		bool L_22;
		L_22 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(22, L_20, L_21);
		if (L_22)
		{
			goto IL_008c;
		}
	}
	{
		Type_t* L_23 = V_2;
		Type_t* L_24 = V_1;
		NullCheck(L_23);
		bool L_25;
		L_25 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(22, L_23, L_24);
		if (L_25)
		{
			goto IL_008c;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58(NULL);
	}

IL_008c:
	{
		RuntimeArray* L_26 = ___0_array;
		V_3 = ((ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)IsInst((RuntimeObject*)L_26, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_27 = V_3;
		if (L_27)
		{
			goto IL_009b;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58(NULL);
	}

IL_009b:
	{
		RuntimeObject* L_28 = __this->___list;
		NullCheck(L_28);
		int32_t L_29;
		L_29 = InterfaceFuncInvoker0< int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 0), L_28);
		V_4 = L_29;
	}
	try
	{
		{
			V_5 = 0;
			goto IL_00cd_1;
		}

IL_00ad_1:
		{
			ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_30 = V_3;
			int32_t L_31 = ___1_index;
			int32_t L_32 = L_31;
			___1_index = ((int32_t)il2cpp_codegen_add(L_32, 1));
			RuntimeObject* L_33 = __this->___list;
			int32_t L_34 = V_5;
			NullCheck(L_33);
			UnifiedEventData_tEDECDFB75E38F848CEBAD43511511688BF895A2B L_35;
			L_35 = InterfaceFuncInvoker1< UnifiedEventData_tEDECDFB75E38F848CEBAD43511511688BF895A2B, int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_33, L_34);
			UnifiedEventData_tEDECDFB75E38F848CEBAD43511511688BF895A2B L_36 = L_35;
			RuntimeObject* L_37 = Box(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4), &L_36);
			NullCheck(L_30);
			ArrayElementTypeCheck (L_30, L_37);
			(L_30)->SetAt(static_cast<il2cpp_array_size_t>(L_32), (RuntimeObject*)L_37);
			int32_t L_38 = V_5;
			V_5 = ((int32_t)il2cpp_codegen_add(L_38, 1));
		}

IL_00cd_1:
		{
			int32_t L_39 = V_5;
			int32_t L_40 = V_4;
			if ((((int32_t)L_39) < ((int32_t)L_40)))
			{
				goto IL_00ad_1;
			}
		}
		{
			goto IL_00dd;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_00d5;
		}
		throw e;
	}

CATCH_00d5:
	{
		ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1* L_41 = ((ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1*)IL2CPP_GET_ACTIVE_EXCEPTION(ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1*));;
		ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58(NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_00dd;
	}

IL_00dd:
	{
		return;
	}
}
// Method Definition Index: 10575
// Method Definition Index: 10576
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ReadOnlyCollection_1_System_Collections_IList_get_Item_m86EB2FDEF1B908329B36F6F664C7E8F40C5F21AB (ReadOnlyCollection_1_tA06EBFED6AD4BFBC5FCBAEAFCDE3763C5110493C* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		int32_t L_1 = ___0_index;
		NullCheck(L_0);
		UnifiedEventData_tEDECDFB75E38F848CEBAD43511511688BF895A2B L_2;
		L_2 = InterfaceFuncInvoker1< UnifiedEventData_tEDECDFB75E38F848CEBAD43511511688BF895A2B, int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_0, L_1);
		UnifiedEventData_tEDECDFB75E38F848CEBAD43511511688BF895A2B L_3 = L_2;
		RuntimeObject* L_4 = Box(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4), &L_3);
		return L_4;
	}
}
// Method Definition Index: 10577
// Method Definition Index: 10578
// Method Definition Index: 10579
// Method Definition Index: 10580
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_IsCompatibleObject_mFD8649775AED86392A2D22F6EA1E55776ED702EA (RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	//<source_info:<no-source>:1>
	UnifiedEventData_tEDECDFB75E38F848CEBAD43511511688BF895A2B V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		RuntimeObject* L_0 = ___0_value;
		if (((RuntimeObject*)IsInstSealed((RuntimeObject*)L_0, il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 4))))
		{
			goto IL_001f;
		}
	}
	{
		RuntimeObject* L_1 = ___0_value;
		if (L_1)
		{
			goto IL_001d;
		}
	}
	{
		il2cpp_codegen_initobj((&V_0), sizeof(UnifiedEventData_tEDECDFB75E38F848CEBAD43511511688BF895A2B));
		UnifiedEventData_tEDECDFB75E38F848CEBAD43511511688BF895A2B L_2 = V_0;
		return false;
	}

IL_001d:
	{
		return (bool)0;
	}

IL_001f:
	{
		return (bool)1;
	}
}
// Method Definition Index: 10581
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_System_Collections_IList_Contains_mC9391015A70BAC93E3B1995BE95CFCBFAA2A1C43 (ReadOnlyCollection_1_tA06EBFED6AD4BFBC5FCBAEAFCDE3763C5110493C* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = ___0_value;
		bool L_1;
		L_1 = ReadOnlyCollection_1_IsCompatibleObject_mFD8649775AED86392A2D22F6EA1E55776ED702EA(L_0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 13));
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject* L_2 = ___0_value;
		bool L_3;
		L_3 = ReadOnlyCollection_1_Contains_mFB00F475A1D8CD0E7CA4C71EF703938A4FBDD39F(__this, ((*(UnifiedEventData_tEDECDFB75E38F848CEBAD43511511688BF895A2B*)UnBox(L_2, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4)))), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 14));
		return L_3;
	}

IL_0015:
	{
		return (bool)0;
	}
}
// Method Definition Index: 10582
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_System_Collections_IList_IndexOf_mE4AD08260CF0795B9594FBC44C32C071F8F3A40D (ReadOnlyCollection_1_tA06EBFED6AD4BFBC5FCBAEAFCDE3763C5110493C* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = ___0_value;
		bool L_1;
		L_1 = ReadOnlyCollection_1_IsCompatibleObject_mFD8649775AED86392A2D22F6EA1E55776ED702EA(L_0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 13));
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject* L_2 = ___0_value;
		int32_t L_3;
		L_3 = ReadOnlyCollection_1_IndexOf_m3C01EB950263ED46CDA2569759ADD8A382A8E7AF(__this, ((*(UnifiedEventData_tEDECDFB75E38F848CEBAD43511511688BF895A2B*)UnBox(L_2, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4)))), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 15));
		return L_3;
	}

IL_0015:
	{
		return (-1);
	}
}
// Method Definition Index: 10583
// Method Definition Index: 10584
// Method Definition Index: 10585
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 10557
// Method Definition Index: 10558
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_get_Count_mD76DB4E2C0BC4110F6110E68DA709BD4A503D2F5 (ReadOnlyCollection_1_tC00260BA5B1BEF55EBEF800DF50485F5D9806E4C* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = InterfaceFuncInvoker0< int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 0), L_0);
		return L_1;
	}
}
// Method Definition Index: 10559
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UniqueStyleString_tE980AA033ABB00413A3139B42FF22750952DAECF ReadOnlyCollection_1_get_Item_mD69C8B233301943E280F4146FED9A6DE6D9A3643 (ReadOnlyCollection_1_tC00260BA5B1BEF55EBEF800DF50485F5D9806E4C* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		int32_t L_1 = ___0_index;
		NullCheck(L_0);
		UniqueStyleString_tE980AA033ABB00413A3139B42FF22750952DAECF L_2;
		L_2 = InterfaceFuncInvoker1< UniqueStyleString_tE980AA033ABB00413A3139B42FF22750952DAECF, int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_0, L_1);
		return L_2;
	}
}
// Method Definition Index: 10560
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_Contains_mFACE0C82F64A6D849DD7A5A9D94592654A6D1011 (ReadOnlyCollection_1_tC00260BA5B1BEF55EBEF800DF50485F5D9806E4C* __this, UniqueStyleString_tE980AA033ABB00413A3139B42FF22750952DAECF ___0_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		UniqueStyleString_tE980AA033ABB00413A3139B42FF22750952DAECF L_1 = ___0_value;
		NullCheck(L_0);
		bool L_2;
		L_2 = InterfaceFuncInvoker1< bool, UniqueStyleString_tE980AA033ABB00413A3139B42FF22750952DAECF >::Invoke(4, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 0), L_0, L_1);
		return L_2;
	}
}
// Method Definition Index: 10561
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlyCollection_1_CopyTo_m5BD44E836D148FD5F6DDA5EB27BBFB84A0A9EC00 (ReadOnlyCollection_1_tC00260BA5B1BEF55EBEF800DF50485F5D9806E4C* __this, UniqueStyleStringU5BU5D_t47384C749ED152804F196C5613B5145349958ECA* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		UniqueStyleStringU5BU5D_t47384C749ED152804F196C5613B5145349958ECA* L_1 = ___0_array;
		int32_t L_2 = ___1_index;
		NullCheck(L_0);
		InterfaceActionInvoker2< UniqueStyleStringU5BU5D_t47384C749ED152804F196C5613B5145349958ECA*, int32_t >::Invoke(5, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 0), L_0, L_1, L_2);
		return;
	}
}
// Method Definition Index: 10562
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ReadOnlyCollection_1_GetEnumerator_mFEA2F4DEEAD6A8FDFE656202181CE3CF666EC8AF (ReadOnlyCollection_1_tC00260BA5B1BEF55EBEF800DF50485F5D9806E4C* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 7), L_0);
		return L_1;
	}
}
// Method Definition Index: 10563
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_IndexOf_m81F9A69BFD18AC9F3559949FD82DE92A9082B650 (ReadOnlyCollection_1_tC00260BA5B1BEF55EBEF800DF50485F5D9806E4C* __this, UniqueStyleString_tE980AA033ABB00413A3139B42FF22750952DAECF ___0_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		UniqueStyleString_tE980AA033ABB00413A3139B42FF22750952DAECF L_1 = ___0_value;
		NullCheck(L_0);
		int32_t L_2;
		L_2 = InterfaceFuncInvoker1< int32_t, UniqueStyleString_tE980AA033ABB00413A3139B42FF22750952DAECF >::Invoke(2, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_0, L_1);
		return L_2;
	}
}
// Method Definition Index: 10564
// Method Definition Index: 10565
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UniqueStyleString_tE980AA033ABB00413A3139B42FF22750952DAECF ReadOnlyCollection_1_System_Collections_Generic_IListU3CTU3E_get_Item_mBAE1F5018D518498A5CDE410D00279693F504507 (ReadOnlyCollection_1_tC00260BA5B1BEF55EBEF800DF50485F5D9806E4C* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		int32_t L_1 = ___0_index;
		NullCheck(L_0);
		UniqueStyleString_tE980AA033ABB00413A3139B42FF22750952DAECF L_2;
		L_2 = InterfaceFuncInvoker1< UniqueStyleString_tE980AA033ABB00413A3139B42FF22750952DAECF, int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_0, L_1);
		return L_2;
	}
}
// Method Definition Index: 10566
// Method Definition Index: 10567
// Method Definition Index: 10568
// Method Definition Index: 10569
// Method Definition Index: 10570
// Method Definition Index: 10571
// Method Definition Index: 10572
// Method Definition Index: 10573
// Method Definition Index: 10574
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlyCollection_1_System_Collections_ICollection_CopyTo_m061939FA166E0B6A595E785F47C37432141B875E (ReadOnlyCollection_1_tC00260BA5B1BEF55EBEF800DF50485F5D9806E4C* __this, RuntimeArray* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(Type_t_StaticInit);
	//<source_info:<no-source>:1>
	UniqueStyleStringU5BU5D_t47384C749ED152804F196C5613B5145349958ECA* V_0 = NULL;
	Type_t* V_1 = NULL;
	Type_t* V_2 = NULL;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_3 = NULL;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		RuntimeArray* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC(3, NULL);
	}

IL_0009:
	{
		RuntimeArray* L_1 = ___0_array;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = il2cpp_codegen_array_get_rank(L_1);
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_0018;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA(7, NULL);
	}

IL_0018:
	{
		RuntimeArray* L_3 = ___0_array;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(L_3, 0, NULL);
		if (!L_4)
		{
			goto IL_0027;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA(6, NULL);
	}

IL_0027:
	{
		int32_t L_5 = ___1_index;
		if ((((int32_t)L_5) >= ((int32_t)0)))
		{
			goto IL_0030;
		}
	}
	{
		ThrowHelper_ThrowIndexArgumentOutOfRange_NeedNonNegNumException_m57AAB1E093F20BFC64BDDBD90FB5B592F582B82F(NULL);
	}

IL_0030:
	{
		RuntimeArray* L_6 = ___0_array;
		NullCheck(L_6);
		int32_t L_7;
		L_7 = il2cpp_codegen_array_get_length(L_6);
		int32_t L_8 = ___1_index;
		int32_t L_9;
		L_9 = ReadOnlyCollection_1_get_Count_mD76DB4E2C0BC4110F6110E68DA709BD4A503D2F5(__this, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 10));
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_7, L_8))) >= ((int32_t)L_9)))
		{
			goto IL_0046;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA(5, NULL);
	}

IL_0046:
	{
		RuntimeArray* L_10 = ___0_array;
		V_0 = ((UniqueStyleStringU5BU5D_t47384C749ED152804F196C5613B5145349958ECA*)IsInstSealed((RuntimeObject*)L_10, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 11)));
		UniqueStyleStringU5BU5D_t47384C749ED152804F196C5613B5145349958ECA* L_11 = V_0;
		if (!L_11)
		{
			goto IL_005e;
		}
	}
	{
		RuntimeObject* L_12 = __this->___list;
		UniqueStyleStringU5BU5D_t47384C749ED152804F196C5613B5145349958ECA* L_13 = V_0;
		int32_t L_14 = ___1_index;
		NullCheck(L_12);
		InterfaceActionInvoker2< UniqueStyleStringU5BU5D_t47384C749ED152804F196C5613B5145349958ECA*, int32_t >::Invoke(5, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 0), L_12, L_13, L_14);
		return;
	}

IL_005e:
	{
		RuntimeArray* L_15 = ___0_array;
		NullCheck(L_15);
		Type_t* L_16;
		L_16 = il2cpp_codegen_object_get_type(L_15);
		NullCheck(L_16);
		Type_t* L_17;
		L_17 = VirtualFuncInvoker0< Type_t* >::Invoke(46, L_16);
		V_1 = L_17;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_18 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(il2cpp_codegen_method_rgctx(method), 12)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_19;
		L_19 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_18, NULL);
		V_2 = L_19;
		Type_t* L_20 = V_1;
		Type_t* L_21 = V_2;
		NullCheck(L_20);
		bool L_22;
		L_22 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(22, L_20, L_21);
		if (L_22)
		{
			goto IL_008c;
		}
	}
	{
		Type_t* L_23 = V_2;
		Type_t* L_24 = V_1;
		NullCheck(L_23);
		bool L_25;
		L_25 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(22, L_23, L_24);
		if (L_25)
		{
			goto IL_008c;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58(NULL);
	}

IL_008c:
	{
		RuntimeArray* L_26 = ___0_array;
		V_3 = ((ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)IsInst((RuntimeObject*)L_26, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_27 = V_3;
		if (L_27)
		{
			goto IL_009b;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58(NULL);
	}

IL_009b:
	{
		RuntimeObject* L_28 = __this->___list;
		NullCheck(L_28);
		int32_t L_29;
		L_29 = InterfaceFuncInvoker0< int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 0), L_28);
		V_4 = L_29;
	}
	try
	{
		{
			V_5 = 0;
			goto IL_00cd_1;
		}

IL_00ad_1:
		{
			ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_30 = V_3;
			int32_t L_31 = ___1_index;
			int32_t L_32 = L_31;
			___1_index = ((int32_t)il2cpp_codegen_add(L_32, 1));
			RuntimeObject* L_33 = __this->___list;
			int32_t L_34 = V_5;
			NullCheck(L_33);
			UniqueStyleString_tE980AA033ABB00413A3139B42FF22750952DAECF L_35;
			L_35 = InterfaceFuncInvoker1< UniqueStyleString_tE980AA033ABB00413A3139B42FF22750952DAECF, int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_33, L_34);
			UniqueStyleString_tE980AA033ABB00413A3139B42FF22750952DAECF L_36 = L_35;
			RuntimeObject* L_37 = Box(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4), &L_36);
			NullCheck(L_30);
			ArrayElementTypeCheck (L_30, L_37);
			(L_30)->SetAt(static_cast<il2cpp_array_size_t>(L_32), (RuntimeObject*)L_37);
			int32_t L_38 = V_5;
			V_5 = ((int32_t)il2cpp_codegen_add(L_38, 1));
		}

IL_00cd_1:
		{
			int32_t L_39 = V_5;
			int32_t L_40 = V_4;
			if ((((int32_t)L_39) < ((int32_t)L_40)))
			{
				goto IL_00ad_1;
			}
		}
		{
			goto IL_00dd;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_00d5;
		}
		throw e;
	}

CATCH_00d5:
	{
		ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1* L_41 = ((ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1*)IL2CPP_GET_ACTIVE_EXCEPTION(ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1*));;
		ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58(NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_00dd;
	}

IL_00dd:
	{
		return;
	}
}
// Method Definition Index: 10575
// Method Definition Index: 10576
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ReadOnlyCollection_1_System_Collections_IList_get_Item_m9E738C6C68FEE7CA5B68CD8823191D29C6637C64 (ReadOnlyCollection_1_tC00260BA5B1BEF55EBEF800DF50485F5D9806E4C* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		int32_t L_1 = ___0_index;
		NullCheck(L_0);
		UniqueStyleString_tE980AA033ABB00413A3139B42FF22750952DAECF L_2;
		L_2 = InterfaceFuncInvoker1< UniqueStyleString_tE980AA033ABB00413A3139B42FF22750952DAECF, int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_0, L_1);
		UniqueStyleString_tE980AA033ABB00413A3139B42FF22750952DAECF L_3 = L_2;
		RuntimeObject* L_4 = Box(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4), &L_3);
		return L_4;
	}
}
// Method Definition Index: 10577
// Method Definition Index: 10578
// Method Definition Index: 10579
// Method Definition Index: 10580
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_IsCompatibleObject_m10AE9280CDD0885F6AE0CED9BC419A220F9EF82C (RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	//<source_info:<no-source>:1>
	UniqueStyleString_tE980AA033ABB00413A3139B42FF22750952DAECF V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		RuntimeObject* L_0 = ___0_value;
		if (((RuntimeObject*)IsInstSealed((RuntimeObject*)L_0, il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 4))))
		{
			goto IL_001f;
		}
	}
	{
		RuntimeObject* L_1 = ___0_value;
		if (L_1)
		{
			goto IL_001d;
		}
	}
	{
		il2cpp_codegen_initobj((&V_0), sizeof(UniqueStyleString_tE980AA033ABB00413A3139B42FF22750952DAECF));
		UniqueStyleString_tE980AA033ABB00413A3139B42FF22750952DAECF L_2 = V_0;
		return false;
	}

IL_001d:
	{
		return (bool)0;
	}

IL_001f:
	{
		return (bool)1;
	}
}
// Method Definition Index: 10581
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_System_Collections_IList_Contains_m084EAA212B97A7222F264DEC63915DDD84328DA8 (ReadOnlyCollection_1_tC00260BA5B1BEF55EBEF800DF50485F5D9806E4C* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = ___0_value;
		bool L_1;
		L_1 = ReadOnlyCollection_1_IsCompatibleObject_m10AE9280CDD0885F6AE0CED9BC419A220F9EF82C(L_0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 13));
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject* L_2 = ___0_value;
		bool L_3;
		L_3 = ReadOnlyCollection_1_Contains_mFACE0C82F64A6D849DD7A5A9D94592654A6D1011(__this, ((*(UniqueStyleString_tE980AA033ABB00413A3139B42FF22750952DAECF*)UnBox(L_2, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4)))), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 14));
		return L_3;
	}

IL_0015:
	{
		return (bool)0;
	}
}
// Method Definition Index: 10582
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_System_Collections_IList_IndexOf_m8D9242ADD660FEAEEEA8D586062AD3A41FEFA09F (ReadOnlyCollection_1_tC00260BA5B1BEF55EBEF800DF50485F5D9806E4C* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = ___0_value;
		bool L_1;
		L_1 = ReadOnlyCollection_1_IsCompatibleObject_m10AE9280CDD0885F6AE0CED9BC419A220F9EF82C(L_0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 13));
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject* L_2 = ___0_value;
		int32_t L_3;
		L_3 = ReadOnlyCollection_1_IndexOf_m81F9A69BFD18AC9F3559949FD82DE92A9082B650(__this, ((*(UniqueStyleString_tE980AA033ABB00413A3139B42FF22750952DAECF*)UnBox(L_2, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4)))), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 15));
		return L_3;
	}

IL_0015:
	{
		return (-1);
	}
}
// Method Definition Index: 10583
// Method Definition Index: 10584
// Method Definition Index: 10585
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 10557
// Method Definition Index: 10558
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_get_Count_m45F7511554AC7932A4E66143EF8772E661046099 (ReadOnlyCollection_1_tDF87C8E26187E1D6C24D2DD02E4716CC5B7ACC34* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = InterfaceFuncInvoker0< int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 0), L_0);
		return L_1;
	}
}
// Method Definition Index: 10559
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UsageHint_tFD7259AF9E91500CF1D0CE602394B40FD2397AB1 ReadOnlyCollection_1_get_Item_m6B52C68114487B2E28694C13C39FBB678E0B526A (ReadOnlyCollection_1_tDF87C8E26187E1D6C24D2DD02E4716CC5B7ACC34* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		int32_t L_1 = ___0_index;
		NullCheck(L_0);
		UsageHint_tFD7259AF9E91500CF1D0CE602394B40FD2397AB1 L_2;
		L_2 = InterfaceFuncInvoker1< UsageHint_tFD7259AF9E91500CF1D0CE602394B40FD2397AB1, int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_0, L_1);
		return L_2;
	}
}
// Method Definition Index: 10560
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_Contains_mDF0074DD4769F53942460C32C27BDB6A7E6E500C (ReadOnlyCollection_1_tDF87C8E26187E1D6C24D2DD02E4716CC5B7ACC34* __this, UsageHint_tFD7259AF9E91500CF1D0CE602394B40FD2397AB1 ___0_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		UsageHint_tFD7259AF9E91500CF1D0CE602394B40FD2397AB1 L_1 = ___0_value;
		NullCheck(L_0);
		bool L_2;
		L_2 = InterfaceFuncInvoker1< bool, UsageHint_tFD7259AF9E91500CF1D0CE602394B40FD2397AB1 >::Invoke(4, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 0), L_0, L_1);
		return L_2;
	}
}
// Method Definition Index: 10561
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlyCollection_1_CopyTo_m086D4A48AB4EB1ABAAAAB8365C524A2AF085504D (ReadOnlyCollection_1_tDF87C8E26187E1D6C24D2DD02E4716CC5B7ACC34* __this, UsageHintU5BU5D_t678E554916FB102DB4E2DC2C6CC0976DC145BF23* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		UsageHintU5BU5D_t678E554916FB102DB4E2DC2C6CC0976DC145BF23* L_1 = ___0_array;
		int32_t L_2 = ___1_index;
		NullCheck(L_0);
		InterfaceActionInvoker2< UsageHintU5BU5D_t678E554916FB102DB4E2DC2C6CC0976DC145BF23*, int32_t >::Invoke(5, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 0), L_0, L_1, L_2);
		return;
	}
}
// Method Definition Index: 10562
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ReadOnlyCollection_1_GetEnumerator_m5DDF50EA3EF76D3A6756EDA0A62E474202071945 (ReadOnlyCollection_1_tDF87C8E26187E1D6C24D2DD02E4716CC5B7ACC34* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 7), L_0);
		return L_1;
	}
}
// Method Definition Index: 10563
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_IndexOf_mD7BBE79F62B90B06912D44DAB47B960B9124DA69 (ReadOnlyCollection_1_tDF87C8E26187E1D6C24D2DD02E4716CC5B7ACC34* __this, UsageHint_tFD7259AF9E91500CF1D0CE602394B40FD2397AB1 ___0_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		UsageHint_tFD7259AF9E91500CF1D0CE602394B40FD2397AB1 L_1 = ___0_value;
		NullCheck(L_0);
		int32_t L_2;
		L_2 = InterfaceFuncInvoker1< int32_t, UsageHint_tFD7259AF9E91500CF1D0CE602394B40FD2397AB1 >::Invoke(2, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_0, L_1);
		return L_2;
	}
}
// Method Definition Index: 10564
// Method Definition Index: 10565
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UsageHint_tFD7259AF9E91500CF1D0CE602394B40FD2397AB1 ReadOnlyCollection_1_System_Collections_Generic_IListU3CTU3E_get_Item_m07F30FD8107B3DE2CE0B2FAA61255889F4E5A3FB (ReadOnlyCollection_1_tDF87C8E26187E1D6C24D2DD02E4716CC5B7ACC34* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		int32_t L_1 = ___0_index;
		NullCheck(L_0);
		UsageHint_tFD7259AF9E91500CF1D0CE602394B40FD2397AB1 L_2;
		L_2 = InterfaceFuncInvoker1< UsageHint_tFD7259AF9E91500CF1D0CE602394B40FD2397AB1, int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_0, L_1);
		return L_2;
	}
}
// Method Definition Index: 10566
// Method Definition Index: 10567
// Method Definition Index: 10568
// Method Definition Index: 10569
// Method Definition Index: 10570
// Method Definition Index: 10571
// Method Definition Index: 10572
// Method Definition Index: 10573
// Method Definition Index: 10574
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlyCollection_1_System_Collections_ICollection_CopyTo_mF5E97C9E5265075CA4AA5BE74608079E13000192 (ReadOnlyCollection_1_tDF87C8E26187E1D6C24D2DD02E4716CC5B7ACC34* __this, RuntimeArray* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(Type_t_StaticInit);
	//<source_info:<no-source>:1>
	UsageHintU5BU5D_t678E554916FB102DB4E2DC2C6CC0976DC145BF23* V_0 = NULL;
	Type_t* V_1 = NULL;
	Type_t* V_2 = NULL;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_3 = NULL;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		RuntimeArray* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC(3, NULL);
	}

IL_0009:
	{
		RuntimeArray* L_1 = ___0_array;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = il2cpp_codegen_array_get_rank(L_1);
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_0018;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA(7, NULL);
	}

IL_0018:
	{
		RuntimeArray* L_3 = ___0_array;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(L_3, 0, NULL);
		if (!L_4)
		{
			goto IL_0027;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA(6, NULL);
	}

IL_0027:
	{
		int32_t L_5 = ___1_index;
		if ((((int32_t)L_5) >= ((int32_t)0)))
		{
			goto IL_0030;
		}
	}
	{
		ThrowHelper_ThrowIndexArgumentOutOfRange_NeedNonNegNumException_m57AAB1E093F20BFC64BDDBD90FB5B592F582B82F(NULL);
	}

IL_0030:
	{
		RuntimeArray* L_6 = ___0_array;
		NullCheck(L_6);
		int32_t L_7;
		L_7 = il2cpp_codegen_array_get_length(L_6);
		int32_t L_8 = ___1_index;
		int32_t L_9;
		L_9 = ReadOnlyCollection_1_get_Count_m45F7511554AC7932A4E66143EF8772E661046099(__this, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 10));
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_7, L_8))) >= ((int32_t)L_9)))
		{
			goto IL_0046;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA(5, NULL);
	}

IL_0046:
	{
		RuntimeArray* L_10 = ___0_array;
		V_0 = ((UsageHintU5BU5D_t678E554916FB102DB4E2DC2C6CC0976DC145BF23*)IsInstSealed((RuntimeObject*)L_10, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 11)));
		UsageHintU5BU5D_t678E554916FB102DB4E2DC2C6CC0976DC145BF23* L_11 = V_0;
		if (!L_11)
		{
			goto IL_005e;
		}
	}
	{
		RuntimeObject* L_12 = __this->___list;
		UsageHintU5BU5D_t678E554916FB102DB4E2DC2C6CC0976DC145BF23* L_13 = V_0;
		int32_t L_14 = ___1_index;
		NullCheck(L_12);
		InterfaceActionInvoker2< UsageHintU5BU5D_t678E554916FB102DB4E2DC2C6CC0976DC145BF23*, int32_t >::Invoke(5, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 0), L_12, L_13, L_14);
		return;
	}

IL_005e:
	{
		RuntimeArray* L_15 = ___0_array;
		NullCheck(L_15);
		Type_t* L_16;
		L_16 = il2cpp_codegen_object_get_type(L_15);
		NullCheck(L_16);
		Type_t* L_17;
		L_17 = VirtualFuncInvoker0< Type_t* >::Invoke(46, L_16);
		V_1 = L_17;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_18 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(il2cpp_codegen_method_rgctx(method), 12)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_19;
		L_19 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_18, NULL);
		V_2 = L_19;
		Type_t* L_20 = V_1;
		Type_t* L_21 = V_2;
		NullCheck(L_20);
		bool L_22;
		L_22 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(22, L_20, L_21);
		if (L_22)
		{
			goto IL_008c;
		}
	}
	{
		Type_t* L_23 = V_2;
		Type_t* L_24 = V_1;
		NullCheck(L_23);
		bool L_25;
		L_25 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(22, L_23, L_24);
		if (L_25)
		{
			goto IL_008c;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58(NULL);
	}

IL_008c:
	{
		RuntimeArray* L_26 = ___0_array;
		V_3 = ((ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)IsInst((RuntimeObject*)L_26, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_27 = V_3;
		if (L_27)
		{
			goto IL_009b;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58(NULL);
	}

IL_009b:
	{
		RuntimeObject* L_28 = __this->___list;
		NullCheck(L_28);
		int32_t L_29;
		L_29 = InterfaceFuncInvoker0< int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 0), L_28);
		V_4 = L_29;
	}
	try
	{
		{
			V_5 = 0;
			goto IL_00cd_1;
		}

IL_00ad_1:
		{
			ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_30 = V_3;
			int32_t L_31 = ___1_index;
			int32_t L_32 = L_31;
			___1_index = ((int32_t)il2cpp_codegen_add(L_32, 1));
			RuntimeObject* L_33 = __this->___list;
			int32_t L_34 = V_5;
			NullCheck(L_33);
			UsageHint_tFD7259AF9E91500CF1D0CE602394B40FD2397AB1 L_35;
			L_35 = InterfaceFuncInvoker1< UsageHint_tFD7259AF9E91500CF1D0CE602394B40FD2397AB1, int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_33, L_34);
			UsageHint_tFD7259AF9E91500CF1D0CE602394B40FD2397AB1 L_36 = L_35;
			RuntimeObject* L_37 = Box(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4), &L_36);
			NullCheck(L_30);
			ArrayElementTypeCheck (L_30, L_37);
			(L_30)->SetAt(static_cast<il2cpp_array_size_t>(L_32), (RuntimeObject*)L_37);
			int32_t L_38 = V_5;
			V_5 = ((int32_t)il2cpp_codegen_add(L_38, 1));
		}

IL_00cd_1:
		{
			int32_t L_39 = V_5;
			int32_t L_40 = V_4;
			if ((((int32_t)L_39) < ((int32_t)L_40)))
			{
				goto IL_00ad_1;
			}
		}
		{
			goto IL_00dd;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_00d5;
		}
		throw e;
	}

CATCH_00d5:
	{
		ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1* L_41 = ((ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1*)IL2CPP_GET_ACTIVE_EXCEPTION(ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1*));;
		ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58(NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_00dd;
	}

IL_00dd:
	{
		return;
	}
}
// Method Definition Index: 10575
// Method Definition Index: 10576
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ReadOnlyCollection_1_System_Collections_IList_get_Item_mBA12C29059E121B7AE522851685CA09462B0BB2B (ReadOnlyCollection_1_tDF87C8E26187E1D6C24D2DD02E4716CC5B7ACC34* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		int32_t L_1 = ___0_index;
		NullCheck(L_0);
		UsageHint_tFD7259AF9E91500CF1D0CE602394B40FD2397AB1 L_2;
		L_2 = InterfaceFuncInvoker1< UsageHint_tFD7259AF9E91500CF1D0CE602394B40FD2397AB1, int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_0, L_1);
		UsageHint_tFD7259AF9E91500CF1D0CE602394B40FD2397AB1 L_3 = L_2;
		RuntimeObject* L_4 = Box(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4), &L_3);
		return L_4;
	}
}
// Method Definition Index: 10577
// Method Definition Index: 10578
// Method Definition Index: 10579
// Method Definition Index: 10580
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_IsCompatibleObject_m077B2F36B247C4636FFD0370E89515F37F912A64 (RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	//<source_info:<no-source>:1>
	UsageHint_tFD7259AF9E91500CF1D0CE602394B40FD2397AB1 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		RuntimeObject* L_0 = ___0_value;
		if (((RuntimeObject*)IsInstSealed((RuntimeObject*)L_0, il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 4))))
		{
			goto IL_001f;
		}
	}
	{
		RuntimeObject* L_1 = ___0_value;
		if (L_1)
		{
			goto IL_001d;
		}
	}
	{
		il2cpp_codegen_initobj((&V_0), sizeof(UsageHint_tFD7259AF9E91500CF1D0CE602394B40FD2397AB1));
		UsageHint_tFD7259AF9E91500CF1D0CE602394B40FD2397AB1 L_2 = V_0;
		return false;
	}

IL_001d:
	{
		return (bool)0;
	}

IL_001f:
	{
		return (bool)1;
	}
}
// Method Definition Index: 10581
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_System_Collections_IList_Contains_m406478CC916FF7A9F15BE609364697C3296BB185 (ReadOnlyCollection_1_tDF87C8E26187E1D6C24D2DD02E4716CC5B7ACC34* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = ___0_value;
		bool L_1;
		L_1 = ReadOnlyCollection_1_IsCompatibleObject_m077B2F36B247C4636FFD0370E89515F37F912A64(L_0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 13));
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject* L_2 = ___0_value;
		bool L_3;
		L_3 = ReadOnlyCollection_1_Contains_mDF0074DD4769F53942460C32C27BDB6A7E6E500C(__this, ((*(UsageHint_tFD7259AF9E91500CF1D0CE602394B40FD2397AB1*)UnBox(L_2, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4)))), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 14));
		return L_3;
	}

IL_0015:
	{
		return (bool)0;
	}
}
// Method Definition Index: 10582
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_System_Collections_IList_IndexOf_mF6168C7F19DCAE3C0EC4B2E547061A347B2BDABC (ReadOnlyCollection_1_tDF87C8E26187E1D6C24D2DD02E4716CC5B7ACC34* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = ___0_value;
		bool L_1;
		L_1 = ReadOnlyCollection_1_IsCompatibleObject_m077B2F36B247C4636FFD0370E89515F37F912A64(L_0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 13));
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject* L_2 = ___0_value;
		int32_t L_3;
		L_3 = ReadOnlyCollection_1_IndexOf_mD7BBE79F62B90B06912D44DAB47B960B9124DA69(__this, ((*(UsageHint_tFD7259AF9E91500CF1D0CE602394B40FD2397AB1*)UnBox(L_2, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4)))), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 15));
		return L_3;
	}

IL_0015:
	{
		return (-1);
	}
}
// Method Definition Index: 10583
// Method Definition Index: 10584
// Method Definition Index: 10585
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 10557
// Method Definition Index: 10558
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_get_Count_m531C72497E9FEB4E99E08837AF225D594D2ED741 (ReadOnlyCollection_1_tF64E6ECDE29B9EE2538F5A045045DF7774BB8466* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = InterfaceFuncInvoker0< int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 0), L_0);
		return L_1;
	}
}
// Method Definition Index: 10559
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UxmlNamespaceDefinition_t6B70CA125A4C1D5F74F1C901A6F4F72637F6621B ReadOnlyCollection_1_get_Item_m72C066EC0F446F35D438B7F42003B103CCDC3D76 (ReadOnlyCollection_1_tF64E6ECDE29B9EE2538F5A045045DF7774BB8466* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		int32_t L_1 = ___0_index;
		NullCheck(L_0);
		UxmlNamespaceDefinition_t6B70CA125A4C1D5F74F1C901A6F4F72637F6621B L_2;
		L_2 = InterfaceFuncInvoker1< UxmlNamespaceDefinition_t6B70CA125A4C1D5F74F1C901A6F4F72637F6621B, int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_0, L_1);
		return L_2;
	}
}
// Method Definition Index: 10560
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_Contains_mFDCA34C8B2D2B075B2F75C43319A5FB2F06EBAB7 (ReadOnlyCollection_1_tF64E6ECDE29B9EE2538F5A045045DF7774BB8466* __this, UxmlNamespaceDefinition_t6B70CA125A4C1D5F74F1C901A6F4F72637F6621B ___0_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		UxmlNamespaceDefinition_t6B70CA125A4C1D5F74F1C901A6F4F72637F6621B L_1 = ___0_value;
		NullCheck(L_0);
		bool L_2;
		L_2 = InterfaceFuncInvoker1< bool, UxmlNamespaceDefinition_t6B70CA125A4C1D5F74F1C901A6F4F72637F6621B >::Invoke(4, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 0), L_0, L_1);
		return L_2;
	}
}
// Method Definition Index: 10561
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlyCollection_1_CopyTo_m94EF2104EDDD2AC981094E0993F6749DD7D83488 (ReadOnlyCollection_1_tF64E6ECDE29B9EE2538F5A045045DF7774BB8466* __this, UxmlNamespaceDefinitionU5BU5D_t28B781ECD62CAF3666F6920255948A5FA6B3D319* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		UxmlNamespaceDefinitionU5BU5D_t28B781ECD62CAF3666F6920255948A5FA6B3D319* L_1 = ___0_array;
		int32_t L_2 = ___1_index;
		NullCheck(L_0);
		InterfaceActionInvoker2< UxmlNamespaceDefinitionU5BU5D_t28B781ECD62CAF3666F6920255948A5FA6B3D319*, int32_t >::Invoke(5, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 0), L_0, L_1, L_2);
		return;
	}
}
// Method Definition Index: 10562
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ReadOnlyCollection_1_GetEnumerator_m2EEAA8111A49AD9755B31376B8A1D3B091BDD1F9 (ReadOnlyCollection_1_tF64E6ECDE29B9EE2538F5A045045DF7774BB8466* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 7), L_0);
		return L_1;
	}
}
// Method Definition Index: 10563
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_IndexOf_m3C139BA080D9F8D44C2E3F09CDF4AF7AB91BCD06 (ReadOnlyCollection_1_tF64E6ECDE29B9EE2538F5A045045DF7774BB8466* __this, UxmlNamespaceDefinition_t6B70CA125A4C1D5F74F1C901A6F4F72637F6621B ___0_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		UxmlNamespaceDefinition_t6B70CA125A4C1D5F74F1C901A6F4F72637F6621B L_1 = ___0_value;
		NullCheck(L_0);
		int32_t L_2;
		L_2 = InterfaceFuncInvoker1< int32_t, UxmlNamespaceDefinition_t6B70CA125A4C1D5F74F1C901A6F4F72637F6621B >::Invoke(2, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_0, L_1);
		return L_2;
	}
}
// Method Definition Index: 10564
// Method Definition Index: 10565
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UxmlNamespaceDefinition_t6B70CA125A4C1D5F74F1C901A6F4F72637F6621B ReadOnlyCollection_1_System_Collections_Generic_IListU3CTU3E_get_Item_mEF92991DBDF6D6E1025E398A08F1A9DF3D9A6B2D (ReadOnlyCollection_1_tF64E6ECDE29B9EE2538F5A045045DF7774BB8466* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		int32_t L_1 = ___0_index;
		NullCheck(L_0);
		UxmlNamespaceDefinition_t6B70CA125A4C1D5F74F1C901A6F4F72637F6621B L_2;
		L_2 = InterfaceFuncInvoker1< UxmlNamespaceDefinition_t6B70CA125A4C1D5F74F1C901A6F4F72637F6621B, int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_0, L_1);
		return L_2;
	}
}
// Method Definition Index: 10566
// Method Definition Index: 10567
// Method Definition Index: 10568
// Method Definition Index: 10569
// Method Definition Index: 10570
// Method Definition Index: 10571
// Method Definition Index: 10572
// Method Definition Index: 10573
// Method Definition Index: 10574
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlyCollection_1_System_Collections_ICollection_CopyTo_m04ED134516CF50219B4255989D9103EE52087D47 (ReadOnlyCollection_1_tF64E6ECDE29B9EE2538F5A045045DF7774BB8466* __this, RuntimeArray* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(Type_t_StaticInit);
	//<source_info:<no-source>:1>
	UxmlNamespaceDefinitionU5BU5D_t28B781ECD62CAF3666F6920255948A5FA6B3D319* V_0 = NULL;
	Type_t* V_1 = NULL;
	Type_t* V_2 = NULL;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_3 = NULL;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		RuntimeArray* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC(3, NULL);
	}

IL_0009:
	{
		RuntimeArray* L_1 = ___0_array;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = il2cpp_codegen_array_get_rank(L_1);
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_0018;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA(7, NULL);
	}

IL_0018:
	{
		RuntimeArray* L_3 = ___0_array;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(L_3, 0, NULL);
		if (!L_4)
		{
			goto IL_0027;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA(6, NULL);
	}

IL_0027:
	{
		int32_t L_5 = ___1_index;
		if ((((int32_t)L_5) >= ((int32_t)0)))
		{
			goto IL_0030;
		}
	}
	{
		ThrowHelper_ThrowIndexArgumentOutOfRange_NeedNonNegNumException_m57AAB1E093F20BFC64BDDBD90FB5B592F582B82F(NULL);
	}

IL_0030:
	{
		RuntimeArray* L_6 = ___0_array;
		NullCheck(L_6);
		int32_t L_7;
		L_7 = il2cpp_codegen_array_get_length(L_6);
		int32_t L_8 = ___1_index;
		int32_t L_9;
		L_9 = ReadOnlyCollection_1_get_Count_m531C72497E9FEB4E99E08837AF225D594D2ED741(__this, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 10));
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_7, L_8))) >= ((int32_t)L_9)))
		{
			goto IL_0046;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA(5, NULL);
	}

IL_0046:
	{
		RuntimeArray* L_10 = ___0_array;
		V_0 = ((UxmlNamespaceDefinitionU5BU5D_t28B781ECD62CAF3666F6920255948A5FA6B3D319*)IsInstSealed((RuntimeObject*)L_10, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 11)));
		UxmlNamespaceDefinitionU5BU5D_t28B781ECD62CAF3666F6920255948A5FA6B3D319* L_11 = V_0;
		if (!L_11)
		{
			goto IL_005e;
		}
	}
	{
		RuntimeObject* L_12 = __this->___list;
		UxmlNamespaceDefinitionU5BU5D_t28B781ECD62CAF3666F6920255948A5FA6B3D319* L_13 = V_0;
		int32_t L_14 = ___1_index;
		NullCheck(L_12);
		InterfaceActionInvoker2< UxmlNamespaceDefinitionU5BU5D_t28B781ECD62CAF3666F6920255948A5FA6B3D319*, int32_t >::Invoke(5, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 0), L_12, L_13, L_14);
		return;
	}

IL_005e:
	{
		RuntimeArray* L_15 = ___0_array;
		NullCheck(L_15);
		Type_t* L_16;
		L_16 = il2cpp_codegen_object_get_type(L_15);
		NullCheck(L_16);
		Type_t* L_17;
		L_17 = VirtualFuncInvoker0< Type_t* >::Invoke(46, L_16);
		V_1 = L_17;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_18 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(il2cpp_codegen_method_rgctx(method), 12)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_19;
		L_19 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_18, NULL);
		V_2 = L_19;
		Type_t* L_20 = V_1;
		Type_t* L_21 = V_2;
		NullCheck(L_20);
		bool L_22;
		L_22 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(22, L_20, L_21);
		if (L_22)
		{
			goto IL_008c;
		}
	}
	{
		Type_t* L_23 = V_2;
		Type_t* L_24 = V_1;
		NullCheck(L_23);
		bool L_25;
		L_25 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(22, L_23, L_24);
		if (L_25)
		{
			goto IL_008c;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58(NULL);
	}

IL_008c:
	{
		RuntimeArray* L_26 = ___0_array;
		V_3 = ((ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)IsInst((RuntimeObject*)L_26, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_27 = V_3;
		if (L_27)
		{
			goto IL_009b;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58(NULL);
	}

IL_009b:
	{
		RuntimeObject* L_28 = __this->___list;
		NullCheck(L_28);
		int32_t L_29;
		L_29 = InterfaceFuncInvoker0< int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 0), L_28);
		V_4 = L_29;
	}
	try
	{
		{
			V_5 = 0;
			goto IL_00cd_1;
		}

IL_00ad_1:
		{
			ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_30 = V_3;
			int32_t L_31 = ___1_index;
			int32_t L_32 = L_31;
			___1_index = ((int32_t)il2cpp_codegen_add(L_32, 1));
			RuntimeObject* L_33 = __this->___list;
			int32_t L_34 = V_5;
			NullCheck(L_33);
			UxmlNamespaceDefinition_t6B70CA125A4C1D5F74F1C901A6F4F72637F6621B L_35;
			L_35 = InterfaceFuncInvoker1< UxmlNamespaceDefinition_t6B70CA125A4C1D5F74F1C901A6F4F72637F6621B, int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_33, L_34);
			UxmlNamespaceDefinition_t6B70CA125A4C1D5F74F1C901A6F4F72637F6621B L_36 = L_35;
			RuntimeObject* L_37 = Box(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4), &L_36);
			NullCheck(L_30);
			ArrayElementTypeCheck (L_30, L_37);
			(L_30)->SetAt(static_cast<il2cpp_array_size_t>(L_32), (RuntimeObject*)L_37);
			int32_t L_38 = V_5;
			V_5 = ((int32_t)il2cpp_codegen_add(L_38, 1));
		}

IL_00cd_1:
		{
			int32_t L_39 = V_5;
			int32_t L_40 = V_4;
			if ((((int32_t)L_39) < ((int32_t)L_40)))
			{
				goto IL_00ad_1;
			}
		}
		{
			goto IL_00dd;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_00d5;
		}
		throw e;
	}

CATCH_00d5:
	{
		ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1* L_41 = ((ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1*)IL2CPP_GET_ACTIVE_EXCEPTION(ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1*));;
		ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58(NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_00dd;
	}

IL_00dd:
	{
		return;
	}
}
// Method Definition Index: 10575
// Method Definition Index: 10576
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ReadOnlyCollection_1_System_Collections_IList_get_Item_mBC5B25525FAE775CE8A9B7730812329A1F6CDFC8 (ReadOnlyCollection_1_tF64E6ECDE29B9EE2538F5A045045DF7774BB8466* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		int32_t L_1 = ___0_index;
		NullCheck(L_0);
		UxmlNamespaceDefinition_t6B70CA125A4C1D5F74F1C901A6F4F72637F6621B L_2;
		L_2 = InterfaceFuncInvoker1< UxmlNamespaceDefinition_t6B70CA125A4C1D5F74F1C901A6F4F72637F6621B, int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_0, L_1);
		UxmlNamespaceDefinition_t6B70CA125A4C1D5F74F1C901A6F4F72637F6621B L_3 = L_2;
		RuntimeObject* L_4 = Box(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4), &L_3);
		return L_4;
	}
}
// Method Definition Index: 10577
// Method Definition Index: 10578
// Method Definition Index: 10579
// Method Definition Index: 10580
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_IsCompatibleObject_mE21DFAB52F1CF90200F86CA74489FE40660D0FA5 (RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	//<source_info:<no-source>:1>
	UxmlNamespaceDefinition_t6B70CA125A4C1D5F74F1C901A6F4F72637F6621B V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		RuntimeObject* L_0 = ___0_value;
		if (((RuntimeObject*)IsInstSealed((RuntimeObject*)L_0, il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 4))))
		{
			goto IL_001f;
		}
	}
	{
		RuntimeObject* L_1 = ___0_value;
		if (L_1)
		{
			goto IL_001d;
		}
	}
	{
		il2cpp_codegen_initobj((&V_0), sizeof(UxmlNamespaceDefinition_t6B70CA125A4C1D5F74F1C901A6F4F72637F6621B));
		UxmlNamespaceDefinition_t6B70CA125A4C1D5F74F1C901A6F4F72637F6621B L_2 = V_0;
		return false;
	}

IL_001d:
	{
		return (bool)0;
	}

IL_001f:
	{
		return (bool)1;
	}
}
// Method Definition Index: 10581
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_System_Collections_IList_Contains_m9453D1C22FED83A5C3A227B67B81DD714B532C83 (ReadOnlyCollection_1_tF64E6ECDE29B9EE2538F5A045045DF7774BB8466* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = ___0_value;
		bool L_1;
		L_1 = ReadOnlyCollection_1_IsCompatibleObject_mE21DFAB52F1CF90200F86CA74489FE40660D0FA5(L_0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 13));
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject* L_2 = ___0_value;
		bool L_3;
		L_3 = ReadOnlyCollection_1_Contains_mFDCA34C8B2D2B075B2F75C43319A5FB2F06EBAB7(__this, ((*(UxmlNamespaceDefinition_t6B70CA125A4C1D5F74F1C901A6F4F72637F6621B*)UnBox(L_2, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4)))), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 14));
		return L_3;
	}

IL_0015:
	{
		return (bool)0;
	}
}
// Method Definition Index: 10582
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_System_Collections_IList_IndexOf_m49840A0E3A24100E7C70A1610DFCB315B71DD20E (ReadOnlyCollection_1_tF64E6ECDE29B9EE2538F5A045045DF7774BB8466* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = ___0_value;
		bool L_1;
		L_1 = ReadOnlyCollection_1_IsCompatibleObject_mE21DFAB52F1CF90200F86CA74489FE40660D0FA5(L_0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 13));
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject* L_2 = ___0_value;
		int32_t L_3;
		L_3 = ReadOnlyCollection_1_IndexOf_m3C139BA080D9F8D44C2E3F09CDF4AF7AB91BCD06(__this, ((*(UxmlNamespaceDefinition_t6B70CA125A4C1D5F74F1C901A6F4F72637F6621B*)UnBox(L_2, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4)))), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 15));
		return L_3;
	}

IL_0015:
	{
		return (-1);
	}
}
// Method Definition Index: 10583
// Method Definition Index: 10584
// Method Definition Index: 10585
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 10557
// Method Definition Index: 10558
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_get_Count_mBFE65873D7F80153840E0C74D836129E3847B9A6 (ReadOnlyCollection_1_tAE114E8C18E180A65629D9DF0D8911860274551C* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = InterfaceFuncInvoker0< int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 0), L_0);
		return L_1;
	}
}
// Method Definition Index: 10559
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UxmlProperty_t98965D0AC619F23715A51F072A885C7F07F15FE4 ReadOnlyCollection_1_get_Item_m5141F5B40B8AD635E38FCE8F4107B4B9C587DCC9 (ReadOnlyCollection_1_tAE114E8C18E180A65629D9DF0D8911860274551C* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		int32_t L_1 = ___0_index;
		NullCheck(L_0);
		UxmlProperty_t98965D0AC619F23715A51F072A885C7F07F15FE4 L_2;
		L_2 = InterfaceFuncInvoker1< UxmlProperty_t98965D0AC619F23715A51F072A885C7F07F15FE4, int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_0, L_1);
		return L_2;
	}
}
// Method Definition Index: 10560
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_Contains_m78939760646E138755B3431CC00567C373C50303 (ReadOnlyCollection_1_tAE114E8C18E180A65629D9DF0D8911860274551C* __this, UxmlProperty_t98965D0AC619F23715A51F072A885C7F07F15FE4 ___0_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		UxmlProperty_t98965D0AC619F23715A51F072A885C7F07F15FE4 L_1 = ___0_value;
		NullCheck(L_0);
		bool L_2;
		L_2 = InterfaceFuncInvoker1< bool, UxmlProperty_t98965D0AC619F23715A51F072A885C7F07F15FE4 >::Invoke(4, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 0), L_0, L_1);
		return L_2;
	}
}
// Method Definition Index: 10561
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlyCollection_1_CopyTo_mFEC181B83DC42448674475FD9EC56489DDBA548B (ReadOnlyCollection_1_tAE114E8C18E180A65629D9DF0D8911860274551C* __this, UxmlPropertyU5BU5D_tD5BDB1BE0719FB862DB6B3E0CB35022536021BCB* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		UxmlPropertyU5BU5D_tD5BDB1BE0719FB862DB6B3E0CB35022536021BCB* L_1 = ___0_array;
		int32_t L_2 = ___1_index;
		NullCheck(L_0);
		InterfaceActionInvoker2< UxmlPropertyU5BU5D_tD5BDB1BE0719FB862DB6B3E0CB35022536021BCB*, int32_t >::Invoke(5, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 0), L_0, L_1, L_2);
		return;
	}
}
// Method Definition Index: 10562
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ReadOnlyCollection_1_GetEnumerator_m7F526D3E32905511C90336FA3DCB0F94E23473FA (ReadOnlyCollection_1_tAE114E8C18E180A65629D9DF0D8911860274551C* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 7), L_0);
		return L_1;
	}
}
// Method Definition Index: 10563
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_IndexOf_m7523B4A1B54F01EEC15D4503072D2D24F0941740 (ReadOnlyCollection_1_tAE114E8C18E180A65629D9DF0D8911860274551C* __this, UxmlProperty_t98965D0AC619F23715A51F072A885C7F07F15FE4 ___0_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		UxmlProperty_t98965D0AC619F23715A51F072A885C7F07F15FE4 L_1 = ___0_value;
		NullCheck(L_0);
		int32_t L_2;
		L_2 = InterfaceFuncInvoker1< int32_t, UxmlProperty_t98965D0AC619F23715A51F072A885C7F07F15FE4 >::Invoke(2, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_0, L_1);
		return L_2;
	}
}
// Method Definition Index: 10564
// Method Definition Index: 10565
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UxmlProperty_t98965D0AC619F23715A51F072A885C7F07F15FE4 ReadOnlyCollection_1_System_Collections_Generic_IListU3CTU3E_get_Item_mE3643DC87502EC79E4E0FA79FC31344D5749DFDF (ReadOnlyCollection_1_tAE114E8C18E180A65629D9DF0D8911860274551C* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		int32_t L_1 = ___0_index;
		NullCheck(L_0);
		UxmlProperty_t98965D0AC619F23715A51F072A885C7F07F15FE4 L_2;
		L_2 = InterfaceFuncInvoker1< UxmlProperty_t98965D0AC619F23715A51F072A885C7F07F15FE4, int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_0, L_1);
		return L_2;
	}
}
// Method Definition Index: 10566
// Method Definition Index: 10567
// Method Definition Index: 10568
// Method Definition Index: 10569
// Method Definition Index: 10570
// Method Definition Index: 10571
// Method Definition Index: 10572
// Method Definition Index: 10573
// Method Definition Index: 10574
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlyCollection_1_System_Collections_ICollection_CopyTo_m48A9B9AF0FF2CA52AFE2E0FC6E1DB5FC83557157 (ReadOnlyCollection_1_tAE114E8C18E180A65629D9DF0D8911860274551C* __this, RuntimeArray* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(Type_t_StaticInit);
	//<source_info:<no-source>:1>
	UxmlPropertyU5BU5D_tD5BDB1BE0719FB862DB6B3E0CB35022536021BCB* V_0 = NULL;
	Type_t* V_1 = NULL;
	Type_t* V_2 = NULL;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_3 = NULL;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		RuntimeArray* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC(3, NULL);
	}

IL_0009:
	{
		RuntimeArray* L_1 = ___0_array;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = il2cpp_codegen_array_get_rank(L_1);
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_0018;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA(7, NULL);
	}

IL_0018:
	{
		RuntimeArray* L_3 = ___0_array;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(L_3, 0, NULL);
		if (!L_4)
		{
			goto IL_0027;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA(6, NULL);
	}

IL_0027:
	{
		int32_t L_5 = ___1_index;
		if ((((int32_t)L_5) >= ((int32_t)0)))
		{
			goto IL_0030;
		}
	}
	{
		ThrowHelper_ThrowIndexArgumentOutOfRange_NeedNonNegNumException_m57AAB1E093F20BFC64BDDBD90FB5B592F582B82F(NULL);
	}

IL_0030:
	{
		RuntimeArray* L_6 = ___0_array;
		NullCheck(L_6);
		int32_t L_7;
		L_7 = il2cpp_codegen_array_get_length(L_6);
		int32_t L_8 = ___1_index;
		int32_t L_9;
		L_9 = ReadOnlyCollection_1_get_Count_mBFE65873D7F80153840E0C74D836129E3847B9A6(__this, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 10));
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_7, L_8))) >= ((int32_t)L_9)))
		{
			goto IL_0046;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA(5, NULL);
	}

IL_0046:
	{
		RuntimeArray* L_10 = ___0_array;
		V_0 = ((UxmlPropertyU5BU5D_tD5BDB1BE0719FB862DB6B3E0CB35022536021BCB*)IsInstSealed((RuntimeObject*)L_10, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 11)));
		UxmlPropertyU5BU5D_tD5BDB1BE0719FB862DB6B3E0CB35022536021BCB* L_11 = V_0;
		if (!L_11)
		{
			goto IL_005e;
		}
	}
	{
		RuntimeObject* L_12 = __this->___list;
		UxmlPropertyU5BU5D_tD5BDB1BE0719FB862DB6B3E0CB35022536021BCB* L_13 = V_0;
		int32_t L_14 = ___1_index;
		NullCheck(L_12);
		InterfaceActionInvoker2< UxmlPropertyU5BU5D_tD5BDB1BE0719FB862DB6B3E0CB35022536021BCB*, int32_t >::Invoke(5, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 0), L_12, L_13, L_14);
		return;
	}

IL_005e:
	{
		RuntimeArray* L_15 = ___0_array;
		NullCheck(L_15);
		Type_t* L_16;
		L_16 = il2cpp_codegen_object_get_type(L_15);
		NullCheck(L_16);
		Type_t* L_17;
		L_17 = VirtualFuncInvoker0< Type_t* >::Invoke(46, L_16);
		V_1 = L_17;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_18 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(il2cpp_codegen_method_rgctx(method), 12)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_19;
		L_19 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_18, NULL);
		V_2 = L_19;
		Type_t* L_20 = V_1;
		Type_t* L_21 = V_2;
		NullCheck(L_20);
		bool L_22;
		L_22 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(22, L_20, L_21);
		if (L_22)
		{
			goto IL_008c;
		}
	}
	{
		Type_t* L_23 = V_2;
		Type_t* L_24 = V_1;
		NullCheck(L_23);
		bool L_25;
		L_25 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(22, L_23, L_24);
		if (L_25)
		{
			goto IL_008c;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58(NULL);
	}

IL_008c:
	{
		RuntimeArray* L_26 = ___0_array;
		V_3 = ((ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)IsInst((RuntimeObject*)L_26, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_27 = V_3;
		if (L_27)
		{
			goto IL_009b;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58(NULL);
	}

IL_009b:
	{
		RuntimeObject* L_28 = __this->___list;
		NullCheck(L_28);
		int32_t L_29;
		L_29 = InterfaceFuncInvoker0< int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 0), L_28);
		V_4 = L_29;
	}
	try
	{
		{
			V_5 = 0;
			goto IL_00cd_1;
		}

IL_00ad_1:
		{
			ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_30 = V_3;
			int32_t L_31 = ___1_index;
			int32_t L_32 = L_31;
			___1_index = ((int32_t)il2cpp_codegen_add(L_32, 1));
			RuntimeObject* L_33 = __this->___list;
			int32_t L_34 = V_5;
			NullCheck(L_33);
			UxmlProperty_t98965D0AC619F23715A51F072A885C7F07F15FE4 L_35;
			L_35 = InterfaceFuncInvoker1< UxmlProperty_t98965D0AC619F23715A51F072A885C7F07F15FE4, int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_33, L_34);
			UxmlProperty_t98965D0AC619F23715A51F072A885C7F07F15FE4 L_36 = L_35;
			RuntimeObject* L_37 = Box(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4), &L_36);
			NullCheck(L_30);
			ArrayElementTypeCheck (L_30, L_37);
			(L_30)->SetAt(static_cast<il2cpp_array_size_t>(L_32), (RuntimeObject*)L_37);
			int32_t L_38 = V_5;
			V_5 = ((int32_t)il2cpp_codegen_add(L_38, 1));
		}

IL_00cd_1:
		{
			int32_t L_39 = V_5;
			int32_t L_40 = V_4;
			if ((((int32_t)L_39) < ((int32_t)L_40)))
			{
				goto IL_00ad_1;
			}
		}
		{
			goto IL_00dd;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_00d5;
		}
		throw e;
	}

CATCH_00d5:
	{
		ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1* L_41 = ((ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1*)IL2CPP_GET_ACTIVE_EXCEPTION(ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1*));;
		ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58(NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_00dd;
	}

IL_00dd:
	{
		return;
	}
}
// Method Definition Index: 10575
// Method Definition Index: 10576
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ReadOnlyCollection_1_System_Collections_IList_get_Item_mD4F9B500BC80A21201CC7C8DBA796D1B64EA1DDA (ReadOnlyCollection_1_tAE114E8C18E180A65629D9DF0D8911860274551C* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		int32_t L_1 = ___0_index;
		NullCheck(L_0);
		UxmlProperty_t98965D0AC619F23715A51F072A885C7F07F15FE4 L_2;
		L_2 = InterfaceFuncInvoker1< UxmlProperty_t98965D0AC619F23715A51F072A885C7F07F15FE4, int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_0, L_1);
		UxmlProperty_t98965D0AC619F23715A51F072A885C7F07F15FE4 L_3 = L_2;
		RuntimeObject* L_4 = Box(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4), &L_3);
		return L_4;
	}
}
// Method Definition Index: 10577
// Method Definition Index: 10578
// Method Definition Index: 10579
// Method Definition Index: 10580
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_IsCompatibleObject_m7575D658F2FFB26CF20770C4D9570925DCAE4CBC (RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	//<source_info:<no-source>:1>
	UxmlProperty_t98965D0AC619F23715A51F072A885C7F07F15FE4 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		RuntimeObject* L_0 = ___0_value;
		if (((RuntimeObject*)IsInstSealed((RuntimeObject*)L_0, il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 4))))
		{
			goto IL_001f;
		}
	}
	{
		RuntimeObject* L_1 = ___0_value;
		if (L_1)
		{
			goto IL_001d;
		}
	}
	{
		il2cpp_codegen_initobj((&V_0), sizeof(UxmlProperty_t98965D0AC619F23715A51F072A885C7F07F15FE4));
		UxmlProperty_t98965D0AC619F23715A51F072A885C7F07F15FE4 L_2 = V_0;
		return false;
	}

IL_001d:
	{
		return (bool)0;
	}

IL_001f:
	{
		return (bool)1;
	}
}
// Method Definition Index: 10581
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_System_Collections_IList_Contains_m8F128AFE6F1BC59D8200B04C5F748CD1D3D48B3E (ReadOnlyCollection_1_tAE114E8C18E180A65629D9DF0D8911860274551C* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = ___0_value;
		bool L_1;
		L_1 = ReadOnlyCollection_1_IsCompatibleObject_m7575D658F2FFB26CF20770C4D9570925DCAE4CBC(L_0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 13));
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject* L_2 = ___0_value;
		bool L_3;
		L_3 = ReadOnlyCollection_1_Contains_m78939760646E138755B3431CC00567C373C50303(__this, ((*(UxmlProperty_t98965D0AC619F23715A51F072A885C7F07F15FE4*)UnBox(L_2, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4)))), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 14));
		return L_3;
	}

IL_0015:
	{
		return (bool)0;
	}
}
// Method Definition Index: 10582
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_System_Collections_IList_IndexOf_m4FC93C2591D2C6CB8EDB258EE88C918A5EC72031 (ReadOnlyCollection_1_tAE114E8C18E180A65629D9DF0D8911860274551C* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = ___0_value;
		bool L_1;
		L_1 = ReadOnlyCollection_1_IsCompatibleObject_m7575D658F2FFB26CF20770C4D9570925DCAE4CBC(L_0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 13));
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject* L_2 = ___0_value;
		int32_t L_3;
		L_3 = ReadOnlyCollection_1_IndexOf_m7523B4A1B54F01EEC15D4503072D2D24F0941740(__this, ((*(UxmlProperty_t98965D0AC619F23715A51F072A885C7F07F15FE4*)UnBox(L_2, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4)))), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 15));
		return L_3;
	}

IL_0015:
	{
		return (-1);
	}
}
// Method Definition Index: 10583
// Method Definition Index: 10584
// Method Definition Index: 10585
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 10557
// Method Definition Index: 10558
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_get_Count_mAA7CC5A5A5CC07977C0D39FB6F9B5718A6CC44A7 (ReadOnlyCollection_1_tC5795E68B14E438B5B65AF3F4C3F50CA0F951647* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = InterfaceFuncInvoker0< int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 0), L_0);
		return L_1;
	}
}
// Method Definition Index: 10559
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ReadOnlyCollection_1_get_Item_mF8DFF8519893E8F4E924975E0CAB4858EA66E644 (ReadOnlyCollection_1_tC5795E68B14E438B5B65AF3F4C3F50CA0F951647* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		int32_t L_1 = ___0_index;
		NullCheck(L_0);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2;
		L_2 = InterfaceFuncInvoker1< Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7, int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_0, L_1);
		return L_2;
	}
}
// Method Definition Index: 10560
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_Contains_mE2B1A47E7F72DD933A5A1CBC95D4F517C3236FEE (ReadOnlyCollection_1_tC5795E68B14E438B5B65AF3F4C3F50CA0F951647* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_1 = ___0_value;
		NullCheck(L_0);
		bool L_2;
		L_2 = InterfaceFuncInvoker1< bool, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 >::Invoke(4, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 0), L_0, L_1);
		return L_2;
	}
}
// Method Definition Index: 10561
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlyCollection_1_CopyTo_m099E0064E497143252FC7DC6C77A01C6C551097A (ReadOnlyCollection_1_tC5795E68B14E438B5B65AF3F4C3F50CA0F951647* __this, Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* L_1 = ___0_array;
		int32_t L_2 = ___1_index;
		NullCheck(L_0);
		InterfaceActionInvoker2< Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA*, int32_t >::Invoke(5, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 0), L_0, L_1, L_2);
		return;
	}
}
// Method Definition Index: 10562
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ReadOnlyCollection_1_GetEnumerator_mD7DA7DC429D624E8255CCFC0C190006C0061256B (ReadOnlyCollection_1_tC5795E68B14E438B5B65AF3F4C3F50CA0F951647* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 7), L_0);
		return L_1;
	}
}
// Method Definition Index: 10563
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_IndexOf_m2C9AF85BBA3C92FF44F5ABAD91CE9CFF5AD52FCC (ReadOnlyCollection_1_tC5795E68B14E438B5B65AF3F4C3F50CA0F951647* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_1 = ___0_value;
		NullCheck(L_0);
		int32_t L_2;
		L_2 = InterfaceFuncInvoker1< int32_t, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 >::Invoke(2, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_0, L_1);
		return L_2;
	}
}
// Method Definition Index: 10564
// Method Definition Index: 10565
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ReadOnlyCollection_1_System_Collections_Generic_IListU3CTU3E_get_Item_mB20048FB8A0E2BCCBA35B49EABC1A75B75523D85 (ReadOnlyCollection_1_tC5795E68B14E438B5B65AF3F4C3F50CA0F951647* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		int32_t L_1 = ___0_index;
		NullCheck(L_0);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2;
		L_2 = InterfaceFuncInvoker1< Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7, int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_0, L_1);
		return L_2;
	}
}
// Method Definition Index: 10566
// Method Definition Index: 10567
// Method Definition Index: 10568
// Method Definition Index: 10569
// Method Definition Index: 10570
// Method Definition Index: 10571
// Method Definition Index: 10572
// Method Definition Index: 10573
// Method Definition Index: 10574
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlyCollection_1_System_Collections_ICollection_CopyTo_m45807E0827BF1B68EEEAF67117E0DF17019526C4 (ReadOnlyCollection_1_tC5795E68B14E438B5B65AF3F4C3F50CA0F951647* __this, RuntimeArray* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(Type_t_StaticInit);
	//<source_info:<no-source>:1>
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* V_0 = NULL;
	Type_t* V_1 = NULL;
	Type_t* V_2 = NULL;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_3 = NULL;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		RuntimeArray* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC(3, NULL);
	}

IL_0009:
	{
		RuntimeArray* L_1 = ___0_array;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = il2cpp_codegen_array_get_rank(L_1);
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_0018;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA(7, NULL);
	}

IL_0018:
	{
		RuntimeArray* L_3 = ___0_array;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(L_3, 0, NULL);
		if (!L_4)
		{
			goto IL_0027;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA(6, NULL);
	}

IL_0027:
	{
		int32_t L_5 = ___1_index;
		if ((((int32_t)L_5) >= ((int32_t)0)))
		{
			goto IL_0030;
		}
	}
	{
		ThrowHelper_ThrowIndexArgumentOutOfRange_NeedNonNegNumException_m57AAB1E093F20BFC64BDDBD90FB5B592F582B82F(NULL);
	}

IL_0030:
	{
		RuntimeArray* L_6 = ___0_array;
		NullCheck(L_6);
		int32_t L_7;
		L_7 = il2cpp_codegen_array_get_length(L_6);
		int32_t L_8 = ___1_index;
		int32_t L_9;
		L_9 = ReadOnlyCollection_1_get_Count_mAA7CC5A5A5CC07977C0D39FB6F9B5718A6CC44A7(__this, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 10));
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_7, L_8))) >= ((int32_t)L_9)))
		{
			goto IL_0046;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA(5, NULL);
	}

IL_0046:
	{
		RuntimeArray* L_10 = ___0_array;
		V_0 = ((Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA*)IsInstSealed((RuntimeObject*)L_10, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 11)));
		Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* L_11 = V_0;
		if (!L_11)
		{
			goto IL_005e;
		}
	}
	{
		RuntimeObject* L_12 = __this->___list;
		Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* L_13 = V_0;
		int32_t L_14 = ___1_index;
		NullCheck(L_12);
		InterfaceActionInvoker2< Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA*, int32_t >::Invoke(5, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 0), L_12, L_13, L_14);
		return;
	}

IL_005e:
	{
		RuntimeArray* L_15 = ___0_array;
		NullCheck(L_15);
		Type_t* L_16;
		L_16 = il2cpp_codegen_object_get_type(L_15);
		NullCheck(L_16);
		Type_t* L_17;
		L_17 = VirtualFuncInvoker0< Type_t* >::Invoke(46, L_16);
		V_1 = L_17;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_18 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(il2cpp_codegen_method_rgctx(method), 12)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_19;
		L_19 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_18, NULL);
		V_2 = L_19;
		Type_t* L_20 = V_1;
		Type_t* L_21 = V_2;
		NullCheck(L_20);
		bool L_22;
		L_22 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(22, L_20, L_21);
		if (L_22)
		{
			goto IL_008c;
		}
	}
	{
		Type_t* L_23 = V_2;
		Type_t* L_24 = V_1;
		NullCheck(L_23);
		bool L_25;
		L_25 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(22, L_23, L_24);
		if (L_25)
		{
			goto IL_008c;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58(NULL);
	}

IL_008c:
	{
		RuntimeArray* L_26 = ___0_array;
		V_3 = ((ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)IsInst((RuntimeObject*)L_26, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_27 = V_3;
		if (L_27)
		{
			goto IL_009b;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58(NULL);
	}

IL_009b:
	{
		RuntimeObject* L_28 = __this->___list;
		NullCheck(L_28);
		int32_t L_29;
		L_29 = InterfaceFuncInvoker0< int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 0), L_28);
		V_4 = L_29;
	}
	try
	{
		{
			V_5 = 0;
			goto IL_00cd_1;
		}

IL_00ad_1:
		{
			ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_30 = V_3;
			int32_t L_31 = ___1_index;
			int32_t L_32 = L_31;
			___1_index = ((int32_t)il2cpp_codegen_add(L_32, 1));
			RuntimeObject* L_33 = __this->___list;
			int32_t L_34 = V_5;
			NullCheck(L_33);
			Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_35;
			L_35 = InterfaceFuncInvoker1< Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7, int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_33, L_34);
			Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_36 = L_35;
			RuntimeObject* L_37 = Box(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4), &L_36);
			NullCheck(L_30);
			ArrayElementTypeCheck (L_30, L_37);
			(L_30)->SetAt(static_cast<il2cpp_array_size_t>(L_32), (RuntimeObject*)L_37);
			int32_t L_38 = V_5;
			V_5 = ((int32_t)il2cpp_codegen_add(L_38, 1));
		}

IL_00cd_1:
		{
			int32_t L_39 = V_5;
			int32_t L_40 = V_4;
			if ((((int32_t)L_39) < ((int32_t)L_40)))
			{
				goto IL_00ad_1;
			}
		}
		{
			goto IL_00dd;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_00d5;
		}
		throw e;
	}

CATCH_00d5:
	{
		ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1* L_41 = ((ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1*)IL2CPP_GET_ACTIVE_EXCEPTION(ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1*));;
		ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58(NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_00dd;
	}

IL_00dd:
	{
		return;
	}
}
// Method Definition Index: 10575
// Method Definition Index: 10576
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ReadOnlyCollection_1_System_Collections_IList_get_Item_mFB51685D52425D82D94306EA3FCF7FBE5B7052CA (ReadOnlyCollection_1_tC5795E68B14E438B5B65AF3F4C3F50CA0F951647* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		int32_t L_1 = ___0_index;
		NullCheck(L_0);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2;
		L_2 = InterfaceFuncInvoker1< Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7, int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_0, L_1);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_3 = L_2;
		RuntimeObject* L_4 = Box(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4), &L_3);
		return L_4;
	}
}
// Method Definition Index: 10577
// Method Definition Index: 10578
// Method Definition Index: 10579
// Method Definition Index: 10580
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_IsCompatibleObject_mD05613BFB996238A2515ABAE9DD8DAA1490B499E (RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	//<source_info:<no-source>:1>
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		RuntimeObject* L_0 = ___0_value;
		if (((RuntimeObject*)IsInstSealed((RuntimeObject*)L_0, il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 4))))
		{
			goto IL_001f;
		}
	}
	{
		RuntimeObject* L_1 = ___0_value;
		if (L_1)
		{
			goto IL_001d;
		}
	}
	{
		il2cpp_codegen_initobj((&V_0), sizeof(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7));
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2 = V_0;
		return false;
	}

IL_001d:
	{
		return (bool)0;
	}

IL_001f:
	{
		return (bool)1;
	}
}
// Method Definition Index: 10581
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_System_Collections_IList_Contains_mFF78DA4B645C2A03F837F6DFDAEC436EBBF8DC3B (ReadOnlyCollection_1_tC5795E68B14E438B5B65AF3F4C3F50CA0F951647* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = ___0_value;
		bool L_1;
		L_1 = ReadOnlyCollection_1_IsCompatibleObject_mD05613BFB996238A2515ABAE9DD8DAA1490B499E(L_0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 13));
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject* L_2 = ___0_value;
		bool L_3;
		L_3 = ReadOnlyCollection_1_Contains_mE2B1A47E7F72DD933A5A1CBC95D4F517C3236FEE(__this, ((*(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7*)UnBox(L_2, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4)))), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 14));
		return L_3;
	}

IL_0015:
	{
		return (bool)0;
	}
}
// Method Definition Index: 10582
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_System_Collections_IList_IndexOf_m8D949EDB2A066FD037E53F6DE569D7047D0CCF9C (ReadOnlyCollection_1_tC5795E68B14E438B5B65AF3F4C3F50CA0F951647* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = ___0_value;
		bool L_1;
		L_1 = ReadOnlyCollection_1_IsCompatibleObject_mD05613BFB996238A2515ABAE9DD8DAA1490B499E(L_0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 13));
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject* L_2 = ___0_value;
		int32_t L_3;
		L_3 = ReadOnlyCollection_1_IndexOf_m2C9AF85BBA3C92FF44F5ABAD91CE9CFF5AD52FCC(__this, ((*(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7*)UnBox(L_2, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4)))), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 15));
		return L_3;
	}

IL_0015:
	{
		return (-1);
	}
}
// Method Definition Index: 10583
// Method Definition Index: 10584
// Method Definition Index: 10585
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 10557
// Method Definition Index: 10558
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_get_Count_m986EBFDE8CE6355B85CD8A03AC640405D2A43CE7 (ReadOnlyCollection_1_t9E2776C66EA6797EAB405FB5507CCFDAA18084F6* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = InterfaceFuncInvoker0< int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 0), L_0);
		return L_1;
	}
}
// Method Definition Index: 10559
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ReadOnlyCollection_1_get_Item_mB1EB4D76E0FD0618D2789C1D56C5E2765C599340 (ReadOnlyCollection_1_t9E2776C66EA6797EAB405FB5507CCFDAA18084F6* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		int32_t L_1 = ___0_index;
		NullCheck(L_0);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = InterfaceFuncInvoker1< Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2, int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_0, L_1);
		return L_2;
	}
}
// Method Definition Index: 10560
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_Contains_m6BD386DDD80866871280629115122A6313FAE337 (ReadOnlyCollection_1_t9E2776C66EA6797EAB405FB5507CCFDAA18084F6* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = ___0_value;
		NullCheck(L_0);
		bool L_2;
		L_2 = InterfaceFuncInvoker1< bool, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 >::Invoke(4, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 0), L_0, L_1);
		return L_2;
	}
}
// Method Definition Index: 10561
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlyCollection_1_CopyTo_m086317F511CAEAACEB88C4FC758D178783299988 (ReadOnlyCollection_1_t9E2776C66EA6797EAB405FB5507CCFDAA18084F6* __this, Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_1 = ___0_array;
		int32_t L_2 = ___1_index;
		NullCheck(L_0);
		InterfaceActionInvoker2< Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C*, int32_t >::Invoke(5, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 0), L_0, L_1, L_2);
		return;
	}
}
// Method Definition Index: 10562
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ReadOnlyCollection_1_GetEnumerator_mF92897FACB897883C99B3A8CE7971D0B4791D943 (ReadOnlyCollection_1_t9E2776C66EA6797EAB405FB5507CCFDAA18084F6* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 7), L_0);
		return L_1;
	}
}
// Method Definition Index: 10563
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_IndexOf_m90B344A9EBAC54E2AA81B15D0FBA3498EE0603A3 (ReadOnlyCollection_1_t9E2776C66EA6797EAB405FB5507CCFDAA18084F6* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = ___0_value;
		NullCheck(L_0);
		int32_t L_2;
		L_2 = InterfaceFuncInvoker1< int32_t, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 >::Invoke(2, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_0, L_1);
		return L_2;
	}
}
// Method Definition Index: 10564
// Method Definition Index: 10565
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ReadOnlyCollection_1_System_Collections_Generic_IListU3CTU3E_get_Item_m4F91B77D4C5EA025FE884EF898D9FAEC336AA4EE (ReadOnlyCollection_1_t9E2776C66EA6797EAB405FB5507CCFDAA18084F6* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		int32_t L_1 = ___0_index;
		NullCheck(L_0);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = InterfaceFuncInvoker1< Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2, int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_0, L_1);
		return L_2;
	}
}
// Method Definition Index: 10566
// Method Definition Index: 10567
// Method Definition Index: 10568
// Method Definition Index: 10569
// Method Definition Index: 10570
// Method Definition Index: 10571
// Method Definition Index: 10572
// Method Definition Index: 10573
// Method Definition Index: 10574
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlyCollection_1_System_Collections_ICollection_CopyTo_mD0C30DC820DA024256DCCBDC5434AC1BEECB0630 (ReadOnlyCollection_1_t9E2776C66EA6797EAB405FB5507CCFDAA18084F6* __this, RuntimeArray* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(Type_t_StaticInit);
	//<source_info:<no-source>:1>
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* V_0 = NULL;
	Type_t* V_1 = NULL;
	Type_t* V_2 = NULL;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_3 = NULL;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		RuntimeArray* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC(3, NULL);
	}

IL_0009:
	{
		RuntimeArray* L_1 = ___0_array;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = il2cpp_codegen_array_get_rank(L_1);
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_0018;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA(7, NULL);
	}

IL_0018:
	{
		RuntimeArray* L_3 = ___0_array;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(L_3, 0, NULL);
		if (!L_4)
		{
			goto IL_0027;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA(6, NULL);
	}

IL_0027:
	{
		int32_t L_5 = ___1_index;
		if ((((int32_t)L_5) >= ((int32_t)0)))
		{
			goto IL_0030;
		}
	}
	{
		ThrowHelper_ThrowIndexArgumentOutOfRange_NeedNonNegNumException_m57AAB1E093F20BFC64BDDBD90FB5B592F582B82F(NULL);
	}

IL_0030:
	{
		RuntimeArray* L_6 = ___0_array;
		NullCheck(L_6);
		int32_t L_7;
		L_7 = il2cpp_codegen_array_get_length(L_6);
		int32_t L_8 = ___1_index;
		int32_t L_9;
		L_9 = ReadOnlyCollection_1_get_Count_m986EBFDE8CE6355B85CD8A03AC640405D2A43CE7(__this, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 10));
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_7, L_8))) >= ((int32_t)L_9)))
		{
			goto IL_0046;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA(5, NULL);
	}

IL_0046:
	{
		RuntimeArray* L_10 = ___0_array;
		V_0 = ((Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C*)IsInstSealed((RuntimeObject*)L_10, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 11)));
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_11 = V_0;
		if (!L_11)
		{
			goto IL_005e;
		}
	}
	{
		RuntimeObject* L_12 = __this->___list;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_13 = V_0;
		int32_t L_14 = ___1_index;
		NullCheck(L_12);
		InterfaceActionInvoker2< Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C*, int32_t >::Invoke(5, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 0), L_12, L_13, L_14);
		return;
	}

IL_005e:
	{
		RuntimeArray* L_15 = ___0_array;
		NullCheck(L_15);
		Type_t* L_16;
		L_16 = il2cpp_codegen_object_get_type(L_15);
		NullCheck(L_16);
		Type_t* L_17;
		L_17 = VirtualFuncInvoker0< Type_t* >::Invoke(46, L_16);
		V_1 = L_17;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_18 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(il2cpp_codegen_method_rgctx(method), 12)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_19;
		L_19 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_18, NULL);
		V_2 = L_19;
		Type_t* L_20 = V_1;
		Type_t* L_21 = V_2;
		NullCheck(L_20);
		bool L_22;
		L_22 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(22, L_20, L_21);
		if (L_22)
		{
			goto IL_008c;
		}
	}
	{
		Type_t* L_23 = V_2;
		Type_t* L_24 = V_1;
		NullCheck(L_23);
		bool L_25;
		L_25 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(22, L_23, L_24);
		if (L_25)
		{
			goto IL_008c;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58(NULL);
	}

IL_008c:
	{
		RuntimeArray* L_26 = ___0_array;
		V_3 = ((ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)IsInst((RuntimeObject*)L_26, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_27 = V_3;
		if (L_27)
		{
			goto IL_009b;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58(NULL);
	}

IL_009b:
	{
		RuntimeObject* L_28 = __this->___list;
		NullCheck(L_28);
		int32_t L_29;
		L_29 = InterfaceFuncInvoker0< int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 0), L_28);
		V_4 = L_29;
	}
	try
	{
		{
			V_5 = 0;
			goto IL_00cd_1;
		}

IL_00ad_1:
		{
			ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_30 = V_3;
			int32_t L_31 = ___1_index;
			int32_t L_32 = L_31;
			___1_index = ((int32_t)il2cpp_codegen_add(L_32, 1));
			RuntimeObject* L_33 = __this->___list;
			int32_t L_34 = V_5;
			NullCheck(L_33);
			Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_35;
			L_35 = InterfaceFuncInvoker1< Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2, int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_33, L_34);
			Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_36 = L_35;
			RuntimeObject* L_37 = Box(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4), &L_36);
			NullCheck(L_30);
			ArrayElementTypeCheck (L_30, L_37);
			(L_30)->SetAt(static_cast<il2cpp_array_size_t>(L_32), (RuntimeObject*)L_37);
			int32_t L_38 = V_5;
			V_5 = ((int32_t)il2cpp_codegen_add(L_38, 1));
		}

IL_00cd_1:
		{
			int32_t L_39 = V_5;
			int32_t L_40 = V_4;
			if ((((int32_t)L_39) < ((int32_t)L_40)))
			{
				goto IL_00ad_1;
			}
		}
		{
			goto IL_00dd;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_00d5;
		}
		throw e;
	}

CATCH_00d5:
	{
		ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1* L_41 = ((ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1*)IL2CPP_GET_ACTIVE_EXCEPTION(ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1*));;
		ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58(NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_00dd;
	}

IL_00dd:
	{
		return;
	}
}
// Method Definition Index: 10575
// Method Definition Index: 10576
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ReadOnlyCollection_1_System_Collections_IList_get_Item_mFE485D90D9C0B99A883FB950FAB14916585FDABC (ReadOnlyCollection_1_t9E2776C66EA6797EAB405FB5507CCFDAA18084F6* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		int32_t L_1 = ___0_index;
		NullCheck(L_0);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = InterfaceFuncInvoker1< Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2, int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_0, L_1);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = L_2;
		RuntimeObject* L_4 = Box(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4), &L_3);
		return L_4;
	}
}
// Method Definition Index: 10577
// Method Definition Index: 10578
// Method Definition Index: 10579
// Method Definition Index: 10580
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_IsCompatibleObject_m9D0C44744D57EEB523A3A4775550761A5F80C9C3 (RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	//<source_info:<no-source>:1>
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		RuntimeObject* L_0 = ___0_value;
		if (((RuntimeObject*)IsInstSealed((RuntimeObject*)L_0, il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 4))))
		{
			goto IL_001f;
		}
	}
	{
		RuntimeObject* L_1 = ___0_value;
		if (L_1)
		{
			goto IL_001d;
		}
	}
	{
		il2cpp_codegen_initobj((&V_0), sizeof(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = V_0;
		return false;
	}

IL_001d:
	{
		return (bool)0;
	}

IL_001f:
	{
		return (bool)1;
	}
}
// Method Definition Index: 10581
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_System_Collections_IList_Contains_m28EFD88DB110344E2DD7E8962C1AB7E25E00B0C2 (ReadOnlyCollection_1_t9E2776C66EA6797EAB405FB5507CCFDAA18084F6* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = ___0_value;
		bool L_1;
		L_1 = ReadOnlyCollection_1_IsCompatibleObject_m9D0C44744D57EEB523A3A4775550761A5F80C9C3(L_0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 13));
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject* L_2 = ___0_value;
		bool L_3;
		L_3 = ReadOnlyCollection_1_Contains_m6BD386DDD80866871280629115122A6313FAE337(__this, ((*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)UnBox(L_2, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4)))), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 14));
		return L_3;
	}

IL_0015:
	{
		return (bool)0;
	}
}
// Method Definition Index: 10582
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_System_Collections_IList_IndexOf_m8EB6BC2AE3CF92F980308559D3DA90423CF7A53E (ReadOnlyCollection_1_t9E2776C66EA6797EAB405FB5507CCFDAA18084F6* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = ___0_value;
		bool L_1;
		L_1 = ReadOnlyCollection_1_IsCompatibleObject_m9D0C44744D57EEB523A3A4775550761A5F80C9C3(L_0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 13));
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject* L_2 = ___0_value;
		int32_t L_3;
		L_3 = ReadOnlyCollection_1_IndexOf_m90B344A9EBAC54E2AA81B15D0FBA3498EE0603A3(__this, ((*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)UnBox(L_2, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4)))), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 15));
		return L_3;
	}

IL_0015:
	{
		return (-1);
	}
}
// Method Definition Index: 10583
// Method Definition Index: 10584
// Method Definition Index: 10585
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 10557
// Method Definition Index: 10558
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_get_Count_m1B55A97A91F66DF4081BC160ACBA11A20C0C3D12 (ReadOnlyCollection_1_tC097ADAD4728DA15D13F639EC263BD398D57B04F* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = InterfaceFuncInvoker0< int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 0), L_0);
		return L_1;
	}
}
// Method Definition Index: 10559
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ReadOnlyCollection_1_get_Item_mDD64450B988F10EFA9AAB3A67ACDFA71761BAA7D (ReadOnlyCollection_1_tC097ADAD4728DA15D13F639EC263BD398D57B04F* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		int32_t L_1 = ___0_index;
		NullCheck(L_0);
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_2;
		L_2 = InterfaceFuncInvoker1< Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3, int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_0, L_1);
		return L_2;
	}
}
// Method Definition Index: 10560
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_Contains_m36DC3D6E48A3DBD5B36F8782060E21142784D828 (ReadOnlyCollection_1_tC097ADAD4728DA15D13F639EC263BD398D57B04F* __this, Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___0_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_1 = ___0_value;
		NullCheck(L_0);
		bool L_2;
		L_2 = InterfaceFuncInvoker1< bool, Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 >::Invoke(4, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 0), L_0, L_1);
		return L_2;
	}
}
// Method Definition Index: 10561
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlyCollection_1_CopyTo_m7C9323A97421C8D5DC83FA440462ACEAD1E0810E (ReadOnlyCollection_1_tC097ADAD4728DA15D13F639EC263BD398D57B04F* __this, Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* L_1 = ___0_array;
		int32_t L_2 = ___1_index;
		NullCheck(L_0);
		InterfaceActionInvoker2< Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD*, int32_t >::Invoke(5, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 0), L_0, L_1, L_2);
		return;
	}
}
// Method Definition Index: 10562
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ReadOnlyCollection_1_GetEnumerator_mD2C007726C9273EE601162DDF7FC69E2F4CC0AFE (ReadOnlyCollection_1_tC097ADAD4728DA15D13F639EC263BD398D57B04F* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 7), L_0);
		return L_1;
	}
}
// Method Definition Index: 10563
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_IndexOf_m2765659E739B29A777CECAA80AEDF4D3A21FE0CE (ReadOnlyCollection_1_tC097ADAD4728DA15D13F639EC263BD398D57B04F* __this, Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___0_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_1 = ___0_value;
		NullCheck(L_0);
		int32_t L_2;
		L_2 = InterfaceFuncInvoker1< int32_t, Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 >::Invoke(2, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_0, L_1);
		return L_2;
	}
}
// Method Definition Index: 10564
// Method Definition Index: 10565
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ReadOnlyCollection_1_System_Collections_Generic_IListU3CTU3E_get_Item_m11E4245E74126B27B4ED19367FE86F0A3C71E60B (ReadOnlyCollection_1_tC097ADAD4728DA15D13F639EC263BD398D57B04F* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		int32_t L_1 = ___0_index;
		NullCheck(L_0);
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_2;
		L_2 = InterfaceFuncInvoker1< Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3, int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_0, L_1);
		return L_2;
	}
}
// Method Definition Index: 10566
// Method Definition Index: 10567
// Method Definition Index: 10568
// Method Definition Index: 10569
// Method Definition Index: 10570
// Method Definition Index: 10571
// Method Definition Index: 10572
// Method Definition Index: 10573
// Method Definition Index: 10574
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlyCollection_1_System_Collections_ICollection_CopyTo_mA23614C201E3DBFDC397B685E353FFD37FE29839 (ReadOnlyCollection_1_tC097ADAD4728DA15D13F639EC263BD398D57B04F* __this, RuntimeArray* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(Type_t_StaticInit);
	//<source_info:<no-source>:1>
	Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* V_0 = NULL;
	Type_t* V_1 = NULL;
	Type_t* V_2 = NULL;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_3 = NULL;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		RuntimeArray* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC(3, NULL);
	}

IL_0009:
	{
		RuntimeArray* L_1 = ___0_array;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = il2cpp_codegen_array_get_rank(L_1);
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_0018;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA(7, NULL);
	}

IL_0018:
	{
		RuntimeArray* L_3 = ___0_array;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(L_3, 0, NULL);
		if (!L_4)
		{
			goto IL_0027;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA(6, NULL);
	}

IL_0027:
	{
		int32_t L_5 = ___1_index;
		if ((((int32_t)L_5) >= ((int32_t)0)))
		{
			goto IL_0030;
		}
	}
	{
		ThrowHelper_ThrowIndexArgumentOutOfRange_NeedNonNegNumException_m57AAB1E093F20BFC64BDDBD90FB5B592F582B82F(NULL);
	}

IL_0030:
	{
		RuntimeArray* L_6 = ___0_array;
		NullCheck(L_6);
		int32_t L_7;
		L_7 = il2cpp_codegen_array_get_length(L_6);
		int32_t L_8 = ___1_index;
		int32_t L_9;
		L_9 = ReadOnlyCollection_1_get_Count_m1B55A97A91F66DF4081BC160ACBA11A20C0C3D12(__this, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 10));
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_7, L_8))) >= ((int32_t)L_9)))
		{
			goto IL_0046;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA(5, NULL);
	}

IL_0046:
	{
		RuntimeArray* L_10 = ___0_array;
		V_0 = ((Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD*)IsInstSealed((RuntimeObject*)L_10, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 11)));
		Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* L_11 = V_0;
		if (!L_11)
		{
			goto IL_005e;
		}
	}
	{
		RuntimeObject* L_12 = __this->___list;
		Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* L_13 = V_0;
		int32_t L_14 = ___1_index;
		NullCheck(L_12);
		InterfaceActionInvoker2< Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD*, int32_t >::Invoke(5, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 0), L_12, L_13, L_14);
		return;
	}

IL_005e:
	{
		RuntimeArray* L_15 = ___0_array;
		NullCheck(L_15);
		Type_t* L_16;
		L_16 = il2cpp_codegen_object_get_type(L_15);
		NullCheck(L_16);
		Type_t* L_17;
		L_17 = VirtualFuncInvoker0< Type_t* >::Invoke(46, L_16);
		V_1 = L_17;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_18 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(il2cpp_codegen_method_rgctx(method), 12)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_19;
		L_19 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_18, NULL);
		V_2 = L_19;
		Type_t* L_20 = V_1;
		Type_t* L_21 = V_2;
		NullCheck(L_20);
		bool L_22;
		L_22 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(22, L_20, L_21);
		if (L_22)
		{
			goto IL_008c;
		}
	}
	{
		Type_t* L_23 = V_2;
		Type_t* L_24 = V_1;
		NullCheck(L_23);
		bool L_25;
		L_25 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(22, L_23, L_24);
		if (L_25)
		{
			goto IL_008c;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58(NULL);
	}

IL_008c:
	{
		RuntimeArray* L_26 = ___0_array;
		V_3 = ((ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)IsInst((RuntimeObject*)L_26, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_27 = V_3;
		if (L_27)
		{
			goto IL_009b;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58(NULL);
	}

IL_009b:
	{
		RuntimeObject* L_28 = __this->___list;
		NullCheck(L_28);
		int32_t L_29;
		L_29 = InterfaceFuncInvoker0< int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 0), L_28);
		V_4 = L_29;
	}
	try
	{
		{
			V_5 = 0;
			goto IL_00cd_1;
		}

IL_00ad_1:
		{
			ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_30 = V_3;
			int32_t L_31 = ___1_index;
			int32_t L_32 = L_31;
			___1_index = ((int32_t)il2cpp_codegen_add(L_32, 1));
			RuntimeObject* L_33 = __this->___list;
			int32_t L_34 = V_5;
			NullCheck(L_33);
			Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_35;
			L_35 = InterfaceFuncInvoker1< Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3, int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_33, L_34);
			Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_36 = L_35;
			RuntimeObject* L_37 = Box(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4), &L_36);
			NullCheck(L_30);
			ArrayElementTypeCheck (L_30, L_37);
			(L_30)->SetAt(static_cast<il2cpp_array_size_t>(L_32), (RuntimeObject*)L_37);
			int32_t L_38 = V_5;
			V_5 = ((int32_t)il2cpp_codegen_add(L_38, 1));
		}

IL_00cd_1:
		{
			int32_t L_39 = V_5;
			int32_t L_40 = V_4;
			if ((((int32_t)L_39) < ((int32_t)L_40)))
			{
				goto IL_00ad_1;
			}
		}
		{
			goto IL_00dd;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_00d5;
		}
		throw e;
	}

CATCH_00d5:
	{
		ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1* L_41 = ((ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1*)IL2CPP_GET_ACTIVE_EXCEPTION(ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1*));;
		ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58(NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_00dd;
	}

IL_00dd:
	{
		return;
	}
}
// Method Definition Index: 10575
// Method Definition Index: 10576
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ReadOnlyCollection_1_System_Collections_IList_get_Item_m081C6C784B25FF7A25C3FEB5AC3BFA9545426435 (ReadOnlyCollection_1_tC097ADAD4728DA15D13F639EC263BD398D57B04F* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		int32_t L_1 = ___0_index;
		NullCheck(L_0);
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_2;
		L_2 = InterfaceFuncInvoker1< Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3, int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_0, L_1);
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_3 = L_2;
		RuntimeObject* L_4 = Box(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4), &L_3);
		return L_4;
	}
}
// Method Definition Index: 10577
// Method Definition Index: 10578
// Method Definition Index: 10579
// Method Definition Index: 10580
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_IsCompatibleObject_m15FC7DD980CED28245F768674D29D0E3F992837E (RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	//<source_info:<no-source>:1>
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		RuntimeObject* L_0 = ___0_value;
		if (((RuntimeObject*)IsInstSealed((RuntimeObject*)L_0, il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 4))))
		{
			goto IL_001f;
		}
	}
	{
		RuntimeObject* L_1 = ___0_value;
		if (L_1)
		{
			goto IL_001d;
		}
	}
	{
		il2cpp_codegen_initobj((&V_0), sizeof(Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3));
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_2 = V_0;
		return false;
	}

IL_001d:
	{
		return (bool)0;
	}

IL_001f:
	{
		return (bool)1;
	}
}
// Method Definition Index: 10581
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_System_Collections_IList_Contains_mEF95FCCD41678D6273770888E6056C7BC16D64F1 (ReadOnlyCollection_1_tC097ADAD4728DA15D13F639EC263BD398D57B04F* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = ___0_value;
		bool L_1;
		L_1 = ReadOnlyCollection_1_IsCompatibleObject_m15FC7DD980CED28245F768674D29D0E3F992837E(L_0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 13));
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject* L_2 = ___0_value;
		bool L_3;
		L_3 = ReadOnlyCollection_1_Contains_m36DC3D6E48A3DBD5B36F8782060E21142784D828(__this, ((*(Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3*)UnBox(L_2, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4)))), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 14));
		return L_3;
	}

IL_0015:
	{
		return (bool)0;
	}
}
// Method Definition Index: 10582
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_System_Collections_IList_IndexOf_m540CF46850C0926F454712EB3274BBB19132EAF3 (ReadOnlyCollection_1_tC097ADAD4728DA15D13F639EC263BD398D57B04F* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = ___0_value;
		bool L_1;
		L_1 = ReadOnlyCollection_1_IsCompatibleObject_m15FC7DD980CED28245F768674D29D0E3F992837E(L_0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 13));
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject* L_2 = ___0_value;
		int32_t L_3;
		L_3 = ReadOnlyCollection_1_IndexOf_m2765659E739B29A777CECAA80AEDF4D3A21FE0CE(__this, ((*(Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3*)UnBox(L_2, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4)))), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 15));
		return L_3;
	}

IL_0015:
	{
		return (-1);
	}
}
// Method Definition Index: 10583
// Method Definition Index: 10584
// Method Definition Index: 10585
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 10557
// Method Definition Index: 10558
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_get_Count_mBCE75651A133F9CCD9FC4C86CBDE6E6076255728 (ReadOnlyCollection_1_tA87EA4F23BAC952A78BDE9A5B94F3091DB5C7861* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = InterfaceFuncInvoker0< int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 0), L_0);
		return L_1;
	}
}
// Method Definition Index: 10559
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR VertexAttributeDescriptor_tD4231FBF57335465D16308D2A18E8E83D36BFA76 ReadOnlyCollection_1_get_Item_m31A58C8609F6D252618CE1D89B689D2AE31A7774 (ReadOnlyCollection_1_tA87EA4F23BAC952A78BDE9A5B94F3091DB5C7861* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		int32_t L_1 = ___0_index;
		NullCheck(L_0);
		VertexAttributeDescriptor_tD4231FBF57335465D16308D2A18E8E83D36BFA76 L_2;
		L_2 = InterfaceFuncInvoker1< VertexAttributeDescriptor_tD4231FBF57335465D16308D2A18E8E83D36BFA76, int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_0, L_1);
		return L_2;
	}
}
// Method Definition Index: 10560
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_Contains_mC1DD398028830B9B33CD32417B797F7AD988C1CE (ReadOnlyCollection_1_tA87EA4F23BAC952A78BDE9A5B94F3091DB5C7861* __this, VertexAttributeDescriptor_tD4231FBF57335465D16308D2A18E8E83D36BFA76 ___0_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		VertexAttributeDescriptor_tD4231FBF57335465D16308D2A18E8E83D36BFA76 L_1 = ___0_value;
		NullCheck(L_0);
		bool L_2;
		L_2 = InterfaceFuncInvoker1< bool, VertexAttributeDescriptor_tD4231FBF57335465D16308D2A18E8E83D36BFA76 >::Invoke(4, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 0), L_0, L_1);
		return L_2;
	}
}
// Method Definition Index: 10561
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlyCollection_1_CopyTo_m99F3B05290FE38FFD3153D103CF3B6AD590BD939 (ReadOnlyCollection_1_tA87EA4F23BAC952A78BDE9A5B94F3091DB5C7861* __this, VertexAttributeDescriptorU5BU5D_t5D10E60612F12777F59B7E33939F9075DB0E02B2* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		VertexAttributeDescriptorU5BU5D_t5D10E60612F12777F59B7E33939F9075DB0E02B2* L_1 = ___0_array;
		int32_t L_2 = ___1_index;
		NullCheck(L_0);
		InterfaceActionInvoker2< VertexAttributeDescriptorU5BU5D_t5D10E60612F12777F59B7E33939F9075DB0E02B2*, int32_t >::Invoke(5, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 0), L_0, L_1, L_2);
		return;
	}
}
// Method Definition Index: 10562
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ReadOnlyCollection_1_GetEnumerator_m850D92D798A95E1D8049A0B9046737D6D64218FF (ReadOnlyCollection_1_tA87EA4F23BAC952A78BDE9A5B94F3091DB5C7861* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 7), L_0);
		return L_1;
	}
}
// Method Definition Index: 10563
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_IndexOf_m1CB37BA54919F404E908CDFE7022CC6D1F0E5954 (ReadOnlyCollection_1_tA87EA4F23BAC952A78BDE9A5B94F3091DB5C7861* __this, VertexAttributeDescriptor_tD4231FBF57335465D16308D2A18E8E83D36BFA76 ___0_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		VertexAttributeDescriptor_tD4231FBF57335465D16308D2A18E8E83D36BFA76 L_1 = ___0_value;
		NullCheck(L_0);
		int32_t L_2;
		L_2 = InterfaceFuncInvoker1< int32_t, VertexAttributeDescriptor_tD4231FBF57335465D16308D2A18E8E83D36BFA76 >::Invoke(2, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_0, L_1);
		return L_2;
	}
}
// Method Definition Index: 10564
// Method Definition Index: 10565
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR VertexAttributeDescriptor_tD4231FBF57335465D16308D2A18E8E83D36BFA76 ReadOnlyCollection_1_System_Collections_Generic_IListU3CTU3E_get_Item_m958605D96CE6899F89177E10C538F487F175723D (ReadOnlyCollection_1_tA87EA4F23BAC952A78BDE9A5B94F3091DB5C7861* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		int32_t L_1 = ___0_index;
		NullCheck(L_0);
		VertexAttributeDescriptor_tD4231FBF57335465D16308D2A18E8E83D36BFA76 L_2;
		L_2 = InterfaceFuncInvoker1< VertexAttributeDescriptor_tD4231FBF57335465D16308D2A18E8E83D36BFA76, int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_0, L_1);
		return L_2;
	}
}
// Method Definition Index: 10566
// Method Definition Index: 10567
// Method Definition Index: 10568
// Method Definition Index: 10569
// Method Definition Index: 10570
// Method Definition Index: 10571
// Method Definition Index: 10572
// Method Definition Index: 10573
// Method Definition Index: 10574
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlyCollection_1_System_Collections_ICollection_CopyTo_mBCDC1340700BBB17F424C5932B6C00A6F63BC87E (ReadOnlyCollection_1_tA87EA4F23BAC952A78BDE9A5B94F3091DB5C7861* __this, RuntimeArray* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(Type_t_StaticInit);
	//<source_info:<no-source>:1>
	VertexAttributeDescriptorU5BU5D_t5D10E60612F12777F59B7E33939F9075DB0E02B2* V_0 = NULL;
	Type_t* V_1 = NULL;
	Type_t* V_2 = NULL;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_3 = NULL;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		RuntimeArray* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC(3, NULL);
	}

IL_0009:
	{
		RuntimeArray* L_1 = ___0_array;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = il2cpp_codegen_array_get_rank(L_1);
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_0018;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA(7, NULL);
	}

IL_0018:
	{
		RuntimeArray* L_3 = ___0_array;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(L_3, 0, NULL);
		if (!L_4)
		{
			goto IL_0027;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA(6, NULL);
	}

IL_0027:
	{
		int32_t L_5 = ___1_index;
		if ((((int32_t)L_5) >= ((int32_t)0)))
		{
			goto IL_0030;
		}
	}
	{
		ThrowHelper_ThrowIndexArgumentOutOfRange_NeedNonNegNumException_m57AAB1E093F20BFC64BDDBD90FB5B592F582B82F(NULL);
	}

IL_0030:
	{
		RuntimeArray* L_6 = ___0_array;
		NullCheck(L_6);
		int32_t L_7;
		L_7 = il2cpp_codegen_array_get_length(L_6);
		int32_t L_8 = ___1_index;
		int32_t L_9;
		L_9 = ReadOnlyCollection_1_get_Count_mBCE75651A133F9CCD9FC4C86CBDE6E6076255728(__this, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 10));
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_7, L_8))) >= ((int32_t)L_9)))
		{
			goto IL_0046;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA(5, NULL);
	}

IL_0046:
	{
		RuntimeArray* L_10 = ___0_array;
		V_0 = ((VertexAttributeDescriptorU5BU5D_t5D10E60612F12777F59B7E33939F9075DB0E02B2*)IsInstSealed((RuntimeObject*)L_10, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 11)));
		VertexAttributeDescriptorU5BU5D_t5D10E60612F12777F59B7E33939F9075DB0E02B2* L_11 = V_0;
		if (!L_11)
		{
			goto IL_005e;
		}
	}
	{
		RuntimeObject* L_12 = __this->___list;
		VertexAttributeDescriptorU5BU5D_t5D10E60612F12777F59B7E33939F9075DB0E02B2* L_13 = V_0;
		int32_t L_14 = ___1_index;
		NullCheck(L_12);
		InterfaceActionInvoker2< VertexAttributeDescriptorU5BU5D_t5D10E60612F12777F59B7E33939F9075DB0E02B2*, int32_t >::Invoke(5, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 0), L_12, L_13, L_14);
		return;
	}

IL_005e:
	{
		RuntimeArray* L_15 = ___0_array;
		NullCheck(L_15);
		Type_t* L_16;
		L_16 = il2cpp_codegen_object_get_type(L_15);
		NullCheck(L_16);
		Type_t* L_17;
		L_17 = VirtualFuncInvoker0< Type_t* >::Invoke(46, L_16);
		V_1 = L_17;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_18 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(il2cpp_codegen_method_rgctx(method), 12)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_19;
		L_19 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_18, NULL);
		V_2 = L_19;
		Type_t* L_20 = V_1;
		Type_t* L_21 = V_2;
		NullCheck(L_20);
		bool L_22;
		L_22 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(22, L_20, L_21);
		if (L_22)
		{
			goto IL_008c;
		}
	}
	{
		Type_t* L_23 = V_2;
		Type_t* L_24 = V_1;
		NullCheck(L_23);
		bool L_25;
		L_25 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(22, L_23, L_24);
		if (L_25)
		{
			goto IL_008c;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58(NULL);
	}

IL_008c:
	{
		RuntimeArray* L_26 = ___0_array;
		V_3 = ((ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)IsInst((RuntimeObject*)L_26, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_27 = V_3;
		if (L_27)
		{
			goto IL_009b;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58(NULL);
	}

IL_009b:
	{
		RuntimeObject* L_28 = __this->___list;
		NullCheck(L_28);
		int32_t L_29;
		L_29 = InterfaceFuncInvoker0< int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 0), L_28);
		V_4 = L_29;
	}
	try
	{
		{
			V_5 = 0;
			goto IL_00cd_1;
		}

IL_00ad_1:
		{
			ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_30 = V_3;
			int32_t L_31 = ___1_index;
			int32_t L_32 = L_31;
			___1_index = ((int32_t)il2cpp_codegen_add(L_32, 1));
			RuntimeObject* L_33 = __this->___list;
			int32_t L_34 = V_5;
			NullCheck(L_33);
			VertexAttributeDescriptor_tD4231FBF57335465D16308D2A18E8E83D36BFA76 L_35;
			L_35 = InterfaceFuncInvoker1< VertexAttributeDescriptor_tD4231FBF57335465D16308D2A18E8E83D36BFA76, int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_33, L_34);
			VertexAttributeDescriptor_tD4231FBF57335465D16308D2A18E8E83D36BFA76 L_36 = L_35;
			RuntimeObject* L_37 = Box(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4), &L_36);
			NullCheck(L_30);
			ArrayElementTypeCheck (L_30, L_37);
			(L_30)->SetAt(static_cast<il2cpp_array_size_t>(L_32), (RuntimeObject*)L_37);
			int32_t L_38 = V_5;
			V_5 = ((int32_t)il2cpp_codegen_add(L_38, 1));
		}

IL_00cd_1:
		{
			int32_t L_39 = V_5;
			int32_t L_40 = V_4;
			if ((((int32_t)L_39) < ((int32_t)L_40)))
			{
				goto IL_00ad_1;
			}
		}
		{
			goto IL_00dd;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_00d5;
		}
		throw e;
	}

CATCH_00d5:
	{
		ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1* L_41 = ((ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1*)IL2CPP_GET_ACTIVE_EXCEPTION(ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1*));;
		ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58(NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_00dd;
	}

IL_00dd:
	{
		return;
	}
}
// Method Definition Index: 10575
// Method Definition Index: 10576
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ReadOnlyCollection_1_System_Collections_IList_get_Item_m89F3389F9C174AA0A2FC15A62B47C0D6A6C2765E (ReadOnlyCollection_1_tA87EA4F23BAC952A78BDE9A5B94F3091DB5C7861* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		int32_t L_1 = ___0_index;
		NullCheck(L_0);
		VertexAttributeDescriptor_tD4231FBF57335465D16308D2A18E8E83D36BFA76 L_2;
		L_2 = InterfaceFuncInvoker1< VertexAttributeDescriptor_tD4231FBF57335465D16308D2A18E8E83D36BFA76, int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_0, L_1);
		VertexAttributeDescriptor_tD4231FBF57335465D16308D2A18E8E83D36BFA76 L_3 = L_2;
		RuntimeObject* L_4 = Box(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4), &L_3);
		return L_4;
	}
}
// Method Definition Index: 10577
// Method Definition Index: 10578
// Method Definition Index: 10579
// Method Definition Index: 10580
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_IsCompatibleObject_m6E114ABEDEECA9C3CA16E3E503B90E12AD4EF0B7 (RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	//<source_info:<no-source>:1>
	VertexAttributeDescriptor_tD4231FBF57335465D16308D2A18E8E83D36BFA76 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		RuntimeObject* L_0 = ___0_value;
		if (((RuntimeObject*)IsInstSealed((RuntimeObject*)L_0, il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 4))))
		{
			goto IL_001f;
		}
	}
	{
		RuntimeObject* L_1 = ___0_value;
		if (L_1)
		{
			goto IL_001d;
		}
	}
	{
		il2cpp_codegen_initobj((&V_0), sizeof(VertexAttributeDescriptor_tD4231FBF57335465D16308D2A18E8E83D36BFA76));
		VertexAttributeDescriptor_tD4231FBF57335465D16308D2A18E8E83D36BFA76 L_2 = V_0;
		return false;
	}

IL_001d:
	{
		return (bool)0;
	}

IL_001f:
	{
		return (bool)1;
	}
}
// Method Definition Index: 10581
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_System_Collections_IList_Contains_m99005858A9CE865F4078D9375EFDCD6DE184BB8C (ReadOnlyCollection_1_tA87EA4F23BAC952A78BDE9A5B94F3091DB5C7861* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = ___0_value;
		bool L_1;
		L_1 = ReadOnlyCollection_1_IsCompatibleObject_m6E114ABEDEECA9C3CA16E3E503B90E12AD4EF0B7(L_0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 13));
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject* L_2 = ___0_value;
		bool L_3;
		L_3 = ReadOnlyCollection_1_Contains_mC1DD398028830B9B33CD32417B797F7AD988C1CE(__this, ((*(VertexAttributeDescriptor_tD4231FBF57335465D16308D2A18E8E83D36BFA76*)UnBox(L_2, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4)))), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 14));
		return L_3;
	}

IL_0015:
	{
		return (bool)0;
	}
}
// Method Definition Index: 10582
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_System_Collections_IList_IndexOf_m9DD98EF20797B7B9392335161EC93887F40D160A (ReadOnlyCollection_1_tA87EA4F23BAC952A78BDE9A5B94F3091DB5C7861* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = ___0_value;
		bool L_1;
		L_1 = ReadOnlyCollection_1_IsCompatibleObject_m6E114ABEDEECA9C3CA16E3E503B90E12AD4EF0B7(L_0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 13));
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject* L_2 = ___0_value;
		int32_t L_3;
		L_3 = ReadOnlyCollection_1_IndexOf_m1CB37BA54919F404E908CDFE7022CC6D1F0E5954(__this, ((*(VertexAttributeDescriptor_tD4231FBF57335465D16308D2A18E8E83D36BFA76*)UnBox(L_2, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4)))), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 15));
		return L_3;
	}

IL_0015:
	{
		return (-1);
	}
}
// Method Definition Index: 10583
// Method Definition Index: 10584
// Method Definition Index: 10585
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 10557
// Method Definition Index: 10558
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_get_Count_mE3C5DAF414445B20B6B036B8BFDAB1BDDDC8E206 (ReadOnlyCollection_1_tB6FD6BA75C6F479B6860FCBA235488206BF20E52* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = InterfaceFuncInvoker0< int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 0), L_0);
		return L_1;
	}
}
// Method Definition Index: 10559
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR X509ChainStatus_t5A57DDA24AA1FCA9F2B8D70B767CDDF388E4A80D ReadOnlyCollection_1_get_Item_m1C2272A2347A1CF3D61FD581E6720A523C4F3C59 (ReadOnlyCollection_1_tB6FD6BA75C6F479B6860FCBA235488206BF20E52* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		int32_t L_1 = ___0_index;
		NullCheck(L_0);
		X509ChainStatus_t5A57DDA24AA1FCA9F2B8D70B767CDDF388E4A80D L_2;
		L_2 = InterfaceFuncInvoker1< X509ChainStatus_t5A57DDA24AA1FCA9F2B8D70B767CDDF388E4A80D, int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_0, L_1);
		return L_2;
	}
}
// Method Definition Index: 10560
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_Contains_m6071D5F75047625A3D94C37160C90859A4969B24 (ReadOnlyCollection_1_tB6FD6BA75C6F479B6860FCBA235488206BF20E52* __this, X509ChainStatus_t5A57DDA24AA1FCA9F2B8D70B767CDDF388E4A80D ___0_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		X509ChainStatus_t5A57DDA24AA1FCA9F2B8D70B767CDDF388E4A80D L_1 = ___0_value;
		NullCheck(L_0);
		bool L_2;
		L_2 = InterfaceFuncInvoker1< bool, X509ChainStatus_t5A57DDA24AA1FCA9F2B8D70B767CDDF388E4A80D >::Invoke(4, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 0), L_0, L_1);
		return L_2;
	}
}
// Method Definition Index: 10561
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlyCollection_1_CopyTo_mBCFB4F4ED329720C9F218B1C7B44AF26C7932154 (ReadOnlyCollection_1_tB6FD6BA75C6F479B6860FCBA235488206BF20E52* __this, X509ChainStatusU5BU5D_tA4CB502E13E6D62B9C824B15F3193FE7EC889299* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		X509ChainStatusU5BU5D_tA4CB502E13E6D62B9C824B15F3193FE7EC889299* L_1 = ___0_array;
		int32_t L_2 = ___1_index;
		NullCheck(L_0);
		InterfaceActionInvoker2< X509ChainStatusU5BU5D_tA4CB502E13E6D62B9C824B15F3193FE7EC889299*, int32_t >::Invoke(5, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 0), L_0, L_1, L_2);
		return;
	}
}
// Method Definition Index: 10562
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ReadOnlyCollection_1_GetEnumerator_m270B880D914DEC5C49860661613046156448BAC6 (ReadOnlyCollection_1_tB6FD6BA75C6F479B6860FCBA235488206BF20E52* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 7), L_0);
		return L_1;
	}
}
// Method Definition Index: 10563
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_IndexOf_m1A4EBD2A29E3D8135601CD299CF5B0B2595BD7E9 (ReadOnlyCollection_1_tB6FD6BA75C6F479B6860FCBA235488206BF20E52* __this, X509ChainStatus_t5A57DDA24AA1FCA9F2B8D70B767CDDF388E4A80D ___0_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		X509ChainStatus_t5A57DDA24AA1FCA9F2B8D70B767CDDF388E4A80D L_1 = ___0_value;
		NullCheck(L_0);
		int32_t L_2;
		L_2 = InterfaceFuncInvoker1< int32_t, X509ChainStatus_t5A57DDA24AA1FCA9F2B8D70B767CDDF388E4A80D >::Invoke(2, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_0, L_1);
		return L_2;
	}
}
// Method Definition Index: 10564
// Method Definition Index: 10565
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR X509ChainStatus_t5A57DDA24AA1FCA9F2B8D70B767CDDF388E4A80D ReadOnlyCollection_1_System_Collections_Generic_IListU3CTU3E_get_Item_mC4F4809EFFF231517090D926CF5309AE4CD7A598 (ReadOnlyCollection_1_tB6FD6BA75C6F479B6860FCBA235488206BF20E52* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		int32_t L_1 = ___0_index;
		NullCheck(L_0);
		X509ChainStatus_t5A57DDA24AA1FCA9F2B8D70B767CDDF388E4A80D L_2;
		L_2 = InterfaceFuncInvoker1< X509ChainStatus_t5A57DDA24AA1FCA9F2B8D70B767CDDF388E4A80D, int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_0, L_1);
		return L_2;
	}
}
// Method Definition Index: 10566
// Method Definition Index: 10567
// Method Definition Index: 10568
// Method Definition Index: 10569
// Method Definition Index: 10570
// Method Definition Index: 10571
// Method Definition Index: 10572
// Method Definition Index: 10573
// Method Definition Index: 10574
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlyCollection_1_System_Collections_ICollection_CopyTo_m3BB8507582DFCB354572AD379E8505C9254A9F52 (ReadOnlyCollection_1_tB6FD6BA75C6F479B6860FCBA235488206BF20E52* __this, RuntimeArray* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(Type_t_StaticInit);
	//<source_info:<no-source>:1>
	X509ChainStatusU5BU5D_tA4CB502E13E6D62B9C824B15F3193FE7EC889299* V_0 = NULL;
	Type_t* V_1 = NULL;
	Type_t* V_2 = NULL;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_3 = NULL;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		RuntimeArray* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC(3, NULL);
	}

IL_0009:
	{
		RuntimeArray* L_1 = ___0_array;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = il2cpp_codegen_array_get_rank(L_1);
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_0018;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA(7, NULL);
	}

IL_0018:
	{
		RuntimeArray* L_3 = ___0_array;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(L_3, 0, NULL);
		if (!L_4)
		{
			goto IL_0027;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA(6, NULL);
	}

IL_0027:
	{
		int32_t L_5 = ___1_index;
		if ((((int32_t)L_5) >= ((int32_t)0)))
		{
			goto IL_0030;
		}
	}
	{
		ThrowHelper_ThrowIndexArgumentOutOfRange_NeedNonNegNumException_m57AAB1E093F20BFC64BDDBD90FB5B592F582B82F(NULL);
	}

IL_0030:
	{
		RuntimeArray* L_6 = ___0_array;
		NullCheck(L_6);
		int32_t L_7;
		L_7 = il2cpp_codegen_array_get_length(L_6);
		int32_t L_8 = ___1_index;
		int32_t L_9;
		L_9 = ReadOnlyCollection_1_get_Count_mE3C5DAF414445B20B6B036B8BFDAB1BDDDC8E206(__this, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 10));
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_7, L_8))) >= ((int32_t)L_9)))
		{
			goto IL_0046;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA(5, NULL);
	}

IL_0046:
	{
		RuntimeArray* L_10 = ___0_array;
		V_0 = ((X509ChainStatusU5BU5D_tA4CB502E13E6D62B9C824B15F3193FE7EC889299*)IsInstSealed((RuntimeObject*)L_10, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 11)));
		X509ChainStatusU5BU5D_tA4CB502E13E6D62B9C824B15F3193FE7EC889299* L_11 = V_0;
		if (!L_11)
		{
			goto IL_005e;
		}
	}
	{
		RuntimeObject* L_12 = __this->___list;
		X509ChainStatusU5BU5D_tA4CB502E13E6D62B9C824B15F3193FE7EC889299* L_13 = V_0;
		int32_t L_14 = ___1_index;
		NullCheck(L_12);
		InterfaceActionInvoker2< X509ChainStatusU5BU5D_tA4CB502E13E6D62B9C824B15F3193FE7EC889299*, int32_t >::Invoke(5, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 0), L_12, L_13, L_14);
		return;
	}

IL_005e:
	{
		RuntimeArray* L_15 = ___0_array;
		NullCheck(L_15);
		Type_t* L_16;
		L_16 = il2cpp_codegen_object_get_type(L_15);
		NullCheck(L_16);
		Type_t* L_17;
		L_17 = VirtualFuncInvoker0< Type_t* >::Invoke(46, L_16);
		V_1 = L_17;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_18 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(il2cpp_codegen_method_rgctx(method), 12)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_19;
		L_19 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_18, NULL);
		V_2 = L_19;
		Type_t* L_20 = V_1;
		Type_t* L_21 = V_2;
		NullCheck(L_20);
		bool L_22;
		L_22 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(22, L_20, L_21);
		if (L_22)
		{
			goto IL_008c;
		}
	}
	{
		Type_t* L_23 = V_2;
		Type_t* L_24 = V_1;
		NullCheck(L_23);
		bool L_25;
		L_25 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(22, L_23, L_24);
		if (L_25)
		{
			goto IL_008c;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58(NULL);
	}

IL_008c:
	{
		RuntimeArray* L_26 = ___0_array;
		V_3 = ((ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)IsInst((RuntimeObject*)L_26, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_27 = V_3;
		if (L_27)
		{
			goto IL_009b;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58(NULL);
	}

IL_009b:
	{
		RuntimeObject* L_28 = __this->___list;
		NullCheck(L_28);
		int32_t L_29;
		L_29 = InterfaceFuncInvoker0< int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 0), L_28);
		V_4 = L_29;
	}
	try
	{
		{
			V_5 = 0;
			goto IL_00cd_1;
		}

IL_00ad_1:
		{
			ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_30 = V_3;
			int32_t L_31 = ___1_index;
			int32_t L_32 = L_31;
			___1_index = ((int32_t)il2cpp_codegen_add(L_32, 1));
			RuntimeObject* L_33 = __this->___list;
			int32_t L_34 = V_5;
			NullCheck(L_33);
			X509ChainStatus_t5A57DDA24AA1FCA9F2B8D70B767CDDF388E4A80D L_35;
			L_35 = InterfaceFuncInvoker1< X509ChainStatus_t5A57DDA24AA1FCA9F2B8D70B767CDDF388E4A80D, int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_33, L_34);
			X509ChainStatus_t5A57DDA24AA1FCA9F2B8D70B767CDDF388E4A80D L_36 = L_35;
			RuntimeObject* L_37 = Box(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4), &L_36);
			NullCheck(L_30);
			ArrayElementTypeCheck (L_30, L_37);
			(L_30)->SetAt(static_cast<il2cpp_array_size_t>(L_32), (RuntimeObject*)L_37);
			int32_t L_38 = V_5;
			V_5 = ((int32_t)il2cpp_codegen_add(L_38, 1));
		}

IL_00cd_1:
		{
			int32_t L_39 = V_5;
			int32_t L_40 = V_4;
			if ((((int32_t)L_39) < ((int32_t)L_40)))
			{
				goto IL_00ad_1;
			}
		}
		{
			goto IL_00dd;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_00d5;
		}
		throw e;
	}

CATCH_00d5:
	{
		ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1* L_41 = ((ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1*)IL2CPP_GET_ACTIVE_EXCEPTION(ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1*));;
		ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58(NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_00dd;
	}

IL_00dd:
	{
		return;
	}
}
// Method Definition Index: 10575
// Method Definition Index: 10576
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ReadOnlyCollection_1_System_Collections_IList_get_Item_mBCA2B6FEECD40F4819CF3E04271BEFB79FA728C7 (ReadOnlyCollection_1_tB6FD6BA75C6F479B6860FCBA235488206BF20E52* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		int32_t L_1 = ___0_index;
		NullCheck(L_0);
		X509ChainStatus_t5A57DDA24AA1FCA9F2B8D70B767CDDF388E4A80D L_2;
		L_2 = InterfaceFuncInvoker1< X509ChainStatus_t5A57DDA24AA1FCA9F2B8D70B767CDDF388E4A80D, int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_0, L_1);
		X509ChainStatus_t5A57DDA24AA1FCA9F2B8D70B767CDDF388E4A80D L_3 = L_2;
		RuntimeObject* L_4 = Box(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4), &L_3);
		return L_4;
	}
}
// Method Definition Index: 10577
// Method Definition Index: 10578
// Method Definition Index: 10579
// Method Definition Index: 10580
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_IsCompatibleObject_m733A0F976869D4EB1A0B40A0CCCD60B582572C4A (RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	//<source_info:<no-source>:1>
	X509ChainStatus_t5A57DDA24AA1FCA9F2B8D70B767CDDF388E4A80D V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		RuntimeObject* L_0 = ___0_value;
		if (((RuntimeObject*)IsInstSealed((RuntimeObject*)L_0, il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 4))))
		{
			goto IL_001f;
		}
	}
	{
		RuntimeObject* L_1 = ___0_value;
		if (L_1)
		{
			goto IL_001d;
		}
	}
	{
		il2cpp_codegen_initobj((&V_0), sizeof(X509ChainStatus_t5A57DDA24AA1FCA9F2B8D70B767CDDF388E4A80D));
		X509ChainStatus_t5A57DDA24AA1FCA9F2B8D70B767CDDF388E4A80D L_2 = V_0;
		return false;
	}

IL_001d:
	{
		return (bool)0;
	}

IL_001f:
	{
		return (bool)1;
	}
}
// Method Definition Index: 10581
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_System_Collections_IList_Contains_m6990C5137CC928241210F44598450122F979B7D9 (ReadOnlyCollection_1_tB6FD6BA75C6F479B6860FCBA235488206BF20E52* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = ___0_value;
		bool L_1;
		L_1 = ReadOnlyCollection_1_IsCompatibleObject_m733A0F976869D4EB1A0B40A0CCCD60B582572C4A(L_0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 13));
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject* L_2 = ___0_value;
		bool L_3;
		L_3 = ReadOnlyCollection_1_Contains_m6071D5F75047625A3D94C37160C90859A4969B24(__this, ((*(X509ChainStatus_t5A57DDA24AA1FCA9F2B8D70B767CDDF388E4A80D*)UnBox(L_2, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4)))), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 14));
		return L_3;
	}

IL_0015:
	{
		return (bool)0;
	}
}
// Method Definition Index: 10582
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_System_Collections_IList_IndexOf_m92FEC9D06A4812AA4F37EDDAE1D6D3F59A32D917 (ReadOnlyCollection_1_tB6FD6BA75C6F479B6860FCBA235488206BF20E52* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = ___0_value;
		bool L_1;
		L_1 = ReadOnlyCollection_1_IsCompatibleObject_m733A0F976869D4EB1A0B40A0CCCD60B582572C4A(L_0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 13));
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject* L_2 = ___0_value;
		int32_t L_3;
		L_3 = ReadOnlyCollection_1_IndexOf_m1A4EBD2A29E3D8135601CD299CF5B0B2595BD7E9(__this, ((*(X509ChainStatus_t5A57DDA24AA1FCA9F2B8D70B767CDDF388E4A80D*)UnBox(L_2, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4)))), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 15));
		return L_3;
	}

IL_0015:
	{
		return (-1);
	}
}
// Method Definition Index: 10583
// Method Definition Index: 10584
// Method Definition Index: 10585
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 10557
// Method Definition Index: 10558
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_get_Count_m82272C19694C8A67763F9C55EEC7A512934A147C (ReadOnlyCollection_1_t85346C45E00BDEEDC76B78A9F7D2D0F363A5763B* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = InterfaceFuncInvoker0< int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 0), L_0);
		return L_1;
	}
}
// Method Definition Index: 10559
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR XRCommonHandGesturesState_t18CE495C531D06CFA5E2FB753CB9DC9813F9D858 ReadOnlyCollection_1_get_Item_m74164096BBA2BC4F0CBB86DCDA86A84B1D8F9F04 (ReadOnlyCollection_1_t85346C45E00BDEEDC76B78A9F7D2D0F363A5763B* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		int32_t L_1 = ___0_index;
		NullCheck(L_0);
		XRCommonHandGesturesState_t18CE495C531D06CFA5E2FB753CB9DC9813F9D858 L_2;
		L_2 = InterfaceFuncInvoker1< XRCommonHandGesturesState_t18CE495C531D06CFA5E2FB753CB9DC9813F9D858, int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_0, L_1);
		return L_2;
	}
}
// Method Definition Index: 10560
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_Contains_m57E7F0A6B61467C2A050CB5A3461E44C118CFAD8 (ReadOnlyCollection_1_t85346C45E00BDEEDC76B78A9F7D2D0F363A5763B* __this, XRCommonHandGesturesState_t18CE495C531D06CFA5E2FB753CB9DC9813F9D858 ___0_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		XRCommonHandGesturesState_t18CE495C531D06CFA5E2FB753CB9DC9813F9D858 L_1 = ___0_value;
		NullCheck(L_0);
		bool L_2;
		L_2 = InterfaceFuncInvoker1< bool, XRCommonHandGesturesState_t18CE495C531D06CFA5E2FB753CB9DC9813F9D858 >::Invoke(4, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 0), L_0, L_1);
		return L_2;
	}
}
// Method Definition Index: 10561
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlyCollection_1_CopyTo_m42E35EA570CE80E4F39D672063E76B42078B967B (ReadOnlyCollection_1_t85346C45E00BDEEDC76B78A9F7D2D0F363A5763B* __this, XRCommonHandGesturesStateU5BU5D_tB82A1CD3BED9F0290EC8832DC2E4A7966580DF8C* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		XRCommonHandGesturesStateU5BU5D_tB82A1CD3BED9F0290EC8832DC2E4A7966580DF8C* L_1 = ___0_array;
		int32_t L_2 = ___1_index;
		NullCheck(L_0);
		InterfaceActionInvoker2< XRCommonHandGesturesStateU5BU5D_tB82A1CD3BED9F0290EC8832DC2E4A7966580DF8C*, int32_t >::Invoke(5, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 0), L_0, L_1, L_2);
		return;
	}
}
// Method Definition Index: 10562
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ReadOnlyCollection_1_GetEnumerator_mD36AB8ABBE00E9285B7738B04BAB7EC719B73C9C (ReadOnlyCollection_1_t85346C45E00BDEEDC76B78A9F7D2D0F363A5763B* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 7), L_0);
		return L_1;
	}
}
// Method Definition Index: 10563
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_IndexOf_m2953D7DBE8D0D5108349ACE912A952BEA1BD5A0A (ReadOnlyCollection_1_t85346C45E00BDEEDC76B78A9F7D2D0F363A5763B* __this, XRCommonHandGesturesState_t18CE495C531D06CFA5E2FB753CB9DC9813F9D858 ___0_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		XRCommonHandGesturesState_t18CE495C531D06CFA5E2FB753CB9DC9813F9D858 L_1 = ___0_value;
		NullCheck(L_0);
		int32_t L_2;
		L_2 = InterfaceFuncInvoker1< int32_t, XRCommonHandGesturesState_t18CE495C531D06CFA5E2FB753CB9DC9813F9D858 >::Invoke(2, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_0, L_1);
		return L_2;
	}
}
// Method Definition Index: 10564
// Method Definition Index: 10565
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR XRCommonHandGesturesState_t18CE495C531D06CFA5E2FB753CB9DC9813F9D858 ReadOnlyCollection_1_System_Collections_Generic_IListU3CTU3E_get_Item_m897CDB0D47F6037389DBE1862FE3CAD8BC80DF92 (ReadOnlyCollection_1_t85346C45E00BDEEDC76B78A9F7D2D0F363A5763B* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		int32_t L_1 = ___0_index;
		NullCheck(L_0);
		XRCommonHandGesturesState_t18CE495C531D06CFA5E2FB753CB9DC9813F9D858 L_2;
		L_2 = InterfaceFuncInvoker1< XRCommonHandGesturesState_t18CE495C531D06CFA5E2FB753CB9DC9813F9D858, int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_0, L_1);
		return L_2;
	}
}
// Method Definition Index: 10566
// Method Definition Index: 10567
// Method Definition Index: 10568
// Method Definition Index: 10569
// Method Definition Index: 10570
// Method Definition Index: 10571
// Method Definition Index: 10572
// Method Definition Index: 10573
// Method Definition Index: 10574
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlyCollection_1_System_Collections_ICollection_CopyTo_m0A65B3771CD4DFE6C2B14B9A21B3A213A37027BE (ReadOnlyCollection_1_t85346C45E00BDEEDC76B78A9F7D2D0F363A5763B* __this, RuntimeArray* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(Type_t_StaticInit);
	//<source_info:<no-source>:1>
	XRCommonHandGesturesStateU5BU5D_tB82A1CD3BED9F0290EC8832DC2E4A7966580DF8C* V_0 = NULL;
	Type_t* V_1 = NULL;
	Type_t* V_2 = NULL;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_3 = NULL;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		RuntimeArray* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC(3, NULL);
	}

IL_0009:
	{
		RuntimeArray* L_1 = ___0_array;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = il2cpp_codegen_array_get_rank(L_1);
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_0018;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA(7, NULL);
	}

IL_0018:
	{
		RuntimeArray* L_3 = ___0_array;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(L_3, 0, NULL);
		if (!L_4)
		{
			goto IL_0027;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA(6, NULL);
	}

IL_0027:
	{
		int32_t L_5 = ___1_index;
		if ((((int32_t)L_5) >= ((int32_t)0)))
		{
			goto IL_0030;
		}
	}
	{
		ThrowHelper_ThrowIndexArgumentOutOfRange_NeedNonNegNumException_m57AAB1E093F20BFC64BDDBD90FB5B592F582B82F(NULL);
	}

IL_0030:
	{
		RuntimeArray* L_6 = ___0_array;
		NullCheck(L_6);
		int32_t L_7;
		L_7 = il2cpp_codegen_array_get_length(L_6);
		int32_t L_8 = ___1_index;
		int32_t L_9;
		L_9 = ReadOnlyCollection_1_get_Count_m82272C19694C8A67763F9C55EEC7A512934A147C(__this, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 10));
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_7, L_8))) >= ((int32_t)L_9)))
		{
			goto IL_0046;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA(5, NULL);
	}

IL_0046:
	{
		RuntimeArray* L_10 = ___0_array;
		V_0 = ((XRCommonHandGesturesStateU5BU5D_tB82A1CD3BED9F0290EC8832DC2E4A7966580DF8C*)IsInstSealed((RuntimeObject*)L_10, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 11)));
		XRCommonHandGesturesStateU5BU5D_tB82A1CD3BED9F0290EC8832DC2E4A7966580DF8C* L_11 = V_0;
		if (!L_11)
		{
			goto IL_005e;
		}
	}
	{
		RuntimeObject* L_12 = __this->___list;
		XRCommonHandGesturesStateU5BU5D_tB82A1CD3BED9F0290EC8832DC2E4A7966580DF8C* L_13 = V_0;
		int32_t L_14 = ___1_index;
		NullCheck(L_12);
		InterfaceActionInvoker2< XRCommonHandGesturesStateU5BU5D_tB82A1CD3BED9F0290EC8832DC2E4A7966580DF8C*, int32_t >::Invoke(5, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 0), L_12, L_13, L_14);
		return;
	}

IL_005e:
	{
		RuntimeArray* L_15 = ___0_array;
		NullCheck(L_15);
		Type_t* L_16;
		L_16 = il2cpp_codegen_object_get_type(L_15);
		NullCheck(L_16);
		Type_t* L_17;
		L_17 = VirtualFuncInvoker0< Type_t* >::Invoke(46, L_16);
		V_1 = L_17;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_18 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(il2cpp_codegen_method_rgctx(method), 12)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_19;
		L_19 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_18, NULL);
		V_2 = L_19;
		Type_t* L_20 = V_1;
		Type_t* L_21 = V_2;
		NullCheck(L_20);
		bool L_22;
		L_22 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(22, L_20, L_21);
		if (L_22)
		{
			goto IL_008c;
		}
	}
	{
		Type_t* L_23 = V_2;
		Type_t* L_24 = V_1;
		NullCheck(L_23);
		bool L_25;
		L_25 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(22, L_23, L_24);
		if (L_25)
		{
			goto IL_008c;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58(NULL);
	}

IL_008c:
	{
		RuntimeArray* L_26 = ___0_array;
		V_3 = ((ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)IsInst((RuntimeObject*)L_26, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_27 = V_3;
		if (L_27)
		{
			goto IL_009b;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58(NULL);
	}

IL_009b:
	{
		RuntimeObject* L_28 = __this->___list;
		NullCheck(L_28);
		int32_t L_29;
		L_29 = InterfaceFuncInvoker0< int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 0), L_28);
		V_4 = L_29;
	}
	try
	{
		{
			V_5 = 0;
			goto IL_00cd_1;
		}

IL_00ad_1:
		{
			ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_30 = V_3;
			int32_t L_31 = ___1_index;
			int32_t L_32 = L_31;
			___1_index = ((int32_t)il2cpp_codegen_add(L_32, 1));
			RuntimeObject* L_33 = __this->___list;
			int32_t L_34 = V_5;
			NullCheck(L_33);
			XRCommonHandGesturesState_t18CE495C531D06CFA5E2FB753CB9DC9813F9D858 L_35;
			L_35 = InterfaceFuncInvoker1< XRCommonHandGesturesState_t18CE495C531D06CFA5E2FB753CB9DC9813F9D858, int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_33, L_34);
			XRCommonHandGesturesState_t18CE495C531D06CFA5E2FB753CB9DC9813F9D858 L_36 = L_35;
			RuntimeObject* L_37 = Box(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4), &L_36);
			NullCheck(L_30);
			ArrayElementTypeCheck (L_30, L_37);
			(L_30)->SetAt(static_cast<il2cpp_array_size_t>(L_32), (RuntimeObject*)L_37);
			int32_t L_38 = V_5;
			V_5 = ((int32_t)il2cpp_codegen_add(L_38, 1));
		}

IL_00cd_1:
		{
			int32_t L_39 = V_5;
			int32_t L_40 = V_4;
			if ((((int32_t)L_39) < ((int32_t)L_40)))
			{
				goto IL_00ad_1;
			}
		}
		{
			goto IL_00dd;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_00d5;
		}
		throw e;
	}

CATCH_00d5:
	{
		ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1* L_41 = ((ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1*)IL2CPP_GET_ACTIVE_EXCEPTION(ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1*));;
		ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58(NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_00dd;
	}

IL_00dd:
	{
		return;
	}
}
// Method Definition Index: 10575
// Method Definition Index: 10576
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ReadOnlyCollection_1_System_Collections_IList_get_Item_mB633AC33AFD320DC885C020B552E478790B6D2B3 (ReadOnlyCollection_1_t85346C45E00BDEEDC76B78A9F7D2D0F363A5763B* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		int32_t L_1 = ___0_index;
		NullCheck(L_0);
		XRCommonHandGesturesState_t18CE495C531D06CFA5E2FB753CB9DC9813F9D858 L_2;
		L_2 = InterfaceFuncInvoker1< XRCommonHandGesturesState_t18CE495C531D06CFA5E2FB753CB9DC9813F9D858, int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_0, L_1);
		XRCommonHandGesturesState_t18CE495C531D06CFA5E2FB753CB9DC9813F9D858 L_3 = L_2;
		RuntimeObject* L_4 = Box(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4), &L_3);
		return L_4;
	}
}
// Method Definition Index: 10577
// Method Definition Index: 10578
// Method Definition Index: 10579
// Method Definition Index: 10580
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_IsCompatibleObject_mE26DF494C190F294B3998816E0CBDE90B22C7540 (RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	//<source_info:<no-source>:1>
	XRCommonHandGesturesState_t18CE495C531D06CFA5E2FB753CB9DC9813F9D858 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		RuntimeObject* L_0 = ___0_value;
		if (((RuntimeObject*)IsInstSealed((RuntimeObject*)L_0, il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 4))))
		{
			goto IL_001f;
		}
	}
	{
		RuntimeObject* L_1 = ___0_value;
		if (L_1)
		{
			goto IL_001d;
		}
	}
	{
		il2cpp_codegen_initobj((&V_0), sizeof(XRCommonHandGesturesState_t18CE495C531D06CFA5E2FB753CB9DC9813F9D858));
		XRCommonHandGesturesState_t18CE495C531D06CFA5E2FB753CB9DC9813F9D858 L_2 = V_0;
		return false;
	}

IL_001d:
	{
		return (bool)0;
	}

IL_001f:
	{
		return (bool)1;
	}
}
// Method Definition Index: 10581
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_System_Collections_IList_Contains_mF8CD3CE95C4211A145F4CA68446BB2A8593250AA (ReadOnlyCollection_1_t85346C45E00BDEEDC76B78A9F7D2D0F363A5763B* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = ___0_value;
		bool L_1;
		L_1 = ReadOnlyCollection_1_IsCompatibleObject_mE26DF494C190F294B3998816E0CBDE90B22C7540(L_0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 13));
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject* L_2 = ___0_value;
		bool L_3;
		L_3 = ReadOnlyCollection_1_Contains_m57E7F0A6B61467C2A050CB5A3461E44C118CFAD8(__this, ((*(XRCommonHandGesturesState_t18CE495C531D06CFA5E2FB753CB9DC9813F9D858*)UnBox(L_2, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4)))), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 14));
		return L_3;
	}

IL_0015:
	{
		return (bool)0;
	}
}
// Method Definition Index: 10582
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_System_Collections_IList_IndexOf_mE7B37345A60EEFC0075EFF00B6715333D935E49B (ReadOnlyCollection_1_t85346C45E00BDEEDC76B78A9F7D2D0F363A5763B* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = ___0_value;
		bool L_1;
		L_1 = ReadOnlyCollection_1_IsCompatibleObject_mE26DF494C190F294B3998816E0CBDE90B22C7540(L_0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 13));
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject* L_2 = ___0_value;
		int32_t L_3;
		L_3 = ReadOnlyCollection_1_IndexOf_m2953D7DBE8D0D5108349ACE912A952BEA1BD5A0A(__this, ((*(XRCommonHandGesturesState_t18CE495C531D06CFA5E2FB753CB9DC9813F9D858*)UnBox(L_2, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4)))), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 15));
		return L_3;
	}

IL_0015:
	{
		return (-1);
	}
}
// Method Definition Index: 10583
// Method Definition Index: 10584
// Method Definition Index: 10585
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 10557
// Method Definition Index: 10558
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_get_Count_m21CADB99DB74429FF3CAF70BAB078191A03241E3 (ReadOnlyCollection_1_t803A81BE343B15275BCD30A219ACAC97F0B9A1C8* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = InterfaceFuncInvoker0< int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 0), L_0);
		return L_1;
	}
}
// Method Definition Index: 10559
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR XRFeatureDescriptor_t690E672A6BBBEFBB8AF221485C1884507EAFB5B2 ReadOnlyCollection_1_get_Item_m111A5F4DD371F2AD501E83319FD0DD9FD57A646B (ReadOnlyCollection_1_t803A81BE343B15275BCD30A219ACAC97F0B9A1C8* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		int32_t L_1 = ___0_index;
		NullCheck(L_0);
		XRFeatureDescriptor_t690E672A6BBBEFBB8AF221485C1884507EAFB5B2 L_2;
		L_2 = InterfaceFuncInvoker1< XRFeatureDescriptor_t690E672A6BBBEFBB8AF221485C1884507EAFB5B2, int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_0, L_1);
		return L_2;
	}
}
// Method Definition Index: 10560
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_Contains_m7F9F1C288B16CFD896954561CBA914AB70CA3C42 (ReadOnlyCollection_1_t803A81BE343B15275BCD30A219ACAC97F0B9A1C8* __this, XRFeatureDescriptor_t690E672A6BBBEFBB8AF221485C1884507EAFB5B2 ___0_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		XRFeatureDescriptor_t690E672A6BBBEFBB8AF221485C1884507EAFB5B2 L_1 = ___0_value;
		NullCheck(L_0);
		bool L_2;
		L_2 = InterfaceFuncInvoker1< bool, XRFeatureDescriptor_t690E672A6BBBEFBB8AF221485C1884507EAFB5B2 >::Invoke(4, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 0), L_0, L_1);
		return L_2;
	}
}
// Method Definition Index: 10561
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlyCollection_1_CopyTo_m4A87AFDE28973CA42FBAA07BCA03E7F9A511BF31 (ReadOnlyCollection_1_t803A81BE343B15275BCD30A219ACAC97F0B9A1C8* __this, XRFeatureDescriptorU5BU5D_tBB735747E74DA05050B124BFE3525E40EC4114A7* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		XRFeatureDescriptorU5BU5D_tBB735747E74DA05050B124BFE3525E40EC4114A7* L_1 = ___0_array;
		int32_t L_2 = ___1_index;
		NullCheck(L_0);
		InterfaceActionInvoker2< XRFeatureDescriptorU5BU5D_tBB735747E74DA05050B124BFE3525E40EC4114A7*, int32_t >::Invoke(5, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 0), L_0, L_1, L_2);
		return;
	}
}
// Method Definition Index: 10562
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ReadOnlyCollection_1_GetEnumerator_mEFA3C7B5E0D654937EA0FD4DCDB9A3B075AF5B77 (ReadOnlyCollection_1_t803A81BE343B15275BCD30A219ACAC97F0B9A1C8* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 7), L_0);
		return L_1;
	}
}
// Method Definition Index: 10563
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_IndexOf_m12E94AAF0808183AA148780A69482224EAE1EACF (ReadOnlyCollection_1_t803A81BE343B15275BCD30A219ACAC97F0B9A1C8* __this, XRFeatureDescriptor_t690E672A6BBBEFBB8AF221485C1884507EAFB5B2 ___0_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		XRFeatureDescriptor_t690E672A6BBBEFBB8AF221485C1884507EAFB5B2 L_1 = ___0_value;
		NullCheck(L_0);
		int32_t L_2;
		L_2 = InterfaceFuncInvoker1< int32_t, XRFeatureDescriptor_t690E672A6BBBEFBB8AF221485C1884507EAFB5B2 >::Invoke(2, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_0, L_1);
		return L_2;
	}
}
// Method Definition Index: 10564
// Method Definition Index: 10565
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR XRFeatureDescriptor_t690E672A6BBBEFBB8AF221485C1884507EAFB5B2 ReadOnlyCollection_1_System_Collections_Generic_IListU3CTU3E_get_Item_mE7A2D9C13FDC29760DF759B9845B427A620E4322 (ReadOnlyCollection_1_t803A81BE343B15275BCD30A219ACAC97F0B9A1C8* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		int32_t L_1 = ___0_index;
		NullCheck(L_0);
		XRFeatureDescriptor_t690E672A6BBBEFBB8AF221485C1884507EAFB5B2 L_2;
		L_2 = InterfaceFuncInvoker1< XRFeatureDescriptor_t690E672A6BBBEFBB8AF221485C1884507EAFB5B2, int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_0, L_1);
		return L_2;
	}
}
// Method Definition Index: 10566
// Method Definition Index: 10567
// Method Definition Index: 10568
// Method Definition Index: 10569
// Method Definition Index: 10570
// Method Definition Index: 10571
// Method Definition Index: 10572
// Method Definition Index: 10573
// Method Definition Index: 10574
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlyCollection_1_System_Collections_ICollection_CopyTo_m2F3F6A5464789C54A0E41B9B562773D4702CEDD0 (ReadOnlyCollection_1_t803A81BE343B15275BCD30A219ACAC97F0B9A1C8* __this, RuntimeArray* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(Type_t_StaticInit);
	//<source_info:<no-source>:1>
	XRFeatureDescriptorU5BU5D_tBB735747E74DA05050B124BFE3525E40EC4114A7* V_0 = NULL;
	Type_t* V_1 = NULL;
	Type_t* V_2 = NULL;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_3 = NULL;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		RuntimeArray* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC(3, NULL);
	}

IL_0009:
	{
		RuntimeArray* L_1 = ___0_array;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = il2cpp_codegen_array_get_rank(L_1);
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_0018;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA(7, NULL);
	}

IL_0018:
	{
		RuntimeArray* L_3 = ___0_array;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(L_3, 0, NULL);
		if (!L_4)
		{
			goto IL_0027;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA(6, NULL);
	}

IL_0027:
	{
		int32_t L_5 = ___1_index;
		if ((((int32_t)L_5) >= ((int32_t)0)))
		{
			goto IL_0030;
		}
	}
	{
		ThrowHelper_ThrowIndexArgumentOutOfRange_NeedNonNegNumException_m57AAB1E093F20BFC64BDDBD90FB5B592F582B82F(NULL);
	}

IL_0030:
	{
		RuntimeArray* L_6 = ___0_array;
		NullCheck(L_6);
		int32_t L_7;
		L_7 = il2cpp_codegen_array_get_length(L_6);
		int32_t L_8 = ___1_index;
		int32_t L_9;
		L_9 = ReadOnlyCollection_1_get_Count_m21CADB99DB74429FF3CAF70BAB078191A03241E3(__this, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 10));
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_7, L_8))) >= ((int32_t)L_9)))
		{
			goto IL_0046;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA(5, NULL);
	}

IL_0046:
	{
		RuntimeArray* L_10 = ___0_array;
		V_0 = ((XRFeatureDescriptorU5BU5D_tBB735747E74DA05050B124BFE3525E40EC4114A7*)IsInstSealed((RuntimeObject*)L_10, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 11)));
		XRFeatureDescriptorU5BU5D_tBB735747E74DA05050B124BFE3525E40EC4114A7* L_11 = V_0;
		if (!L_11)
		{
			goto IL_005e;
		}
	}
	{
		RuntimeObject* L_12 = __this->___list;
		XRFeatureDescriptorU5BU5D_tBB735747E74DA05050B124BFE3525E40EC4114A7* L_13 = V_0;
		int32_t L_14 = ___1_index;
		NullCheck(L_12);
		InterfaceActionInvoker2< XRFeatureDescriptorU5BU5D_tBB735747E74DA05050B124BFE3525E40EC4114A7*, int32_t >::Invoke(5, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 0), L_12, L_13, L_14);
		return;
	}

IL_005e:
	{
		RuntimeArray* L_15 = ___0_array;
		NullCheck(L_15);
		Type_t* L_16;
		L_16 = il2cpp_codegen_object_get_type(L_15);
		NullCheck(L_16);
		Type_t* L_17;
		L_17 = VirtualFuncInvoker0< Type_t* >::Invoke(46, L_16);
		V_1 = L_17;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_18 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(il2cpp_codegen_method_rgctx(method), 12)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_19;
		L_19 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_18, NULL);
		V_2 = L_19;
		Type_t* L_20 = V_1;
		Type_t* L_21 = V_2;
		NullCheck(L_20);
		bool L_22;
		L_22 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(22, L_20, L_21);
		if (L_22)
		{
			goto IL_008c;
		}
	}
	{
		Type_t* L_23 = V_2;
		Type_t* L_24 = V_1;
		NullCheck(L_23);
		bool L_25;
		L_25 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(22, L_23, L_24);
		if (L_25)
		{
			goto IL_008c;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58(NULL);
	}

IL_008c:
	{
		RuntimeArray* L_26 = ___0_array;
		V_3 = ((ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)IsInst((RuntimeObject*)L_26, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_27 = V_3;
		if (L_27)
		{
			goto IL_009b;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58(NULL);
	}

IL_009b:
	{
		RuntimeObject* L_28 = __this->___list;
		NullCheck(L_28);
		int32_t L_29;
		L_29 = InterfaceFuncInvoker0< int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 0), L_28);
		V_4 = L_29;
	}
	try
	{
		{
			V_5 = 0;
			goto IL_00cd_1;
		}

IL_00ad_1:
		{
			ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_30 = V_3;
			int32_t L_31 = ___1_index;
			int32_t L_32 = L_31;
			___1_index = ((int32_t)il2cpp_codegen_add(L_32, 1));
			RuntimeObject* L_33 = __this->___list;
			int32_t L_34 = V_5;
			NullCheck(L_33);
			XRFeatureDescriptor_t690E672A6BBBEFBB8AF221485C1884507EAFB5B2 L_35;
			L_35 = InterfaceFuncInvoker1< XRFeatureDescriptor_t690E672A6BBBEFBB8AF221485C1884507EAFB5B2, int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_33, L_34);
			XRFeatureDescriptor_t690E672A6BBBEFBB8AF221485C1884507EAFB5B2 L_36 = L_35;
			RuntimeObject* L_37 = Box(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4), &L_36);
			NullCheck(L_30);
			ArrayElementTypeCheck (L_30, L_37);
			(L_30)->SetAt(static_cast<il2cpp_array_size_t>(L_32), (RuntimeObject*)L_37);
			int32_t L_38 = V_5;
			V_5 = ((int32_t)il2cpp_codegen_add(L_38, 1));
		}

IL_00cd_1:
		{
			int32_t L_39 = V_5;
			int32_t L_40 = V_4;
			if ((((int32_t)L_39) < ((int32_t)L_40)))
			{
				goto IL_00ad_1;
			}
		}
		{
			goto IL_00dd;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_00d5;
		}
		throw e;
	}

CATCH_00d5:
	{
		ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1* L_41 = ((ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1*)IL2CPP_GET_ACTIVE_EXCEPTION(ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1*));;
		ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58(NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_00dd;
	}

IL_00dd:
	{
		return;
	}
}
// Method Definition Index: 10575
// Method Definition Index: 10576
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ReadOnlyCollection_1_System_Collections_IList_get_Item_mE37F6BAAB9EECA8A1EB9BFDB480EAF511BEDBC71 (ReadOnlyCollection_1_t803A81BE343B15275BCD30A219ACAC97F0B9A1C8* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		int32_t L_1 = ___0_index;
		NullCheck(L_0);
		XRFeatureDescriptor_t690E672A6BBBEFBB8AF221485C1884507EAFB5B2 L_2;
		L_2 = InterfaceFuncInvoker1< XRFeatureDescriptor_t690E672A6BBBEFBB8AF221485C1884507EAFB5B2, int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_0, L_1);
		XRFeatureDescriptor_t690E672A6BBBEFBB8AF221485C1884507EAFB5B2 L_3 = L_2;
		RuntimeObject* L_4 = Box(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4), &L_3);
		return L_4;
	}
}
// Method Definition Index: 10577
// Method Definition Index: 10578
// Method Definition Index: 10579
// Method Definition Index: 10580
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_IsCompatibleObject_mB8637EFA6E7DC55A186C227F3D362EEF524D9FAD (RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	//<source_info:<no-source>:1>
	XRFeatureDescriptor_t690E672A6BBBEFBB8AF221485C1884507EAFB5B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		RuntimeObject* L_0 = ___0_value;
		if (((RuntimeObject*)IsInstSealed((RuntimeObject*)L_0, il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 4))))
		{
			goto IL_001f;
		}
	}
	{
		RuntimeObject* L_1 = ___0_value;
		if (L_1)
		{
			goto IL_001d;
		}
	}
	{
		il2cpp_codegen_initobj((&V_0), sizeof(XRFeatureDescriptor_t690E672A6BBBEFBB8AF221485C1884507EAFB5B2));
		XRFeatureDescriptor_t690E672A6BBBEFBB8AF221485C1884507EAFB5B2 L_2 = V_0;
		return false;
	}

IL_001d:
	{
		return (bool)0;
	}

IL_001f:
	{
		return (bool)1;
	}
}
// Method Definition Index: 10581
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_System_Collections_IList_Contains_m5B9EEF6A592DE8CE9A807B6DB1862178D627E9E3 (ReadOnlyCollection_1_t803A81BE343B15275BCD30A219ACAC97F0B9A1C8* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = ___0_value;
		bool L_1;
		L_1 = ReadOnlyCollection_1_IsCompatibleObject_mB8637EFA6E7DC55A186C227F3D362EEF524D9FAD(L_0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 13));
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject* L_2 = ___0_value;
		bool L_3;
		L_3 = ReadOnlyCollection_1_Contains_m7F9F1C288B16CFD896954561CBA914AB70CA3C42(__this, ((*(XRFeatureDescriptor_t690E672A6BBBEFBB8AF221485C1884507EAFB5B2*)UnBox(L_2, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4)))), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 14));
		return L_3;
	}

IL_0015:
	{
		return (bool)0;
	}
}
// Method Definition Index: 10582
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_System_Collections_IList_IndexOf_m2884047F088D6AD6D819F7785BC0DA13E10A2D87 (ReadOnlyCollection_1_t803A81BE343B15275BCD30A219ACAC97F0B9A1C8* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = ___0_value;
		bool L_1;
		L_1 = ReadOnlyCollection_1_IsCompatibleObject_mB8637EFA6E7DC55A186C227F3D362EEF524D9FAD(L_0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 13));
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject* L_2 = ___0_value;
		int32_t L_3;
		L_3 = ReadOnlyCollection_1_IndexOf_m12E94AAF0808183AA148780A69482224EAE1EACF(__this, ((*(XRFeatureDescriptor_t690E672A6BBBEFBB8AF221485C1884507EAFB5B2*)UnBox(L_2, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4)))), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 15));
		return L_3;
	}

IL_0015:
	{
		return (-1);
	}
}
// Method Definition Index: 10583
// Method Definition Index: 10584
// Method Definition Index: 10585
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 10557
// Method Definition Index: 10558
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_get_Count_mFDC67CFFE108DF01F6236E669E867F19EFA81DE1 (ReadOnlyCollection_1_t6C8AC0F6B679CC534CE688032CB9948629825DA3* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = InterfaceFuncInvoker0< int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 0), L_0);
		return L_1;
	}
}
// Method Definition Index: 10559
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR XRHandAimState_tE6FE6D8596FAD861E3D2D21DD47E1653612C44C3 ReadOnlyCollection_1_get_Item_mE3CD35082A1CC00D744DEDA1A2515CA99D1EE89D (ReadOnlyCollection_1_t6C8AC0F6B679CC534CE688032CB9948629825DA3* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		int32_t L_1 = ___0_index;
		NullCheck(L_0);
		XRHandAimState_tE6FE6D8596FAD861E3D2D21DD47E1653612C44C3 L_2;
		L_2 = InterfaceFuncInvoker1< XRHandAimState_tE6FE6D8596FAD861E3D2D21DD47E1653612C44C3, int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_0, L_1);
		return L_2;
	}
}
// Method Definition Index: 10560
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_Contains_m05E369B582D9EF63EC9526AD90CF1009187ED150 (ReadOnlyCollection_1_t6C8AC0F6B679CC534CE688032CB9948629825DA3* __this, XRHandAimState_tE6FE6D8596FAD861E3D2D21DD47E1653612C44C3 ___0_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		XRHandAimState_tE6FE6D8596FAD861E3D2D21DD47E1653612C44C3 L_1 = ___0_value;
		NullCheck(L_0);
		bool L_2;
		L_2 = InterfaceFuncInvoker1< bool, XRHandAimState_tE6FE6D8596FAD861E3D2D21DD47E1653612C44C3 >::Invoke(4, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 0), L_0, L_1);
		return L_2;
	}
}
// Method Definition Index: 10561
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlyCollection_1_CopyTo_m6FF7CFBA39E306C16EAB0FE0E609A5AC4E5C5A7E (ReadOnlyCollection_1_t6C8AC0F6B679CC534CE688032CB9948629825DA3* __this, XRHandAimStateU5BU5D_t0076289643604F274ED85C15E336BB86EADDDB4F* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		XRHandAimStateU5BU5D_t0076289643604F274ED85C15E336BB86EADDDB4F* L_1 = ___0_array;
		int32_t L_2 = ___1_index;
		NullCheck(L_0);
		InterfaceActionInvoker2< XRHandAimStateU5BU5D_t0076289643604F274ED85C15E336BB86EADDDB4F*, int32_t >::Invoke(5, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 0), L_0, L_1, L_2);
		return;
	}
}
// Method Definition Index: 10562
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ReadOnlyCollection_1_GetEnumerator_m95B4D3897DFADB06F48F5CEBEC19F8B2075F8350 (ReadOnlyCollection_1_t6C8AC0F6B679CC534CE688032CB9948629825DA3* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 7), L_0);
		return L_1;
	}
}
// Method Definition Index: 10563
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_IndexOf_m8B7AAB305511A6034A6B6DF982D82D92A532F61F (ReadOnlyCollection_1_t6C8AC0F6B679CC534CE688032CB9948629825DA3* __this, XRHandAimState_tE6FE6D8596FAD861E3D2D21DD47E1653612C44C3 ___0_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		XRHandAimState_tE6FE6D8596FAD861E3D2D21DD47E1653612C44C3 L_1 = ___0_value;
		NullCheck(L_0);
		int32_t L_2;
		L_2 = InterfaceFuncInvoker1< int32_t, XRHandAimState_tE6FE6D8596FAD861E3D2D21DD47E1653612C44C3 >::Invoke(2, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_0, L_1);
		return L_2;
	}
}
// Method Definition Index: 10564
// Method Definition Index: 10565
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR XRHandAimState_tE6FE6D8596FAD861E3D2D21DD47E1653612C44C3 ReadOnlyCollection_1_System_Collections_Generic_IListU3CTU3E_get_Item_m55BCCAD14AAF11B7E69DAEC64A725F5C80F07F81 (ReadOnlyCollection_1_t6C8AC0F6B679CC534CE688032CB9948629825DA3* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		int32_t L_1 = ___0_index;
		NullCheck(L_0);
		XRHandAimState_tE6FE6D8596FAD861E3D2D21DD47E1653612C44C3 L_2;
		L_2 = InterfaceFuncInvoker1< XRHandAimState_tE6FE6D8596FAD861E3D2D21DD47E1653612C44C3, int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_0, L_1);
		return L_2;
	}
}
// Method Definition Index: 10566
// Method Definition Index: 10567
// Method Definition Index: 10568
// Method Definition Index: 10569
// Method Definition Index: 10570
// Method Definition Index: 10571
// Method Definition Index: 10572
// Method Definition Index: 10573
// Method Definition Index: 10574
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlyCollection_1_System_Collections_ICollection_CopyTo_mFA2BA988CBED1C204F9FE9B463C971C6E466CDCB (ReadOnlyCollection_1_t6C8AC0F6B679CC534CE688032CB9948629825DA3* __this, RuntimeArray* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(Type_t_StaticInit);
	//<source_info:<no-source>:1>
	XRHandAimStateU5BU5D_t0076289643604F274ED85C15E336BB86EADDDB4F* V_0 = NULL;
	Type_t* V_1 = NULL;
	Type_t* V_2 = NULL;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_3 = NULL;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		RuntimeArray* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC(3, NULL);
	}

IL_0009:
	{
		RuntimeArray* L_1 = ___0_array;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = il2cpp_codegen_array_get_rank(L_1);
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_0018;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA(7, NULL);
	}

IL_0018:
	{
		RuntimeArray* L_3 = ___0_array;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(L_3, 0, NULL);
		if (!L_4)
		{
			goto IL_0027;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA(6, NULL);
	}

IL_0027:
	{
		int32_t L_5 = ___1_index;
		if ((((int32_t)L_5) >= ((int32_t)0)))
		{
			goto IL_0030;
		}
	}
	{
		ThrowHelper_ThrowIndexArgumentOutOfRange_NeedNonNegNumException_m57AAB1E093F20BFC64BDDBD90FB5B592F582B82F(NULL);
	}

IL_0030:
	{
		RuntimeArray* L_6 = ___0_array;
		NullCheck(L_6);
		int32_t L_7;
		L_7 = il2cpp_codegen_array_get_length(L_6);
		int32_t L_8 = ___1_index;
		int32_t L_9;
		L_9 = ReadOnlyCollection_1_get_Count_mFDC67CFFE108DF01F6236E669E867F19EFA81DE1(__this, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 10));
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_7, L_8))) >= ((int32_t)L_9)))
		{
			goto IL_0046;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA(5, NULL);
	}

IL_0046:
	{
		RuntimeArray* L_10 = ___0_array;
		V_0 = ((XRHandAimStateU5BU5D_t0076289643604F274ED85C15E336BB86EADDDB4F*)IsInstSealed((RuntimeObject*)L_10, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 11)));
		XRHandAimStateU5BU5D_t0076289643604F274ED85C15E336BB86EADDDB4F* L_11 = V_0;
		if (!L_11)
		{
			goto IL_005e;
		}
	}
	{
		RuntimeObject* L_12 = __this->___list;
		XRHandAimStateU5BU5D_t0076289643604F274ED85C15E336BB86EADDDB4F* L_13 = V_0;
		int32_t L_14 = ___1_index;
		NullCheck(L_12);
		InterfaceActionInvoker2< XRHandAimStateU5BU5D_t0076289643604F274ED85C15E336BB86EADDDB4F*, int32_t >::Invoke(5, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 0), L_12, L_13, L_14);
		return;
	}

IL_005e:
	{
		RuntimeArray* L_15 = ___0_array;
		NullCheck(L_15);
		Type_t* L_16;
		L_16 = il2cpp_codegen_object_get_type(L_15);
		NullCheck(L_16);
		Type_t* L_17;
		L_17 = VirtualFuncInvoker0< Type_t* >::Invoke(46, L_16);
		V_1 = L_17;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_18 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(il2cpp_codegen_method_rgctx(method), 12)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_19;
		L_19 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_18, NULL);
		V_2 = L_19;
		Type_t* L_20 = V_1;
		Type_t* L_21 = V_2;
		NullCheck(L_20);
		bool L_22;
		L_22 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(22, L_20, L_21);
		if (L_22)
		{
			goto IL_008c;
		}
	}
	{
		Type_t* L_23 = V_2;
		Type_t* L_24 = V_1;
		NullCheck(L_23);
		bool L_25;
		L_25 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(22, L_23, L_24);
		if (L_25)
		{
			goto IL_008c;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58(NULL);
	}

IL_008c:
	{
		RuntimeArray* L_26 = ___0_array;
		V_3 = ((ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)IsInst((RuntimeObject*)L_26, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_27 = V_3;
		if (L_27)
		{
			goto IL_009b;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58(NULL);
	}

IL_009b:
	{
		RuntimeObject* L_28 = __this->___list;
		NullCheck(L_28);
		int32_t L_29;
		L_29 = InterfaceFuncInvoker0< int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 0), L_28);
		V_4 = L_29;
	}
	try
	{
		{
			V_5 = 0;
			goto IL_00cd_1;
		}

IL_00ad_1:
		{
			ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_30 = V_3;
			int32_t L_31 = ___1_index;
			int32_t L_32 = L_31;
			___1_index = ((int32_t)il2cpp_codegen_add(L_32, 1));
			RuntimeObject* L_33 = __this->___list;
			int32_t L_34 = V_5;
			NullCheck(L_33);
			XRHandAimState_tE6FE6D8596FAD861E3D2D21DD47E1653612C44C3 L_35;
			L_35 = InterfaceFuncInvoker1< XRHandAimState_tE6FE6D8596FAD861E3D2D21DD47E1653612C44C3, int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_33, L_34);
			XRHandAimState_tE6FE6D8596FAD861E3D2D21DD47E1653612C44C3 L_36 = L_35;
			RuntimeObject* L_37 = Box(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4), &L_36);
			NullCheck(L_30);
			ArrayElementTypeCheck (L_30, L_37);
			(L_30)->SetAt(static_cast<il2cpp_array_size_t>(L_32), (RuntimeObject*)L_37);
			int32_t L_38 = V_5;
			V_5 = ((int32_t)il2cpp_codegen_add(L_38, 1));
		}

IL_00cd_1:
		{
			int32_t L_39 = V_5;
			int32_t L_40 = V_4;
			if ((((int32_t)L_39) < ((int32_t)L_40)))
			{
				goto IL_00ad_1;
			}
		}
		{
			goto IL_00dd;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_00d5;
		}
		throw e;
	}

CATCH_00d5:
	{
		ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1* L_41 = ((ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1*)IL2CPP_GET_ACTIVE_EXCEPTION(ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1*));;
		ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58(NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_00dd;
	}

IL_00dd:
	{
		return;
	}
}
// Method Definition Index: 10575
// Method Definition Index: 10576
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ReadOnlyCollection_1_System_Collections_IList_get_Item_m0C01E8E85DD4344AF8452DD14E99A90493ECA1D8 (ReadOnlyCollection_1_t6C8AC0F6B679CC534CE688032CB9948629825DA3* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		int32_t L_1 = ___0_index;
		NullCheck(L_0);
		XRHandAimState_tE6FE6D8596FAD861E3D2D21DD47E1653612C44C3 L_2;
		L_2 = InterfaceFuncInvoker1< XRHandAimState_tE6FE6D8596FAD861E3D2D21DD47E1653612C44C3, int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_0, L_1);
		XRHandAimState_tE6FE6D8596FAD861E3D2D21DD47E1653612C44C3 L_3 = L_2;
		RuntimeObject* L_4 = Box(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4), &L_3);
		return L_4;
	}
}
// Method Definition Index: 10577
// Method Definition Index: 10578
// Method Definition Index: 10579
// Method Definition Index: 10580
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_IsCompatibleObject_mD0FC65F1053DC96613273328BFA447E2C77FF83A (RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	//<source_info:<no-source>:1>
	XRHandAimState_tE6FE6D8596FAD861E3D2D21DD47E1653612C44C3 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		RuntimeObject* L_0 = ___0_value;
		if (((RuntimeObject*)IsInstSealed((RuntimeObject*)L_0, il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 4))))
		{
			goto IL_001f;
		}
	}
	{
		RuntimeObject* L_1 = ___0_value;
		if (L_1)
		{
			goto IL_001d;
		}
	}
	{
		il2cpp_codegen_initobj((&V_0), sizeof(XRHandAimState_tE6FE6D8596FAD861E3D2D21DD47E1653612C44C3));
		XRHandAimState_tE6FE6D8596FAD861E3D2D21DD47E1653612C44C3 L_2 = V_0;
		return false;
	}

IL_001d:
	{
		return (bool)0;
	}

IL_001f:
	{
		return (bool)1;
	}
}
// Method Definition Index: 10581
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_System_Collections_IList_Contains_m9B1E785CBC5BC7876414C429D4B013F02CEBD7B9 (ReadOnlyCollection_1_t6C8AC0F6B679CC534CE688032CB9948629825DA3* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = ___0_value;
		bool L_1;
		L_1 = ReadOnlyCollection_1_IsCompatibleObject_mD0FC65F1053DC96613273328BFA447E2C77FF83A(L_0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 13));
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject* L_2 = ___0_value;
		bool L_3;
		L_3 = ReadOnlyCollection_1_Contains_m05E369B582D9EF63EC9526AD90CF1009187ED150(__this, ((*(XRHandAimState_tE6FE6D8596FAD861E3D2D21DD47E1653612C44C3*)UnBox(L_2, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4)))), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 14));
		return L_3;
	}

IL_0015:
	{
		return (bool)0;
	}
}
// Method Definition Index: 10582
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_System_Collections_IList_IndexOf_mEF30DF68C87C5E38A39A7424F366A5F1CCB632BC (ReadOnlyCollection_1_t6C8AC0F6B679CC534CE688032CB9948629825DA3* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = ___0_value;
		bool L_1;
		L_1 = ReadOnlyCollection_1_IsCompatibleObject_mD0FC65F1053DC96613273328BFA447E2C77FF83A(L_0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 13));
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject* L_2 = ___0_value;
		int32_t L_3;
		L_3 = ReadOnlyCollection_1_IndexOf_m8B7AAB305511A6034A6B6DF982D82D92A532F61F(__this, ((*(XRHandAimState_tE6FE6D8596FAD861E3D2D21DD47E1653612C44C3*)UnBox(L_2, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4)))), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 15));
		return L_3;
	}

IL_0015:
	{
		return (-1);
	}
}
// Method Definition Index: 10583
// Method Definition Index: 10584
// Method Definition Index: 10585
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 10557
// Method Definition Index: 10558
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_get_Count_m8006832EED0D2158E16CB362754FFB4C06977607 (ReadOnlyCollection_1_t32BEC0647A8F6D582FC1DA6D0BC025666732CFA7* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = InterfaceFuncInvoker0< int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 0), L_0);
		return L_1;
	}
}
// Method Definition Index: 10559
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR XRHandCaptureFrame_t224DFB9FF2BA856544F3CCE5DB6CE02918D9F073 ReadOnlyCollection_1_get_Item_m06A0E9CA8A8E8457430226D387092876D97878D0 (ReadOnlyCollection_1_t32BEC0647A8F6D582FC1DA6D0BC025666732CFA7* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		int32_t L_1 = ___0_index;
		NullCheck(L_0);
		XRHandCaptureFrame_t224DFB9FF2BA856544F3CCE5DB6CE02918D9F073 L_2;
		L_2 = InterfaceFuncInvoker1< XRHandCaptureFrame_t224DFB9FF2BA856544F3CCE5DB6CE02918D9F073, int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_0, L_1);
		return L_2;
	}
}
// Method Definition Index: 10560
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_Contains_mB3C75258EC7FF15CCFEF09A6E5940FC77B299138 (ReadOnlyCollection_1_t32BEC0647A8F6D582FC1DA6D0BC025666732CFA7* __this, XRHandCaptureFrame_t224DFB9FF2BA856544F3CCE5DB6CE02918D9F073 ___0_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		XRHandCaptureFrame_t224DFB9FF2BA856544F3CCE5DB6CE02918D9F073 L_1 = ___0_value;
		NullCheck(L_0);
		bool L_2;
		L_2 = InterfaceFuncInvoker1< bool, XRHandCaptureFrame_t224DFB9FF2BA856544F3CCE5DB6CE02918D9F073 >::Invoke(4, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 0), L_0, L_1);
		return L_2;
	}
}
// Method Definition Index: 10561
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlyCollection_1_CopyTo_mD0E377B38662ABA98BD4BC4BAE90B06A0AA2A695 (ReadOnlyCollection_1_t32BEC0647A8F6D582FC1DA6D0BC025666732CFA7* __this, XRHandCaptureFrameU5BU5D_t3EB556AB49AB0D0EF28F537695ECC47024C73EA7* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		XRHandCaptureFrameU5BU5D_t3EB556AB49AB0D0EF28F537695ECC47024C73EA7* L_1 = ___0_array;
		int32_t L_2 = ___1_index;
		NullCheck(L_0);
		InterfaceActionInvoker2< XRHandCaptureFrameU5BU5D_t3EB556AB49AB0D0EF28F537695ECC47024C73EA7*, int32_t >::Invoke(5, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 0), L_0, L_1, L_2);
		return;
	}
}
// Method Definition Index: 10562
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ReadOnlyCollection_1_GetEnumerator_mC06833F9B842CB75D723602F7B911163169B024C (ReadOnlyCollection_1_t32BEC0647A8F6D582FC1DA6D0BC025666732CFA7* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 7), L_0);
		return L_1;
	}
}
// Method Definition Index: 10563
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_IndexOf_mBB075C23AA0EB5E1A04C3170BA4EDF54FCD9E3D3 (ReadOnlyCollection_1_t32BEC0647A8F6D582FC1DA6D0BC025666732CFA7* __this, XRHandCaptureFrame_t224DFB9FF2BA856544F3CCE5DB6CE02918D9F073 ___0_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		XRHandCaptureFrame_t224DFB9FF2BA856544F3CCE5DB6CE02918D9F073 L_1 = ___0_value;
		NullCheck(L_0);
		int32_t L_2;
		L_2 = InterfaceFuncInvoker1< int32_t, XRHandCaptureFrame_t224DFB9FF2BA856544F3CCE5DB6CE02918D9F073 >::Invoke(2, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_0, L_1);
		return L_2;
	}
}
// Method Definition Index: 10564
// Method Definition Index: 10565
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR XRHandCaptureFrame_t224DFB9FF2BA856544F3CCE5DB6CE02918D9F073 ReadOnlyCollection_1_System_Collections_Generic_IListU3CTU3E_get_Item_mA6DF0B6EBBF831A4E985FDBF3E59DB0F2986A91E (ReadOnlyCollection_1_t32BEC0647A8F6D582FC1DA6D0BC025666732CFA7* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		int32_t L_1 = ___0_index;
		NullCheck(L_0);
		XRHandCaptureFrame_t224DFB9FF2BA856544F3CCE5DB6CE02918D9F073 L_2;
		L_2 = InterfaceFuncInvoker1< XRHandCaptureFrame_t224DFB9FF2BA856544F3CCE5DB6CE02918D9F073, int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_0, L_1);
		return L_2;
	}
}
// Method Definition Index: 10566
// Method Definition Index: 10567
// Method Definition Index: 10568
// Method Definition Index: 10569
// Method Definition Index: 10570
// Method Definition Index: 10571
// Method Definition Index: 10572
// Method Definition Index: 10573
// Method Definition Index: 10574
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlyCollection_1_System_Collections_ICollection_CopyTo_mBCF7ECB7C08A78B22BDF556CB12B75143872740A (ReadOnlyCollection_1_t32BEC0647A8F6D582FC1DA6D0BC025666732CFA7* __this, RuntimeArray* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(Type_t_StaticInit);
	//<source_info:<no-source>:1>
	XRHandCaptureFrameU5BU5D_t3EB556AB49AB0D0EF28F537695ECC47024C73EA7* V_0 = NULL;
	Type_t* V_1 = NULL;
	Type_t* V_2 = NULL;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_3 = NULL;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		RuntimeArray* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC(3, NULL);
	}

IL_0009:
	{
		RuntimeArray* L_1 = ___0_array;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = il2cpp_codegen_array_get_rank(L_1);
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_0018;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA(7, NULL);
	}

IL_0018:
	{
		RuntimeArray* L_3 = ___0_array;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(L_3, 0, NULL);
		if (!L_4)
		{
			goto IL_0027;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA(6, NULL);
	}

IL_0027:
	{
		int32_t L_5 = ___1_index;
		if ((((int32_t)L_5) >= ((int32_t)0)))
		{
			goto IL_0030;
		}
	}
	{
		ThrowHelper_ThrowIndexArgumentOutOfRange_NeedNonNegNumException_m57AAB1E093F20BFC64BDDBD90FB5B592F582B82F(NULL);
	}

IL_0030:
	{
		RuntimeArray* L_6 = ___0_array;
		NullCheck(L_6);
		int32_t L_7;
		L_7 = il2cpp_codegen_array_get_length(L_6);
		int32_t L_8 = ___1_index;
		int32_t L_9;
		L_9 = ReadOnlyCollection_1_get_Count_m8006832EED0D2158E16CB362754FFB4C06977607(__this, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 10));
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_7, L_8))) >= ((int32_t)L_9)))
		{
			goto IL_0046;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA(5, NULL);
	}

IL_0046:
	{
		RuntimeArray* L_10 = ___0_array;
		V_0 = ((XRHandCaptureFrameU5BU5D_t3EB556AB49AB0D0EF28F537695ECC47024C73EA7*)IsInstSealed((RuntimeObject*)L_10, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 11)));
		XRHandCaptureFrameU5BU5D_t3EB556AB49AB0D0EF28F537695ECC47024C73EA7* L_11 = V_0;
		if (!L_11)
		{
			goto IL_005e;
		}
	}
	{
		RuntimeObject* L_12 = __this->___list;
		XRHandCaptureFrameU5BU5D_t3EB556AB49AB0D0EF28F537695ECC47024C73EA7* L_13 = V_0;
		int32_t L_14 = ___1_index;
		NullCheck(L_12);
		InterfaceActionInvoker2< XRHandCaptureFrameU5BU5D_t3EB556AB49AB0D0EF28F537695ECC47024C73EA7*, int32_t >::Invoke(5, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 0), L_12, L_13, L_14);
		return;
	}

IL_005e:
	{
		RuntimeArray* L_15 = ___0_array;
		NullCheck(L_15);
		Type_t* L_16;
		L_16 = il2cpp_codegen_object_get_type(L_15);
		NullCheck(L_16);
		Type_t* L_17;
		L_17 = VirtualFuncInvoker0< Type_t* >::Invoke(46, L_16);
		V_1 = L_17;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_18 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(il2cpp_codegen_method_rgctx(method), 12)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_19;
		L_19 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_18, NULL);
		V_2 = L_19;
		Type_t* L_20 = V_1;
		Type_t* L_21 = V_2;
		NullCheck(L_20);
		bool L_22;
		L_22 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(22, L_20, L_21);
		if (L_22)
		{
			goto IL_008c;
		}
	}
	{
		Type_t* L_23 = V_2;
		Type_t* L_24 = V_1;
		NullCheck(L_23);
		bool L_25;
		L_25 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(22, L_23, L_24);
		if (L_25)
		{
			goto IL_008c;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58(NULL);
	}

IL_008c:
	{
		RuntimeArray* L_26 = ___0_array;
		V_3 = ((ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)IsInst((RuntimeObject*)L_26, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_27 = V_3;
		if (L_27)
		{
			goto IL_009b;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58(NULL);
	}

IL_009b:
	{
		RuntimeObject* L_28 = __this->___list;
		NullCheck(L_28);
		int32_t L_29;
		L_29 = InterfaceFuncInvoker0< int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 0), L_28);
		V_4 = L_29;
	}
	try
	{
		{
			V_5 = 0;
			goto IL_00cd_1;
		}

IL_00ad_1:
		{
			ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_30 = V_3;
			int32_t L_31 = ___1_index;
			int32_t L_32 = L_31;
			___1_index = ((int32_t)il2cpp_codegen_add(L_32, 1));
			RuntimeObject* L_33 = __this->___list;
			int32_t L_34 = V_5;
			NullCheck(L_33);
			XRHandCaptureFrame_t224DFB9FF2BA856544F3CCE5DB6CE02918D9F073 L_35;
			L_35 = InterfaceFuncInvoker1< XRHandCaptureFrame_t224DFB9FF2BA856544F3CCE5DB6CE02918D9F073, int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_33, L_34);
			XRHandCaptureFrame_t224DFB9FF2BA856544F3CCE5DB6CE02918D9F073 L_36 = L_35;
			RuntimeObject* L_37 = Box(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4), &L_36);
			NullCheck(L_30);
			ArrayElementTypeCheck (L_30, L_37);
			(L_30)->SetAt(static_cast<il2cpp_array_size_t>(L_32), (RuntimeObject*)L_37);
			int32_t L_38 = V_5;
			V_5 = ((int32_t)il2cpp_codegen_add(L_38, 1));
		}

IL_00cd_1:
		{
			int32_t L_39 = V_5;
			int32_t L_40 = V_4;
			if ((((int32_t)L_39) < ((int32_t)L_40)))
			{
				goto IL_00ad_1;
			}
		}
		{
			goto IL_00dd;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_00d5;
		}
		throw e;
	}

CATCH_00d5:
	{
		ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1* L_41 = ((ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1*)IL2CPP_GET_ACTIVE_EXCEPTION(ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1*));;
		ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58(NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_00dd;
	}

IL_00dd:
	{
		return;
	}
}
// Method Definition Index: 10575
// Method Definition Index: 10576
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ReadOnlyCollection_1_System_Collections_IList_get_Item_m78731CFDA8E455A409DAFB42ACE42DA3739BC5EC (ReadOnlyCollection_1_t32BEC0647A8F6D582FC1DA6D0BC025666732CFA7* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		int32_t L_1 = ___0_index;
		NullCheck(L_0);
		XRHandCaptureFrame_t224DFB9FF2BA856544F3CCE5DB6CE02918D9F073 L_2;
		L_2 = InterfaceFuncInvoker1< XRHandCaptureFrame_t224DFB9FF2BA856544F3CCE5DB6CE02918D9F073, int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_0, L_1);
		XRHandCaptureFrame_t224DFB9FF2BA856544F3CCE5DB6CE02918D9F073 L_3 = L_2;
		RuntimeObject* L_4 = Box(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4), &L_3);
		return L_4;
	}
}
// Method Definition Index: 10577
// Method Definition Index: 10578
// Method Definition Index: 10579
// Method Definition Index: 10580
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_IsCompatibleObject_m573E37B3FAAE399241D1342F625C0F1D26E2A7F1 (RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	//<source_info:<no-source>:1>
	XRHandCaptureFrame_t224DFB9FF2BA856544F3CCE5DB6CE02918D9F073 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		RuntimeObject* L_0 = ___0_value;
		if (((RuntimeObject*)IsInstSealed((RuntimeObject*)L_0, il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 4))))
		{
			goto IL_001f;
		}
	}
	{
		RuntimeObject* L_1 = ___0_value;
		if (L_1)
		{
			goto IL_001d;
		}
	}
	{
		il2cpp_codegen_initobj((&V_0), sizeof(XRHandCaptureFrame_t224DFB9FF2BA856544F3CCE5DB6CE02918D9F073));
		XRHandCaptureFrame_t224DFB9FF2BA856544F3CCE5DB6CE02918D9F073 L_2 = V_0;
		return false;
	}

IL_001d:
	{
		return (bool)0;
	}

IL_001f:
	{
		return (bool)1;
	}
}
// Method Definition Index: 10581
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_System_Collections_IList_Contains_m932E0898A611B8FA384C61FD7A4C00A5958546B7 (ReadOnlyCollection_1_t32BEC0647A8F6D582FC1DA6D0BC025666732CFA7* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = ___0_value;
		bool L_1;
		L_1 = ReadOnlyCollection_1_IsCompatibleObject_m573E37B3FAAE399241D1342F625C0F1D26E2A7F1(L_0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 13));
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject* L_2 = ___0_value;
		bool L_3;
		L_3 = ReadOnlyCollection_1_Contains_mB3C75258EC7FF15CCFEF09A6E5940FC77B299138(__this, ((*(XRHandCaptureFrame_t224DFB9FF2BA856544F3CCE5DB6CE02918D9F073*)UnBox(L_2, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4)))), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 14));
		return L_3;
	}

IL_0015:
	{
		return (bool)0;
	}
}
// Method Definition Index: 10582
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_System_Collections_IList_IndexOf_mC61CD488A54E284882721BC5898ACC44547320E7 (ReadOnlyCollection_1_t32BEC0647A8F6D582FC1DA6D0BC025666732CFA7* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = ___0_value;
		bool L_1;
		L_1 = ReadOnlyCollection_1_IsCompatibleObject_m573E37B3FAAE399241D1342F625C0F1D26E2A7F1(L_0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 13));
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject* L_2 = ___0_value;
		int32_t L_3;
		L_3 = ReadOnlyCollection_1_IndexOf_mBB075C23AA0EB5E1A04C3170BA4EDF54FCD9E3D3(__this, ((*(XRHandCaptureFrame_t224DFB9FF2BA856544F3CCE5DB6CE02918D9F073*)UnBox(L_2, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4)))), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 15));
		return L_3;
	}

IL_0015:
	{
		return (-1);
	}
}
// Method Definition Index: 10583
// Method Definition Index: 10584
// Method Definition Index: 10585
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 10557
// Method Definition Index: 10558
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_get_Count_mD86D7EA54B0FFB06E883D4DAB3BDDAF3F460B561 (ReadOnlyCollection_1_t728B5B26312A9F49C80371AB59BF28B329A732BB* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = InterfaceFuncInvoker0< int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 0), L_0);
		return L_1;
	}
}
// Method Definition Index: 10559
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR XRHandCaptureSnapshot_t956439CF03BF6D3AAE255BB4851DE09108C05DFE ReadOnlyCollection_1_get_Item_mACAA9A76B931A8CAA007109C55BB678489C21E5B (ReadOnlyCollection_1_t728B5B26312A9F49C80371AB59BF28B329A732BB* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		int32_t L_1 = ___0_index;
		NullCheck(L_0);
		XRHandCaptureSnapshot_t956439CF03BF6D3AAE255BB4851DE09108C05DFE L_2;
		L_2 = InterfaceFuncInvoker1< XRHandCaptureSnapshot_t956439CF03BF6D3AAE255BB4851DE09108C05DFE, int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_0, L_1);
		return L_2;
	}
}
// Method Definition Index: 10560
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_Contains_m834BE6A68DD552527DC15F65BA716BA25AF20E32 (ReadOnlyCollection_1_t728B5B26312A9F49C80371AB59BF28B329A732BB* __this, XRHandCaptureSnapshot_t956439CF03BF6D3AAE255BB4851DE09108C05DFE ___0_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		XRHandCaptureSnapshot_t956439CF03BF6D3AAE255BB4851DE09108C05DFE L_1 = ___0_value;
		NullCheck(L_0);
		bool L_2;
		L_2 = InterfaceFuncInvoker1< bool, XRHandCaptureSnapshot_t956439CF03BF6D3AAE255BB4851DE09108C05DFE >::Invoke(4, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 0), L_0, L_1);
		return L_2;
	}
}
// Method Definition Index: 10561
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlyCollection_1_CopyTo_m4D145FD861F185BD7C5C6CDBEDC27C45397F177B (ReadOnlyCollection_1_t728B5B26312A9F49C80371AB59BF28B329A732BB* __this, XRHandCaptureSnapshotU5BU5D_t82ACB21B558889DC6ABE7C08D0CCAAEE90C37083* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		XRHandCaptureSnapshotU5BU5D_t82ACB21B558889DC6ABE7C08D0CCAAEE90C37083* L_1 = ___0_array;
		int32_t L_2 = ___1_index;
		NullCheck(L_0);
		InterfaceActionInvoker2< XRHandCaptureSnapshotU5BU5D_t82ACB21B558889DC6ABE7C08D0CCAAEE90C37083*, int32_t >::Invoke(5, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 0), L_0, L_1, L_2);
		return;
	}
}
// Method Definition Index: 10562
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ReadOnlyCollection_1_GetEnumerator_mAC8CC3427B59EB405811C9105E88545C0EB58B36 (ReadOnlyCollection_1_t728B5B26312A9F49C80371AB59BF28B329A732BB* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 7), L_0);
		return L_1;
	}
}
// Method Definition Index: 10563
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_IndexOf_m7A086C5C0559E7D1C6B12C2C611A0C3C2244EB1B (ReadOnlyCollection_1_t728B5B26312A9F49C80371AB59BF28B329A732BB* __this, XRHandCaptureSnapshot_t956439CF03BF6D3AAE255BB4851DE09108C05DFE ___0_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		XRHandCaptureSnapshot_t956439CF03BF6D3AAE255BB4851DE09108C05DFE L_1 = ___0_value;
		NullCheck(L_0);
		int32_t L_2;
		L_2 = InterfaceFuncInvoker1< int32_t, XRHandCaptureSnapshot_t956439CF03BF6D3AAE255BB4851DE09108C05DFE >::Invoke(2, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_0, L_1);
		return L_2;
	}
}
// Method Definition Index: 10564
// Method Definition Index: 10565
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR XRHandCaptureSnapshot_t956439CF03BF6D3AAE255BB4851DE09108C05DFE ReadOnlyCollection_1_System_Collections_Generic_IListU3CTU3E_get_Item_m274B58CAFDDAF3CBBCFB2D754E902874D52735AE (ReadOnlyCollection_1_t728B5B26312A9F49C80371AB59BF28B329A732BB* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		int32_t L_1 = ___0_index;
		NullCheck(L_0);
		XRHandCaptureSnapshot_t956439CF03BF6D3AAE255BB4851DE09108C05DFE L_2;
		L_2 = InterfaceFuncInvoker1< XRHandCaptureSnapshot_t956439CF03BF6D3AAE255BB4851DE09108C05DFE, int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_0, L_1);
		return L_2;
	}
}
// Method Definition Index: 10566
// Method Definition Index: 10567
// Method Definition Index: 10568
// Method Definition Index: 10569
// Method Definition Index: 10570
// Method Definition Index: 10571
// Method Definition Index: 10572
// Method Definition Index: 10573
// Method Definition Index: 10574
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlyCollection_1_System_Collections_ICollection_CopyTo_m4C3E6313BA25AB97CD802E290AB4132585244F09 (ReadOnlyCollection_1_t728B5B26312A9F49C80371AB59BF28B329A732BB* __this, RuntimeArray* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(Type_t_StaticInit);
	//<source_info:<no-source>:1>
	XRHandCaptureSnapshotU5BU5D_t82ACB21B558889DC6ABE7C08D0CCAAEE90C37083* V_0 = NULL;
	Type_t* V_1 = NULL;
	Type_t* V_2 = NULL;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_3 = NULL;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		RuntimeArray* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC(3, NULL);
	}

IL_0009:
	{
		RuntimeArray* L_1 = ___0_array;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = il2cpp_codegen_array_get_rank(L_1);
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_0018;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA(7, NULL);
	}

IL_0018:
	{
		RuntimeArray* L_3 = ___0_array;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(L_3, 0, NULL);
		if (!L_4)
		{
			goto IL_0027;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA(6, NULL);
	}

IL_0027:
	{
		int32_t L_5 = ___1_index;
		if ((((int32_t)L_5) >= ((int32_t)0)))
		{
			goto IL_0030;
		}
	}
	{
		ThrowHelper_ThrowIndexArgumentOutOfRange_NeedNonNegNumException_m57AAB1E093F20BFC64BDDBD90FB5B592F582B82F(NULL);
	}

IL_0030:
	{
		RuntimeArray* L_6 = ___0_array;
		NullCheck(L_6);
		int32_t L_7;
		L_7 = il2cpp_codegen_array_get_length(L_6);
		int32_t L_8 = ___1_index;
		int32_t L_9;
		L_9 = ReadOnlyCollection_1_get_Count_mD86D7EA54B0FFB06E883D4DAB3BDDAF3F460B561(__this, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 10));
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_7, L_8))) >= ((int32_t)L_9)))
		{
			goto IL_0046;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA(5, NULL);
	}

IL_0046:
	{
		RuntimeArray* L_10 = ___0_array;
		V_0 = ((XRHandCaptureSnapshotU5BU5D_t82ACB21B558889DC6ABE7C08D0CCAAEE90C37083*)IsInstSealed((RuntimeObject*)L_10, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 11)));
		XRHandCaptureSnapshotU5BU5D_t82ACB21B558889DC6ABE7C08D0CCAAEE90C37083* L_11 = V_0;
		if (!L_11)
		{
			goto IL_005e;
		}
	}
	{
		RuntimeObject* L_12 = __this->___list;
		XRHandCaptureSnapshotU5BU5D_t82ACB21B558889DC6ABE7C08D0CCAAEE90C37083* L_13 = V_0;
		int32_t L_14 = ___1_index;
		NullCheck(L_12);
		InterfaceActionInvoker2< XRHandCaptureSnapshotU5BU5D_t82ACB21B558889DC6ABE7C08D0CCAAEE90C37083*, int32_t >::Invoke(5, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 0), L_12, L_13, L_14);
		return;
	}

IL_005e:
	{
		RuntimeArray* L_15 = ___0_array;
		NullCheck(L_15);
		Type_t* L_16;
		L_16 = il2cpp_codegen_object_get_type(L_15);
		NullCheck(L_16);
		Type_t* L_17;
		L_17 = VirtualFuncInvoker0< Type_t* >::Invoke(46, L_16);
		V_1 = L_17;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_18 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(il2cpp_codegen_method_rgctx(method), 12)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_19;
		L_19 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_18, NULL);
		V_2 = L_19;
		Type_t* L_20 = V_1;
		Type_t* L_21 = V_2;
		NullCheck(L_20);
		bool L_22;
		L_22 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(22, L_20, L_21);
		if (L_22)
		{
			goto IL_008c;
		}
	}
	{
		Type_t* L_23 = V_2;
		Type_t* L_24 = V_1;
		NullCheck(L_23);
		bool L_25;
		L_25 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(22, L_23, L_24);
		if (L_25)
		{
			goto IL_008c;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58(NULL);
	}

IL_008c:
	{
		RuntimeArray* L_26 = ___0_array;
		V_3 = ((ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)IsInst((RuntimeObject*)L_26, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_27 = V_3;
		if (L_27)
		{
			goto IL_009b;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58(NULL);
	}

IL_009b:
	{
		RuntimeObject* L_28 = __this->___list;
		NullCheck(L_28);
		int32_t L_29;
		L_29 = InterfaceFuncInvoker0< int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 0), L_28);
		V_4 = L_29;
	}
	try
	{
		{
			V_5 = 0;
			goto IL_00cd_1;
		}

IL_00ad_1:
		{
			ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_30 = V_3;
			int32_t L_31 = ___1_index;
			int32_t L_32 = L_31;
			___1_index = ((int32_t)il2cpp_codegen_add(L_32, 1));
			RuntimeObject* L_33 = __this->___list;
			int32_t L_34 = V_5;
			NullCheck(L_33);
			XRHandCaptureSnapshot_t956439CF03BF6D3AAE255BB4851DE09108C05DFE L_35;
			L_35 = InterfaceFuncInvoker1< XRHandCaptureSnapshot_t956439CF03BF6D3AAE255BB4851DE09108C05DFE, int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_33, L_34);
			XRHandCaptureSnapshot_t956439CF03BF6D3AAE255BB4851DE09108C05DFE L_36 = L_35;
			RuntimeObject* L_37 = Box(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4), &L_36);
			NullCheck(L_30);
			ArrayElementTypeCheck (L_30, L_37);
			(L_30)->SetAt(static_cast<il2cpp_array_size_t>(L_32), (RuntimeObject*)L_37);
			int32_t L_38 = V_5;
			V_5 = ((int32_t)il2cpp_codegen_add(L_38, 1));
		}

IL_00cd_1:
		{
			int32_t L_39 = V_5;
			int32_t L_40 = V_4;
			if ((((int32_t)L_39) < ((int32_t)L_40)))
			{
				goto IL_00ad_1;
			}
		}
		{
			goto IL_00dd;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_00d5;
		}
		throw e;
	}

CATCH_00d5:
	{
		ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1* L_41 = ((ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1*)IL2CPP_GET_ACTIVE_EXCEPTION(ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1*));;
		ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58(NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_00dd;
	}

IL_00dd:
	{
		return;
	}
}
// Method Definition Index: 10575
// Method Definition Index: 10576
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ReadOnlyCollection_1_System_Collections_IList_get_Item_m36FB79BFF72EC4AEC21BDAEBB5010C1ECCA57CAB (ReadOnlyCollection_1_t728B5B26312A9F49C80371AB59BF28B329A732BB* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		int32_t L_1 = ___0_index;
		NullCheck(L_0);
		XRHandCaptureSnapshot_t956439CF03BF6D3AAE255BB4851DE09108C05DFE L_2;
		L_2 = InterfaceFuncInvoker1< XRHandCaptureSnapshot_t956439CF03BF6D3AAE255BB4851DE09108C05DFE, int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_0, L_1);
		XRHandCaptureSnapshot_t956439CF03BF6D3AAE255BB4851DE09108C05DFE L_3 = L_2;
		RuntimeObject* L_4 = Box(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4), &L_3);
		return L_4;
	}
}
// Method Definition Index: 10577
// Method Definition Index: 10578
// Method Definition Index: 10579
// Method Definition Index: 10580
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_IsCompatibleObject_m541D92BA175342AC3F18C83D00620D099E0B2717 (RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	//<source_info:<no-source>:1>
	XRHandCaptureSnapshot_t956439CF03BF6D3AAE255BB4851DE09108C05DFE V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		RuntimeObject* L_0 = ___0_value;
		if (((RuntimeObject*)IsInstSealed((RuntimeObject*)L_0, il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 4))))
		{
			goto IL_001f;
		}
	}
	{
		RuntimeObject* L_1 = ___0_value;
		if (L_1)
		{
			goto IL_001d;
		}
	}
	{
		il2cpp_codegen_initobj((&V_0), sizeof(XRHandCaptureSnapshot_t956439CF03BF6D3AAE255BB4851DE09108C05DFE));
		XRHandCaptureSnapshot_t956439CF03BF6D3AAE255BB4851DE09108C05DFE L_2 = V_0;
		return false;
	}

IL_001d:
	{
		return (bool)0;
	}

IL_001f:
	{
		return (bool)1;
	}
}
// Method Definition Index: 10581
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_System_Collections_IList_Contains_m6386940AAE67626E486857ADEEB68F3728371212 (ReadOnlyCollection_1_t728B5B26312A9F49C80371AB59BF28B329A732BB* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = ___0_value;
		bool L_1;
		L_1 = ReadOnlyCollection_1_IsCompatibleObject_m541D92BA175342AC3F18C83D00620D099E0B2717(L_0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 13));
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject* L_2 = ___0_value;
		bool L_3;
		L_3 = ReadOnlyCollection_1_Contains_m834BE6A68DD552527DC15F65BA716BA25AF20E32(__this, ((*(XRHandCaptureSnapshot_t956439CF03BF6D3AAE255BB4851DE09108C05DFE*)UnBox(L_2, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4)))), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 14));
		return L_3;
	}

IL_0015:
	{
		return (bool)0;
	}
}
// Method Definition Index: 10582
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_System_Collections_IList_IndexOf_m85E6E1A7770FEE5996580E910231359EA24E7375 (ReadOnlyCollection_1_t728B5B26312A9F49C80371AB59BF28B329A732BB* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = ___0_value;
		bool L_1;
		L_1 = ReadOnlyCollection_1_IsCompatibleObject_m541D92BA175342AC3F18C83D00620D099E0B2717(L_0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 13));
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject* L_2 = ___0_value;
		int32_t L_3;
		L_3 = ReadOnlyCollection_1_IndexOf_m7A086C5C0559E7D1C6B12C2C611A0C3C2244EB1B(__this, ((*(XRHandCaptureSnapshot_t956439CF03BF6D3AAE255BB4851DE09108C05DFE*)UnBox(L_2, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4)))), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 15));
		return L_3;
	}

IL_0015:
	{
		return (-1);
	}
}
// Method Definition Index: 10583
// Method Definition Index: 10584
// Method Definition Index: 10585
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 10557
// Method Definition Index: 10558
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_get_Count_mA743C1558CFB688FC0D3592D0A143CB8B1E0C08F (ReadOnlyCollection_1_tF58B2CF3C6F9DEF3999E54AF061B5E0531EAB681* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = InterfaceFuncInvoker0< int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 0), L_0);
		return L_1;
	}
}
// Method Definition Index: 10559
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR XRHandJoint_tDB955774276659AFD2294D516FC8A76A51E94783 ReadOnlyCollection_1_get_Item_m2C444AF5AE917E4CCEC8F328CC2F939CB20215D6 (ReadOnlyCollection_1_tF58B2CF3C6F9DEF3999E54AF061B5E0531EAB681* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		int32_t L_1 = ___0_index;
		NullCheck(L_0);
		XRHandJoint_tDB955774276659AFD2294D516FC8A76A51E94783 L_2;
		L_2 = InterfaceFuncInvoker1< XRHandJoint_tDB955774276659AFD2294D516FC8A76A51E94783, int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_0, L_1);
		return L_2;
	}
}
// Method Definition Index: 10560
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_Contains_mCE8506D9CD8C834EE4F332A14354A1A566B174FB (ReadOnlyCollection_1_tF58B2CF3C6F9DEF3999E54AF061B5E0531EAB681* __this, XRHandJoint_tDB955774276659AFD2294D516FC8A76A51E94783 ___0_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		XRHandJoint_tDB955774276659AFD2294D516FC8A76A51E94783 L_1 = ___0_value;
		NullCheck(L_0);
		bool L_2;
		L_2 = InterfaceFuncInvoker1< bool, XRHandJoint_tDB955774276659AFD2294D516FC8A76A51E94783 >::Invoke(4, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 0), L_0, L_1);
		return L_2;
	}
}
// Method Definition Index: 10561
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlyCollection_1_CopyTo_m5A32CC0BA2B4E1B1B389BFDC7AED2DE738EC1667 (ReadOnlyCollection_1_tF58B2CF3C6F9DEF3999E54AF061B5E0531EAB681* __this, XRHandJointU5BU5D_t194C7684C33D3688873DB8DB9B2A941566857EA1* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		XRHandJointU5BU5D_t194C7684C33D3688873DB8DB9B2A941566857EA1* L_1 = ___0_array;
		int32_t L_2 = ___1_index;
		NullCheck(L_0);
		InterfaceActionInvoker2< XRHandJointU5BU5D_t194C7684C33D3688873DB8DB9B2A941566857EA1*, int32_t >::Invoke(5, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 0), L_0, L_1, L_2);
		return;
	}
}
// Method Definition Index: 10562
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ReadOnlyCollection_1_GetEnumerator_m6F8AD70DE1DD62FB12F9F5B9A489E9F02E68677B (ReadOnlyCollection_1_tF58B2CF3C6F9DEF3999E54AF061B5E0531EAB681* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 7), L_0);
		return L_1;
	}
}
// Method Definition Index: 10563
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_IndexOf_m3DEFA1A533C01170F2DC3E1B596F961FA4016389 (ReadOnlyCollection_1_tF58B2CF3C6F9DEF3999E54AF061B5E0531EAB681* __this, XRHandJoint_tDB955774276659AFD2294D516FC8A76A51E94783 ___0_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		XRHandJoint_tDB955774276659AFD2294D516FC8A76A51E94783 L_1 = ___0_value;
		NullCheck(L_0);
		int32_t L_2;
		L_2 = InterfaceFuncInvoker1< int32_t, XRHandJoint_tDB955774276659AFD2294D516FC8A76A51E94783 >::Invoke(2, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_0, L_1);
		return L_2;
	}
}
// Method Definition Index: 10564
// Method Definition Index: 10565
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR XRHandJoint_tDB955774276659AFD2294D516FC8A76A51E94783 ReadOnlyCollection_1_System_Collections_Generic_IListU3CTU3E_get_Item_m6E1CCA872D5C61DFC1772A25AB032A1A379E0A01 (ReadOnlyCollection_1_tF58B2CF3C6F9DEF3999E54AF061B5E0531EAB681* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		int32_t L_1 = ___0_index;
		NullCheck(L_0);
		XRHandJoint_tDB955774276659AFD2294D516FC8A76A51E94783 L_2;
		L_2 = InterfaceFuncInvoker1< XRHandJoint_tDB955774276659AFD2294D516FC8A76A51E94783, int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_0, L_1);
		return L_2;
	}
}
// Method Definition Index: 10566
// Method Definition Index: 10567
// Method Definition Index: 10568
// Method Definition Index: 10569
// Method Definition Index: 10570
// Method Definition Index: 10571
// Method Definition Index: 10572
// Method Definition Index: 10573
// Method Definition Index: 10574
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlyCollection_1_System_Collections_ICollection_CopyTo_m1AEFB393DA25672CF89DE419475B0F1E27C6E048 (ReadOnlyCollection_1_tF58B2CF3C6F9DEF3999E54AF061B5E0531EAB681* __this, RuntimeArray* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(Type_t_StaticInit);
	//<source_info:<no-source>:1>
	XRHandJointU5BU5D_t194C7684C33D3688873DB8DB9B2A941566857EA1* V_0 = NULL;
	Type_t* V_1 = NULL;
	Type_t* V_2 = NULL;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_3 = NULL;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		RuntimeArray* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC(3, NULL);
	}

IL_0009:
	{
		RuntimeArray* L_1 = ___0_array;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = il2cpp_codegen_array_get_rank(L_1);
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_0018;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA(7, NULL);
	}

IL_0018:
	{
		RuntimeArray* L_3 = ___0_array;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(L_3, 0, NULL);
		if (!L_4)
		{
			goto IL_0027;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA(6, NULL);
	}

IL_0027:
	{
		int32_t L_5 = ___1_index;
		if ((((int32_t)L_5) >= ((int32_t)0)))
		{
			goto IL_0030;
		}
	}
	{
		ThrowHelper_ThrowIndexArgumentOutOfRange_NeedNonNegNumException_m57AAB1E093F20BFC64BDDBD90FB5B592F582B82F(NULL);
	}

IL_0030:
	{
		RuntimeArray* L_6 = ___0_array;
		NullCheck(L_6);
		int32_t L_7;
		L_7 = il2cpp_codegen_array_get_length(L_6);
		int32_t L_8 = ___1_index;
		int32_t L_9;
		L_9 = ReadOnlyCollection_1_get_Count_mA743C1558CFB688FC0D3592D0A143CB8B1E0C08F(__this, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 10));
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_7, L_8))) >= ((int32_t)L_9)))
		{
			goto IL_0046;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA(5, NULL);
	}

IL_0046:
	{
		RuntimeArray* L_10 = ___0_array;
		V_0 = ((XRHandJointU5BU5D_t194C7684C33D3688873DB8DB9B2A941566857EA1*)IsInstSealed((RuntimeObject*)L_10, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 11)));
		XRHandJointU5BU5D_t194C7684C33D3688873DB8DB9B2A941566857EA1* L_11 = V_0;
		if (!L_11)
		{
			goto IL_005e;
		}
	}
	{
		RuntimeObject* L_12 = __this->___list;
		XRHandJointU5BU5D_t194C7684C33D3688873DB8DB9B2A941566857EA1* L_13 = V_0;
		int32_t L_14 = ___1_index;
		NullCheck(L_12);
		InterfaceActionInvoker2< XRHandJointU5BU5D_t194C7684C33D3688873DB8DB9B2A941566857EA1*, int32_t >::Invoke(5, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 0), L_12, L_13, L_14);
		return;
	}

IL_005e:
	{
		RuntimeArray* L_15 = ___0_array;
		NullCheck(L_15);
		Type_t* L_16;
		L_16 = il2cpp_codegen_object_get_type(L_15);
		NullCheck(L_16);
		Type_t* L_17;
		L_17 = VirtualFuncInvoker0< Type_t* >::Invoke(46, L_16);
		V_1 = L_17;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_18 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(il2cpp_codegen_method_rgctx(method), 12)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_19;
		L_19 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_18, NULL);
		V_2 = L_19;
		Type_t* L_20 = V_1;
		Type_t* L_21 = V_2;
		NullCheck(L_20);
		bool L_22;
		L_22 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(22, L_20, L_21);
		if (L_22)
		{
			goto IL_008c;
		}
	}
	{
		Type_t* L_23 = V_2;
		Type_t* L_24 = V_1;
		NullCheck(L_23);
		bool L_25;
		L_25 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(22, L_23, L_24);
		if (L_25)
		{
			goto IL_008c;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58(NULL);
	}

IL_008c:
	{
		RuntimeArray* L_26 = ___0_array;
		V_3 = ((ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)IsInst((RuntimeObject*)L_26, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_27 = V_3;
		if (L_27)
		{
			goto IL_009b;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58(NULL);
	}

IL_009b:
	{
		RuntimeObject* L_28 = __this->___list;
		NullCheck(L_28);
		int32_t L_29;
		L_29 = InterfaceFuncInvoker0< int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 0), L_28);
		V_4 = L_29;
	}
	try
	{
		{
			V_5 = 0;
			goto IL_00cd_1;
		}

IL_00ad_1:
		{
			ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_30 = V_3;
			int32_t L_31 = ___1_index;
			int32_t L_32 = L_31;
			___1_index = ((int32_t)il2cpp_codegen_add(L_32, 1));
			RuntimeObject* L_33 = __this->___list;
			int32_t L_34 = V_5;
			NullCheck(L_33);
			XRHandJoint_tDB955774276659AFD2294D516FC8A76A51E94783 L_35;
			L_35 = InterfaceFuncInvoker1< XRHandJoint_tDB955774276659AFD2294D516FC8A76A51E94783, int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_33, L_34);
			XRHandJoint_tDB955774276659AFD2294D516FC8A76A51E94783 L_36 = L_35;
			RuntimeObject* L_37 = Box(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4), &L_36);
			NullCheck(L_30);
			ArrayElementTypeCheck (L_30, L_37);
			(L_30)->SetAt(static_cast<il2cpp_array_size_t>(L_32), (RuntimeObject*)L_37);
			int32_t L_38 = V_5;
			V_5 = ((int32_t)il2cpp_codegen_add(L_38, 1));
		}

IL_00cd_1:
		{
			int32_t L_39 = V_5;
			int32_t L_40 = V_4;
			if ((((int32_t)L_39) < ((int32_t)L_40)))
			{
				goto IL_00ad_1;
			}
		}
		{
			goto IL_00dd;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_00d5;
		}
		throw e;
	}

CATCH_00d5:
	{
		ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1* L_41 = ((ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1*)IL2CPP_GET_ACTIVE_EXCEPTION(ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1*));;
		ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58(NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_00dd;
	}

IL_00dd:
	{
		return;
	}
}
// Method Definition Index: 10575
// Method Definition Index: 10576
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ReadOnlyCollection_1_System_Collections_IList_get_Item_mA5829FF93F1CF5FE24FD8351D9FE19752D51F06D (ReadOnlyCollection_1_tF58B2CF3C6F9DEF3999E54AF061B5E0531EAB681* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		int32_t L_1 = ___0_index;
		NullCheck(L_0);
		XRHandJoint_tDB955774276659AFD2294D516FC8A76A51E94783 L_2;
		L_2 = InterfaceFuncInvoker1< XRHandJoint_tDB955774276659AFD2294D516FC8A76A51E94783, int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_0, L_1);
		XRHandJoint_tDB955774276659AFD2294D516FC8A76A51E94783 L_3 = L_2;
		RuntimeObject* L_4 = Box(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4), &L_3);
		return L_4;
	}
}
// Method Definition Index: 10577
// Method Definition Index: 10578
// Method Definition Index: 10579
// Method Definition Index: 10580
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_IsCompatibleObject_m5FD99DFA253915A64C82C01BE351511A8E0C3147 (RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	//<source_info:<no-source>:1>
	XRHandJoint_tDB955774276659AFD2294D516FC8A76A51E94783 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		RuntimeObject* L_0 = ___0_value;
		if (((RuntimeObject*)IsInstSealed((RuntimeObject*)L_0, il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 4))))
		{
			goto IL_001f;
		}
	}
	{
		RuntimeObject* L_1 = ___0_value;
		if (L_1)
		{
			goto IL_001d;
		}
	}
	{
		il2cpp_codegen_initobj((&V_0), sizeof(XRHandJoint_tDB955774276659AFD2294D516FC8A76A51E94783));
		XRHandJoint_tDB955774276659AFD2294D516FC8A76A51E94783 L_2 = V_0;
		return false;
	}

IL_001d:
	{
		return (bool)0;
	}

IL_001f:
	{
		return (bool)1;
	}
}
// Method Definition Index: 10581
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_System_Collections_IList_Contains_m04E49C03F42FAFCC154B8DC46CA171434124DFA3 (ReadOnlyCollection_1_tF58B2CF3C6F9DEF3999E54AF061B5E0531EAB681* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = ___0_value;
		bool L_1;
		L_1 = ReadOnlyCollection_1_IsCompatibleObject_m5FD99DFA253915A64C82C01BE351511A8E0C3147(L_0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 13));
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject* L_2 = ___0_value;
		bool L_3;
		L_3 = ReadOnlyCollection_1_Contains_mCE8506D9CD8C834EE4F332A14354A1A566B174FB(__this, ((*(XRHandJoint_tDB955774276659AFD2294D516FC8A76A51E94783*)UnBox(L_2, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4)))), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 14));
		return L_3;
	}

IL_0015:
	{
		return (bool)0;
	}
}
// Method Definition Index: 10582
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_System_Collections_IList_IndexOf_mF307E39006FA2235D6C7ED4359D62D919CF9EC9D (ReadOnlyCollection_1_tF58B2CF3C6F9DEF3999E54AF061B5E0531EAB681* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = ___0_value;
		bool L_1;
		L_1 = ReadOnlyCollection_1_IsCompatibleObject_m5FD99DFA253915A64C82C01BE351511A8E0C3147(L_0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 13));
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject* L_2 = ___0_value;
		int32_t L_3;
		L_3 = ReadOnlyCollection_1_IndexOf_m3DEFA1A533C01170F2DC3E1B596F961FA4016389(__this, ((*(XRHandJoint_tDB955774276659AFD2294D516FC8A76A51E94783*)UnBox(L_2, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4)))), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 15));
		return L_3;
	}

IL_0015:
	{
		return (-1);
	}
}
// Method Definition Index: 10583
// Method Definition Index: 10584
// Method Definition Index: 10585
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 10557
// Method Definition Index: 10558
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_get_Count_m0BCE304E7E37CC4177CC1E19A982FDBB3624BB11 (ReadOnlyCollection_1_t9ED77C33BF650F562B350CE0279E194D11C3611C* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = InterfaceFuncInvoker0< int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 0), L_0);
		return L_1;
	}
}
// Method Definition Index: 10559
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR XRNodeState_t683158812A1D80A6BC73DB97405BB0B795A9111A ReadOnlyCollection_1_get_Item_m558AEDFC0106DCEFBCB7CB94D38FB68AF192388D (ReadOnlyCollection_1_t9ED77C33BF650F562B350CE0279E194D11C3611C* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		int32_t L_1 = ___0_index;
		NullCheck(L_0);
		XRNodeState_t683158812A1D80A6BC73DB97405BB0B795A9111A L_2;
		L_2 = InterfaceFuncInvoker1< XRNodeState_t683158812A1D80A6BC73DB97405BB0B795A9111A, int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_0, L_1);
		return L_2;
	}
}
// Method Definition Index: 10560
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_Contains_mE23598B242FA77FE8C32C4E003738CF735083998 (ReadOnlyCollection_1_t9ED77C33BF650F562B350CE0279E194D11C3611C* __this, XRNodeState_t683158812A1D80A6BC73DB97405BB0B795A9111A ___0_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		XRNodeState_t683158812A1D80A6BC73DB97405BB0B795A9111A L_1 = ___0_value;
		NullCheck(L_0);
		bool L_2;
		L_2 = InterfaceFuncInvoker1< bool, XRNodeState_t683158812A1D80A6BC73DB97405BB0B795A9111A >::Invoke(4, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 0), L_0, L_1);
		return L_2;
	}
}
// Method Definition Index: 10561
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlyCollection_1_CopyTo_mDD9C328DA2FD88F276318FE642A5A9DAE91C4CB2 (ReadOnlyCollection_1_t9ED77C33BF650F562B350CE0279E194D11C3611C* __this, XRNodeStateU5BU5D_tEC64805398059D44C2FBA68AABAEFFB262B93845* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		XRNodeStateU5BU5D_tEC64805398059D44C2FBA68AABAEFFB262B93845* L_1 = ___0_array;
		int32_t L_2 = ___1_index;
		NullCheck(L_0);
		InterfaceActionInvoker2< XRNodeStateU5BU5D_tEC64805398059D44C2FBA68AABAEFFB262B93845*, int32_t >::Invoke(5, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 0), L_0, L_1, L_2);
		return;
	}
}
// Method Definition Index: 10562
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ReadOnlyCollection_1_GetEnumerator_mF958790502D89D2107E4E3EF64EE4D7E5AD7D2F4 (ReadOnlyCollection_1_t9ED77C33BF650F562B350CE0279E194D11C3611C* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 7), L_0);
		return L_1;
	}
}
// Method Definition Index: 10563
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_IndexOf_m009EB6D087F95648DB4B1C4CA56C750BBCE6254A (ReadOnlyCollection_1_t9ED77C33BF650F562B350CE0279E194D11C3611C* __this, XRNodeState_t683158812A1D80A6BC73DB97405BB0B795A9111A ___0_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		XRNodeState_t683158812A1D80A6BC73DB97405BB0B795A9111A L_1 = ___0_value;
		NullCheck(L_0);
		int32_t L_2;
		L_2 = InterfaceFuncInvoker1< int32_t, XRNodeState_t683158812A1D80A6BC73DB97405BB0B795A9111A >::Invoke(2, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_0, L_1);
		return L_2;
	}
}
// Method Definition Index: 10564
// Method Definition Index: 10565
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR XRNodeState_t683158812A1D80A6BC73DB97405BB0B795A9111A ReadOnlyCollection_1_System_Collections_Generic_IListU3CTU3E_get_Item_mC33C6B16C5C491214B2FF80136D9FB55A1A2C322 (ReadOnlyCollection_1_t9ED77C33BF650F562B350CE0279E194D11C3611C* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		int32_t L_1 = ___0_index;
		NullCheck(L_0);
		XRNodeState_t683158812A1D80A6BC73DB97405BB0B795A9111A L_2;
		L_2 = InterfaceFuncInvoker1< XRNodeState_t683158812A1D80A6BC73DB97405BB0B795A9111A, int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_0, L_1);
		return L_2;
	}
}
// Method Definition Index: 10566
// Method Definition Index: 10567
// Method Definition Index: 10568
// Method Definition Index: 10569
// Method Definition Index: 10570
// Method Definition Index: 10571
// Method Definition Index: 10572
// Method Definition Index: 10573
// Method Definition Index: 10574
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlyCollection_1_System_Collections_ICollection_CopyTo_mFE76C70680B6331128166E3D896F25F6520125ED (ReadOnlyCollection_1_t9ED77C33BF650F562B350CE0279E194D11C3611C* __this, RuntimeArray* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(Type_t_StaticInit);
	//<source_info:<no-source>:1>
	XRNodeStateU5BU5D_tEC64805398059D44C2FBA68AABAEFFB262B93845* V_0 = NULL;
	Type_t* V_1 = NULL;
	Type_t* V_2 = NULL;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_3 = NULL;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		RuntimeArray* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC(3, NULL);
	}

IL_0009:
	{
		RuntimeArray* L_1 = ___0_array;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = il2cpp_codegen_array_get_rank(L_1);
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_0018;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA(7, NULL);
	}

IL_0018:
	{
		RuntimeArray* L_3 = ___0_array;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(L_3, 0, NULL);
		if (!L_4)
		{
			goto IL_0027;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA(6, NULL);
	}

IL_0027:
	{
		int32_t L_5 = ___1_index;
		if ((((int32_t)L_5) >= ((int32_t)0)))
		{
			goto IL_0030;
		}
	}
	{
		ThrowHelper_ThrowIndexArgumentOutOfRange_NeedNonNegNumException_m57AAB1E093F20BFC64BDDBD90FB5B592F582B82F(NULL);
	}

IL_0030:
	{
		RuntimeArray* L_6 = ___0_array;
		NullCheck(L_6);
		int32_t L_7;
		L_7 = il2cpp_codegen_array_get_length(L_6);
		int32_t L_8 = ___1_index;
		int32_t L_9;
		L_9 = ReadOnlyCollection_1_get_Count_m0BCE304E7E37CC4177CC1E19A982FDBB3624BB11(__this, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 10));
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_7, L_8))) >= ((int32_t)L_9)))
		{
			goto IL_0046;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA(5, NULL);
	}

IL_0046:
	{
		RuntimeArray* L_10 = ___0_array;
		V_0 = ((XRNodeStateU5BU5D_tEC64805398059D44C2FBA68AABAEFFB262B93845*)IsInstSealed((RuntimeObject*)L_10, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 11)));
		XRNodeStateU5BU5D_tEC64805398059D44C2FBA68AABAEFFB262B93845* L_11 = V_0;
		if (!L_11)
		{
			goto IL_005e;
		}
	}
	{
		RuntimeObject* L_12 = __this->___list;
		XRNodeStateU5BU5D_tEC64805398059D44C2FBA68AABAEFFB262B93845* L_13 = V_0;
		int32_t L_14 = ___1_index;
		NullCheck(L_12);
		InterfaceActionInvoker2< XRNodeStateU5BU5D_tEC64805398059D44C2FBA68AABAEFFB262B93845*, int32_t >::Invoke(5, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 0), L_12, L_13, L_14);
		return;
	}

IL_005e:
	{
		RuntimeArray* L_15 = ___0_array;
		NullCheck(L_15);
		Type_t* L_16;
		L_16 = il2cpp_codegen_object_get_type(L_15);
		NullCheck(L_16);
		Type_t* L_17;
		L_17 = VirtualFuncInvoker0< Type_t* >::Invoke(46, L_16);
		V_1 = L_17;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_18 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(il2cpp_codegen_method_rgctx(method), 12)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_19;
		L_19 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_18, NULL);
		V_2 = L_19;
		Type_t* L_20 = V_1;
		Type_t* L_21 = V_2;
		NullCheck(L_20);
		bool L_22;
		L_22 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(22, L_20, L_21);
		if (L_22)
		{
			goto IL_008c;
		}
	}
	{
		Type_t* L_23 = V_2;
		Type_t* L_24 = V_1;
		NullCheck(L_23);
		bool L_25;
		L_25 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(22, L_23, L_24);
		if (L_25)
		{
			goto IL_008c;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58(NULL);
	}

IL_008c:
	{
		RuntimeArray* L_26 = ___0_array;
		V_3 = ((ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)IsInst((RuntimeObject*)L_26, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_27 = V_3;
		if (L_27)
		{
			goto IL_009b;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58(NULL);
	}

IL_009b:
	{
		RuntimeObject* L_28 = __this->___list;
		NullCheck(L_28);
		int32_t L_29;
		L_29 = InterfaceFuncInvoker0< int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 0), L_28);
		V_4 = L_29;
	}
	try
	{
		{
			V_5 = 0;
			goto IL_00cd_1;
		}

IL_00ad_1:
		{
			ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_30 = V_3;
			int32_t L_31 = ___1_index;
			int32_t L_32 = L_31;
			___1_index = ((int32_t)il2cpp_codegen_add(L_32, 1));
			RuntimeObject* L_33 = __this->___list;
			int32_t L_34 = V_5;
			NullCheck(L_33);
			XRNodeState_t683158812A1D80A6BC73DB97405BB0B795A9111A L_35;
			L_35 = InterfaceFuncInvoker1< XRNodeState_t683158812A1D80A6BC73DB97405BB0B795A9111A, int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_33, L_34);
			XRNodeState_t683158812A1D80A6BC73DB97405BB0B795A9111A L_36 = L_35;
			RuntimeObject* L_37 = Box(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4), &L_36);
			NullCheck(L_30);
			ArrayElementTypeCheck (L_30, L_37);
			(L_30)->SetAt(static_cast<il2cpp_array_size_t>(L_32), (RuntimeObject*)L_37);
			int32_t L_38 = V_5;
			V_5 = ((int32_t)il2cpp_codegen_add(L_38, 1));
		}

IL_00cd_1:
		{
			int32_t L_39 = V_5;
			int32_t L_40 = V_4;
			if ((((int32_t)L_39) < ((int32_t)L_40)))
			{
				goto IL_00ad_1;
			}
		}
		{
			goto IL_00dd;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_00d5;
		}
		throw e;
	}

CATCH_00d5:
	{
		ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1* L_41 = ((ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1*)IL2CPP_GET_ACTIVE_EXCEPTION(ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1*));;
		ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58(NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_00dd;
	}

IL_00dd:
	{
		return;
	}
}
// Method Definition Index: 10575
// Method Definition Index: 10576
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ReadOnlyCollection_1_System_Collections_IList_get_Item_mC40E7C36ECA97D4B5CEC96F80D90607964EA9A4E (ReadOnlyCollection_1_t9ED77C33BF650F562B350CE0279E194D11C3611C* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		int32_t L_1 = ___0_index;
		NullCheck(L_0);
		XRNodeState_t683158812A1D80A6BC73DB97405BB0B795A9111A L_2;
		L_2 = InterfaceFuncInvoker1< XRNodeState_t683158812A1D80A6BC73DB97405BB0B795A9111A, int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_0, L_1);
		XRNodeState_t683158812A1D80A6BC73DB97405BB0B795A9111A L_3 = L_2;
		RuntimeObject* L_4 = Box(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4), &L_3);
		return L_4;
	}
}
// Method Definition Index: 10577
// Method Definition Index: 10578
// Method Definition Index: 10579
// Method Definition Index: 10580
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_IsCompatibleObject_mDEF86102A0BBAFA934465B6A13BEFCA585BA3086 (RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	//<source_info:<no-source>:1>
	XRNodeState_t683158812A1D80A6BC73DB97405BB0B795A9111A V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		RuntimeObject* L_0 = ___0_value;
		if (((RuntimeObject*)IsInstSealed((RuntimeObject*)L_0, il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 4))))
		{
			goto IL_001f;
		}
	}
	{
		RuntimeObject* L_1 = ___0_value;
		if (L_1)
		{
			goto IL_001d;
		}
	}
	{
		il2cpp_codegen_initobj((&V_0), sizeof(XRNodeState_t683158812A1D80A6BC73DB97405BB0B795A9111A));
		XRNodeState_t683158812A1D80A6BC73DB97405BB0B795A9111A L_2 = V_0;
		return false;
	}

IL_001d:
	{
		return (bool)0;
	}

IL_001f:
	{
		return (bool)1;
	}
}
// Method Definition Index: 10581
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_System_Collections_IList_Contains_m263C475FA8529F3424B6F67C511DDC84CC525904 (ReadOnlyCollection_1_t9ED77C33BF650F562B350CE0279E194D11C3611C* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = ___0_value;
		bool L_1;
		L_1 = ReadOnlyCollection_1_IsCompatibleObject_mDEF86102A0BBAFA934465B6A13BEFCA585BA3086(L_0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 13));
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject* L_2 = ___0_value;
		bool L_3;
		L_3 = ReadOnlyCollection_1_Contains_mE23598B242FA77FE8C32C4E003738CF735083998(__this, ((*(XRNodeState_t683158812A1D80A6BC73DB97405BB0B795A9111A*)UnBox(L_2, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4)))), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 14));
		return L_3;
	}

IL_0015:
	{
		return (bool)0;
	}
}
// Method Definition Index: 10582
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_System_Collections_IList_IndexOf_mF4A5EB45244CCD105BC8FA011774197CF4E4B2D3 (ReadOnlyCollection_1_t9ED77C33BF650F562B350CE0279E194D11C3611C* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = ___0_value;
		bool L_1;
		L_1 = ReadOnlyCollection_1_IsCompatibleObject_mDEF86102A0BBAFA934465B6A13BEFCA585BA3086(L_0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 13));
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject* L_2 = ___0_value;
		int32_t L_3;
		L_3 = ReadOnlyCollection_1_IndexOf_m009EB6D087F95648DB4B1C4CA56C750BBCE6254A(__this, ((*(XRNodeState_t683158812A1D80A6BC73DB97405BB0B795A9111A*)UnBox(L_2, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4)))), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 15));
		return L_3;
	}

IL_0015:
	{
		return (-1);
	}
}
// Method Definition Index: 10583
// Method Definition Index: 10584
// Method Definition Index: 10585
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 10557
// Method Definition Index: 10558
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_get_Count_mB98C38D2E69C0937FA2F0C8494D7EFDECDA1992D (ReadOnlyCollection_1_t95C4CE7A3281F650247DAD055168AC75CA2E0D94* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = InterfaceFuncInvoker0< int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 0), L_0);
		return L_1;
	}
}
// Method Definition Index: 10559
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR XRView_t70E23918C68E24DB22A8614AA8717B3BA213FAB5 ReadOnlyCollection_1_get_Item_m87088EF741EB61E52C6384588FB1205AA6860C00 (ReadOnlyCollection_1_t95C4CE7A3281F650247DAD055168AC75CA2E0D94* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		int32_t L_1 = ___0_index;
		NullCheck(L_0);
		XRView_t70E23918C68E24DB22A8614AA8717B3BA213FAB5 L_2;
		L_2 = InterfaceFuncInvoker1< XRView_t70E23918C68E24DB22A8614AA8717B3BA213FAB5, int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_0, L_1);
		return L_2;
	}
}
// Method Definition Index: 10560
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_Contains_m332A74A4BF707ACE74A3A01578A1D5781F7A9F6C (ReadOnlyCollection_1_t95C4CE7A3281F650247DAD055168AC75CA2E0D94* __this, XRView_t70E23918C68E24DB22A8614AA8717B3BA213FAB5 ___0_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		XRView_t70E23918C68E24DB22A8614AA8717B3BA213FAB5 L_1 = ___0_value;
		NullCheck(L_0);
		bool L_2;
		L_2 = InterfaceFuncInvoker1< bool, XRView_t70E23918C68E24DB22A8614AA8717B3BA213FAB5 >::Invoke(4, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 0), L_0, L_1);
		return L_2;
	}
}
// Method Definition Index: 10561
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlyCollection_1_CopyTo_m370E2D571586AA9BB0C1C32CA66160D27B203EE7 (ReadOnlyCollection_1_t95C4CE7A3281F650247DAD055168AC75CA2E0D94* __this, XRViewU5BU5D_t46B2B3C0D45A670846E736AFB362448972CB513D* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		XRViewU5BU5D_t46B2B3C0D45A670846E736AFB362448972CB513D* L_1 = ___0_array;
		int32_t L_2 = ___1_index;
		NullCheck(L_0);
		InterfaceActionInvoker2< XRViewU5BU5D_t46B2B3C0D45A670846E736AFB362448972CB513D*, int32_t >::Invoke(5, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 0), L_0, L_1, L_2);
		return;
	}
}
// Method Definition Index: 10562
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ReadOnlyCollection_1_GetEnumerator_m6ACA6F02AB7E142398BCB9BBD71D50FF8B33441F (ReadOnlyCollection_1_t95C4CE7A3281F650247DAD055168AC75CA2E0D94* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 7), L_0);
		return L_1;
	}
}
// Method Definition Index: 10563
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_IndexOf_mBBC67B329E7A47849082B0A54D1039AB99E5B231 (ReadOnlyCollection_1_t95C4CE7A3281F650247DAD055168AC75CA2E0D94* __this, XRView_t70E23918C68E24DB22A8614AA8717B3BA213FAB5 ___0_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		XRView_t70E23918C68E24DB22A8614AA8717B3BA213FAB5 L_1 = ___0_value;
		NullCheck(L_0);
		int32_t L_2;
		L_2 = InterfaceFuncInvoker1< int32_t, XRView_t70E23918C68E24DB22A8614AA8717B3BA213FAB5 >::Invoke(2, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_0, L_1);
		return L_2;
	}
}
// Method Definition Index: 10564
// Method Definition Index: 10565
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR XRView_t70E23918C68E24DB22A8614AA8717B3BA213FAB5 ReadOnlyCollection_1_System_Collections_Generic_IListU3CTU3E_get_Item_m26FAC87F6DD689E2EE5976B900C19ADBCD310B74 (ReadOnlyCollection_1_t95C4CE7A3281F650247DAD055168AC75CA2E0D94* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		int32_t L_1 = ___0_index;
		NullCheck(L_0);
		XRView_t70E23918C68E24DB22A8614AA8717B3BA213FAB5 L_2;
		L_2 = InterfaceFuncInvoker1< XRView_t70E23918C68E24DB22A8614AA8717B3BA213FAB5, int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_0, L_1);
		return L_2;
	}
}
// Method Definition Index: 10566
// Method Definition Index: 10567
// Method Definition Index: 10568
// Method Definition Index: 10569
// Method Definition Index: 10570
// Method Definition Index: 10571
// Method Definition Index: 10572
// Method Definition Index: 10573
// Method Definition Index: 10574
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlyCollection_1_System_Collections_ICollection_CopyTo_m263CC09162902C66BE08F314A2DECB51BEC1B153 (ReadOnlyCollection_1_t95C4CE7A3281F650247DAD055168AC75CA2E0D94* __this, RuntimeArray* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(Type_t_StaticInit);
	//<source_info:<no-source>:1>
	XRViewU5BU5D_t46B2B3C0D45A670846E736AFB362448972CB513D* V_0 = NULL;
	Type_t* V_1 = NULL;
	Type_t* V_2 = NULL;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_3 = NULL;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		RuntimeArray* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC(3, NULL);
	}

IL_0009:
	{
		RuntimeArray* L_1 = ___0_array;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = il2cpp_codegen_array_get_rank(L_1);
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_0018;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA(7, NULL);
	}

IL_0018:
	{
		RuntimeArray* L_3 = ___0_array;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(L_3, 0, NULL);
		if (!L_4)
		{
			goto IL_0027;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA(6, NULL);
	}

IL_0027:
	{
		int32_t L_5 = ___1_index;
		if ((((int32_t)L_5) >= ((int32_t)0)))
		{
			goto IL_0030;
		}
	}
	{
		ThrowHelper_ThrowIndexArgumentOutOfRange_NeedNonNegNumException_m57AAB1E093F20BFC64BDDBD90FB5B592F582B82F(NULL);
	}

IL_0030:
	{
		RuntimeArray* L_6 = ___0_array;
		NullCheck(L_6);
		int32_t L_7;
		L_7 = il2cpp_codegen_array_get_length(L_6);
		int32_t L_8 = ___1_index;
		int32_t L_9;
		L_9 = ReadOnlyCollection_1_get_Count_mB98C38D2E69C0937FA2F0C8494D7EFDECDA1992D(__this, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 10));
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_7, L_8))) >= ((int32_t)L_9)))
		{
			goto IL_0046;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA(5, NULL);
	}

IL_0046:
	{
		RuntimeArray* L_10 = ___0_array;
		V_0 = ((XRViewU5BU5D_t46B2B3C0D45A670846E736AFB362448972CB513D*)IsInstSealed((RuntimeObject*)L_10, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 11)));
		XRViewU5BU5D_t46B2B3C0D45A670846E736AFB362448972CB513D* L_11 = V_0;
		if (!L_11)
		{
			goto IL_005e;
		}
	}
	{
		RuntimeObject* L_12 = __this->___list;
		XRViewU5BU5D_t46B2B3C0D45A670846E736AFB362448972CB513D* L_13 = V_0;
		int32_t L_14 = ___1_index;
		NullCheck(L_12);
		InterfaceActionInvoker2< XRViewU5BU5D_t46B2B3C0D45A670846E736AFB362448972CB513D*, int32_t >::Invoke(5, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 0), L_12, L_13, L_14);
		return;
	}

IL_005e:
	{
		RuntimeArray* L_15 = ___0_array;
		NullCheck(L_15);
		Type_t* L_16;
		L_16 = il2cpp_codegen_object_get_type(L_15);
		NullCheck(L_16);
		Type_t* L_17;
		L_17 = VirtualFuncInvoker0< Type_t* >::Invoke(46, L_16);
		V_1 = L_17;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_18 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(il2cpp_codegen_method_rgctx(method), 12)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_19;
		L_19 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_18, NULL);
		V_2 = L_19;
		Type_t* L_20 = V_1;
		Type_t* L_21 = V_2;
		NullCheck(L_20);
		bool L_22;
		L_22 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(22, L_20, L_21);
		if (L_22)
		{
			goto IL_008c;
		}
	}
	{
		Type_t* L_23 = V_2;
		Type_t* L_24 = V_1;
		NullCheck(L_23);
		bool L_25;
		L_25 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(22, L_23, L_24);
		if (L_25)
		{
			goto IL_008c;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58(NULL);
	}

IL_008c:
	{
		RuntimeArray* L_26 = ___0_array;
		V_3 = ((ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)IsInst((RuntimeObject*)L_26, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_27 = V_3;
		if (L_27)
		{
			goto IL_009b;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58(NULL);
	}

IL_009b:
	{
		RuntimeObject* L_28 = __this->___list;
		NullCheck(L_28);
		int32_t L_29;
		L_29 = InterfaceFuncInvoker0< int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 0), L_28);
		V_4 = L_29;
	}
	try
	{
		{
			V_5 = 0;
			goto IL_00cd_1;
		}

IL_00ad_1:
		{
			ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_30 = V_3;
			int32_t L_31 = ___1_index;
			int32_t L_32 = L_31;
			___1_index = ((int32_t)il2cpp_codegen_add(L_32, 1));
			RuntimeObject* L_33 = __this->___list;
			int32_t L_34 = V_5;
			NullCheck(L_33);
			XRView_t70E23918C68E24DB22A8614AA8717B3BA213FAB5 L_35;
			L_35 = InterfaceFuncInvoker1< XRView_t70E23918C68E24DB22A8614AA8717B3BA213FAB5, int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_33, L_34);
			XRView_t70E23918C68E24DB22A8614AA8717B3BA213FAB5 L_36 = L_35;
			RuntimeObject* L_37 = Box(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4), &L_36);
			NullCheck(L_30);
			ArrayElementTypeCheck (L_30, L_37);
			(L_30)->SetAt(static_cast<il2cpp_array_size_t>(L_32), (RuntimeObject*)L_37);
			int32_t L_38 = V_5;
			V_5 = ((int32_t)il2cpp_codegen_add(L_38, 1));
		}

IL_00cd_1:
		{
			int32_t L_39 = V_5;
			int32_t L_40 = V_4;
			if ((((int32_t)L_39) < ((int32_t)L_40)))
			{
				goto IL_00ad_1;
			}
		}
		{
			goto IL_00dd;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_00d5;
		}
		throw e;
	}

CATCH_00d5:
	{
		ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1* L_41 = ((ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1*)IL2CPP_GET_ACTIVE_EXCEPTION(ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1*));;
		ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58(NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_00dd;
	}

IL_00dd:
	{
		return;
	}
}
// Method Definition Index: 10575
// Method Definition Index: 10576
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ReadOnlyCollection_1_System_Collections_IList_get_Item_mD818F5036E578A39D8EADB0EE282B1D4BDE97D94 (ReadOnlyCollection_1_t95C4CE7A3281F650247DAD055168AC75CA2E0D94* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		int32_t L_1 = ___0_index;
		NullCheck(L_0);
		XRView_t70E23918C68E24DB22A8614AA8717B3BA213FAB5 L_2;
		L_2 = InterfaceFuncInvoker1< XRView_t70E23918C68E24DB22A8614AA8717B3BA213FAB5, int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_0, L_1);
		XRView_t70E23918C68E24DB22A8614AA8717B3BA213FAB5 L_3 = L_2;
		RuntimeObject* L_4 = Box(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4), &L_3);
		return L_4;
	}
}
// Method Definition Index: 10577
// Method Definition Index: 10578
// Method Definition Index: 10579
// Method Definition Index: 10580
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_IsCompatibleObject_mBBF52CC85D738F114987C654B0B3E2F4C1AE696A (RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	//<source_info:<no-source>:1>
	XRView_t70E23918C68E24DB22A8614AA8717B3BA213FAB5 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		RuntimeObject* L_0 = ___0_value;
		if (((RuntimeObject*)IsInstSealed((RuntimeObject*)L_0, il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 4))))
		{
			goto IL_001f;
		}
	}
	{
		RuntimeObject* L_1 = ___0_value;
		if (L_1)
		{
			goto IL_001d;
		}
	}
	{
		il2cpp_codegen_initobj((&V_0), sizeof(XRView_t70E23918C68E24DB22A8614AA8717B3BA213FAB5));
		XRView_t70E23918C68E24DB22A8614AA8717B3BA213FAB5 L_2 = V_0;
		return false;
	}

IL_001d:
	{
		return (bool)0;
	}

IL_001f:
	{
		return (bool)1;
	}
}
// Method Definition Index: 10581
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_System_Collections_IList_Contains_mA66538AB42953377E4B816FBCAEB36A866CF949E (ReadOnlyCollection_1_t95C4CE7A3281F650247DAD055168AC75CA2E0D94* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = ___0_value;
		bool L_1;
		L_1 = ReadOnlyCollection_1_IsCompatibleObject_mBBF52CC85D738F114987C654B0B3E2F4C1AE696A(L_0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 13));
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject* L_2 = ___0_value;
		bool L_3;
		L_3 = ReadOnlyCollection_1_Contains_m332A74A4BF707ACE74A3A01578A1D5781F7A9F6C(__this, ((*(XRView_t70E23918C68E24DB22A8614AA8717B3BA213FAB5*)UnBox(L_2, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4)))), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 14));
		return L_3;
	}

IL_0015:
	{
		return (bool)0;
	}
}
// Method Definition Index: 10582
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_System_Collections_IList_IndexOf_m5A9205AD632B40D73D44324A2CD475BEBC030CEB (ReadOnlyCollection_1_t95C4CE7A3281F650247DAD055168AC75CA2E0D94* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = ___0_value;
		bool L_1;
		L_1 = ReadOnlyCollection_1_IsCompatibleObject_mBBF52CC85D738F114987C654B0B3E2F4C1AE696A(L_0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 13));
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject* L_2 = ___0_value;
		int32_t L_3;
		L_3 = ReadOnlyCollection_1_IndexOf_mBBC67B329E7A47849082B0A54D1039AB99E5B231(__this, ((*(XRView_t70E23918C68E24DB22A8614AA8717B3BA213FAB5*)UnBox(L_2, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4)))), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 15));
		return L_3;
	}

IL_0015:
	{
		return (-1);
	}
}
// Method Definition Index: 10583
// Method Definition Index: 10584
// Method Definition Index: 10585
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 10557
// Method Definition Index: 10558
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_get_Count_m6C7D028C89C35DA23289119F3911ECCAB88803E2 (ReadOnlyCollection_1_tF7EFB99EE41013DF4F1A2A749D0A473AE2657BC5* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = InterfaceFuncInvoker0< int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 0), L_0);
		return L_1;
	}
}
// Method Definition Index: 10559
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR XrAgenticExternalToolParameterMETAX1_tD64F65C7979C70B6990F1B0746E79494F94DB625 ReadOnlyCollection_1_get_Item_mCF80B41D7FB0D70CD658774BD93FBEE77DB7C4B8 (ReadOnlyCollection_1_tF7EFB99EE41013DF4F1A2A749D0A473AE2657BC5* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		int32_t L_1 = ___0_index;
		NullCheck(L_0);
		XrAgenticExternalToolParameterMETAX1_tD64F65C7979C70B6990F1B0746E79494F94DB625 L_2;
		L_2 = InterfaceFuncInvoker1< XrAgenticExternalToolParameterMETAX1_tD64F65C7979C70B6990F1B0746E79494F94DB625, int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_0, L_1);
		return L_2;
	}
}
// Method Definition Index: 10560
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_Contains_m1513FB3F718C0951722ED431B611F1AB8B37D454 (ReadOnlyCollection_1_tF7EFB99EE41013DF4F1A2A749D0A473AE2657BC5* __this, XrAgenticExternalToolParameterMETAX1_tD64F65C7979C70B6990F1B0746E79494F94DB625 ___0_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		XrAgenticExternalToolParameterMETAX1_tD64F65C7979C70B6990F1B0746E79494F94DB625 L_1 = ___0_value;
		NullCheck(L_0);
		bool L_2;
		L_2 = InterfaceFuncInvoker1< bool, XrAgenticExternalToolParameterMETAX1_tD64F65C7979C70B6990F1B0746E79494F94DB625 >::Invoke(4, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 0), L_0, L_1);
		return L_2;
	}
}
// Method Definition Index: 10561
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlyCollection_1_CopyTo_mD3BDECAEB327F41E9A0AAF3395D55AEA4A35CEBA (ReadOnlyCollection_1_tF7EFB99EE41013DF4F1A2A749D0A473AE2657BC5* __this, XrAgenticExternalToolParameterMETAX1U5BU5D_t4371BF54F74A98EE9DB85976F39AEF422DCBE143* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		XrAgenticExternalToolParameterMETAX1U5BU5D_t4371BF54F74A98EE9DB85976F39AEF422DCBE143* L_1 = ___0_array;
		int32_t L_2 = ___1_index;
		NullCheck(L_0);
		InterfaceActionInvoker2< XrAgenticExternalToolParameterMETAX1U5BU5D_t4371BF54F74A98EE9DB85976F39AEF422DCBE143*, int32_t >::Invoke(5, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 0), L_0, L_1, L_2);
		return;
	}
}
// Method Definition Index: 10562
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ReadOnlyCollection_1_GetEnumerator_m2DCF5D0AA9653BD92315DD9664E845E593BFF497 (ReadOnlyCollection_1_tF7EFB99EE41013DF4F1A2A749D0A473AE2657BC5* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 7), L_0);
		return L_1;
	}
}
// Method Definition Index: 10563
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_IndexOf_m23E90012DD79F3FD0F5E2390D1A84913B1C9753B (ReadOnlyCollection_1_tF7EFB99EE41013DF4F1A2A749D0A473AE2657BC5* __this, XrAgenticExternalToolParameterMETAX1_tD64F65C7979C70B6990F1B0746E79494F94DB625 ___0_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		XrAgenticExternalToolParameterMETAX1_tD64F65C7979C70B6990F1B0746E79494F94DB625 L_1 = ___0_value;
		NullCheck(L_0);
		int32_t L_2;
		L_2 = InterfaceFuncInvoker1< int32_t, XrAgenticExternalToolParameterMETAX1_tD64F65C7979C70B6990F1B0746E79494F94DB625 >::Invoke(2, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_0, L_1);
		return L_2;
	}
}
// Method Definition Index: 10564
// Method Definition Index: 10565
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR XrAgenticExternalToolParameterMETAX1_tD64F65C7979C70B6990F1B0746E79494F94DB625 ReadOnlyCollection_1_System_Collections_Generic_IListU3CTU3E_get_Item_mDCBC750515FCF1F0CCADDB36F28D49579CD26D43 (ReadOnlyCollection_1_tF7EFB99EE41013DF4F1A2A749D0A473AE2657BC5* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		int32_t L_1 = ___0_index;
		NullCheck(L_0);
		XrAgenticExternalToolParameterMETAX1_tD64F65C7979C70B6990F1B0746E79494F94DB625 L_2;
		L_2 = InterfaceFuncInvoker1< XrAgenticExternalToolParameterMETAX1_tD64F65C7979C70B6990F1B0746E79494F94DB625, int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_0, L_1);
		return L_2;
	}
}
// Method Definition Index: 10566
// Method Definition Index: 10567
// Method Definition Index: 10568
// Method Definition Index: 10569
// Method Definition Index: 10570
// Method Definition Index: 10571
// Method Definition Index: 10572
// Method Definition Index: 10573
// Method Definition Index: 10574
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlyCollection_1_System_Collections_ICollection_CopyTo_mBB13BB250A5B9DA85EEB8F9F96FA7D93F259DB8F (ReadOnlyCollection_1_tF7EFB99EE41013DF4F1A2A749D0A473AE2657BC5* __this, RuntimeArray* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(Type_t_StaticInit);
	//<source_info:<no-source>:1>
	XrAgenticExternalToolParameterMETAX1U5BU5D_t4371BF54F74A98EE9DB85976F39AEF422DCBE143* V_0 = NULL;
	Type_t* V_1 = NULL;
	Type_t* V_2 = NULL;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_3 = NULL;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		RuntimeArray* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC(3, NULL);
	}

IL_0009:
	{
		RuntimeArray* L_1 = ___0_array;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = il2cpp_codegen_array_get_rank(L_1);
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_0018;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA(7, NULL);
	}

IL_0018:
	{
		RuntimeArray* L_3 = ___0_array;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(L_3, 0, NULL);
		if (!L_4)
		{
			goto IL_0027;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA(6, NULL);
	}

IL_0027:
	{
		int32_t L_5 = ___1_index;
		if ((((int32_t)L_5) >= ((int32_t)0)))
		{
			goto IL_0030;
		}
	}
	{
		ThrowHelper_ThrowIndexArgumentOutOfRange_NeedNonNegNumException_m57AAB1E093F20BFC64BDDBD90FB5B592F582B82F(NULL);
	}

IL_0030:
	{
		RuntimeArray* L_6 = ___0_array;
		NullCheck(L_6);
		int32_t L_7;
		L_7 = il2cpp_codegen_array_get_length(L_6);
		int32_t L_8 = ___1_index;
		int32_t L_9;
		L_9 = ReadOnlyCollection_1_get_Count_m6C7D028C89C35DA23289119F3911ECCAB88803E2(__this, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 10));
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_7, L_8))) >= ((int32_t)L_9)))
		{
			goto IL_0046;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA(5, NULL);
	}

IL_0046:
	{
		RuntimeArray* L_10 = ___0_array;
		V_0 = ((XrAgenticExternalToolParameterMETAX1U5BU5D_t4371BF54F74A98EE9DB85976F39AEF422DCBE143*)IsInstSealed((RuntimeObject*)L_10, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 11)));
		XrAgenticExternalToolParameterMETAX1U5BU5D_t4371BF54F74A98EE9DB85976F39AEF422DCBE143* L_11 = V_0;
		if (!L_11)
		{
			goto IL_005e;
		}
	}
	{
		RuntimeObject* L_12 = __this->___list;
		XrAgenticExternalToolParameterMETAX1U5BU5D_t4371BF54F74A98EE9DB85976F39AEF422DCBE143* L_13 = V_0;
		int32_t L_14 = ___1_index;
		NullCheck(L_12);
		InterfaceActionInvoker2< XrAgenticExternalToolParameterMETAX1U5BU5D_t4371BF54F74A98EE9DB85976F39AEF422DCBE143*, int32_t >::Invoke(5, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 0), L_12, L_13, L_14);
		return;
	}

IL_005e:
	{
		RuntimeArray* L_15 = ___0_array;
		NullCheck(L_15);
		Type_t* L_16;
		L_16 = il2cpp_codegen_object_get_type(L_15);
		NullCheck(L_16);
		Type_t* L_17;
		L_17 = VirtualFuncInvoker0< Type_t* >::Invoke(46, L_16);
		V_1 = L_17;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_18 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(il2cpp_codegen_method_rgctx(method), 12)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_19;
		L_19 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_18, NULL);
		V_2 = L_19;
		Type_t* L_20 = V_1;
		Type_t* L_21 = V_2;
		NullCheck(L_20);
		bool L_22;
		L_22 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(22, L_20, L_21);
		if (L_22)
		{
			goto IL_008c;
		}
	}
	{
		Type_t* L_23 = V_2;
		Type_t* L_24 = V_1;
		NullCheck(L_23);
		bool L_25;
		L_25 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(22, L_23, L_24);
		if (L_25)
		{
			goto IL_008c;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58(NULL);
	}

IL_008c:
	{
		RuntimeArray* L_26 = ___0_array;
		V_3 = ((ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)IsInst((RuntimeObject*)L_26, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_27 = V_3;
		if (L_27)
		{
			goto IL_009b;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58(NULL);
	}

IL_009b:
	{
		RuntimeObject* L_28 = __this->___list;
		NullCheck(L_28);
		int32_t L_29;
		L_29 = InterfaceFuncInvoker0< int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 0), L_28);
		V_4 = L_29;
	}
	try
	{
		{
			V_5 = 0;
			goto IL_00cd_1;
		}

IL_00ad_1:
		{
			ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_30 = V_3;
			int32_t L_31 = ___1_index;
			int32_t L_32 = L_31;
			___1_index = ((int32_t)il2cpp_codegen_add(L_32, 1));
			RuntimeObject* L_33 = __this->___list;
			int32_t L_34 = V_5;
			NullCheck(L_33);
			XrAgenticExternalToolParameterMETAX1_tD64F65C7979C70B6990F1B0746E79494F94DB625 L_35;
			L_35 = InterfaceFuncInvoker1< XrAgenticExternalToolParameterMETAX1_tD64F65C7979C70B6990F1B0746E79494F94DB625, int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_33, L_34);
			XrAgenticExternalToolParameterMETAX1_tD64F65C7979C70B6990F1B0746E79494F94DB625 L_36 = L_35;
			RuntimeObject* L_37 = Box(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4), &L_36);
			NullCheck(L_30);
			ArrayElementTypeCheck (L_30, L_37);
			(L_30)->SetAt(static_cast<il2cpp_array_size_t>(L_32), (RuntimeObject*)L_37);
			int32_t L_38 = V_5;
			V_5 = ((int32_t)il2cpp_codegen_add(L_38, 1));
		}

IL_00cd_1:
		{
			int32_t L_39 = V_5;
			int32_t L_40 = V_4;
			if ((((int32_t)L_39) < ((int32_t)L_40)))
			{
				goto IL_00ad_1;
			}
		}
		{
			goto IL_00dd;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_00d5;
		}
		throw e;
	}

CATCH_00d5:
	{
		ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1* L_41 = ((ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1*)IL2CPP_GET_ACTIVE_EXCEPTION(ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1*));;
		ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58(NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_00dd;
	}

IL_00dd:
	{
		return;
	}
}
// Method Definition Index: 10575
// Method Definition Index: 10576
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ReadOnlyCollection_1_System_Collections_IList_get_Item_m4366F19B1F15DFB078EF20949D2C57EF1E79761E (ReadOnlyCollection_1_tF7EFB99EE41013DF4F1A2A749D0A473AE2657BC5* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		int32_t L_1 = ___0_index;
		NullCheck(L_0);
		XrAgenticExternalToolParameterMETAX1_tD64F65C7979C70B6990F1B0746E79494F94DB625 L_2;
		L_2 = InterfaceFuncInvoker1< XrAgenticExternalToolParameterMETAX1_tD64F65C7979C70B6990F1B0746E79494F94DB625, int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_0, L_1);
		XrAgenticExternalToolParameterMETAX1_tD64F65C7979C70B6990F1B0746E79494F94DB625 L_3 = L_2;
		RuntimeObject* L_4 = Box(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4), &L_3);
		return L_4;
	}
}
// Method Definition Index: 10577
// Method Definition Index: 10578
// Method Definition Index: 10579
// Method Definition Index: 10580
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_IsCompatibleObject_mD0095D90AA1974A7D86685F99BCE71A6E7D20D93 (RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	//<source_info:<no-source>:1>
	XrAgenticExternalToolParameterMETAX1_tD64F65C7979C70B6990F1B0746E79494F94DB625 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		RuntimeObject* L_0 = ___0_value;
		if (((RuntimeObject*)IsInstSealed((RuntimeObject*)L_0, il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 4))))
		{
			goto IL_001f;
		}
	}
	{
		RuntimeObject* L_1 = ___0_value;
		if (L_1)
		{
			goto IL_001d;
		}
	}
	{
		il2cpp_codegen_initobj((&V_0), sizeof(XrAgenticExternalToolParameterMETAX1_tD64F65C7979C70B6990F1B0746E79494F94DB625));
		XrAgenticExternalToolParameterMETAX1_tD64F65C7979C70B6990F1B0746E79494F94DB625 L_2 = V_0;
		return false;
	}

IL_001d:
	{
		return (bool)0;
	}

IL_001f:
	{
		return (bool)1;
	}
}
// Method Definition Index: 10581
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_System_Collections_IList_Contains_m71F74B10352B27EE4995F68EDD661B1E29AFFA25 (ReadOnlyCollection_1_tF7EFB99EE41013DF4F1A2A749D0A473AE2657BC5* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = ___0_value;
		bool L_1;
		L_1 = ReadOnlyCollection_1_IsCompatibleObject_mD0095D90AA1974A7D86685F99BCE71A6E7D20D93(L_0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 13));
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject* L_2 = ___0_value;
		bool L_3;
		L_3 = ReadOnlyCollection_1_Contains_m1513FB3F718C0951722ED431B611F1AB8B37D454(__this, ((*(XrAgenticExternalToolParameterMETAX1_tD64F65C7979C70B6990F1B0746E79494F94DB625*)UnBox(L_2, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4)))), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 14));
		return L_3;
	}

IL_0015:
	{
		return (bool)0;
	}
}
// Method Definition Index: 10582
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_System_Collections_IList_IndexOf_mA0BB48A807E159F95ED03157D94159CE53CB5A7E (ReadOnlyCollection_1_tF7EFB99EE41013DF4F1A2A749D0A473AE2657BC5* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = ___0_value;
		bool L_1;
		L_1 = ReadOnlyCollection_1_IsCompatibleObject_mD0095D90AA1974A7D86685F99BCE71A6E7D20D93(L_0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 13));
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject* L_2 = ___0_value;
		int32_t L_3;
		L_3 = ReadOnlyCollection_1_IndexOf_m23E90012DD79F3FD0F5E2390D1A84913B1C9753B(__this, ((*(XrAgenticExternalToolParameterMETAX1_tD64F65C7979C70B6990F1B0746E79494F94DB625*)UnBox(L_2, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4)))), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 15));
		return L_3;
	}

IL_0015:
	{
		return (-1);
	}
}
// Method Definition Index: 10583
// Method Definition Index: 10584
// Method Definition Index: 10585
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 10557
// Method Definition Index: 10558
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_get_Count_m9AF1774FE249CFF994683344F3395D6C45BA74EB_gshared (ReadOnlyCollection_1_t06F71F2F3EBC6E0A34714E0A7EB3367B6D248263* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		NullCheck((RuntimeObject*)L_0);
		int32_t L_1;
		L_1 = InterfaceFuncInvoker0< int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 0), (RuntimeObject*)L_0);
		return L_1;
	}
}
// Method Definition Index: 10559
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppSharedGenericObject* ReadOnlyCollection_1_get_Item_m23FB0C503360A616B4AB2D24C802A792FB262012_gshared (ReadOnlyCollection_1_t06F71F2F3EBC6E0A34714E0A7EB3367B6D248263* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		int32_t L_1 = ___0_index;
		NullCheck(L_0);
		Il2CppSharedGenericObject* L_2;
		L_2 = InterfaceFuncInvoker1< Il2CppSharedGenericObject*, int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_0, L_1);
		return L_2;
	}
}
// Method Definition Index: 10560
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_Contains_mCA382B62077A4FA1B0D0F387651E41770EC39690_gshared (ReadOnlyCollection_1_t06F71F2F3EBC6E0A34714E0A7EB3367B6D248263* __this, Il2CppSharedGenericObject* ___0_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		Il2CppSharedGenericObject* L_1 = ___0_value;
		NullCheck((RuntimeObject*)L_0);
		bool L_2;
		L_2 = InterfaceFuncInvoker1< bool, Il2CppSharedGenericObject* >::Invoke(4, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 0), (RuntimeObject*)L_0, L_1);
		return L_2;
	}
}
// Method Definition Index: 10561
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlyCollection_1_CopyTo_m67E89EFDBC85B76754A39349FFFD92A938142387_gshared (ReadOnlyCollection_1_t06F71F2F3EBC6E0A34714E0A7EB3367B6D248263* __this, __CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* L_1 = ___0_array;
		int32_t L_2 = ___1_index;
		NullCheck((RuntimeObject*)L_0);
		InterfaceActionInvoker2< __CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979*, int32_t >::Invoke(5, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 0), (RuntimeObject*)L_0, L_1, L_2);
		return;
	}
}
// Method Definition Index: 10562
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ReadOnlyCollection_1_GetEnumerator_m4550DD869199B6BB5004D0EC5F84EAD608E5D0BD_gshared (ReadOnlyCollection_1_t06F71F2F3EBC6E0A34714E0A7EB3367B6D248263* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		NullCheck((RuntimeObject*)L_0);
		RuntimeObject* L_1;
		L_1 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 7), (RuntimeObject*)L_0);
		return L_1;
	}
}
// Method Definition Index: 10563
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_IndexOf_mFC9BAC0925D44B0206E5F9250E502C86E0FE33EC_gshared (ReadOnlyCollection_1_t06F71F2F3EBC6E0A34714E0A7EB3367B6D248263* __this, Il2CppSharedGenericObject* ___0_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		Il2CppSharedGenericObject* L_1 = ___0_value;
		NullCheck(L_0);
		int32_t L_2;
		L_2 = InterfaceFuncInvoker1< int32_t, Il2CppSharedGenericObject* >::Invoke(2, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_0, L_1);
		return L_2;
	}
}
// Method Definition Index: 10564
// Method Definition Index: 10565
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppSharedGenericObject* ReadOnlyCollection_1_System_Collections_Generic_IListU3CTU3E_get_Item_mD59DAB2A22CDE2C16A3DF78BA60C5B779C9DC94D_gshared (ReadOnlyCollection_1_t06F71F2F3EBC6E0A34714E0A7EB3367B6D248263* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		int32_t L_1 = ___0_index;
		NullCheck(L_0);
		Il2CppSharedGenericObject* L_2;
		L_2 = InterfaceFuncInvoker1< Il2CppSharedGenericObject*, int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_0, L_1);
		return L_2;
	}
}
// Method Definition Index: 10566
// Method Definition Index: 10567
// Method Definition Index: 10568
// Method Definition Index: 10569
// Method Definition Index: 10570
// Method Definition Index: 10571
// Method Definition Index: 10572
// Method Definition Index: 10573
// Method Definition Index: 10574
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlyCollection_1_System_Collections_ICollection_CopyTo_m478432D44E3926112CDE5DFEFA58C16EBB9EBDF5_gshared (ReadOnlyCollection_1_t06F71F2F3EBC6E0A34714E0A7EB3367B6D248263* __this, RuntimeArray* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(Type_t_StaticInit);
	//<source_info:<no-source>:1>
	__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* V_0 = NULL;
	Type_t* V_1 = NULL;
	Type_t* V_2 = NULL;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_3 = NULL;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		RuntimeArray* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC(3, NULL);
	}

IL_0009:
	{
		RuntimeArray* L_1 = ___0_array;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = il2cpp_codegen_array_get_rank(L_1);
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_0018;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA(7, NULL);
	}

IL_0018:
	{
		RuntimeArray* L_3 = ___0_array;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(L_3, 0, NULL);
		if (!L_4)
		{
			goto IL_0027;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA(6, NULL);
	}

IL_0027:
	{
		int32_t L_5 = ___1_index;
		if ((((int32_t)L_5) >= ((int32_t)0)))
		{
			goto IL_0030;
		}
	}
	{
		ThrowHelper_ThrowIndexArgumentOutOfRange_NeedNonNegNumException_m57AAB1E093F20BFC64BDDBD90FB5B592F582B82F(NULL);
	}

IL_0030:
	{
		RuntimeArray* L_6 = ___0_array;
		NullCheck(L_6);
		int32_t L_7;
		L_7 = il2cpp_codegen_array_get_length(L_6);
		int32_t L_8 = ___1_index;
		int32_t L_9;
		L_9 = ReadOnlyCollection_1_get_Count_m9AF1774FE249CFF994683344F3395D6C45BA74EB(__this, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 10));
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_7, L_8))) >= ((int32_t)L_9)))
		{
			goto IL_0046;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA(5, NULL);
	}

IL_0046:
	{
		RuntimeArray* L_10 = ___0_array;
		V_0 = ((__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979*)IsInst((RuntimeObject*)L_10, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 11)));
		__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* L_11 = V_0;
		if (!L_11)
		{
			goto IL_005e;
		}
	}
	{
		RuntimeObject* L_12 = __this->___list;
		__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* L_13 = V_0;
		int32_t L_14 = ___1_index;
		NullCheck((RuntimeObject*)L_12);
		InterfaceActionInvoker2< __CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979*, int32_t >::Invoke(5, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 0), (RuntimeObject*)L_12, L_13, L_14);
		return;
	}

IL_005e:
	{
		RuntimeArray* L_15 = ___0_array;
		NullCheck(L_15);
		Type_t* L_16;
		L_16 = il2cpp_codegen_object_get_type(L_15);
		NullCheck(L_16);
		Type_t* L_17;
		L_17 = VirtualFuncInvoker0< Type_t* >::Invoke(46, L_16);
		V_1 = L_17;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_18 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(il2cpp_codegen_method_rgctx(method), 12)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_19;
		L_19 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_18, NULL);
		V_2 = L_19;
		Type_t* L_20 = V_1;
		Type_t* L_21 = V_2;
		NullCheck(L_20);
		bool L_22;
		L_22 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(22, L_20, L_21);
		if (L_22)
		{
			goto IL_008c;
		}
	}
	{
		Type_t* L_23 = V_2;
		Type_t* L_24 = V_1;
		NullCheck(L_23);
		bool L_25;
		L_25 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(22, L_23, L_24);
		if (L_25)
		{
			goto IL_008c;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58(NULL);
	}

IL_008c:
	{
		RuntimeArray* L_26 = ___0_array;
		V_3 = ((ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)IsInst((RuntimeObject*)L_26, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_27 = V_3;
		if (L_27)
		{
			goto IL_009b;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58(NULL);
	}

IL_009b:
	{
		RuntimeObject* L_28 = __this->___list;
		NullCheck((RuntimeObject*)L_28);
		int32_t L_29;
		L_29 = InterfaceFuncInvoker0< int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 0), (RuntimeObject*)L_28);
		V_4 = L_29;
	}
	try
	{
		{
			V_5 = 0;
			goto IL_00cd_1;
		}

IL_00ad_1:
		{
			ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_30 = V_3;
			int32_t L_31 = ___1_index;
			int32_t L_32 = L_31;
			___1_index = ((int32_t)il2cpp_codegen_add(L_32, 1));
			RuntimeObject* L_33 = __this->___list;
			int32_t L_34 = V_5;
			NullCheck(L_33);
			Il2CppSharedGenericObject* L_35;
			L_35 = InterfaceFuncInvoker1< Il2CppSharedGenericObject*, int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_33, L_34);
			NullCheck(L_30);
			ArrayElementTypeCheck (L_30, L_35);
			(L_30)->SetAt(static_cast<il2cpp_array_size_t>(L_32), (RuntimeObject*)L_35);
			int32_t L_36 = V_5;
			V_5 = ((int32_t)il2cpp_codegen_add(L_36, 1));
		}

IL_00cd_1:
		{
			int32_t L_37 = V_5;
			int32_t L_38 = V_4;
			if ((((int32_t)L_37) < ((int32_t)L_38)))
			{
				goto IL_00ad_1;
			}
		}
		{
			goto IL_00dd;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_00d5;
		}
		throw e;
	}

CATCH_00d5:
	{
		ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1* L_39 = ((ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1*)IL2CPP_GET_ACTIVE_EXCEPTION(ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1*));;
		ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58(NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_00dd;
	}

IL_00dd:
	{
		return;
	}
}
// Method Definition Index: 10575
// Method Definition Index: 10576
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ReadOnlyCollection_1_System_Collections_IList_get_Item_mE82D2072F182EAAB44C5F8B96BE8E93033451549_gshared (ReadOnlyCollection_1_t06F71F2F3EBC6E0A34714E0A7EB3367B6D248263* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		int32_t L_1 = ___0_index;
		NullCheck(L_0);
		Il2CppSharedGenericObject* L_2;
		L_2 = InterfaceFuncInvoker1< Il2CppSharedGenericObject*, int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_0, L_1);
		return (RuntimeObject*)L_2;
	}
}
// Method Definition Index: 10577
// Method Definition Index: 10578
// Method Definition Index: 10579
// Method Definition Index: 10580
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_IsCompatibleObject_m6524BB7810330224C17351742769CA098CC80929_gshared (RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	//<source_info:<no-source>:1>
	Il2CppSharedGenericObject* V_0 = NULL;
	{
		RuntimeObject* L_0 = ___0_value;
		if (((Il2CppSharedGenericObject*)IsInst((RuntimeObject*)L_0, il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 4))))
		{
			goto IL_001f;
		}
	}
	{
		RuntimeObject* L_1 = ___0_value;
		if (L_1)
		{
			goto IL_001d;
		}
	}
	{
		il2cpp_codegen_initobj((&V_0), sizeof(Il2CppSharedGenericObject*));
		Il2CppSharedGenericObject* L_2 = V_0;
		return (bool)((((RuntimeObject*)(Il2CppSharedGenericObject*)L_2) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
	}

IL_001d:
	{
		return (bool)0;
	}

IL_001f:
	{
		return (bool)1;
	}
}
// Method Definition Index: 10581
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_System_Collections_IList_Contains_m5E9D87468D2864798886B51D064CBDEEEACAE7BC_gshared (ReadOnlyCollection_1_t06F71F2F3EBC6E0A34714E0A7EB3367B6D248263* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = ___0_value;
		bool L_1;
		L_1 = ReadOnlyCollection_1_IsCompatibleObject_m6524BB7810330224C17351742769CA098CC80929(L_0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 13));
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject* L_2 = ___0_value;
		bool L_3;
		L_3 = ReadOnlyCollection_1_Contains_mCA382B62077A4FA1B0D0F387651E41770EC39690(__this, ((Il2CppSharedGenericObject*)Castclass((RuntimeObject*)L_2, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4))), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 14));
		return L_3;
	}

IL_0015:
	{
		return (bool)0;
	}
}
// Method Definition Index: 10582
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_System_Collections_IList_IndexOf_m81BF68B6CDB189B7801593C1AF869A9750788642_gshared (ReadOnlyCollection_1_t06F71F2F3EBC6E0A34714E0A7EB3367B6D248263* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = ___0_value;
		bool L_1;
		L_1 = ReadOnlyCollection_1_IsCompatibleObject_m6524BB7810330224C17351742769CA098CC80929(L_0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 13));
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject* L_2 = ___0_value;
		int32_t L_3;
		L_3 = ReadOnlyCollection_1_IndexOf_mFC9BAC0925D44B0206E5F9250E502C86E0FE33EC(__this, ((Il2CppSharedGenericObject*)Castclass((RuntimeObject*)L_2, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4))), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 15));
		return L_3;
	}

IL_0015:
	{
		return (-1);
	}
}
// Method Definition Index: 10583
// Method Definition Index: 10584
// Method Definition Index: 10585
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 10557
// Method Definition Index: 10558
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_get_Count_m42EA0DCED53E60AEB0F8E87B85BAAFF7E3339250_gshared (ReadOnlyCollection_1_tD86E076A19D3DF6CFD1AC3FEE937BD0FB0B39AF7* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		NullCheck((RuntimeObject*)L_0);
		int32_t L_1;
		L_1 = InterfaceFuncInvoker0< int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 0), (RuntimeObject*)L_0);
		return L_1;
	}
}
// Method Definition Index: 10559
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t ReadOnlyCollection_1_get_Item_mE4A20DEA92A7746521144E669D9BF4246B2B6357_gshared (ReadOnlyCollection_1_tD86E076A19D3DF6CFD1AC3FEE937BD0FB0B39AF7* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		int32_t L_1 = ___0_index;
		NullCheck(L_0);
		uint8_t L_2;
		L_2 = InterfaceFuncInvoker1< uint8_t, int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_0, L_1);
		return L_2;
	}
}
// Method Definition Index: 10560
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_Contains_m5942EC87898E487139915D67666E73C2C5720BBE_gshared (ReadOnlyCollection_1_tD86E076A19D3DF6CFD1AC3FEE937BD0FB0B39AF7* __this, uint8_t ___0_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		uint8_t L_1 = ___0_value;
		NullCheck((RuntimeObject*)L_0);
		bool L_2;
		L_2 = InterfaceFuncInvoker1< bool, uint8_t >::Invoke(4, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 0), (RuntimeObject*)L_0, L_1);
		return L_2;
	}
}
// Method Definition Index: 10561
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlyCollection_1_CopyTo_mA6900E3B2B7CF4ACF50BB10D02A013860F512B0F_gshared (ReadOnlyCollection_1_tD86E076A19D3DF6CFD1AC3FEE937BD0FB0B39AF7* __this, __Il2CppByteEnumU5BU5D_t4D02DF3357DB0BD78CB7064114CAFFD248D6999A* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		__Il2CppByteEnumU5BU5D_t4D02DF3357DB0BD78CB7064114CAFFD248D6999A* L_1 = ___0_array;
		int32_t L_2 = ___1_index;
		NullCheck((RuntimeObject*)L_0);
		InterfaceActionInvoker2< __Il2CppByteEnumU5BU5D_t4D02DF3357DB0BD78CB7064114CAFFD248D6999A*, int32_t >::Invoke(5, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 0), (RuntimeObject*)L_0, L_1, L_2);
		return;
	}
}
// Method Definition Index: 10562
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ReadOnlyCollection_1_GetEnumerator_mFFDDC15442EE04E2CB8D7CB429188249072C7C29_gshared (ReadOnlyCollection_1_tD86E076A19D3DF6CFD1AC3FEE937BD0FB0B39AF7* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		NullCheck((RuntimeObject*)L_0);
		RuntimeObject* L_1;
		L_1 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 7), (RuntimeObject*)L_0);
		return L_1;
	}
}
// Method Definition Index: 10563
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_IndexOf_m086BD8A3EC781D359798BDF4EFCB669640D8669B_gshared (ReadOnlyCollection_1_tD86E076A19D3DF6CFD1AC3FEE937BD0FB0B39AF7* __this, uint8_t ___0_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		uint8_t L_1 = ___0_value;
		NullCheck(L_0);
		int32_t L_2;
		L_2 = InterfaceFuncInvoker1< int32_t, uint8_t >::Invoke(2, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_0, L_1);
		return L_2;
	}
}
// Method Definition Index: 10564
// Method Definition Index: 10565
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t ReadOnlyCollection_1_System_Collections_Generic_IListU3CTU3E_get_Item_mE4D7A860D839D25B74A2011BC82D389C6BB17EB1_gshared (ReadOnlyCollection_1_tD86E076A19D3DF6CFD1AC3FEE937BD0FB0B39AF7* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		int32_t L_1 = ___0_index;
		NullCheck(L_0);
		uint8_t L_2;
		L_2 = InterfaceFuncInvoker1< uint8_t, int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_0, L_1);
		return L_2;
	}
}
// Method Definition Index: 10566
// Method Definition Index: 10567
// Method Definition Index: 10568
// Method Definition Index: 10569
// Method Definition Index: 10570
// Method Definition Index: 10571
// Method Definition Index: 10572
// Method Definition Index: 10573
// Method Definition Index: 10574
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlyCollection_1_System_Collections_ICollection_CopyTo_m759F24D952A4D124215CD91055E088400A73D467_gshared (ReadOnlyCollection_1_tD86E076A19D3DF6CFD1AC3FEE937BD0FB0B39AF7* __this, RuntimeArray* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(Type_t_StaticInit);
	//<source_info:<no-source>:1>
	__Il2CppByteEnumU5BU5D_t4D02DF3357DB0BD78CB7064114CAFFD248D6999A* V_0 = NULL;
	Type_t* V_1 = NULL;
	Type_t* V_2 = NULL;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_3 = NULL;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		RuntimeArray* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC(3, NULL);
	}

IL_0009:
	{
		RuntimeArray* L_1 = ___0_array;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = il2cpp_codegen_array_get_rank(L_1);
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_0018;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA(7, NULL);
	}

IL_0018:
	{
		RuntimeArray* L_3 = ___0_array;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(L_3, 0, NULL);
		if (!L_4)
		{
			goto IL_0027;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA(6, NULL);
	}

IL_0027:
	{
		int32_t L_5 = ___1_index;
		if ((((int32_t)L_5) >= ((int32_t)0)))
		{
			goto IL_0030;
		}
	}
	{
		ThrowHelper_ThrowIndexArgumentOutOfRange_NeedNonNegNumException_m57AAB1E093F20BFC64BDDBD90FB5B592F582B82F(NULL);
	}

IL_0030:
	{
		RuntimeArray* L_6 = ___0_array;
		NullCheck(L_6);
		int32_t L_7;
		L_7 = il2cpp_codegen_array_get_length(L_6);
		int32_t L_8 = ___1_index;
		int32_t L_9;
		L_9 = ReadOnlyCollection_1_get_Count_m42EA0DCED53E60AEB0F8E87B85BAAFF7E3339250(__this, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 10));
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_7, L_8))) >= ((int32_t)L_9)))
		{
			goto IL_0046;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA(5, NULL);
	}

IL_0046:
	{
		RuntimeArray* L_10 = ___0_array;
		V_0 = ((__Il2CppByteEnumU5BU5D_t4D02DF3357DB0BD78CB7064114CAFFD248D6999A*)IsInstSealed((RuntimeObject*)L_10, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 11)));
		__Il2CppByteEnumU5BU5D_t4D02DF3357DB0BD78CB7064114CAFFD248D6999A* L_11 = V_0;
		if (!L_11)
		{
			goto IL_005e;
		}
	}
	{
		RuntimeObject* L_12 = __this->___list;
		__Il2CppByteEnumU5BU5D_t4D02DF3357DB0BD78CB7064114CAFFD248D6999A* L_13 = V_0;
		int32_t L_14 = ___1_index;
		NullCheck((RuntimeObject*)L_12);
		InterfaceActionInvoker2< __Il2CppByteEnumU5BU5D_t4D02DF3357DB0BD78CB7064114CAFFD248D6999A*, int32_t >::Invoke(5, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 0), (RuntimeObject*)L_12, L_13, L_14);
		return;
	}

IL_005e:
	{
		RuntimeArray* L_15 = ___0_array;
		NullCheck(L_15);
		Type_t* L_16;
		L_16 = il2cpp_codegen_object_get_type(L_15);
		NullCheck(L_16);
		Type_t* L_17;
		L_17 = VirtualFuncInvoker0< Type_t* >::Invoke(46, L_16);
		V_1 = L_17;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_18 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(il2cpp_codegen_method_rgctx(method), 12)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_19;
		L_19 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_18, NULL);
		V_2 = L_19;
		Type_t* L_20 = V_1;
		Type_t* L_21 = V_2;
		NullCheck(L_20);
		bool L_22;
		L_22 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(22, L_20, L_21);
		if (L_22)
		{
			goto IL_008c;
		}
	}
	{
		Type_t* L_23 = V_2;
		Type_t* L_24 = V_1;
		NullCheck(L_23);
		bool L_25;
		L_25 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(22, L_23, L_24);
		if (L_25)
		{
			goto IL_008c;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58(NULL);
	}

IL_008c:
	{
		RuntimeArray* L_26 = ___0_array;
		V_3 = ((ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)IsInst((RuntimeObject*)L_26, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_27 = V_3;
		if (L_27)
		{
			goto IL_009b;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58(NULL);
	}

IL_009b:
	{
		RuntimeObject* L_28 = __this->___list;
		NullCheck((RuntimeObject*)L_28);
		int32_t L_29;
		L_29 = InterfaceFuncInvoker0< int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 0), (RuntimeObject*)L_28);
		V_4 = L_29;
	}
	try
	{
		{
			V_5 = 0;
			goto IL_00cd_1;
		}

IL_00ad_1:
		{
			ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_30 = V_3;
			int32_t L_31 = ___1_index;
			int32_t L_32 = L_31;
			___1_index = ((int32_t)il2cpp_codegen_add(L_32, 1));
			RuntimeObject* L_33 = __this->___list;
			int32_t L_34 = V_5;
			NullCheck(L_33);
			uint8_t L_35;
			L_35 = InterfaceFuncInvoker1< uint8_t, int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_33, L_34);
			uint8_t L_36 = L_35;
			RuntimeObject* L_37 = Box(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4), &L_36);
			NullCheck(L_30);
			ArrayElementTypeCheck (L_30, L_37);
			(L_30)->SetAt(static_cast<il2cpp_array_size_t>(L_32), (RuntimeObject*)L_37);
			int32_t L_38 = V_5;
			V_5 = ((int32_t)il2cpp_codegen_add(L_38, 1));
		}

IL_00cd_1:
		{
			int32_t L_39 = V_5;
			int32_t L_40 = V_4;
			if ((((int32_t)L_39) < ((int32_t)L_40)))
			{
				goto IL_00ad_1;
			}
		}
		{
			goto IL_00dd;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_00d5;
		}
		throw e;
	}

CATCH_00d5:
	{
		ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1* L_41 = ((ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1*)IL2CPP_GET_ACTIVE_EXCEPTION(ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1*));;
		ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58(NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_00dd;
	}

IL_00dd:
	{
		return;
	}
}
// Method Definition Index: 10575
// Method Definition Index: 10576
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ReadOnlyCollection_1_System_Collections_IList_get_Item_m7A299DFE2CAF9E3E4A51E28A9DC60DEF2312D7C2_gshared (ReadOnlyCollection_1_tD86E076A19D3DF6CFD1AC3FEE937BD0FB0B39AF7* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		int32_t L_1 = ___0_index;
		NullCheck(L_0);
		uint8_t L_2;
		L_2 = InterfaceFuncInvoker1< uint8_t, int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_0, L_1);
		uint8_t L_3 = L_2;
		RuntimeObject* L_4 = Box(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4), &L_3);
		return L_4;
	}
}
// Method Definition Index: 10577
// Method Definition Index: 10578
// Method Definition Index: 10579
// Method Definition Index: 10580
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_IsCompatibleObject_m0B1D25730B9DD494FCA9E772786682534DB20B70_gshared (RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	//<source_info:<no-source>:1>
	uint8_t V_0 = 0;
	{
		RuntimeObject* L_0 = ___0_value;
		if (((RuntimeObject*)IsInstSealed((RuntimeObject*)L_0, il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 4))))
		{
			goto IL_001f;
		}
	}
	{
		RuntimeObject* L_1 = ___0_value;
		if (L_1)
		{
			goto IL_001d;
		}
	}
	{
		il2cpp_codegen_initobj((&V_0), sizeof(uint8_t));
		uint8_t L_2 = V_0;
		return false;
	}

IL_001d:
	{
		return (bool)0;
	}

IL_001f:
	{
		return (bool)1;
	}
}
// Method Definition Index: 10581
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_System_Collections_IList_Contains_m8D3536179DCBD318E317046F9F5F7D76BA9D14FA_gshared (ReadOnlyCollection_1_tD86E076A19D3DF6CFD1AC3FEE937BD0FB0B39AF7* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = ___0_value;
		bool L_1;
		L_1 = ReadOnlyCollection_1_IsCompatibleObject_m0B1D25730B9DD494FCA9E772786682534DB20B70(L_0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 13));
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject* L_2 = ___0_value;
		bool L_3;
		L_3 = ReadOnlyCollection_1_Contains_m5942EC87898E487139915D67666E73C2C5720BBE(__this, ((*(uint8_t*)UnBox(L_2, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4)))), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 14));
		return L_3;
	}

IL_0015:
	{
		return (bool)0;
	}
}
// Method Definition Index: 10582
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_System_Collections_IList_IndexOf_m1C79B4C294DF7B05D13C4CBBD31EED511347AE39_gshared (ReadOnlyCollection_1_tD86E076A19D3DF6CFD1AC3FEE937BD0FB0B39AF7* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = ___0_value;
		bool L_1;
		L_1 = ReadOnlyCollection_1_IsCompatibleObject_m0B1D25730B9DD494FCA9E772786682534DB20B70(L_0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 13));
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject* L_2 = ___0_value;
		int32_t L_3;
		L_3 = ReadOnlyCollection_1_IndexOf_m086BD8A3EC781D359798BDF4EFCB669640D8669B(__this, ((*(uint8_t*)UnBox(L_2, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4)))), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 15));
		return L_3;
	}

IL_0015:
	{
		return (-1);
	}
}
// Method Definition Index: 10583
// Method Definition Index: 10584
// Method Definition Index: 10585
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 10557
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlyCollection_1__ctor_m903CF4492D6E4F6EE0D865BB7AA36A0DDB888355_fshared (ReadOnlyCollection_1_t5B7AA4E006906DE6818A44873F2D5987EFBF3AB8* __this, RuntimeObject* ___0_list, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		RuntimeObject* L_0 = ___0_list;
		if (L_0)
		{
			goto IL_000f;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC(7, NULL);
	}

IL_000f:
	{
		RuntimeObject* L_1 = ___0_list;
		__this->___list = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___list), (void*)L_1);
		return;
	}
}
// Method Definition Index: 10558
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_get_Count_mCDFBED2827141480BC213F53AEEDACC6213A3B66_fshared (ReadOnlyCollection_1_t5B7AA4E006906DE6818A44873F2D5987EFBF3AB8* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		NullCheck((RuntimeObject*)L_0);
		int32_t L_1;
		L_1 = InterfaceFuncInvoker0< int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 0), (RuntimeObject*)L_0);
		return L_1;
	}
}
// Method Definition Index: 10559
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlyCollection_1_get_Item_mA8D896F68E301ACA5A341DC5A225583D8ED2A255_fshared (ReadOnlyCollection_1_t5B7AA4E006906DE6818A44873F2D5987EFBF3AB8* __this, int32_t ___0_index, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_T_t8D48BFC25EA68A42A94BF65BB9E3A632E9BCB783 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4));
	const Il2CppFullySharedGenericAny L_2 = alloca(SizeOf_T_t8D48BFC25EA68A42A94BF65BB9E3A632E9BCB783);
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		int32_t L_1 = ___0_index;
		NullCheck(L_0);
		InterfaceActionInvoker2Invoker< int32_t, Il2CppFullySharedGenericAny* >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_0, L_1, (Il2CppFullySharedGenericAny*)L_2);
		il2cpp_codegen_memcpy(il2cppRetVal, L_2, SizeOf_T_t8D48BFC25EA68A42A94BF65BB9E3A632E9BCB783);
		return;
	}
}
// Method Definition Index: 10560
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_Contains_m3E09B940962F12FD034CC8486ED4168D4721DBBE_fshared (ReadOnlyCollection_1_t5B7AA4E006906DE6818A44873F2D5987EFBF3AB8* __this, Il2CppFullySharedGenericAny ___0_value, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_T_t8D48BFC25EA68A42A94BF65BB9E3A632E9BCB783 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4));
	const Il2CppFullySharedGenericAny L_1 = alloca(SizeOf_T_t8D48BFC25EA68A42A94BF65BB9E3A632E9BCB783);
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		il2cpp_codegen_memcpy(L_1, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4)) ? ___0_value : &___0_value), SizeOf_T_t8D48BFC25EA68A42A94BF65BB9E3A632E9BCB783);
		NullCheck((RuntimeObject*)L_0);
		bool L_2;
		L_2 = InterfaceFuncInvoker1Invoker< bool, Il2CppFullySharedGenericAny >::Invoke(4, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 0), (RuntimeObject*)L_0, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4)) ? L_1: *(void**)L_1));
		return L_2;
	}
}
// Method Definition Index: 10561
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlyCollection_1_CopyTo_mB416E0A1DB85A7CADD8262857E64FB0ADC00A1EA_fshared (ReadOnlyCollection_1_t5B7AA4E006906DE6818A44873F2D5987EFBF3AB8* __this, __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_1 = ___0_array;
		int32_t L_2 = ___1_index;
		NullCheck((RuntimeObject*)L_0);
		InterfaceActionInvoker2< __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*, int32_t >::Invoke(5, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 0), (RuntimeObject*)L_0, L_1, L_2);
		return;
	}
}
// Method Definition Index: 10562
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ReadOnlyCollection_1_GetEnumerator_mCFEF0F9FA49B2179E5E911F9D1152340A92DB3F3_fshared (ReadOnlyCollection_1_t5B7AA4E006906DE6818A44873F2D5987EFBF3AB8* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		NullCheck((RuntimeObject*)L_0);
		RuntimeObject* L_1;
		L_1 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 7), (RuntimeObject*)L_0);
		return L_1;
	}
}
// Method Definition Index: 10563
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_IndexOf_mD82DC91F5E57226382BAF1401C40E957F7DA2387_fshared (ReadOnlyCollection_1_t5B7AA4E006906DE6818A44873F2D5987EFBF3AB8* __this, Il2CppFullySharedGenericAny ___0_value, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_T_t8D48BFC25EA68A42A94BF65BB9E3A632E9BCB783 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4));
	const Il2CppFullySharedGenericAny L_1 = alloca(SizeOf_T_t8D48BFC25EA68A42A94BF65BB9E3A632E9BCB783);
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		il2cpp_codegen_memcpy(L_1, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4)) ? ___0_value : &___0_value), SizeOf_T_t8D48BFC25EA68A42A94BF65BB9E3A632E9BCB783);
		NullCheck(L_0);
		int32_t L_2;
		L_2 = InterfaceFuncInvoker1Invoker< int32_t, Il2CppFullySharedGenericAny >::Invoke(2, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_0, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4)) ? L_1: *(void**)L_1));
		return L_2;
	}
}
// Method Definition Index: 10564
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_mC4F2329D15060977CE2267B4D0E87EDB561CF595_fshared (ReadOnlyCollection_1_t5B7AA4E006906DE6818A44873F2D5987EFBF3AB8* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		return (bool)1;
	}
}
// Method Definition Index: 10565
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlyCollection_1_System_Collections_Generic_IListU3CTU3E_get_Item_mF4ED844686904AEE780D507416D7E7A51DFF202D_fshared (ReadOnlyCollection_1_t5B7AA4E006906DE6818A44873F2D5987EFBF3AB8* __this, int32_t ___0_index, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_T_t8D48BFC25EA68A42A94BF65BB9E3A632E9BCB783 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4));
	const Il2CppFullySharedGenericAny L_2 = alloca(SizeOf_T_t8D48BFC25EA68A42A94BF65BB9E3A632E9BCB783);
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		int32_t L_1 = ___0_index;
		NullCheck(L_0);
		InterfaceActionInvoker2Invoker< int32_t, Il2CppFullySharedGenericAny* >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_0, L_1, (Il2CppFullySharedGenericAny*)L_2);
		il2cpp_codegen_memcpy(il2cppRetVal, L_2, SizeOf_T_t8D48BFC25EA68A42A94BF65BB9E3A632E9BCB783);
		return;
	}
}
// Method Definition Index: 10566
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlyCollection_1_System_Collections_Generic_IListU3CTU3E_set_Item_m35A745E63BFF1D589351CE60CF9E340E75C14998_fshared (ReadOnlyCollection_1_t5B7AA4E006906DE6818A44873F2D5987EFBF3AB8* __this, int32_t ___0_index, Il2CppFullySharedGenericAny ___1_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		ThrowHelper_ThrowNotSupportedException_mB51B0F3A42F31B455852E713F424D47333326023(((int32_t)28), NULL);
		return;
	}
}
// Method Definition Index: 10567
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlyCollection_1_System_Collections_Generic_ICollectionU3CTU3E_Add_mF006EAEF6D337E8B834711F6905D3ADE4FA0D987_fshared (ReadOnlyCollection_1_t5B7AA4E006906DE6818A44873F2D5987EFBF3AB8* __this, Il2CppFullySharedGenericAny ___0_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		ThrowHelper_ThrowNotSupportedException_mB51B0F3A42F31B455852E713F424D47333326023(((int32_t)28), NULL);
		return;
	}
}
// Method Definition Index: 10568
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlyCollection_1_System_Collections_Generic_ICollectionU3CTU3E_Clear_mFD6E4EDD6B7F30038EFD8F9C0FE3AC221626D95F_fshared (ReadOnlyCollection_1_t5B7AA4E006906DE6818A44873F2D5987EFBF3AB8* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		ThrowHelper_ThrowNotSupportedException_mB51B0F3A42F31B455852E713F424D47333326023(((int32_t)28), NULL);
		return;
	}
}
// Method Definition Index: 10569
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlyCollection_1_System_Collections_Generic_IListU3CTU3E_Insert_m9F3566194F9D272B71951511DA8312C8B4ACA259_fshared (ReadOnlyCollection_1_t5B7AA4E006906DE6818A44873F2D5987EFBF3AB8* __this, int32_t ___0_index, Il2CppFullySharedGenericAny ___1_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		ThrowHelper_ThrowNotSupportedException_mB51B0F3A42F31B455852E713F424D47333326023(((int32_t)28), NULL);
		return;
	}
}
// Method Definition Index: 10570
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_System_Collections_Generic_ICollectionU3CTU3E_Remove_m4F9FB8AF81AAA7BF937DC85004CA9F1F7E6ED280_fshared (ReadOnlyCollection_1_t5B7AA4E006906DE6818A44873F2D5987EFBF3AB8* __this, Il2CppFullySharedGenericAny ___0_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		ThrowHelper_ThrowNotSupportedException_mB51B0F3A42F31B455852E713F424D47333326023(((int32_t)28), NULL);
		return (bool)0;
	}
}
// Method Definition Index: 10571
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlyCollection_1_System_Collections_Generic_IListU3CTU3E_RemoveAt_m02FCD7570EC5BAE9CD2BA0B6EF0227B6C253E006_fshared (ReadOnlyCollection_1_t5B7AA4E006906DE6818A44873F2D5987EFBF3AB8* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		ThrowHelper_ThrowNotSupportedException_mB51B0F3A42F31B455852E713F424D47333326023(((int32_t)28), NULL);
		return;
	}
}
// Method Definition Index: 10572
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ReadOnlyCollection_1_System_Collections_IEnumerable_GetEnumerator_mA6AF1223843F4580FD3FEB8E35845661982E0B32_fshared (ReadOnlyCollection_1_t5B7AA4E006906DE6818A44873F2D5987EFBF3AB8* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerable_t6331596D5DD37C462B1B8D49CF6B319B00AB7131_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		NullCheck((RuntimeObject*)L_0);
		RuntimeObject* L_1;
		L_1 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IEnumerable_t6331596D5DD37C462B1B8D49CF6B319B00AB7131_il2cpp_TypeInfo_var, (RuntimeObject*)L_0);
		return L_1;
	}
}
// Method Definition Index: 10573
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ReadOnlyCollection_1_System_Collections_ICollection_get_SyncRoot_mE2403F1271152A240384F722DBC2F51B2FE474F9_fshared (ReadOnlyCollection_1_t5B7AA4E006906DE6818A44873F2D5987EFBF3AB8* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICollection_t37E7B9DC5B4EF41D190D607F92835BF1171C0E8E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	//<source_info:<no-source>:1>
	RuntimeObject* V_0 = NULL;
	{
		RuntimeObject* L_0 = __this->____syncRoot;
		if (L_0)
		{
			goto IL_0037;
		}
	}
	{
		RuntimeObject* L_1 = __this->___list;
		V_0 = ((RuntimeObject*)IsInst((RuntimeObject*)L_1, ICollection_t37E7B9DC5B4EF41D190D607F92835BF1171C0E8E_il2cpp_TypeInfo_var));
		RuntimeObject* L_2 = V_0;
		if (!L_2)
		{
			goto IL_0025;
		}
	}
	{
		RuntimeObject* L_3 = V_0;
		NullCheck(L_3);
		RuntimeObject* L_4;
		L_4 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(2, ICollection_t37E7B9DC5B4EF41D190D607F92835BF1171C0E8E_il2cpp_TypeInfo_var, L_3);
		__this->____syncRoot = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____syncRoot), (void*)L_4);
		goto IL_0037;
	}

IL_0025:
	{
		RuntimeObject** L_5 = (RuntimeObject**)(&__this->____syncRoot);
		RuntimeObject* L_6 = (RuntimeObject*)il2cpp_codegen_object_new(RuntimeObject_il2cpp_TypeInfo_var);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(L_6, NULL);
		RuntimeObject* L_7;
		L_7 = il2cpp_intrinsic_interlocked_compare_exchange(L_5, L_6, NULL);
	}

IL_0037:
	{
		RuntimeObject* L_8 = __this->____syncRoot;
		return L_8;
	}
}
// Method Definition Index: 10574
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlyCollection_1_System_Collections_ICollection_CopyTo_m70FC2A97390955247B150E4BD8DD8B18237430F4_fshared (ReadOnlyCollection_1_t5B7AA4E006906DE6818A44873F2D5987EFBF3AB8* __this, RuntimeArray* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(Type_t_StaticInit);
	const uint32_t SizeOf_T_t8D48BFC25EA68A42A94BF65BB9E3A632E9BCB783 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4));
	const Il2CppFullySharedGenericAny L_35 = alloca(SizeOf_T_t8D48BFC25EA68A42A94BF65BB9E3A632E9BCB783);
	//<source_info:<no-source>:1>
	__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* V_0 = NULL;
	Type_t* V_1 = NULL;
	Type_t* V_2 = NULL;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_3 = NULL;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		RuntimeArray* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC(3, NULL);
	}

IL_0009:
	{
		RuntimeArray* L_1 = ___0_array;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = il2cpp_codegen_array_get_rank(L_1);
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_0018;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA(7, NULL);
	}

IL_0018:
	{
		RuntimeArray* L_3 = ___0_array;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(L_3, 0, NULL);
		if (!L_4)
		{
			goto IL_0027;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA(6, NULL);
	}

IL_0027:
	{
		int32_t L_5 = ___1_index;
		if ((((int32_t)L_5) >= ((int32_t)0)))
		{
			goto IL_0030;
		}
	}
	{
		ThrowHelper_ThrowIndexArgumentOutOfRange_NeedNonNegNumException_m57AAB1E093F20BFC64BDDBD90FB5B592F582B82F(NULL);
	}

IL_0030:
	{
		RuntimeArray* L_6 = ___0_array;
		NullCheck(L_6);
		int32_t L_7;
		L_7 = il2cpp_codegen_array_get_length(L_6);
		int32_t L_8 = ___1_index;
		int32_t L_9;
		L_9 = ((  int32_t (*) (ReadOnlyCollection_1_t5B7AA4E006906DE6818A44873F2D5987EFBF3AB8*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 10)))(__this, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 10));
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_7, L_8))) >= ((int32_t)L_9)))
		{
			goto IL_0046;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA(5, NULL);
	}

IL_0046:
	{
		RuntimeArray* L_10 = ___0_array;
		V_0 = ((__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*)IsInst((RuntimeObject*)L_10, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 11)));
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_11 = V_0;
		if (!L_11)
		{
			goto IL_005e;
		}
	}
	{
		RuntimeObject* L_12 = __this->___list;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_13 = V_0;
		int32_t L_14 = ___1_index;
		NullCheck((RuntimeObject*)L_12);
		InterfaceActionInvoker2< __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*, int32_t >::Invoke(5, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 0), (RuntimeObject*)L_12, L_13, L_14);
		return;
	}

IL_005e:
	{
		RuntimeArray* L_15 = ___0_array;
		NullCheck(L_15);
		Type_t* L_16;
		L_16 = il2cpp_codegen_object_get_type(L_15);
		NullCheck(L_16);
		Type_t* L_17;
		L_17 = VirtualFuncInvoker0< Type_t* >::Invoke(46, L_16);
		V_1 = L_17;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_18 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(il2cpp_codegen_method_rgctx(method), 12)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_19;
		L_19 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_18, NULL);
		V_2 = L_19;
		Type_t* L_20 = V_1;
		Type_t* L_21 = V_2;
		NullCheck(L_20);
		bool L_22;
		L_22 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(22, L_20, L_21);
		if (L_22)
		{
			goto IL_008c;
		}
	}
	{
		Type_t* L_23 = V_2;
		Type_t* L_24 = V_1;
		NullCheck(L_23);
		bool L_25;
		L_25 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(22, L_23, L_24);
		if (L_25)
		{
			goto IL_008c;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58(NULL);
	}

IL_008c:
	{
		RuntimeArray* L_26 = ___0_array;
		V_3 = ((ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)IsInst((RuntimeObject*)L_26, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_27 = V_3;
		if (L_27)
		{
			goto IL_009b;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58(NULL);
	}

IL_009b:
	{
		RuntimeObject* L_28 = __this->___list;
		NullCheck((RuntimeObject*)L_28);
		int32_t L_29;
		L_29 = InterfaceFuncInvoker0< int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 0), (RuntimeObject*)L_28);
		V_4 = L_29;
	}
	try
	{
		{
			V_5 = 0;
			goto IL_00cd_1;
		}

IL_00ad_1:
		{
			ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_30 = V_3;
			int32_t L_31 = ___1_index;
			int32_t L_32 = L_31;
			___1_index = ((int32_t)il2cpp_codegen_add(L_32, 1));
			RuntimeObject* L_33 = __this->___list;
			int32_t L_34 = V_5;
			NullCheck(L_33);
			InterfaceActionInvoker2Invoker< int32_t, Il2CppFullySharedGenericAny* >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_33, L_34, (Il2CppFullySharedGenericAny*)L_35);
			RuntimeObject* L_36 = Box(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4), L_35);
			NullCheck(L_30);
			ArrayElementTypeCheck (L_30, L_36);
			(L_30)->SetAt(static_cast<il2cpp_array_size_t>(L_32), (RuntimeObject*)L_36);
			int32_t L_37 = V_5;
			V_5 = ((int32_t)il2cpp_codegen_add(L_37, 1));
		}

IL_00cd_1:
		{
			int32_t L_38 = V_5;
			int32_t L_39 = V_4;
			if ((((int32_t)L_38) < ((int32_t)L_39)))
			{
				goto IL_00ad_1;
			}
		}
		{
			goto IL_00dd;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_00d5;
		}
		throw e;
	}

CATCH_00d5:
	{
		ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1* L_40 = ((ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1*)IL2CPP_GET_ACTIVE_EXCEPTION(ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1*));;
		ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58(NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_00dd;
	}

IL_00dd:
	{
		return;
	}
}
// Method Definition Index: 10575
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_System_Collections_IList_get_IsReadOnly_m08C282A2A98D3C947E83CBC9890A8E0E709A397B_fshared (ReadOnlyCollection_1_t5B7AA4E006906DE6818A44873F2D5987EFBF3AB8* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		return (bool)1;
	}
}
// Method Definition Index: 10576
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ReadOnlyCollection_1_System_Collections_IList_get_Item_m861331F448865761DF230F9645DB5EBC1BCE886F_fshared (ReadOnlyCollection_1_t5B7AA4E006906DE6818A44873F2D5987EFBF3AB8* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_T_t8D48BFC25EA68A42A94BF65BB9E3A632E9BCB783 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4));
	const Il2CppFullySharedGenericAny L_2 = alloca(SizeOf_T_t8D48BFC25EA68A42A94BF65BB9E3A632E9BCB783);
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		int32_t L_1 = ___0_index;
		NullCheck(L_0);
		InterfaceActionInvoker2Invoker< int32_t, Il2CppFullySharedGenericAny* >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_0, L_1, (Il2CppFullySharedGenericAny*)L_2);
		RuntimeObject* L_3 = Box(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4), L_2);
		return L_3;
	}
}
// Method Definition Index: 10577
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlyCollection_1_System_Collections_IList_set_Item_m08B0FB302612A3978ED68B2A5B11FE2184ECEA19_fshared (ReadOnlyCollection_1_t5B7AA4E006906DE6818A44873F2D5987EFBF3AB8* __this, int32_t ___0_index, RuntimeObject* ___1_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		ThrowHelper_ThrowNotSupportedException_mB51B0F3A42F31B455852E713F424D47333326023(((int32_t)28), NULL);
		return;
	}
}
// Method Definition Index: 10578
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_System_Collections_IList_Add_mE7A580FD2427E3D62C85553215B06F340F19C021_fshared (ReadOnlyCollection_1_t5B7AA4E006906DE6818A44873F2D5987EFBF3AB8* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		ThrowHelper_ThrowNotSupportedException_mB51B0F3A42F31B455852E713F424D47333326023(((int32_t)28), NULL);
		return (-1);
	}
}
// Method Definition Index: 10579
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlyCollection_1_System_Collections_IList_Clear_mE23431676D7E7A313D7D013AA7D53134389E1F65_fshared (ReadOnlyCollection_1_t5B7AA4E006906DE6818A44873F2D5987EFBF3AB8* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		ThrowHelper_ThrowNotSupportedException_mB51B0F3A42F31B455852E713F424D47333326023(((int32_t)28), NULL);
		return;
	}
}
// Method Definition Index: 10580
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_IsCompatibleObject_mB26BF0A4B6CF73028651EA8BC0D5DB450683A405_fshared (RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	const uint32_t SizeOf_T_t8D48BFC25EA68A42A94BF65BB9E3A632E9BCB783 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 4));
	const Il2CppFullySharedGenericAny L_2 = alloca(SizeOf_T_t8D48BFC25EA68A42A94BF65BB9E3A632E9BCB783);
	//<source_info:<no-source>:1>
	Il2CppFullySharedGenericAny V_0 = alloca(SizeOf_T_t8D48BFC25EA68A42A94BF65BB9E3A632E9BCB783);
	memset(V_0, 0, SizeOf_T_t8D48BFC25EA68A42A94BF65BB9E3A632E9BCB783);
	{
		RuntimeObject* L_0 = ___0_value;
		if (((RuntimeObject*)IsInst((RuntimeObject*)L_0, il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 4))))
		{
			goto IL_001f;
		}
	}
	{
		RuntimeObject* L_1 = ___0_value;
		if (L_1)
		{
			goto IL_001d;
		}
	}
	{
		il2cpp_codegen_initobj((Il2CppFullySharedGenericAny*)V_0, SizeOf_T_t8D48BFC25EA68A42A94BF65BB9E3A632E9BCB783);
		il2cpp_codegen_memcpy(L_2, V_0, SizeOf_T_t8D48BFC25EA68A42A94BF65BB9E3A632E9BCB783);
		bool L_3 = !il2cpp_codegen_would_box_to_non_null(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 4), L_2);
		bool L_4 = L_3;
		return L_4;
	}

IL_001d:
	{
		return (bool)0;
	}

IL_001f:
	{
		return (bool)1;
	}
}
// Method Definition Index: 10581
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_System_Collections_IList_Contains_mFD48FDEA769B42DD057189EF0893C37CB3E425A0_fshared (ReadOnlyCollection_1_t5B7AA4E006906DE6818A44873F2D5987EFBF3AB8* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_T_t8D48BFC25EA68A42A94BF65BB9E3A632E9BCB783 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4));
	const Il2CppFullySharedGenericAny L_3 = alloca(SizeOf_T_t8D48BFC25EA68A42A94BF65BB9E3A632E9BCB783);
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = ___0_value;
		bool L_1;
		L_1 = ((  bool (*) (RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 13)))(L_0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 13));
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject* L_2 = ___0_value;
		void* L_4 = UnBox_Any(L_2, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4), L_3);
		bool L_5;
		L_5 = InvokerFuncInvoker1< bool, Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 14)), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 14), __this, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4)) ? (((Il2CppFullySharedGenericAny)(Il2CppFullySharedGenericAny*)L_4)): *(void**)(((Il2CppFullySharedGenericAny)(Il2CppFullySharedGenericAny*)L_4))));
		return L_5;
	}

IL_0015:
	{
		return (bool)0;
	}
}
// Method Definition Index: 10582
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_System_Collections_IList_IndexOf_m99568215E4F7BA5BFC1D5EA185C16A603A96EDE4_fshared (ReadOnlyCollection_1_t5B7AA4E006906DE6818A44873F2D5987EFBF3AB8* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_T_t8D48BFC25EA68A42A94BF65BB9E3A632E9BCB783 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4));
	const Il2CppFullySharedGenericAny L_3 = alloca(SizeOf_T_t8D48BFC25EA68A42A94BF65BB9E3A632E9BCB783);
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = ___0_value;
		bool L_1;
		L_1 = ((  bool (*) (RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 13)))(L_0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 13));
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject* L_2 = ___0_value;
		void* L_4 = UnBox_Any(L_2, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4), L_3);
		int32_t L_5;
		L_5 = InvokerFuncInvoker1< int32_t, Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 15)), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 15), __this, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4)) ? (((Il2CppFullySharedGenericAny)(Il2CppFullySharedGenericAny*)L_4)): *(void**)(((Il2CppFullySharedGenericAny)(Il2CppFullySharedGenericAny*)L_4))));
		return L_5;
	}

IL_0015:
	{
		return (-1);
	}
}
// Method Definition Index: 10583
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlyCollection_1_System_Collections_IList_Insert_m6E7A22F971B6F49F7A4A13748B924C5B8CD3AF69_fshared (ReadOnlyCollection_1_t5B7AA4E006906DE6818A44873F2D5987EFBF3AB8* __this, int32_t ___0_index, RuntimeObject* ___1_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		ThrowHelper_ThrowNotSupportedException_mB51B0F3A42F31B455852E713F424D47333326023(((int32_t)28), NULL);
		return;
	}
}
// Method Definition Index: 10584
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlyCollection_1_System_Collections_IList_Remove_m772802A30F60DA8C4025283105DD3D5162CD9A40_fshared (ReadOnlyCollection_1_t5B7AA4E006906DE6818A44873F2D5987EFBF3AB8* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		ThrowHelper_ThrowNotSupportedException_mB51B0F3A42F31B455852E713F424D47333326023(((int32_t)28), NULL);
		return;
	}
}
// Method Definition Index: 10585
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlyCollection_1_System_Collections_IList_RemoveAt_m8BAA6793E056F7C7F5D3EFC32F9F5D57DF86881C_fshared (ReadOnlyCollection_1_t5B7AA4E006906DE6818A44873F2D5987EFBF3AB8* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		ThrowHelper_ThrowNotSupportedException_mB51B0F3A42F31B455852E713F424D47333326023(((int32_t)28), NULL);
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
// Method Definition Index: 10557
// Method Definition Index: 10558
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_get_Count_mE688C15AB77A4844B3FE1700E2713247F0B0DF9D_gshared (ReadOnlyCollection_1_tA097AD399F1ED95CBDEFC0663790A10C4A43DFB8* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		NullCheck((RuntimeObject*)L_0);
		int32_t L_1;
		L_1 = InterfaceFuncInvoker0< int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 0), (RuntimeObject*)L_0);
		return L_1;
	}
}
// Method Definition Index: 10559
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_get_Item_m2AB134E377DBCED2DDCC55195EA789695F956B1F_gshared (ReadOnlyCollection_1_tA097AD399F1ED95CBDEFC0663790A10C4A43DFB8* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		int32_t L_1 = ___0_index;
		NullCheck(L_0);
		int32_t L_2;
		L_2 = InterfaceFuncInvoker1< int32_t, int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_0, L_1);
		return L_2;
	}
}
// Method Definition Index: 10560
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_Contains_m735114B46C15E226E1ACA6FCFFCB0AB14ADBFC87_gshared (ReadOnlyCollection_1_tA097AD399F1ED95CBDEFC0663790A10C4A43DFB8* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		int32_t L_1 = ___0_value;
		NullCheck((RuntimeObject*)L_0);
		bool L_2;
		L_2 = InterfaceFuncInvoker1< bool, int32_t >::Invoke(4, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 0), (RuntimeObject*)L_0, L_1);
		return L_2;
	}
}
// Method Definition Index: 10561
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlyCollection_1_CopyTo_m9946462FB2F4FFD3C42F1A2B145776155E3BA44C_gshared (ReadOnlyCollection_1_tA097AD399F1ED95CBDEFC0663790A10C4A43DFB8* __this, __Il2CppInt32EnumU5BU5D_t8FBDB13799B3615AA893F06F601FF09189B04297* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		__Il2CppInt32EnumU5BU5D_t8FBDB13799B3615AA893F06F601FF09189B04297* L_1 = ___0_array;
		int32_t L_2 = ___1_index;
		NullCheck((RuntimeObject*)L_0);
		InterfaceActionInvoker2< __Il2CppInt32EnumU5BU5D_t8FBDB13799B3615AA893F06F601FF09189B04297*, int32_t >::Invoke(5, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 0), (RuntimeObject*)L_0, L_1, L_2);
		return;
	}
}
// Method Definition Index: 10562
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ReadOnlyCollection_1_GetEnumerator_m76FE21246B92BA6E87E8E4C83900A08CD45352C3_gshared (ReadOnlyCollection_1_tA097AD399F1ED95CBDEFC0663790A10C4A43DFB8* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		NullCheck((RuntimeObject*)L_0);
		RuntimeObject* L_1;
		L_1 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 7), (RuntimeObject*)L_0);
		return L_1;
	}
}
// Method Definition Index: 10563
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_IndexOf_m961F572B556854820B626EDF68D43EB20197152F_gshared (ReadOnlyCollection_1_tA097AD399F1ED95CBDEFC0663790A10C4A43DFB8* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		int32_t L_1 = ___0_value;
		NullCheck(L_0);
		int32_t L_2;
		L_2 = InterfaceFuncInvoker1< int32_t, int32_t >::Invoke(2, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_0, L_1);
		return L_2;
	}
}
// Method Definition Index: 10564
// Method Definition Index: 10565
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_System_Collections_Generic_IListU3CTU3E_get_Item_m2912E4FF6596A0B6D3B935BBA71F6C35CE0201B6_gshared (ReadOnlyCollection_1_tA097AD399F1ED95CBDEFC0663790A10C4A43DFB8* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		int32_t L_1 = ___0_index;
		NullCheck(L_0);
		int32_t L_2;
		L_2 = InterfaceFuncInvoker1< int32_t, int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_0, L_1);
		return L_2;
	}
}
// Method Definition Index: 10566
// Method Definition Index: 10567
// Method Definition Index: 10568
// Method Definition Index: 10569
// Method Definition Index: 10570
// Method Definition Index: 10571
// Method Definition Index: 10572
// Method Definition Index: 10573
// Method Definition Index: 10574
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlyCollection_1_System_Collections_ICollection_CopyTo_m089CA6EA1954E1294EBAB5A5AC34EE88D435A777_gshared (ReadOnlyCollection_1_tA097AD399F1ED95CBDEFC0663790A10C4A43DFB8* __this, RuntimeArray* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(Type_t_StaticInit);
	//<source_info:<no-source>:1>
	__Il2CppInt32EnumU5BU5D_t8FBDB13799B3615AA893F06F601FF09189B04297* V_0 = NULL;
	Type_t* V_1 = NULL;
	Type_t* V_2 = NULL;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_3 = NULL;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		RuntimeArray* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC(3, NULL);
	}

IL_0009:
	{
		RuntimeArray* L_1 = ___0_array;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = il2cpp_codegen_array_get_rank(L_1);
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_0018;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA(7, NULL);
	}

IL_0018:
	{
		RuntimeArray* L_3 = ___0_array;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(L_3, 0, NULL);
		if (!L_4)
		{
			goto IL_0027;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA(6, NULL);
	}

IL_0027:
	{
		int32_t L_5 = ___1_index;
		if ((((int32_t)L_5) >= ((int32_t)0)))
		{
			goto IL_0030;
		}
	}
	{
		ThrowHelper_ThrowIndexArgumentOutOfRange_NeedNonNegNumException_m57AAB1E093F20BFC64BDDBD90FB5B592F582B82F(NULL);
	}

IL_0030:
	{
		RuntimeArray* L_6 = ___0_array;
		NullCheck(L_6);
		int32_t L_7;
		L_7 = il2cpp_codegen_array_get_length(L_6);
		int32_t L_8 = ___1_index;
		int32_t L_9;
		L_9 = ReadOnlyCollection_1_get_Count_mE688C15AB77A4844B3FE1700E2713247F0B0DF9D(__this, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 10));
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_7, L_8))) >= ((int32_t)L_9)))
		{
			goto IL_0046;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA(5, NULL);
	}

IL_0046:
	{
		RuntimeArray* L_10 = ___0_array;
		V_0 = ((__Il2CppInt32EnumU5BU5D_t8FBDB13799B3615AA893F06F601FF09189B04297*)IsInstSealed((RuntimeObject*)L_10, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 11)));
		__Il2CppInt32EnumU5BU5D_t8FBDB13799B3615AA893F06F601FF09189B04297* L_11 = V_0;
		if (!L_11)
		{
			goto IL_005e;
		}
	}
	{
		RuntimeObject* L_12 = __this->___list;
		__Il2CppInt32EnumU5BU5D_t8FBDB13799B3615AA893F06F601FF09189B04297* L_13 = V_0;
		int32_t L_14 = ___1_index;
		NullCheck((RuntimeObject*)L_12);
		InterfaceActionInvoker2< __Il2CppInt32EnumU5BU5D_t8FBDB13799B3615AA893F06F601FF09189B04297*, int32_t >::Invoke(5, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 0), (RuntimeObject*)L_12, L_13, L_14);
		return;
	}

IL_005e:
	{
		RuntimeArray* L_15 = ___0_array;
		NullCheck(L_15);
		Type_t* L_16;
		L_16 = il2cpp_codegen_object_get_type(L_15);
		NullCheck(L_16);
		Type_t* L_17;
		L_17 = VirtualFuncInvoker0< Type_t* >::Invoke(46, L_16);
		V_1 = L_17;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_18 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(il2cpp_codegen_method_rgctx(method), 12)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_19;
		L_19 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_18, NULL);
		V_2 = L_19;
		Type_t* L_20 = V_1;
		Type_t* L_21 = V_2;
		NullCheck(L_20);
		bool L_22;
		L_22 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(22, L_20, L_21);
		if (L_22)
		{
			goto IL_008c;
		}
	}
	{
		Type_t* L_23 = V_2;
		Type_t* L_24 = V_1;
		NullCheck(L_23);
		bool L_25;
		L_25 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(22, L_23, L_24);
		if (L_25)
		{
			goto IL_008c;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58(NULL);
	}

IL_008c:
	{
		RuntimeArray* L_26 = ___0_array;
		V_3 = ((ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)IsInst((RuntimeObject*)L_26, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_27 = V_3;
		if (L_27)
		{
			goto IL_009b;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58(NULL);
	}

IL_009b:
	{
		RuntimeObject* L_28 = __this->___list;
		NullCheck((RuntimeObject*)L_28);
		int32_t L_29;
		L_29 = InterfaceFuncInvoker0< int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 0), (RuntimeObject*)L_28);
		V_4 = L_29;
	}
	try
	{
		{
			V_5 = 0;
			goto IL_00cd_1;
		}

IL_00ad_1:
		{
			ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_30 = V_3;
			int32_t L_31 = ___1_index;
			int32_t L_32 = L_31;
			___1_index = ((int32_t)il2cpp_codegen_add(L_32, 1));
			RuntimeObject* L_33 = __this->___list;
			int32_t L_34 = V_5;
			NullCheck(L_33);
			int32_t L_35;
			L_35 = InterfaceFuncInvoker1< int32_t, int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_33, L_34);
			int32_t L_36 = L_35;
			RuntimeObject* L_37 = Box(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4), &L_36);
			NullCheck(L_30);
			ArrayElementTypeCheck (L_30, L_37);
			(L_30)->SetAt(static_cast<il2cpp_array_size_t>(L_32), (RuntimeObject*)L_37);
			int32_t L_38 = V_5;
			V_5 = ((int32_t)il2cpp_codegen_add(L_38, 1));
		}

IL_00cd_1:
		{
			int32_t L_39 = V_5;
			int32_t L_40 = V_4;
			if ((((int32_t)L_39) < ((int32_t)L_40)))
			{
				goto IL_00ad_1;
			}
		}
		{
			goto IL_00dd;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_00d5;
		}
		throw e;
	}

CATCH_00d5:
	{
		ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1* L_41 = ((ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1*)IL2CPP_GET_ACTIVE_EXCEPTION(ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1*));;
		ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58(NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_00dd;
	}

IL_00dd:
	{
		return;
	}
}
// Method Definition Index: 10575
// Method Definition Index: 10576
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ReadOnlyCollection_1_System_Collections_IList_get_Item_m5FCD309B54A2523B12ED765E5A75052E1E9D1EA4_gshared (ReadOnlyCollection_1_tA097AD399F1ED95CBDEFC0663790A10C4A43DFB8* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		int32_t L_1 = ___0_index;
		NullCheck(L_0);
		int32_t L_2;
		L_2 = InterfaceFuncInvoker1< int32_t, int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_0, L_1);
		int32_t L_3 = L_2;
		RuntimeObject* L_4 = Box(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4), &L_3);
		return L_4;
	}
}
// Method Definition Index: 10577
// Method Definition Index: 10578
// Method Definition Index: 10579
// Method Definition Index: 10580
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_IsCompatibleObject_mCA01E7A251A192A7B0A1CBC8613CCCFE6CCDBDD0_gshared (RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	{
		RuntimeObject* L_0 = ___0_value;
		if (((RuntimeObject*)IsInstSealed((RuntimeObject*)L_0, il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 4))))
		{
			goto IL_001f;
		}
	}
	{
		RuntimeObject* L_1 = ___0_value;
		if (L_1)
		{
			goto IL_001d;
		}
	}
	{
		il2cpp_codegen_initobj((&V_0), sizeof(int32_t));
		int32_t L_2 = V_0;
		return false;
	}

IL_001d:
	{
		return (bool)0;
	}

IL_001f:
	{
		return (bool)1;
	}
}
// Method Definition Index: 10581
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_System_Collections_IList_Contains_mB482D38A89FCA844368E5849A4902D304A2DBE13_gshared (ReadOnlyCollection_1_tA097AD399F1ED95CBDEFC0663790A10C4A43DFB8* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = ___0_value;
		bool L_1;
		L_1 = ReadOnlyCollection_1_IsCompatibleObject_mCA01E7A251A192A7B0A1CBC8613CCCFE6CCDBDD0(L_0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 13));
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject* L_2 = ___0_value;
		bool L_3;
		L_3 = ReadOnlyCollection_1_Contains_m735114B46C15E226E1ACA6FCFFCB0AB14ADBFC87(__this, ((*(int32_t*)UnBox(L_2, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4)))), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 14));
		return L_3;
	}

IL_0015:
	{
		return (bool)0;
	}
}
// Method Definition Index: 10582
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_System_Collections_IList_IndexOf_m05E201DC4B178B303D10F826088FA344474E5310_gshared (ReadOnlyCollection_1_tA097AD399F1ED95CBDEFC0663790A10C4A43DFB8* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = ___0_value;
		bool L_1;
		L_1 = ReadOnlyCollection_1_IsCompatibleObject_mCA01E7A251A192A7B0A1CBC8613CCCFE6CCDBDD0(L_0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 13));
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject* L_2 = ___0_value;
		int32_t L_3;
		L_3 = ReadOnlyCollection_1_IndexOf_m961F572B556854820B626EDF68D43EB20197152F(__this, ((*(int32_t*)UnBox(L_2, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4)))), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 15));
		return L_3;
	}

IL_0015:
	{
		return (-1);
	}
}
// Method Definition Index: 10583
// Method Definition Index: 10584
// Method Definition Index: 10585
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 10557
// Method Definition Index: 10558
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_get_Count_mA8EA6EA02972D7BF8CB6FA0098132350D435F55A_gshared (ReadOnlyCollection_1_t57A9EA1D0B6B2A5908DD58EA8C84F29F53D509A1* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		NullCheck((RuntimeObject*)L_0);
		int32_t L_1;
		L_1 = InterfaceFuncInvoker0< int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 0), (RuntimeObject*)L_0);
		return L_1;
	}
}
// Method Definition Index: 10559
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t ReadOnlyCollection_1_get_Item_m5E6270A15B2DFB045FFCBBAE2EAB9E59249BA751_gshared (ReadOnlyCollection_1_t57A9EA1D0B6B2A5908DD58EA8C84F29F53D509A1* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		int32_t L_1 = ___0_index;
		NullCheck(L_0);
		uint32_t L_2;
		L_2 = InterfaceFuncInvoker1< uint32_t, int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_0, L_1);
		return L_2;
	}
}
// Method Definition Index: 10560
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_Contains_mE1C0EA44DEB639FE3F1ED4D33CDDC26D71844898_gshared (ReadOnlyCollection_1_t57A9EA1D0B6B2A5908DD58EA8C84F29F53D509A1* __this, uint32_t ___0_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		uint32_t L_1 = ___0_value;
		NullCheck((RuntimeObject*)L_0);
		bool L_2;
		L_2 = InterfaceFuncInvoker1< bool, uint32_t >::Invoke(4, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 0), (RuntimeObject*)L_0, L_1);
		return L_2;
	}
}
// Method Definition Index: 10561
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlyCollection_1_CopyTo_m382032E92E73EDD512B805880D9A2AAF5AE46AAC_gshared (ReadOnlyCollection_1_t57A9EA1D0B6B2A5908DD58EA8C84F29F53D509A1* __this, __Il2CppUInt32EnumU5BU5D_t59DD627323F45C05F28FE49E0DEA327606079F43* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		__Il2CppUInt32EnumU5BU5D_t59DD627323F45C05F28FE49E0DEA327606079F43* L_1 = ___0_array;
		int32_t L_2 = ___1_index;
		NullCheck((RuntimeObject*)L_0);
		InterfaceActionInvoker2< __Il2CppUInt32EnumU5BU5D_t59DD627323F45C05F28FE49E0DEA327606079F43*, int32_t >::Invoke(5, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 0), (RuntimeObject*)L_0, L_1, L_2);
		return;
	}
}
// Method Definition Index: 10562
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ReadOnlyCollection_1_GetEnumerator_mFDC6AD9EFE0C94DA5522EC95A51EF6660F016DFC_gshared (ReadOnlyCollection_1_t57A9EA1D0B6B2A5908DD58EA8C84F29F53D509A1* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		NullCheck((RuntimeObject*)L_0);
		RuntimeObject* L_1;
		L_1 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 7), (RuntimeObject*)L_0);
		return L_1;
	}
}
// Method Definition Index: 10563
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_IndexOf_m1FD6AD4EBF448B0138CA00EE76420826A1285714_gshared (ReadOnlyCollection_1_t57A9EA1D0B6B2A5908DD58EA8C84F29F53D509A1* __this, uint32_t ___0_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		uint32_t L_1 = ___0_value;
		NullCheck(L_0);
		int32_t L_2;
		L_2 = InterfaceFuncInvoker1< int32_t, uint32_t >::Invoke(2, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_0, L_1);
		return L_2;
	}
}
// Method Definition Index: 10564
// Method Definition Index: 10565
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t ReadOnlyCollection_1_System_Collections_Generic_IListU3CTU3E_get_Item_m594C0FF74788FD238398808234FD60F36DE09448_gshared (ReadOnlyCollection_1_t57A9EA1D0B6B2A5908DD58EA8C84F29F53D509A1* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		int32_t L_1 = ___0_index;
		NullCheck(L_0);
		uint32_t L_2;
		L_2 = InterfaceFuncInvoker1< uint32_t, int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_0, L_1);
		return L_2;
	}
}
// Method Definition Index: 10566
// Method Definition Index: 10567
// Method Definition Index: 10568
// Method Definition Index: 10569
// Method Definition Index: 10570
// Method Definition Index: 10571
// Method Definition Index: 10572
// Method Definition Index: 10573
// Method Definition Index: 10574
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlyCollection_1_System_Collections_ICollection_CopyTo_m5B65D982A5CF8F98F32FA4D531DF2D6E63E58BE7_gshared (ReadOnlyCollection_1_t57A9EA1D0B6B2A5908DD58EA8C84F29F53D509A1* __this, RuntimeArray* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(Type_t_StaticInit);
	//<source_info:<no-source>:1>
	__Il2CppUInt32EnumU5BU5D_t59DD627323F45C05F28FE49E0DEA327606079F43* V_0 = NULL;
	Type_t* V_1 = NULL;
	Type_t* V_2 = NULL;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_3 = NULL;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		RuntimeArray* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC(3, NULL);
	}

IL_0009:
	{
		RuntimeArray* L_1 = ___0_array;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = il2cpp_codegen_array_get_rank(L_1);
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_0018;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA(7, NULL);
	}

IL_0018:
	{
		RuntimeArray* L_3 = ___0_array;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(L_3, 0, NULL);
		if (!L_4)
		{
			goto IL_0027;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA(6, NULL);
	}

IL_0027:
	{
		int32_t L_5 = ___1_index;
		if ((((int32_t)L_5) >= ((int32_t)0)))
		{
			goto IL_0030;
		}
	}
	{
		ThrowHelper_ThrowIndexArgumentOutOfRange_NeedNonNegNumException_m57AAB1E093F20BFC64BDDBD90FB5B592F582B82F(NULL);
	}

IL_0030:
	{
		RuntimeArray* L_6 = ___0_array;
		NullCheck(L_6);
		int32_t L_7;
		L_7 = il2cpp_codegen_array_get_length(L_6);
		int32_t L_8 = ___1_index;
		int32_t L_9;
		L_9 = ReadOnlyCollection_1_get_Count_mA8EA6EA02972D7BF8CB6FA0098132350D435F55A(__this, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 10));
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_7, L_8))) >= ((int32_t)L_9)))
		{
			goto IL_0046;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA(5, NULL);
	}

IL_0046:
	{
		RuntimeArray* L_10 = ___0_array;
		V_0 = ((__Il2CppUInt32EnumU5BU5D_t59DD627323F45C05F28FE49E0DEA327606079F43*)IsInstSealed((RuntimeObject*)L_10, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 11)));
		__Il2CppUInt32EnumU5BU5D_t59DD627323F45C05F28FE49E0DEA327606079F43* L_11 = V_0;
		if (!L_11)
		{
			goto IL_005e;
		}
	}
	{
		RuntimeObject* L_12 = __this->___list;
		__Il2CppUInt32EnumU5BU5D_t59DD627323F45C05F28FE49E0DEA327606079F43* L_13 = V_0;
		int32_t L_14 = ___1_index;
		NullCheck((RuntimeObject*)L_12);
		InterfaceActionInvoker2< __Il2CppUInt32EnumU5BU5D_t59DD627323F45C05F28FE49E0DEA327606079F43*, int32_t >::Invoke(5, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 0), (RuntimeObject*)L_12, L_13, L_14);
		return;
	}

IL_005e:
	{
		RuntimeArray* L_15 = ___0_array;
		NullCheck(L_15);
		Type_t* L_16;
		L_16 = il2cpp_codegen_object_get_type(L_15);
		NullCheck(L_16);
		Type_t* L_17;
		L_17 = VirtualFuncInvoker0< Type_t* >::Invoke(46, L_16);
		V_1 = L_17;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_18 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(il2cpp_codegen_method_rgctx(method), 12)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_19;
		L_19 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_18, NULL);
		V_2 = L_19;
		Type_t* L_20 = V_1;
		Type_t* L_21 = V_2;
		NullCheck(L_20);
		bool L_22;
		L_22 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(22, L_20, L_21);
		if (L_22)
		{
			goto IL_008c;
		}
	}
	{
		Type_t* L_23 = V_2;
		Type_t* L_24 = V_1;
		NullCheck(L_23);
		bool L_25;
		L_25 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(22, L_23, L_24);
		if (L_25)
		{
			goto IL_008c;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58(NULL);
	}

IL_008c:
	{
		RuntimeArray* L_26 = ___0_array;
		V_3 = ((ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)IsInst((RuntimeObject*)L_26, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_27 = V_3;
		if (L_27)
		{
			goto IL_009b;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58(NULL);
	}

IL_009b:
	{
		RuntimeObject* L_28 = __this->___list;
		NullCheck((RuntimeObject*)L_28);
		int32_t L_29;
		L_29 = InterfaceFuncInvoker0< int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 0), (RuntimeObject*)L_28);
		V_4 = L_29;
	}
	try
	{
		{
			V_5 = 0;
			goto IL_00cd_1;
		}

IL_00ad_1:
		{
			ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_30 = V_3;
			int32_t L_31 = ___1_index;
			int32_t L_32 = L_31;
			___1_index = ((int32_t)il2cpp_codegen_add(L_32, 1));
			RuntimeObject* L_33 = __this->___list;
			int32_t L_34 = V_5;
			NullCheck(L_33);
			uint32_t L_35;
			L_35 = InterfaceFuncInvoker1< uint32_t, int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_33, L_34);
			uint32_t L_36 = L_35;
			RuntimeObject* L_37 = Box(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4), &L_36);
			NullCheck(L_30);
			ArrayElementTypeCheck (L_30, L_37);
			(L_30)->SetAt(static_cast<il2cpp_array_size_t>(L_32), (RuntimeObject*)L_37);
			int32_t L_38 = V_5;
			V_5 = ((int32_t)il2cpp_codegen_add(L_38, 1));
		}

IL_00cd_1:
		{
			int32_t L_39 = V_5;
			int32_t L_40 = V_4;
			if ((((int32_t)L_39) < ((int32_t)L_40)))
			{
				goto IL_00ad_1;
			}
		}
		{
			goto IL_00dd;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_00d5;
		}
		throw e;
	}

CATCH_00d5:
	{
		ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1* L_41 = ((ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1*)IL2CPP_GET_ACTIVE_EXCEPTION(ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1*));;
		ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58(NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_00dd;
	}

IL_00dd:
	{
		return;
	}
}
// Method Definition Index: 10575
// Method Definition Index: 10576
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ReadOnlyCollection_1_System_Collections_IList_get_Item_mF1B467BED3EC723FEC450FA5E2C193D7F8E232C8_gshared (ReadOnlyCollection_1_t57A9EA1D0B6B2A5908DD58EA8C84F29F53D509A1* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		int32_t L_1 = ___0_index;
		NullCheck(L_0);
		uint32_t L_2;
		L_2 = InterfaceFuncInvoker1< uint32_t, int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_0, L_1);
		uint32_t L_3 = L_2;
		RuntimeObject* L_4 = Box(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4), &L_3);
		return L_4;
	}
}
// Method Definition Index: 10577
// Method Definition Index: 10578
// Method Definition Index: 10579
// Method Definition Index: 10580
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_IsCompatibleObject_m0004547519D968FF5DA50C0A87FC7BC11E04578A_gshared (RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	//<source_info:<no-source>:1>
	uint32_t V_0 = 0;
	{
		RuntimeObject* L_0 = ___0_value;
		if (((RuntimeObject*)IsInstSealed((RuntimeObject*)L_0, il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 4))))
		{
			goto IL_001f;
		}
	}
	{
		RuntimeObject* L_1 = ___0_value;
		if (L_1)
		{
			goto IL_001d;
		}
	}
	{
		il2cpp_codegen_initobj((&V_0), sizeof(uint32_t));
		uint32_t L_2 = V_0;
		return false;
	}

IL_001d:
	{
		return (bool)0;
	}

IL_001f:
	{
		return (bool)1;
	}
}
// Method Definition Index: 10581
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_System_Collections_IList_Contains_m4D74E2920CA27A98DC0317544D57D4FECB07C2C2_gshared (ReadOnlyCollection_1_t57A9EA1D0B6B2A5908DD58EA8C84F29F53D509A1* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = ___0_value;
		bool L_1;
		L_1 = ReadOnlyCollection_1_IsCompatibleObject_m0004547519D968FF5DA50C0A87FC7BC11E04578A(L_0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 13));
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject* L_2 = ___0_value;
		bool L_3;
		L_3 = ReadOnlyCollection_1_Contains_mE1C0EA44DEB639FE3F1ED4D33CDDC26D71844898(__this, ((*(uint32_t*)UnBox(L_2, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4)))), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 14));
		return L_3;
	}

IL_0015:
	{
		return (bool)0;
	}
}
// Method Definition Index: 10582
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_System_Collections_IList_IndexOf_m95E55C3CCB39EAAF62F6DDA5AF09A33B8F4D660F_gshared (ReadOnlyCollection_1_t57A9EA1D0B6B2A5908DD58EA8C84F29F53D509A1* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = ___0_value;
		bool L_1;
		L_1 = ReadOnlyCollection_1_IsCompatibleObject_m0004547519D968FF5DA50C0A87FC7BC11E04578A(L_0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 13));
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject* L_2 = ___0_value;
		int32_t L_3;
		L_3 = ReadOnlyCollection_1_IndexOf_m1FD6AD4EBF448B0138CA00EE76420826A1285714(__this, ((*(uint32_t*)UnBox(L_2, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4)))), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 15));
		return L_3;
	}

IL_0015:
	{
		return (-1);
	}
}
// Method Definition Index: 10583
// Method Definition Index: 10584
// Method Definition Index: 10585
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 10557
// Method Definition Index: 10558
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_get_Count_m6C0A093B331DA8B9A784CF3C61AFBB1006D6BB6E (ReadOnlyCollection_1_tDA9EBC2C2934508604BBB2BA544E97C8DA1907BF* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = InterfaceFuncInvoker0< int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 0), L_0);
		return L_1;
	}
}
// Method Definition Index: 10559
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float2_t3398D7209CB6D09FEA5C49AC55070C5E7BE0B2A5 ReadOnlyCollection_1_get_Item_mF36A61169A48FD08A7BABAFFD1EE3581C2EB4A66 (ReadOnlyCollection_1_tDA9EBC2C2934508604BBB2BA544E97C8DA1907BF* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		int32_t L_1 = ___0_index;
		NullCheck(L_0);
		float2_t3398D7209CB6D09FEA5C49AC55070C5E7BE0B2A5 L_2;
		L_2 = InterfaceFuncInvoker1< float2_t3398D7209CB6D09FEA5C49AC55070C5E7BE0B2A5, int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_0, L_1);
		return L_2;
	}
}
// Method Definition Index: 10560
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_Contains_mA2E681DDC1D0CB4B3A55B8895EDF2B7F073A417C (ReadOnlyCollection_1_tDA9EBC2C2934508604BBB2BA544E97C8DA1907BF* __this, float2_t3398D7209CB6D09FEA5C49AC55070C5E7BE0B2A5 ___0_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		float2_t3398D7209CB6D09FEA5C49AC55070C5E7BE0B2A5 L_1 = ___0_value;
		NullCheck(L_0);
		bool L_2;
		L_2 = InterfaceFuncInvoker1< bool, float2_t3398D7209CB6D09FEA5C49AC55070C5E7BE0B2A5 >::Invoke(4, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 0), L_0, L_1);
		return L_2;
	}
}
// Method Definition Index: 10561
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlyCollection_1_CopyTo_mBFA6DF19A6C068CC698F75755AD9ED5EE6539BF9 (ReadOnlyCollection_1_tDA9EBC2C2934508604BBB2BA544E97C8DA1907BF* __this, float2U5BU5D_t7F04848FC796653244477DC40830B0A39D67D350* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		float2U5BU5D_t7F04848FC796653244477DC40830B0A39D67D350* L_1 = ___0_array;
		int32_t L_2 = ___1_index;
		NullCheck(L_0);
		InterfaceActionInvoker2< float2U5BU5D_t7F04848FC796653244477DC40830B0A39D67D350*, int32_t >::Invoke(5, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 0), L_0, L_1, L_2);
		return;
	}
}
// Method Definition Index: 10562
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ReadOnlyCollection_1_GetEnumerator_mA57780FF97A58192205B474E9ABD37A2C7ED9CC7 (ReadOnlyCollection_1_tDA9EBC2C2934508604BBB2BA544E97C8DA1907BF* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 7), L_0);
		return L_1;
	}
}
// Method Definition Index: 10563
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_IndexOf_mDC6A3B52E8647FB457B77CF3CCF4B133C84B646B (ReadOnlyCollection_1_tDA9EBC2C2934508604BBB2BA544E97C8DA1907BF* __this, float2_t3398D7209CB6D09FEA5C49AC55070C5E7BE0B2A5 ___0_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		float2_t3398D7209CB6D09FEA5C49AC55070C5E7BE0B2A5 L_1 = ___0_value;
		NullCheck(L_0);
		int32_t L_2;
		L_2 = InterfaceFuncInvoker1< int32_t, float2_t3398D7209CB6D09FEA5C49AC55070C5E7BE0B2A5 >::Invoke(2, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_0, L_1);
		return L_2;
	}
}
// Method Definition Index: 10564
// Method Definition Index: 10565
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float2_t3398D7209CB6D09FEA5C49AC55070C5E7BE0B2A5 ReadOnlyCollection_1_System_Collections_Generic_IListU3CTU3E_get_Item_m054BC3D764E8B9DA6B14B22E09B1C8C3D02C2331 (ReadOnlyCollection_1_tDA9EBC2C2934508604BBB2BA544E97C8DA1907BF* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		int32_t L_1 = ___0_index;
		NullCheck(L_0);
		float2_t3398D7209CB6D09FEA5C49AC55070C5E7BE0B2A5 L_2;
		L_2 = InterfaceFuncInvoker1< float2_t3398D7209CB6D09FEA5C49AC55070C5E7BE0B2A5, int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_0, L_1);
		return L_2;
	}
}
// Method Definition Index: 10566
// Method Definition Index: 10567
// Method Definition Index: 10568
// Method Definition Index: 10569
// Method Definition Index: 10570
// Method Definition Index: 10571
// Method Definition Index: 10572
// Method Definition Index: 10573
// Method Definition Index: 10574
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlyCollection_1_System_Collections_ICollection_CopyTo_mE6615386D1304F63E64DDAA185404615AA07D44D (ReadOnlyCollection_1_tDA9EBC2C2934508604BBB2BA544E97C8DA1907BF* __this, RuntimeArray* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(Type_t_StaticInit);
	//<source_info:<no-source>:1>
	float2U5BU5D_t7F04848FC796653244477DC40830B0A39D67D350* V_0 = NULL;
	Type_t* V_1 = NULL;
	Type_t* V_2 = NULL;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_3 = NULL;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		RuntimeArray* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC(3, NULL);
	}

IL_0009:
	{
		RuntimeArray* L_1 = ___0_array;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = il2cpp_codegen_array_get_rank(L_1);
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_0018;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA(7, NULL);
	}

IL_0018:
	{
		RuntimeArray* L_3 = ___0_array;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(L_3, 0, NULL);
		if (!L_4)
		{
			goto IL_0027;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA(6, NULL);
	}

IL_0027:
	{
		int32_t L_5 = ___1_index;
		if ((((int32_t)L_5) >= ((int32_t)0)))
		{
			goto IL_0030;
		}
	}
	{
		ThrowHelper_ThrowIndexArgumentOutOfRange_NeedNonNegNumException_m57AAB1E093F20BFC64BDDBD90FB5B592F582B82F(NULL);
	}

IL_0030:
	{
		RuntimeArray* L_6 = ___0_array;
		NullCheck(L_6);
		int32_t L_7;
		L_7 = il2cpp_codegen_array_get_length(L_6);
		int32_t L_8 = ___1_index;
		int32_t L_9;
		L_9 = ReadOnlyCollection_1_get_Count_m6C0A093B331DA8B9A784CF3C61AFBB1006D6BB6E(__this, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 10));
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_7, L_8))) >= ((int32_t)L_9)))
		{
			goto IL_0046;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA(5, NULL);
	}

IL_0046:
	{
		RuntimeArray* L_10 = ___0_array;
		V_0 = ((float2U5BU5D_t7F04848FC796653244477DC40830B0A39D67D350*)IsInstSealed((RuntimeObject*)L_10, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 11)));
		float2U5BU5D_t7F04848FC796653244477DC40830B0A39D67D350* L_11 = V_0;
		if (!L_11)
		{
			goto IL_005e;
		}
	}
	{
		RuntimeObject* L_12 = __this->___list;
		float2U5BU5D_t7F04848FC796653244477DC40830B0A39D67D350* L_13 = V_0;
		int32_t L_14 = ___1_index;
		NullCheck(L_12);
		InterfaceActionInvoker2< float2U5BU5D_t7F04848FC796653244477DC40830B0A39D67D350*, int32_t >::Invoke(5, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 0), L_12, L_13, L_14);
		return;
	}

IL_005e:
	{
		RuntimeArray* L_15 = ___0_array;
		NullCheck(L_15);
		Type_t* L_16;
		L_16 = il2cpp_codegen_object_get_type(L_15);
		NullCheck(L_16);
		Type_t* L_17;
		L_17 = VirtualFuncInvoker0< Type_t* >::Invoke(46, L_16);
		V_1 = L_17;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_18 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(il2cpp_codegen_method_rgctx(method), 12)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_19;
		L_19 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_18, NULL);
		V_2 = L_19;
		Type_t* L_20 = V_1;
		Type_t* L_21 = V_2;
		NullCheck(L_20);
		bool L_22;
		L_22 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(22, L_20, L_21);
		if (L_22)
		{
			goto IL_008c;
		}
	}
	{
		Type_t* L_23 = V_2;
		Type_t* L_24 = V_1;
		NullCheck(L_23);
		bool L_25;
		L_25 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(22, L_23, L_24);
		if (L_25)
		{
			goto IL_008c;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58(NULL);
	}

IL_008c:
	{
		RuntimeArray* L_26 = ___0_array;
		V_3 = ((ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)IsInst((RuntimeObject*)L_26, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_27 = V_3;
		if (L_27)
		{
			goto IL_009b;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58(NULL);
	}

IL_009b:
	{
		RuntimeObject* L_28 = __this->___list;
		NullCheck(L_28);
		int32_t L_29;
		L_29 = InterfaceFuncInvoker0< int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 0), L_28);
		V_4 = L_29;
	}
	try
	{
		{
			V_5 = 0;
			goto IL_00cd_1;
		}

IL_00ad_1:
		{
			ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_30 = V_3;
			int32_t L_31 = ___1_index;
			int32_t L_32 = L_31;
			___1_index = ((int32_t)il2cpp_codegen_add(L_32, 1));
			RuntimeObject* L_33 = __this->___list;
			int32_t L_34 = V_5;
			NullCheck(L_33);
			float2_t3398D7209CB6D09FEA5C49AC55070C5E7BE0B2A5 L_35;
			L_35 = InterfaceFuncInvoker1< float2_t3398D7209CB6D09FEA5C49AC55070C5E7BE0B2A5, int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_33, L_34);
			float2_t3398D7209CB6D09FEA5C49AC55070C5E7BE0B2A5 L_36 = L_35;
			RuntimeObject* L_37 = Box(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4), &L_36);
			NullCheck(L_30);
			ArrayElementTypeCheck (L_30, L_37);
			(L_30)->SetAt(static_cast<il2cpp_array_size_t>(L_32), (RuntimeObject*)L_37);
			int32_t L_38 = V_5;
			V_5 = ((int32_t)il2cpp_codegen_add(L_38, 1));
		}

IL_00cd_1:
		{
			int32_t L_39 = V_5;
			int32_t L_40 = V_4;
			if ((((int32_t)L_39) < ((int32_t)L_40)))
			{
				goto IL_00ad_1;
			}
		}
		{
			goto IL_00dd;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_00d5;
		}
		throw e;
	}

CATCH_00d5:
	{
		ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1* L_41 = ((ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1*)IL2CPP_GET_ACTIVE_EXCEPTION(ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1*));;
		ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58(NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_00dd;
	}

IL_00dd:
	{
		return;
	}
}
// Method Definition Index: 10575
// Method Definition Index: 10576
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ReadOnlyCollection_1_System_Collections_IList_get_Item_m4F705E0EB6894FB6A443D80B113389DBD8108AED (ReadOnlyCollection_1_tDA9EBC2C2934508604BBB2BA544E97C8DA1907BF* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		int32_t L_1 = ___0_index;
		NullCheck(L_0);
		float2_t3398D7209CB6D09FEA5C49AC55070C5E7BE0B2A5 L_2;
		L_2 = InterfaceFuncInvoker1< float2_t3398D7209CB6D09FEA5C49AC55070C5E7BE0B2A5, int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_0, L_1);
		float2_t3398D7209CB6D09FEA5C49AC55070C5E7BE0B2A5 L_3 = L_2;
		RuntimeObject* L_4 = Box(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4), &L_3);
		return L_4;
	}
}
// Method Definition Index: 10577
// Method Definition Index: 10578
// Method Definition Index: 10579
// Method Definition Index: 10580
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_IsCompatibleObject_m2B66B388A947DDA65092ACB0015716D7B55E6504 (RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	//<source_info:<no-source>:1>
	float2_t3398D7209CB6D09FEA5C49AC55070C5E7BE0B2A5 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		RuntimeObject* L_0 = ___0_value;
		if (((RuntimeObject*)IsInstSealed((RuntimeObject*)L_0, il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 4))))
		{
			goto IL_001f;
		}
	}
	{
		RuntimeObject* L_1 = ___0_value;
		if (L_1)
		{
			goto IL_001d;
		}
	}
	{
		il2cpp_codegen_initobj((&V_0), sizeof(float2_t3398D7209CB6D09FEA5C49AC55070C5E7BE0B2A5));
		float2_t3398D7209CB6D09FEA5C49AC55070C5E7BE0B2A5 L_2 = V_0;
		return false;
	}

IL_001d:
	{
		return (bool)0;
	}

IL_001f:
	{
		return (bool)1;
	}
}
// Method Definition Index: 10581
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_System_Collections_IList_Contains_m7D13DE72F57F8D3039EBB53EC5CEE698F8F7E7F1 (ReadOnlyCollection_1_tDA9EBC2C2934508604BBB2BA544E97C8DA1907BF* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = ___0_value;
		bool L_1;
		L_1 = ReadOnlyCollection_1_IsCompatibleObject_m2B66B388A947DDA65092ACB0015716D7B55E6504(L_0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 13));
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject* L_2 = ___0_value;
		bool L_3;
		L_3 = ReadOnlyCollection_1_Contains_mA2E681DDC1D0CB4B3A55B8895EDF2B7F073A417C(__this, ((*(float2_t3398D7209CB6D09FEA5C49AC55070C5E7BE0B2A5*)UnBox(L_2, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4)))), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 14));
		return L_3;
	}

IL_0015:
	{
		return (bool)0;
	}
}
// Method Definition Index: 10582
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_System_Collections_IList_IndexOf_m06D8F2AD1C53DEA339406491C5F73993CB470091 (ReadOnlyCollection_1_tDA9EBC2C2934508604BBB2BA544E97C8DA1907BF* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = ___0_value;
		bool L_1;
		L_1 = ReadOnlyCollection_1_IsCompatibleObject_m2B66B388A947DDA65092ACB0015716D7B55E6504(L_0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 13));
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject* L_2 = ___0_value;
		int32_t L_3;
		L_3 = ReadOnlyCollection_1_IndexOf_mDC6A3B52E8647FB457B77CF3CCF4B133C84B646B(__this, ((*(float2_t3398D7209CB6D09FEA5C49AC55070C5E7BE0B2A5*)UnBox(L_2, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4)))), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 15));
		return L_3;
	}

IL_0015:
	{
		return (-1);
	}
}
// Method Definition Index: 10583
// Method Definition Index: 10584
// Method Definition Index: 10585
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 10557
// Method Definition Index: 10558
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_get_Count_mA1936FD531DD97BDB2429883FCC9C9D00CBEA932 (ReadOnlyCollection_1_t502D44622D39E2DFE6DABEFCEA766AC61E338C30* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = InterfaceFuncInvoker0< int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 0), L_0);
		return L_1;
	}
}
// Method Definition Index: 10559
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR IdsOfInstances_t4412C0FA3A4CE4CBFCB20E15BAB081BAC990B350 ReadOnlyCollection_1_get_Item_mF8A4DC4CE863AC97C778B6107F809A2EC2374216 (ReadOnlyCollection_1_t502D44622D39E2DFE6DABEFCEA766AC61E338C30* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		int32_t L_1 = ___0_index;
		NullCheck(L_0);
		IdsOfInstances_t4412C0FA3A4CE4CBFCB20E15BAB081BAC990B350 L_2;
		L_2 = InterfaceFuncInvoker1< IdsOfInstances_t4412C0FA3A4CE4CBFCB20E15BAB081BAC990B350, int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_0, L_1);
		return L_2;
	}
}
// Method Definition Index: 10560
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_Contains_m61F61AD9BAE1A26C4A745A9C53C30BD2CD4D2725 (ReadOnlyCollection_1_t502D44622D39E2DFE6DABEFCEA766AC61E338C30* __this, IdsOfInstances_t4412C0FA3A4CE4CBFCB20E15BAB081BAC990B350 ___0_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		IdsOfInstances_t4412C0FA3A4CE4CBFCB20E15BAB081BAC990B350 L_1 = ___0_value;
		NullCheck(L_0);
		bool L_2;
		L_2 = InterfaceFuncInvoker1< bool, IdsOfInstances_t4412C0FA3A4CE4CBFCB20E15BAB081BAC990B350 >::Invoke(4, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 0), L_0, L_1);
		return L_2;
	}
}
// Method Definition Index: 10561
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlyCollection_1_CopyTo_m907254B9D409A343FD5B4DFEE9CB444BAC4E6BC7 (ReadOnlyCollection_1_t502D44622D39E2DFE6DABEFCEA766AC61E338C30* __this, IdsOfInstancesU5BU5D_t6627296D68BD3B37D56902FC2586A0C05853E3BF* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		IdsOfInstancesU5BU5D_t6627296D68BD3B37D56902FC2586A0C05853E3BF* L_1 = ___0_array;
		int32_t L_2 = ___1_index;
		NullCheck(L_0);
		InterfaceActionInvoker2< IdsOfInstancesU5BU5D_t6627296D68BD3B37D56902FC2586A0C05853E3BF*, int32_t >::Invoke(5, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 0), L_0, L_1, L_2);
		return;
	}
}
// Method Definition Index: 10562
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ReadOnlyCollection_1_GetEnumerator_mEDA811E79DF206A71ED6DBD7B8DE86D41FA5A5EB (ReadOnlyCollection_1_t502D44622D39E2DFE6DABEFCEA766AC61E338C30* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 7), L_0);
		return L_1;
	}
}
// Method Definition Index: 10563
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_IndexOf_mC70C67627A847C94D99F61E69307F6115DB32AC3 (ReadOnlyCollection_1_t502D44622D39E2DFE6DABEFCEA766AC61E338C30* __this, IdsOfInstances_t4412C0FA3A4CE4CBFCB20E15BAB081BAC990B350 ___0_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		IdsOfInstances_t4412C0FA3A4CE4CBFCB20E15BAB081BAC990B350 L_1 = ___0_value;
		NullCheck(L_0);
		int32_t L_2;
		L_2 = InterfaceFuncInvoker1< int32_t, IdsOfInstances_t4412C0FA3A4CE4CBFCB20E15BAB081BAC990B350 >::Invoke(2, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_0, L_1);
		return L_2;
	}
}
// Method Definition Index: 10564
// Method Definition Index: 10565
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR IdsOfInstances_t4412C0FA3A4CE4CBFCB20E15BAB081BAC990B350 ReadOnlyCollection_1_System_Collections_Generic_IListU3CTU3E_get_Item_m1C90439B36E80481143CC988BE98C9385C74B32F (ReadOnlyCollection_1_t502D44622D39E2DFE6DABEFCEA766AC61E338C30* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		int32_t L_1 = ___0_index;
		NullCheck(L_0);
		IdsOfInstances_t4412C0FA3A4CE4CBFCB20E15BAB081BAC990B350 L_2;
		L_2 = InterfaceFuncInvoker1< IdsOfInstances_t4412C0FA3A4CE4CBFCB20E15BAB081BAC990B350, int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_0, L_1);
		return L_2;
	}
}
// Method Definition Index: 10566
// Method Definition Index: 10567
// Method Definition Index: 10568
// Method Definition Index: 10569
// Method Definition Index: 10570
// Method Definition Index: 10571
// Method Definition Index: 10572
// Method Definition Index: 10573
// Method Definition Index: 10574
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlyCollection_1_System_Collections_ICollection_CopyTo_m66D7D91096B7C5D1A375797C1EBE91282BECED4E (ReadOnlyCollection_1_t502D44622D39E2DFE6DABEFCEA766AC61E338C30* __this, RuntimeArray* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(Type_t_StaticInit);
	//<source_info:<no-source>:1>
	IdsOfInstancesU5BU5D_t6627296D68BD3B37D56902FC2586A0C05853E3BF* V_0 = NULL;
	Type_t* V_1 = NULL;
	Type_t* V_2 = NULL;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_3 = NULL;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		RuntimeArray* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC(3, NULL);
	}

IL_0009:
	{
		RuntimeArray* L_1 = ___0_array;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = il2cpp_codegen_array_get_rank(L_1);
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_0018;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA(7, NULL);
	}

IL_0018:
	{
		RuntimeArray* L_3 = ___0_array;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(L_3, 0, NULL);
		if (!L_4)
		{
			goto IL_0027;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA(6, NULL);
	}

IL_0027:
	{
		int32_t L_5 = ___1_index;
		if ((((int32_t)L_5) >= ((int32_t)0)))
		{
			goto IL_0030;
		}
	}
	{
		ThrowHelper_ThrowIndexArgumentOutOfRange_NeedNonNegNumException_m57AAB1E093F20BFC64BDDBD90FB5B592F582B82F(NULL);
	}

IL_0030:
	{
		RuntimeArray* L_6 = ___0_array;
		NullCheck(L_6);
		int32_t L_7;
		L_7 = il2cpp_codegen_array_get_length(L_6);
		int32_t L_8 = ___1_index;
		int32_t L_9;
		L_9 = ReadOnlyCollection_1_get_Count_mA1936FD531DD97BDB2429883FCC9C9D00CBEA932(__this, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 10));
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_7, L_8))) >= ((int32_t)L_9)))
		{
			goto IL_0046;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA(5, NULL);
	}

IL_0046:
	{
		RuntimeArray* L_10 = ___0_array;
		V_0 = ((IdsOfInstancesU5BU5D_t6627296D68BD3B37D56902FC2586A0C05853E3BF*)IsInstSealed((RuntimeObject*)L_10, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 11)));
		IdsOfInstancesU5BU5D_t6627296D68BD3B37D56902FC2586A0C05853E3BF* L_11 = V_0;
		if (!L_11)
		{
			goto IL_005e;
		}
	}
	{
		RuntimeObject* L_12 = __this->___list;
		IdsOfInstancesU5BU5D_t6627296D68BD3B37D56902FC2586A0C05853E3BF* L_13 = V_0;
		int32_t L_14 = ___1_index;
		NullCheck(L_12);
		InterfaceActionInvoker2< IdsOfInstancesU5BU5D_t6627296D68BD3B37D56902FC2586A0C05853E3BF*, int32_t >::Invoke(5, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 0), L_12, L_13, L_14);
		return;
	}

IL_005e:
	{
		RuntimeArray* L_15 = ___0_array;
		NullCheck(L_15);
		Type_t* L_16;
		L_16 = il2cpp_codegen_object_get_type(L_15);
		NullCheck(L_16);
		Type_t* L_17;
		L_17 = VirtualFuncInvoker0< Type_t* >::Invoke(46, L_16);
		V_1 = L_17;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_18 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(il2cpp_codegen_method_rgctx(method), 12)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_19;
		L_19 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_18, NULL);
		V_2 = L_19;
		Type_t* L_20 = V_1;
		Type_t* L_21 = V_2;
		NullCheck(L_20);
		bool L_22;
		L_22 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(22, L_20, L_21);
		if (L_22)
		{
			goto IL_008c;
		}
	}
	{
		Type_t* L_23 = V_2;
		Type_t* L_24 = V_1;
		NullCheck(L_23);
		bool L_25;
		L_25 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(22, L_23, L_24);
		if (L_25)
		{
			goto IL_008c;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58(NULL);
	}

IL_008c:
	{
		RuntimeArray* L_26 = ___0_array;
		V_3 = ((ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)IsInst((RuntimeObject*)L_26, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_27 = V_3;
		if (L_27)
		{
			goto IL_009b;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58(NULL);
	}

IL_009b:
	{
		RuntimeObject* L_28 = __this->___list;
		NullCheck(L_28);
		int32_t L_29;
		L_29 = InterfaceFuncInvoker0< int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 0), L_28);
		V_4 = L_29;
	}
	try
	{
		{
			V_5 = 0;
			goto IL_00cd_1;
		}

IL_00ad_1:
		{
			ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_30 = V_3;
			int32_t L_31 = ___1_index;
			int32_t L_32 = L_31;
			___1_index = ((int32_t)il2cpp_codegen_add(L_32, 1));
			RuntimeObject* L_33 = __this->___list;
			int32_t L_34 = V_5;
			NullCheck(L_33);
			IdsOfInstances_t4412C0FA3A4CE4CBFCB20E15BAB081BAC990B350 L_35;
			L_35 = InterfaceFuncInvoker1< IdsOfInstances_t4412C0FA3A4CE4CBFCB20E15BAB081BAC990B350, int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_33, L_34);
			IdsOfInstances_t4412C0FA3A4CE4CBFCB20E15BAB081BAC990B350 L_36 = L_35;
			RuntimeObject* L_37 = Box(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4), &L_36);
			NullCheck(L_30);
			ArrayElementTypeCheck (L_30, L_37);
			(L_30)->SetAt(static_cast<il2cpp_array_size_t>(L_32), (RuntimeObject*)L_37);
			int32_t L_38 = V_5;
			V_5 = ((int32_t)il2cpp_codegen_add(L_38, 1));
		}

IL_00cd_1:
		{
			int32_t L_39 = V_5;
			int32_t L_40 = V_4;
			if ((((int32_t)L_39) < ((int32_t)L_40)))
			{
				goto IL_00ad_1;
			}
		}
		{
			goto IL_00dd;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_00d5;
		}
		throw e;
	}

CATCH_00d5:
	{
		ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1* L_41 = ((ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1*)IL2CPP_GET_ACTIVE_EXCEPTION(ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1*));;
		ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58(NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_00dd;
	}

IL_00dd:
	{
		return;
	}
}
// Method Definition Index: 10575
// Method Definition Index: 10576
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ReadOnlyCollection_1_System_Collections_IList_get_Item_m17AB8AD0B6D93E359BF524A764FBF306002B5F8A (ReadOnlyCollection_1_t502D44622D39E2DFE6DABEFCEA766AC61E338C30* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		int32_t L_1 = ___0_index;
		NullCheck(L_0);
		IdsOfInstances_t4412C0FA3A4CE4CBFCB20E15BAB081BAC990B350 L_2;
		L_2 = InterfaceFuncInvoker1< IdsOfInstances_t4412C0FA3A4CE4CBFCB20E15BAB081BAC990B350, int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_0, L_1);
		IdsOfInstances_t4412C0FA3A4CE4CBFCB20E15BAB081BAC990B350 L_3 = L_2;
		RuntimeObject* L_4 = Box(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4), &L_3);
		return L_4;
	}
}
// Method Definition Index: 10577
// Method Definition Index: 10578
// Method Definition Index: 10579
// Method Definition Index: 10580
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_IsCompatibleObject_m86717E0B268FC5F5BE5EEA037F882F913717BC36 (RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	//<source_info:<no-source>:1>
	IdsOfInstances_t4412C0FA3A4CE4CBFCB20E15BAB081BAC990B350 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		RuntimeObject* L_0 = ___0_value;
		if (((RuntimeObject*)IsInstSealed((RuntimeObject*)L_0, il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 4))))
		{
			goto IL_001f;
		}
	}
	{
		RuntimeObject* L_1 = ___0_value;
		if (L_1)
		{
			goto IL_001d;
		}
	}
	{
		il2cpp_codegen_initobj((&V_0), sizeof(IdsOfInstances_t4412C0FA3A4CE4CBFCB20E15BAB081BAC990B350));
		IdsOfInstances_t4412C0FA3A4CE4CBFCB20E15BAB081BAC990B350 L_2 = V_0;
		return false;
	}

IL_001d:
	{
		return (bool)0;
	}

IL_001f:
	{
		return (bool)1;
	}
}
// Method Definition Index: 10581
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_System_Collections_IList_Contains_m280293D105FDE547D373AC5B631ED06574B72AB1 (ReadOnlyCollection_1_t502D44622D39E2DFE6DABEFCEA766AC61E338C30* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = ___0_value;
		bool L_1;
		L_1 = ReadOnlyCollection_1_IsCompatibleObject_m86717E0B268FC5F5BE5EEA037F882F913717BC36(L_0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 13));
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject* L_2 = ___0_value;
		bool L_3;
		L_3 = ReadOnlyCollection_1_Contains_m61F61AD9BAE1A26C4A745A9C53C30BD2CD4D2725(__this, ((*(IdsOfInstances_t4412C0FA3A4CE4CBFCB20E15BAB081BAC990B350*)UnBox(L_2, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4)))), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 14));
		return L_3;
	}

IL_0015:
	{
		return (bool)0;
	}
}
// Method Definition Index: 10582
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_System_Collections_IList_IndexOf_mA3242ADDB388E3026759856A22D6BE98CB745BDB (ReadOnlyCollection_1_t502D44622D39E2DFE6DABEFCEA766AC61E338C30* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = ___0_value;
		bool L_1;
		L_1 = ReadOnlyCollection_1_IsCompatibleObject_m86717E0B268FC5F5BE5EEA037F882F913717BC36(L_0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 13));
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject* L_2 = ___0_value;
		int32_t L_3;
		L_3 = ReadOnlyCollection_1_IndexOf_mC70C67627A847C94D99F61E69307F6115DB32AC3(__this, ((*(IdsOfInstances_t4412C0FA3A4CE4CBFCB20E15BAB081BAC990B350*)UnBox(L_2, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4)))), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 15));
		return L_3;
	}

IL_0015:
	{
		return (-1);
	}
}
// Method Definition Index: 10583
// Method Definition Index: 10584
// Method Definition Index: 10585
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 10557
// Method Definition Index: 10558
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_get_Count_m8BBBA71F7E653FD881BAB6DBA0B7491E201F4A1A (ReadOnlyCollection_1_t6902277BA0F804A3B22466CBEF4B07E1FB12E479* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = InterfaceFuncInvoker0< int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 0), L_0);
		return L_1;
	}
}
// Method Definition Index: 10559
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ShadowResolutionRequest_tC1B869ADCA139D8D7AD8A355373F84C7F5E0FCBE ReadOnlyCollection_1_get_Item_m381AA141D251B4C5712DC3EA53805239B69258C1 (ReadOnlyCollection_1_t6902277BA0F804A3B22466CBEF4B07E1FB12E479* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		int32_t L_1 = ___0_index;
		NullCheck(L_0);
		ShadowResolutionRequest_tC1B869ADCA139D8D7AD8A355373F84C7F5E0FCBE L_2;
		L_2 = InterfaceFuncInvoker1< ShadowResolutionRequest_tC1B869ADCA139D8D7AD8A355373F84C7F5E0FCBE, int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_0, L_1);
		return L_2;
	}
}
// Method Definition Index: 10560
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_Contains_mE965B78D4C7A68816A24B72AAB973616BE9D18E0 (ReadOnlyCollection_1_t6902277BA0F804A3B22466CBEF4B07E1FB12E479* __this, ShadowResolutionRequest_tC1B869ADCA139D8D7AD8A355373F84C7F5E0FCBE ___0_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		ShadowResolutionRequest_tC1B869ADCA139D8D7AD8A355373F84C7F5E0FCBE L_1 = ___0_value;
		NullCheck(L_0);
		bool L_2;
		L_2 = InterfaceFuncInvoker1< bool, ShadowResolutionRequest_tC1B869ADCA139D8D7AD8A355373F84C7F5E0FCBE >::Invoke(4, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 0), L_0, L_1);
		return L_2;
	}
}
// Method Definition Index: 10561
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlyCollection_1_CopyTo_mAC5AD734BBFB53DD97840785B2A536E9D2416DDA (ReadOnlyCollection_1_t6902277BA0F804A3B22466CBEF4B07E1FB12E479* __this, ShadowResolutionRequestU5BU5D_tC33A2E5E2712B8688E21C80BB2350155D029B334* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		ShadowResolutionRequestU5BU5D_tC33A2E5E2712B8688E21C80BB2350155D029B334* L_1 = ___0_array;
		int32_t L_2 = ___1_index;
		NullCheck(L_0);
		InterfaceActionInvoker2< ShadowResolutionRequestU5BU5D_tC33A2E5E2712B8688E21C80BB2350155D029B334*, int32_t >::Invoke(5, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 0), L_0, L_1, L_2);
		return;
	}
}
// Method Definition Index: 10562
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ReadOnlyCollection_1_GetEnumerator_mC312BA1F1180BBBD75ADC5FA63E91CCF206426E5 (ReadOnlyCollection_1_t6902277BA0F804A3B22466CBEF4B07E1FB12E479* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 7), L_0);
		return L_1;
	}
}
// Method Definition Index: 10563
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_IndexOf_m9C7502E77592EEE40AFD08845CBA291A2EA1DE24 (ReadOnlyCollection_1_t6902277BA0F804A3B22466CBEF4B07E1FB12E479* __this, ShadowResolutionRequest_tC1B869ADCA139D8D7AD8A355373F84C7F5E0FCBE ___0_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		ShadowResolutionRequest_tC1B869ADCA139D8D7AD8A355373F84C7F5E0FCBE L_1 = ___0_value;
		NullCheck(L_0);
		int32_t L_2;
		L_2 = InterfaceFuncInvoker1< int32_t, ShadowResolutionRequest_tC1B869ADCA139D8D7AD8A355373F84C7F5E0FCBE >::Invoke(2, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_0, L_1);
		return L_2;
	}
}
// Method Definition Index: 10564
// Method Definition Index: 10565
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ShadowResolutionRequest_tC1B869ADCA139D8D7AD8A355373F84C7F5E0FCBE ReadOnlyCollection_1_System_Collections_Generic_IListU3CTU3E_get_Item_m6DF12D9661A109A05B4505917B2FB789C1C26FF2 (ReadOnlyCollection_1_t6902277BA0F804A3B22466CBEF4B07E1FB12E479* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		int32_t L_1 = ___0_index;
		NullCheck(L_0);
		ShadowResolutionRequest_tC1B869ADCA139D8D7AD8A355373F84C7F5E0FCBE L_2;
		L_2 = InterfaceFuncInvoker1< ShadowResolutionRequest_tC1B869ADCA139D8D7AD8A355373F84C7F5E0FCBE, int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_0, L_1);
		return L_2;
	}
}
// Method Definition Index: 10566
// Method Definition Index: 10567
// Method Definition Index: 10568
// Method Definition Index: 10569
// Method Definition Index: 10570
// Method Definition Index: 10571
// Method Definition Index: 10572
// Method Definition Index: 10573
// Method Definition Index: 10574
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlyCollection_1_System_Collections_ICollection_CopyTo_mC94C2584A0188636DAD0B565337EAA3C22F30A21 (ReadOnlyCollection_1_t6902277BA0F804A3B22466CBEF4B07E1FB12E479* __this, RuntimeArray* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(Type_t_StaticInit);
	//<source_info:<no-source>:1>
	ShadowResolutionRequestU5BU5D_tC33A2E5E2712B8688E21C80BB2350155D029B334* V_0 = NULL;
	Type_t* V_1 = NULL;
	Type_t* V_2 = NULL;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_3 = NULL;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		RuntimeArray* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC(3, NULL);
	}

IL_0009:
	{
		RuntimeArray* L_1 = ___0_array;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = il2cpp_codegen_array_get_rank(L_1);
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_0018;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA(7, NULL);
	}

IL_0018:
	{
		RuntimeArray* L_3 = ___0_array;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(L_3, 0, NULL);
		if (!L_4)
		{
			goto IL_0027;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA(6, NULL);
	}

IL_0027:
	{
		int32_t L_5 = ___1_index;
		if ((((int32_t)L_5) >= ((int32_t)0)))
		{
			goto IL_0030;
		}
	}
	{
		ThrowHelper_ThrowIndexArgumentOutOfRange_NeedNonNegNumException_m57AAB1E093F20BFC64BDDBD90FB5B592F582B82F(NULL);
	}

IL_0030:
	{
		RuntimeArray* L_6 = ___0_array;
		NullCheck(L_6);
		int32_t L_7;
		L_7 = il2cpp_codegen_array_get_length(L_6);
		int32_t L_8 = ___1_index;
		int32_t L_9;
		L_9 = ReadOnlyCollection_1_get_Count_m8BBBA71F7E653FD881BAB6DBA0B7491E201F4A1A(__this, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 10));
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_7, L_8))) >= ((int32_t)L_9)))
		{
			goto IL_0046;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA(5, NULL);
	}

IL_0046:
	{
		RuntimeArray* L_10 = ___0_array;
		V_0 = ((ShadowResolutionRequestU5BU5D_tC33A2E5E2712B8688E21C80BB2350155D029B334*)IsInstSealed((RuntimeObject*)L_10, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 11)));
		ShadowResolutionRequestU5BU5D_tC33A2E5E2712B8688E21C80BB2350155D029B334* L_11 = V_0;
		if (!L_11)
		{
			goto IL_005e;
		}
	}
	{
		RuntimeObject* L_12 = __this->___list;
		ShadowResolutionRequestU5BU5D_tC33A2E5E2712B8688E21C80BB2350155D029B334* L_13 = V_0;
		int32_t L_14 = ___1_index;
		NullCheck(L_12);
		InterfaceActionInvoker2< ShadowResolutionRequestU5BU5D_tC33A2E5E2712B8688E21C80BB2350155D029B334*, int32_t >::Invoke(5, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 0), L_12, L_13, L_14);
		return;
	}

IL_005e:
	{
		RuntimeArray* L_15 = ___0_array;
		NullCheck(L_15);
		Type_t* L_16;
		L_16 = il2cpp_codegen_object_get_type(L_15);
		NullCheck(L_16);
		Type_t* L_17;
		L_17 = VirtualFuncInvoker0< Type_t* >::Invoke(46, L_16);
		V_1 = L_17;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_18 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(il2cpp_codegen_method_rgctx(method), 12)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_19;
		L_19 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_18, NULL);
		V_2 = L_19;
		Type_t* L_20 = V_1;
		Type_t* L_21 = V_2;
		NullCheck(L_20);
		bool L_22;
		L_22 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(22, L_20, L_21);
		if (L_22)
		{
			goto IL_008c;
		}
	}
	{
		Type_t* L_23 = V_2;
		Type_t* L_24 = V_1;
		NullCheck(L_23);
		bool L_25;
		L_25 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(22, L_23, L_24);
		if (L_25)
		{
			goto IL_008c;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58(NULL);
	}

IL_008c:
	{
		RuntimeArray* L_26 = ___0_array;
		V_3 = ((ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)IsInst((RuntimeObject*)L_26, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_27 = V_3;
		if (L_27)
		{
			goto IL_009b;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58(NULL);
	}

IL_009b:
	{
		RuntimeObject* L_28 = __this->___list;
		NullCheck(L_28);
		int32_t L_29;
		L_29 = InterfaceFuncInvoker0< int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 0), L_28);
		V_4 = L_29;
	}
	try
	{
		{
			V_5 = 0;
			goto IL_00cd_1;
		}

IL_00ad_1:
		{
			ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_30 = V_3;
			int32_t L_31 = ___1_index;
			int32_t L_32 = L_31;
			___1_index = ((int32_t)il2cpp_codegen_add(L_32, 1));
			RuntimeObject* L_33 = __this->___list;
			int32_t L_34 = V_5;
			NullCheck(L_33);
			ShadowResolutionRequest_tC1B869ADCA139D8D7AD8A355373F84C7F5E0FCBE L_35;
			L_35 = InterfaceFuncInvoker1< ShadowResolutionRequest_tC1B869ADCA139D8D7AD8A355373F84C7F5E0FCBE, int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_33, L_34);
			ShadowResolutionRequest_tC1B869ADCA139D8D7AD8A355373F84C7F5E0FCBE L_36 = L_35;
			RuntimeObject* L_37 = Box(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4), &L_36);
			NullCheck(L_30);
			ArrayElementTypeCheck (L_30, L_37);
			(L_30)->SetAt(static_cast<il2cpp_array_size_t>(L_32), (RuntimeObject*)L_37);
			int32_t L_38 = V_5;
			V_5 = ((int32_t)il2cpp_codegen_add(L_38, 1));
		}

IL_00cd_1:
		{
			int32_t L_39 = V_5;
			int32_t L_40 = V_4;
			if ((((int32_t)L_39) < ((int32_t)L_40)))
			{
				goto IL_00ad_1;
			}
		}
		{
			goto IL_00dd;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_00d5;
		}
		throw e;
	}

CATCH_00d5:
	{
		ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1* L_41 = ((ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1*)IL2CPP_GET_ACTIVE_EXCEPTION(ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1*));;
		ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58(NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_00dd;
	}

IL_00dd:
	{
		return;
	}
}
// Method Definition Index: 10575
// Method Definition Index: 10576
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ReadOnlyCollection_1_System_Collections_IList_get_Item_m758C54D116582C43EED05F6196CED2D430B5C744 (ReadOnlyCollection_1_t6902277BA0F804A3B22466CBEF4B07E1FB12E479* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		int32_t L_1 = ___0_index;
		NullCheck(L_0);
		ShadowResolutionRequest_tC1B869ADCA139D8D7AD8A355373F84C7F5E0FCBE L_2;
		L_2 = InterfaceFuncInvoker1< ShadowResolutionRequest_tC1B869ADCA139D8D7AD8A355373F84C7F5E0FCBE, int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_0, L_1);
		ShadowResolutionRequest_tC1B869ADCA139D8D7AD8A355373F84C7F5E0FCBE L_3 = L_2;
		RuntimeObject* L_4 = Box(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4), &L_3);
		return L_4;
	}
}
// Method Definition Index: 10577
// Method Definition Index: 10578
// Method Definition Index: 10579
// Method Definition Index: 10580
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_IsCompatibleObject_m2C114C70F2EA92C114400CDE3FC98781109BFFE2 (RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	//<source_info:<no-source>:1>
	ShadowResolutionRequest_tC1B869ADCA139D8D7AD8A355373F84C7F5E0FCBE V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		RuntimeObject* L_0 = ___0_value;
		if (((RuntimeObject*)IsInstSealed((RuntimeObject*)L_0, il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 4))))
		{
			goto IL_001f;
		}
	}
	{
		RuntimeObject* L_1 = ___0_value;
		if (L_1)
		{
			goto IL_001d;
		}
	}
	{
		il2cpp_codegen_initobj((&V_0), sizeof(ShadowResolutionRequest_tC1B869ADCA139D8D7AD8A355373F84C7F5E0FCBE));
		ShadowResolutionRequest_tC1B869ADCA139D8D7AD8A355373F84C7F5E0FCBE L_2 = V_0;
		return false;
	}

IL_001d:
	{
		return (bool)0;
	}

IL_001f:
	{
		return (bool)1;
	}
}
// Method Definition Index: 10581
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_System_Collections_IList_Contains_mCCE18D91E9118ACE39DA394762358A60225CD3E6 (ReadOnlyCollection_1_t6902277BA0F804A3B22466CBEF4B07E1FB12E479* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = ___0_value;
		bool L_1;
		L_1 = ReadOnlyCollection_1_IsCompatibleObject_m2C114C70F2EA92C114400CDE3FC98781109BFFE2(L_0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 13));
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject* L_2 = ___0_value;
		bool L_3;
		L_3 = ReadOnlyCollection_1_Contains_mE965B78D4C7A68816A24B72AAB973616BE9D18E0(__this, ((*(ShadowResolutionRequest_tC1B869ADCA139D8D7AD8A355373F84C7F5E0FCBE*)UnBox(L_2, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4)))), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 14));
		return L_3;
	}

IL_0015:
	{
		return (bool)0;
	}
}
// Method Definition Index: 10582
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_System_Collections_IList_IndexOf_m44693667E31730A86EF38871B9D891602D9B52F9 (ReadOnlyCollection_1_t6902277BA0F804A3B22466CBEF4B07E1FB12E479* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = ___0_value;
		bool L_1;
		L_1 = ReadOnlyCollection_1_IsCompatibleObject_m2C114C70F2EA92C114400CDE3FC98781109BFFE2(L_0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 13));
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject* L_2 = ___0_value;
		int32_t L_3;
		L_3 = ReadOnlyCollection_1_IndexOf_m9C7502E77592EEE40AFD08845CBA291A2EA1DE24(__this, ((*(ShadowResolutionRequest_tC1B869ADCA139D8D7AD8A355373F84C7F5E0FCBE*)UnBox(L_2, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4)))), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 15));
		return L_3;
	}

IL_0015:
	{
		return (-1);
	}
}
// Method Definition Index: 10583
// Method Definition Index: 10584
// Method Definition Index: 10585
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 10557
// Method Definition Index: 10558
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_get_Count_m3554A5660CE35580F955DAF2FE36CA33EA0E222B (ReadOnlyCollection_1_t430A5D085E133CDE36E20D9D8D8DFCE0600F90C9* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = InterfaceFuncInvoker0< int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 0), L_0);
		return L_1;
	}
}
// Method Definition Index: 10559
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ConnectionEndpoint_t3C9316D0A11BCB22C8F1F6A53F5E0365DFD7DBA7 ReadOnlyCollection_1_get_Item_m8752E1D90AB704E81CA283D0320DEF5BD5813DA8 (ReadOnlyCollection_1_t430A5D085E133CDE36E20D9D8D8DFCE0600F90C9* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		int32_t L_1 = ___0_index;
		NullCheck(L_0);
		ConnectionEndpoint_t3C9316D0A11BCB22C8F1F6A53F5E0365DFD7DBA7 L_2;
		L_2 = InterfaceFuncInvoker1< ConnectionEndpoint_t3C9316D0A11BCB22C8F1F6A53F5E0365DFD7DBA7, int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_0, L_1);
		return L_2;
	}
}
// Method Definition Index: 10560
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_Contains_m9C7C610F8F83C3ECFBF7BC381D472FDC0554B50F (ReadOnlyCollection_1_t430A5D085E133CDE36E20D9D8D8DFCE0600F90C9* __this, ConnectionEndpoint_t3C9316D0A11BCB22C8F1F6A53F5E0365DFD7DBA7 ___0_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		ConnectionEndpoint_t3C9316D0A11BCB22C8F1F6A53F5E0365DFD7DBA7 L_1 = ___0_value;
		NullCheck(L_0);
		bool L_2;
		L_2 = InterfaceFuncInvoker1< bool, ConnectionEndpoint_t3C9316D0A11BCB22C8F1F6A53F5E0365DFD7DBA7 >::Invoke(4, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 0), L_0, L_1);
		return L_2;
	}
}
// Method Definition Index: 10561
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlyCollection_1_CopyTo_mD3E3A9F57B5327878D02FE527EF77D103299B439 (ReadOnlyCollection_1_t430A5D085E133CDE36E20D9D8D8DFCE0600F90C9* __this, ConnectionEndpointU5BU5D_tC7EA802FB1607F7F212A724C8652F110B759E519* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		ConnectionEndpointU5BU5D_tC7EA802FB1607F7F212A724C8652F110B759E519* L_1 = ___0_array;
		int32_t L_2 = ___1_index;
		NullCheck(L_0);
		InterfaceActionInvoker2< ConnectionEndpointU5BU5D_tC7EA802FB1607F7F212A724C8652F110B759E519*, int32_t >::Invoke(5, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 0), L_0, L_1, L_2);
		return;
	}
}
// Method Definition Index: 10562
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ReadOnlyCollection_1_GetEnumerator_mA7F9BEB4D055E386B2BAA0434AC248984EF9F1CE (ReadOnlyCollection_1_t430A5D085E133CDE36E20D9D8D8DFCE0600F90C9* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 7), L_0);
		return L_1;
	}
}
// Method Definition Index: 10563
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_IndexOf_m2B1DAD09F29FA96B91F32CAD4B395F35BE6ABB53 (ReadOnlyCollection_1_t430A5D085E133CDE36E20D9D8D8DFCE0600F90C9* __this, ConnectionEndpoint_t3C9316D0A11BCB22C8F1F6A53F5E0365DFD7DBA7 ___0_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		ConnectionEndpoint_t3C9316D0A11BCB22C8F1F6A53F5E0365DFD7DBA7 L_1 = ___0_value;
		NullCheck(L_0);
		int32_t L_2;
		L_2 = InterfaceFuncInvoker1< int32_t, ConnectionEndpoint_t3C9316D0A11BCB22C8F1F6A53F5E0365DFD7DBA7 >::Invoke(2, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_0, L_1);
		return L_2;
	}
}
// Method Definition Index: 10564
// Method Definition Index: 10565
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ConnectionEndpoint_t3C9316D0A11BCB22C8F1F6A53F5E0365DFD7DBA7 ReadOnlyCollection_1_System_Collections_Generic_IListU3CTU3E_get_Item_m00CD76E36F8AE5E6FD47C67D51B0FE9027B865CB (ReadOnlyCollection_1_t430A5D085E133CDE36E20D9D8D8DFCE0600F90C9* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		int32_t L_1 = ___0_index;
		NullCheck(L_0);
		ConnectionEndpoint_t3C9316D0A11BCB22C8F1F6A53F5E0365DFD7DBA7 L_2;
		L_2 = InterfaceFuncInvoker1< ConnectionEndpoint_t3C9316D0A11BCB22C8F1F6A53F5E0365DFD7DBA7, int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_0, L_1);
		return L_2;
	}
}
// Method Definition Index: 10566
// Method Definition Index: 10567
// Method Definition Index: 10568
// Method Definition Index: 10569
// Method Definition Index: 10570
// Method Definition Index: 10571
// Method Definition Index: 10572
// Method Definition Index: 10573
// Method Definition Index: 10574
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlyCollection_1_System_Collections_ICollection_CopyTo_mF413A1F85AF461B29AAEC612721D27656660CF08 (ReadOnlyCollection_1_t430A5D085E133CDE36E20D9D8D8DFCE0600F90C9* __this, RuntimeArray* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(Type_t_StaticInit);
	//<source_info:<no-source>:1>
	ConnectionEndpointU5BU5D_tC7EA802FB1607F7F212A724C8652F110B759E519* V_0 = NULL;
	Type_t* V_1 = NULL;
	Type_t* V_2 = NULL;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_3 = NULL;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		RuntimeArray* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC(3, NULL);
	}

IL_0009:
	{
		RuntimeArray* L_1 = ___0_array;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = il2cpp_codegen_array_get_rank(L_1);
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_0018;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA(7, NULL);
	}

IL_0018:
	{
		RuntimeArray* L_3 = ___0_array;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(L_3, 0, NULL);
		if (!L_4)
		{
			goto IL_0027;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA(6, NULL);
	}

IL_0027:
	{
		int32_t L_5 = ___1_index;
		if ((((int32_t)L_5) >= ((int32_t)0)))
		{
			goto IL_0030;
		}
	}
	{
		ThrowHelper_ThrowIndexArgumentOutOfRange_NeedNonNegNumException_m57AAB1E093F20BFC64BDDBD90FB5B592F582B82F(NULL);
	}

IL_0030:
	{
		RuntimeArray* L_6 = ___0_array;
		NullCheck(L_6);
		int32_t L_7;
		L_7 = il2cpp_codegen_array_get_length(L_6);
		int32_t L_8 = ___1_index;
		int32_t L_9;
		L_9 = ReadOnlyCollection_1_get_Count_m3554A5660CE35580F955DAF2FE36CA33EA0E222B(__this, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 10));
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_7, L_8))) >= ((int32_t)L_9)))
		{
			goto IL_0046;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA(5, NULL);
	}

IL_0046:
	{
		RuntimeArray* L_10 = ___0_array;
		V_0 = ((ConnectionEndpointU5BU5D_tC7EA802FB1607F7F212A724C8652F110B759E519*)IsInstSealed((RuntimeObject*)L_10, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 11)));
		ConnectionEndpointU5BU5D_tC7EA802FB1607F7F212A724C8652F110B759E519* L_11 = V_0;
		if (!L_11)
		{
			goto IL_005e;
		}
	}
	{
		RuntimeObject* L_12 = __this->___list;
		ConnectionEndpointU5BU5D_tC7EA802FB1607F7F212A724C8652F110B759E519* L_13 = V_0;
		int32_t L_14 = ___1_index;
		NullCheck(L_12);
		InterfaceActionInvoker2< ConnectionEndpointU5BU5D_tC7EA802FB1607F7F212A724C8652F110B759E519*, int32_t >::Invoke(5, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 0), L_12, L_13, L_14);
		return;
	}

IL_005e:
	{
		RuntimeArray* L_15 = ___0_array;
		NullCheck(L_15);
		Type_t* L_16;
		L_16 = il2cpp_codegen_object_get_type(L_15);
		NullCheck(L_16);
		Type_t* L_17;
		L_17 = VirtualFuncInvoker0< Type_t* >::Invoke(46, L_16);
		V_1 = L_17;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_18 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(il2cpp_codegen_method_rgctx(method), 12)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_19;
		L_19 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_18, NULL);
		V_2 = L_19;
		Type_t* L_20 = V_1;
		Type_t* L_21 = V_2;
		NullCheck(L_20);
		bool L_22;
		L_22 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(22, L_20, L_21);
		if (L_22)
		{
			goto IL_008c;
		}
	}
	{
		Type_t* L_23 = V_2;
		Type_t* L_24 = V_1;
		NullCheck(L_23);
		bool L_25;
		L_25 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(22, L_23, L_24);
		if (L_25)
		{
			goto IL_008c;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58(NULL);
	}

IL_008c:
	{
		RuntimeArray* L_26 = ___0_array;
		V_3 = ((ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)IsInst((RuntimeObject*)L_26, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_27 = V_3;
		if (L_27)
		{
			goto IL_009b;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58(NULL);
	}

IL_009b:
	{
		RuntimeObject* L_28 = __this->___list;
		NullCheck(L_28);
		int32_t L_29;
		L_29 = InterfaceFuncInvoker0< int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 0), L_28);
		V_4 = L_29;
	}
	try
	{
		{
			V_5 = 0;
			goto IL_00cd_1;
		}

IL_00ad_1:
		{
			ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_30 = V_3;
			int32_t L_31 = ___1_index;
			int32_t L_32 = L_31;
			___1_index = ((int32_t)il2cpp_codegen_add(L_32, 1));
			RuntimeObject* L_33 = __this->___list;
			int32_t L_34 = V_5;
			NullCheck(L_33);
			ConnectionEndpoint_t3C9316D0A11BCB22C8F1F6A53F5E0365DFD7DBA7 L_35;
			L_35 = InterfaceFuncInvoker1< ConnectionEndpoint_t3C9316D0A11BCB22C8F1F6A53F5E0365DFD7DBA7, int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_33, L_34);
			ConnectionEndpoint_t3C9316D0A11BCB22C8F1F6A53F5E0365DFD7DBA7 L_36 = L_35;
			RuntimeObject* L_37 = Box(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4), &L_36);
			NullCheck(L_30);
			ArrayElementTypeCheck (L_30, L_37);
			(L_30)->SetAt(static_cast<il2cpp_array_size_t>(L_32), (RuntimeObject*)L_37);
			int32_t L_38 = V_5;
			V_5 = ((int32_t)il2cpp_codegen_add(L_38, 1));
		}

IL_00cd_1:
		{
			int32_t L_39 = V_5;
			int32_t L_40 = V_4;
			if ((((int32_t)L_39) < ((int32_t)L_40)))
			{
				goto IL_00ad_1;
			}
		}
		{
			goto IL_00dd;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_00d5;
		}
		throw e;
	}

CATCH_00d5:
	{
		ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1* L_41 = ((ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1*)IL2CPP_GET_ACTIVE_EXCEPTION(ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1*));;
		ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58(NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_00dd;
	}

IL_00dd:
	{
		return;
	}
}
// Method Definition Index: 10575
// Method Definition Index: 10576
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ReadOnlyCollection_1_System_Collections_IList_get_Item_m10B9C8E62FC1E787EF0520981E942F83CAB8C94E (ReadOnlyCollection_1_t430A5D085E133CDE36E20D9D8D8DFCE0600F90C9* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		int32_t L_1 = ___0_index;
		NullCheck(L_0);
		ConnectionEndpoint_t3C9316D0A11BCB22C8F1F6A53F5E0365DFD7DBA7 L_2;
		L_2 = InterfaceFuncInvoker1< ConnectionEndpoint_t3C9316D0A11BCB22C8F1F6A53F5E0365DFD7DBA7, int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_0, L_1);
		ConnectionEndpoint_t3C9316D0A11BCB22C8F1F6A53F5E0365DFD7DBA7 L_3 = L_2;
		RuntimeObject* L_4 = Box(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4), &L_3);
		return L_4;
	}
}
// Method Definition Index: 10577
// Method Definition Index: 10578
// Method Definition Index: 10579
// Method Definition Index: 10580
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_IsCompatibleObject_mA3FD6DC24CDFF8F0F54FDCFB91562EF86634E04E (RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	//<source_info:<no-source>:1>
	ConnectionEndpoint_t3C9316D0A11BCB22C8F1F6A53F5E0365DFD7DBA7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		RuntimeObject* L_0 = ___0_value;
		if (((RuntimeObject*)IsInstSealed((RuntimeObject*)L_0, il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 4))))
		{
			goto IL_001f;
		}
	}
	{
		RuntimeObject* L_1 = ___0_value;
		if (L_1)
		{
			goto IL_001d;
		}
	}
	{
		il2cpp_codegen_initobj((&V_0), sizeof(ConnectionEndpoint_t3C9316D0A11BCB22C8F1F6A53F5E0365DFD7DBA7));
		ConnectionEndpoint_t3C9316D0A11BCB22C8F1F6A53F5E0365DFD7DBA7 L_2 = V_0;
		return false;
	}

IL_001d:
	{
		return (bool)0;
	}

IL_001f:
	{
		return (bool)1;
	}
}
// Method Definition Index: 10581
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_System_Collections_IList_Contains_m6EA504C725052BCA3C07F404DFCEDCE06C169F48 (ReadOnlyCollection_1_t430A5D085E133CDE36E20D9D8D8DFCE0600F90C9* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = ___0_value;
		bool L_1;
		L_1 = ReadOnlyCollection_1_IsCompatibleObject_mA3FD6DC24CDFF8F0F54FDCFB91562EF86634E04E(L_0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 13));
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject* L_2 = ___0_value;
		bool L_3;
		L_3 = ReadOnlyCollection_1_Contains_m9C7C610F8F83C3ECFBF7BC381D472FDC0554B50F(__this, ((*(ConnectionEndpoint_t3C9316D0A11BCB22C8F1F6A53F5E0365DFD7DBA7*)UnBox(L_2, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4)))), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 14));
		return L_3;
	}

IL_0015:
	{
		return (bool)0;
	}
}
// Method Definition Index: 10582
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_System_Collections_IList_IndexOf_m239F49078C99ECF67CABEB6A77C990B3E693D159 (ReadOnlyCollection_1_t430A5D085E133CDE36E20D9D8D8DFCE0600F90C9* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = ___0_value;
		bool L_1;
		L_1 = ReadOnlyCollection_1_IsCompatibleObject_mA3FD6DC24CDFF8F0F54FDCFB91562EF86634E04E(L_0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 13));
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject* L_2 = ___0_value;
		int32_t L_3;
		L_3 = ReadOnlyCollection_1_IndexOf_m2B1DAD09F29FA96B91F32CAD4B395F35BE6ABB53(__this, ((*(ConnectionEndpoint_t3C9316D0A11BCB22C8F1F6A53F5E0365DFD7DBA7*)UnBox(L_2, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4)))), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 15));
		return L_3;
	}

IL_0015:
	{
		return (-1);
	}
}
// Method Definition Index: 10583
// Method Definition Index: 10584
// Method Definition Index: 10585
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 10557
// Method Definition Index: 10558
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_get_Count_mF630F44EA97169C90D35F920E85F67186863A57D (ReadOnlyCollection_1_t29EC75B4E7474909E58565DFC335C2465CD0CF16* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = InterfaceFuncInvoker0< int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 0), L_0);
		return L_1;
	}
}
// Method Definition Index: 10559
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ApiLayer_t99CB624F0B458A984C99D6A3009A2D8321A85227 ReadOnlyCollection_1_get_Item_m719B3507802943E96C5A1728739E98FEECAC9CA5 (ReadOnlyCollection_1_t29EC75B4E7474909E58565DFC335C2465CD0CF16* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		int32_t L_1 = ___0_index;
		NullCheck(L_0);
		ApiLayer_t99CB624F0B458A984C99D6A3009A2D8321A85227 L_2;
		L_2 = InterfaceFuncInvoker1< ApiLayer_t99CB624F0B458A984C99D6A3009A2D8321A85227, int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_0, L_1);
		return L_2;
	}
}
// Method Definition Index: 10560
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_Contains_m0D99482C81B07EC683E70A691025A710C226DC29 (ReadOnlyCollection_1_t29EC75B4E7474909E58565DFC335C2465CD0CF16* __this, ApiLayer_t99CB624F0B458A984C99D6A3009A2D8321A85227 ___0_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		ApiLayer_t99CB624F0B458A984C99D6A3009A2D8321A85227 L_1 = ___0_value;
		NullCheck(L_0);
		bool L_2;
		L_2 = InterfaceFuncInvoker1< bool, ApiLayer_t99CB624F0B458A984C99D6A3009A2D8321A85227 >::Invoke(4, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 0), L_0, L_1);
		return L_2;
	}
}
// Method Definition Index: 10561
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlyCollection_1_CopyTo_m3B771CD3EAB75999E11E363B756667D86136968B (ReadOnlyCollection_1_t29EC75B4E7474909E58565DFC335C2465CD0CF16* __this, ApiLayerU5BU5D_tA69051E32F2652E385B1E8FF51C4CFF6E0E2A7AF* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		ApiLayerU5BU5D_tA69051E32F2652E385B1E8FF51C4CFF6E0E2A7AF* L_1 = ___0_array;
		int32_t L_2 = ___1_index;
		NullCheck(L_0);
		InterfaceActionInvoker2< ApiLayerU5BU5D_tA69051E32F2652E385B1E8FF51C4CFF6E0E2A7AF*, int32_t >::Invoke(5, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 0), L_0, L_1, L_2);
		return;
	}
}
// Method Definition Index: 10562
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ReadOnlyCollection_1_GetEnumerator_mE0BBE372127DCCA1F0FC69F08BA6A68C42741E25 (ReadOnlyCollection_1_t29EC75B4E7474909E58565DFC335C2465CD0CF16* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 7), L_0);
		return L_1;
	}
}
// Method Definition Index: 10563
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_IndexOf_m9831AA338FD25D56CE3B0BC39A8159D10C3134A7 (ReadOnlyCollection_1_t29EC75B4E7474909E58565DFC335C2465CD0CF16* __this, ApiLayer_t99CB624F0B458A984C99D6A3009A2D8321A85227 ___0_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		ApiLayer_t99CB624F0B458A984C99D6A3009A2D8321A85227 L_1 = ___0_value;
		NullCheck(L_0);
		int32_t L_2;
		L_2 = InterfaceFuncInvoker1< int32_t, ApiLayer_t99CB624F0B458A984C99D6A3009A2D8321A85227 >::Invoke(2, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_0, L_1);
		return L_2;
	}
}
// Method Definition Index: 10564
// Method Definition Index: 10565
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ApiLayer_t99CB624F0B458A984C99D6A3009A2D8321A85227 ReadOnlyCollection_1_System_Collections_Generic_IListU3CTU3E_get_Item_m4E8AF9094584721179E74AFB34C7AE7A32BF26DD (ReadOnlyCollection_1_t29EC75B4E7474909E58565DFC335C2465CD0CF16* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		int32_t L_1 = ___0_index;
		NullCheck(L_0);
		ApiLayer_t99CB624F0B458A984C99D6A3009A2D8321A85227 L_2;
		L_2 = InterfaceFuncInvoker1< ApiLayer_t99CB624F0B458A984C99D6A3009A2D8321A85227, int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_0, L_1);
		return L_2;
	}
}
// Method Definition Index: 10566
// Method Definition Index: 10567
// Method Definition Index: 10568
// Method Definition Index: 10569
// Method Definition Index: 10570
// Method Definition Index: 10571
// Method Definition Index: 10572
// Method Definition Index: 10573
// Method Definition Index: 10574
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlyCollection_1_System_Collections_ICollection_CopyTo_m577585D90ED50E95D6792F381289BEFCED137F82 (ReadOnlyCollection_1_t29EC75B4E7474909E58565DFC335C2465CD0CF16* __this, RuntimeArray* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(Type_t_StaticInit);
	//<source_info:<no-source>:1>
	ApiLayerU5BU5D_tA69051E32F2652E385B1E8FF51C4CFF6E0E2A7AF* V_0 = NULL;
	Type_t* V_1 = NULL;
	Type_t* V_2 = NULL;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_3 = NULL;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		RuntimeArray* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC(3, NULL);
	}

IL_0009:
	{
		RuntimeArray* L_1 = ___0_array;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = il2cpp_codegen_array_get_rank(L_1);
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_0018;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA(7, NULL);
	}

IL_0018:
	{
		RuntimeArray* L_3 = ___0_array;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(L_3, 0, NULL);
		if (!L_4)
		{
			goto IL_0027;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA(6, NULL);
	}

IL_0027:
	{
		int32_t L_5 = ___1_index;
		if ((((int32_t)L_5) >= ((int32_t)0)))
		{
			goto IL_0030;
		}
	}
	{
		ThrowHelper_ThrowIndexArgumentOutOfRange_NeedNonNegNumException_m57AAB1E093F20BFC64BDDBD90FB5B592F582B82F(NULL);
	}

IL_0030:
	{
		RuntimeArray* L_6 = ___0_array;
		NullCheck(L_6);
		int32_t L_7;
		L_7 = il2cpp_codegen_array_get_length(L_6);
		int32_t L_8 = ___1_index;
		int32_t L_9;
		L_9 = ReadOnlyCollection_1_get_Count_mF630F44EA97169C90D35F920E85F67186863A57D(__this, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 10));
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_7, L_8))) >= ((int32_t)L_9)))
		{
			goto IL_0046;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA(5, NULL);
	}

IL_0046:
	{
		RuntimeArray* L_10 = ___0_array;
		V_0 = ((ApiLayerU5BU5D_tA69051E32F2652E385B1E8FF51C4CFF6E0E2A7AF*)IsInstSealed((RuntimeObject*)L_10, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 11)));
		ApiLayerU5BU5D_tA69051E32F2652E385B1E8FF51C4CFF6E0E2A7AF* L_11 = V_0;
		if (!L_11)
		{
			goto IL_005e;
		}
	}
	{
		RuntimeObject* L_12 = __this->___list;
		ApiLayerU5BU5D_tA69051E32F2652E385B1E8FF51C4CFF6E0E2A7AF* L_13 = V_0;
		int32_t L_14 = ___1_index;
		NullCheck(L_12);
		InterfaceActionInvoker2< ApiLayerU5BU5D_tA69051E32F2652E385B1E8FF51C4CFF6E0E2A7AF*, int32_t >::Invoke(5, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 0), L_12, L_13, L_14);
		return;
	}

IL_005e:
	{
		RuntimeArray* L_15 = ___0_array;
		NullCheck(L_15);
		Type_t* L_16;
		L_16 = il2cpp_codegen_object_get_type(L_15);
		NullCheck(L_16);
		Type_t* L_17;
		L_17 = VirtualFuncInvoker0< Type_t* >::Invoke(46, L_16);
		V_1 = L_17;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_18 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(il2cpp_codegen_method_rgctx(method), 12)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_19;
		L_19 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_18, NULL);
		V_2 = L_19;
		Type_t* L_20 = V_1;
		Type_t* L_21 = V_2;
		NullCheck(L_20);
		bool L_22;
		L_22 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(22, L_20, L_21);
		if (L_22)
		{
			goto IL_008c;
		}
	}
	{
		Type_t* L_23 = V_2;
		Type_t* L_24 = V_1;
		NullCheck(L_23);
		bool L_25;
		L_25 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(22, L_23, L_24);
		if (L_25)
		{
			goto IL_008c;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58(NULL);
	}

IL_008c:
	{
		RuntimeArray* L_26 = ___0_array;
		V_3 = ((ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)IsInst((RuntimeObject*)L_26, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_27 = V_3;
		if (L_27)
		{
			goto IL_009b;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58(NULL);
	}

IL_009b:
	{
		RuntimeObject* L_28 = __this->___list;
		NullCheck(L_28);
		int32_t L_29;
		L_29 = InterfaceFuncInvoker0< int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 0), L_28);
		V_4 = L_29;
	}
	try
	{
		{
			V_5 = 0;
			goto IL_00cd_1;
		}

IL_00ad_1:
		{
			ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_30 = V_3;
			int32_t L_31 = ___1_index;
			int32_t L_32 = L_31;
			___1_index = ((int32_t)il2cpp_codegen_add(L_32, 1));
			RuntimeObject* L_33 = __this->___list;
			int32_t L_34 = V_5;
			NullCheck(L_33);
			ApiLayer_t99CB624F0B458A984C99D6A3009A2D8321A85227 L_35;
			L_35 = InterfaceFuncInvoker1< ApiLayer_t99CB624F0B458A984C99D6A3009A2D8321A85227, int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_33, L_34);
			ApiLayer_t99CB624F0B458A984C99D6A3009A2D8321A85227 L_36 = L_35;
			RuntimeObject* L_37 = Box(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4), &L_36);
			NullCheck(L_30);
			ArrayElementTypeCheck (L_30, L_37);
			(L_30)->SetAt(static_cast<il2cpp_array_size_t>(L_32), (RuntimeObject*)L_37);
			int32_t L_38 = V_5;
			V_5 = ((int32_t)il2cpp_codegen_add(L_38, 1));
		}

IL_00cd_1:
		{
			int32_t L_39 = V_5;
			int32_t L_40 = V_4;
			if ((((int32_t)L_39) < ((int32_t)L_40)))
			{
				goto IL_00ad_1;
			}
		}
		{
			goto IL_00dd;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_00d5;
		}
		throw e;
	}

CATCH_00d5:
	{
		ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1* L_41 = ((ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1*)IL2CPP_GET_ACTIVE_EXCEPTION(ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1*));;
		ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58(NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_00dd;
	}

IL_00dd:
	{
		return;
	}
}
// Method Definition Index: 10575
// Method Definition Index: 10576
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ReadOnlyCollection_1_System_Collections_IList_get_Item_m2B2FA61EAF70C18F0994956E10F78913D877E150 (ReadOnlyCollection_1_t29EC75B4E7474909E58565DFC335C2465CD0CF16* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		int32_t L_1 = ___0_index;
		NullCheck(L_0);
		ApiLayer_t99CB624F0B458A984C99D6A3009A2D8321A85227 L_2;
		L_2 = InterfaceFuncInvoker1< ApiLayer_t99CB624F0B458A984C99D6A3009A2D8321A85227, int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_0, L_1);
		ApiLayer_t99CB624F0B458A984C99D6A3009A2D8321A85227 L_3 = L_2;
		RuntimeObject* L_4 = Box(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4), &L_3);
		return L_4;
	}
}
// Method Definition Index: 10577
// Method Definition Index: 10578
// Method Definition Index: 10579
// Method Definition Index: 10580
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_IsCompatibleObject_m13237C1A78D3A5B60961585909FDA0D096B8761F (RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	//<source_info:<no-source>:1>
	ApiLayer_t99CB624F0B458A984C99D6A3009A2D8321A85227 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		RuntimeObject* L_0 = ___0_value;
		if (((RuntimeObject*)IsInstSealed((RuntimeObject*)L_0, il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 4))))
		{
			goto IL_001f;
		}
	}
	{
		RuntimeObject* L_1 = ___0_value;
		if (L_1)
		{
			goto IL_001d;
		}
	}
	{
		il2cpp_codegen_initobj((&V_0), sizeof(ApiLayer_t99CB624F0B458A984C99D6A3009A2D8321A85227));
		ApiLayer_t99CB624F0B458A984C99D6A3009A2D8321A85227 L_2 = V_0;
		return false;
	}

IL_001d:
	{
		return (bool)0;
	}

IL_001f:
	{
		return (bool)1;
	}
}
// Method Definition Index: 10581
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_System_Collections_IList_Contains_m2947F7BCF630DA23DFCD50C89056832BD9FCC925 (ReadOnlyCollection_1_t29EC75B4E7474909E58565DFC335C2465CD0CF16* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = ___0_value;
		bool L_1;
		L_1 = ReadOnlyCollection_1_IsCompatibleObject_m13237C1A78D3A5B60961585909FDA0D096B8761F(L_0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 13));
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject* L_2 = ___0_value;
		bool L_3;
		L_3 = ReadOnlyCollection_1_Contains_m0D99482C81B07EC683E70A691025A710C226DC29(__this, ((*(ApiLayer_t99CB624F0B458A984C99D6A3009A2D8321A85227*)UnBox(L_2, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4)))), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 14));
		return L_3;
	}

IL_0015:
	{
		return (bool)0;
	}
}
// Method Definition Index: 10582
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_System_Collections_IList_IndexOf_mFB4E0060662D790419956FCC670C4190C48769BA (ReadOnlyCollection_1_t29EC75B4E7474909E58565DFC335C2465CD0CF16* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = ___0_value;
		bool L_1;
		L_1 = ReadOnlyCollection_1_IsCompatibleObject_m13237C1A78D3A5B60961585909FDA0D096B8761F(L_0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 13));
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject* L_2 = ___0_value;
		int32_t L_3;
		L_3 = ReadOnlyCollection_1_IndexOf_m9831AA338FD25D56CE3B0BC39A8159D10C3134A7(__this, ((*(ApiLayer_t99CB624F0B458A984C99D6A3009A2D8321A85227*)UnBox(L_2, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4)))), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 15));
		return L_3;
	}

IL_0015:
	{
		return (-1);
	}
}
// Method Definition Index: 10583
// Method Definition Index: 10584
// Method Definition Index: 10585
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 10557
// Method Definition Index: 10558
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_get_Count_mC7E0E87D44CEF9F2BEEDDC1BC4B0D24B71D16E97 (ReadOnlyCollection_1_t0072B9B1BE9DDF9C8BF0ABE59E7EEBD11BFAA293* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = InterfaceFuncInvoker0< int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 0), L_0);
		return L_1;
	}
}
// Method Definition Index: 10559
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AwaitableAndFrameIndex_t5B42EA520B0415D199F9487706ABCD53407C0161 ReadOnlyCollection_1_get_Item_m36CDDC1CE08597368B8DDAA4384635710174D1AC (ReadOnlyCollection_1_t0072B9B1BE9DDF9C8BF0ABE59E7EEBD11BFAA293* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		int32_t L_1 = ___0_index;
		NullCheck(L_0);
		AwaitableAndFrameIndex_t5B42EA520B0415D199F9487706ABCD53407C0161 L_2;
		L_2 = InterfaceFuncInvoker1< AwaitableAndFrameIndex_t5B42EA520B0415D199F9487706ABCD53407C0161, int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_0, L_1);
		return L_2;
	}
}
// Method Definition Index: 10560
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_Contains_m724638603012524EA3300E26FB0DCB831C3FAB0E (ReadOnlyCollection_1_t0072B9B1BE9DDF9C8BF0ABE59E7EEBD11BFAA293* __this, AwaitableAndFrameIndex_t5B42EA520B0415D199F9487706ABCD53407C0161 ___0_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		AwaitableAndFrameIndex_t5B42EA520B0415D199F9487706ABCD53407C0161 L_1 = ___0_value;
		NullCheck(L_0);
		bool L_2;
		L_2 = InterfaceFuncInvoker1< bool, AwaitableAndFrameIndex_t5B42EA520B0415D199F9487706ABCD53407C0161 >::Invoke(4, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 0), L_0, L_1);
		return L_2;
	}
}
// Method Definition Index: 10561
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlyCollection_1_CopyTo_mF5F3049006A4CEF253D9C090E6DC5354744E10D1 (ReadOnlyCollection_1_t0072B9B1BE9DDF9C8BF0ABE59E7EEBD11BFAA293* __this, AwaitableAndFrameIndexU5BU5D_tFE5E09101F753E8B28D639C161FBC4D34F939560* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		AwaitableAndFrameIndexU5BU5D_tFE5E09101F753E8B28D639C161FBC4D34F939560* L_1 = ___0_array;
		int32_t L_2 = ___1_index;
		NullCheck(L_0);
		InterfaceActionInvoker2< AwaitableAndFrameIndexU5BU5D_tFE5E09101F753E8B28D639C161FBC4D34F939560*, int32_t >::Invoke(5, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 0), L_0, L_1, L_2);
		return;
	}
}
// Method Definition Index: 10562
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ReadOnlyCollection_1_GetEnumerator_mEE30C1907DBFA300675B24170BD99345D15064B1 (ReadOnlyCollection_1_t0072B9B1BE9DDF9C8BF0ABE59E7EEBD11BFAA293* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 7), L_0);
		return L_1;
	}
}
// Method Definition Index: 10563
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_IndexOf_mBD33E0AA2E866B762E64073D335B3E38C2752975 (ReadOnlyCollection_1_t0072B9B1BE9DDF9C8BF0ABE59E7EEBD11BFAA293* __this, AwaitableAndFrameIndex_t5B42EA520B0415D199F9487706ABCD53407C0161 ___0_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		AwaitableAndFrameIndex_t5B42EA520B0415D199F9487706ABCD53407C0161 L_1 = ___0_value;
		NullCheck(L_0);
		int32_t L_2;
		L_2 = InterfaceFuncInvoker1< int32_t, AwaitableAndFrameIndex_t5B42EA520B0415D199F9487706ABCD53407C0161 >::Invoke(2, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_0, L_1);
		return L_2;
	}
}
// Method Definition Index: 10564
// Method Definition Index: 10565
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AwaitableAndFrameIndex_t5B42EA520B0415D199F9487706ABCD53407C0161 ReadOnlyCollection_1_System_Collections_Generic_IListU3CTU3E_get_Item_m9F77FA9C236C144C6A769506265007D1FCED383D (ReadOnlyCollection_1_t0072B9B1BE9DDF9C8BF0ABE59E7EEBD11BFAA293* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		int32_t L_1 = ___0_index;
		NullCheck(L_0);
		AwaitableAndFrameIndex_t5B42EA520B0415D199F9487706ABCD53407C0161 L_2;
		L_2 = InterfaceFuncInvoker1< AwaitableAndFrameIndex_t5B42EA520B0415D199F9487706ABCD53407C0161, int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_0, L_1);
		return L_2;
	}
}
// Method Definition Index: 10566
// Method Definition Index: 10567
// Method Definition Index: 10568
// Method Definition Index: 10569
// Method Definition Index: 10570
// Method Definition Index: 10571
// Method Definition Index: 10572
// Method Definition Index: 10573
// Method Definition Index: 10574
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlyCollection_1_System_Collections_ICollection_CopyTo_mA50DB9DD56DE99E483391EB539D23B1896DC8CF5 (ReadOnlyCollection_1_t0072B9B1BE9DDF9C8BF0ABE59E7EEBD11BFAA293* __this, RuntimeArray* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(Type_t_StaticInit);
	//<source_info:<no-source>:1>
	AwaitableAndFrameIndexU5BU5D_tFE5E09101F753E8B28D639C161FBC4D34F939560* V_0 = NULL;
	Type_t* V_1 = NULL;
	Type_t* V_2 = NULL;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_3 = NULL;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		RuntimeArray* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC(3, NULL);
	}

IL_0009:
	{
		RuntimeArray* L_1 = ___0_array;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = il2cpp_codegen_array_get_rank(L_1);
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_0018;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA(7, NULL);
	}

IL_0018:
	{
		RuntimeArray* L_3 = ___0_array;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(L_3, 0, NULL);
		if (!L_4)
		{
			goto IL_0027;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA(6, NULL);
	}

IL_0027:
	{
		int32_t L_5 = ___1_index;
		if ((((int32_t)L_5) >= ((int32_t)0)))
		{
			goto IL_0030;
		}
	}
	{
		ThrowHelper_ThrowIndexArgumentOutOfRange_NeedNonNegNumException_m57AAB1E093F20BFC64BDDBD90FB5B592F582B82F(NULL);
	}

IL_0030:
	{
		RuntimeArray* L_6 = ___0_array;
		NullCheck(L_6);
		int32_t L_7;
		L_7 = il2cpp_codegen_array_get_length(L_6);
		int32_t L_8 = ___1_index;
		int32_t L_9;
		L_9 = ReadOnlyCollection_1_get_Count_mC7E0E87D44CEF9F2BEEDDC1BC4B0D24B71D16E97(__this, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 10));
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_7, L_8))) >= ((int32_t)L_9)))
		{
			goto IL_0046;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA(5, NULL);
	}

IL_0046:
	{
		RuntimeArray* L_10 = ___0_array;
		V_0 = ((AwaitableAndFrameIndexU5BU5D_tFE5E09101F753E8B28D639C161FBC4D34F939560*)IsInstSealed((RuntimeObject*)L_10, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 11)));
		AwaitableAndFrameIndexU5BU5D_tFE5E09101F753E8B28D639C161FBC4D34F939560* L_11 = V_0;
		if (!L_11)
		{
			goto IL_005e;
		}
	}
	{
		RuntimeObject* L_12 = __this->___list;
		AwaitableAndFrameIndexU5BU5D_tFE5E09101F753E8B28D639C161FBC4D34F939560* L_13 = V_0;
		int32_t L_14 = ___1_index;
		NullCheck(L_12);
		InterfaceActionInvoker2< AwaitableAndFrameIndexU5BU5D_tFE5E09101F753E8B28D639C161FBC4D34F939560*, int32_t >::Invoke(5, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 0), L_12, L_13, L_14);
		return;
	}

IL_005e:
	{
		RuntimeArray* L_15 = ___0_array;
		NullCheck(L_15);
		Type_t* L_16;
		L_16 = il2cpp_codegen_object_get_type(L_15);
		NullCheck(L_16);
		Type_t* L_17;
		L_17 = VirtualFuncInvoker0< Type_t* >::Invoke(46, L_16);
		V_1 = L_17;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_18 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(il2cpp_codegen_method_rgctx(method), 12)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_19;
		L_19 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_18, NULL);
		V_2 = L_19;
		Type_t* L_20 = V_1;
		Type_t* L_21 = V_2;
		NullCheck(L_20);
		bool L_22;
		L_22 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(22, L_20, L_21);
		if (L_22)
		{
			goto IL_008c;
		}
	}
	{
		Type_t* L_23 = V_2;
		Type_t* L_24 = V_1;
		NullCheck(L_23);
		bool L_25;
		L_25 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(22, L_23, L_24);
		if (L_25)
		{
			goto IL_008c;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58(NULL);
	}

IL_008c:
	{
		RuntimeArray* L_26 = ___0_array;
		V_3 = ((ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)IsInst((RuntimeObject*)L_26, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_27 = V_3;
		if (L_27)
		{
			goto IL_009b;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58(NULL);
	}

IL_009b:
	{
		RuntimeObject* L_28 = __this->___list;
		NullCheck(L_28);
		int32_t L_29;
		L_29 = InterfaceFuncInvoker0< int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 0), L_28);
		V_4 = L_29;
	}
	try
	{
		{
			V_5 = 0;
			goto IL_00cd_1;
		}

IL_00ad_1:
		{
			ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_30 = V_3;
			int32_t L_31 = ___1_index;
			int32_t L_32 = L_31;
			___1_index = ((int32_t)il2cpp_codegen_add(L_32, 1));
			RuntimeObject* L_33 = __this->___list;
			int32_t L_34 = V_5;
			NullCheck(L_33);
			AwaitableAndFrameIndex_t5B42EA520B0415D199F9487706ABCD53407C0161 L_35;
			L_35 = InterfaceFuncInvoker1< AwaitableAndFrameIndex_t5B42EA520B0415D199F9487706ABCD53407C0161, int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_33, L_34);
			AwaitableAndFrameIndex_t5B42EA520B0415D199F9487706ABCD53407C0161 L_36 = L_35;
			RuntimeObject* L_37 = Box(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4), &L_36);
			NullCheck(L_30);
			ArrayElementTypeCheck (L_30, L_37);
			(L_30)->SetAt(static_cast<il2cpp_array_size_t>(L_32), (RuntimeObject*)L_37);
			int32_t L_38 = V_5;
			V_5 = ((int32_t)il2cpp_codegen_add(L_38, 1));
		}

IL_00cd_1:
		{
			int32_t L_39 = V_5;
			int32_t L_40 = V_4;
			if ((((int32_t)L_39) < ((int32_t)L_40)))
			{
				goto IL_00ad_1;
			}
		}
		{
			goto IL_00dd;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_00d5;
		}
		throw e;
	}

CATCH_00d5:
	{
		ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1* L_41 = ((ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1*)IL2CPP_GET_ACTIVE_EXCEPTION(ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1*));;
		ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58(NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_00dd;
	}

IL_00dd:
	{
		return;
	}
}
// Method Definition Index: 10575
// Method Definition Index: 10576
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ReadOnlyCollection_1_System_Collections_IList_get_Item_mAC5FBCE17F831367276900DE9FE2DDE2675904A2 (ReadOnlyCollection_1_t0072B9B1BE9DDF9C8BF0ABE59E7EEBD11BFAA293* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		int32_t L_1 = ___0_index;
		NullCheck(L_0);
		AwaitableAndFrameIndex_t5B42EA520B0415D199F9487706ABCD53407C0161 L_2;
		L_2 = InterfaceFuncInvoker1< AwaitableAndFrameIndex_t5B42EA520B0415D199F9487706ABCD53407C0161, int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_0, L_1);
		AwaitableAndFrameIndex_t5B42EA520B0415D199F9487706ABCD53407C0161 L_3 = L_2;
		RuntimeObject* L_4 = Box(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4), &L_3);
		return L_4;
	}
}
// Method Definition Index: 10577
// Method Definition Index: 10578
// Method Definition Index: 10579
// Method Definition Index: 10580
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_IsCompatibleObject_mAD1FD16BD846C5E9807414D8F7DF35DAC62B8F19 (RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	//<source_info:<no-source>:1>
	AwaitableAndFrameIndex_t5B42EA520B0415D199F9487706ABCD53407C0161 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		RuntimeObject* L_0 = ___0_value;
		if (((RuntimeObject*)IsInstSealed((RuntimeObject*)L_0, il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 4))))
		{
			goto IL_001f;
		}
	}
	{
		RuntimeObject* L_1 = ___0_value;
		if (L_1)
		{
			goto IL_001d;
		}
	}
	{
		il2cpp_codegen_initobj((&V_0), sizeof(AwaitableAndFrameIndex_t5B42EA520B0415D199F9487706ABCD53407C0161));
		AwaitableAndFrameIndex_t5B42EA520B0415D199F9487706ABCD53407C0161 L_2 = V_0;
		return false;
	}

IL_001d:
	{
		return (bool)0;
	}

IL_001f:
	{
		return (bool)1;
	}
}
// Method Definition Index: 10581
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_System_Collections_IList_Contains_m97D872BDBA0D01A04472F227484707BBBDF5F481 (ReadOnlyCollection_1_t0072B9B1BE9DDF9C8BF0ABE59E7EEBD11BFAA293* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = ___0_value;
		bool L_1;
		L_1 = ReadOnlyCollection_1_IsCompatibleObject_mAD1FD16BD846C5E9807414D8F7DF35DAC62B8F19(L_0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 13));
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject* L_2 = ___0_value;
		bool L_3;
		L_3 = ReadOnlyCollection_1_Contains_m724638603012524EA3300E26FB0DCB831C3FAB0E(__this, ((*(AwaitableAndFrameIndex_t5B42EA520B0415D199F9487706ABCD53407C0161*)UnBox(L_2, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4)))), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 14));
		return L_3;
	}

IL_0015:
	{
		return (bool)0;
	}
}
// Method Definition Index: 10582
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_System_Collections_IList_IndexOf_m1E763FC8E67033565BF3013FD2C37F2AD42BD531 (ReadOnlyCollection_1_t0072B9B1BE9DDF9C8BF0ABE59E7EEBD11BFAA293* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = ___0_value;
		bool L_1;
		L_1 = ReadOnlyCollection_1_IsCompatibleObject_mAD1FD16BD846C5E9807414D8F7DF35DAC62B8F19(L_0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 13));
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject* L_2 = ___0_value;
		int32_t L_3;
		L_3 = ReadOnlyCollection_1_IndexOf_mBD33E0AA2E866B762E64073D335B3E38C2752975(__this, ((*(AwaitableAndFrameIndex_t5B42EA520B0415D199F9487706ABCD53407C0161*)UnBox(L_2, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4)))), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 15));
		return L_3;
	}

IL_0015:
	{
		return (-1);
	}
}
// Method Definition Index: 10583
// Method Definition Index: 10584
// Method Definition Index: 10585
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 10557
// Method Definition Index: 10558
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_get_Count_m40B654ABF35A6A8B4838BCC343C8C571740B84A1 (ReadOnlyCollection_1_t00EFCE24C7E2AF195B108C1FC1E1BE4F7007EC1E* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = InterfaceFuncInvoker0< int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 0), L_0);
		return L_1;
	}
}
// Method Definition Index: 10559
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR OrderBlock_t62FD6F6544F34B5298DEF2F77AAE446F269B7837 ReadOnlyCollection_1_get_Item_mEC71834509542807B1E273D8F991CAB8209AF767 (ReadOnlyCollection_1_t00EFCE24C7E2AF195B108C1FC1E1BE4F7007EC1E* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		int32_t L_1 = ___0_index;
		NullCheck(L_0);
		OrderBlock_t62FD6F6544F34B5298DEF2F77AAE446F269B7837 L_2;
		L_2 = InterfaceFuncInvoker1< OrderBlock_t62FD6F6544F34B5298DEF2F77AAE446F269B7837, int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_0, L_1);
		return L_2;
	}
}
// Method Definition Index: 10560
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_Contains_m9908F151D504D28AFAA1DAEF129AD20EF6B93081 (ReadOnlyCollection_1_t00EFCE24C7E2AF195B108C1FC1E1BE4F7007EC1E* __this, OrderBlock_t62FD6F6544F34B5298DEF2F77AAE446F269B7837 ___0_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		OrderBlock_t62FD6F6544F34B5298DEF2F77AAE446F269B7837 L_1 = ___0_value;
		NullCheck(L_0);
		bool L_2;
		L_2 = InterfaceFuncInvoker1< bool, OrderBlock_t62FD6F6544F34B5298DEF2F77AAE446F269B7837 >::Invoke(4, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 0), L_0, L_1);
		return L_2;
	}
}
// Method Definition Index: 10561
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlyCollection_1_CopyTo_mD9DF1D478BCE0B62CBA2DD11DBD44AF918438DDE (ReadOnlyCollection_1_t00EFCE24C7E2AF195B108C1FC1E1BE4F7007EC1E* __this, OrderBlockU5BU5D_tD67C39FB212889AFAAB991BE1AE144ED8D35EE88* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		OrderBlockU5BU5D_tD67C39FB212889AFAAB991BE1AE144ED8D35EE88* L_1 = ___0_array;
		int32_t L_2 = ___1_index;
		NullCheck(L_0);
		InterfaceActionInvoker2< OrderBlockU5BU5D_tD67C39FB212889AFAAB991BE1AE144ED8D35EE88*, int32_t >::Invoke(5, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 0), L_0, L_1, L_2);
		return;
	}
}
// Method Definition Index: 10562
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ReadOnlyCollection_1_GetEnumerator_mB03294D1525F5274FB51CACD37BBEF2FD5D41594 (ReadOnlyCollection_1_t00EFCE24C7E2AF195B108C1FC1E1BE4F7007EC1E* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 7), L_0);
		return L_1;
	}
}
// Method Definition Index: 10563
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_IndexOf_mE49AD24B09B89FCDFFB51D72A2D789C79DF45B4A (ReadOnlyCollection_1_t00EFCE24C7E2AF195B108C1FC1E1BE4F7007EC1E* __this, OrderBlock_t62FD6F6544F34B5298DEF2F77AAE446F269B7837 ___0_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		OrderBlock_t62FD6F6544F34B5298DEF2F77AAE446F269B7837 L_1 = ___0_value;
		NullCheck(L_0);
		int32_t L_2;
		L_2 = InterfaceFuncInvoker1< int32_t, OrderBlock_t62FD6F6544F34B5298DEF2F77AAE446F269B7837 >::Invoke(2, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_0, L_1);
		return L_2;
	}
}
// Method Definition Index: 10564
// Method Definition Index: 10565
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR OrderBlock_t62FD6F6544F34B5298DEF2F77AAE446F269B7837 ReadOnlyCollection_1_System_Collections_Generic_IListU3CTU3E_get_Item_mA9F18D9F314BA12B4EB230A5F534F3511A18B071 (ReadOnlyCollection_1_t00EFCE24C7E2AF195B108C1FC1E1BE4F7007EC1E* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		int32_t L_1 = ___0_index;
		NullCheck(L_0);
		OrderBlock_t62FD6F6544F34B5298DEF2F77AAE446F269B7837 L_2;
		L_2 = InterfaceFuncInvoker1< OrderBlock_t62FD6F6544F34B5298DEF2F77AAE446F269B7837, int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_0, L_1);
		return L_2;
	}
}
// Method Definition Index: 10566
// Method Definition Index: 10567
// Method Definition Index: 10568
// Method Definition Index: 10569
// Method Definition Index: 10570
// Method Definition Index: 10571
// Method Definition Index: 10572
// Method Definition Index: 10573
// Method Definition Index: 10574
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlyCollection_1_System_Collections_ICollection_CopyTo_mD81BC7D4266F97C4D171F4B914C09F51EF498E5C (ReadOnlyCollection_1_t00EFCE24C7E2AF195B108C1FC1E1BE4F7007EC1E* __this, RuntimeArray* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(Type_t_StaticInit);
	//<source_info:<no-source>:1>
	OrderBlockU5BU5D_tD67C39FB212889AFAAB991BE1AE144ED8D35EE88* V_0 = NULL;
	Type_t* V_1 = NULL;
	Type_t* V_2 = NULL;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_3 = NULL;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		RuntimeArray* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC(3, NULL);
	}

IL_0009:
	{
		RuntimeArray* L_1 = ___0_array;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = il2cpp_codegen_array_get_rank(L_1);
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_0018;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA(7, NULL);
	}

IL_0018:
	{
		RuntimeArray* L_3 = ___0_array;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(L_3, 0, NULL);
		if (!L_4)
		{
			goto IL_0027;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA(6, NULL);
	}

IL_0027:
	{
		int32_t L_5 = ___1_index;
		if ((((int32_t)L_5) >= ((int32_t)0)))
		{
			goto IL_0030;
		}
	}
	{
		ThrowHelper_ThrowIndexArgumentOutOfRange_NeedNonNegNumException_m57AAB1E093F20BFC64BDDBD90FB5B592F582B82F(NULL);
	}

IL_0030:
	{
		RuntimeArray* L_6 = ___0_array;
		NullCheck(L_6);
		int32_t L_7;
		L_7 = il2cpp_codegen_array_get_length(L_6);
		int32_t L_8 = ___1_index;
		int32_t L_9;
		L_9 = ReadOnlyCollection_1_get_Count_m40B654ABF35A6A8B4838BCC343C8C571740B84A1(__this, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 10));
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_7, L_8))) >= ((int32_t)L_9)))
		{
			goto IL_0046;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA(5, NULL);
	}

IL_0046:
	{
		RuntimeArray* L_10 = ___0_array;
		V_0 = ((OrderBlockU5BU5D_tD67C39FB212889AFAAB991BE1AE144ED8D35EE88*)IsInstSealed((RuntimeObject*)L_10, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 11)));
		OrderBlockU5BU5D_tD67C39FB212889AFAAB991BE1AE144ED8D35EE88* L_11 = V_0;
		if (!L_11)
		{
			goto IL_005e;
		}
	}
	{
		RuntimeObject* L_12 = __this->___list;
		OrderBlockU5BU5D_tD67C39FB212889AFAAB991BE1AE144ED8D35EE88* L_13 = V_0;
		int32_t L_14 = ___1_index;
		NullCheck(L_12);
		InterfaceActionInvoker2< OrderBlockU5BU5D_tD67C39FB212889AFAAB991BE1AE144ED8D35EE88*, int32_t >::Invoke(5, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 0), L_12, L_13, L_14);
		return;
	}

IL_005e:
	{
		RuntimeArray* L_15 = ___0_array;
		NullCheck(L_15);
		Type_t* L_16;
		L_16 = il2cpp_codegen_object_get_type(L_15);
		NullCheck(L_16);
		Type_t* L_17;
		L_17 = VirtualFuncInvoker0< Type_t* >::Invoke(46, L_16);
		V_1 = L_17;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_18 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(il2cpp_codegen_method_rgctx(method), 12)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_19;
		L_19 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_18, NULL);
		V_2 = L_19;
		Type_t* L_20 = V_1;
		Type_t* L_21 = V_2;
		NullCheck(L_20);
		bool L_22;
		L_22 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(22, L_20, L_21);
		if (L_22)
		{
			goto IL_008c;
		}
	}
	{
		Type_t* L_23 = V_2;
		Type_t* L_24 = V_1;
		NullCheck(L_23);
		bool L_25;
		L_25 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(22, L_23, L_24);
		if (L_25)
		{
			goto IL_008c;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58(NULL);
	}

IL_008c:
	{
		RuntimeArray* L_26 = ___0_array;
		V_3 = ((ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)IsInst((RuntimeObject*)L_26, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_27 = V_3;
		if (L_27)
		{
			goto IL_009b;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58(NULL);
	}

IL_009b:
	{
		RuntimeObject* L_28 = __this->___list;
		NullCheck(L_28);
		int32_t L_29;
		L_29 = InterfaceFuncInvoker0< int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 0), L_28);
		V_4 = L_29;
	}
	try
	{
		{
			V_5 = 0;
			goto IL_00cd_1;
		}

IL_00ad_1:
		{
			ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_30 = V_3;
			int32_t L_31 = ___1_index;
			int32_t L_32 = L_31;
			___1_index = ((int32_t)il2cpp_codegen_add(L_32, 1));
			RuntimeObject* L_33 = __this->___list;
			int32_t L_34 = V_5;
			NullCheck(L_33);
			OrderBlock_t62FD6F6544F34B5298DEF2F77AAE446F269B7837 L_35;
			L_35 = InterfaceFuncInvoker1< OrderBlock_t62FD6F6544F34B5298DEF2F77AAE446F269B7837, int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_33, L_34);
			OrderBlock_t62FD6F6544F34B5298DEF2F77AAE446F269B7837 L_36 = L_35;
			RuntimeObject* L_37 = Box(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4), &L_36);
			NullCheck(L_30);
			ArrayElementTypeCheck (L_30, L_37);
			(L_30)->SetAt(static_cast<il2cpp_array_size_t>(L_32), (RuntimeObject*)L_37);
			int32_t L_38 = V_5;
			V_5 = ((int32_t)il2cpp_codegen_add(L_38, 1));
		}

IL_00cd_1:
		{
			int32_t L_39 = V_5;
			int32_t L_40 = V_4;
			if ((((int32_t)L_39) < ((int32_t)L_40)))
			{
				goto IL_00ad_1;
			}
		}
		{
			goto IL_00dd;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_00d5;
		}
		throw e;
	}

CATCH_00d5:
	{
		ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1* L_41 = ((ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1*)IL2CPP_GET_ACTIVE_EXCEPTION(ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1*));;
		ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58(NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_00dd;
	}

IL_00dd:
	{
		return;
	}
}
// Method Definition Index: 10575
// Method Definition Index: 10576
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ReadOnlyCollection_1_System_Collections_IList_get_Item_m3ADCDB58B2A6E000B2E29E15A67F2C026D52BE1E (ReadOnlyCollection_1_t00EFCE24C7E2AF195B108C1FC1E1BE4F7007EC1E* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		int32_t L_1 = ___0_index;
		NullCheck(L_0);
		OrderBlock_t62FD6F6544F34B5298DEF2F77AAE446F269B7837 L_2;
		L_2 = InterfaceFuncInvoker1< OrderBlock_t62FD6F6544F34B5298DEF2F77AAE446F269B7837, int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_0, L_1);
		OrderBlock_t62FD6F6544F34B5298DEF2F77AAE446F269B7837 L_3 = L_2;
		RuntimeObject* L_4 = Box(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4), &L_3);
		return L_4;
	}
}
// Method Definition Index: 10577
// Method Definition Index: 10578
// Method Definition Index: 10579
// Method Definition Index: 10580
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_IsCompatibleObject_mBC98CE22AEE31378BE7BC3859B138C399101008C (RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	//<source_info:<no-source>:1>
	OrderBlock_t62FD6F6544F34B5298DEF2F77AAE446F269B7837 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		RuntimeObject* L_0 = ___0_value;
		if (((RuntimeObject*)IsInstSealed((RuntimeObject*)L_0, il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 4))))
		{
			goto IL_001f;
		}
	}
	{
		RuntimeObject* L_1 = ___0_value;
		if (L_1)
		{
			goto IL_001d;
		}
	}
	{
		il2cpp_codegen_initobj((&V_0), sizeof(OrderBlock_t62FD6F6544F34B5298DEF2F77AAE446F269B7837));
		OrderBlock_t62FD6F6544F34B5298DEF2F77AAE446F269B7837 L_2 = V_0;
		return false;
	}

IL_001d:
	{
		return (bool)0;
	}

IL_001f:
	{
		return (bool)1;
	}
}
// Method Definition Index: 10581
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_System_Collections_IList_Contains_m90C0D9B3636F9015443FF16085E70718EAEA3084 (ReadOnlyCollection_1_t00EFCE24C7E2AF195B108C1FC1E1BE4F7007EC1E* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = ___0_value;
		bool L_1;
		L_1 = ReadOnlyCollection_1_IsCompatibleObject_mBC98CE22AEE31378BE7BC3859B138C399101008C(L_0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 13));
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject* L_2 = ___0_value;
		bool L_3;
		L_3 = ReadOnlyCollection_1_Contains_m9908F151D504D28AFAA1DAEF129AD20EF6B93081(__this, ((*(OrderBlock_t62FD6F6544F34B5298DEF2F77AAE446F269B7837*)UnBox(L_2, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4)))), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 14));
		return L_3;
	}

IL_0015:
	{
		return (bool)0;
	}
}
// Method Definition Index: 10582
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_System_Collections_IList_IndexOf_m65C067BBF496400E2AA25FF81B478C08F6D2D43F (ReadOnlyCollection_1_t00EFCE24C7E2AF195B108C1FC1E1BE4F7007EC1E* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = ___0_value;
		bool L_1;
		L_1 = ReadOnlyCollection_1_IsCompatibleObject_mBC98CE22AEE31378BE7BC3859B138C399101008C(L_0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 13));
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject* L_2 = ___0_value;
		int32_t L_3;
		L_3 = ReadOnlyCollection_1_IndexOf_mE49AD24B09B89FCDFFB51D72A2D789C79DF45B4A(__this, ((*(OrderBlock_t62FD6F6544F34B5298DEF2F77AAE446F269B7837*)UnBox(L_2, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4)))), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 15));
		return L_3;
	}

IL_0015:
	{
		return (-1);
	}
}
// Method Definition Index: 10583
// Method Definition Index: 10584
// Method Definition Index: 10585
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 10557
// Method Definition Index: 10558
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_get_Count_m287F41240FA9702A3603018F5DA2111101337F87 (ReadOnlyCollection_1_t24949DD08B73EB984B4A07623392ECDAD4BA28D9* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = InterfaceFuncInvoker0< int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 0), L_0);
		return L_1;
	}
}
// Method Definition Index: 10559
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Page_t04FE552A388BF55B12C8868E19589136957E00A5 ReadOnlyCollection_1_get_Item_m4332DE3134DF1AFC59EF9A02A818DFCE9E500137 (ReadOnlyCollection_1_t24949DD08B73EB984B4A07623392ECDAD4BA28D9* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		int32_t L_1 = ___0_index;
		NullCheck(L_0);
		Page_t04FE552A388BF55B12C8868E19589136957E00A5 L_2;
		L_2 = InterfaceFuncInvoker1< Page_t04FE552A388BF55B12C8868E19589136957E00A5, int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_0, L_1);
		return L_2;
	}
}
// Method Definition Index: 10560
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_Contains_m3E02CC006DCAFF38100E4A14869AF34A4E2C61B1 (ReadOnlyCollection_1_t24949DD08B73EB984B4A07623392ECDAD4BA28D9* __this, Page_t04FE552A388BF55B12C8868E19589136957E00A5 ___0_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		Page_t04FE552A388BF55B12C8868E19589136957E00A5 L_1 = ___0_value;
		NullCheck(L_0);
		bool L_2;
		L_2 = InterfaceFuncInvoker1< bool, Page_t04FE552A388BF55B12C8868E19589136957E00A5 >::Invoke(4, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 0), L_0, L_1);
		return L_2;
	}
}
// Method Definition Index: 10561
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlyCollection_1_CopyTo_m975C42501AAC452288D0296D3228156956BC5DFC (ReadOnlyCollection_1_t24949DD08B73EB984B4A07623392ECDAD4BA28D9* __this, PageU5BU5D_tFCE8198B6D8AF479FBA546791B9CF3DD8A2D75C9* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		PageU5BU5D_tFCE8198B6D8AF479FBA546791B9CF3DD8A2D75C9* L_1 = ___0_array;
		int32_t L_2 = ___1_index;
		NullCheck(L_0);
		InterfaceActionInvoker2< PageU5BU5D_tFCE8198B6D8AF479FBA546791B9CF3DD8A2D75C9*, int32_t >::Invoke(5, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 0), L_0, L_1, L_2);
		return;
	}
}
// Method Definition Index: 10562
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ReadOnlyCollection_1_GetEnumerator_mF2CE6951FFBC230CB7DA1B53DF6C0D57B4251E7C (ReadOnlyCollection_1_t24949DD08B73EB984B4A07623392ECDAD4BA28D9* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 7), L_0);
		return L_1;
	}
}
// Method Definition Index: 10563
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_IndexOf_m0E74DCAFC2A961DC0CA098117BA36A6AA644C66D (ReadOnlyCollection_1_t24949DD08B73EB984B4A07623392ECDAD4BA28D9* __this, Page_t04FE552A388BF55B12C8868E19589136957E00A5 ___0_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		Page_t04FE552A388BF55B12C8868E19589136957E00A5 L_1 = ___0_value;
		NullCheck(L_0);
		int32_t L_2;
		L_2 = InterfaceFuncInvoker1< int32_t, Page_t04FE552A388BF55B12C8868E19589136957E00A5 >::Invoke(2, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_0, L_1);
		return L_2;
	}
}
// Method Definition Index: 10564
// Method Definition Index: 10565
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Page_t04FE552A388BF55B12C8868E19589136957E00A5 ReadOnlyCollection_1_System_Collections_Generic_IListU3CTU3E_get_Item_m4FFDEC8380BA0986BB952B1FA8E7DE6F784FFEB7 (ReadOnlyCollection_1_t24949DD08B73EB984B4A07623392ECDAD4BA28D9* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		int32_t L_1 = ___0_index;
		NullCheck(L_0);
		Page_t04FE552A388BF55B12C8868E19589136957E00A5 L_2;
		L_2 = InterfaceFuncInvoker1< Page_t04FE552A388BF55B12C8868E19589136957E00A5, int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_0, L_1);
		return L_2;
	}
}
// Method Definition Index: 10566
// Method Definition Index: 10567
// Method Definition Index: 10568
// Method Definition Index: 10569
// Method Definition Index: 10570
// Method Definition Index: 10571
// Method Definition Index: 10572
// Method Definition Index: 10573
// Method Definition Index: 10574
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlyCollection_1_System_Collections_ICollection_CopyTo_mF8A3C874D8691DCF5A6E9DFB16CE12BDF5553F26 (ReadOnlyCollection_1_t24949DD08B73EB984B4A07623392ECDAD4BA28D9* __this, RuntimeArray* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(Type_t_StaticInit);
	//<source_info:<no-source>:1>
	PageU5BU5D_tFCE8198B6D8AF479FBA546791B9CF3DD8A2D75C9* V_0 = NULL;
	Type_t* V_1 = NULL;
	Type_t* V_2 = NULL;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_3 = NULL;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		RuntimeArray* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC(3, NULL);
	}

IL_0009:
	{
		RuntimeArray* L_1 = ___0_array;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = il2cpp_codegen_array_get_rank(L_1);
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_0018;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA(7, NULL);
	}

IL_0018:
	{
		RuntimeArray* L_3 = ___0_array;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(L_3, 0, NULL);
		if (!L_4)
		{
			goto IL_0027;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA(6, NULL);
	}

IL_0027:
	{
		int32_t L_5 = ___1_index;
		if ((((int32_t)L_5) >= ((int32_t)0)))
		{
			goto IL_0030;
		}
	}
	{
		ThrowHelper_ThrowIndexArgumentOutOfRange_NeedNonNegNumException_m57AAB1E093F20BFC64BDDBD90FB5B592F582B82F(NULL);
	}

IL_0030:
	{
		RuntimeArray* L_6 = ___0_array;
		NullCheck(L_6);
		int32_t L_7;
		L_7 = il2cpp_codegen_array_get_length(L_6);
		int32_t L_8 = ___1_index;
		int32_t L_9;
		L_9 = ReadOnlyCollection_1_get_Count_m287F41240FA9702A3603018F5DA2111101337F87(__this, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 10));
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_7, L_8))) >= ((int32_t)L_9)))
		{
			goto IL_0046;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA(5, NULL);
	}

IL_0046:
	{
		RuntimeArray* L_10 = ___0_array;
		V_0 = ((PageU5BU5D_tFCE8198B6D8AF479FBA546791B9CF3DD8A2D75C9*)IsInstSealed((RuntimeObject*)L_10, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 11)));
		PageU5BU5D_tFCE8198B6D8AF479FBA546791B9CF3DD8A2D75C9* L_11 = V_0;
		if (!L_11)
		{
			goto IL_005e;
		}
	}
	{
		RuntimeObject* L_12 = __this->___list;
		PageU5BU5D_tFCE8198B6D8AF479FBA546791B9CF3DD8A2D75C9* L_13 = V_0;
		int32_t L_14 = ___1_index;
		NullCheck(L_12);
		InterfaceActionInvoker2< PageU5BU5D_tFCE8198B6D8AF479FBA546791B9CF3DD8A2D75C9*, int32_t >::Invoke(5, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 0), L_12, L_13, L_14);
		return;
	}

IL_005e:
	{
		RuntimeArray* L_15 = ___0_array;
		NullCheck(L_15);
		Type_t* L_16;
		L_16 = il2cpp_codegen_object_get_type(L_15);
		NullCheck(L_16);
		Type_t* L_17;
		L_17 = VirtualFuncInvoker0< Type_t* >::Invoke(46, L_16);
		V_1 = L_17;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_18 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(il2cpp_codegen_method_rgctx(method), 12)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_19;
		L_19 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_18, NULL);
		V_2 = L_19;
		Type_t* L_20 = V_1;
		Type_t* L_21 = V_2;
		NullCheck(L_20);
		bool L_22;
		L_22 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(22, L_20, L_21);
		if (L_22)
		{
			goto IL_008c;
		}
	}
	{
		Type_t* L_23 = V_2;
		Type_t* L_24 = V_1;
		NullCheck(L_23);
		bool L_25;
		L_25 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(22, L_23, L_24);
		if (L_25)
		{
			goto IL_008c;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58(NULL);
	}

IL_008c:
	{
		RuntimeArray* L_26 = ___0_array;
		V_3 = ((ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)IsInst((RuntimeObject*)L_26, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_27 = V_3;
		if (L_27)
		{
			goto IL_009b;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58(NULL);
	}

IL_009b:
	{
		RuntimeObject* L_28 = __this->___list;
		NullCheck(L_28);
		int32_t L_29;
		L_29 = InterfaceFuncInvoker0< int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 0), L_28);
		V_4 = L_29;
	}
	try
	{
		{
			V_5 = 0;
			goto IL_00cd_1;
		}

IL_00ad_1:
		{
			ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_30 = V_3;
			int32_t L_31 = ___1_index;
			int32_t L_32 = L_31;
			___1_index = ((int32_t)il2cpp_codegen_add(L_32, 1));
			RuntimeObject* L_33 = __this->___list;
			int32_t L_34 = V_5;
			NullCheck(L_33);
			Page_t04FE552A388BF55B12C8868E19589136957E00A5 L_35;
			L_35 = InterfaceFuncInvoker1< Page_t04FE552A388BF55B12C8868E19589136957E00A5, int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_33, L_34);
			Page_t04FE552A388BF55B12C8868E19589136957E00A5 L_36 = L_35;
			RuntimeObject* L_37 = Box(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4), &L_36);
			NullCheck(L_30);
			ArrayElementTypeCheck (L_30, L_37);
			(L_30)->SetAt(static_cast<il2cpp_array_size_t>(L_32), (RuntimeObject*)L_37);
			int32_t L_38 = V_5;
			V_5 = ((int32_t)il2cpp_codegen_add(L_38, 1));
		}

IL_00cd_1:
		{
			int32_t L_39 = V_5;
			int32_t L_40 = V_4;
			if ((((int32_t)L_39) < ((int32_t)L_40)))
			{
				goto IL_00ad_1;
			}
		}
		{
			goto IL_00dd;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_00d5;
		}
		throw e;
	}

CATCH_00d5:
	{
		ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1* L_41 = ((ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1*)IL2CPP_GET_ACTIVE_EXCEPTION(ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1*));;
		ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58(NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_00dd;
	}

IL_00dd:
	{
		return;
	}
}
// Method Definition Index: 10575
// Method Definition Index: 10576
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ReadOnlyCollection_1_System_Collections_IList_get_Item_m1B4223F5FD615F26D2F807E25E77E242B3EA4434 (ReadOnlyCollection_1_t24949DD08B73EB984B4A07623392ECDAD4BA28D9* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		int32_t L_1 = ___0_index;
		NullCheck(L_0);
		Page_t04FE552A388BF55B12C8868E19589136957E00A5 L_2;
		L_2 = InterfaceFuncInvoker1< Page_t04FE552A388BF55B12C8868E19589136957E00A5, int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_0, L_1);
		Page_t04FE552A388BF55B12C8868E19589136957E00A5 L_3 = L_2;
		RuntimeObject* L_4 = Box(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4), &L_3);
		return L_4;
	}
}
// Method Definition Index: 10577
// Method Definition Index: 10578
// Method Definition Index: 10579
// Method Definition Index: 10580
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_IsCompatibleObject_m9657834641910CDCA297C535F91DE4065340F741 (RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	//<source_info:<no-source>:1>
	Page_t04FE552A388BF55B12C8868E19589136957E00A5 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		RuntimeObject* L_0 = ___0_value;
		if (((RuntimeObject*)IsInstSealed((RuntimeObject*)L_0, il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 4))))
		{
			goto IL_001f;
		}
	}
	{
		RuntimeObject* L_1 = ___0_value;
		if (L_1)
		{
			goto IL_001d;
		}
	}
	{
		il2cpp_codegen_initobj((&V_0), sizeof(Page_t04FE552A388BF55B12C8868E19589136957E00A5));
		Page_t04FE552A388BF55B12C8868E19589136957E00A5 L_2 = V_0;
		return false;
	}

IL_001d:
	{
		return (bool)0;
	}

IL_001f:
	{
		return (bool)1;
	}
}
// Method Definition Index: 10581
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_System_Collections_IList_Contains_m5E45413467FC5BE4F651C3ED82AE2EDC3654791D (ReadOnlyCollection_1_t24949DD08B73EB984B4A07623392ECDAD4BA28D9* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = ___0_value;
		bool L_1;
		L_1 = ReadOnlyCollection_1_IsCompatibleObject_m9657834641910CDCA297C535F91DE4065340F741(L_0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 13));
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject* L_2 = ___0_value;
		bool L_3;
		L_3 = ReadOnlyCollection_1_Contains_m3E02CC006DCAFF38100E4A14869AF34A4E2C61B1(__this, ((*(Page_t04FE552A388BF55B12C8868E19589136957E00A5*)UnBox(L_2, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4)))), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 14));
		return L_3;
	}

IL_0015:
	{
		return (bool)0;
	}
}
// Method Definition Index: 10582
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_System_Collections_IList_IndexOf_m352E65DD0AE874C662709932CFFA0586A09F58C8 (ReadOnlyCollection_1_t24949DD08B73EB984B4A07623392ECDAD4BA28D9* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = ___0_value;
		bool L_1;
		L_1 = ReadOnlyCollection_1_IsCompatibleObject_m9657834641910CDCA297C535F91DE4065340F741(L_0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 13));
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject* L_2 = ___0_value;
		int32_t L_3;
		L_3 = ReadOnlyCollection_1_IndexOf_m0E74DCAFC2A961DC0CA098117BA36A6AA644C66D(__this, ((*(Page_t04FE552A388BF55B12C8868E19589136957E00A5*)UnBox(L_2, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4)))), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 15));
		return L_3;
	}

IL_0015:
	{
		return (-1);
	}
}
// Method Definition Index: 10583
// Method Definition Index: 10584
// Method Definition Index: 10585
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 10557
// Method Definition Index: 10558
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_get_Count_mAFA7A25CF8FC9364D0533E562FF5D3F8067C93FC (ReadOnlyCollection_1_tA0E2E00CE27E5818B4957D61CE7C01975DCE7874* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = InterfaceFuncInvoker0< int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 0), L_0);
		return L_1;
	}
}
// Method Definition Index: 10559
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ButtonClickAction_t8939474B9E19930B4546768B72C22DA5A7115A0C ReadOnlyCollection_1_get_Item_m3D8CA4462FEF5D605199F47A25F4902C3A88C9C8 (ReadOnlyCollection_1_tA0E2E00CE27E5818B4957D61CE7C01975DCE7874* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		int32_t L_1 = ___0_index;
		NullCheck(L_0);
		ButtonClickAction_t8939474B9E19930B4546768B72C22DA5A7115A0C L_2;
		L_2 = InterfaceFuncInvoker1< ButtonClickAction_t8939474B9E19930B4546768B72C22DA5A7115A0C, int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_0, L_1);
		return L_2;
	}
}
// Method Definition Index: 10560
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_Contains_m77A509273C2E04A29E0F7C65B39D1BCDECB1CEFF (ReadOnlyCollection_1_tA0E2E00CE27E5818B4957D61CE7C01975DCE7874* __this, ButtonClickAction_t8939474B9E19930B4546768B72C22DA5A7115A0C ___0_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		ButtonClickAction_t8939474B9E19930B4546768B72C22DA5A7115A0C L_1 = ___0_value;
		NullCheck(L_0);
		bool L_2;
		L_2 = InterfaceFuncInvoker1< bool, ButtonClickAction_t8939474B9E19930B4546768B72C22DA5A7115A0C >::Invoke(4, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 0), L_0, L_1);
		return L_2;
	}
}
// Method Definition Index: 10561
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlyCollection_1_CopyTo_m1905A04D861B2AD450B455134BB8514FE363698D (ReadOnlyCollection_1_tA0E2E00CE27E5818B4957D61CE7C01975DCE7874* __this, ButtonClickActionU5BU5D_tF4F7652B56313FBAF9FD3DCEC7E302D3F1DA772A* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		ButtonClickActionU5BU5D_tF4F7652B56313FBAF9FD3DCEC7E302D3F1DA772A* L_1 = ___0_array;
		int32_t L_2 = ___1_index;
		NullCheck(L_0);
		InterfaceActionInvoker2< ButtonClickActionU5BU5D_tF4F7652B56313FBAF9FD3DCEC7E302D3F1DA772A*, int32_t >::Invoke(5, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 0), L_0, L_1, L_2);
		return;
	}
}
// Method Definition Index: 10562
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ReadOnlyCollection_1_GetEnumerator_m25C6E862EE2E4E0025B4FF5751B9A0F3B7E092BA (ReadOnlyCollection_1_tA0E2E00CE27E5818B4957D61CE7C01975DCE7874* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 7), L_0);
		return L_1;
	}
}
// Method Definition Index: 10563
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_IndexOf_m914EBE0AAD35F590C1E148A6673E0374984A5BEB (ReadOnlyCollection_1_tA0E2E00CE27E5818B4957D61CE7C01975DCE7874* __this, ButtonClickAction_t8939474B9E19930B4546768B72C22DA5A7115A0C ___0_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		ButtonClickAction_t8939474B9E19930B4546768B72C22DA5A7115A0C L_1 = ___0_value;
		NullCheck(L_0);
		int32_t L_2;
		L_2 = InterfaceFuncInvoker1< int32_t, ButtonClickAction_t8939474B9E19930B4546768B72C22DA5A7115A0C >::Invoke(2, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_0, L_1);
		return L_2;
	}
}
// Method Definition Index: 10564
// Method Definition Index: 10565
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ButtonClickAction_t8939474B9E19930B4546768B72C22DA5A7115A0C ReadOnlyCollection_1_System_Collections_Generic_IListU3CTU3E_get_Item_m432BAF69E008BF9431630CD6B692C3ED27635FFB (ReadOnlyCollection_1_tA0E2E00CE27E5818B4957D61CE7C01975DCE7874* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		int32_t L_1 = ___0_index;
		NullCheck(L_0);
		ButtonClickAction_t8939474B9E19930B4546768B72C22DA5A7115A0C L_2;
		L_2 = InterfaceFuncInvoker1< ButtonClickAction_t8939474B9E19930B4546768B72C22DA5A7115A0C, int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_0, L_1);
		return L_2;
	}
}
// Method Definition Index: 10566
// Method Definition Index: 10567
// Method Definition Index: 10568
// Method Definition Index: 10569
// Method Definition Index: 10570
// Method Definition Index: 10571
// Method Definition Index: 10572
// Method Definition Index: 10573
// Method Definition Index: 10574
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlyCollection_1_System_Collections_ICollection_CopyTo_m91AE30CE9125463916F1C8686CEB7D1EF84840ED (ReadOnlyCollection_1_tA0E2E00CE27E5818B4957D61CE7C01975DCE7874* __this, RuntimeArray* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(Type_t_StaticInit);
	//<source_info:<no-source>:1>
	ButtonClickActionU5BU5D_tF4F7652B56313FBAF9FD3DCEC7E302D3F1DA772A* V_0 = NULL;
	Type_t* V_1 = NULL;
	Type_t* V_2 = NULL;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_3 = NULL;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		RuntimeArray* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC(3, NULL);
	}

IL_0009:
	{
		RuntimeArray* L_1 = ___0_array;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = il2cpp_codegen_array_get_rank(L_1);
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_0018;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA(7, NULL);
	}

IL_0018:
	{
		RuntimeArray* L_3 = ___0_array;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(L_3, 0, NULL);
		if (!L_4)
		{
			goto IL_0027;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA(6, NULL);
	}

IL_0027:
	{
		int32_t L_5 = ___1_index;
		if ((((int32_t)L_5) >= ((int32_t)0)))
		{
			goto IL_0030;
		}
	}
	{
		ThrowHelper_ThrowIndexArgumentOutOfRange_NeedNonNegNumException_m57AAB1E093F20BFC64BDDBD90FB5B592F582B82F(NULL);
	}

IL_0030:
	{
		RuntimeArray* L_6 = ___0_array;
		NullCheck(L_6);
		int32_t L_7;
		L_7 = il2cpp_codegen_array_get_length(L_6);
		int32_t L_8 = ___1_index;
		int32_t L_9;
		L_9 = ReadOnlyCollection_1_get_Count_mAFA7A25CF8FC9364D0533E562FF5D3F8067C93FC(__this, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 10));
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_7, L_8))) >= ((int32_t)L_9)))
		{
			goto IL_0046;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA(5, NULL);
	}

IL_0046:
	{
		RuntimeArray* L_10 = ___0_array;
		V_0 = ((ButtonClickActionU5BU5D_tF4F7652B56313FBAF9FD3DCEC7E302D3F1DA772A*)IsInstSealed((RuntimeObject*)L_10, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 11)));
		ButtonClickActionU5BU5D_tF4F7652B56313FBAF9FD3DCEC7E302D3F1DA772A* L_11 = V_0;
		if (!L_11)
		{
			goto IL_005e;
		}
	}
	{
		RuntimeObject* L_12 = __this->___list;
		ButtonClickActionU5BU5D_tF4F7652B56313FBAF9FD3DCEC7E302D3F1DA772A* L_13 = V_0;
		int32_t L_14 = ___1_index;
		NullCheck(L_12);
		InterfaceActionInvoker2< ButtonClickActionU5BU5D_tF4F7652B56313FBAF9FD3DCEC7E302D3F1DA772A*, int32_t >::Invoke(5, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 0), L_12, L_13, L_14);
		return;
	}

IL_005e:
	{
		RuntimeArray* L_15 = ___0_array;
		NullCheck(L_15);
		Type_t* L_16;
		L_16 = il2cpp_codegen_object_get_type(L_15);
		NullCheck(L_16);
		Type_t* L_17;
		L_17 = VirtualFuncInvoker0< Type_t* >::Invoke(46, L_16);
		V_1 = L_17;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_18 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(il2cpp_codegen_method_rgctx(method), 12)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_19;
		L_19 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_18, NULL);
		V_2 = L_19;
		Type_t* L_20 = V_1;
		Type_t* L_21 = V_2;
		NullCheck(L_20);
		bool L_22;
		L_22 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(22, L_20, L_21);
		if (L_22)
		{
			goto IL_008c;
		}
	}
	{
		Type_t* L_23 = V_2;
		Type_t* L_24 = V_1;
		NullCheck(L_23);
		bool L_25;
		L_25 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(22, L_23, L_24);
		if (L_25)
		{
			goto IL_008c;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58(NULL);
	}

IL_008c:
	{
		RuntimeArray* L_26 = ___0_array;
		V_3 = ((ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)IsInst((RuntimeObject*)L_26, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_27 = V_3;
		if (L_27)
		{
			goto IL_009b;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58(NULL);
	}

IL_009b:
	{
		RuntimeObject* L_28 = __this->___list;
		NullCheck(L_28);
		int32_t L_29;
		L_29 = InterfaceFuncInvoker0< int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 0), L_28);
		V_4 = L_29;
	}
	try
	{
		{
			V_5 = 0;
			goto IL_00cd_1;
		}

IL_00ad_1:
		{
			ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_30 = V_3;
			int32_t L_31 = ___1_index;
			int32_t L_32 = L_31;
			___1_index = ((int32_t)il2cpp_codegen_add(L_32, 1));
			RuntimeObject* L_33 = __this->___list;
			int32_t L_34 = V_5;
			NullCheck(L_33);
			ButtonClickAction_t8939474B9E19930B4546768B72C22DA5A7115A0C L_35;
			L_35 = InterfaceFuncInvoker1< ButtonClickAction_t8939474B9E19930B4546768B72C22DA5A7115A0C, int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_33, L_34);
			ButtonClickAction_t8939474B9E19930B4546768B72C22DA5A7115A0C L_36 = L_35;
			RuntimeObject* L_37 = Box(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4), &L_36);
			NullCheck(L_30);
			ArrayElementTypeCheck (L_30, L_37);
			(L_30)->SetAt(static_cast<il2cpp_array_size_t>(L_32), (RuntimeObject*)L_37);
			int32_t L_38 = V_5;
			V_5 = ((int32_t)il2cpp_codegen_add(L_38, 1));
		}

IL_00cd_1:
		{
			int32_t L_39 = V_5;
			int32_t L_40 = V_4;
			if ((((int32_t)L_39) < ((int32_t)L_40)))
			{
				goto IL_00ad_1;
			}
		}
		{
			goto IL_00dd;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_00d5;
		}
		throw e;
	}

CATCH_00d5:
	{
		ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1* L_41 = ((ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1*)IL2CPP_GET_ACTIVE_EXCEPTION(ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1*));;
		ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58(NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_00dd;
	}

IL_00dd:
	{
		return;
	}
}
// Method Definition Index: 10575
// Method Definition Index: 10576
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ReadOnlyCollection_1_System_Collections_IList_get_Item_m948C9EB8EFF0D0E02915492E922109EE91BA8CDC (ReadOnlyCollection_1_tA0E2E00CE27E5818B4957D61CE7C01975DCE7874* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		int32_t L_1 = ___0_index;
		NullCheck(L_0);
		ButtonClickAction_t8939474B9E19930B4546768B72C22DA5A7115A0C L_2;
		L_2 = InterfaceFuncInvoker1< ButtonClickAction_t8939474B9E19930B4546768B72C22DA5A7115A0C, int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_0, L_1);
		ButtonClickAction_t8939474B9E19930B4546768B72C22DA5A7115A0C L_3 = L_2;
		RuntimeObject* L_4 = Box(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4), &L_3);
		return L_4;
	}
}
// Method Definition Index: 10577
// Method Definition Index: 10578
// Method Definition Index: 10579
// Method Definition Index: 10580
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_IsCompatibleObject_mDBDDFB3D37EF04A64B8456CF7D6EFE3C4B10DEE7 (RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	//<source_info:<no-source>:1>
	ButtonClickAction_t8939474B9E19930B4546768B72C22DA5A7115A0C V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		RuntimeObject* L_0 = ___0_value;
		if (((RuntimeObject*)IsInstSealed((RuntimeObject*)L_0, il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 4))))
		{
			goto IL_001f;
		}
	}
	{
		RuntimeObject* L_1 = ___0_value;
		if (L_1)
		{
			goto IL_001d;
		}
	}
	{
		il2cpp_codegen_initobj((&V_0), sizeof(ButtonClickAction_t8939474B9E19930B4546768B72C22DA5A7115A0C));
		ButtonClickAction_t8939474B9E19930B4546768B72C22DA5A7115A0C L_2 = V_0;
		return false;
	}

IL_001d:
	{
		return (bool)0;
	}

IL_001f:
	{
		return (bool)1;
	}
}
// Method Definition Index: 10581
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_System_Collections_IList_Contains_m24DB3A334E0CB924C87E48BD11750713B21BE858 (ReadOnlyCollection_1_tA0E2E00CE27E5818B4957D61CE7C01975DCE7874* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = ___0_value;
		bool L_1;
		L_1 = ReadOnlyCollection_1_IsCompatibleObject_mDBDDFB3D37EF04A64B8456CF7D6EFE3C4B10DEE7(L_0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 13));
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject* L_2 = ___0_value;
		bool L_3;
		L_3 = ReadOnlyCollection_1_Contains_m77A509273C2E04A29E0F7C65B39D1BCDECB1CEFF(__this, ((*(ButtonClickAction_t8939474B9E19930B4546768B72C22DA5A7115A0C*)UnBox(L_2, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4)))), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 14));
		return L_3;
	}

IL_0015:
	{
		return (bool)0;
	}
}
// Method Definition Index: 10582
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_System_Collections_IList_IndexOf_mBA45FF26F5A2117CDE5EE477D30161B139A7885A (ReadOnlyCollection_1_tA0E2E00CE27E5818B4957D61CE7C01975DCE7874* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = ___0_value;
		bool L_1;
		L_1 = ReadOnlyCollection_1_IsCompatibleObject_mDBDDFB3D37EF04A64B8456CF7D6EFE3C4B10DEE7(L_0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 13));
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject* L_2 = ___0_value;
		int32_t L_3;
		L_3 = ReadOnlyCollection_1_IndexOf_m914EBE0AAD35F590C1E148A6673E0374984A5BEB(__this, ((*(ButtonClickAction_t8939474B9E19930B4546768B72C22DA5A7115A0C*)UnBox(L_2, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4)))), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 15));
		return L_3;
	}

IL_0015:
	{
		return (-1);
	}
}
// Method Definition Index: 10583
// Method Definition Index: 10584
// Method Definition Index: 10585
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 10557
// Method Definition Index: 10558
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_get_Count_m5B47C160E54B3FA7E5BB14C5B8A0E42626BE69F2 (ReadOnlyCollection_1_t045C5F3279EE63047DD20057F0ABA1319690AE3D* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = InterfaceFuncInvoker0< int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 0), L_0);
		return L_1;
	}
}
// Method Definition Index: 10559
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AttributeOverrideRange_t47A9929769CAD72883980AE2C29FACC19B310D49 ReadOnlyCollection_1_get_Item_mBE62BB5F36F8BC09DA8338F8903C906AA42B4FEE (ReadOnlyCollection_1_t045C5F3279EE63047DD20057F0ABA1319690AE3D* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		int32_t L_1 = ___0_index;
		NullCheck(L_0);
		AttributeOverrideRange_t47A9929769CAD72883980AE2C29FACC19B310D49 L_2;
		L_2 = InterfaceFuncInvoker1< AttributeOverrideRange_t47A9929769CAD72883980AE2C29FACC19B310D49, int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_0, L_1);
		return L_2;
	}
}
// Method Definition Index: 10560
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_Contains_m4B0847087C68B65B73EA3E6E35259CF4DD1B2D8D (ReadOnlyCollection_1_t045C5F3279EE63047DD20057F0ABA1319690AE3D* __this, AttributeOverrideRange_t47A9929769CAD72883980AE2C29FACC19B310D49 ___0_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		AttributeOverrideRange_t47A9929769CAD72883980AE2C29FACC19B310D49 L_1 = ___0_value;
		NullCheck(L_0);
		bool L_2;
		L_2 = InterfaceFuncInvoker1< bool, AttributeOverrideRange_t47A9929769CAD72883980AE2C29FACC19B310D49 >::Invoke(4, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 0), L_0, L_1);
		return L_2;
	}
}
// Method Definition Index: 10561
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlyCollection_1_CopyTo_m10D498C97B8C770490F9CAFA78CAC8A38B5A3DB9 (ReadOnlyCollection_1_t045C5F3279EE63047DD20057F0ABA1319690AE3D* __this, AttributeOverrideRangeU5BU5D_t1140F5D222769964617E7C7EA9F5AD34F13F5E46* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		AttributeOverrideRangeU5BU5D_t1140F5D222769964617E7C7EA9F5AD34F13F5E46* L_1 = ___0_array;
		int32_t L_2 = ___1_index;
		NullCheck(L_0);
		InterfaceActionInvoker2< AttributeOverrideRangeU5BU5D_t1140F5D222769964617E7C7EA9F5AD34F13F5E46*, int32_t >::Invoke(5, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 0), L_0, L_1, L_2);
		return;
	}
}
// Method Definition Index: 10562
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ReadOnlyCollection_1_GetEnumerator_mF57D4E007EA34C2C37722BEA105FC8F0B8BB8EB5 (ReadOnlyCollection_1_t045C5F3279EE63047DD20057F0ABA1319690AE3D* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 7), L_0);
		return L_1;
	}
}
// Method Definition Index: 10563
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_IndexOf_m10763E9212AE626668733F3873AA6AE157C90226 (ReadOnlyCollection_1_t045C5F3279EE63047DD20057F0ABA1319690AE3D* __this, AttributeOverrideRange_t47A9929769CAD72883980AE2C29FACC19B310D49 ___0_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		AttributeOverrideRange_t47A9929769CAD72883980AE2C29FACC19B310D49 L_1 = ___0_value;
		NullCheck(L_0);
		int32_t L_2;
		L_2 = InterfaceFuncInvoker1< int32_t, AttributeOverrideRange_t47A9929769CAD72883980AE2C29FACC19B310D49 >::Invoke(2, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_0, L_1);
		return L_2;
	}
}
// Method Definition Index: 10564
// Method Definition Index: 10565
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AttributeOverrideRange_t47A9929769CAD72883980AE2C29FACC19B310D49 ReadOnlyCollection_1_System_Collections_Generic_IListU3CTU3E_get_Item_m9DDAF7EA116A065420CF0D09DDB05E1B4ED2F4B7 (ReadOnlyCollection_1_t045C5F3279EE63047DD20057F0ABA1319690AE3D* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		int32_t L_1 = ___0_index;
		NullCheck(L_0);
		AttributeOverrideRange_t47A9929769CAD72883980AE2C29FACC19B310D49 L_2;
		L_2 = InterfaceFuncInvoker1< AttributeOverrideRange_t47A9929769CAD72883980AE2C29FACC19B310D49, int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_0, L_1);
		return L_2;
	}
}
// Method Definition Index: 10566
// Method Definition Index: 10567
// Method Definition Index: 10568
// Method Definition Index: 10569
// Method Definition Index: 10570
// Method Definition Index: 10571
// Method Definition Index: 10572
// Method Definition Index: 10573
// Method Definition Index: 10574
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlyCollection_1_System_Collections_ICollection_CopyTo_mE7A17273E045E61C6A2B50708EAC8E8CBC7A4758 (ReadOnlyCollection_1_t045C5F3279EE63047DD20057F0ABA1319690AE3D* __this, RuntimeArray* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(Type_t_StaticInit);
	//<source_info:<no-source>:1>
	AttributeOverrideRangeU5BU5D_t1140F5D222769964617E7C7EA9F5AD34F13F5E46* V_0 = NULL;
	Type_t* V_1 = NULL;
	Type_t* V_2 = NULL;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_3 = NULL;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		RuntimeArray* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC(3, NULL);
	}

IL_0009:
	{
		RuntimeArray* L_1 = ___0_array;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = il2cpp_codegen_array_get_rank(L_1);
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_0018;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA(7, NULL);
	}

IL_0018:
	{
		RuntimeArray* L_3 = ___0_array;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(L_3, 0, NULL);
		if (!L_4)
		{
			goto IL_0027;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA(6, NULL);
	}

IL_0027:
	{
		int32_t L_5 = ___1_index;
		if ((((int32_t)L_5) >= ((int32_t)0)))
		{
			goto IL_0030;
		}
	}
	{
		ThrowHelper_ThrowIndexArgumentOutOfRange_NeedNonNegNumException_m57AAB1E093F20BFC64BDDBD90FB5B592F582B82F(NULL);
	}

IL_0030:
	{
		RuntimeArray* L_6 = ___0_array;
		NullCheck(L_6);
		int32_t L_7;
		L_7 = il2cpp_codegen_array_get_length(L_6);
		int32_t L_8 = ___1_index;
		int32_t L_9;
		L_9 = ReadOnlyCollection_1_get_Count_m5B47C160E54B3FA7E5BB14C5B8A0E42626BE69F2(__this, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 10));
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_7, L_8))) >= ((int32_t)L_9)))
		{
			goto IL_0046;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA(5, NULL);
	}

IL_0046:
	{
		RuntimeArray* L_10 = ___0_array;
		V_0 = ((AttributeOverrideRangeU5BU5D_t1140F5D222769964617E7C7EA9F5AD34F13F5E46*)IsInstSealed((RuntimeObject*)L_10, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 11)));
		AttributeOverrideRangeU5BU5D_t1140F5D222769964617E7C7EA9F5AD34F13F5E46* L_11 = V_0;
		if (!L_11)
		{
			goto IL_005e;
		}
	}
	{
		RuntimeObject* L_12 = __this->___list;
		AttributeOverrideRangeU5BU5D_t1140F5D222769964617E7C7EA9F5AD34F13F5E46* L_13 = V_0;
		int32_t L_14 = ___1_index;
		NullCheck(L_12);
		InterfaceActionInvoker2< AttributeOverrideRangeU5BU5D_t1140F5D222769964617E7C7EA9F5AD34F13F5E46*, int32_t >::Invoke(5, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 0), L_12, L_13, L_14);
		return;
	}

IL_005e:
	{
		RuntimeArray* L_15 = ___0_array;
		NullCheck(L_15);
		Type_t* L_16;
		L_16 = il2cpp_codegen_object_get_type(L_15);
		NullCheck(L_16);
		Type_t* L_17;
		L_17 = VirtualFuncInvoker0< Type_t* >::Invoke(46, L_16);
		V_1 = L_17;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_18 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(il2cpp_codegen_method_rgctx(method), 12)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_19;
		L_19 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_18, NULL);
		V_2 = L_19;
		Type_t* L_20 = V_1;
		Type_t* L_21 = V_2;
		NullCheck(L_20);
		bool L_22;
		L_22 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(22, L_20, L_21);
		if (L_22)
		{
			goto IL_008c;
		}
	}
	{
		Type_t* L_23 = V_2;
		Type_t* L_24 = V_1;
		NullCheck(L_23);
		bool L_25;
		L_25 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(22, L_23, L_24);
		if (L_25)
		{
			goto IL_008c;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58(NULL);
	}

IL_008c:
	{
		RuntimeArray* L_26 = ___0_array;
		V_3 = ((ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)IsInst((RuntimeObject*)L_26, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_27 = V_3;
		if (L_27)
		{
			goto IL_009b;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58(NULL);
	}

IL_009b:
	{
		RuntimeObject* L_28 = __this->___list;
		NullCheck(L_28);
		int32_t L_29;
		L_29 = InterfaceFuncInvoker0< int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 0), L_28);
		V_4 = L_29;
	}
	try
	{
		{
			V_5 = 0;
			goto IL_00cd_1;
		}

IL_00ad_1:
		{
			ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_30 = V_3;
			int32_t L_31 = ___1_index;
			int32_t L_32 = L_31;
			___1_index = ((int32_t)il2cpp_codegen_add(L_32, 1));
			RuntimeObject* L_33 = __this->___list;
			int32_t L_34 = V_5;
			NullCheck(L_33);
			AttributeOverrideRange_t47A9929769CAD72883980AE2C29FACC19B310D49 L_35;
			L_35 = InterfaceFuncInvoker1< AttributeOverrideRange_t47A9929769CAD72883980AE2C29FACC19B310D49, int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_33, L_34);
			AttributeOverrideRange_t47A9929769CAD72883980AE2C29FACC19B310D49 L_36 = L_35;
			RuntimeObject* L_37 = Box(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4), &L_36);
			NullCheck(L_30);
			ArrayElementTypeCheck (L_30, L_37);
			(L_30)->SetAt(static_cast<il2cpp_array_size_t>(L_32), (RuntimeObject*)L_37);
			int32_t L_38 = V_5;
			V_5 = ((int32_t)il2cpp_codegen_add(L_38, 1));
		}

IL_00cd_1:
		{
			int32_t L_39 = V_5;
			int32_t L_40 = V_4;
			if ((((int32_t)L_39) < ((int32_t)L_40)))
			{
				goto IL_00ad_1;
			}
		}
		{
			goto IL_00dd;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_00d5;
		}
		throw e;
	}

CATCH_00d5:
	{
		ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1* L_41 = ((ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1*)IL2CPP_GET_ACTIVE_EXCEPTION(ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1*));;
		ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58(NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_00dd;
	}

IL_00dd:
	{
		return;
	}
}
// Method Definition Index: 10575
// Method Definition Index: 10576
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ReadOnlyCollection_1_System_Collections_IList_get_Item_m0307379702A2DB2A50EAEDB688D3F646307ACE38 (ReadOnlyCollection_1_t045C5F3279EE63047DD20057F0ABA1319690AE3D* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		int32_t L_1 = ___0_index;
		NullCheck(L_0);
		AttributeOverrideRange_t47A9929769CAD72883980AE2C29FACC19B310D49 L_2;
		L_2 = InterfaceFuncInvoker1< AttributeOverrideRange_t47A9929769CAD72883980AE2C29FACC19B310D49, int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_0, L_1);
		AttributeOverrideRange_t47A9929769CAD72883980AE2C29FACC19B310D49 L_3 = L_2;
		RuntimeObject* L_4 = Box(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4), &L_3);
		return L_4;
	}
}
// Method Definition Index: 10577
// Method Definition Index: 10578
// Method Definition Index: 10579
// Method Definition Index: 10580
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_IsCompatibleObject_m365C933BBE50D401BA82D9F311CA69E4C2504802 (RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	//<source_info:<no-source>:1>
	AttributeOverrideRange_t47A9929769CAD72883980AE2C29FACC19B310D49 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		RuntimeObject* L_0 = ___0_value;
		if (((RuntimeObject*)IsInstSealed((RuntimeObject*)L_0, il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 4))))
		{
			goto IL_001f;
		}
	}
	{
		RuntimeObject* L_1 = ___0_value;
		if (L_1)
		{
			goto IL_001d;
		}
	}
	{
		il2cpp_codegen_initobj((&V_0), sizeof(AttributeOverrideRange_t47A9929769CAD72883980AE2C29FACC19B310D49));
		AttributeOverrideRange_t47A9929769CAD72883980AE2C29FACC19B310D49 L_2 = V_0;
		return false;
	}

IL_001d:
	{
		return (bool)0;
	}

IL_001f:
	{
		return (bool)1;
	}
}
// Method Definition Index: 10581
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_System_Collections_IList_Contains_m2127BA43906647B3C7B96EE35FFB873AAB953501 (ReadOnlyCollection_1_t045C5F3279EE63047DD20057F0ABA1319690AE3D* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = ___0_value;
		bool L_1;
		L_1 = ReadOnlyCollection_1_IsCompatibleObject_m365C933BBE50D401BA82D9F311CA69E4C2504802(L_0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 13));
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject* L_2 = ___0_value;
		bool L_3;
		L_3 = ReadOnlyCollection_1_Contains_m4B0847087C68B65B73EA3E6E35259CF4DD1B2D8D(__this, ((*(AttributeOverrideRange_t47A9929769CAD72883980AE2C29FACC19B310D49*)UnBox(L_2, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4)))), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 14));
		return L_3;
	}

IL_0015:
	{
		return (bool)0;
	}
}
// Method Definition Index: 10582
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_System_Collections_IList_IndexOf_m14BCA44665EDC3A3BF0BB4F76F86808DCE785F67 (ReadOnlyCollection_1_t045C5F3279EE63047DD20057F0ABA1319690AE3D* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = ___0_value;
		bool L_1;
		L_1 = ReadOnlyCollection_1_IsCompatibleObject_m365C933BBE50D401BA82D9F311CA69E4C2504802(L_0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 13));
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject* L_2 = ___0_value;
		int32_t L_3;
		L_3 = ReadOnlyCollection_1_IndexOf_m10763E9212AE626668733F3873AA6AE157C90226(__this, ((*(AttributeOverrideRange_t47A9929769CAD72883980AE2C29FACC19B310D49*)UnBox(L_2, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4)))), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 15));
		return L_3;
	}

IL_0015:
	{
		return (-1);
	}
}
// Method Definition Index: 10583
// Method Definition Index: 10584
// Method Definition Index: 10585
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 10557
// Method Definition Index: 10558
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_get_Count_mA8F15C9AC8C599E164CB30A8C966CB6B8DF9D2EE (ReadOnlyCollection_1_t0A65BF0F900AF63819F1C26D6E71BFE75180183D* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = InterfaceFuncInvoker0< int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 0), L_0);
		return L_1;
	}
}
// Method Definition Index: 10559
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SerializedDataOverrideRange_t3A1FFF9457378F017DD8F445C7AF421B9AB65014 ReadOnlyCollection_1_get_Item_m7AED04F9BCFD13F634D5B1B591F8CC514099FEF9 (ReadOnlyCollection_1_t0A65BF0F900AF63819F1C26D6E71BFE75180183D* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		int32_t L_1 = ___0_index;
		NullCheck(L_0);
		SerializedDataOverrideRange_t3A1FFF9457378F017DD8F445C7AF421B9AB65014 L_2;
		L_2 = InterfaceFuncInvoker1< SerializedDataOverrideRange_t3A1FFF9457378F017DD8F445C7AF421B9AB65014, int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_0, L_1);
		return L_2;
	}
}
// Method Definition Index: 10560
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_Contains_m88C6F200CD92A99A7749F39BE082CDA1F67CAAEB (ReadOnlyCollection_1_t0A65BF0F900AF63819F1C26D6E71BFE75180183D* __this, SerializedDataOverrideRange_t3A1FFF9457378F017DD8F445C7AF421B9AB65014 ___0_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		SerializedDataOverrideRange_t3A1FFF9457378F017DD8F445C7AF421B9AB65014 L_1 = ___0_value;
		NullCheck(L_0);
		bool L_2;
		L_2 = InterfaceFuncInvoker1< bool, SerializedDataOverrideRange_t3A1FFF9457378F017DD8F445C7AF421B9AB65014 >::Invoke(4, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 0), L_0, L_1);
		return L_2;
	}
}
// Method Definition Index: 10561
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlyCollection_1_CopyTo_mCBC5F2211D343290BDB11515DFD9DEDC978A452B (ReadOnlyCollection_1_t0A65BF0F900AF63819F1C26D6E71BFE75180183D* __this, SerializedDataOverrideRangeU5BU5D_t88081D15A1E9C308C93F1BBA4820D764A8DAC24F* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		SerializedDataOverrideRangeU5BU5D_t88081D15A1E9C308C93F1BBA4820D764A8DAC24F* L_1 = ___0_array;
		int32_t L_2 = ___1_index;
		NullCheck(L_0);
		InterfaceActionInvoker2< SerializedDataOverrideRangeU5BU5D_t88081D15A1E9C308C93F1BBA4820D764A8DAC24F*, int32_t >::Invoke(5, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 0), L_0, L_1, L_2);
		return;
	}
}
// Method Definition Index: 10562
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ReadOnlyCollection_1_GetEnumerator_m7F0852D8C951E638DD2EFE1B9CF23BD57689F054 (ReadOnlyCollection_1_t0A65BF0F900AF63819F1C26D6E71BFE75180183D* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 7), L_0);
		return L_1;
	}
}
// Method Definition Index: 10563
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_IndexOf_mA86F064006A9C37FA35D6D9E63BA1E3DE93D7FB6 (ReadOnlyCollection_1_t0A65BF0F900AF63819F1C26D6E71BFE75180183D* __this, SerializedDataOverrideRange_t3A1FFF9457378F017DD8F445C7AF421B9AB65014 ___0_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		SerializedDataOverrideRange_t3A1FFF9457378F017DD8F445C7AF421B9AB65014 L_1 = ___0_value;
		NullCheck(L_0);
		int32_t L_2;
		L_2 = InterfaceFuncInvoker1< int32_t, SerializedDataOverrideRange_t3A1FFF9457378F017DD8F445C7AF421B9AB65014 >::Invoke(2, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_0, L_1);
		return L_2;
	}
}
// Method Definition Index: 10564
// Method Definition Index: 10565
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SerializedDataOverrideRange_t3A1FFF9457378F017DD8F445C7AF421B9AB65014 ReadOnlyCollection_1_System_Collections_Generic_IListU3CTU3E_get_Item_m661A5046E5C86119E01E1278514A451664BBD6FD (ReadOnlyCollection_1_t0A65BF0F900AF63819F1C26D6E71BFE75180183D* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		int32_t L_1 = ___0_index;
		NullCheck(L_0);
		SerializedDataOverrideRange_t3A1FFF9457378F017DD8F445C7AF421B9AB65014 L_2;
		L_2 = InterfaceFuncInvoker1< SerializedDataOverrideRange_t3A1FFF9457378F017DD8F445C7AF421B9AB65014, int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_0, L_1);
		return L_2;
	}
}
// Method Definition Index: 10566
// Method Definition Index: 10567
// Method Definition Index: 10568
// Method Definition Index: 10569
// Method Definition Index: 10570
// Method Definition Index: 10571
// Method Definition Index: 10572
// Method Definition Index: 10573
// Method Definition Index: 10574
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlyCollection_1_System_Collections_ICollection_CopyTo_m4B1D1EE969DA4149AD5C2A3AFE1AD8A7744D6156 (ReadOnlyCollection_1_t0A65BF0F900AF63819F1C26D6E71BFE75180183D* __this, RuntimeArray* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(Type_t_StaticInit);
	//<source_info:<no-source>:1>
	SerializedDataOverrideRangeU5BU5D_t88081D15A1E9C308C93F1BBA4820D764A8DAC24F* V_0 = NULL;
	Type_t* V_1 = NULL;
	Type_t* V_2 = NULL;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_3 = NULL;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		RuntimeArray* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC(3, NULL);
	}

IL_0009:
	{
		RuntimeArray* L_1 = ___0_array;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = il2cpp_codegen_array_get_rank(L_1);
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_0018;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA(7, NULL);
	}

IL_0018:
	{
		RuntimeArray* L_3 = ___0_array;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(L_3, 0, NULL);
		if (!L_4)
		{
			goto IL_0027;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA(6, NULL);
	}

IL_0027:
	{
		int32_t L_5 = ___1_index;
		if ((((int32_t)L_5) >= ((int32_t)0)))
		{
			goto IL_0030;
		}
	}
	{
		ThrowHelper_ThrowIndexArgumentOutOfRange_NeedNonNegNumException_m57AAB1E093F20BFC64BDDBD90FB5B592F582B82F(NULL);
	}

IL_0030:
	{
		RuntimeArray* L_6 = ___0_array;
		NullCheck(L_6);
		int32_t L_7;
		L_7 = il2cpp_codegen_array_get_length(L_6);
		int32_t L_8 = ___1_index;
		int32_t L_9;
		L_9 = ReadOnlyCollection_1_get_Count_mA8F15C9AC8C599E164CB30A8C966CB6B8DF9D2EE(__this, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 10));
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_7, L_8))) >= ((int32_t)L_9)))
		{
			goto IL_0046;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA(5, NULL);
	}

IL_0046:
	{
		RuntimeArray* L_10 = ___0_array;
		V_0 = ((SerializedDataOverrideRangeU5BU5D_t88081D15A1E9C308C93F1BBA4820D764A8DAC24F*)IsInstSealed((RuntimeObject*)L_10, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 11)));
		SerializedDataOverrideRangeU5BU5D_t88081D15A1E9C308C93F1BBA4820D764A8DAC24F* L_11 = V_0;
		if (!L_11)
		{
			goto IL_005e;
		}
	}
	{
		RuntimeObject* L_12 = __this->___list;
		SerializedDataOverrideRangeU5BU5D_t88081D15A1E9C308C93F1BBA4820D764A8DAC24F* L_13 = V_0;
		int32_t L_14 = ___1_index;
		NullCheck(L_12);
		InterfaceActionInvoker2< SerializedDataOverrideRangeU5BU5D_t88081D15A1E9C308C93F1BBA4820D764A8DAC24F*, int32_t >::Invoke(5, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 0), L_12, L_13, L_14);
		return;
	}

IL_005e:
	{
		RuntimeArray* L_15 = ___0_array;
		NullCheck(L_15);
		Type_t* L_16;
		L_16 = il2cpp_codegen_object_get_type(L_15);
		NullCheck(L_16);
		Type_t* L_17;
		L_17 = VirtualFuncInvoker0< Type_t* >::Invoke(46, L_16);
		V_1 = L_17;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_18 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(il2cpp_codegen_method_rgctx(method), 12)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_19;
		L_19 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_18, NULL);
		V_2 = L_19;
		Type_t* L_20 = V_1;
		Type_t* L_21 = V_2;
		NullCheck(L_20);
		bool L_22;
		L_22 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(22, L_20, L_21);
		if (L_22)
		{
			goto IL_008c;
		}
	}
	{
		Type_t* L_23 = V_2;
		Type_t* L_24 = V_1;
		NullCheck(L_23);
		bool L_25;
		L_25 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(22, L_23, L_24);
		if (L_25)
		{
			goto IL_008c;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58(NULL);
	}

IL_008c:
	{
		RuntimeArray* L_26 = ___0_array;
		V_3 = ((ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)IsInst((RuntimeObject*)L_26, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_27 = V_3;
		if (L_27)
		{
			goto IL_009b;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58(NULL);
	}

IL_009b:
	{
		RuntimeObject* L_28 = __this->___list;
		NullCheck(L_28);
		int32_t L_29;
		L_29 = InterfaceFuncInvoker0< int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 0), L_28);
		V_4 = L_29;
	}
	try
	{
		{
			V_5 = 0;
			goto IL_00cd_1;
		}

IL_00ad_1:
		{
			ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_30 = V_3;
			int32_t L_31 = ___1_index;
			int32_t L_32 = L_31;
			___1_index = ((int32_t)il2cpp_codegen_add(L_32, 1));
			RuntimeObject* L_33 = __this->___list;
			int32_t L_34 = V_5;
			NullCheck(L_33);
			SerializedDataOverrideRange_t3A1FFF9457378F017DD8F445C7AF421B9AB65014 L_35;
			L_35 = InterfaceFuncInvoker1< SerializedDataOverrideRange_t3A1FFF9457378F017DD8F445C7AF421B9AB65014, int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_33, L_34);
			SerializedDataOverrideRange_t3A1FFF9457378F017DD8F445C7AF421B9AB65014 L_36 = L_35;
			RuntimeObject* L_37 = Box(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4), &L_36);
			NullCheck(L_30);
			ArrayElementTypeCheck (L_30, L_37);
			(L_30)->SetAt(static_cast<il2cpp_array_size_t>(L_32), (RuntimeObject*)L_37);
			int32_t L_38 = V_5;
			V_5 = ((int32_t)il2cpp_codegen_add(L_38, 1));
		}

IL_00cd_1:
		{
			int32_t L_39 = V_5;
			int32_t L_40 = V_4;
			if ((((int32_t)L_39) < ((int32_t)L_40)))
			{
				goto IL_00ad_1;
			}
		}
		{
			goto IL_00dd;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_00d5;
		}
		throw e;
	}

CATCH_00d5:
	{
		ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1* L_41 = ((ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1*)IL2CPP_GET_ACTIVE_EXCEPTION(ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1*));;
		ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58(NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_00dd;
	}

IL_00dd:
	{
		return;
	}
}
// Method Definition Index: 10575
// Method Definition Index: 10576
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ReadOnlyCollection_1_System_Collections_IList_get_Item_mBD747B15706FB1A93492D812131BE73E4365E30F (ReadOnlyCollection_1_t0A65BF0F900AF63819F1C26D6E71BFE75180183D* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		int32_t L_1 = ___0_index;
		NullCheck(L_0);
		SerializedDataOverrideRange_t3A1FFF9457378F017DD8F445C7AF421B9AB65014 L_2;
		L_2 = InterfaceFuncInvoker1< SerializedDataOverrideRange_t3A1FFF9457378F017DD8F445C7AF421B9AB65014, int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_0, L_1);
		SerializedDataOverrideRange_t3A1FFF9457378F017DD8F445C7AF421B9AB65014 L_3 = L_2;
		RuntimeObject* L_4 = Box(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4), &L_3);
		return L_4;
	}
}
// Method Definition Index: 10577
// Method Definition Index: 10578
// Method Definition Index: 10579
// Method Definition Index: 10580
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_IsCompatibleObject_m5ED4BCD5F3168B64D782C291387E833318C7D50C (RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	//<source_info:<no-source>:1>
	SerializedDataOverrideRange_t3A1FFF9457378F017DD8F445C7AF421B9AB65014 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		RuntimeObject* L_0 = ___0_value;
		if (((RuntimeObject*)IsInstSealed((RuntimeObject*)L_0, il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 4))))
		{
			goto IL_001f;
		}
	}
	{
		RuntimeObject* L_1 = ___0_value;
		if (L_1)
		{
			goto IL_001d;
		}
	}
	{
		il2cpp_codegen_initobj((&V_0), sizeof(SerializedDataOverrideRange_t3A1FFF9457378F017DD8F445C7AF421B9AB65014));
		SerializedDataOverrideRange_t3A1FFF9457378F017DD8F445C7AF421B9AB65014 L_2 = V_0;
		return false;
	}

IL_001d:
	{
		return (bool)0;
	}

IL_001f:
	{
		return (bool)1;
	}
}
// Method Definition Index: 10581
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_System_Collections_IList_Contains_m083AE3062939CAB147BF39938FB64657D62E9637 (ReadOnlyCollection_1_t0A65BF0F900AF63819F1C26D6E71BFE75180183D* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = ___0_value;
		bool L_1;
		L_1 = ReadOnlyCollection_1_IsCompatibleObject_m5ED4BCD5F3168B64D782C291387E833318C7D50C(L_0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 13));
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject* L_2 = ___0_value;
		bool L_3;
		L_3 = ReadOnlyCollection_1_Contains_m88C6F200CD92A99A7749F39BE082CDA1F67CAAEB(__this, ((*(SerializedDataOverrideRange_t3A1FFF9457378F017DD8F445C7AF421B9AB65014*)UnBox(L_2, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4)))), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 14));
		return L_3;
	}

IL_0015:
	{
		return (bool)0;
	}
}
// Method Definition Index: 10582
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_System_Collections_IList_IndexOf_mDFE97C615647D74A0499FCBA7E17646166B88A16 (ReadOnlyCollection_1_t0A65BF0F900AF63819F1C26D6E71BFE75180183D* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = ___0_value;
		bool L_1;
		L_1 = ReadOnlyCollection_1_IsCompatibleObject_m5ED4BCD5F3168B64D782C291387E833318C7D50C(L_0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 13));
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject* L_2 = ___0_value;
		int32_t L_3;
		L_3 = ReadOnlyCollection_1_IndexOf_mA86F064006A9C37FA35D6D9E63BA1E3DE93D7FB6(__this, ((*(SerializedDataOverrideRange_t3A1FFF9457378F017DD8F445C7AF421B9AB65014*)UnBox(L_2, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4)))), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 15));
		return L_3;
	}

IL_0015:
	{
		return (-1);
	}
}
// Method Definition Index: 10583
// Method Definition Index: 10584
// Method Definition Index: 10585
#ifdef __clang__
#pragma clang diagnostic pop
#endif
