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


// BellBallScript
struct BellBallScript_t2206928030;
// GadgetBallScript
struct GadgetBallScript_t52728412;
// MainCameraScript
struct MainCameraScript_t463091299;
// PlanesScripts
struct PlanesScripts_t1322450088;
// System.Char[]
struct CharU5BU5D_t3528271667;
// System.String
struct String_t;
// System.Void
struct Void_t1185182177;
// UnityEngine.AudioSource
struct AudioSource_t3935305588;
// UnityEngine.AudioSourceExtension
struct AudioSourceExtension_t3064908834;
// UnityEngine.Camera
struct Camera_t4157153871;
// UnityEngine.Camera/CameraCallback
struct CameraCallback_t190067161;
// UnityEngine.Collider
struct Collider_t1773347010;
// UnityEngine.Collision
struct Collision_t4262080450;
// UnityEngine.Component
struct Component_t1923634451;
// UnityEngine.ContactPoint[]
struct ContactPointU5BU5D_t872956888;
// UnityEngine.GameObject
struct GameObject_t1113636619;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t3962482529;
// UnityEngine.Rigidbody
struct Rigidbody_t3916780224;
// UnityEngine.Transform
struct Transform_t3600365921;

extern RuntimeClass* Input_t1431474628_il2cpp_TypeInfo_var;
extern RuntimeClass* Vector3_t3722313464_il2cpp_TypeInfo_var;
extern String_t* _stringLiteral2168849986;
extern String_t* _stringLiteral2774581319;
extern String_t* _stringLiteral3182504602;
extern String_t* _stringLiteral3483765918;
extern String_t* _stringLiteral3862355750;
extern String_t* _stringLiteral800994087;
extern const RuntimeMethod* Component_GetComponent_TisAudioSource_t3935305588_m1977431131_RuntimeMethod_var;
extern const RuntimeMethod* Component_GetComponent_TisRigidbody_t3916780224_m279685075_RuntimeMethod_var;
extern const RuntimeMethod* GameObject_GetComponent_TisCamera_t4157153871_m3956151066_RuntimeMethod_var;
extern const RuntimeMethod* GameObject_GetComponent_TisRigidbody_t3916780224_m564316479_RuntimeMethod_var;
extern const uint32_t BellBallScript_FixedUpdate_m2302903303_MetadataUsageId;
extern const uint32_t BellBallScript_OnCollisionEnter_m3755104074_MetadataUsageId;
extern const uint32_t BellBallScript_Start_m2181815795_MetadataUsageId;
extern const uint32_t BellBallScript_Update_m1090677461_MetadataUsageId;
extern const uint32_t GadgetBallScript_FixedUpdate_m3087533169_MetadataUsageId;
extern const uint32_t GadgetBallScript_Start_m4075801281_MetadataUsageId;
extern const uint32_t GadgetBallScript_Update_m432973745_MetadataUsageId;
extern const uint32_t PlanesScripts_Start_m1184406696_MetadataUsageId;
extern const uint32_t PlanesScripts_getScreenTopLeft_m1505486700_MetadataUsageId;
struct ContactPoint_t3758755253 ;



#ifndef U3CMODULEU3E_T692745539_H
#define U3CMODULEU3E_T692745539_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct  U3CModuleU3E_t692745539 
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CMODULEU3E_T692745539_H
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
#ifndef COLLISION_T4262080450_H
#define COLLISION_T4262080450_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Collision
struct  Collision_t4262080450  : public RuntimeObject
{
public:
	// UnityEngine.Vector3 UnityEngine.Collision::m_Impulse
	Vector3_t3722313464  ___m_Impulse_0;
	// UnityEngine.Vector3 UnityEngine.Collision::m_RelativeVelocity
	Vector3_t3722313464  ___m_RelativeVelocity_1;
	// UnityEngine.Rigidbody UnityEngine.Collision::m_Rigidbody
	Rigidbody_t3916780224 * ___m_Rigidbody_2;
	// UnityEngine.Collider UnityEngine.Collision::m_Collider
	Collider_t1773347010 * ___m_Collider_3;
	// UnityEngine.ContactPoint[] UnityEngine.Collision::m_Contacts
	ContactPointU5BU5D_t872956888* ___m_Contacts_4;

public:
	inline static int32_t get_offset_of_m_Impulse_0() { return static_cast<int32_t>(offsetof(Collision_t4262080450, ___m_Impulse_0)); }
	inline Vector3_t3722313464  get_m_Impulse_0() const { return ___m_Impulse_0; }
	inline Vector3_t3722313464 * get_address_of_m_Impulse_0() { return &___m_Impulse_0; }
	inline void set_m_Impulse_0(Vector3_t3722313464  value)
	{
		___m_Impulse_0 = value;
	}

	inline static int32_t get_offset_of_m_RelativeVelocity_1() { return static_cast<int32_t>(offsetof(Collision_t4262080450, ___m_RelativeVelocity_1)); }
	inline Vector3_t3722313464  get_m_RelativeVelocity_1() const { return ___m_RelativeVelocity_1; }
	inline Vector3_t3722313464 * get_address_of_m_RelativeVelocity_1() { return &___m_RelativeVelocity_1; }
	inline void set_m_RelativeVelocity_1(Vector3_t3722313464  value)
	{
		___m_RelativeVelocity_1 = value;
	}

	inline static int32_t get_offset_of_m_Rigidbody_2() { return static_cast<int32_t>(offsetof(Collision_t4262080450, ___m_Rigidbody_2)); }
	inline Rigidbody_t3916780224 * get_m_Rigidbody_2() const { return ___m_Rigidbody_2; }
	inline Rigidbody_t3916780224 ** get_address_of_m_Rigidbody_2() { return &___m_Rigidbody_2; }
	inline void set_m_Rigidbody_2(Rigidbody_t3916780224 * value)
	{
		___m_Rigidbody_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_Rigidbody_2), value);
	}

	inline static int32_t get_offset_of_m_Collider_3() { return static_cast<int32_t>(offsetof(Collision_t4262080450, ___m_Collider_3)); }
	inline Collider_t1773347010 * get_m_Collider_3() const { return ___m_Collider_3; }
	inline Collider_t1773347010 ** get_address_of_m_Collider_3() { return &___m_Collider_3; }
	inline void set_m_Collider_3(Collider_t1773347010 * value)
	{
		___m_Collider_3 = value;
		Il2CppCodeGenWriteBarrier((&___m_Collider_3), value);
	}

	inline static int32_t get_offset_of_m_Contacts_4() { return static_cast<int32_t>(offsetof(Collision_t4262080450, ___m_Contacts_4)); }
	inline ContactPointU5BU5D_t872956888* get_m_Contacts_4() const { return ___m_Contacts_4; }
	inline ContactPointU5BU5D_t872956888** get_address_of_m_Contacts_4() { return &___m_Contacts_4; }
	inline void set_m_Contacts_4(ContactPointU5BU5D_t872956888* value)
	{
		___m_Contacts_4 = value;
		Il2CppCodeGenWriteBarrier((&___m_Contacts_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.Collision
struct Collision_t4262080450_marshaled_pinvoke
{
	Vector3_t3722313464  ___m_Impulse_0;
	Vector3_t3722313464  ___m_RelativeVelocity_1;
	Rigidbody_t3916780224 * ___m_Rigidbody_2;
	Collider_t1773347010 * ___m_Collider_3;
	ContactPoint_t3758755253 * ___m_Contacts_4;
};
// Native definition for COM marshalling of UnityEngine.Collision
struct Collision_t4262080450_marshaled_com
{
	Vector3_t3722313464  ___m_Impulse_0;
	Vector3_t3722313464  ___m_RelativeVelocity_1;
	Rigidbody_t3916780224 * ___m_Rigidbody_2;
	Collider_t1773347010 * ___m_Collider_3;
	ContactPoint_t3758755253 * ___m_Contacts_4;
};
#endif // COLLISION_T4262080450_H
#ifndef FORCEMODE_T3656391766_H
#define FORCEMODE_T3656391766_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.ForceMode
struct  ForceMode_t3656391766 
{
public:
	// System.Int32 UnityEngine.ForceMode::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(ForceMode_t3656391766, ___value___1)); }
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
#endif // FORCEMODE_T3656391766_H
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
#ifndef BEHAVIOUR_T1437897464_H
#define BEHAVIOUR_T1437897464_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Behaviour
struct  Behaviour_t1437897464  : public Component_t1923634451
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BEHAVIOUR_T1437897464_H
#ifndef RIGIDBODY_T3916780224_H
#define RIGIDBODY_T3916780224_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Rigidbody
struct  Rigidbody_t3916780224  : public Component_t1923634451
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RIGIDBODY_T3916780224_H
#ifndef TRANSFORM_T3600365921_H
#define TRANSFORM_T3600365921_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Transform
struct  Transform_t3600365921  : public Component_t1923634451
{
public:
	// System.Int32 UnityEngine.Transform::<hierarchyCount>k__BackingField
	int32_t ___U3ChierarchyCountU3Ek__BackingField_4;

public:
	inline static int32_t get_offset_of_U3ChierarchyCountU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(Transform_t3600365921, ___U3ChierarchyCountU3Ek__BackingField_4)); }
	inline int32_t get_U3ChierarchyCountU3Ek__BackingField_4() const { return ___U3ChierarchyCountU3Ek__BackingField_4; }
	inline int32_t* get_address_of_U3ChierarchyCountU3Ek__BackingField_4() { return &___U3ChierarchyCountU3Ek__BackingField_4; }
	inline void set_U3ChierarchyCountU3Ek__BackingField_4(int32_t value)
	{
		___U3ChierarchyCountU3Ek__BackingField_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TRANSFORM_T3600365921_H
#ifndef AUDIOBEHAVIOUR_T2879336574_H
#define AUDIOBEHAVIOUR_T2879336574_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.AudioBehaviour
struct  AudioBehaviour_t2879336574  : public Behaviour_t1437897464
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // AUDIOBEHAVIOUR_T2879336574_H
#ifndef CAMERA_T4157153871_H
#define CAMERA_T4157153871_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Camera
struct  Camera_t4157153871  : public Behaviour_t1437897464
{
public:

public:
};

struct Camera_t4157153871_StaticFields
{
public:
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPreCull
	CameraCallback_t190067161 * ___onPreCull_4;
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPreRender
	CameraCallback_t190067161 * ___onPreRender_5;
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPostRender
	CameraCallback_t190067161 * ___onPostRender_6;

public:
	inline static int32_t get_offset_of_onPreCull_4() { return static_cast<int32_t>(offsetof(Camera_t4157153871_StaticFields, ___onPreCull_4)); }
	inline CameraCallback_t190067161 * get_onPreCull_4() const { return ___onPreCull_4; }
	inline CameraCallback_t190067161 ** get_address_of_onPreCull_4() { return &___onPreCull_4; }
	inline void set_onPreCull_4(CameraCallback_t190067161 * value)
	{
		___onPreCull_4 = value;
		Il2CppCodeGenWriteBarrier((&___onPreCull_4), value);
	}

	inline static int32_t get_offset_of_onPreRender_5() { return static_cast<int32_t>(offsetof(Camera_t4157153871_StaticFields, ___onPreRender_5)); }
	inline CameraCallback_t190067161 * get_onPreRender_5() const { return ___onPreRender_5; }
	inline CameraCallback_t190067161 ** get_address_of_onPreRender_5() { return &___onPreRender_5; }
	inline void set_onPreRender_5(CameraCallback_t190067161 * value)
	{
		___onPreRender_5 = value;
		Il2CppCodeGenWriteBarrier((&___onPreRender_5), value);
	}

	inline static int32_t get_offset_of_onPostRender_6() { return static_cast<int32_t>(offsetof(Camera_t4157153871_StaticFields, ___onPostRender_6)); }
	inline CameraCallback_t190067161 * get_onPostRender_6() const { return ___onPostRender_6; }
	inline CameraCallback_t190067161 ** get_address_of_onPostRender_6() { return &___onPostRender_6; }
	inline void set_onPostRender_6(CameraCallback_t190067161 * value)
	{
		___onPostRender_6 = value;
		Il2CppCodeGenWriteBarrier((&___onPostRender_6), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CAMERA_T4157153871_H
#ifndef MONOBEHAVIOUR_T3962482529_H
#define MONOBEHAVIOUR_T3962482529_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.MonoBehaviour
struct  MonoBehaviour_t3962482529  : public Behaviour_t1437897464
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MONOBEHAVIOUR_T3962482529_H
#ifndef BELLBALLSCRIPT_T2206928030_H
#define BELLBALLSCRIPT_T2206928030_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// BellBallScript
struct  BellBallScript_t2206928030  : public MonoBehaviour_t3962482529
{
public:
	// System.Single BellBallScript::speed
	float ___speed_4;
	// System.Single BellBallScript::accelerometerUpdateInterval
	float ___accelerometerUpdateInterval_5;
	// System.Single BellBallScript::lowPassKernelWidthInSeconds
	float ___lowPassKernelWidthInSeconds_6;
	// System.Single BellBallScript::shakeDetectionThreshold
	float ___shakeDetectionThreshold_7;
	// System.Single BellBallScript::lowPassFilterFactor
	float ___lowPassFilterFactor_8;
	// UnityEngine.Vector3 BellBallScript::lowPassValue
	Vector3_t3722313464  ___lowPassValue_9;
	// UnityEngine.Vector3 BellBallScript::acceleration
	Vector3_t3722313464  ___acceleration_10;
	// UnityEngine.Vector3 BellBallScript::deltaAcceleration
	Vector3_t3722313464  ___deltaAcceleration_11;
	// UnityEngine.Rigidbody BellBallScript::rb
	Rigidbody_t3916780224 * ___rb_12;
	// UnityEngine.Vector3 BellBallScript::force
	Vector3_t3722313464  ___force_13;

public:
	inline static int32_t get_offset_of_speed_4() { return static_cast<int32_t>(offsetof(BellBallScript_t2206928030, ___speed_4)); }
	inline float get_speed_4() const { return ___speed_4; }
	inline float* get_address_of_speed_4() { return &___speed_4; }
	inline void set_speed_4(float value)
	{
		___speed_4 = value;
	}

	inline static int32_t get_offset_of_accelerometerUpdateInterval_5() { return static_cast<int32_t>(offsetof(BellBallScript_t2206928030, ___accelerometerUpdateInterval_5)); }
	inline float get_accelerometerUpdateInterval_5() const { return ___accelerometerUpdateInterval_5; }
	inline float* get_address_of_accelerometerUpdateInterval_5() { return &___accelerometerUpdateInterval_5; }
	inline void set_accelerometerUpdateInterval_5(float value)
	{
		___accelerometerUpdateInterval_5 = value;
	}

	inline static int32_t get_offset_of_lowPassKernelWidthInSeconds_6() { return static_cast<int32_t>(offsetof(BellBallScript_t2206928030, ___lowPassKernelWidthInSeconds_6)); }
	inline float get_lowPassKernelWidthInSeconds_6() const { return ___lowPassKernelWidthInSeconds_6; }
	inline float* get_address_of_lowPassKernelWidthInSeconds_6() { return &___lowPassKernelWidthInSeconds_6; }
	inline void set_lowPassKernelWidthInSeconds_6(float value)
	{
		___lowPassKernelWidthInSeconds_6 = value;
	}

	inline static int32_t get_offset_of_shakeDetectionThreshold_7() { return static_cast<int32_t>(offsetof(BellBallScript_t2206928030, ___shakeDetectionThreshold_7)); }
	inline float get_shakeDetectionThreshold_7() const { return ___shakeDetectionThreshold_7; }
	inline float* get_address_of_shakeDetectionThreshold_7() { return &___shakeDetectionThreshold_7; }
	inline void set_shakeDetectionThreshold_7(float value)
	{
		___shakeDetectionThreshold_7 = value;
	}

	inline static int32_t get_offset_of_lowPassFilterFactor_8() { return static_cast<int32_t>(offsetof(BellBallScript_t2206928030, ___lowPassFilterFactor_8)); }
	inline float get_lowPassFilterFactor_8() const { return ___lowPassFilterFactor_8; }
	inline float* get_address_of_lowPassFilterFactor_8() { return &___lowPassFilterFactor_8; }
	inline void set_lowPassFilterFactor_8(float value)
	{
		___lowPassFilterFactor_8 = value;
	}

	inline static int32_t get_offset_of_lowPassValue_9() { return static_cast<int32_t>(offsetof(BellBallScript_t2206928030, ___lowPassValue_9)); }
	inline Vector3_t3722313464  get_lowPassValue_9() const { return ___lowPassValue_9; }
	inline Vector3_t3722313464 * get_address_of_lowPassValue_9() { return &___lowPassValue_9; }
	inline void set_lowPassValue_9(Vector3_t3722313464  value)
	{
		___lowPassValue_9 = value;
	}

	inline static int32_t get_offset_of_acceleration_10() { return static_cast<int32_t>(offsetof(BellBallScript_t2206928030, ___acceleration_10)); }
	inline Vector3_t3722313464  get_acceleration_10() const { return ___acceleration_10; }
	inline Vector3_t3722313464 * get_address_of_acceleration_10() { return &___acceleration_10; }
	inline void set_acceleration_10(Vector3_t3722313464  value)
	{
		___acceleration_10 = value;
	}

	inline static int32_t get_offset_of_deltaAcceleration_11() { return static_cast<int32_t>(offsetof(BellBallScript_t2206928030, ___deltaAcceleration_11)); }
	inline Vector3_t3722313464  get_deltaAcceleration_11() const { return ___deltaAcceleration_11; }
	inline Vector3_t3722313464 * get_address_of_deltaAcceleration_11() { return &___deltaAcceleration_11; }
	inline void set_deltaAcceleration_11(Vector3_t3722313464  value)
	{
		___deltaAcceleration_11 = value;
	}

	inline static int32_t get_offset_of_rb_12() { return static_cast<int32_t>(offsetof(BellBallScript_t2206928030, ___rb_12)); }
	inline Rigidbody_t3916780224 * get_rb_12() const { return ___rb_12; }
	inline Rigidbody_t3916780224 ** get_address_of_rb_12() { return &___rb_12; }
	inline void set_rb_12(Rigidbody_t3916780224 * value)
	{
		___rb_12 = value;
		Il2CppCodeGenWriteBarrier((&___rb_12), value);
	}

	inline static int32_t get_offset_of_force_13() { return static_cast<int32_t>(offsetof(BellBallScript_t2206928030, ___force_13)); }
	inline Vector3_t3722313464  get_force_13() const { return ___force_13; }
	inline Vector3_t3722313464 * get_address_of_force_13() { return &___force_13; }
	inline void set_force_13(Vector3_t3722313464  value)
	{
		___force_13 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BELLBALLSCRIPT_T2206928030_H
#ifndef GADGETBALLSCRIPT_T52728412_H
#define GADGETBALLSCRIPT_T52728412_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GadgetBallScript
struct  GadgetBallScript_t52728412  : public MonoBehaviour_t3962482529
{
public:
	// System.Single GadgetBallScript::speed
	float ___speed_4;
	// System.Single GadgetBallScript::accelerometerUpdateInterval
	float ___accelerometerUpdateInterval_5;
	// System.Single GadgetBallScript::lowPassKernelWidthInSeconds
	float ___lowPassKernelWidthInSeconds_6;
	// System.Single GadgetBallScript::shakeDetectionThreshold
	float ___shakeDetectionThreshold_7;
	// System.Single GadgetBallScript::lowPassFilterFactor
	float ___lowPassFilterFactor_8;
	// UnityEngine.Vector3 GadgetBallScript::lowPassValue
	Vector3_t3722313464  ___lowPassValue_9;
	// UnityEngine.Vector3 GadgetBallScript::acceleration
	Vector3_t3722313464  ___acceleration_10;
	// UnityEngine.Vector3 GadgetBallScript::deltaAcceleration
	Vector3_t3722313464  ___deltaAcceleration_11;
	// UnityEngine.Rigidbody GadgetBallScript::rb
	Rigidbody_t3916780224 * ___rb_12;
	// UnityEngine.Vector3 GadgetBallScript::force
	Vector3_t3722313464  ___force_13;

public:
	inline static int32_t get_offset_of_speed_4() { return static_cast<int32_t>(offsetof(GadgetBallScript_t52728412, ___speed_4)); }
	inline float get_speed_4() const { return ___speed_4; }
	inline float* get_address_of_speed_4() { return &___speed_4; }
	inline void set_speed_4(float value)
	{
		___speed_4 = value;
	}

	inline static int32_t get_offset_of_accelerometerUpdateInterval_5() { return static_cast<int32_t>(offsetof(GadgetBallScript_t52728412, ___accelerometerUpdateInterval_5)); }
	inline float get_accelerometerUpdateInterval_5() const { return ___accelerometerUpdateInterval_5; }
	inline float* get_address_of_accelerometerUpdateInterval_5() { return &___accelerometerUpdateInterval_5; }
	inline void set_accelerometerUpdateInterval_5(float value)
	{
		___accelerometerUpdateInterval_5 = value;
	}

	inline static int32_t get_offset_of_lowPassKernelWidthInSeconds_6() { return static_cast<int32_t>(offsetof(GadgetBallScript_t52728412, ___lowPassKernelWidthInSeconds_6)); }
	inline float get_lowPassKernelWidthInSeconds_6() const { return ___lowPassKernelWidthInSeconds_6; }
	inline float* get_address_of_lowPassKernelWidthInSeconds_6() { return &___lowPassKernelWidthInSeconds_6; }
	inline void set_lowPassKernelWidthInSeconds_6(float value)
	{
		___lowPassKernelWidthInSeconds_6 = value;
	}

	inline static int32_t get_offset_of_shakeDetectionThreshold_7() { return static_cast<int32_t>(offsetof(GadgetBallScript_t52728412, ___shakeDetectionThreshold_7)); }
	inline float get_shakeDetectionThreshold_7() const { return ___shakeDetectionThreshold_7; }
	inline float* get_address_of_shakeDetectionThreshold_7() { return &___shakeDetectionThreshold_7; }
	inline void set_shakeDetectionThreshold_7(float value)
	{
		___shakeDetectionThreshold_7 = value;
	}

	inline static int32_t get_offset_of_lowPassFilterFactor_8() { return static_cast<int32_t>(offsetof(GadgetBallScript_t52728412, ___lowPassFilterFactor_8)); }
	inline float get_lowPassFilterFactor_8() const { return ___lowPassFilterFactor_8; }
	inline float* get_address_of_lowPassFilterFactor_8() { return &___lowPassFilterFactor_8; }
	inline void set_lowPassFilterFactor_8(float value)
	{
		___lowPassFilterFactor_8 = value;
	}

	inline static int32_t get_offset_of_lowPassValue_9() { return static_cast<int32_t>(offsetof(GadgetBallScript_t52728412, ___lowPassValue_9)); }
	inline Vector3_t3722313464  get_lowPassValue_9() const { return ___lowPassValue_9; }
	inline Vector3_t3722313464 * get_address_of_lowPassValue_9() { return &___lowPassValue_9; }
	inline void set_lowPassValue_9(Vector3_t3722313464  value)
	{
		___lowPassValue_9 = value;
	}

	inline static int32_t get_offset_of_acceleration_10() { return static_cast<int32_t>(offsetof(GadgetBallScript_t52728412, ___acceleration_10)); }
	inline Vector3_t3722313464  get_acceleration_10() const { return ___acceleration_10; }
	inline Vector3_t3722313464 * get_address_of_acceleration_10() { return &___acceleration_10; }
	inline void set_acceleration_10(Vector3_t3722313464  value)
	{
		___acceleration_10 = value;
	}

	inline static int32_t get_offset_of_deltaAcceleration_11() { return static_cast<int32_t>(offsetof(GadgetBallScript_t52728412, ___deltaAcceleration_11)); }
	inline Vector3_t3722313464  get_deltaAcceleration_11() const { return ___deltaAcceleration_11; }
	inline Vector3_t3722313464 * get_address_of_deltaAcceleration_11() { return &___deltaAcceleration_11; }
	inline void set_deltaAcceleration_11(Vector3_t3722313464  value)
	{
		___deltaAcceleration_11 = value;
	}

	inline static int32_t get_offset_of_rb_12() { return static_cast<int32_t>(offsetof(GadgetBallScript_t52728412, ___rb_12)); }
	inline Rigidbody_t3916780224 * get_rb_12() const { return ___rb_12; }
	inline Rigidbody_t3916780224 ** get_address_of_rb_12() { return &___rb_12; }
	inline void set_rb_12(Rigidbody_t3916780224 * value)
	{
		___rb_12 = value;
		Il2CppCodeGenWriteBarrier((&___rb_12), value);
	}

	inline static int32_t get_offset_of_force_13() { return static_cast<int32_t>(offsetof(GadgetBallScript_t52728412, ___force_13)); }
	inline Vector3_t3722313464  get_force_13() const { return ___force_13; }
	inline Vector3_t3722313464 * get_address_of_force_13() { return &___force_13; }
	inline void set_force_13(Vector3_t3722313464  value)
	{
		___force_13 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GADGETBALLSCRIPT_T52728412_H
#ifndef MAINCAMERASCRIPT_T463091299_H
#define MAINCAMERASCRIPT_T463091299_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MainCameraScript
struct  MainCameraScript_t463091299  : public MonoBehaviour_t3962482529
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MAINCAMERASCRIPT_T463091299_H
#ifndef PLANESSCRIPTS_T1322450088_H
#define PLANESSCRIPTS_T1322450088_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlanesScripts
struct  PlanesScripts_t1322450088  : public MonoBehaviour_t3962482529
{
public:
	// UnityEngine.GameObject PlanesScripts::wall_Left
	GameObject_t1113636619 * ___wall_Left_4;
	// UnityEngine.GameObject PlanesScripts::wall_Right
	GameObject_t1113636619 * ___wall_Right_5;
	// UnityEngine.GameObject PlanesScripts::wall_Bottom
	GameObject_t1113636619 * ___wall_Bottom_6;
	// UnityEngine.GameObject PlanesScripts::wall_Top
	GameObject_t1113636619 * ___wall_Top_7;
	// UnityEngine.Camera PlanesScripts::_mainCamera
	Camera_t4157153871 * ____mainCamera_8;
	// UnityEngine.Vector3 PlanesScripts::LeftPos
	Vector3_t3722313464  ___LeftPos_9;
	// UnityEngine.Vector3 PlanesScripts::RightPos
	Vector3_t3722313464  ___RightPos_10;
	// UnityEngine.Vector3 PlanesScripts::BottomPos
	Vector3_t3722313464  ___BottomPos_11;
	// UnityEngine.Vector3 PlanesScripts::TopPos
	Vector3_t3722313464  ___TopPos_12;

public:
	inline static int32_t get_offset_of_wall_Left_4() { return static_cast<int32_t>(offsetof(PlanesScripts_t1322450088, ___wall_Left_4)); }
	inline GameObject_t1113636619 * get_wall_Left_4() const { return ___wall_Left_4; }
	inline GameObject_t1113636619 ** get_address_of_wall_Left_4() { return &___wall_Left_4; }
	inline void set_wall_Left_4(GameObject_t1113636619 * value)
	{
		___wall_Left_4 = value;
		Il2CppCodeGenWriteBarrier((&___wall_Left_4), value);
	}

	inline static int32_t get_offset_of_wall_Right_5() { return static_cast<int32_t>(offsetof(PlanesScripts_t1322450088, ___wall_Right_5)); }
	inline GameObject_t1113636619 * get_wall_Right_5() const { return ___wall_Right_5; }
	inline GameObject_t1113636619 ** get_address_of_wall_Right_5() { return &___wall_Right_5; }
	inline void set_wall_Right_5(GameObject_t1113636619 * value)
	{
		___wall_Right_5 = value;
		Il2CppCodeGenWriteBarrier((&___wall_Right_5), value);
	}

	inline static int32_t get_offset_of_wall_Bottom_6() { return static_cast<int32_t>(offsetof(PlanesScripts_t1322450088, ___wall_Bottom_6)); }
	inline GameObject_t1113636619 * get_wall_Bottom_6() const { return ___wall_Bottom_6; }
	inline GameObject_t1113636619 ** get_address_of_wall_Bottom_6() { return &___wall_Bottom_6; }
	inline void set_wall_Bottom_6(GameObject_t1113636619 * value)
	{
		___wall_Bottom_6 = value;
		Il2CppCodeGenWriteBarrier((&___wall_Bottom_6), value);
	}

	inline static int32_t get_offset_of_wall_Top_7() { return static_cast<int32_t>(offsetof(PlanesScripts_t1322450088, ___wall_Top_7)); }
	inline GameObject_t1113636619 * get_wall_Top_7() const { return ___wall_Top_7; }
	inline GameObject_t1113636619 ** get_address_of_wall_Top_7() { return &___wall_Top_7; }
	inline void set_wall_Top_7(GameObject_t1113636619 * value)
	{
		___wall_Top_7 = value;
		Il2CppCodeGenWriteBarrier((&___wall_Top_7), value);
	}

	inline static int32_t get_offset_of__mainCamera_8() { return static_cast<int32_t>(offsetof(PlanesScripts_t1322450088, ____mainCamera_8)); }
	inline Camera_t4157153871 * get__mainCamera_8() const { return ____mainCamera_8; }
	inline Camera_t4157153871 ** get_address_of__mainCamera_8() { return &____mainCamera_8; }
	inline void set__mainCamera_8(Camera_t4157153871 * value)
	{
		____mainCamera_8 = value;
		Il2CppCodeGenWriteBarrier((&____mainCamera_8), value);
	}

	inline static int32_t get_offset_of_LeftPos_9() { return static_cast<int32_t>(offsetof(PlanesScripts_t1322450088, ___LeftPos_9)); }
	inline Vector3_t3722313464  get_LeftPos_9() const { return ___LeftPos_9; }
	inline Vector3_t3722313464 * get_address_of_LeftPos_9() { return &___LeftPos_9; }
	inline void set_LeftPos_9(Vector3_t3722313464  value)
	{
		___LeftPos_9 = value;
	}

	inline static int32_t get_offset_of_RightPos_10() { return static_cast<int32_t>(offsetof(PlanesScripts_t1322450088, ___RightPos_10)); }
	inline Vector3_t3722313464  get_RightPos_10() const { return ___RightPos_10; }
	inline Vector3_t3722313464 * get_address_of_RightPos_10() { return &___RightPos_10; }
	inline void set_RightPos_10(Vector3_t3722313464  value)
	{
		___RightPos_10 = value;
	}

	inline static int32_t get_offset_of_BottomPos_11() { return static_cast<int32_t>(offsetof(PlanesScripts_t1322450088, ___BottomPos_11)); }
	inline Vector3_t3722313464  get_BottomPos_11() const { return ___BottomPos_11; }
	inline Vector3_t3722313464 * get_address_of_BottomPos_11() { return &___BottomPos_11; }
	inline void set_BottomPos_11(Vector3_t3722313464  value)
	{
		___BottomPos_11 = value;
	}

	inline static int32_t get_offset_of_TopPos_12() { return static_cast<int32_t>(offsetof(PlanesScripts_t1322450088, ___TopPos_12)); }
	inline Vector3_t3722313464  get_TopPos_12() const { return ___TopPos_12; }
	inline Vector3_t3722313464 * get_address_of_TopPos_12() { return &___TopPos_12; }
	inline void set_TopPos_12(Vector3_t3722313464  value)
	{
		___TopPos_12 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PLANESSCRIPTS_T1322450088_H
#ifndef AUDIOSOURCE_T3935305588_H
#define AUDIOSOURCE_T3935305588_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.AudioSource
struct  AudioSource_t3935305588  : public AudioBehaviour_t2879336574
{
public:
	// UnityEngine.AudioSourceExtension UnityEngine.AudioSource::spatializerExtension
	AudioSourceExtension_t3064908834 * ___spatializerExtension_4;
	// UnityEngine.AudioSourceExtension UnityEngine.AudioSource::ambisonicExtension
	AudioSourceExtension_t3064908834 * ___ambisonicExtension_5;

public:
	inline static int32_t get_offset_of_spatializerExtension_4() { return static_cast<int32_t>(offsetof(AudioSource_t3935305588, ___spatializerExtension_4)); }
	inline AudioSourceExtension_t3064908834 * get_spatializerExtension_4() const { return ___spatializerExtension_4; }
	inline AudioSourceExtension_t3064908834 ** get_address_of_spatializerExtension_4() { return &___spatializerExtension_4; }
	inline void set_spatializerExtension_4(AudioSourceExtension_t3064908834 * value)
	{
		___spatializerExtension_4 = value;
		Il2CppCodeGenWriteBarrier((&___spatializerExtension_4), value);
	}

	inline static int32_t get_offset_of_ambisonicExtension_5() { return static_cast<int32_t>(offsetof(AudioSource_t3935305588, ___ambisonicExtension_5)); }
	inline AudioSourceExtension_t3064908834 * get_ambisonicExtension_5() const { return ___ambisonicExtension_5; }
	inline AudioSourceExtension_t3064908834 ** get_address_of_ambisonicExtension_5() { return &___ambisonicExtension_5; }
	inline void set_ambisonicExtension_5(AudioSourceExtension_t3064908834 * value)
	{
		___ambisonicExtension_5 = value;
		Il2CppCodeGenWriteBarrier((&___ambisonicExtension_5), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // AUDIOSOURCE_T3935305588_H


// !!0 UnityEngine.GameObject::GetComponent<System.Object>()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * GameObject_GetComponent_TisRuntimeObject_m3920941149_gshared (GameObject_t1113636619 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<System.Object>()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * Component_GetComponent_TisRuntimeObject_m2906321015_gshared (Component_t1923634451 * __this, const RuntimeMethod* method);

// System.Void UnityEngine.MonoBehaviour::.ctor()
extern "C" IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_m1579109191 (MonoBehaviour_t3962482529 * __this, const RuntimeMethod* method);
// UnityEngine.GameObject UnityEngine.GameObject::Find(System.String)
extern "C" IL2CPP_METHOD_ATTR GameObject_t1113636619 * GameObject_Find_m2032535176 (RuntimeObject * __this /* static, unused */, String_t* p0, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<UnityEngine.Rigidbody>()
inline Rigidbody_t3916780224 * GameObject_GetComponent_TisRigidbody_t3916780224_m564316479 (GameObject_t1113636619 * __this, const RuntimeMethod* method)
{
	return ((  Rigidbody_t3916780224 * (*) (GameObject_t1113636619 *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m3920941149_gshared)(__this, method);
}
// UnityEngine.Vector3 UnityEngine.Vector3::get_zero()
extern "C" IL2CPP_METHOD_ATTR Vector3_t3722313464  Vector3_get_zero_m1409827619 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Input::get_acceleration()
extern "C" IL2CPP_METHOD_ATTR Vector3_t3722313464  Input_get_acceleration_m2528400370 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<UnityEngine.AudioSource>()
inline AudioSource_t3935305588 * Component_GetComponent_TisAudioSource_t3935305588_m1977431131 (Component_t1923634451 * __this, const RuntimeMethod* method)
{
	return ((  AudioSource_t3935305588 * (*) (Component_t1923634451 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m2906321015_gshared)(__this, method);
}
// System.Void UnityEngine.AudioSource::Play()
extern "C" IL2CPP_METHOD_ATTR void AudioSource_Play_m48294159 (AudioSource_t3935305588 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::Lerp(UnityEngine.Vector3,UnityEngine.Vector3,System.Single)
extern "C" IL2CPP_METHOD_ATTR Vector3_t3722313464  Vector3_Lerp_m407887542 (RuntimeObject * __this /* static, unused */, Vector3_t3722313464  p0, Vector3_t3722313464  p1, float p2, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::op_Subtraction(UnityEngine.Vector3,UnityEngine.Vector3)
extern "C" IL2CPP_METHOD_ATTR Vector3_t3722313464  Vector3_op_Subtraction_m3073674971 (RuntimeObject * __this /* static, unused */, Vector3_t3722313464  p0, Vector3_t3722313464  p1, const RuntimeMethod* method);
// System.Single UnityEngine.Vector3::get_sqrMagnitude()
extern "C" IL2CPP_METHOD_ATTR float Vector3_get_sqrMagnitude_m1474274574 (Vector3_t3722313464 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Rigidbody::AddForce(UnityEngine.Vector3,UnityEngine.ForceMode)
extern "C" IL2CPP_METHOD_ATTR void Rigidbody_AddForce_m1059068722 (Rigidbody_t3916780224 * __this, Vector3_t3722313464  p0, int32_t p1, const RuntimeMethod* method);
// System.Void UnityEngine.Vector3::Normalize()
extern "C" IL2CPP_METHOD_ATTR void Vector3_Normalize_m914904454 (Vector3_t3722313464 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::op_Multiply(UnityEngine.Vector3,System.Single)
extern "C" IL2CPP_METHOD_ATTR Vector3_t3722313464  Vector3_op_Multiply_m3376773913 (RuntimeObject * __this /* static, unused */, Vector3_t3722313464  p0, float p1, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<UnityEngine.Rigidbody>()
inline Rigidbody_t3916780224 * Component_GetComponent_TisRigidbody_t3916780224_m279685075 (Component_t1923634451 * __this, const RuntimeMethod* method)
{
	return ((  Rigidbody_t3916780224 * (*) (Component_t1923634451 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m2906321015_gshared)(__this, method);
}
// !!0 UnityEngine.GameObject::GetComponent<UnityEngine.Camera>()
inline Camera_t4157153871 * GameObject_GetComponent_TisCamera_t4157153871_m3956151066 (GameObject_t1113636619 * __this, const RuntimeMethod* method)
{
	return ((  Camera_t4157153871 * (*) (GameObject_t1113636619 *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m3920941149_gshared)(__this, method);
}
// UnityEngine.Vector3 PlanesScripts::getScreenTopLeft()
extern "C" IL2CPP_METHOD_ATTR Vector3_t3722313464  PlanesScripts_getScreenTopLeft_m1505486700 (PlanesScripts_t1322450088 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 PlanesScripts::getScreenBottomRight()
extern "C" IL2CPP_METHOD_ATTR Vector3_t3722313464  PlanesScripts_getScreenBottomRight_m2406534463 (PlanesScripts_t1322450088 * __this, const RuntimeMethod* method);
// UnityEngine.Transform UnityEngine.GameObject::get_transform()
extern "C" IL2CPP_METHOD_ATTR Transform_t3600365921 * GameObject_get_transform_m1369836730 (GameObject_t1113636619 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_position(UnityEngine.Vector3)
extern "C" IL2CPP_METHOD_ATTR void Transform_set_position_m3387557959 (Transform_t3600365921 * __this, Vector3_t3722313464  p0, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Camera::ScreenToWorldPoint(UnityEngine.Vector3)
extern "C" IL2CPP_METHOD_ATTR Vector3_t3722313464  Camera_ScreenToWorldPoint_m3978588570 (Camera_t4157153871 * __this, Vector3_t3722313464  p0, const RuntimeMethod* method);
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
extern "C" IL2CPP_METHOD_ATTR void Vector3__ctor_m3353183577 (Vector3_t3722313464 * __this, float p0, float p1, float p2, const RuntimeMethod* method);
// System.Void UnityEngine.Vector3::Scale(UnityEngine.Vector3)
extern "C" IL2CPP_METHOD_ATTR void Vector3_Scale_m3007431830 (Vector3_t3722313464 * __this, Vector3_t3722313464  p0, const RuntimeMethod* method);
// System.Int32 UnityEngine.Screen::get_width()
extern "C" IL2CPP_METHOD_ATTR int32_t Screen_get_width_m345039817 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// System.Int32 UnityEngine.Screen::get_height()
extern "C" IL2CPP_METHOD_ATTR int32_t Screen_get_height_m1623532518 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
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
// System.Void BellBallScript::.ctor()
extern "C" IL2CPP_METHOD_ATTR void BellBallScript__ctor_m3794113283 (BellBallScript_t2206928030 * __this, const RuntimeMethod* method)
{
	{
		__this->set_speed_4((10.0f));
		__this->set_accelerometerUpdateInterval_5((0.0166666675f));
		__this->set_lowPassKernelWidthInSeconds_6((1.0f));
		__this->set_shakeDetectionThreshold_7((2.0f));
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void BellBallScript::Start()
extern "C" IL2CPP_METHOD_ATTR void BellBallScript_Start_m2181815795 (BellBallScript_t2206928030 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (BellBallScript_Start_m2181815795_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		GameObject_t1113636619 * L_0 = GameObject_Find_m2032535176(NULL /*static, unused*/, _stringLiteral3182504602, /*hidden argument*/NULL);
		NullCheck(L_0);
		Rigidbody_t3916780224 * L_1 = GameObject_GetComponent_TisRigidbody_t3916780224_m564316479(L_0, /*hidden argument*/GameObject_GetComponent_TisRigidbody_t3916780224_m564316479_RuntimeMethod_var);
		__this->set_rb_12(L_1);
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_t3722313464_il2cpp_TypeInfo_var);
		Vector3_t3722313464  L_2 = Vector3_get_zero_m1409827619(NULL /*static, unused*/, /*hidden argument*/NULL);
		__this->set_force_13(L_2);
		float L_3 = __this->get_shakeDetectionThreshold_7();
		float L_4 = __this->get_shakeDetectionThreshold_7();
		__this->set_shakeDetectionThreshold_7(((float)il2cpp_codegen_multiply((float)L_3, (float)L_4)));
		float L_5 = __this->get_accelerometerUpdateInterval_5();
		float L_6 = __this->get_lowPassKernelWidthInSeconds_6();
		__this->set_lowPassFilterFactor_8(((float)((float)L_5/(float)L_6)));
		IL2CPP_RUNTIME_CLASS_INIT(Input_t1431474628_il2cpp_TypeInfo_var);
		Vector3_t3722313464  L_7 = Input_get_acceleration_m2528400370(NULL /*static, unused*/, /*hidden argument*/NULL);
		__this->set_lowPassValue_9(L_7);
		return;
	}
}
// System.Void BellBallScript::OnCollisionEnter(UnityEngine.Collision)
extern "C" IL2CPP_METHOD_ATTR void BellBallScript_OnCollisionEnter_m3755104074 (BellBallScript_t2206928030 * __this, Collision_t4262080450 * ___collision0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (BellBallScript_OnCollisionEnter_m3755104074_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		AudioSource_t3935305588 * L_0 = Component_GetComponent_TisAudioSource_t3935305588_m1977431131(__this, /*hidden argument*/Component_GetComponent_TisAudioSource_t3935305588_m1977431131_RuntimeMethod_var);
		NullCheck(L_0);
		AudioSource_Play_m48294159(L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void BellBallScript::Update()
extern "C" IL2CPP_METHOD_ATTR void BellBallScript_Update_m1090677461 (BellBallScript_t2206928030 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (BellBallScript_Update_m1090677461_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Input_t1431474628_il2cpp_TypeInfo_var);
		Vector3_t3722313464  L_0 = Input_get_acceleration_m2528400370(NULL /*static, unused*/, /*hidden argument*/NULL);
		__this->set_acceleration_10(L_0);
		Vector3_t3722313464  L_1 = __this->get_lowPassValue_9();
		Vector3_t3722313464  L_2 = __this->get_acceleration_10();
		float L_3 = __this->get_lowPassFilterFactor_8();
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_t3722313464_il2cpp_TypeInfo_var);
		Vector3_t3722313464  L_4 = Vector3_Lerp_m407887542(NULL /*static, unused*/, L_1, L_2, L_3, /*hidden argument*/NULL);
		__this->set_lowPassValue_9(L_4);
		Vector3_t3722313464  L_5 = __this->get_acceleration_10();
		Vector3_t3722313464  L_6 = __this->get_lowPassValue_9();
		Vector3_t3722313464  L_7 = Vector3_op_Subtraction_m3073674971(NULL /*static, unused*/, L_5, L_6, /*hidden argument*/NULL);
		__this->set_deltaAcceleration_11(L_7);
		Vector3_t3722313464 * L_8 = __this->get_address_of_deltaAcceleration_11();
		float L_9 = Vector3_get_sqrMagnitude_m1474274574((Vector3_t3722313464 *)L_8, /*hidden argument*/NULL);
		float L_10 = __this->get_shakeDetectionThreshold_7();
		if ((!(((float)L_9) >= ((float)L_10))))
		{
			goto IL_0067;
		}
	}
	{
		Rigidbody_t3916780224 * L_11 = __this->get_rb_12();
		Vector3_t3722313464  L_12 = __this->get_deltaAcceleration_11();
		NullCheck(L_11);
		Rigidbody_AddForce_m1059068722(L_11, L_12, 1, /*hidden argument*/NULL);
	}

IL_0067:
	{
		return;
	}
}
// System.Void BellBallScript::FixedUpdate()
extern "C" IL2CPP_METHOD_ATTR void BellBallScript_FixedUpdate_m2302903303 (BellBallScript_t2206928030 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (BellBallScript_FixedUpdate_m2302903303_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t3722313464  V_0;
	memset(&V_0, 0, sizeof(V_0));
	Vector3_t3722313464  V_1;
	memset(&V_1, 0, sizeof(V_1));
	{
		Vector3_t3722313464 * L_0 = __this->get_address_of_force_13();
		IL2CPP_RUNTIME_CLASS_INIT(Input_t1431474628_il2cpp_TypeInfo_var);
		Vector3_t3722313464  L_1 = Input_get_acceleration_m2528400370(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_0 = L_1;
		float L_2 = (&V_0)->get_x_2();
		L_0->set_x_2(L_2);
		Vector3_t3722313464 * L_3 = __this->get_address_of_force_13();
		Vector3_t3722313464  L_4 = Input_get_acceleration_m2528400370(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_1 = L_4;
		float L_5 = (&V_1)->get_y_3();
		L_3->set_y_3(L_5);
		Vector3_t3722313464 * L_6 = __this->get_address_of_force_13();
		Vector3_Normalize_m914904454((Vector3_t3722313464 *)L_6, /*hidden argument*/NULL);
		Rigidbody_t3916780224 * L_7 = __this->get_rb_12();
		Vector3_t3722313464  L_8 = __this->get_force_13();
		float L_9 = __this->get_speed_4();
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_t3722313464_il2cpp_TypeInfo_var);
		Vector3_t3722313464  L_10 = Vector3_op_Multiply_m3376773913(NULL /*static, unused*/, L_8, L_9, /*hidden argument*/NULL);
		NullCheck(L_7);
		Rigidbody_AddForce_m1059068722(L_7, L_10, 0, /*hidden argument*/NULL);
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
// System.Void GadgetBallScript::.ctor()
extern "C" IL2CPP_METHOD_ATTR void GadgetBallScript__ctor_m3276925049 (GadgetBallScript_t52728412 * __this, const RuntimeMethod* method)
{
	{
		__this->set_speed_4((10.0f));
		__this->set_accelerometerUpdateInterval_5((0.0166666675f));
		__this->set_lowPassKernelWidthInSeconds_6((1.0f));
		__this->set_shakeDetectionThreshold_7((2.0f));
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void GadgetBallScript::Start()
extern "C" IL2CPP_METHOD_ATTR void GadgetBallScript_Start_m4075801281 (GadgetBallScript_t52728412 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GadgetBallScript_Start_m4075801281_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Rigidbody_t3916780224 * L_0 = Component_GetComponent_TisRigidbody_t3916780224_m279685075(__this, /*hidden argument*/Component_GetComponent_TisRigidbody_t3916780224_m279685075_RuntimeMethod_var);
		__this->set_rb_12(L_0);
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_t3722313464_il2cpp_TypeInfo_var);
		Vector3_t3722313464  L_1 = Vector3_get_zero_m1409827619(NULL /*static, unused*/, /*hidden argument*/NULL);
		__this->set_force_13(L_1);
		float L_2 = __this->get_shakeDetectionThreshold_7();
		float L_3 = __this->get_shakeDetectionThreshold_7();
		__this->set_shakeDetectionThreshold_7(((float)il2cpp_codegen_multiply((float)L_2, (float)L_3)));
		float L_4 = __this->get_accelerometerUpdateInterval_5();
		float L_5 = __this->get_lowPassKernelWidthInSeconds_6();
		__this->set_lowPassFilterFactor_8(((float)((float)L_4/(float)L_5)));
		IL2CPP_RUNTIME_CLASS_INIT(Input_t1431474628_il2cpp_TypeInfo_var);
		Vector3_t3722313464  L_6 = Input_get_acceleration_m2528400370(NULL /*static, unused*/, /*hidden argument*/NULL);
		__this->set_lowPassValue_9(L_6);
		return;
	}
}
// System.Void GadgetBallScript::Update()
extern "C" IL2CPP_METHOD_ATTR void GadgetBallScript_Update_m432973745 (GadgetBallScript_t52728412 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GadgetBallScript_Update_m432973745_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Input_t1431474628_il2cpp_TypeInfo_var);
		Vector3_t3722313464  L_0 = Input_get_acceleration_m2528400370(NULL /*static, unused*/, /*hidden argument*/NULL);
		__this->set_acceleration_10(L_0);
		Vector3_t3722313464  L_1 = __this->get_lowPassValue_9();
		Vector3_t3722313464  L_2 = __this->get_acceleration_10();
		float L_3 = __this->get_lowPassFilterFactor_8();
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_t3722313464_il2cpp_TypeInfo_var);
		Vector3_t3722313464  L_4 = Vector3_Lerp_m407887542(NULL /*static, unused*/, L_1, L_2, L_3, /*hidden argument*/NULL);
		__this->set_lowPassValue_9(L_4);
		Vector3_t3722313464  L_5 = __this->get_acceleration_10();
		Vector3_t3722313464  L_6 = __this->get_lowPassValue_9();
		Vector3_t3722313464  L_7 = Vector3_op_Subtraction_m3073674971(NULL /*static, unused*/, L_5, L_6, /*hidden argument*/NULL);
		__this->set_deltaAcceleration_11(L_7);
		Vector3_t3722313464 * L_8 = __this->get_address_of_deltaAcceleration_11();
		float L_9 = Vector3_get_sqrMagnitude_m1474274574((Vector3_t3722313464 *)L_8, /*hidden argument*/NULL);
		float L_10 = __this->get_shakeDetectionThreshold_7();
		if ((!(((float)L_9) >= ((float)L_10))))
		{
			goto IL_0067;
		}
	}
	{
		Rigidbody_t3916780224 * L_11 = __this->get_rb_12();
		Vector3_t3722313464  L_12 = __this->get_deltaAcceleration_11();
		NullCheck(L_11);
		Rigidbody_AddForce_m1059068722(L_11, L_12, 1, /*hidden argument*/NULL);
	}

IL_0067:
	{
		return;
	}
}
// System.Void GadgetBallScript::FixedUpdate()
extern "C" IL2CPP_METHOD_ATTR void GadgetBallScript_FixedUpdate_m3087533169 (GadgetBallScript_t52728412 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GadgetBallScript_FixedUpdate_m3087533169_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t3722313464  V_0;
	memset(&V_0, 0, sizeof(V_0));
	Vector3_t3722313464  V_1;
	memset(&V_1, 0, sizeof(V_1));
	{
		Vector3_t3722313464 * L_0 = __this->get_address_of_force_13();
		IL2CPP_RUNTIME_CLASS_INIT(Input_t1431474628_il2cpp_TypeInfo_var);
		Vector3_t3722313464  L_1 = Input_get_acceleration_m2528400370(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_0 = L_1;
		float L_2 = (&V_0)->get_x_2();
		L_0->set_x_2(L_2);
		Vector3_t3722313464 * L_3 = __this->get_address_of_force_13();
		Vector3_t3722313464  L_4 = Input_get_acceleration_m2528400370(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_1 = L_4;
		float L_5 = (&V_1)->get_y_3();
		L_3->set_y_3(L_5);
		Vector3_t3722313464 * L_6 = __this->get_address_of_force_13();
		Vector3_Normalize_m914904454((Vector3_t3722313464 *)L_6, /*hidden argument*/NULL);
		Rigidbody_t3916780224 * L_7 = __this->get_rb_12();
		Vector3_t3722313464  L_8 = __this->get_force_13();
		float L_9 = __this->get_speed_4();
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_t3722313464_il2cpp_TypeInfo_var);
		Vector3_t3722313464  L_10 = Vector3_op_Multiply_m3376773913(NULL /*static, unused*/, L_8, L_9, /*hidden argument*/NULL);
		NullCheck(L_7);
		Rigidbody_AddForce_m1059068722(L_7, L_10, 0, /*hidden argument*/NULL);
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
// System.Void MainCameraScript::.ctor()
extern "C" IL2CPP_METHOD_ATTR void MainCameraScript__ctor_m2951964981 (MainCameraScript_t463091299 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void MainCameraScript::Start()
extern "C" IL2CPP_METHOD_ATTR void MainCameraScript_Start_m662391317 (MainCameraScript_t463091299 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Void MainCameraScript::Update()
extern "C" IL2CPP_METHOD_ATTR void MainCameraScript_Update_m1737231585 (MainCameraScript_t463091299 * __this, const RuntimeMethod* method)
{
	{
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
// System.Void PlanesScripts::.ctor()
extern "C" IL2CPP_METHOD_ATTR void PlanesScripts__ctor_m3722700626 (PlanesScripts_t1322450088 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void PlanesScripts::Start()
extern "C" IL2CPP_METHOD_ATTR void PlanesScripts_Start_m1184406696 (PlanesScripts_t1322450088 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PlanesScripts_Start_m1184406696_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t3722313464  V_0;
	memset(&V_0, 0, sizeof(V_0));
	Vector3_t3722313464  V_1;
	memset(&V_1, 0, sizeof(V_1));
	Vector3_t3722313464  V_2;
	memset(&V_2, 0, sizeof(V_2));
	Vector3_t3722313464  V_3;
	memset(&V_3, 0, sizeof(V_3));
	{
		GameObject_t1113636619 * L_0 = GameObject_Find_m2032535176(NULL /*static, unused*/, _stringLiteral2774581319, /*hidden argument*/NULL);
		NullCheck(L_0);
		Camera_t4157153871 * L_1 = GameObject_GetComponent_TisCamera_t4157153871_m3956151066(L_0, /*hidden argument*/GameObject_GetComponent_TisCamera_t4157153871_m3956151066_RuntimeMethod_var);
		__this->set__mainCamera_8(L_1);
		GameObject_t1113636619 * L_2 = GameObject_Find_m2032535176(NULL /*static, unused*/, _stringLiteral3483765918, /*hidden argument*/NULL);
		__this->set_wall_Left_4(L_2);
		GameObject_t1113636619 * L_3 = GameObject_Find_m2032535176(NULL /*static, unused*/, _stringLiteral3862355750, /*hidden argument*/NULL);
		__this->set_wall_Right_5(L_3);
		GameObject_t1113636619 * L_4 = GameObject_Find_m2032535176(NULL /*static, unused*/, _stringLiteral2168849986, /*hidden argument*/NULL);
		__this->set_wall_Bottom_6(L_4);
		GameObject_t1113636619 * L_5 = GameObject_Find_m2032535176(NULL /*static, unused*/, _stringLiteral800994087, /*hidden argument*/NULL);
		__this->set_wall_Top_7(L_5);
		Vector3_t3722313464 * L_6 = __this->get_address_of_LeftPos_9();
		Vector3_t3722313464  L_7 = PlanesScripts_getScreenTopLeft_m1505486700(__this, /*hidden argument*/NULL);
		V_0 = L_7;
		float L_8 = (&V_0)->get_x_2();
		L_6->set_x_2(L_8);
		Vector3_t3722313464 * L_9 = __this->get_address_of_RightPos_10();
		Vector3_t3722313464  L_10 = PlanesScripts_getScreenBottomRight_m2406534463(__this, /*hidden argument*/NULL);
		V_1 = L_10;
		float L_11 = (&V_1)->get_x_2();
		L_9->set_x_2(L_11);
		Vector3_t3722313464 * L_12 = __this->get_address_of_BottomPos_11();
		Vector3_t3722313464  L_13 = PlanesScripts_getScreenBottomRight_m2406534463(__this, /*hidden argument*/NULL);
		V_2 = L_13;
		float L_14 = (&V_2)->get_y_3();
		L_12->set_y_3(L_14);
		Vector3_t3722313464 * L_15 = __this->get_address_of_TopPos_12();
		Vector3_t3722313464  L_16 = PlanesScripts_getScreenTopLeft_m1505486700(__this, /*hidden argument*/NULL);
		V_3 = L_16;
		float L_17 = (&V_3)->get_y_3();
		L_15->set_y_3(L_17);
		GameObject_t1113636619 * L_18 = __this->get_wall_Left_4();
		NullCheck(L_18);
		Transform_t3600365921 * L_19 = GameObject_get_transform_m1369836730(L_18, /*hidden argument*/NULL);
		Vector3_t3722313464  L_20 = __this->get_LeftPos_9();
		NullCheck(L_19);
		Transform_set_position_m3387557959(L_19, L_20, /*hidden argument*/NULL);
		GameObject_t1113636619 * L_21 = __this->get_wall_Right_5();
		NullCheck(L_21);
		Transform_t3600365921 * L_22 = GameObject_get_transform_m1369836730(L_21, /*hidden argument*/NULL);
		Vector3_t3722313464  L_23 = __this->get_RightPos_10();
		NullCheck(L_22);
		Transform_set_position_m3387557959(L_22, L_23, /*hidden argument*/NULL);
		GameObject_t1113636619 * L_24 = __this->get_wall_Top_7();
		NullCheck(L_24);
		Transform_t3600365921 * L_25 = GameObject_get_transform_m1369836730(L_24, /*hidden argument*/NULL);
		Vector3_t3722313464  L_26 = __this->get_TopPos_12();
		NullCheck(L_25);
		Transform_set_position_m3387557959(L_25, L_26, /*hidden argument*/NULL);
		GameObject_t1113636619 * L_27 = __this->get_wall_Bottom_6();
		NullCheck(L_27);
		Transform_t3600365921 * L_28 = GameObject_get_transform_m1369836730(L_27, /*hidden argument*/NULL);
		Vector3_t3722313464  L_29 = __this->get_BottomPos_11();
		NullCheck(L_28);
		Transform_set_position_m3387557959(L_28, L_29, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.Vector3 PlanesScripts::getScreenTopLeft()
extern "C" IL2CPP_METHOD_ATTR Vector3_t3722313464  PlanesScripts_getScreenTopLeft_m1505486700 (PlanesScripts_t1322450088 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PlanesScripts_getScreenTopLeft_m1505486700_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t3722313464  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		Camera_t4157153871 * L_0 = __this->get__mainCamera_8();
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_t3722313464_il2cpp_TypeInfo_var);
		Vector3_t3722313464  L_1 = Vector3_get_zero_m1409827619(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_0);
		Vector3_t3722313464  L_2 = Camera_ScreenToWorldPoint_m3978588570(L_0, L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		Vector3_t3722313464  L_3;
		memset(&L_3, 0, sizeof(L_3));
		Vector3__ctor_m3353183577((&L_3), (1.0f), (-1.0f), (1.0f), /*hidden argument*/NULL);
		Vector3_Scale_m3007431830((Vector3_t3722313464 *)(&V_0), L_3, /*hidden argument*/NULL);
		Vector3_t3722313464  L_4 = V_0;
		return L_4;
	}
}
// UnityEngine.Vector3 PlanesScripts::getScreenBottomRight()
extern "C" IL2CPP_METHOD_ATTR Vector3_t3722313464  PlanesScripts_getScreenBottomRight_m2406534463 (PlanesScripts_t1322450088 * __this, const RuntimeMethod* method)
{
	Vector3_t3722313464  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		Camera_t4157153871 * L_0 = __this->get__mainCamera_8();
		int32_t L_1 = Screen_get_width_m345039817(NULL /*static, unused*/, /*hidden argument*/NULL);
		int32_t L_2 = Screen_get_height_m1623532518(NULL /*static, unused*/, /*hidden argument*/NULL);
		Vector3_t3722313464  L_3;
		memset(&L_3, 0, sizeof(L_3));
		Vector3__ctor_m3353183577((&L_3), (((float)((float)L_1))), (((float)((float)L_2))), (0.0f), /*hidden argument*/NULL);
		NullCheck(L_0);
		Vector3_t3722313464  L_4 = Camera_ScreenToWorldPoint_m3978588570(L_0, L_3, /*hidden argument*/NULL);
		V_0 = L_4;
		Vector3_t3722313464  L_5;
		memset(&L_5, 0, sizeof(L_5));
		Vector3__ctor_m3353183577((&L_5), (1.0f), (-1.0f), (1.0f), /*hidden argument*/NULL);
		Vector3_Scale_m3007431830((Vector3_t3722313464 *)(&V_0), L_5, /*hidden argument*/NULL);
		Vector3_t3722313464  L_6 = V_0;
		return L_6;
	}
}
// System.Void PlanesScripts::Update()
extern "C" IL2CPP_METHOD_ATTR void PlanesScripts_Update_m666404764 (PlanesScripts_t1322450088 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
