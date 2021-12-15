#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>



// System.Char[]
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;
// System.Runtime.CompilerServices.CompilationRelaxationsAttribute
struct CompilationRelaxationsAttribute_t661FDDC06629BDA607A42BD660944F039FE03AFF;
// System.Runtime.CompilerServices.CompilerGeneratedAttribute
struct CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C;
// System.Diagnostics.DebuggableAttribute
struct DebuggableAttribute_tA8054EBD0FC7511695D494B690B5771658E3191B;
// System.Diagnostics.DebuggerDisplayAttribute
struct DebuggerDisplayAttribute_tA5070C1A6CAB579DAC66A469530D946F6F42727F;
// System.Runtime.CompilerServices.ExtensionAttribute
struct ExtensionAttribute_t917F3F92E717DC8B2D7BC03967A9790B1B8EF7CC;
// System.FlagsAttribute
struct FlagsAttribute_t511C558FACEF1CC64702A8FAB67CAF3CBA65DF36;
// System.ObsoleteAttribute
struct ObsoleteAttribute_t14BAC1669C0409EB9F28D72D664FFA6764ACD671;
// System.ParamArrayAttribute
struct ParamArrayAttribute_t9DCEB4CDDB8EDDB1124171D4C51FA6069EEA5C5F;
// System.Runtime.CompilerServices.RuntimeCompatibilityAttribute
struct RuntimeCompatibilityAttribute_tFF99AB2963098F9CBCD47A20D9FD3D51C17C1C80;
// System.String
struct String_t;



IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Object


// System.Attribute
struct Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71  : public RuntimeObject
{
public:

public:
};


// System.String
struct String_t  : public RuntimeObject
{
public:
	// System.Int32 System.String::m_stringLength
	int32_t ___m_stringLength_0;
	// System.Char System.String::m_firstChar
	Il2CppChar ___m_firstChar_1;

public:
	inline static int32_t get_offset_of_m_stringLength_0() { return static_cast<int32_t>(offsetof(String_t, ___m_stringLength_0)); }
	inline int32_t get_m_stringLength_0() const { return ___m_stringLength_0; }
	inline int32_t* get_address_of_m_stringLength_0() { return &___m_stringLength_0; }
	inline void set_m_stringLength_0(int32_t value)
	{
		___m_stringLength_0 = value;
	}

	inline static int32_t get_offset_of_m_firstChar_1() { return static_cast<int32_t>(offsetof(String_t, ___m_firstChar_1)); }
	inline Il2CppChar get_m_firstChar_1() const { return ___m_firstChar_1; }
	inline Il2CppChar* get_address_of_m_firstChar_1() { return &___m_firstChar_1; }
	inline void set_m_firstChar_1(Il2CppChar value)
	{
		___m_firstChar_1 = value;
	}
};

struct String_t_StaticFields
{
public:
	// System.String System.String::Empty
	String_t* ___Empty_5;

public:
	inline static int32_t get_offset_of_Empty_5() { return static_cast<int32_t>(offsetof(String_t_StaticFields, ___Empty_5)); }
	inline String_t* get_Empty_5() const { return ___Empty_5; }
	inline String_t** get_address_of_Empty_5() { return &___Empty_5; }
	inline void set_Empty_5(String_t* value)
	{
		___Empty_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Empty_5), (void*)value);
	}
};


// System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52  : public RuntimeObject
{
public:

public:
};

// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52_marshaled_com
{
};

// System.Boolean
struct Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37 
{
public:
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37, ___m_value_0)); }
	inline bool get_m_value_0() const { return ___m_value_0; }
	inline bool* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(bool value)
	{
		___m_value_0 = value;
	}
};

struct Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields
{
public:
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;

public:
	inline static int32_t get_offset_of_TrueString_5() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields, ___TrueString_5)); }
	inline String_t* get_TrueString_5() const { return ___TrueString_5; }
	inline String_t** get_address_of_TrueString_5() { return &___TrueString_5; }
	inline void set_TrueString_5(String_t* value)
	{
		___TrueString_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TrueString_5), (void*)value);
	}

	inline static int32_t get_offset_of_FalseString_6() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields, ___FalseString_6)); }
	inline String_t* get_FalseString_6() const { return ___FalseString_6; }
	inline String_t** get_address_of_FalseString_6() { return &___FalseString_6; }
	inline void set_FalseString_6(String_t* value)
	{
		___FalseString_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FalseString_6), (void*)value);
	}
};


// System.Runtime.CompilerServices.CompilationRelaxationsAttribute
struct CompilationRelaxationsAttribute_t661FDDC06629BDA607A42BD660944F039FE03AFF  : public Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71
{
public:
	// System.Int32 System.Runtime.CompilerServices.CompilationRelaxationsAttribute::m_relaxations
	int32_t ___m_relaxations_0;

public:
	inline static int32_t get_offset_of_m_relaxations_0() { return static_cast<int32_t>(offsetof(CompilationRelaxationsAttribute_t661FDDC06629BDA607A42BD660944F039FE03AFF, ___m_relaxations_0)); }
	inline int32_t get_m_relaxations_0() const { return ___m_relaxations_0; }
	inline int32_t* get_address_of_m_relaxations_0() { return &___m_relaxations_0; }
	inline void set_m_relaxations_0(int32_t value)
	{
		___m_relaxations_0 = value;
	}
};


// System.Runtime.CompilerServices.CompilerGeneratedAttribute
struct CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C  : public Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71
{
public:

public:
};


// System.Diagnostics.DebuggerDisplayAttribute
struct DebuggerDisplayAttribute_tA5070C1A6CAB579DAC66A469530D946F6F42727F  : public Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71
{
public:
	// System.String System.Diagnostics.DebuggerDisplayAttribute::name
	String_t* ___name_0;
	// System.String System.Diagnostics.DebuggerDisplayAttribute::value
	String_t* ___value_1;
	// System.String System.Diagnostics.DebuggerDisplayAttribute::type
	String_t* ___type_2;

public:
	inline static int32_t get_offset_of_name_0() { return static_cast<int32_t>(offsetof(DebuggerDisplayAttribute_tA5070C1A6CAB579DAC66A469530D946F6F42727F, ___name_0)); }
	inline String_t* get_name_0() const { return ___name_0; }
	inline String_t** get_address_of_name_0() { return &___name_0; }
	inline void set_name_0(String_t* value)
	{
		___name_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___name_0), (void*)value);
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(DebuggerDisplayAttribute_tA5070C1A6CAB579DAC66A469530D946F6F42727F, ___value_1)); }
	inline String_t* get_value_1() const { return ___value_1; }
	inline String_t** get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(String_t* value)
	{
		___value_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___value_1), (void*)value);
	}

	inline static int32_t get_offset_of_type_2() { return static_cast<int32_t>(offsetof(DebuggerDisplayAttribute_tA5070C1A6CAB579DAC66A469530D946F6F42727F, ___type_2)); }
	inline String_t* get_type_2() const { return ___type_2; }
	inline String_t** get_address_of_type_2() { return &___type_2; }
	inline void set_type_2(String_t* value)
	{
		___type_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___type_2), (void*)value);
	}
};


// System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA  : public ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52
{
public:

public:
};

struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_StaticFields
{
public:
	// System.Char[] System.Enum::enumSeperatorCharArray
	CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___enumSeperatorCharArray_0;

public:
	inline static int32_t get_offset_of_enumSeperatorCharArray_0() { return static_cast<int32_t>(offsetof(Enum_t23B90B40F60E677A8025267341651C94AE079CDA_StaticFields, ___enumSeperatorCharArray_0)); }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* get_enumSeperatorCharArray_0() const { return ___enumSeperatorCharArray_0; }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34** get_address_of_enumSeperatorCharArray_0() { return &___enumSeperatorCharArray_0; }
	inline void set_enumSeperatorCharArray_0(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* value)
	{
		___enumSeperatorCharArray_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___enumSeperatorCharArray_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_marshaled_com
{
};

// System.Runtime.CompilerServices.ExtensionAttribute
struct ExtensionAttribute_t917F3F92E717DC8B2D7BC03967A9790B1B8EF7CC  : public Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71
{
public:

public:
};


// System.FlagsAttribute
struct FlagsAttribute_t511C558FACEF1CC64702A8FAB67CAF3CBA65DF36  : public Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71
{
public:

public:
};


// System.ObsoleteAttribute
struct ObsoleteAttribute_t14BAC1669C0409EB9F28D72D664FFA6764ACD671  : public Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71
{
public:
	// System.String System.ObsoleteAttribute::_message
	String_t* ____message_0;
	// System.Boolean System.ObsoleteAttribute::_error
	bool ____error_1;

public:
	inline static int32_t get_offset_of__message_0() { return static_cast<int32_t>(offsetof(ObsoleteAttribute_t14BAC1669C0409EB9F28D72D664FFA6764ACD671, ____message_0)); }
	inline String_t* get__message_0() const { return ____message_0; }
	inline String_t** get_address_of__message_0() { return &____message_0; }
	inline void set__message_0(String_t* value)
	{
		____message_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____message_0), (void*)value);
	}

	inline static int32_t get_offset_of__error_1() { return static_cast<int32_t>(offsetof(ObsoleteAttribute_t14BAC1669C0409EB9F28D72D664FFA6764ACD671, ____error_1)); }
	inline bool get__error_1() const { return ____error_1; }
	inline bool* get_address_of__error_1() { return &____error_1; }
	inline void set__error_1(bool value)
	{
		____error_1 = value;
	}
};


// System.ParamArrayAttribute
struct ParamArrayAttribute_t9DCEB4CDDB8EDDB1124171D4C51FA6069EEA5C5F  : public Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71
{
public:

public:
};


// System.Runtime.CompilerServices.RuntimeCompatibilityAttribute
struct RuntimeCompatibilityAttribute_tFF99AB2963098F9CBCD47A20D9FD3D51C17C1C80  : public Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71
{
public:
	// System.Boolean System.Runtime.CompilerServices.RuntimeCompatibilityAttribute::m_wrapNonExceptionThrows
	bool ___m_wrapNonExceptionThrows_0;

public:
	inline static int32_t get_offset_of_m_wrapNonExceptionThrows_0() { return static_cast<int32_t>(offsetof(RuntimeCompatibilityAttribute_tFF99AB2963098F9CBCD47A20D9FD3D51C17C1C80, ___m_wrapNonExceptionThrows_0)); }
	inline bool get_m_wrapNonExceptionThrows_0() const { return ___m_wrapNonExceptionThrows_0; }
	inline bool* get_address_of_m_wrapNonExceptionThrows_0() { return &___m_wrapNonExceptionThrows_0; }
	inline void set_m_wrapNonExceptionThrows_0(bool value)
	{
		___m_wrapNonExceptionThrows_0 = value;
	}
};


// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5 
{
public:
	union
	{
		struct
		{
		};
		uint8_t Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5__padding[1];
	};

public:
};


// System.Diagnostics.DebuggableAttribute/DebuggingModes
struct DebuggingModes_t279D5B9C012ABA935887CB73C5A63A1F46AF08A8 
{
public:
	// System.Int32 System.Diagnostics.DebuggableAttribute/DebuggingModes::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(DebuggingModes_t279D5B9C012ABA935887CB73C5A63A1F46AF08A8, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Diagnostics.DebuggableAttribute
struct DebuggableAttribute_tA8054EBD0FC7511695D494B690B5771658E3191B  : public Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71
{
public:
	// System.Diagnostics.DebuggableAttribute/DebuggingModes System.Diagnostics.DebuggableAttribute::m_debuggingModes
	int32_t ___m_debuggingModes_0;

public:
	inline static int32_t get_offset_of_m_debuggingModes_0() { return static_cast<int32_t>(offsetof(DebuggableAttribute_tA8054EBD0FC7511695D494B690B5771658E3191B, ___m_debuggingModes_0)); }
	inline int32_t get_m_debuggingModes_0() const { return ___m_debuggingModes_0; }
	inline int32_t* get_address_of_m_debuggingModes_0() { return &___m_debuggingModes_0; }
	inline void set_m_debuggingModes_0(int32_t value)
	{
		___m_debuggingModes_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif



// System.Void System.Runtime.CompilerServices.CompilationRelaxationsAttribute::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CompilationRelaxationsAttribute__ctor_mAC3079EBC4EEAB474EED8208EF95DB39C922333B (CompilationRelaxationsAttribute_t661FDDC06629BDA607A42BD660944F039FE03AFF * __this, int32_t ___relaxations0, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.ExtensionAttribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExtensionAttribute__ctor_mB331519C39C4210259A248A4C629DF934937C1FA (ExtensionAttribute_t917F3F92E717DC8B2D7BC03967A9790B1B8EF7CC * __this, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.RuntimeCompatibilityAttribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RuntimeCompatibilityAttribute__ctor_m551DDF1438CE97A984571949723F30F44CF7317C (RuntimeCompatibilityAttribute_tFF99AB2963098F9CBCD47A20D9FD3D51C17C1C80 * __this, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.RuntimeCompatibilityAttribute::set_WrapNonExceptionThrows(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void RuntimeCompatibilityAttribute_set_WrapNonExceptionThrows_m8562196F90F3EBCEC23B5708EE0332842883C490_inline (RuntimeCompatibilityAttribute_tFF99AB2963098F9CBCD47A20D9FD3D51C17C1C80 * __this, bool ___value0, const RuntimeMethod* method);
// System.Void System.Diagnostics.DebuggableAttribute::.ctor(System.Diagnostics.DebuggableAttribute/DebuggingModes)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DebuggableAttribute__ctor_m7FF445C8435494A4847123A668D889E692E55550 (DebuggableAttribute_tA8054EBD0FC7511695D494B690B5771658E3191B * __this, int32_t ___modes0, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.CompilerGeneratedAttribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35 (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * __this, const RuntimeMethod* method);
// System.Void System.ParamArrayAttribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ParamArrayAttribute__ctor_mCC72AFF718185BA7B87FD8D9471F1274400C5719 (ParamArrayAttribute_t9DCEB4CDDB8EDDB1124171D4C51FA6069EEA5C5F * __this, const RuntimeMethod* method);
// System.Void System.FlagsAttribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FlagsAttribute__ctor_mE8DCBA1BE0E6B0424FEF5E5F249733CF6A0E1229 (FlagsAttribute_t511C558FACEF1CC64702A8FAB67CAF3CBA65DF36 * __this, const RuntimeMethod* method);
// System.Void System.Diagnostics.DebuggerDisplayAttribute::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DebuggerDisplayAttribute__ctor_m870C3A98DA4C9FA7FD4411169AF30C55A90B9988 (DebuggerDisplayAttribute_tA5070C1A6CAB579DAC66A469530D946F6F42727F * __this, String_t* ___value0, const RuntimeMethod* method);
// System.Void System.ObsoleteAttribute::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ObsoleteAttribute__ctor_mAC32A5CCD287DA84CDA9F08282C1C8B0DB7B9868 (ObsoleteAttribute_t14BAC1669C0409EB9F28D72D664FFA6764ACD671 * __this, String_t* ___message0, const RuntimeMethod* method);
static void spineU2Dcsharp_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	{
		CompilationRelaxationsAttribute_t661FDDC06629BDA607A42BD660944F039FE03AFF * tmp = (CompilationRelaxationsAttribute_t661FDDC06629BDA607A42BD660944F039FE03AFF *)cache->attributes[0];
		CompilationRelaxationsAttribute__ctor_mAC3079EBC4EEAB474EED8208EF95DB39C922333B(tmp, 8LL, NULL);
	}
	{
		ExtensionAttribute_t917F3F92E717DC8B2D7BC03967A9790B1B8EF7CC * tmp = (ExtensionAttribute_t917F3F92E717DC8B2D7BC03967A9790B1B8EF7CC *)cache->attributes[1];
		ExtensionAttribute__ctor_mB331519C39C4210259A248A4C629DF934937C1FA(tmp, NULL);
	}
	{
		RuntimeCompatibilityAttribute_tFF99AB2963098F9CBCD47A20D9FD3D51C17C1C80 * tmp = (RuntimeCompatibilityAttribute_tFF99AB2963098F9CBCD47A20D9FD3D51C17C1C80 *)cache->attributes[2];
		RuntimeCompatibilityAttribute__ctor_m551DDF1438CE97A984571949723F30F44CF7317C(tmp, NULL);
		RuntimeCompatibilityAttribute_set_WrapNonExceptionThrows_m8562196F90F3EBCEC23B5708EE0332842883C490_inline(tmp, true, NULL);
	}
	{
		DebuggableAttribute_tA8054EBD0FC7511695D494B690B5771658E3191B * tmp = (DebuggableAttribute_tA8054EBD0FC7511695D494B690B5771658E3191B *)cache->attributes[3];
		DebuggableAttribute__ctor_m7FF445C8435494A4847123A668D889E692E55550(tmp, 2LL, NULL);
	}
}
static void Lexer_t30ED5F10E4FBB764117EAAD898923EA216304188_CustomAttributesCacheGenerator_U3ClineNumberU3Ek__BackingField(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void Lexer_t30ED5F10E4FBB764117EAAD898923EA216304188_CustomAttributesCacheGenerator_U3CparseNumbersAsFloatU3Ek__BackingField(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void Lexer_t30ED5F10E4FBB764117EAAD898923EA216304188_CustomAttributesCacheGenerator_Lexer_get_lineNumber_mCA6A95F5E7740611904508C915772C3F7D2D7FEC(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void Lexer_t30ED5F10E4FBB764117EAAD898923EA216304188_CustomAttributesCacheGenerator_Lexer_set_lineNumber_m1CF5F4867CB70829F9DCA99A107C7BFD6FE111AD(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void Lexer_t30ED5F10E4FBB764117EAAD898923EA216304188_CustomAttributesCacheGenerator_Lexer_get_parseNumbersAsFloat_m1C6DDB7CC456A682FB9B0A60E016CAD05C1FB585(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void Lexer_t30ED5F10E4FBB764117EAAD898923EA216304188_CustomAttributesCacheGenerator_Lexer_set_parseNumbersAsFloat_m37117A0C75115C0687610995F39CA2979BD7B8D5(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void JsonDecoder_t6FDE7FA90439EE4C7C143A0132E64E858D36BF00_CustomAttributesCacheGenerator_U3CerrorMessageU3Ek__BackingField(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void JsonDecoder_t6FDE7FA90439EE4C7C143A0132E64E858D36BF00_CustomAttributesCacheGenerator_U3CparseNumbersAsFloatU3Ek__BackingField(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void JsonDecoder_t6FDE7FA90439EE4C7C143A0132E64E858D36BF00_CustomAttributesCacheGenerator_JsonDecoder_get_errorMessage_mDA07A63BD7FDEA335E94A57E80BC0416F5C007F6(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void JsonDecoder_t6FDE7FA90439EE4C7C143A0132E64E858D36BF00_CustomAttributesCacheGenerator_JsonDecoder_set_errorMessage_mDB39ECDA43F1344DB826667C0A3876A9E6685E4D(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void JsonDecoder_t6FDE7FA90439EE4C7C143A0132E64E858D36BF00_CustomAttributesCacheGenerator_JsonDecoder_get_parseNumbersAsFloat_m59DF8C786E070392D89A142D98E57A0375646CB4(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void JsonDecoder_t6FDE7FA90439EE4C7C143A0132E64E858D36BF00_CustomAttributesCacheGenerator_JsonDecoder_set_parseNumbersAsFloat_mEC23AA5136617ED18835B5D051B6F8E299D5C0A5(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void Timeline_tD8AC6175D8B492C9CDB166AC1FBFEE28A474DAF0_CustomAttributesCacheGenerator_Timeline__ctor_m6D2E9ACCA5676EF9B1F65788F2A02E7BE4B0DCF0____propertyIds1(CustomAttributesCache* cache)
{
	{
		ParamArrayAttribute_t9DCEB4CDDB8EDDB1124171D4C51FA6069EEA5C5F * tmp = (ParamArrayAttribute_t9DCEB4CDDB8EDDB1124171D4C51FA6069EEA5C5F *)cache->attributes[0];
		ParamArrayAttribute__ctor_mCC72AFF718185BA7B87FD8D9471F1274400C5719(tmp, NULL);
	}
}
static void CurveTimeline_t404E642BD4DFEEDB39DBCDC088B7F7E78FAE5476_CustomAttributesCacheGenerator_CurveTimeline__ctor_mAF5F864455A1B5677ED313F38348F08065180211____propertyIds2(CustomAttributesCache* cache)
{
	{
		ParamArrayAttribute_t9DCEB4CDDB8EDDB1124171D4C51FA6069EEA5C5F * tmp = (ParamArrayAttribute_t9DCEB4CDDB8EDDB1124171D4C51FA6069EEA5C5F *)cache->attributes[0];
		ParamArrayAttribute__ctor_mCC72AFF718185BA7B87FD8D9471F1274400C5719(tmp, NULL);
	}
}
static void AnimationState_t332AAD95B62A66DA5C79684B54B6C47145875982_CustomAttributesCacheGenerator_Start(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void AnimationState_t332AAD95B62A66DA5C79684B54B6C47145875982_CustomAttributesCacheGenerator_Interrupt(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void AnimationState_t332AAD95B62A66DA5C79684B54B6C47145875982_CustomAttributesCacheGenerator_End(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void AnimationState_t332AAD95B62A66DA5C79684B54B6C47145875982_CustomAttributesCacheGenerator_Dispose(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void AnimationState_t332AAD95B62A66DA5C79684B54B6C47145875982_CustomAttributesCacheGenerator_Complete(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void AnimationState_t332AAD95B62A66DA5C79684B54B6C47145875982_CustomAttributesCacheGenerator_Event(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void AnimationState_t332AAD95B62A66DA5C79684B54B6C47145875982_CustomAttributesCacheGenerator_AnimationState_add_Start_mFD236F4EC5338AC98B0B92CC0311532FACD92118(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void AnimationState_t332AAD95B62A66DA5C79684B54B6C47145875982_CustomAttributesCacheGenerator_AnimationState_remove_Start_m2A664A8B26A556522E4B336A841EA2129A3BF86C(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void AnimationState_t332AAD95B62A66DA5C79684B54B6C47145875982_CustomAttributesCacheGenerator_AnimationState_add_Interrupt_mA4C87CDEF9C5994BCBDE4D55B0AE5D288D1BCB8C(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void AnimationState_t332AAD95B62A66DA5C79684B54B6C47145875982_CustomAttributesCacheGenerator_AnimationState_remove_Interrupt_m20120D12D7D0A77B34BF046942E4603619850F6B(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void AnimationState_t332AAD95B62A66DA5C79684B54B6C47145875982_CustomAttributesCacheGenerator_AnimationState_add_End_m4B646A2D5859FBA6CE5007E939C2EA7AEAAF2CFA(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void AnimationState_t332AAD95B62A66DA5C79684B54B6C47145875982_CustomAttributesCacheGenerator_AnimationState_remove_End_m8DB8A2F9383ABC8628925AFA48C11F955E387DE5(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void AnimationState_t332AAD95B62A66DA5C79684B54B6C47145875982_CustomAttributesCacheGenerator_AnimationState_add_Dispose_m10CA058DB330B8DCB8965408B0FB0FF2A3D589C6(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void AnimationState_t332AAD95B62A66DA5C79684B54B6C47145875982_CustomAttributesCacheGenerator_AnimationState_remove_Dispose_m3CE9FDAF308606EEE43A46460A178F9BDB943AFE(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void AnimationState_t332AAD95B62A66DA5C79684B54B6C47145875982_CustomAttributesCacheGenerator_AnimationState_add_Complete_mE96A3714EF0A108BAC086BDD0A885F794022A547(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void AnimationState_t332AAD95B62A66DA5C79684B54B6C47145875982_CustomAttributesCacheGenerator_AnimationState_remove_Complete_mCF5B3AE06D61BE2A6E7423264B6E70747002A6F8(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void AnimationState_t332AAD95B62A66DA5C79684B54B6C47145875982_CustomAttributesCacheGenerator_AnimationState_add_Event_m636AAA350AE1E8107F3B87B6FF9E0C541DF9B5DB(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void AnimationState_t332AAD95B62A66DA5C79684B54B6C47145875982_CustomAttributesCacheGenerator_AnimationState_remove_Event_mE334486DD9BDF264A19D1D98CF58449D801EA2EA(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void AnimationState_t332AAD95B62A66DA5C79684B54B6C47145875982_CustomAttributesCacheGenerator_AnimationState_U3C_ctorU3Eb__45_0_m1449A0CF0903F1FF9DCDF79CDB1E6E27504255F0(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void TrackEntry_t8B6FF31E96FE5CFBE3B92DC9E4FB33766342A20D_CustomAttributesCacheGenerator_Start(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void TrackEntry_t8B6FF31E96FE5CFBE3B92DC9E4FB33766342A20D_CustomAttributesCacheGenerator_Interrupt(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void TrackEntry_t8B6FF31E96FE5CFBE3B92DC9E4FB33766342A20D_CustomAttributesCacheGenerator_End(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void TrackEntry_t8B6FF31E96FE5CFBE3B92DC9E4FB33766342A20D_CustomAttributesCacheGenerator_Dispose(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void TrackEntry_t8B6FF31E96FE5CFBE3B92DC9E4FB33766342A20D_CustomAttributesCacheGenerator_Complete(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void TrackEntry_t8B6FF31E96FE5CFBE3B92DC9E4FB33766342A20D_CustomAttributesCacheGenerator_Event(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void TrackEntry_t8B6FF31E96FE5CFBE3B92DC9E4FB33766342A20D_CustomAttributesCacheGenerator_TrackEntry_add_Start_mCE717C069DD3655DC910EE9B3FF0CEACFC951CA5(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void TrackEntry_t8B6FF31E96FE5CFBE3B92DC9E4FB33766342A20D_CustomAttributesCacheGenerator_TrackEntry_remove_Start_m65F68E07B1C272C771310CA3FDC29774BEDD1940(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void TrackEntry_t8B6FF31E96FE5CFBE3B92DC9E4FB33766342A20D_CustomAttributesCacheGenerator_TrackEntry_add_Interrupt_mD5C0E0B941AFA8AC79C3312B9F66122E6C895014(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void TrackEntry_t8B6FF31E96FE5CFBE3B92DC9E4FB33766342A20D_CustomAttributesCacheGenerator_TrackEntry_remove_Interrupt_m72549040248E764CBECA072B8CD6A23926F9B683(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void TrackEntry_t8B6FF31E96FE5CFBE3B92DC9E4FB33766342A20D_CustomAttributesCacheGenerator_TrackEntry_add_End_m280C9C952013BD5227CA91EC26041CE2150C9B55(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void TrackEntry_t8B6FF31E96FE5CFBE3B92DC9E4FB33766342A20D_CustomAttributesCacheGenerator_TrackEntry_remove_End_m0DA87F2F47DE7C29E465D64BE01D6ED36BC39FB6(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void TrackEntry_t8B6FF31E96FE5CFBE3B92DC9E4FB33766342A20D_CustomAttributesCacheGenerator_TrackEntry_add_Dispose_m5FFCB9266A13CBAA3C3EC4A6022F7E6895676333(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void TrackEntry_t8B6FF31E96FE5CFBE3B92DC9E4FB33766342A20D_CustomAttributesCacheGenerator_TrackEntry_remove_Dispose_m5D45FF735C78C5347A9BB2DA11C29B4E2F1EC98A(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void TrackEntry_t8B6FF31E96FE5CFBE3B92DC9E4FB33766342A20D_CustomAttributesCacheGenerator_TrackEntry_add_Complete_mD6B3DCC2CA8931F2C9604DE723599F73921CCF82(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void TrackEntry_t8B6FF31E96FE5CFBE3B92DC9E4FB33766342A20D_CustomAttributesCacheGenerator_TrackEntry_remove_Complete_mFF8045F5CB127DCDBE62F1F931325F220A982B53(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void TrackEntry_t8B6FF31E96FE5CFBE3B92DC9E4FB33766342A20D_CustomAttributesCacheGenerator_TrackEntry_add_Event_m943A7D5198DCE174C60DB03E45338FD07B43247A(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void TrackEntry_t8B6FF31E96FE5CFBE3B92DC9E4FB33766342A20D_CustomAttributesCacheGenerator_TrackEntry_remove_Event_mAAC742CD496D2EAB8660DC2C03875EC37E272D78(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void EventQueue_t5BF46E85FDE217D9D06F856103B77C8B6BED8CEF_CustomAttributesCacheGenerator_AnimationsChanged(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void EventQueue_t5BF46E85FDE217D9D06F856103B77C8B6BED8CEF_CustomAttributesCacheGenerator_EventQueue_add_AnimationsChanged_mD24EFD02892AE3390D21154040605B16CD4A47C1(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void EventQueue_t5BF46E85FDE217D9D06F856103B77C8B6BED8CEF_CustomAttributesCacheGenerator_EventQueue_remove_AnimationsChanged_mE9E419E30DDD5E7E99241E367129F00F70B2B724(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void Pool_1_tA1082CAA11428708F2CACFABFA79CE86EEA7E2E6_CustomAttributesCacheGenerator_U3CPeakU3Ek__BackingField(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void Pool_1_tA1082CAA11428708F2CACFABFA79CE86EEA7E2E6_CustomAttributesCacheGenerator_Pool_1_get_Peak_m339C4A0B75D2E98700C0980D03C2B747BAA4E06C(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void Pool_1_tA1082CAA11428708F2CACFABFA79CE86EEA7E2E6_CustomAttributesCacheGenerator_Pool_1_set_Peak_mCBD381BC93D78506B8389FD40F9E0B116CC7998D(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void HashSetExtensions_t1531DED1FEE5B4632F8F632ADAAA6AB7C3167E37_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	{
		ExtensionAttribute_t917F3F92E717DC8B2D7BC03967A9790B1B8EF7CC * tmp = (ExtensionAttribute_t917F3F92E717DC8B2D7BC03967A9790B1B8EF7CC *)cache->attributes[0];
		ExtensionAttribute__ctor_mB331519C39C4210259A248A4C629DF934937C1FA(tmp, NULL);
	}
}
static void HashSetExtensions_t1531DED1FEE5B4632F8F632ADAAA6AB7C3167E37_CustomAttributesCacheGenerator_HashSetExtensions_AddAll_m159DD605F78B0D6724F9092D51E1D820E05AFC83(CustomAttributesCache* cache)
{
	{
		ExtensionAttribute_t917F3F92E717DC8B2D7BC03967A9790B1B8EF7CC * tmp = (ExtensionAttribute_t917F3F92E717DC8B2D7BC03967A9790B1B8EF7CC *)cache->attributes[0];
		ExtensionAttribute__ctor_mB331519C39C4210259A248A4C629DF934937C1FA(tmp, NULL);
	}
}
static void U3CU3Ec__DisplayClass10_0_tBF5C29B31A8B06822C307D01647CD4603254F201_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void AtlasAttachmentLoader_tB28E6E02881761ED9D51569F2482F0541648A2EB_CustomAttributesCacheGenerator_AtlasAttachmentLoader__ctor_m98B92E1D1CEC277E3C735246B6B0072351842800____atlasArray0(CustomAttributesCache* cache)
{
	{
		ParamArrayAttribute_t9DCEB4CDDB8EDDB1124171D4C51FA6069EEA5C5F * tmp = (ParamArrayAttribute_t9DCEB4CDDB8EDDB1124171D4C51FA6069EEA5C5F *)cache->attributes[0];
		ParamArrayAttribute__ctor_mCC72AFF718185BA7B87FD8D9471F1274400C5719(tmp, NULL);
	}
}
static void Attachment_tA85256BF51006C369687395955B6A6B51D432F21_CustomAttributesCacheGenerator_U3CNameU3Ek__BackingField(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void Attachment_tA85256BF51006C369687395955B6A6B51D432F21_CustomAttributesCacheGenerator_Attachment_get_Name_m0DAFC8B199AA31074FC2232C9E6F46ACE883AE50(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void Attachment_tA85256BF51006C369687395955B6A6B51D432F21_CustomAttributesCacheGenerator_Attachment_set_Name_m7097A4ABC3DF401F1B4CAD4E75D5BEB74B799CF0(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void MeshAttachment_t928FE10280A3D4F1648B7D18B42C04515C08F990_CustomAttributesCacheGenerator_U3CPathU3Ek__BackingField(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void MeshAttachment_t928FE10280A3D4F1648B7D18B42C04515C08F990_CustomAttributesCacheGenerator_U3CRendererObjectU3Ek__BackingField(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void MeshAttachment_t928FE10280A3D4F1648B7D18B42C04515C08F990_CustomAttributesCacheGenerator_U3CRegionUU3Ek__BackingField(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void MeshAttachment_t928FE10280A3D4F1648B7D18B42C04515C08F990_CustomAttributesCacheGenerator_U3CRegionVU3Ek__BackingField(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void MeshAttachment_t928FE10280A3D4F1648B7D18B42C04515C08F990_CustomAttributesCacheGenerator_U3CRegionU2U3Ek__BackingField(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void MeshAttachment_t928FE10280A3D4F1648B7D18B42C04515C08F990_CustomAttributesCacheGenerator_U3CRegionV2U3Ek__BackingField(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void MeshAttachment_t928FE10280A3D4F1648B7D18B42C04515C08F990_CustomAttributesCacheGenerator_U3CRegionDegreesU3Ek__BackingField(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void MeshAttachment_t928FE10280A3D4F1648B7D18B42C04515C08F990_CustomAttributesCacheGenerator_U3CEdgesU3Ek__BackingField(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void MeshAttachment_t928FE10280A3D4F1648B7D18B42C04515C08F990_CustomAttributesCacheGenerator_U3CWidthU3Ek__BackingField(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void MeshAttachment_t928FE10280A3D4F1648B7D18B42C04515C08F990_CustomAttributesCacheGenerator_U3CHeightU3Ek__BackingField(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void MeshAttachment_t928FE10280A3D4F1648B7D18B42C04515C08F990_CustomAttributesCacheGenerator_MeshAttachment_get_Path_m7FB6C718570587026260C35E294209557FAE26F2(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void MeshAttachment_t928FE10280A3D4F1648B7D18B42C04515C08F990_CustomAttributesCacheGenerator_MeshAttachment_set_Path_m7A0C1513407EBB1111D7587C3F6907A1D9C56D66(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void MeshAttachment_t928FE10280A3D4F1648B7D18B42C04515C08F990_CustomAttributesCacheGenerator_MeshAttachment_get_RendererObject_mA8649EE6446C8C35AF9C4B630F94F1EF5824DE77(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void MeshAttachment_t928FE10280A3D4F1648B7D18B42C04515C08F990_CustomAttributesCacheGenerator_MeshAttachment_set_RendererObject_m665077255EE8D07350ACEE0127DC7014CF357E8F(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void MeshAttachment_t928FE10280A3D4F1648B7D18B42C04515C08F990_CustomAttributesCacheGenerator_MeshAttachment_get_RegionU_mB1D07E550C58E2A9AF9417A69E2D6A2A69B08998(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void MeshAttachment_t928FE10280A3D4F1648B7D18B42C04515C08F990_CustomAttributesCacheGenerator_MeshAttachment_set_RegionU_m1BF8333DB75EB1216C275E67BAAD54E9F3306F4F(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void MeshAttachment_t928FE10280A3D4F1648B7D18B42C04515C08F990_CustomAttributesCacheGenerator_MeshAttachment_get_RegionV_mCEE303071035A492E1254C090B58BCC17506341E(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void MeshAttachment_t928FE10280A3D4F1648B7D18B42C04515C08F990_CustomAttributesCacheGenerator_MeshAttachment_set_RegionV_m0263E8A7B97B98498D2504F76B5A2244E65C7C92(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void MeshAttachment_t928FE10280A3D4F1648B7D18B42C04515C08F990_CustomAttributesCacheGenerator_MeshAttachment_get_RegionU2_mC684906C07B09B0B5A01C647E53BE6CFC5DB3F55(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void MeshAttachment_t928FE10280A3D4F1648B7D18B42C04515C08F990_CustomAttributesCacheGenerator_MeshAttachment_set_RegionU2_mD9C60FFF2CE690D9EA7C6D53CF38C8096769D37F(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void MeshAttachment_t928FE10280A3D4F1648B7D18B42C04515C08F990_CustomAttributesCacheGenerator_MeshAttachment_get_RegionV2_m90DC55C6344F36A615479C5A354CD49D9FAD0C3B(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void MeshAttachment_t928FE10280A3D4F1648B7D18B42C04515C08F990_CustomAttributesCacheGenerator_MeshAttachment_set_RegionV2_m197008D7EEA8BBF5230BF58B1747926CC2DEA5E6(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void MeshAttachment_t928FE10280A3D4F1648B7D18B42C04515C08F990_CustomAttributesCacheGenerator_MeshAttachment_get_RegionDegrees_m512B2D8EE863EEE993B3EE7A8B5EF08568687EA4(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void MeshAttachment_t928FE10280A3D4F1648B7D18B42C04515C08F990_CustomAttributesCacheGenerator_MeshAttachment_set_RegionDegrees_m2A68154822ED25AD31E1CADA96E2E5E337194AE5(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void MeshAttachment_t928FE10280A3D4F1648B7D18B42C04515C08F990_CustomAttributesCacheGenerator_MeshAttachment_get_Edges_m351534CD4EE53FC1A8C08B9A61723243D0D8783D(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void MeshAttachment_t928FE10280A3D4F1648B7D18B42C04515C08F990_CustomAttributesCacheGenerator_MeshAttachment_set_Edges_mDC0436E0018B2D4BD9DCB457F45401EB391CE5CA(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void MeshAttachment_t928FE10280A3D4F1648B7D18B42C04515C08F990_CustomAttributesCacheGenerator_MeshAttachment_get_Width_m4452600A793BF78F6D1E75F8F2DFC9B4910715B3(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void MeshAttachment_t928FE10280A3D4F1648B7D18B42C04515C08F990_CustomAttributesCacheGenerator_MeshAttachment_set_Width_m0826A18D8EA7F063B8BE89CCE37B6EF7DD1A36CE(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void MeshAttachment_t928FE10280A3D4F1648B7D18B42C04515C08F990_CustomAttributesCacheGenerator_MeshAttachment_get_Height_mFA877473CD03BDFAE6C0A3354F7EB8AAF68482D8(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void MeshAttachment_t928FE10280A3D4F1648B7D18B42C04515C08F990_CustomAttributesCacheGenerator_MeshAttachment_set_Height_m511A431F374B26BD119132A2210A08133C5C7FC5(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void RegionAttachment_t11A283AF336D2A7148E059CED781E01BEEE7830E_CustomAttributesCacheGenerator_U3CPathU3Ek__BackingField(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void RegionAttachment_t11A283AF336D2A7148E059CED781E01BEEE7830E_CustomAttributesCacheGenerator_U3CRendererObjectU3Ek__BackingField(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void RegionAttachment_t11A283AF336D2A7148E059CED781E01BEEE7830E_CustomAttributesCacheGenerator_RegionAttachment_get_Path_m4E7875166074A4976E5111BBC0B309D500C0FA66(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void RegionAttachment_t11A283AF336D2A7148E059CED781E01BEEE7830E_CustomAttributesCacheGenerator_RegionAttachment_set_Path_m0798E368A58A945C8E6AFC3DA17BCA320C0FA465(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void RegionAttachment_t11A283AF336D2A7148E059CED781E01BEEE7830E_CustomAttributesCacheGenerator_RegionAttachment_get_RendererObject_m7C8A6C8920AF6F71A1AF06BB99B895055F2E2AF1(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void RegionAttachment_t11A283AF336D2A7148E059CED781E01BEEE7830E_CustomAttributesCacheGenerator_RegionAttachment_set_RendererObject_mDA82B9AFD9FA9984D32F124B347976C160AED3CE(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void TransformMode_tBEB67F6A155D0D6CBEF8804197EBEA4DD0F343BA_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	{
		FlagsAttribute_t511C558FACEF1CC64702A8FAB67CAF3CBA65DF36 * tmp = (FlagsAttribute_t511C558FACEF1CC64702A8FAB67CAF3CBA65DF36 *)cache->attributes[0];
		FlagsAttribute__ctor_mE8DCBA1BE0E6B0424FEF5E5F249733CF6A0E1229(tmp, NULL);
	}
}
static void EventData_tE551728B1B00610B27E05B1F8C5E64F2A42163E5_CustomAttributesCacheGenerator_U3CIntU3Ek__BackingField(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void EventData_tE551728B1B00610B27E05B1F8C5E64F2A42163E5_CustomAttributesCacheGenerator_U3CFloatU3Ek__BackingField(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void EventData_tE551728B1B00610B27E05B1F8C5E64F2A42163E5_CustomAttributesCacheGenerator_U3CStringU3Ek__BackingField(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void EventData_tE551728B1B00610B27E05B1F8C5E64F2A42163E5_CustomAttributesCacheGenerator_U3CAudioPathU3Ek__BackingField(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void EventData_tE551728B1B00610B27E05B1F8C5E64F2A42163E5_CustomAttributesCacheGenerator_U3CVolumeU3Ek__BackingField(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void EventData_tE551728B1B00610B27E05B1F8C5E64F2A42163E5_CustomAttributesCacheGenerator_U3CBalanceU3Ek__BackingField(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void EventData_tE551728B1B00610B27E05B1F8C5E64F2A42163E5_CustomAttributesCacheGenerator_EventData_get_Int_mF161AFBBBFDE59B18E5F1317428587F60F8EA815(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void EventData_tE551728B1B00610B27E05B1F8C5E64F2A42163E5_CustomAttributesCacheGenerator_EventData_set_Int_mDBD78E97A4FA45EF56E4B6B298C1B0BA8F2766D4(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void EventData_tE551728B1B00610B27E05B1F8C5E64F2A42163E5_CustomAttributesCacheGenerator_EventData_get_Float_mE5D19A46F77541A33B6CCCC18B494B6FC8DCEB7C(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void EventData_tE551728B1B00610B27E05B1F8C5E64F2A42163E5_CustomAttributesCacheGenerator_EventData_set_Float_m98E09F7F3BF2D73F065A43ECCDF74A80B1E42ACE(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void EventData_tE551728B1B00610B27E05B1F8C5E64F2A42163E5_CustomAttributesCacheGenerator_EventData_get_String_m0300CF1F9A59FA09F686A55B74AF52B33C6B9A92(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void EventData_tE551728B1B00610B27E05B1F8C5E64F2A42163E5_CustomAttributesCacheGenerator_EventData_set_String_mCBA0689CB919A926CD15D00CCF7751DD15D55601(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void EventData_tE551728B1B00610B27E05B1F8C5E64F2A42163E5_CustomAttributesCacheGenerator_EventData_get_AudioPath_m8E216C816713FB1DD05B771395A574BC6F051491(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void EventData_tE551728B1B00610B27E05B1F8C5E64F2A42163E5_CustomAttributesCacheGenerator_EventData_set_AudioPath_m557DCD8626A574755300236BADD644E7B3B3BB92(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void EventData_tE551728B1B00610B27E05B1F8C5E64F2A42163E5_CustomAttributesCacheGenerator_EventData_get_Volume_m0EE44FF955858CF130A186E2A13EED2A30AB0E55(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void EventData_tE551728B1B00610B27E05B1F8C5E64F2A42163E5_CustomAttributesCacheGenerator_EventData_set_Volume_m2C85157076E6FA5910F87C04083AB3D8454651D4(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void EventData_tE551728B1B00610B27E05B1F8C5E64F2A42163E5_CustomAttributesCacheGenerator_EventData_get_Balance_m6A47AF101F656A5D88BA5E02A51848471F5CCE5D(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void EventData_tE551728B1B00610B27E05B1F8C5E64F2A42163E5_CustomAttributesCacheGenerator_EventData_set_Balance_m40516E79841C4E87C1DB0E3158919E7FB90A8407(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void ExposedList_1_tBBF73AC3DB2346E6AF8F9549BDFC95C1682DF6AF_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	{
		DebuggerDisplayAttribute_tA5070C1A6CAB579DAC66A469530D946F6F42727F * tmp = (DebuggerDisplayAttribute_tA5070C1A6CAB579DAC66A469530D946F6F42727F *)cache->attributes[0];
		DebuggerDisplayAttribute__ctor_m870C3A98DA4C9FA7FD4411169AF30C55A90B9988(tmp, il2cpp_codegen_string_new_wrapper("\x43\x6F\x75\x6E\x74\x3D\x7B\x43\x6F\x75\x6E\x74\x7D"), NULL);
	}
}
static void Pow_t58B0ABB28362DEF85FBD9A4C44CD03B23E0D721D_CustomAttributesCacheGenerator_U3CPowerU3Ek__BackingField(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void Pow_t58B0ABB28362DEF85FBD9A4C44CD03B23E0D721D_CustomAttributesCacheGenerator_Pow_get_Power_m19849A28BCC7B8A284E27528F26FD402873EA053(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void Pow_t58B0ABB28362DEF85FBD9A4C44CD03B23E0D721D_CustomAttributesCacheGenerator_Pow_set_Power_m8661D2CE9DC8ECE168C058EBC8D57C58D0CA9E35(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void Skeleton_tA4F63D1CB185D30296FA5323E1DA8B993E21293C_CustomAttributesCacheGenerator_Skeleton_tA4F63D1CB185D30296FA5323E1DA8B993E21293C____FlipX_PropertyInfo(CustomAttributesCache* cache)
{
	{
		ObsoleteAttribute_t14BAC1669C0409EB9F28D72D664FFA6764ACD671 * tmp = (ObsoleteAttribute_t14BAC1669C0409EB9F28D72D664FFA6764ACD671 *)cache->attributes[0];
		ObsoleteAttribute__ctor_mAC32A5CCD287DA84CDA9F08282C1C8B0DB7B9868(tmp, il2cpp_codegen_string_new_wrapper("\x55\x73\x65\x20\x53\x63\x61\x6C\x65\x58\x20\x69\x6E\x73\x74\x65\x61\x64\x2E\x20\x46\x6C\x69\x70\x58\x20\x69\x73\x20\x77\x68\x65\x6E\x20\x53\x63\x61\x6C\x65\x58\x20\x69\x73\x20\x6E\x65\x67\x61\x74\x69\x76\x65\x2E"), NULL);
	}
}
static void Skeleton_tA4F63D1CB185D30296FA5323E1DA8B993E21293C_CustomAttributesCacheGenerator_Skeleton_tA4F63D1CB185D30296FA5323E1DA8B993E21293C____FlipY_PropertyInfo(CustomAttributesCache* cache)
{
	{
		ObsoleteAttribute_t14BAC1669C0409EB9F28D72D664FFA6764ACD671 * tmp = (ObsoleteAttribute_t14BAC1669C0409EB9F28D72D664FFA6764ACD671 *)cache->attributes[0];
		ObsoleteAttribute__ctor_mAC32A5CCD287DA84CDA9F08282C1C8B0DB7B9868(tmp, il2cpp_codegen_string_new_wrapper("\x55\x73\x65\x20\x53\x63\x61\x6C\x65\x59\x20\x69\x6E\x73\x74\x65\x61\x64\x2E\x20\x46\x6C\x69\x70\x59\x20\x69\x73\x20\x77\x68\x65\x6E\x20\x53\x63\x61\x6C\x65\x59\x20\x69\x73\x20\x6E\x65\x67\x61\x74\x69\x76\x65\x2E"), NULL);
	}
}
static void SkeletonBinary_tDB857F725DBE67AB0243E33AF2DDD2850C629C18_CustomAttributesCacheGenerator_SkeletonBinary__ctor_mC535F6802C6B06350618A56D0788DCABB2A6455E____atlasArray0(CustomAttributesCache* cache)
{
	{
		ParamArrayAttribute_t9DCEB4CDDB8EDDB1124171D4C51FA6069EEA5C5F * tmp = (ParamArrayAttribute_t9DCEB4CDDB8EDDB1124171D4C51FA6069EEA5C5F *)cache->attributes[0];
		ParamArrayAttribute__ctor_mCC72AFF718185BA7B87FD8D9471F1274400C5719(tmp, NULL);
	}
}
static void SkeletonBounds_t3CBFC1A4FEBD010C33DE392B0360584C92E3CE02_CustomAttributesCacheGenerator_U3CBoundingBoxesU3Ek__BackingField(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void SkeletonBounds_t3CBFC1A4FEBD010C33DE392B0360584C92E3CE02_CustomAttributesCacheGenerator_U3CPolygonsU3Ek__BackingField(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void SkeletonBounds_t3CBFC1A4FEBD010C33DE392B0360584C92E3CE02_CustomAttributesCacheGenerator_SkeletonBounds_get_BoundingBoxes_mA35DEC577418DEC31FD550D90E3D09CD6F4E9497(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void SkeletonBounds_t3CBFC1A4FEBD010C33DE392B0360584C92E3CE02_CustomAttributesCacheGenerator_SkeletonBounds_set_BoundingBoxes_m5D9DFFB278EED74CD085B12B93EFFD7174FBE87C(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void SkeletonBounds_t3CBFC1A4FEBD010C33DE392B0360584C92E3CE02_CustomAttributesCacheGenerator_SkeletonBounds_get_Polygons_m3EB04148D7DBBE8DC6FD807E0F5CF78E65CA5439(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void SkeletonBounds_t3CBFC1A4FEBD010C33DE392B0360584C92E3CE02_CustomAttributesCacheGenerator_SkeletonBounds_set_Polygons_m476D963ECB41DD803BC2C4B74AF39448F5FBDE10(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void Polygon_tB9B5EA9947CA20AC02C62C18CCAFB82D697F2397_CustomAttributesCacheGenerator_U3CVerticesU3Ek__BackingField(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void Polygon_tB9B5EA9947CA20AC02C62C18CCAFB82D697F2397_CustomAttributesCacheGenerator_U3CCountU3Ek__BackingField(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void Polygon_tB9B5EA9947CA20AC02C62C18CCAFB82D697F2397_CustomAttributesCacheGenerator_Polygon_get_Vertices_m8E31D84978191249FB1FF81637BFB27BBAE4BFAC(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void Polygon_tB9B5EA9947CA20AC02C62C18CCAFB82D697F2397_CustomAttributesCacheGenerator_Polygon_set_Vertices_m58834A246CA96BBCB6B2BFFB814BB1428AB1D636(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void Polygon_tB9B5EA9947CA20AC02C62C18CCAFB82D697F2397_CustomAttributesCacheGenerator_Polygon_get_Count_m1E62E8314F2DFAF2CF33341EC16793737155E6B7(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void Polygon_tB9B5EA9947CA20AC02C62C18CCAFB82D697F2397_CustomAttributesCacheGenerator_Polygon_set_Count_m6A147CD8D1DC6799F3367C8CA3526AC1B9E2FAEB(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void SkeletonJson_t0FCF0B3D9BD186D0EB9A9EEA5CB1B5B577C6B487_CustomAttributesCacheGenerator_SkeletonJson__ctor_m97A526BB2A981A69BCD2BBB8A7E00F94E1E370C0____atlasArray0(CustomAttributesCache* cache)
{
	{
		ParamArrayAttribute_t9DCEB4CDDB8EDDB1124171D4C51FA6069EEA5C5F * tmp = (ParamArrayAttribute_t9DCEB4CDDB8EDDB1124171D4C51FA6069EEA5C5F *)cache->attributes[0];
		ParamArrayAttribute__ctor_mCC72AFF718185BA7B87FD8D9471F1274400C5719(tmp, NULL);
	}
}
static void SkeletonLoader_tC945FF227997A6BAC350D4986BD091BE8BB4B36F_CustomAttributesCacheGenerator_SkeletonLoader__ctor_m60C437EF719C5B7BFD439B915A6A4E528DC3AADF____atlasArray0(CustomAttributesCache* cache)
{
	{
		ParamArrayAttribute_t9DCEB4CDDB8EDDB1124171D4C51FA6069EEA5C5F * tmp = (ParamArrayAttribute_t9DCEB4CDDB8EDDB1124171D4C51FA6069EEA5C5F *)cache->attributes[0];
		ParamArrayAttribute__ctor_mCC72AFF718185BA7B87FD8D9471F1274400C5719(tmp, NULL);
	}
}
static void U3CPrivateImplementationDetailsU3E_tFAFBD7D1D91541922E6B4E14C47256ADE0E39E01_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
IL2CPP_EXTERN_C const CustomAttributesCacheGenerator g_spineU2Dcsharp_AttributeGenerators[];
const CustomAttributesCacheGenerator g_spineU2Dcsharp_AttributeGenerators[142] = 
{
	HashSetExtensions_t1531DED1FEE5B4632F8F632ADAAA6AB7C3167E37_CustomAttributesCacheGenerator,
	U3CU3Ec__DisplayClass10_0_tBF5C29B31A8B06822C307D01647CD4603254F201_CustomAttributesCacheGenerator,
	TransformMode_tBEB67F6A155D0D6CBEF8804197EBEA4DD0F343BA_CustomAttributesCacheGenerator,
	ExposedList_1_tBBF73AC3DB2346E6AF8F9549BDFC95C1682DF6AF_CustomAttributesCacheGenerator,
	U3CPrivateImplementationDetailsU3E_tFAFBD7D1D91541922E6B4E14C47256ADE0E39E01_CustomAttributesCacheGenerator,
	Lexer_t30ED5F10E4FBB764117EAAD898923EA216304188_CustomAttributesCacheGenerator_U3ClineNumberU3Ek__BackingField,
	Lexer_t30ED5F10E4FBB764117EAAD898923EA216304188_CustomAttributesCacheGenerator_U3CparseNumbersAsFloatU3Ek__BackingField,
	JsonDecoder_t6FDE7FA90439EE4C7C143A0132E64E858D36BF00_CustomAttributesCacheGenerator_U3CerrorMessageU3Ek__BackingField,
	JsonDecoder_t6FDE7FA90439EE4C7C143A0132E64E858D36BF00_CustomAttributesCacheGenerator_U3CparseNumbersAsFloatU3Ek__BackingField,
	AnimationState_t332AAD95B62A66DA5C79684B54B6C47145875982_CustomAttributesCacheGenerator_Start,
	AnimationState_t332AAD95B62A66DA5C79684B54B6C47145875982_CustomAttributesCacheGenerator_Interrupt,
	AnimationState_t332AAD95B62A66DA5C79684B54B6C47145875982_CustomAttributesCacheGenerator_End,
	AnimationState_t332AAD95B62A66DA5C79684B54B6C47145875982_CustomAttributesCacheGenerator_Dispose,
	AnimationState_t332AAD95B62A66DA5C79684B54B6C47145875982_CustomAttributesCacheGenerator_Complete,
	AnimationState_t332AAD95B62A66DA5C79684B54B6C47145875982_CustomAttributesCacheGenerator_Event,
	TrackEntry_t8B6FF31E96FE5CFBE3B92DC9E4FB33766342A20D_CustomAttributesCacheGenerator_Start,
	TrackEntry_t8B6FF31E96FE5CFBE3B92DC9E4FB33766342A20D_CustomAttributesCacheGenerator_Interrupt,
	TrackEntry_t8B6FF31E96FE5CFBE3B92DC9E4FB33766342A20D_CustomAttributesCacheGenerator_End,
	TrackEntry_t8B6FF31E96FE5CFBE3B92DC9E4FB33766342A20D_CustomAttributesCacheGenerator_Dispose,
	TrackEntry_t8B6FF31E96FE5CFBE3B92DC9E4FB33766342A20D_CustomAttributesCacheGenerator_Complete,
	TrackEntry_t8B6FF31E96FE5CFBE3B92DC9E4FB33766342A20D_CustomAttributesCacheGenerator_Event,
	EventQueue_t5BF46E85FDE217D9D06F856103B77C8B6BED8CEF_CustomAttributesCacheGenerator_AnimationsChanged,
	Pool_1_tA1082CAA11428708F2CACFABFA79CE86EEA7E2E6_CustomAttributesCacheGenerator_U3CPeakU3Ek__BackingField,
	Attachment_tA85256BF51006C369687395955B6A6B51D432F21_CustomAttributesCacheGenerator_U3CNameU3Ek__BackingField,
	MeshAttachment_t928FE10280A3D4F1648B7D18B42C04515C08F990_CustomAttributesCacheGenerator_U3CPathU3Ek__BackingField,
	MeshAttachment_t928FE10280A3D4F1648B7D18B42C04515C08F990_CustomAttributesCacheGenerator_U3CRendererObjectU3Ek__BackingField,
	MeshAttachment_t928FE10280A3D4F1648B7D18B42C04515C08F990_CustomAttributesCacheGenerator_U3CRegionUU3Ek__BackingField,
	MeshAttachment_t928FE10280A3D4F1648B7D18B42C04515C08F990_CustomAttributesCacheGenerator_U3CRegionVU3Ek__BackingField,
	MeshAttachment_t928FE10280A3D4F1648B7D18B42C04515C08F990_CustomAttributesCacheGenerator_U3CRegionU2U3Ek__BackingField,
	MeshAttachment_t928FE10280A3D4F1648B7D18B42C04515C08F990_CustomAttributesCacheGenerator_U3CRegionV2U3Ek__BackingField,
	MeshAttachment_t928FE10280A3D4F1648B7D18B42C04515C08F990_CustomAttributesCacheGenerator_U3CRegionDegreesU3Ek__BackingField,
	MeshAttachment_t928FE10280A3D4F1648B7D18B42C04515C08F990_CustomAttributesCacheGenerator_U3CEdgesU3Ek__BackingField,
	MeshAttachment_t928FE10280A3D4F1648B7D18B42C04515C08F990_CustomAttributesCacheGenerator_U3CWidthU3Ek__BackingField,
	MeshAttachment_t928FE10280A3D4F1648B7D18B42C04515C08F990_CustomAttributesCacheGenerator_U3CHeightU3Ek__BackingField,
	RegionAttachment_t11A283AF336D2A7148E059CED781E01BEEE7830E_CustomAttributesCacheGenerator_U3CPathU3Ek__BackingField,
	RegionAttachment_t11A283AF336D2A7148E059CED781E01BEEE7830E_CustomAttributesCacheGenerator_U3CRendererObjectU3Ek__BackingField,
	EventData_tE551728B1B00610B27E05B1F8C5E64F2A42163E5_CustomAttributesCacheGenerator_U3CIntU3Ek__BackingField,
	EventData_tE551728B1B00610B27E05B1F8C5E64F2A42163E5_CustomAttributesCacheGenerator_U3CFloatU3Ek__BackingField,
	EventData_tE551728B1B00610B27E05B1F8C5E64F2A42163E5_CustomAttributesCacheGenerator_U3CStringU3Ek__BackingField,
	EventData_tE551728B1B00610B27E05B1F8C5E64F2A42163E5_CustomAttributesCacheGenerator_U3CAudioPathU3Ek__BackingField,
	EventData_tE551728B1B00610B27E05B1F8C5E64F2A42163E5_CustomAttributesCacheGenerator_U3CVolumeU3Ek__BackingField,
	EventData_tE551728B1B00610B27E05B1F8C5E64F2A42163E5_CustomAttributesCacheGenerator_U3CBalanceU3Ek__BackingField,
	Pow_t58B0ABB28362DEF85FBD9A4C44CD03B23E0D721D_CustomAttributesCacheGenerator_U3CPowerU3Ek__BackingField,
	SkeletonBounds_t3CBFC1A4FEBD010C33DE392B0360584C92E3CE02_CustomAttributesCacheGenerator_U3CBoundingBoxesU3Ek__BackingField,
	SkeletonBounds_t3CBFC1A4FEBD010C33DE392B0360584C92E3CE02_CustomAttributesCacheGenerator_U3CPolygonsU3Ek__BackingField,
	Polygon_tB9B5EA9947CA20AC02C62C18CCAFB82D697F2397_CustomAttributesCacheGenerator_U3CVerticesU3Ek__BackingField,
	Polygon_tB9B5EA9947CA20AC02C62C18CCAFB82D697F2397_CustomAttributesCacheGenerator_U3CCountU3Ek__BackingField,
	Lexer_t30ED5F10E4FBB764117EAAD898923EA216304188_CustomAttributesCacheGenerator_Lexer_get_lineNumber_mCA6A95F5E7740611904508C915772C3F7D2D7FEC,
	Lexer_t30ED5F10E4FBB764117EAAD898923EA216304188_CustomAttributesCacheGenerator_Lexer_set_lineNumber_m1CF5F4867CB70829F9DCA99A107C7BFD6FE111AD,
	Lexer_t30ED5F10E4FBB764117EAAD898923EA216304188_CustomAttributesCacheGenerator_Lexer_get_parseNumbersAsFloat_m1C6DDB7CC456A682FB9B0A60E016CAD05C1FB585,
	Lexer_t30ED5F10E4FBB764117EAAD898923EA216304188_CustomAttributesCacheGenerator_Lexer_set_parseNumbersAsFloat_m37117A0C75115C0687610995F39CA2979BD7B8D5,
	JsonDecoder_t6FDE7FA90439EE4C7C143A0132E64E858D36BF00_CustomAttributesCacheGenerator_JsonDecoder_get_errorMessage_mDA07A63BD7FDEA335E94A57E80BC0416F5C007F6,
	JsonDecoder_t6FDE7FA90439EE4C7C143A0132E64E858D36BF00_CustomAttributesCacheGenerator_JsonDecoder_set_errorMessage_mDB39ECDA43F1344DB826667C0A3876A9E6685E4D,
	JsonDecoder_t6FDE7FA90439EE4C7C143A0132E64E858D36BF00_CustomAttributesCacheGenerator_JsonDecoder_get_parseNumbersAsFloat_m59DF8C786E070392D89A142D98E57A0375646CB4,
	JsonDecoder_t6FDE7FA90439EE4C7C143A0132E64E858D36BF00_CustomAttributesCacheGenerator_JsonDecoder_set_parseNumbersAsFloat_mEC23AA5136617ED18835B5D051B6F8E299D5C0A5,
	AnimationState_t332AAD95B62A66DA5C79684B54B6C47145875982_CustomAttributesCacheGenerator_AnimationState_add_Start_mFD236F4EC5338AC98B0B92CC0311532FACD92118,
	AnimationState_t332AAD95B62A66DA5C79684B54B6C47145875982_CustomAttributesCacheGenerator_AnimationState_remove_Start_m2A664A8B26A556522E4B336A841EA2129A3BF86C,
	AnimationState_t332AAD95B62A66DA5C79684B54B6C47145875982_CustomAttributesCacheGenerator_AnimationState_add_Interrupt_mA4C87CDEF9C5994BCBDE4D55B0AE5D288D1BCB8C,
	AnimationState_t332AAD95B62A66DA5C79684B54B6C47145875982_CustomAttributesCacheGenerator_AnimationState_remove_Interrupt_m20120D12D7D0A77B34BF046942E4603619850F6B,
	AnimationState_t332AAD95B62A66DA5C79684B54B6C47145875982_CustomAttributesCacheGenerator_AnimationState_add_End_m4B646A2D5859FBA6CE5007E939C2EA7AEAAF2CFA,
	AnimationState_t332AAD95B62A66DA5C79684B54B6C47145875982_CustomAttributesCacheGenerator_AnimationState_remove_End_m8DB8A2F9383ABC8628925AFA48C11F955E387DE5,
	AnimationState_t332AAD95B62A66DA5C79684B54B6C47145875982_CustomAttributesCacheGenerator_AnimationState_add_Dispose_m10CA058DB330B8DCB8965408B0FB0FF2A3D589C6,
	AnimationState_t332AAD95B62A66DA5C79684B54B6C47145875982_CustomAttributesCacheGenerator_AnimationState_remove_Dispose_m3CE9FDAF308606EEE43A46460A178F9BDB943AFE,
	AnimationState_t332AAD95B62A66DA5C79684B54B6C47145875982_CustomAttributesCacheGenerator_AnimationState_add_Complete_mE96A3714EF0A108BAC086BDD0A885F794022A547,
	AnimationState_t332AAD95B62A66DA5C79684B54B6C47145875982_CustomAttributesCacheGenerator_AnimationState_remove_Complete_mCF5B3AE06D61BE2A6E7423264B6E70747002A6F8,
	AnimationState_t332AAD95B62A66DA5C79684B54B6C47145875982_CustomAttributesCacheGenerator_AnimationState_add_Event_m636AAA350AE1E8107F3B87B6FF9E0C541DF9B5DB,
	AnimationState_t332AAD95B62A66DA5C79684B54B6C47145875982_CustomAttributesCacheGenerator_AnimationState_remove_Event_mE334486DD9BDF264A19D1D98CF58449D801EA2EA,
	AnimationState_t332AAD95B62A66DA5C79684B54B6C47145875982_CustomAttributesCacheGenerator_AnimationState_U3C_ctorU3Eb__45_0_m1449A0CF0903F1FF9DCDF79CDB1E6E27504255F0,
	TrackEntry_t8B6FF31E96FE5CFBE3B92DC9E4FB33766342A20D_CustomAttributesCacheGenerator_TrackEntry_add_Start_mCE717C069DD3655DC910EE9B3FF0CEACFC951CA5,
	TrackEntry_t8B6FF31E96FE5CFBE3B92DC9E4FB33766342A20D_CustomAttributesCacheGenerator_TrackEntry_remove_Start_m65F68E07B1C272C771310CA3FDC29774BEDD1940,
	TrackEntry_t8B6FF31E96FE5CFBE3B92DC9E4FB33766342A20D_CustomAttributesCacheGenerator_TrackEntry_add_Interrupt_mD5C0E0B941AFA8AC79C3312B9F66122E6C895014,
	TrackEntry_t8B6FF31E96FE5CFBE3B92DC9E4FB33766342A20D_CustomAttributesCacheGenerator_TrackEntry_remove_Interrupt_m72549040248E764CBECA072B8CD6A23926F9B683,
	TrackEntry_t8B6FF31E96FE5CFBE3B92DC9E4FB33766342A20D_CustomAttributesCacheGenerator_TrackEntry_add_End_m280C9C952013BD5227CA91EC26041CE2150C9B55,
	TrackEntry_t8B6FF31E96FE5CFBE3B92DC9E4FB33766342A20D_CustomAttributesCacheGenerator_TrackEntry_remove_End_m0DA87F2F47DE7C29E465D64BE01D6ED36BC39FB6,
	TrackEntry_t8B6FF31E96FE5CFBE3B92DC9E4FB33766342A20D_CustomAttributesCacheGenerator_TrackEntry_add_Dispose_m5FFCB9266A13CBAA3C3EC4A6022F7E6895676333,
	TrackEntry_t8B6FF31E96FE5CFBE3B92DC9E4FB33766342A20D_CustomAttributesCacheGenerator_TrackEntry_remove_Dispose_m5D45FF735C78C5347A9BB2DA11C29B4E2F1EC98A,
	TrackEntry_t8B6FF31E96FE5CFBE3B92DC9E4FB33766342A20D_CustomAttributesCacheGenerator_TrackEntry_add_Complete_mD6B3DCC2CA8931F2C9604DE723599F73921CCF82,
	TrackEntry_t8B6FF31E96FE5CFBE3B92DC9E4FB33766342A20D_CustomAttributesCacheGenerator_TrackEntry_remove_Complete_mFF8045F5CB127DCDBE62F1F931325F220A982B53,
	TrackEntry_t8B6FF31E96FE5CFBE3B92DC9E4FB33766342A20D_CustomAttributesCacheGenerator_TrackEntry_add_Event_m943A7D5198DCE174C60DB03E45338FD07B43247A,
	TrackEntry_t8B6FF31E96FE5CFBE3B92DC9E4FB33766342A20D_CustomAttributesCacheGenerator_TrackEntry_remove_Event_mAAC742CD496D2EAB8660DC2C03875EC37E272D78,
	EventQueue_t5BF46E85FDE217D9D06F856103B77C8B6BED8CEF_CustomAttributesCacheGenerator_EventQueue_add_AnimationsChanged_mD24EFD02892AE3390D21154040605B16CD4A47C1,
	EventQueue_t5BF46E85FDE217D9D06F856103B77C8B6BED8CEF_CustomAttributesCacheGenerator_EventQueue_remove_AnimationsChanged_mE9E419E30DDD5E7E99241E367129F00F70B2B724,
	Pool_1_tA1082CAA11428708F2CACFABFA79CE86EEA7E2E6_CustomAttributesCacheGenerator_Pool_1_get_Peak_m339C4A0B75D2E98700C0980D03C2B747BAA4E06C,
	Pool_1_tA1082CAA11428708F2CACFABFA79CE86EEA7E2E6_CustomAttributesCacheGenerator_Pool_1_set_Peak_mCBD381BC93D78506B8389FD40F9E0B116CC7998D,
	HashSetExtensions_t1531DED1FEE5B4632F8F632ADAAA6AB7C3167E37_CustomAttributesCacheGenerator_HashSetExtensions_AddAll_m159DD605F78B0D6724F9092D51E1D820E05AFC83,
	Attachment_tA85256BF51006C369687395955B6A6B51D432F21_CustomAttributesCacheGenerator_Attachment_get_Name_m0DAFC8B199AA31074FC2232C9E6F46ACE883AE50,
	Attachment_tA85256BF51006C369687395955B6A6B51D432F21_CustomAttributesCacheGenerator_Attachment_set_Name_m7097A4ABC3DF401F1B4CAD4E75D5BEB74B799CF0,
	MeshAttachment_t928FE10280A3D4F1648B7D18B42C04515C08F990_CustomAttributesCacheGenerator_MeshAttachment_get_Path_m7FB6C718570587026260C35E294209557FAE26F2,
	MeshAttachment_t928FE10280A3D4F1648B7D18B42C04515C08F990_CustomAttributesCacheGenerator_MeshAttachment_set_Path_m7A0C1513407EBB1111D7587C3F6907A1D9C56D66,
	MeshAttachment_t928FE10280A3D4F1648B7D18B42C04515C08F990_CustomAttributesCacheGenerator_MeshAttachment_get_RendererObject_mA8649EE6446C8C35AF9C4B630F94F1EF5824DE77,
	MeshAttachment_t928FE10280A3D4F1648B7D18B42C04515C08F990_CustomAttributesCacheGenerator_MeshAttachment_set_RendererObject_m665077255EE8D07350ACEE0127DC7014CF357E8F,
	MeshAttachment_t928FE10280A3D4F1648B7D18B42C04515C08F990_CustomAttributesCacheGenerator_MeshAttachment_get_RegionU_mB1D07E550C58E2A9AF9417A69E2D6A2A69B08998,
	MeshAttachment_t928FE10280A3D4F1648B7D18B42C04515C08F990_CustomAttributesCacheGenerator_MeshAttachment_set_RegionU_m1BF8333DB75EB1216C275E67BAAD54E9F3306F4F,
	MeshAttachment_t928FE10280A3D4F1648B7D18B42C04515C08F990_CustomAttributesCacheGenerator_MeshAttachment_get_RegionV_mCEE303071035A492E1254C090B58BCC17506341E,
	MeshAttachment_t928FE10280A3D4F1648B7D18B42C04515C08F990_CustomAttributesCacheGenerator_MeshAttachment_set_RegionV_m0263E8A7B97B98498D2504F76B5A2244E65C7C92,
	MeshAttachment_t928FE10280A3D4F1648B7D18B42C04515C08F990_CustomAttributesCacheGenerator_MeshAttachment_get_RegionU2_mC684906C07B09B0B5A01C647E53BE6CFC5DB3F55,
	MeshAttachment_t928FE10280A3D4F1648B7D18B42C04515C08F990_CustomAttributesCacheGenerator_MeshAttachment_set_RegionU2_mD9C60FFF2CE690D9EA7C6D53CF38C8096769D37F,
	MeshAttachment_t928FE10280A3D4F1648B7D18B42C04515C08F990_CustomAttributesCacheGenerator_MeshAttachment_get_RegionV2_m90DC55C6344F36A615479C5A354CD49D9FAD0C3B,
	MeshAttachment_t928FE10280A3D4F1648B7D18B42C04515C08F990_CustomAttributesCacheGenerator_MeshAttachment_set_RegionV2_m197008D7EEA8BBF5230BF58B1747926CC2DEA5E6,
	MeshAttachment_t928FE10280A3D4F1648B7D18B42C04515C08F990_CustomAttributesCacheGenerator_MeshAttachment_get_RegionDegrees_m512B2D8EE863EEE993B3EE7A8B5EF08568687EA4,
	MeshAttachment_t928FE10280A3D4F1648B7D18B42C04515C08F990_CustomAttributesCacheGenerator_MeshAttachment_set_RegionDegrees_m2A68154822ED25AD31E1CADA96E2E5E337194AE5,
	MeshAttachment_t928FE10280A3D4F1648B7D18B42C04515C08F990_CustomAttributesCacheGenerator_MeshAttachment_get_Edges_m351534CD4EE53FC1A8C08B9A61723243D0D8783D,
	MeshAttachment_t928FE10280A3D4F1648B7D18B42C04515C08F990_CustomAttributesCacheGenerator_MeshAttachment_set_Edges_mDC0436E0018B2D4BD9DCB457F45401EB391CE5CA,
	MeshAttachment_t928FE10280A3D4F1648B7D18B42C04515C08F990_CustomAttributesCacheGenerator_MeshAttachment_get_Width_m4452600A793BF78F6D1E75F8F2DFC9B4910715B3,
	MeshAttachment_t928FE10280A3D4F1648B7D18B42C04515C08F990_CustomAttributesCacheGenerator_MeshAttachment_set_Width_m0826A18D8EA7F063B8BE89CCE37B6EF7DD1A36CE,
	MeshAttachment_t928FE10280A3D4F1648B7D18B42C04515C08F990_CustomAttributesCacheGenerator_MeshAttachment_get_Height_mFA877473CD03BDFAE6C0A3354F7EB8AAF68482D8,
	MeshAttachment_t928FE10280A3D4F1648B7D18B42C04515C08F990_CustomAttributesCacheGenerator_MeshAttachment_set_Height_m511A431F374B26BD119132A2210A08133C5C7FC5,
	RegionAttachment_t11A283AF336D2A7148E059CED781E01BEEE7830E_CustomAttributesCacheGenerator_RegionAttachment_get_Path_m4E7875166074A4976E5111BBC0B309D500C0FA66,
	RegionAttachment_t11A283AF336D2A7148E059CED781E01BEEE7830E_CustomAttributesCacheGenerator_RegionAttachment_set_Path_m0798E368A58A945C8E6AFC3DA17BCA320C0FA465,
	RegionAttachment_t11A283AF336D2A7148E059CED781E01BEEE7830E_CustomAttributesCacheGenerator_RegionAttachment_get_RendererObject_m7C8A6C8920AF6F71A1AF06BB99B895055F2E2AF1,
	RegionAttachment_t11A283AF336D2A7148E059CED781E01BEEE7830E_CustomAttributesCacheGenerator_RegionAttachment_set_RendererObject_mDA82B9AFD9FA9984D32F124B347976C160AED3CE,
	EventData_tE551728B1B00610B27E05B1F8C5E64F2A42163E5_CustomAttributesCacheGenerator_EventData_get_Int_mF161AFBBBFDE59B18E5F1317428587F60F8EA815,
	EventData_tE551728B1B00610B27E05B1F8C5E64F2A42163E5_CustomAttributesCacheGenerator_EventData_set_Int_mDBD78E97A4FA45EF56E4B6B298C1B0BA8F2766D4,
	EventData_tE551728B1B00610B27E05B1F8C5E64F2A42163E5_CustomAttributesCacheGenerator_EventData_get_Float_mE5D19A46F77541A33B6CCCC18B494B6FC8DCEB7C,
	EventData_tE551728B1B00610B27E05B1F8C5E64F2A42163E5_CustomAttributesCacheGenerator_EventData_set_Float_m98E09F7F3BF2D73F065A43ECCDF74A80B1E42ACE,
	EventData_tE551728B1B00610B27E05B1F8C5E64F2A42163E5_CustomAttributesCacheGenerator_EventData_get_String_m0300CF1F9A59FA09F686A55B74AF52B33C6B9A92,
	EventData_tE551728B1B00610B27E05B1F8C5E64F2A42163E5_CustomAttributesCacheGenerator_EventData_set_String_mCBA0689CB919A926CD15D00CCF7751DD15D55601,
	EventData_tE551728B1B00610B27E05B1F8C5E64F2A42163E5_CustomAttributesCacheGenerator_EventData_get_AudioPath_m8E216C816713FB1DD05B771395A574BC6F051491,
	EventData_tE551728B1B00610B27E05B1F8C5E64F2A42163E5_CustomAttributesCacheGenerator_EventData_set_AudioPath_m557DCD8626A574755300236BADD644E7B3B3BB92,
	EventData_tE551728B1B00610B27E05B1F8C5E64F2A42163E5_CustomAttributesCacheGenerator_EventData_get_Volume_m0EE44FF955858CF130A186E2A13EED2A30AB0E55,
	EventData_tE551728B1B00610B27E05B1F8C5E64F2A42163E5_CustomAttributesCacheGenerator_EventData_set_Volume_m2C85157076E6FA5910F87C04083AB3D8454651D4,
	EventData_tE551728B1B00610B27E05B1F8C5E64F2A42163E5_CustomAttributesCacheGenerator_EventData_get_Balance_m6A47AF101F656A5D88BA5E02A51848471F5CCE5D,
	EventData_tE551728B1B00610B27E05B1F8C5E64F2A42163E5_CustomAttributesCacheGenerator_EventData_set_Balance_m40516E79841C4E87C1DB0E3158919E7FB90A8407,
	Pow_t58B0ABB28362DEF85FBD9A4C44CD03B23E0D721D_CustomAttributesCacheGenerator_Pow_get_Power_m19849A28BCC7B8A284E27528F26FD402873EA053,
	Pow_t58B0ABB28362DEF85FBD9A4C44CD03B23E0D721D_CustomAttributesCacheGenerator_Pow_set_Power_m8661D2CE9DC8ECE168C058EBC8D57C58D0CA9E35,
	SkeletonBounds_t3CBFC1A4FEBD010C33DE392B0360584C92E3CE02_CustomAttributesCacheGenerator_SkeletonBounds_get_BoundingBoxes_mA35DEC577418DEC31FD550D90E3D09CD6F4E9497,
	SkeletonBounds_t3CBFC1A4FEBD010C33DE392B0360584C92E3CE02_CustomAttributesCacheGenerator_SkeletonBounds_set_BoundingBoxes_m5D9DFFB278EED74CD085B12B93EFFD7174FBE87C,
	SkeletonBounds_t3CBFC1A4FEBD010C33DE392B0360584C92E3CE02_CustomAttributesCacheGenerator_SkeletonBounds_get_Polygons_m3EB04148D7DBBE8DC6FD807E0F5CF78E65CA5439,
	SkeletonBounds_t3CBFC1A4FEBD010C33DE392B0360584C92E3CE02_CustomAttributesCacheGenerator_SkeletonBounds_set_Polygons_m476D963ECB41DD803BC2C4B74AF39448F5FBDE10,
	Polygon_tB9B5EA9947CA20AC02C62C18CCAFB82D697F2397_CustomAttributesCacheGenerator_Polygon_get_Vertices_m8E31D84978191249FB1FF81637BFB27BBAE4BFAC,
	Polygon_tB9B5EA9947CA20AC02C62C18CCAFB82D697F2397_CustomAttributesCacheGenerator_Polygon_set_Vertices_m58834A246CA96BBCB6B2BFFB814BB1428AB1D636,
	Polygon_tB9B5EA9947CA20AC02C62C18CCAFB82D697F2397_CustomAttributesCacheGenerator_Polygon_get_Count_m1E62E8314F2DFAF2CF33341EC16793737155E6B7,
	Polygon_tB9B5EA9947CA20AC02C62C18CCAFB82D697F2397_CustomAttributesCacheGenerator_Polygon_set_Count_m6A147CD8D1DC6799F3367C8CA3526AC1B9E2FAEB,
	Timeline_tD8AC6175D8B492C9CDB166AC1FBFEE28A474DAF0_CustomAttributesCacheGenerator_Timeline__ctor_m6D2E9ACCA5676EF9B1F65788F2A02E7BE4B0DCF0____propertyIds1,
	CurveTimeline_t404E642BD4DFEEDB39DBCDC088B7F7E78FAE5476_CustomAttributesCacheGenerator_CurveTimeline__ctor_mAF5F864455A1B5677ED313F38348F08065180211____propertyIds2,
	AtlasAttachmentLoader_tB28E6E02881761ED9D51569F2482F0541648A2EB_CustomAttributesCacheGenerator_AtlasAttachmentLoader__ctor_m98B92E1D1CEC277E3C735246B6B0072351842800____atlasArray0,
	SkeletonBinary_tDB857F725DBE67AB0243E33AF2DDD2850C629C18_CustomAttributesCacheGenerator_SkeletonBinary__ctor_mC535F6802C6B06350618A56D0788DCABB2A6455E____atlasArray0,
	SkeletonJson_t0FCF0B3D9BD186D0EB9A9EEA5CB1B5B577C6B487_CustomAttributesCacheGenerator_SkeletonJson__ctor_m97A526BB2A981A69BCD2BBB8A7E00F94E1E370C0____atlasArray0,
	SkeletonLoader_tC945FF227997A6BAC350D4986BD091BE8BB4B36F_CustomAttributesCacheGenerator_SkeletonLoader__ctor_m60C437EF719C5B7BFD439B915A6A4E528DC3AADF____atlasArray0,
	Skeleton_tA4F63D1CB185D30296FA5323E1DA8B993E21293C_CustomAttributesCacheGenerator_Skeleton_tA4F63D1CB185D30296FA5323E1DA8B993E21293C____FlipX_PropertyInfo,
	Skeleton_tA4F63D1CB185D30296FA5323E1DA8B993E21293C_CustomAttributesCacheGenerator_Skeleton_tA4F63D1CB185D30296FA5323E1DA8B993E21293C____FlipY_PropertyInfo,
	spineU2Dcsharp_CustomAttributesCacheGenerator,
};
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void RuntimeCompatibilityAttribute_set_WrapNonExceptionThrows_m8562196F90F3EBCEC23B5708EE0332842883C490_inline (RuntimeCompatibilityAttribute_tFF99AB2963098F9CBCD47A20D9FD3D51C17C1C80 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		bool L_0 = ___value0;
		__this->set_m_wrapNonExceptionThrows_0(L_0);
		return;
	}
}
