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

template <typename T1, typename T2>
struct VirtActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
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
struct VirtActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};

// ThirdPersonCamera
struct ThirdPersonCamera_t2998681409;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t3962482529;
// UnityEngine.Object
struct Object_t631007953;
// UnityEngine.Camera
struct Camera_t4157153871;
// UnityEngine.Component
struct Component_t1923634451;
// UnityEngine.Transform
struct Transform_t3600365921;
// UnityEngine.Behaviour
struct Behaviour_t1437897464;
// System.Type
struct Type_t;
// UnityEngine.Collider
struct Collider_t1773347010;
// System.String
struct String_t;
// ThirdPersonController
struct ThirdPersonController_t2544474708;
// UnityEngine.CharacterController
struct CharacterController_t1138636865;
// UnityEngine.Animation
struct Animation_t3648466861;
// UnityEngine.AnimationState
struct AnimationState_t1108360407;
// UnityEngine.ControllerColliderHit
struct ControllerColliderHit_t240592346;
// UnityEngine.GameObject
struct GameObject_t1113636619;
// System.Char[]
struct CharU5BU5D_t3528271667;
// System.Void
struct Void_t1185182177;
// System.Type[]
struct TypeU5BU5D_t3940880105;
// System.Reflection.MemberFilter
struct MemberFilter_t426314064;
// UnityEngine.Camera/CameraCallback
struct CameraCallback_t190067161;
// UnityEngine.AnimationClip
struct AnimationClip_t2318505987;

extern RuntimeClass* Vector3_t3722313464_il2cpp_TypeInfo_var;
extern const uint32_t ThirdPersonCamera__ctor_m1657846641_MetadataUsageId;
extern const RuntimeType* ThirdPersonController_t2544474708_0_0_0_var;
extern RuntimeClass* Object_t631007953_il2cpp_TypeInfo_var;
extern RuntimeClass* Debug_t3317548046_il2cpp_TypeInfo_var;
extern RuntimeClass* Type_t_il2cpp_TypeInfo_var;
extern RuntimeClass* ThirdPersonController_t2544474708_il2cpp_TypeInfo_var;
extern RuntimeClass* CharacterController_t1138636865_il2cpp_TypeInfo_var;
extern const RuntimeMethod* Component_GetComponent_TisCollider_t1773347010_m1045602456_RuntimeMethod_var;
extern String_t* _stringLiteral3436217699;
extern String_t* _stringLiteral3947371250;
extern const uint32_t ThirdPersonCamera_Awake_m3241439730_MetadataUsageId;
extern const uint32_t ThirdPersonCamera_DebugDrawStuff_m2134478410_MetadataUsageId;
extern RuntimeClass* Mathf_t3464937446_il2cpp_TypeInfo_var;
extern const uint32_t ThirdPersonCamera_AngleDistance_m4249521905_MetadataUsageId;
extern RuntimeClass* Input_t1431474628_il2cpp_TypeInfo_var;
extern RuntimeClass* Quaternion_t2301928331_il2cpp_TypeInfo_var;
extern String_t* _stringLiteral3228161486;
extern const uint32_t ThirdPersonCamera_Apply_m1270392762_MetadataUsageId;
extern const uint32_t ThirdPersonCamera_LateUpdate_m2932403482_MetadataUsageId;
extern const uint32_t ThirdPersonCamera_Cut_m2748638384_MetadataUsageId;
extern const RuntimeMethod* Component_GetComponent_TisCamera_t4157153871_m1557787507_RuntimeMethod_var;
extern const uint32_t ThirdPersonCamera_SetUpRotation_m1499999276_MetadataUsageId;
extern const uint32_t ThirdPersonController__ctor_m2708171020_MetadataUsageId;
extern const RuntimeType* Animation_t3648466861_0_0_0_var;
extern RuntimeClass* Animation_t3648466861_il2cpp_TypeInfo_var;
extern String_t* _stringLiteral2184035678;
extern String_t* _stringLiteral2698848016;
extern String_t* _stringLiteral863652304;
extern String_t* _stringLiteral2156178170;
extern String_t* _stringLiteral1557151833;
extern const uint32_t ThirdPersonController_Awake_m2581598203_MetadataUsageId;
extern String_t* _stringLiteral2984908384;
extern String_t* _stringLiteral1828639942;
extern const uint32_t ThirdPersonController_UpdateSmoothedMovementDirection_m1976419453_MetadataUsageId;
extern String_t* _stringLiteral1890780345;
extern const uint32_t ThirdPersonController_ApplyJumping_m1425051051_MetadataUsageId;
extern String_t* _stringLiteral1930566815;
extern String_t* _stringLiteral1991383835;
extern const uint32_t ThirdPersonController_ApplyGravity_m3354230482_MetadataUsageId;
extern const uint32_t ThirdPersonController_CalculateJumpVerticalSpeed_m2113631571_MetadataUsageId;
extern const RuntimeType* CharacterController_t1138636865_0_0_0_var;
extern String_t* _stringLiteral3415664809;
extern const uint32_t ThirdPersonController_Update_m325211622_MetadataUsageId;
extern const uint32_t ThirdPersonController_IsMoving_m287712802_MetadataUsageId;
extern String_t* _stringLiteral2261822918;
extern const uint32_t ThirdPersonController_Reset_m4173393427_MetadataUsageId;



#ifndef U3CMODULEU3E_T692745546_H
#define U3CMODULEU3E_T692745546_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct  U3CModuleU3E_t692745546 
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CMODULEU3E_T692745546_H
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
#ifndef QUATERNION_T2301928331_H
#define QUATERNION_T2301928331_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Quaternion
struct  Quaternion_t2301928331 
{
public:
	// System.Single UnityEngine.Quaternion::x
	float ___x_0;
	// System.Single UnityEngine.Quaternion::y
	float ___y_1;
	// System.Single UnityEngine.Quaternion::z
	float ___z_2;
	// System.Single UnityEngine.Quaternion::w
	float ___w_3;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Quaternion_t2301928331, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Quaternion_t2301928331, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}

	inline static int32_t get_offset_of_z_2() { return static_cast<int32_t>(offsetof(Quaternion_t2301928331, ___z_2)); }
	inline float get_z_2() const { return ___z_2; }
	inline float* get_address_of_z_2() { return &___z_2; }
	inline void set_z_2(float value)
	{
		___z_2 = value;
	}

	inline static int32_t get_offset_of_w_3() { return static_cast<int32_t>(offsetof(Quaternion_t2301928331, ___w_3)); }
	inline float get_w_3() const { return ___w_3; }
	inline float* get_address_of_w_3() { return &___w_3; }
	inline void set_w_3(float value)
	{
		___w_3 = value;
	}
};

struct Quaternion_t2301928331_StaticFields
{
public:
	// UnityEngine.Quaternion UnityEngine.Quaternion::identityQuaternion
	Quaternion_t2301928331  ___identityQuaternion_4;

public:
	inline static int32_t get_offset_of_identityQuaternion_4() { return static_cast<int32_t>(offsetof(Quaternion_t2301928331_StaticFields, ___identityQuaternion_4)); }
	inline Quaternion_t2301928331  get_identityQuaternion_4() const { return ___identityQuaternion_4; }
	inline Quaternion_t2301928331 * get_address_of_identityQuaternion_4() { return &___identityQuaternion_4; }
	inline void set_identityQuaternion_4(Quaternion_t2301928331  value)
	{
		___identityQuaternion_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // QUATERNION_T2301928331_H
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
	float ___x_1;
	// System.Single UnityEngine.Vector3::y
	float ___y_2;
	// System.Single UnityEngine.Vector3::z
	float ___z_3;

public:
	inline static int32_t get_offset_of_x_1() { return static_cast<int32_t>(offsetof(Vector3_t3722313464, ___x_1)); }
	inline float get_x_1() const { return ___x_1; }
	inline float* get_address_of_x_1() { return &___x_1; }
	inline void set_x_1(float value)
	{
		___x_1 = value;
	}

	inline static int32_t get_offset_of_y_2() { return static_cast<int32_t>(offsetof(Vector3_t3722313464, ___y_2)); }
	inline float get_y_2() const { return ___y_2; }
	inline float* get_address_of_y_2() { return &___y_2; }
	inline void set_y_2(float value)
	{
		___y_2 = value;
	}

	inline static int32_t get_offset_of_z_3() { return static_cast<int32_t>(offsetof(Vector3_t3722313464, ___z_3)); }
	inline float get_z_3() const { return ___z_3; }
	inline float* get_address_of_z_3() { return &___z_3; }
	inline void set_z_3(float value)
	{
		___z_3 = value;
	}
};

struct Vector3_t3722313464_StaticFields
{
public:
	// UnityEngine.Vector3 UnityEngine.Vector3::zeroVector
	Vector3_t3722313464  ___zeroVector_4;
	// UnityEngine.Vector3 UnityEngine.Vector3::oneVector
	Vector3_t3722313464  ___oneVector_5;
	// UnityEngine.Vector3 UnityEngine.Vector3::upVector
	Vector3_t3722313464  ___upVector_6;
	// UnityEngine.Vector3 UnityEngine.Vector3::downVector
	Vector3_t3722313464  ___downVector_7;
	// UnityEngine.Vector3 UnityEngine.Vector3::leftVector
	Vector3_t3722313464  ___leftVector_8;
	// UnityEngine.Vector3 UnityEngine.Vector3::rightVector
	Vector3_t3722313464  ___rightVector_9;
	// UnityEngine.Vector3 UnityEngine.Vector3::forwardVector
	Vector3_t3722313464  ___forwardVector_10;
	// UnityEngine.Vector3 UnityEngine.Vector3::backVector
	Vector3_t3722313464  ___backVector_11;
	// UnityEngine.Vector3 UnityEngine.Vector3::positiveInfinityVector
	Vector3_t3722313464  ___positiveInfinityVector_12;
	// UnityEngine.Vector3 UnityEngine.Vector3::negativeInfinityVector
	Vector3_t3722313464  ___negativeInfinityVector_13;

public:
	inline static int32_t get_offset_of_zeroVector_4() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___zeroVector_4)); }
	inline Vector3_t3722313464  get_zeroVector_4() const { return ___zeroVector_4; }
	inline Vector3_t3722313464 * get_address_of_zeroVector_4() { return &___zeroVector_4; }
	inline void set_zeroVector_4(Vector3_t3722313464  value)
	{
		___zeroVector_4 = value;
	}

	inline static int32_t get_offset_of_oneVector_5() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___oneVector_5)); }
	inline Vector3_t3722313464  get_oneVector_5() const { return ___oneVector_5; }
	inline Vector3_t3722313464 * get_address_of_oneVector_5() { return &___oneVector_5; }
	inline void set_oneVector_5(Vector3_t3722313464  value)
	{
		___oneVector_5 = value;
	}

	inline static int32_t get_offset_of_upVector_6() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___upVector_6)); }
	inline Vector3_t3722313464  get_upVector_6() const { return ___upVector_6; }
	inline Vector3_t3722313464 * get_address_of_upVector_6() { return &___upVector_6; }
	inline void set_upVector_6(Vector3_t3722313464  value)
	{
		___upVector_6 = value;
	}

	inline static int32_t get_offset_of_downVector_7() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___downVector_7)); }
	inline Vector3_t3722313464  get_downVector_7() const { return ___downVector_7; }
	inline Vector3_t3722313464 * get_address_of_downVector_7() { return &___downVector_7; }
	inline void set_downVector_7(Vector3_t3722313464  value)
	{
		___downVector_7 = value;
	}

	inline static int32_t get_offset_of_leftVector_8() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___leftVector_8)); }
	inline Vector3_t3722313464  get_leftVector_8() const { return ___leftVector_8; }
	inline Vector3_t3722313464 * get_address_of_leftVector_8() { return &___leftVector_8; }
	inline void set_leftVector_8(Vector3_t3722313464  value)
	{
		___leftVector_8 = value;
	}

	inline static int32_t get_offset_of_rightVector_9() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___rightVector_9)); }
	inline Vector3_t3722313464  get_rightVector_9() const { return ___rightVector_9; }
	inline Vector3_t3722313464 * get_address_of_rightVector_9() { return &___rightVector_9; }
	inline void set_rightVector_9(Vector3_t3722313464  value)
	{
		___rightVector_9 = value;
	}

	inline static int32_t get_offset_of_forwardVector_10() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___forwardVector_10)); }
	inline Vector3_t3722313464  get_forwardVector_10() const { return ___forwardVector_10; }
	inline Vector3_t3722313464 * get_address_of_forwardVector_10() { return &___forwardVector_10; }
	inline void set_forwardVector_10(Vector3_t3722313464  value)
	{
		___forwardVector_10 = value;
	}

	inline static int32_t get_offset_of_backVector_11() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___backVector_11)); }
	inline Vector3_t3722313464  get_backVector_11() const { return ___backVector_11; }
	inline Vector3_t3722313464 * get_address_of_backVector_11() { return &___backVector_11; }
	inline void set_backVector_11(Vector3_t3722313464  value)
	{
		___backVector_11 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_12() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___positiveInfinityVector_12)); }
	inline Vector3_t3722313464  get_positiveInfinityVector_12() const { return ___positiveInfinityVector_12; }
	inline Vector3_t3722313464 * get_address_of_positiveInfinityVector_12() { return &___positiveInfinityVector_12; }
	inline void set_positiveInfinityVector_12(Vector3_t3722313464  value)
	{
		___positiveInfinityVector_12 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_13() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___negativeInfinityVector_13)); }
	inline Vector3_t3722313464  get_negativeInfinityVector_13() const { return ___negativeInfinityVector_13; }
	inline Vector3_t3722313464 * get_address_of_negativeInfinityVector_13() { return &___negativeInfinityVector_13; }
	inline void set_negativeInfinityVector_13(Vector3_t3722313464  value)
	{
		___negativeInfinityVector_13 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VECTOR3_T3722313464_H
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
#ifndef RAY_T3785851493_H
#define RAY_T3785851493_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Ray
struct  Ray_t3785851493 
{
public:
	// UnityEngine.Vector3 UnityEngine.Ray::m_Origin
	Vector3_t3722313464  ___m_Origin_0;
	// UnityEngine.Vector3 UnityEngine.Ray::m_Direction
	Vector3_t3722313464  ___m_Direction_1;

public:
	inline static int32_t get_offset_of_m_Origin_0() { return static_cast<int32_t>(offsetof(Ray_t3785851493, ___m_Origin_0)); }
	inline Vector3_t3722313464  get_m_Origin_0() const { return ___m_Origin_0; }
	inline Vector3_t3722313464 * get_address_of_m_Origin_0() { return &___m_Origin_0; }
	inline void set_m_Origin_0(Vector3_t3722313464  value)
	{
		___m_Origin_0 = value;
	}

	inline static int32_t get_offset_of_m_Direction_1() { return static_cast<int32_t>(offsetof(Ray_t3785851493, ___m_Direction_1)); }
	inline Vector3_t3722313464  get_m_Direction_1() const { return ___m_Direction_1; }
	inline Vector3_t3722313464 * get_address_of_m_Direction_1() { return &___m_Direction_1; }
	inline void set_m_Direction_1(Vector3_t3722313464  value)
	{
		___m_Direction_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RAY_T3785851493_H
#ifndef KEYCODE_T2599294277_H
#define KEYCODE_T2599294277_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.KeyCode
struct  KeyCode_t2599294277 
{
public:
	// System.Int32 UnityEngine.KeyCode::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(KeyCode_t2599294277, ___value___1)); }
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
#endif // KEYCODE_T2599294277_H
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
#ifndef SENDMESSAGEOPTIONS_T3580193095_H
#define SENDMESSAGEOPTIONS_T3580193095_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.SendMessageOptions
struct  SendMessageOptions_t3580193095 
{
public:
	// System.Int32 UnityEngine.SendMessageOptions::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(SendMessageOptions_t3580193095, ___value___1)); }
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
#endif // SENDMESSAGEOPTIONS_T3580193095_H
#ifndef COLLISIONFLAGS_T1776808576_H
#define COLLISIONFLAGS_T1776808576_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.CollisionFlags
struct  CollisionFlags_t1776808576 
{
public:
	// System.Int32 UnityEngine.CollisionFlags::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(CollisionFlags_t1776808576, ___value___1)); }
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
#endif // COLLISIONFLAGS_T1776808576_H
#ifndef WRAPMODE_T730450702_H
#define WRAPMODE_T730450702_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.WrapMode
struct  WrapMode_t730450702 
{
public:
	// System.Int32 UnityEngine.WrapMode::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(WrapMode_t730450702, ___value___1)); }
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
#endif // WRAPMODE_T730450702_H
#ifndef CONTROLLERCOLLIDERHIT_T240592346_H
#define CONTROLLERCOLLIDERHIT_T240592346_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.ControllerColliderHit
struct  ControllerColliderHit_t240592346  : public RuntimeObject
{
public:
	// UnityEngine.CharacterController UnityEngine.ControllerColliderHit::m_Controller
	CharacterController_t1138636865 * ___m_Controller_0;
	// UnityEngine.Collider UnityEngine.ControllerColliderHit::m_Collider
	Collider_t1773347010 * ___m_Collider_1;
	// UnityEngine.Vector3 UnityEngine.ControllerColliderHit::m_Point
	Vector3_t3722313464  ___m_Point_2;
	// UnityEngine.Vector3 UnityEngine.ControllerColliderHit::m_Normal
	Vector3_t3722313464  ___m_Normal_3;
	// UnityEngine.Vector3 UnityEngine.ControllerColliderHit::m_MoveDirection
	Vector3_t3722313464  ___m_MoveDirection_4;
	// System.Single UnityEngine.ControllerColliderHit::m_MoveLength
	float ___m_MoveLength_5;
	// System.Int32 UnityEngine.ControllerColliderHit::m_Push
	int32_t ___m_Push_6;

public:
	inline static int32_t get_offset_of_m_Controller_0() { return static_cast<int32_t>(offsetof(ControllerColliderHit_t240592346, ___m_Controller_0)); }
	inline CharacterController_t1138636865 * get_m_Controller_0() const { return ___m_Controller_0; }
	inline CharacterController_t1138636865 ** get_address_of_m_Controller_0() { return &___m_Controller_0; }
	inline void set_m_Controller_0(CharacterController_t1138636865 * value)
	{
		___m_Controller_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_Controller_0), value);
	}

	inline static int32_t get_offset_of_m_Collider_1() { return static_cast<int32_t>(offsetof(ControllerColliderHit_t240592346, ___m_Collider_1)); }
	inline Collider_t1773347010 * get_m_Collider_1() const { return ___m_Collider_1; }
	inline Collider_t1773347010 ** get_address_of_m_Collider_1() { return &___m_Collider_1; }
	inline void set_m_Collider_1(Collider_t1773347010 * value)
	{
		___m_Collider_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_Collider_1), value);
	}

	inline static int32_t get_offset_of_m_Point_2() { return static_cast<int32_t>(offsetof(ControllerColliderHit_t240592346, ___m_Point_2)); }
	inline Vector3_t3722313464  get_m_Point_2() const { return ___m_Point_2; }
	inline Vector3_t3722313464 * get_address_of_m_Point_2() { return &___m_Point_2; }
	inline void set_m_Point_2(Vector3_t3722313464  value)
	{
		___m_Point_2 = value;
	}

	inline static int32_t get_offset_of_m_Normal_3() { return static_cast<int32_t>(offsetof(ControllerColliderHit_t240592346, ___m_Normal_3)); }
	inline Vector3_t3722313464  get_m_Normal_3() const { return ___m_Normal_3; }
	inline Vector3_t3722313464 * get_address_of_m_Normal_3() { return &___m_Normal_3; }
	inline void set_m_Normal_3(Vector3_t3722313464  value)
	{
		___m_Normal_3 = value;
	}

	inline static int32_t get_offset_of_m_MoveDirection_4() { return static_cast<int32_t>(offsetof(ControllerColliderHit_t240592346, ___m_MoveDirection_4)); }
	inline Vector3_t3722313464  get_m_MoveDirection_4() const { return ___m_MoveDirection_4; }
	inline Vector3_t3722313464 * get_address_of_m_MoveDirection_4() { return &___m_MoveDirection_4; }
	inline void set_m_MoveDirection_4(Vector3_t3722313464  value)
	{
		___m_MoveDirection_4 = value;
	}

	inline static int32_t get_offset_of_m_MoveLength_5() { return static_cast<int32_t>(offsetof(ControllerColliderHit_t240592346, ___m_MoveLength_5)); }
	inline float get_m_MoveLength_5() const { return ___m_MoveLength_5; }
	inline float* get_address_of_m_MoveLength_5() { return &___m_MoveLength_5; }
	inline void set_m_MoveLength_5(float value)
	{
		___m_MoveLength_5 = value;
	}

	inline static int32_t get_offset_of_m_Push_6() { return static_cast<int32_t>(offsetof(ControllerColliderHit_t240592346, ___m_Push_6)); }
	inline int32_t get_m_Push_6() const { return ___m_Push_6; }
	inline int32_t* get_address_of_m_Push_6() { return &___m_Push_6; }
	inline void set_m_Push_6(int32_t value)
	{
		___m_Push_6 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.ControllerColliderHit
struct ControllerColliderHit_t240592346_marshaled_pinvoke
{
	CharacterController_t1138636865 * ___m_Controller_0;
	Collider_t1773347010 * ___m_Collider_1;
	Vector3_t3722313464  ___m_Point_2;
	Vector3_t3722313464  ___m_Normal_3;
	Vector3_t3722313464  ___m_MoveDirection_4;
	float ___m_MoveLength_5;
	int32_t ___m_Push_6;
};
// Native definition for COM marshalling of UnityEngine.ControllerColliderHit
struct ControllerColliderHit_t240592346_marshaled_com
{
	CharacterController_t1138636865 * ___m_Controller_0;
	Collider_t1773347010 * ___m_Collider_1;
	Vector3_t3722313464  ___m_Point_2;
	Vector3_t3722313464  ___m_Normal_3;
	Vector3_t3722313464  ___m_MoveDirection_4;
	float ___m_MoveLength_5;
	int32_t ___m_Push_6;
};
#endif // CONTROLLERCOLLIDERHIT_T240592346_H
#ifndef BOUNDS_T2266837910_H
#define BOUNDS_T2266837910_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Bounds
struct  Bounds_t2266837910 
{
public:
	// UnityEngine.Vector3 UnityEngine.Bounds::m_Center
	Vector3_t3722313464  ___m_Center_0;
	// UnityEngine.Vector3 UnityEngine.Bounds::m_Extents
	Vector3_t3722313464  ___m_Extents_1;

public:
	inline static int32_t get_offset_of_m_Center_0() { return static_cast<int32_t>(offsetof(Bounds_t2266837910, ___m_Center_0)); }
	inline Vector3_t3722313464  get_m_Center_0() const { return ___m_Center_0; }
	inline Vector3_t3722313464 * get_address_of_m_Center_0() { return &___m_Center_0; }
	inline void set_m_Center_0(Vector3_t3722313464  value)
	{
		___m_Center_0 = value;
	}

	inline static int32_t get_offset_of_m_Extents_1() { return static_cast<int32_t>(offsetof(Bounds_t2266837910, ___m_Extents_1)); }
	inline Vector3_t3722313464  get_m_Extents_1() const { return ___m_Extents_1; }
	inline Vector3_t3722313464 * get_address_of_m_Extents_1() { return &___m_Extents_1; }
	inline void set_m_Extents_1(Vector3_t3722313464  value)
	{
		___m_Extents_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BOUNDS_T2266837910_H
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
#ifndef CHARACTERSTATE_T1684161606_H
#define CHARACTERSTATE_T1684161606_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// CharacterState
struct  CharacterState_t1684161606 
{
public:
	// System.Int32 CharacterState::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(CharacterState_t1684161606, ___value___1)); }
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
#endif // CHARACTERSTATE_T1684161606_H
#ifndef TRACKEDREFERENCE_T1199777556_H
#define TRACKEDREFERENCE_T1199777556_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.TrackedReference
struct  TrackedReference_t1199777556  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.TrackedReference::m_Ptr
	intptr_t ___m_Ptr_0;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(TrackedReference_t1199777556, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.TrackedReference
struct TrackedReference_t1199777556_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.TrackedReference
struct TrackedReference_t1199777556_marshaled_com
{
	intptr_t ___m_Ptr_0;
};
#endif // TRACKEDREFERENCE_T1199777556_H
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
#ifndef MOTION_T1110556653_H
#define MOTION_T1110556653_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Motion
struct  Motion_t1110556653  : public Object_t631007953
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MOTION_T1110556653_H
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
#ifndef ANIMATIONSTATE_T1108360407_H
#define ANIMATIONSTATE_T1108360407_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.AnimationState
struct  AnimationState_t1108360407  : public TrackedReference_t1199777556
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ANIMATIONSTATE_T1108360407_H
#ifndef COLLIDER_T1773347010_H
#define COLLIDER_T1773347010_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Collider
struct  Collider_t1773347010  : public Component_t1923634451
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COLLIDER_T1773347010_H
#ifndef ANIMATIONCLIP_T2318505987_H
#define ANIMATIONCLIP_T2318505987_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.AnimationClip
struct  AnimationClip_t2318505987  : public Motion_t1110556653
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ANIMATIONCLIP_T2318505987_H
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

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TRANSFORM_T3600365921_H
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
#ifndef ANIMATION_T3648466861_H
#define ANIMATION_T3648466861_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Animation
struct  Animation_t3648466861  : public Behaviour_t1437897464
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ANIMATION_T3648466861_H
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
#ifndef CHARACTERCONTROLLER_T1138636865_H
#define CHARACTERCONTROLLER_T1138636865_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.CharacterController
struct  CharacterController_t1138636865  : public Collider_t1773347010
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CHARACTERCONTROLLER_T1138636865_H
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
	CameraCallback_t190067161 * ___onPreCull_2;
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPreRender
	CameraCallback_t190067161 * ___onPreRender_3;
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPostRender
	CameraCallback_t190067161 * ___onPostRender_4;

public:
	inline static int32_t get_offset_of_onPreCull_2() { return static_cast<int32_t>(offsetof(Camera_t4157153871_StaticFields, ___onPreCull_2)); }
	inline CameraCallback_t190067161 * get_onPreCull_2() const { return ___onPreCull_2; }
	inline CameraCallback_t190067161 ** get_address_of_onPreCull_2() { return &___onPreCull_2; }
	inline void set_onPreCull_2(CameraCallback_t190067161 * value)
	{
		___onPreCull_2 = value;
		Il2CppCodeGenWriteBarrier((&___onPreCull_2), value);
	}

	inline static int32_t get_offset_of_onPreRender_3() { return static_cast<int32_t>(offsetof(Camera_t4157153871_StaticFields, ___onPreRender_3)); }
	inline CameraCallback_t190067161 * get_onPreRender_3() const { return ___onPreRender_3; }
	inline CameraCallback_t190067161 ** get_address_of_onPreRender_3() { return &___onPreRender_3; }
	inline void set_onPreRender_3(CameraCallback_t190067161 * value)
	{
		___onPreRender_3 = value;
		Il2CppCodeGenWriteBarrier((&___onPreRender_3), value);
	}

	inline static int32_t get_offset_of_onPostRender_4() { return static_cast<int32_t>(offsetof(Camera_t4157153871_StaticFields, ___onPostRender_4)); }
	inline CameraCallback_t190067161 * get_onPostRender_4() const { return ___onPostRender_4; }
	inline CameraCallback_t190067161 ** get_address_of_onPostRender_4() { return &___onPostRender_4; }
	inline void set_onPostRender_4(CameraCallback_t190067161 * value)
	{
		___onPostRender_4 = value;
		Il2CppCodeGenWriteBarrier((&___onPostRender_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CAMERA_T4157153871_H
#ifndef THIRDPERSONCAMERA_T2998681409_H
#define THIRDPERSONCAMERA_T2998681409_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ThirdPersonCamera
struct  ThirdPersonCamera_t2998681409  : public MonoBehaviour_t3962482529
{
public:
	// UnityEngine.Transform ThirdPersonCamera::cameraTransform
	Transform_t3600365921 * ___cameraTransform_2;
	// UnityEngine.Transform ThirdPersonCamera::_target
	Transform_t3600365921 * ____target_3;
	// System.Single ThirdPersonCamera::distance
	float ___distance_4;
	// System.Single ThirdPersonCamera::height
	float ___height_5;
	// System.Single ThirdPersonCamera::angularSmoothLag
	float ___angularSmoothLag_6;
	// System.Single ThirdPersonCamera::angularMaxSpeed
	float ___angularMaxSpeed_7;
	// System.Single ThirdPersonCamera::heightSmoothLag
	float ___heightSmoothLag_8;
	// System.Single ThirdPersonCamera::snapSmoothLag
	float ___snapSmoothLag_9;
	// System.Single ThirdPersonCamera::snapMaxSpeed
	float ___snapMaxSpeed_10;
	// System.Single ThirdPersonCamera::clampHeadPositionScreenSpace
	float ___clampHeadPositionScreenSpace_11;
	// System.Single ThirdPersonCamera::lockCameraTimeout
	float ___lockCameraTimeout_12;
	// UnityEngine.Vector3 ThirdPersonCamera::headOffset
	Vector3_t3722313464  ___headOffset_13;
	// UnityEngine.Vector3 ThirdPersonCamera::centerOffset
	Vector3_t3722313464  ___centerOffset_14;
	// System.Single ThirdPersonCamera::heightVelocity
	float ___heightVelocity_15;
	// System.Single ThirdPersonCamera::angleVelocity
	float ___angleVelocity_16;
	// System.Boolean ThirdPersonCamera::snap
	bool ___snap_17;
	// ThirdPersonController ThirdPersonCamera::controller
	ThirdPersonController_t2544474708 * ___controller_18;
	// System.Single ThirdPersonCamera::targetHeight
	float ___targetHeight_19;

public:
	inline static int32_t get_offset_of_cameraTransform_2() { return static_cast<int32_t>(offsetof(ThirdPersonCamera_t2998681409, ___cameraTransform_2)); }
	inline Transform_t3600365921 * get_cameraTransform_2() const { return ___cameraTransform_2; }
	inline Transform_t3600365921 ** get_address_of_cameraTransform_2() { return &___cameraTransform_2; }
	inline void set_cameraTransform_2(Transform_t3600365921 * value)
	{
		___cameraTransform_2 = value;
		Il2CppCodeGenWriteBarrier((&___cameraTransform_2), value);
	}

	inline static int32_t get_offset_of__target_3() { return static_cast<int32_t>(offsetof(ThirdPersonCamera_t2998681409, ____target_3)); }
	inline Transform_t3600365921 * get__target_3() const { return ____target_3; }
	inline Transform_t3600365921 ** get_address_of__target_3() { return &____target_3; }
	inline void set__target_3(Transform_t3600365921 * value)
	{
		____target_3 = value;
		Il2CppCodeGenWriteBarrier((&____target_3), value);
	}

	inline static int32_t get_offset_of_distance_4() { return static_cast<int32_t>(offsetof(ThirdPersonCamera_t2998681409, ___distance_4)); }
	inline float get_distance_4() const { return ___distance_4; }
	inline float* get_address_of_distance_4() { return &___distance_4; }
	inline void set_distance_4(float value)
	{
		___distance_4 = value;
	}

	inline static int32_t get_offset_of_height_5() { return static_cast<int32_t>(offsetof(ThirdPersonCamera_t2998681409, ___height_5)); }
	inline float get_height_5() const { return ___height_5; }
	inline float* get_address_of_height_5() { return &___height_5; }
	inline void set_height_5(float value)
	{
		___height_5 = value;
	}

	inline static int32_t get_offset_of_angularSmoothLag_6() { return static_cast<int32_t>(offsetof(ThirdPersonCamera_t2998681409, ___angularSmoothLag_6)); }
	inline float get_angularSmoothLag_6() const { return ___angularSmoothLag_6; }
	inline float* get_address_of_angularSmoothLag_6() { return &___angularSmoothLag_6; }
	inline void set_angularSmoothLag_6(float value)
	{
		___angularSmoothLag_6 = value;
	}

	inline static int32_t get_offset_of_angularMaxSpeed_7() { return static_cast<int32_t>(offsetof(ThirdPersonCamera_t2998681409, ___angularMaxSpeed_7)); }
	inline float get_angularMaxSpeed_7() const { return ___angularMaxSpeed_7; }
	inline float* get_address_of_angularMaxSpeed_7() { return &___angularMaxSpeed_7; }
	inline void set_angularMaxSpeed_7(float value)
	{
		___angularMaxSpeed_7 = value;
	}

	inline static int32_t get_offset_of_heightSmoothLag_8() { return static_cast<int32_t>(offsetof(ThirdPersonCamera_t2998681409, ___heightSmoothLag_8)); }
	inline float get_heightSmoothLag_8() const { return ___heightSmoothLag_8; }
	inline float* get_address_of_heightSmoothLag_8() { return &___heightSmoothLag_8; }
	inline void set_heightSmoothLag_8(float value)
	{
		___heightSmoothLag_8 = value;
	}

	inline static int32_t get_offset_of_snapSmoothLag_9() { return static_cast<int32_t>(offsetof(ThirdPersonCamera_t2998681409, ___snapSmoothLag_9)); }
	inline float get_snapSmoothLag_9() const { return ___snapSmoothLag_9; }
	inline float* get_address_of_snapSmoothLag_9() { return &___snapSmoothLag_9; }
	inline void set_snapSmoothLag_9(float value)
	{
		___snapSmoothLag_9 = value;
	}

	inline static int32_t get_offset_of_snapMaxSpeed_10() { return static_cast<int32_t>(offsetof(ThirdPersonCamera_t2998681409, ___snapMaxSpeed_10)); }
	inline float get_snapMaxSpeed_10() const { return ___snapMaxSpeed_10; }
	inline float* get_address_of_snapMaxSpeed_10() { return &___snapMaxSpeed_10; }
	inline void set_snapMaxSpeed_10(float value)
	{
		___snapMaxSpeed_10 = value;
	}

	inline static int32_t get_offset_of_clampHeadPositionScreenSpace_11() { return static_cast<int32_t>(offsetof(ThirdPersonCamera_t2998681409, ___clampHeadPositionScreenSpace_11)); }
	inline float get_clampHeadPositionScreenSpace_11() const { return ___clampHeadPositionScreenSpace_11; }
	inline float* get_address_of_clampHeadPositionScreenSpace_11() { return &___clampHeadPositionScreenSpace_11; }
	inline void set_clampHeadPositionScreenSpace_11(float value)
	{
		___clampHeadPositionScreenSpace_11 = value;
	}

	inline static int32_t get_offset_of_lockCameraTimeout_12() { return static_cast<int32_t>(offsetof(ThirdPersonCamera_t2998681409, ___lockCameraTimeout_12)); }
	inline float get_lockCameraTimeout_12() const { return ___lockCameraTimeout_12; }
	inline float* get_address_of_lockCameraTimeout_12() { return &___lockCameraTimeout_12; }
	inline void set_lockCameraTimeout_12(float value)
	{
		___lockCameraTimeout_12 = value;
	}

	inline static int32_t get_offset_of_headOffset_13() { return static_cast<int32_t>(offsetof(ThirdPersonCamera_t2998681409, ___headOffset_13)); }
	inline Vector3_t3722313464  get_headOffset_13() const { return ___headOffset_13; }
	inline Vector3_t3722313464 * get_address_of_headOffset_13() { return &___headOffset_13; }
	inline void set_headOffset_13(Vector3_t3722313464  value)
	{
		___headOffset_13 = value;
	}

	inline static int32_t get_offset_of_centerOffset_14() { return static_cast<int32_t>(offsetof(ThirdPersonCamera_t2998681409, ___centerOffset_14)); }
	inline Vector3_t3722313464  get_centerOffset_14() const { return ___centerOffset_14; }
	inline Vector3_t3722313464 * get_address_of_centerOffset_14() { return &___centerOffset_14; }
	inline void set_centerOffset_14(Vector3_t3722313464  value)
	{
		___centerOffset_14 = value;
	}

	inline static int32_t get_offset_of_heightVelocity_15() { return static_cast<int32_t>(offsetof(ThirdPersonCamera_t2998681409, ___heightVelocity_15)); }
	inline float get_heightVelocity_15() const { return ___heightVelocity_15; }
	inline float* get_address_of_heightVelocity_15() { return &___heightVelocity_15; }
	inline void set_heightVelocity_15(float value)
	{
		___heightVelocity_15 = value;
	}

	inline static int32_t get_offset_of_angleVelocity_16() { return static_cast<int32_t>(offsetof(ThirdPersonCamera_t2998681409, ___angleVelocity_16)); }
	inline float get_angleVelocity_16() const { return ___angleVelocity_16; }
	inline float* get_address_of_angleVelocity_16() { return &___angleVelocity_16; }
	inline void set_angleVelocity_16(float value)
	{
		___angleVelocity_16 = value;
	}

	inline static int32_t get_offset_of_snap_17() { return static_cast<int32_t>(offsetof(ThirdPersonCamera_t2998681409, ___snap_17)); }
	inline bool get_snap_17() const { return ___snap_17; }
	inline bool* get_address_of_snap_17() { return &___snap_17; }
	inline void set_snap_17(bool value)
	{
		___snap_17 = value;
	}

	inline static int32_t get_offset_of_controller_18() { return static_cast<int32_t>(offsetof(ThirdPersonCamera_t2998681409, ___controller_18)); }
	inline ThirdPersonController_t2544474708 * get_controller_18() const { return ___controller_18; }
	inline ThirdPersonController_t2544474708 ** get_address_of_controller_18() { return &___controller_18; }
	inline void set_controller_18(ThirdPersonController_t2544474708 * value)
	{
		___controller_18 = value;
		Il2CppCodeGenWriteBarrier((&___controller_18), value);
	}

	inline static int32_t get_offset_of_targetHeight_19() { return static_cast<int32_t>(offsetof(ThirdPersonCamera_t2998681409, ___targetHeight_19)); }
	inline float get_targetHeight_19() const { return ___targetHeight_19; }
	inline float* get_address_of_targetHeight_19() { return &___targetHeight_19; }
	inline void set_targetHeight_19(float value)
	{
		___targetHeight_19 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // THIRDPERSONCAMERA_T2998681409_H
#ifndef THIRDPERSONCONTROLLER_T2544474708_H
#define THIRDPERSONCONTROLLER_T2544474708_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ThirdPersonController
struct  ThirdPersonController_t2544474708  : public MonoBehaviour_t3962482529
{
public:
	// UnityEngine.AnimationClip ThirdPersonController::idleAnimation
	AnimationClip_t2318505987 * ___idleAnimation_2;
	// UnityEngine.AnimationClip ThirdPersonController::walkAnimation
	AnimationClip_t2318505987 * ___walkAnimation_3;
	// UnityEngine.AnimationClip ThirdPersonController::runAnimation
	AnimationClip_t2318505987 * ___runAnimation_4;
	// UnityEngine.AnimationClip ThirdPersonController::jumpPoseAnimation
	AnimationClip_t2318505987 * ___jumpPoseAnimation_5;
	// System.Single ThirdPersonController::walkMaxAnimationSpeed
	float ___walkMaxAnimationSpeed_6;
	// System.Single ThirdPersonController::trotMaxAnimationSpeed
	float ___trotMaxAnimationSpeed_7;
	// System.Single ThirdPersonController::runMaxAnimationSpeed
	float ___runMaxAnimationSpeed_8;
	// System.Single ThirdPersonController::jumpAnimationSpeed
	float ___jumpAnimationSpeed_9;
	// System.Single ThirdPersonController::landAnimationSpeed
	float ___landAnimationSpeed_10;
	// UnityEngine.Animation ThirdPersonController::_animation
	Animation_t3648466861 * ____animation_11;
	// CharacterState ThirdPersonController::_characterState
	int32_t ____characterState_12;
	// System.Single ThirdPersonController::walkSpeed
	float ___walkSpeed_13;
	// System.Single ThirdPersonController::trotSpeed
	float ___trotSpeed_14;
	// System.Single ThirdPersonController::runSpeed
	float ___runSpeed_15;
	// System.Single ThirdPersonController::inAirControlAcceleration
	float ___inAirControlAcceleration_16;
	// System.Single ThirdPersonController::jumpHeight
	float ___jumpHeight_17;
	// System.Single ThirdPersonController::gravity
	float ___gravity_18;
	// System.Single ThirdPersonController::speedSmoothing
	float ___speedSmoothing_19;
	// System.Single ThirdPersonController::rotateSpeed
	float ___rotateSpeed_20;
	// System.Single ThirdPersonController::trotAfterSeconds
	float ___trotAfterSeconds_21;
	// System.Boolean ThirdPersonController::canJump
	bool ___canJump_22;
	// System.Single ThirdPersonController::jumpRepeatTime
	float ___jumpRepeatTime_23;
	// System.Single ThirdPersonController::jumpTimeout
	float ___jumpTimeout_24;
	// System.Single ThirdPersonController::groundedTimeout
	float ___groundedTimeout_25;
	// System.Single ThirdPersonController::lockCameraTimer
	float ___lockCameraTimer_26;
	// UnityEngine.Vector3 ThirdPersonController::moveDirection
	Vector3_t3722313464  ___moveDirection_27;
	// System.Single ThirdPersonController::verticalSpeed
	float ___verticalSpeed_28;
	// System.Single ThirdPersonController::moveSpeed
	float ___moveSpeed_29;
	// UnityEngine.CollisionFlags ThirdPersonController::collisionFlags
	int32_t ___collisionFlags_30;
	// System.Boolean ThirdPersonController::jumping
	bool ___jumping_31;
	// System.Boolean ThirdPersonController::jumpingReachedApex
	bool ___jumpingReachedApex_32;
	// System.Boolean ThirdPersonController::movingBack
	bool ___movingBack_33;
	// System.Boolean ThirdPersonController::isMoving
	bool ___isMoving_34;
	// System.Single ThirdPersonController::walkTimeStart
	float ___walkTimeStart_35;
	// System.Single ThirdPersonController::lastJumpButtonTime
	float ___lastJumpButtonTime_36;
	// System.Single ThirdPersonController::lastJumpTime
	float ___lastJumpTime_37;
	// System.Single ThirdPersonController::lastJumpStartHeight
	float ___lastJumpStartHeight_38;
	// UnityEngine.Vector3 ThirdPersonController::inAirVelocity
	Vector3_t3722313464  ___inAirVelocity_39;
	// System.Single ThirdPersonController::lastGroundedTime
	float ___lastGroundedTime_40;
	// System.Boolean ThirdPersonController::isControllable
	bool ___isControllable_41;

public:
	inline static int32_t get_offset_of_idleAnimation_2() { return static_cast<int32_t>(offsetof(ThirdPersonController_t2544474708, ___idleAnimation_2)); }
	inline AnimationClip_t2318505987 * get_idleAnimation_2() const { return ___idleAnimation_2; }
	inline AnimationClip_t2318505987 ** get_address_of_idleAnimation_2() { return &___idleAnimation_2; }
	inline void set_idleAnimation_2(AnimationClip_t2318505987 * value)
	{
		___idleAnimation_2 = value;
		Il2CppCodeGenWriteBarrier((&___idleAnimation_2), value);
	}

	inline static int32_t get_offset_of_walkAnimation_3() { return static_cast<int32_t>(offsetof(ThirdPersonController_t2544474708, ___walkAnimation_3)); }
	inline AnimationClip_t2318505987 * get_walkAnimation_3() const { return ___walkAnimation_3; }
	inline AnimationClip_t2318505987 ** get_address_of_walkAnimation_3() { return &___walkAnimation_3; }
	inline void set_walkAnimation_3(AnimationClip_t2318505987 * value)
	{
		___walkAnimation_3 = value;
		Il2CppCodeGenWriteBarrier((&___walkAnimation_3), value);
	}

	inline static int32_t get_offset_of_runAnimation_4() { return static_cast<int32_t>(offsetof(ThirdPersonController_t2544474708, ___runAnimation_4)); }
	inline AnimationClip_t2318505987 * get_runAnimation_4() const { return ___runAnimation_4; }
	inline AnimationClip_t2318505987 ** get_address_of_runAnimation_4() { return &___runAnimation_4; }
	inline void set_runAnimation_4(AnimationClip_t2318505987 * value)
	{
		___runAnimation_4 = value;
		Il2CppCodeGenWriteBarrier((&___runAnimation_4), value);
	}

	inline static int32_t get_offset_of_jumpPoseAnimation_5() { return static_cast<int32_t>(offsetof(ThirdPersonController_t2544474708, ___jumpPoseAnimation_5)); }
	inline AnimationClip_t2318505987 * get_jumpPoseAnimation_5() const { return ___jumpPoseAnimation_5; }
	inline AnimationClip_t2318505987 ** get_address_of_jumpPoseAnimation_5() { return &___jumpPoseAnimation_5; }
	inline void set_jumpPoseAnimation_5(AnimationClip_t2318505987 * value)
	{
		___jumpPoseAnimation_5 = value;
		Il2CppCodeGenWriteBarrier((&___jumpPoseAnimation_5), value);
	}

	inline static int32_t get_offset_of_walkMaxAnimationSpeed_6() { return static_cast<int32_t>(offsetof(ThirdPersonController_t2544474708, ___walkMaxAnimationSpeed_6)); }
	inline float get_walkMaxAnimationSpeed_6() const { return ___walkMaxAnimationSpeed_6; }
	inline float* get_address_of_walkMaxAnimationSpeed_6() { return &___walkMaxAnimationSpeed_6; }
	inline void set_walkMaxAnimationSpeed_6(float value)
	{
		___walkMaxAnimationSpeed_6 = value;
	}

	inline static int32_t get_offset_of_trotMaxAnimationSpeed_7() { return static_cast<int32_t>(offsetof(ThirdPersonController_t2544474708, ___trotMaxAnimationSpeed_7)); }
	inline float get_trotMaxAnimationSpeed_7() const { return ___trotMaxAnimationSpeed_7; }
	inline float* get_address_of_trotMaxAnimationSpeed_7() { return &___trotMaxAnimationSpeed_7; }
	inline void set_trotMaxAnimationSpeed_7(float value)
	{
		___trotMaxAnimationSpeed_7 = value;
	}

	inline static int32_t get_offset_of_runMaxAnimationSpeed_8() { return static_cast<int32_t>(offsetof(ThirdPersonController_t2544474708, ___runMaxAnimationSpeed_8)); }
	inline float get_runMaxAnimationSpeed_8() const { return ___runMaxAnimationSpeed_8; }
	inline float* get_address_of_runMaxAnimationSpeed_8() { return &___runMaxAnimationSpeed_8; }
	inline void set_runMaxAnimationSpeed_8(float value)
	{
		___runMaxAnimationSpeed_8 = value;
	}

	inline static int32_t get_offset_of_jumpAnimationSpeed_9() { return static_cast<int32_t>(offsetof(ThirdPersonController_t2544474708, ___jumpAnimationSpeed_9)); }
	inline float get_jumpAnimationSpeed_9() const { return ___jumpAnimationSpeed_9; }
	inline float* get_address_of_jumpAnimationSpeed_9() { return &___jumpAnimationSpeed_9; }
	inline void set_jumpAnimationSpeed_9(float value)
	{
		___jumpAnimationSpeed_9 = value;
	}

	inline static int32_t get_offset_of_landAnimationSpeed_10() { return static_cast<int32_t>(offsetof(ThirdPersonController_t2544474708, ___landAnimationSpeed_10)); }
	inline float get_landAnimationSpeed_10() const { return ___landAnimationSpeed_10; }
	inline float* get_address_of_landAnimationSpeed_10() { return &___landAnimationSpeed_10; }
	inline void set_landAnimationSpeed_10(float value)
	{
		___landAnimationSpeed_10 = value;
	}

	inline static int32_t get_offset_of__animation_11() { return static_cast<int32_t>(offsetof(ThirdPersonController_t2544474708, ____animation_11)); }
	inline Animation_t3648466861 * get__animation_11() const { return ____animation_11; }
	inline Animation_t3648466861 ** get_address_of__animation_11() { return &____animation_11; }
	inline void set__animation_11(Animation_t3648466861 * value)
	{
		____animation_11 = value;
		Il2CppCodeGenWriteBarrier((&____animation_11), value);
	}

	inline static int32_t get_offset_of__characterState_12() { return static_cast<int32_t>(offsetof(ThirdPersonController_t2544474708, ____characterState_12)); }
	inline int32_t get__characterState_12() const { return ____characterState_12; }
	inline int32_t* get_address_of__characterState_12() { return &____characterState_12; }
	inline void set__characterState_12(int32_t value)
	{
		____characterState_12 = value;
	}

	inline static int32_t get_offset_of_walkSpeed_13() { return static_cast<int32_t>(offsetof(ThirdPersonController_t2544474708, ___walkSpeed_13)); }
	inline float get_walkSpeed_13() const { return ___walkSpeed_13; }
	inline float* get_address_of_walkSpeed_13() { return &___walkSpeed_13; }
	inline void set_walkSpeed_13(float value)
	{
		___walkSpeed_13 = value;
	}

	inline static int32_t get_offset_of_trotSpeed_14() { return static_cast<int32_t>(offsetof(ThirdPersonController_t2544474708, ___trotSpeed_14)); }
	inline float get_trotSpeed_14() const { return ___trotSpeed_14; }
	inline float* get_address_of_trotSpeed_14() { return &___trotSpeed_14; }
	inline void set_trotSpeed_14(float value)
	{
		___trotSpeed_14 = value;
	}

	inline static int32_t get_offset_of_runSpeed_15() { return static_cast<int32_t>(offsetof(ThirdPersonController_t2544474708, ___runSpeed_15)); }
	inline float get_runSpeed_15() const { return ___runSpeed_15; }
	inline float* get_address_of_runSpeed_15() { return &___runSpeed_15; }
	inline void set_runSpeed_15(float value)
	{
		___runSpeed_15 = value;
	}

	inline static int32_t get_offset_of_inAirControlAcceleration_16() { return static_cast<int32_t>(offsetof(ThirdPersonController_t2544474708, ___inAirControlAcceleration_16)); }
	inline float get_inAirControlAcceleration_16() const { return ___inAirControlAcceleration_16; }
	inline float* get_address_of_inAirControlAcceleration_16() { return &___inAirControlAcceleration_16; }
	inline void set_inAirControlAcceleration_16(float value)
	{
		___inAirControlAcceleration_16 = value;
	}

	inline static int32_t get_offset_of_jumpHeight_17() { return static_cast<int32_t>(offsetof(ThirdPersonController_t2544474708, ___jumpHeight_17)); }
	inline float get_jumpHeight_17() const { return ___jumpHeight_17; }
	inline float* get_address_of_jumpHeight_17() { return &___jumpHeight_17; }
	inline void set_jumpHeight_17(float value)
	{
		___jumpHeight_17 = value;
	}

	inline static int32_t get_offset_of_gravity_18() { return static_cast<int32_t>(offsetof(ThirdPersonController_t2544474708, ___gravity_18)); }
	inline float get_gravity_18() const { return ___gravity_18; }
	inline float* get_address_of_gravity_18() { return &___gravity_18; }
	inline void set_gravity_18(float value)
	{
		___gravity_18 = value;
	}

	inline static int32_t get_offset_of_speedSmoothing_19() { return static_cast<int32_t>(offsetof(ThirdPersonController_t2544474708, ___speedSmoothing_19)); }
	inline float get_speedSmoothing_19() const { return ___speedSmoothing_19; }
	inline float* get_address_of_speedSmoothing_19() { return &___speedSmoothing_19; }
	inline void set_speedSmoothing_19(float value)
	{
		___speedSmoothing_19 = value;
	}

	inline static int32_t get_offset_of_rotateSpeed_20() { return static_cast<int32_t>(offsetof(ThirdPersonController_t2544474708, ___rotateSpeed_20)); }
	inline float get_rotateSpeed_20() const { return ___rotateSpeed_20; }
	inline float* get_address_of_rotateSpeed_20() { return &___rotateSpeed_20; }
	inline void set_rotateSpeed_20(float value)
	{
		___rotateSpeed_20 = value;
	}

	inline static int32_t get_offset_of_trotAfterSeconds_21() { return static_cast<int32_t>(offsetof(ThirdPersonController_t2544474708, ___trotAfterSeconds_21)); }
	inline float get_trotAfterSeconds_21() const { return ___trotAfterSeconds_21; }
	inline float* get_address_of_trotAfterSeconds_21() { return &___trotAfterSeconds_21; }
	inline void set_trotAfterSeconds_21(float value)
	{
		___trotAfterSeconds_21 = value;
	}

	inline static int32_t get_offset_of_canJump_22() { return static_cast<int32_t>(offsetof(ThirdPersonController_t2544474708, ___canJump_22)); }
	inline bool get_canJump_22() const { return ___canJump_22; }
	inline bool* get_address_of_canJump_22() { return &___canJump_22; }
	inline void set_canJump_22(bool value)
	{
		___canJump_22 = value;
	}

	inline static int32_t get_offset_of_jumpRepeatTime_23() { return static_cast<int32_t>(offsetof(ThirdPersonController_t2544474708, ___jumpRepeatTime_23)); }
	inline float get_jumpRepeatTime_23() const { return ___jumpRepeatTime_23; }
	inline float* get_address_of_jumpRepeatTime_23() { return &___jumpRepeatTime_23; }
	inline void set_jumpRepeatTime_23(float value)
	{
		___jumpRepeatTime_23 = value;
	}

	inline static int32_t get_offset_of_jumpTimeout_24() { return static_cast<int32_t>(offsetof(ThirdPersonController_t2544474708, ___jumpTimeout_24)); }
	inline float get_jumpTimeout_24() const { return ___jumpTimeout_24; }
	inline float* get_address_of_jumpTimeout_24() { return &___jumpTimeout_24; }
	inline void set_jumpTimeout_24(float value)
	{
		___jumpTimeout_24 = value;
	}

	inline static int32_t get_offset_of_groundedTimeout_25() { return static_cast<int32_t>(offsetof(ThirdPersonController_t2544474708, ___groundedTimeout_25)); }
	inline float get_groundedTimeout_25() const { return ___groundedTimeout_25; }
	inline float* get_address_of_groundedTimeout_25() { return &___groundedTimeout_25; }
	inline void set_groundedTimeout_25(float value)
	{
		___groundedTimeout_25 = value;
	}

	inline static int32_t get_offset_of_lockCameraTimer_26() { return static_cast<int32_t>(offsetof(ThirdPersonController_t2544474708, ___lockCameraTimer_26)); }
	inline float get_lockCameraTimer_26() const { return ___lockCameraTimer_26; }
	inline float* get_address_of_lockCameraTimer_26() { return &___lockCameraTimer_26; }
	inline void set_lockCameraTimer_26(float value)
	{
		___lockCameraTimer_26 = value;
	}

	inline static int32_t get_offset_of_moveDirection_27() { return static_cast<int32_t>(offsetof(ThirdPersonController_t2544474708, ___moveDirection_27)); }
	inline Vector3_t3722313464  get_moveDirection_27() const { return ___moveDirection_27; }
	inline Vector3_t3722313464 * get_address_of_moveDirection_27() { return &___moveDirection_27; }
	inline void set_moveDirection_27(Vector3_t3722313464  value)
	{
		___moveDirection_27 = value;
	}

	inline static int32_t get_offset_of_verticalSpeed_28() { return static_cast<int32_t>(offsetof(ThirdPersonController_t2544474708, ___verticalSpeed_28)); }
	inline float get_verticalSpeed_28() const { return ___verticalSpeed_28; }
	inline float* get_address_of_verticalSpeed_28() { return &___verticalSpeed_28; }
	inline void set_verticalSpeed_28(float value)
	{
		___verticalSpeed_28 = value;
	}

	inline static int32_t get_offset_of_moveSpeed_29() { return static_cast<int32_t>(offsetof(ThirdPersonController_t2544474708, ___moveSpeed_29)); }
	inline float get_moveSpeed_29() const { return ___moveSpeed_29; }
	inline float* get_address_of_moveSpeed_29() { return &___moveSpeed_29; }
	inline void set_moveSpeed_29(float value)
	{
		___moveSpeed_29 = value;
	}

	inline static int32_t get_offset_of_collisionFlags_30() { return static_cast<int32_t>(offsetof(ThirdPersonController_t2544474708, ___collisionFlags_30)); }
	inline int32_t get_collisionFlags_30() const { return ___collisionFlags_30; }
	inline int32_t* get_address_of_collisionFlags_30() { return &___collisionFlags_30; }
	inline void set_collisionFlags_30(int32_t value)
	{
		___collisionFlags_30 = value;
	}

	inline static int32_t get_offset_of_jumping_31() { return static_cast<int32_t>(offsetof(ThirdPersonController_t2544474708, ___jumping_31)); }
	inline bool get_jumping_31() const { return ___jumping_31; }
	inline bool* get_address_of_jumping_31() { return &___jumping_31; }
	inline void set_jumping_31(bool value)
	{
		___jumping_31 = value;
	}

	inline static int32_t get_offset_of_jumpingReachedApex_32() { return static_cast<int32_t>(offsetof(ThirdPersonController_t2544474708, ___jumpingReachedApex_32)); }
	inline bool get_jumpingReachedApex_32() const { return ___jumpingReachedApex_32; }
	inline bool* get_address_of_jumpingReachedApex_32() { return &___jumpingReachedApex_32; }
	inline void set_jumpingReachedApex_32(bool value)
	{
		___jumpingReachedApex_32 = value;
	}

	inline static int32_t get_offset_of_movingBack_33() { return static_cast<int32_t>(offsetof(ThirdPersonController_t2544474708, ___movingBack_33)); }
	inline bool get_movingBack_33() const { return ___movingBack_33; }
	inline bool* get_address_of_movingBack_33() { return &___movingBack_33; }
	inline void set_movingBack_33(bool value)
	{
		___movingBack_33 = value;
	}

	inline static int32_t get_offset_of_isMoving_34() { return static_cast<int32_t>(offsetof(ThirdPersonController_t2544474708, ___isMoving_34)); }
	inline bool get_isMoving_34() const { return ___isMoving_34; }
	inline bool* get_address_of_isMoving_34() { return &___isMoving_34; }
	inline void set_isMoving_34(bool value)
	{
		___isMoving_34 = value;
	}

	inline static int32_t get_offset_of_walkTimeStart_35() { return static_cast<int32_t>(offsetof(ThirdPersonController_t2544474708, ___walkTimeStart_35)); }
	inline float get_walkTimeStart_35() const { return ___walkTimeStart_35; }
	inline float* get_address_of_walkTimeStart_35() { return &___walkTimeStart_35; }
	inline void set_walkTimeStart_35(float value)
	{
		___walkTimeStart_35 = value;
	}

	inline static int32_t get_offset_of_lastJumpButtonTime_36() { return static_cast<int32_t>(offsetof(ThirdPersonController_t2544474708, ___lastJumpButtonTime_36)); }
	inline float get_lastJumpButtonTime_36() const { return ___lastJumpButtonTime_36; }
	inline float* get_address_of_lastJumpButtonTime_36() { return &___lastJumpButtonTime_36; }
	inline void set_lastJumpButtonTime_36(float value)
	{
		___lastJumpButtonTime_36 = value;
	}

	inline static int32_t get_offset_of_lastJumpTime_37() { return static_cast<int32_t>(offsetof(ThirdPersonController_t2544474708, ___lastJumpTime_37)); }
	inline float get_lastJumpTime_37() const { return ___lastJumpTime_37; }
	inline float* get_address_of_lastJumpTime_37() { return &___lastJumpTime_37; }
	inline void set_lastJumpTime_37(float value)
	{
		___lastJumpTime_37 = value;
	}

	inline static int32_t get_offset_of_lastJumpStartHeight_38() { return static_cast<int32_t>(offsetof(ThirdPersonController_t2544474708, ___lastJumpStartHeight_38)); }
	inline float get_lastJumpStartHeight_38() const { return ___lastJumpStartHeight_38; }
	inline float* get_address_of_lastJumpStartHeight_38() { return &___lastJumpStartHeight_38; }
	inline void set_lastJumpStartHeight_38(float value)
	{
		___lastJumpStartHeight_38 = value;
	}

	inline static int32_t get_offset_of_inAirVelocity_39() { return static_cast<int32_t>(offsetof(ThirdPersonController_t2544474708, ___inAirVelocity_39)); }
	inline Vector3_t3722313464  get_inAirVelocity_39() const { return ___inAirVelocity_39; }
	inline Vector3_t3722313464 * get_address_of_inAirVelocity_39() { return &___inAirVelocity_39; }
	inline void set_inAirVelocity_39(Vector3_t3722313464  value)
	{
		___inAirVelocity_39 = value;
	}

	inline static int32_t get_offset_of_lastGroundedTime_40() { return static_cast<int32_t>(offsetof(ThirdPersonController_t2544474708, ___lastGroundedTime_40)); }
	inline float get_lastGroundedTime_40() const { return ___lastGroundedTime_40; }
	inline float* get_address_of_lastGroundedTime_40() { return &___lastGroundedTime_40; }
	inline void set_lastGroundedTime_40(float value)
	{
		___lastGroundedTime_40 = value;
	}

	inline static int32_t get_offset_of_isControllable_41() { return static_cast<int32_t>(offsetof(ThirdPersonController_t2544474708, ___isControllable_41)); }
	inline bool get_isControllable_41() const { return ___isControllable_41; }
	inline bool* get_address_of_isControllable_41() { return &___isControllable_41; }
	inline void set_isControllable_41(bool value)
	{
		___isControllable_41 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // THIRDPERSONCONTROLLER_T2544474708_H


// !!0 UnityEngine.Component::GetComponent<System.Object>()
extern "C"  RuntimeObject * Component_GetComponent_TisRuntimeObject_m2906321015_gshared (Component_t1923634451 * __this, const RuntimeMethod* method);

// System.Void UnityEngine.MonoBehaviour::.ctor()
extern "C"  void MonoBehaviour__ctor_m1579109191 (MonoBehaviour_t3962482529 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Vector3::get_zero()
extern "C"  Vector3_t3722313464  Vector3_get_zero_m1409827619 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Object::op_Implicit(UnityEngine.Object)
extern "C"  bool Object_op_Implicit_m3574996620 (RuntimeObject * __this /* static, unused */, Object_t631007953 * p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Camera UnityEngine.Camera::get_main()
extern "C"  Camera_t4157153871 * Camera_get_main_m3643453163 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Transform UnityEngine.Component::get_transform()
extern "C"  Transform_t3600365921 * Component_get_transform_m3162698980 (Component_t1923634451 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Debug::Log(System.Object)
extern "C"  void Debug_Log_m4051431634 (RuntimeObject * __this /* static, unused */, RuntimeObject * p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Behaviour::set_enabled(System.Boolean)
extern "C"  void Behaviour_set_enabled_m20417929 (Behaviour_t1437897464 * __this, bool p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Type System.Type::GetTypeFromHandle(System.RuntimeTypeHandle)
extern "C"  Type_t * Type_GetTypeFromHandle_m1620074514 (RuntimeObject * __this /* static, unused */, RuntimeTypeHandle_t3027515415  p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Component UnityEngine.Component::GetComponent(System.Type)
extern "C"  Component_t1923634451 * Component_GetComponent_m886226392 (Component_t1923634451 * __this, Type_t * p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// !!0 UnityEngine.Component::GetComponent<UnityEngine.Collider>()
#define Component_GetComponent_TisCollider_t1773347010_m1045602456(__this, method) ((  Collider_t1773347010 * (*) (Component_t1923634451 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m2906321015_gshared)(__this, method)
// UnityEngine.Bounds UnityEngine.Collider::get_bounds()
extern "C"  Bounds_t2266837910  Collider_get_bounds_m2952418672 (Collider_t1773347010 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Bounds::get_center()
extern "C"  Vector3_t3722313464  Bounds_get_center_m1418449258 (Bounds_t2266837910 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Transform::get_position()
extern "C"  Vector3_t3722313464  Transform_get_position_m36019626 (Transform_t3600365921 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Subtraction(UnityEngine.Vector3,UnityEngine.Vector3)
extern "C"  Vector3_t3722313464  Vector3_op_Subtraction_m3073674971 (RuntimeObject * __this /* static, unused */, Vector3_t3722313464  p0, Vector3_t3722313464  p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Bounds::get_max()
extern "C"  Vector3_t3722313464  Bounds_get_max_m3756577669 (Bounds_t2266837910 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Addition(UnityEngine.Vector3,UnityEngine.Vector3)
extern "C"  Vector3_t3722313464  Vector3_op_Addition_m779775034 (RuntimeObject * __this /* static, unused */, Vector3_t3722313464  p0, Vector3_t3722313464  p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Debug::DrawLine(UnityEngine.Vector3,UnityEngine.Vector3)
extern "C"  void Debug_DrawLine_m2464833410 (RuntimeObject * __this /* static, unused */, Vector3_t3722313464  p0, Vector3_t3722313464  p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Mathf::Repeat(System.Single,System.Single)
extern "C"  float Mathf_Repeat_m1502810009 (RuntimeObject * __this /* static, unused */, float p0, float p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Transform::get_eulerAngles()
extern "C"  Vector3_t3722313464  Transform_get_eulerAngles_m2743581774 (Transform_t3600365921 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Input::GetButton(System.String)
extern "C"  bool Input_GetButton_m2064261504 (RuntimeObject * __this /* static, unused */, String_t* p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Mathf::SmoothDampAngle(System.Single,System.Single,System.Single&,System.Single,System.Single)
extern "C"  float Mathf_SmoothDampAngle_m2401140973 (RuntimeObject * __this /* static, unused */, float p0, float p1, float* p2, float p3, float p4, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Mathf::SmoothDamp(System.Single,System.Single,System.Single&,System.Single)
extern "C"  float Mathf_SmoothDamp_m3171073017 (RuntimeObject * __this /* static, unused */, float p0, float p1, float* p2, float p3, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Quaternion UnityEngine.Quaternion::Euler(System.Single,System.Single,System.Single)
extern "C"  Quaternion_t2301928331  Quaternion_Euler_m3049309462 (RuntimeObject * __this /* static, unused */, float p0, float p1, float p2, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Transform::set_position(UnityEngine.Vector3)
extern "C"  void Transform_set_position_m3387557959 (Transform_t3600365921 * __this, Vector3_t3722313464  p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Vector3::get_back()
extern "C"  Vector3_t3722313464  Vector3_get_back_m4077847766 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Quaternion::op_Multiply(UnityEngine.Quaternion,UnityEngine.Vector3)
extern "C"  Vector3_t3722313464  Quaternion_op_Multiply_m2607404835 (RuntimeObject * __this /* static, unused */, Quaternion_t2301928331  p0, Vector3_t3722313464  p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Multiply(UnityEngine.Vector3,System.Single)
extern "C"  Vector3_t3722313464  Vector3_op_Multiply_m3376773913 (RuntimeObject * __this /* static, unused */, Vector3_t3722313464  p0, float p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
extern "C"  void Vector3__ctor_m3353183577 (Vector3_t3722313464 * __this, float p0, float p1, float p2, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Quaternion UnityEngine.Quaternion::LookRotation(UnityEngine.Vector3)
extern "C"  Quaternion_t2301928331  Quaternion_LookRotation_m4040767668 (RuntimeObject * __this /* static, unused */, Vector3_t3722313464  p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Vector3::get_forward()
extern "C"  Vector3_t3722313464  Vector3_get_forward_m3100859705 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Vector3::get_down()
extern "C"  Vector3_t3722313464  Vector3_get_down_m3781355428 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Quaternion UnityEngine.Quaternion::op_Multiply(UnityEngine.Quaternion,UnityEngine.Quaternion)
extern "C"  Quaternion_t2301928331  Quaternion_op_Multiply_m1294064023 (RuntimeObject * __this /* static, unused */, Quaternion_t2301928331  p0, Quaternion_t2301928331  p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Transform::set_rotation(UnityEngine.Quaternion)
extern "C"  void Transform_set_rotation_m3524318132 (Transform_t3600365921 * __this, Quaternion_t2301928331  p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// !!0 UnityEngine.Component::GetComponent<UnityEngine.Camera>()
#define Component_GetComponent_TisCamera_t4157153871_m1557787507(__this, method) ((  Camera_t4157153871 * (*) (Component_t1923634451 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m2906321015_gshared)(__this, method)
// UnityEngine.Ray UnityEngine.Camera::ViewportPointToRay(UnityEngine.Vector3)
extern "C"  Ray_t3785851493  Camera_ViewportPointToRay_m4164196265 (Camera_t4157153871 * __this, Vector3_t3722313464  p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Ray::GetPoint(System.Single)
extern "C"  Vector3_t3722313464  Ray_GetPoint_m1852405345 (Ray_t3785851493 * __this, float p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Ray::get_direction()
extern "C"  Vector3_t3722313464  Ray_get_direction_m761601601 (Ray_t3785851493 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Vector3::Angle(UnityEngine.Vector3,UnityEngine.Vector3)
extern "C"  float Vector3_Angle_m3731191531 (RuntimeObject * __this /* static, unused */, Vector3_t3722313464  p0, Vector3_t3722313464  p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Quaternion UnityEngine.Transform::get_rotation()
extern "C"  Quaternion_t2301928331  Transform_get_rotation_m3502953881 (Transform_t3600365921 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Transform::TransformDirection(UnityEngine.Vector3)
extern "C"  Vector3_t3722313464  Transform_TransformDirection_m3784028109 (Transform_t3600365921 * __this, Vector3_t3722313464  p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Vector3::get_normalized()
extern "C"  Vector3_t3722313464  Vector3_get_normalized_m2454957984 (Vector3_t3722313464 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Input::GetAxisRaw(System.String)
extern "C"  float Input_GetAxisRaw_m2316819917 (RuntimeObject * __this /* static, unused */, String_t* p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Multiply(System.Single,UnityEngine.Vector3)
extern "C"  Vector3_t3722313464  Vector3_op_Multiply_m2104357790 (RuntimeObject * __this /* static, unused */, float p0, Vector3_t3722313464  p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Time::get_deltaTime()
extern "C"  float Time_get_deltaTime_m372706562 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Vector3::op_Inequality(UnityEngine.Vector3,UnityEngine.Vector3)
extern "C"  bool Vector3_op_Inequality_m315980366 (RuntimeObject * __this /* static, unused */, Vector3_t3722313464  p0, Vector3_t3722313464  p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Vector3::RotateTowards(UnityEngine.Vector3,UnityEngine.Vector3,System.Single,System.Single)
extern "C"  Vector3_t3722313464  Vector3_RotateTowards_m4112951104 (RuntimeObject * __this /* static, unused */, Vector3_t3722313464  p0, Vector3_t3722313464  p1, float p2, float p3, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Vector3::get_magnitude()
extern "C"  float Vector3_get_magnitude_m27958459 (Vector3_t3722313464 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Mathf::Min(System.Single,System.Single)
extern "C"  float Mathf_Min_m1073399594 (RuntimeObject * __this /* static, unused */, float p0, float p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Input::GetKey(UnityEngine.KeyCode)
extern "C"  bool Input_GetKey_m3736388334 (RuntimeObject * __this /* static, unused */, int32_t p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Time::get_time()
extern "C"  float Time_get_time_m2907476221 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Mathf::Lerp(System.Single,System.Single,System.Single)
extern "C"  float Mathf_Lerp_m1004423579 (RuntimeObject * __this /* static, unused */, float p0, float p1, float p2, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Component::SendMessage(System.String,UnityEngine.SendMessageOptions)
extern "C"  void Component_SendMessage_m1441147224 (Component_t1923634451 * __this, String_t* p0, int32_t p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Input::ResetInputAxes()
extern "C"  void Input_ResetInputAxes_m2194974130 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Input::GetButtonDown(System.String)
extern "C"  bool Input_GetButtonDown_m3074252807 (RuntimeObject * __this /* static, unused */, String_t* p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.CollisionFlags UnityEngine.CharacterController::Move(UnityEngine.Vector3)
extern "C"  int32_t CharacterController_Move_m1547317252 (CharacterController_t1138636865 * __this, Vector3_t3722313464  p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.Object::get_name()
extern "C"  String_t* Object_get_name_m4211327027 (Object_t631007953 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.AnimationState UnityEngine.Animation::get_Item(System.String)
extern "C"  AnimationState_t1108360407 * Animation_get_Item_m2435218778 (Animation_t3648466861 * __this, String_t* p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AnimationState::set_speed(System.Single)
extern "C"  void AnimationState_set_speed_m2787468711 (AnimationState_t1108360407 * __this, float p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AnimationState::set_wrapMode(UnityEngine.WrapMode)
extern "C"  void AnimationState_set_wrapMode_m932751232 (AnimationState_t1108360407 * __this, int32_t p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Animation::CrossFade(System.String)
extern "C"  void Animation_CrossFade_m2177301990 (Animation_t3648466861 * __this, String_t* p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.CharacterController::get_velocity()
extern "C"  Vector3_t3722313464  CharacterController_get_velocity_m3517335080 (CharacterController_t1138636865 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Vector3::get_sqrMagnitude()
extern "C"  float Vector3_get_sqrMagnitude_m1474274574 (Vector3_t3722313464 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Mathf::Clamp(System.Single,System.Single,System.Single)
extern "C"  float Mathf_Clamp_m3350697880 (RuntimeObject * __this /* static, unused */, float p0, float p1, float p2, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.ControllerColliderHit::get_moveDirection()
extern "C"  Vector3_t3722313464  ControllerColliderHit_get_moveDirection_m1770146420 (ControllerColliderHit_t240592346 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
extern "C"  GameObject_t1113636619 * Component_get_gameObject_m442555142 (Component_t1923634451 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GameObject::set_tag(System.String)
extern "C"  void GameObject_set_tag_m2353670106 (GameObject_t1113636619 * __this, String_t* p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void ThirdPersonCamera::.ctor()
extern "C"  void ThirdPersonCamera__ctor_m1657846641 (ThirdPersonCamera_t2998681409 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ThirdPersonCamera__ctor_m1657846641_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
		__this->set_distance_4((7.0f));
		__this->set_height_5((3.0f));
		__this->set_angularSmoothLag_6((0.3f));
		__this->set_angularMaxSpeed_7((15.0f));
		__this->set_heightSmoothLag_8((0.3f));
		__this->set_snapSmoothLag_9((0.2f));
		__this->set_snapMaxSpeed_10((720.0f));
		__this->set_clampHeadPositionScreenSpace_11((0.75f));
		__this->set_lockCameraTimeout_12((0.2f));
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_t3722313464_il2cpp_TypeInfo_var);
		Vector3_t3722313464  L_0 = Vector3_get_zero_m1409827619(NULL /*static, unused*/, /*hidden argument*/NULL);
		__this->set_headOffset_13(L_0);
		Vector3_t3722313464  L_1 = Vector3_get_zero_m1409827619(NULL /*static, unused*/, /*hidden argument*/NULL);
		__this->set_centerOffset_14(L_1);
		__this->set_targetHeight_19((100000.0f));
		return;
	}
}
// System.Void ThirdPersonCamera::Awake()
extern "C"  void ThirdPersonCamera_Awake_m3241439730 (ThirdPersonCamera_t2998681409 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ThirdPersonCamera_Awake_m3241439730_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	CharacterController_t1138636865 * V_0 = NULL;
	Bounds_t2266837910  V_1;
	memset(&V_1, 0, sizeof(V_1));
	Bounds_t2266837910  V_2;
	memset(&V_2, 0, sizeof(V_2));
	Vector3_t3722313464  V_3;
	memset(&V_3, 0, sizeof(V_3));
	Vector3_t3722313464  V_4;
	memset(&V_4, 0, sizeof(V_4));
	{
		Transform_t3600365921 * L_0 = __this->get_cameraTransform_2();
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_1 = Object_op_Implicit_m3574996620(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		if (L_1)
		{
			goto IL_002f;
		}
	}
	{
		Camera_t4157153871 * L_2 = Camera_get_main_m3643453163(NULL /*static, unused*/, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_3 = Object_op_Implicit_m3574996620(NULL /*static, unused*/, L_2, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_002f;
		}
	}
	{
		Camera_t4157153871 * L_4 = Camera_get_main_m3643453163(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_4);
		Transform_t3600365921 * L_5 = Component_get_transform_m3162698980(L_4, /*hidden argument*/NULL);
		__this->set_cameraTransform_2(L_5);
	}

IL_002f:
	{
		Transform_t3600365921 * L_6 = __this->get_cameraTransform_2();
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_7 = Object_op_Implicit_m3574996620(NULL /*static, unused*/, L_6, /*hidden argument*/NULL);
		if (L_7)
		{
			goto IL_0050;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
		Debug_Log_m4051431634(NULL /*static, unused*/, _stringLiteral3436217699, /*hidden argument*/NULL);
		Behaviour_set_enabled_m20417929(__this, (bool)0, /*hidden argument*/NULL);
	}

IL_0050:
	{
		Transform_t3600365921 * L_8 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		__this->set__target_3(L_8);
		Transform_t3600365921 * L_9 = __this->get__target_3();
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_10 = Object_op_Implicit_m3574996620(NULL /*static, unused*/, L_9, /*hidden argument*/NULL);
		if (!L_10)
		{
			goto IL_008c;
		}
	}
	{
		Transform_t3600365921 * L_11 = __this->get__target_3();
		RuntimeTypeHandle_t3027515415  L_12 = { reinterpret_cast<intptr_t> (ThirdPersonController_t2544474708_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_13 = Type_GetTypeFromHandle_m1620074514(NULL /*static, unused*/, L_12, /*hidden argument*/NULL);
		NullCheck(L_11);
		Component_t1923634451 * L_14 = Component_GetComponent_m886226392(L_11, L_13, /*hidden argument*/NULL);
		__this->set_controller_18(((ThirdPersonController_t2544474708 *)CastclassClass((RuntimeObject*)L_14, ThirdPersonController_t2544474708_il2cpp_TypeInfo_var)));
	}

IL_008c:
	{
		ThirdPersonController_t2544474708 * L_15 = __this->get_controller_18();
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_16 = Object_op_Implicit_m3574996620(NULL /*static, unused*/, L_15, /*hidden argument*/NULL);
		if (!L_16)
		{
			goto IL_0118;
		}
	}
	{
		Transform_t3600365921 * L_17 = __this->get__target_3();
		NullCheck(L_17);
		Collider_t1773347010 * L_18 = Component_GetComponent_TisCollider_t1773347010_m1045602456(L_17, /*hidden argument*/Component_GetComponent_TisCollider_t1773347010_m1045602456_RuntimeMethod_var);
		V_0 = ((CharacterController_t1138636865 *)CastclassSealed((RuntimeObject*)L_18, CharacterController_t1138636865_il2cpp_TypeInfo_var));
		CharacterController_t1138636865 * L_19 = V_0;
		NullCheck(L_19);
		Bounds_t2266837910  L_20 = Collider_get_bounds_m2952418672(L_19, /*hidden argument*/NULL);
		V_1 = L_20;
		Vector3_t3722313464  L_21 = Bounds_get_center_m1418449258((&V_1), /*hidden argument*/NULL);
		Transform_t3600365921 * L_22 = __this->get__target_3();
		NullCheck(L_22);
		Vector3_t3722313464  L_23 = Transform_get_position_m36019626(L_22, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_t3722313464_il2cpp_TypeInfo_var);
		Vector3_t3722313464  L_24 = Vector3_op_Subtraction_m3073674971(NULL /*static, unused*/, L_21, L_23, /*hidden argument*/NULL);
		__this->set_centerOffset_14(L_24);
		Vector3_t3722313464  L_25 = __this->get_centerOffset_14();
		__this->set_headOffset_13(L_25);
		Vector3_t3722313464 * L_26 = __this->get_address_of_headOffset_13();
		CharacterController_t1138636865 * L_27 = V_0;
		NullCheck(L_27);
		Bounds_t2266837910  L_28 = Collider_get_bounds_m2952418672(L_27, /*hidden argument*/NULL);
		V_2 = L_28;
		Vector3_t3722313464  L_29 = Bounds_get_max_m3756577669((&V_2), /*hidden argument*/NULL);
		V_3 = L_29;
		float L_30 = (&V_3)->get_y_2();
		Transform_t3600365921 * L_31 = __this->get__target_3();
		NullCheck(L_31);
		Vector3_t3722313464  L_32 = Transform_get_position_m36019626(L_31, /*hidden argument*/NULL);
		V_4 = L_32;
		float L_33 = (&V_4)->get_y_2();
		L_26->set_y_2(((float)il2cpp_codegen_subtract((float)L_30, (float)L_33)));
		goto IL_0122;
	}

IL_0118:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
		Debug_Log_m4051431634(NULL /*static, unused*/, _stringLiteral3947371250, /*hidden argument*/NULL);
	}

IL_0122:
	{
		Transform_t3600365921 * L_34 = __this->get__target_3();
		Vector3_t3722313464  L_35 = __this->get_centerOffset_14();
		VirtActionInvoker2< Transform_t3600365921 *, Vector3_t3722313464  >::Invoke(9 /* System.Void ThirdPersonCamera::Cut(UnityEngine.Transform,UnityEngine.Vector3) */, __this, L_34, L_35);
		return;
	}
}
// System.Void ThirdPersonCamera::DebugDrawStuff()
extern "C"  void ThirdPersonCamera_DebugDrawStuff_m2134478410 (ThirdPersonCamera_t2998681409 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ThirdPersonCamera_DebugDrawStuff_m2134478410_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Transform_t3600365921 * L_0 = __this->get__target_3();
		NullCheck(L_0);
		Vector3_t3722313464  L_1 = Transform_get_position_m36019626(L_0, /*hidden argument*/NULL);
		Transform_t3600365921 * L_2 = __this->get__target_3();
		NullCheck(L_2);
		Vector3_t3722313464  L_3 = Transform_get_position_m36019626(L_2, /*hidden argument*/NULL);
		Vector3_t3722313464  L_4 = __this->get_headOffset_13();
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_t3722313464_il2cpp_TypeInfo_var);
		Vector3_t3722313464  L_5 = Vector3_op_Addition_m779775034(NULL /*static, unused*/, L_3, L_4, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
		Debug_DrawLine_m2464833410(NULL /*static, unused*/, L_1, L_5, /*hidden argument*/NULL);
		return;
	}
}
// System.Single ThirdPersonCamera::AngleDistance(System.Single,System.Single)
extern "C"  float ThirdPersonCamera_AngleDistance_m4249521905 (ThirdPersonCamera_t2998681409 * __this, float ___a0, float ___b1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ThirdPersonCamera_AngleDistance_m4249521905_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		float L_0 = ___a0;
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t3464937446_il2cpp_TypeInfo_var);
		float L_1 = Mathf_Repeat_m1502810009(NULL /*static, unused*/, L_0, (((float)((float)((int32_t)360)))), /*hidden argument*/NULL);
		___a0 = L_1;
		float L_2 = ___b1;
		float L_3 = Mathf_Repeat_m1502810009(NULL /*static, unused*/, L_2, (((float)((float)((int32_t)360)))), /*hidden argument*/NULL);
		___b1 = L_3;
		float L_4 = ___b1;
		float L_5 = ___a0;
		float L_6 = fabsf(((float)il2cpp_codegen_subtract((float)L_4, (float)L_5)));
		return L_6;
	}
}
// System.Void ThirdPersonCamera::Apply(UnityEngine.Transform,UnityEngine.Vector3)
extern "C"  void ThirdPersonCamera_Apply_m1270392762 (ThirdPersonCamera_t2998681409 * __this, Transform_t3600365921 * ___dummyTarget0, Vector3_t3722313464  ___dummyCenter1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ThirdPersonCamera_Apply_m1270392762_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t3722313464  V_0;
	memset(&V_0, 0, sizeof(V_0));
	Vector3_t3722313464  V_1;
	memset(&V_1, 0, sizeof(V_1));
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	float V_4 = 0.0f;
	float V_5 = 0.0f;
	float V_6 = 0.0f;
	Quaternion_t2301928331  V_7;
	memset(&V_7, 0, sizeof(V_7));
	float V_8 = 0.0f;
	Vector3_t3722313464  V_9;
	memset(&V_9, 0, sizeof(V_9));
	Vector3_t3722313464  V_10;
	memset(&V_10, 0, sizeof(V_10));
	Vector3_t3722313464  V_11;
	memset(&V_11, 0, sizeof(V_11));
	Vector3_t3722313464  V_12;
	memset(&V_12, 0, sizeof(V_12));
	float V_13 = 0.0f;
	Vector3_t3722313464  V_14;
	memset(&V_14, 0, sizeof(V_14));
	{
		ThirdPersonController_t2544474708 * L_0 = __this->get_controller_18();
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_1 = Object_op_Implicit_m3574996620(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		if (L_1)
		{
			goto IL_0015;
		}
	}
	{
		goto IL_0251;
	}

IL_0015:
	{
		Transform_t3600365921 * L_2 = __this->get__target_3();
		NullCheck(L_2);
		Vector3_t3722313464  L_3 = Transform_get_position_m36019626(L_2, /*hidden argument*/NULL);
		Vector3_t3722313464  L_4 = __this->get_centerOffset_14();
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_t3722313464_il2cpp_TypeInfo_var);
		Vector3_t3722313464  L_5 = Vector3_op_Addition_m779775034(NULL /*static, unused*/, L_3, L_4, /*hidden argument*/NULL);
		V_0 = L_5;
		Transform_t3600365921 * L_6 = __this->get__target_3();
		NullCheck(L_6);
		Vector3_t3722313464  L_7 = Transform_get_position_m36019626(L_6, /*hidden argument*/NULL);
		Vector3_t3722313464  L_8 = __this->get_headOffset_13();
		Vector3_t3722313464  L_9 = Vector3_op_Addition_m779775034(NULL /*static, unused*/, L_7, L_8, /*hidden argument*/NULL);
		V_1 = L_9;
		Transform_t3600365921 * L_10 = __this->get__target_3();
		NullCheck(L_10);
		Vector3_t3722313464  L_11 = Transform_get_eulerAngles_m2743581774(L_10, /*hidden argument*/NULL);
		V_10 = L_11;
		float L_12 = (&V_10)->get_y_2();
		V_2 = L_12;
		Transform_t3600365921 * L_13 = __this->get_cameraTransform_2();
		NullCheck(L_13);
		Vector3_t3722313464  L_14 = Transform_get_eulerAngles_m2743581774(L_13, /*hidden argument*/NULL);
		V_11 = L_14;
		float L_15 = (&V_11)->get_y_2();
		V_3 = L_15;
		float L_16 = V_2;
		V_4 = L_16;
		IL2CPP_RUNTIME_CLASS_INIT(Input_t1431474628_il2cpp_TypeInfo_var);
		bool L_17 = Input_GetButton_m2064261504(NULL /*static, unused*/, _stringLiteral3228161486, /*hidden argument*/NULL);
		if (!L_17)
		{
			goto IL_0086;
		}
	}
	{
		__this->set_snap_17((bool)1);
	}

IL_0086:
	{
		bool L_18 = __this->get_snap_17();
		if (!L_18)
		{
			goto IL_00ca;
		}
	}
	{
		float L_19 = V_3;
		float L_20 = V_2;
		float L_21 = VirtFuncInvoker2< float, float, float >::Invoke(6 /* System.Single ThirdPersonCamera::AngleDistance(System.Single,System.Single) */, __this, L_19, L_20);
		if ((((float)L_21) >= ((float)(3.0f))))
		{
			goto IL_00aa;
		}
	}
	{
		__this->set_snap_17((bool)0);
	}

IL_00aa:
	{
		float L_22 = V_3;
		float L_23 = V_4;
		float* L_24 = __this->get_address_of_angleVelocity_16();
		float L_25 = __this->get_snapSmoothLag_9();
		float L_26 = __this->get_snapMaxSpeed_10();
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t3464937446_il2cpp_TypeInfo_var);
		float L_27 = Mathf_SmoothDampAngle_m2401140973(NULL /*static, unused*/, L_22, L_23, L_24, L_25, L_26, /*hidden argument*/NULL);
		V_3 = L_27;
		goto IL_012d;
	}

IL_00ca:
	{
		ThirdPersonController_t2544474708 * L_28 = __this->get_controller_18();
		NullCheck(L_28);
		float L_29 = VirtFuncInvoker0< float >::Invoke(17 /* System.Single ThirdPersonController::GetLockCameraTimer() */, L_28);
		float L_30 = __this->get_lockCameraTimeout_12();
		if ((((float)L_29) >= ((float)L_30)))
		{
			goto IL_00e3;
		}
	}
	{
		float L_31 = V_3;
		V_4 = L_31;
	}

IL_00e3:
	{
		float L_32 = V_3;
		float L_33 = V_4;
		float L_34 = VirtFuncInvoker2< float, float, float >::Invoke(6 /* System.Single ThirdPersonCamera::AngleDistance(System.Single,System.Single) */, __this, L_32, L_33);
		if ((((float)L_34) <= ((float)(((float)((float)((int32_t)160)))))))
		{
			goto IL_0112;
		}
	}
	{
		ThirdPersonController_t2544474708 * L_35 = __this->get_controller_18();
		NullCheck(L_35);
		bool L_36 = VirtFuncInvoker0< bool >::Invoke(16 /* System.Boolean ThirdPersonController::IsMovingBackwards() */, L_35);
		if (!L_36)
		{
			goto IL_0112;
		}
	}
	{
		float L_37 = V_4;
		V_4 = ((float)il2cpp_codegen_add((float)L_37, (float)(((float)((float)((int32_t)180))))));
	}

IL_0112:
	{
		float L_38 = V_3;
		float L_39 = V_4;
		float* L_40 = __this->get_address_of_angleVelocity_16();
		float L_41 = __this->get_angularSmoothLag_6();
		float L_42 = __this->get_angularMaxSpeed_7();
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t3464937446_il2cpp_TypeInfo_var);
		float L_43 = Mathf_SmoothDampAngle_m2401140973(NULL /*static, unused*/, L_38, L_39, L_40, L_41, L_42, /*hidden argument*/NULL);
		V_3 = L_43;
	}

IL_012d:
	{
		ThirdPersonController_t2544474708 * L_44 = __this->get_controller_18();
		NullCheck(L_44);
		bool L_45 = VirtFuncInvoker0< bool >::Invoke(13 /* System.Boolean ThirdPersonController::IsJumping() */, L_44);
		if (!L_45)
		{
			goto IL_0183;
		}
	}
	{
		float L_46 = (&V_0)->get_y_2();
		float L_47 = __this->get_height_5();
		V_5 = ((float)il2cpp_codegen_add((float)L_46, (float)L_47));
		float L_48 = V_5;
		float L_49 = __this->get_targetHeight_19();
		if ((((float)L_48) < ((float)L_49)))
		{
			goto IL_016a;
		}
	}
	{
		float L_50 = V_5;
		float L_51 = __this->get_targetHeight_19();
		if ((((float)((float)il2cpp_codegen_subtract((float)L_50, (float)L_51))) <= ((float)(((float)((float)5))))))
		{
			goto IL_017e;
		}
	}

IL_016a:
	{
		float L_52 = (&V_0)->get_y_2();
		float L_53 = __this->get_height_5();
		__this->set_targetHeight_19(((float)il2cpp_codegen_add((float)L_52, (float)L_53)));
	}

IL_017e:
	{
		goto IL_0197;
	}

IL_0183:
	{
		float L_54 = (&V_0)->get_y_2();
		float L_55 = __this->get_height_5();
		__this->set_targetHeight_19(((float)il2cpp_codegen_add((float)L_54, (float)L_55)));
	}

IL_0197:
	{
		Transform_t3600365921 * L_56 = __this->get_cameraTransform_2();
		NullCheck(L_56);
		Vector3_t3722313464  L_57 = Transform_get_position_m36019626(L_56, /*hidden argument*/NULL);
		V_12 = L_57;
		float L_58 = (&V_12)->get_y_2();
		V_6 = L_58;
		float L_59 = V_6;
		float L_60 = __this->get_targetHeight_19();
		float* L_61 = __this->get_address_of_heightVelocity_15();
		float L_62 = __this->get_heightSmoothLag_8();
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t3464937446_il2cpp_TypeInfo_var);
		float L_63 = Mathf_SmoothDamp_m3171073017(NULL /*static, unused*/, L_59, L_60, L_61, L_62, /*hidden argument*/NULL);
		V_6 = L_63;
		float L_64 = V_3;
		IL2CPP_RUNTIME_CLASS_INIT(Quaternion_t2301928331_il2cpp_TypeInfo_var);
		Quaternion_t2301928331  L_65 = Quaternion_Euler_m3049309462(NULL /*static, unused*/, (((float)((float)0))), L_64, (((float)((float)0))), /*hidden argument*/NULL);
		V_7 = L_65;
		Transform_t3600365921 * L_66 = __this->get_cameraTransform_2();
		Vector3_t3722313464  L_67 = V_0;
		NullCheck(L_66);
		Transform_set_position_m3387557959(L_66, L_67, /*hidden argument*/NULL);
		Transform_t3600365921 * L_68 = __this->get_cameraTransform_2();
		Transform_t3600365921 * L_69 = __this->get_cameraTransform_2();
		NullCheck(L_69);
		Vector3_t3722313464  L_70 = Transform_get_position_m36019626(L_69, /*hidden argument*/NULL);
		Quaternion_t2301928331  L_71 = V_7;
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_t3722313464_il2cpp_TypeInfo_var);
		Vector3_t3722313464  L_72 = Vector3_get_back_m4077847766(NULL /*static, unused*/, /*hidden argument*/NULL);
		Vector3_t3722313464  L_73 = Quaternion_op_Multiply_m2607404835(NULL /*static, unused*/, L_71, L_72, /*hidden argument*/NULL);
		float L_74 = __this->get_distance_4();
		Vector3_t3722313464  L_75 = Vector3_op_Multiply_m3376773913(NULL /*static, unused*/, L_73, L_74, /*hidden argument*/NULL);
		Vector3_t3722313464  L_76 = Vector3_op_Addition_m779775034(NULL /*static, unused*/, L_70, L_75, /*hidden argument*/NULL);
		NullCheck(L_68);
		Transform_set_position_m3387557959(L_68, L_76, /*hidden argument*/NULL);
		float L_77 = V_6;
		float L_78 = L_77;
		V_8 = L_78;
		Transform_t3600365921 * L_79 = __this->get_cameraTransform_2();
		NullCheck(L_79);
		Vector3_t3722313464  L_80 = Transform_get_position_m36019626(L_79, /*hidden argument*/NULL);
		Vector3_t3722313464  L_81 = L_80;
		V_9 = L_81;
		float L_82 = V_8;
		float L_83 = L_82;
		V_13 = L_83;
		(&V_9)->set_y_2(L_83);
		float L_84 = V_13;
		Transform_t3600365921 * L_85 = __this->get_cameraTransform_2();
		Vector3_t3722313464  L_86 = V_9;
		Vector3_t3722313464  L_87 = L_86;
		V_14 = L_87;
		NullCheck(L_85);
		Transform_set_position_m3387557959(L_85, L_87, /*hidden argument*/NULL);
		Vector3_t3722313464  L_88 = V_14;
		Vector3_t3722313464  L_89 = V_0;
		Vector3_t3722313464  L_90 = V_1;
		VirtActionInvoker2< Vector3_t3722313464 , Vector3_t3722313464  >::Invoke(10 /* System.Void ThirdPersonCamera::SetUpRotation(UnityEngine.Vector3,UnityEngine.Vector3) */, __this, L_89, L_90);
	}

IL_0251:
	{
		return;
	}
}
// System.Void ThirdPersonCamera::LateUpdate()
extern "C"  void ThirdPersonCamera_LateUpdate_m2932403482 (ThirdPersonCamera_t2998681409 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ThirdPersonCamera_LateUpdate_m2932403482_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Transform_t3600365921 * L_0 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_t3722313464_il2cpp_TypeInfo_var);
		Vector3_t3722313464  L_1 = Vector3_get_zero_m1409827619(NULL /*static, unused*/, /*hidden argument*/NULL);
		VirtActionInvoker2< Transform_t3600365921 *, Vector3_t3722313464  >::Invoke(7 /* System.Void ThirdPersonCamera::Apply(UnityEngine.Transform,UnityEngine.Vector3) */, __this, L_0, L_1);
		return;
	}
}
// System.Void ThirdPersonCamera::Cut(UnityEngine.Transform,UnityEngine.Vector3)
extern "C"  void ThirdPersonCamera_Cut_m2748638384 (ThirdPersonCamera_t2998681409 * __this, Transform_t3600365921 * ___dummyTarget0, Vector3_t3722313464  ___dummyCenter1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ThirdPersonCamera_Cut_m2748638384_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	{
		float L_0 = __this->get_heightSmoothLag_8();
		V_0 = L_0;
		float L_1 = __this->get_snapMaxSpeed_10();
		V_1 = L_1;
		float L_2 = __this->get_snapSmoothLag_9();
		V_2 = L_2;
		__this->set_snapMaxSpeed_10((((float)((float)((int32_t)10000)))));
		__this->set_snapSmoothLag_9((0.001f));
		__this->set_heightSmoothLag_8((0.001f));
		__this->set_snap_17((bool)1);
		Transform_t3600365921 * L_3 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_t3722313464_il2cpp_TypeInfo_var);
		Vector3_t3722313464  L_4 = Vector3_get_zero_m1409827619(NULL /*static, unused*/, /*hidden argument*/NULL);
		VirtActionInvoker2< Transform_t3600365921 *, Vector3_t3722313464  >::Invoke(7 /* System.Void ThirdPersonCamera::Apply(UnityEngine.Transform,UnityEngine.Vector3) */, __this, L_3, L_4);
		float L_5 = V_0;
		__this->set_heightSmoothLag_8(L_5);
		float L_6 = V_1;
		__this->set_snapMaxSpeed_10(L_6);
		float L_7 = V_2;
		__this->set_snapSmoothLag_9(L_7);
		return;
	}
}
// System.Void ThirdPersonCamera::SetUpRotation(UnityEngine.Vector3,UnityEngine.Vector3)
extern "C"  void ThirdPersonCamera_SetUpRotation_m1499999276 (ThirdPersonCamera_t2998681409 * __this, Vector3_t3722313464  ___centerPos0, Vector3_t3722313464  ___headPos1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ThirdPersonCamera_SetUpRotation_m1499999276_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t3722313464  V_0;
	memset(&V_0, 0, sizeof(V_0));
	Vector3_t3722313464  V_1;
	memset(&V_1, 0, sizeof(V_1));
	Quaternion_t2301928331  V_2;
	memset(&V_2, 0, sizeof(V_2));
	Vector3_t3722313464  V_3;
	memset(&V_3, 0, sizeof(V_3));
	Ray_t3785851493  V_4;
	memset(&V_4, 0, sizeof(V_4));
	Ray_t3785851493  V_5;
	memset(&V_5, 0, sizeof(V_5));
	Vector3_t3722313464  V_6;
	memset(&V_6, 0, sizeof(V_6));
	Vector3_t3722313464  V_7;
	memset(&V_7, 0, sizeof(V_7));
	float V_8 = 0.0f;
	float V_9 = 0.0f;
	float V_10 = 0.0f;
	{
		Transform_t3600365921 * L_0 = __this->get_cameraTransform_2();
		NullCheck(L_0);
		Vector3_t3722313464  L_1 = Transform_get_position_m36019626(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		Vector3_t3722313464  L_2 = ___centerPos0;
		Vector3_t3722313464  L_3 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_t3722313464_il2cpp_TypeInfo_var);
		Vector3_t3722313464  L_4 = Vector3_op_Subtraction_m3073674971(NULL /*static, unused*/, L_2, L_3, /*hidden argument*/NULL);
		V_1 = L_4;
		float L_5 = (&V_1)->get_x_1();
		float L_6 = (&V_1)->get_z_3();
		Vector3_t3722313464  L_7;
		memset(&L_7, 0, sizeof(L_7));
		Vector3__ctor_m3353183577((&L_7), L_5, (((float)((float)0))), L_6, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Quaternion_t2301928331_il2cpp_TypeInfo_var);
		Quaternion_t2301928331  L_8 = Quaternion_LookRotation_m4040767668(NULL /*static, unused*/, L_7, /*hidden argument*/NULL);
		V_2 = L_8;
		Vector3_t3722313464  L_9 = Vector3_get_forward_m3100859705(NULL /*static, unused*/, /*hidden argument*/NULL);
		float L_10 = __this->get_distance_4();
		Vector3_t3722313464  L_11 = Vector3_op_Multiply_m3376773913(NULL /*static, unused*/, L_9, L_10, /*hidden argument*/NULL);
		Vector3_t3722313464  L_12 = Vector3_get_down_m3781355428(NULL /*static, unused*/, /*hidden argument*/NULL);
		float L_13 = __this->get_height_5();
		Vector3_t3722313464  L_14 = Vector3_op_Multiply_m3376773913(NULL /*static, unused*/, L_12, L_13, /*hidden argument*/NULL);
		Vector3_t3722313464  L_15 = Vector3_op_Addition_m779775034(NULL /*static, unused*/, L_11, L_14, /*hidden argument*/NULL);
		V_3 = L_15;
		Transform_t3600365921 * L_16 = __this->get_cameraTransform_2();
		Quaternion_t2301928331  L_17 = V_2;
		Vector3_t3722313464  L_18 = V_3;
		Quaternion_t2301928331  L_19 = Quaternion_LookRotation_m4040767668(NULL /*static, unused*/, L_18, /*hidden argument*/NULL);
		Quaternion_t2301928331  L_20 = Quaternion_op_Multiply_m1294064023(NULL /*static, unused*/, L_17, L_19, /*hidden argument*/NULL);
		NullCheck(L_16);
		Transform_set_rotation_m3524318132(L_16, L_20, /*hidden argument*/NULL);
		Transform_t3600365921 * L_21 = __this->get_cameraTransform_2();
		NullCheck(L_21);
		Camera_t4157153871 * L_22 = Component_GetComponent_TisCamera_t4157153871_m1557787507(L_21, /*hidden argument*/Component_GetComponent_TisCamera_t4157153871_m1557787507_RuntimeMethod_var);
		Vector3_t3722313464  L_23;
		memset(&L_23, 0, sizeof(L_23));
		Vector3__ctor_m3353183577((&L_23), (0.5f), (0.5f), (((float)((float)1))), /*hidden argument*/NULL);
		NullCheck(L_22);
		Ray_t3785851493  L_24 = Camera_ViewportPointToRay_m4164196265(L_22, L_23, /*hidden argument*/NULL);
		V_4 = L_24;
		Transform_t3600365921 * L_25 = __this->get_cameraTransform_2();
		NullCheck(L_25);
		Camera_t4157153871 * L_26 = Component_GetComponent_TisCamera_t4157153871_m1557787507(L_25, /*hidden argument*/Component_GetComponent_TisCamera_t4157153871_m1557787507_RuntimeMethod_var);
		float L_27 = __this->get_clampHeadPositionScreenSpace_11();
		Vector3_t3722313464  L_28;
		memset(&L_28, 0, sizeof(L_28));
		Vector3__ctor_m3353183577((&L_28), (0.5f), L_27, (((float)((float)1))), /*hidden argument*/NULL);
		NullCheck(L_26);
		Ray_t3785851493  L_29 = Camera_ViewportPointToRay_m4164196265(L_26, L_28, /*hidden argument*/NULL);
		V_5 = L_29;
		float L_30 = __this->get_distance_4();
		Vector3_t3722313464  L_31 = Ray_GetPoint_m1852405345((&V_4), L_30, /*hidden argument*/NULL);
		V_6 = L_31;
		float L_32 = __this->get_distance_4();
		Vector3_t3722313464  L_33 = Ray_GetPoint_m1852405345((&V_5), L_32, /*hidden argument*/NULL);
		V_7 = L_33;
		Vector3_t3722313464  L_34 = Ray_get_direction_m761601601((&V_4), /*hidden argument*/NULL);
		Vector3_t3722313464  L_35 = Ray_get_direction_m761601601((&V_5), /*hidden argument*/NULL);
		float L_36 = Vector3_Angle_m3731191531(NULL /*static, unused*/, L_34, L_35, /*hidden argument*/NULL);
		V_8 = L_36;
		float L_37 = V_8;
		float L_38 = (&V_6)->get_y_2();
		float L_39 = (&V_7)->get_y_2();
		V_9 = ((float)((float)L_37/(float)((float)il2cpp_codegen_subtract((float)L_38, (float)L_39))));
		float L_40 = V_9;
		float L_41 = (&V_6)->get_y_2();
		float L_42 = (&___centerPos0)->get_y_2();
		V_10 = ((float)il2cpp_codegen_multiply((float)L_40, (float)((float)il2cpp_codegen_subtract((float)L_41, (float)L_42))));
		float L_43 = V_10;
		float L_44 = V_8;
		if ((((float)L_43) >= ((float)L_44)))
		{
			goto IL_0124;
		}
	}
	{
		V_10 = (((float)((float)0)));
		goto IL_0152;
	}

IL_0124:
	{
		float L_45 = V_10;
		float L_46 = V_8;
		V_10 = ((float)il2cpp_codegen_subtract((float)L_45, (float)L_46));
		Transform_t3600365921 * L_47 = __this->get_cameraTransform_2();
		Transform_t3600365921 * L_48 = __this->get_cameraTransform_2();
		NullCheck(L_48);
		Quaternion_t2301928331  L_49 = Transform_get_rotation_m3502953881(L_48, /*hidden argument*/NULL);
		float L_50 = V_10;
		IL2CPP_RUNTIME_CLASS_INIT(Quaternion_t2301928331_il2cpp_TypeInfo_var);
		Quaternion_t2301928331  L_51 = Quaternion_Euler_m3049309462(NULL /*static, unused*/, ((-L_50)), (((float)((float)0))), (((float)((float)0))), /*hidden argument*/NULL);
		Quaternion_t2301928331  L_52 = Quaternion_op_Multiply_m1294064023(NULL /*static, unused*/, L_49, L_51, /*hidden argument*/NULL);
		NullCheck(L_47);
		Transform_set_rotation_m3524318132(L_47, L_52, /*hidden argument*/NULL);
	}

IL_0152:
	{
		return;
	}
}
// UnityEngine.Vector3 ThirdPersonCamera::GetCenterOffset()
extern "C"  Vector3_t3722313464  ThirdPersonCamera_GetCenterOffset_m4095270398 (ThirdPersonCamera_t2998681409 * __this, const RuntimeMethod* method)
{
	{
		Vector3_t3722313464  L_0 = __this->get_centerOffset_14();
		return L_0;
	}
}
// System.Void ThirdPersonCamera::Main()
extern "C"  void ThirdPersonCamera_Main_m2891730694 (ThirdPersonCamera_t2998681409 * __this, const RuntimeMethod* method)
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
// System.Void ThirdPersonController::.ctor()
extern "C"  void ThirdPersonController__ctor_m2708171020 (ThirdPersonController_t2544474708 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ThirdPersonController__ctor_m2708171020_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
		__this->set_walkMaxAnimationSpeed_6((0.75f));
		__this->set_trotMaxAnimationSpeed_7((1.0f));
		__this->set_runMaxAnimationSpeed_8((1.0f));
		__this->set_jumpAnimationSpeed_9((1.15f));
		__this->set_landAnimationSpeed_10((1.0f));
		__this->set_walkSpeed_13((2.0f));
		__this->set_trotSpeed_14((4.0f));
		__this->set_runSpeed_15((6.0f));
		__this->set_inAirControlAcceleration_16((3.0f));
		__this->set_jumpHeight_17((0.5f));
		__this->set_gravity_18((20.0f));
		__this->set_speedSmoothing_19((10.0f));
		__this->set_rotateSpeed_20((500.0f));
		__this->set_trotAfterSeconds_21((3.0f));
		__this->set_canJump_22((bool)1);
		__this->set_jumpRepeatTime_23((0.05f));
		__this->set_jumpTimeout_24((0.15f));
		__this->set_groundedTimeout_25((0.25f));
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_t3722313464_il2cpp_TypeInfo_var);
		Vector3_t3722313464  L_0 = Vector3_get_zero_m1409827619(NULL /*static, unused*/, /*hidden argument*/NULL);
		__this->set_moveDirection_27(L_0);
		__this->set_lastJumpButtonTime_36((-10.0f));
		__this->set_lastJumpTime_37((-1.0f));
		Vector3_t3722313464  L_1 = Vector3_get_zero_m1409827619(NULL /*static, unused*/, /*hidden argument*/NULL);
		__this->set_inAirVelocity_39(L_1);
		__this->set_isControllable_41((bool)1);
		return;
	}
}
// System.Void ThirdPersonController::Awake()
extern "C"  void ThirdPersonController_Awake_m2581598203 (ThirdPersonController_t2544474708 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ThirdPersonController_Awake_m2581598203_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Transform_t3600365921 * L_0 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_t3722313464_il2cpp_TypeInfo_var);
		Vector3_t3722313464  L_1 = Vector3_get_forward_m3100859705(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_0);
		Vector3_t3722313464  L_2 = Transform_TransformDirection_m3784028109(L_0, L_1, /*hidden argument*/NULL);
		__this->set_moveDirection_27(L_2);
		RuntimeTypeHandle_t3027515415  L_3 = { reinterpret_cast<intptr_t> (Animation_t3648466861_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_4 = Type_GetTypeFromHandle_m1620074514(NULL /*static, unused*/, L_3, /*hidden argument*/NULL);
		Component_t1923634451 * L_5 = Component_GetComponent_m886226392(__this, L_4, /*hidden argument*/NULL);
		__this->set__animation_11(((Animation_t3648466861 *)CastclassSealed((RuntimeObject*)L_5, Animation_t3648466861_il2cpp_TypeInfo_var)));
		Animation_t3648466861 * L_6 = __this->get__animation_11();
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_7 = Object_op_Implicit_m3574996620(NULL /*static, unused*/, L_6, /*hidden argument*/NULL);
		if (L_7)
		{
			goto IL_004b;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
		Debug_Log_m4051431634(NULL /*static, unused*/, _stringLiteral2184035678, /*hidden argument*/NULL);
	}

IL_004b:
	{
		AnimationClip_t2318505987 * L_8 = __this->get_idleAnimation_2();
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_9 = Object_op_Implicit_m3574996620(NULL /*static, unused*/, L_8, /*hidden argument*/NULL);
		if (L_9)
		{
			goto IL_006c;
		}
	}
	{
		__this->set__animation_11((Animation_t3648466861 *)NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
		Debug_Log_m4051431634(NULL /*static, unused*/, _stringLiteral2698848016, /*hidden argument*/NULL);
	}

IL_006c:
	{
		AnimationClip_t2318505987 * L_10 = __this->get_walkAnimation_3();
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_11 = Object_op_Implicit_m3574996620(NULL /*static, unused*/, L_10, /*hidden argument*/NULL);
		if (L_11)
		{
			goto IL_008d;
		}
	}
	{
		__this->set__animation_11((Animation_t3648466861 *)NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
		Debug_Log_m4051431634(NULL /*static, unused*/, _stringLiteral863652304, /*hidden argument*/NULL);
	}

IL_008d:
	{
		AnimationClip_t2318505987 * L_12 = __this->get_runAnimation_4();
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_13 = Object_op_Implicit_m3574996620(NULL /*static, unused*/, L_12, /*hidden argument*/NULL);
		if (L_13)
		{
			goto IL_00ae;
		}
	}
	{
		__this->set__animation_11((Animation_t3648466861 *)NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
		Debug_Log_m4051431634(NULL /*static, unused*/, _stringLiteral2156178170, /*hidden argument*/NULL);
	}

IL_00ae:
	{
		AnimationClip_t2318505987 * L_14 = __this->get_jumpPoseAnimation_5();
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_15 = Object_op_Implicit_m3574996620(NULL /*static, unused*/, L_14, /*hidden argument*/NULL);
		if (L_15)
		{
			goto IL_00da;
		}
	}
	{
		bool L_16 = __this->get_canJump_22();
		if (!L_16)
		{
			goto IL_00da;
		}
	}
	{
		__this->set__animation_11((Animation_t3648466861 *)NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
		Debug_Log_m4051431634(NULL /*static, unused*/, _stringLiteral1557151833, /*hidden argument*/NULL);
	}

IL_00da:
	{
		return;
	}
}
// System.Void ThirdPersonController::UpdateSmoothedMovementDirection()
extern "C"  void ThirdPersonController_UpdateSmoothedMovementDirection_m1976419453 (ThirdPersonController_t2544474708 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ThirdPersonController_UpdateSmoothedMovementDirection_m1976419453_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Transform_t3600365921 * V_0 = NULL;
	bool V_1 = false;
	Vector3_t3722313464  V_2;
	memset(&V_2, 0, sizeof(V_2));
	Vector3_t3722313464  V_3;
	memset(&V_3, 0, sizeof(V_3));
	float V_4 = 0.0f;
	float V_5 = 0.0f;
	bool V_6 = false;
	Vector3_t3722313464  V_7;
	memset(&V_7, 0, sizeof(V_7));
	float V_8 = 0.0f;
	float V_9 = 0.0f;
	int32_t G_B5_0 = 0;
	ThirdPersonController_t2544474708 * G_B5_1 = NULL;
	int32_t G_B4_0 = 0;
	ThirdPersonController_t2544474708 * G_B4_1 = NULL;
	{
		Camera_t4157153871 * L_0 = Camera_get_main_m3643453163(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_0);
		Transform_t3600365921 * L_1 = Component_get_transform_m3162698980(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		bool L_2 = VirtFuncInvoker0< bool >::Invoke(14 /* System.Boolean ThirdPersonController::IsGrounded() */, __this);
		V_1 = L_2;
		Transform_t3600365921 * L_3 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_t3722313464_il2cpp_TypeInfo_var);
		Vector3_t3722313464  L_4 = Vector3_get_forward_m3100859705(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_3);
		Vector3_t3722313464  L_5 = Transform_TransformDirection_m3784028109(L_3, L_4, /*hidden argument*/NULL);
		V_2 = L_5;
		(&V_2)->set_y_2((((float)((float)0))));
		Vector3_t3722313464  L_6 = Vector3_get_normalized_m2454957984((&V_2), /*hidden argument*/NULL);
		V_2 = L_6;
		float L_7 = (&V_2)->get_z_3();
		float L_8 = (&V_2)->get_x_1();
		Vector3_t3722313464  L_9;
		memset(&L_9, 0, sizeof(L_9));
		Vector3__ctor_m3353183577((&L_9), L_7, (((float)((float)0))), ((-L_8)), /*hidden argument*/NULL);
		V_3 = L_9;
		IL2CPP_RUNTIME_CLASS_INIT(Input_t1431474628_il2cpp_TypeInfo_var);
		float L_10 = Input_GetAxisRaw_m2316819917(NULL /*static, unused*/, _stringLiteral2984908384, /*hidden argument*/NULL);
		V_4 = L_10;
		float L_11 = Input_GetAxisRaw_m2316819917(NULL /*static, unused*/, _stringLiteral1828639942, /*hidden argument*/NULL);
		V_5 = L_11;
		float L_12 = V_4;
		if ((((float)L_12) >= ((float)(-0.2f))))
		{
			goto IL_0076;
		}
	}
	{
		__this->set_movingBack_33((bool)1);
		goto IL_007d;
	}

IL_0076:
	{
		__this->set_movingBack_33((bool)0);
	}

IL_007d:
	{
		bool L_13 = __this->get_isMoving_34();
		V_6 = L_13;
		float L_14 = V_5;
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t3464937446_il2cpp_TypeInfo_var);
		float L_15 = fabsf(L_14);
		int32_t L_16 = ((((float)L_15) > ((float)(0.1f)))? 1 : 0);
		G_B4_0 = L_16;
		G_B4_1 = __this;
		if (L_16)
		{
			G_B5_0 = L_16;
			G_B5_1 = __this;
			goto IL_00a9;
		}
	}
	{
		float L_17 = V_4;
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t3464937446_il2cpp_TypeInfo_var);
		float L_18 = fabsf(L_17);
		G_B5_0 = ((((float)L_18) > ((float)(0.1f)))? 1 : 0);
		G_B5_1 = G_B4_1;
	}

IL_00a9:
	{
		NullCheck(G_B5_1);
		G_B5_1->set_isMoving_34((bool)G_B5_0);
		float L_19 = V_5;
		Vector3_t3722313464  L_20 = V_3;
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_t3722313464_il2cpp_TypeInfo_var);
		Vector3_t3722313464  L_21 = Vector3_op_Multiply_m2104357790(NULL /*static, unused*/, L_19, L_20, /*hidden argument*/NULL);
		float L_22 = V_4;
		Vector3_t3722313464  L_23 = V_2;
		Vector3_t3722313464  L_24 = Vector3_op_Multiply_m2104357790(NULL /*static, unused*/, L_22, L_23, /*hidden argument*/NULL);
		Vector3_t3722313464  L_25 = Vector3_op_Addition_m779775034(NULL /*static, unused*/, L_21, L_24, /*hidden argument*/NULL);
		V_7 = L_25;
		bool L_26 = V_1;
		if (!L_26)
		{
			goto IL_0247;
		}
	}
	{
		float L_27 = __this->get_lockCameraTimer_26();
		float L_28 = Time_get_deltaTime_m372706562(NULL /*static, unused*/, /*hidden argument*/NULL);
		__this->set_lockCameraTimer_26(((float)il2cpp_codegen_add((float)L_27, (float)L_28)));
		bool L_29 = __this->get_isMoving_34();
		bool L_30 = V_6;
		if ((((int32_t)L_29) == ((int32_t)L_30)))
		{
			goto IL_00f2;
		}
	}
	{
		__this->set_lockCameraTimer_26((((float)((float)0))));
	}

IL_00f2:
	{
		Vector3_t3722313464  L_31 = V_7;
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_t3722313464_il2cpp_TypeInfo_var);
		Vector3_t3722313464  L_32 = Vector3_get_zero_m1409827619(NULL /*static, unused*/, /*hidden argument*/NULL);
		bool L_33 = Vector3_op_Inequality_m315980366(NULL /*static, unused*/, L_31, L_32, /*hidden argument*/NULL);
		if (!L_33)
		{
			goto IL_016e;
		}
	}
	{
		float L_34 = __this->get_moveSpeed_29();
		float L_35 = __this->get_walkSpeed_13();
		if ((((float)L_34) >= ((float)((float)il2cpp_codegen_multiply((float)L_35, (float)(0.9f))))))
		{
			goto IL_0132;
		}
	}
	{
		bool L_36 = V_1;
		if (!L_36)
		{
			goto IL_0132;
		}
	}
	{
		Vector3_t3722313464  L_37 = Vector3_get_normalized_m2454957984((&V_7), /*hidden argument*/NULL);
		__this->set_moveDirection_27(L_37);
		goto IL_016e;
	}

IL_0132:
	{
		Vector3_t3722313464  L_38 = __this->get_moveDirection_27();
		Vector3_t3722313464  L_39 = V_7;
		float L_40 = __this->get_rotateSpeed_20();
		float L_41 = Time_get_deltaTime_m372706562(NULL /*static, unused*/, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_t3722313464_il2cpp_TypeInfo_var);
		Vector3_t3722313464  L_42 = Vector3_RotateTowards_m4112951104(NULL /*static, unused*/, L_38, L_39, ((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_multiply((float)L_40, (float)(0.0174532924f))), (float)L_41)), (((float)((float)((int32_t)1000)))), /*hidden argument*/NULL);
		__this->set_moveDirection_27(L_42);
		Vector3_t3722313464 * L_43 = __this->get_address_of_moveDirection_27();
		Vector3_t3722313464  L_44 = Vector3_get_normalized_m2454957984(L_43, /*hidden argument*/NULL);
		__this->set_moveDirection_27(L_44);
	}

IL_016e:
	{
		float L_45 = __this->get_speedSmoothing_19();
		float L_46 = Time_get_deltaTime_m372706562(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_8 = ((float)il2cpp_codegen_multiply((float)L_45, (float)L_46));
		float L_47 = Vector3_get_magnitude_m27958459((&V_7), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t3464937446_il2cpp_TypeInfo_var);
		float L_48 = Mathf_Min_m1073399594(NULL /*static, unused*/, L_47, (1.0f), /*hidden argument*/NULL);
		V_9 = L_48;
		__this->set__characterState_12(0);
		IL2CPP_RUNTIME_CLASS_INIT(Input_t1431474628_il2cpp_TypeInfo_var);
		bool L_49 = Input_GetKey_m3736388334(NULL /*static, unused*/, ((int32_t)304), /*hidden argument*/NULL);
		if (L_49)
		{
			goto IL_01b4;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Input_t1431474628_il2cpp_TypeInfo_var);
		bool L_50 = Input_GetKey_m3736388334(NULL /*static, unused*/, ((int32_t)303), /*hidden argument*/NULL);
		if (!L_50)
		{
			goto IL_01cb;
		}
	}

IL_01b4:
	{
		float L_51 = V_9;
		float L_52 = __this->get_runSpeed_15();
		V_9 = ((float)il2cpp_codegen_multiply((float)L_51, (float)L_52));
		__this->set__characterState_12(3);
		goto IL_020b;
	}

IL_01cb:
	{
		float L_53 = Time_get_time_m2907476221(NULL /*static, unused*/, /*hidden argument*/NULL);
		float L_54 = __this->get_trotAfterSeconds_21();
		float L_55 = __this->get_walkTimeStart_35();
		if ((((float)((float)il2cpp_codegen_subtract((float)L_53, (float)L_54))) <= ((float)L_55)))
		{
			goto IL_01f9;
		}
	}
	{
		float L_56 = V_9;
		float L_57 = __this->get_trotSpeed_14();
		V_9 = ((float)il2cpp_codegen_multiply((float)L_56, (float)L_57));
		__this->set__characterState_12(2);
		goto IL_020b;
	}

IL_01f9:
	{
		float L_58 = V_9;
		float L_59 = __this->get_walkSpeed_13();
		V_9 = ((float)il2cpp_codegen_multiply((float)L_58, (float)L_59));
		__this->set__characterState_12(1);
	}

IL_020b:
	{
		float L_60 = __this->get_moveSpeed_29();
		float L_61 = V_9;
		float L_62 = V_8;
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t3464937446_il2cpp_TypeInfo_var);
		float L_63 = Mathf_Lerp_m1004423579(NULL /*static, unused*/, L_60, L_61, L_62, /*hidden argument*/NULL);
		__this->set_moveSpeed_29(L_63);
		float L_64 = __this->get_moveSpeed_29();
		float L_65 = __this->get_walkSpeed_13();
		if ((((float)L_64) >= ((float)((float)il2cpp_codegen_multiply((float)L_65, (float)(0.3f))))))
		{
			goto IL_0242;
		}
	}
	{
		float L_66 = Time_get_time_m2907476221(NULL /*static, unused*/, /*hidden argument*/NULL);
		__this->set_walkTimeStart_35(L_66);
	}

IL_0242:
	{
		goto IL_0292;
	}

IL_0247:
	{
		bool L_67 = __this->get_jumping_31();
		if (!L_67)
		{
			goto IL_025a;
		}
	}
	{
		__this->set_lockCameraTimer_26((((float)((float)0))));
	}

IL_025a:
	{
		bool L_68 = __this->get_isMoving_34();
		if (!L_68)
		{
			goto IL_0292;
		}
	}
	{
		Vector3_t3722313464  L_69 = __this->get_inAirVelocity_39();
		Vector3_t3722313464  L_70 = Vector3_get_normalized_m2454957984((&V_7), /*hidden argument*/NULL);
		float L_71 = Time_get_deltaTime_m372706562(NULL /*static, unused*/, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_t3722313464_il2cpp_TypeInfo_var);
		Vector3_t3722313464  L_72 = Vector3_op_Multiply_m3376773913(NULL /*static, unused*/, L_70, L_71, /*hidden argument*/NULL);
		float L_73 = __this->get_inAirControlAcceleration_16();
		Vector3_t3722313464  L_74 = Vector3_op_Multiply_m3376773913(NULL /*static, unused*/, L_72, L_73, /*hidden argument*/NULL);
		Vector3_t3722313464  L_75 = Vector3_op_Addition_m779775034(NULL /*static, unused*/, L_69, L_74, /*hidden argument*/NULL);
		__this->set_inAirVelocity_39(L_75);
	}

IL_0292:
	{
		return;
	}
}
// System.Void ThirdPersonController::ApplyJumping()
extern "C"  void ThirdPersonController_ApplyJumping_m1425051051 (ThirdPersonController_t2544474708 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ThirdPersonController_ApplyJumping_m1425051051_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		float L_0 = __this->get_lastJumpTime_37();
		float L_1 = __this->get_jumpRepeatTime_23();
		float L_2 = Time_get_time_m2907476221(NULL /*static, unused*/, /*hidden argument*/NULL);
		if ((((float)((float)il2cpp_codegen_add((float)L_0, (float)L_1))) <= ((float)L_2)))
		{
			goto IL_001c;
		}
	}
	{
		goto IL_0067;
	}

IL_001c:
	{
		bool L_3 = VirtFuncInvoker0< bool >::Invoke(14 /* System.Boolean ThirdPersonController::IsGrounded() */, __this);
		if (!L_3)
		{
			goto IL_0067;
		}
	}
	{
		bool L_4 = __this->get_canJump_22();
		if (!L_4)
		{
			goto IL_0067;
		}
	}
	{
		float L_5 = Time_get_time_m2907476221(NULL /*static, unused*/, /*hidden argument*/NULL);
		float L_6 = __this->get_lastJumpButtonTime_36();
		float L_7 = __this->get_jumpTimeout_24();
		if ((((float)L_5) >= ((float)((float)il2cpp_codegen_add((float)L_6, (float)L_7)))))
		{
			goto IL_0067;
		}
	}
	{
		float L_8 = __this->get_jumpHeight_17();
		float L_9 = VirtFuncInvoker1< float, float >::Invoke(8 /* System.Single ThirdPersonController::CalculateJumpVerticalSpeed(System.Single) */, __this, L_8);
		__this->set_verticalSpeed_28(L_9);
		Component_SendMessage_m1441147224(__this, _stringLiteral1890780345, 1, /*hidden argument*/NULL);
	}

IL_0067:
	{
		return;
	}
}
// System.Void ThirdPersonController::ApplyGravity()
extern "C"  void ThirdPersonController_ApplyGravity_m3354230482 (ThirdPersonController_t2544474708 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ThirdPersonController_ApplyGravity_m3354230482_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		bool L_0 = __this->get_isControllable_41();
		if (!L_0)
		{
			goto IL_007d;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Input_t1431474628_il2cpp_TypeInfo_var);
		bool L_1 = Input_GetButton_m2064261504(NULL /*static, unused*/, _stringLiteral1930566815, /*hidden argument*/NULL);
		V_0 = L_1;
		bool L_2 = __this->get_jumping_31();
		if (!L_2)
		{
			goto IL_004c;
		}
	}
	{
		bool L_3 = __this->get_jumpingReachedApex_32();
		if (L_3)
		{
			goto IL_004c;
		}
	}
	{
		float L_4 = __this->get_verticalSpeed_28();
		if ((((float)L_4) > ((float)(((float)((float)0))))))
		{
			goto IL_004c;
		}
	}
	{
		__this->set_jumpingReachedApex_32((bool)1);
		Component_SendMessage_m1441147224(__this, _stringLiteral1991383835, 1, /*hidden argument*/NULL);
	}

IL_004c:
	{
		bool L_5 = VirtFuncInvoker0< bool >::Invoke(14 /* System.Boolean ThirdPersonController::IsGrounded() */, __this);
		if (!L_5)
		{
			goto IL_0064;
		}
	}
	{
		__this->set_verticalSpeed_28((((float)((float)0))));
		goto IL_007d;
	}

IL_0064:
	{
		float L_6 = __this->get_verticalSpeed_28();
		float L_7 = __this->get_gravity_18();
		float L_8 = Time_get_deltaTime_m372706562(NULL /*static, unused*/, /*hidden argument*/NULL);
		__this->set_verticalSpeed_28(((float)il2cpp_codegen_subtract((float)L_6, (float)((float)il2cpp_codegen_multiply((float)L_7, (float)L_8)))));
	}

IL_007d:
	{
		return;
	}
}
// System.Single ThirdPersonController::CalculateJumpVerticalSpeed(System.Single)
extern "C"  float ThirdPersonController_CalculateJumpVerticalSpeed_m2113631571 (ThirdPersonController_t2544474708 * __this, float ___targetJumpHeight0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ThirdPersonController_CalculateJumpVerticalSpeed_m2113631571_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		float L_0 = ___targetJumpHeight0;
		float L_1 = __this->get_gravity_18();
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t3464937446_il2cpp_TypeInfo_var);
		float L_2 = sqrtf(((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_multiply((float)(((float)((float)2))), (float)L_0)), (float)L_1)));
		return L_2;
	}
}
// System.Void ThirdPersonController::DidJump()
extern "C"  void ThirdPersonController_DidJump_m3444402266 (ThirdPersonController_t2544474708 * __this, const RuntimeMethod* method)
{
	Vector3_t3722313464  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		__this->set_jumping_31((bool)1);
		__this->set_jumpingReachedApex_32((bool)0);
		float L_0 = Time_get_time_m2907476221(NULL /*static, unused*/, /*hidden argument*/NULL);
		__this->set_lastJumpTime_37(L_0);
		Transform_t3600365921 * L_1 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		NullCheck(L_1);
		Vector3_t3722313464  L_2 = Transform_get_position_m36019626(L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		float L_3 = (&V_0)->get_y_2();
		__this->set_lastJumpStartHeight_38(L_3);
		__this->set_lastJumpButtonTime_36((((float)((float)((int32_t)-10)))));
		__this->set__characterState_12(4);
		return;
	}
}
// System.Void ThirdPersonController::Update()
extern "C"  void ThirdPersonController_Update_m325211622 (ThirdPersonController_t2544474708 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ThirdPersonController_Update_m325211622_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t3722313464  V_0;
	memset(&V_0, 0, sizeof(V_0));
	CharacterController_t1138636865 * V_1 = NULL;
	Vector3_t3722313464  V_2;
	memset(&V_2, 0, sizeof(V_2));
	Vector3_t3722313464  V_3;
	memset(&V_3, 0, sizeof(V_3));
	Vector3_t3722313464  V_4;
	memset(&V_4, 0, sizeof(V_4));
	Vector3_t3722313464  V_5;
	memset(&V_5, 0, sizeof(V_5));
	Vector3_t3722313464  V_6;
	memset(&V_6, 0, sizeof(V_6));
	{
		bool L_0 = __this->get_isControllable_41();
		if (L_0)
		{
			goto IL_0010;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Input_t1431474628_il2cpp_TypeInfo_var);
		Input_ResetInputAxes_m2194974130(NULL /*static, unused*/, /*hidden argument*/NULL);
	}

IL_0010:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Input_t1431474628_il2cpp_TypeInfo_var);
		bool L_1 = Input_GetButtonDown_m3074252807(NULL /*static, unused*/, _stringLiteral1930566815, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_002a;
		}
	}
	{
		float L_2 = Time_get_time_m2907476221(NULL /*static, unused*/, /*hidden argument*/NULL);
		__this->set_lastJumpButtonTime_36(L_2);
	}

IL_002a:
	{
		VirtActionInvoker0::Invoke(5 /* System.Void ThirdPersonController::UpdateSmoothedMovementDirection() */, __this);
		VirtActionInvoker0::Invoke(7 /* System.Void ThirdPersonController::ApplyGravity() */, __this);
		VirtActionInvoker0::Invoke(6 /* System.Void ThirdPersonController::ApplyJumping() */, __this);
		Vector3_t3722313464  L_3 = __this->get_moveDirection_27();
		float L_4 = __this->get_moveSpeed_29();
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_t3722313464_il2cpp_TypeInfo_var);
		Vector3_t3722313464  L_5 = Vector3_op_Multiply_m3376773913(NULL /*static, unused*/, L_3, L_4, /*hidden argument*/NULL);
		float L_6 = __this->get_verticalSpeed_28();
		Vector3_t3722313464  L_7;
		memset(&L_7, 0, sizeof(L_7));
		Vector3__ctor_m3353183577((&L_7), (((float)((float)0))), L_6, (((float)((float)0))), /*hidden argument*/NULL);
		Vector3_t3722313464  L_8 = Vector3_op_Addition_m779775034(NULL /*static, unused*/, L_5, L_7, /*hidden argument*/NULL);
		Vector3_t3722313464  L_9 = __this->get_inAirVelocity_39();
		Vector3_t3722313464  L_10 = Vector3_op_Addition_m779775034(NULL /*static, unused*/, L_8, L_9, /*hidden argument*/NULL);
		V_0 = L_10;
		Vector3_t3722313464  L_11 = V_0;
		float L_12 = Time_get_deltaTime_m372706562(NULL /*static, unused*/, /*hidden argument*/NULL);
		Vector3_t3722313464  L_13 = Vector3_op_Multiply_m3376773913(NULL /*static, unused*/, L_11, L_12, /*hidden argument*/NULL);
		V_0 = L_13;
		RuntimeTypeHandle_t3027515415  L_14 = { reinterpret_cast<intptr_t> (CharacterController_t1138636865_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_15 = Type_GetTypeFromHandle_m1620074514(NULL /*static, unused*/, L_14, /*hidden argument*/NULL);
		Component_t1923634451 * L_16 = Component_GetComponent_m886226392(__this, L_15, /*hidden argument*/NULL);
		V_1 = ((CharacterController_t1138636865 *)CastclassSealed((RuntimeObject*)L_16, CharacterController_t1138636865_il2cpp_TypeInfo_var));
		CharacterController_t1138636865 * L_17 = V_1;
		Vector3_t3722313464  L_18 = V_0;
		NullCheck(L_17);
		int32_t L_19 = CharacterController_Move_m1547317252(L_17, L_18, /*hidden argument*/NULL);
		__this->set_collisionFlags_30(L_19);
		Animation_t3648466861 * L_20 = __this->get__animation_11();
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_21 = Object_op_Implicit_m3574996620(NULL /*static, unused*/, L_20, /*hidden argument*/NULL);
		if (!L_21)
		{
			goto IL_02bc;
		}
	}
	{
		int32_t L_22 = __this->get__characterState_12();
		if ((!(((uint32_t)L_22) == ((uint32_t)4))))
		{
			goto IL_0174;
		}
	}
	{
		bool L_23 = __this->get_jumpingReachedApex_32();
		if (L_23)
		{
			goto IL_011b;
		}
	}
	{
		Animation_t3648466861 * L_24 = __this->get__animation_11();
		AnimationClip_t2318505987 * L_25 = __this->get_jumpPoseAnimation_5();
		NullCheck(L_25);
		String_t* L_26 = Object_get_name_m4211327027(L_25, /*hidden argument*/NULL);
		NullCheck(L_24);
		AnimationState_t1108360407 * L_27 = Animation_get_Item_m2435218778(L_24, L_26, /*hidden argument*/NULL);
		float L_28 = __this->get_jumpAnimationSpeed_9();
		NullCheck(L_27);
		AnimationState_set_speed_m2787468711(L_27, L_28, /*hidden argument*/NULL);
		Animation_t3648466861 * L_29 = __this->get__animation_11();
		AnimationClip_t2318505987 * L_30 = __this->get_jumpPoseAnimation_5();
		NullCheck(L_30);
		String_t* L_31 = Object_get_name_m4211327027(L_30, /*hidden argument*/NULL);
		NullCheck(L_29);
		AnimationState_t1108360407 * L_32 = Animation_get_Item_m2435218778(L_29, L_31, /*hidden argument*/NULL);
		NullCheck(L_32);
		AnimationState_set_wrapMode_m932751232(L_32, 8, /*hidden argument*/NULL);
		Animation_t3648466861 * L_33 = __this->get__animation_11();
		AnimationClip_t2318505987 * L_34 = __this->get_jumpPoseAnimation_5();
		NullCheck(L_34);
		String_t* L_35 = Object_get_name_m4211327027(L_34, /*hidden argument*/NULL);
		NullCheck(L_33);
		Animation_CrossFade_m2177301990(L_33, L_35, /*hidden argument*/NULL);
		goto IL_016f;
	}

IL_011b:
	{
		Animation_t3648466861 * L_36 = __this->get__animation_11();
		AnimationClip_t2318505987 * L_37 = __this->get_jumpPoseAnimation_5();
		NullCheck(L_37);
		String_t* L_38 = Object_get_name_m4211327027(L_37, /*hidden argument*/NULL);
		NullCheck(L_36);
		AnimationState_t1108360407 * L_39 = Animation_get_Item_m2435218778(L_36, L_38, /*hidden argument*/NULL);
		float L_40 = __this->get_landAnimationSpeed_10();
		NullCheck(L_39);
		AnimationState_set_speed_m2787468711(L_39, ((-L_40)), /*hidden argument*/NULL);
		Animation_t3648466861 * L_41 = __this->get__animation_11();
		AnimationClip_t2318505987 * L_42 = __this->get_jumpPoseAnimation_5();
		NullCheck(L_42);
		String_t* L_43 = Object_get_name_m4211327027(L_42, /*hidden argument*/NULL);
		NullCheck(L_41);
		AnimationState_t1108360407 * L_44 = Animation_get_Item_m2435218778(L_41, L_43, /*hidden argument*/NULL);
		NullCheck(L_44);
		AnimationState_set_wrapMode_m932751232(L_44, 8, /*hidden argument*/NULL);
		Animation_t3648466861 * L_45 = __this->get__animation_11();
		AnimationClip_t2318505987 * L_46 = __this->get_jumpPoseAnimation_5();
		NullCheck(L_46);
		String_t* L_47 = Object_get_name_m4211327027(L_46, /*hidden argument*/NULL);
		NullCheck(L_45);
		Animation_CrossFade_m2177301990(L_45, L_47, /*hidden argument*/NULL);
	}

IL_016f:
	{
		goto IL_02bc;
	}

IL_0174:
	{
		CharacterController_t1138636865 * L_48 = V_1;
		NullCheck(L_48);
		Vector3_t3722313464  L_49 = CharacterController_get_velocity_m3517335080(L_48, /*hidden argument*/NULL);
		V_3 = L_49;
		float L_50 = Vector3_get_sqrMagnitude_m1474274574((&V_3), /*hidden argument*/NULL);
		if ((((float)L_50) >= ((float)(0.1f))))
		{
			goto IL_01a7;
		}
	}
	{
		Animation_t3648466861 * L_51 = __this->get__animation_11();
		AnimationClip_t2318505987 * L_52 = __this->get_idleAnimation_2();
		NullCheck(L_52);
		String_t* L_53 = Object_get_name_m4211327027(L_52, /*hidden argument*/NULL);
		NullCheck(L_51);
		Animation_CrossFade_m2177301990(L_51, L_53, /*hidden argument*/NULL);
		goto IL_02bc;
	}

IL_01a7:
	{
		int32_t L_54 = __this->get__characterState_12();
		if ((!(((uint32_t)L_54) == ((uint32_t)3))))
		{
			goto IL_0205;
		}
	}
	{
		Animation_t3648466861 * L_55 = __this->get__animation_11();
		AnimationClip_t2318505987 * L_56 = __this->get_runAnimation_4();
		NullCheck(L_56);
		String_t* L_57 = Object_get_name_m4211327027(L_56, /*hidden argument*/NULL);
		NullCheck(L_55);
		AnimationState_t1108360407 * L_58 = Animation_get_Item_m2435218778(L_55, L_57, /*hidden argument*/NULL);
		CharacterController_t1138636865 * L_59 = V_1;
		NullCheck(L_59);
		Vector3_t3722313464  L_60 = CharacterController_get_velocity_m3517335080(L_59, /*hidden argument*/NULL);
		V_4 = L_60;
		float L_61 = Vector3_get_magnitude_m27958459((&V_4), /*hidden argument*/NULL);
		float L_62 = __this->get_runMaxAnimationSpeed_8();
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t3464937446_il2cpp_TypeInfo_var);
		float L_63 = Mathf_Clamp_m3350697880(NULL /*static, unused*/, L_61, (((float)((float)0))), L_62, /*hidden argument*/NULL);
		NullCheck(L_58);
		AnimationState_set_speed_m2787468711(L_58, L_63, /*hidden argument*/NULL);
		Animation_t3648466861 * L_64 = __this->get__animation_11();
		AnimationClip_t2318505987 * L_65 = __this->get_runAnimation_4();
		NullCheck(L_65);
		String_t* L_66 = Object_get_name_m4211327027(L_65, /*hidden argument*/NULL);
		NullCheck(L_64);
		Animation_CrossFade_m2177301990(L_64, L_66, /*hidden argument*/NULL);
		goto IL_02bc;
	}

IL_0205:
	{
		int32_t L_67 = __this->get__characterState_12();
		if ((!(((uint32_t)L_67) == ((uint32_t)2))))
		{
			goto IL_0263;
		}
	}
	{
		Animation_t3648466861 * L_68 = __this->get__animation_11();
		AnimationClip_t2318505987 * L_69 = __this->get_walkAnimation_3();
		NullCheck(L_69);
		String_t* L_70 = Object_get_name_m4211327027(L_69, /*hidden argument*/NULL);
		NullCheck(L_68);
		AnimationState_t1108360407 * L_71 = Animation_get_Item_m2435218778(L_68, L_70, /*hidden argument*/NULL);
		CharacterController_t1138636865 * L_72 = V_1;
		NullCheck(L_72);
		Vector3_t3722313464  L_73 = CharacterController_get_velocity_m3517335080(L_72, /*hidden argument*/NULL);
		V_5 = L_73;
		float L_74 = Vector3_get_magnitude_m27958459((&V_5), /*hidden argument*/NULL);
		float L_75 = __this->get_trotMaxAnimationSpeed_7();
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t3464937446_il2cpp_TypeInfo_var);
		float L_76 = Mathf_Clamp_m3350697880(NULL /*static, unused*/, L_74, (((float)((float)0))), L_75, /*hidden argument*/NULL);
		NullCheck(L_71);
		AnimationState_set_speed_m2787468711(L_71, L_76, /*hidden argument*/NULL);
		Animation_t3648466861 * L_77 = __this->get__animation_11();
		AnimationClip_t2318505987 * L_78 = __this->get_walkAnimation_3();
		NullCheck(L_78);
		String_t* L_79 = Object_get_name_m4211327027(L_78, /*hidden argument*/NULL);
		NullCheck(L_77);
		Animation_CrossFade_m2177301990(L_77, L_79, /*hidden argument*/NULL);
		goto IL_02bc;
	}

IL_0263:
	{
		int32_t L_80 = __this->get__characterState_12();
		if ((!(((uint32_t)L_80) == ((uint32_t)1))))
		{
			goto IL_02bc;
		}
	}
	{
		Animation_t3648466861 * L_81 = __this->get__animation_11();
		AnimationClip_t2318505987 * L_82 = __this->get_walkAnimation_3();
		NullCheck(L_82);
		String_t* L_83 = Object_get_name_m4211327027(L_82, /*hidden argument*/NULL);
		NullCheck(L_81);
		AnimationState_t1108360407 * L_84 = Animation_get_Item_m2435218778(L_81, L_83, /*hidden argument*/NULL);
		CharacterController_t1138636865 * L_85 = V_1;
		NullCheck(L_85);
		Vector3_t3722313464  L_86 = CharacterController_get_velocity_m3517335080(L_85, /*hidden argument*/NULL);
		V_6 = L_86;
		float L_87 = Vector3_get_magnitude_m27958459((&V_6), /*hidden argument*/NULL);
		float L_88 = __this->get_walkMaxAnimationSpeed_6();
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t3464937446_il2cpp_TypeInfo_var);
		float L_89 = Mathf_Clamp_m3350697880(NULL /*static, unused*/, L_87, (((float)((float)0))), L_88, /*hidden argument*/NULL);
		NullCheck(L_84);
		AnimationState_set_speed_m2787468711(L_84, L_89, /*hidden argument*/NULL);
		Animation_t3648466861 * L_90 = __this->get__animation_11();
		AnimationClip_t2318505987 * L_91 = __this->get_walkAnimation_3();
		NullCheck(L_91);
		String_t* L_92 = Object_get_name_m4211327027(L_91, /*hidden argument*/NULL);
		NullCheck(L_90);
		Animation_CrossFade_m2177301990(L_90, L_92, /*hidden argument*/NULL);
	}

IL_02bc:
	{
		bool L_93 = VirtFuncInvoker0< bool >::Invoke(14 /* System.Boolean ThirdPersonController::IsGrounded() */, __this);
		if (!L_93)
		{
			goto IL_02e2;
		}
	}
	{
		Transform_t3600365921 * L_94 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		Vector3_t3722313464  L_95 = __this->get_moveDirection_27();
		IL2CPP_RUNTIME_CLASS_INIT(Quaternion_t2301928331_il2cpp_TypeInfo_var);
		Quaternion_t2301928331  L_96 = Quaternion_LookRotation_m4040767668(NULL /*static, unused*/, L_95, /*hidden argument*/NULL);
		NullCheck(L_94);
		Transform_set_rotation_m3524318132(L_94, L_96, /*hidden argument*/NULL);
		goto IL_030f;
	}

IL_02e2:
	{
		Vector3_t3722313464  L_97 = V_0;
		V_2 = L_97;
		(&V_2)->set_y_2((((float)((float)0))));
		float L_98 = Vector3_get_sqrMagnitude_m1474274574((&V_2), /*hidden argument*/NULL);
		if ((((float)L_98) <= ((float)(0.001f))))
		{
			goto IL_030f;
		}
	}
	{
		Transform_t3600365921 * L_99 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		Vector3_t3722313464  L_100 = V_2;
		IL2CPP_RUNTIME_CLASS_INIT(Quaternion_t2301928331_il2cpp_TypeInfo_var);
		Quaternion_t2301928331  L_101 = Quaternion_LookRotation_m4040767668(NULL /*static, unused*/, L_100, /*hidden argument*/NULL);
		NullCheck(L_99);
		Transform_set_rotation_m3524318132(L_99, L_101, /*hidden argument*/NULL);
	}

IL_030f:
	{
		bool L_102 = VirtFuncInvoker0< bool >::Invoke(14 /* System.Boolean ThirdPersonController::IsGrounded() */, __this);
		if (!L_102)
		{
			goto IL_034e;
		}
	}
	{
		float L_103 = Time_get_time_m2907476221(NULL /*static, unused*/, /*hidden argument*/NULL);
		__this->set_lastGroundedTime_40(L_103);
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_t3722313464_il2cpp_TypeInfo_var);
		Vector3_t3722313464  L_104 = Vector3_get_zero_m1409827619(NULL /*static, unused*/, /*hidden argument*/NULL);
		__this->set_inAirVelocity_39(L_104);
		bool L_105 = __this->get_jumping_31();
		if (!L_105)
		{
			goto IL_034e;
		}
	}
	{
		__this->set_jumping_31((bool)0);
		Component_SendMessage_m1441147224(__this, _stringLiteral3415664809, 1, /*hidden argument*/NULL);
	}

IL_034e:
	{
		return;
	}
}
// System.Void ThirdPersonController::OnControllerColliderHit(UnityEngine.ControllerColliderHit)
extern "C"  void ThirdPersonController_OnControllerColliderHit_m37993150 (ThirdPersonController_t2544474708 * __this, ControllerColliderHit_t240592346 * ___hit0, const RuntimeMethod* method)
{
	Vector3_t3722313464  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		ControllerColliderHit_t240592346 * L_0 = ___hit0;
		NullCheck(L_0);
		Vector3_t3722313464  L_1 = ControllerColliderHit_get_moveDirection_m1770146420(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		float L_2 = (&V_0)->get_y_2();
		if ((((float)L_2) <= ((float)(0.01f))))
		{
			goto IL_001d;
		}
	}
	{
		goto IL_001d;
	}

IL_001d:
	{
		return;
	}
}
// System.Single ThirdPersonController::GetSpeed()
extern "C"  float ThirdPersonController_GetSpeed_m3989511729 (ThirdPersonController_t2544474708 * __this, const RuntimeMethod* method)
{
	{
		float L_0 = __this->get_moveSpeed_29();
		return L_0;
	}
}
// System.Boolean ThirdPersonController::IsJumping()
extern "C"  bool ThirdPersonController_IsJumping_m3449391453 (ThirdPersonController_t2544474708 * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = __this->get_jumping_31();
		return L_0;
	}
}
// System.Boolean ThirdPersonController::IsGrounded()
extern "C"  bool ThirdPersonController_IsGrounded_m211375518 (ThirdPersonController_t2544474708 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_collisionFlags_30();
		return (bool)((((int32_t)((((int32_t)((int32_t)((int32_t)L_0&(int32_t)4))) == ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
// UnityEngine.Vector3 ThirdPersonController::GetDirection()
extern "C"  Vector3_t3722313464  ThirdPersonController_GetDirection_m3784170082 (ThirdPersonController_t2544474708 * __this, const RuntimeMethod* method)
{
	{
		Vector3_t3722313464  L_0 = __this->get_moveDirection_27();
		return L_0;
	}
}
// System.Boolean ThirdPersonController::IsMovingBackwards()
extern "C"  bool ThirdPersonController_IsMovingBackwards_m4048421309 (ThirdPersonController_t2544474708 * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = __this->get_movingBack_33();
		return L_0;
	}
}
// System.Single ThirdPersonController::GetLockCameraTimer()
extern "C"  float ThirdPersonController_GetLockCameraTimer_m1730284981 (ThirdPersonController_t2544474708 * __this, const RuntimeMethod* method)
{
	{
		float L_0 = __this->get_lockCameraTimer_26();
		return L_0;
	}
}
// System.Boolean ThirdPersonController::IsMoving()
extern "C"  bool ThirdPersonController_IsMoving_m287712802 (ThirdPersonController_t2544474708 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ThirdPersonController_IsMoving_m287712802_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Input_t1431474628_il2cpp_TypeInfo_var);
		float L_0 = Input_GetAxisRaw_m2316819917(NULL /*static, unused*/, _stringLiteral2984908384, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t3464937446_il2cpp_TypeInfo_var);
		float L_1 = fabsf(L_0);
		float L_2 = Input_GetAxisRaw_m2316819917(NULL /*static, unused*/, _stringLiteral1828639942, /*hidden argument*/NULL);
		float L_3 = fabsf(L_2);
		return (bool)((((float)((float)il2cpp_codegen_add((float)L_1, (float)L_3))) > ((float)(0.5f)))? 1 : 0);
	}
}
// System.Boolean ThirdPersonController::HasJumpReachedApex()
extern "C"  bool ThirdPersonController_HasJumpReachedApex_m2695676267 (ThirdPersonController_t2544474708 * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = __this->get_jumpingReachedApex_32();
		return L_0;
	}
}
// System.Boolean ThirdPersonController::IsGroundedWithTimeout()
extern "C"  bool ThirdPersonController_IsGroundedWithTimeout_m2128348527 (ThirdPersonController_t2544474708 * __this, const RuntimeMethod* method)
{
	{
		float L_0 = __this->get_lastGroundedTime_40();
		float L_1 = __this->get_groundedTimeout_25();
		float L_2 = Time_get_time_m2907476221(NULL /*static, unused*/, /*hidden argument*/NULL);
		return (bool)((((float)((float)il2cpp_codegen_add((float)L_0, (float)L_1))) > ((float)L_2))? 1 : 0);
	}
}
// System.Void ThirdPersonController::Reset()
extern "C"  void ThirdPersonController_Reset_m4173393427 (ThirdPersonController_t2544474708 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ThirdPersonController_Reset_m4173393427_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		GameObject_t1113636619 * L_0 = Component_get_gameObject_m442555142(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		GameObject_set_tag_m2353670106(L_0, _stringLiteral2261822918, /*hidden argument*/NULL);
		return;
	}
}
// System.Void ThirdPersonController::Main()
extern "C"  void ThirdPersonController_Main_m462352968 (ThirdPersonController_t2544474708 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
