#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <cstring>
#include <string.h>
#include <stdio.h>
#include <cmath>
#include <limits>
#include <assert.h>
#include <stdint.h>

#include "il2cpp-class-internals.h"
#include "codegen/il2cpp-codegen.h"
#include "il2cpp-object-internals.h"

template <typename R>
struct VirtFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R, typename T1>
struct VirtFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename R, typename T1, typename T2>
struct VirtFuncInvoker2
{
	typedef R (*Func)(void*, T1, T2, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
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
struct InterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};

// System.ArgumentException
struct ArgumentException_t132251570;
// System.ArgumentNullException
struct ArgumentNullException_t1615371798;
// System.ArgumentOutOfRangeException
struct ArgumentOutOfRangeException_t777629997;
// System.AsyncCallback
struct AsyncCallback_t3962456242;
// System.Boolean[]
struct BooleanU5BU5D_t2897418192;
// System.Byte
struct Byte_t1134296376;
// System.Byte[]
struct ByteU5BU5D_t4116647657;
// System.Char[]
struct CharU5BU5D_t3528271667;
// System.Collections.DictionaryEntry[]
struct DictionaryEntryU5BU5D_t4217117203;
// System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Int32,System.Collections.DictionaryEntry>
struct Transform_1_t1750446691;
// System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Int32,System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>
struct Transform_1_t1027527961;
// System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Int32,System.Object>
struct Transform_1_t1706577217;
// System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Object,System.Collections.DictionaryEntry>
struct Transform_1_t4209139644;
// System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct Transform_1_t3615381325;
// System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Object,System.Object>
struct Transform_1_t4165270170;
// System.Collections.Generic.Dictionary`2<System.Object,System.Int32>
struct Dictionary_2_t3384741;
// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
struct Dictionary_2_t132545152;
// System.Collections.Generic.IEnumerable`1<System.Object>
struct IEnumerable_1_t2059959053;
// System.Collections.Generic.IEqualityComparer`1<System.Object>
struct IEqualityComparer_1_t892470886;
// System.Collections.Generic.IList`1<System.Reflection.CustomAttributeNamedArgument>
struct IList_1_t2103185493;
// System.Collections.Generic.IList`1<System.Reflection.CustomAttributeTypedArgument>
struct IList_1_t243502644;
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>[]
struct KeyValuePair_2U5BU5D_t1954543557;
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>[]
struct KeyValuePair_2U5BU5D_t118269214;
// System.Collections.Generic.Link[]
struct LinkU5BU5D_t964245573;
// System.Collections.IDictionary
struct IDictionary_t1363984059;
// System.Converter`2<System.Object,System.Object>
struct Converter_2_t2442480487;
// System.DelegateData
struct DelegateData_t1677132599;
// System.Double
struct Double_t594665363;
// System.Exception
struct Exception_t;
// System.Func`2<System.Object,System.Boolean>
struct Func_2_t3759279471;
// System.IAsyncResult
struct IAsyncResult_t767004451;
// System.IO.Stream
struct Stream_t1273022909;
// System.Int32[]
struct Int32U5BU5D_t385246372;
// System.IntPtr[]
struct IntPtrU5BU5D_t4013366056;
// System.InvalidOperationException
struct InvalidOperationException_t56020091;
// System.Object[]
struct ObjectU5BU5D_t2843939325;
// System.Predicate`1<System.Object>
struct Predicate_1_t3905400288;
// System.Reflection.ConstructorInfo
struct ConstructorInfo_t5769829;
// System.Reflection.CustomAttributeNamedArgument[]
struct CustomAttributeNamedArgumentU5BU5D_t3710464795;
// System.Reflection.CustomAttributeTypedArgument[]
struct CustomAttributeTypedArgumentU5BU5D_t1465843424;
// System.Reflection.MemberFilter
struct MemberFilter_t426314064;
// System.Reflection.MemberInfo
struct MemberInfo_t;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t950877179;
// System.String
struct String_t;
// System.String[]
struct StringU5BU5D_t1281789340;
// System.Threading.ManualResetEvent
struct ManualResetEvent_t451242010;
// System.Threading.SendOrPostCallback
struct SendOrPostCallback_t2750080073;
// System.Type
struct Type_t;
// System.Type[]
struct TypeU5BU5D_t3940880105;
// System.UInt16
struct UInt16_t2177724958;
// System.Void
struct Void_t1185182177;
// UnityEngine.Camera
struct Camera_t4157153871;
// UnityEngine.Component
struct Component_t1923634451;
// UnityEngine.DisallowMultipleComponent[]
struct DisallowMultipleComponentU5BU5D_t3936143868;
// UnityEngine.Events.UnityAction
struct UnityAction_t3245792599;
// UnityEngine.ExecuteInEditMode[]
struct ExecuteInEditModeU5BU5D_t3239458680;
// UnityEngine.Experimental.LowLevel.PlayerLoopSystem/UpdateFunction
struct UpdateFunction_t377278577;
// UnityEngine.Experimental.LowLevel.PlayerLoopSystem[]
struct PlayerLoopSystemU5BU5D_t1150299252;
// UnityEngine.GameObject
struct GameObject_t1113636619;
// UnityEngine.Object
struct Object_t631007953;
// UnityEngine.Playables.PlayableBinding/CreateOutputMethod
struct CreateOutputMethod_t2301811773;
// UnityEngine.Playables.PlayableBinding[]
struct PlayableBindingU5BU5D_t829358056;
// UnityEngine.RequireComponent[]
struct RequireComponentU5BU5D_t2245623724;
// UnityEngine.ScriptableObject
struct ScriptableObject_t2528358522;

extern RuntimeClass* ArgumentException_t132251570_il2cpp_TypeInfo_var;
extern RuntimeClass* ArgumentNullException_t1615371798_il2cpp_TypeInfo_var;
extern RuntimeClass* ArgumentOutOfRangeException_t777629997_il2cpp_TypeInfo_var;
extern RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
extern RuntimeClass* IDisposable_t3640265483_il2cpp_TypeInfo_var;
extern RuntimeClass* IEnumerator_t1853284238_il2cpp_TypeInfo_var;
extern RuntimeClass* InvalidOperationException_t56020091_il2cpp_TypeInfo_var;
extern RuntimeClass* ObjectU5BU5D_t2843939325_il2cpp_TypeInfo_var;
extern RuntimeClass* Type_t_il2cpp_TypeInfo_var;
extern String_t* _stringLiteral1492106003;
extern String_t* _stringLiteral273595399;
extern String_t* _stringLiteral4007973390;
extern String_t* _stringLiteral461028519;
extern String_t* _stringLiteral797640427;
extern String_t* _stringLiteral879148213;
extern const RuntimeMethod* Array_ConvertAll_TisRuntimeObject_TisRuntimeObject_m2417852296_RuntimeMethod_var;
extern const RuntimeMethod* Array_FindAll_TisRuntimeObject_m3566631088_RuntimeMethod_var;
extern const RuntimeMethod* Array_FindLast_TisRuntimeObject_m1088586648_RuntimeMethod_var;
extern const RuntimeMethod* Array_Find_TisRuntimeObject_m2705709394_RuntimeMethod_var;
extern const RuntimeMethod* Array_InternalArray__get_Item_TisBoolean_t97287965_m1407010309_RuntimeMethod_var;
extern const RuntimeMethod* Array_InternalArray__get_Item_TisByte_t1134296376_m3566214066_RuntimeMethod_var;
extern const RuntimeMethod* Array_InternalArray__get_Item_TisChar_t3634460470_m324132692_RuntimeMethod_var;
extern const RuntimeMethod* Array_InternalArray__get_Item_TisClientCertificateType_t1004704908_m2297379651_RuntimeMethod_var;
extern const RuntimeMethod* Array_InternalArray__get_Item_TisContactPoint_t3758755253_m2489897608_RuntimeMethod_var;
extern const RuntimeMethod* Array_InternalArray__get_Item_TisCustomAttributeNamedArgument_t287865710_m2282658220_RuntimeMethod_var;
extern const RuntimeMethod* Array_InternalArray__get_Item_TisCustomAttributeTypedArgument_t2723150157_m2639399822_RuntimeMethod_var;
extern const RuntimeMethod* Array_InternalArray__get_Item_TisDateTime_t3738529785_m623181444_RuntimeMethod_var;
extern const RuntimeMethod* Array_InternalArray__get_Item_TisDecimal_t2948259380_m3511003792_RuntimeMethod_var;
extern const RuntimeMethod* Array_InternalArray__get_Item_TisDictionaryEntry_t3123975638_m479537688_RuntimeMethod_var;
extern const RuntimeMethod* Array_InternalArray__get_Item_TisDouble_t594665363_m850827605_RuntimeMethod_var;
extern const RuntimeMethod* Array_InternalArray__get_Item_TisGcAchievementData_t675222246_m2680268485_RuntimeMethod_var;
extern const RuntimeMethod* Array_InternalArray__get_Item_TisGcScoreData_t2125309831_m174676143_RuntimeMethod_var;
extern const RuntimeMethod* Array_InternalArray__get_Item_TisHitInfo_t3229609740_m2260995172_RuntimeMethod_var;
extern const RuntimeMethod* Array_InternalArray__get_Item_TisILTokenInfo_t2325775114_m3110830457_RuntimeMethod_var;
extern const RuntimeMethod* Array_InternalArray__get_Item_TisInt16_t2552820387_m76930473_RuntimeMethod_var;
extern const RuntimeMethod* Array_InternalArray__get_Item_TisInt32_t2950945753_m714868479_RuntimeMethod_var;
extern const RuntimeMethod* Array_InternalArray__get_Item_TisInt64_t3736567304_m3562990826_RuntimeMethod_var;
extern const RuntimeMethod* Array_InternalArray__get_Item_TisIntPtr_t_m784054003_RuntimeMethod_var;
extern const RuntimeMethod* Array_InternalArray__get_Item_TisKeyValuePair_2_t2401056908_m3647027688_RuntimeMethod_var;
extern const RuntimeMethod* Array_InternalArray__get_Item_TisKeyValuePair_2_t2530217319_m2886833132_RuntimeMethod_var;
extern const RuntimeMethod* Array_InternalArray__get_Item_TisKeyValuePair_2_t3842366416_m3937535230_RuntimeMethod_var;
extern const RuntimeMethod* Array_InternalArray__get_Item_TisKeyframe_t4206410242_m27698365_RuntimeMethod_var;
extern const RuntimeMethod* Array_InternalArray__get_Item_TisLabelData_t360167391_m1054702781_RuntimeMethod_var;
extern const RuntimeMethod* Array_InternalArray__get_Item_TisLabelFixup_t858502054_m3276643490_RuntimeMethod_var;
extern const RuntimeMethod* Array_InternalArray__get_Item_TisLink_t544317964_m1669566993_RuntimeMethod_var;
extern const RuntimeMethod* Array_InternalArray__get_Item_TisMark_t3471605523_m3397473850_RuntimeMethod_var;
extern const RuntimeMethod* Array_InternalArray__get_Item_TisMonoResource_t4103430009_m2937222811_RuntimeMethod_var;
extern const RuntimeMethod* Array_InternalArray__get_Item_TisMonoWin32Resource_t1904229483_m513901999_RuntimeMethod_var;
extern const RuntimeMethod* Array_InternalArray__get_Item_TisOrderBlock_t1585977831_m2406385050_RuntimeMethod_var;
extern const RuntimeMethod* Array_InternalArray__get_Item_TisParameterModifier_t1461694466_m29553316_RuntimeMethod_var;
extern const RuntimeMethod* Array_InternalArray__get_Item_TisPlayableBinding_t354260709_m3837494573_RuntimeMethod_var;
extern const RuntimeMethod* Array_InternalArray__get_Item_TisPlayerLoopSystem_t105772105_m3446275388_RuntimeMethod_var;
extern const RuntimeMethod* Array_InternalArray__get_Item_TisRaycastHit_t1056001966_m3352067444_RuntimeMethod_var;
extern const RuntimeMethod* Array_InternalArray__get_Item_TisRefEmitPermissionSet_t484390987_m1505876205_RuntimeMethod_var;
extern const RuntimeMethod* Array_InternalArray__get_Item_TisResourceCacheItem_t51292791_m1306056717_RuntimeMethod_var;
extern const RuntimeMethod* Array_InternalArray__get_Item_TisResourceInfo_t2872965302_m3865610257_RuntimeMethod_var;
extern const RuntimeMethod* Array_InternalArray__get_Item_TisRuntimeObject_m3347010206_RuntimeMethod_var;
extern const RuntimeMethod* Array_InternalArray__get_Item_TisSByte_t1669577662_m2349608172_RuntimeMethod_var;
extern const RuntimeMethod* Array_InternalArray__get_Item_TisSingle_t1397266774_m1672589487_RuntimeMethod_var;
extern const RuntimeMethod* Array_InternalArray__get_Item_TisSlot_t384495010_m2861978404_RuntimeMethod_var;
extern const RuntimeMethod* Array_InternalArray__get_Item_TisSlot_t3975888750_m905303097_RuntimeMethod_var;
extern const RuntimeMethod* Array_InternalArray__get_Item_TisTableRange_t3332867892_m1483480711_RuntimeMethod_var;
extern const RuntimeMethod* Array_InternalArray__get_Item_TisTimeSpan_t881159249_m1885583191_RuntimeMethod_var;
extern const RuntimeMethod* Array_InternalArray__get_Item_TisTypeTag_t3541821701_m4208350471_RuntimeMethod_var;
extern const RuntimeMethod* Array_InternalArray__get_Item_TisUInt16_t2177724958_m3601205466_RuntimeMethod_var;
extern const RuntimeMethod* Array_InternalArray__get_Item_TisUInt32_t2560061978_m1955195035_RuntimeMethod_var;
extern const RuntimeMethod* Array_InternalArray__get_Item_TisUInt64_t4134040092_m129291315_RuntimeMethod_var;
extern const RuntimeMethod* Array_InternalArray__get_Item_TisUriScheme_t722425697_m2816273040_RuntimeMethod_var;
extern const RuntimeMethod* Array_InternalArray__get_Item_TisWorkRequest_t1354518612_m2694410850_RuntimeMethod_var;
extern const RuntimeMethod* Array_InternalArray__get_Item_TisX509ChainStatus_t133602714_m2237651489_RuntimeMethod_var;
extern const RuntimeMethod* BaseInvokableCall_ThrowOnInvalidArg_TisBoolean_t97287965_m3019671566_RuntimeMethod_var;
extern const RuntimeMethod* BaseInvokableCall_ThrowOnInvalidArg_TisInt32_t2950945753_m635860201_RuntimeMethod_var;
extern const RuntimeMethod* BaseInvokableCall_ThrowOnInvalidArg_TisRuntimeObject_m2266633109_RuntimeMethod_var;
extern const RuntimeMethod* BaseInvokableCall_ThrowOnInvalidArg_TisSingle_t1397266774_m3110598205_RuntimeMethod_var;
extern const RuntimeMethod* Dictionary_2_Do_ICollectionCopyTo_TisKeyValuePair_2_t2401056908_m1169495264_RuntimeMethod_var;
extern const RuntimeMethod* Dictionary_2_Do_ICollectionCopyTo_TisKeyValuePair_2_t2530217319_m1439704807_RuntimeMethod_var;
extern const RuntimeMethod* Dictionary_2_Do_ICollectionCopyTo_TisRuntimeObject_m1362949338_RuntimeMethod_var;
extern const RuntimeMethod* Dictionary_2_Do_ICollectionCopyTo_TisRuntimeObject_m3942192587_RuntimeMethod_var;
extern const RuntimeMethod* Enumerable_Single_TisRuntimeObject_m1146889774_RuntimeMethod_var;
extern const uint32_t Array_ConvertAll_TisRuntimeObject_TisRuntimeObject_m2417852296_MetadataUsageId;
extern const uint32_t Array_FindAll_TisRuntimeObject_m3566631088_MetadataUsageId;
extern const uint32_t Array_FindLast_TisRuntimeObject_m1088586648_MetadataUsageId;
extern const uint32_t Array_Find_TisRuntimeObject_m2705709394_MetadataUsageId;
extern const uint32_t Array_InternalArray__get_Item_TisBoolean_t97287965_m1407010309_MetadataUsageId;
extern const uint32_t Array_InternalArray__get_Item_TisByte_t1134296376_m3566214066_MetadataUsageId;
extern const uint32_t Array_InternalArray__get_Item_TisChar_t3634460470_m324132692_MetadataUsageId;
extern const uint32_t Array_InternalArray__get_Item_TisClientCertificateType_t1004704908_m2297379651_MetadataUsageId;
extern const uint32_t Array_InternalArray__get_Item_TisContactPoint_t3758755253_m2489897608_MetadataUsageId;
extern const uint32_t Array_InternalArray__get_Item_TisCustomAttributeNamedArgument_t287865710_m2282658220_MetadataUsageId;
extern const uint32_t Array_InternalArray__get_Item_TisCustomAttributeTypedArgument_t2723150157_m2639399822_MetadataUsageId;
extern const uint32_t Array_InternalArray__get_Item_TisDateTime_t3738529785_m623181444_MetadataUsageId;
extern const uint32_t Array_InternalArray__get_Item_TisDecimal_t2948259380_m3511003792_MetadataUsageId;
extern const uint32_t Array_InternalArray__get_Item_TisDictionaryEntry_t3123975638_m479537688_MetadataUsageId;
extern const uint32_t Array_InternalArray__get_Item_TisDouble_t594665363_m850827605_MetadataUsageId;
extern const uint32_t Array_InternalArray__get_Item_TisGcAchievementData_t675222246_m2680268485_MetadataUsageId;
extern const uint32_t Array_InternalArray__get_Item_TisGcScoreData_t2125309831_m174676143_MetadataUsageId;
extern const uint32_t Array_InternalArray__get_Item_TisHitInfo_t3229609740_m2260995172_MetadataUsageId;
extern const uint32_t Array_InternalArray__get_Item_TisILTokenInfo_t2325775114_m3110830457_MetadataUsageId;
extern const uint32_t Array_InternalArray__get_Item_TisInt16_t2552820387_m76930473_MetadataUsageId;
extern const uint32_t Array_InternalArray__get_Item_TisInt32_t2950945753_m714868479_MetadataUsageId;
extern const uint32_t Array_InternalArray__get_Item_TisInt64_t3736567304_m3562990826_MetadataUsageId;
extern const uint32_t Array_InternalArray__get_Item_TisIntPtr_t_m784054003_MetadataUsageId;
extern const uint32_t Array_InternalArray__get_Item_TisKeyValuePair_2_t2401056908_m3647027688_MetadataUsageId;
extern const uint32_t Array_InternalArray__get_Item_TisKeyValuePair_2_t2530217319_m2886833132_MetadataUsageId;
extern const uint32_t Array_InternalArray__get_Item_TisKeyValuePair_2_t3842366416_m3937535230_MetadataUsageId;
extern const uint32_t Array_InternalArray__get_Item_TisKeyframe_t4206410242_m27698365_MetadataUsageId;
extern const uint32_t Array_InternalArray__get_Item_TisLabelData_t360167391_m1054702781_MetadataUsageId;
extern const uint32_t Array_InternalArray__get_Item_TisLabelFixup_t858502054_m3276643490_MetadataUsageId;
extern const uint32_t Array_InternalArray__get_Item_TisLink_t544317964_m1669566993_MetadataUsageId;
extern const uint32_t Array_InternalArray__get_Item_TisMark_t3471605523_m3397473850_MetadataUsageId;
extern const uint32_t Array_InternalArray__get_Item_TisMonoResource_t4103430009_m2937222811_MetadataUsageId;
extern const uint32_t Array_InternalArray__get_Item_TisMonoWin32Resource_t1904229483_m513901999_MetadataUsageId;
extern const uint32_t Array_InternalArray__get_Item_TisOrderBlock_t1585977831_m2406385050_MetadataUsageId;
extern const uint32_t Array_InternalArray__get_Item_TisParameterModifier_t1461694466_m29553316_MetadataUsageId;
extern const uint32_t Array_InternalArray__get_Item_TisPlayableBinding_t354260709_m3837494573_MetadataUsageId;
extern const uint32_t Array_InternalArray__get_Item_TisPlayerLoopSystem_t105772105_m3446275388_MetadataUsageId;
extern const uint32_t Array_InternalArray__get_Item_TisRaycastHit_t1056001966_m3352067444_MetadataUsageId;
extern const uint32_t Array_InternalArray__get_Item_TisRefEmitPermissionSet_t484390987_m1505876205_MetadataUsageId;
extern const uint32_t Array_InternalArray__get_Item_TisResourceCacheItem_t51292791_m1306056717_MetadataUsageId;
extern const uint32_t Array_InternalArray__get_Item_TisResourceInfo_t2872965302_m3865610257_MetadataUsageId;
extern const uint32_t Array_InternalArray__get_Item_TisRuntimeObject_m3347010206_MetadataUsageId;
extern const uint32_t Array_InternalArray__get_Item_TisSByte_t1669577662_m2349608172_MetadataUsageId;
extern const uint32_t Array_InternalArray__get_Item_TisSingle_t1397266774_m1672589487_MetadataUsageId;
extern const uint32_t Array_InternalArray__get_Item_TisSlot_t384495010_m2861978404_MetadataUsageId;
extern const uint32_t Array_InternalArray__get_Item_TisSlot_t3975888750_m905303097_MetadataUsageId;
extern const uint32_t Array_InternalArray__get_Item_TisTableRange_t3332867892_m1483480711_MetadataUsageId;
extern const uint32_t Array_InternalArray__get_Item_TisTimeSpan_t881159249_m1885583191_MetadataUsageId;
extern const uint32_t Array_InternalArray__get_Item_TisTypeTag_t3541821701_m4208350471_MetadataUsageId;
extern const uint32_t Array_InternalArray__get_Item_TisUInt16_t2177724958_m3601205466_MetadataUsageId;
extern const uint32_t Array_InternalArray__get_Item_TisUInt32_t2560061978_m1955195035_MetadataUsageId;
extern const uint32_t Array_InternalArray__get_Item_TisUInt64_t4134040092_m129291315_MetadataUsageId;
extern const uint32_t Array_InternalArray__get_Item_TisUriScheme_t722425697_m2816273040_MetadataUsageId;
extern const uint32_t Array_InternalArray__get_Item_TisWorkRequest_t1354518612_m2694410850_MetadataUsageId;
extern const uint32_t Array_InternalArray__get_Item_TisX509ChainStatus_t133602714_m2237651489_MetadataUsageId;
extern const uint32_t AttributeHelperEngine_GetCustomAttributeOfType_TisRuntimeObject_m429013101_MetadataUsageId;
extern const uint32_t BaseInvokableCall_ThrowOnInvalidArg_TisBoolean_t97287965_m3019671566_MetadataUsageId;
extern const uint32_t BaseInvokableCall_ThrowOnInvalidArg_TisInt32_t2950945753_m635860201_MetadataUsageId;
extern const uint32_t BaseInvokableCall_ThrowOnInvalidArg_TisRuntimeObject_m2266633109_MetadataUsageId;
extern const uint32_t BaseInvokableCall_ThrowOnInvalidArg_TisSingle_t1397266774_m3110598205_MetadataUsageId;
extern const uint32_t Component_GetComponent_TisRuntimeObject_m2906321015_MetadataUsageId;
extern const uint32_t Dictionary_2_Do_ICollectionCopyTo_TisKeyValuePair_2_t2401056908_m1169495264_MetadataUsageId;
extern const uint32_t Dictionary_2_Do_ICollectionCopyTo_TisKeyValuePair_2_t2530217319_m1439704807_MetadataUsageId;
extern const uint32_t Dictionary_2_Do_ICollectionCopyTo_TisRuntimeObject_m1362949338_MetadataUsageId;
extern const uint32_t Dictionary_2_Do_ICollectionCopyTo_TisRuntimeObject_m3942192587_MetadataUsageId;
extern const uint32_t Enumerable_Single_TisRuntimeObject_m1146889774_MetadataUsageId;
extern const uint32_t GameObject_GetComponent_TisRuntimeObject_m3920941149_MetadataUsageId;
extern const uint32_t ScriptableObject_CreateInstance_TisRuntimeObject_m1552711675_MetadataUsageId;
struct Object_t631007953_marshaled_com;
struct PlayerLoopSystem_t105772105_marshaled_com;
struct PlayerLoopSystem_t105772105_marshaled_pinvoke;

struct DictionaryEntryU5BU5D_t4217117203;
struct KeyValuePair_2U5BU5D_t1954543557;
struct KeyValuePair_2U5BU5D_t118269214;
struct LinkU5BU5D_t964245573;
struct Int32U5BU5D_t385246372;
struct ObjectU5BU5D_t2843939325;
struct CustomAttributeNamedArgumentU5BU5D_t3710464795;
struct CustomAttributeTypedArgumentU5BU5D_t1465843424;


#ifndef RUNTIMEOBJECT_H
#define RUNTIMEOBJECT_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Object

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RUNTIMEOBJECT_H
struct Il2CppArrayBounds;
#ifndef RUNTIMEARRAY_H
#define RUNTIMEARRAY_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Array

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RUNTIMEARRAY_H
#ifndef DICTIONARY_2_T3384741_H
#define DICTIONARY_2_T3384741_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.Dictionary`2<System.Object,System.Int32>
struct  Dictionary_2_t3384741  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::table
	Int32U5BU5D_t385246372* ___table_4;
	// System.Collections.Generic.Link[] System.Collections.Generic.Dictionary`2::linkSlots
	LinkU5BU5D_t964245573* ___linkSlots_5;
	// TKey[] System.Collections.Generic.Dictionary`2::keySlots
	ObjectU5BU5D_t2843939325* ___keySlots_6;
	// TValue[] System.Collections.Generic.Dictionary`2::valueSlots
	Int32U5BU5D_t385246372* ___valueSlots_7;
	// System.Int32 System.Collections.Generic.Dictionary`2::touchedSlots
	int32_t ___touchedSlots_8;
	// System.Int32 System.Collections.Generic.Dictionary`2::emptySlot
	int32_t ___emptySlot_9;
	// System.Int32 System.Collections.Generic.Dictionary`2::count
	int32_t ___count_10;
	// System.Int32 System.Collections.Generic.Dictionary`2::threshold
	int32_t ___threshold_11;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::hcp
	RuntimeObject* ___hcp_12;
	// System.Runtime.Serialization.SerializationInfo System.Collections.Generic.Dictionary`2::serialization_info
	SerializationInfo_t950877179 * ___serialization_info_13;
	// System.Int32 System.Collections.Generic.Dictionary`2::generation
	int32_t ___generation_14;

public:
	inline static int32_t get_offset_of_table_4() { return static_cast<int32_t>(offsetof(Dictionary_2_t3384741, ___table_4)); }
	inline Int32U5BU5D_t385246372* get_table_4() const { return ___table_4; }
	inline Int32U5BU5D_t385246372** get_address_of_table_4() { return &___table_4; }
	inline void set_table_4(Int32U5BU5D_t385246372* value)
	{
		___table_4 = value;
		Il2CppCodeGenWriteBarrier((&___table_4), value);
	}

	inline static int32_t get_offset_of_linkSlots_5() { return static_cast<int32_t>(offsetof(Dictionary_2_t3384741, ___linkSlots_5)); }
	inline LinkU5BU5D_t964245573* get_linkSlots_5() const { return ___linkSlots_5; }
	inline LinkU5BU5D_t964245573** get_address_of_linkSlots_5() { return &___linkSlots_5; }
	inline void set_linkSlots_5(LinkU5BU5D_t964245573* value)
	{
		___linkSlots_5 = value;
		Il2CppCodeGenWriteBarrier((&___linkSlots_5), value);
	}

	inline static int32_t get_offset_of_keySlots_6() { return static_cast<int32_t>(offsetof(Dictionary_2_t3384741, ___keySlots_6)); }
	inline ObjectU5BU5D_t2843939325* get_keySlots_6() const { return ___keySlots_6; }
	inline ObjectU5BU5D_t2843939325** get_address_of_keySlots_6() { return &___keySlots_6; }
	inline void set_keySlots_6(ObjectU5BU5D_t2843939325* value)
	{
		___keySlots_6 = value;
		Il2CppCodeGenWriteBarrier((&___keySlots_6), value);
	}

	inline static int32_t get_offset_of_valueSlots_7() { return static_cast<int32_t>(offsetof(Dictionary_2_t3384741, ___valueSlots_7)); }
	inline Int32U5BU5D_t385246372* get_valueSlots_7() const { return ___valueSlots_7; }
	inline Int32U5BU5D_t385246372** get_address_of_valueSlots_7() { return &___valueSlots_7; }
	inline void set_valueSlots_7(Int32U5BU5D_t385246372* value)
	{
		___valueSlots_7 = value;
		Il2CppCodeGenWriteBarrier((&___valueSlots_7), value);
	}

	inline static int32_t get_offset_of_touchedSlots_8() { return static_cast<int32_t>(offsetof(Dictionary_2_t3384741, ___touchedSlots_8)); }
	inline int32_t get_touchedSlots_8() const { return ___touchedSlots_8; }
	inline int32_t* get_address_of_touchedSlots_8() { return &___touchedSlots_8; }
	inline void set_touchedSlots_8(int32_t value)
	{
		___touchedSlots_8 = value;
	}

	inline static int32_t get_offset_of_emptySlot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_t3384741, ___emptySlot_9)); }
	inline int32_t get_emptySlot_9() const { return ___emptySlot_9; }
	inline int32_t* get_address_of_emptySlot_9() { return &___emptySlot_9; }
	inline void set_emptySlot_9(int32_t value)
	{
		___emptySlot_9 = value;
	}

	inline static int32_t get_offset_of_count_10() { return static_cast<int32_t>(offsetof(Dictionary_2_t3384741, ___count_10)); }
	inline int32_t get_count_10() const { return ___count_10; }
	inline int32_t* get_address_of_count_10() { return &___count_10; }
	inline void set_count_10(int32_t value)
	{
		___count_10 = value;
	}

	inline static int32_t get_offset_of_threshold_11() { return static_cast<int32_t>(offsetof(Dictionary_2_t3384741, ___threshold_11)); }
	inline int32_t get_threshold_11() const { return ___threshold_11; }
	inline int32_t* get_address_of_threshold_11() { return &___threshold_11; }
	inline void set_threshold_11(int32_t value)
	{
		___threshold_11 = value;
	}

	inline static int32_t get_offset_of_hcp_12() { return static_cast<int32_t>(offsetof(Dictionary_2_t3384741, ___hcp_12)); }
	inline RuntimeObject* get_hcp_12() const { return ___hcp_12; }
	inline RuntimeObject** get_address_of_hcp_12() { return &___hcp_12; }
	inline void set_hcp_12(RuntimeObject* value)
	{
		___hcp_12 = value;
		Il2CppCodeGenWriteBarrier((&___hcp_12), value);
	}

	inline static int32_t get_offset_of_serialization_info_13() { return static_cast<int32_t>(offsetof(Dictionary_2_t3384741, ___serialization_info_13)); }
	inline SerializationInfo_t950877179 * get_serialization_info_13() const { return ___serialization_info_13; }
	inline SerializationInfo_t950877179 ** get_address_of_serialization_info_13() { return &___serialization_info_13; }
	inline void set_serialization_info_13(SerializationInfo_t950877179 * value)
	{
		___serialization_info_13 = value;
		Il2CppCodeGenWriteBarrier((&___serialization_info_13), value);
	}

	inline static int32_t get_offset_of_generation_14() { return static_cast<int32_t>(offsetof(Dictionary_2_t3384741, ___generation_14)); }
	inline int32_t get_generation_14() const { return ___generation_14; }
	inline int32_t* get_address_of_generation_14() { return &___generation_14; }
	inline void set_generation_14(int32_t value)
	{
		___generation_14 = value;
	}
};

struct Dictionary_2_t3384741_StaticFields
{
public:
	// System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,System.Collections.DictionaryEntry> System.Collections.Generic.Dictionary`2::<>f__am$cacheB
	Transform_1_t1750446691 * ___U3CU3Ef__amU24cacheB_15;

public:
	inline static int32_t get_offset_of_U3CU3Ef__amU24cacheB_15() { return static_cast<int32_t>(offsetof(Dictionary_2_t3384741_StaticFields, ___U3CU3Ef__amU24cacheB_15)); }
	inline Transform_1_t1750446691 * get_U3CU3Ef__amU24cacheB_15() const { return ___U3CU3Ef__amU24cacheB_15; }
	inline Transform_1_t1750446691 ** get_address_of_U3CU3Ef__amU24cacheB_15() { return &___U3CU3Ef__amU24cacheB_15; }
	inline void set_U3CU3Ef__amU24cacheB_15(Transform_1_t1750446691 * value)
	{
		___U3CU3Ef__amU24cacheB_15 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__amU24cacheB_15), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DICTIONARY_2_T3384741_H
#ifndef DICTIONARY_2_T132545152_H
#define DICTIONARY_2_T132545152_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
struct  Dictionary_2_t132545152  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::table
	Int32U5BU5D_t385246372* ___table_4;
	// System.Collections.Generic.Link[] System.Collections.Generic.Dictionary`2::linkSlots
	LinkU5BU5D_t964245573* ___linkSlots_5;
	// TKey[] System.Collections.Generic.Dictionary`2::keySlots
	ObjectU5BU5D_t2843939325* ___keySlots_6;
	// TValue[] System.Collections.Generic.Dictionary`2::valueSlots
	ObjectU5BU5D_t2843939325* ___valueSlots_7;
	// System.Int32 System.Collections.Generic.Dictionary`2::touchedSlots
	int32_t ___touchedSlots_8;
	// System.Int32 System.Collections.Generic.Dictionary`2::emptySlot
	int32_t ___emptySlot_9;
	// System.Int32 System.Collections.Generic.Dictionary`2::count
	int32_t ___count_10;
	// System.Int32 System.Collections.Generic.Dictionary`2::threshold
	int32_t ___threshold_11;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::hcp
	RuntimeObject* ___hcp_12;
	// System.Runtime.Serialization.SerializationInfo System.Collections.Generic.Dictionary`2::serialization_info
	SerializationInfo_t950877179 * ___serialization_info_13;
	// System.Int32 System.Collections.Generic.Dictionary`2::generation
	int32_t ___generation_14;

public:
	inline static int32_t get_offset_of_table_4() { return static_cast<int32_t>(offsetof(Dictionary_2_t132545152, ___table_4)); }
	inline Int32U5BU5D_t385246372* get_table_4() const { return ___table_4; }
	inline Int32U5BU5D_t385246372** get_address_of_table_4() { return &___table_4; }
	inline void set_table_4(Int32U5BU5D_t385246372* value)
	{
		___table_4 = value;
		Il2CppCodeGenWriteBarrier((&___table_4), value);
	}

	inline static int32_t get_offset_of_linkSlots_5() { return static_cast<int32_t>(offsetof(Dictionary_2_t132545152, ___linkSlots_5)); }
	inline LinkU5BU5D_t964245573* get_linkSlots_5() const { return ___linkSlots_5; }
	inline LinkU5BU5D_t964245573** get_address_of_linkSlots_5() { return &___linkSlots_5; }
	inline void set_linkSlots_5(LinkU5BU5D_t964245573* value)
	{
		___linkSlots_5 = value;
		Il2CppCodeGenWriteBarrier((&___linkSlots_5), value);
	}

	inline static int32_t get_offset_of_keySlots_6() { return static_cast<int32_t>(offsetof(Dictionary_2_t132545152, ___keySlots_6)); }
	inline ObjectU5BU5D_t2843939325* get_keySlots_6() const { return ___keySlots_6; }
	inline ObjectU5BU5D_t2843939325** get_address_of_keySlots_6() { return &___keySlots_6; }
	inline void set_keySlots_6(ObjectU5BU5D_t2843939325* value)
	{
		___keySlots_6 = value;
		Il2CppCodeGenWriteBarrier((&___keySlots_6), value);
	}

	inline static int32_t get_offset_of_valueSlots_7() { return static_cast<int32_t>(offsetof(Dictionary_2_t132545152, ___valueSlots_7)); }
	inline ObjectU5BU5D_t2843939325* get_valueSlots_7() const { return ___valueSlots_7; }
	inline ObjectU5BU5D_t2843939325** get_address_of_valueSlots_7() { return &___valueSlots_7; }
	inline void set_valueSlots_7(ObjectU5BU5D_t2843939325* value)
	{
		___valueSlots_7 = value;
		Il2CppCodeGenWriteBarrier((&___valueSlots_7), value);
	}

	inline static int32_t get_offset_of_touchedSlots_8() { return static_cast<int32_t>(offsetof(Dictionary_2_t132545152, ___touchedSlots_8)); }
	inline int32_t get_touchedSlots_8() const { return ___touchedSlots_8; }
	inline int32_t* get_address_of_touchedSlots_8() { return &___touchedSlots_8; }
	inline void set_touchedSlots_8(int32_t value)
	{
		___touchedSlots_8 = value;
	}

	inline static int32_t get_offset_of_emptySlot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_t132545152, ___emptySlot_9)); }
	inline int32_t get_emptySlot_9() const { return ___emptySlot_9; }
	inline int32_t* get_address_of_emptySlot_9() { return &___emptySlot_9; }
	inline void set_emptySlot_9(int32_t value)
	{
		___emptySlot_9 = value;
	}

	inline static int32_t get_offset_of_count_10() { return static_cast<int32_t>(offsetof(Dictionary_2_t132545152, ___count_10)); }
	inline int32_t get_count_10() const { return ___count_10; }
	inline int32_t* get_address_of_count_10() { return &___count_10; }
	inline void set_count_10(int32_t value)
	{
		___count_10 = value;
	}

	inline static int32_t get_offset_of_threshold_11() { return static_cast<int32_t>(offsetof(Dictionary_2_t132545152, ___threshold_11)); }
	inline int32_t get_threshold_11() const { return ___threshold_11; }
	inline int32_t* get_address_of_threshold_11() { return &___threshold_11; }
	inline void set_threshold_11(int32_t value)
	{
		___threshold_11 = value;
	}

	inline static int32_t get_offset_of_hcp_12() { return static_cast<int32_t>(offsetof(Dictionary_2_t132545152, ___hcp_12)); }
	inline RuntimeObject* get_hcp_12() const { return ___hcp_12; }
	inline RuntimeObject** get_address_of_hcp_12() { return &___hcp_12; }
	inline void set_hcp_12(RuntimeObject* value)
	{
		___hcp_12 = value;
		Il2CppCodeGenWriteBarrier((&___hcp_12), value);
	}

	inline static int32_t get_offset_of_serialization_info_13() { return static_cast<int32_t>(offsetof(Dictionary_2_t132545152, ___serialization_info_13)); }
	inline SerializationInfo_t950877179 * get_serialization_info_13() const { return ___serialization_info_13; }
	inline SerializationInfo_t950877179 ** get_address_of_serialization_info_13() { return &___serialization_info_13; }
	inline void set_serialization_info_13(SerializationInfo_t950877179 * value)
	{
		___serialization_info_13 = value;
		Il2CppCodeGenWriteBarrier((&___serialization_info_13), value);
	}

	inline static int32_t get_offset_of_generation_14() { return static_cast<int32_t>(offsetof(Dictionary_2_t132545152, ___generation_14)); }
	inline int32_t get_generation_14() const { return ___generation_14; }
	inline int32_t* get_address_of_generation_14() { return &___generation_14; }
	inline void set_generation_14(int32_t value)
	{
		___generation_14 = value;
	}
};

struct Dictionary_2_t132545152_StaticFields
{
public:
	// System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,System.Collections.DictionaryEntry> System.Collections.Generic.Dictionary`2::<>f__am$cacheB
	Transform_1_t4209139644 * ___U3CU3Ef__amU24cacheB_15;

public:
	inline static int32_t get_offset_of_U3CU3Ef__amU24cacheB_15() { return static_cast<int32_t>(offsetof(Dictionary_2_t132545152_StaticFields, ___U3CU3Ef__amU24cacheB_15)); }
	inline Transform_1_t4209139644 * get_U3CU3Ef__amU24cacheB_15() const { return ___U3CU3Ef__amU24cacheB_15; }
	inline Transform_1_t4209139644 ** get_address_of_U3CU3Ef__amU24cacheB_15() { return &___U3CU3Ef__amU24cacheB_15; }
	inline void set_U3CU3Ef__amU24cacheB_15(Transform_1_t4209139644 * value)
	{
		___U3CU3Ef__amU24cacheB_15 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__amU24cacheB_15), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DICTIONARY_2_T132545152_H
#ifndef EXCEPTION_T_H
#define EXCEPTION_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Exception
struct  Exception_t  : public RuntimeObject
{
public:
	// System.IntPtr[] System.Exception::trace_ips
	IntPtrU5BU5D_t4013366056* ___trace_ips_0;
	// System.Exception System.Exception::inner_exception
	Exception_t * ___inner_exception_1;
	// System.String System.Exception::message
	String_t* ___message_2;
	// System.String System.Exception::help_link
	String_t* ___help_link_3;
	// System.String System.Exception::class_name
	String_t* ___class_name_4;
	// System.String System.Exception::stack_trace
	String_t* ___stack_trace_5;
	// System.String System.Exception::_remoteStackTraceString
	String_t* ____remoteStackTraceString_6;
	// System.Int32 System.Exception::remote_stack_index
	int32_t ___remote_stack_index_7;
	// System.Int32 System.Exception::hresult
	int32_t ___hresult_8;
	// System.String System.Exception::source
	String_t* ___source_9;
	// System.Collections.IDictionary System.Exception::_data
	RuntimeObject* ____data_10;

public:
	inline static int32_t get_offset_of_trace_ips_0() { return static_cast<int32_t>(offsetof(Exception_t, ___trace_ips_0)); }
	inline IntPtrU5BU5D_t4013366056* get_trace_ips_0() const { return ___trace_ips_0; }
	inline IntPtrU5BU5D_t4013366056** get_address_of_trace_ips_0() { return &___trace_ips_0; }
	inline void set_trace_ips_0(IntPtrU5BU5D_t4013366056* value)
	{
		___trace_ips_0 = value;
		Il2CppCodeGenWriteBarrier((&___trace_ips_0), value);
	}

	inline static int32_t get_offset_of_inner_exception_1() { return static_cast<int32_t>(offsetof(Exception_t, ___inner_exception_1)); }
	inline Exception_t * get_inner_exception_1() const { return ___inner_exception_1; }
	inline Exception_t ** get_address_of_inner_exception_1() { return &___inner_exception_1; }
	inline void set_inner_exception_1(Exception_t * value)
	{
		___inner_exception_1 = value;
		Il2CppCodeGenWriteBarrier((&___inner_exception_1), value);
	}

	inline static int32_t get_offset_of_message_2() { return static_cast<int32_t>(offsetof(Exception_t, ___message_2)); }
	inline String_t* get_message_2() const { return ___message_2; }
	inline String_t** get_address_of_message_2() { return &___message_2; }
	inline void set_message_2(String_t* value)
	{
		___message_2 = value;
		Il2CppCodeGenWriteBarrier((&___message_2), value);
	}

	inline static int32_t get_offset_of_help_link_3() { return static_cast<int32_t>(offsetof(Exception_t, ___help_link_3)); }
	inline String_t* get_help_link_3() const { return ___help_link_3; }
	inline String_t** get_address_of_help_link_3() { return &___help_link_3; }
	inline void set_help_link_3(String_t* value)
	{
		___help_link_3 = value;
		Il2CppCodeGenWriteBarrier((&___help_link_3), value);
	}

	inline static int32_t get_offset_of_class_name_4() { return static_cast<int32_t>(offsetof(Exception_t, ___class_name_4)); }
	inline String_t* get_class_name_4() const { return ___class_name_4; }
	inline String_t** get_address_of_class_name_4() { return &___class_name_4; }
	inline void set_class_name_4(String_t* value)
	{
		___class_name_4 = value;
		Il2CppCodeGenWriteBarrier((&___class_name_4), value);
	}

	inline static int32_t get_offset_of_stack_trace_5() { return static_cast<int32_t>(offsetof(Exception_t, ___stack_trace_5)); }
	inline String_t* get_stack_trace_5() const { return ___stack_trace_5; }
	inline String_t** get_address_of_stack_trace_5() { return &___stack_trace_5; }
	inline void set_stack_trace_5(String_t* value)
	{
		___stack_trace_5 = value;
		Il2CppCodeGenWriteBarrier((&___stack_trace_5), value);
	}

	inline static int32_t get_offset_of__remoteStackTraceString_6() { return static_cast<int32_t>(offsetof(Exception_t, ____remoteStackTraceString_6)); }
	inline String_t* get__remoteStackTraceString_6() const { return ____remoteStackTraceString_6; }
	inline String_t** get_address_of__remoteStackTraceString_6() { return &____remoteStackTraceString_6; }
	inline void set__remoteStackTraceString_6(String_t* value)
	{
		____remoteStackTraceString_6 = value;
		Il2CppCodeGenWriteBarrier((&____remoteStackTraceString_6), value);
	}

	inline static int32_t get_offset_of_remote_stack_index_7() { return static_cast<int32_t>(offsetof(Exception_t, ___remote_stack_index_7)); }
	inline int32_t get_remote_stack_index_7() const { return ___remote_stack_index_7; }
	inline int32_t* get_address_of_remote_stack_index_7() { return &___remote_stack_index_7; }
	inline void set_remote_stack_index_7(int32_t value)
	{
		___remote_stack_index_7 = value;
	}

	inline static int32_t get_offset_of_hresult_8() { return static_cast<int32_t>(offsetof(Exception_t, ___hresult_8)); }
	inline int32_t get_hresult_8() const { return ___hresult_8; }
	inline int32_t* get_address_of_hresult_8() { return &___hresult_8; }
	inline void set_hresult_8(int32_t value)
	{
		___hresult_8 = value;
	}

	inline static int32_t get_offset_of_source_9() { return static_cast<int32_t>(offsetof(Exception_t, ___source_9)); }
	inline String_t* get_source_9() const { return ___source_9; }
	inline String_t** get_address_of_source_9() { return &___source_9; }
	inline void set_source_9(String_t* value)
	{
		___source_9 = value;
		Il2CppCodeGenWriteBarrier((&___source_9), value);
	}

	inline static int32_t get_offset_of__data_10() { return static_cast<int32_t>(offsetof(Exception_t, ____data_10)); }
	inline RuntimeObject* get__data_10() const { return ____data_10; }
	inline RuntimeObject** get_address_of__data_10() { return &____data_10; }
	inline void set__data_10(RuntimeObject* value)
	{
		____data_10 = value;
		Il2CppCodeGenWriteBarrier((&____data_10), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EXCEPTION_T_H
#ifndef ENUMERABLE_T538148348_H
#define ENUMERABLE_T538148348_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Linq.Enumerable
struct  Enumerable_t538148348  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENUMERABLE_T538148348_H
#ifndef CUSTOMATTRIBUTEDATA_T1084486650_H
#define CUSTOMATTRIBUTEDATA_T1084486650_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.CustomAttributeData
struct  CustomAttributeData_t1084486650  : public RuntimeObject
{
public:
	// System.Reflection.ConstructorInfo System.Reflection.CustomAttributeData::ctorInfo
	ConstructorInfo_t5769829 * ___ctorInfo_0;
	// System.Collections.Generic.IList`1<System.Reflection.CustomAttributeTypedArgument> System.Reflection.CustomAttributeData::ctorArgs
	RuntimeObject* ___ctorArgs_1;
	// System.Collections.Generic.IList`1<System.Reflection.CustomAttributeNamedArgument> System.Reflection.CustomAttributeData::namedArgs
	RuntimeObject* ___namedArgs_2;

public:
	inline static int32_t get_offset_of_ctorInfo_0() { return static_cast<int32_t>(offsetof(CustomAttributeData_t1084486650, ___ctorInfo_0)); }
	inline ConstructorInfo_t5769829 * get_ctorInfo_0() const { return ___ctorInfo_0; }
	inline ConstructorInfo_t5769829 ** get_address_of_ctorInfo_0() { return &___ctorInfo_0; }
	inline void set_ctorInfo_0(ConstructorInfo_t5769829 * value)
	{
		___ctorInfo_0 = value;
		Il2CppCodeGenWriteBarrier((&___ctorInfo_0), value);
	}

	inline static int32_t get_offset_of_ctorArgs_1() { return static_cast<int32_t>(offsetof(CustomAttributeData_t1084486650, ___ctorArgs_1)); }
	inline RuntimeObject* get_ctorArgs_1() const { return ___ctorArgs_1; }
	inline RuntimeObject** get_address_of_ctorArgs_1() { return &___ctorArgs_1; }
	inline void set_ctorArgs_1(RuntimeObject* value)
	{
		___ctorArgs_1 = value;
		Il2CppCodeGenWriteBarrier((&___ctorArgs_1), value);
	}

	inline static int32_t get_offset_of_namedArgs_2() { return static_cast<int32_t>(offsetof(CustomAttributeData_t1084486650, ___namedArgs_2)); }
	inline RuntimeObject* get_namedArgs_2() const { return ___namedArgs_2; }
	inline RuntimeObject** get_address_of_namedArgs_2() { return &___namedArgs_2; }
	inline void set_namedArgs_2(RuntimeObject* value)
	{
		___namedArgs_2 = value;
		Il2CppCodeGenWriteBarrier((&___namedArgs_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CUSTOMATTRIBUTEDATA_T1084486650_H
#ifndef MEMBERINFO_T_H
#define MEMBERINFO_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.MemberInfo
struct  MemberInfo_t  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MEMBERINFO_T_H
#ifndef STRING_T_H
#define STRING_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.String
struct  String_t  : public RuntimeObject
{
public:
	// System.Int32 System.String::length
	int32_t ___length_0;
	// System.Char System.String::start_char
	Il2CppChar ___start_char_1;

public:
	inline static int32_t get_offset_of_length_0() { return static_cast<int32_t>(offsetof(String_t, ___length_0)); }
	inline int32_t get_length_0() const { return ___length_0; }
	inline int32_t* get_address_of_length_0() { return &___length_0; }
	inline void set_length_0(int32_t value)
	{
		___length_0 = value;
	}

	inline static int32_t get_offset_of_start_char_1() { return static_cast<int32_t>(offsetof(String_t, ___start_char_1)); }
	inline Il2CppChar get_start_char_1() const { return ___start_char_1; }
	inline Il2CppChar* get_address_of_start_char_1() { return &___start_char_1; }
	inline void set_start_char_1(Il2CppChar value)
	{
		___start_char_1 = value;
	}
};

struct String_t_StaticFields
{
public:
	// System.String System.String::Empty
	String_t* ___Empty_2;
	// System.Char[] System.String::WhiteChars
	CharU5BU5D_t3528271667* ___WhiteChars_3;

public:
	inline static int32_t get_offset_of_Empty_2() { return static_cast<int32_t>(offsetof(String_t_StaticFields, ___Empty_2)); }
	inline String_t* get_Empty_2() const { return ___Empty_2; }
	inline String_t** get_address_of_Empty_2() { return &___Empty_2; }
	inline void set_Empty_2(String_t* value)
	{
		___Empty_2 = value;
		Il2CppCodeGenWriteBarrier((&___Empty_2), value);
	}

	inline static int32_t get_offset_of_WhiteChars_3() { return static_cast<int32_t>(offsetof(String_t_StaticFields, ___WhiteChars_3)); }
	inline CharU5BU5D_t3528271667* get_WhiteChars_3() const { return ___WhiteChars_3; }
	inline CharU5BU5D_t3528271667** get_address_of_WhiteChars_3() { return &___WhiteChars_3; }
	inline void set_WhiteChars_3(CharU5BU5D_t3528271667* value)
	{
		___WhiteChars_3 = value;
		Il2CppCodeGenWriteBarrier((&___WhiteChars_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STRING_T_H
#ifndef INTERLOCKED_T2273387594_H
#define INTERLOCKED_T2273387594_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Threading.Interlocked
struct  Interlocked_t2273387594  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INTERLOCKED_T2273387594_H
#ifndef VALUETYPE_T3640485471_H
#define VALUETYPE_T3640485471_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ValueType
struct  ValueType_t3640485471  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t3640485471_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t3640485471_marshaled_com
{
};
#endif // VALUETYPE_T3640485471_H
#ifndef ATTRIBUTEHELPERENGINE_T2735742303_H
#define ATTRIBUTEHELPERENGINE_T2735742303_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.AttributeHelperEngine
struct  AttributeHelperEngine_t2735742303  : public RuntimeObject
{
public:

public:
};

struct AttributeHelperEngine_t2735742303_StaticFields
{
public:
	// UnityEngine.DisallowMultipleComponent[] UnityEngine.AttributeHelperEngine::_disallowMultipleComponentArray
	DisallowMultipleComponentU5BU5D_t3936143868* ____disallowMultipleComponentArray_0;
	// UnityEngine.ExecuteInEditMode[] UnityEngine.AttributeHelperEngine::_executeInEditModeArray
	ExecuteInEditModeU5BU5D_t3239458680* ____executeInEditModeArray_1;
	// UnityEngine.RequireComponent[] UnityEngine.AttributeHelperEngine::_requireComponentArray
	RequireComponentU5BU5D_t2245623724* ____requireComponentArray_2;

public:
	inline static int32_t get_offset_of__disallowMultipleComponentArray_0() { return static_cast<int32_t>(offsetof(AttributeHelperEngine_t2735742303_StaticFields, ____disallowMultipleComponentArray_0)); }
	inline DisallowMultipleComponentU5BU5D_t3936143868* get__disallowMultipleComponentArray_0() const { return ____disallowMultipleComponentArray_0; }
	inline DisallowMultipleComponentU5BU5D_t3936143868** get_address_of__disallowMultipleComponentArray_0() { return &____disallowMultipleComponentArray_0; }
	inline void set__disallowMultipleComponentArray_0(DisallowMultipleComponentU5BU5D_t3936143868* value)
	{
		____disallowMultipleComponentArray_0 = value;
		Il2CppCodeGenWriteBarrier((&____disallowMultipleComponentArray_0), value);
	}

	inline static int32_t get_offset_of__executeInEditModeArray_1() { return static_cast<int32_t>(offsetof(AttributeHelperEngine_t2735742303_StaticFields, ____executeInEditModeArray_1)); }
	inline ExecuteInEditModeU5BU5D_t3239458680* get__executeInEditModeArray_1() const { return ____executeInEditModeArray_1; }
	inline ExecuteInEditModeU5BU5D_t3239458680** get_address_of__executeInEditModeArray_1() { return &____executeInEditModeArray_1; }
	inline void set__executeInEditModeArray_1(ExecuteInEditModeU5BU5D_t3239458680* value)
	{
		____executeInEditModeArray_1 = value;
		Il2CppCodeGenWriteBarrier((&____executeInEditModeArray_1), value);
	}

	inline static int32_t get_offset_of__requireComponentArray_2() { return static_cast<int32_t>(offsetof(AttributeHelperEngine_t2735742303_StaticFields, ____requireComponentArray_2)); }
	inline RequireComponentU5BU5D_t2245623724* get__requireComponentArray_2() const { return ____requireComponentArray_2; }
	inline RequireComponentU5BU5D_t2245623724** get_address_of__requireComponentArray_2() { return &____requireComponentArray_2; }
	inline void set__requireComponentArray_2(RequireComponentU5BU5D_t2245623724* value)
	{
		____requireComponentArray_2 = value;
		Il2CppCodeGenWriteBarrier((&____requireComponentArray_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ATTRIBUTEHELPERENGINE_T2735742303_H
#ifndef BASEINVOKABLECALL_T2703961024_H
#define BASEINVOKABLECALL_T2703961024_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Events.BaseInvokableCall
struct  BaseInvokableCall_t2703961024  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BASEINVOKABLECALL_T2703961024_H
#ifndef TABLERANGE_T3332867892_H
#define TABLERANGE_T3332867892_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Globalization.Unicode.CodePointIndexer/TableRange
struct  TableRange_t3332867892 
{
public:
	// System.Int32 Mono.Globalization.Unicode.CodePointIndexer/TableRange::Start
	int32_t ___Start_0;
	// System.Int32 Mono.Globalization.Unicode.CodePointIndexer/TableRange::End
	int32_t ___End_1;
	// System.Int32 Mono.Globalization.Unicode.CodePointIndexer/TableRange::Count
	int32_t ___Count_2;
	// System.Int32 Mono.Globalization.Unicode.CodePointIndexer/TableRange::IndexStart
	int32_t ___IndexStart_3;
	// System.Int32 Mono.Globalization.Unicode.CodePointIndexer/TableRange::IndexEnd
	int32_t ___IndexEnd_4;

public:
	inline static int32_t get_offset_of_Start_0() { return static_cast<int32_t>(offsetof(TableRange_t3332867892, ___Start_0)); }
	inline int32_t get_Start_0() const { return ___Start_0; }
	inline int32_t* get_address_of_Start_0() { return &___Start_0; }
	inline void set_Start_0(int32_t value)
	{
		___Start_0 = value;
	}

	inline static int32_t get_offset_of_End_1() { return static_cast<int32_t>(offsetof(TableRange_t3332867892, ___End_1)); }
	inline int32_t get_End_1() const { return ___End_1; }
	inline int32_t* get_address_of_End_1() { return &___End_1; }
	inline void set_End_1(int32_t value)
	{
		___End_1 = value;
	}

	inline static int32_t get_offset_of_Count_2() { return static_cast<int32_t>(offsetof(TableRange_t3332867892, ___Count_2)); }
	inline int32_t get_Count_2() const { return ___Count_2; }
	inline int32_t* get_address_of_Count_2() { return &___Count_2; }
	inline void set_Count_2(int32_t value)
	{
		___Count_2 = value;
	}

	inline static int32_t get_offset_of_IndexStart_3() { return static_cast<int32_t>(offsetof(TableRange_t3332867892, ___IndexStart_3)); }
	inline int32_t get_IndexStart_3() const { return ___IndexStart_3; }
	inline int32_t* get_address_of_IndexStart_3() { return &___IndexStart_3; }
	inline void set_IndexStart_3(int32_t value)
	{
		___IndexStart_3 = value;
	}

	inline static int32_t get_offset_of_IndexEnd_4() { return static_cast<int32_t>(offsetof(TableRange_t3332867892, ___IndexEnd_4)); }
	inline int32_t get_IndexEnd_4() const { return ___IndexEnd_4; }
	inline int32_t* get_address_of_IndexEnd_4() { return &___IndexEnd_4; }
	inline void set_IndexEnd_4(int32_t value)
	{
		___IndexEnd_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TABLERANGE_T3332867892_H
#ifndef BOOLEAN_T97287965_H
#define BOOLEAN_T97287965_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Boolean
struct  Boolean_t97287965 
{
public:
	// System.Boolean System.Boolean::m_value
	bool ___m_value_2;

public:
	inline static int32_t get_offset_of_m_value_2() { return static_cast<int32_t>(offsetof(Boolean_t97287965, ___m_value_2)); }
	inline bool get_m_value_2() const { return ___m_value_2; }
	inline bool* get_address_of_m_value_2() { return &___m_value_2; }
	inline void set_m_value_2(bool value)
	{
		___m_value_2 = value;
	}
};

struct Boolean_t97287965_StaticFields
{
public:
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_0;
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_1;

public:
	inline static int32_t get_offset_of_FalseString_0() { return static_cast<int32_t>(offsetof(Boolean_t97287965_StaticFields, ___FalseString_0)); }
	inline String_t* get_FalseString_0() const { return ___FalseString_0; }
	inline String_t** get_address_of_FalseString_0() { return &___FalseString_0; }
	inline void set_FalseString_0(String_t* value)
	{
		___FalseString_0 = value;
		Il2CppCodeGenWriteBarrier((&___FalseString_0), value);
	}

	inline static int32_t get_offset_of_TrueString_1() { return static_cast<int32_t>(offsetof(Boolean_t97287965_StaticFields, ___TrueString_1)); }
	inline String_t* get_TrueString_1() const { return ___TrueString_1; }
	inline String_t** get_address_of_TrueString_1() { return &___TrueString_1; }
	inline void set_TrueString_1(String_t* value)
	{
		___TrueString_1 = value;
		Il2CppCodeGenWriteBarrier((&___TrueString_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BOOLEAN_T97287965_H
#ifndef BYTE_T1134296376_H
#define BYTE_T1134296376_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Byte
struct  Byte_t1134296376 
{
public:
	// System.Byte System.Byte::m_value
	uint8_t ___m_value_2;

public:
	inline static int32_t get_offset_of_m_value_2() { return static_cast<int32_t>(offsetof(Byte_t1134296376, ___m_value_2)); }
	inline uint8_t get_m_value_2() const { return ___m_value_2; }
	inline uint8_t* get_address_of_m_value_2() { return &___m_value_2; }
	inline void set_m_value_2(uint8_t value)
	{
		___m_value_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BYTE_T1134296376_H
#ifndef CHAR_T3634460470_H
#define CHAR_T3634460470_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Char
struct  Char_t3634460470 
{
public:
	// System.Char System.Char::m_value
	Il2CppChar ___m_value_2;

public:
	inline static int32_t get_offset_of_m_value_2() { return static_cast<int32_t>(offsetof(Char_t3634460470, ___m_value_2)); }
	inline Il2CppChar get_m_value_2() const { return ___m_value_2; }
	inline Il2CppChar* get_address_of_m_value_2() { return &___m_value_2; }
	inline void set_m_value_2(Il2CppChar value)
	{
		___m_value_2 = value;
	}
};

struct Char_t3634460470_StaticFields
{
public:
	// System.Byte* System.Char::category_data
	uint8_t* ___category_data_3;
	// System.Byte* System.Char::numeric_data
	uint8_t* ___numeric_data_4;
	// System.Double* System.Char::numeric_data_values
	double* ___numeric_data_values_5;
	// System.UInt16* System.Char::to_lower_data_low
	uint16_t* ___to_lower_data_low_6;
	// System.UInt16* System.Char::to_lower_data_high
	uint16_t* ___to_lower_data_high_7;
	// System.UInt16* System.Char::to_upper_data_low
	uint16_t* ___to_upper_data_low_8;
	// System.UInt16* System.Char::to_upper_data_high
	uint16_t* ___to_upper_data_high_9;

public:
	inline static int32_t get_offset_of_category_data_3() { return static_cast<int32_t>(offsetof(Char_t3634460470_StaticFields, ___category_data_3)); }
	inline uint8_t* get_category_data_3() const { return ___category_data_3; }
	inline uint8_t** get_address_of_category_data_3() { return &___category_data_3; }
	inline void set_category_data_3(uint8_t* value)
	{
		___category_data_3 = value;
	}

	inline static int32_t get_offset_of_numeric_data_4() { return static_cast<int32_t>(offsetof(Char_t3634460470_StaticFields, ___numeric_data_4)); }
	inline uint8_t* get_numeric_data_4() const { return ___numeric_data_4; }
	inline uint8_t** get_address_of_numeric_data_4() { return &___numeric_data_4; }
	inline void set_numeric_data_4(uint8_t* value)
	{
		___numeric_data_4 = value;
	}

	inline static int32_t get_offset_of_numeric_data_values_5() { return static_cast<int32_t>(offsetof(Char_t3634460470_StaticFields, ___numeric_data_values_5)); }
	inline double* get_numeric_data_values_5() const { return ___numeric_data_values_5; }
	inline double** get_address_of_numeric_data_values_5() { return &___numeric_data_values_5; }
	inline void set_numeric_data_values_5(double* value)
	{
		___numeric_data_values_5 = value;
	}

	inline static int32_t get_offset_of_to_lower_data_low_6() { return static_cast<int32_t>(offsetof(Char_t3634460470_StaticFields, ___to_lower_data_low_6)); }
	inline uint16_t* get_to_lower_data_low_6() const { return ___to_lower_data_low_6; }
	inline uint16_t** get_address_of_to_lower_data_low_6() { return &___to_lower_data_low_6; }
	inline void set_to_lower_data_low_6(uint16_t* value)
	{
		___to_lower_data_low_6 = value;
	}

	inline static int32_t get_offset_of_to_lower_data_high_7() { return static_cast<int32_t>(offsetof(Char_t3634460470_StaticFields, ___to_lower_data_high_7)); }
	inline uint16_t* get_to_lower_data_high_7() const { return ___to_lower_data_high_7; }
	inline uint16_t** get_address_of_to_lower_data_high_7() { return &___to_lower_data_high_7; }
	inline void set_to_lower_data_high_7(uint16_t* value)
	{
		___to_lower_data_high_7 = value;
	}

	inline static int32_t get_offset_of_to_upper_data_low_8() { return static_cast<int32_t>(offsetof(Char_t3634460470_StaticFields, ___to_upper_data_low_8)); }
	inline uint16_t* get_to_upper_data_low_8() const { return ___to_upper_data_low_8; }
	inline uint16_t** get_address_of_to_upper_data_low_8() { return &___to_upper_data_low_8; }
	inline void set_to_upper_data_low_8(uint16_t* value)
	{
		___to_upper_data_low_8 = value;
	}

	inline static int32_t get_offset_of_to_upper_data_high_9() { return static_cast<int32_t>(offsetof(Char_t3634460470_StaticFields, ___to_upper_data_high_9)); }
	inline uint16_t* get_to_upper_data_high_9() const { return ___to_upper_data_high_9; }
	inline uint16_t** get_address_of_to_upper_data_high_9() { return &___to_upper_data_high_9; }
	inline void set_to_upper_data_high_9(uint16_t* value)
	{
		___to_upper_data_high_9 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CHAR_T3634460470_H
#ifndef DICTIONARYENTRY_T3123975638_H
#define DICTIONARYENTRY_T3123975638_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.DictionaryEntry
struct  DictionaryEntry_t3123975638 
{
public:
	// System.Object System.Collections.DictionaryEntry::_key
	RuntimeObject * ____key_0;
	// System.Object System.Collections.DictionaryEntry::_value
	RuntimeObject * ____value_1;

public:
	inline static int32_t get_offset_of__key_0() { return static_cast<int32_t>(offsetof(DictionaryEntry_t3123975638, ____key_0)); }
	inline RuntimeObject * get__key_0() const { return ____key_0; }
	inline RuntimeObject ** get_address_of__key_0() { return &____key_0; }
	inline void set__key_0(RuntimeObject * value)
	{
		____key_0 = value;
		Il2CppCodeGenWriteBarrier((&____key_0), value);
	}

	inline static int32_t get_offset_of__value_1() { return static_cast<int32_t>(offsetof(DictionaryEntry_t3123975638, ____value_1)); }
	inline RuntimeObject * get__value_1() const { return ____value_1; }
	inline RuntimeObject ** get_address_of__value_1() { return &____value_1; }
	inline void set__value_1(RuntimeObject * value)
	{
		____value_1 = value;
		Il2CppCodeGenWriteBarrier((&____value_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Collections.DictionaryEntry
struct DictionaryEntry_t3123975638_marshaled_pinvoke
{
	Il2CppIUnknown* ____key_0;
	Il2CppIUnknown* ____value_1;
};
// Native definition for COM marshalling of System.Collections.DictionaryEntry
struct DictionaryEntry_t3123975638_marshaled_com
{
	Il2CppIUnknown* ____key_0;
	Il2CppIUnknown* ____value_1;
};
#endif // DICTIONARYENTRY_T3123975638_H
#ifndef KEYVALUEPAIR_2_T3842366416_H
#define KEYVALUEPAIR_2_T3842366416_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.KeyValuePair`2<System.Object,System.Boolean>
struct  KeyValuePair_2_t3842366416 
{
public:
	// TKey System.Collections.Generic.KeyValuePair`2::key
	RuntimeObject * ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	bool ___value_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t3842366416, ___key_0)); }
	inline RuntimeObject * get_key_0() const { return ___key_0; }
	inline RuntimeObject ** get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(RuntimeObject * value)
	{
		___key_0 = value;
		Il2CppCodeGenWriteBarrier((&___key_0), value);
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t3842366416, ___value_1)); }
	inline bool get_value_1() const { return ___value_1; }
	inline bool* get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(bool value)
	{
		___value_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // KEYVALUEPAIR_2_T3842366416_H
#ifndef KEYVALUEPAIR_2_T2401056908_H
#define KEYVALUEPAIR_2_T2401056908_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>
struct  KeyValuePair_2_t2401056908 
{
public:
	// TKey System.Collections.Generic.KeyValuePair`2::key
	RuntimeObject * ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	int32_t ___value_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t2401056908, ___key_0)); }
	inline RuntimeObject * get_key_0() const { return ___key_0; }
	inline RuntimeObject ** get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(RuntimeObject * value)
	{
		___key_0 = value;
		Il2CppCodeGenWriteBarrier((&___key_0), value);
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t2401056908, ___value_1)); }
	inline int32_t get_value_1() const { return ___value_1; }
	inline int32_t* get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(int32_t value)
	{
		___value_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // KEYVALUEPAIR_2_T2401056908_H
#ifndef KEYVALUEPAIR_2_T2530217319_H
#define KEYVALUEPAIR_2_T2530217319_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>
struct  KeyValuePair_2_t2530217319 
{
public:
	// TKey System.Collections.Generic.KeyValuePair`2::key
	RuntimeObject * ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	RuntimeObject * ___value_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t2530217319, ___key_0)); }
	inline RuntimeObject * get_key_0() const { return ___key_0; }
	inline RuntimeObject ** get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(RuntimeObject * value)
	{
		___key_0 = value;
		Il2CppCodeGenWriteBarrier((&___key_0), value);
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t2530217319, ___value_1)); }
	inline RuntimeObject * get_value_1() const { return ___value_1; }
	inline RuntimeObject ** get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(RuntimeObject * value)
	{
		___value_1 = value;
		Il2CppCodeGenWriteBarrier((&___value_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // KEYVALUEPAIR_2_T2530217319_H
#ifndef LINK_T544317964_H
#define LINK_T544317964_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.Link
struct  Link_t544317964 
{
public:
	// System.Int32 System.Collections.Generic.Link::HashCode
	int32_t ___HashCode_0;
	// System.Int32 System.Collections.Generic.Link::Next
	int32_t ___Next_1;

public:
	inline static int32_t get_offset_of_HashCode_0() { return static_cast<int32_t>(offsetof(Link_t544317964, ___HashCode_0)); }
	inline int32_t get_HashCode_0() const { return ___HashCode_0; }
	inline int32_t* get_address_of_HashCode_0() { return &___HashCode_0; }
	inline void set_HashCode_0(int32_t value)
	{
		___HashCode_0 = value;
	}

	inline static int32_t get_offset_of_Next_1() { return static_cast<int32_t>(offsetof(Link_t544317964, ___Next_1)); }
	inline int32_t get_Next_1() const { return ___Next_1; }
	inline int32_t* get_address_of_Next_1() { return &___Next_1; }
	inline void set_Next_1(int32_t value)
	{
		___Next_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LINK_T544317964_H
#ifndef SLOT_T3975888750_H
#define SLOT_T3975888750_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Hashtable/Slot
struct  Slot_t3975888750 
{
public:
	// System.Object System.Collections.Hashtable/Slot::key
	RuntimeObject * ___key_0;
	// System.Object System.Collections.Hashtable/Slot::value
	RuntimeObject * ___value_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(Slot_t3975888750, ___key_0)); }
	inline RuntimeObject * get_key_0() const { return ___key_0; }
	inline RuntimeObject ** get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(RuntimeObject * value)
	{
		___key_0 = value;
		Il2CppCodeGenWriteBarrier((&___key_0), value);
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(Slot_t3975888750, ___value_1)); }
	inline RuntimeObject * get_value_1() const { return ___value_1; }
	inline RuntimeObject ** get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(RuntimeObject * value)
	{
		___value_1 = value;
		Il2CppCodeGenWriteBarrier((&___value_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Collections.Hashtable/Slot
struct Slot_t3975888750_marshaled_pinvoke
{
	Il2CppIUnknown* ___key_0;
	Il2CppIUnknown* ___value_1;
};
// Native definition for COM marshalling of System.Collections.Hashtable/Slot
struct Slot_t3975888750_marshaled_com
{
	Il2CppIUnknown* ___key_0;
	Il2CppIUnknown* ___value_1;
};
#endif // SLOT_T3975888750_H
#ifndef SLOT_T384495010_H
#define SLOT_T384495010_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.SortedList/Slot
struct  Slot_t384495010 
{
public:
	// System.Object System.Collections.SortedList/Slot::key
	RuntimeObject * ___key_0;
	// System.Object System.Collections.SortedList/Slot::value
	RuntimeObject * ___value_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(Slot_t384495010, ___key_0)); }
	inline RuntimeObject * get_key_0() const { return ___key_0; }
	inline RuntimeObject ** get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(RuntimeObject * value)
	{
		___key_0 = value;
		Il2CppCodeGenWriteBarrier((&___key_0), value);
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(Slot_t384495010, ___value_1)); }
	inline RuntimeObject * get_value_1() const { return ___value_1; }
	inline RuntimeObject ** get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(RuntimeObject * value)
	{
		___value_1 = value;
		Il2CppCodeGenWriteBarrier((&___value_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Collections.SortedList/Slot
struct Slot_t384495010_marshaled_pinvoke
{
	Il2CppIUnknown* ___key_0;
	Il2CppIUnknown* ___value_1;
};
// Native definition for COM marshalling of System.Collections.SortedList/Slot
struct Slot_t384495010_marshaled_com
{
	Il2CppIUnknown* ___key_0;
	Il2CppIUnknown* ___value_1;
};
#endif // SLOT_T384495010_H
#ifndef DECIMAL_T2948259380_H
#define DECIMAL_T2948259380_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Decimal
struct  Decimal_t2948259380 
{
public:
	// System.UInt32 System.Decimal::flags
	uint32_t ___flags_5;
	// System.UInt32 System.Decimal::hi
	uint32_t ___hi_6;
	// System.UInt32 System.Decimal::lo
	uint32_t ___lo_7;
	// System.UInt32 System.Decimal::mid
	uint32_t ___mid_8;

public:
	inline static int32_t get_offset_of_flags_5() { return static_cast<int32_t>(offsetof(Decimal_t2948259380, ___flags_5)); }
	inline uint32_t get_flags_5() const { return ___flags_5; }
	inline uint32_t* get_address_of_flags_5() { return &___flags_5; }
	inline void set_flags_5(uint32_t value)
	{
		___flags_5 = value;
	}

	inline static int32_t get_offset_of_hi_6() { return static_cast<int32_t>(offsetof(Decimal_t2948259380, ___hi_6)); }
	inline uint32_t get_hi_6() const { return ___hi_6; }
	inline uint32_t* get_address_of_hi_6() { return &___hi_6; }
	inline void set_hi_6(uint32_t value)
	{
		___hi_6 = value;
	}

	inline static int32_t get_offset_of_lo_7() { return static_cast<int32_t>(offsetof(Decimal_t2948259380, ___lo_7)); }
	inline uint32_t get_lo_7() const { return ___lo_7; }
	inline uint32_t* get_address_of_lo_7() { return &___lo_7; }
	inline void set_lo_7(uint32_t value)
	{
		___lo_7 = value;
	}

	inline static int32_t get_offset_of_mid_8() { return static_cast<int32_t>(offsetof(Decimal_t2948259380, ___mid_8)); }
	inline uint32_t get_mid_8() const { return ___mid_8; }
	inline uint32_t* get_address_of_mid_8() { return &___mid_8; }
	inline void set_mid_8(uint32_t value)
	{
		___mid_8 = value;
	}
};

struct Decimal_t2948259380_StaticFields
{
public:
	// System.Decimal System.Decimal::MinValue
	Decimal_t2948259380  ___MinValue_0;
	// System.Decimal System.Decimal::MaxValue
	Decimal_t2948259380  ___MaxValue_1;
	// System.Decimal System.Decimal::MinusOne
	Decimal_t2948259380  ___MinusOne_2;
	// System.Decimal System.Decimal::One
	Decimal_t2948259380  ___One_3;
	// System.Decimal System.Decimal::MaxValueDiv10
	Decimal_t2948259380  ___MaxValueDiv10_4;

public:
	inline static int32_t get_offset_of_MinValue_0() { return static_cast<int32_t>(offsetof(Decimal_t2948259380_StaticFields, ___MinValue_0)); }
	inline Decimal_t2948259380  get_MinValue_0() const { return ___MinValue_0; }
	inline Decimal_t2948259380 * get_address_of_MinValue_0() { return &___MinValue_0; }
	inline void set_MinValue_0(Decimal_t2948259380  value)
	{
		___MinValue_0 = value;
	}

	inline static int32_t get_offset_of_MaxValue_1() { return static_cast<int32_t>(offsetof(Decimal_t2948259380_StaticFields, ___MaxValue_1)); }
	inline Decimal_t2948259380  get_MaxValue_1() const { return ___MaxValue_1; }
	inline Decimal_t2948259380 * get_address_of_MaxValue_1() { return &___MaxValue_1; }
	inline void set_MaxValue_1(Decimal_t2948259380  value)
	{
		___MaxValue_1 = value;
	}

	inline static int32_t get_offset_of_MinusOne_2() { return static_cast<int32_t>(offsetof(Decimal_t2948259380_StaticFields, ___MinusOne_2)); }
	inline Decimal_t2948259380  get_MinusOne_2() const { return ___MinusOne_2; }
	inline Decimal_t2948259380 * get_address_of_MinusOne_2() { return &___MinusOne_2; }
	inline void set_MinusOne_2(Decimal_t2948259380  value)
	{
		___MinusOne_2 = value;
	}

	inline static int32_t get_offset_of_One_3() { return static_cast<int32_t>(offsetof(Decimal_t2948259380_StaticFields, ___One_3)); }
	inline Decimal_t2948259380  get_One_3() const { return ___One_3; }
	inline Decimal_t2948259380 * get_address_of_One_3() { return &___One_3; }
	inline void set_One_3(Decimal_t2948259380  value)
	{
		___One_3 = value;
	}

	inline static int32_t get_offset_of_MaxValueDiv10_4() { return static_cast<int32_t>(offsetof(Decimal_t2948259380_StaticFields, ___MaxValueDiv10_4)); }
	inline Decimal_t2948259380  get_MaxValueDiv10_4() const { return ___MaxValueDiv10_4; }
	inline Decimal_t2948259380 * get_address_of_MaxValueDiv10_4() { return &___MaxValueDiv10_4; }
	inline void set_MaxValueDiv10_4(Decimal_t2948259380  value)
	{
		___MaxValueDiv10_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DECIMAL_T2948259380_H
#ifndef DOUBLE_T594665363_H
#define DOUBLE_T594665363_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Double
struct  Double_t594665363 
{
public:
	// System.Double System.Double::m_value
	double ___m_value_13;

public:
	inline static int32_t get_offset_of_m_value_13() { return static_cast<int32_t>(offsetof(Double_t594665363, ___m_value_13)); }
	inline double get_m_value_13() const { return ___m_value_13; }
	inline double* get_address_of_m_value_13() { return &___m_value_13; }
	inline void set_m_value_13(double value)
	{
		___m_value_13 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DOUBLE_T594665363_H
#ifndef ENUM_T4135868527_H
#define ENUM_T4135868527_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Enum
struct  Enum_t4135868527  : public ValueType_t3640485471
{
public:

public:
};

struct Enum_t4135868527_StaticFields
{
public:
	// System.Char[] System.Enum::split_char
	CharU5BU5D_t3528271667* ___split_char_0;

public:
	inline static int32_t get_offset_of_split_char_0() { return static_cast<int32_t>(offsetof(Enum_t4135868527_StaticFields, ___split_char_0)); }
	inline CharU5BU5D_t3528271667* get_split_char_0() const { return ___split_char_0; }
	inline CharU5BU5D_t3528271667** get_address_of_split_char_0() { return &___split_char_0; }
	inline void set_split_char_0(CharU5BU5D_t3528271667* value)
	{
		___split_char_0 = value;
		Il2CppCodeGenWriteBarrier((&___split_char_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t4135868527_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t4135868527_marshaled_com
{
};
#endif // ENUM_T4135868527_H
#ifndef INT16_T2552820387_H
#define INT16_T2552820387_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Int16
struct  Int16_t2552820387 
{
public:
	// System.Int16 System.Int16::m_value
	int16_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int16_t2552820387, ___m_value_0)); }
	inline int16_t get_m_value_0() const { return ___m_value_0; }
	inline int16_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int16_t value)
	{
		___m_value_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INT16_T2552820387_H
#ifndef INT32_T2950945753_H
#define INT32_T2950945753_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Int32
struct  Int32_t2950945753 
{
public:
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_2;

public:
	inline static int32_t get_offset_of_m_value_2() { return static_cast<int32_t>(offsetof(Int32_t2950945753, ___m_value_2)); }
	inline int32_t get_m_value_2() const { return ___m_value_2; }
	inline int32_t* get_address_of_m_value_2() { return &___m_value_2; }
	inline void set_m_value_2(int32_t value)
	{
		___m_value_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INT32_T2950945753_H
#ifndef INT64_T3736567304_H
#define INT64_T3736567304_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Int64
struct  Int64_t3736567304 
{
public:
	// System.Int64 System.Int64::m_value
	int64_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int64_t3736567304, ___m_value_0)); }
	inline int64_t get_m_value_0() const { return ___m_value_0; }
	inline int64_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int64_t value)
	{
		___m_value_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INT64_T3736567304_H
#ifndef INTPTR_T_H
#define INTPTR_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.IntPtr
struct  IntPtr_t 
{
public:
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(IntPtr_t, ___m_value_0)); }
	inline void* get_m_value_0() const { return ___m_value_0; }
	inline void** get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(void* value)
	{
		___m_value_0 = value;
	}
};

struct IntPtr_t_StaticFields
{
public:
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;

public:
	inline static int32_t get_offset_of_Zero_1() { return static_cast<int32_t>(offsetof(IntPtr_t_StaticFields, ___Zero_1)); }
	inline intptr_t get_Zero_1() const { return ___Zero_1; }
	inline intptr_t* get_address_of_Zero_1() { return &___Zero_1; }
	inline void set_Zero_1(intptr_t value)
	{
		___Zero_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INTPTR_T_H
#ifndef CUSTOMATTRIBUTETYPEDARGUMENT_T2723150157_H
#define CUSTOMATTRIBUTETYPEDARGUMENT_T2723150157_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.CustomAttributeTypedArgument
struct  CustomAttributeTypedArgument_t2723150157 
{
public:
	// System.Type System.Reflection.CustomAttributeTypedArgument::argumentType
	Type_t * ___argumentType_0;
	// System.Object System.Reflection.CustomAttributeTypedArgument::value
	RuntimeObject * ___value_1;

public:
	inline static int32_t get_offset_of_argumentType_0() { return static_cast<int32_t>(offsetof(CustomAttributeTypedArgument_t2723150157, ___argumentType_0)); }
	inline Type_t * get_argumentType_0() const { return ___argumentType_0; }
	inline Type_t ** get_address_of_argumentType_0() { return &___argumentType_0; }
	inline void set_argumentType_0(Type_t * value)
	{
		___argumentType_0 = value;
		Il2CppCodeGenWriteBarrier((&___argumentType_0), value);
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(CustomAttributeTypedArgument_t2723150157, ___value_1)); }
	inline RuntimeObject * get_value_1() const { return ___value_1; }
	inline RuntimeObject ** get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(RuntimeObject * value)
	{
		___value_1 = value;
		Il2CppCodeGenWriteBarrier((&___value_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Reflection.CustomAttributeTypedArgument
struct CustomAttributeTypedArgument_t2723150157_marshaled_pinvoke
{
	Type_t * ___argumentType_0;
	Il2CppIUnknown* ___value_1;
};
// Native definition for COM marshalling of System.Reflection.CustomAttributeTypedArgument
struct CustomAttributeTypedArgument_t2723150157_marshaled_com
{
	Type_t * ___argumentType_0;
	Il2CppIUnknown* ___value_1;
};
#endif // CUSTOMATTRIBUTETYPEDARGUMENT_T2723150157_H
#ifndef LABELDATA_T360167391_H
#define LABELDATA_T360167391_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.Emit.ILGenerator/LabelData
struct  LabelData_t360167391 
{
public:
	// System.Int32 System.Reflection.Emit.ILGenerator/LabelData::addr
	int32_t ___addr_0;
	// System.Int32 System.Reflection.Emit.ILGenerator/LabelData::maxStack
	int32_t ___maxStack_1;

public:
	inline static int32_t get_offset_of_addr_0() { return static_cast<int32_t>(offsetof(LabelData_t360167391, ___addr_0)); }
	inline int32_t get_addr_0() const { return ___addr_0; }
	inline int32_t* get_address_of_addr_0() { return &___addr_0; }
	inline void set_addr_0(int32_t value)
	{
		___addr_0 = value;
	}

	inline static int32_t get_offset_of_maxStack_1() { return static_cast<int32_t>(offsetof(LabelData_t360167391, ___maxStack_1)); }
	inline int32_t get_maxStack_1() const { return ___maxStack_1; }
	inline int32_t* get_address_of_maxStack_1() { return &___maxStack_1; }
	inline void set_maxStack_1(int32_t value)
	{
		___maxStack_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LABELDATA_T360167391_H
#ifndef LABELFIXUP_T858502054_H
#define LABELFIXUP_T858502054_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.Emit.ILGenerator/LabelFixup
struct  LabelFixup_t858502054 
{
public:
	// System.Int32 System.Reflection.Emit.ILGenerator/LabelFixup::offset
	int32_t ___offset_0;
	// System.Int32 System.Reflection.Emit.ILGenerator/LabelFixup::pos
	int32_t ___pos_1;
	// System.Int32 System.Reflection.Emit.ILGenerator/LabelFixup::label_idx
	int32_t ___label_idx_2;

public:
	inline static int32_t get_offset_of_offset_0() { return static_cast<int32_t>(offsetof(LabelFixup_t858502054, ___offset_0)); }
	inline int32_t get_offset_0() const { return ___offset_0; }
	inline int32_t* get_address_of_offset_0() { return &___offset_0; }
	inline void set_offset_0(int32_t value)
	{
		___offset_0 = value;
	}

	inline static int32_t get_offset_of_pos_1() { return static_cast<int32_t>(offsetof(LabelFixup_t858502054, ___pos_1)); }
	inline int32_t get_pos_1() const { return ___pos_1; }
	inline int32_t* get_address_of_pos_1() { return &___pos_1; }
	inline void set_pos_1(int32_t value)
	{
		___pos_1 = value;
	}

	inline static int32_t get_offset_of_label_idx_2() { return static_cast<int32_t>(offsetof(LabelFixup_t858502054, ___label_idx_2)); }
	inline int32_t get_label_idx_2() const { return ___label_idx_2; }
	inline int32_t* get_address_of_label_idx_2() { return &___label_idx_2; }
	inline void set_label_idx_2(int32_t value)
	{
		___label_idx_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LABELFIXUP_T858502054_H
#ifndef ILTOKENINFO_T2325775114_H
#define ILTOKENINFO_T2325775114_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.Emit.ILTokenInfo
struct  ILTokenInfo_t2325775114 
{
public:
	// System.Reflection.MemberInfo System.Reflection.Emit.ILTokenInfo::member
	MemberInfo_t * ___member_0;
	// System.Int32 System.Reflection.Emit.ILTokenInfo::code_pos
	int32_t ___code_pos_1;

public:
	inline static int32_t get_offset_of_member_0() { return static_cast<int32_t>(offsetof(ILTokenInfo_t2325775114, ___member_0)); }
	inline MemberInfo_t * get_member_0() const { return ___member_0; }
	inline MemberInfo_t ** get_address_of_member_0() { return &___member_0; }
	inline void set_member_0(MemberInfo_t * value)
	{
		___member_0 = value;
		Il2CppCodeGenWriteBarrier((&___member_0), value);
	}

	inline static int32_t get_offset_of_code_pos_1() { return static_cast<int32_t>(offsetof(ILTokenInfo_t2325775114, ___code_pos_1)); }
	inline int32_t get_code_pos_1() const { return ___code_pos_1; }
	inline int32_t* get_address_of_code_pos_1() { return &___code_pos_1; }
	inline void set_code_pos_1(int32_t value)
	{
		___code_pos_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Reflection.Emit.ILTokenInfo
struct ILTokenInfo_t2325775114_marshaled_pinvoke
{
	MemberInfo_t * ___member_0;
	int32_t ___code_pos_1;
};
// Native definition for COM marshalling of System.Reflection.Emit.ILTokenInfo
struct ILTokenInfo_t2325775114_marshaled_com
{
	MemberInfo_t * ___member_0;
	int32_t ___code_pos_1;
};
#endif // ILTOKENINFO_T2325775114_H
#ifndef MONOWIN32RESOURCE_T1904229483_H
#define MONOWIN32RESOURCE_T1904229483_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.Emit.MonoWin32Resource
struct  MonoWin32Resource_t1904229483 
{
public:
	// System.Int32 System.Reflection.Emit.MonoWin32Resource::res_type
	int32_t ___res_type_0;
	// System.Int32 System.Reflection.Emit.MonoWin32Resource::res_id
	int32_t ___res_id_1;
	// System.Int32 System.Reflection.Emit.MonoWin32Resource::lang_id
	int32_t ___lang_id_2;
	// System.Byte[] System.Reflection.Emit.MonoWin32Resource::data
	ByteU5BU5D_t4116647657* ___data_3;

public:
	inline static int32_t get_offset_of_res_type_0() { return static_cast<int32_t>(offsetof(MonoWin32Resource_t1904229483, ___res_type_0)); }
	inline int32_t get_res_type_0() const { return ___res_type_0; }
	inline int32_t* get_address_of_res_type_0() { return &___res_type_0; }
	inline void set_res_type_0(int32_t value)
	{
		___res_type_0 = value;
	}

	inline static int32_t get_offset_of_res_id_1() { return static_cast<int32_t>(offsetof(MonoWin32Resource_t1904229483, ___res_id_1)); }
	inline int32_t get_res_id_1() const { return ___res_id_1; }
	inline int32_t* get_address_of_res_id_1() { return &___res_id_1; }
	inline void set_res_id_1(int32_t value)
	{
		___res_id_1 = value;
	}

	inline static int32_t get_offset_of_lang_id_2() { return static_cast<int32_t>(offsetof(MonoWin32Resource_t1904229483, ___lang_id_2)); }
	inline int32_t get_lang_id_2() const { return ___lang_id_2; }
	inline int32_t* get_address_of_lang_id_2() { return &___lang_id_2; }
	inline void set_lang_id_2(int32_t value)
	{
		___lang_id_2 = value;
	}

	inline static int32_t get_offset_of_data_3() { return static_cast<int32_t>(offsetof(MonoWin32Resource_t1904229483, ___data_3)); }
	inline ByteU5BU5D_t4116647657* get_data_3() const { return ___data_3; }
	inline ByteU5BU5D_t4116647657** get_address_of_data_3() { return &___data_3; }
	inline void set_data_3(ByteU5BU5D_t4116647657* value)
	{
		___data_3 = value;
		Il2CppCodeGenWriteBarrier((&___data_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Reflection.Emit.MonoWin32Resource
struct MonoWin32Resource_t1904229483_marshaled_pinvoke
{
	int32_t ___res_type_0;
	int32_t ___res_id_1;
	int32_t ___lang_id_2;
	uint8_t* ___data_3;
};
// Native definition for COM marshalling of System.Reflection.Emit.MonoWin32Resource
struct MonoWin32Resource_t1904229483_marshaled_com
{
	int32_t ___res_type_0;
	int32_t ___res_id_1;
	int32_t ___lang_id_2;
	uint8_t* ___data_3;
};
#endif // MONOWIN32RESOURCE_T1904229483_H
#ifndef PARAMETERMODIFIER_T1461694466_H
#define PARAMETERMODIFIER_T1461694466_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.ParameterModifier
struct  ParameterModifier_t1461694466 
{
public:
	// System.Boolean[] System.Reflection.ParameterModifier::_byref
	BooleanU5BU5D_t2897418192* ____byref_0;

public:
	inline static int32_t get_offset_of__byref_0() { return static_cast<int32_t>(offsetof(ParameterModifier_t1461694466, ____byref_0)); }
	inline BooleanU5BU5D_t2897418192* get__byref_0() const { return ____byref_0; }
	inline BooleanU5BU5D_t2897418192** get_address_of__byref_0() { return &____byref_0; }
	inline void set__byref_0(BooleanU5BU5D_t2897418192* value)
	{
		____byref_0 = value;
		Il2CppCodeGenWriteBarrier((&____byref_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Reflection.ParameterModifier
struct ParameterModifier_t1461694466_marshaled_pinvoke
{
	int32_t* ____byref_0;
};
// Native definition for COM marshalling of System.Reflection.ParameterModifier
struct ParameterModifier_t1461694466_marshaled_com
{
	int32_t* ____byref_0;
};
#endif // PARAMETERMODIFIER_T1461694466_H
#ifndef RESOURCECACHEITEM_T51292791_H
#define RESOURCECACHEITEM_T51292791_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Resources.ResourceReader/ResourceCacheItem
struct  ResourceCacheItem_t51292791 
{
public:
	// System.String System.Resources.ResourceReader/ResourceCacheItem::ResourceName
	String_t* ___ResourceName_0;
	// System.Object System.Resources.ResourceReader/ResourceCacheItem::ResourceValue
	RuntimeObject * ___ResourceValue_1;

public:
	inline static int32_t get_offset_of_ResourceName_0() { return static_cast<int32_t>(offsetof(ResourceCacheItem_t51292791, ___ResourceName_0)); }
	inline String_t* get_ResourceName_0() const { return ___ResourceName_0; }
	inline String_t** get_address_of_ResourceName_0() { return &___ResourceName_0; }
	inline void set_ResourceName_0(String_t* value)
	{
		___ResourceName_0 = value;
		Il2CppCodeGenWriteBarrier((&___ResourceName_0), value);
	}

	inline static int32_t get_offset_of_ResourceValue_1() { return static_cast<int32_t>(offsetof(ResourceCacheItem_t51292791, ___ResourceValue_1)); }
	inline RuntimeObject * get_ResourceValue_1() const { return ___ResourceValue_1; }
	inline RuntimeObject ** get_address_of_ResourceValue_1() { return &___ResourceValue_1; }
	inline void set_ResourceValue_1(RuntimeObject * value)
	{
		___ResourceValue_1 = value;
		Il2CppCodeGenWriteBarrier((&___ResourceValue_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Resources.ResourceReader/ResourceCacheItem
struct ResourceCacheItem_t51292791_marshaled_pinvoke
{
	char* ___ResourceName_0;
	Il2CppIUnknown* ___ResourceValue_1;
};
// Native definition for COM marshalling of System.Resources.ResourceReader/ResourceCacheItem
struct ResourceCacheItem_t51292791_marshaled_com
{
	Il2CppChar* ___ResourceName_0;
	Il2CppIUnknown* ___ResourceValue_1;
};
#endif // RESOURCECACHEITEM_T51292791_H
#ifndef RESOURCEINFO_T2872965302_H
#define RESOURCEINFO_T2872965302_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Resources.ResourceReader/ResourceInfo
struct  ResourceInfo_t2872965302 
{
public:
	// System.Int64 System.Resources.ResourceReader/ResourceInfo::ValuePosition
	int64_t ___ValuePosition_0;
	// System.String System.Resources.ResourceReader/ResourceInfo::ResourceName
	String_t* ___ResourceName_1;
	// System.Int32 System.Resources.ResourceReader/ResourceInfo::TypeIndex
	int32_t ___TypeIndex_2;

public:
	inline static int32_t get_offset_of_ValuePosition_0() { return static_cast<int32_t>(offsetof(ResourceInfo_t2872965302, ___ValuePosition_0)); }
	inline int64_t get_ValuePosition_0() const { return ___ValuePosition_0; }
	inline int64_t* get_address_of_ValuePosition_0() { return &___ValuePosition_0; }
	inline void set_ValuePosition_0(int64_t value)
	{
		___ValuePosition_0 = value;
	}

	inline static int32_t get_offset_of_ResourceName_1() { return static_cast<int32_t>(offsetof(ResourceInfo_t2872965302, ___ResourceName_1)); }
	inline String_t* get_ResourceName_1() const { return ___ResourceName_1; }
	inline String_t** get_address_of_ResourceName_1() { return &___ResourceName_1; }
	inline void set_ResourceName_1(String_t* value)
	{
		___ResourceName_1 = value;
		Il2CppCodeGenWriteBarrier((&___ResourceName_1), value);
	}

	inline static int32_t get_offset_of_TypeIndex_2() { return static_cast<int32_t>(offsetof(ResourceInfo_t2872965302, ___TypeIndex_2)); }
	inline int32_t get_TypeIndex_2() const { return ___TypeIndex_2; }
	inline int32_t* get_address_of_TypeIndex_2() { return &___TypeIndex_2; }
	inline void set_TypeIndex_2(int32_t value)
	{
		___TypeIndex_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Resources.ResourceReader/ResourceInfo
struct ResourceInfo_t2872965302_marshaled_pinvoke
{
	int64_t ___ValuePosition_0;
	char* ___ResourceName_1;
	int32_t ___TypeIndex_2;
};
// Native definition for COM marshalling of System.Resources.ResourceReader/ResourceInfo
struct ResourceInfo_t2872965302_marshaled_com
{
	int64_t ___ValuePosition_0;
	Il2CppChar* ___ResourceName_1;
	int32_t ___TypeIndex_2;
};
#endif // RESOURCEINFO_T2872965302_H
#ifndef SBYTE_T1669577662_H
#define SBYTE_T1669577662_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.SByte
struct  SByte_t1669577662 
{
public:
	// System.SByte System.SByte::m_value
	int8_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(SByte_t1669577662, ___m_value_0)); }
	inline int8_t get_m_value_0() const { return ___m_value_0; }
	inline int8_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int8_t value)
	{
		___m_value_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SBYTE_T1669577662_H
#ifndef SINGLE_T1397266774_H
#define SINGLE_T1397266774_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Single
struct  Single_t1397266774 
{
public:
	// System.Single System.Single::m_value
	float ___m_value_7;

public:
	inline static int32_t get_offset_of_m_value_7() { return static_cast<int32_t>(offsetof(Single_t1397266774, ___m_value_7)); }
	inline float get_m_value_7() const { return ___m_value_7; }
	inline float* get_address_of_m_value_7() { return &___m_value_7; }
	inline void set_m_value_7(float value)
	{
		___m_value_7 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SINGLE_T1397266774_H
#ifndef SYSTEMEXCEPTION_T176217640_H
#define SYSTEMEXCEPTION_T176217640_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.SystemException
struct  SystemException_t176217640  : public Exception_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SYSTEMEXCEPTION_T176217640_H
#ifndef MARK_T3471605523_H
#define MARK_T3471605523_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Text.RegularExpressions.Mark
struct  Mark_t3471605523 
{
public:
	// System.Int32 System.Text.RegularExpressions.Mark::Start
	int32_t ___Start_0;
	// System.Int32 System.Text.RegularExpressions.Mark::End
	int32_t ___End_1;
	// System.Int32 System.Text.RegularExpressions.Mark::Previous
	int32_t ___Previous_2;

public:
	inline static int32_t get_offset_of_Start_0() { return static_cast<int32_t>(offsetof(Mark_t3471605523, ___Start_0)); }
	inline int32_t get_Start_0() const { return ___Start_0; }
	inline int32_t* get_address_of_Start_0() { return &___Start_0; }
	inline void set_Start_0(int32_t value)
	{
		___Start_0 = value;
	}

	inline static int32_t get_offset_of_End_1() { return static_cast<int32_t>(offsetof(Mark_t3471605523, ___End_1)); }
	inline int32_t get_End_1() const { return ___End_1; }
	inline int32_t* get_address_of_End_1() { return &___End_1; }
	inline void set_End_1(int32_t value)
	{
		___End_1 = value;
	}

	inline static int32_t get_offset_of_Previous_2() { return static_cast<int32_t>(offsetof(Mark_t3471605523, ___Previous_2)); }
	inline int32_t get_Previous_2() const { return ___Previous_2; }
	inline int32_t* get_address_of_Previous_2() { return &___Previous_2; }
	inline void set_Previous_2(int32_t value)
	{
		___Previous_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MARK_T3471605523_H
#ifndef TIMESPAN_T881159249_H
#define TIMESPAN_T881159249_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.TimeSpan
struct  TimeSpan_t881159249 
{
public:
	// System.Int64 System.TimeSpan::_ticks
	int64_t ____ticks_3;

public:
	inline static int32_t get_offset_of__ticks_3() { return static_cast<int32_t>(offsetof(TimeSpan_t881159249, ____ticks_3)); }
	inline int64_t get__ticks_3() const { return ____ticks_3; }
	inline int64_t* get_address_of__ticks_3() { return &____ticks_3; }
	inline void set__ticks_3(int64_t value)
	{
		____ticks_3 = value;
	}
};

struct TimeSpan_t881159249_StaticFields
{
public:
	// System.TimeSpan System.TimeSpan::MaxValue
	TimeSpan_t881159249  ___MaxValue_0;
	// System.TimeSpan System.TimeSpan::MinValue
	TimeSpan_t881159249  ___MinValue_1;
	// System.TimeSpan System.TimeSpan::Zero
	TimeSpan_t881159249  ___Zero_2;

public:
	inline static int32_t get_offset_of_MaxValue_0() { return static_cast<int32_t>(offsetof(TimeSpan_t881159249_StaticFields, ___MaxValue_0)); }
	inline TimeSpan_t881159249  get_MaxValue_0() const { return ___MaxValue_0; }
	inline TimeSpan_t881159249 * get_address_of_MaxValue_0() { return &___MaxValue_0; }
	inline void set_MaxValue_0(TimeSpan_t881159249  value)
	{
		___MaxValue_0 = value;
	}

	inline static int32_t get_offset_of_MinValue_1() { return static_cast<int32_t>(offsetof(TimeSpan_t881159249_StaticFields, ___MinValue_1)); }
	inline TimeSpan_t881159249  get_MinValue_1() const { return ___MinValue_1; }
	inline TimeSpan_t881159249 * get_address_of_MinValue_1() { return &___MinValue_1; }
	inline void set_MinValue_1(TimeSpan_t881159249  value)
	{
		___MinValue_1 = value;
	}

	inline static int32_t get_offset_of_Zero_2() { return static_cast<int32_t>(offsetof(TimeSpan_t881159249_StaticFields, ___Zero_2)); }
	inline TimeSpan_t881159249  get_Zero_2() const { return ___Zero_2; }
	inline TimeSpan_t881159249 * get_address_of_Zero_2() { return &___Zero_2; }
	inline void set_Zero_2(TimeSpan_t881159249  value)
	{
		___Zero_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TIMESPAN_T881159249_H
#ifndef UINT16_T2177724958_H
#define UINT16_T2177724958_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.UInt16
struct  UInt16_t2177724958 
{
public:
	// System.UInt16 System.UInt16::m_value
	uint16_t ___m_value_2;

public:
	inline static int32_t get_offset_of_m_value_2() { return static_cast<int32_t>(offsetof(UInt16_t2177724958, ___m_value_2)); }
	inline uint16_t get_m_value_2() const { return ___m_value_2; }
	inline uint16_t* get_address_of_m_value_2() { return &___m_value_2; }
	inline void set_m_value_2(uint16_t value)
	{
		___m_value_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UINT16_T2177724958_H
#ifndef UINT32_T2560061978_H
#define UINT32_T2560061978_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.UInt32
struct  UInt32_t2560061978 
{
public:
	// System.UInt32 System.UInt32::m_value
	uint32_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(UInt32_t2560061978, ___m_value_0)); }
	inline uint32_t get_m_value_0() const { return ___m_value_0; }
	inline uint32_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(uint32_t value)
	{
		___m_value_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UINT32_T2560061978_H
#ifndef UINT64_T4134040092_H
#define UINT64_T4134040092_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.UInt64
struct  UInt64_t4134040092 
{
public:
	// System.UInt64 System.UInt64::m_value
	uint64_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(UInt64_t4134040092, ___m_value_0)); }
	inline uint64_t get_m_value_0() const { return ___m_value_0; }
	inline uint64_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(uint64_t value)
	{
		___m_value_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UINT64_T4134040092_H
#ifndef URISCHEME_T722425697_H
#define URISCHEME_T722425697_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Uri/UriScheme
struct  UriScheme_t722425697 
{
public:
	// System.String System.Uri/UriScheme::scheme
	String_t* ___scheme_0;
	// System.String System.Uri/UriScheme::delimiter
	String_t* ___delimiter_1;
	// System.Int32 System.Uri/UriScheme::defaultPort
	int32_t ___defaultPort_2;

public:
	inline static int32_t get_offset_of_scheme_0() { return static_cast<int32_t>(offsetof(UriScheme_t722425697, ___scheme_0)); }
	inline String_t* get_scheme_0() const { return ___scheme_0; }
	inline String_t** get_address_of_scheme_0() { return &___scheme_0; }
	inline void set_scheme_0(String_t* value)
	{
		___scheme_0 = value;
		Il2CppCodeGenWriteBarrier((&___scheme_0), value);
	}

	inline static int32_t get_offset_of_delimiter_1() { return static_cast<int32_t>(offsetof(UriScheme_t722425697, ___delimiter_1)); }
	inline String_t* get_delimiter_1() const { return ___delimiter_1; }
	inline String_t** get_address_of_delimiter_1() { return &___delimiter_1; }
	inline void set_delimiter_1(String_t* value)
	{
		___delimiter_1 = value;
		Il2CppCodeGenWriteBarrier((&___delimiter_1), value);
	}

	inline static int32_t get_offset_of_defaultPort_2() { return static_cast<int32_t>(offsetof(UriScheme_t722425697, ___defaultPort_2)); }
	inline int32_t get_defaultPort_2() const { return ___defaultPort_2; }
	inline int32_t* get_address_of_defaultPort_2() { return &___defaultPort_2; }
	inline void set_defaultPort_2(int32_t value)
	{
		___defaultPort_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Uri/UriScheme
struct UriScheme_t722425697_marshaled_pinvoke
{
	char* ___scheme_0;
	char* ___delimiter_1;
	int32_t ___defaultPort_2;
};
// Native definition for COM marshalling of System.Uri/UriScheme
struct UriScheme_t722425697_marshaled_com
{
	Il2CppChar* ___scheme_0;
	Il2CppChar* ___delimiter_1;
	int32_t ___defaultPort_2;
};
#endif // URISCHEME_T722425697_H
#ifndef VOID_T1185182177_H
#define VOID_T1185182177_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Void
struct  Void_t1185182177 
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VOID_T1185182177_H
#ifndef ORDERBLOCK_T1585977831_H
#define ORDERBLOCK_T1585977831_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.BeforeRenderHelper/OrderBlock
struct  OrderBlock_t1585977831 
{
public:
	// System.Int32 UnityEngine.BeforeRenderHelper/OrderBlock::order
	int32_t ___order_0;
	// UnityEngine.Events.UnityAction UnityEngine.BeforeRenderHelper/OrderBlock::callback
	UnityAction_t3245792599 * ___callback_1;

public:
	inline static int32_t get_offset_of_order_0() { return static_cast<int32_t>(offsetof(OrderBlock_t1585977831, ___order_0)); }
	inline int32_t get_order_0() const { return ___order_0; }
	inline int32_t* get_address_of_order_0() { return &___order_0; }
	inline void set_order_0(int32_t value)
	{
		___order_0 = value;
	}

	inline static int32_t get_offset_of_callback_1() { return static_cast<int32_t>(offsetof(OrderBlock_t1585977831, ___callback_1)); }
	inline UnityAction_t3245792599 * get_callback_1() const { return ___callback_1; }
	inline UnityAction_t3245792599 ** get_address_of_callback_1() { return &___callback_1; }
	inline void set_callback_1(UnityAction_t3245792599 * value)
	{
		___callback_1 = value;
		Il2CppCodeGenWriteBarrier((&___callback_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.BeforeRenderHelper/OrderBlock
struct OrderBlock_t1585977831_marshaled_pinvoke
{
	int32_t ___order_0;
	Il2CppMethodPointer ___callback_1;
};
// Native definition for COM marshalling of UnityEngine.BeforeRenderHelper/OrderBlock
struct OrderBlock_t1585977831_marshaled_com
{
	int32_t ___order_0;
	Il2CppMethodPointer ___callback_1;
};
#endif // ORDERBLOCK_T1585977831_H
#ifndef KEYFRAME_T4206410242_H
#define KEYFRAME_T4206410242_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Keyframe
struct  Keyframe_t4206410242 
{
public:
	// System.Single UnityEngine.Keyframe::m_Time
	float ___m_Time_0;
	// System.Single UnityEngine.Keyframe::m_Value
	float ___m_Value_1;
	// System.Single UnityEngine.Keyframe::m_InTangent
	float ___m_InTangent_2;
	// System.Single UnityEngine.Keyframe::m_OutTangent
	float ___m_OutTangent_3;
	// System.Int32 UnityEngine.Keyframe::m_WeightedMode
	int32_t ___m_WeightedMode_4;
	// System.Single UnityEngine.Keyframe::m_InWeight
	float ___m_InWeight_5;
	// System.Single UnityEngine.Keyframe::m_OutWeight
	float ___m_OutWeight_6;

public:
	inline static int32_t get_offset_of_m_Time_0() { return static_cast<int32_t>(offsetof(Keyframe_t4206410242, ___m_Time_0)); }
	inline float get_m_Time_0() const { return ___m_Time_0; }
	inline float* get_address_of_m_Time_0() { return &___m_Time_0; }
	inline void set_m_Time_0(float value)
	{
		___m_Time_0 = value;
	}

	inline static int32_t get_offset_of_m_Value_1() { return static_cast<int32_t>(offsetof(Keyframe_t4206410242, ___m_Value_1)); }
	inline float get_m_Value_1() const { return ___m_Value_1; }
	inline float* get_address_of_m_Value_1() { return &___m_Value_1; }
	inline void set_m_Value_1(float value)
	{
		___m_Value_1 = value;
	}

	inline static int32_t get_offset_of_m_InTangent_2() { return static_cast<int32_t>(offsetof(Keyframe_t4206410242, ___m_InTangent_2)); }
	inline float get_m_InTangent_2() const { return ___m_InTangent_2; }
	inline float* get_address_of_m_InTangent_2() { return &___m_InTangent_2; }
	inline void set_m_InTangent_2(float value)
	{
		___m_InTangent_2 = value;
	}

	inline static int32_t get_offset_of_m_OutTangent_3() { return static_cast<int32_t>(offsetof(Keyframe_t4206410242, ___m_OutTangent_3)); }
	inline float get_m_OutTangent_3() const { return ___m_OutTangent_3; }
	inline float* get_address_of_m_OutTangent_3() { return &___m_OutTangent_3; }
	inline void set_m_OutTangent_3(float value)
	{
		___m_OutTangent_3 = value;
	}

	inline static int32_t get_offset_of_m_WeightedMode_4() { return static_cast<int32_t>(offsetof(Keyframe_t4206410242, ___m_WeightedMode_4)); }
	inline int32_t get_m_WeightedMode_4() const { return ___m_WeightedMode_4; }
	inline int32_t* get_address_of_m_WeightedMode_4() { return &___m_WeightedMode_4; }
	inline void set_m_WeightedMode_4(int32_t value)
	{
		___m_WeightedMode_4 = value;
	}

	inline static int32_t get_offset_of_m_InWeight_5() { return static_cast<int32_t>(offsetof(Keyframe_t4206410242, ___m_InWeight_5)); }
	inline float get_m_InWeight_5() const { return ___m_InWeight_5; }
	inline float* get_address_of_m_InWeight_5() { return &___m_InWeight_5; }
	inline void set_m_InWeight_5(float value)
	{
		___m_InWeight_5 = value;
	}

	inline static int32_t get_offset_of_m_OutWeight_6() { return static_cast<int32_t>(offsetof(Keyframe_t4206410242, ___m_OutWeight_6)); }
	inline float get_m_OutWeight_6() const { return ___m_OutWeight_6; }
	inline float* get_address_of_m_OutWeight_6() { return &___m_OutWeight_6; }
	inline void set_m_OutWeight_6(float value)
	{
		___m_OutWeight_6 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // KEYFRAME_T4206410242_H
#ifndef HITINFO_T3229609740_H
#define HITINFO_T3229609740_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.SendMouseEvents/HitInfo
struct  HitInfo_t3229609740 
{
public:
	// UnityEngine.GameObject UnityEngine.SendMouseEvents/HitInfo::target
	GameObject_t1113636619 * ___target_0;
	// UnityEngine.Camera UnityEngine.SendMouseEvents/HitInfo::camera
	Camera_t4157153871 * ___camera_1;

public:
	inline static int32_t get_offset_of_target_0() { return static_cast<int32_t>(offsetof(HitInfo_t3229609740, ___target_0)); }
	inline GameObject_t1113636619 * get_target_0() const { return ___target_0; }
	inline GameObject_t1113636619 ** get_address_of_target_0() { return &___target_0; }
	inline void set_target_0(GameObject_t1113636619 * value)
	{
		___target_0 = value;
		Il2CppCodeGenWriteBarrier((&___target_0), value);
	}

	inline static int32_t get_offset_of_camera_1() { return static_cast<int32_t>(offsetof(HitInfo_t3229609740, ___camera_1)); }
	inline Camera_t4157153871 * get_camera_1() const { return ___camera_1; }
	inline Camera_t4157153871 ** get_address_of_camera_1() { return &___camera_1; }
	inline void set_camera_1(Camera_t4157153871 * value)
	{
		___camera_1 = value;
		Il2CppCodeGenWriteBarrier((&___camera_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.SendMouseEvents/HitInfo
struct HitInfo_t3229609740_marshaled_pinvoke
{
	GameObject_t1113636619 * ___target_0;
	Camera_t4157153871 * ___camera_1;
};
// Native definition for COM marshalling of UnityEngine.SendMouseEvents/HitInfo
struct HitInfo_t3229609740_marshaled_com
{
	GameObject_t1113636619 * ___target_0;
	Camera_t4157153871 * ___camera_1;
};
#endif // HITINFO_T3229609740_H
#ifndef GCACHIEVEMENTDATA_T675222246_H
#define GCACHIEVEMENTDATA_T675222246_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.SocialPlatforms.GameCenter.GcAchievementData
struct  GcAchievementData_t675222246 
{
public:
	// System.String UnityEngine.SocialPlatforms.GameCenter.GcAchievementData::m_Identifier
	String_t* ___m_Identifier_0;
	// System.Double UnityEngine.SocialPlatforms.GameCenter.GcAchievementData::m_PercentCompleted
	double ___m_PercentCompleted_1;
	// System.Int32 UnityEngine.SocialPlatforms.GameCenter.GcAchievementData::m_Completed
	int32_t ___m_Completed_2;
	// System.Int32 UnityEngine.SocialPlatforms.GameCenter.GcAchievementData::m_Hidden
	int32_t ___m_Hidden_3;
	// System.Int32 UnityEngine.SocialPlatforms.GameCenter.GcAchievementData::m_LastReportedDate
	int32_t ___m_LastReportedDate_4;

public:
	inline static int32_t get_offset_of_m_Identifier_0() { return static_cast<int32_t>(offsetof(GcAchievementData_t675222246, ___m_Identifier_0)); }
	inline String_t* get_m_Identifier_0() const { return ___m_Identifier_0; }
	inline String_t** get_address_of_m_Identifier_0() { return &___m_Identifier_0; }
	inline void set_m_Identifier_0(String_t* value)
	{
		___m_Identifier_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_Identifier_0), value);
	}

	inline static int32_t get_offset_of_m_PercentCompleted_1() { return static_cast<int32_t>(offsetof(GcAchievementData_t675222246, ___m_PercentCompleted_1)); }
	inline double get_m_PercentCompleted_1() const { return ___m_PercentCompleted_1; }
	inline double* get_address_of_m_PercentCompleted_1() { return &___m_PercentCompleted_1; }
	inline void set_m_PercentCompleted_1(double value)
	{
		___m_PercentCompleted_1 = value;
	}

	inline static int32_t get_offset_of_m_Completed_2() { return static_cast<int32_t>(offsetof(GcAchievementData_t675222246, ___m_Completed_2)); }
	inline int32_t get_m_Completed_2() const { return ___m_Completed_2; }
	inline int32_t* get_address_of_m_Completed_2() { return &___m_Completed_2; }
	inline void set_m_Completed_2(int32_t value)
	{
		___m_Completed_2 = value;
	}

	inline static int32_t get_offset_of_m_Hidden_3() { return static_cast<int32_t>(offsetof(GcAchievementData_t675222246, ___m_Hidden_3)); }
	inline int32_t get_m_Hidden_3() const { return ___m_Hidden_3; }
	inline int32_t* get_address_of_m_Hidden_3() { return &___m_Hidden_3; }
	inline void set_m_Hidden_3(int32_t value)
	{
		___m_Hidden_3 = value;
	}

	inline static int32_t get_offset_of_m_LastReportedDate_4() { return static_cast<int32_t>(offsetof(GcAchievementData_t675222246, ___m_LastReportedDate_4)); }
	inline int32_t get_m_LastReportedDate_4() const { return ___m_LastReportedDate_4; }
	inline int32_t* get_address_of_m_LastReportedDate_4() { return &___m_LastReportedDate_4; }
	inline void set_m_LastReportedDate_4(int32_t value)
	{
		___m_LastReportedDate_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.SocialPlatforms.GameCenter.GcAchievementData
struct GcAchievementData_t675222246_marshaled_pinvoke
{
	char* ___m_Identifier_0;
	double ___m_PercentCompleted_1;
	int32_t ___m_Completed_2;
	int32_t ___m_Hidden_3;
	int32_t ___m_LastReportedDate_4;
};
// Native definition for COM marshalling of UnityEngine.SocialPlatforms.GameCenter.GcAchievementData
struct GcAchievementData_t675222246_marshaled_com
{
	Il2CppChar* ___m_Identifier_0;
	double ___m_PercentCompleted_1;
	int32_t ___m_Completed_2;
	int32_t ___m_Hidden_3;
	int32_t ___m_LastReportedDate_4;
};
#endif // GCACHIEVEMENTDATA_T675222246_H
#ifndef GCSCOREDATA_T2125309831_H
#define GCSCOREDATA_T2125309831_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.SocialPlatforms.GameCenter.GcScoreData
struct  GcScoreData_t2125309831 
{
public:
	// System.String UnityEngine.SocialPlatforms.GameCenter.GcScoreData::m_Category
	String_t* ___m_Category_0;
	// System.UInt32 UnityEngine.SocialPlatforms.GameCenter.GcScoreData::m_ValueLow
	uint32_t ___m_ValueLow_1;
	// System.Int32 UnityEngine.SocialPlatforms.GameCenter.GcScoreData::m_ValueHigh
	int32_t ___m_ValueHigh_2;
	// System.Int32 UnityEngine.SocialPlatforms.GameCenter.GcScoreData::m_Date
	int32_t ___m_Date_3;
	// System.String UnityEngine.SocialPlatforms.GameCenter.GcScoreData::m_FormattedValue
	String_t* ___m_FormattedValue_4;
	// System.String UnityEngine.SocialPlatforms.GameCenter.GcScoreData::m_PlayerID
	String_t* ___m_PlayerID_5;
	// System.Int32 UnityEngine.SocialPlatforms.GameCenter.GcScoreData::m_Rank
	int32_t ___m_Rank_6;

public:
	inline static int32_t get_offset_of_m_Category_0() { return static_cast<int32_t>(offsetof(GcScoreData_t2125309831, ___m_Category_0)); }
	inline String_t* get_m_Category_0() const { return ___m_Category_0; }
	inline String_t** get_address_of_m_Category_0() { return &___m_Category_0; }
	inline void set_m_Category_0(String_t* value)
	{
		___m_Category_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_Category_0), value);
	}

	inline static int32_t get_offset_of_m_ValueLow_1() { return static_cast<int32_t>(offsetof(GcScoreData_t2125309831, ___m_ValueLow_1)); }
	inline uint32_t get_m_ValueLow_1() const { return ___m_ValueLow_1; }
	inline uint32_t* get_address_of_m_ValueLow_1() { return &___m_ValueLow_1; }
	inline void set_m_ValueLow_1(uint32_t value)
	{
		___m_ValueLow_1 = value;
	}

	inline static int32_t get_offset_of_m_ValueHigh_2() { return static_cast<int32_t>(offsetof(GcScoreData_t2125309831, ___m_ValueHigh_2)); }
	inline int32_t get_m_ValueHigh_2() const { return ___m_ValueHigh_2; }
	inline int32_t* get_address_of_m_ValueHigh_2() { return &___m_ValueHigh_2; }
	inline void set_m_ValueHigh_2(int32_t value)
	{
		___m_ValueHigh_2 = value;
	}

	inline static int32_t get_offset_of_m_Date_3() { return static_cast<int32_t>(offsetof(GcScoreData_t2125309831, ___m_Date_3)); }
	inline int32_t get_m_Date_3() const { return ___m_Date_3; }
	inline int32_t* get_address_of_m_Date_3() { return &___m_Date_3; }
	inline void set_m_Date_3(int32_t value)
	{
		___m_Date_3 = value;
	}

	inline static int32_t get_offset_of_m_FormattedValue_4() { return static_cast<int32_t>(offsetof(GcScoreData_t2125309831, ___m_FormattedValue_4)); }
	inline String_t* get_m_FormattedValue_4() const { return ___m_FormattedValue_4; }
	inline String_t** get_address_of_m_FormattedValue_4() { return &___m_FormattedValue_4; }
	inline void set_m_FormattedValue_4(String_t* value)
	{
		___m_FormattedValue_4 = value;
		Il2CppCodeGenWriteBarrier((&___m_FormattedValue_4), value);
	}

	inline static int32_t get_offset_of_m_PlayerID_5() { return static_cast<int32_t>(offsetof(GcScoreData_t2125309831, ___m_PlayerID_5)); }
	inline String_t* get_m_PlayerID_5() const { return ___m_PlayerID_5; }
	inline String_t** get_address_of_m_PlayerID_5() { return &___m_PlayerID_5; }
	inline void set_m_PlayerID_5(String_t* value)
	{
		___m_PlayerID_5 = value;
		Il2CppCodeGenWriteBarrier((&___m_PlayerID_5), value);
	}

	inline static int32_t get_offset_of_m_Rank_6() { return static_cast<int32_t>(offsetof(GcScoreData_t2125309831, ___m_Rank_6)); }
	inline int32_t get_m_Rank_6() const { return ___m_Rank_6; }
	inline int32_t* get_address_of_m_Rank_6() { return &___m_Rank_6; }
	inline void set_m_Rank_6(int32_t value)
	{
		___m_Rank_6 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.SocialPlatforms.GameCenter.GcScoreData
struct GcScoreData_t2125309831_marshaled_pinvoke
{
	char* ___m_Category_0;
	uint32_t ___m_ValueLow_1;
	int32_t ___m_ValueHigh_2;
	int32_t ___m_Date_3;
	char* ___m_FormattedValue_4;
	char* ___m_PlayerID_5;
	int32_t ___m_Rank_6;
};
// Native definition for COM marshalling of UnityEngine.SocialPlatforms.GameCenter.GcScoreData
struct GcScoreData_t2125309831_marshaled_com
{
	Il2CppChar* ___m_Category_0;
	uint32_t ___m_ValueLow_1;
	int32_t ___m_ValueHigh_2;
	int32_t ___m_Date_3;
	Il2CppChar* ___m_FormattedValue_4;
	Il2CppChar* ___m_PlayerID_5;
	int32_t ___m_Rank_6;
};
#endif // GCSCOREDATA_T2125309831_H
#ifndef WORKREQUEST_T1354518612_H
#define WORKREQUEST_T1354518612_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UnitySynchronizationContext/WorkRequest
struct  WorkRequest_t1354518612 
{
public:
	// System.Threading.SendOrPostCallback UnityEngine.UnitySynchronizationContext/WorkRequest::m_DelagateCallback
	SendOrPostCallback_t2750080073 * ___m_DelagateCallback_0;
	// System.Object UnityEngine.UnitySynchronizationContext/WorkRequest::m_DelagateState
	RuntimeObject * ___m_DelagateState_1;
	// System.Threading.ManualResetEvent UnityEngine.UnitySynchronizationContext/WorkRequest::m_WaitHandle
	ManualResetEvent_t451242010 * ___m_WaitHandle_2;

public:
	inline static int32_t get_offset_of_m_DelagateCallback_0() { return static_cast<int32_t>(offsetof(WorkRequest_t1354518612, ___m_DelagateCallback_0)); }
	inline SendOrPostCallback_t2750080073 * get_m_DelagateCallback_0() const { return ___m_DelagateCallback_0; }
	inline SendOrPostCallback_t2750080073 ** get_address_of_m_DelagateCallback_0() { return &___m_DelagateCallback_0; }
	inline void set_m_DelagateCallback_0(SendOrPostCallback_t2750080073 * value)
	{
		___m_DelagateCallback_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_DelagateCallback_0), value);
	}

	inline static int32_t get_offset_of_m_DelagateState_1() { return static_cast<int32_t>(offsetof(WorkRequest_t1354518612, ___m_DelagateState_1)); }
	inline RuntimeObject * get_m_DelagateState_1() const { return ___m_DelagateState_1; }
	inline RuntimeObject ** get_address_of_m_DelagateState_1() { return &___m_DelagateState_1; }
	inline void set_m_DelagateState_1(RuntimeObject * value)
	{
		___m_DelagateState_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_DelagateState_1), value);
	}

	inline static int32_t get_offset_of_m_WaitHandle_2() { return static_cast<int32_t>(offsetof(WorkRequest_t1354518612, ___m_WaitHandle_2)); }
	inline ManualResetEvent_t451242010 * get_m_WaitHandle_2() const { return ___m_WaitHandle_2; }
	inline ManualResetEvent_t451242010 ** get_address_of_m_WaitHandle_2() { return &___m_WaitHandle_2; }
	inline void set_m_WaitHandle_2(ManualResetEvent_t451242010 * value)
	{
		___m_WaitHandle_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_WaitHandle_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.UnitySynchronizationContext/WorkRequest
struct WorkRequest_t1354518612_marshaled_pinvoke
{
	Il2CppMethodPointer ___m_DelagateCallback_0;
	Il2CppIUnknown* ___m_DelagateState_1;
	ManualResetEvent_t451242010 * ___m_WaitHandle_2;
};
// Native definition for COM marshalling of UnityEngine.UnitySynchronizationContext/WorkRequest
struct WorkRequest_t1354518612_marshaled_com
{
	Il2CppMethodPointer ___m_DelagateCallback_0;
	Il2CppIUnknown* ___m_DelagateState_1;
	ManualResetEvent_t451242010 * ___m_WaitHandle_2;
};
#endif // WORKREQUEST_T1354518612_H
#ifndef VECTOR2_T2156229523_H
#define VECTOR2_T2156229523_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Vector2
struct  Vector2_t2156229523 
{
public:
	// System.Single UnityEngine.Vector2::x
	float ___x_0;
	// System.Single UnityEngine.Vector2::y
	float ___y_1;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Vector2_t2156229523, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Vector2_t2156229523, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}
};

struct Vector2_t2156229523_StaticFields
{
public:
	// UnityEngine.Vector2 UnityEngine.Vector2::zeroVector
	Vector2_t2156229523  ___zeroVector_2;
	// UnityEngine.Vector2 UnityEngine.Vector2::oneVector
	Vector2_t2156229523  ___oneVector_3;
	// UnityEngine.Vector2 UnityEngine.Vector2::upVector
	Vector2_t2156229523  ___upVector_4;
	// UnityEngine.Vector2 UnityEngine.Vector2::downVector
	Vector2_t2156229523  ___downVector_5;
	// UnityEngine.Vector2 UnityEngine.Vector2::leftVector
	Vector2_t2156229523  ___leftVector_6;
	// UnityEngine.Vector2 UnityEngine.Vector2::rightVector
	Vector2_t2156229523  ___rightVector_7;
	// UnityEngine.Vector2 UnityEngine.Vector2::positiveInfinityVector
	Vector2_t2156229523  ___positiveInfinityVector_8;
	// UnityEngine.Vector2 UnityEngine.Vector2::negativeInfinityVector
	Vector2_t2156229523  ___negativeInfinityVector_9;

public:
	inline static int32_t get_offset_of_zeroVector_2() { return static_cast<int32_t>(offsetof(Vector2_t2156229523_StaticFields, ___zeroVector_2)); }
	inline Vector2_t2156229523  get_zeroVector_2() const { return ___zeroVector_2; }
	inline Vector2_t2156229523 * get_address_of_zeroVector_2() { return &___zeroVector_2; }
	inline void set_zeroVector_2(Vector2_t2156229523  value)
	{
		___zeroVector_2 = value;
	}

	inline static int32_t get_offset_of_oneVector_3() { return static_cast<int32_t>(offsetof(Vector2_t2156229523_StaticFields, ___oneVector_3)); }
	inline Vector2_t2156229523  get_oneVector_3() const { return ___oneVector_3; }
	inline Vector2_t2156229523 * get_address_of_oneVector_3() { return &___oneVector_3; }
	inline void set_oneVector_3(Vector2_t2156229523  value)
	{
		___oneVector_3 = value;
	}

	inline static int32_t get_offset_of_upVector_4() { return static_cast<int32_t>(offsetof(Vector2_t2156229523_StaticFields, ___upVector_4)); }
	inline Vector2_t2156229523  get_upVector_4() const { return ___upVector_4; }
	inline Vector2_t2156229523 * get_address_of_upVector_4() { return &___upVector_4; }
	inline void set_upVector_4(Vector2_t2156229523  value)
	{
		___upVector_4 = value;
	}

	inline static int32_t get_offset_of_downVector_5() { return static_cast<int32_t>(offsetof(Vector2_t2156229523_StaticFields, ___downVector_5)); }
	inline Vector2_t2156229523  get_downVector_5() const { return ___downVector_5; }
	inline Vector2_t2156229523 * get_address_of_downVector_5() { return &___downVector_5; }
	inline void set_downVector_5(Vector2_t2156229523  value)
	{
		___downVector_5 = value;
	}

	inline static int32_t get_offset_of_leftVector_6() { return static_cast<int32_t>(offsetof(Vector2_t2156229523_StaticFields, ___leftVector_6)); }
	inline Vector2_t2156229523  get_leftVector_6() const { return ___leftVector_6; }
	inline Vector2_t2156229523 * get_address_of_leftVector_6() { return &___leftVector_6; }
	inline void set_leftVector_6(Vector2_t2156229523  value)
	{
		___leftVector_6 = value;
	}

	inline static int32_t get_offset_of_rightVector_7() { return static_cast<int32_t>(offsetof(Vector2_t2156229523_StaticFields, ___rightVector_7)); }
	inline Vector2_t2156229523  get_rightVector_7() const { return ___rightVector_7; }
	inline Vector2_t2156229523 * get_address_of_rightVector_7() { return &___rightVector_7; }
	inline void set_rightVector_7(Vector2_t2156229523  value)
	{
		___rightVector_7 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_8() { return static_cast<int32_t>(offsetof(Vector2_t2156229523_StaticFields, ___positiveInfinityVector_8)); }
	inline Vector2_t2156229523  get_positiveInfinityVector_8() const { return ___positiveInfinityVector_8; }
	inline Vector2_t2156229523 * get_address_of_positiveInfinityVector_8() { return &___positiveInfinityVector_8; }
	inline void set_positiveInfinityVector_8(Vector2_t2156229523  value)
	{
		___positiveInfinityVector_8 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_9() { return static_cast<int32_t>(offsetof(Vector2_t2156229523_StaticFields, ___negativeInfinityVector_9)); }
	inline Vector2_t2156229523  get_negativeInfinityVector_9() const { return ___negativeInfinityVector_9; }
	inline Vector2_t2156229523 * get_address_of_negativeInfinityVector_9() { return &___negativeInfinityVector_9; }
	inline void set_negativeInfinityVector_9(Vector2_t2156229523  value)
	{
		___negativeInfinityVector_9 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VECTOR2_T2156229523_H
#ifndef VECTOR3_T3722313464_H
#define VECTOR3_T3722313464_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Vector3
struct  Vector3_t3722313464 
{
public:
	// System.Single UnityEngine.Vector3::x
	float ___x_2;
	// System.Single UnityEngine.Vector3::y
	float ___y_3;
	// System.Single UnityEngine.Vector3::z
	float ___z_4;

public:
	inline static int32_t get_offset_of_x_2() { return static_cast<int32_t>(offsetof(Vector3_t3722313464, ___x_2)); }
	inline float get_x_2() const { return ___x_2; }
	inline float* get_address_of_x_2() { return &___x_2; }
	inline void set_x_2(float value)
	{
		___x_2 = value;
	}

	inline static int32_t get_offset_of_y_3() { return static_cast<int32_t>(offsetof(Vector3_t3722313464, ___y_3)); }
	inline float get_y_3() const { return ___y_3; }
	inline float* get_address_of_y_3() { return &___y_3; }
	inline void set_y_3(float value)
	{
		___y_3 = value;
	}

	inline static int32_t get_offset_of_z_4() { return static_cast<int32_t>(offsetof(Vector3_t3722313464, ___z_4)); }
	inline float get_z_4() const { return ___z_4; }
	inline float* get_address_of_z_4() { return &___z_4; }
	inline void set_z_4(float value)
	{
		___z_4 = value;
	}
};

struct Vector3_t3722313464_StaticFields
{
public:
	// UnityEngine.Vector3 UnityEngine.Vector3::zeroVector
	Vector3_t3722313464  ___zeroVector_5;
	// UnityEngine.Vector3 UnityEngine.Vector3::oneVector
	Vector3_t3722313464  ___oneVector_6;
	// UnityEngine.Vector3 UnityEngine.Vector3::upVector
	Vector3_t3722313464  ___upVector_7;
	// UnityEngine.Vector3 UnityEngine.Vector3::downVector
	Vector3_t3722313464  ___downVector_8;
	// UnityEngine.Vector3 UnityEngine.Vector3::leftVector
	Vector3_t3722313464  ___leftVector_9;
	// UnityEngine.Vector3 UnityEngine.Vector3::rightVector
	Vector3_t3722313464  ___rightVector_10;
	// UnityEngine.Vector3 UnityEngine.Vector3::forwardVector
	Vector3_t3722313464  ___forwardVector_11;
	// UnityEngine.Vector3 UnityEngine.Vector3::backVector
	Vector3_t3722313464  ___backVector_12;
	// UnityEngine.Vector3 UnityEngine.Vector3::positiveInfinityVector
	Vector3_t3722313464  ___positiveInfinityVector_13;
	// UnityEngine.Vector3 UnityEngine.Vector3::negativeInfinityVector
	Vector3_t3722313464  ___negativeInfinityVector_14;

public:
	inline static int32_t get_offset_of_zeroVector_5() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___zeroVector_5)); }
	inline Vector3_t3722313464  get_zeroVector_5() const { return ___zeroVector_5; }
	inline Vector3_t3722313464 * get_address_of_zeroVector_5() { return &___zeroVector_5; }
	inline void set_zeroVector_5(Vector3_t3722313464  value)
	{
		___zeroVector_5 = value;
	}

	inline static int32_t get_offset_of_oneVector_6() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___oneVector_6)); }
	inline Vector3_t3722313464  get_oneVector_6() const { return ___oneVector_6; }
	inline Vector3_t3722313464 * get_address_of_oneVector_6() { return &___oneVector_6; }
	inline void set_oneVector_6(Vector3_t3722313464  value)
	{
		___oneVector_6 = value;
	}

	inline static int32_t get_offset_of_upVector_7() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___upVector_7)); }
	inline Vector3_t3722313464  get_upVector_7() const { return ___upVector_7; }
	inline Vector3_t3722313464 * get_address_of_upVector_7() { return &___upVector_7; }
	inline void set_upVector_7(Vector3_t3722313464  value)
	{
		___upVector_7 = value;
	}

	inline static int32_t get_offset_of_downVector_8() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___downVector_8)); }
	inline Vector3_t3722313464  get_downVector_8() const { return ___downVector_8; }
	inline Vector3_t3722313464 * get_address_of_downVector_8() { return &___downVector_8; }
	inline void set_downVector_8(Vector3_t3722313464  value)
	{
		___downVector_8 = value;
	}

	inline static int32_t get_offset_of_leftVector_9() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___leftVector_9)); }
	inline Vector3_t3722313464  get_leftVector_9() const { return ___leftVector_9; }
	inline Vector3_t3722313464 * get_address_of_leftVector_9() { return &___leftVector_9; }
	inline void set_leftVector_9(Vector3_t3722313464  value)
	{
		___leftVector_9 = value;
	}

	inline static int32_t get_offset_of_rightVector_10() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___rightVector_10)); }
	inline Vector3_t3722313464  get_rightVector_10() const { return ___rightVector_10; }
	inline Vector3_t3722313464 * get_address_of_rightVector_10() { return &___rightVector_10; }
	inline void set_rightVector_10(Vector3_t3722313464  value)
	{
		___rightVector_10 = value;
	}

	inline static int32_t get_offset_of_forwardVector_11() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___forwardVector_11)); }
	inline Vector3_t3722313464  get_forwardVector_11() const { return ___forwardVector_11; }
	inline Vector3_t3722313464 * get_address_of_forwardVector_11() { return &___forwardVector_11; }
	inline void set_forwardVector_11(Vector3_t3722313464  value)
	{
		___forwardVector_11 = value;
	}

	inline static int32_t get_offset_of_backVector_12() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___backVector_12)); }
	inline Vector3_t3722313464  get_backVector_12() const { return ___backVector_12; }
	inline Vector3_t3722313464 * get_address_of_backVector_12() { return &___backVector_12; }
	inline void set_backVector_12(Vector3_t3722313464  value)
	{
		___backVector_12 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_13() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___positiveInfinityVector_13)); }
	inline Vector3_t3722313464  get_positiveInfinityVector_13() const { return ___positiveInfinityVector_13; }
	inline Vector3_t3722313464 * get_address_of_positiveInfinityVector_13() { return &___positiveInfinityVector_13; }
	inline void set_positiveInfinityVector_13(Vector3_t3722313464  value)
	{
		___positiveInfinityVector_13 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_14() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___negativeInfinityVector_14)); }
	inline Vector3_t3722313464  get_negativeInfinityVector_14() const { return ___negativeInfinityVector_14; }
	inline Vector3_t3722313464 * get_address_of_negativeInfinityVector_14() { return &___negativeInfinityVector_14; }
	inline void set_negativeInfinityVector_14(Vector3_t3722313464  value)
	{
		___negativeInfinityVector_14 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VECTOR3_T3722313464_H
#ifndef CLIENTCERTIFICATETYPE_T1004704908_H
#define CLIENTCERTIFICATETYPE_T1004704908_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.Protocol.Tls.Handshake.ClientCertificateType
struct  ClientCertificateType_t1004704908 
{
public:
	// System.Int32 Mono.Security.Protocol.Tls.Handshake.ClientCertificateType::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(ClientCertificateType_t1004704908, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CLIENTCERTIFICATETYPE_T1004704908_H
#ifndef ARGUMENTEXCEPTION_T132251570_H
#define ARGUMENTEXCEPTION_T132251570_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ArgumentException
struct  ArgumentException_t132251570  : public SystemException_t176217640
{
public:
	// System.String System.ArgumentException::param_name
	String_t* ___param_name_12;

public:
	inline static int32_t get_offset_of_param_name_12() { return static_cast<int32_t>(offsetof(ArgumentException_t132251570, ___param_name_12)); }
	inline String_t* get_param_name_12() const { return ___param_name_12; }
	inline String_t** get_address_of_param_name_12() { return &___param_name_12; }
	inline void set_param_name_12(String_t* value)
	{
		___param_name_12 = value;
		Il2CppCodeGenWriteBarrier((&___param_name_12), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ARGUMENTEXCEPTION_T132251570_H
#ifndef DATETIMEKIND_T3468814247_H
#define DATETIMEKIND_T3468814247_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.DateTimeKind
struct  DateTimeKind_t3468814247 
{
public:
	// System.Int32 System.DateTimeKind::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(DateTimeKind_t3468814247, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DATETIMEKIND_T3468814247_H
#ifndef DELEGATE_T1188392813_H
#define DELEGATE_T1188392813_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Delegate
struct  Delegate_t1188392813  : public RuntimeObject
{
public:
	// System.IntPtr System.Delegate::method_ptr
	Il2CppMethodPointer ___method_ptr_0;
	// System.IntPtr System.Delegate::invoke_impl
	intptr_t ___invoke_impl_1;
	// System.Object System.Delegate::m_target
	RuntimeObject * ___m_target_2;
	// System.IntPtr System.Delegate::method
	intptr_t ___method_3;
	// System.IntPtr System.Delegate::delegate_trampoline
	intptr_t ___delegate_trampoline_4;
	// System.IntPtr System.Delegate::method_code
	intptr_t ___method_code_5;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t * ___method_info_6;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t * ___original_method_info_7;
	// System.DelegateData System.Delegate::data
	DelegateData_t1677132599 * ___data_8;

public:
	inline static int32_t get_offset_of_method_ptr_0() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___method_ptr_0)); }
	inline Il2CppMethodPointer get_method_ptr_0() const { return ___method_ptr_0; }
	inline Il2CppMethodPointer* get_address_of_method_ptr_0() { return &___method_ptr_0; }
	inline void set_method_ptr_0(Il2CppMethodPointer value)
	{
		___method_ptr_0 = value;
	}

	inline static int32_t get_offset_of_invoke_impl_1() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___invoke_impl_1)); }
	inline intptr_t get_invoke_impl_1() const { return ___invoke_impl_1; }
	inline intptr_t* get_address_of_invoke_impl_1() { return &___invoke_impl_1; }
	inline void set_invoke_impl_1(intptr_t value)
	{
		___invoke_impl_1 = value;
	}

	inline static int32_t get_offset_of_m_target_2() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___m_target_2)); }
	inline RuntimeObject * get_m_target_2() const { return ___m_target_2; }
	inline RuntimeObject ** get_address_of_m_target_2() { return &___m_target_2; }
	inline void set_m_target_2(RuntimeObject * value)
	{
		___m_target_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_target_2), value);
	}

	inline static int32_t get_offset_of_method_3() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___method_3)); }
	inline intptr_t get_method_3() const { return ___method_3; }
	inline intptr_t* get_address_of_method_3() { return &___method_3; }
	inline void set_method_3(intptr_t value)
	{
		___method_3 = value;
	}

	inline static int32_t get_offset_of_delegate_trampoline_4() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___delegate_trampoline_4)); }
	inline intptr_t get_delegate_trampoline_4() const { return ___delegate_trampoline_4; }
	inline intptr_t* get_address_of_delegate_trampoline_4() { return &___delegate_trampoline_4; }
	inline void set_delegate_trampoline_4(intptr_t value)
	{
		___delegate_trampoline_4 = value;
	}

	inline static int32_t get_offset_of_method_code_5() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___method_code_5)); }
	inline intptr_t get_method_code_5() const { return ___method_code_5; }
	inline intptr_t* get_address_of_method_code_5() { return &___method_code_5; }
	inline void set_method_code_5(intptr_t value)
	{
		___method_code_5 = value;
	}

	inline static int32_t get_offset_of_method_info_6() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___method_info_6)); }
	inline MethodInfo_t * get_method_info_6() const { return ___method_info_6; }
	inline MethodInfo_t ** get_address_of_method_info_6() { return &___method_info_6; }
	inline void set_method_info_6(MethodInfo_t * value)
	{
		___method_info_6 = value;
		Il2CppCodeGenWriteBarrier((&___method_info_6), value);
	}

	inline static int32_t get_offset_of_original_method_info_7() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___original_method_info_7)); }
	inline MethodInfo_t * get_original_method_info_7() const { return ___original_method_info_7; }
	inline MethodInfo_t ** get_address_of_original_method_info_7() { return &___original_method_info_7; }
	inline void set_original_method_info_7(MethodInfo_t * value)
	{
		___original_method_info_7 = value;
		Il2CppCodeGenWriteBarrier((&___original_method_info_7), value);
	}

	inline static int32_t get_offset_of_data_8() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___data_8)); }
	inline DelegateData_t1677132599 * get_data_8() const { return ___data_8; }
	inline DelegateData_t1677132599 ** get_address_of_data_8() { return &___data_8; }
	inline void set_data_8(DelegateData_t1677132599 * value)
	{
		___data_8 = value;
		Il2CppCodeGenWriteBarrier((&___data_8), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DELEGATE_T1188392813_H
#ifndef INVALIDOPERATIONEXCEPTION_T56020091_H
#define INVALIDOPERATIONEXCEPTION_T56020091_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.InvalidOperationException
struct  InvalidOperationException_t56020091  : public SystemException_t176217640
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INVALIDOPERATIONEXCEPTION_T56020091_H
#ifndef FALLBACK_T3495999270_H
#define FALLBACK_T3495999270_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Linq.Enumerable/Fallback
struct  Fallback_t3495999270 
{
public:
	// System.Int32 System.Linq.Enumerable/Fallback::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(Fallback_t3495999270, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FALLBACK_T3495999270_H
#ifndef BINDINGFLAGS_T2721792723_H
#define BINDINGFLAGS_T2721792723_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.BindingFlags
struct  BindingFlags_t2721792723 
{
public:
	// System.Int32 System.Reflection.BindingFlags::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(BindingFlags_t2721792723, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BINDINGFLAGS_T2721792723_H
#ifndef CUSTOMATTRIBUTENAMEDARGUMENT_T287865710_H
#define CUSTOMATTRIBUTENAMEDARGUMENT_T287865710_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.CustomAttributeNamedArgument
struct  CustomAttributeNamedArgument_t287865710 
{
public:
	// System.Reflection.CustomAttributeTypedArgument System.Reflection.CustomAttributeNamedArgument::typedArgument
	CustomAttributeTypedArgument_t2723150157  ___typedArgument_0;
	// System.Reflection.MemberInfo System.Reflection.CustomAttributeNamedArgument::memberInfo
	MemberInfo_t * ___memberInfo_1;

public:
	inline static int32_t get_offset_of_typedArgument_0() { return static_cast<int32_t>(offsetof(CustomAttributeNamedArgument_t287865710, ___typedArgument_0)); }
	inline CustomAttributeTypedArgument_t2723150157  get_typedArgument_0() const { return ___typedArgument_0; }
	inline CustomAttributeTypedArgument_t2723150157 * get_address_of_typedArgument_0() { return &___typedArgument_0; }
	inline void set_typedArgument_0(CustomAttributeTypedArgument_t2723150157  value)
	{
		___typedArgument_0 = value;
	}

	inline static int32_t get_offset_of_memberInfo_1() { return static_cast<int32_t>(offsetof(CustomAttributeNamedArgument_t287865710, ___memberInfo_1)); }
	inline MemberInfo_t * get_memberInfo_1() const { return ___memberInfo_1; }
	inline MemberInfo_t ** get_address_of_memberInfo_1() { return &___memberInfo_1; }
	inline void set_memberInfo_1(MemberInfo_t * value)
	{
		___memberInfo_1 = value;
		Il2CppCodeGenWriteBarrier((&___memberInfo_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Reflection.CustomAttributeNamedArgument
struct CustomAttributeNamedArgument_t287865710_marshaled_pinvoke
{
	CustomAttributeTypedArgument_t2723150157_marshaled_pinvoke ___typedArgument_0;
	MemberInfo_t * ___memberInfo_1;
};
// Native definition for COM marshalling of System.Reflection.CustomAttributeNamedArgument
struct CustomAttributeNamedArgument_t287865710_marshaled_com
{
	CustomAttributeTypedArgument_t2723150157_marshaled_com ___typedArgument_0;
	MemberInfo_t * ___memberInfo_1;
};
#endif // CUSTOMATTRIBUTENAMEDARGUMENT_T287865710_H
#ifndef RESOURCEATTRIBUTES_T3997964906_H
#define RESOURCEATTRIBUTES_T3997964906_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.ResourceAttributes
struct  ResourceAttributes_t3997964906 
{
public:
	// System.Int32 System.Reflection.ResourceAttributes::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(ResourceAttributes_t3997964906, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RESOURCEATTRIBUTES_T3997964906_H
#ifndef TYPETAG_T3541821701_H
#define TYPETAG_T3541821701_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Serialization.Formatters.Binary.TypeTag
struct  TypeTag_t3541821701 
{
public:
	// System.Byte System.Runtime.Serialization.Formatters.Binary.TypeTag::value__
	uint8_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(TypeTag_t3541821701, ___value___1)); }
	inline uint8_t get_value___1() const { return ___value___1; }
	inline uint8_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(uint8_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TYPETAG_T3541821701_H
#ifndef RUNTIMETYPEHANDLE_T3027515415_H
#define RUNTIMETYPEHANDLE_T3027515415_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.RuntimeTypeHandle
struct  RuntimeTypeHandle_t3027515415 
{
public:
	// System.IntPtr System.RuntimeTypeHandle::value
	intptr_t ___value_0;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(RuntimeTypeHandle_t3027515415, ___value_0)); }
	inline intptr_t get_value_0() const { return ___value_0; }
	inline intptr_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(intptr_t value)
	{
		___value_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RUNTIMETYPEHANDLE_T3027515415_H
#ifndef X509CHAINSTATUSFLAGS_T1026973125_H
#define X509CHAINSTATUSFLAGS_T1026973125_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.X509Certificates.X509ChainStatusFlags
struct  X509ChainStatusFlags_t1026973125 
{
public:
	// System.Int32 System.Security.Cryptography.X509Certificates.X509ChainStatusFlags::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(X509ChainStatusFlags_t1026973125, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // X509CHAINSTATUSFLAGS_T1026973125_H
#ifndef SECURITYACTION_T569814076_H
#define SECURITYACTION_T569814076_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Permissions.SecurityAction
struct  SecurityAction_t569814076 
{
public:
	// System.Int32 System.Security.Permissions.SecurityAction::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(SecurityAction_t569814076, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SECURITYACTION_T569814076_H
#ifndef CASTHELPER_1_T2613165452_H
#define CASTHELPER_1_T2613165452_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.CastHelper`1<System.Object>
struct  CastHelper_1_t2613165452 
{
public:
	// T UnityEngine.CastHelper`1::t
	RuntimeObject * ___t_0;
	// System.IntPtr UnityEngine.CastHelper`1::onePointerFurtherThanT
	intptr_t ___onePointerFurtherThanT_1;

public:
	inline static int32_t get_offset_of_t_0() { return static_cast<int32_t>(offsetof(CastHelper_1_t2613165452, ___t_0)); }
	inline RuntimeObject * get_t_0() const { return ___t_0; }
	inline RuntimeObject ** get_address_of_t_0() { return &___t_0; }
	inline void set_t_0(RuntimeObject * value)
	{
		___t_0 = value;
		Il2CppCodeGenWriteBarrier((&___t_0), value);
	}

	inline static int32_t get_offset_of_onePointerFurtherThanT_1() { return static_cast<int32_t>(offsetof(CastHelper_1_t2613165452, ___onePointerFurtherThanT_1)); }
	inline intptr_t get_onePointerFurtherThanT_1() const { return ___onePointerFurtherThanT_1; }
	inline intptr_t* get_address_of_onePointerFurtherThanT_1() { return &___onePointerFurtherThanT_1; }
	inline void set_onePointerFurtherThanT_1(intptr_t value)
	{
		___onePointerFurtherThanT_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CASTHELPER_1_T2613165452_H
#ifndef CONTACTPOINT_T3758755253_H
#define CONTACTPOINT_T3758755253_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.ContactPoint
struct  ContactPoint_t3758755253 
{
public:
	// UnityEngine.Vector3 UnityEngine.ContactPoint::m_Point
	Vector3_t3722313464  ___m_Point_0;
	// UnityEngine.Vector3 UnityEngine.ContactPoint::m_Normal
	Vector3_t3722313464  ___m_Normal_1;
	// System.Int32 UnityEngine.ContactPoint::m_ThisColliderInstanceID
	int32_t ___m_ThisColliderInstanceID_2;
	// System.Int32 UnityEngine.ContactPoint::m_OtherColliderInstanceID
	int32_t ___m_OtherColliderInstanceID_3;
	// System.Single UnityEngine.ContactPoint::m_Separation
	float ___m_Separation_4;

public:
	inline static int32_t get_offset_of_m_Point_0() { return static_cast<int32_t>(offsetof(ContactPoint_t3758755253, ___m_Point_0)); }
	inline Vector3_t3722313464  get_m_Point_0() const { return ___m_Point_0; }
	inline Vector3_t3722313464 * get_address_of_m_Point_0() { return &___m_Point_0; }
	inline void set_m_Point_0(Vector3_t3722313464  value)
	{
		___m_Point_0 = value;
	}

	inline static int32_t get_offset_of_m_Normal_1() { return static_cast<int32_t>(offsetof(ContactPoint_t3758755253, ___m_Normal_1)); }
	inline Vector3_t3722313464  get_m_Normal_1() const { return ___m_Normal_1; }
	inline Vector3_t3722313464 * get_address_of_m_Normal_1() { return &___m_Normal_1; }
	inline void set_m_Normal_1(Vector3_t3722313464  value)
	{
		___m_Normal_1 = value;
	}

	inline static int32_t get_offset_of_m_ThisColliderInstanceID_2() { return static_cast<int32_t>(offsetof(ContactPoint_t3758755253, ___m_ThisColliderInstanceID_2)); }
	inline int32_t get_m_ThisColliderInstanceID_2() const { return ___m_ThisColliderInstanceID_2; }
	inline int32_t* get_address_of_m_ThisColliderInstanceID_2() { return &___m_ThisColliderInstanceID_2; }
	inline void set_m_ThisColliderInstanceID_2(int32_t value)
	{
		___m_ThisColliderInstanceID_2 = value;
	}

	inline static int32_t get_offset_of_m_OtherColliderInstanceID_3() { return static_cast<int32_t>(offsetof(ContactPoint_t3758755253, ___m_OtherColliderInstanceID_3)); }
	inline int32_t get_m_OtherColliderInstanceID_3() const { return ___m_OtherColliderInstanceID_3; }
	inline int32_t* get_address_of_m_OtherColliderInstanceID_3() { return &___m_OtherColliderInstanceID_3; }
	inline void set_m_OtherColliderInstanceID_3(int32_t value)
	{
		___m_OtherColliderInstanceID_3 = value;
	}

	inline static int32_t get_offset_of_m_Separation_4() { return static_cast<int32_t>(offsetof(ContactPoint_t3758755253, ___m_Separation_4)); }
	inline float get_m_Separation_4() const { return ___m_Separation_4; }
	inline float* get_address_of_m_Separation_4() { return &___m_Separation_4; }
	inline void set_m_Separation_4(float value)
	{
		___m_Separation_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CONTACTPOINT_T3758755253_H
#ifndef PLAYERLOOPSYSTEM_T105772105_H
#define PLAYERLOOPSYSTEM_T105772105_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Experimental.LowLevel.PlayerLoopSystem
struct  PlayerLoopSystem_t105772105 
{
public:
	// System.Type UnityEngine.Experimental.LowLevel.PlayerLoopSystem::type
	Type_t * ___type_0;
	// UnityEngine.Experimental.LowLevel.PlayerLoopSystem[] UnityEngine.Experimental.LowLevel.PlayerLoopSystem::subSystemList
	PlayerLoopSystemU5BU5D_t1150299252* ___subSystemList_1;
	// UnityEngine.Experimental.LowLevel.PlayerLoopSystem/UpdateFunction UnityEngine.Experimental.LowLevel.PlayerLoopSystem::updateDelegate
	UpdateFunction_t377278577 * ___updateDelegate_2;
	// System.IntPtr UnityEngine.Experimental.LowLevel.PlayerLoopSystem::updateFunction
	intptr_t ___updateFunction_3;
	// System.IntPtr UnityEngine.Experimental.LowLevel.PlayerLoopSystem::loopConditionFunction
	intptr_t ___loopConditionFunction_4;

public:
	inline static int32_t get_offset_of_type_0() { return static_cast<int32_t>(offsetof(PlayerLoopSystem_t105772105, ___type_0)); }
	inline Type_t * get_type_0() const { return ___type_0; }
	inline Type_t ** get_address_of_type_0() { return &___type_0; }
	inline void set_type_0(Type_t * value)
	{
		___type_0 = value;
		Il2CppCodeGenWriteBarrier((&___type_0), value);
	}

	inline static int32_t get_offset_of_subSystemList_1() { return static_cast<int32_t>(offsetof(PlayerLoopSystem_t105772105, ___subSystemList_1)); }
	inline PlayerLoopSystemU5BU5D_t1150299252* get_subSystemList_1() const { return ___subSystemList_1; }
	inline PlayerLoopSystemU5BU5D_t1150299252** get_address_of_subSystemList_1() { return &___subSystemList_1; }
	inline void set_subSystemList_1(PlayerLoopSystemU5BU5D_t1150299252* value)
	{
		___subSystemList_1 = value;
		Il2CppCodeGenWriteBarrier((&___subSystemList_1), value);
	}

	inline static int32_t get_offset_of_updateDelegate_2() { return static_cast<int32_t>(offsetof(PlayerLoopSystem_t105772105, ___updateDelegate_2)); }
	inline UpdateFunction_t377278577 * get_updateDelegate_2() const { return ___updateDelegate_2; }
	inline UpdateFunction_t377278577 ** get_address_of_updateDelegate_2() { return &___updateDelegate_2; }
	inline void set_updateDelegate_2(UpdateFunction_t377278577 * value)
	{
		___updateDelegate_2 = value;
		Il2CppCodeGenWriteBarrier((&___updateDelegate_2), value);
	}

	inline static int32_t get_offset_of_updateFunction_3() { return static_cast<int32_t>(offsetof(PlayerLoopSystem_t105772105, ___updateFunction_3)); }
	inline intptr_t get_updateFunction_3() const { return ___updateFunction_3; }
	inline intptr_t* get_address_of_updateFunction_3() { return &___updateFunction_3; }
	inline void set_updateFunction_3(intptr_t value)
	{
		___updateFunction_3 = value;
	}

	inline static int32_t get_offset_of_loopConditionFunction_4() { return static_cast<int32_t>(offsetof(PlayerLoopSystem_t105772105, ___loopConditionFunction_4)); }
	inline intptr_t get_loopConditionFunction_4() const { return ___loopConditionFunction_4; }
	inline intptr_t* get_address_of_loopConditionFunction_4() { return &___loopConditionFunction_4; }
	inline void set_loopConditionFunction_4(intptr_t value)
	{
		___loopConditionFunction_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.Experimental.LowLevel.PlayerLoopSystem
struct PlayerLoopSystem_t105772105_marshaled_pinvoke
{
	Type_t * ___type_0;
	PlayerLoopSystem_t105772105_marshaled_pinvoke* ___subSystemList_1;
	Il2CppMethodPointer ___updateDelegate_2;
	intptr_t ___updateFunction_3;
	intptr_t ___loopConditionFunction_4;
};
// Native definition for COM marshalling of UnityEngine.Experimental.LowLevel.PlayerLoopSystem
struct PlayerLoopSystem_t105772105_marshaled_com
{
	Type_t * ___type_0;
	PlayerLoopSystem_t105772105_marshaled_com* ___subSystemList_1;
	Il2CppMethodPointer ___updateDelegate_2;
	intptr_t ___updateFunction_3;
	intptr_t ___loopConditionFunction_4;
};
#endif // PLAYERLOOPSYSTEM_T105772105_H
#ifndef OBJECT_T631007953_H
#define OBJECT_T631007953_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Object
struct  Object_t631007953  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;

public:
	inline static int32_t get_offset_of_m_CachedPtr_0() { return static_cast<int32_t>(offsetof(Object_t631007953, ___m_CachedPtr_0)); }
	inline intptr_t get_m_CachedPtr_0() const { return ___m_CachedPtr_0; }
	inline intptr_t* get_address_of_m_CachedPtr_0() { return &___m_CachedPtr_0; }
	inline void set_m_CachedPtr_0(intptr_t value)
	{
		___m_CachedPtr_0 = value;
	}
};

struct Object_t631007953_StaticFields
{
public:
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;

public:
	inline static int32_t get_offset_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return static_cast<int32_t>(offsetof(Object_t631007953_StaticFields, ___OffsetOfInstanceIDInCPlusPlusObject_1)); }
	inline int32_t get_OffsetOfInstanceIDInCPlusPlusObject_1() const { return ___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline int32_t* get_address_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return &___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline void set_OffsetOfInstanceIDInCPlusPlusObject_1(int32_t value)
	{
		___OffsetOfInstanceIDInCPlusPlusObject_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_t631007953_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_t631007953_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};
#endif // OBJECT_T631007953_H
#ifndef RAYCASTHIT_T1056001966_H
#define RAYCASTHIT_T1056001966_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.RaycastHit
struct  RaycastHit_t1056001966 
{
public:
	// UnityEngine.Vector3 UnityEngine.RaycastHit::m_Point
	Vector3_t3722313464  ___m_Point_0;
	// UnityEngine.Vector3 UnityEngine.RaycastHit::m_Normal
	Vector3_t3722313464  ___m_Normal_1;
	// System.UInt32 UnityEngine.RaycastHit::m_FaceID
	uint32_t ___m_FaceID_2;
	// System.Single UnityEngine.RaycastHit::m_Distance
	float ___m_Distance_3;
	// UnityEngine.Vector2 UnityEngine.RaycastHit::m_UV
	Vector2_t2156229523  ___m_UV_4;
	// System.Int32 UnityEngine.RaycastHit::m_Collider
	int32_t ___m_Collider_5;

public:
	inline static int32_t get_offset_of_m_Point_0() { return static_cast<int32_t>(offsetof(RaycastHit_t1056001966, ___m_Point_0)); }
	inline Vector3_t3722313464  get_m_Point_0() const { return ___m_Point_0; }
	inline Vector3_t3722313464 * get_address_of_m_Point_0() { return &___m_Point_0; }
	inline void set_m_Point_0(Vector3_t3722313464  value)
	{
		___m_Point_0 = value;
	}

	inline static int32_t get_offset_of_m_Normal_1() { return static_cast<int32_t>(offsetof(RaycastHit_t1056001966, ___m_Normal_1)); }
	inline Vector3_t3722313464  get_m_Normal_1() const { return ___m_Normal_1; }
	inline Vector3_t3722313464 * get_address_of_m_Normal_1() { return &___m_Normal_1; }
	inline void set_m_Normal_1(Vector3_t3722313464  value)
	{
		___m_Normal_1 = value;
	}

	inline static int32_t get_offset_of_m_FaceID_2() { return static_cast<int32_t>(offsetof(RaycastHit_t1056001966, ___m_FaceID_2)); }
	inline uint32_t get_m_FaceID_2() const { return ___m_FaceID_2; }
	inline uint32_t* get_address_of_m_FaceID_2() { return &___m_FaceID_2; }
	inline void set_m_FaceID_2(uint32_t value)
	{
		___m_FaceID_2 = value;
	}

	inline static int32_t get_offset_of_m_Distance_3() { return static_cast<int32_t>(offsetof(RaycastHit_t1056001966, ___m_Distance_3)); }
	inline float get_m_Distance_3() const { return ___m_Distance_3; }
	inline float* get_address_of_m_Distance_3() { return &___m_Distance_3; }
	inline void set_m_Distance_3(float value)
	{
		___m_Distance_3 = value;
	}

	inline static int32_t get_offset_of_m_UV_4() { return static_cast<int32_t>(offsetof(RaycastHit_t1056001966, ___m_UV_4)); }
	inline Vector2_t2156229523  get_m_UV_4() const { return ___m_UV_4; }
	inline Vector2_t2156229523 * get_address_of_m_UV_4() { return &___m_UV_4; }
	inline void set_m_UV_4(Vector2_t2156229523  value)
	{
		___m_UV_4 = value;
	}

	inline static int32_t get_offset_of_m_Collider_5() { return static_cast<int32_t>(offsetof(RaycastHit_t1056001966, ___m_Collider_5)); }
	inline int32_t get_m_Collider_5() const { return ___m_Collider_5; }
	inline int32_t* get_address_of_m_Collider_5() { return &___m_Collider_5; }
	inline void set_m_Collider_5(int32_t value)
	{
		___m_Collider_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RAYCASTHIT_T1056001966_H
#ifndef ARGUMENTNULLEXCEPTION_T1615371798_H
#define ARGUMENTNULLEXCEPTION_T1615371798_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ArgumentNullException
struct  ArgumentNullException_t1615371798  : public ArgumentException_t132251570
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ARGUMENTNULLEXCEPTION_T1615371798_H
#ifndef ARGUMENTOUTOFRANGEEXCEPTION_T777629997_H
#define ARGUMENTOUTOFRANGEEXCEPTION_T777629997_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ArgumentOutOfRangeException
struct  ArgumentOutOfRangeException_t777629997  : public ArgumentException_t132251570
{
public:
	// System.Object System.ArgumentOutOfRangeException::actual_value
	RuntimeObject * ___actual_value_13;

public:
	inline static int32_t get_offset_of_actual_value_13() { return static_cast<int32_t>(offsetof(ArgumentOutOfRangeException_t777629997, ___actual_value_13)); }
	inline RuntimeObject * get_actual_value_13() const { return ___actual_value_13; }
	inline RuntimeObject ** get_address_of_actual_value_13() { return &___actual_value_13; }
	inline void set_actual_value_13(RuntimeObject * value)
	{
		___actual_value_13 = value;
		Il2CppCodeGenWriteBarrier((&___actual_value_13), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ARGUMENTOUTOFRANGEEXCEPTION_T777629997_H
#ifndef DATETIME_T3738529785_H
#define DATETIME_T3738529785_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.DateTime
struct  DateTime_t3738529785 
{
public:
	// System.TimeSpan System.DateTime::ticks
	TimeSpan_t881159249  ___ticks_0;
	// System.DateTimeKind System.DateTime::kind
	int32_t ___kind_1;

public:
	inline static int32_t get_offset_of_ticks_0() { return static_cast<int32_t>(offsetof(DateTime_t3738529785, ___ticks_0)); }
	inline TimeSpan_t881159249  get_ticks_0() const { return ___ticks_0; }
	inline TimeSpan_t881159249 * get_address_of_ticks_0() { return &___ticks_0; }
	inline void set_ticks_0(TimeSpan_t881159249  value)
	{
		___ticks_0 = value;
	}

	inline static int32_t get_offset_of_kind_1() { return static_cast<int32_t>(offsetof(DateTime_t3738529785, ___kind_1)); }
	inline int32_t get_kind_1() const { return ___kind_1; }
	inline int32_t* get_address_of_kind_1() { return &___kind_1; }
	inline void set_kind_1(int32_t value)
	{
		___kind_1 = value;
	}
};

struct DateTime_t3738529785_StaticFields
{
public:
	// System.DateTime System.DateTime::MaxValue
	DateTime_t3738529785  ___MaxValue_2;
	// System.DateTime System.DateTime::MinValue
	DateTime_t3738529785  ___MinValue_3;
	// System.String[] System.DateTime::ParseTimeFormats
	StringU5BU5D_t1281789340* ___ParseTimeFormats_4;
	// System.String[] System.DateTime::ParseYearDayMonthFormats
	StringU5BU5D_t1281789340* ___ParseYearDayMonthFormats_5;
	// System.String[] System.DateTime::ParseYearMonthDayFormats
	StringU5BU5D_t1281789340* ___ParseYearMonthDayFormats_6;
	// System.String[] System.DateTime::ParseDayMonthYearFormats
	StringU5BU5D_t1281789340* ___ParseDayMonthYearFormats_7;
	// System.String[] System.DateTime::ParseMonthDayYearFormats
	StringU5BU5D_t1281789340* ___ParseMonthDayYearFormats_8;
	// System.String[] System.DateTime::MonthDayShortFormats
	StringU5BU5D_t1281789340* ___MonthDayShortFormats_9;
	// System.String[] System.DateTime::DayMonthShortFormats
	StringU5BU5D_t1281789340* ___DayMonthShortFormats_10;
	// System.Int32[] System.DateTime::daysmonth
	Int32U5BU5D_t385246372* ___daysmonth_11;
	// System.Int32[] System.DateTime::daysmonthleap
	Int32U5BU5D_t385246372* ___daysmonthleap_12;
	// System.Object System.DateTime::to_local_time_span_object
	RuntimeObject * ___to_local_time_span_object_13;
	// System.Int64 System.DateTime::last_now
	int64_t ___last_now_14;

public:
	inline static int32_t get_offset_of_MaxValue_2() { return static_cast<int32_t>(offsetof(DateTime_t3738529785_StaticFields, ___MaxValue_2)); }
	inline DateTime_t3738529785  get_MaxValue_2() const { return ___MaxValue_2; }
	inline DateTime_t3738529785 * get_address_of_MaxValue_2() { return &___MaxValue_2; }
	inline void set_MaxValue_2(DateTime_t3738529785  value)
	{
		___MaxValue_2 = value;
	}

	inline static int32_t get_offset_of_MinValue_3() { return static_cast<int32_t>(offsetof(DateTime_t3738529785_StaticFields, ___MinValue_3)); }
	inline DateTime_t3738529785  get_MinValue_3() const { return ___MinValue_3; }
	inline DateTime_t3738529785 * get_address_of_MinValue_3() { return &___MinValue_3; }
	inline void set_MinValue_3(DateTime_t3738529785  value)
	{
		___MinValue_3 = value;
	}

	inline static int32_t get_offset_of_ParseTimeFormats_4() { return static_cast<int32_t>(offsetof(DateTime_t3738529785_StaticFields, ___ParseTimeFormats_4)); }
	inline StringU5BU5D_t1281789340* get_ParseTimeFormats_4() const { return ___ParseTimeFormats_4; }
	inline StringU5BU5D_t1281789340** get_address_of_ParseTimeFormats_4() { return &___ParseTimeFormats_4; }
	inline void set_ParseTimeFormats_4(StringU5BU5D_t1281789340* value)
	{
		___ParseTimeFormats_4 = value;
		Il2CppCodeGenWriteBarrier((&___ParseTimeFormats_4), value);
	}

	inline static int32_t get_offset_of_ParseYearDayMonthFormats_5() { return static_cast<int32_t>(offsetof(DateTime_t3738529785_StaticFields, ___ParseYearDayMonthFormats_5)); }
	inline StringU5BU5D_t1281789340* get_ParseYearDayMonthFormats_5() const { return ___ParseYearDayMonthFormats_5; }
	inline StringU5BU5D_t1281789340** get_address_of_ParseYearDayMonthFormats_5() { return &___ParseYearDayMonthFormats_5; }
	inline void set_ParseYearDayMonthFormats_5(StringU5BU5D_t1281789340* value)
	{
		___ParseYearDayMonthFormats_5 = value;
		Il2CppCodeGenWriteBarrier((&___ParseYearDayMonthFormats_5), value);
	}

	inline static int32_t get_offset_of_ParseYearMonthDayFormats_6() { return static_cast<int32_t>(offsetof(DateTime_t3738529785_StaticFields, ___ParseYearMonthDayFormats_6)); }
	inline StringU5BU5D_t1281789340* get_ParseYearMonthDayFormats_6() const { return ___ParseYearMonthDayFormats_6; }
	inline StringU5BU5D_t1281789340** get_address_of_ParseYearMonthDayFormats_6() { return &___ParseYearMonthDayFormats_6; }
	inline void set_ParseYearMonthDayFormats_6(StringU5BU5D_t1281789340* value)
	{
		___ParseYearMonthDayFormats_6 = value;
		Il2CppCodeGenWriteBarrier((&___ParseYearMonthDayFormats_6), value);
	}

	inline static int32_t get_offset_of_ParseDayMonthYearFormats_7() { return static_cast<int32_t>(offsetof(DateTime_t3738529785_StaticFields, ___ParseDayMonthYearFormats_7)); }
	inline StringU5BU5D_t1281789340* get_ParseDayMonthYearFormats_7() const { return ___ParseDayMonthYearFormats_7; }
	inline StringU5BU5D_t1281789340** get_address_of_ParseDayMonthYearFormats_7() { return &___ParseDayMonthYearFormats_7; }
	inline void set_ParseDayMonthYearFormats_7(StringU5BU5D_t1281789340* value)
	{
		___ParseDayMonthYearFormats_7 = value;
		Il2CppCodeGenWriteBarrier((&___ParseDayMonthYearFormats_7), value);
	}

	inline static int32_t get_offset_of_ParseMonthDayYearFormats_8() { return static_cast<int32_t>(offsetof(DateTime_t3738529785_StaticFields, ___ParseMonthDayYearFormats_8)); }
	inline StringU5BU5D_t1281789340* get_ParseMonthDayYearFormats_8() const { return ___ParseMonthDayYearFormats_8; }
	inline StringU5BU5D_t1281789340** get_address_of_ParseMonthDayYearFormats_8() { return &___ParseMonthDayYearFormats_8; }
	inline void set_ParseMonthDayYearFormats_8(StringU5BU5D_t1281789340* value)
	{
		___ParseMonthDayYearFormats_8 = value;
		Il2CppCodeGenWriteBarrier((&___ParseMonthDayYearFormats_8), value);
	}

	inline static int32_t get_offset_of_MonthDayShortFormats_9() { return static_cast<int32_t>(offsetof(DateTime_t3738529785_StaticFields, ___MonthDayShortFormats_9)); }
	inline StringU5BU5D_t1281789340* get_MonthDayShortFormats_9() const { return ___MonthDayShortFormats_9; }
	inline StringU5BU5D_t1281789340** get_address_of_MonthDayShortFormats_9() { return &___MonthDayShortFormats_9; }
	inline void set_MonthDayShortFormats_9(StringU5BU5D_t1281789340* value)
	{
		___MonthDayShortFormats_9 = value;
		Il2CppCodeGenWriteBarrier((&___MonthDayShortFormats_9), value);
	}

	inline static int32_t get_offset_of_DayMonthShortFormats_10() { return static_cast<int32_t>(offsetof(DateTime_t3738529785_StaticFields, ___DayMonthShortFormats_10)); }
	inline StringU5BU5D_t1281789340* get_DayMonthShortFormats_10() const { return ___DayMonthShortFormats_10; }
	inline StringU5BU5D_t1281789340** get_address_of_DayMonthShortFormats_10() { return &___DayMonthShortFormats_10; }
	inline void set_DayMonthShortFormats_10(StringU5BU5D_t1281789340* value)
	{
		___DayMonthShortFormats_10 = value;
		Il2CppCodeGenWriteBarrier((&___DayMonthShortFormats_10), value);
	}

	inline static int32_t get_offset_of_daysmonth_11() { return static_cast<int32_t>(offsetof(DateTime_t3738529785_StaticFields, ___daysmonth_11)); }
	inline Int32U5BU5D_t385246372* get_daysmonth_11() const { return ___daysmonth_11; }
	inline Int32U5BU5D_t385246372** get_address_of_daysmonth_11() { return &___daysmonth_11; }
	inline void set_daysmonth_11(Int32U5BU5D_t385246372* value)
	{
		___daysmonth_11 = value;
		Il2CppCodeGenWriteBarrier((&___daysmonth_11), value);
	}

	inline static int32_t get_offset_of_daysmonthleap_12() { return static_cast<int32_t>(offsetof(DateTime_t3738529785_StaticFields, ___daysmonthleap_12)); }
	inline Int32U5BU5D_t385246372* get_daysmonthleap_12() const { return ___daysmonthleap_12; }
	inline Int32U5BU5D_t385246372** get_address_of_daysmonthleap_12() { return &___daysmonthleap_12; }
	inline void set_daysmonthleap_12(Int32U5BU5D_t385246372* value)
	{
		___daysmonthleap_12 = value;
		Il2CppCodeGenWriteBarrier((&___daysmonthleap_12), value);
	}

	inline static int32_t get_offset_of_to_local_time_span_object_13() { return static_cast<int32_t>(offsetof(DateTime_t3738529785_StaticFields, ___to_local_time_span_object_13)); }
	inline RuntimeObject * get_to_local_time_span_object_13() const { return ___to_local_time_span_object_13; }
	inline RuntimeObject ** get_address_of_to_local_time_span_object_13() { return &___to_local_time_span_object_13; }
	inline void set_to_local_time_span_object_13(RuntimeObject * value)
	{
		___to_local_time_span_object_13 = value;
		Il2CppCodeGenWriteBarrier((&___to_local_time_span_object_13), value);
	}

	inline static int32_t get_offset_of_last_now_14() { return static_cast<int32_t>(offsetof(DateTime_t3738529785_StaticFields, ___last_now_14)); }
	inline int64_t get_last_now_14() const { return ___last_now_14; }
	inline int64_t* get_address_of_last_now_14() { return &___last_now_14; }
	inline void set_last_now_14(int64_t value)
	{
		___last_now_14 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DATETIME_T3738529785_H
#ifndef MULTICASTDELEGATE_T_H
#define MULTICASTDELEGATE_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.MulticastDelegate
struct  MulticastDelegate_t  : public Delegate_t1188392813
{
public:
	// System.MulticastDelegate System.MulticastDelegate::prev
	MulticastDelegate_t * ___prev_9;
	// System.MulticastDelegate System.MulticastDelegate::kpm_next
	MulticastDelegate_t * ___kpm_next_10;

public:
	inline static int32_t get_offset_of_prev_9() { return static_cast<int32_t>(offsetof(MulticastDelegate_t, ___prev_9)); }
	inline MulticastDelegate_t * get_prev_9() const { return ___prev_9; }
	inline MulticastDelegate_t ** get_address_of_prev_9() { return &___prev_9; }
	inline void set_prev_9(MulticastDelegate_t * value)
	{
		___prev_9 = value;
		Il2CppCodeGenWriteBarrier((&___prev_9), value);
	}

	inline static int32_t get_offset_of_kpm_next_10() { return static_cast<int32_t>(offsetof(MulticastDelegate_t, ___kpm_next_10)); }
	inline MulticastDelegate_t * get_kpm_next_10() const { return ___kpm_next_10; }
	inline MulticastDelegate_t ** get_address_of_kpm_next_10() { return &___kpm_next_10; }
	inline void set_kpm_next_10(MulticastDelegate_t * value)
	{
		___kpm_next_10 = value;
		Il2CppCodeGenWriteBarrier((&___kpm_next_10), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MULTICASTDELEGATE_T_H
#ifndef MONORESOURCE_T4103430009_H
#define MONORESOURCE_T4103430009_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.Emit.MonoResource
struct  MonoResource_t4103430009 
{
public:
	// System.Byte[] System.Reflection.Emit.MonoResource::data
	ByteU5BU5D_t4116647657* ___data_0;
	// System.String System.Reflection.Emit.MonoResource::name
	String_t* ___name_1;
	// System.String System.Reflection.Emit.MonoResource::filename
	String_t* ___filename_2;
	// System.Reflection.ResourceAttributes System.Reflection.Emit.MonoResource::attrs
	int32_t ___attrs_3;
	// System.Int32 System.Reflection.Emit.MonoResource::offset
	int32_t ___offset_4;
	// System.IO.Stream System.Reflection.Emit.MonoResource::stream
	Stream_t1273022909 * ___stream_5;

public:
	inline static int32_t get_offset_of_data_0() { return static_cast<int32_t>(offsetof(MonoResource_t4103430009, ___data_0)); }
	inline ByteU5BU5D_t4116647657* get_data_0() const { return ___data_0; }
	inline ByteU5BU5D_t4116647657** get_address_of_data_0() { return &___data_0; }
	inline void set_data_0(ByteU5BU5D_t4116647657* value)
	{
		___data_0 = value;
		Il2CppCodeGenWriteBarrier((&___data_0), value);
	}

	inline static int32_t get_offset_of_name_1() { return static_cast<int32_t>(offsetof(MonoResource_t4103430009, ___name_1)); }
	inline String_t* get_name_1() const { return ___name_1; }
	inline String_t** get_address_of_name_1() { return &___name_1; }
	inline void set_name_1(String_t* value)
	{
		___name_1 = value;
		Il2CppCodeGenWriteBarrier((&___name_1), value);
	}

	inline static int32_t get_offset_of_filename_2() { return static_cast<int32_t>(offsetof(MonoResource_t4103430009, ___filename_2)); }
	inline String_t* get_filename_2() const { return ___filename_2; }
	inline String_t** get_address_of_filename_2() { return &___filename_2; }
	inline void set_filename_2(String_t* value)
	{
		___filename_2 = value;
		Il2CppCodeGenWriteBarrier((&___filename_2), value);
	}

	inline static int32_t get_offset_of_attrs_3() { return static_cast<int32_t>(offsetof(MonoResource_t4103430009, ___attrs_3)); }
	inline int32_t get_attrs_3() const { return ___attrs_3; }
	inline int32_t* get_address_of_attrs_3() { return &___attrs_3; }
	inline void set_attrs_3(int32_t value)
	{
		___attrs_3 = value;
	}

	inline static int32_t get_offset_of_offset_4() { return static_cast<int32_t>(offsetof(MonoResource_t4103430009, ___offset_4)); }
	inline int32_t get_offset_4() const { return ___offset_4; }
	inline int32_t* get_address_of_offset_4() { return &___offset_4; }
	inline void set_offset_4(int32_t value)
	{
		___offset_4 = value;
	}

	inline static int32_t get_offset_of_stream_5() { return static_cast<int32_t>(offsetof(MonoResource_t4103430009, ___stream_5)); }
	inline Stream_t1273022909 * get_stream_5() const { return ___stream_5; }
	inline Stream_t1273022909 ** get_address_of_stream_5() { return &___stream_5; }
	inline void set_stream_5(Stream_t1273022909 * value)
	{
		___stream_5 = value;
		Il2CppCodeGenWriteBarrier((&___stream_5), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Reflection.Emit.MonoResource
struct MonoResource_t4103430009_marshaled_pinvoke
{
	uint8_t* ___data_0;
	char* ___name_1;
	char* ___filename_2;
	int32_t ___attrs_3;
	int32_t ___offset_4;
	Stream_t1273022909 * ___stream_5;
};
// Native definition for COM marshalling of System.Reflection.Emit.MonoResource
struct MonoResource_t4103430009_marshaled_com
{
	uint8_t* ___data_0;
	Il2CppChar* ___name_1;
	Il2CppChar* ___filename_2;
	int32_t ___attrs_3;
	int32_t ___offset_4;
	Stream_t1273022909 * ___stream_5;
};
#endif // MONORESOURCE_T4103430009_H
#ifndef REFEMITPERMISSIONSET_T484390987_H
#define REFEMITPERMISSIONSET_T484390987_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.Emit.RefEmitPermissionSet
struct  RefEmitPermissionSet_t484390987 
{
public:
	// System.Security.Permissions.SecurityAction System.Reflection.Emit.RefEmitPermissionSet::action
	int32_t ___action_0;
	// System.String System.Reflection.Emit.RefEmitPermissionSet::pset
	String_t* ___pset_1;

public:
	inline static int32_t get_offset_of_action_0() { return static_cast<int32_t>(offsetof(RefEmitPermissionSet_t484390987, ___action_0)); }
	inline int32_t get_action_0() const { return ___action_0; }
	inline int32_t* get_address_of_action_0() { return &___action_0; }
	inline void set_action_0(int32_t value)
	{
		___action_0 = value;
	}

	inline static int32_t get_offset_of_pset_1() { return static_cast<int32_t>(offsetof(RefEmitPermissionSet_t484390987, ___pset_1)); }
	inline String_t* get_pset_1() const { return ___pset_1; }
	inline String_t** get_address_of_pset_1() { return &___pset_1; }
	inline void set_pset_1(String_t* value)
	{
		___pset_1 = value;
		Il2CppCodeGenWriteBarrier((&___pset_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Reflection.Emit.RefEmitPermissionSet
struct RefEmitPermissionSet_t484390987_marshaled_pinvoke
{
	int32_t ___action_0;
	char* ___pset_1;
};
// Native definition for COM marshalling of System.Reflection.Emit.RefEmitPermissionSet
struct RefEmitPermissionSet_t484390987_marshaled_com
{
	int32_t ___action_0;
	Il2CppChar* ___pset_1;
};
#endif // REFEMITPERMISSIONSET_T484390987_H
#ifndef X509CHAINSTATUS_T133602714_H
#define X509CHAINSTATUS_T133602714_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.X509Certificates.X509ChainStatus
struct  X509ChainStatus_t133602714 
{
public:
	// System.Security.Cryptography.X509Certificates.X509ChainStatusFlags System.Security.Cryptography.X509Certificates.X509ChainStatus::status
	int32_t ___status_0;
	// System.String System.Security.Cryptography.X509Certificates.X509ChainStatus::info
	String_t* ___info_1;

public:
	inline static int32_t get_offset_of_status_0() { return static_cast<int32_t>(offsetof(X509ChainStatus_t133602714, ___status_0)); }
	inline int32_t get_status_0() const { return ___status_0; }
	inline int32_t* get_address_of_status_0() { return &___status_0; }
	inline void set_status_0(int32_t value)
	{
		___status_0 = value;
	}

	inline static int32_t get_offset_of_info_1() { return static_cast<int32_t>(offsetof(X509ChainStatus_t133602714, ___info_1)); }
	inline String_t* get_info_1() const { return ___info_1; }
	inline String_t** get_address_of_info_1() { return &___info_1; }
	inline void set_info_1(String_t* value)
	{
		___info_1 = value;
		Il2CppCodeGenWriteBarrier((&___info_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Security.Cryptography.X509Certificates.X509ChainStatus
struct X509ChainStatus_t133602714_marshaled_pinvoke
{
	int32_t ___status_0;
	char* ___info_1;
};
// Native definition for COM marshalling of System.Security.Cryptography.X509Certificates.X509ChainStatus
struct X509ChainStatus_t133602714_marshaled_com
{
	int32_t ___status_0;
	Il2CppChar* ___info_1;
};
#endif // X509CHAINSTATUS_T133602714_H
#ifndef TYPE_T_H
#define TYPE_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Type
struct  Type_t  : public MemberInfo_t
{
public:
	// System.RuntimeTypeHandle System.Type::_impl
	RuntimeTypeHandle_t3027515415  ____impl_1;

public:
	inline static int32_t get_offset_of__impl_1() { return static_cast<int32_t>(offsetof(Type_t, ____impl_1)); }
	inline RuntimeTypeHandle_t3027515415  get__impl_1() const { return ____impl_1; }
	inline RuntimeTypeHandle_t3027515415 * get_address_of__impl_1() { return &____impl_1; }
	inline void set__impl_1(RuntimeTypeHandle_t3027515415  value)
	{
		____impl_1 = value;
	}
};

struct Type_t_StaticFields
{
public:
	// System.Char System.Type::Delimiter
	Il2CppChar ___Delimiter_2;
	// System.Type[] System.Type::EmptyTypes
	TypeU5BU5D_t3940880105* ___EmptyTypes_3;
	// System.Reflection.MemberFilter System.Type::FilterAttribute
	MemberFilter_t426314064 * ___FilterAttribute_4;
	// System.Reflection.MemberFilter System.Type::FilterName
	MemberFilter_t426314064 * ___FilterName_5;
	// System.Reflection.MemberFilter System.Type::FilterNameIgnoreCase
	MemberFilter_t426314064 * ___FilterNameIgnoreCase_6;
	// System.Object System.Type::Missing
	RuntimeObject * ___Missing_7;

public:
	inline static int32_t get_offset_of_Delimiter_2() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___Delimiter_2)); }
	inline Il2CppChar get_Delimiter_2() const { return ___Delimiter_2; }
	inline Il2CppChar* get_address_of_Delimiter_2() { return &___Delimiter_2; }
	inline void set_Delimiter_2(Il2CppChar value)
	{
		___Delimiter_2 = value;
	}

	inline static int32_t get_offset_of_EmptyTypes_3() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___EmptyTypes_3)); }
	inline TypeU5BU5D_t3940880105* get_EmptyTypes_3() const { return ___EmptyTypes_3; }
	inline TypeU5BU5D_t3940880105** get_address_of_EmptyTypes_3() { return &___EmptyTypes_3; }
	inline void set_EmptyTypes_3(TypeU5BU5D_t3940880105* value)
	{
		___EmptyTypes_3 = value;
		Il2CppCodeGenWriteBarrier((&___EmptyTypes_3), value);
	}

	inline static int32_t get_offset_of_FilterAttribute_4() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterAttribute_4)); }
	inline MemberFilter_t426314064 * get_FilterAttribute_4() const { return ___FilterAttribute_4; }
	inline MemberFilter_t426314064 ** get_address_of_FilterAttribute_4() { return &___FilterAttribute_4; }
	inline void set_FilterAttribute_4(MemberFilter_t426314064 * value)
	{
		___FilterAttribute_4 = value;
		Il2CppCodeGenWriteBarrier((&___FilterAttribute_4), value);
	}

	inline static int32_t get_offset_of_FilterName_5() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterName_5)); }
	inline MemberFilter_t426314064 * get_FilterName_5() const { return ___FilterName_5; }
	inline MemberFilter_t426314064 ** get_address_of_FilterName_5() { return &___FilterName_5; }
	inline void set_FilterName_5(MemberFilter_t426314064 * value)
	{
		___FilterName_5 = value;
		Il2CppCodeGenWriteBarrier((&___FilterName_5), value);
	}

	inline static int32_t get_offset_of_FilterNameIgnoreCase_6() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterNameIgnoreCase_6)); }
	inline MemberFilter_t426314064 * get_FilterNameIgnoreCase_6() const { return ___FilterNameIgnoreCase_6; }
	inline MemberFilter_t426314064 ** get_address_of_FilterNameIgnoreCase_6() { return &___FilterNameIgnoreCase_6; }
	inline void set_FilterNameIgnoreCase_6(MemberFilter_t426314064 * value)
	{
		___FilterNameIgnoreCase_6 = value;
		Il2CppCodeGenWriteBarrier((&___FilterNameIgnoreCase_6), value);
	}

	inline static int32_t get_offset_of_Missing_7() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___Missing_7)); }
	inline RuntimeObject * get_Missing_7() const { return ___Missing_7; }
	inline RuntimeObject ** get_address_of_Missing_7() { return &___Missing_7; }
	inline void set_Missing_7(RuntimeObject * value)
	{
		___Missing_7 = value;
		Il2CppCodeGenWriteBarrier((&___Missing_7), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TYPE_T_H
#ifndef COMPONENT_T1923634451_H
#define COMPONENT_T1923634451_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Component
struct  Component_t1923634451  : public Object_t631007953
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COMPONENT_T1923634451_H
#ifndef GAMEOBJECT_T1113636619_H
#define GAMEOBJECT_T1113636619_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.GameObject
struct  GameObject_t1113636619  : public Object_t631007953
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GAMEOBJECT_T1113636619_H
#ifndef PLAYABLEBINDING_T354260709_H
#define PLAYABLEBINDING_T354260709_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Playables.PlayableBinding
struct  PlayableBinding_t354260709 
{
public:
	// System.String UnityEngine.Playables.PlayableBinding::m_StreamName
	String_t* ___m_StreamName_0;
	// UnityEngine.Object UnityEngine.Playables.PlayableBinding::m_SourceObject
	Object_t631007953 * ___m_SourceObject_1;
	// System.Type UnityEngine.Playables.PlayableBinding::m_SourceBindingType
	Type_t * ___m_SourceBindingType_2;
	// UnityEngine.Playables.PlayableBinding/CreateOutputMethod UnityEngine.Playables.PlayableBinding::m_CreateOutputMethod
	CreateOutputMethod_t2301811773 * ___m_CreateOutputMethod_3;

public:
	inline static int32_t get_offset_of_m_StreamName_0() { return static_cast<int32_t>(offsetof(PlayableBinding_t354260709, ___m_StreamName_0)); }
	inline String_t* get_m_StreamName_0() const { return ___m_StreamName_0; }
	inline String_t** get_address_of_m_StreamName_0() { return &___m_StreamName_0; }
	inline void set_m_StreamName_0(String_t* value)
	{
		___m_StreamName_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_StreamName_0), value);
	}

	inline static int32_t get_offset_of_m_SourceObject_1() { return static_cast<int32_t>(offsetof(PlayableBinding_t354260709, ___m_SourceObject_1)); }
	inline Object_t631007953 * get_m_SourceObject_1() const { return ___m_SourceObject_1; }
	inline Object_t631007953 ** get_address_of_m_SourceObject_1() { return &___m_SourceObject_1; }
	inline void set_m_SourceObject_1(Object_t631007953 * value)
	{
		___m_SourceObject_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_SourceObject_1), value);
	}

	inline static int32_t get_offset_of_m_SourceBindingType_2() { return static_cast<int32_t>(offsetof(PlayableBinding_t354260709, ___m_SourceBindingType_2)); }
	inline Type_t * get_m_SourceBindingType_2() const { return ___m_SourceBindingType_2; }
	inline Type_t ** get_address_of_m_SourceBindingType_2() { return &___m_SourceBindingType_2; }
	inline void set_m_SourceBindingType_2(Type_t * value)
	{
		___m_SourceBindingType_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_SourceBindingType_2), value);
	}

	inline static int32_t get_offset_of_m_CreateOutputMethod_3() { return static_cast<int32_t>(offsetof(PlayableBinding_t354260709, ___m_CreateOutputMethod_3)); }
	inline CreateOutputMethod_t2301811773 * get_m_CreateOutputMethod_3() const { return ___m_CreateOutputMethod_3; }
	inline CreateOutputMethod_t2301811773 ** get_address_of_m_CreateOutputMethod_3() { return &___m_CreateOutputMethod_3; }
	inline void set_m_CreateOutputMethod_3(CreateOutputMethod_t2301811773 * value)
	{
		___m_CreateOutputMethod_3 = value;
		Il2CppCodeGenWriteBarrier((&___m_CreateOutputMethod_3), value);
	}
};

struct PlayableBinding_t354260709_StaticFields
{
public:
	// UnityEngine.Playables.PlayableBinding[] UnityEngine.Playables.PlayableBinding::None
	PlayableBindingU5BU5D_t829358056* ___None_4;
	// System.Double UnityEngine.Playables.PlayableBinding::DefaultDuration
	double ___DefaultDuration_5;

public:
	inline static int32_t get_offset_of_None_4() { return static_cast<int32_t>(offsetof(PlayableBinding_t354260709_StaticFields, ___None_4)); }
	inline PlayableBindingU5BU5D_t829358056* get_None_4() const { return ___None_4; }
	inline PlayableBindingU5BU5D_t829358056** get_address_of_None_4() { return &___None_4; }
	inline void set_None_4(PlayableBindingU5BU5D_t829358056* value)
	{
		___None_4 = value;
		Il2CppCodeGenWriteBarrier((&___None_4), value);
	}

	inline static int32_t get_offset_of_DefaultDuration_5() { return static_cast<int32_t>(offsetof(PlayableBinding_t354260709_StaticFields, ___DefaultDuration_5)); }
	inline double get_DefaultDuration_5() const { return ___DefaultDuration_5; }
	inline double* get_address_of_DefaultDuration_5() { return &___DefaultDuration_5; }
	inline void set_DefaultDuration_5(double value)
	{
		___DefaultDuration_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.Playables.PlayableBinding
struct PlayableBinding_t354260709_marshaled_pinvoke
{
	char* ___m_StreamName_0;
	Object_t631007953_marshaled_pinvoke ___m_SourceObject_1;
	Type_t * ___m_SourceBindingType_2;
	Il2CppMethodPointer ___m_CreateOutputMethod_3;
};
// Native definition for COM marshalling of UnityEngine.Playables.PlayableBinding
struct PlayableBinding_t354260709_marshaled_com
{
	Il2CppChar* ___m_StreamName_0;
	Object_t631007953_marshaled_com* ___m_SourceObject_1;
	Type_t * ___m_SourceBindingType_2;
	Il2CppMethodPointer ___m_CreateOutputMethod_3;
};
#endif // PLAYABLEBINDING_T354260709_H
#ifndef SCRIPTABLEOBJECT_T2528358522_H
#define SCRIPTABLEOBJECT_T2528358522_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.ScriptableObject
struct  ScriptableObject_t2528358522  : public Object_t631007953
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_t2528358522_marshaled_pinvoke : public Object_t631007953_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_t2528358522_marshaled_com : public Object_t631007953_marshaled_com
{
};
#endif // SCRIPTABLEOBJECT_T2528358522_H
#ifndef TRANSFORM_1_T1027527961_H
#define TRANSFORM_1_T1027527961_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Int32,System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>
struct  Transform_1_t1027527961  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TRANSFORM_1_T1027527961_H
#ifndef TRANSFORM_1_T1706577217_H
#define TRANSFORM_1_T1706577217_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Int32,System.Object>
struct  Transform_1_t1706577217  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TRANSFORM_1_T1706577217_H
#ifndef TRANSFORM_1_T4209139644_H
#define TRANSFORM_1_T4209139644_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Object,System.Collections.DictionaryEntry>
struct  Transform_1_t4209139644  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TRANSFORM_1_T4209139644_H
#ifndef TRANSFORM_1_T3615381325_H
#define TRANSFORM_1_T3615381325_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct  Transform_1_t3615381325  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TRANSFORM_1_T3615381325_H
#ifndef TRANSFORM_1_T4165270170_H
#define TRANSFORM_1_T4165270170_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Object,System.Object>
struct  Transform_1_t4165270170  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TRANSFORM_1_T4165270170_H
#ifndef CONVERTER_2_T2442480487_H
#define CONVERTER_2_T2442480487_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Converter`2<System.Object,System.Object>
struct  Converter_2_t2442480487  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CONVERTER_2_T2442480487_H
#ifndef FUNC_2_T3759279471_H
#define FUNC_2_T3759279471_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Func`2<System.Object,System.Boolean>
struct  Func_2_t3759279471  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FUNC_2_T3759279471_H
#ifndef PREDICATE_1_T3905400288_H
#define PREDICATE_1_T3905400288_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Predicate`1<System.Object>
struct  Predicate_1_t3905400288  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PREDICATE_1_T3905400288_H
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>[]
struct KeyValuePair_2U5BU5D_t1954543557  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) KeyValuePair_2_t2401056908  m_Items[1];

public:
	inline KeyValuePair_2_t2401056908  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline KeyValuePair_2_t2401056908 * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, KeyValuePair_2_t2401056908  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline KeyValuePair_2_t2401056908  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline KeyValuePair_2_t2401056908 * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, KeyValuePair_2_t2401056908  value)
	{
		m_Items[index] = value;
	}
};
// System.Collections.Generic.Link[]
struct LinkU5BU5D_t964245573  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Link_t544317964  m_Items[1];

public:
	inline Link_t544317964  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Link_t544317964 * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Link_t544317964  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Link_t544317964  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Link_t544317964 * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Link_t544317964  value)
	{
		m_Items[index] = value;
	}
};
// System.Object[]
struct ObjectU5BU5D_t2843939325  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) RuntimeObject * m_Items[1];

public:
	inline RuntimeObject * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RuntimeObject ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RuntimeObject * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
	inline RuntimeObject * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RuntimeObject ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RuntimeObject * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
// System.Int32[]
struct Int32U5BU5D_t385246372  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) int32_t m_Items[1];

public:
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
// System.Collections.DictionaryEntry[]
struct DictionaryEntryU5BU5D_t4217117203  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) DictionaryEntry_t3123975638  m_Items[1];

public:
	inline DictionaryEntry_t3123975638  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline DictionaryEntry_t3123975638 * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, DictionaryEntry_t3123975638  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline DictionaryEntry_t3123975638  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline DictionaryEntry_t3123975638 * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, DictionaryEntry_t3123975638  value)
	{
		m_Items[index] = value;
	}
};
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>[]
struct KeyValuePair_2U5BU5D_t118269214  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) KeyValuePair_2_t2530217319  m_Items[1];

public:
	inline KeyValuePair_2_t2530217319  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline KeyValuePair_2_t2530217319 * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, KeyValuePair_2_t2530217319  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline KeyValuePair_2_t2530217319  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline KeyValuePair_2_t2530217319 * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, KeyValuePair_2_t2530217319  value)
	{
		m_Items[index] = value;
	}
};
// System.Reflection.CustomAttributeNamedArgument[]
struct CustomAttributeNamedArgumentU5BU5D_t3710464795  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) CustomAttributeNamedArgument_t287865710  m_Items[1];

public:
	inline CustomAttributeNamedArgument_t287865710  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline CustomAttributeNamedArgument_t287865710 * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, CustomAttributeNamedArgument_t287865710  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline CustomAttributeNamedArgument_t287865710  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline CustomAttributeNamedArgument_t287865710 * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, CustomAttributeNamedArgument_t287865710  value)
	{
		m_Items[index] = value;
	}
};
// System.Reflection.CustomAttributeTypedArgument[]
struct CustomAttributeTypedArgumentU5BU5D_t1465843424  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) CustomAttributeTypedArgument_t2723150157  m_Items[1];

public:
	inline CustomAttributeTypedArgument_t2723150157  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline CustomAttributeTypedArgument_t2723150157 * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, CustomAttributeTypedArgument_t2723150157  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline CustomAttributeTypedArgument_t2723150157  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline CustomAttributeTypedArgument_t2723150157 * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, CustomAttributeTypedArgument_t2723150157  value)
	{
		m_Items[index] = value;
	}
};



// System.Type System.Type::GetTypeFromHandle(System.RuntimeTypeHandle)
extern "C" IL2CPP_METHOD_ATTR Type_t * Type_GetTypeFromHandle_m1620074514 (RuntimeObject * __this /* static, unused */, RuntimeTypeHandle_t3027515415  ___handle0, const RuntimeMethod* method);
// System.Type System.Object::GetType()
extern "C" IL2CPP_METHOD_ATTR Type_t * Object_GetType_m88164663 (RuntimeObject * __this, const RuntimeMethod* method);
// System.Boolean System.Type::get_IsPrimitive()
extern "C" IL2CPP_METHOD_ATTR bool Type_get_IsPrimitive_m1114712797 (Type_t * __this, const RuntimeMethod* method);
// System.Void System.Exception::.ctor()
extern "C" IL2CPP_METHOD_ATTR void Exception__ctor_m213470898 (Exception_t * __this, const RuntimeMethod* method);
// System.Void System.ArgumentException::.ctor(System.String,System.String,System.Exception)
extern "C" IL2CPP_METHOD_ATTR void ArgumentException__ctor_m3761792013 (ArgumentException_t132251570 * __this, String_t* ___message0, String_t* ___paramName1, Exception_t * ___innerException2, const RuntimeMethod* method);
// System.String UnityEngine.UnityString::Format(System.String,System.Object[])
extern "C" IL2CPP_METHOD_ATTR String_t* UnityString_Format_m261690510 (RuntimeObject * __this /* static, unused */, String_t* p0, ObjectU5BU5D_t2843939325* p1, const RuntimeMethod* method);
// System.Void System.ArgumentException::.ctor(System.String)
extern "C" IL2CPP_METHOD_ATTR void ArgumentException__ctor_m1312628991 (ArgumentException_t132251570 * __this, String_t* p0, const RuntimeMethod* method);
// System.Void System.ArgumentNullException::.ctor(System.String)
extern "C" IL2CPP_METHOD_ATTR void ArgumentNullException__ctor_m1170824041 (ArgumentNullException_t1615371798 * __this, String_t* ___paramName0, const RuntimeMethod* method);
// System.Int32 System.Array::get_Length()
extern "C" IL2CPP_METHOD_ATTR int32_t Array_get_Length_m21610649 (RuntimeArray * __this, const RuntimeMethod* method);
// System.Void System.ArgumentOutOfRangeException::.ctor(System.String)
extern "C" IL2CPP_METHOD_ATTR void ArgumentOutOfRangeException__ctor_m3628145864 (ArgumentOutOfRangeException_t777629997 * __this, String_t* ___paramName0, const RuntimeMethod* method);
// System.Void System.IntPtr::.ctor(System.Void*)
extern "C" IL2CPP_METHOD_ATTR void IntPtr__ctor_m3384658186 (intptr_t* __this, void* p0, const RuntimeMethod* method);
// System.Void UnityEngine.Component::GetComponentFastPath(System.Type,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void Component_GetComponentFastPath_m1180649031 (Component_t1923634451 * __this, Type_t * ___type0, intptr_t ___oneFurtherThanResultValue1, const RuntimeMethod* method);
// System.Void UnityEngine.GameObject::GetComponentFastPath(System.Type,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void GameObject_GetComponentFastPath_m2620139331 (GameObject_t1113636619 * __this, Type_t * ___type0, intptr_t ___oneFurtherThanResultValue1, const RuntimeMethod* method);
// UnityEngine.ScriptableObject UnityEngine.ScriptableObject::CreateInstance(System.Type)
extern "C" IL2CPP_METHOD_ATTR ScriptableObject_t2528358522 * ScriptableObject_CreateInstance_m2611081756 (RuntimeObject * __this /* static, unused */, Type_t * ___type0, const RuntimeMethod* method);
// System.Void System.InvalidOperationException::.ctor()
extern "C" IL2CPP_METHOD_ATTR void InvalidOperationException__ctor_m2734335978 (InvalidOperationException_t56020091 * __this, const RuntimeMethod* method);
// System.Void System.Linq.Check::SourceAndPredicate(System.Object,System.Object)
extern "C" IL2CPP_METHOD_ATTR void Check_SourceAndPredicate_m2332465641 (RuntimeObject * __this /* static, unused */, RuntimeObject * ___source0, RuntimeObject * ___predicate1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::Do_CopyTo<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>,System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>(TElem[],System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,TRet>)
extern "C" IL2CPP_METHOD_ATTR void Dictionary_2_Do_CopyTo_TisKeyValuePair_2_t2401056908_TisKeyValuePair_2_t2401056908_m676905794_gshared (Dictionary_2_t3384741 * __this, KeyValuePair_2U5BU5D_t1954543557* ___array0, int32_t ___index1, Transform_1_t1027527961 * ___transform2, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		V_0 = (int32_t)0;
		goto IL_005b;
	}

IL_0007:
	{
		LinkU5BU5D_t964245573* L_0 = (LinkU5BU5D_t964245573*)__this->get_linkSlots_5();
		int32_t L_1 = V_0;
		NullCheck(L_0);
		int32_t L_2 = (int32_t)((L_0)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_1)))->get_HashCode_0();
		if (!((int32_t)((int32_t)L_2&(int32_t)((int32_t)-2147483648LL))))
		{
			goto IL_0057;
		}
	}
	{
		KeyValuePair_2U5BU5D_t1954543557* L_3 = ___array0;
		int32_t L_4 = ___index1;
		int32_t L_5 = (int32_t)L_4;
		___index1 = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_5, (int32_t)1));
		Transform_1_t1027527961 * L_6 = ___transform2;
		ObjectU5BU5D_t2843939325* L_7 = (ObjectU5BU5D_t2843939325*)__this->get_keySlots_6();
		int32_t L_8 = V_0;
		NullCheck(L_7);
		int32_t L_9 = L_8;
		RuntimeObject * L_10 = (L_7)->GetAt(static_cast<il2cpp_array_size_t>(L_9));
		Int32U5BU5D_t385246372* L_11 = (Int32U5BU5D_t385246372*)__this->get_valueSlots_7();
		int32_t L_12 = V_0;
		NullCheck(L_11);
		int32_t L_13 = L_12;
		int32_t L_14 = (L_11)->GetAt(static_cast<il2cpp_array_size_t>(L_13));
		NullCheck((Transform_1_t1027527961 *)L_6);
		KeyValuePair_2_t2401056908  L_15 = ((  KeyValuePair_2_t2401056908  (*) (Transform_1_t1027527961 *, RuntimeObject *, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)((Transform_1_t1027527961 *)L_6, (RuntimeObject *)L_10, (int32_t)L_14, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		KeyValuePair_2_t2401056908  L_16 = L_15;
		RuntimeObject * L_17 = Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 1), &L_16);
		NullCheck(L_3);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(L_5), (KeyValuePair_2_t2401056908 )((*(KeyValuePair_2_t2401056908 *)((KeyValuePair_2_t2401056908 *)UnBox(L_17, IL2CPP_RGCTX_DATA(method->rgctx_data, 2))))));
	}

IL_0057:
	{
		int32_t L_18 = V_0;
		V_0 = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_18, (int32_t)1));
	}

IL_005b:
	{
		int32_t L_19 = V_0;
		int32_t L_20 = (int32_t)__this->get_touchedSlots_8();
		if ((((int32_t)L_19) < ((int32_t)L_20)))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::Do_CopyTo<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>,System.Object>(TElem[],System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,TRet>)
extern "C" IL2CPP_METHOD_ATTR void Dictionary_2_Do_CopyTo_TisKeyValuePair_2_t2401056908_TisRuntimeObject_m4084399341_gshared (Dictionary_2_t3384741 * __this, ObjectU5BU5D_t2843939325* ___array0, int32_t ___index1, Transform_1_t1027527961 * ___transform2, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		V_0 = (int32_t)0;
		goto IL_005b;
	}

IL_0007:
	{
		LinkU5BU5D_t964245573* L_0 = (LinkU5BU5D_t964245573*)__this->get_linkSlots_5();
		int32_t L_1 = V_0;
		NullCheck(L_0);
		int32_t L_2 = (int32_t)((L_0)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_1)))->get_HashCode_0();
		if (!((int32_t)((int32_t)L_2&(int32_t)((int32_t)-2147483648LL))))
		{
			goto IL_0057;
		}
	}
	{
		ObjectU5BU5D_t2843939325* L_3 = ___array0;
		int32_t L_4 = ___index1;
		int32_t L_5 = (int32_t)L_4;
		___index1 = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_5, (int32_t)1));
		Transform_1_t1027527961 * L_6 = ___transform2;
		ObjectU5BU5D_t2843939325* L_7 = (ObjectU5BU5D_t2843939325*)__this->get_keySlots_6();
		int32_t L_8 = V_0;
		NullCheck(L_7);
		int32_t L_9 = L_8;
		RuntimeObject * L_10 = (L_7)->GetAt(static_cast<il2cpp_array_size_t>(L_9));
		Int32U5BU5D_t385246372* L_11 = (Int32U5BU5D_t385246372*)__this->get_valueSlots_7();
		int32_t L_12 = V_0;
		NullCheck(L_11);
		int32_t L_13 = L_12;
		int32_t L_14 = (L_11)->GetAt(static_cast<il2cpp_array_size_t>(L_13));
		NullCheck((Transform_1_t1027527961 *)L_6);
		KeyValuePair_2_t2401056908  L_15 = ((  KeyValuePair_2_t2401056908  (*) (Transform_1_t1027527961 *, RuntimeObject *, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)((Transform_1_t1027527961 *)L_6, (RuntimeObject *)L_10, (int32_t)L_14, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		KeyValuePair_2_t2401056908  L_16 = L_15;
		RuntimeObject * L_17 = Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 1), &L_16);
		NullCheck(L_3);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(L_5), (RuntimeObject *)((RuntimeObject *)Castclass((RuntimeObject*)L_17, IL2CPP_RGCTX_DATA(method->rgctx_data, 2))));
	}

IL_0057:
	{
		int32_t L_18 = V_0;
		V_0 = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_18, (int32_t)1));
	}

IL_005b:
	{
		int32_t L_19 = V_0;
		int32_t L_20 = (int32_t)__this->get_touchedSlots_8();
		if ((((int32_t)L_19) < ((int32_t)L_20)))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::Do_CopyTo<System.Object,System.Object>(TElem[],System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,TRet>)
extern "C" IL2CPP_METHOD_ATTR void Dictionary_2_Do_CopyTo_TisRuntimeObject_TisRuntimeObject_m1607739207_gshared (Dictionary_2_t3384741 * __this, ObjectU5BU5D_t2843939325* ___array0, int32_t ___index1, Transform_1_t1706577217 * ___transform2, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		V_0 = (int32_t)0;
		goto IL_005b;
	}

IL_0007:
	{
		LinkU5BU5D_t964245573* L_0 = (LinkU5BU5D_t964245573*)__this->get_linkSlots_5();
		int32_t L_1 = V_0;
		NullCheck(L_0);
		int32_t L_2 = (int32_t)((L_0)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_1)))->get_HashCode_0();
		if (!((int32_t)((int32_t)L_2&(int32_t)((int32_t)-2147483648LL))))
		{
			goto IL_0057;
		}
	}
	{
		ObjectU5BU5D_t2843939325* L_3 = ___array0;
		int32_t L_4 = ___index1;
		int32_t L_5 = (int32_t)L_4;
		___index1 = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_5, (int32_t)1));
		Transform_1_t1706577217 * L_6 = ___transform2;
		ObjectU5BU5D_t2843939325* L_7 = (ObjectU5BU5D_t2843939325*)__this->get_keySlots_6();
		int32_t L_8 = V_0;
		NullCheck(L_7);
		int32_t L_9 = L_8;
		RuntimeObject * L_10 = (L_7)->GetAt(static_cast<il2cpp_array_size_t>(L_9));
		Int32U5BU5D_t385246372* L_11 = (Int32U5BU5D_t385246372*)__this->get_valueSlots_7();
		int32_t L_12 = V_0;
		NullCheck(L_11);
		int32_t L_13 = L_12;
		int32_t L_14 = (L_11)->GetAt(static_cast<il2cpp_array_size_t>(L_13));
		NullCheck((Transform_1_t1706577217 *)L_6);
		RuntimeObject * L_15 = ((  RuntimeObject * (*) (Transform_1_t1706577217 *, RuntimeObject *, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)((Transform_1_t1706577217 *)L_6, (RuntimeObject *)L_10, (int32_t)L_14, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		NullCheck(L_3);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(L_5), (RuntimeObject *)((RuntimeObject *)Castclass((RuntimeObject*)L_15, IL2CPP_RGCTX_DATA(method->rgctx_data, 2))));
	}

IL_0057:
	{
		int32_t L_16 = V_0;
		V_0 = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_16, (int32_t)1));
	}

IL_005b:
	{
		int32_t L_17 = V_0;
		int32_t L_18 = (int32_t)__this->get_touchedSlots_8();
		if ((((int32_t)L_17) < ((int32_t)L_18)))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::Do_ICollectionCopyTo<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>(System.Array,System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,TRet>)
extern "C" IL2CPP_METHOD_ATTR void Dictionary_2_Do_ICollectionCopyTo_TisKeyValuePair_2_t2401056908_m1169495264_gshared (Dictionary_2_t3384741 * __this, RuntimeArray * ___array0, int32_t ___index1, Transform_1_t1027527961 * ___transform2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Dictionary_2_Do_ICollectionCopyTo_TisKeyValuePair_2_t2401056908_m1169495264_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Type_t * V_0 = NULL;
	Type_t * V_1 = NULL;
	Exception_t * V_2 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = -1;
	NO_UNUSED_WARNING (__leave_target);
	{
		RuntimeTypeHandle_t3027515415  L_0 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->rgctx_data, 0)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_1 = Type_GetTypeFromHandle_m1620074514(NULL /*static, unused*/, (RuntimeTypeHandle_t3027515415 )L_0, /*hidden argument*/NULL);
		V_0 = (Type_t *)L_1;
		RuntimeArray * L_2 = ___array0;
		NullCheck((RuntimeObject *)L_2);
		Type_t * L_3 = Object_GetType_m88164663((RuntimeObject *)L_2, /*hidden argument*/NULL);
		NullCheck((Type_t *)L_3);
		Type_t * L_4 = VirtFuncInvoker0< Type_t * >::Invoke(44 /* System.Type System.Type::GetElementType() */, (Type_t *)L_3);
		V_1 = (Type_t *)L_4;
	}

IL_0017:
	try
	{ // begin try (depth: 1)
		{
			Type_t * L_5 = V_0;
			NullCheck((Type_t *)L_5);
			bool L_6 = Type_get_IsPrimitive_m1114712797((Type_t *)L_5, /*hidden argument*/NULL);
			if (L_6)
			{
				goto IL_002d;
			}
		}

IL_0022:
		{
			Type_t * L_7 = V_1;
			NullCheck((Type_t *)L_7);
			bool L_8 = Type_get_IsPrimitive_m1114712797((Type_t *)L_7, /*hidden argument*/NULL);
			if (!L_8)
			{
				goto IL_003f;
			}
		}

IL_002d:
		{
			Type_t * L_9 = V_1;
			Type_t * L_10 = V_0;
			NullCheck((Type_t *)L_9);
			bool L_11 = VirtFuncInvoker1< bool, Type_t * >::Invoke(41 /* System.Boolean System.Type::IsAssignableFrom(System.Type) */, (Type_t *)L_9, (Type_t *)L_10);
			if (L_11)
			{
				goto IL_003f;
			}
		}

IL_0039:
		{
			Exception_t * L_12 = (Exception_t *)il2cpp_codegen_object_new(Exception_t_il2cpp_TypeInfo_var);
			Exception__ctor_m213470898(L_12, /*hidden argument*/NULL);
			IL2CPP_RAISE_MANAGED_EXCEPTION(L_12, NULL, Dictionary_2_Do_ICollectionCopyTo_TisKeyValuePair_2_t2401056908_m1169495264_RuntimeMethod_var);
		}

IL_003f:
		{
			RuntimeArray * L_13 = ___array0;
			int32_t L_14 = ___index1;
			Transform_1_t1027527961 * L_15 = ___transform2;
			NullCheck((Dictionary_2_t3384741 *)__this);
			((  void (*) (Dictionary_2_t3384741 *, ObjectU5BU5D_t2843939325*, int32_t, Transform_1_t1027527961 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Dictionary_2_t3384741 *)__this, (ObjectU5BU5D_t2843939325*)((ObjectU5BU5D_t2843939325*)Castclass((RuntimeObject*)L_13, ObjectU5BU5D_t2843939325_il2cpp_TypeInfo_var)), (int32_t)L_14, (Transform_1_t1027527961 *)L_15, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
			goto IL_0069;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (Exception_t_il2cpp_TypeInfo_var, il2cpp_codegen_object_class(e.ex)))
			goto CATCH_0052;
		throw e;
	}

CATCH_0052:
	{ // begin catch(System.Exception)
		{
			V_2 = (Exception_t *)((Exception_t *)__exception_local);
			Exception_t * L_16 = V_2;
			ArgumentException_t132251570 * L_17 = (ArgumentException_t132251570 *)il2cpp_codegen_object_new(ArgumentException_t132251570_il2cpp_TypeInfo_var);
			ArgumentException__ctor_m3761792013(L_17, (String_t*)_stringLiteral1492106003, (String_t*)_stringLiteral4007973390, (Exception_t *)L_16, /*hidden argument*/NULL);
			IL2CPP_RAISE_MANAGED_EXCEPTION(L_17, NULL, Dictionary_2_Do_ICollectionCopyTo_TisKeyValuePair_2_t2401056908_m1169495264_RuntimeMethod_var);
		}

IL_0064:
		{
			goto IL_0069;
		}
	} // end catch (depth: 1)

IL_0069:
	{
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::Do_ICollectionCopyTo<System.Object>(System.Array,System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,TRet>)
extern "C" IL2CPP_METHOD_ATTR void Dictionary_2_Do_ICollectionCopyTo_TisRuntimeObject_m1362949338_gshared (Dictionary_2_t3384741 * __this, RuntimeArray * ___array0, int32_t ___index1, Transform_1_t1706577217 * ___transform2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Dictionary_2_Do_ICollectionCopyTo_TisRuntimeObject_m1362949338_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Type_t * V_0 = NULL;
	Type_t * V_1 = NULL;
	Exception_t * V_2 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = -1;
	NO_UNUSED_WARNING (__leave_target);
	{
		RuntimeTypeHandle_t3027515415  L_0 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->rgctx_data, 0)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_1 = Type_GetTypeFromHandle_m1620074514(NULL /*static, unused*/, (RuntimeTypeHandle_t3027515415 )L_0, /*hidden argument*/NULL);
		V_0 = (Type_t *)L_1;
		RuntimeArray * L_2 = ___array0;
		NullCheck((RuntimeObject *)L_2);
		Type_t * L_3 = Object_GetType_m88164663((RuntimeObject *)L_2, /*hidden argument*/NULL);
		NullCheck((Type_t *)L_3);
		Type_t * L_4 = VirtFuncInvoker0< Type_t * >::Invoke(44 /* System.Type System.Type::GetElementType() */, (Type_t *)L_3);
		V_1 = (Type_t *)L_4;
	}

IL_0017:
	try
	{ // begin try (depth: 1)
		{
			Type_t * L_5 = V_0;
			NullCheck((Type_t *)L_5);
			bool L_6 = Type_get_IsPrimitive_m1114712797((Type_t *)L_5, /*hidden argument*/NULL);
			if (L_6)
			{
				goto IL_002d;
			}
		}

IL_0022:
		{
			Type_t * L_7 = V_1;
			NullCheck((Type_t *)L_7);
			bool L_8 = Type_get_IsPrimitive_m1114712797((Type_t *)L_7, /*hidden argument*/NULL);
			if (!L_8)
			{
				goto IL_003f;
			}
		}

IL_002d:
		{
			Type_t * L_9 = V_1;
			Type_t * L_10 = V_0;
			NullCheck((Type_t *)L_9);
			bool L_11 = VirtFuncInvoker1< bool, Type_t * >::Invoke(41 /* System.Boolean System.Type::IsAssignableFrom(System.Type) */, (Type_t *)L_9, (Type_t *)L_10);
			if (L_11)
			{
				goto IL_003f;
			}
		}

IL_0039:
		{
			Exception_t * L_12 = (Exception_t *)il2cpp_codegen_object_new(Exception_t_il2cpp_TypeInfo_var);
			Exception__ctor_m213470898(L_12, /*hidden argument*/NULL);
			IL2CPP_RAISE_MANAGED_EXCEPTION(L_12, NULL, Dictionary_2_Do_ICollectionCopyTo_TisRuntimeObject_m1362949338_RuntimeMethod_var);
		}

IL_003f:
		{
			RuntimeArray * L_13 = ___array0;
			int32_t L_14 = ___index1;
			Transform_1_t1706577217 * L_15 = ___transform2;
			NullCheck((Dictionary_2_t3384741 *)__this);
			((  void (*) (Dictionary_2_t3384741 *, ObjectU5BU5D_t2843939325*, int32_t, Transform_1_t1706577217 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Dictionary_2_t3384741 *)__this, (ObjectU5BU5D_t2843939325*)((ObjectU5BU5D_t2843939325*)Castclass((RuntimeObject*)L_13, ObjectU5BU5D_t2843939325_il2cpp_TypeInfo_var)), (int32_t)L_14, (Transform_1_t1706577217 *)L_15, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
			goto IL_0069;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (Exception_t_il2cpp_TypeInfo_var, il2cpp_codegen_object_class(e.ex)))
			goto CATCH_0052;
		throw e;
	}

CATCH_0052:
	{ // begin catch(System.Exception)
		{
			V_2 = (Exception_t *)((Exception_t *)__exception_local);
			Exception_t * L_16 = V_2;
			ArgumentException_t132251570 * L_17 = (ArgumentException_t132251570 *)il2cpp_codegen_object_new(ArgumentException_t132251570_il2cpp_TypeInfo_var);
			ArgumentException__ctor_m3761792013(L_17, (String_t*)_stringLiteral1492106003, (String_t*)_stringLiteral4007973390, (Exception_t *)L_16, /*hidden argument*/NULL);
			IL2CPP_RAISE_MANAGED_EXCEPTION(L_17, NULL, Dictionary_2_Do_ICollectionCopyTo_TisRuntimeObject_m1362949338_RuntimeMethod_var);
		}

IL_0064:
		{
			goto IL_0069;
		}
	} // end catch (depth: 1)

IL_0069:
	{
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Do_CopyTo<System.Collections.DictionaryEntry,System.Collections.DictionaryEntry>(TElem[],System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,TRet>)
extern "C" IL2CPP_METHOD_ATTR void Dictionary_2_Do_CopyTo_TisDictionaryEntry_t3123975638_TisDictionaryEntry_t3123975638_m3864993650_gshared (Dictionary_2_t132545152 * __this, DictionaryEntryU5BU5D_t4217117203* ___array0, int32_t ___index1, Transform_1_t4209139644 * ___transform2, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		V_0 = (int32_t)0;
		goto IL_005b;
	}

IL_0007:
	{
		LinkU5BU5D_t964245573* L_0 = (LinkU5BU5D_t964245573*)__this->get_linkSlots_5();
		int32_t L_1 = V_0;
		NullCheck(L_0);
		int32_t L_2 = (int32_t)((L_0)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_1)))->get_HashCode_0();
		if (!((int32_t)((int32_t)L_2&(int32_t)((int32_t)-2147483648LL))))
		{
			goto IL_0057;
		}
	}
	{
		DictionaryEntryU5BU5D_t4217117203* L_3 = ___array0;
		int32_t L_4 = ___index1;
		int32_t L_5 = (int32_t)L_4;
		___index1 = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_5, (int32_t)1));
		Transform_1_t4209139644 * L_6 = ___transform2;
		ObjectU5BU5D_t2843939325* L_7 = (ObjectU5BU5D_t2843939325*)__this->get_keySlots_6();
		int32_t L_8 = V_0;
		NullCheck(L_7);
		int32_t L_9 = L_8;
		RuntimeObject * L_10 = (L_7)->GetAt(static_cast<il2cpp_array_size_t>(L_9));
		ObjectU5BU5D_t2843939325* L_11 = (ObjectU5BU5D_t2843939325*)__this->get_valueSlots_7();
		int32_t L_12 = V_0;
		NullCheck(L_11);
		int32_t L_13 = L_12;
		RuntimeObject * L_14 = (L_11)->GetAt(static_cast<il2cpp_array_size_t>(L_13));
		NullCheck((Transform_1_t4209139644 *)L_6);
		DictionaryEntry_t3123975638  L_15 = ((  DictionaryEntry_t3123975638  (*) (Transform_1_t4209139644 *, RuntimeObject *, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)((Transform_1_t4209139644 *)L_6, (RuntimeObject *)L_10, (RuntimeObject *)L_14, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		DictionaryEntry_t3123975638  L_16 = L_15;
		RuntimeObject * L_17 = Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 1), &L_16);
		NullCheck(L_3);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(L_5), (DictionaryEntry_t3123975638 )((*(DictionaryEntry_t3123975638 *)((DictionaryEntry_t3123975638 *)UnBox(L_17, IL2CPP_RGCTX_DATA(method->rgctx_data, 2))))));
	}

IL_0057:
	{
		int32_t L_18 = V_0;
		V_0 = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_18, (int32_t)1));
	}

IL_005b:
	{
		int32_t L_19 = V_0;
		int32_t L_20 = (int32_t)__this->get_touchedSlots_8();
		if ((((int32_t)L_19) < ((int32_t)L_20)))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Do_CopyTo<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>(TElem[],System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,TRet>)
extern "C" IL2CPP_METHOD_ATTR void Dictionary_2_Do_CopyTo_TisKeyValuePair_2_t2530217319_TisKeyValuePair_2_t2530217319_m985448706_gshared (Dictionary_2_t132545152 * __this, KeyValuePair_2U5BU5D_t118269214* ___array0, int32_t ___index1, Transform_1_t3615381325 * ___transform2, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		V_0 = (int32_t)0;
		goto IL_005b;
	}

IL_0007:
	{
		LinkU5BU5D_t964245573* L_0 = (LinkU5BU5D_t964245573*)__this->get_linkSlots_5();
		int32_t L_1 = V_0;
		NullCheck(L_0);
		int32_t L_2 = (int32_t)((L_0)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_1)))->get_HashCode_0();
		if (!((int32_t)((int32_t)L_2&(int32_t)((int32_t)-2147483648LL))))
		{
			goto IL_0057;
		}
	}
	{
		KeyValuePair_2U5BU5D_t118269214* L_3 = ___array0;
		int32_t L_4 = ___index1;
		int32_t L_5 = (int32_t)L_4;
		___index1 = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_5, (int32_t)1));
		Transform_1_t3615381325 * L_6 = ___transform2;
		ObjectU5BU5D_t2843939325* L_7 = (ObjectU5BU5D_t2843939325*)__this->get_keySlots_6();
		int32_t L_8 = V_0;
		NullCheck(L_7);
		int32_t L_9 = L_8;
		RuntimeObject * L_10 = (L_7)->GetAt(static_cast<il2cpp_array_size_t>(L_9));
		ObjectU5BU5D_t2843939325* L_11 = (ObjectU5BU5D_t2843939325*)__this->get_valueSlots_7();
		int32_t L_12 = V_0;
		NullCheck(L_11);
		int32_t L_13 = L_12;
		RuntimeObject * L_14 = (L_11)->GetAt(static_cast<il2cpp_array_size_t>(L_13));
		NullCheck((Transform_1_t3615381325 *)L_6);
		KeyValuePair_2_t2530217319  L_15 = ((  KeyValuePair_2_t2530217319  (*) (Transform_1_t3615381325 *, RuntimeObject *, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)((Transform_1_t3615381325 *)L_6, (RuntimeObject *)L_10, (RuntimeObject *)L_14, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		KeyValuePair_2_t2530217319  L_16 = L_15;
		RuntimeObject * L_17 = Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 1), &L_16);
		NullCheck(L_3);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(L_5), (KeyValuePair_2_t2530217319 )((*(KeyValuePair_2_t2530217319 *)((KeyValuePair_2_t2530217319 *)UnBox(L_17, IL2CPP_RGCTX_DATA(method->rgctx_data, 2))))));
	}

IL_0057:
	{
		int32_t L_18 = V_0;
		V_0 = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_18, (int32_t)1));
	}

IL_005b:
	{
		int32_t L_19 = V_0;
		int32_t L_20 = (int32_t)__this->get_touchedSlots_8();
		if ((((int32_t)L_19) < ((int32_t)L_20)))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Do_CopyTo<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>,System.Object>(TElem[],System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,TRet>)
extern "C" IL2CPP_METHOD_ATTR void Dictionary_2_Do_CopyTo_TisKeyValuePair_2_t2530217319_TisRuntimeObject_m311023789_gshared (Dictionary_2_t132545152 * __this, ObjectU5BU5D_t2843939325* ___array0, int32_t ___index1, Transform_1_t3615381325 * ___transform2, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		V_0 = (int32_t)0;
		goto IL_005b;
	}

IL_0007:
	{
		LinkU5BU5D_t964245573* L_0 = (LinkU5BU5D_t964245573*)__this->get_linkSlots_5();
		int32_t L_1 = V_0;
		NullCheck(L_0);
		int32_t L_2 = (int32_t)((L_0)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_1)))->get_HashCode_0();
		if (!((int32_t)((int32_t)L_2&(int32_t)((int32_t)-2147483648LL))))
		{
			goto IL_0057;
		}
	}
	{
		ObjectU5BU5D_t2843939325* L_3 = ___array0;
		int32_t L_4 = ___index1;
		int32_t L_5 = (int32_t)L_4;
		___index1 = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_5, (int32_t)1));
		Transform_1_t3615381325 * L_6 = ___transform2;
		ObjectU5BU5D_t2843939325* L_7 = (ObjectU5BU5D_t2843939325*)__this->get_keySlots_6();
		int32_t L_8 = V_0;
		NullCheck(L_7);
		int32_t L_9 = L_8;
		RuntimeObject * L_10 = (L_7)->GetAt(static_cast<il2cpp_array_size_t>(L_9));
		ObjectU5BU5D_t2843939325* L_11 = (ObjectU5BU5D_t2843939325*)__this->get_valueSlots_7();
		int32_t L_12 = V_0;
		NullCheck(L_11);
		int32_t L_13 = L_12;
		RuntimeObject * L_14 = (L_11)->GetAt(static_cast<il2cpp_array_size_t>(L_13));
		NullCheck((Transform_1_t3615381325 *)L_6);
		KeyValuePair_2_t2530217319  L_15 = ((  KeyValuePair_2_t2530217319  (*) (Transform_1_t3615381325 *, RuntimeObject *, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)((Transform_1_t3615381325 *)L_6, (RuntimeObject *)L_10, (RuntimeObject *)L_14, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		KeyValuePair_2_t2530217319  L_16 = L_15;
		RuntimeObject * L_17 = Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 1), &L_16);
		NullCheck(L_3);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(L_5), (RuntimeObject *)((RuntimeObject *)Castclass((RuntimeObject*)L_17, IL2CPP_RGCTX_DATA(method->rgctx_data, 2))));
	}

IL_0057:
	{
		int32_t L_18 = V_0;
		V_0 = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_18, (int32_t)1));
	}

IL_005b:
	{
		int32_t L_19 = V_0;
		int32_t L_20 = (int32_t)__this->get_touchedSlots_8();
		if ((((int32_t)L_19) < ((int32_t)L_20)))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Do_CopyTo<System.Object,System.Object>(TElem[],System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,TRet>)
extern "C" IL2CPP_METHOD_ATTR void Dictionary_2_Do_CopyTo_TisRuntimeObject_TisRuntimeObject_m976542334_gshared (Dictionary_2_t132545152 * __this, ObjectU5BU5D_t2843939325* ___array0, int32_t ___index1, Transform_1_t4165270170 * ___transform2, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		V_0 = (int32_t)0;
		goto IL_005b;
	}

IL_0007:
	{
		LinkU5BU5D_t964245573* L_0 = (LinkU5BU5D_t964245573*)__this->get_linkSlots_5();
		int32_t L_1 = V_0;
		NullCheck(L_0);
		int32_t L_2 = (int32_t)((L_0)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_1)))->get_HashCode_0();
		if (!((int32_t)((int32_t)L_2&(int32_t)((int32_t)-2147483648LL))))
		{
			goto IL_0057;
		}
	}
	{
		ObjectU5BU5D_t2843939325* L_3 = ___array0;
		int32_t L_4 = ___index1;
		int32_t L_5 = (int32_t)L_4;
		___index1 = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_5, (int32_t)1));
		Transform_1_t4165270170 * L_6 = ___transform2;
		ObjectU5BU5D_t2843939325* L_7 = (ObjectU5BU5D_t2843939325*)__this->get_keySlots_6();
		int32_t L_8 = V_0;
		NullCheck(L_7);
		int32_t L_9 = L_8;
		RuntimeObject * L_10 = (L_7)->GetAt(static_cast<il2cpp_array_size_t>(L_9));
		ObjectU5BU5D_t2843939325* L_11 = (ObjectU5BU5D_t2843939325*)__this->get_valueSlots_7();
		int32_t L_12 = V_0;
		NullCheck(L_11);
		int32_t L_13 = L_12;
		RuntimeObject * L_14 = (L_11)->GetAt(static_cast<il2cpp_array_size_t>(L_13));
		NullCheck((Transform_1_t4165270170 *)L_6);
		RuntimeObject * L_15 = ((  RuntimeObject * (*) (Transform_1_t4165270170 *, RuntimeObject *, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)((Transform_1_t4165270170 *)L_6, (RuntimeObject *)L_10, (RuntimeObject *)L_14, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		NullCheck(L_3);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(L_5), (RuntimeObject *)((RuntimeObject *)Castclass((RuntimeObject*)L_15, IL2CPP_RGCTX_DATA(method->rgctx_data, 2))));
	}

IL_0057:
	{
		int32_t L_16 = V_0;
		V_0 = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_16, (int32_t)1));
	}

IL_005b:
	{
		int32_t L_17 = V_0;
		int32_t L_18 = (int32_t)__this->get_touchedSlots_8();
		if ((((int32_t)L_17) < ((int32_t)L_18)))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Do_ICollectionCopyTo<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>(System.Array,System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,TRet>)
extern "C" IL2CPP_METHOD_ATTR void Dictionary_2_Do_ICollectionCopyTo_TisKeyValuePair_2_t2530217319_m1439704807_gshared (Dictionary_2_t132545152 * __this, RuntimeArray * ___array0, int32_t ___index1, Transform_1_t3615381325 * ___transform2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Dictionary_2_Do_ICollectionCopyTo_TisKeyValuePair_2_t2530217319_m1439704807_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Type_t * V_0 = NULL;
	Type_t * V_1 = NULL;
	Exception_t * V_2 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = -1;
	NO_UNUSED_WARNING (__leave_target);
	{
		RuntimeTypeHandle_t3027515415  L_0 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->rgctx_data, 0)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_1 = Type_GetTypeFromHandle_m1620074514(NULL /*static, unused*/, (RuntimeTypeHandle_t3027515415 )L_0, /*hidden argument*/NULL);
		V_0 = (Type_t *)L_1;
		RuntimeArray * L_2 = ___array0;
		NullCheck((RuntimeObject *)L_2);
		Type_t * L_3 = Object_GetType_m88164663((RuntimeObject *)L_2, /*hidden argument*/NULL);
		NullCheck((Type_t *)L_3);
		Type_t * L_4 = VirtFuncInvoker0< Type_t * >::Invoke(44 /* System.Type System.Type::GetElementType() */, (Type_t *)L_3);
		V_1 = (Type_t *)L_4;
	}

IL_0017:
	try
	{ // begin try (depth: 1)
		{
			Type_t * L_5 = V_0;
			NullCheck((Type_t *)L_5);
			bool L_6 = Type_get_IsPrimitive_m1114712797((Type_t *)L_5, /*hidden argument*/NULL);
			if (L_6)
			{
				goto IL_002d;
			}
		}

IL_0022:
		{
			Type_t * L_7 = V_1;
			NullCheck((Type_t *)L_7);
			bool L_8 = Type_get_IsPrimitive_m1114712797((Type_t *)L_7, /*hidden argument*/NULL);
			if (!L_8)
			{
				goto IL_003f;
			}
		}

IL_002d:
		{
			Type_t * L_9 = V_1;
			Type_t * L_10 = V_0;
			NullCheck((Type_t *)L_9);
			bool L_11 = VirtFuncInvoker1< bool, Type_t * >::Invoke(41 /* System.Boolean System.Type::IsAssignableFrom(System.Type) */, (Type_t *)L_9, (Type_t *)L_10);
			if (L_11)
			{
				goto IL_003f;
			}
		}

IL_0039:
		{
			Exception_t * L_12 = (Exception_t *)il2cpp_codegen_object_new(Exception_t_il2cpp_TypeInfo_var);
			Exception__ctor_m213470898(L_12, /*hidden argument*/NULL);
			IL2CPP_RAISE_MANAGED_EXCEPTION(L_12, NULL, Dictionary_2_Do_ICollectionCopyTo_TisKeyValuePair_2_t2530217319_m1439704807_RuntimeMethod_var);
		}

IL_003f:
		{
			RuntimeArray * L_13 = ___array0;
			int32_t L_14 = ___index1;
			Transform_1_t3615381325 * L_15 = ___transform2;
			NullCheck((Dictionary_2_t132545152 *)__this);
			((  void (*) (Dictionary_2_t132545152 *, ObjectU5BU5D_t2843939325*, int32_t, Transform_1_t3615381325 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Dictionary_2_t132545152 *)__this, (ObjectU5BU5D_t2843939325*)((ObjectU5BU5D_t2843939325*)Castclass((RuntimeObject*)L_13, ObjectU5BU5D_t2843939325_il2cpp_TypeInfo_var)), (int32_t)L_14, (Transform_1_t3615381325 *)L_15, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
			goto IL_0069;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (Exception_t_il2cpp_TypeInfo_var, il2cpp_codegen_object_class(e.ex)))
			goto CATCH_0052;
		throw e;
	}

CATCH_0052:
	{ // begin catch(System.Exception)
		{
			V_2 = (Exception_t *)((Exception_t *)__exception_local);
			Exception_t * L_16 = V_2;
			ArgumentException_t132251570 * L_17 = (ArgumentException_t132251570 *)il2cpp_codegen_object_new(ArgumentException_t132251570_il2cpp_TypeInfo_var);
			ArgumentException__ctor_m3761792013(L_17, (String_t*)_stringLiteral1492106003, (String_t*)_stringLiteral4007973390, (Exception_t *)L_16, /*hidden argument*/NULL);
			IL2CPP_RAISE_MANAGED_EXCEPTION(L_17, NULL, Dictionary_2_Do_ICollectionCopyTo_TisKeyValuePair_2_t2530217319_m1439704807_RuntimeMethod_var);
		}

IL_0064:
		{
			goto IL_0069;
		}
	} // end catch (depth: 1)

IL_0069:
	{
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Do_ICollectionCopyTo<System.Object>(System.Array,System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,TRet>)
extern "C" IL2CPP_METHOD_ATTR void Dictionary_2_Do_ICollectionCopyTo_TisRuntimeObject_m3942192587_gshared (Dictionary_2_t132545152 * __this, RuntimeArray * ___array0, int32_t ___index1, Transform_1_t4165270170 * ___transform2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Dictionary_2_Do_ICollectionCopyTo_TisRuntimeObject_m3942192587_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Type_t * V_0 = NULL;
	Type_t * V_1 = NULL;
	Exception_t * V_2 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = -1;
	NO_UNUSED_WARNING (__leave_target);
	{
		RuntimeTypeHandle_t3027515415  L_0 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->rgctx_data, 0)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_1 = Type_GetTypeFromHandle_m1620074514(NULL /*static, unused*/, (RuntimeTypeHandle_t3027515415 )L_0, /*hidden argument*/NULL);
		V_0 = (Type_t *)L_1;
		RuntimeArray * L_2 = ___array0;
		NullCheck((RuntimeObject *)L_2);
		Type_t * L_3 = Object_GetType_m88164663((RuntimeObject *)L_2, /*hidden argument*/NULL);
		NullCheck((Type_t *)L_3);
		Type_t * L_4 = VirtFuncInvoker0< Type_t * >::Invoke(44 /* System.Type System.Type::GetElementType() */, (Type_t *)L_3);
		V_1 = (Type_t *)L_4;
	}

IL_0017:
	try
	{ // begin try (depth: 1)
		{
			Type_t * L_5 = V_0;
			NullCheck((Type_t *)L_5);
			bool L_6 = Type_get_IsPrimitive_m1114712797((Type_t *)L_5, /*hidden argument*/NULL);
			if (L_6)
			{
				goto IL_002d;
			}
		}

IL_0022:
		{
			Type_t * L_7 = V_1;
			NullCheck((Type_t *)L_7);
			bool L_8 = Type_get_IsPrimitive_m1114712797((Type_t *)L_7, /*hidden argument*/NULL);
			if (!L_8)
			{
				goto IL_003f;
			}
		}

IL_002d:
		{
			Type_t * L_9 = V_1;
			Type_t * L_10 = V_0;
			NullCheck((Type_t *)L_9);
			bool L_11 = VirtFuncInvoker1< bool, Type_t * >::Invoke(41 /* System.Boolean System.Type::IsAssignableFrom(System.Type) */, (Type_t *)L_9, (Type_t *)L_10);
			if (L_11)
			{
				goto IL_003f;
			}
		}

IL_0039:
		{
			Exception_t * L_12 = (Exception_t *)il2cpp_codegen_object_new(Exception_t_il2cpp_TypeInfo_var);
			Exception__ctor_m213470898(L_12, /*hidden argument*/NULL);
			IL2CPP_RAISE_MANAGED_EXCEPTION(L_12, NULL, Dictionary_2_Do_ICollectionCopyTo_TisRuntimeObject_m3942192587_RuntimeMethod_var);
		}

IL_003f:
		{
			RuntimeArray * L_13 = ___array0;
			int32_t L_14 = ___index1;
			Transform_1_t4165270170 * L_15 = ___transform2;
			NullCheck((Dictionary_2_t132545152 *)__this);
			((  void (*) (Dictionary_2_t132545152 *, ObjectU5BU5D_t2843939325*, int32_t, Transform_1_t4165270170 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Dictionary_2_t132545152 *)__this, (ObjectU5BU5D_t2843939325*)((ObjectU5BU5D_t2843939325*)Castclass((RuntimeObject*)L_13, ObjectU5BU5D_t2843939325_il2cpp_TypeInfo_var)), (int32_t)L_14, (Transform_1_t4165270170 *)L_15, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
			goto IL_0069;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (Exception_t_il2cpp_TypeInfo_var, il2cpp_codegen_object_class(e.ex)))
			goto CATCH_0052;
		throw e;
	}

CATCH_0052:
	{ // begin catch(System.Exception)
		{
			V_2 = (Exception_t *)((Exception_t *)__exception_local);
			Exception_t * L_16 = V_2;
			ArgumentException_t132251570 * L_17 = (ArgumentException_t132251570 *)il2cpp_codegen_object_new(ArgumentException_t132251570_il2cpp_TypeInfo_var);
			ArgumentException__ctor_m3761792013(L_17, (String_t*)_stringLiteral1492106003, (String_t*)_stringLiteral4007973390, (Exception_t *)L_16, /*hidden argument*/NULL);
			IL2CPP_RAISE_MANAGED_EXCEPTION(L_17, NULL, Dictionary_2_Do_ICollectionCopyTo_TisRuntimeObject_m3942192587_RuntimeMethod_var);
		}

IL_0064:
		{
			goto IL_0069;
		}
	} // end catch (depth: 1)

IL_0069:
	{
		return;
	}
}
// System.Void UnityEngine.Events.BaseInvokableCall::ThrowOnInvalidArg<System.Boolean>(System.Object)
extern "C" IL2CPP_METHOD_ATTR void BaseInvokableCall_ThrowOnInvalidArg_TisBoolean_t97287965_m3019671566_gshared (RuntimeObject * __this /* static, unused */, RuntimeObject * ___arg0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (BaseInvokableCall_ThrowOnInvalidArg_TisBoolean_t97287965_m3019671566_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject * L_0 = ___arg0;
		if (!L_0)
		{
			goto IL_003e;
		}
	}
	{
		RuntimeObject * L_1 = ___arg0;
		if (((RuntimeObject *)IsInst((RuntimeObject*)L_1, IL2CPP_RGCTX_DATA(method->rgctx_data, 0))))
		{
			goto IL_003e;
		}
	}
	{
		ObjectU5BU5D_t2843939325* L_2 = (ObjectU5BU5D_t2843939325*)SZArrayNew(ObjectU5BU5D_t2843939325_il2cpp_TypeInfo_var, (uint32_t)2);
		ObjectU5BU5D_t2843939325* L_3 = (ObjectU5BU5D_t2843939325*)L_2;
		RuntimeObject * L_4 = ___arg0;
		NullCheck((RuntimeObject *)L_4);
		Type_t * L_5 = Object_GetType_m88164663((RuntimeObject *)L_4, /*hidden argument*/NULL);
		NullCheck(L_3);
		ArrayElementTypeCheck (L_3, L_5);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_5);
		ObjectU5BU5D_t2843939325* L_6 = (ObjectU5BU5D_t2843939325*)L_3;
		RuntimeTypeHandle_t3027515415  L_7 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->rgctx_data, 1)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_8 = Type_GetTypeFromHandle_m1620074514(NULL /*static, unused*/, (RuntimeTypeHandle_t3027515415 )L_7, /*hidden argument*/NULL);
		NullCheck(L_6);
		ArrayElementTypeCheck (L_6, L_8);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_8);
		String_t* L_9 = UnityString_Format_m261690510(NULL /*static, unused*/, (String_t*)_stringLiteral273595399, (ObjectU5BU5D_t2843939325*)L_6, /*hidden argument*/NULL);
		ArgumentException_t132251570 * L_10 = (ArgumentException_t132251570 *)il2cpp_codegen_object_new(ArgumentException_t132251570_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m1312628991(L_10, (String_t*)L_9, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_10, NULL, BaseInvokableCall_ThrowOnInvalidArg_TisBoolean_t97287965_m3019671566_RuntimeMethod_var);
	}

IL_003e:
	{
		return;
	}
}
// System.Void UnityEngine.Events.BaseInvokableCall::ThrowOnInvalidArg<System.Int32>(System.Object)
extern "C" IL2CPP_METHOD_ATTR void BaseInvokableCall_ThrowOnInvalidArg_TisInt32_t2950945753_m635860201_gshared (RuntimeObject * __this /* static, unused */, RuntimeObject * ___arg0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (BaseInvokableCall_ThrowOnInvalidArg_TisInt32_t2950945753_m635860201_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject * L_0 = ___arg0;
		if (!L_0)
		{
			goto IL_003e;
		}
	}
	{
		RuntimeObject * L_1 = ___arg0;
		if (((RuntimeObject *)IsInst((RuntimeObject*)L_1, IL2CPP_RGCTX_DATA(method->rgctx_data, 0))))
		{
			goto IL_003e;
		}
	}
	{
		ObjectU5BU5D_t2843939325* L_2 = (ObjectU5BU5D_t2843939325*)SZArrayNew(ObjectU5BU5D_t2843939325_il2cpp_TypeInfo_var, (uint32_t)2);
		ObjectU5BU5D_t2843939325* L_3 = (ObjectU5BU5D_t2843939325*)L_2;
		RuntimeObject * L_4 = ___arg0;
		NullCheck((RuntimeObject *)L_4);
		Type_t * L_5 = Object_GetType_m88164663((RuntimeObject *)L_4, /*hidden argument*/NULL);
		NullCheck(L_3);
		ArrayElementTypeCheck (L_3, L_5);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_5);
		ObjectU5BU5D_t2843939325* L_6 = (ObjectU5BU5D_t2843939325*)L_3;
		RuntimeTypeHandle_t3027515415  L_7 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->rgctx_data, 1)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_8 = Type_GetTypeFromHandle_m1620074514(NULL /*static, unused*/, (RuntimeTypeHandle_t3027515415 )L_7, /*hidden argument*/NULL);
		NullCheck(L_6);
		ArrayElementTypeCheck (L_6, L_8);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_8);
		String_t* L_9 = UnityString_Format_m261690510(NULL /*static, unused*/, (String_t*)_stringLiteral273595399, (ObjectU5BU5D_t2843939325*)L_6, /*hidden argument*/NULL);
		ArgumentException_t132251570 * L_10 = (ArgumentException_t132251570 *)il2cpp_codegen_object_new(ArgumentException_t132251570_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m1312628991(L_10, (String_t*)L_9, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_10, NULL, BaseInvokableCall_ThrowOnInvalidArg_TisInt32_t2950945753_m635860201_RuntimeMethod_var);
	}

IL_003e:
	{
		return;
	}
}
// System.Void UnityEngine.Events.BaseInvokableCall::ThrowOnInvalidArg<System.Object>(System.Object)
extern "C" IL2CPP_METHOD_ATTR void BaseInvokableCall_ThrowOnInvalidArg_TisRuntimeObject_m2266633109_gshared (RuntimeObject * __this /* static, unused */, RuntimeObject * ___arg0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (BaseInvokableCall_ThrowOnInvalidArg_TisRuntimeObject_m2266633109_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject * L_0 = ___arg0;
		if (!L_0)
		{
			goto IL_003e;
		}
	}
	{
		RuntimeObject * L_1 = ___arg0;
		if (((RuntimeObject *)IsInst((RuntimeObject*)L_1, IL2CPP_RGCTX_DATA(method->rgctx_data, 0))))
		{
			goto IL_003e;
		}
	}
	{
		ObjectU5BU5D_t2843939325* L_2 = (ObjectU5BU5D_t2843939325*)SZArrayNew(ObjectU5BU5D_t2843939325_il2cpp_TypeInfo_var, (uint32_t)2);
		ObjectU5BU5D_t2843939325* L_3 = (ObjectU5BU5D_t2843939325*)L_2;
		RuntimeObject * L_4 = ___arg0;
		NullCheck((RuntimeObject *)L_4);
		Type_t * L_5 = Object_GetType_m88164663((RuntimeObject *)L_4, /*hidden argument*/NULL);
		NullCheck(L_3);
		ArrayElementTypeCheck (L_3, L_5);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_5);
		ObjectU5BU5D_t2843939325* L_6 = (ObjectU5BU5D_t2843939325*)L_3;
		RuntimeTypeHandle_t3027515415  L_7 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->rgctx_data, 1)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_8 = Type_GetTypeFromHandle_m1620074514(NULL /*static, unused*/, (RuntimeTypeHandle_t3027515415 )L_7, /*hidden argument*/NULL);
		NullCheck(L_6);
		ArrayElementTypeCheck (L_6, L_8);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_8);
		String_t* L_9 = UnityString_Format_m261690510(NULL /*static, unused*/, (String_t*)_stringLiteral273595399, (ObjectU5BU5D_t2843939325*)L_6, /*hidden argument*/NULL);
		ArgumentException_t132251570 * L_10 = (ArgumentException_t132251570 *)il2cpp_codegen_object_new(ArgumentException_t132251570_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m1312628991(L_10, (String_t*)L_9, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_10, NULL, BaseInvokableCall_ThrowOnInvalidArg_TisRuntimeObject_m2266633109_RuntimeMethod_var);
	}

IL_003e:
	{
		return;
	}
}
// System.Void UnityEngine.Events.BaseInvokableCall::ThrowOnInvalidArg<System.Single>(System.Object)
extern "C" IL2CPP_METHOD_ATTR void BaseInvokableCall_ThrowOnInvalidArg_TisSingle_t1397266774_m3110598205_gshared (RuntimeObject * __this /* static, unused */, RuntimeObject * ___arg0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (BaseInvokableCall_ThrowOnInvalidArg_TisSingle_t1397266774_m3110598205_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject * L_0 = ___arg0;
		if (!L_0)
		{
			goto IL_003e;
		}
	}
	{
		RuntimeObject * L_1 = ___arg0;
		if (((RuntimeObject *)IsInst((RuntimeObject*)L_1, IL2CPP_RGCTX_DATA(method->rgctx_data, 0))))
		{
			goto IL_003e;
		}
	}
	{
		ObjectU5BU5D_t2843939325* L_2 = (ObjectU5BU5D_t2843939325*)SZArrayNew(ObjectU5BU5D_t2843939325_il2cpp_TypeInfo_var, (uint32_t)2);
		ObjectU5BU5D_t2843939325* L_3 = (ObjectU5BU5D_t2843939325*)L_2;
		RuntimeObject * L_4 = ___arg0;
		NullCheck((RuntimeObject *)L_4);
		Type_t * L_5 = Object_GetType_m88164663((RuntimeObject *)L_4, /*hidden argument*/NULL);
		NullCheck(L_3);
		ArrayElementTypeCheck (L_3, L_5);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_5);
		ObjectU5BU5D_t2843939325* L_6 = (ObjectU5BU5D_t2843939325*)L_3;
		RuntimeTypeHandle_t3027515415  L_7 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->rgctx_data, 1)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_8 = Type_GetTypeFromHandle_m1620074514(NULL /*static, unused*/, (RuntimeTypeHandle_t3027515415 )L_7, /*hidden argument*/NULL);
		NullCheck(L_6);
		ArrayElementTypeCheck (L_6, L_8);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_8);
		String_t* L_9 = UnityString_Format_m261690510(NULL /*static, unused*/, (String_t*)_stringLiteral273595399, (ObjectU5BU5D_t2843939325*)L_6, /*hidden argument*/NULL);
		ArgumentException_t132251570 * L_10 = (ArgumentException_t132251570 *)il2cpp_codegen_object_new(ArgumentException_t132251570_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m1312628991(L_10, (String_t*)L_9, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_10, NULL, BaseInvokableCall_ThrowOnInvalidArg_TisSingle_t1397266774_m3110598205_RuntimeMethod_var);
	}

IL_003e:
	{
		return;
	}
}
// T System.Array::Find<System.Object>(T[],System.Predicate`1<T>)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * Array_Find_TisRuntimeObject_m2705709394_gshared (RuntimeObject * __this /* static, unused */, ObjectU5BU5D_t2843939325* ___array0, Predicate_1_t3905400288 * ___match1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Array_Find_TisRuntimeObject_m2705709394_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject * V_0 = NULL;
	ObjectU5BU5D_t2843939325* V_1 = NULL;
	int32_t V_2 = 0;
	RuntimeObject * V_3 = NULL;
	{
		ObjectU5BU5D_t2843939325* L_0 = ___array0;
		if (L_0)
		{
			goto IL_0011;
		}
	}
	{
		ArgumentNullException_t1615371798 * L_1 = (ArgumentNullException_t1615371798 *)il2cpp_codegen_object_new(ArgumentNullException_t1615371798_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m1170824041(L_1, (String_t*)_stringLiteral4007973390, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, NULL, Array_Find_TisRuntimeObject_m2705709394_RuntimeMethod_var);
	}

IL_0011:
	{
		Predicate_1_t3905400288 * L_2 = ___match1;
		if (L_2)
		{
			goto IL_0022;
		}
	}
	{
		ArgumentNullException_t1615371798 * L_3 = (ArgumentNullException_t1615371798 *)il2cpp_codegen_object_new(ArgumentNullException_t1615371798_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m1170824041(L_3, (String_t*)_stringLiteral461028519, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, NULL, Array_Find_TisRuntimeObject_m2705709394_RuntimeMethod_var);
	}

IL_0022:
	{
		ObjectU5BU5D_t2843939325* L_4 = ___array0;
		V_1 = (ObjectU5BU5D_t2843939325*)L_4;
		V_2 = (int32_t)0;
		goto IL_0045;
	}

IL_002b:
	{
		ObjectU5BU5D_t2843939325* L_5 = V_1;
		int32_t L_6 = V_2;
		NullCheck(L_5);
		int32_t L_7 = L_6;
		RuntimeObject * L_8 = (L_5)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		V_0 = (RuntimeObject *)L_8;
		Predicate_1_t3905400288 * L_9 = ___match1;
		RuntimeObject * L_10 = V_0;
		NullCheck((Predicate_1_t3905400288 *)L_9);
		bool L_11 = ((  bool (*) (Predicate_1_t3905400288 *, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)((Predicate_1_t3905400288 *)L_9, (RuntimeObject *)L_10, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		if (!L_11)
		{
			goto IL_0041;
		}
	}
	{
		RuntimeObject * L_12 = V_0;
		return L_12;
	}

IL_0041:
	{
		int32_t L_13 = V_2;
		V_2 = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_13, (int32_t)1));
	}

IL_0045:
	{
		int32_t L_14 = V_2;
		ObjectU5BU5D_t2843939325* L_15 = V_1;
		NullCheck(L_15);
		if ((((int32_t)L_14) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_15)->max_length)))))))
		{
			goto IL_002b;
		}
	}
	{
		il2cpp_codegen_initobj((&V_3), sizeof(RuntimeObject *));
		RuntimeObject * L_16 = V_3;
		return L_16;
	}
}
// T System.Array::FindLast<System.Object>(T[],System.Predicate`1<T>)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * Array_FindLast_TisRuntimeObject_m1088586648_gshared (RuntimeObject * __this /* static, unused */, ObjectU5BU5D_t2843939325* ___array0, Predicate_1_t3905400288 * ___match1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Array_FindLast_TisRuntimeObject_m1088586648_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	RuntimeObject * V_1 = NULL;
	{
		ObjectU5BU5D_t2843939325* L_0 = ___array0;
		if (L_0)
		{
			goto IL_0011;
		}
	}
	{
		ArgumentNullException_t1615371798 * L_1 = (ArgumentNullException_t1615371798 *)il2cpp_codegen_object_new(ArgumentNullException_t1615371798_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m1170824041(L_1, (String_t*)_stringLiteral4007973390, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, NULL, Array_FindLast_TisRuntimeObject_m1088586648_RuntimeMethod_var);
	}

IL_0011:
	{
		Predicate_1_t3905400288 * L_2 = ___match1;
		if (L_2)
		{
			goto IL_0022;
		}
	}
	{
		ArgumentNullException_t1615371798 * L_3 = (ArgumentNullException_t1615371798 *)il2cpp_codegen_object_new(ArgumentNullException_t1615371798_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m1170824041(L_3, (String_t*)_stringLiteral461028519, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, NULL, Array_FindLast_TisRuntimeObject_m1088586648_RuntimeMethod_var);
	}

IL_0022:
	{
		ObjectU5BU5D_t2843939325* L_4 = ___array0;
		NullCheck(L_4);
		V_0 = (int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_4)->max_length)))), (int32_t)1));
		goto IL_004b;
	}

IL_002d:
	{
		Predicate_1_t3905400288 * L_5 = ___match1;
		ObjectU5BU5D_t2843939325* L_6 = ___array0;
		int32_t L_7 = V_0;
		NullCheck(L_6);
		int32_t L_8 = L_7;
		RuntimeObject * L_9 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		NullCheck((Predicate_1_t3905400288 *)L_5);
		bool L_10 = ((  bool (*) (Predicate_1_t3905400288 *, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)((Predicate_1_t3905400288 *)L_5, (RuntimeObject *)L_9, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		if (!L_10)
		{
			goto IL_0047;
		}
	}
	{
		ObjectU5BU5D_t2843939325* L_11 = ___array0;
		int32_t L_12 = V_0;
		NullCheck(L_11);
		int32_t L_13 = L_12;
		RuntimeObject * L_14 = (L_11)->GetAt(static_cast<il2cpp_array_size_t>(L_13));
		return L_14;
	}

IL_0047:
	{
		int32_t L_15 = V_0;
		V_0 = (int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_15, (int32_t)1));
	}

IL_004b:
	{
		int32_t L_16 = V_0;
		if ((((int32_t)L_16) >= ((int32_t)0)))
		{
			goto IL_002d;
		}
	}
	{
		il2cpp_codegen_initobj((&V_1), sizeof(RuntimeObject *));
		RuntimeObject * L_17 = V_1;
		return L_17;
	}
}
// T System.Array::InternalArray__get_Item<Mono.Globalization.Unicode.CodePointIndexer/TableRange>(System.Int32)
extern "C" IL2CPP_METHOD_ATTR TableRange_t3332867892  Array_InternalArray__get_Item_TisTableRange_t3332867892_m1483480711_gshared (RuntimeArray * __this, int32_t ___index0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Array_InternalArray__get_Item_TisTableRange_t3332867892_m1483480711_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	TableRange_t3332867892  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		int32_t L_0 = ___index0;
		NullCheck((RuntimeArray *)__this);
		int32_t L_1 = Array_get_Length_m21610649((RuntimeArray *)__this, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_0017;
		}
	}
	{
		ArgumentOutOfRangeException_t777629997 * L_2 = (ArgumentOutOfRangeException_t777629997 *)il2cpp_codegen_object_new(ArgumentOutOfRangeException_t777629997_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m3628145864(L_2, (String_t*)_stringLiteral797640427, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, NULL, Array_InternalArray__get_Item_TisTableRange_t3332867892_m1483480711_RuntimeMethod_var);
	}

IL_0017:
	{
		int32_t L_3 = ___index0;
		NullCheck((RuntimeArray *)__this);
		ArrayGetGenericValueImpl((RuntimeArray *)__this, (int32_t)L_3, (TableRange_t3332867892 *)(TableRange_t3332867892 *)(&V_0));
		TableRange_t3332867892  L_4 = V_0;
		return L_4;
	}
}
// T System.Array::InternalArray__get_Item<Mono.Security.Protocol.Tls.Handshake.ClientCertificateType>(System.Int32)
extern "C" IL2CPP_METHOD_ATTR int32_t Array_InternalArray__get_Item_TisClientCertificateType_t1004704908_m2297379651_gshared (RuntimeArray * __this, int32_t ___index0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Array_InternalArray__get_Item_TisClientCertificateType_t1004704908_m2297379651_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		int32_t L_0 = ___index0;
		NullCheck((RuntimeArray *)__this);
		int32_t L_1 = Array_get_Length_m21610649((RuntimeArray *)__this, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_0017;
		}
	}
	{
		ArgumentOutOfRangeException_t777629997 * L_2 = (ArgumentOutOfRangeException_t777629997 *)il2cpp_codegen_object_new(ArgumentOutOfRangeException_t777629997_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m3628145864(L_2, (String_t*)_stringLiteral797640427, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, NULL, Array_InternalArray__get_Item_TisClientCertificateType_t1004704908_m2297379651_RuntimeMethod_var);
	}

IL_0017:
	{
		int32_t L_3 = ___index0;
		NullCheck((RuntimeArray *)__this);
		ArrayGetGenericValueImpl((RuntimeArray *)__this, (int32_t)L_3, (int32_t*)(int32_t*)(&V_0));
		int32_t L_4 = V_0;
		return L_4;
	}
}
// T System.Array::InternalArray__get_Item<System.Boolean>(System.Int32)
extern "C" IL2CPP_METHOD_ATTR bool Array_InternalArray__get_Item_TisBoolean_t97287965_m1407010309_gshared (RuntimeArray * __this, int32_t ___index0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Array_InternalArray__get_Item_TisBoolean_t97287965_m1407010309_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		int32_t L_0 = ___index0;
		NullCheck((RuntimeArray *)__this);
		int32_t L_1 = Array_get_Length_m21610649((RuntimeArray *)__this, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_0017;
		}
	}
	{
		ArgumentOutOfRangeException_t777629997 * L_2 = (ArgumentOutOfRangeException_t777629997 *)il2cpp_codegen_object_new(ArgumentOutOfRangeException_t777629997_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m3628145864(L_2, (String_t*)_stringLiteral797640427, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, NULL, Array_InternalArray__get_Item_TisBoolean_t97287965_m1407010309_RuntimeMethod_var);
	}

IL_0017:
	{
		int32_t L_3 = ___index0;
		NullCheck((RuntimeArray *)__this);
		ArrayGetGenericValueImpl((RuntimeArray *)__this, (int32_t)L_3, (bool*)(bool*)(&V_0));
		bool L_4 = V_0;
		return L_4;
	}
}
// T System.Array::InternalArray__get_Item<System.Byte>(System.Int32)
extern "C" IL2CPP_METHOD_ATTR uint8_t Array_InternalArray__get_Item_TisByte_t1134296376_m3566214066_gshared (RuntimeArray * __this, int32_t ___index0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Array_InternalArray__get_Item_TisByte_t1134296376_m3566214066_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	uint8_t V_0 = 0x0;
	{
		int32_t L_0 = ___index0;
		NullCheck((RuntimeArray *)__this);
		int32_t L_1 = Array_get_Length_m21610649((RuntimeArray *)__this, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_0017;
		}
	}
	{
		ArgumentOutOfRangeException_t777629997 * L_2 = (ArgumentOutOfRangeException_t777629997 *)il2cpp_codegen_object_new(ArgumentOutOfRangeException_t777629997_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m3628145864(L_2, (String_t*)_stringLiteral797640427, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, NULL, Array_InternalArray__get_Item_TisByte_t1134296376_m3566214066_RuntimeMethod_var);
	}

IL_0017:
	{
		int32_t L_3 = ___index0;
		NullCheck((RuntimeArray *)__this);
		ArrayGetGenericValueImpl((RuntimeArray *)__this, (int32_t)L_3, (uint8_t*)(uint8_t*)(&V_0));
		uint8_t L_4 = V_0;
		return L_4;
	}
}
// T System.Array::InternalArray__get_Item<System.Char>(System.Int32)
extern "C" IL2CPP_METHOD_ATTR Il2CppChar Array_InternalArray__get_Item_TisChar_t3634460470_m324132692_gshared (RuntimeArray * __this, int32_t ___index0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Array_InternalArray__get_Item_TisChar_t3634460470_m324132692_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Il2CppChar V_0 = 0x0;
	{
		int32_t L_0 = ___index0;
		NullCheck((RuntimeArray *)__this);
		int32_t L_1 = Array_get_Length_m21610649((RuntimeArray *)__this, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_0017;
		}
	}
	{
		ArgumentOutOfRangeException_t777629997 * L_2 = (ArgumentOutOfRangeException_t777629997 *)il2cpp_codegen_object_new(ArgumentOutOfRangeException_t777629997_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m3628145864(L_2, (String_t*)_stringLiteral797640427, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, NULL, Array_InternalArray__get_Item_TisChar_t3634460470_m324132692_RuntimeMethod_var);
	}

IL_0017:
	{
		int32_t L_3 = ___index0;
		NullCheck((RuntimeArray *)__this);
		ArrayGetGenericValueImpl((RuntimeArray *)__this, (int32_t)L_3, (Il2CppChar*)(Il2CppChar*)(&V_0));
		Il2CppChar L_4 = V_0;
		return L_4;
	}
}
// T System.Array::InternalArray__get_Item<System.Collections.DictionaryEntry>(System.Int32)
extern "C" IL2CPP_METHOD_ATTR DictionaryEntry_t3123975638  Array_InternalArray__get_Item_TisDictionaryEntry_t3123975638_m479537688_gshared (RuntimeArray * __this, int32_t ___index0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Array_InternalArray__get_Item_TisDictionaryEntry_t3123975638_m479537688_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	DictionaryEntry_t3123975638  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		int32_t L_0 = ___index0;
		NullCheck((RuntimeArray *)__this);
		int32_t L_1 = Array_get_Length_m21610649((RuntimeArray *)__this, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_0017;
		}
	}
	{
		ArgumentOutOfRangeException_t777629997 * L_2 = (ArgumentOutOfRangeException_t777629997 *)il2cpp_codegen_object_new(ArgumentOutOfRangeException_t777629997_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m3628145864(L_2, (String_t*)_stringLiteral797640427, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, NULL, Array_InternalArray__get_Item_TisDictionaryEntry_t3123975638_m479537688_RuntimeMethod_var);
	}

IL_0017:
	{
		int32_t L_3 = ___index0;
		NullCheck((RuntimeArray *)__this);
		ArrayGetGenericValueImpl((RuntimeArray *)__this, (int32_t)L_3, (DictionaryEntry_t3123975638 *)(DictionaryEntry_t3123975638 *)(&V_0));
		DictionaryEntry_t3123975638  L_4 = V_0;
		return L_4;
	}
}
// T System.Array::InternalArray__get_Item<System.Collections.Generic.KeyValuePair`2<System.Object,System.Boolean>>(System.Int32)
extern "C" IL2CPP_METHOD_ATTR KeyValuePair_2_t3842366416  Array_InternalArray__get_Item_TisKeyValuePair_2_t3842366416_m3937535230_gshared (RuntimeArray * __this, int32_t ___index0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Array_InternalArray__get_Item_TisKeyValuePair_2_t3842366416_m3937535230_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	KeyValuePair_2_t3842366416  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		int32_t L_0 = ___index0;
		NullCheck((RuntimeArray *)__this);
		int32_t L_1 = Array_get_Length_m21610649((RuntimeArray *)__this, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_0017;
		}
	}
	{
		ArgumentOutOfRangeException_t777629997 * L_2 = (ArgumentOutOfRangeException_t777629997 *)il2cpp_codegen_object_new(ArgumentOutOfRangeException_t777629997_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m3628145864(L_2, (String_t*)_stringLiteral797640427, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, NULL, Array_InternalArray__get_Item_TisKeyValuePair_2_t3842366416_m3937535230_RuntimeMethod_var);
	}

IL_0017:
	{
		int32_t L_3 = ___index0;
		NullCheck((RuntimeArray *)__this);
		ArrayGetGenericValueImpl((RuntimeArray *)__this, (int32_t)L_3, (KeyValuePair_2_t3842366416 *)(KeyValuePair_2_t3842366416 *)(&V_0));
		KeyValuePair_2_t3842366416  L_4 = V_0;
		return L_4;
	}
}
// T System.Array::InternalArray__get_Item<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>(System.Int32)
extern "C" IL2CPP_METHOD_ATTR KeyValuePair_2_t2401056908  Array_InternalArray__get_Item_TisKeyValuePair_2_t2401056908_m3647027688_gshared (RuntimeArray * __this, int32_t ___index0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Array_InternalArray__get_Item_TisKeyValuePair_2_t2401056908_m3647027688_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	KeyValuePair_2_t2401056908  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		int32_t L_0 = ___index0;
		NullCheck((RuntimeArray *)__this);
		int32_t L_1 = Array_get_Length_m21610649((RuntimeArray *)__this, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_0017;
		}
	}
	{
		ArgumentOutOfRangeException_t777629997 * L_2 = (ArgumentOutOfRangeException_t777629997 *)il2cpp_codegen_object_new(ArgumentOutOfRangeException_t777629997_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m3628145864(L_2, (String_t*)_stringLiteral797640427, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, NULL, Array_InternalArray__get_Item_TisKeyValuePair_2_t2401056908_m3647027688_RuntimeMethod_var);
	}

IL_0017:
	{
		int32_t L_3 = ___index0;
		NullCheck((RuntimeArray *)__this);
		ArrayGetGenericValueImpl((RuntimeArray *)__this, (int32_t)L_3, (KeyValuePair_2_t2401056908 *)(KeyValuePair_2_t2401056908 *)(&V_0));
		KeyValuePair_2_t2401056908  L_4 = V_0;
		return L_4;
	}
}
// T System.Array::InternalArray__get_Item<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>(System.Int32)
extern "C" IL2CPP_METHOD_ATTR KeyValuePair_2_t2530217319  Array_InternalArray__get_Item_TisKeyValuePair_2_t2530217319_m2886833132_gshared (RuntimeArray * __this, int32_t ___index0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Array_InternalArray__get_Item_TisKeyValuePair_2_t2530217319_m2886833132_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	KeyValuePair_2_t2530217319  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		int32_t L_0 = ___index0;
		NullCheck((RuntimeArray *)__this);
		int32_t L_1 = Array_get_Length_m21610649((RuntimeArray *)__this, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_0017;
		}
	}
	{
		ArgumentOutOfRangeException_t777629997 * L_2 = (ArgumentOutOfRangeException_t777629997 *)il2cpp_codegen_object_new(ArgumentOutOfRangeException_t777629997_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m3628145864(L_2, (String_t*)_stringLiteral797640427, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, NULL, Array_InternalArray__get_Item_TisKeyValuePair_2_t2530217319_m2886833132_RuntimeMethod_var);
	}

IL_0017:
	{
		int32_t L_3 = ___index0;
		NullCheck((RuntimeArray *)__this);
		ArrayGetGenericValueImpl((RuntimeArray *)__this, (int32_t)L_3, (KeyValuePair_2_t2530217319 *)(KeyValuePair_2_t2530217319 *)(&V_0));
		KeyValuePair_2_t2530217319  L_4 = V_0;
		return L_4;
	}
}
// T System.Array::InternalArray__get_Item<System.Collections.Generic.Link>(System.Int32)
extern "C" IL2CPP_METHOD_ATTR Link_t544317964  Array_InternalArray__get_Item_TisLink_t544317964_m1669566993_gshared (RuntimeArray * __this, int32_t ___index0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Array_InternalArray__get_Item_TisLink_t544317964_m1669566993_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Link_t544317964  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		int32_t L_0 = ___index0;
		NullCheck((RuntimeArray *)__this);
		int32_t L_1 = Array_get_Length_m21610649((RuntimeArray *)__this, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_0017;
		}
	}
	{
		ArgumentOutOfRangeException_t777629997 * L_2 = (ArgumentOutOfRangeException_t777629997 *)il2cpp_codegen_object_new(ArgumentOutOfRangeException_t777629997_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m3628145864(L_2, (String_t*)_stringLiteral797640427, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, NULL, Array_InternalArray__get_Item_TisLink_t544317964_m1669566993_RuntimeMethod_var);
	}

IL_0017:
	{
		int32_t L_3 = ___index0;
		NullCheck((RuntimeArray *)__this);
		ArrayGetGenericValueImpl((RuntimeArray *)__this, (int32_t)L_3, (Link_t544317964 *)(Link_t544317964 *)(&V_0));
		Link_t544317964  L_4 = V_0;
		return L_4;
	}
}
// T System.Array::InternalArray__get_Item<System.Collections.Hashtable/Slot>(System.Int32)
extern "C" IL2CPP_METHOD_ATTR Slot_t3975888750  Array_InternalArray__get_Item_TisSlot_t3975888750_m905303097_gshared (RuntimeArray * __this, int32_t ___index0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Array_InternalArray__get_Item_TisSlot_t3975888750_m905303097_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Slot_t3975888750  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		int32_t L_0 = ___index0;
		NullCheck((RuntimeArray *)__this);
		int32_t L_1 = Array_get_Length_m21610649((RuntimeArray *)__this, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_0017;
		}
	}
	{
		ArgumentOutOfRangeException_t777629997 * L_2 = (ArgumentOutOfRangeException_t777629997 *)il2cpp_codegen_object_new(ArgumentOutOfRangeException_t777629997_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m3628145864(L_2, (String_t*)_stringLiteral797640427, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, NULL, Array_InternalArray__get_Item_TisSlot_t3975888750_m905303097_RuntimeMethod_var);
	}

IL_0017:
	{
		int32_t L_3 = ___index0;
		NullCheck((RuntimeArray *)__this);
		ArrayGetGenericValueImpl((RuntimeArray *)__this, (int32_t)L_3, (Slot_t3975888750 *)(Slot_t3975888750 *)(&V_0));
		Slot_t3975888750  L_4 = V_0;
		return L_4;
	}
}
// T System.Array::InternalArray__get_Item<System.Collections.SortedList/Slot>(System.Int32)
extern "C" IL2CPP_METHOD_ATTR Slot_t384495010  Array_InternalArray__get_Item_TisSlot_t384495010_m2861978404_gshared (RuntimeArray * __this, int32_t ___index0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Array_InternalArray__get_Item_TisSlot_t384495010_m2861978404_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Slot_t384495010  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		int32_t L_0 = ___index0;
		NullCheck((RuntimeArray *)__this);
		int32_t L_1 = Array_get_Length_m21610649((RuntimeArray *)__this, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_0017;
		}
	}
	{
		ArgumentOutOfRangeException_t777629997 * L_2 = (ArgumentOutOfRangeException_t777629997 *)il2cpp_codegen_object_new(ArgumentOutOfRangeException_t777629997_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m3628145864(L_2, (String_t*)_stringLiteral797640427, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, NULL, Array_InternalArray__get_Item_TisSlot_t384495010_m2861978404_RuntimeMethod_var);
	}

IL_0017:
	{
		int32_t L_3 = ___index0;
		NullCheck((RuntimeArray *)__this);
		ArrayGetGenericValueImpl((RuntimeArray *)__this, (int32_t)L_3, (Slot_t384495010 *)(Slot_t384495010 *)(&V_0));
		Slot_t384495010  L_4 = V_0;
		return L_4;
	}
}
// T System.Array::InternalArray__get_Item<System.DateTime>(System.Int32)
extern "C" IL2CPP_METHOD_ATTR DateTime_t3738529785  Array_InternalArray__get_Item_TisDateTime_t3738529785_m623181444_gshared (RuntimeArray * __this, int32_t ___index0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Array_InternalArray__get_Item_TisDateTime_t3738529785_m623181444_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	DateTime_t3738529785  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		int32_t L_0 = ___index0;
		NullCheck((RuntimeArray *)__this);
		int32_t L_1 = Array_get_Length_m21610649((RuntimeArray *)__this, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_0017;
		}
	}
	{
		ArgumentOutOfRangeException_t777629997 * L_2 = (ArgumentOutOfRangeException_t777629997 *)il2cpp_codegen_object_new(ArgumentOutOfRangeException_t777629997_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m3628145864(L_2, (String_t*)_stringLiteral797640427, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, NULL, Array_InternalArray__get_Item_TisDateTime_t3738529785_m623181444_RuntimeMethod_var);
	}

IL_0017:
	{
		int32_t L_3 = ___index0;
		NullCheck((RuntimeArray *)__this);
		ArrayGetGenericValueImpl((RuntimeArray *)__this, (int32_t)L_3, (DateTime_t3738529785 *)(DateTime_t3738529785 *)(&V_0));
		DateTime_t3738529785  L_4 = V_0;
		return L_4;
	}
}
// T System.Array::InternalArray__get_Item<System.Decimal>(System.Int32)
extern "C" IL2CPP_METHOD_ATTR Decimal_t2948259380  Array_InternalArray__get_Item_TisDecimal_t2948259380_m3511003792_gshared (RuntimeArray * __this, int32_t ___index0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Array_InternalArray__get_Item_TisDecimal_t2948259380_m3511003792_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Decimal_t2948259380  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		int32_t L_0 = ___index0;
		NullCheck((RuntimeArray *)__this);
		int32_t L_1 = Array_get_Length_m21610649((RuntimeArray *)__this, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_0017;
		}
	}
	{
		ArgumentOutOfRangeException_t777629997 * L_2 = (ArgumentOutOfRangeException_t777629997 *)il2cpp_codegen_object_new(ArgumentOutOfRangeException_t777629997_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m3628145864(L_2, (String_t*)_stringLiteral797640427, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, NULL, Array_InternalArray__get_Item_TisDecimal_t2948259380_m3511003792_RuntimeMethod_var);
	}

IL_0017:
	{
		int32_t L_3 = ___index0;
		NullCheck((RuntimeArray *)__this);
		ArrayGetGenericValueImpl((RuntimeArray *)__this, (int32_t)L_3, (Decimal_t2948259380 *)(Decimal_t2948259380 *)(&V_0));
		Decimal_t2948259380  L_4 = V_0;
		return L_4;
	}
}
// T System.Array::InternalArray__get_Item<System.Double>(System.Int32)
extern "C" IL2CPP_METHOD_ATTR double Array_InternalArray__get_Item_TisDouble_t594665363_m850827605_gshared (RuntimeArray * __this, int32_t ___index0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Array_InternalArray__get_Item_TisDouble_t594665363_m850827605_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	double V_0 = 0.0;
	{
		int32_t L_0 = ___index0;
		NullCheck((RuntimeArray *)__this);
		int32_t L_1 = Array_get_Length_m21610649((RuntimeArray *)__this, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_0017;
		}
	}
	{
		ArgumentOutOfRangeException_t777629997 * L_2 = (ArgumentOutOfRangeException_t777629997 *)il2cpp_codegen_object_new(ArgumentOutOfRangeException_t777629997_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m3628145864(L_2, (String_t*)_stringLiteral797640427, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, NULL, Array_InternalArray__get_Item_TisDouble_t594665363_m850827605_RuntimeMethod_var);
	}

IL_0017:
	{
		int32_t L_3 = ___index0;
		NullCheck((RuntimeArray *)__this);
		ArrayGetGenericValueImpl((RuntimeArray *)__this, (int32_t)L_3, (double*)(double*)(&V_0));
		double L_4 = V_0;
		return L_4;
	}
}
// T System.Array::InternalArray__get_Item<System.Int16>(System.Int32)
extern "C" IL2CPP_METHOD_ATTR int16_t Array_InternalArray__get_Item_TisInt16_t2552820387_m76930473_gshared (RuntimeArray * __this, int32_t ___index0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Array_InternalArray__get_Item_TisInt16_t2552820387_m76930473_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int16_t V_0 = 0;
	{
		int32_t L_0 = ___index0;
		NullCheck((RuntimeArray *)__this);
		int32_t L_1 = Array_get_Length_m21610649((RuntimeArray *)__this, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_0017;
		}
	}
	{
		ArgumentOutOfRangeException_t777629997 * L_2 = (ArgumentOutOfRangeException_t777629997 *)il2cpp_codegen_object_new(ArgumentOutOfRangeException_t777629997_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m3628145864(L_2, (String_t*)_stringLiteral797640427, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, NULL, Array_InternalArray__get_Item_TisInt16_t2552820387_m76930473_RuntimeMethod_var);
	}

IL_0017:
	{
		int32_t L_3 = ___index0;
		NullCheck((RuntimeArray *)__this);
		ArrayGetGenericValueImpl((RuntimeArray *)__this, (int32_t)L_3, (int16_t*)(int16_t*)(&V_0));
		int16_t L_4 = V_0;
		return L_4;
	}
}
// T System.Array::InternalArray__get_Item<System.Int32>(System.Int32)
extern "C" IL2CPP_METHOD_ATTR int32_t Array_InternalArray__get_Item_TisInt32_t2950945753_m714868479_gshared (RuntimeArray * __this, int32_t ___index0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Array_InternalArray__get_Item_TisInt32_t2950945753_m714868479_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		int32_t L_0 = ___index0;
		NullCheck((RuntimeArray *)__this);
		int32_t L_1 = Array_get_Length_m21610649((RuntimeArray *)__this, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_0017;
		}
	}
	{
		ArgumentOutOfRangeException_t777629997 * L_2 = (ArgumentOutOfRangeException_t777629997 *)il2cpp_codegen_object_new(ArgumentOutOfRangeException_t777629997_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m3628145864(L_2, (String_t*)_stringLiteral797640427, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, NULL, Array_InternalArray__get_Item_TisInt32_t2950945753_m714868479_RuntimeMethod_var);
	}

IL_0017:
	{
		int32_t L_3 = ___index0;
		NullCheck((RuntimeArray *)__this);
		ArrayGetGenericValueImpl((RuntimeArray *)__this, (int32_t)L_3, (int32_t*)(int32_t*)(&V_0));
		int32_t L_4 = V_0;
		return L_4;
	}
}
// T System.Array::InternalArray__get_Item<System.Int64>(System.Int32)
extern "C" IL2CPP_METHOD_ATTR int64_t Array_InternalArray__get_Item_TisInt64_t3736567304_m3562990826_gshared (RuntimeArray * __this, int32_t ___index0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Array_InternalArray__get_Item_TisInt64_t3736567304_m3562990826_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int64_t V_0 = 0;
	{
		int32_t L_0 = ___index0;
		NullCheck((RuntimeArray *)__this);
		int32_t L_1 = Array_get_Length_m21610649((RuntimeArray *)__this, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_0017;
		}
	}
	{
		ArgumentOutOfRangeException_t777629997 * L_2 = (ArgumentOutOfRangeException_t777629997 *)il2cpp_codegen_object_new(ArgumentOutOfRangeException_t777629997_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m3628145864(L_2, (String_t*)_stringLiteral797640427, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, NULL, Array_InternalArray__get_Item_TisInt64_t3736567304_m3562990826_RuntimeMethod_var);
	}

IL_0017:
	{
		int32_t L_3 = ___index0;
		NullCheck((RuntimeArray *)__this);
		ArrayGetGenericValueImpl((RuntimeArray *)__this, (int32_t)L_3, (int64_t*)(int64_t*)(&V_0));
		int64_t L_4 = V_0;
		return L_4;
	}
}
// T System.Array::InternalArray__get_Item<System.IntPtr>(System.Int32)
extern "C" IL2CPP_METHOD_ATTR intptr_t Array_InternalArray__get_Item_TisIntPtr_t_m784054003_gshared (RuntimeArray * __this, int32_t ___index0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Array_InternalArray__get_Item_TisIntPtr_t_m784054003_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		int32_t L_0 = ___index0;
		NullCheck((RuntimeArray *)__this);
		int32_t L_1 = Array_get_Length_m21610649((RuntimeArray *)__this, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_0017;
		}
	}
	{
		ArgumentOutOfRangeException_t777629997 * L_2 = (ArgumentOutOfRangeException_t777629997 *)il2cpp_codegen_object_new(ArgumentOutOfRangeException_t777629997_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m3628145864(L_2, (String_t*)_stringLiteral797640427, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, NULL, Array_InternalArray__get_Item_TisIntPtr_t_m784054003_RuntimeMethod_var);
	}

IL_0017:
	{
		int32_t L_3 = ___index0;
		NullCheck((RuntimeArray *)__this);
		ArrayGetGenericValueImpl((RuntimeArray *)__this, (int32_t)L_3, (intptr_t*)(intptr_t*)(&V_0));
		intptr_t L_4 = V_0;
		return L_4;
	}
}
// T System.Array::InternalArray__get_Item<System.Object>(System.Int32)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * Array_InternalArray__get_Item_TisRuntimeObject_m3347010206_gshared (RuntimeArray * __this, int32_t ___index0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Array_InternalArray__get_Item_TisRuntimeObject_m3347010206_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject * V_0 = NULL;
	{
		int32_t L_0 = ___index0;
		NullCheck((RuntimeArray *)__this);
		int32_t L_1 = Array_get_Length_m21610649((RuntimeArray *)__this, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_0017;
		}
	}
	{
		ArgumentOutOfRangeException_t777629997 * L_2 = (ArgumentOutOfRangeException_t777629997 *)il2cpp_codegen_object_new(ArgumentOutOfRangeException_t777629997_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m3628145864(L_2, (String_t*)_stringLiteral797640427, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, NULL, Array_InternalArray__get_Item_TisRuntimeObject_m3347010206_RuntimeMethod_var);
	}

IL_0017:
	{
		int32_t L_3 = ___index0;
		NullCheck((RuntimeArray *)__this);
		ArrayGetGenericValueImpl((RuntimeArray *)__this, (int32_t)L_3, (RuntimeObject **)(RuntimeObject **)(&V_0));
		RuntimeObject * L_4 = V_0;
		return L_4;
	}
}
// T System.Array::InternalArray__get_Item<System.Reflection.CustomAttributeNamedArgument>(System.Int32)
extern "C" IL2CPP_METHOD_ATTR CustomAttributeNamedArgument_t287865710  Array_InternalArray__get_Item_TisCustomAttributeNamedArgument_t287865710_m2282658220_gshared (RuntimeArray * __this, int32_t ___index0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Array_InternalArray__get_Item_TisCustomAttributeNamedArgument_t287865710_m2282658220_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	CustomAttributeNamedArgument_t287865710  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		int32_t L_0 = ___index0;
		NullCheck((RuntimeArray *)__this);
		int32_t L_1 = Array_get_Length_m21610649((RuntimeArray *)__this, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_0017;
		}
	}
	{
		ArgumentOutOfRangeException_t777629997 * L_2 = (ArgumentOutOfRangeException_t777629997 *)il2cpp_codegen_object_new(ArgumentOutOfRangeException_t777629997_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m3628145864(L_2, (String_t*)_stringLiteral797640427, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, NULL, Array_InternalArray__get_Item_TisCustomAttributeNamedArgument_t287865710_m2282658220_RuntimeMethod_var);
	}

IL_0017:
	{
		int32_t L_3 = ___index0;
		NullCheck((RuntimeArray *)__this);
		ArrayGetGenericValueImpl((RuntimeArray *)__this, (int32_t)L_3, (CustomAttributeNamedArgument_t287865710 *)(CustomAttributeNamedArgument_t287865710 *)(&V_0));
		CustomAttributeNamedArgument_t287865710  L_4 = V_0;
		return L_4;
	}
}
// T System.Array::InternalArray__get_Item<System.Reflection.CustomAttributeTypedArgument>(System.Int32)
extern "C" IL2CPP_METHOD_ATTR CustomAttributeTypedArgument_t2723150157  Array_InternalArray__get_Item_TisCustomAttributeTypedArgument_t2723150157_m2639399822_gshared (RuntimeArray * __this, int32_t ___index0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Array_InternalArray__get_Item_TisCustomAttributeTypedArgument_t2723150157_m2639399822_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	CustomAttributeTypedArgument_t2723150157  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		int32_t L_0 = ___index0;
		NullCheck((RuntimeArray *)__this);
		int32_t L_1 = Array_get_Length_m21610649((RuntimeArray *)__this, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_0017;
		}
	}
	{
		ArgumentOutOfRangeException_t777629997 * L_2 = (ArgumentOutOfRangeException_t777629997 *)il2cpp_codegen_object_new(ArgumentOutOfRangeException_t777629997_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m3628145864(L_2, (String_t*)_stringLiteral797640427, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, NULL, Array_InternalArray__get_Item_TisCustomAttributeTypedArgument_t2723150157_m2639399822_RuntimeMethod_var);
	}

IL_0017:
	{
		int32_t L_3 = ___index0;
		NullCheck((RuntimeArray *)__this);
		ArrayGetGenericValueImpl((RuntimeArray *)__this, (int32_t)L_3, (CustomAttributeTypedArgument_t2723150157 *)(CustomAttributeTypedArgument_t2723150157 *)(&V_0));
		CustomAttributeTypedArgument_t2723150157  L_4 = V_0;
		return L_4;
	}
}
// T System.Array::InternalArray__get_Item<System.Reflection.Emit.ILGenerator/LabelData>(System.Int32)
extern "C" IL2CPP_METHOD_ATTR LabelData_t360167391  Array_InternalArray__get_Item_TisLabelData_t360167391_m1054702781_gshared (RuntimeArray * __this, int32_t ___index0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Array_InternalArray__get_Item_TisLabelData_t360167391_m1054702781_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	LabelData_t360167391  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		int32_t L_0 = ___index0;
		NullCheck((RuntimeArray *)__this);
		int32_t L_1 = Array_get_Length_m21610649((RuntimeArray *)__this, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_0017;
		}
	}
	{
		ArgumentOutOfRangeException_t777629997 * L_2 = (ArgumentOutOfRangeException_t777629997 *)il2cpp_codegen_object_new(ArgumentOutOfRangeException_t777629997_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m3628145864(L_2, (String_t*)_stringLiteral797640427, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, NULL, Array_InternalArray__get_Item_TisLabelData_t360167391_m1054702781_RuntimeMethod_var);
	}

IL_0017:
	{
		int32_t L_3 = ___index0;
		NullCheck((RuntimeArray *)__this);
		ArrayGetGenericValueImpl((RuntimeArray *)__this, (int32_t)L_3, (LabelData_t360167391 *)(LabelData_t360167391 *)(&V_0));
		LabelData_t360167391  L_4 = V_0;
		return L_4;
	}
}
// T System.Array::InternalArray__get_Item<System.Reflection.Emit.ILGenerator/LabelFixup>(System.Int32)
extern "C" IL2CPP_METHOD_ATTR LabelFixup_t858502054  Array_InternalArray__get_Item_TisLabelFixup_t858502054_m3276643490_gshared (RuntimeArray * __this, int32_t ___index0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Array_InternalArray__get_Item_TisLabelFixup_t858502054_m3276643490_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	LabelFixup_t858502054  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		int32_t L_0 = ___index0;
		NullCheck((RuntimeArray *)__this);
		int32_t L_1 = Array_get_Length_m21610649((RuntimeArray *)__this, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_0017;
		}
	}
	{
		ArgumentOutOfRangeException_t777629997 * L_2 = (ArgumentOutOfRangeException_t777629997 *)il2cpp_codegen_object_new(ArgumentOutOfRangeException_t777629997_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m3628145864(L_2, (String_t*)_stringLiteral797640427, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, NULL, Array_InternalArray__get_Item_TisLabelFixup_t858502054_m3276643490_RuntimeMethod_var);
	}

IL_0017:
	{
		int32_t L_3 = ___index0;
		NullCheck((RuntimeArray *)__this);
		ArrayGetGenericValueImpl((RuntimeArray *)__this, (int32_t)L_3, (LabelFixup_t858502054 *)(LabelFixup_t858502054 *)(&V_0));
		LabelFixup_t858502054  L_4 = V_0;
		return L_4;
	}
}
// T System.Array::InternalArray__get_Item<System.Reflection.Emit.ILTokenInfo>(System.Int32)
extern "C" IL2CPP_METHOD_ATTR ILTokenInfo_t2325775114  Array_InternalArray__get_Item_TisILTokenInfo_t2325775114_m3110830457_gshared (RuntimeArray * __this, int32_t ___index0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Array_InternalArray__get_Item_TisILTokenInfo_t2325775114_m3110830457_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	ILTokenInfo_t2325775114  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		int32_t L_0 = ___index0;
		NullCheck((RuntimeArray *)__this);
		int32_t L_1 = Array_get_Length_m21610649((RuntimeArray *)__this, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_0017;
		}
	}
	{
		ArgumentOutOfRangeException_t777629997 * L_2 = (ArgumentOutOfRangeException_t777629997 *)il2cpp_codegen_object_new(ArgumentOutOfRangeException_t777629997_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m3628145864(L_2, (String_t*)_stringLiteral797640427, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, NULL, Array_InternalArray__get_Item_TisILTokenInfo_t2325775114_m3110830457_RuntimeMethod_var);
	}

IL_0017:
	{
		int32_t L_3 = ___index0;
		NullCheck((RuntimeArray *)__this);
		ArrayGetGenericValueImpl((RuntimeArray *)__this, (int32_t)L_3, (ILTokenInfo_t2325775114 *)(ILTokenInfo_t2325775114 *)(&V_0));
		ILTokenInfo_t2325775114  L_4 = V_0;
		return L_4;
	}
}
// T System.Array::InternalArray__get_Item<System.Reflection.Emit.MonoResource>(System.Int32)
extern "C" IL2CPP_METHOD_ATTR MonoResource_t4103430009  Array_InternalArray__get_Item_TisMonoResource_t4103430009_m2937222811_gshared (RuntimeArray * __this, int32_t ___index0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Array_InternalArray__get_Item_TisMonoResource_t4103430009_m2937222811_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	MonoResource_t4103430009  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		int32_t L_0 = ___index0;
		NullCheck((RuntimeArray *)__this);
		int32_t L_1 = Array_get_Length_m21610649((RuntimeArray *)__this, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_0017;
		}
	}
	{
		ArgumentOutOfRangeException_t777629997 * L_2 = (ArgumentOutOfRangeException_t777629997 *)il2cpp_codegen_object_new(ArgumentOutOfRangeException_t777629997_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m3628145864(L_2, (String_t*)_stringLiteral797640427, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, NULL, Array_InternalArray__get_Item_TisMonoResource_t4103430009_m2937222811_RuntimeMethod_var);
	}

IL_0017:
	{
		int32_t L_3 = ___index0;
		NullCheck((RuntimeArray *)__this);
		ArrayGetGenericValueImpl((RuntimeArray *)__this, (int32_t)L_3, (MonoResource_t4103430009 *)(MonoResource_t4103430009 *)(&V_0));
		MonoResource_t4103430009  L_4 = V_0;
		return L_4;
	}
}
// T System.Array::InternalArray__get_Item<System.Reflection.Emit.MonoWin32Resource>(System.Int32)
extern "C" IL2CPP_METHOD_ATTR MonoWin32Resource_t1904229483  Array_InternalArray__get_Item_TisMonoWin32Resource_t1904229483_m513901999_gshared (RuntimeArray * __this, int32_t ___index0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Array_InternalArray__get_Item_TisMonoWin32Resource_t1904229483_m513901999_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	MonoWin32Resource_t1904229483  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		int32_t L_0 = ___index0;
		NullCheck((RuntimeArray *)__this);
		int32_t L_1 = Array_get_Length_m21610649((RuntimeArray *)__this, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_0017;
		}
	}
	{
		ArgumentOutOfRangeException_t777629997 * L_2 = (ArgumentOutOfRangeException_t777629997 *)il2cpp_codegen_object_new(ArgumentOutOfRangeException_t777629997_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m3628145864(L_2, (String_t*)_stringLiteral797640427, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, NULL, Array_InternalArray__get_Item_TisMonoWin32Resource_t1904229483_m513901999_RuntimeMethod_var);
	}

IL_0017:
	{
		int32_t L_3 = ___index0;
		NullCheck((RuntimeArray *)__this);
		ArrayGetGenericValueImpl((RuntimeArray *)__this, (int32_t)L_3, (MonoWin32Resource_t1904229483 *)(MonoWin32Resource_t1904229483 *)(&V_0));
		MonoWin32Resource_t1904229483  L_4 = V_0;
		return L_4;
	}
}
// T System.Array::InternalArray__get_Item<System.Reflection.Emit.RefEmitPermissionSet>(System.Int32)
extern "C" IL2CPP_METHOD_ATTR RefEmitPermissionSet_t484390987  Array_InternalArray__get_Item_TisRefEmitPermissionSet_t484390987_m1505876205_gshared (RuntimeArray * __this, int32_t ___index0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Array_InternalArray__get_Item_TisRefEmitPermissionSet_t484390987_m1505876205_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RefEmitPermissionSet_t484390987  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		int32_t L_0 = ___index0;
		NullCheck((RuntimeArray *)__this);
		int32_t L_1 = Array_get_Length_m21610649((RuntimeArray *)__this, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_0017;
		}
	}
	{
		ArgumentOutOfRangeException_t777629997 * L_2 = (ArgumentOutOfRangeException_t777629997 *)il2cpp_codegen_object_new(ArgumentOutOfRangeException_t777629997_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m3628145864(L_2, (String_t*)_stringLiteral797640427, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, NULL, Array_InternalArray__get_Item_TisRefEmitPermissionSet_t484390987_m1505876205_RuntimeMethod_var);
	}

IL_0017:
	{
		int32_t L_3 = ___index0;
		NullCheck((RuntimeArray *)__this);
		ArrayGetGenericValueImpl((RuntimeArray *)__this, (int32_t)L_3, (RefEmitPermissionSet_t484390987 *)(RefEmitPermissionSet_t484390987 *)(&V_0));
		RefEmitPermissionSet_t484390987  L_4 = V_0;
		return L_4;
	}
}
// T System.Array::InternalArray__get_Item<System.Reflection.ParameterModifier>(System.Int32)
extern "C" IL2CPP_METHOD_ATTR ParameterModifier_t1461694466  Array_InternalArray__get_Item_TisParameterModifier_t1461694466_m29553316_gshared (RuntimeArray * __this, int32_t ___index0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Array_InternalArray__get_Item_TisParameterModifier_t1461694466_m29553316_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	ParameterModifier_t1461694466  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		int32_t L_0 = ___index0;
		NullCheck((RuntimeArray *)__this);
		int32_t L_1 = Array_get_Length_m21610649((RuntimeArray *)__this, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_0017;
		}
	}
	{
		ArgumentOutOfRangeException_t777629997 * L_2 = (ArgumentOutOfRangeException_t777629997 *)il2cpp_codegen_object_new(ArgumentOutOfRangeException_t777629997_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m3628145864(L_2, (String_t*)_stringLiteral797640427, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, NULL, Array_InternalArray__get_Item_TisParameterModifier_t1461694466_m29553316_RuntimeMethod_var);
	}

IL_0017:
	{
		int32_t L_3 = ___index0;
		NullCheck((RuntimeArray *)__this);
		ArrayGetGenericValueImpl((RuntimeArray *)__this, (int32_t)L_3, (ParameterModifier_t1461694466 *)(ParameterModifier_t1461694466 *)(&V_0));
		ParameterModifier_t1461694466  L_4 = V_0;
		return L_4;
	}
}
// T System.Array::InternalArray__get_Item<System.Resources.ResourceReader/ResourceCacheItem>(System.Int32)
extern "C" IL2CPP_METHOD_ATTR ResourceCacheItem_t51292791  Array_InternalArray__get_Item_TisResourceCacheItem_t51292791_m1306056717_gshared (RuntimeArray * __this, int32_t ___index0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Array_InternalArray__get_Item_TisResourceCacheItem_t51292791_m1306056717_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	ResourceCacheItem_t51292791  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		int32_t L_0 = ___index0;
		NullCheck((RuntimeArray *)__this);
		int32_t L_1 = Array_get_Length_m21610649((RuntimeArray *)__this, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_0017;
		}
	}
	{
		ArgumentOutOfRangeException_t777629997 * L_2 = (ArgumentOutOfRangeException_t777629997 *)il2cpp_codegen_object_new(ArgumentOutOfRangeException_t777629997_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m3628145864(L_2, (String_t*)_stringLiteral797640427, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, NULL, Array_InternalArray__get_Item_TisResourceCacheItem_t51292791_m1306056717_RuntimeMethod_var);
	}

IL_0017:
	{
		int32_t L_3 = ___index0;
		NullCheck((RuntimeArray *)__this);
		ArrayGetGenericValueImpl((RuntimeArray *)__this, (int32_t)L_3, (ResourceCacheItem_t51292791 *)(ResourceCacheItem_t51292791 *)(&V_0));
		ResourceCacheItem_t51292791  L_4 = V_0;
		return L_4;
	}
}
// T System.Array::InternalArray__get_Item<System.Resources.ResourceReader/ResourceInfo>(System.Int32)
extern "C" IL2CPP_METHOD_ATTR ResourceInfo_t2872965302  Array_InternalArray__get_Item_TisResourceInfo_t2872965302_m3865610257_gshared (RuntimeArray * __this, int32_t ___index0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Array_InternalArray__get_Item_TisResourceInfo_t2872965302_m3865610257_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	ResourceInfo_t2872965302  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		int32_t L_0 = ___index0;
		NullCheck((RuntimeArray *)__this);
		int32_t L_1 = Array_get_Length_m21610649((RuntimeArray *)__this, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_0017;
		}
	}
	{
		ArgumentOutOfRangeException_t777629997 * L_2 = (ArgumentOutOfRangeException_t777629997 *)il2cpp_codegen_object_new(ArgumentOutOfRangeException_t777629997_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m3628145864(L_2, (String_t*)_stringLiteral797640427, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, NULL, Array_InternalArray__get_Item_TisResourceInfo_t2872965302_m3865610257_RuntimeMethod_var);
	}

IL_0017:
	{
		int32_t L_3 = ___index0;
		NullCheck((RuntimeArray *)__this);
		ArrayGetGenericValueImpl((RuntimeArray *)__this, (int32_t)L_3, (ResourceInfo_t2872965302 *)(ResourceInfo_t2872965302 *)(&V_0));
		ResourceInfo_t2872965302  L_4 = V_0;
		return L_4;
	}
}
// T System.Array::InternalArray__get_Item<System.Runtime.Serialization.Formatters.Binary.TypeTag>(System.Int32)
extern "C" IL2CPP_METHOD_ATTR uint8_t Array_InternalArray__get_Item_TisTypeTag_t3541821701_m4208350471_gshared (RuntimeArray * __this, int32_t ___index0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Array_InternalArray__get_Item_TisTypeTag_t3541821701_m4208350471_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	uint8_t V_0 = 0;
	{
		int32_t L_0 = ___index0;
		NullCheck((RuntimeArray *)__this);
		int32_t L_1 = Array_get_Length_m21610649((RuntimeArray *)__this, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_0017;
		}
	}
	{
		ArgumentOutOfRangeException_t777629997 * L_2 = (ArgumentOutOfRangeException_t777629997 *)il2cpp_codegen_object_new(ArgumentOutOfRangeException_t777629997_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m3628145864(L_2, (String_t*)_stringLiteral797640427, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, NULL, Array_InternalArray__get_Item_TisTypeTag_t3541821701_m4208350471_RuntimeMethod_var);
	}

IL_0017:
	{
		int32_t L_3 = ___index0;
		NullCheck((RuntimeArray *)__this);
		ArrayGetGenericValueImpl((RuntimeArray *)__this, (int32_t)L_3, (uint8_t*)(uint8_t*)(&V_0));
		uint8_t L_4 = V_0;
		return L_4;
	}
}
// T System.Array::InternalArray__get_Item<System.SByte>(System.Int32)
extern "C" IL2CPP_METHOD_ATTR int8_t Array_InternalArray__get_Item_TisSByte_t1669577662_m2349608172_gshared (RuntimeArray * __this, int32_t ___index0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Array_InternalArray__get_Item_TisSByte_t1669577662_m2349608172_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int8_t V_0 = 0x0;
	{
		int32_t L_0 = ___index0;
		NullCheck((RuntimeArray *)__this);
		int32_t L_1 = Array_get_Length_m21610649((RuntimeArray *)__this, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_0017;
		}
	}
	{
		ArgumentOutOfRangeException_t777629997 * L_2 = (ArgumentOutOfRangeException_t777629997 *)il2cpp_codegen_object_new(ArgumentOutOfRangeException_t777629997_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m3628145864(L_2, (String_t*)_stringLiteral797640427, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, NULL, Array_InternalArray__get_Item_TisSByte_t1669577662_m2349608172_RuntimeMethod_var);
	}

IL_0017:
	{
		int32_t L_3 = ___index0;
		NullCheck((RuntimeArray *)__this);
		ArrayGetGenericValueImpl((RuntimeArray *)__this, (int32_t)L_3, (int8_t*)(int8_t*)(&V_0));
		int8_t L_4 = V_0;
		return L_4;
	}
}
// T System.Array::InternalArray__get_Item<System.Security.Cryptography.X509Certificates.X509ChainStatus>(System.Int32)
extern "C" IL2CPP_METHOD_ATTR X509ChainStatus_t133602714  Array_InternalArray__get_Item_TisX509ChainStatus_t133602714_m2237651489_gshared (RuntimeArray * __this, int32_t ___index0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Array_InternalArray__get_Item_TisX509ChainStatus_t133602714_m2237651489_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	X509ChainStatus_t133602714  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		int32_t L_0 = ___index0;
		NullCheck((RuntimeArray *)__this);
		int32_t L_1 = Array_get_Length_m21610649((RuntimeArray *)__this, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_0017;
		}
	}
	{
		ArgumentOutOfRangeException_t777629997 * L_2 = (ArgumentOutOfRangeException_t777629997 *)il2cpp_codegen_object_new(ArgumentOutOfRangeException_t777629997_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m3628145864(L_2, (String_t*)_stringLiteral797640427, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, NULL, Array_InternalArray__get_Item_TisX509ChainStatus_t133602714_m2237651489_RuntimeMethod_var);
	}

IL_0017:
	{
		int32_t L_3 = ___index0;
		NullCheck((RuntimeArray *)__this);
		ArrayGetGenericValueImpl((RuntimeArray *)__this, (int32_t)L_3, (X509ChainStatus_t133602714 *)(X509ChainStatus_t133602714 *)(&V_0));
		X509ChainStatus_t133602714  L_4 = V_0;
		return L_4;
	}
}
// T System.Array::InternalArray__get_Item<System.Single>(System.Int32)
extern "C" IL2CPP_METHOD_ATTR float Array_InternalArray__get_Item_TisSingle_t1397266774_m1672589487_gshared (RuntimeArray * __this, int32_t ___index0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Array_InternalArray__get_Item_TisSingle_t1397266774_m1672589487_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	{
		int32_t L_0 = ___index0;
		NullCheck((RuntimeArray *)__this);
		int32_t L_1 = Array_get_Length_m21610649((RuntimeArray *)__this, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_0017;
		}
	}
	{
		ArgumentOutOfRangeException_t777629997 * L_2 = (ArgumentOutOfRangeException_t777629997 *)il2cpp_codegen_object_new(ArgumentOutOfRangeException_t777629997_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m3628145864(L_2, (String_t*)_stringLiteral797640427, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, NULL, Array_InternalArray__get_Item_TisSingle_t1397266774_m1672589487_RuntimeMethod_var);
	}

IL_0017:
	{
		int32_t L_3 = ___index0;
		NullCheck((RuntimeArray *)__this);
		ArrayGetGenericValueImpl((RuntimeArray *)__this, (int32_t)L_3, (float*)(float*)(&V_0));
		float L_4 = V_0;
		return L_4;
	}
}
// T System.Array::InternalArray__get_Item<System.Text.RegularExpressions.Mark>(System.Int32)
extern "C" IL2CPP_METHOD_ATTR Mark_t3471605523  Array_InternalArray__get_Item_TisMark_t3471605523_m3397473850_gshared (RuntimeArray * __this, int32_t ___index0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Array_InternalArray__get_Item_TisMark_t3471605523_m3397473850_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Mark_t3471605523  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		int32_t L_0 = ___index0;
		NullCheck((RuntimeArray *)__this);
		int32_t L_1 = Array_get_Length_m21610649((RuntimeArray *)__this, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_0017;
		}
	}
	{
		ArgumentOutOfRangeException_t777629997 * L_2 = (ArgumentOutOfRangeException_t777629997 *)il2cpp_codegen_object_new(ArgumentOutOfRangeException_t777629997_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m3628145864(L_2, (String_t*)_stringLiteral797640427, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, NULL, Array_InternalArray__get_Item_TisMark_t3471605523_m3397473850_RuntimeMethod_var);
	}

IL_0017:
	{
		int32_t L_3 = ___index0;
		NullCheck((RuntimeArray *)__this);
		ArrayGetGenericValueImpl((RuntimeArray *)__this, (int32_t)L_3, (Mark_t3471605523 *)(Mark_t3471605523 *)(&V_0));
		Mark_t3471605523  L_4 = V_0;
		return L_4;
	}
}
// T System.Array::InternalArray__get_Item<System.TimeSpan>(System.Int32)
extern "C" IL2CPP_METHOD_ATTR TimeSpan_t881159249  Array_InternalArray__get_Item_TisTimeSpan_t881159249_m1885583191_gshared (RuntimeArray * __this, int32_t ___index0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Array_InternalArray__get_Item_TisTimeSpan_t881159249_m1885583191_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	TimeSpan_t881159249  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		int32_t L_0 = ___index0;
		NullCheck((RuntimeArray *)__this);
		int32_t L_1 = Array_get_Length_m21610649((RuntimeArray *)__this, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_0017;
		}
	}
	{
		ArgumentOutOfRangeException_t777629997 * L_2 = (ArgumentOutOfRangeException_t777629997 *)il2cpp_codegen_object_new(ArgumentOutOfRangeException_t777629997_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m3628145864(L_2, (String_t*)_stringLiteral797640427, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, NULL, Array_InternalArray__get_Item_TisTimeSpan_t881159249_m1885583191_RuntimeMethod_var);
	}

IL_0017:
	{
		int32_t L_3 = ___index0;
		NullCheck((RuntimeArray *)__this);
		ArrayGetGenericValueImpl((RuntimeArray *)__this, (int32_t)L_3, (TimeSpan_t881159249 *)(TimeSpan_t881159249 *)(&V_0));
		TimeSpan_t881159249  L_4 = V_0;
		return L_4;
	}
}
// T System.Array::InternalArray__get_Item<System.UInt16>(System.Int32)
extern "C" IL2CPP_METHOD_ATTR uint16_t Array_InternalArray__get_Item_TisUInt16_t2177724958_m3601205466_gshared (RuntimeArray * __this, int32_t ___index0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Array_InternalArray__get_Item_TisUInt16_t2177724958_m3601205466_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	uint16_t V_0 = 0;
	{
		int32_t L_0 = ___index0;
		NullCheck((RuntimeArray *)__this);
		int32_t L_1 = Array_get_Length_m21610649((RuntimeArray *)__this, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_0017;
		}
	}
	{
		ArgumentOutOfRangeException_t777629997 * L_2 = (ArgumentOutOfRangeException_t777629997 *)il2cpp_codegen_object_new(ArgumentOutOfRangeException_t777629997_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m3628145864(L_2, (String_t*)_stringLiteral797640427, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, NULL, Array_InternalArray__get_Item_TisUInt16_t2177724958_m3601205466_RuntimeMethod_var);
	}

IL_0017:
	{
		int32_t L_3 = ___index0;
		NullCheck((RuntimeArray *)__this);
		ArrayGetGenericValueImpl((RuntimeArray *)__this, (int32_t)L_3, (uint16_t*)(uint16_t*)(&V_0));
		uint16_t L_4 = V_0;
		return L_4;
	}
}
// T System.Array::InternalArray__get_Item<System.UInt32>(System.Int32)
extern "C" IL2CPP_METHOD_ATTR uint32_t Array_InternalArray__get_Item_TisUInt32_t2560061978_m1955195035_gshared (RuntimeArray * __this, int32_t ___index0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Array_InternalArray__get_Item_TisUInt32_t2560061978_m1955195035_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	uint32_t V_0 = 0;
	{
		int32_t L_0 = ___index0;
		NullCheck((RuntimeArray *)__this);
		int32_t L_1 = Array_get_Length_m21610649((RuntimeArray *)__this, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_0017;
		}
	}
	{
		ArgumentOutOfRangeException_t777629997 * L_2 = (ArgumentOutOfRangeException_t777629997 *)il2cpp_codegen_object_new(ArgumentOutOfRangeException_t777629997_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m3628145864(L_2, (String_t*)_stringLiteral797640427, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, NULL, Array_InternalArray__get_Item_TisUInt32_t2560061978_m1955195035_RuntimeMethod_var);
	}

IL_0017:
	{
		int32_t L_3 = ___index0;
		NullCheck((RuntimeArray *)__this);
		ArrayGetGenericValueImpl((RuntimeArray *)__this, (int32_t)L_3, (uint32_t*)(uint32_t*)(&V_0));
		uint32_t L_4 = V_0;
		return L_4;
	}
}
// T System.Array::InternalArray__get_Item<System.UInt64>(System.Int32)
extern "C" IL2CPP_METHOD_ATTR uint64_t Array_InternalArray__get_Item_TisUInt64_t4134040092_m129291315_gshared (RuntimeArray * __this, int32_t ___index0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Array_InternalArray__get_Item_TisUInt64_t4134040092_m129291315_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	uint64_t V_0 = 0;
	{
		int32_t L_0 = ___index0;
		NullCheck((RuntimeArray *)__this);
		int32_t L_1 = Array_get_Length_m21610649((RuntimeArray *)__this, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_0017;
		}
	}
	{
		ArgumentOutOfRangeException_t777629997 * L_2 = (ArgumentOutOfRangeException_t777629997 *)il2cpp_codegen_object_new(ArgumentOutOfRangeException_t777629997_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m3628145864(L_2, (String_t*)_stringLiteral797640427, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, NULL, Array_InternalArray__get_Item_TisUInt64_t4134040092_m129291315_RuntimeMethod_var);
	}

IL_0017:
	{
		int32_t L_3 = ___index0;
		NullCheck((RuntimeArray *)__this);
		ArrayGetGenericValueImpl((RuntimeArray *)__this, (int32_t)L_3, (uint64_t*)(uint64_t*)(&V_0));
		uint64_t L_4 = V_0;
		return L_4;
	}
}
// T System.Array::InternalArray__get_Item<System.Uri/UriScheme>(System.Int32)
extern "C" IL2CPP_METHOD_ATTR UriScheme_t722425697  Array_InternalArray__get_Item_TisUriScheme_t722425697_m2816273040_gshared (RuntimeArray * __this, int32_t ___index0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Array_InternalArray__get_Item_TisUriScheme_t722425697_m2816273040_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	UriScheme_t722425697  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		int32_t L_0 = ___index0;
		NullCheck((RuntimeArray *)__this);
		int32_t L_1 = Array_get_Length_m21610649((RuntimeArray *)__this, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_0017;
		}
	}
	{
		ArgumentOutOfRangeException_t777629997 * L_2 = (ArgumentOutOfRangeException_t777629997 *)il2cpp_codegen_object_new(ArgumentOutOfRangeException_t777629997_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m3628145864(L_2, (String_t*)_stringLiteral797640427, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, NULL, Array_InternalArray__get_Item_TisUriScheme_t722425697_m2816273040_RuntimeMethod_var);
	}

IL_0017:
	{
		int32_t L_3 = ___index0;
		NullCheck((RuntimeArray *)__this);
		ArrayGetGenericValueImpl((RuntimeArray *)__this, (int32_t)L_3, (UriScheme_t722425697 *)(UriScheme_t722425697 *)(&V_0));
		UriScheme_t722425697  L_4 = V_0;
		return L_4;
	}
}
// T System.Array::InternalArray__get_Item<UnityEngine.BeforeRenderHelper/OrderBlock>(System.Int32)
extern "C" IL2CPP_METHOD_ATTR OrderBlock_t1585977831  Array_InternalArray__get_Item_TisOrderBlock_t1585977831_m2406385050_gshared (RuntimeArray * __this, int32_t ___index0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Array_InternalArray__get_Item_TisOrderBlock_t1585977831_m2406385050_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	OrderBlock_t1585977831  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		int32_t L_0 = ___index0;
		NullCheck((RuntimeArray *)__this);
		int32_t L_1 = Array_get_Length_m21610649((RuntimeArray *)__this, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_0017;
		}
	}
	{
		ArgumentOutOfRangeException_t777629997 * L_2 = (ArgumentOutOfRangeException_t777629997 *)il2cpp_codegen_object_new(ArgumentOutOfRangeException_t777629997_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m3628145864(L_2, (String_t*)_stringLiteral797640427, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, NULL, Array_InternalArray__get_Item_TisOrderBlock_t1585977831_m2406385050_RuntimeMethod_var);
	}

IL_0017:
	{
		int32_t L_3 = ___index0;
		NullCheck((RuntimeArray *)__this);
		ArrayGetGenericValueImpl((RuntimeArray *)__this, (int32_t)L_3, (OrderBlock_t1585977831 *)(OrderBlock_t1585977831 *)(&V_0));
		OrderBlock_t1585977831  L_4 = V_0;
		return L_4;
	}
}
// T System.Array::InternalArray__get_Item<UnityEngine.ContactPoint>(System.Int32)
extern "C" IL2CPP_METHOD_ATTR ContactPoint_t3758755253  Array_InternalArray__get_Item_TisContactPoint_t3758755253_m2489897608_gshared (RuntimeArray * __this, int32_t ___index0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Array_InternalArray__get_Item_TisContactPoint_t3758755253_m2489897608_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	ContactPoint_t3758755253  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		int32_t L_0 = ___index0;
		NullCheck((RuntimeArray *)__this);
		int32_t L_1 = Array_get_Length_m21610649((RuntimeArray *)__this, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_0017;
		}
	}
	{
		ArgumentOutOfRangeException_t777629997 * L_2 = (ArgumentOutOfRangeException_t777629997 *)il2cpp_codegen_object_new(ArgumentOutOfRangeException_t777629997_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m3628145864(L_2, (String_t*)_stringLiteral797640427, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, NULL, Array_InternalArray__get_Item_TisContactPoint_t3758755253_m2489897608_RuntimeMethod_var);
	}

IL_0017:
	{
		int32_t L_3 = ___index0;
		NullCheck((RuntimeArray *)__this);
		ArrayGetGenericValueImpl((RuntimeArray *)__this, (int32_t)L_3, (ContactPoint_t3758755253 *)(ContactPoint_t3758755253 *)(&V_0));
		ContactPoint_t3758755253  L_4 = V_0;
		return L_4;
	}
}
// T System.Array::InternalArray__get_Item<UnityEngine.Experimental.LowLevel.PlayerLoopSystem>(System.Int32)
extern "C" IL2CPP_METHOD_ATTR PlayerLoopSystem_t105772105  Array_InternalArray__get_Item_TisPlayerLoopSystem_t105772105_m3446275388_gshared (RuntimeArray * __this, int32_t ___index0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Array_InternalArray__get_Item_TisPlayerLoopSystem_t105772105_m3446275388_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	PlayerLoopSystem_t105772105  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		int32_t L_0 = ___index0;
		NullCheck((RuntimeArray *)__this);
		int32_t L_1 = Array_get_Length_m21610649((RuntimeArray *)__this, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_0017;
		}
	}
	{
		ArgumentOutOfRangeException_t777629997 * L_2 = (ArgumentOutOfRangeException_t777629997 *)il2cpp_codegen_object_new(ArgumentOutOfRangeException_t777629997_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m3628145864(L_2, (String_t*)_stringLiteral797640427, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, NULL, Array_InternalArray__get_Item_TisPlayerLoopSystem_t105772105_m3446275388_RuntimeMethod_var);
	}

IL_0017:
	{
		int32_t L_3 = ___index0;
		NullCheck((RuntimeArray *)__this);
		ArrayGetGenericValueImpl((RuntimeArray *)__this, (int32_t)L_3, (PlayerLoopSystem_t105772105 *)(PlayerLoopSystem_t105772105 *)(&V_0));
		PlayerLoopSystem_t105772105  L_4 = V_0;
		return L_4;
	}
}
// T System.Array::InternalArray__get_Item<UnityEngine.Keyframe>(System.Int32)
extern "C" IL2CPP_METHOD_ATTR Keyframe_t4206410242  Array_InternalArray__get_Item_TisKeyframe_t4206410242_m27698365_gshared (RuntimeArray * __this, int32_t ___index0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Array_InternalArray__get_Item_TisKeyframe_t4206410242_m27698365_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Keyframe_t4206410242  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		int32_t L_0 = ___index0;
		NullCheck((RuntimeArray *)__this);
		int32_t L_1 = Array_get_Length_m21610649((RuntimeArray *)__this, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_0017;
		}
	}
	{
		ArgumentOutOfRangeException_t777629997 * L_2 = (ArgumentOutOfRangeException_t777629997 *)il2cpp_codegen_object_new(ArgumentOutOfRangeException_t777629997_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m3628145864(L_2, (String_t*)_stringLiteral797640427, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, NULL, Array_InternalArray__get_Item_TisKeyframe_t4206410242_m27698365_RuntimeMethod_var);
	}

IL_0017:
	{
		int32_t L_3 = ___index0;
		NullCheck((RuntimeArray *)__this);
		ArrayGetGenericValueImpl((RuntimeArray *)__this, (int32_t)L_3, (Keyframe_t4206410242 *)(Keyframe_t4206410242 *)(&V_0));
		Keyframe_t4206410242  L_4 = V_0;
		return L_4;
	}
}
// T System.Array::InternalArray__get_Item<UnityEngine.Playables.PlayableBinding>(System.Int32)
extern "C" IL2CPP_METHOD_ATTR PlayableBinding_t354260709  Array_InternalArray__get_Item_TisPlayableBinding_t354260709_m3837494573_gshared (RuntimeArray * __this, int32_t ___index0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Array_InternalArray__get_Item_TisPlayableBinding_t354260709_m3837494573_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	PlayableBinding_t354260709  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		int32_t L_0 = ___index0;
		NullCheck((RuntimeArray *)__this);
		int32_t L_1 = Array_get_Length_m21610649((RuntimeArray *)__this, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_0017;
		}
	}
	{
		ArgumentOutOfRangeException_t777629997 * L_2 = (ArgumentOutOfRangeException_t777629997 *)il2cpp_codegen_object_new(ArgumentOutOfRangeException_t777629997_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m3628145864(L_2, (String_t*)_stringLiteral797640427, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, NULL, Array_InternalArray__get_Item_TisPlayableBinding_t354260709_m3837494573_RuntimeMethod_var);
	}

IL_0017:
	{
		int32_t L_3 = ___index0;
		NullCheck((RuntimeArray *)__this);
		ArrayGetGenericValueImpl((RuntimeArray *)__this, (int32_t)L_3, (PlayableBinding_t354260709 *)(PlayableBinding_t354260709 *)(&V_0));
		PlayableBinding_t354260709  L_4 = V_0;
		return L_4;
	}
}
// T System.Array::InternalArray__get_Item<UnityEngine.RaycastHit>(System.Int32)
extern "C" IL2CPP_METHOD_ATTR RaycastHit_t1056001966  Array_InternalArray__get_Item_TisRaycastHit_t1056001966_m3352067444_gshared (RuntimeArray * __this, int32_t ___index0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Array_InternalArray__get_Item_TisRaycastHit_t1056001966_m3352067444_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RaycastHit_t1056001966  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		int32_t L_0 = ___index0;
		NullCheck((RuntimeArray *)__this);
		int32_t L_1 = Array_get_Length_m21610649((RuntimeArray *)__this, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_0017;
		}
	}
	{
		ArgumentOutOfRangeException_t777629997 * L_2 = (ArgumentOutOfRangeException_t777629997 *)il2cpp_codegen_object_new(ArgumentOutOfRangeException_t777629997_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m3628145864(L_2, (String_t*)_stringLiteral797640427, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, NULL, Array_InternalArray__get_Item_TisRaycastHit_t1056001966_m3352067444_RuntimeMethod_var);
	}

IL_0017:
	{
		int32_t L_3 = ___index0;
		NullCheck((RuntimeArray *)__this);
		ArrayGetGenericValueImpl((RuntimeArray *)__this, (int32_t)L_3, (RaycastHit_t1056001966 *)(RaycastHit_t1056001966 *)(&V_0));
		RaycastHit_t1056001966  L_4 = V_0;
		return L_4;
	}
}
// T System.Array::InternalArray__get_Item<UnityEngine.SendMouseEvents/HitInfo>(System.Int32)
extern "C" IL2CPP_METHOD_ATTR HitInfo_t3229609740  Array_InternalArray__get_Item_TisHitInfo_t3229609740_m2260995172_gshared (RuntimeArray * __this, int32_t ___index0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Array_InternalArray__get_Item_TisHitInfo_t3229609740_m2260995172_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	HitInfo_t3229609740  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		int32_t L_0 = ___index0;
		NullCheck((RuntimeArray *)__this);
		int32_t L_1 = Array_get_Length_m21610649((RuntimeArray *)__this, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_0017;
		}
	}
	{
		ArgumentOutOfRangeException_t777629997 * L_2 = (ArgumentOutOfRangeException_t777629997 *)il2cpp_codegen_object_new(ArgumentOutOfRangeException_t777629997_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m3628145864(L_2, (String_t*)_stringLiteral797640427, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, NULL, Array_InternalArray__get_Item_TisHitInfo_t3229609740_m2260995172_RuntimeMethod_var);
	}

IL_0017:
	{
		int32_t L_3 = ___index0;
		NullCheck((RuntimeArray *)__this);
		ArrayGetGenericValueImpl((RuntimeArray *)__this, (int32_t)L_3, (HitInfo_t3229609740 *)(HitInfo_t3229609740 *)(&V_0));
		HitInfo_t3229609740  L_4 = V_0;
		return L_4;
	}
}
// T System.Array::InternalArray__get_Item<UnityEngine.SocialPlatforms.GameCenter.GcAchievementData>(System.Int32)
extern "C" IL2CPP_METHOD_ATTR GcAchievementData_t675222246  Array_InternalArray__get_Item_TisGcAchievementData_t675222246_m2680268485_gshared (RuntimeArray * __this, int32_t ___index0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Array_InternalArray__get_Item_TisGcAchievementData_t675222246_m2680268485_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	GcAchievementData_t675222246  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		int32_t L_0 = ___index0;
		NullCheck((RuntimeArray *)__this);
		int32_t L_1 = Array_get_Length_m21610649((RuntimeArray *)__this, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_0017;
		}
	}
	{
		ArgumentOutOfRangeException_t777629997 * L_2 = (ArgumentOutOfRangeException_t777629997 *)il2cpp_codegen_object_new(ArgumentOutOfRangeException_t777629997_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m3628145864(L_2, (String_t*)_stringLiteral797640427, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, NULL, Array_InternalArray__get_Item_TisGcAchievementData_t675222246_m2680268485_RuntimeMethod_var);
	}

IL_0017:
	{
		int32_t L_3 = ___index0;
		NullCheck((RuntimeArray *)__this);
		ArrayGetGenericValueImpl((RuntimeArray *)__this, (int32_t)L_3, (GcAchievementData_t675222246 *)(GcAchievementData_t675222246 *)(&V_0));
		GcAchievementData_t675222246  L_4 = V_0;
		return L_4;
	}
}
// T System.Array::InternalArray__get_Item<UnityEngine.SocialPlatforms.GameCenter.GcScoreData>(System.Int32)
extern "C" IL2CPP_METHOD_ATTR GcScoreData_t2125309831  Array_InternalArray__get_Item_TisGcScoreData_t2125309831_m174676143_gshared (RuntimeArray * __this, int32_t ___index0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Array_InternalArray__get_Item_TisGcScoreData_t2125309831_m174676143_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	GcScoreData_t2125309831  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		int32_t L_0 = ___index0;
		NullCheck((RuntimeArray *)__this);
		int32_t L_1 = Array_get_Length_m21610649((RuntimeArray *)__this, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_0017;
		}
	}
	{
		ArgumentOutOfRangeException_t777629997 * L_2 = (ArgumentOutOfRangeException_t777629997 *)il2cpp_codegen_object_new(ArgumentOutOfRangeException_t777629997_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m3628145864(L_2, (String_t*)_stringLiteral797640427, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, NULL, Array_InternalArray__get_Item_TisGcScoreData_t2125309831_m174676143_RuntimeMethod_var);
	}

IL_0017:
	{
		int32_t L_3 = ___index0;
		NullCheck((RuntimeArray *)__this);
		ArrayGetGenericValueImpl((RuntimeArray *)__this, (int32_t)L_3, (GcScoreData_t2125309831 *)(GcScoreData_t2125309831 *)(&V_0));
		GcScoreData_t2125309831  L_4 = V_0;
		return L_4;
	}
}
// T System.Array::InternalArray__get_Item<UnityEngine.UnitySynchronizationContext/WorkRequest>(System.Int32)
extern "C" IL2CPP_METHOD_ATTR WorkRequest_t1354518612  Array_InternalArray__get_Item_TisWorkRequest_t1354518612_m2694410850_gshared (RuntimeArray * __this, int32_t ___index0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Array_InternalArray__get_Item_TisWorkRequest_t1354518612_m2694410850_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	WorkRequest_t1354518612  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		int32_t L_0 = ___index0;
		NullCheck((RuntimeArray *)__this);
		int32_t L_1 = Array_get_Length_m21610649((RuntimeArray *)__this, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_0017;
		}
	}
	{
		ArgumentOutOfRangeException_t777629997 * L_2 = (ArgumentOutOfRangeException_t777629997 *)il2cpp_codegen_object_new(ArgumentOutOfRangeException_t777629997_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m3628145864(L_2, (String_t*)_stringLiteral797640427, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, NULL, Array_InternalArray__get_Item_TisWorkRequest_t1354518612_m2694410850_RuntimeMethod_var);
	}

IL_0017:
	{
		int32_t L_3 = ___index0;
		NullCheck((RuntimeArray *)__this);
		ArrayGetGenericValueImpl((RuntimeArray *)__this, (int32_t)L_3, (WorkRequest_t1354518612 *)(WorkRequest_t1354518612 *)(&V_0));
		WorkRequest_t1354518612  L_4 = V_0;
		return L_4;
	}
}
// T UnityEngine.AttributeHelperEngine::GetCustomAttributeOfType<System.Object>(System.Type)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * AttributeHelperEngine_GetCustomAttributeOfType_TisRuntimeObject_m429013101_gshared (RuntimeObject * __this /* static, unused */, Type_t * ___klass0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (AttributeHelperEngine_GetCustomAttributeOfType_TisRuntimeObject_m429013101_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Type_t * V_0 = NULL;
	ObjectU5BU5D_t2843939325* V_1 = NULL;
	RuntimeObject * V_2 = NULL;
	{
		RuntimeTypeHandle_t3027515415  L_0 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->rgctx_data, 0)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_1 = Type_GetTypeFromHandle_m1620074514(NULL /*static, unused*/, (RuntimeTypeHandle_t3027515415 )L_0, /*hidden argument*/NULL);
		V_0 = (Type_t *)L_1;
		Type_t * L_2 = ___klass0;
		Type_t * L_3 = V_0;
		NullCheck((MemberInfo_t *)L_2);
		ObjectU5BU5D_t2843939325* L_4 = VirtFuncInvoker2< ObjectU5BU5D_t2843939325*, Type_t *, bool >::Invoke(13 /* System.Object[] System.Reflection.MemberInfo::GetCustomAttributes(System.Type,System.Boolean) */, (MemberInfo_t *)L_2, (Type_t *)L_3, (bool)1);
		V_1 = (ObjectU5BU5D_t2843939325*)L_4;
		ObjectU5BU5D_t2843939325* L_5 = V_1;
		if (!L_5)
		{
			goto IL_0031;
		}
	}
	{
		ObjectU5BU5D_t2843939325* L_6 = V_1;
		NullCheck(L_6);
		if (!(((int32_t)((int32_t)(((RuntimeArray *)L_6)->max_length)))))
		{
			goto IL_0031;
		}
	}
	{
		ObjectU5BU5D_t2843939325* L_7 = V_1;
		NullCheck(L_7);
		int32_t L_8 = 0;
		RuntimeObject * L_9 = (L_7)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		V_2 = (RuntimeObject *)((RuntimeObject *)Castclass((RuntimeObject*)L_9, IL2CPP_RGCTX_DATA(method->rgctx_data, 1)));
		goto IL_003d;
	}

IL_0031:
	{
		V_2 = (RuntimeObject *)((RuntimeObject *)Castclass((RuntimeObject*)NULL, IL2CPP_RGCTX_DATA(method->rgctx_data, 1)));
		goto IL_003d;
	}

IL_003d:
	{
		RuntimeObject * L_10 = V_2;
		return L_10;
	}
}
// T UnityEngine.Component::GetComponent<System.Object>()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * Component_GetComponent_TisRuntimeObject_m2906321015_gshared (Component_t1923634451 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Component_GetComponent_TisRuntimeObject_m2906321015_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	CastHelper_1_t2613165452  V_0;
	memset(&V_0, 0, sizeof(V_0));
	RuntimeObject * V_1 = NULL;
	{
		il2cpp_codegen_initobj((&V_0), sizeof(CastHelper_1_t2613165452 ));
		RuntimeTypeHandle_t3027515415  L_0 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->rgctx_data, 0)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_1 = Type_GetTypeFromHandle_m1620074514(NULL /*static, unused*/, (RuntimeTypeHandle_t3027515415 )L_0, /*hidden argument*/NULL);
		intptr_t* L_2 = (intptr_t*)(&V_0)->get_address_of_onePointerFurtherThanT_1();
		intptr_t L_3;
		memset(&L_3, 0, sizeof(L_3));
		IntPtr__ctor_m3384658186((&L_3), (void*)(void*)L_2, /*hidden argument*/NULL);
		NullCheck((Component_t1923634451 *)__this);
		Component_GetComponentFastPath_m1180649031((Component_t1923634451 *)__this, (Type_t *)L_1, (intptr_t)L_3, /*hidden argument*/NULL);
		RuntimeObject * L_4 = (RuntimeObject *)(&V_0)->get_t_0();
		V_1 = (RuntimeObject *)L_4;
		goto IL_0032;
	}

IL_0032:
	{
		RuntimeObject * L_5 = V_1;
		return L_5;
	}
}
// T UnityEngine.GameObject::GetComponent<System.Object>()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * GameObject_GetComponent_TisRuntimeObject_m3920941149_gshared (GameObject_t1113636619 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GameObject_GetComponent_TisRuntimeObject_m3920941149_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	CastHelper_1_t2613165452  V_0;
	memset(&V_0, 0, sizeof(V_0));
	RuntimeObject * V_1 = NULL;
	{
		il2cpp_codegen_initobj((&V_0), sizeof(CastHelper_1_t2613165452 ));
		RuntimeTypeHandle_t3027515415  L_0 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->rgctx_data, 0)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_1 = Type_GetTypeFromHandle_m1620074514(NULL /*static, unused*/, (RuntimeTypeHandle_t3027515415 )L_0, /*hidden argument*/NULL);
		intptr_t* L_2 = (intptr_t*)(&V_0)->get_address_of_onePointerFurtherThanT_1();
		intptr_t L_3;
		memset(&L_3, 0, sizeof(L_3));
		IntPtr__ctor_m3384658186((&L_3), (void*)(void*)L_2, /*hidden argument*/NULL);
		NullCheck((GameObject_t1113636619 *)__this);
		GameObject_GetComponentFastPath_m2620139331((GameObject_t1113636619 *)__this, (Type_t *)L_1, (intptr_t)L_3, /*hidden argument*/NULL);
		RuntimeObject * L_4 = (RuntimeObject *)(&V_0)->get_t_0();
		V_1 = (RuntimeObject *)L_4;
		goto IL_0032;
	}

IL_0032:
	{
		RuntimeObject * L_5 = V_1;
		return L_5;
	}
}
// T UnityEngine.ScriptableObject::CreateInstance<System.Object>()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * ScriptableObject_CreateInstance_TisRuntimeObject_m1552711675_gshared (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ScriptableObject_CreateInstance_TisRuntimeObject_m1552711675_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject * V_0 = NULL;
	{
		RuntimeTypeHandle_t3027515415  L_0 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->rgctx_data, 0)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_1 = Type_GetTypeFromHandle_m1620074514(NULL /*static, unused*/, (RuntimeTypeHandle_t3027515415 )L_0, /*hidden argument*/NULL);
		ScriptableObject_t2528358522 * L_2 = ScriptableObject_CreateInstance_m2611081756(NULL /*static, unused*/, (Type_t *)L_1, /*hidden argument*/NULL);
		V_0 = (RuntimeObject *)((RuntimeObject *)Castclass((RuntimeObject*)L_2, IL2CPP_RGCTX_DATA(method->rgctx_data, 1)));
		goto IL_001b;
	}

IL_001b:
	{
		RuntimeObject * L_3 = V_0;
		return L_3;
	}
}
// TOutput[] System.Array::ConvertAll<System.Object,System.Object>(TInput[],System.Converter`2<TInput,TOutput>)
extern "C" IL2CPP_METHOD_ATTR ObjectU5BU5D_t2843939325* Array_ConvertAll_TisRuntimeObject_TisRuntimeObject_m2417852296_gshared (RuntimeObject * __this /* static, unused */, ObjectU5BU5D_t2843939325* ___array0, Converter_2_t2442480487 * ___converter1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Array_ConvertAll_TisRuntimeObject_TisRuntimeObject_m2417852296_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	ObjectU5BU5D_t2843939325* V_0 = NULL;
	int32_t V_1 = 0;
	{
		ObjectU5BU5D_t2843939325* L_0 = ___array0;
		if (L_0)
		{
			goto IL_0011;
		}
	}
	{
		ArgumentNullException_t1615371798 * L_1 = (ArgumentNullException_t1615371798 *)il2cpp_codegen_object_new(ArgumentNullException_t1615371798_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m1170824041(L_1, (String_t*)_stringLiteral4007973390, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, NULL, Array_ConvertAll_TisRuntimeObject_TisRuntimeObject_m2417852296_RuntimeMethod_var);
	}

IL_0011:
	{
		Converter_2_t2442480487 * L_2 = ___converter1;
		if (L_2)
		{
			goto IL_0022;
		}
	}
	{
		ArgumentNullException_t1615371798 * L_3 = (ArgumentNullException_t1615371798 *)il2cpp_codegen_object_new(ArgumentNullException_t1615371798_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m1170824041(L_3, (String_t*)_stringLiteral879148213, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, NULL, Array_ConvertAll_TisRuntimeObject_TisRuntimeObject_m2417852296_RuntimeMethod_var);
	}

IL_0022:
	{
		ObjectU5BU5D_t2843939325* L_4 = ___array0;
		NullCheck(L_4);
		ObjectU5BU5D_t2843939325* L_5 = (ObjectU5BU5D_t2843939325*)SZArrayNew(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), (uint32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_4)->max_length)))));
		V_0 = (ObjectU5BU5D_t2843939325*)L_5;
		V_1 = (int32_t)0;
		goto IL_004a;
	}

IL_0032:
	{
		ObjectU5BU5D_t2843939325* L_6 = V_0;
		int32_t L_7 = V_1;
		Converter_2_t2442480487 * L_8 = ___converter1;
		ObjectU5BU5D_t2843939325* L_9 = ___array0;
		int32_t L_10 = V_1;
		NullCheck(L_9);
		int32_t L_11 = L_10;
		RuntimeObject * L_12 = (L_9)->GetAt(static_cast<il2cpp_array_size_t>(L_11));
		NullCheck((Converter_2_t2442480487 *)L_8);
		RuntimeObject * L_13 = ((  RuntimeObject * (*) (Converter_2_t2442480487 *, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Converter_2_t2442480487 *)L_8, (RuntimeObject *)L_12, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(L_7), (RuntimeObject *)L_13);
		int32_t L_14 = V_1;
		V_1 = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_14, (int32_t)1));
	}

IL_004a:
	{
		int32_t L_15 = V_1;
		ObjectU5BU5D_t2843939325* L_16 = ___array0;
		NullCheck(L_16);
		if ((((int32_t)L_15) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_16)->max_length)))))))
		{
			goto IL_0032;
		}
	}
	{
		ObjectU5BU5D_t2843939325* L_17 = V_0;
		return L_17;
	}
}
// TSource System.Linq.Enumerable::Single<System.Object>(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>,System.Linq.Enumerable/Fallback)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * Enumerable_Single_TisRuntimeObject_m1146889774_gshared (RuntimeObject * __this /* static, unused */, RuntimeObject* ___source0, Func_2_t3759279471 * ___predicate1, int32_t ___fallback2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Enumerable_Single_TisRuntimeObject_m1146889774_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	RuntimeObject * V_1 = NULL;
	RuntimeObject * V_2 = NULL;
	RuntimeObject* V_3 = NULL;
	RuntimeObject * V_4 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = -1;
	NO_UNUSED_WARNING (__leave_target);
	{
		V_0 = (bool)0;
		il2cpp_codegen_initobj((&V_4), sizeof(RuntimeObject *));
		RuntimeObject * L_0 = V_4;
		V_1 = (RuntimeObject *)L_0;
		RuntimeObject* L_1 = ___source0;
		NullCheck((RuntimeObject*)L_1);
		RuntimeObject* L_2 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<!0> System.Collections.Generic.IEnumerable`1<System.Object>::GetEnumerator() */, IL2CPP_RGCTX_DATA(method->rgctx_data, 0), (RuntimeObject*)L_1);
		V_3 = (RuntimeObject*)L_2;
	}

IL_0014:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0041;
		}

IL_0019:
		{
			RuntimeObject* L_3 = V_3;
			NullCheck((RuntimeObject*)L_3);
			RuntimeObject * L_4 = InterfaceFuncInvoker0< RuntimeObject * >::Invoke(0 /* !0 System.Collections.Generic.IEnumerator`1<System.Object>::get_Current() */, IL2CPP_RGCTX_DATA(method->rgctx_data, 1), (RuntimeObject*)L_3);
			V_2 = (RuntimeObject *)L_4;
			Func_2_t3759279471 * L_5 = ___predicate1;
			RuntimeObject * L_6 = V_2;
			NullCheck((Func_2_t3759279471 *)L_5);
			bool L_7 = ((  bool (*) (Func_2_t3759279471 *, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 2)->methodPointer)((Func_2_t3759279471 *)L_5, (RuntimeObject *)L_6, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 2));
			if (L_7)
			{
				goto IL_0031;
			}
		}

IL_002c:
		{
			goto IL_0041;
		}

IL_0031:
		{
			bool L_8 = V_0;
			if (!L_8)
			{
				goto IL_003d;
			}
		}

IL_0037:
		{
			InvalidOperationException_t56020091 * L_9 = (InvalidOperationException_t56020091 *)il2cpp_codegen_object_new(InvalidOperationException_t56020091_il2cpp_TypeInfo_var);
			InvalidOperationException__ctor_m2734335978(L_9, /*hidden argument*/NULL);
			IL2CPP_RAISE_MANAGED_EXCEPTION(L_9, NULL, Enumerable_Single_TisRuntimeObject_m1146889774_RuntimeMethod_var);
		}

IL_003d:
		{
			V_0 = (bool)1;
			RuntimeObject * L_10 = V_2;
			V_1 = (RuntimeObject *)L_10;
		}

IL_0041:
		{
			RuntimeObject* L_11 = V_3;
			NullCheck((RuntimeObject*)L_11);
			bool L_12 = InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t1853284238_il2cpp_TypeInfo_var, (RuntimeObject*)L_11);
			if (L_12)
			{
				goto IL_0019;
			}
		}

IL_004c:
		{
			IL2CPP_LEAVE(0x5C, FINALLY_0051);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0051;
	}

FINALLY_0051:
	{ // begin finally (depth: 1)
		{
			RuntimeObject* L_13 = V_3;
			if (L_13)
			{
				goto IL_0055;
			}
		}

IL_0054:
		{
			IL2CPP_END_FINALLY(81)
		}

IL_0055:
		{
			RuntimeObject* L_14 = V_3;
			NullCheck((RuntimeObject*)L_14);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t3640265483_il2cpp_TypeInfo_var, (RuntimeObject*)L_14);
			IL2CPP_END_FINALLY(81)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(81)
	{
		IL2CPP_JUMP_TBL(0x5C, IL_005c)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_005c:
	{
		bool L_15 = V_0;
		if (L_15)
		{
			goto IL_006f;
		}
	}
	{
		int32_t L_16 = ___fallback2;
		if ((!(((uint32_t)L_16) == ((uint32_t)1))))
		{
			goto IL_006f;
		}
	}
	{
		InvalidOperationException_t56020091 * L_17 = (InvalidOperationException_t56020091 *)il2cpp_codegen_object_new(InvalidOperationException_t56020091_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_m2734335978(L_17, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_17, NULL, Enumerable_Single_TisRuntimeObject_m1146889774_RuntimeMethod_var);
	}

IL_006f:
	{
		RuntimeObject * L_18 = V_1;
		return L_18;
	}
}
// TSource System.Linq.Enumerable::SingleOrDefault<System.Object>(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * Enumerable_SingleOrDefault_TisRuntimeObject_m555175825_gshared (RuntimeObject * __this /* static, unused */, RuntimeObject* ___source0, Func_2_t3759279471 * ___predicate1, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0 = ___source0;
		Func_2_t3759279471 * L_1 = ___predicate1;
		Check_SourceAndPredicate_m2332465641(NULL /*static, unused*/, (RuntimeObject *)L_0, (RuntimeObject *)L_1, /*hidden argument*/NULL);
		RuntimeObject* L_2 = ___source0;
		Func_2_t3759279471 * L_3 = ___predicate1;
		RuntimeObject * L_4 = ((  RuntimeObject * (*) (RuntimeObject * /* static, unused */, RuntimeObject*, Func_2_t3759279471 *, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)(NULL /*static, unused*/, (RuntimeObject*)L_2, (Func_2_t3759279471 *)L_3, (int32_t)0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		return L_4;
	}
}
// T[] System.Array::FindAll<System.Object>(T[],System.Predicate`1<T>)
extern "C" IL2CPP_METHOD_ATTR ObjectU5BU5D_t2843939325* Array_FindAll_TisRuntimeObject_m3566631088_gshared (RuntimeObject * __this /* static, unused */, ObjectU5BU5D_t2843939325* ___array0, Predicate_1_t3905400288 * ___match1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Array_FindAll_TisRuntimeObject_m3566631088_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	ObjectU5BU5D_t2843939325* V_1 = NULL;
	RuntimeObject * V_2 = NULL;
	ObjectU5BU5D_t2843939325* V_3 = NULL;
	int32_t V_4 = 0;
	{
		ObjectU5BU5D_t2843939325* L_0 = ___array0;
		if (L_0)
		{
			goto IL_0011;
		}
	}
	{
		ArgumentNullException_t1615371798 * L_1 = (ArgumentNullException_t1615371798 *)il2cpp_codegen_object_new(ArgumentNullException_t1615371798_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m1170824041(L_1, (String_t*)_stringLiteral4007973390, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, NULL, Array_FindAll_TisRuntimeObject_m3566631088_RuntimeMethod_var);
	}

IL_0011:
	{
		Predicate_1_t3905400288 * L_2 = ___match1;
		if (L_2)
		{
			goto IL_0022;
		}
	}
	{
		ArgumentNullException_t1615371798 * L_3 = (ArgumentNullException_t1615371798 *)il2cpp_codegen_object_new(ArgumentNullException_t1615371798_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m1170824041(L_3, (String_t*)_stringLiteral461028519, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, NULL, Array_FindAll_TisRuntimeObject_m3566631088_RuntimeMethod_var);
	}

IL_0022:
	{
		V_0 = (int32_t)0;
		ObjectU5BU5D_t2843939325* L_4 = ___array0;
		NullCheck(L_4);
		ObjectU5BU5D_t2843939325* L_5 = (ObjectU5BU5D_t2843939325*)SZArrayNew(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), (uint32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_4)->max_length)))));
		V_1 = (ObjectU5BU5D_t2843939325*)L_5;
		ObjectU5BU5D_t2843939325* L_6 = ___array0;
		V_3 = (ObjectU5BU5D_t2843939325*)L_6;
		V_4 = (int32_t)0;
		goto IL_005e;
	}

IL_0037:
	{
		ObjectU5BU5D_t2843939325* L_7 = V_3;
		int32_t L_8 = V_4;
		NullCheck(L_7);
		int32_t L_9 = L_8;
		RuntimeObject * L_10 = (L_7)->GetAt(static_cast<il2cpp_array_size_t>(L_9));
		V_2 = (RuntimeObject *)L_10;
		Predicate_1_t3905400288 * L_11 = ___match1;
		RuntimeObject * L_12 = V_2;
		NullCheck((Predicate_1_t3905400288 *)L_11);
		bool L_13 = ((  bool (*) (Predicate_1_t3905400288 *, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Predicate_1_t3905400288 *)L_11, (RuntimeObject *)L_12, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		if (!L_13)
		{
			goto IL_0058;
		}
	}
	{
		ObjectU5BU5D_t2843939325* L_14 = V_1;
		int32_t L_15 = V_0;
		int32_t L_16 = (int32_t)L_15;
		V_0 = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_16, (int32_t)1));
		RuntimeObject * L_17 = V_2;
		NullCheck(L_14);
		(L_14)->SetAt(static_cast<il2cpp_array_size_t>(L_16), (RuntimeObject *)L_17);
	}

IL_0058:
	{
		int32_t L_18 = V_4;
		V_4 = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_18, (int32_t)1));
	}

IL_005e:
	{
		int32_t L_19 = V_4;
		ObjectU5BU5D_t2843939325* L_20 = V_3;
		NullCheck(L_20);
		if ((((int32_t)L_19) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_20)->max_length)))))))
		{
			goto IL_0037;
		}
	}
	{
		int32_t L_21 = V_0;
		((  void (*) (RuntimeObject * /* static, unused */, ObjectU5BU5D_t2843939325**, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 2)->methodPointer)(NULL /*static, unused*/, (ObjectU5BU5D_t2843939325**)(ObjectU5BU5D_t2843939325**)(&V_1), (int32_t)L_21, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 2));
		ObjectU5BU5D_t2843939325* L_22 = V_1;
		return L_22;
	}
}
// T[] System.Reflection.CustomAttributeData::UnboxValues<System.Object>(System.Object[])
extern "C" IL2CPP_METHOD_ATTR ObjectU5BU5D_t2843939325* CustomAttributeData_UnboxValues_TisRuntimeObject_m160061819_gshared (RuntimeObject * __this /* static, unused */, ObjectU5BU5D_t2843939325* ___values0, const RuntimeMethod* method)
{
	ObjectU5BU5D_t2843939325* V_0 = NULL;
	int32_t V_1 = 0;
	{
		ObjectU5BU5D_t2843939325* L_0 = ___values0;
		NullCheck(L_0);
		ObjectU5BU5D_t2843939325* L_1 = (ObjectU5BU5D_t2843939325*)SZArrayNew(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), (uint32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_0)->max_length)))));
		V_0 = (ObjectU5BU5D_t2843939325*)L_1;
		V_1 = (int32_t)0;
		goto IL_0023;
	}

IL_0010:
	{
		ObjectU5BU5D_t2843939325* L_2 = V_0;
		int32_t L_3 = V_1;
		ObjectU5BU5D_t2843939325* L_4 = ___values0;
		int32_t L_5 = V_1;
		NullCheck(L_4);
		int32_t L_6 = L_5;
		RuntimeObject * L_7 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		NullCheck(L_2);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(L_3), (RuntimeObject *)((RuntimeObject *)Castclass((RuntimeObject*)L_7, IL2CPP_RGCTX_DATA(method->rgctx_data, 1))));
		int32_t L_8 = V_1;
		V_1 = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_8, (int32_t)1));
	}

IL_0023:
	{
		int32_t L_9 = V_1;
		ObjectU5BU5D_t2843939325* L_10 = ___values0;
		NullCheck(L_10);
		if ((((int32_t)L_9) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_10)->max_length)))))))
		{
			goto IL_0010;
		}
	}
	{
		ObjectU5BU5D_t2843939325* L_11 = V_0;
		return L_11;
	}
}
// T[] System.Reflection.CustomAttributeData::UnboxValues<System.Reflection.CustomAttributeNamedArgument>(System.Object[])
extern "C" IL2CPP_METHOD_ATTR CustomAttributeNamedArgumentU5BU5D_t3710464795* CustomAttributeData_UnboxValues_TisCustomAttributeNamedArgument_t287865710_m2244692512_gshared (RuntimeObject * __this /* static, unused */, ObjectU5BU5D_t2843939325* ___values0, const RuntimeMethod* method)
{
	CustomAttributeNamedArgumentU5BU5D_t3710464795* V_0 = NULL;
	int32_t V_1 = 0;
	{
		ObjectU5BU5D_t2843939325* L_0 = ___values0;
		NullCheck(L_0);
		CustomAttributeNamedArgumentU5BU5D_t3710464795* L_1 = (CustomAttributeNamedArgumentU5BU5D_t3710464795*)SZArrayNew(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), (uint32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_0)->max_length)))));
		V_0 = (CustomAttributeNamedArgumentU5BU5D_t3710464795*)L_1;
		V_1 = (int32_t)0;
		goto IL_0023;
	}

IL_0010:
	{
		CustomAttributeNamedArgumentU5BU5D_t3710464795* L_2 = V_0;
		int32_t L_3 = V_1;
		ObjectU5BU5D_t2843939325* L_4 = ___values0;
		int32_t L_5 = V_1;
		NullCheck(L_4);
		int32_t L_6 = L_5;
		RuntimeObject * L_7 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		NullCheck(L_2);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(L_3), (CustomAttributeNamedArgument_t287865710 )((*(CustomAttributeNamedArgument_t287865710 *)((CustomAttributeNamedArgument_t287865710 *)UnBox(L_7, IL2CPP_RGCTX_DATA(method->rgctx_data, 1))))));
		int32_t L_8 = V_1;
		V_1 = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_8, (int32_t)1));
	}

IL_0023:
	{
		int32_t L_9 = V_1;
		ObjectU5BU5D_t2843939325* L_10 = ___values0;
		NullCheck(L_10);
		if ((((int32_t)L_9) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_10)->max_length)))))))
		{
			goto IL_0010;
		}
	}
	{
		CustomAttributeNamedArgumentU5BU5D_t3710464795* L_11 = V_0;
		return L_11;
	}
}
// T[] System.Reflection.CustomAttributeData::UnboxValues<System.Reflection.CustomAttributeTypedArgument>(System.Object[])
extern "C" IL2CPP_METHOD_ATTR CustomAttributeTypedArgumentU5BU5D_t1465843424* CustomAttributeData_UnboxValues_TisCustomAttributeTypedArgument_t2723150157_m679789813_gshared (RuntimeObject * __this /* static, unused */, ObjectU5BU5D_t2843939325* ___values0, const RuntimeMethod* method)
{
	CustomAttributeTypedArgumentU5BU5D_t1465843424* V_0 = NULL;
	int32_t V_1 = 0;
	{
		ObjectU5BU5D_t2843939325* L_0 = ___values0;
		NullCheck(L_0);
		CustomAttributeTypedArgumentU5BU5D_t1465843424* L_1 = (CustomAttributeTypedArgumentU5BU5D_t1465843424*)SZArrayNew(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), (uint32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_0)->max_length)))));
		V_0 = (CustomAttributeTypedArgumentU5BU5D_t1465843424*)L_1;
		V_1 = (int32_t)0;
		goto IL_0023;
	}

IL_0010:
	{
		CustomAttributeTypedArgumentU5BU5D_t1465843424* L_2 = V_0;
		int32_t L_3 = V_1;
		ObjectU5BU5D_t2843939325* L_4 = ___values0;
		int32_t L_5 = V_1;
		NullCheck(L_4);
		int32_t L_6 = L_5;
		RuntimeObject * L_7 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		NullCheck(L_2);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(L_3), (CustomAttributeTypedArgument_t2723150157 )((*(CustomAttributeTypedArgument_t2723150157 *)((CustomAttributeTypedArgument_t2723150157 *)UnBox(L_7, IL2CPP_RGCTX_DATA(method->rgctx_data, 1))))));
		int32_t L_8 = V_1;
		V_1 = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_8, (int32_t)1));
	}

IL_0023:
	{
		int32_t L_9 = V_1;
		ObjectU5BU5D_t2843939325* L_10 = ___values0;
		NullCheck(L_10);
		if ((((int32_t)L_9) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_10)->max_length)))))))
		{
			goto IL_0010;
		}
	}
	{
		CustomAttributeTypedArgumentU5BU5D_t1465843424* L_11 = V_0;
		return L_11;
	}
}
