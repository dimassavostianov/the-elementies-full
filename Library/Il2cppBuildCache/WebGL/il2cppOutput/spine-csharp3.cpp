#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


struct VirtActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1>
struct VirtActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
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
template <typename R, typename T1, typename T2, typename T3>
struct VirtFuncInvoker3
{
	typedef R (*Func)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};
struct GenericVirtActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1>
struct GenericVirtActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename T1, typename T2>
struct GenericVirtActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
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
template <typename T1>
struct InterfaceActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename T1, typename T2>
struct InterfaceActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
struct GenericInterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1>
struct GenericInterfaceActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename T1, typename T2>
struct GenericInterfaceActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};

// System.Collections.Generic.Dictionary`2<System.Int32,System.Globalization.CultureInfo>
struct Dictionary_2_t5B8303F2C9869A39ED3E03C0FBB09F817E479402;
// System.Collections.Generic.Dictionary`2<System.String,System.Globalization.CultureInfo>
struct Dictionary_2_t0015CBF964B0687CBB5ECFDDE06671A8F3DDE4BC;
// Spine.ExposedList`1<Spine.ExposedList`1<System.Int32>>
struct ExposedList_1_tE018626AD135D00E2FCAF5578BADE795F5CCDC90;
// Spine.ExposedList`1<Spine.ExposedList`1<System.Single>>
struct ExposedList_1_tFAEEFBED9EABAD893C31C789759FD1BA692F0289;
// Spine.ExposedList`1<Spine.Bone>
struct ExposedList_1_t4F66E6448150D0CAC1BD8C1A4810A7CEB844B164;
// Spine.ExposedList`1<Spine.BoneData>
struct ExposedList_1_t55FC025D5A735E30067A5D1CCB31D11EA181CF36;
// Spine.ExposedList`1<System.Boolean>
struct ExposedList_1_tAA9A80412EB5EC236EBA9FC15B2BD9A61915AE7E;
// Spine.ExposedList`1<Spine.Event>
struct ExposedList_1_t8CEF7833102CD6D128DB4877B6641E863D85194A;
// Spine.ExposedList`1<Spine.IUpdatable>
struct ExposedList_1_t0CA5D3D70CF07167EB2D925649F0AD2B33D798CD;
// Spine.ExposedList`1<Spine.IkConstraint>
struct ExposedList_1_tCAAB4BEAA939FACFE777525D586DEA51E61B0994;
// Spine.ExposedList`1<System.Int32>
struct ExposedList_1_tEB071484A7B70681ADB6BD9522EFC630CA5C5066;
// Spine.ExposedList`1<System.Object>
struct ExposedList_1_t96967D812A0363AD52B5EA4B217F488F8368BE10;
// Spine.ExposedList`1<Spine.PathConstraint>
struct ExposedList_1_t59912CC3F7BA44303382359809C190D06B7FF0E9;
// Spine.ExposedList`1<System.Single>
struct ExposedList_1_t9F8622C73EB60A6882B2968C1C0F1706D574F526;
// Spine.ExposedList`1<Spine.Slot>
struct ExposedList_1_tFC656F125F1D30427E8EBAD2273E135F07D41FEC;
// Spine.ExposedList`1<Spine.Timeline>
struct ExposedList_1_tA3907AC2310205562829E46BC41A014268F91A7B;
// Spine.ExposedList`1<Spine.TrackEntry>
struct ExposedList_1_t8248F6346C8A248FDA53F64E95ECC640F2E5ED3E;
// Spine.ExposedList`1<Spine.TransformConstraint>
struct ExposedList_1_t56F73F3BF0C40E1C9EF32828CD09773498FDFB0F;
// System.Collections.Generic.HashSet`1<System.String>
struct HashSet_1_t45F75268054D01D9E70EB33D7F6D2FA609DB9229;
// Spine.Pool`1<Spine.ExposedList`1<System.Int32>>
struct Pool_1_t5CA90CE7EBA311405CE9C8F1E0C4DDFE861C384A;
// Spine.Pool`1<Spine.ExposedList`1<System.Single>>
struct Pool_1_tEBC6CCDAC2A4D2FDEE1A4FC452D0D72D0F4142B9;
// Spine.Pool`1<System.Object>
struct Pool_1_t1267C3F2D6DCBF77E536D865BA56262DF11C0889;
// System.Collections.Generic.Stack`1<Spine.ExposedList`1<System.Int32>>
struct Stack_1_t2E827BF24387A89C987AA40783D29884A18673C9;
// System.Collections.Generic.Stack`1<Spine.ExposedList`1<System.Single>>
struct Stack_1_t5D9CF25B6DC2FE8F09EA4C5531F7683367F9C365;
// Spine.ExposedList`1<System.Int32>[]
struct ExposedList_1U5BU5D_tC7922C1CF6C272D1AC5CB95D7C39664D0F12FF54;
// Spine.ExposedList`1<System.Single>[]
struct ExposedList_1U5BU5D_tE723A0FFD1A0C77B17CCA09F9BE2EA1B09561CFE;
// System.Int32[][]
struct Int32U5BU5DU5BU5D_t104DBF1B996084AA19567FD32B02EDF88D044FAF;
// Spine.Bone[]
struct BoneU5BU5D_t77D01946B97A0778AD79515B28F1C30BDBED3A23;
// Spine.BoneData[]
struct BoneDataU5BU5D_tAD4DEE7E0EBE569D3B625E73ABCB63C4A70B754C;
// System.Boolean[]
struct BooleanU5BU5D_tEC7BAF93C44F875016DAADC8696EE3A465644D3C;
// System.Byte[]
struct ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726;
// System.Char[]
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;
// System.Delegate[]
struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8;
// Spine.Event[]
struct EventU5BU5D_t28EE828FCC854A33329829EBDD527551DE7A7D06;
// System.Int32[]
struct Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32;
// System.IntPtr[]
struct IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6;
// System.Single[]
struct SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971;
// System.String[]
struct StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A;
// Spine.TransformConstraint[]
struct TransformConstraintU5BU5D_tAAB40625ABA9CEE91FE93330DA53DA127EB7E446;
// System.Type[]
struct TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755;
// Spine.Animation
struct Animation_tE800D5597964656F48F303755E4C6C66462E8E90;
// System.ArgumentException
struct ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00;
// System.ArgumentNullException
struct ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB;
// System.AsyncCallback
struct AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA;
// Spine.AtlasPage
struct AtlasPage_t8A12ACC89F843E7F1869ADA9D82221D8298850F6;
// Spine.AtlasRegion
struct AtlasRegion_t82875C2D00A27CA4974B4D3529484CA9F57F8485;
// Spine.Attachment
struct Attachment_tA85256BF51006C369687395955B6A6B51D432F21;
// System.Reflection.Binder
struct Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30;
// Spine.Bone
struct Bone_t6DA0B82485BED2E4EEE864AAD607EEBDC2F98AAF;
// Spine.BoneData
struct BoneData_t48A671E6818E76905840CC122A96889DDCB92A51;
// System.Globalization.Calendar
struct Calendar_t3D638AEAB45F029DF47138EDA4CF9A7CBBB1C32A;
// System.Globalization.CodePageDataItem
struct CodePageDataItem_t09A62F57142BF0456C8F414898A37E79BCC9F09E;
// System.Globalization.CompareInfo
struct CompareInfo_t4AB62EC32E8AF1E469E315620C7E3FB8B0CAE0C9;
// Spine.ConstraintData
struct ConstraintData_t71BA8ACA83AC8927FE1FEDFAB6A24846C01D138F;
// System.Globalization.CultureData
struct CultureData_t53CDF1C5F789A28897415891667799420D3C5529;
// System.Globalization.CultureInfo
struct CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98;
// Spine.CurveTimeline
struct CurveTimeline_t404E642BD4DFEEDB39DBCDC088B7F7E78FAE5476;
// Spine.CurveTimeline1
struct CurveTimeline1_tEB53273FC1D90C28D2A2357D4BF937251AE1E18C;
// Spine.CurveTimeline2
struct CurveTimeline2_tFB55B7C974EAEFA2745C1F771B06A7A2334C4CF0;
// System.Globalization.DateTimeFormatInfo
struct DateTimeFormatInfo_t0B9F6CA631A51CFC98A3C6031CF8069843137C90;
// System.Text.DecoderFallback
struct DecoderFallback_tF86D337D6576E81E5DA285E5673183EBC66DEF8D;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288;
// System.Text.EncoderFallback
struct EncoderFallback_t02AC990075E17EB09F0D7E4831C3B3F264025CC4;
// System.Text.Encoding
struct Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827;
// System.IO.EndOfStreamException
struct EndOfStreamException_tDA8337E29A941EFB3E26721033B1826C1ACB0059;
// Spine.Event
struct Event_tAB253EC43580D8724548C638BAB02EBB587A7957;
// Spine.EventData
struct EventData_tE551728B1B00610B27E05B1F8C5E64F2A42163E5;
// System.Collections.Hashtable
struct Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC;
// System.IAsyncResult
struct IAsyncResult_tC9F97BF36FCF122D29D3101D80642278297BF370;
// System.Collections.IDictionary
struct IDictionary_t99871C56B8EC2452AC5C4CF3831695E617B89D3A;
// System.IFormatProvider
struct IFormatProvider_tF2AECC4B14F41D36718920D67F930CED940412DF;
// System.Reflection.MemberFilter
struct MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81;
// Spine.MeshAttachment
struct MeshAttachment_t928FE10280A3D4F1648B7D18B42C04515C08F990;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.Globalization.NumberFormatInfo
struct NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F;
// System.Threading.SemaphoreSlim
struct SemaphoreSlim_t3EF85FC980AE57957BEBB6B78E81DE2E3233D385;
// Spine.Skeleton
struct Skeleton_tA4F63D1CB185D30296FA5323E1DA8B993E21293C;
// Spine.SkeletonData
struct SkeletonData_t2B4079A31FD40EF1A9968A9D256F7F2F126B4DFD;
// Spine.Skin
struct Skin_tD874A2056EDD885CCC069C91D8D8DD9EB2010FC5;
// Spine.Slot
struct Slot_t754D2EC8AE03CF765F34A909762BE4E533BEF635;
// Spine.SlotData
struct SlotData_tB7FE5D031A63C5C74789FB1DE209633A2517955E;
// System.IO.Stream
struct Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB;
// System.String
struct String_t;
// System.Globalization.TextInfo
struct TextInfo_tE823D0684BFE8B203501C9B2B38585E8F06E872C;
// Spine.TrackEntry
struct TrackEntry_t8B6FF31E96FE5CFBE3B92DC9E4FB33766342A20D;
// Spine.TransformConstraint
struct TransformConstraint_tC8D8761A400AEA22D56A6D4EDAD8D88356EFFAE4;
// Spine.TransformConstraintData
struct TransformConstraintData_t5B434A578868FB4E1BBBF29E3024FF07B5D0EF59;
// Spine.TransformConstraintTimeline
struct TransformConstraintTimeline_t72B4878905815289D7452FEE045C902E2CDEA6B1;
// Spine.TranslateTimeline
struct TranslateTimeline_t681EC4DF87BDD6C1C37F02813D59275B8EAF02E5;
// Spine.TranslateXTimeline
struct TranslateXTimeline_t359052D0CB61701970042CFD7A82575F4A2729F5;
// Spine.TranslateYTimeline
struct TranslateYTimeline_t83C5029E5E77494698A95E1D6748CE3692AECF31;
// Spine.Triangulator
struct Triangulator_tB8EB2546BA4C75A44FDEEC203E67023C07FBBE8B;
// System.Type
struct Type_t;
// Spine.VertexAttachment
struct VertexAttachment_t9CE5B53FEDF378FFCADECD92F0ABF5F1DFDFFF36;
// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5;
// Spine.AnimationState/TrackEntryDelegate
struct TrackEntryDelegate_tE20D505FE9CFC9735D82442FC79C9929AC558EDB;
// Spine.AnimationState/TrackEntryEventDelegate
struct TrackEntryEventDelegate_tF5188922CE4C62057833CF70701CB67AD0460A2E;
// Spine.AnimationStateData/AnimationPairComparer
struct AnimationPairComparer_tCF4856346F6E3F6713561B39646846CE27877BE3;
// Spine.Atlas/<>c__DisplayClass10_0
struct U3CU3Ec__DisplayClass10_0_tBF5C29B31A8B06822C307D01647CD4603254F201;
// Spine.SkeletonBinary/SkeletonInput
struct SkeletonInput_tD0B7F3FDB991A3A0D0563BAD64BF45984FC8DC6A;
// Spine.SkeletonBinary/Vertices
struct Vertices_tC5C45F508B1550DB3F5D2C4479C467CA6226B541;
// Spine.SkeletonLoader/LinkedMesh
struct LinkedMesh_t95D16FDB1A35D9F16D739B764848BA25AFCF24E1;
// Spine.Skin/SkinKeyComparer
struct SkinKeyComparer_t4F9D27D9EB27FB8A643889C17AD3E9682592B764;
// System.IO.Stream/ReadWriteTask
struct ReadWriteTask_t32CD2C230786712954C1DB518DBE420A1F4C7974;

IL2CPP_EXTERN_C RuntimeClass* AnimationPairComparer_tCF4856346F6E3F6713561B39646846CE27877BE3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* BitConverter_t8DCBA24B909F1B221372AF2B37C76DCF614BA654_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EndOfStreamException_tDA8337E29A941EFB3E26721033B1826C1ACB0059_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Enum_t23B90B40F60E677A8025267341651C94AE079CDA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ExposedList_1_t55FC025D5A735E30067A5D1CCB31D11EA181CF36_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ExposedList_1_tAA9A80412EB5EC236EBA9FC15B2BD9A61915AE7E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ExposedList_1_tE018626AD135D00E2FCAF5578BADE795F5CCDC90_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ExposedList_1_tEB071484A7B70681ADB6BD9522EFC630CA5C5066_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ExposedList_1_tFAEEFBED9EABAD893C31C789759FD1BA692F0289_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Format_t8F8D5883A235562BAA8B3B43ABA6A4FDE251B476_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Math_tA269614262430118C9FC5C4D9EF4F61C812568F0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Pool_1_t5CA90CE7EBA311405CE9C8F1E0C4DDFE861C384A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Pool_1_tEBC6CCDAC2A4D2FDEE1A4FC452D0D72D0F4142B9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RuntimeObject_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SkinKeyComparer_t4F9D27D9EB27FB8A643889C17AD3E9682592B764_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TextureFilter_t3692D7DCDF68DB64AE7D5A1BEF324F2ACFEC1B07_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Type_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* VertexAttachment_t9CE5B53FEDF378FFCADECD92F0ABF5F1DFDFFF36_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral15088A7C50E83E49058833A4287B3C2F1CD730D2;
IL2CPP_EXTERN_C String_t* _stringLiteral24E0770EDC9103A4E23F9C01385FDE3BC04F178A;
IL2CPP_EXTERN_C String_t* _stringLiteral3860603B88C3C33FCEFF25F72FA3E650D2B25876;
IL2CPP_EXTERN_C String_t* _stringLiteral415B33E751EB342E42AB189D9404D56A96C6C393;
IL2CPP_EXTERN_C String_t* _stringLiteral77D38C0623F92B292B925F6E72CF5CF99A20D4EB;
IL2CPP_EXTERN_C String_t* _stringLiteralA42779B09629BCE81B76EF626A57A0B40F2AD827;
IL2CPP_EXTERN_C String_t* _stringLiteralB7C45DD316C68ABF3429C20058C2981C652192F2;
IL2CPP_EXTERN_C String_t* _stringLiteralCE18B047107AA23D1AA9B2ED32D316148E02655F;
IL2CPP_EXTERN_C String_t* _stringLiteralD5A0157A4D0640187967DD9595192830F6FC0E50;
IL2CPP_EXTERN_C String_t* _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
IL2CPP_EXTERN_C const RuntimeMethod* ExposedList_1_Add_m5B673948ABFBB0479F3A81270A22A4295AEF619B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ExposedList_1_Add_m65591272902D94AFAE294B4CDF30A465AA2274F8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ExposedList_1_Add_m94D79351365A6FA9EBD26A3CA00D4839BE613B6A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ExposedList_1_Add_m9CE0A2C0C8C7E99FB44E2D206DB6FAF36BB3C576_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ExposedList_1_Clear_m40B61D0D728CF9B427F957C4A8E7A4A364690255_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ExposedList_1_Clear_m56FD9B006AFA6C0C3B822A2460ED52D4FA72D847_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ExposedList_1_Clear_m9E1BE8027151460EB7E0FAB390B2846D15BA302B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ExposedList_1_Clear_mBC51B78D1DACC555F6F73D293AC8E6D6DC2FEC18_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ExposedList_1_EnsureCapacity_m51473D74740BFE47642E8A5FEF054C72D22FE11A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ExposedList_1_RemoveAt_m0629ED8D156A78115171F2746A855438C3DBE81C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ExposedList_1_RemoveAt_m315AA4921C74B8F80A3A354E0524085CAEF82AA8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ExposedList_1_RemoveAt_m74D0AC175C5B5B597106B9B6B37B6A51A8EF2B13_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ExposedList_1_RemoveAt_mABBDA48F0096E88AB0169B176320716F8EE471FB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ExposedList_1_Resize_m666C6341D5DC487C18356A856E93EF53AC33CB42_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ExposedList_1_Resize_m87D63C372E64631877CF0C3F964DD144A742AF2A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ExposedList_1__ctor_m02755087651BB67AD2B2D4D758AE77AFD7DC440B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ExposedList_1__ctor_m316DF0208BC8528788112ABDE3A956F6B176F5DC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ExposedList_1__ctor_m84177DC3659E1B9F2837C8ADDC017ADDA00B36A0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ExposedList_1__ctor_m9BB5379A9A5D0484D07AE68B3215F94B8093DFD2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ExposedList_1__ctor_mB0F2F25C8D7C8DA90320D609A4DC4857D9ECC79C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Pool_1_Free_m8AD43187DBD866A8B28F74E7FD9A90D7A5834805_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Pool_1_Free_mA877966FCAD605DAFF16CD72619CE9B5A0160A75_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Pool_1_Obtain_m30E900D977A82966F61786948EEFD33E110C06FB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Pool_1_Obtain_mCD31B8A93DC6FACE13671D18D42170131A686CF1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Pool_1__ctor_m7C7FBE91695216C54B23152A69A8EEB750808334_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Pool_1__ctor_mEF3423A00009591979CA692DDE12CCC2FF4E8C26_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SkeletonInput_GetVersionString_mEA6F595F8E5173425CFE97B948B1AB690270DB14_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SkeletonInput_ReadFully_m0C4DC8DA2A372732B0E514A341EC75E0079FAFBF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SkeletonInput_ReadSByte_m2F2B974C3FFA98A26FF7368DD0218D5A137AF38F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SkinKey__ctor_m186DE323903429C9B364961256244CAB324D0A4A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeType* Format_t8F8D5883A235562BAA8B3B43ABA6A4FDE251B476_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* TextureFilter_t3692D7DCDF68DB64AE7D5A1BEF324F2ACFEC1B07_0_0_0_var;
struct CultureData_t53CDF1C5F789A28897415891667799420D3C5529_marshaled_com;
struct CultureData_t53CDF1C5F789A28897415891667799420D3C5529_marshaled_pinvoke;
struct CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_marshaled_com;
struct CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_marshaled_pinvoke;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct ExposedList_1U5BU5D_tC7922C1CF6C272D1AC5CB95D7C39664D0F12FF54;
struct ExposedList_1U5BU5D_tE723A0FFD1A0C77B17CCA09F9BE2EA1B09561CFE;
struct BoneU5BU5D_t77D01946B97A0778AD79515B28F1C30BDBED3A23;
struct BooleanU5BU5D_tEC7BAF93C44F875016DAADC8696EE3A465644D3C;
struct ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726;
struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8;
struct Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32;
struct SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA;
struct StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A;
struct TransformConstraintU5BU5D_tAAB40625ABA9CEE91FE93330DA53DA127EB7E446;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Object


// Spine.ExposedList`1<Spine.ExposedList`1<System.Int32>>
struct ExposedList_1_tE018626AD135D00E2FCAF5578BADE795F5CCDC90  : public RuntimeObject
{
public:
	// T[] Spine.ExposedList`1::Items
	ExposedList_1U5BU5D_tC7922C1CF6C272D1AC5CB95D7C39664D0F12FF54* ___Items_0;
	// System.Int32 Spine.ExposedList`1::Count
	int32_t ___Count_1;
	// System.Int32 Spine.ExposedList`1::version
	int32_t ___version_4;

public:
	inline static int32_t get_offset_of_Items_0() { return static_cast<int32_t>(offsetof(ExposedList_1_tE018626AD135D00E2FCAF5578BADE795F5CCDC90, ___Items_0)); }
	inline ExposedList_1U5BU5D_tC7922C1CF6C272D1AC5CB95D7C39664D0F12FF54* get_Items_0() const { return ___Items_0; }
	inline ExposedList_1U5BU5D_tC7922C1CF6C272D1AC5CB95D7C39664D0F12FF54** get_address_of_Items_0() { return &___Items_0; }
	inline void set_Items_0(ExposedList_1U5BU5D_tC7922C1CF6C272D1AC5CB95D7C39664D0F12FF54* value)
	{
		___Items_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Items_0), (void*)value);
	}

	inline static int32_t get_offset_of_Count_1() { return static_cast<int32_t>(offsetof(ExposedList_1_tE018626AD135D00E2FCAF5578BADE795F5CCDC90, ___Count_1)); }
	inline int32_t get_Count_1() const { return ___Count_1; }
	inline int32_t* get_address_of_Count_1() { return &___Count_1; }
	inline void set_Count_1(int32_t value)
	{
		___Count_1 = value;
	}

	inline static int32_t get_offset_of_version_4() { return static_cast<int32_t>(offsetof(ExposedList_1_tE018626AD135D00E2FCAF5578BADE795F5CCDC90, ___version_4)); }
	inline int32_t get_version_4() const { return ___version_4; }
	inline int32_t* get_address_of_version_4() { return &___version_4; }
	inline void set_version_4(int32_t value)
	{
		___version_4 = value;
	}
};

struct ExposedList_1_tE018626AD135D00E2FCAF5578BADE795F5CCDC90_StaticFields
{
public:
	// T[] Spine.ExposedList`1::EmptyArray
	ExposedList_1U5BU5D_tC7922C1CF6C272D1AC5CB95D7C39664D0F12FF54* ___EmptyArray_3;

public:
	inline static int32_t get_offset_of_EmptyArray_3() { return static_cast<int32_t>(offsetof(ExposedList_1_tE018626AD135D00E2FCAF5578BADE795F5CCDC90_StaticFields, ___EmptyArray_3)); }
	inline ExposedList_1U5BU5D_tC7922C1CF6C272D1AC5CB95D7C39664D0F12FF54* get_EmptyArray_3() const { return ___EmptyArray_3; }
	inline ExposedList_1U5BU5D_tC7922C1CF6C272D1AC5CB95D7C39664D0F12FF54** get_address_of_EmptyArray_3() { return &___EmptyArray_3; }
	inline void set_EmptyArray_3(ExposedList_1U5BU5D_tC7922C1CF6C272D1AC5CB95D7C39664D0F12FF54* value)
	{
		___EmptyArray_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___EmptyArray_3), (void*)value);
	}
};


// Spine.ExposedList`1<Spine.ExposedList`1<System.Single>>
struct ExposedList_1_tFAEEFBED9EABAD893C31C789759FD1BA692F0289  : public RuntimeObject
{
public:
	// T[] Spine.ExposedList`1::Items
	ExposedList_1U5BU5D_tE723A0FFD1A0C77B17CCA09F9BE2EA1B09561CFE* ___Items_0;
	// System.Int32 Spine.ExposedList`1::Count
	int32_t ___Count_1;
	// System.Int32 Spine.ExposedList`1::version
	int32_t ___version_4;

public:
	inline static int32_t get_offset_of_Items_0() { return static_cast<int32_t>(offsetof(ExposedList_1_tFAEEFBED9EABAD893C31C789759FD1BA692F0289, ___Items_0)); }
	inline ExposedList_1U5BU5D_tE723A0FFD1A0C77B17CCA09F9BE2EA1B09561CFE* get_Items_0() const { return ___Items_0; }
	inline ExposedList_1U5BU5D_tE723A0FFD1A0C77B17CCA09F9BE2EA1B09561CFE** get_address_of_Items_0() { return &___Items_0; }
	inline void set_Items_0(ExposedList_1U5BU5D_tE723A0FFD1A0C77B17CCA09F9BE2EA1B09561CFE* value)
	{
		___Items_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Items_0), (void*)value);
	}

	inline static int32_t get_offset_of_Count_1() { return static_cast<int32_t>(offsetof(ExposedList_1_tFAEEFBED9EABAD893C31C789759FD1BA692F0289, ___Count_1)); }
	inline int32_t get_Count_1() const { return ___Count_1; }
	inline int32_t* get_address_of_Count_1() { return &___Count_1; }
	inline void set_Count_1(int32_t value)
	{
		___Count_1 = value;
	}

	inline static int32_t get_offset_of_version_4() { return static_cast<int32_t>(offsetof(ExposedList_1_tFAEEFBED9EABAD893C31C789759FD1BA692F0289, ___version_4)); }
	inline int32_t get_version_4() const { return ___version_4; }
	inline int32_t* get_address_of_version_4() { return &___version_4; }
	inline void set_version_4(int32_t value)
	{
		___version_4 = value;
	}
};

struct ExposedList_1_tFAEEFBED9EABAD893C31C789759FD1BA692F0289_StaticFields
{
public:
	// T[] Spine.ExposedList`1::EmptyArray
	ExposedList_1U5BU5D_tE723A0FFD1A0C77B17CCA09F9BE2EA1B09561CFE* ___EmptyArray_3;

public:
	inline static int32_t get_offset_of_EmptyArray_3() { return static_cast<int32_t>(offsetof(ExposedList_1_tFAEEFBED9EABAD893C31C789759FD1BA692F0289_StaticFields, ___EmptyArray_3)); }
	inline ExposedList_1U5BU5D_tE723A0FFD1A0C77B17CCA09F9BE2EA1B09561CFE* get_EmptyArray_3() const { return ___EmptyArray_3; }
	inline ExposedList_1U5BU5D_tE723A0FFD1A0C77B17CCA09F9BE2EA1B09561CFE** get_address_of_EmptyArray_3() { return &___EmptyArray_3; }
	inline void set_EmptyArray_3(ExposedList_1U5BU5D_tE723A0FFD1A0C77B17CCA09F9BE2EA1B09561CFE* value)
	{
		___EmptyArray_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___EmptyArray_3), (void*)value);
	}
};


// Spine.ExposedList`1<Spine.Bone>
struct ExposedList_1_t4F66E6448150D0CAC1BD8C1A4810A7CEB844B164  : public RuntimeObject
{
public:
	// T[] Spine.ExposedList`1::Items
	BoneU5BU5D_t77D01946B97A0778AD79515B28F1C30BDBED3A23* ___Items_0;
	// System.Int32 Spine.ExposedList`1::Count
	int32_t ___Count_1;
	// System.Int32 Spine.ExposedList`1::version
	int32_t ___version_4;

public:
	inline static int32_t get_offset_of_Items_0() { return static_cast<int32_t>(offsetof(ExposedList_1_t4F66E6448150D0CAC1BD8C1A4810A7CEB844B164, ___Items_0)); }
	inline BoneU5BU5D_t77D01946B97A0778AD79515B28F1C30BDBED3A23* get_Items_0() const { return ___Items_0; }
	inline BoneU5BU5D_t77D01946B97A0778AD79515B28F1C30BDBED3A23** get_address_of_Items_0() { return &___Items_0; }
	inline void set_Items_0(BoneU5BU5D_t77D01946B97A0778AD79515B28F1C30BDBED3A23* value)
	{
		___Items_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Items_0), (void*)value);
	}

	inline static int32_t get_offset_of_Count_1() { return static_cast<int32_t>(offsetof(ExposedList_1_t4F66E6448150D0CAC1BD8C1A4810A7CEB844B164, ___Count_1)); }
	inline int32_t get_Count_1() const { return ___Count_1; }
	inline int32_t* get_address_of_Count_1() { return &___Count_1; }
	inline void set_Count_1(int32_t value)
	{
		___Count_1 = value;
	}

	inline static int32_t get_offset_of_version_4() { return static_cast<int32_t>(offsetof(ExposedList_1_t4F66E6448150D0CAC1BD8C1A4810A7CEB844B164, ___version_4)); }
	inline int32_t get_version_4() const { return ___version_4; }
	inline int32_t* get_address_of_version_4() { return &___version_4; }
	inline void set_version_4(int32_t value)
	{
		___version_4 = value;
	}
};

struct ExposedList_1_t4F66E6448150D0CAC1BD8C1A4810A7CEB844B164_StaticFields
{
public:
	// T[] Spine.ExposedList`1::EmptyArray
	BoneU5BU5D_t77D01946B97A0778AD79515B28F1C30BDBED3A23* ___EmptyArray_3;

public:
	inline static int32_t get_offset_of_EmptyArray_3() { return static_cast<int32_t>(offsetof(ExposedList_1_t4F66E6448150D0CAC1BD8C1A4810A7CEB844B164_StaticFields, ___EmptyArray_3)); }
	inline BoneU5BU5D_t77D01946B97A0778AD79515B28F1C30BDBED3A23* get_EmptyArray_3() const { return ___EmptyArray_3; }
	inline BoneU5BU5D_t77D01946B97A0778AD79515B28F1C30BDBED3A23** get_address_of_EmptyArray_3() { return &___EmptyArray_3; }
	inline void set_EmptyArray_3(BoneU5BU5D_t77D01946B97A0778AD79515B28F1C30BDBED3A23* value)
	{
		___EmptyArray_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___EmptyArray_3), (void*)value);
	}
};


// Spine.ExposedList`1<Spine.BoneData>
struct ExposedList_1_t55FC025D5A735E30067A5D1CCB31D11EA181CF36  : public RuntimeObject
{
public:
	// T[] Spine.ExposedList`1::Items
	BoneDataU5BU5D_tAD4DEE7E0EBE569D3B625E73ABCB63C4A70B754C* ___Items_0;
	// System.Int32 Spine.ExposedList`1::Count
	int32_t ___Count_1;
	// System.Int32 Spine.ExposedList`1::version
	int32_t ___version_4;

public:
	inline static int32_t get_offset_of_Items_0() { return static_cast<int32_t>(offsetof(ExposedList_1_t55FC025D5A735E30067A5D1CCB31D11EA181CF36, ___Items_0)); }
	inline BoneDataU5BU5D_tAD4DEE7E0EBE569D3B625E73ABCB63C4A70B754C* get_Items_0() const { return ___Items_0; }
	inline BoneDataU5BU5D_tAD4DEE7E0EBE569D3B625E73ABCB63C4A70B754C** get_address_of_Items_0() { return &___Items_0; }
	inline void set_Items_0(BoneDataU5BU5D_tAD4DEE7E0EBE569D3B625E73ABCB63C4A70B754C* value)
	{
		___Items_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Items_0), (void*)value);
	}

	inline static int32_t get_offset_of_Count_1() { return static_cast<int32_t>(offsetof(ExposedList_1_t55FC025D5A735E30067A5D1CCB31D11EA181CF36, ___Count_1)); }
	inline int32_t get_Count_1() const { return ___Count_1; }
	inline int32_t* get_address_of_Count_1() { return &___Count_1; }
	inline void set_Count_1(int32_t value)
	{
		___Count_1 = value;
	}

	inline static int32_t get_offset_of_version_4() { return static_cast<int32_t>(offsetof(ExposedList_1_t55FC025D5A735E30067A5D1CCB31D11EA181CF36, ___version_4)); }
	inline int32_t get_version_4() const { return ___version_4; }
	inline int32_t* get_address_of_version_4() { return &___version_4; }
	inline void set_version_4(int32_t value)
	{
		___version_4 = value;
	}
};

struct ExposedList_1_t55FC025D5A735E30067A5D1CCB31D11EA181CF36_StaticFields
{
public:
	// T[] Spine.ExposedList`1::EmptyArray
	BoneDataU5BU5D_tAD4DEE7E0EBE569D3B625E73ABCB63C4A70B754C* ___EmptyArray_3;

public:
	inline static int32_t get_offset_of_EmptyArray_3() { return static_cast<int32_t>(offsetof(ExposedList_1_t55FC025D5A735E30067A5D1CCB31D11EA181CF36_StaticFields, ___EmptyArray_3)); }
	inline BoneDataU5BU5D_tAD4DEE7E0EBE569D3B625E73ABCB63C4A70B754C* get_EmptyArray_3() const { return ___EmptyArray_3; }
	inline BoneDataU5BU5D_tAD4DEE7E0EBE569D3B625E73ABCB63C4A70B754C** get_address_of_EmptyArray_3() { return &___EmptyArray_3; }
	inline void set_EmptyArray_3(BoneDataU5BU5D_tAD4DEE7E0EBE569D3B625E73ABCB63C4A70B754C* value)
	{
		___EmptyArray_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___EmptyArray_3), (void*)value);
	}
};


// Spine.ExposedList`1<System.Boolean>
struct ExposedList_1_tAA9A80412EB5EC236EBA9FC15B2BD9A61915AE7E  : public RuntimeObject
{
public:
	// T[] Spine.ExposedList`1::Items
	BooleanU5BU5D_tEC7BAF93C44F875016DAADC8696EE3A465644D3C* ___Items_0;
	// System.Int32 Spine.ExposedList`1::Count
	int32_t ___Count_1;
	// System.Int32 Spine.ExposedList`1::version
	int32_t ___version_4;

public:
	inline static int32_t get_offset_of_Items_0() { return static_cast<int32_t>(offsetof(ExposedList_1_tAA9A80412EB5EC236EBA9FC15B2BD9A61915AE7E, ___Items_0)); }
	inline BooleanU5BU5D_tEC7BAF93C44F875016DAADC8696EE3A465644D3C* get_Items_0() const { return ___Items_0; }
	inline BooleanU5BU5D_tEC7BAF93C44F875016DAADC8696EE3A465644D3C** get_address_of_Items_0() { return &___Items_0; }
	inline void set_Items_0(BooleanU5BU5D_tEC7BAF93C44F875016DAADC8696EE3A465644D3C* value)
	{
		___Items_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Items_0), (void*)value);
	}

	inline static int32_t get_offset_of_Count_1() { return static_cast<int32_t>(offsetof(ExposedList_1_tAA9A80412EB5EC236EBA9FC15B2BD9A61915AE7E, ___Count_1)); }
	inline int32_t get_Count_1() const { return ___Count_1; }
	inline int32_t* get_address_of_Count_1() { return &___Count_1; }
	inline void set_Count_1(int32_t value)
	{
		___Count_1 = value;
	}

	inline static int32_t get_offset_of_version_4() { return static_cast<int32_t>(offsetof(ExposedList_1_tAA9A80412EB5EC236EBA9FC15B2BD9A61915AE7E, ___version_4)); }
	inline int32_t get_version_4() const { return ___version_4; }
	inline int32_t* get_address_of_version_4() { return &___version_4; }
	inline void set_version_4(int32_t value)
	{
		___version_4 = value;
	}
};

struct ExposedList_1_tAA9A80412EB5EC236EBA9FC15B2BD9A61915AE7E_StaticFields
{
public:
	// T[] Spine.ExposedList`1::EmptyArray
	BooleanU5BU5D_tEC7BAF93C44F875016DAADC8696EE3A465644D3C* ___EmptyArray_3;

public:
	inline static int32_t get_offset_of_EmptyArray_3() { return static_cast<int32_t>(offsetof(ExposedList_1_tAA9A80412EB5EC236EBA9FC15B2BD9A61915AE7E_StaticFields, ___EmptyArray_3)); }
	inline BooleanU5BU5D_tEC7BAF93C44F875016DAADC8696EE3A465644D3C* get_EmptyArray_3() const { return ___EmptyArray_3; }
	inline BooleanU5BU5D_tEC7BAF93C44F875016DAADC8696EE3A465644D3C** get_address_of_EmptyArray_3() { return &___EmptyArray_3; }
	inline void set_EmptyArray_3(BooleanU5BU5D_tEC7BAF93C44F875016DAADC8696EE3A465644D3C* value)
	{
		___EmptyArray_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___EmptyArray_3), (void*)value);
	}
};


// Spine.ExposedList`1<Spine.Event>
struct ExposedList_1_t8CEF7833102CD6D128DB4877B6641E863D85194A  : public RuntimeObject
{
public:
	// T[] Spine.ExposedList`1::Items
	EventU5BU5D_t28EE828FCC854A33329829EBDD527551DE7A7D06* ___Items_0;
	// System.Int32 Spine.ExposedList`1::Count
	int32_t ___Count_1;
	// System.Int32 Spine.ExposedList`1::version
	int32_t ___version_4;

public:
	inline static int32_t get_offset_of_Items_0() { return static_cast<int32_t>(offsetof(ExposedList_1_t8CEF7833102CD6D128DB4877B6641E863D85194A, ___Items_0)); }
	inline EventU5BU5D_t28EE828FCC854A33329829EBDD527551DE7A7D06* get_Items_0() const { return ___Items_0; }
	inline EventU5BU5D_t28EE828FCC854A33329829EBDD527551DE7A7D06** get_address_of_Items_0() { return &___Items_0; }
	inline void set_Items_0(EventU5BU5D_t28EE828FCC854A33329829EBDD527551DE7A7D06* value)
	{
		___Items_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Items_0), (void*)value);
	}

	inline static int32_t get_offset_of_Count_1() { return static_cast<int32_t>(offsetof(ExposedList_1_t8CEF7833102CD6D128DB4877B6641E863D85194A, ___Count_1)); }
	inline int32_t get_Count_1() const { return ___Count_1; }
	inline int32_t* get_address_of_Count_1() { return &___Count_1; }
	inline void set_Count_1(int32_t value)
	{
		___Count_1 = value;
	}

	inline static int32_t get_offset_of_version_4() { return static_cast<int32_t>(offsetof(ExposedList_1_t8CEF7833102CD6D128DB4877B6641E863D85194A, ___version_4)); }
	inline int32_t get_version_4() const { return ___version_4; }
	inline int32_t* get_address_of_version_4() { return &___version_4; }
	inline void set_version_4(int32_t value)
	{
		___version_4 = value;
	}
};

struct ExposedList_1_t8CEF7833102CD6D128DB4877B6641E863D85194A_StaticFields
{
public:
	// T[] Spine.ExposedList`1::EmptyArray
	EventU5BU5D_t28EE828FCC854A33329829EBDD527551DE7A7D06* ___EmptyArray_3;

public:
	inline static int32_t get_offset_of_EmptyArray_3() { return static_cast<int32_t>(offsetof(ExposedList_1_t8CEF7833102CD6D128DB4877B6641E863D85194A_StaticFields, ___EmptyArray_3)); }
	inline EventU5BU5D_t28EE828FCC854A33329829EBDD527551DE7A7D06* get_EmptyArray_3() const { return ___EmptyArray_3; }
	inline EventU5BU5D_t28EE828FCC854A33329829EBDD527551DE7A7D06** get_address_of_EmptyArray_3() { return &___EmptyArray_3; }
	inline void set_EmptyArray_3(EventU5BU5D_t28EE828FCC854A33329829EBDD527551DE7A7D06* value)
	{
		___EmptyArray_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___EmptyArray_3), (void*)value);
	}
};


// Spine.ExposedList`1<System.Int32>
struct ExposedList_1_tEB071484A7B70681ADB6BD9522EFC630CA5C5066  : public RuntimeObject
{
public:
	// T[] Spine.ExposedList`1::Items
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___Items_0;
	// System.Int32 Spine.ExposedList`1::Count
	int32_t ___Count_1;
	// System.Int32 Spine.ExposedList`1::version
	int32_t ___version_4;

public:
	inline static int32_t get_offset_of_Items_0() { return static_cast<int32_t>(offsetof(ExposedList_1_tEB071484A7B70681ADB6BD9522EFC630CA5C5066, ___Items_0)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_Items_0() const { return ___Items_0; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_Items_0() { return &___Items_0; }
	inline void set_Items_0(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___Items_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Items_0), (void*)value);
	}

	inline static int32_t get_offset_of_Count_1() { return static_cast<int32_t>(offsetof(ExposedList_1_tEB071484A7B70681ADB6BD9522EFC630CA5C5066, ___Count_1)); }
	inline int32_t get_Count_1() const { return ___Count_1; }
	inline int32_t* get_address_of_Count_1() { return &___Count_1; }
	inline void set_Count_1(int32_t value)
	{
		___Count_1 = value;
	}

	inline static int32_t get_offset_of_version_4() { return static_cast<int32_t>(offsetof(ExposedList_1_tEB071484A7B70681ADB6BD9522EFC630CA5C5066, ___version_4)); }
	inline int32_t get_version_4() const { return ___version_4; }
	inline int32_t* get_address_of_version_4() { return &___version_4; }
	inline void set_version_4(int32_t value)
	{
		___version_4 = value;
	}
};

struct ExposedList_1_tEB071484A7B70681ADB6BD9522EFC630CA5C5066_StaticFields
{
public:
	// T[] Spine.ExposedList`1::EmptyArray
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___EmptyArray_3;

public:
	inline static int32_t get_offset_of_EmptyArray_3() { return static_cast<int32_t>(offsetof(ExposedList_1_tEB071484A7B70681ADB6BD9522EFC630CA5C5066_StaticFields, ___EmptyArray_3)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_EmptyArray_3() const { return ___EmptyArray_3; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_EmptyArray_3() { return &___EmptyArray_3; }
	inline void set_EmptyArray_3(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___EmptyArray_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___EmptyArray_3), (void*)value);
	}
};


// Spine.ExposedList`1<System.Single>
struct ExposedList_1_t9F8622C73EB60A6882B2968C1C0F1706D574F526  : public RuntimeObject
{
public:
	// T[] Spine.ExposedList`1::Items
	SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* ___Items_0;
	// System.Int32 Spine.ExposedList`1::Count
	int32_t ___Count_1;
	// System.Int32 Spine.ExposedList`1::version
	int32_t ___version_4;

public:
	inline static int32_t get_offset_of_Items_0() { return static_cast<int32_t>(offsetof(ExposedList_1_t9F8622C73EB60A6882B2968C1C0F1706D574F526, ___Items_0)); }
	inline SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* get_Items_0() const { return ___Items_0; }
	inline SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA** get_address_of_Items_0() { return &___Items_0; }
	inline void set_Items_0(SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* value)
	{
		___Items_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Items_0), (void*)value);
	}

	inline static int32_t get_offset_of_Count_1() { return static_cast<int32_t>(offsetof(ExposedList_1_t9F8622C73EB60A6882B2968C1C0F1706D574F526, ___Count_1)); }
	inline int32_t get_Count_1() const { return ___Count_1; }
	inline int32_t* get_address_of_Count_1() { return &___Count_1; }
	inline void set_Count_1(int32_t value)
	{
		___Count_1 = value;
	}

	inline static int32_t get_offset_of_version_4() { return static_cast<int32_t>(offsetof(ExposedList_1_t9F8622C73EB60A6882B2968C1C0F1706D574F526, ___version_4)); }
	inline int32_t get_version_4() const { return ___version_4; }
	inline int32_t* get_address_of_version_4() { return &___version_4; }
	inline void set_version_4(int32_t value)
	{
		___version_4 = value;
	}
};

struct ExposedList_1_t9F8622C73EB60A6882B2968C1C0F1706D574F526_StaticFields
{
public:
	// T[] Spine.ExposedList`1::EmptyArray
	SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* ___EmptyArray_3;

public:
	inline static int32_t get_offset_of_EmptyArray_3() { return static_cast<int32_t>(offsetof(ExposedList_1_t9F8622C73EB60A6882B2968C1C0F1706D574F526_StaticFields, ___EmptyArray_3)); }
	inline SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* get_EmptyArray_3() const { return ___EmptyArray_3; }
	inline SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA** get_address_of_EmptyArray_3() { return &___EmptyArray_3; }
	inline void set_EmptyArray_3(SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* value)
	{
		___EmptyArray_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___EmptyArray_3), (void*)value);
	}
};


// Spine.ExposedList`1<Spine.TransformConstraint>
struct ExposedList_1_t56F73F3BF0C40E1C9EF32828CD09773498FDFB0F  : public RuntimeObject
{
public:
	// T[] Spine.ExposedList`1::Items
	TransformConstraintU5BU5D_tAAB40625ABA9CEE91FE93330DA53DA127EB7E446* ___Items_0;
	// System.Int32 Spine.ExposedList`1::Count
	int32_t ___Count_1;
	// System.Int32 Spine.ExposedList`1::version
	int32_t ___version_4;

public:
	inline static int32_t get_offset_of_Items_0() { return static_cast<int32_t>(offsetof(ExposedList_1_t56F73F3BF0C40E1C9EF32828CD09773498FDFB0F, ___Items_0)); }
	inline TransformConstraintU5BU5D_tAAB40625ABA9CEE91FE93330DA53DA127EB7E446* get_Items_0() const { return ___Items_0; }
	inline TransformConstraintU5BU5D_tAAB40625ABA9CEE91FE93330DA53DA127EB7E446** get_address_of_Items_0() { return &___Items_0; }
	inline void set_Items_0(TransformConstraintU5BU5D_tAAB40625ABA9CEE91FE93330DA53DA127EB7E446* value)
	{
		___Items_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Items_0), (void*)value);
	}

	inline static int32_t get_offset_of_Count_1() { return static_cast<int32_t>(offsetof(ExposedList_1_t56F73F3BF0C40E1C9EF32828CD09773498FDFB0F, ___Count_1)); }
	inline int32_t get_Count_1() const { return ___Count_1; }
	inline int32_t* get_address_of_Count_1() { return &___Count_1; }
	inline void set_Count_1(int32_t value)
	{
		___Count_1 = value;
	}

	inline static int32_t get_offset_of_version_4() { return static_cast<int32_t>(offsetof(ExposedList_1_t56F73F3BF0C40E1C9EF32828CD09773498FDFB0F, ___version_4)); }
	inline int32_t get_version_4() const { return ___version_4; }
	inline int32_t* get_address_of_version_4() { return &___version_4; }
	inline void set_version_4(int32_t value)
	{
		___version_4 = value;
	}
};

struct ExposedList_1_t56F73F3BF0C40E1C9EF32828CD09773498FDFB0F_StaticFields
{
public:
	// T[] Spine.ExposedList`1::EmptyArray
	TransformConstraintU5BU5D_tAAB40625ABA9CEE91FE93330DA53DA127EB7E446* ___EmptyArray_3;

public:
	inline static int32_t get_offset_of_EmptyArray_3() { return static_cast<int32_t>(offsetof(ExposedList_1_t56F73F3BF0C40E1C9EF32828CD09773498FDFB0F_StaticFields, ___EmptyArray_3)); }
	inline TransformConstraintU5BU5D_tAAB40625ABA9CEE91FE93330DA53DA127EB7E446* get_EmptyArray_3() const { return ___EmptyArray_3; }
	inline TransformConstraintU5BU5D_tAAB40625ABA9CEE91FE93330DA53DA127EB7E446** get_address_of_EmptyArray_3() { return &___EmptyArray_3; }
	inline void set_EmptyArray_3(TransformConstraintU5BU5D_tAAB40625ABA9CEE91FE93330DA53DA127EB7E446* value)
	{
		___EmptyArray_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___EmptyArray_3), (void*)value);
	}
};


// Spine.Pool`1<Spine.ExposedList`1<System.Int32>>
struct Pool_1_t5CA90CE7EBA311405CE9C8F1E0C4DDFE861C384A  : public RuntimeObject
{
public:
	// System.Int32 Spine.Pool`1::max
	int32_t ___max_0;
	// System.Collections.Generic.Stack`1<T> Spine.Pool`1::freeObjects
	Stack_1_t2E827BF24387A89C987AA40783D29884A18673C9 * ___freeObjects_1;
	// System.Int32 Spine.Pool`1::<Peak>k__BackingField
	int32_t ___U3CPeakU3Ek__BackingField_2;

public:
	inline static int32_t get_offset_of_max_0() { return static_cast<int32_t>(offsetof(Pool_1_t5CA90CE7EBA311405CE9C8F1E0C4DDFE861C384A, ___max_0)); }
	inline int32_t get_max_0() const { return ___max_0; }
	inline int32_t* get_address_of_max_0() { return &___max_0; }
	inline void set_max_0(int32_t value)
	{
		___max_0 = value;
	}

	inline static int32_t get_offset_of_freeObjects_1() { return static_cast<int32_t>(offsetof(Pool_1_t5CA90CE7EBA311405CE9C8F1E0C4DDFE861C384A, ___freeObjects_1)); }
	inline Stack_1_t2E827BF24387A89C987AA40783D29884A18673C9 * get_freeObjects_1() const { return ___freeObjects_1; }
	inline Stack_1_t2E827BF24387A89C987AA40783D29884A18673C9 ** get_address_of_freeObjects_1() { return &___freeObjects_1; }
	inline void set_freeObjects_1(Stack_1_t2E827BF24387A89C987AA40783D29884A18673C9 * value)
	{
		___freeObjects_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___freeObjects_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CPeakU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(Pool_1_t5CA90CE7EBA311405CE9C8F1E0C4DDFE861C384A, ___U3CPeakU3Ek__BackingField_2)); }
	inline int32_t get_U3CPeakU3Ek__BackingField_2() const { return ___U3CPeakU3Ek__BackingField_2; }
	inline int32_t* get_address_of_U3CPeakU3Ek__BackingField_2() { return &___U3CPeakU3Ek__BackingField_2; }
	inline void set_U3CPeakU3Ek__BackingField_2(int32_t value)
	{
		___U3CPeakU3Ek__BackingField_2 = value;
	}
};


// Spine.Pool`1<Spine.ExposedList`1<System.Single>>
struct Pool_1_tEBC6CCDAC2A4D2FDEE1A4FC452D0D72D0F4142B9  : public RuntimeObject
{
public:
	// System.Int32 Spine.Pool`1::max
	int32_t ___max_0;
	// System.Collections.Generic.Stack`1<T> Spine.Pool`1::freeObjects
	Stack_1_t5D9CF25B6DC2FE8F09EA4C5531F7683367F9C365 * ___freeObjects_1;
	// System.Int32 Spine.Pool`1::<Peak>k__BackingField
	int32_t ___U3CPeakU3Ek__BackingField_2;

public:
	inline static int32_t get_offset_of_max_0() { return static_cast<int32_t>(offsetof(Pool_1_tEBC6CCDAC2A4D2FDEE1A4FC452D0D72D0F4142B9, ___max_0)); }
	inline int32_t get_max_0() const { return ___max_0; }
	inline int32_t* get_address_of_max_0() { return &___max_0; }
	inline void set_max_0(int32_t value)
	{
		___max_0 = value;
	}

	inline static int32_t get_offset_of_freeObjects_1() { return static_cast<int32_t>(offsetof(Pool_1_tEBC6CCDAC2A4D2FDEE1A4FC452D0D72D0F4142B9, ___freeObjects_1)); }
	inline Stack_1_t5D9CF25B6DC2FE8F09EA4C5531F7683367F9C365 * get_freeObjects_1() const { return ___freeObjects_1; }
	inline Stack_1_t5D9CF25B6DC2FE8F09EA4C5531F7683367F9C365 ** get_address_of_freeObjects_1() { return &___freeObjects_1; }
	inline void set_freeObjects_1(Stack_1_t5D9CF25B6DC2FE8F09EA4C5531F7683367F9C365 * value)
	{
		___freeObjects_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___freeObjects_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CPeakU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(Pool_1_tEBC6CCDAC2A4D2FDEE1A4FC452D0D72D0F4142B9, ___U3CPeakU3Ek__BackingField_2)); }
	inline int32_t get_U3CPeakU3Ek__BackingField_2() const { return ___U3CPeakU3Ek__BackingField_2; }
	inline int32_t* get_address_of_U3CPeakU3Ek__BackingField_2() { return &___U3CPeakU3Ek__BackingField_2; }
	inline void set_U3CPeakU3Ek__BackingField_2(int32_t value)
	{
		___U3CPeakU3Ek__BackingField_2 = value;
	}
};


// Spine.Animation
struct Animation_tE800D5597964656F48F303755E4C6C66462E8E90  : public RuntimeObject
{
public:
	// System.String Spine.Animation::name
	String_t* ___name_0;
	// Spine.ExposedList`1<Spine.Timeline> Spine.Animation::timelines
	ExposedList_1_tA3907AC2310205562829E46BC41A014268F91A7B * ___timelines_1;
	// System.Collections.Generic.HashSet`1<System.String> Spine.Animation::timelineIds
	HashSet_1_t45F75268054D01D9E70EB33D7F6D2FA609DB9229 * ___timelineIds_2;
	// System.Single Spine.Animation::duration
	float ___duration_3;

public:
	inline static int32_t get_offset_of_name_0() { return static_cast<int32_t>(offsetof(Animation_tE800D5597964656F48F303755E4C6C66462E8E90, ___name_0)); }
	inline String_t* get_name_0() const { return ___name_0; }
	inline String_t** get_address_of_name_0() { return &___name_0; }
	inline void set_name_0(String_t* value)
	{
		___name_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___name_0), (void*)value);
	}

	inline static int32_t get_offset_of_timelines_1() { return static_cast<int32_t>(offsetof(Animation_tE800D5597964656F48F303755E4C6C66462E8E90, ___timelines_1)); }
	inline ExposedList_1_tA3907AC2310205562829E46BC41A014268F91A7B * get_timelines_1() const { return ___timelines_1; }
	inline ExposedList_1_tA3907AC2310205562829E46BC41A014268F91A7B ** get_address_of_timelines_1() { return &___timelines_1; }
	inline void set_timelines_1(ExposedList_1_tA3907AC2310205562829E46BC41A014268F91A7B * value)
	{
		___timelines_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___timelines_1), (void*)value);
	}

	inline static int32_t get_offset_of_timelineIds_2() { return static_cast<int32_t>(offsetof(Animation_tE800D5597964656F48F303755E4C6C66462E8E90, ___timelineIds_2)); }
	inline HashSet_1_t45F75268054D01D9E70EB33D7F6D2FA609DB9229 * get_timelineIds_2() const { return ___timelineIds_2; }
	inline HashSet_1_t45F75268054D01D9E70EB33D7F6D2FA609DB9229 ** get_address_of_timelineIds_2() { return &___timelineIds_2; }
	inline void set_timelineIds_2(HashSet_1_t45F75268054D01D9E70EB33D7F6D2FA609DB9229 * value)
	{
		___timelineIds_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___timelineIds_2), (void*)value);
	}

	inline static int32_t get_offset_of_duration_3() { return static_cast<int32_t>(offsetof(Animation_tE800D5597964656F48F303755E4C6C66462E8E90, ___duration_3)); }
	inline float get_duration_3() const { return ___duration_3; }
	inline float* get_address_of_duration_3() { return &___duration_3; }
	inline void set_duration_3(float value)
	{
		___duration_3 = value;
	}
};

struct Il2CppArrayBounds;

// System.Array


// Spine.AtlasRegion
struct AtlasRegion_t82875C2D00A27CA4974B4D3529484CA9F57F8485  : public RuntimeObject
{
public:
	// Spine.AtlasPage Spine.AtlasRegion::page
	AtlasPage_t8A12ACC89F843E7F1869ADA9D82221D8298850F6 * ___page_0;
	// System.String Spine.AtlasRegion::name
	String_t* ___name_1;
	// System.Int32 Spine.AtlasRegion::x
	int32_t ___x_2;
	// System.Int32 Spine.AtlasRegion::y
	int32_t ___y_3;
	// System.Int32 Spine.AtlasRegion::width
	int32_t ___width_4;
	// System.Int32 Spine.AtlasRegion::height
	int32_t ___height_5;
	// System.Single Spine.AtlasRegion::u
	float ___u_6;
	// System.Single Spine.AtlasRegion::v
	float ___v_7;
	// System.Single Spine.AtlasRegion::u2
	float ___u2_8;
	// System.Single Spine.AtlasRegion::v2
	float ___v2_9;
	// System.Single Spine.AtlasRegion::offsetX
	float ___offsetX_10;
	// System.Single Spine.AtlasRegion::offsetY
	float ___offsetY_11;
	// System.Int32 Spine.AtlasRegion::originalWidth
	int32_t ___originalWidth_12;
	// System.Int32 Spine.AtlasRegion::originalHeight
	int32_t ___originalHeight_13;
	// System.Int32 Spine.AtlasRegion::degrees
	int32_t ___degrees_14;
	// System.Boolean Spine.AtlasRegion::rotate
	bool ___rotate_15;
	// System.Int32 Spine.AtlasRegion::index
	int32_t ___index_16;
	// System.String[] Spine.AtlasRegion::names
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___names_17;
	// System.Int32[][] Spine.AtlasRegion::values
	Int32U5BU5DU5BU5D_t104DBF1B996084AA19567FD32B02EDF88D044FAF* ___values_18;

public:
	inline static int32_t get_offset_of_page_0() { return static_cast<int32_t>(offsetof(AtlasRegion_t82875C2D00A27CA4974B4D3529484CA9F57F8485, ___page_0)); }
	inline AtlasPage_t8A12ACC89F843E7F1869ADA9D82221D8298850F6 * get_page_0() const { return ___page_0; }
	inline AtlasPage_t8A12ACC89F843E7F1869ADA9D82221D8298850F6 ** get_address_of_page_0() { return &___page_0; }
	inline void set_page_0(AtlasPage_t8A12ACC89F843E7F1869ADA9D82221D8298850F6 * value)
	{
		___page_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___page_0), (void*)value);
	}

	inline static int32_t get_offset_of_name_1() { return static_cast<int32_t>(offsetof(AtlasRegion_t82875C2D00A27CA4974B4D3529484CA9F57F8485, ___name_1)); }
	inline String_t* get_name_1() const { return ___name_1; }
	inline String_t** get_address_of_name_1() { return &___name_1; }
	inline void set_name_1(String_t* value)
	{
		___name_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___name_1), (void*)value);
	}

	inline static int32_t get_offset_of_x_2() { return static_cast<int32_t>(offsetof(AtlasRegion_t82875C2D00A27CA4974B4D3529484CA9F57F8485, ___x_2)); }
	inline int32_t get_x_2() const { return ___x_2; }
	inline int32_t* get_address_of_x_2() { return &___x_2; }
	inline void set_x_2(int32_t value)
	{
		___x_2 = value;
	}

	inline static int32_t get_offset_of_y_3() { return static_cast<int32_t>(offsetof(AtlasRegion_t82875C2D00A27CA4974B4D3529484CA9F57F8485, ___y_3)); }
	inline int32_t get_y_3() const { return ___y_3; }
	inline int32_t* get_address_of_y_3() { return &___y_3; }
	inline void set_y_3(int32_t value)
	{
		___y_3 = value;
	}

	inline static int32_t get_offset_of_width_4() { return static_cast<int32_t>(offsetof(AtlasRegion_t82875C2D00A27CA4974B4D3529484CA9F57F8485, ___width_4)); }
	inline int32_t get_width_4() const { return ___width_4; }
	inline int32_t* get_address_of_width_4() { return &___width_4; }
	inline void set_width_4(int32_t value)
	{
		___width_4 = value;
	}

	inline static int32_t get_offset_of_height_5() { return static_cast<int32_t>(offsetof(AtlasRegion_t82875C2D00A27CA4974B4D3529484CA9F57F8485, ___height_5)); }
	inline int32_t get_height_5() const { return ___height_5; }
	inline int32_t* get_address_of_height_5() { return &___height_5; }
	inline void set_height_5(int32_t value)
	{
		___height_5 = value;
	}

	inline static int32_t get_offset_of_u_6() { return static_cast<int32_t>(offsetof(AtlasRegion_t82875C2D00A27CA4974B4D3529484CA9F57F8485, ___u_6)); }
	inline float get_u_6() const { return ___u_6; }
	inline float* get_address_of_u_6() { return &___u_6; }
	inline void set_u_6(float value)
	{
		___u_6 = value;
	}

	inline static int32_t get_offset_of_v_7() { return static_cast<int32_t>(offsetof(AtlasRegion_t82875C2D00A27CA4974B4D3529484CA9F57F8485, ___v_7)); }
	inline float get_v_7() const { return ___v_7; }
	inline float* get_address_of_v_7() { return &___v_7; }
	inline void set_v_7(float value)
	{
		___v_7 = value;
	}

	inline static int32_t get_offset_of_u2_8() { return static_cast<int32_t>(offsetof(AtlasRegion_t82875C2D00A27CA4974B4D3529484CA9F57F8485, ___u2_8)); }
	inline float get_u2_8() const { return ___u2_8; }
	inline float* get_address_of_u2_8() { return &___u2_8; }
	inline void set_u2_8(float value)
	{
		___u2_8 = value;
	}

	inline static int32_t get_offset_of_v2_9() { return static_cast<int32_t>(offsetof(AtlasRegion_t82875C2D00A27CA4974B4D3529484CA9F57F8485, ___v2_9)); }
	inline float get_v2_9() const { return ___v2_9; }
	inline float* get_address_of_v2_9() { return &___v2_9; }
	inline void set_v2_9(float value)
	{
		___v2_9 = value;
	}

	inline static int32_t get_offset_of_offsetX_10() { return static_cast<int32_t>(offsetof(AtlasRegion_t82875C2D00A27CA4974B4D3529484CA9F57F8485, ___offsetX_10)); }
	inline float get_offsetX_10() const { return ___offsetX_10; }
	inline float* get_address_of_offsetX_10() { return &___offsetX_10; }
	inline void set_offsetX_10(float value)
	{
		___offsetX_10 = value;
	}

	inline static int32_t get_offset_of_offsetY_11() { return static_cast<int32_t>(offsetof(AtlasRegion_t82875C2D00A27CA4974B4D3529484CA9F57F8485, ___offsetY_11)); }
	inline float get_offsetY_11() const { return ___offsetY_11; }
	inline float* get_address_of_offsetY_11() { return &___offsetY_11; }
	inline void set_offsetY_11(float value)
	{
		___offsetY_11 = value;
	}

	inline static int32_t get_offset_of_originalWidth_12() { return static_cast<int32_t>(offsetof(AtlasRegion_t82875C2D00A27CA4974B4D3529484CA9F57F8485, ___originalWidth_12)); }
	inline int32_t get_originalWidth_12() const { return ___originalWidth_12; }
	inline int32_t* get_address_of_originalWidth_12() { return &___originalWidth_12; }
	inline void set_originalWidth_12(int32_t value)
	{
		___originalWidth_12 = value;
	}

	inline static int32_t get_offset_of_originalHeight_13() { return static_cast<int32_t>(offsetof(AtlasRegion_t82875C2D00A27CA4974B4D3529484CA9F57F8485, ___originalHeight_13)); }
	inline int32_t get_originalHeight_13() const { return ___originalHeight_13; }
	inline int32_t* get_address_of_originalHeight_13() { return &___originalHeight_13; }
	inline void set_originalHeight_13(int32_t value)
	{
		___originalHeight_13 = value;
	}

	inline static int32_t get_offset_of_degrees_14() { return static_cast<int32_t>(offsetof(AtlasRegion_t82875C2D00A27CA4974B4D3529484CA9F57F8485, ___degrees_14)); }
	inline int32_t get_degrees_14() const { return ___degrees_14; }
	inline int32_t* get_address_of_degrees_14() { return &___degrees_14; }
	inline void set_degrees_14(int32_t value)
	{
		___degrees_14 = value;
	}

	inline static int32_t get_offset_of_rotate_15() { return static_cast<int32_t>(offsetof(AtlasRegion_t82875C2D00A27CA4974B4D3529484CA9F57F8485, ___rotate_15)); }
	inline bool get_rotate_15() const { return ___rotate_15; }
	inline bool* get_address_of_rotate_15() { return &___rotate_15; }
	inline void set_rotate_15(bool value)
	{
		___rotate_15 = value;
	}

	inline static int32_t get_offset_of_index_16() { return static_cast<int32_t>(offsetof(AtlasRegion_t82875C2D00A27CA4974B4D3529484CA9F57F8485, ___index_16)); }
	inline int32_t get_index_16() const { return ___index_16; }
	inline int32_t* get_address_of_index_16() { return &___index_16; }
	inline void set_index_16(int32_t value)
	{
		___index_16 = value;
	}

	inline static int32_t get_offset_of_names_17() { return static_cast<int32_t>(offsetof(AtlasRegion_t82875C2D00A27CA4974B4D3529484CA9F57F8485, ___names_17)); }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* get_names_17() const { return ___names_17; }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A** get_address_of_names_17() { return &___names_17; }
	inline void set_names_17(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* value)
	{
		___names_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___names_17), (void*)value);
	}

	inline static int32_t get_offset_of_values_18() { return static_cast<int32_t>(offsetof(AtlasRegion_t82875C2D00A27CA4974B4D3529484CA9F57F8485, ___values_18)); }
	inline Int32U5BU5DU5BU5D_t104DBF1B996084AA19567FD32B02EDF88D044FAF* get_values_18() const { return ___values_18; }
	inline Int32U5BU5DU5BU5D_t104DBF1B996084AA19567FD32B02EDF88D044FAF** get_address_of_values_18() { return &___values_18; }
	inline void set_values_18(Int32U5BU5DU5BU5D_t104DBF1B996084AA19567FD32B02EDF88D044FAF* value)
	{
		___values_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___values_18), (void*)value);
	}
};


// Spine.Attachment
struct Attachment_tA85256BF51006C369687395955B6A6B51D432F21  : public RuntimeObject
{
public:
	// System.String Spine.Attachment::<Name>k__BackingField
	String_t* ___U3CNameU3Ek__BackingField_0;

public:
	inline static int32_t get_offset_of_U3CNameU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(Attachment_tA85256BF51006C369687395955B6A6B51D432F21, ___U3CNameU3Ek__BackingField_0)); }
	inline String_t* get_U3CNameU3Ek__BackingField_0() const { return ___U3CNameU3Ek__BackingField_0; }
	inline String_t** get_address_of_U3CNameU3Ek__BackingField_0() { return &___U3CNameU3Ek__BackingField_0; }
	inline void set_U3CNameU3Ek__BackingField_0(String_t* value)
	{
		___U3CNameU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CNameU3Ek__BackingField_0), (void*)value);
	}
};


// Spine.Bone
struct Bone_t6DA0B82485BED2E4EEE864AAD607EEBDC2F98AAF  : public RuntimeObject
{
public:
	// Spine.BoneData Spine.Bone::data
	BoneData_t48A671E6818E76905840CC122A96889DDCB92A51 * ___data_1;
	// Spine.Skeleton Spine.Bone::skeleton
	Skeleton_tA4F63D1CB185D30296FA5323E1DA8B993E21293C * ___skeleton_2;
	// Spine.Bone Spine.Bone::parent
	Bone_t6DA0B82485BED2E4EEE864AAD607EEBDC2F98AAF * ___parent_3;
	// Spine.ExposedList`1<Spine.Bone> Spine.Bone::children
	ExposedList_1_t4F66E6448150D0CAC1BD8C1A4810A7CEB844B164 * ___children_4;
	// System.Single Spine.Bone::x
	float ___x_5;
	// System.Single Spine.Bone::y
	float ___y_6;
	// System.Single Spine.Bone::rotation
	float ___rotation_7;
	// System.Single Spine.Bone::scaleX
	float ___scaleX_8;
	// System.Single Spine.Bone::scaleY
	float ___scaleY_9;
	// System.Single Spine.Bone::shearX
	float ___shearX_10;
	// System.Single Spine.Bone::shearY
	float ___shearY_11;
	// System.Single Spine.Bone::ax
	float ___ax_12;
	// System.Single Spine.Bone::ay
	float ___ay_13;
	// System.Single Spine.Bone::arotation
	float ___arotation_14;
	// System.Single Spine.Bone::ascaleX
	float ___ascaleX_15;
	// System.Single Spine.Bone::ascaleY
	float ___ascaleY_16;
	// System.Single Spine.Bone::ashearX
	float ___ashearX_17;
	// System.Single Spine.Bone::ashearY
	float ___ashearY_18;
	// System.Single Spine.Bone::a
	float ___a_19;
	// System.Single Spine.Bone::b
	float ___b_20;
	// System.Single Spine.Bone::worldX
	float ___worldX_21;
	// System.Single Spine.Bone::c
	float ___c_22;
	// System.Single Spine.Bone::d
	float ___d_23;
	// System.Single Spine.Bone::worldY
	float ___worldY_24;
	// System.Boolean Spine.Bone::sorted
	bool ___sorted_25;
	// System.Boolean Spine.Bone::active
	bool ___active_26;

public:
	inline static int32_t get_offset_of_data_1() { return static_cast<int32_t>(offsetof(Bone_t6DA0B82485BED2E4EEE864AAD607EEBDC2F98AAF, ___data_1)); }
	inline BoneData_t48A671E6818E76905840CC122A96889DDCB92A51 * get_data_1() const { return ___data_1; }
	inline BoneData_t48A671E6818E76905840CC122A96889DDCB92A51 ** get_address_of_data_1() { return &___data_1; }
	inline void set_data_1(BoneData_t48A671E6818E76905840CC122A96889DDCB92A51 * value)
	{
		___data_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___data_1), (void*)value);
	}

	inline static int32_t get_offset_of_skeleton_2() { return static_cast<int32_t>(offsetof(Bone_t6DA0B82485BED2E4EEE864AAD607EEBDC2F98AAF, ___skeleton_2)); }
	inline Skeleton_tA4F63D1CB185D30296FA5323E1DA8B993E21293C * get_skeleton_2() const { return ___skeleton_2; }
	inline Skeleton_tA4F63D1CB185D30296FA5323E1DA8B993E21293C ** get_address_of_skeleton_2() { return &___skeleton_2; }
	inline void set_skeleton_2(Skeleton_tA4F63D1CB185D30296FA5323E1DA8B993E21293C * value)
	{
		___skeleton_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___skeleton_2), (void*)value);
	}

	inline static int32_t get_offset_of_parent_3() { return static_cast<int32_t>(offsetof(Bone_t6DA0B82485BED2E4EEE864AAD607EEBDC2F98AAF, ___parent_3)); }
	inline Bone_t6DA0B82485BED2E4EEE864AAD607EEBDC2F98AAF * get_parent_3() const { return ___parent_3; }
	inline Bone_t6DA0B82485BED2E4EEE864AAD607EEBDC2F98AAF ** get_address_of_parent_3() { return &___parent_3; }
	inline void set_parent_3(Bone_t6DA0B82485BED2E4EEE864AAD607EEBDC2F98AAF * value)
	{
		___parent_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___parent_3), (void*)value);
	}

	inline static int32_t get_offset_of_children_4() { return static_cast<int32_t>(offsetof(Bone_t6DA0B82485BED2E4EEE864AAD607EEBDC2F98AAF, ___children_4)); }
	inline ExposedList_1_t4F66E6448150D0CAC1BD8C1A4810A7CEB844B164 * get_children_4() const { return ___children_4; }
	inline ExposedList_1_t4F66E6448150D0CAC1BD8C1A4810A7CEB844B164 ** get_address_of_children_4() { return &___children_4; }
	inline void set_children_4(ExposedList_1_t4F66E6448150D0CAC1BD8C1A4810A7CEB844B164 * value)
	{
		___children_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___children_4), (void*)value);
	}

	inline static int32_t get_offset_of_x_5() { return static_cast<int32_t>(offsetof(Bone_t6DA0B82485BED2E4EEE864AAD607EEBDC2F98AAF, ___x_5)); }
	inline float get_x_5() const { return ___x_5; }
	inline float* get_address_of_x_5() { return &___x_5; }
	inline void set_x_5(float value)
	{
		___x_5 = value;
	}

	inline static int32_t get_offset_of_y_6() { return static_cast<int32_t>(offsetof(Bone_t6DA0B82485BED2E4EEE864AAD607EEBDC2F98AAF, ___y_6)); }
	inline float get_y_6() const { return ___y_6; }
	inline float* get_address_of_y_6() { return &___y_6; }
	inline void set_y_6(float value)
	{
		___y_6 = value;
	}

	inline static int32_t get_offset_of_rotation_7() { return static_cast<int32_t>(offsetof(Bone_t6DA0B82485BED2E4EEE864AAD607EEBDC2F98AAF, ___rotation_7)); }
	inline float get_rotation_7() const { return ___rotation_7; }
	inline float* get_address_of_rotation_7() { return &___rotation_7; }
	inline void set_rotation_7(float value)
	{
		___rotation_7 = value;
	}

	inline static int32_t get_offset_of_scaleX_8() { return static_cast<int32_t>(offsetof(Bone_t6DA0B82485BED2E4EEE864AAD607EEBDC2F98AAF, ___scaleX_8)); }
	inline float get_scaleX_8() const { return ___scaleX_8; }
	inline float* get_address_of_scaleX_8() { return &___scaleX_8; }
	inline void set_scaleX_8(float value)
	{
		___scaleX_8 = value;
	}

	inline static int32_t get_offset_of_scaleY_9() { return static_cast<int32_t>(offsetof(Bone_t6DA0B82485BED2E4EEE864AAD607EEBDC2F98AAF, ___scaleY_9)); }
	inline float get_scaleY_9() const { return ___scaleY_9; }
	inline float* get_address_of_scaleY_9() { return &___scaleY_9; }
	inline void set_scaleY_9(float value)
	{
		___scaleY_9 = value;
	}

	inline static int32_t get_offset_of_shearX_10() { return static_cast<int32_t>(offsetof(Bone_t6DA0B82485BED2E4EEE864AAD607EEBDC2F98AAF, ___shearX_10)); }
	inline float get_shearX_10() const { return ___shearX_10; }
	inline float* get_address_of_shearX_10() { return &___shearX_10; }
	inline void set_shearX_10(float value)
	{
		___shearX_10 = value;
	}

	inline static int32_t get_offset_of_shearY_11() { return static_cast<int32_t>(offsetof(Bone_t6DA0B82485BED2E4EEE864AAD607EEBDC2F98AAF, ___shearY_11)); }
	inline float get_shearY_11() const { return ___shearY_11; }
	inline float* get_address_of_shearY_11() { return &___shearY_11; }
	inline void set_shearY_11(float value)
	{
		___shearY_11 = value;
	}

	inline static int32_t get_offset_of_ax_12() { return static_cast<int32_t>(offsetof(Bone_t6DA0B82485BED2E4EEE864AAD607EEBDC2F98AAF, ___ax_12)); }
	inline float get_ax_12() const { return ___ax_12; }
	inline float* get_address_of_ax_12() { return &___ax_12; }
	inline void set_ax_12(float value)
	{
		___ax_12 = value;
	}

	inline static int32_t get_offset_of_ay_13() { return static_cast<int32_t>(offsetof(Bone_t6DA0B82485BED2E4EEE864AAD607EEBDC2F98AAF, ___ay_13)); }
	inline float get_ay_13() const { return ___ay_13; }
	inline float* get_address_of_ay_13() { return &___ay_13; }
	inline void set_ay_13(float value)
	{
		___ay_13 = value;
	}

	inline static int32_t get_offset_of_arotation_14() { return static_cast<int32_t>(offsetof(Bone_t6DA0B82485BED2E4EEE864AAD607EEBDC2F98AAF, ___arotation_14)); }
	inline float get_arotation_14() const { return ___arotation_14; }
	inline float* get_address_of_arotation_14() { return &___arotation_14; }
	inline void set_arotation_14(float value)
	{
		___arotation_14 = value;
	}

	inline static int32_t get_offset_of_ascaleX_15() { return static_cast<int32_t>(offsetof(Bone_t6DA0B82485BED2E4EEE864AAD607EEBDC2F98AAF, ___ascaleX_15)); }
	inline float get_ascaleX_15() const { return ___ascaleX_15; }
	inline float* get_address_of_ascaleX_15() { return &___ascaleX_15; }
	inline void set_ascaleX_15(float value)
	{
		___ascaleX_15 = value;
	}

	inline static int32_t get_offset_of_ascaleY_16() { return static_cast<int32_t>(offsetof(Bone_t6DA0B82485BED2E4EEE864AAD607EEBDC2F98AAF, ___ascaleY_16)); }
	inline float get_ascaleY_16() const { return ___ascaleY_16; }
	inline float* get_address_of_ascaleY_16() { return &___ascaleY_16; }
	inline void set_ascaleY_16(float value)
	{
		___ascaleY_16 = value;
	}

	inline static int32_t get_offset_of_ashearX_17() { return static_cast<int32_t>(offsetof(Bone_t6DA0B82485BED2E4EEE864AAD607EEBDC2F98AAF, ___ashearX_17)); }
	inline float get_ashearX_17() const { return ___ashearX_17; }
	inline float* get_address_of_ashearX_17() { return &___ashearX_17; }
	inline void set_ashearX_17(float value)
	{
		___ashearX_17 = value;
	}

	inline static int32_t get_offset_of_ashearY_18() { return static_cast<int32_t>(offsetof(Bone_t6DA0B82485BED2E4EEE864AAD607EEBDC2F98AAF, ___ashearY_18)); }
	inline float get_ashearY_18() const { return ___ashearY_18; }
	inline float* get_address_of_ashearY_18() { return &___ashearY_18; }
	inline void set_ashearY_18(float value)
	{
		___ashearY_18 = value;
	}

	inline static int32_t get_offset_of_a_19() { return static_cast<int32_t>(offsetof(Bone_t6DA0B82485BED2E4EEE864AAD607EEBDC2F98AAF, ___a_19)); }
	inline float get_a_19() const { return ___a_19; }
	inline float* get_address_of_a_19() { return &___a_19; }
	inline void set_a_19(float value)
	{
		___a_19 = value;
	}

	inline static int32_t get_offset_of_b_20() { return static_cast<int32_t>(offsetof(Bone_t6DA0B82485BED2E4EEE864AAD607EEBDC2F98AAF, ___b_20)); }
	inline float get_b_20() const { return ___b_20; }
	inline float* get_address_of_b_20() { return &___b_20; }
	inline void set_b_20(float value)
	{
		___b_20 = value;
	}

	inline static int32_t get_offset_of_worldX_21() { return static_cast<int32_t>(offsetof(Bone_t6DA0B82485BED2E4EEE864AAD607EEBDC2F98AAF, ___worldX_21)); }
	inline float get_worldX_21() const { return ___worldX_21; }
	inline float* get_address_of_worldX_21() { return &___worldX_21; }
	inline void set_worldX_21(float value)
	{
		___worldX_21 = value;
	}

	inline static int32_t get_offset_of_c_22() { return static_cast<int32_t>(offsetof(Bone_t6DA0B82485BED2E4EEE864AAD607EEBDC2F98AAF, ___c_22)); }
	inline float get_c_22() const { return ___c_22; }
	inline float* get_address_of_c_22() { return &___c_22; }
	inline void set_c_22(float value)
	{
		___c_22 = value;
	}

	inline static int32_t get_offset_of_d_23() { return static_cast<int32_t>(offsetof(Bone_t6DA0B82485BED2E4EEE864AAD607EEBDC2F98AAF, ___d_23)); }
	inline float get_d_23() const { return ___d_23; }
	inline float* get_address_of_d_23() { return &___d_23; }
	inline void set_d_23(float value)
	{
		___d_23 = value;
	}

	inline static int32_t get_offset_of_worldY_24() { return static_cast<int32_t>(offsetof(Bone_t6DA0B82485BED2E4EEE864AAD607EEBDC2F98AAF, ___worldY_24)); }
	inline float get_worldY_24() const { return ___worldY_24; }
	inline float* get_address_of_worldY_24() { return &___worldY_24; }
	inline void set_worldY_24(float value)
	{
		___worldY_24 = value;
	}

	inline static int32_t get_offset_of_sorted_25() { return static_cast<int32_t>(offsetof(Bone_t6DA0B82485BED2E4EEE864AAD607EEBDC2F98AAF, ___sorted_25)); }
	inline bool get_sorted_25() const { return ___sorted_25; }
	inline bool* get_address_of_sorted_25() { return &___sorted_25; }
	inline void set_sorted_25(bool value)
	{
		___sorted_25 = value;
	}

	inline static int32_t get_offset_of_active_26() { return static_cast<int32_t>(offsetof(Bone_t6DA0B82485BED2E4EEE864AAD607EEBDC2F98AAF, ___active_26)); }
	inline bool get_active_26() const { return ___active_26; }
	inline bool* get_address_of_active_26() { return &___active_26; }
	inline void set_active_26(bool value)
	{
		___active_26 = value;
	}
};

struct Bone_t6DA0B82485BED2E4EEE864AAD607EEBDC2F98AAF_StaticFields
{
public:
	// System.Boolean Spine.Bone::yDown
	bool ___yDown_0;

public:
	inline static int32_t get_offset_of_yDown_0() { return static_cast<int32_t>(offsetof(Bone_t6DA0B82485BED2E4EEE864AAD607EEBDC2F98AAF_StaticFields, ___yDown_0)); }
	inline bool get_yDown_0() const { return ___yDown_0; }
	inline bool* get_address_of_yDown_0() { return &___yDown_0; }
	inline void set_yDown_0(bool value)
	{
		___yDown_0 = value;
	}
};


// Spine.ConstraintData
struct ConstraintData_t71BA8ACA83AC8927FE1FEDFAB6A24846C01D138F  : public RuntimeObject
{
public:
	// System.String Spine.ConstraintData::name
	String_t* ___name_0;
	// System.Int32 Spine.ConstraintData::order
	int32_t ___order_1;
	// System.Boolean Spine.ConstraintData::skinRequired
	bool ___skinRequired_2;

public:
	inline static int32_t get_offset_of_name_0() { return static_cast<int32_t>(offsetof(ConstraintData_t71BA8ACA83AC8927FE1FEDFAB6A24846C01D138F, ___name_0)); }
	inline String_t* get_name_0() const { return ___name_0; }
	inline String_t** get_address_of_name_0() { return &___name_0; }
	inline void set_name_0(String_t* value)
	{
		___name_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___name_0), (void*)value);
	}

	inline static int32_t get_offset_of_order_1() { return static_cast<int32_t>(offsetof(ConstraintData_t71BA8ACA83AC8927FE1FEDFAB6A24846C01D138F, ___order_1)); }
	inline int32_t get_order_1() const { return ___order_1; }
	inline int32_t* get_address_of_order_1() { return &___order_1; }
	inline void set_order_1(int32_t value)
	{
		___order_1 = value;
	}

	inline static int32_t get_offset_of_skinRequired_2() { return static_cast<int32_t>(offsetof(ConstraintData_t71BA8ACA83AC8927FE1FEDFAB6A24846C01D138F, ___skinRequired_2)); }
	inline bool get_skinRequired_2() const { return ___skinRequired_2; }
	inline bool* get_address_of_skinRequired_2() { return &___skinRequired_2; }
	inline void set_skinRequired_2(bool value)
	{
		___skinRequired_2 = value;
	}
};


// System.Globalization.CultureInfo
struct CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98  : public RuntimeObject
{
public:
	// System.Boolean System.Globalization.CultureInfo::m_isReadOnly
	bool ___m_isReadOnly_3;
	// System.Int32 System.Globalization.CultureInfo::cultureID
	int32_t ___cultureID_4;
	// System.Int32 System.Globalization.CultureInfo::parent_lcid
	int32_t ___parent_lcid_5;
	// System.Int32 System.Globalization.CultureInfo::datetime_index
	int32_t ___datetime_index_6;
	// System.Int32 System.Globalization.CultureInfo::number_index
	int32_t ___number_index_7;
	// System.Int32 System.Globalization.CultureInfo::default_calendar_type
	int32_t ___default_calendar_type_8;
	// System.Boolean System.Globalization.CultureInfo::m_useUserOverride
	bool ___m_useUserOverride_9;
	// System.Globalization.NumberFormatInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::numInfo
	NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D * ___numInfo_10;
	// System.Globalization.DateTimeFormatInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::dateTimeInfo
	DateTimeFormatInfo_t0B9F6CA631A51CFC98A3C6031CF8069843137C90 * ___dateTimeInfo_11;
	// System.Globalization.TextInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::textInfo
	TextInfo_tE823D0684BFE8B203501C9B2B38585E8F06E872C * ___textInfo_12;
	// System.String System.Globalization.CultureInfo::m_name
	String_t* ___m_name_13;
	// System.String System.Globalization.CultureInfo::englishname
	String_t* ___englishname_14;
	// System.String System.Globalization.CultureInfo::nativename
	String_t* ___nativename_15;
	// System.String System.Globalization.CultureInfo::iso3lang
	String_t* ___iso3lang_16;
	// System.String System.Globalization.CultureInfo::iso2lang
	String_t* ___iso2lang_17;
	// System.String System.Globalization.CultureInfo::win3lang
	String_t* ___win3lang_18;
	// System.String System.Globalization.CultureInfo::territory
	String_t* ___territory_19;
	// System.String[] System.Globalization.CultureInfo::native_calendar_names
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___native_calendar_names_20;
	// System.Globalization.CompareInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::compareInfo
	CompareInfo_t4AB62EC32E8AF1E469E315620C7E3FB8B0CAE0C9 * ___compareInfo_21;
	// System.Void* System.Globalization.CultureInfo::textinfo_data
	void* ___textinfo_data_22;
	// System.Int32 System.Globalization.CultureInfo::m_dataItem
	int32_t ___m_dataItem_23;
	// System.Globalization.Calendar System.Globalization.CultureInfo::calendar
	Calendar_t3D638AEAB45F029DF47138EDA4CF9A7CBBB1C32A * ___calendar_24;
	// System.Globalization.CultureInfo System.Globalization.CultureInfo::parent_culture
	CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * ___parent_culture_25;
	// System.Boolean System.Globalization.CultureInfo::constructed
	bool ___constructed_26;
	// System.Byte[] System.Globalization.CultureInfo::cached_serialized_form
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___cached_serialized_form_27;
	// System.Globalization.CultureData System.Globalization.CultureInfo::m_cultureData
	CultureData_t53CDF1C5F789A28897415891667799420D3C5529 * ___m_cultureData_28;
	// System.Boolean System.Globalization.CultureInfo::m_isInherited
	bool ___m_isInherited_29;

public:
	inline static int32_t get_offset_of_m_isReadOnly_3() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___m_isReadOnly_3)); }
	inline bool get_m_isReadOnly_3() const { return ___m_isReadOnly_3; }
	inline bool* get_address_of_m_isReadOnly_3() { return &___m_isReadOnly_3; }
	inline void set_m_isReadOnly_3(bool value)
	{
		___m_isReadOnly_3 = value;
	}

	inline static int32_t get_offset_of_cultureID_4() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___cultureID_4)); }
	inline int32_t get_cultureID_4() const { return ___cultureID_4; }
	inline int32_t* get_address_of_cultureID_4() { return &___cultureID_4; }
	inline void set_cultureID_4(int32_t value)
	{
		___cultureID_4 = value;
	}

	inline static int32_t get_offset_of_parent_lcid_5() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___parent_lcid_5)); }
	inline int32_t get_parent_lcid_5() const { return ___parent_lcid_5; }
	inline int32_t* get_address_of_parent_lcid_5() { return &___parent_lcid_5; }
	inline void set_parent_lcid_5(int32_t value)
	{
		___parent_lcid_5 = value;
	}

	inline static int32_t get_offset_of_datetime_index_6() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___datetime_index_6)); }
	inline int32_t get_datetime_index_6() const { return ___datetime_index_6; }
	inline int32_t* get_address_of_datetime_index_6() { return &___datetime_index_6; }
	inline void set_datetime_index_6(int32_t value)
	{
		___datetime_index_6 = value;
	}

	inline static int32_t get_offset_of_number_index_7() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___number_index_7)); }
	inline int32_t get_number_index_7() const { return ___number_index_7; }
	inline int32_t* get_address_of_number_index_7() { return &___number_index_7; }
	inline void set_number_index_7(int32_t value)
	{
		___number_index_7 = value;
	}

	inline static int32_t get_offset_of_default_calendar_type_8() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___default_calendar_type_8)); }
	inline int32_t get_default_calendar_type_8() const { return ___default_calendar_type_8; }
	inline int32_t* get_address_of_default_calendar_type_8() { return &___default_calendar_type_8; }
	inline void set_default_calendar_type_8(int32_t value)
	{
		___default_calendar_type_8 = value;
	}

	inline static int32_t get_offset_of_m_useUserOverride_9() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___m_useUserOverride_9)); }
	inline bool get_m_useUserOverride_9() const { return ___m_useUserOverride_9; }
	inline bool* get_address_of_m_useUserOverride_9() { return &___m_useUserOverride_9; }
	inline void set_m_useUserOverride_9(bool value)
	{
		___m_useUserOverride_9 = value;
	}

	inline static int32_t get_offset_of_numInfo_10() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___numInfo_10)); }
	inline NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D * get_numInfo_10() const { return ___numInfo_10; }
	inline NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D ** get_address_of_numInfo_10() { return &___numInfo_10; }
	inline void set_numInfo_10(NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D * value)
	{
		___numInfo_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___numInfo_10), (void*)value);
	}

	inline static int32_t get_offset_of_dateTimeInfo_11() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___dateTimeInfo_11)); }
	inline DateTimeFormatInfo_t0B9F6CA631A51CFC98A3C6031CF8069843137C90 * get_dateTimeInfo_11() const { return ___dateTimeInfo_11; }
	inline DateTimeFormatInfo_t0B9F6CA631A51CFC98A3C6031CF8069843137C90 ** get_address_of_dateTimeInfo_11() { return &___dateTimeInfo_11; }
	inline void set_dateTimeInfo_11(DateTimeFormatInfo_t0B9F6CA631A51CFC98A3C6031CF8069843137C90 * value)
	{
		___dateTimeInfo_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___dateTimeInfo_11), (void*)value);
	}

	inline static int32_t get_offset_of_textInfo_12() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___textInfo_12)); }
	inline TextInfo_tE823D0684BFE8B203501C9B2B38585E8F06E872C * get_textInfo_12() const { return ___textInfo_12; }
	inline TextInfo_tE823D0684BFE8B203501C9B2B38585E8F06E872C ** get_address_of_textInfo_12() { return &___textInfo_12; }
	inline void set_textInfo_12(TextInfo_tE823D0684BFE8B203501C9B2B38585E8F06E872C * value)
	{
		___textInfo_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___textInfo_12), (void*)value);
	}

	inline static int32_t get_offset_of_m_name_13() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___m_name_13)); }
	inline String_t* get_m_name_13() const { return ___m_name_13; }
	inline String_t** get_address_of_m_name_13() { return &___m_name_13; }
	inline void set_m_name_13(String_t* value)
	{
		___m_name_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_name_13), (void*)value);
	}

	inline static int32_t get_offset_of_englishname_14() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___englishname_14)); }
	inline String_t* get_englishname_14() const { return ___englishname_14; }
	inline String_t** get_address_of_englishname_14() { return &___englishname_14; }
	inline void set_englishname_14(String_t* value)
	{
		___englishname_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___englishname_14), (void*)value);
	}

	inline static int32_t get_offset_of_nativename_15() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___nativename_15)); }
	inline String_t* get_nativename_15() const { return ___nativename_15; }
	inline String_t** get_address_of_nativename_15() { return &___nativename_15; }
	inline void set_nativename_15(String_t* value)
	{
		___nativename_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___nativename_15), (void*)value);
	}

	inline static int32_t get_offset_of_iso3lang_16() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___iso3lang_16)); }
	inline String_t* get_iso3lang_16() const { return ___iso3lang_16; }
	inline String_t** get_address_of_iso3lang_16() { return &___iso3lang_16; }
	inline void set_iso3lang_16(String_t* value)
	{
		___iso3lang_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___iso3lang_16), (void*)value);
	}

	inline static int32_t get_offset_of_iso2lang_17() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___iso2lang_17)); }
	inline String_t* get_iso2lang_17() const { return ___iso2lang_17; }
	inline String_t** get_address_of_iso2lang_17() { return &___iso2lang_17; }
	inline void set_iso2lang_17(String_t* value)
	{
		___iso2lang_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___iso2lang_17), (void*)value);
	}

	inline static int32_t get_offset_of_win3lang_18() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___win3lang_18)); }
	inline String_t* get_win3lang_18() const { return ___win3lang_18; }
	inline String_t** get_address_of_win3lang_18() { return &___win3lang_18; }
	inline void set_win3lang_18(String_t* value)
	{
		___win3lang_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___win3lang_18), (void*)value);
	}

	inline static int32_t get_offset_of_territory_19() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___territory_19)); }
	inline String_t* get_territory_19() const { return ___territory_19; }
	inline String_t** get_address_of_territory_19() { return &___territory_19; }
	inline void set_territory_19(String_t* value)
	{
		___territory_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___territory_19), (void*)value);
	}

	inline static int32_t get_offset_of_native_calendar_names_20() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___native_calendar_names_20)); }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* get_native_calendar_names_20() const { return ___native_calendar_names_20; }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A** get_address_of_native_calendar_names_20() { return &___native_calendar_names_20; }
	inline void set_native_calendar_names_20(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* value)
	{
		___native_calendar_names_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___native_calendar_names_20), (void*)value);
	}

	inline static int32_t get_offset_of_compareInfo_21() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___compareInfo_21)); }
	inline CompareInfo_t4AB62EC32E8AF1E469E315620C7E3FB8B0CAE0C9 * get_compareInfo_21() const { return ___compareInfo_21; }
	inline CompareInfo_t4AB62EC32E8AF1E469E315620C7E3FB8B0CAE0C9 ** get_address_of_compareInfo_21() { return &___compareInfo_21; }
	inline void set_compareInfo_21(CompareInfo_t4AB62EC32E8AF1E469E315620C7E3FB8B0CAE0C9 * value)
	{
		___compareInfo_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___compareInfo_21), (void*)value);
	}

	inline static int32_t get_offset_of_textinfo_data_22() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___textinfo_data_22)); }
	inline void* get_textinfo_data_22() const { return ___textinfo_data_22; }
	inline void** get_address_of_textinfo_data_22() { return &___textinfo_data_22; }
	inline void set_textinfo_data_22(void* value)
	{
		___textinfo_data_22 = value;
	}

	inline static int32_t get_offset_of_m_dataItem_23() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___m_dataItem_23)); }
	inline int32_t get_m_dataItem_23() const { return ___m_dataItem_23; }
	inline int32_t* get_address_of_m_dataItem_23() { return &___m_dataItem_23; }
	inline void set_m_dataItem_23(int32_t value)
	{
		___m_dataItem_23 = value;
	}

	inline static int32_t get_offset_of_calendar_24() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___calendar_24)); }
	inline Calendar_t3D638AEAB45F029DF47138EDA4CF9A7CBBB1C32A * get_calendar_24() const { return ___calendar_24; }
	inline Calendar_t3D638AEAB45F029DF47138EDA4CF9A7CBBB1C32A ** get_address_of_calendar_24() { return &___calendar_24; }
	inline void set_calendar_24(Calendar_t3D638AEAB45F029DF47138EDA4CF9A7CBBB1C32A * value)
	{
		___calendar_24 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___calendar_24), (void*)value);
	}

	inline static int32_t get_offset_of_parent_culture_25() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___parent_culture_25)); }
	inline CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * get_parent_culture_25() const { return ___parent_culture_25; }
	inline CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 ** get_address_of_parent_culture_25() { return &___parent_culture_25; }
	inline void set_parent_culture_25(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * value)
	{
		___parent_culture_25 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___parent_culture_25), (void*)value);
	}

	inline static int32_t get_offset_of_constructed_26() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___constructed_26)); }
	inline bool get_constructed_26() const { return ___constructed_26; }
	inline bool* get_address_of_constructed_26() { return &___constructed_26; }
	inline void set_constructed_26(bool value)
	{
		___constructed_26 = value;
	}

	inline static int32_t get_offset_of_cached_serialized_form_27() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___cached_serialized_form_27)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get_cached_serialized_form_27() const { return ___cached_serialized_form_27; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of_cached_serialized_form_27() { return &___cached_serialized_form_27; }
	inline void set_cached_serialized_form_27(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		___cached_serialized_form_27 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___cached_serialized_form_27), (void*)value);
	}

	inline static int32_t get_offset_of_m_cultureData_28() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___m_cultureData_28)); }
	inline CultureData_t53CDF1C5F789A28897415891667799420D3C5529 * get_m_cultureData_28() const { return ___m_cultureData_28; }
	inline CultureData_t53CDF1C5F789A28897415891667799420D3C5529 ** get_address_of_m_cultureData_28() { return &___m_cultureData_28; }
	inline void set_m_cultureData_28(CultureData_t53CDF1C5F789A28897415891667799420D3C5529 * value)
	{
		___m_cultureData_28 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_cultureData_28), (void*)value);
	}

	inline static int32_t get_offset_of_m_isInherited_29() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___m_isInherited_29)); }
	inline bool get_m_isInherited_29() const { return ___m_isInherited_29; }
	inline bool* get_address_of_m_isInherited_29() { return &___m_isInherited_29; }
	inline void set_m_isInherited_29(bool value)
	{
		___m_isInherited_29 = value;
	}
};

struct CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_StaticFields
{
public:
	// System.Globalization.CultureInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::invariant_culture_info
	CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * ___invariant_culture_info_0;
	// System.Object System.Globalization.CultureInfo::shared_table_lock
	RuntimeObject * ___shared_table_lock_1;
	// System.Globalization.CultureInfo System.Globalization.CultureInfo::default_current_culture
	CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * ___default_current_culture_2;
	// System.Globalization.CultureInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::s_DefaultThreadCurrentUICulture
	CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * ___s_DefaultThreadCurrentUICulture_33;
	// System.Globalization.CultureInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::s_DefaultThreadCurrentCulture
	CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * ___s_DefaultThreadCurrentCulture_34;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Globalization.CultureInfo> System.Globalization.CultureInfo::shared_by_number
	Dictionary_2_t5B8303F2C9869A39ED3E03C0FBB09F817E479402 * ___shared_by_number_35;
	// System.Collections.Generic.Dictionary`2<System.String,System.Globalization.CultureInfo> System.Globalization.CultureInfo::shared_by_name
	Dictionary_2_t0015CBF964B0687CBB5ECFDDE06671A8F3DDE4BC * ___shared_by_name_36;
	// System.Boolean System.Globalization.CultureInfo::IsTaiwanSku
	bool ___IsTaiwanSku_37;

public:
	inline static int32_t get_offset_of_invariant_culture_info_0() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_StaticFields, ___invariant_culture_info_0)); }
	inline CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * get_invariant_culture_info_0() const { return ___invariant_culture_info_0; }
	inline CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 ** get_address_of_invariant_culture_info_0() { return &___invariant_culture_info_0; }
	inline void set_invariant_culture_info_0(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * value)
	{
		___invariant_culture_info_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___invariant_culture_info_0), (void*)value);
	}

	inline static int32_t get_offset_of_shared_table_lock_1() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_StaticFields, ___shared_table_lock_1)); }
	inline RuntimeObject * get_shared_table_lock_1() const { return ___shared_table_lock_1; }
	inline RuntimeObject ** get_address_of_shared_table_lock_1() { return &___shared_table_lock_1; }
	inline void set_shared_table_lock_1(RuntimeObject * value)
	{
		___shared_table_lock_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___shared_table_lock_1), (void*)value);
	}

	inline static int32_t get_offset_of_default_current_culture_2() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_StaticFields, ___default_current_culture_2)); }
	inline CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * get_default_current_culture_2() const { return ___default_current_culture_2; }
	inline CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 ** get_address_of_default_current_culture_2() { return &___default_current_culture_2; }
	inline void set_default_current_culture_2(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * value)
	{
		___default_current_culture_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___default_current_culture_2), (void*)value);
	}

	inline static int32_t get_offset_of_s_DefaultThreadCurrentUICulture_33() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_StaticFields, ___s_DefaultThreadCurrentUICulture_33)); }
	inline CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * get_s_DefaultThreadCurrentUICulture_33() const { return ___s_DefaultThreadCurrentUICulture_33; }
	inline CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 ** get_address_of_s_DefaultThreadCurrentUICulture_33() { return &___s_DefaultThreadCurrentUICulture_33; }
	inline void set_s_DefaultThreadCurrentUICulture_33(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * value)
	{
		___s_DefaultThreadCurrentUICulture_33 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_DefaultThreadCurrentUICulture_33), (void*)value);
	}

	inline static int32_t get_offset_of_s_DefaultThreadCurrentCulture_34() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_StaticFields, ___s_DefaultThreadCurrentCulture_34)); }
	inline CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * get_s_DefaultThreadCurrentCulture_34() const { return ___s_DefaultThreadCurrentCulture_34; }
	inline CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 ** get_address_of_s_DefaultThreadCurrentCulture_34() { return &___s_DefaultThreadCurrentCulture_34; }
	inline void set_s_DefaultThreadCurrentCulture_34(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * value)
	{
		___s_DefaultThreadCurrentCulture_34 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_DefaultThreadCurrentCulture_34), (void*)value);
	}

	inline static int32_t get_offset_of_shared_by_number_35() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_StaticFields, ___shared_by_number_35)); }
	inline Dictionary_2_t5B8303F2C9869A39ED3E03C0FBB09F817E479402 * get_shared_by_number_35() const { return ___shared_by_number_35; }
	inline Dictionary_2_t5B8303F2C9869A39ED3E03C0FBB09F817E479402 ** get_address_of_shared_by_number_35() { return &___shared_by_number_35; }
	inline void set_shared_by_number_35(Dictionary_2_t5B8303F2C9869A39ED3E03C0FBB09F817E479402 * value)
	{
		___shared_by_number_35 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___shared_by_number_35), (void*)value);
	}

	inline static int32_t get_offset_of_shared_by_name_36() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_StaticFields, ___shared_by_name_36)); }
	inline Dictionary_2_t0015CBF964B0687CBB5ECFDDE06671A8F3DDE4BC * get_shared_by_name_36() const { return ___shared_by_name_36; }
	inline Dictionary_2_t0015CBF964B0687CBB5ECFDDE06671A8F3DDE4BC ** get_address_of_shared_by_name_36() { return &___shared_by_name_36; }
	inline void set_shared_by_name_36(Dictionary_2_t0015CBF964B0687CBB5ECFDDE06671A8F3DDE4BC * value)
	{
		___shared_by_name_36 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___shared_by_name_36), (void*)value);
	}

	inline static int32_t get_offset_of_IsTaiwanSku_37() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_StaticFields, ___IsTaiwanSku_37)); }
	inline bool get_IsTaiwanSku_37() const { return ___IsTaiwanSku_37; }
	inline bool* get_address_of_IsTaiwanSku_37() { return &___IsTaiwanSku_37; }
	inline void set_IsTaiwanSku_37(bool value)
	{
		___IsTaiwanSku_37 = value;
	}
};

// Native definition for P/Invoke marshalling of System.Globalization.CultureInfo
struct CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_marshaled_pinvoke
{
	int32_t ___m_isReadOnly_3;
	int32_t ___cultureID_4;
	int32_t ___parent_lcid_5;
	int32_t ___datetime_index_6;
	int32_t ___number_index_7;
	int32_t ___default_calendar_type_8;
	int32_t ___m_useUserOverride_9;
	NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D * ___numInfo_10;
	DateTimeFormatInfo_t0B9F6CA631A51CFC98A3C6031CF8069843137C90 * ___dateTimeInfo_11;
	TextInfo_tE823D0684BFE8B203501C9B2B38585E8F06E872C * ___textInfo_12;
	char* ___m_name_13;
	char* ___englishname_14;
	char* ___nativename_15;
	char* ___iso3lang_16;
	char* ___iso2lang_17;
	char* ___win3lang_18;
	char* ___territory_19;
	char** ___native_calendar_names_20;
	CompareInfo_t4AB62EC32E8AF1E469E315620C7E3FB8B0CAE0C9 * ___compareInfo_21;
	void* ___textinfo_data_22;
	int32_t ___m_dataItem_23;
	Calendar_t3D638AEAB45F029DF47138EDA4CF9A7CBBB1C32A * ___calendar_24;
	CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_marshaled_pinvoke* ___parent_culture_25;
	int32_t ___constructed_26;
	Il2CppSafeArray/*NONE*/* ___cached_serialized_form_27;
	CultureData_t53CDF1C5F789A28897415891667799420D3C5529_marshaled_pinvoke* ___m_cultureData_28;
	int32_t ___m_isInherited_29;
};
// Native definition for COM marshalling of System.Globalization.CultureInfo
struct CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_marshaled_com
{
	int32_t ___m_isReadOnly_3;
	int32_t ___cultureID_4;
	int32_t ___parent_lcid_5;
	int32_t ___datetime_index_6;
	int32_t ___number_index_7;
	int32_t ___default_calendar_type_8;
	int32_t ___m_useUserOverride_9;
	NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D * ___numInfo_10;
	DateTimeFormatInfo_t0B9F6CA631A51CFC98A3C6031CF8069843137C90 * ___dateTimeInfo_11;
	TextInfo_tE823D0684BFE8B203501C9B2B38585E8F06E872C * ___textInfo_12;
	Il2CppChar* ___m_name_13;
	Il2CppChar* ___englishname_14;
	Il2CppChar* ___nativename_15;
	Il2CppChar* ___iso3lang_16;
	Il2CppChar* ___iso2lang_17;
	Il2CppChar* ___win3lang_18;
	Il2CppChar* ___territory_19;
	Il2CppChar** ___native_calendar_names_20;
	CompareInfo_t4AB62EC32E8AF1E469E315620C7E3FB8B0CAE0C9 * ___compareInfo_21;
	void* ___textinfo_data_22;
	int32_t ___m_dataItem_23;
	Calendar_t3D638AEAB45F029DF47138EDA4CF9A7CBBB1C32A * ___calendar_24;
	CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_marshaled_com* ___parent_culture_25;
	int32_t ___constructed_26;
	Il2CppSafeArray/*NONE*/* ___cached_serialized_form_27;
	CultureData_t53CDF1C5F789A28897415891667799420D3C5529_marshaled_com* ___m_cultureData_28;
	int32_t ___m_isInherited_29;
};

// System.Text.Encoding
struct Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827  : public RuntimeObject
{
public:
	// System.Int32 System.Text.Encoding::m_codePage
	int32_t ___m_codePage_9;
	// System.Globalization.CodePageDataItem System.Text.Encoding::dataItem
	CodePageDataItem_t09A62F57142BF0456C8F414898A37E79BCC9F09E * ___dataItem_10;
	// System.Boolean System.Text.Encoding::m_deserializedFromEverett
	bool ___m_deserializedFromEverett_11;
	// System.Boolean System.Text.Encoding::m_isReadOnly
	bool ___m_isReadOnly_12;
	// System.Text.EncoderFallback System.Text.Encoding::encoderFallback
	EncoderFallback_t02AC990075E17EB09F0D7E4831C3B3F264025CC4 * ___encoderFallback_13;
	// System.Text.DecoderFallback System.Text.Encoding::decoderFallback
	DecoderFallback_tF86D337D6576E81E5DA285E5673183EBC66DEF8D * ___decoderFallback_14;

public:
	inline static int32_t get_offset_of_m_codePage_9() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827, ___m_codePage_9)); }
	inline int32_t get_m_codePage_9() const { return ___m_codePage_9; }
	inline int32_t* get_address_of_m_codePage_9() { return &___m_codePage_9; }
	inline void set_m_codePage_9(int32_t value)
	{
		___m_codePage_9 = value;
	}

	inline static int32_t get_offset_of_dataItem_10() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827, ___dataItem_10)); }
	inline CodePageDataItem_t09A62F57142BF0456C8F414898A37E79BCC9F09E * get_dataItem_10() const { return ___dataItem_10; }
	inline CodePageDataItem_t09A62F57142BF0456C8F414898A37E79BCC9F09E ** get_address_of_dataItem_10() { return &___dataItem_10; }
	inline void set_dataItem_10(CodePageDataItem_t09A62F57142BF0456C8F414898A37E79BCC9F09E * value)
	{
		___dataItem_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___dataItem_10), (void*)value);
	}

	inline static int32_t get_offset_of_m_deserializedFromEverett_11() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827, ___m_deserializedFromEverett_11)); }
	inline bool get_m_deserializedFromEverett_11() const { return ___m_deserializedFromEverett_11; }
	inline bool* get_address_of_m_deserializedFromEverett_11() { return &___m_deserializedFromEverett_11; }
	inline void set_m_deserializedFromEverett_11(bool value)
	{
		___m_deserializedFromEverett_11 = value;
	}

	inline static int32_t get_offset_of_m_isReadOnly_12() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827, ___m_isReadOnly_12)); }
	inline bool get_m_isReadOnly_12() const { return ___m_isReadOnly_12; }
	inline bool* get_address_of_m_isReadOnly_12() { return &___m_isReadOnly_12; }
	inline void set_m_isReadOnly_12(bool value)
	{
		___m_isReadOnly_12 = value;
	}

	inline static int32_t get_offset_of_encoderFallback_13() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827, ___encoderFallback_13)); }
	inline EncoderFallback_t02AC990075E17EB09F0D7E4831C3B3F264025CC4 * get_encoderFallback_13() const { return ___encoderFallback_13; }
	inline EncoderFallback_t02AC990075E17EB09F0D7E4831C3B3F264025CC4 ** get_address_of_encoderFallback_13() { return &___encoderFallback_13; }
	inline void set_encoderFallback_13(EncoderFallback_t02AC990075E17EB09F0D7E4831C3B3F264025CC4 * value)
	{
		___encoderFallback_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___encoderFallback_13), (void*)value);
	}

	inline static int32_t get_offset_of_decoderFallback_14() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827, ___decoderFallback_14)); }
	inline DecoderFallback_tF86D337D6576E81E5DA285E5673183EBC66DEF8D * get_decoderFallback_14() const { return ___decoderFallback_14; }
	inline DecoderFallback_tF86D337D6576E81E5DA285E5673183EBC66DEF8D ** get_address_of_decoderFallback_14() { return &___decoderFallback_14; }
	inline void set_decoderFallback_14(DecoderFallback_tF86D337D6576E81E5DA285E5673183EBC66DEF8D * value)
	{
		___decoderFallback_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___decoderFallback_14), (void*)value);
	}
};

struct Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827_StaticFields
{
public:
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::defaultEncoding
	Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * ___defaultEncoding_0;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::unicodeEncoding
	Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * ___unicodeEncoding_1;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::bigEndianUnicode
	Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * ___bigEndianUnicode_2;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::utf7Encoding
	Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * ___utf7Encoding_3;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::utf8Encoding
	Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * ___utf8Encoding_4;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::utf32Encoding
	Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * ___utf32Encoding_5;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::asciiEncoding
	Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * ___asciiEncoding_6;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::latin1Encoding
	Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * ___latin1Encoding_7;
	// System.Collections.Hashtable modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::encodings
	Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC * ___encodings_8;
	// System.Object System.Text.Encoding::s_InternalSyncObject
	RuntimeObject * ___s_InternalSyncObject_15;

public:
	inline static int32_t get_offset_of_defaultEncoding_0() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827_StaticFields, ___defaultEncoding_0)); }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * get_defaultEncoding_0() const { return ___defaultEncoding_0; }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 ** get_address_of_defaultEncoding_0() { return &___defaultEncoding_0; }
	inline void set_defaultEncoding_0(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * value)
	{
		___defaultEncoding_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___defaultEncoding_0), (void*)value);
	}

	inline static int32_t get_offset_of_unicodeEncoding_1() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827_StaticFields, ___unicodeEncoding_1)); }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * get_unicodeEncoding_1() const { return ___unicodeEncoding_1; }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 ** get_address_of_unicodeEncoding_1() { return &___unicodeEncoding_1; }
	inline void set_unicodeEncoding_1(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * value)
	{
		___unicodeEncoding_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___unicodeEncoding_1), (void*)value);
	}

	inline static int32_t get_offset_of_bigEndianUnicode_2() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827_StaticFields, ___bigEndianUnicode_2)); }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * get_bigEndianUnicode_2() const { return ___bigEndianUnicode_2; }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 ** get_address_of_bigEndianUnicode_2() { return &___bigEndianUnicode_2; }
	inline void set_bigEndianUnicode_2(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * value)
	{
		___bigEndianUnicode_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___bigEndianUnicode_2), (void*)value);
	}

	inline static int32_t get_offset_of_utf7Encoding_3() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827_StaticFields, ___utf7Encoding_3)); }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * get_utf7Encoding_3() const { return ___utf7Encoding_3; }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 ** get_address_of_utf7Encoding_3() { return &___utf7Encoding_3; }
	inline void set_utf7Encoding_3(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * value)
	{
		___utf7Encoding_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___utf7Encoding_3), (void*)value);
	}

	inline static int32_t get_offset_of_utf8Encoding_4() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827_StaticFields, ___utf8Encoding_4)); }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * get_utf8Encoding_4() const { return ___utf8Encoding_4; }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 ** get_address_of_utf8Encoding_4() { return &___utf8Encoding_4; }
	inline void set_utf8Encoding_4(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * value)
	{
		___utf8Encoding_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___utf8Encoding_4), (void*)value);
	}

	inline static int32_t get_offset_of_utf32Encoding_5() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827_StaticFields, ___utf32Encoding_5)); }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * get_utf32Encoding_5() const { return ___utf32Encoding_5; }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 ** get_address_of_utf32Encoding_5() { return &___utf32Encoding_5; }
	inline void set_utf32Encoding_5(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * value)
	{
		___utf32Encoding_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___utf32Encoding_5), (void*)value);
	}

	inline static int32_t get_offset_of_asciiEncoding_6() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827_StaticFields, ___asciiEncoding_6)); }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * get_asciiEncoding_6() const { return ___asciiEncoding_6; }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 ** get_address_of_asciiEncoding_6() { return &___asciiEncoding_6; }
	inline void set_asciiEncoding_6(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * value)
	{
		___asciiEncoding_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___asciiEncoding_6), (void*)value);
	}

	inline static int32_t get_offset_of_latin1Encoding_7() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827_StaticFields, ___latin1Encoding_7)); }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * get_latin1Encoding_7() const { return ___latin1Encoding_7; }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 ** get_address_of_latin1Encoding_7() { return &___latin1Encoding_7; }
	inline void set_latin1Encoding_7(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * value)
	{
		___latin1Encoding_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___latin1Encoding_7), (void*)value);
	}

	inline static int32_t get_offset_of_encodings_8() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827_StaticFields, ___encodings_8)); }
	inline Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC * get_encodings_8() const { return ___encodings_8; }
	inline Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC ** get_address_of_encodings_8() { return &___encodings_8; }
	inline void set_encodings_8(Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC * value)
	{
		___encodings_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___encodings_8), (void*)value);
	}

	inline static int32_t get_offset_of_s_InternalSyncObject_15() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827_StaticFields, ___s_InternalSyncObject_15)); }
	inline RuntimeObject * get_s_InternalSyncObject_15() const { return ___s_InternalSyncObject_15; }
	inline RuntimeObject ** get_address_of_s_InternalSyncObject_15() { return &___s_InternalSyncObject_15; }
	inline void set_s_InternalSyncObject_15(RuntimeObject * value)
	{
		___s_InternalSyncObject_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_InternalSyncObject_15), (void*)value);
	}
};


// Spine.Event
struct Event_tAB253EC43580D8724548C638BAB02EBB587A7957  : public RuntimeObject
{
public:
	// Spine.EventData Spine.Event::data
	EventData_tE551728B1B00610B27E05B1F8C5E64F2A42163E5 * ___data_0;
	// System.Single Spine.Event::time
	float ___time_1;
	// System.Int32 Spine.Event::intValue
	int32_t ___intValue_2;
	// System.Single Spine.Event::floatValue
	float ___floatValue_3;
	// System.String Spine.Event::stringValue
	String_t* ___stringValue_4;
	// System.Single Spine.Event::volume
	float ___volume_5;
	// System.Single Spine.Event::balance
	float ___balance_6;

public:
	inline static int32_t get_offset_of_data_0() { return static_cast<int32_t>(offsetof(Event_tAB253EC43580D8724548C638BAB02EBB587A7957, ___data_0)); }
	inline EventData_tE551728B1B00610B27E05B1F8C5E64F2A42163E5 * get_data_0() const { return ___data_0; }
	inline EventData_tE551728B1B00610B27E05B1F8C5E64F2A42163E5 ** get_address_of_data_0() { return &___data_0; }
	inline void set_data_0(EventData_tE551728B1B00610B27E05B1F8C5E64F2A42163E5 * value)
	{
		___data_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___data_0), (void*)value);
	}

	inline static int32_t get_offset_of_time_1() { return static_cast<int32_t>(offsetof(Event_tAB253EC43580D8724548C638BAB02EBB587A7957, ___time_1)); }
	inline float get_time_1() const { return ___time_1; }
	inline float* get_address_of_time_1() { return &___time_1; }
	inline void set_time_1(float value)
	{
		___time_1 = value;
	}

	inline static int32_t get_offset_of_intValue_2() { return static_cast<int32_t>(offsetof(Event_tAB253EC43580D8724548C638BAB02EBB587A7957, ___intValue_2)); }
	inline int32_t get_intValue_2() const { return ___intValue_2; }
	inline int32_t* get_address_of_intValue_2() { return &___intValue_2; }
	inline void set_intValue_2(int32_t value)
	{
		___intValue_2 = value;
	}

	inline static int32_t get_offset_of_floatValue_3() { return static_cast<int32_t>(offsetof(Event_tAB253EC43580D8724548C638BAB02EBB587A7957, ___floatValue_3)); }
	inline float get_floatValue_3() const { return ___floatValue_3; }
	inline float* get_address_of_floatValue_3() { return &___floatValue_3; }
	inline void set_floatValue_3(float value)
	{
		___floatValue_3 = value;
	}

	inline static int32_t get_offset_of_stringValue_4() { return static_cast<int32_t>(offsetof(Event_tAB253EC43580D8724548C638BAB02EBB587A7957, ___stringValue_4)); }
	inline String_t* get_stringValue_4() const { return ___stringValue_4; }
	inline String_t** get_address_of_stringValue_4() { return &___stringValue_4; }
	inline void set_stringValue_4(String_t* value)
	{
		___stringValue_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___stringValue_4), (void*)value);
	}

	inline static int32_t get_offset_of_volume_5() { return static_cast<int32_t>(offsetof(Event_tAB253EC43580D8724548C638BAB02EBB587A7957, ___volume_5)); }
	inline float get_volume_5() const { return ___volume_5; }
	inline float* get_address_of_volume_5() { return &___volume_5; }
	inline void set_volume_5(float value)
	{
		___volume_5 = value;
	}

	inline static int32_t get_offset_of_balance_6() { return static_cast<int32_t>(offsetof(Event_tAB253EC43580D8724548C638BAB02EBB587A7957, ___balance_6)); }
	inline float get_balance_6() const { return ___balance_6; }
	inline float* get_address_of_balance_6() { return &___balance_6; }
	inline void set_balance_6(float value)
	{
		___balance_6 = value;
	}
};


// System.MarshalByRefObject
struct MarshalByRefObject_tD4DF91B488B284F899417EC468D8E50E933306A8  : public RuntimeObject
{
public:
	// System.Object System.MarshalByRefObject::_identity
	RuntimeObject * ____identity_0;

public:
	inline static int32_t get_offset_of__identity_0() { return static_cast<int32_t>(offsetof(MarshalByRefObject_tD4DF91B488B284F899417EC468D8E50E933306A8, ____identity_0)); }
	inline RuntimeObject * get__identity_0() const { return ____identity_0; }
	inline RuntimeObject ** get_address_of__identity_0() { return &____identity_0; }
	inline void set__identity_0(RuntimeObject * value)
	{
		____identity_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____identity_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.MarshalByRefObject
struct MarshalByRefObject_tD4DF91B488B284F899417EC468D8E50E933306A8_marshaled_pinvoke
{
	Il2CppIUnknown* ____identity_0;
};
// Native definition for COM marshalling of System.MarshalByRefObject
struct MarshalByRefObject_tD4DF91B488B284F899417EC468D8E50E933306A8_marshaled_com
{
	Il2CppIUnknown* ____identity_0;
};

// System.Reflection.MemberInfo
struct MemberInfo_t  : public RuntimeObject
{
public:

public:
};


// Spine.Skeleton
struct Skeleton_tA4F63D1CB185D30296FA5323E1DA8B993E21293C  : public RuntimeObject
{
public:
	// Spine.SkeletonData Spine.Skeleton::data
	SkeletonData_t2B4079A31FD40EF1A9968A9D256F7F2F126B4DFD * ___data_0;
	// Spine.ExposedList`1<Spine.Bone> Spine.Skeleton::bones
	ExposedList_1_t4F66E6448150D0CAC1BD8C1A4810A7CEB844B164 * ___bones_1;
	// Spine.ExposedList`1<Spine.Slot> Spine.Skeleton::slots
	ExposedList_1_tFC656F125F1D30427E8EBAD2273E135F07D41FEC * ___slots_2;
	// Spine.ExposedList`1<Spine.Slot> Spine.Skeleton::drawOrder
	ExposedList_1_tFC656F125F1D30427E8EBAD2273E135F07D41FEC * ___drawOrder_3;
	// Spine.ExposedList`1<Spine.IkConstraint> Spine.Skeleton::ikConstraints
	ExposedList_1_tCAAB4BEAA939FACFE777525D586DEA51E61B0994 * ___ikConstraints_4;
	// Spine.ExposedList`1<Spine.TransformConstraint> Spine.Skeleton::transformConstraints
	ExposedList_1_t56F73F3BF0C40E1C9EF32828CD09773498FDFB0F * ___transformConstraints_5;
	// Spine.ExposedList`1<Spine.PathConstraint> Spine.Skeleton::pathConstraints
	ExposedList_1_t59912CC3F7BA44303382359809C190D06B7FF0E9 * ___pathConstraints_6;
	// Spine.ExposedList`1<Spine.IUpdatable> Spine.Skeleton::updateCache
	ExposedList_1_t0CA5D3D70CF07167EB2D925649F0AD2B33D798CD * ___updateCache_7;
	// Spine.Skin Spine.Skeleton::skin
	Skin_tD874A2056EDD885CCC069C91D8D8DD9EB2010FC5 * ___skin_8;
	// System.Single Spine.Skeleton::r
	float ___r_9;
	// System.Single Spine.Skeleton::g
	float ___g_10;
	// System.Single Spine.Skeleton::b
	float ___b_11;
	// System.Single Spine.Skeleton::a
	float ___a_12;
	// System.Single Spine.Skeleton::time
	float ___time_13;
	// System.Single Spine.Skeleton::scaleX
	float ___scaleX_14;
	// System.Single Spine.Skeleton::scaleY
	float ___scaleY_15;
	// System.Single Spine.Skeleton::x
	float ___x_16;
	// System.Single Spine.Skeleton::y
	float ___y_17;

public:
	inline static int32_t get_offset_of_data_0() { return static_cast<int32_t>(offsetof(Skeleton_tA4F63D1CB185D30296FA5323E1DA8B993E21293C, ___data_0)); }
	inline SkeletonData_t2B4079A31FD40EF1A9968A9D256F7F2F126B4DFD * get_data_0() const { return ___data_0; }
	inline SkeletonData_t2B4079A31FD40EF1A9968A9D256F7F2F126B4DFD ** get_address_of_data_0() { return &___data_0; }
	inline void set_data_0(SkeletonData_t2B4079A31FD40EF1A9968A9D256F7F2F126B4DFD * value)
	{
		___data_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___data_0), (void*)value);
	}

	inline static int32_t get_offset_of_bones_1() { return static_cast<int32_t>(offsetof(Skeleton_tA4F63D1CB185D30296FA5323E1DA8B993E21293C, ___bones_1)); }
	inline ExposedList_1_t4F66E6448150D0CAC1BD8C1A4810A7CEB844B164 * get_bones_1() const { return ___bones_1; }
	inline ExposedList_1_t4F66E6448150D0CAC1BD8C1A4810A7CEB844B164 ** get_address_of_bones_1() { return &___bones_1; }
	inline void set_bones_1(ExposedList_1_t4F66E6448150D0CAC1BD8C1A4810A7CEB844B164 * value)
	{
		___bones_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___bones_1), (void*)value);
	}

	inline static int32_t get_offset_of_slots_2() { return static_cast<int32_t>(offsetof(Skeleton_tA4F63D1CB185D30296FA5323E1DA8B993E21293C, ___slots_2)); }
	inline ExposedList_1_tFC656F125F1D30427E8EBAD2273E135F07D41FEC * get_slots_2() const { return ___slots_2; }
	inline ExposedList_1_tFC656F125F1D30427E8EBAD2273E135F07D41FEC ** get_address_of_slots_2() { return &___slots_2; }
	inline void set_slots_2(ExposedList_1_tFC656F125F1D30427E8EBAD2273E135F07D41FEC * value)
	{
		___slots_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___slots_2), (void*)value);
	}

	inline static int32_t get_offset_of_drawOrder_3() { return static_cast<int32_t>(offsetof(Skeleton_tA4F63D1CB185D30296FA5323E1DA8B993E21293C, ___drawOrder_3)); }
	inline ExposedList_1_tFC656F125F1D30427E8EBAD2273E135F07D41FEC * get_drawOrder_3() const { return ___drawOrder_3; }
	inline ExposedList_1_tFC656F125F1D30427E8EBAD2273E135F07D41FEC ** get_address_of_drawOrder_3() { return &___drawOrder_3; }
	inline void set_drawOrder_3(ExposedList_1_tFC656F125F1D30427E8EBAD2273E135F07D41FEC * value)
	{
		___drawOrder_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___drawOrder_3), (void*)value);
	}

	inline static int32_t get_offset_of_ikConstraints_4() { return static_cast<int32_t>(offsetof(Skeleton_tA4F63D1CB185D30296FA5323E1DA8B993E21293C, ___ikConstraints_4)); }
	inline ExposedList_1_tCAAB4BEAA939FACFE777525D586DEA51E61B0994 * get_ikConstraints_4() const { return ___ikConstraints_4; }
	inline ExposedList_1_tCAAB4BEAA939FACFE777525D586DEA51E61B0994 ** get_address_of_ikConstraints_4() { return &___ikConstraints_4; }
	inline void set_ikConstraints_4(ExposedList_1_tCAAB4BEAA939FACFE777525D586DEA51E61B0994 * value)
	{
		___ikConstraints_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ikConstraints_4), (void*)value);
	}

	inline static int32_t get_offset_of_transformConstraints_5() { return static_cast<int32_t>(offsetof(Skeleton_tA4F63D1CB185D30296FA5323E1DA8B993E21293C, ___transformConstraints_5)); }
	inline ExposedList_1_t56F73F3BF0C40E1C9EF32828CD09773498FDFB0F * get_transformConstraints_5() const { return ___transformConstraints_5; }
	inline ExposedList_1_t56F73F3BF0C40E1C9EF32828CD09773498FDFB0F ** get_address_of_transformConstraints_5() { return &___transformConstraints_5; }
	inline void set_transformConstraints_5(ExposedList_1_t56F73F3BF0C40E1C9EF32828CD09773498FDFB0F * value)
	{
		___transformConstraints_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___transformConstraints_5), (void*)value);
	}

	inline static int32_t get_offset_of_pathConstraints_6() { return static_cast<int32_t>(offsetof(Skeleton_tA4F63D1CB185D30296FA5323E1DA8B993E21293C, ___pathConstraints_6)); }
	inline ExposedList_1_t59912CC3F7BA44303382359809C190D06B7FF0E9 * get_pathConstraints_6() const { return ___pathConstraints_6; }
	inline ExposedList_1_t59912CC3F7BA44303382359809C190D06B7FF0E9 ** get_address_of_pathConstraints_6() { return &___pathConstraints_6; }
	inline void set_pathConstraints_6(ExposedList_1_t59912CC3F7BA44303382359809C190D06B7FF0E9 * value)
	{
		___pathConstraints_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___pathConstraints_6), (void*)value);
	}

	inline static int32_t get_offset_of_updateCache_7() { return static_cast<int32_t>(offsetof(Skeleton_tA4F63D1CB185D30296FA5323E1DA8B993E21293C, ___updateCache_7)); }
	inline ExposedList_1_t0CA5D3D70CF07167EB2D925649F0AD2B33D798CD * get_updateCache_7() const { return ___updateCache_7; }
	inline ExposedList_1_t0CA5D3D70CF07167EB2D925649F0AD2B33D798CD ** get_address_of_updateCache_7() { return &___updateCache_7; }
	inline void set_updateCache_7(ExposedList_1_t0CA5D3D70CF07167EB2D925649F0AD2B33D798CD * value)
	{
		___updateCache_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___updateCache_7), (void*)value);
	}

	inline static int32_t get_offset_of_skin_8() { return static_cast<int32_t>(offsetof(Skeleton_tA4F63D1CB185D30296FA5323E1DA8B993E21293C, ___skin_8)); }
	inline Skin_tD874A2056EDD885CCC069C91D8D8DD9EB2010FC5 * get_skin_8() const { return ___skin_8; }
	inline Skin_tD874A2056EDD885CCC069C91D8D8DD9EB2010FC5 ** get_address_of_skin_8() { return &___skin_8; }
	inline void set_skin_8(Skin_tD874A2056EDD885CCC069C91D8D8DD9EB2010FC5 * value)
	{
		___skin_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___skin_8), (void*)value);
	}

	inline static int32_t get_offset_of_r_9() { return static_cast<int32_t>(offsetof(Skeleton_tA4F63D1CB185D30296FA5323E1DA8B993E21293C, ___r_9)); }
	inline float get_r_9() const { return ___r_9; }
	inline float* get_address_of_r_9() { return &___r_9; }
	inline void set_r_9(float value)
	{
		___r_9 = value;
	}

	inline static int32_t get_offset_of_g_10() { return static_cast<int32_t>(offsetof(Skeleton_tA4F63D1CB185D30296FA5323E1DA8B993E21293C, ___g_10)); }
	inline float get_g_10() const { return ___g_10; }
	inline float* get_address_of_g_10() { return &___g_10; }
	inline void set_g_10(float value)
	{
		___g_10 = value;
	}

	inline static int32_t get_offset_of_b_11() { return static_cast<int32_t>(offsetof(Skeleton_tA4F63D1CB185D30296FA5323E1DA8B993E21293C, ___b_11)); }
	inline float get_b_11() const { return ___b_11; }
	inline float* get_address_of_b_11() { return &___b_11; }
	inline void set_b_11(float value)
	{
		___b_11 = value;
	}

	inline static int32_t get_offset_of_a_12() { return static_cast<int32_t>(offsetof(Skeleton_tA4F63D1CB185D30296FA5323E1DA8B993E21293C, ___a_12)); }
	inline float get_a_12() const { return ___a_12; }
	inline float* get_address_of_a_12() { return &___a_12; }
	inline void set_a_12(float value)
	{
		___a_12 = value;
	}

	inline static int32_t get_offset_of_time_13() { return static_cast<int32_t>(offsetof(Skeleton_tA4F63D1CB185D30296FA5323E1DA8B993E21293C, ___time_13)); }
	inline float get_time_13() const { return ___time_13; }
	inline float* get_address_of_time_13() { return &___time_13; }
	inline void set_time_13(float value)
	{
		___time_13 = value;
	}

	inline static int32_t get_offset_of_scaleX_14() { return static_cast<int32_t>(offsetof(Skeleton_tA4F63D1CB185D30296FA5323E1DA8B993E21293C, ___scaleX_14)); }
	inline float get_scaleX_14() const { return ___scaleX_14; }
	inline float* get_address_of_scaleX_14() { return &___scaleX_14; }
	inline void set_scaleX_14(float value)
	{
		___scaleX_14 = value;
	}

	inline static int32_t get_offset_of_scaleY_15() { return static_cast<int32_t>(offsetof(Skeleton_tA4F63D1CB185D30296FA5323E1DA8B993E21293C, ___scaleY_15)); }
	inline float get_scaleY_15() const { return ___scaleY_15; }
	inline float* get_address_of_scaleY_15() { return &___scaleY_15; }
	inline void set_scaleY_15(float value)
	{
		___scaleY_15 = value;
	}

	inline static int32_t get_offset_of_x_16() { return static_cast<int32_t>(offsetof(Skeleton_tA4F63D1CB185D30296FA5323E1DA8B993E21293C, ___x_16)); }
	inline float get_x_16() const { return ___x_16; }
	inline float* get_address_of_x_16() { return &___x_16; }
	inline void set_x_16(float value)
	{
		___x_16 = value;
	}

	inline static int32_t get_offset_of_y_17() { return static_cast<int32_t>(offsetof(Skeleton_tA4F63D1CB185D30296FA5323E1DA8B993E21293C, ___y_17)); }
	inline float get_y_17() const { return ___y_17; }
	inline float* get_address_of_y_17() { return &___y_17; }
	inline void set_y_17(float value)
	{
		___y_17 = value;
	}
};


// Spine.Slot
struct Slot_t754D2EC8AE03CF765F34A909762BE4E533BEF635  : public RuntimeObject
{
public:
	// Spine.SlotData Spine.Slot::data
	SlotData_tB7FE5D031A63C5C74789FB1DE209633A2517955E * ___data_0;
	// Spine.Bone Spine.Slot::bone
	Bone_t6DA0B82485BED2E4EEE864AAD607EEBDC2F98AAF * ___bone_1;
	// System.Single Spine.Slot::r
	float ___r_2;
	// System.Single Spine.Slot::g
	float ___g_3;
	// System.Single Spine.Slot::b
	float ___b_4;
	// System.Single Spine.Slot::a
	float ___a_5;
	// System.Single Spine.Slot::r2
	float ___r2_6;
	// System.Single Spine.Slot::g2
	float ___g2_7;
	// System.Single Spine.Slot::b2
	float ___b2_8;
	// System.Boolean Spine.Slot::hasSecondColor
	bool ___hasSecondColor_9;
	// Spine.Attachment Spine.Slot::attachment
	Attachment_tA85256BF51006C369687395955B6A6B51D432F21 * ___attachment_10;
	// System.Single Spine.Slot::attachmentTime
	float ___attachmentTime_11;
	// Spine.ExposedList`1<System.Single> Spine.Slot::deform
	ExposedList_1_t9F8622C73EB60A6882B2968C1C0F1706D574F526 * ___deform_12;
	// System.Int32 Spine.Slot::attachmentState
	int32_t ___attachmentState_13;

public:
	inline static int32_t get_offset_of_data_0() { return static_cast<int32_t>(offsetof(Slot_t754D2EC8AE03CF765F34A909762BE4E533BEF635, ___data_0)); }
	inline SlotData_tB7FE5D031A63C5C74789FB1DE209633A2517955E * get_data_0() const { return ___data_0; }
	inline SlotData_tB7FE5D031A63C5C74789FB1DE209633A2517955E ** get_address_of_data_0() { return &___data_0; }
	inline void set_data_0(SlotData_tB7FE5D031A63C5C74789FB1DE209633A2517955E * value)
	{
		___data_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___data_0), (void*)value);
	}

	inline static int32_t get_offset_of_bone_1() { return static_cast<int32_t>(offsetof(Slot_t754D2EC8AE03CF765F34A909762BE4E533BEF635, ___bone_1)); }
	inline Bone_t6DA0B82485BED2E4EEE864AAD607EEBDC2F98AAF * get_bone_1() const { return ___bone_1; }
	inline Bone_t6DA0B82485BED2E4EEE864AAD607EEBDC2F98AAF ** get_address_of_bone_1() { return &___bone_1; }
	inline void set_bone_1(Bone_t6DA0B82485BED2E4EEE864AAD607EEBDC2F98AAF * value)
	{
		___bone_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___bone_1), (void*)value);
	}

	inline static int32_t get_offset_of_r_2() { return static_cast<int32_t>(offsetof(Slot_t754D2EC8AE03CF765F34A909762BE4E533BEF635, ___r_2)); }
	inline float get_r_2() const { return ___r_2; }
	inline float* get_address_of_r_2() { return &___r_2; }
	inline void set_r_2(float value)
	{
		___r_2 = value;
	}

	inline static int32_t get_offset_of_g_3() { return static_cast<int32_t>(offsetof(Slot_t754D2EC8AE03CF765F34A909762BE4E533BEF635, ___g_3)); }
	inline float get_g_3() const { return ___g_3; }
	inline float* get_address_of_g_3() { return &___g_3; }
	inline void set_g_3(float value)
	{
		___g_3 = value;
	}

	inline static int32_t get_offset_of_b_4() { return static_cast<int32_t>(offsetof(Slot_t754D2EC8AE03CF765F34A909762BE4E533BEF635, ___b_4)); }
	inline float get_b_4() const { return ___b_4; }
	inline float* get_address_of_b_4() { return &___b_4; }
	inline void set_b_4(float value)
	{
		___b_4 = value;
	}

	inline static int32_t get_offset_of_a_5() { return static_cast<int32_t>(offsetof(Slot_t754D2EC8AE03CF765F34A909762BE4E533BEF635, ___a_5)); }
	inline float get_a_5() const { return ___a_5; }
	inline float* get_address_of_a_5() { return &___a_5; }
	inline void set_a_5(float value)
	{
		___a_5 = value;
	}

	inline static int32_t get_offset_of_r2_6() { return static_cast<int32_t>(offsetof(Slot_t754D2EC8AE03CF765F34A909762BE4E533BEF635, ___r2_6)); }
	inline float get_r2_6() const { return ___r2_6; }
	inline float* get_address_of_r2_6() { return &___r2_6; }
	inline void set_r2_6(float value)
	{
		___r2_6 = value;
	}

	inline static int32_t get_offset_of_g2_7() { return static_cast<int32_t>(offsetof(Slot_t754D2EC8AE03CF765F34A909762BE4E533BEF635, ___g2_7)); }
	inline float get_g2_7() const { return ___g2_7; }
	inline float* get_address_of_g2_7() { return &___g2_7; }
	inline void set_g2_7(float value)
	{
		___g2_7 = value;
	}

	inline static int32_t get_offset_of_b2_8() { return static_cast<int32_t>(offsetof(Slot_t754D2EC8AE03CF765F34A909762BE4E533BEF635, ___b2_8)); }
	inline float get_b2_8() const { return ___b2_8; }
	inline float* get_address_of_b2_8() { return &___b2_8; }
	inline void set_b2_8(float value)
	{
		___b2_8 = value;
	}

	inline static int32_t get_offset_of_hasSecondColor_9() { return static_cast<int32_t>(offsetof(Slot_t754D2EC8AE03CF765F34A909762BE4E533BEF635, ___hasSecondColor_9)); }
	inline bool get_hasSecondColor_9() const { return ___hasSecondColor_9; }
	inline bool* get_address_of_hasSecondColor_9() { return &___hasSecondColor_9; }
	inline void set_hasSecondColor_9(bool value)
	{
		___hasSecondColor_9 = value;
	}

	inline static int32_t get_offset_of_attachment_10() { return static_cast<int32_t>(offsetof(Slot_t754D2EC8AE03CF765F34A909762BE4E533BEF635, ___attachment_10)); }
	inline Attachment_tA85256BF51006C369687395955B6A6B51D432F21 * get_attachment_10() const { return ___attachment_10; }
	inline Attachment_tA85256BF51006C369687395955B6A6B51D432F21 ** get_address_of_attachment_10() { return &___attachment_10; }
	inline void set_attachment_10(Attachment_tA85256BF51006C369687395955B6A6B51D432F21 * value)
	{
		___attachment_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___attachment_10), (void*)value);
	}

	inline static int32_t get_offset_of_attachmentTime_11() { return static_cast<int32_t>(offsetof(Slot_t754D2EC8AE03CF765F34A909762BE4E533BEF635, ___attachmentTime_11)); }
	inline float get_attachmentTime_11() const { return ___attachmentTime_11; }
	inline float* get_address_of_attachmentTime_11() { return &___attachmentTime_11; }
	inline void set_attachmentTime_11(float value)
	{
		___attachmentTime_11 = value;
	}

	inline static int32_t get_offset_of_deform_12() { return static_cast<int32_t>(offsetof(Slot_t754D2EC8AE03CF765F34A909762BE4E533BEF635, ___deform_12)); }
	inline ExposedList_1_t9F8622C73EB60A6882B2968C1C0F1706D574F526 * get_deform_12() const { return ___deform_12; }
	inline ExposedList_1_t9F8622C73EB60A6882B2968C1C0F1706D574F526 ** get_address_of_deform_12() { return &___deform_12; }
	inline void set_deform_12(ExposedList_1_t9F8622C73EB60A6882B2968C1C0F1706D574F526 * value)
	{
		___deform_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___deform_12), (void*)value);
	}

	inline static int32_t get_offset_of_attachmentState_13() { return static_cast<int32_t>(offsetof(Slot_t754D2EC8AE03CF765F34A909762BE4E533BEF635, ___attachmentState_13)); }
	inline int32_t get_attachmentState_13() const { return ___attachmentState_13; }
	inline int32_t* get_address_of_attachmentState_13() { return &___attachmentState_13; }
	inline void set_attachmentState_13(int32_t value)
	{
		___attachmentState_13 = value;
	}
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


// Spine.Timeline
struct Timeline_tD8AC6175D8B492C9CDB166AC1FBFEE28A474DAF0  : public RuntimeObject
{
public:
	// System.String[] Spine.Timeline::propertyIds
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___propertyIds_0;
	// System.Single[] Spine.Timeline::frames
	SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* ___frames_1;

public:
	inline static int32_t get_offset_of_propertyIds_0() { return static_cast<int32_t>(offsetof(Timeline_tD8AC6175D8B492C9CDB166AC1FBFEE28A474DAF0, ___propertyIds_0)); }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* get_propertyIds_0() const { return ___propertyIds_0; }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A** get_address_of_propertyIds_0() { return &___propertyIds_0; }
	inline void set_propertyIds_0(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* value)
	{
		___propertyIds_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___propertyIds_0), (void*)value);
	}

	inline static int32_t get_offset_of_frames_1() { return static_cast<int32_t>(offsetof(Timeline_tD8AC6175D8B492C9CDB166AC1FBFEE28A474DAF0, ___frames_1)); }
	inline SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* get_frames_1() const { return ___frames_1; }
	inline SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA** get_address_of_frames_1() { return &___frames_1; }
	inline void set_frames_1(SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* value)
	{
		___frames_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___frames_1), (void*)value);
	}
};


// Spine.TransformConstraint
struct TransformConstraint_tC8D8761A400AEA22D56A6D4EDAD8D88356EFFAE4  : public RuntimeObject
{
public:
	// Spine.TransformConstraintData Spine.TransformConstraint::data
	TransformConstraintData_t5B434A578868FB4E1BBBF29E3024FF07B5D0EF59 * ___data_0;
	// Spine.ExposedList`1<Spine.Bone> Spine.TransformConstraint::bones
	ExposedList_1_t4F66E6448150D0CAC1BD8C1A4810A7CEB844B164 * ___bones_1;
	// Spine.Bone Spine.TransformConstraint::target
	Bone_t6DA0B82485BED2E4EEE864AAD607EEBDC2F98AAF * ___target_2;
	// System.Single Spine.TransformConstraint::mixRotate
	float ___mixRotate_3;
	// System.Single Spine.TransformConstraint::mixX
	float ___mixX_4;
	// System.Single Spine.TransformConstraint::mixY
	float ___mixY_5;
	// System.Single Spine.TransformConstraint::mixScaleX
	float ___mixScaleX_6;
	// System.Single Spine.TransformConstraint::mixScaleY
	float ___mixScaleY_7;
	// System.Single Spine.TransformConstraint::mixShearY
	float ___mixShearY_8;
	// System.Boolean Spine.TransformConstraint::active
	bool ___active_9;

public:
	inline static int32_t get_offset_of_data_0() { return static_cast<int32_t>(offsetof(TransformConstraint_tC8D8761A400AEA22D56A6D4EDAD8D88356EFFAE4, ___data_0)); }
	inline TransformConstraintData_t5B434A578868FB4E1BBBF29E3024FF07B5D0EF59 * get_data_0() const { return ___data_0; }
	inline TransformConstraintData_t5B434A578868FB4E1BBBF29E3024FF07B5D0EF59 ** get_address_of_data_0() { return &___data_0; }
	inline void set_data_0(TransformConstraintData_t5B434A578868FB4E1BBBF29E3024FF07B5D0EF59 * value)
	{
		___data_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___data_0), (void*)value);
	}

	inline static int32_t get_offset_of_bones_1() { return static_cast<int32_t>(offsetof(TransformConstraint_tC8D8761A400AEA22D56A6D4EDAD8D88356EFFAE4, ___bones_1)); }
	inline ExposedList_1_t4F66E6448150D0CAC1BD8C1A4810A7CEB844B164 * get_bones_1() const { return ___bones_1; }
	inline ExposedList_1_t4F66E6448150D0CAC1BD8C1A4810A7CEB844B164 ** get_address_of_bones_1() { return &___bones_1; }
	inline void set_bones_1(ExposedList_1_t4F66E6448150D0CAC1BD8C1A4810A7CEB844B164 * value)
	{
		___bones_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___bones_1), (void*)value);
	}

	inline static int32_t get_offset_of_target_2() { return static_cast<int32_t>(offsetof(TransformConstraint_tC8D8761A400AEA22D56A6D4EDAD8D88356EFFAE4, ___target_2)); }
	inline Bone_t6DA0B82485BED2E4EEE864AAD607EEBDC2F98AAF * get_target_2() const { return ___target_2; }
	inline Bone_t6DA0B82485BED2E4EEE864AAD607EEBDC2F98AAF ** get_address_of_target_2() { return &___target_2; }
	inline void set_target_2(Bone_t6DA0B82485BED2E4EEE864AAD607EEBDC2F98AAF * value)
	{
		___target_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___target_2), (void*)value);
	}

	inline static int32_t get_offset_of_mixRotate_3() { return static_cast<int32_t>(offsetof(TransformConstraint_tC8D8761A400AEA22D56A6D4EDAD8D88356EFFAE4, ___mixRotate_3)); }
	inline float get_mixRotate_3() const { return ___mixRotate_3; }
	inline float* get_address_of_mixRotate_3() { return &___mixRotate_3; }
	inline void set_mixRotate_3(float value)
	{
		___mixRotate_3 = value;
	}

	inline static int32_t get_offset_of_mixX_4() { return static_cast<int32_t>(offsetof(TransformConstraint_tC8D8761A400AEA22D56A6D4EDAD8D88356EFFAE4, ___mixX_4)); }
	inline float get_mixX_4() const { return ___mixX_4; }
	inline float* get_address_of_mixX_4() { return &___mixX_4; }
	inline void set_mixX_4(float value)
	{
		___mixX_4 = value;
	}

	inline static int32_t get_offset_of_mixY_5() { return static_cast<int32_t>(offsetof(TransformConstraint_tC8D8761A400AEA22D56A6D4EDAD8D88356EFFAE4, ___mixY_5)); }
	inline float get_mixY_5() const { return ___mixY_5; }
	inline float* get_address_of_mixY_5() { return &___mixY_5; }
	inline void set_mixY_5(float value)
	{
		___mixY_5 = value;
	}

	inline static int32_t get_offset_of_mixScaleX_6() { return static_cast<int32_t>(offsetof(TransformConstraint_tC8D8761A400AEA22D56A6D4EDAD8D88356EFFAE4, ___mixScaleX_6)); }
	inline float get_mixScaleX_6() const { return ___mixScaleX_6; }
	inline float* get_address_of_mixScaleX_6() { return &___mixScaleX_6; }
	inline void set_mixScaleX_6(float value)
	{
		___mixScaleX_6 = value;
	}

	inline static int32_t get_offset_of_mixScaleY_7() { return static_cast<int32_t>(offsetof(TransformConstraint_tC8D8761A400AEA22D56A6D4EDAD8D88356EFFAE4, ___mixScaleY_7)); }
	inline float get_mixScaleY_7() const { return ___mixScaleY_7; }
	inline float* get_address_of_mixScaleY_7() { return &___mixScaleY_7; }
	inline void set_mixScaleY_7(float value)
	{
		___mixScaleY_7 = value;
	}

	inline static int32_t get_offset_of_mixShearY_8() { return static_cast<int32_t>(offsetof(TransformConstraint_tC8D8761A400AEA22D56A6D4EDAD8D88356EFFAE4, ___mixShearY_8)); }
	inline float get_mixShearY_8() const { return ___mixShearY_8; }
	inline float* get_address_of_mixShearY_8() { return &___mixShearY_8; }
	inline void set_mixShearY_8(float value)
	{
		___mixShearY_8 = value;
	}

	inline static int32_t get_offset_of_active_9() { return static_cast<int32_t>(offsetof(TransformConstraint_tC8D8761A400AEA22D56A6D4EDAD8D88356EFFAE4, ___active_9)); }
	inline bool get_active_9() const { return ___active_9; }
	inline bool* get_address_of_active_9() { return &___active_9; }
	inline void set_active_9(bool value)
	{
		___active_9 = value;
	}
};


// Spine.Triangulator
struct Triangulator_tB8EB2546BA4C75A44FDEEC203E67023C07FBBE8B  : public RuntimeObject
{
public:
	// Spine.ExposedList`1<Spine.ExposedList`1<System.Single>> Spine.Triangulator::convexPolygons
	ExposedList_1_tFAEEFBED9EABAD893C31C789759FD1BA692F0289 * ___convexPolygons_0;
	// Spine.ExposedList`1<Spine.ExposedList`1<System.Int32>> Spine.Triangulator::convexPolygonsIndices
	ExposedList_1_tE018626AD135D00E2FCAF5578BADE795F5CCDC90 * ___convexPolygonsIndices_1;
	// Spine.ExposedList`1<System.Int32> Spine.Triangulator::indicesArray
	ExposedList_1_tEB071484A7B70681ADB6BD9522EFC630CA5C5066 * ___indicesArray_2;
	// Spine.ExposedList`1<System.Boolean> Spine.Triangulator::isConcaveArray
	ExposedList_1_tAA9A80412EB5EC236EBA9FC15B2BD9A61915AE7E * ___isConcaveArray_3;
	// Spine.ExposedList`1<System.Int32> Spine.Triangulator::triangles
	ExposedList_1_tEB071484A7B70681ADB6BD9522EFC630CA5C5066 * ___triangles_4;
	// Spine.Pool`1<Spine.ExposedList`1<System.Single>> Spine.Triangulator::polygonPool
	Pool_1_tEBC6CCDAC2A4D2FDEE1A4FC452D0D72D0F4142B9 * ___polygonPool_5;
	// Spine.Pool`1<Spine.ExposedList`1<System.Int32>> Spine.Triangulator::polygonIndicesPool
	Pool_1_t5CA90CE7EBA311405CE9C8F1E0C4DDFE861C384A * ___polygonIndicesPool_6;

public:
	inline static int32_t get_offset_of_convexPolygons_0() { return static_cast<int32_t>(offsetof(Triangulator_tB8EB2546BA4C75A44FDEEC203E67023C07FBBE8B, ___convexPolygons_0)); }
	inline ExposedList_1_tFAEEFBED9EABAD893C31C789759FD1BA692F0289 * get_convexPolygons_0() const { return ___convexPolygons_0; }
	inline ExposedList_1_tFAEEFBED9EABAD893C31C789759FD1BA692F0289 ** get_address_of_convexPolygons_0() { return &___convexPolygons_0; }
	inline void set_convexPolygons_0(ExposedList_1_tFAEEFBED9EABAD893C31C789759FD1BA692F0289 * value)
	{
		___convexPolygons_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___convexPolygons_0), (void*)value);
	}

	inline static int32_t get_offset_of_convexPolygonsIndices_1() { return static_cast<int32_t>(offsetof(Triangulator_tB8EB2546BA4C75A44FDEEC203E67023C07FBBE8B, ___convexPolygonsIndices_1)); }
	inline ExposedList_1_tE018626AD135D00E2FCAF5578BADE795F5CCDC90 * get_convexPolygonsIndices_1() const { return ___convexPolygonsIndices_1; }
	inline ExposedList_1_tE018626AD135D00E2FCAF5578BADE795F5CCDC90 ** get_address_of_convexPolygonsIndices_1() { return &___convexPolygonsIndices_1; }
	inline void set_convexPolygonsIndices_1(ExposedList_1_tE018626AD135D00E2FCAF5578BADE795F5CCDC90 * value)
	{
		___convexPolygonsIndices_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___convexPolygonsIndices_1), (void*)value);
	}

	inline static int32_t get_offset_of_indicesArray_2() { return static_cast<int32_t>(offsetof(Triangulator_tB8EB2546BA4C75A44FDEEC203E67023C07FBBE8B, ___indicesArray_2)); }
	inline ExposedList_1_tEB071484A7B70681ADB6BD9522EFC630CA5C5066 * get_indicesArray_2() const { return ___indicesArray_2; }
	inline ExposedList_1_tEB071484A7B70681ADB6BD9522EFC630CA5C5066 ** get_address_of_indicesArray_2() { return &___indicesArray_2; }
	inline void set_indicesArray_2(ExposedList_1_tEB071484A7B70681ADB6BD9522EFC630CA5C5066 * value)
	{
		___indicesArray_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___indicesArray_2), (void*)value);
	}

	inline static int32_t get_offset_of_isConcaveArray_3() { return static_cast<int32_t>(offsetof(Triangulator_tB8EB2546BA4C75A44FDEEC203E67023C07FBBE8B, ___isConcaveArray_3)); }
	inline ExposedList_1_tAA9A80412EB5EC236EBA9FC15B2BD9A61915AE7E * get_isConcaveArray_3() const { return ___isConcaveArray_3; }
	inline ExposedList_1_tAA9A80412EB5EC236EBA9FC15B2BD9A61915AE7E ** get_address_of_isConcaveArray_3() { return &___isConcaveArray_3; }
	inline void set_isConcaveArray_3(ExposedList_1_tAA9A80412EB5EC236EBA9FC15B2BD9A61915AE7E * value)
	{
		___isConcaveArray_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___isConcaveArray_3), (void*)value);
	}

	inline static int32_t get_offset_of_triangles_4() { return static_cast<int32_t>(offsetof(Triangulator_tB8EB2546BA4C75A44FDEEC203E67023C07FBBE8B, ___triangles_4)); }
	inline ExposedList_1_tEB071484A7B70681ADB6BD9522EFC630CA5C5066 * get_triangles_4() const { return ___triangles_4; }
	inline ExposedList_1_tEB071484A7B70681ADB6BD9522EFC630CA5C5066 ** get_address_of_triangles_4() { return &___triangles_4; }
	inline void set_triangles_4(ExposedList_1_tEB071484A7B70681ADB6BD9522EFC630CA5C5066 * value)
	{
		___triangles_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___triangles_4), (void*)value);
	}

	inline static int32_t get_offset_of_polygonPool_5() { return static_cast<int32_t>(offsetof(Triangulator_tB8EB2546BA4C75A44FDEEC203E67023C07FBBE8B, ___polygonPool_5)); }
	inline Pool_1_tEBC6CCDAC2A4D2FDEE1A4FC452D0D72D0F4142B9 * get_polygonPool_5() const { return ___polygonPool_5; }
	inline Pool_1_tEBC6CCDAC2A4D2FDEE1A4FC452D0D72D0F4142B9 ** get_address_of_polygonPool_5() { return &___polygonPool_5; }
	inline void set_polygonPool_5(Pool_1_tEBC6CCDAC2A4D2FDEE1A4FC452D0D72D0F4142B9 * value)
	{
		___polygonPool_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___polygonPool_5), (void*)value);
	}

	inline static int32_t get_offset_of_polygonIndicesPool_6() { return static_cast<int32_t>(offsetof(Triangulator_tB8EB2546BA4C75A44FDEEC203E67023C07FBBE8B, ___polygonIndicesPool_6)); }
	inline Pool_1_t5CA90CE7EBA311405CE9C8F1E0C4DDFE861C384A * get_polygonIndicesPool_6() const { return ___polygonIndicesPool_6; }
	inline Pool_1_t5CA90CE7EBA311405CE9C8F1E0C4DDFE861C384A ** get_address_of_polygonIndicesPool_6() { return &___polygonIndicesPool_6; }
	inline void set_polygonIndicesPool_6(Pool_1_t5CA90CE7EBA311405CE9C8F1E0C4DDFE861C384A * value)
	{
		___polygonIndicesPool_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___polygonIndicesPool_6), (void*)value);
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

// Spine.AnimationStateData/AnimationPairComparer
struct AnimationPairComparer_tCF4856346F6E3F6713561B39646846CE27877BE3  : public RuntimeObject
{
public:

public:
};

struct AnimationPairComparer_tCF4856346F6E3F6713561B39646846CE27877BE3_StaticFields
{
public:
	// Spine.AnimationStateData/AnimationPairComparer Spine.AnimationStateData/AnimationPairComparer::Instance
	AnimationPairComparer_tCF4856346F6E3F6713561B39646846CE27877BE3 * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(AnimationPairComparer_tCF4856346F6E3F6713561B39646846CE27877BE3_StaticFields, ___Instance_0)); }
	inline AnimationPairComparer_tCF4856346F6E3F6713561B39646846CE27877BE3 * get_Instance_0() const { return ___Instance_0; }
	inline AnimationPairComparer_tCF4856346F6E3F6713561B39646846CE27877BE3 ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(AnimationPairComparer_tCF4856346F6E3F6713561B39646846CE27877BE3 * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Instance_0), (void*)value);
	}
};


// Spine.Atlas/<>c__DisplayClass10_0
struct U3CU3Ec__DisplayClass10_0_tBF5C29B31A8B06822C307D01647CD4603254F201  : public RuntimeObject
{
public:
	// Spine.AtlasPage Spine.Atlas/<>c__DisplayClass10_0::page
	AtlasPage_t8A12ACC89F843E7F1869ADA9D82221D8298850F6 * ___page_0;
	// System.String[] Spine.Atlas/<>c__DisplayClass10_0::entry
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___entry_1;
	// Spine.AtlasRegion Spine.Atlas/<>c__DisplayClass10_0::region
	AtlasRegion_t82875C2D00A27CA4974B4D3529484CA9F57F8485 * ___region_2;

public:
	inline static int32_t get_offset_of_page_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass10_0_tBF5C29B31A8B06822C307D01647CD4603254F201, ___page_0)); }
	inline AtlasPage_t8A12ACC89F843E7F1869ADA9D82221D8298850F6 * get_page_0() const { return ___page_0; }
	inline AtlasPage_t8A12ACC89F843E7F1869ADA9D82221D8298850F6 ** get_address_of_page_0() { return &___page_0; }
	inline void set_page_0(AtlasPage_t8A12ACC89F843E7F1869ADA9D82221D8298850F6 * value)
	{
		___page_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___page_0), (void*)value);
	}

	inline static int32_t get_offset_of_entry_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass10_0_tBF5C29B31A8B06822C307D01647CD4603254F201, ___entry_1)); }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* get_entry_1() const { return ___entry_1; }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A** get_address_of_entry_1() { return &___entry_1; }
	inline void set_entry_1(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* value)
	{
		___entry_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___entry_1), (void*)value);
	}

	inline static int32_t get_offset_of_region_2() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass10_0_tBF5C29B31A8B06822C307D01647CD4603254F201, ___region_2)); }
	inline AtlasRegion_t82875C2D00A27CA4974B4D3529484CA9F57F8485 * get_region_2() const { return ___region_2; }
	inline AtlasRegion_t82875C2D00A27CA4974B4D3529484CA9F57F8485 ** get_address_of_region_2() { return &___region_2; }
	inline void set_region_2(AtlasRegion_t82875C2D00A27CA4974B4D3529484CA9F57F8485 * value)
	{
		___region_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___region_2), (void*)value);
	}
};


// Spine.SkeletonBinary/SkeletonInput
struct SkeletonInput_tD0B7F3FDB991A3A0D0563BAD64BF45984FC8DC6A  : public RuntimeObject
{
public:
	// System.Byte[] Spine.SkeletonBinary/SkeletonInput::chars
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___chars_0;
	// System.Byte[] Spine.SkeletonBinary/SkeletonInput::bytesBigEndian
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___bytesBigEndian_1;
	// System.String[] Spine.SkeletonBinary/SkeletonInput::strings
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___strings_2;
	// System.IO.Stream Spine.SkeletonBinary/SkeletonInput::input
	Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * ___input_3;

public:
	inline static int32_t get_offset_of_chars_0() { return static_cast<int32_t>(offsetof(SkeletonInput_tD0B7F3FDB991A3A0D0563BAD64BF45984FC8DC6A, ___chars_0)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get_chars_0() const { return ___chars_0; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of_chars_0() { return &___chars_0; }
	inline void set_chars_0(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		___chars_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___chars_0), (void*)value);
	}

	inline static int32_t get_offset_of_bytesBigEndian_1() { return static_cast<int32_t>(offsetof(SkeletonInput_tD0B7F3FDB991A3A0D0563BAD64BF45984FC8DC6A, ___bytesBigEndian_1)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get_bytesBigEndian_1() const { return ___bytesBigEndian_1; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of_bytesBigEndian_1() { return &___bytesBigEndian_1; }
	inline void set_bytesBigEndian_1(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		___bytesBigEndian_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___bytesBigEndian_1), (void*)value);
	}

	inline static int32_t get_offset_of_strings_2() { return static_cast<int32_t>(offsetof(SkeletonInput_tD0B7F3FDB991A3A0D0563BAD64BF45984FC8DC6A, ___strings_2)); }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* get_strings_2() const { return ___strings_2; }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A** get_address_of_strings_2() { return &___strings_2; }
	inline void set_strings_2(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* value)
	{
		___strings_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___strings_2), (void*)value);
	}

	inline static int32_t get_offset_of_input_3() { return static_cast<int32_t>(offsetof(SkeletonInput_tD0B7F3FDB991A3A0D0563BAD64BF45984FC8DC6A, ___input_3)); }
	inline Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * get_input_3() const { return ___input_3; }
	inline Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB ** get_address_of_input_3() { return &___input_3; }
	inline void set_input_3(Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * value)
	{
		___input_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___input_3), (void*)value);
	}
};


// Spine.SkeletonBinary/Vertices
struct Vertices_tC5C45F508B1550DB3F5D2C4479C467CA6226B541  : public RuntimeObject
{
public:
	// System.Int32[] Spine.SkeletonBinary/Vertices::bones
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___bones_0;
	// System.Single[] Spine.SkeletonBinary/Vertices::vertices
	SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* ___vertices_1;

public:
	inline static int32_t get_offset_of_bones_0() { return static_cast<int32_t>(offsetof(Vertices_tC5C45F508B1550DB3F5D2C4479C467CA6226B541, ___bones_0)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_bones_0() const { return ___bones_0; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_bones_0() { return &___bones_0; }
	inline void set_bones_0(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___bones_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___bones_0), (void*)value);
	}

	inline static int32_t get_offset_of_vertices_1() { return static_cast<int32_t>(offsetof(Vertices_tC5C45F508B1550DB3F5D2C4479C467CA6226B541, ___vertices_1)); }
	inline SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* get_vertices_1() const { return ___vertices_1; }
	inline SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA** get_address_of_vertices_1() { return &___vertices_1; }
	inline void set_vertices_1(SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* value)
	{
		___vertices_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___vertices_1), (void*)value);
	}
};


// Spine.SkeletonLoader/LinkedMesh
struct LinkedMesh_t95D16FDB1A35D9F16D739B764848BA25AFCF24E1  : public RuntimeObject
{
public:
	// System.String Spine.SkeletonLoader/LinkedMesh::parent
	String_t* ___parent_0;
	// System.String Spine.SkeletonLoader/LinkedMesh::skin
	String_t* ___skin_1;
	// System.Int32 Spine.SkeletonLoader/LinkedMesh::slotIndex
	int32_t ___slotIndex_2;
	// Spine.MeshAttachment Spine.SkeletonLoader/LinkedMesh::mesh
	MeshAttachment_t928FE10280A3D4F1648B7D18B42C04515C08F990 * ___mesh_3;
	// System.Boolean Spine.SkeletonLoader/LinkedMesh::inheritDeform
	bool ___inheritDeform_4;

public:
	inline static int32_t get_offset_of_parent_0() { return static_cast<int32_t>(offsetof(LinkedMesh_t95D16FDB1A35D9F16D739B764848BA25AFCF24E1, ___parent_0)); }
	inline String_t* get_parent_0() const { return ___parent_0; }
	inline String_t** get_address_of_parent_0() { return &___parent_0; }
	inline void set_parent_0(String_t* value)
	{
		___parent_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___parent_0), (void*)value);
	}

	inline static int32_t get_offset_of_skin_1() { return static_cast<int32_t>(offsetof(LinkedMesh_t95D16FDB1A35D9F16D739B764848BA25AFCF24E1, ___skin_1)); }
	inline String_t* get_skin_1() const { return ___skin_1; }
	inline String_t** get_address_of_skin_1() { return &___skin_1; }
	inline void set_skin_1(String_t* value)
	{
		___skin_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___skin_1), (void*)value);
	}

	inline static int32_t get_offset_of_slotIndex_2() { return static_cast<int32_t>(offsetof(LinkedMesh_t95D16FDB1A35D9F16D739B764848BA25AFCF24E1, ___slotIndex_2)); }
	inline int32_t get_slotIndex_2() const { return ___slotIndex_2; }
	inline int32_t* get_address_of_slotIndex_2() { return &___slotIndex_2; }
	inline void set_slotIndex_2(int32_t value)
	{
		___slotIndex_2 = value;
	}

	inline static int32_t get_offset_of_mesh_3() { return static_cast<int32_t>(offsetof(LinkedMesh_t95D16FDB1A35D9F16D739B764848BA25AFCF24E1, ___mesh_3)); }
	inline MeshAttachment_t928FE10280A3D4F1648B7D18B42C04515C08F990 * get_mesh_3() const { return ___mesh_3; }
	inline MeshAttachment_t928FE10280A3D4F1648B7D18B42C04515C08F990 ** get_address_of_mesh_3() { return &___mesh_3; }
	inline void set_mesh_3(MeshAttachment_t928FE10280A3D4F1648B7D18B42C04515C08F990 * value)
	{
		___mesh_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mesh_3), (void*)value);
	}

	inline static int32_t get_offset_of_inheritDeform_4() { return static_cast<int32_t>(offsetof(LinkedMesh_t95D16FDB1A35D9F16D739B764848BA25AFCF24E1, ___inheritDeform_4)); }
	inline bool get_inheritDeform_4() const { return ___inheritDeform_4; }
	inline bool* get_address_of_inheritDeform_4() { return &___inheritDeform_4; }
	inline void set_inheritDeform_4(bool value)
	{
		___inheritDeform_4 = value;
	}
};


// Spine.Skin/SkinKeyComparer
struct SkinKeyComparer_t4F9D27D9EB27FB8A643889C17AD3E9682592B764  : public RuntimeObject
{
public:

public:
};

struct SkinKeyComparer_t4F9D27D9EB27FB8A643889C17AD3E9682592B764_StaticFields
{
public:
	// Spine.Skin/SkinKeyComparer Spine.Skin/SkinKeyComparer::Instance
	SkinKeyComparer_t4F9D27D9EB27FB8A643889C17AD3E9682592B764 * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(SkinKeyComparer_t4F9D27D9EB27FB8A643889C17AD3E9682592B764_StaticFields, ___Instance_0)); }
	inline SkinKeyComparer_t4F9D27D9EB27FB8A643889C17AD3E9682592B764 * get_Instance_0() const { return ___Instance_0; }
	inline SkinKeyComparer_t4F9D27D9EB27FB8A643889C17AD3E9682592B764 ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(SkinKeyComparer_t4F9D27D9EB27FB8A643889C17AD3E9682592B764 * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Instance_0), (void*)value);
	}
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


// System.Byte
struct Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056 
{
public:
	// System.Byte System.Byte::m_value
	uint8_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056, ___m_value_0)); }
	inline uint8_t get_m_value_0() const { return ___m_value_0; }
	inline uint8_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(uint8_t value)
	{
		___m_value_0 = value;
	}
};


// System.Char
struct Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14 
{
public:
	// System.Char System.Char::m_value
	Il2CppChar ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14, ___m_value_0)); }
	inline Il2CppChar get_m_value_0() const { return ___m_value_0; }
	inline Il2CppChar* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(Il2CppChar value)
	{
		___m_value_0 = value;
	}
};

struct Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14_StaticFields
{
public:
	// System.Byte[] System.Char::categoryForLatin1
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___categoryForLatin1_3;

public:
	inline static int32_t get_offset_of_categoryForLatin1_3() { return static_cast<int32_t>(offsetof(Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14_StaticFields, ___categoryForLatin1_3)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get_categoryForLatin1_3() const { return ___categoryForLatin1_3; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of_categoryForLatin1_3() { return &___categoryForLatin1_3; }
	inline void set_categoryForLatin1_3(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		___categoryForLatin1_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___categoryForLatin1_3), (void*)value);
	}
};


// Spine.CurveTimeline
struct CurveTimeline_t404E642BD4DFEEDB39DBCDC088B7F7E78FAE5476  : public Timeline_tD8AC6175D8B492C9CDB166AC1FBFEE28A474DAF0
{
public:
	// System.Single[] Spine.CurveTimeline::curves
	SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* ___curves_6;

public:
	inline static int32_t get_offset_of_curves_6() { return static_cast<int32_t>(offsetof(CurveTimeline_t404E642BD4DFEEDB39DBCDC088B7F7E78FAE5476, ___curves_6)); }
	inline SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* get_curves_6() const { return ___curves_6; }
	inline SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA** get_address_of_curves_6() { return &___curves_6; }
	inline void set_curves_6(SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* value)
	{
		___curves_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___curves_6), (void*)value);
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

// System.Int32
struct Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046 
{
public:
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046, ___m_value_0)); }
	inline int32_t get_m_value_0() const { return ___m_value_0; }
	inline int32_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int32_t value)
	{
		___m_value_0 = value;
	}
};


// System.Int64
struct Int64_t378EE0D608BD3107E77238E85F30D2BBD46981F3 
{
public:
	// System.Int64 System.Int64::m_value
	int64_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int64_t378EE0D608BD3107E77238E85F30D2BBD46981F3, ___m_value_0)); }
	inline int64_t get_m_value_0() const { return ___m_value_0; }
	inline int64_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int64_t value)
	{
		___m_value_0 = value;
	}
};


// System.IntPtr
struct IntPtr_t 
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


// System.SByte
struct SByte_t928712DD662DC29BA4FAAE8CE2230AFB23447F0B 
{
public:
	// System.SByte System.SByte::m_value
	int8_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(SByte_t928712DD662DC29BA4FAAE8CE2230AFB23447F0B, ___m_value_0)); }
	inline int8_t get_m_value_0() const { return ___m_value_0; }
	inline int8_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int8_t value)
	{
		___m_value_0 = value;
	}
};


// System.Single
struct Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E 
{
public:
	// System.Single System.Single::m_value
	float ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E, ___m_value_0)); }
	inline float get_m_value_0() const { return ___m_value_0; }
	inline float* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(float value)
	{
		___m_value_0 = value;
	}
};


// System.IO.Stream
struct Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB  : public MarshalByRefObject_tD4DF91B488B284F899417EC468D8E50E933306A8
{
public:
	// System.IO.Stream/ReadWriteTask System.IO.Stream::_activeReadWriteTask
	ReadWriteTask_t32CD2C230786712954C1DB518DBE420A1F4C7974 * ____activeReadWriteTask_2;
	// System.Threading.SemaphoreSlim System.IO.Stream::_asyncActiveSemaphore
	SemaphoreSlim_t3EF85FC980AE57957BEBB6B78E81DE2E3233D385 * ____asyncActiveSemaphore_3;

public:
	inline static int32_t get_offset_of__activeReadWriteTask_2() { return static_cast<int32_t>(offsetof(Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB, ____activeReadWriteTask_2)); }
	inline ReadWriteTask_t32CD2C230786712954C1DB518DBE420A1F4C7974 * get__activeReadWriteTask_2() const { return ____activeReadWriteTask_2; }
	inline ReadWriteTask_t32CD2C230786712954C1DB518DBE420A1F4C7974 ** get_address_of__activeReadWriteTask_2() { return &____activeReadWriteTask_2; }
	inline void set__activeReadWriteTask_2(ReadWriteTask_t32CD2C230786712954C1DB518DBE420A1F4C7974 * value)
	{
		____activeReadWriteTask_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____activeReadWriteTask_2), (void*)value);
	}

	inline static int32_t get_offset_of__asyncActiveSemaphore_3() { return static_cast<int32_t>(offsetof(Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB, ____asyncActiveSemaphore_3)); }
	inline SemaphoreSlim_t3EF85FC980AE57957BEBB6B78E81DE2E3233D385 * get__asyncActiveSemaphore_3() const { return ____asyncActiveSemaphore_3; }
	inline SemaphoreSlim_t3EF85FC980AE57957BEBB6B78E81DE2E3233D385 ** get_address_of__asyncActiveSemaphore_3() { return &____asyncActiveSemaphore_3; }
	inline void set__asyncActiveSemaphore_3(SemaphoreSlim_t3EF85FC980AE57957BEBB6B78E81DE2E3233D385 * value)
	{
		____asyncActiveSemaphore_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____asyncActiveSemaphore_3), (void*)value);
	}
};

struct Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB_StaticFields
{
public:
	// System.IO.Stream System.IO.Stream::Null
	Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * ___Null_1;

public:
	inline static int32_t get_offset_of_Null_1() { return static_cast<int32_t>(offsetof(Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB_StaticFields, ___Null_1)); }
	inline Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * get_Null_1() const { return ___Null_1; }
	inline Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB ** get_address_of_Null_1() { return &___Null_1; }
	inline void set_Null_1(Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * value)
	{
		___Null_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Null_1), (void*)value);
	}
};


// Spine.TransformConstraintData
struct TransformConstraintData_t5B434A578868FB4E1BBBF29E3024FF07B5D0EF59  : public ConstraintData_t71BA8ACA83AC8927FE1FEDFAB6A24846C01D138F
{
public:
	// Spine.ExposedList`1<Spine.BoneData> Spine.TransformConstraintData::bones
	ExposedList_1_t55FC025D5A735E30067A5D1CCB31D11EA181CF36 * ___bones_3;
	// Spine.BoneData Spine.TransformConstraintData::target
	BoneData_t48A671E6818E76905840CC122A96889DDCB92A51 * ___target_4;
	// System.Single Spine.TransformConstraintData::mixRotate
	float ___mixRotate_5;
	// System.Single Spine.TransformConstraintData::mixX
	float ___mixX_6;
	// System.Single Spine.TransformConstraintData::mixY
	float ___mixY_7;
	// System.Single Spine.TransformConstraintData::mixScaleX
	float ___mixScaleX_8;
	// System.Single Spine.TransformConstraintData::mixScaleY
	float ___mixScaleY_9;
	// System.Single Spine.TransformConstraintData::mixShearY
	float ___mixShearY_10;
	// System.Single Spine.TransformConstraintData::offsetRotation
	float ___offsetRotation_11;
	// System.Single Spine.TransformConstraintData::offsetX
	float ___offsetX_12;
	// System.Single Spine.TransformConstraintData::offsetY
	float ___offsetY_13;
	// System.Single Spine.TransformConstraintData::offsetScaleX
	float ___offsetScaleX_14;
	// System.Single Spine.TransformConstraintData::offsetScaleY
	float ___offsetScaleY_15;
	// System.Single Spine.TransformConstraintData::offsetShearY
	float ___offsetShearY_16;
	// System.Boolean Spine.TransformConstraintData::relative
	bool ___relative_17;
	// System.Boolean Spine.TransformConstraintData::local
	bool ___local_18;

public:
	inline static int32_t get_offset_of_bones_3() { return static_cast<int32_t>(offsetof(TransformConstraintData_t5B434A578868FB4E1BBBF29E3024FF07B5D0EF59, ___bones_3)); }
	inline ExposedList_1_t55FC025D5A735E30067A5D1CCB31D11EA181CF36 * get_bones_3() const { return ___bones_3; }
	inline ExposedList_1_t55FC025D5A735E30067A5D1CCB31D11EA181CF36 ** get_address_of_bones_3() { return &___bones_3; }
	inline void set_bones_3(ExposedList_1_t55FC025D5A735E30067A5D1CCB31D11EA181CF36 * value)
	{
		___bones_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___bones_3), (void*)value);
	}

	inline static int32_t get_offset_of_target_4() { return static_cast<int32_t>(offsetof(TransformConstraintData_t5B434A578868FB4E1BBBF29E3024FF07B5D0EF59, ___target_4)); }
	inline BoneData_t48A671E6818E76905840CC122A96889DDCB92A51 * get_target_4() const { return ___target_4; }
	inline BoneData_t48A671E6818E76905840CC122A96889DDCB92A51 ** get_address_of_target_4() { return &___target_4; }
	inline void set_target_4(BoneData_t48A671E6818E76905840CC122A96889DDCB92A51 * value)
	{
		___target_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___target_4), (void*)value);
	}

	inline static int32_t get_offset_of_mixRotate_5() { return static_cast<int32_t>(offsetof(TransformConstraintData_t5B434A578868FB4E1BBBF29E3024FF07B5D0EF59, ___mixRotate_5)); }
	inline float get_mixRotate_5() const { return ___mixRotate_5; }
	inline float* get_address_of_mixRotate_5() { return &___mixRotate_5; }
	inline void set_mixRotate_5(float value)
	{
		___mixRotate_5 = value;
	}

	inline static int32_t get_offset_of_mixX_6() { return static_cast<int32_t>(offsetof(TransformConstraintData_t5B434A578868FB4E1BBBF29E3024FF07B5D0EF59, ___mixX_6)); }
	inline float get_mixX_6() const { return ___mixX_6; }
	inline float* get_address_of_mixX_6() { return &___mixX_6; }
	inline void set_mixX_6(float value)
	{
		___mixX_6 = value;
	}

	inline static int32_t get_offset_of_mixY_7() { return static_cast<int32_t>(offsetof(TransformConstraintData_t5B434A578868FB4E1BBBF29E3024FF07B5D0EF59, ___mixY_7)); }
	inline float get_mixY_7() const { return ___mixY_7; }
	inline float* get_address_of_mixY_7() { return &___mixY_7; }
	inline void set_mixY_7(float value)
	{
		___mixY_7 = value;
	}

	inline static int32_t get_offset_of_mixScaleX_8() { return static_cast<int32_t>(offsetof(TransformConstraintData_t5B434A578868FB4E1BBBF29E3024FF07B5D0EF59, ___mixScaleX_8)); }
	inline float get_mixScaleX_8() const { return ___mixScaleX_8; }
	inline float* get_address_of_mixScaleX_8() { return &___mixScaleX_8; }
	inline void set_mixScaleX_8(float value)
	{
		___mixScaleX_8 = value;
	}

	inline static int32_t get_offset_of_mixScaleY_9() { return static_cast<int32_t>(offsetof(TransformConstraintData_t5B434A578868FB4E1BBBF29E3024FF07B5D0EF59, ___mixScaleY_9)); }
	inline float get_mixScaleY_9() const { return ___mixScaleY_9; }
	inline float* get_address_of_mixScaleY_9() { return &___mixScaleY_9; }
	inline void set_mixScaleY_9(float value)
	{
		___mixScaleY_9 = value;
	}

	inline static int32_t get_offset_of_mixShearY_10() { return static_cast<int32_t>(offsetof(TransformConstraintData_t5B434A578868FB4E1BBBF29E3024FF07B5D0EF59, ___mixShearY_10)); }
	inline float get_mixShearY_10() const { return ___mixShearY_10; }
	inline float* get_address_of_mixShearY_10() { return &___mixShearY_10; }
	inline void set_mixShearY_10(float value)
	{
		___mixShearY_10 = value;
	}

	inline static int32_t get_offset_of_offsetRotation_11() { return static_cast<int32_t>(offsetof(TransformConstraintData_t5B434A578868FB4E1BBBF29E3024FF07B5D0EF59, ___offsetRotation_11)); }
	inline float get_offsetRotation_11() const { return ___offsetRotation_11; }
	inline float* get_address_of_offsetRotation_11() { return &___offsetRotation_11; }
	inline void set_offsetRotation_11(float value)
	{
		___offsetRotation_11 = value;
	}

	inline static int32_t get_offset_of_offsetX_12() { return static_cast<int32_t>(offsetof(TransformConstraintData_t5B434A578868FB4E1BBBF29E3024FF07B5D0EF59, ___offsetX_12)); }
	inline float get_offsetX_12() const { return ___offsetX_12; }
	inline float* get_address_of_offsetX_12() { return &___offsetX_12; }
	inline void set_offsetX_12(float value)
	{
		___offsetX_12 = value;
	}

	inline static int32_t get_offset_of_offsetY_13() { return static_cast<int32_t>(offsetof(TransformConstraintData_t5B434A578868FB4E1BBBF29E3024FF07B5D0EF59, ___offsetY_13)); }
	inline float get_offsetY_13() const { return ___offsetY_13; }
	inline float* get_address_of_offsetY_13() { return &___offsetY_13; }
	inline void set_offsetY_13(float value)
	{
		___offsetY_13 = value;
	}

	inline static int32_t get_offset_of_offsetScaleX_14() { return static_cast<int32_t>(offsetof(TransformConstraintData_t5B434A578868FB4E1BBBF29E3024FF07B5D0EF59, ___offsetScaleX_14)); }
	inline float get_offsetScaleX_14() const { return ___offsetScaleX_14; }
	inline float* get_address_of_offsetScaleX_14() { return &___offsetScaleX_14; }
	inline void set_offsetScaleX_14(float value)
	{
		___offsetScaleX_14 = value;
	}

	inline static int32_t get_offset_of_offsetScaleY_15() { return static_cast<int32_t>(offsetof(TransformConstraintData_t5B434A578868FB4E1BBBF29E3024FF07B5D0EF59, ___offsetScaleY_15)); }
	inline float get_offsetScaleY_15() const { return ___offsetScaleY_15; }
	inline float* get_address_of_offsetScaleY_15() { return &___offsetScaleY_15; }
	inline void set_offsetScaleY_15(float value)
	{
		___offsetScaleY_15 = value;
	}

	inline static int32_t get_offset_of_offsetShearY_16() { return static_cast<int32_t>(offsetof(TransformConstraintData_t5B434A578868FB4E1BBBF29E3024FF07B5D0EF59, ___offsetShearY_16)); }
	inline float get_offsetShearY_16() const { return ___offsetShearY_16; }
	inline float* get_address_of_offsetShearY_16() { return &___offsetShearY_16; }
	inline void set_offsetShearY_16(float value)
	{
		___offsetShearY_16 = value;
	}

	inline static int32_t get_offset_of_relative_17() { return static_cast<int32_t>(offsetof(TransformConstraintData_t5B434A578868FB4E1BBBF29E3024FF07B5D0EF59, ___relative_17)); }
	inline bool get_relative_17() const { return ___relative_17; }
	inline bool* get_address_of_relative_17() { return &___relative_17; }
	inline void set_relative_17(bool value)
	{
		___relative_17 = value;
	}

	inline static int32_t get_offset_of_local_18() { return static_cast<int32_t>(offsetof(TransformConstraintData_t5B434A578868FB4E1BBBF29E3024FF07B5D0EF59, ___local_18)); }
	inline bool get_local_18() const { return ___local_18; }
	inline bool* get_address_of_local_18() { return &___local_18; }
	inline void set_local_18(bool value)
	{
		___local_18 = value;
	}
};


// Spine.VertexAttachment
struct VertexAttachment_t9CE5B53FEDF378FFCADECD92F0ABF5F1DFDFFF36  : public Attachment_tA85256BF51006C369687395955B6A6B51D432F21
{
public:
	// System.Int32 Spine.VertexAttachment::id
	int32_t ___id_3;
	// System.Int32[] Spine.VertexAttachment::bones
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___bones_4;
	// System.Single[] Spine.VertexAttachment::vertices
	SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* ___vertices_5;
	// System.Int32 Spine.VertexAttachment::worldVerticesLength
	int32_t ___worldVerticesLength_6;
	// Spine.VertexAttachment Spine.VertexAttachment::deformAttachment
	VertexAttachment_t9CE5B53FEDF378FFCADECD92F0ABF5F1DFDFFF36 * ___deformAttachment_7;

public:
	inline static int32_t get_offset_of_id_3() { return static_cast<int32_t>(offsetof(VertexAttachment_t9CE5B53FEDF378FFCADECD92F0ABF5F1DFDFFF36, ___id_3)); }
	inline int32_t get_id_3() const { return ___id_3; }
	inline int32_t* get_address_of_id_3() { return &___id_3; }
	inline void set_id_3(int32_t value)
	{
		___id_3 = value;
	}

	inline static int32_t get_offset_of_bones_4() { return static_cast<int32_t>(offsetof(VertexAttachment_t9CE5B53FEDF378FFCADECD92F0ABF5F1DFDFFF36, ___bones_4)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_bones_4() const { return ___bones_4; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_bones_4() { return &___bones_4; }
	inline void set_bones_4(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___bones_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___bones_4), (void*)value);
	}

	inline static int32_t get_offset_of_vertices_5() { return static_cast<int32_t>(offsetof(VertexAttachment_t9CE5B53FEDF378FFCADECD92F0ABF5F1DFDFFF36, ___vertices_5)); }
	inline SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* get_vertices_5() const { return ___vertices_5; }
	inline SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA** get_address_of_vertices_5() { return &___vertices_5; }
	inline void set_vertices_5(SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* value)
	{
		___vertices_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___vertices_5), (void*)value);
	}

	inline static int32_t get_offset_of_worldVerticesLength_6() { return static_cast<int32_t>(offsetof(VertexAttachment_t9CE5B53FEDF378FFCADECD92F0ABF5F1DFDFFF36, ___worldVerticesLength_6)); }
	inline int32_t get_worldVerticesLength_6() const { return ___worldVerticesLength_6; }
	inline int32_t* get_address_of_worldVerticesLength_6() { return &___worldVerticesLength_6; }
	inline void set_worldVerticesLength_6(int32_t value)
	{
		___worldVerticesLength_6 = value;
	}

	inline static int32_t get_offset_of_deformAttachment_7() { return static_cast<int32_t>(offsetof(VertexAttachment_t9CE5B53FEDF378FFCADECD92F0ABF5F1DFDFFF36, ___deformAttachment_7)); }
	inline VertexAttachment_t9CE5B53FEDF378FFCADECD92F0ABF5F1DFDFFF36 * get_deformAttachment_7() const { return ___deformAttachment_7; }
	inline VertexAttachment_t9CE5B53FEDF378FFCADECD92F0ABF5F1DFDFFF36 ** get_address_of_deformAttachment_7() { return &___deformAttachment_7; }
	inline void set_deformAttachment_7(VertexAttachment_t9CE5B53FEDF378FFCADECD92F0ABF5F1DFDFFF36 * value)
	{
		___deformAttachment_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___deformAttachment_7), (void*)value);
	}
};

struct VertexAttachment_t9CE5B53FEDF378FFCADECD92F0ABF5F1DFDFFF36_StaticFields
{
public:
	// System.Int32 Spine.VertexAttachment::nextID
	int32_t ___nextID_1;
	// System.Object Spine.VertexAttachment::nextIdLock
	RuntimeObject * ___nextIdLock_2;

public:
	inline static int32_t get_offset_of_nextID_1() { return static_cast<int32_t>(offsetof(VertexAttachment_t9CE5B53FEDF378FFCADECD92F0ABF5F1DFDFFF36_StaticFields, ___nextID_1)); }
	inline int32_t get_nextID_1() const { return ___nextID_1; }
	inline int32_t* get_address_of_nextID_1() { return &___nextID_1; }
	inline void set_nextID_1(int32_t value)
	{
		___nextID_1 = value;
	}

	inline static int32_t get_offset_of_nextIdLock_2() { return static_cast<int32_t>(offsetof(VertexAttachment_t9CE5B53FEDF378FFCADECD92F0ABF5F1DFDFFF36_StaticFields, ___nextIdLock_2)); }
	inline RuntimeObject * get_nextIdLock_2() const { return ___nextIdLock_2; }
	inline RuntimeObject ** get_address_of_nextIdLock_2() { return &___nextIdLock_2; }
	inline void set_nextIdLock_2(RuntimeObject * value)
	{
		___nextIdLock_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___nextIdLock_2), (void*)value);
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


// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=20
struct __StaticArrayInitTypeSizeU3D20_t5D05F1A4C1EA298987A96B78E92D6FB0FF41656E 
{
public:
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D20_t5D05F1A4C1EA298987A96B78E92D6FB0FF41656E__padding[20];
	};

public:
};


// Spine.AnimationStateData/AnimationPair
struct AnimationPair_t2A53EA37F4B1C93E6BBB0F04E2632819498E92E9 
{
public:
	// Spine.Animation Spine.AnimationStateData/AnimationPair::a1
	Animation_tE800D5597964656F48F303755E4C6C66462E8E90 * ___a1_0;
	// Spine.Animation Spine.AnimationStateData/AnimationPair::a2
	Animation_tE800D5597964656F48F303755E4C6C66462E8E90 * ___a2_1;

public:
	inline static int32_t get_offset_of_a1_0() { return static_cast<int32_t>(offsetof(AnimationPair_t2A53EA37F4B1C93E6BBB0F04E2632819498E92E9, ___a1_0)); }
	inline Animation_tE800D5597964656F48F303755E4C6C66462E8E90 * get_a1_0() const { return ___a1_0; }
	inline Animation_tE800D5597964656F48F303755E4C6C66462E8E90 ** get_address_of_a1_0() { return &___a1_0; }
	inline void set_a1_0(Animation_tE800D5597964656F48F303755E4C6C66462E8E90 * value)
	{
		___a1_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___a1_0), (void*)value);
	}

	inline static int32_t get_offset_of_a2_1() { return static_cast<int32_t>(offsetof(AnimationPair_t2A53EA37F4B1C93E6BBB0F04E2632819498E92E9, ___a2_1)); }
	inline Animation_tE800D5597964656F48F303755E4C6C66462E8E90 * get_a2_1() const { return ___a2_1; }
	inline Animation_tE800D5597964656F48F303755E4C6C66462E8E90 ** get_address_of_a2_1() { return &___a2_1; }
	inline void set_a2_1(Animation_tE800D5597964656F48F303755E4C6C66462E8E90 * value)
	{
		___a2_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___a2_1), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of Spine.AnimationStateData/AnimationPair
struct AnimationPair_t2A53EA37F4B1C93E6BBB0F04E2632819498E92E9_marshaled_pinvoke
{
	Animation_tE800D5597964656F48F303755E4C6C66462E8E90 * ___a1_0;
	Animation_tE800D5597964656F48F303755E4C6C66462E8E90 * ___a2_1;
};
// Native definition for COM marshalling of Spine.AnimationStateData/AnimationPair
struct AnimationPair_t2A53EA37F4B1C93E6BBB0F04E2632819498E92E9_marshaled_com
{
	Animation_tE800D5597964656F48F303755E4C6C66462E8E90 * ___a1_0;
	Animation_tE800D5597964656F48F303755E4C6C66462E8E90 * ___a2_1;
};

// Spine.Skin/SkinEntry
struct SkinEntry_t4112F7EB8FA7FAC2011F2139F5C251CEE83393C4 
{
public:
	// System.Int32 Spine.Skin/SkinEntry::slotIndex
	int32_t ___slotIndex_0;
	// System.String Spine.Skin/SkinEntry::name
	String_t* ___name_1;
	// Spine.Attachment Spine.Skin/SkinEntry::attachment
	Attachment_tA85256BF51006C369687395955B6A6B51D432F21 * ___attachment_2;

public:
	inline static int32_t get_offset_of_slotIndex_0() { return static_cast<int32_t>(offsetof(SkinEntry_t4112F7EB8FA7FAC2011F2139F5C251CEE83393C4, ___slotIndex_0)); }
	inline int32_t get_slotIndex_0() const { return ___slotIndex_0; }
	inline int32_t* get_address_of_slotIndex_0() { return &___slotIndex_0; }
	inline void set_slotIndex_0(int32_t value)
	{
		___slotIndex_0 = value;
	}

	inline static int32_t get_offset_of_name_1() { return static_cast<int32_t>(offsetof(SkinEntry_t4112F7EB8FA7FAC2011F2139F5C251CEE83393C4, ___name_1)); }
	inline String_t* get_name_1() const { return ___name_1; }
	inline String_t** get_address_of_name_1() { return &___name_1; }
	inline void set_name_1(String_t* value)
	{
		___name_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___name_1), (void*)value);
	}

	inline static int32_t get_offset_of_attachment_2() { return static_cast<int32_t>(offsetof(SkinEntry_t4112F7EB8FA7FAC2011F2139F5C251CEE83393C4, ___attachment_2)); }
	inline Attachment_tA85256BF51006C369687395955B6A6B51D432F21 * get_attachment_2() const { return ___attachment_2; }
	inline Attachment_tA85256BF51006C369687395955B6A6B51D432F21 ** get_address_of_attachment_2() { return &___attachment_2; }
	inline void set_attachment_2(Attachment_tA85256BF51006C369687395955B6A6B51D432F21 * value)
	{
		___attachment_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___attachment_2), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of Spine.Skin/SkinEntry
struct SkinEntry_t4112F7EB8FA7FAC2011F2139F5C251CEE83393C4_marshaled_pinvoke
{
	int32_t ___slotIndex_0;
	char* ___name_1;
	Attachment_tA85256BF51006C369687395955B6A6B51D432F21 * ___attachment_2;
};
// Native definition for COM marshalling of Spine.Skin/SkinEntry
struct SkinEntry_t4112F7EB8FA7FAC2011F2139F5C251CEE83393C4_marshaled_com
{
	int32_t ___slotIndex_0;
	Il2CppChar* ___name_1;
	Attachment_tA85256BF51006C369687395955B6A6B51D432F21 * ___attachment_2;
};

// Spine.Skin/SkinKey
struct SkinKey_t375635E838ECDEB11B7C69698A0DECC8C37075E8 
{
public:
	// System.Int32 Spine.Skin/SkinKey::slotIndex
	int32_t ___slotIndex_0;
	// System.String Spine.Skin/SkinKey::name
	String_t* ___name_1;
	// System.Int32 Spine.Skin/SkinKey::hashCode
	int32_t ___hashCode_2;

public:
	inline static int32_t get_offset_of_slotIndex_0() { return static_cast<int32_t>(offsetof(SkinKey_t375635E838ECDEB11B7C69698A0DECC8C37075E8, ___slotIndex_0)); }
	inline int32_t get_slotIndex_0() const { return ___slotIndex_0; }
	inline int32_t* get_address_of_slotIndex_0() { return &___slotIndex_0; }
	inline void set_slotIndex_0(int32_t value)
	{
		___slotIndex_0 = value;
	}

	inline static int32_t get_offset_of_name_1() { return static_cast<int32_t>(offsetof(SkinKey_t375635E838ECDEB11B7C69698A0DECC8C37075E8, ___name_1)); }
	inline String_t* get_name_1() const { return ___name_1; }
	inline String_t** get_address_of_name_1() { return &___name_1; }
	inline void set_name_1(String_t* value)
	{
		___name_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___name_1), (void*)value);
	}

	inline static int32_t get_offset_of_hashCode_2() { return static_cast<int32_t>(offsetof(SkinKey_t375635E838ECDEB11B7C69698A0DECC8C37075E8, ___hashCode_2)); }
	inline int32_t get_hashCode_2() const { return ___hashCode_2; }
	inline int32_t* get_address_of_hashCode_2() { return &___hashCode_2; }
	inline void set_hashCode_2(int32_t value)
	{
		___hashCode_2 = value;
	}
};

// Native definition for P/Invoke marshalling of Spine.Skin/SkinKey
struct SkinKey_t375635E838ECDEB11B7C69698A0DECC8C37075E8_marshaled_pinvoke
{
	int32_t ___slotIndex_0;
	char* ___name_1;
	int32_t ___hashCode_2;
};
// Native definition for COM marshalling of Spine.Skin/SkinKey
struct SkinKey_t375635E838ECDEB11B7C69698A0DECC8C37075E8_marshaled_com
{
	int32_t ___slotIndex_0;
	Il2CppChar* ___name_1;
	int32_t ___hashCode_2;
};

// System.Reflection.BindingFlags
struct BindingFlags_tAAAB07D9AC588F0D55D844E51D7035E96DF94733 
{
public:
	// System.Int32 System.Reflection.BindingFlags::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(BindingFlags_tAAAB07D9AC588F0D55D844E51D7035E96DF94733, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Spine.CurveTimeline1
struct CurveTimeline1_tEB53273FC1D90C28D2A2357D4BF937251AE1E18C  : public CurveTimeline_t404E642BD4DFEEDB39DBCDC088B7F7E78FAE5476
{
public:

public:
};


// Spine.CurveTimeline2
struct CurveTimeline2_tFB55B7C974EAEFA2745C1F771B06A7A2334C4CF0  : public CurveTimeline_t404E642BD4DFEEDB39DBCDC088B7F7E78FAE5476
{
public:

public:
};


// System.Delegate
struct Delegate_t  : public RuntimeObject
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
	// System.IntPtr System.Delegate::extra_arg
	intptr_t ___extra_arg_5;
	// System.IntPtr System.Delegate::method_code
	intptr_t ___method_code_6;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t * ___method_info_7;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t * ___original_method_info_8;
	// System.DelegateData System.Delegate::data
	DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * ___data_9;
	// System.Boolean System.Delegate::method_is_virtual
	bool ___method_is_virtual_10;

public:
	inline static int32_t get_offset_of_method_ptr_0() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_ptr_0)); }
	inline Il2CppMethodPointer get_method_ptr_0() const { return ___method_ptr_0; }
	inline Il2CppMethodPointer* get_address_of_method_ptr_0() { return &___method_ptr_0; }
	inline void set_method_ptr_0(Il2CppMethodPointer value)
	{
		___method_ptr_0 = value;
	}

	inline static int32_t get_offset_of_invoke_impl_1() { return static_cast<int32_t>(offsetof(Delegate_t, ___invoke_impl_1)); }
	inline intptr_t get_invoke_impl_1() const { return ___invoke_impl_1; }
	inline intptr_t* get_address_of_invoke_impl_1() { return &___invoke_impl_1; }
	inline void set_invoke_impl_1(intptr_t value)
	{
		___invoke_impl_1 = value;
	}

	inline static int32_t get_offset_of_m_target_2() { return static_cast<int32_t>(offsetof(Delegate_t, ___m_target_2)); }
	inline RuntimeObject * get_m_target_2() const { return ___m_target_2; }
	inline RuntimeObject ** get_address_of_m_target_2() { return &___m_target_2; }
	inline void set_m_target_2(RuntimeObject * value)
	{
		___m_target_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_target_2), (void*)value);
	}

	inline static int32_t get_offset_of_method_3() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_3)); }
	inline intptr_t get_method_3() const { return ___method_3; }
	inline intptr_t* get_address_of_method_3() { return &___method_3; }
	inline void set_method_3(intptr_t value)
	{
		___method_3 = value;
	}

	inline static int32_t get_offset_of_delegate_trampoline_4() { return static_cast<int32_t>(offsetof(Delegate_t, ___delegate_trampoline_4)); }
	inline intptr_t get_delegate_trampoline_4() const { return ___delegate_trampoline_4; }
	inline intptr_t* get_address_of_delegate_trampoline_4() { return &___delegate_trampoline_4; }
	inline void set_delegate_trampoline_4(intptr_t value)
	{
		___delegate_trampoline_4 = value;
	}

	inline static int32_t get_offset_of_extra_arg_5() { return static_cast<int32_t>(offsetof(Delegate_t, ___extra_arg_5)); }
	inline intptr_t get_extra_arg_5() const { return ___extra_arg_5; }
	inline intptr_t* get_address_of_extra_arg_5() { return &___extra_arg_5; }
	inline void set_extra_arg_5(intptr_t value)
	{
		___extra_arg_5 = value;
	}

	inline static int32_t get_offset_of_method_code_6() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_code_6)); }
	inline intptr_t get_method_code_6() const { return ___method_code_6; }
	inline intptr_t* get_address_of_method_code_6() { return &___method_code_6; }
	inline void set_method_code_6(intptr_t value)
	{
		___method_code_6 = value;
	}

	inline static int32_t get_offset_of_method_info_7() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_info_7)); }
	inline MethodInfo_t * get_method_info_7() const { return ___method_info_7; }
	inline MethodInfo_t ** get_address_of_method_info_7() { return &___method_info_7; }
	inline void set_method_info_7(MethodInfo_t * value)
	{
		___method_info_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___method_info_7), (void*)value);
	}

	inline static int32_t get_offset_of_original_method_info_8() { return static_cast<int32_t>(offsetof(Delegate_t, ___original_method_info_8)); }
	inline MethodInfo_t * get_original_method_info_8() const { return ___original_method_info_8; }
	inline MethodInfo_t ** get_address_of_original_method_info_8() { return &___original_method_info_8; }
	inline void set_original_method_info_8(MethodInfo_t * value)
	{
		___original_method_info_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___original_method_info_8), (void*)value);
	}

	inline static int32_t get_offset_of_data_9() { return static_cast<int32_t>(offsetof(Delegate_t, ___data_9)); }
	inline DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * get_data_9() const { return ___data_9; }
	inline DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 ** get_address_of_data_9() { return &___data_9; }
	inline void set_data_9(DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * value)
	{
		___data_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___data_9), (void*)value);
	}

	inline static int32_t get_offset_of_method_is_virtual_10() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_is_virtual_10)); }
	inline bool get_method_is_virtual_10() const { return ___method_is_virtual_10; }
	inline bool* get_address_of_method_is_virtual_10() { return &___method_is_virtual_10; }
	inline void set_method_is_virtual_10(bool value)
	{
		___method_is_virtual_10 = value;
	}
};

// Native definition for P/Invoke marshalling of System.Delegate
struct Delegate_t_marshaled_pinvoke
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	MethodInfo_t * ___method_info_7;
	MethodInfo_t * ___original_method_info_8;
	DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * ___data_9;
	int32_t ___method_is_virtual_10;
};
// Native definition for COM marshalling of System.Delegate
struct Delegate_t_marshaled_com
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	MethodInfo_t * ___method_info_7;
	MethodInfo_t * ___original_method_info_8;
	DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * ___data_9;
	int32_t ___method_is_virtual_10;
};

// System.Exception
struct Exception_t  : public RuntimeObject
{
public:
	// System.String System.Exception::_className
	String_t* ____className_1;
	// System.String System.Exception::_message
	String_t* ____message_2;
	// System.Collections.IDictionary System.Exception::_data
	RuntimeObject* ____data_3;
	// System.Exception System.Exception::_innerException
	Exception_t * ____innerException_4;
	// System.String System.Exception::_helpURL
	String_t* ____helpURL_5;
	// System.Object System.Exception::_stackTrace
	RuntimeObject * ____stackTrace_6;
	// System.String System.Exception::_stackTraceString
	String_t* ____stackTraceString_7;
	// System.String System.Exception::_remoteStackTraceString
	String_t* ____remoteStackTraceString_8;
	// System.Int32 System.Exception::_remoteStackIndex
	int32_t ____remoteStackIndex_9;
	// System.Object System.Exception::_dynamicMethods
	RuntimeObject * ____dynamicMethods_10;
	// System.Int32 System.Exception::_HResult
	int32_t ____HResult_11;
	// System.String System.Exception::_source
	String_t* ____source_12;
	// System.Runtime.Serialization.SafeSerializationManager System.Exception::_safeSerializationManager
	SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * ____safeSerializationManager_13;
	// System.Diagnostics.StackTrace[] System.Exception::captured_traces
	StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* ___captured_traces_14;
	// System.IntPtr[] System.Exception::native_trace_ips
	IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6* ___native_trace_ips_15;

public:
	inline static int32_t get_offset_of__className_1() { return static_cast<int32_t>(offsetof(Exception_t, ____className_1)); }
	inline String_t* get__className_1() const { return ____className_1; }
	inline String_t** get_address_of__className_1() { return &____className_1; }
	inline void set__className_1(String_t* value)
	{
		____className_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____className_1), (void*)value);
	}

	inline static int32_t get_offset_of__message_2() { return static_cast<int32_t>(offsetof(Exception_t, ____message_2)); }
	inline String_t* get__message_2() const { return ____message_2; }
	inline String_t** get_address_of__message_2() { return &____message_2; }
	inline void set__message_2(String_t* value)
	{
		____message_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____message_2), (void*)value);
	}

	inline static int32_t get_offset_of__data_3() { return static_cast<int32_t>(offsetof(Exception_t, ____data_3)); }
	inline RuntimeObject* get__data_3() const { return ____data_3; }
	inline RuntimeObject** get_address_of__data_3() { return &____data_3; }
	inline void set__data_3(RuntimeObject* value)
	{
		____data_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____data_3), (void*)value);
	}

	inline static int32_t get_offset_of__innerException_4() { return static_cast<int32_t>(offsetof(Exception_t, ____innerException_4)); }
	inline Exception_t * get__innerException_4() const { return ____innerException_4; }
	inline Exception_t ** get_address_of__innerException_4() { return &____innerException_4; }
	inline void set__innerException_4(Exception_t * value)
	{
		____innerException_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____innerException_4), (void*)value);
	}

	inline static int32_t get_offset_of__helpURL_5() { return static_cast<int32_t>(offsetof(Exception_t, ____helpURL_5)); }
	inline String_t* get__helpURL_5() const { return ____helpURL_5; }
	inline String_t** get_address_of__helpURL_5() { return &____helpURL_5; }
	inline void set__helpURL_5(String_t* value)
	{
		____helpURL_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____helpURL_5), (void*)value);
	}

	inline static int32_t get_offset_of__stackTrace_6() { return static_cast<int32_t>(offsetof(Exception_t, ____stackTrace_6)); }
	inline RuntimeObject * get__stackTrace_6() const { return ____stackTrace_6; }
	inline RuntimeObject ** get_address_of__stackTrace_6() { return &____stackTrace_6; }
	inline void set__stackTrace_6(RuntimeObject * value)
	{
		____stackTrace_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____stackTrace_6), (void*)value);
	}

	inline static int32_t get_offset_of__stackTraceString_7() { return static_cast<int32_t>(offsetof(Exception_t, ____stackTraceString_7)); }
	inline String_t* get__stackTraceString_7() const { return ____stackTraceString_7; }
	inline String_t** get_address_of__stackTraceString_7() { return &____stackTraceString_7; }
	inline void set__stackTraceString_7(String_t* value)
	{
		____stackTraceString_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____stackTraceString_7), (void*)value);
	}

	inline static int32_t get_offset_of__remoteStackTraceString_8() { return static_cast<int32_t>(offsetof(Exception_t, ____remoteStackTraceString_8)); }
	inline String_t* get__remoteStackTraceString_8() const { return ____remoteStackTraceString_8; }
	inline String_t** get_address_of__remoteStackTraceString_8() { return &____remoteStackTraceString_8; }
	inline void set__remoteStackTraceString_8(String_t* value)
	{
		____remoteStackTraceString_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____remoteStackTraceString_8), (void*)value);
	}

	inline static int32_t get_offset_of__remoteStackIndex_9() { return static_cast<int32_t>(offsetof(Exception_t, ____remoteStackIndex_9)); }
	inline int32_t get__remoteStackIndex_9() const { return ____remoteStackIndex_9; }
	inline int32_t* get_address_of__remoteStackIndex_9() { return &____remoteStackIndex_9; }
	inline void set__remoteStackIndex_9(int32_t value)
	{
		____remoteStackIndex_9 = value;
	}

	inline static int32_t get_offset_of__dynamicMethods_10() { return static_cast<int32_t>(offsetof(Exception_t, ____dynamicMethods_10)); }
	inline RuntimeObject * get__dynamicMethods_10() const { return ____dynamicMethods_10; }
	inline RuntimeObject ** get_address_of__dynamicMethods_10() { return &____dynamicMethods_10; }
	inline void set__dynamicMethods_10(RuntimeObject * value)
	{
		____dynamicMethods_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____dynamicMethods_10), (void*)value);
	}

	inline static int32_t get_offset_of__HResult_11() { return static_cast<int32_t>(offsetof(Exception_t, ____HResult_11)); }
	inline int32_t get__HResult_11() const { return ____HResult_11; }
	inline int32_t* get_address_of__HResult_11() { return &____HResult_11; }
	inline void set__HResult_11(int32_t value)
	{
		____HResult_11 = value;
	}

	inline static int32_t get_offset_of__source_12() { return static_cast<int32_t>(offsetof(Exception_t, ____source_12)); }
	inline String_t* get__source_12() const { return ____source_12; }
	inline String_t** get_address_of__source_12() { return &____source_12; }
	inline void set__source_12(String_t* value)
	{
		____source_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____source_12), (void*)value);
	}

	inline static int32_t get_offset_of__safeSerializationManager_13() { return static_cast<int32_t>(offsetof(Exception_t, ____safeSerializationManager_13)); }
	inline SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * get__safeSerializationManager_13() const { return ____safeSerializationManager_13; }
	inline SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F ** get_address_of__safeSerializationManager_13() { return &____safeSerializationManager_13; }
	inline void set__safeSerializationManager_13(SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * value)
	{
		____safeSerializationManager_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____safeSerializationManager_13), (void*)value);
	}

	inline static int32_t get_offset_of_captured_traces_14() { return static_cast<int32_t>(offsetof(Exception_t, ___captured_traces_14)); }
	inline StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* get_captured_traces_14() const { return ___captured_traces_14; }
	inline StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971** get_address_of_captured_traces_14() { return &___captured_traces_14; }
	inline void set_captured_traces_14(StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* value)
	{
		___captured_traces_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___captured_traces_14), (void*)value);
	}

	inline static int32_t get_offset_of_native_trace_ips_15() { return static_cast<int32_t>(offsetof(Exception_t, ___native_trace_ips_15)); }
	inline IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6* get_native_trace_ips_15() const { return ___native_trace_ips_15; }
	inline IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6** get_address_of_native_trace_ips_15() { return &___native_trace_ips_15; }
	inline void set_native_trace_ips_15(IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6* value)
	{
		___native_trace_ips_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___native_trace_ips_15), (void*)value);
	}
};

struct Exception_t_StaticFields
{
public:
	// System.Object System.Exception::s_EDILock
	RuntimeObject * ___s_EDILock_0;

public:
	inline static int32_t get_offset_of_s_EDILock_0() { return static_cast<int32_t>(offsetof(Exception_t_StaticFields, ___s_EDILock_0)); }
	inline RuntimeObject * get_s_EDILock_0() const { return ___s_EDILock_0; }
	inline RuntimeObject ** get_address_of_s_EDILock_0() { return &___s_EDILock_0; }
	inline void set_s_EDILock_0(RuntimeObject * value)
	{
		___s_EDILock_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_EDILock_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Exception
struct Exception_t_marshaled_pinvoke
{
	char* ____className_1;
	char* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_pinvoke* ____innerException_4;
	char* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	char* ____stackTraceString_7;
	char* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	char* ____source_12;
	SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * ____safeSerializationManager_13;
	StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
};
// Native definition for COM marshalling of System.Exception
struct Exception_t_marshaled_com
{
	Il2CppChar* ____className_1;
	Il2CppChar* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_com* ____innerException_4;
	Il2CppChar* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	Il2CppChar* ____stackTraceString_7;
	Il2CppChar* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	Il2CppChar* ____source_12;
	SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * ____safeSerializationManager_13;
	StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
};

// Spine.Format
struct Format_t8F8D5883A235562BAA8B3B43ABA6A4FDE251B476 
{
public:
	// System.Int32 Spine.Format::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Format_t8F8D5883A235562BAA8B3B43ABA6A4FDE251B476, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Spine.MeshAttachment
struct MeshAttachment_t928FE10280A3D4F1648B7D18B42C04515C08F990  : public VertexAttachment_t9CE5B53FEDF378FFCADECD92F0ABF5F1DFDFFF36
{
public:
	// System.Single Spine.MeshAttachment::regionOffsetX
	float ___regionOffsetX_8;
	// System.Single Spine.MeshAttachment::regionOffsetY
	float ___regionOffsetY_9;
	// System.Single Spine.MeshAttachment::regionWidth
	float ___regionWidth_10;
	// System.Single Spine.MeshAttachment::regionHeight
	float ___regionHeight_11;
	// System.Single Spine.MeshAttachment::regionOriginalWidth
	float ___regionOriginalWidth_12;
	// System.Single Spine.MeshAttachment::regionOriginalHeight
	float ___regionOriginalHeight_13;
	// Spine.MeshAttachment Spine.MeshAttachment::parentMesh
	MeshAttachment_t928FE10280A3D4F1648B7D18B42C04515C08F990 * ___parentMesh_14;
	// System.Single[] Spine.MeshAttachment::uvs
	SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* ___uvs_15;
	// System.Single[] Spine.MeshAttachment::regionUVs
	SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* ___regionUVs_16;
	// System.Int32[] Spine.MeshAttachment::triangles
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___triangles_17;
	// System.Single Spine.MeshAttachment::r
	float ___r_18;
	// System.Single Spine.MeshAttachment::g
	float ___g_19;
	// System.Single Spine.MeshAttachment::b
	float ___b_20;
	// System.Single Spine.MeshAttachment::a
	float ___a_21;
	// System.Int32 Spine.MeshAttachment::hulllength
	int32_t ___hulllength_22;
	// System.String Spine.MeshAttachment::<Path>k__BackingField
	String_t* ___U3CPathU3Ek__BackingField_23;
	// System.Object Spine.MeshAttachment::<RendererObject>k__BackingField
	RuntimeObject * ___U3CRendererObjectU3Ek__BackingField_24;
	// System.Single Spine.MeshAttachment::<RegionU>k__BackingField
	float ___U3CRegionUU3Ek__BackingField_25;
	// System.Single Spine.MeshAttachment::<RegionV>k__BackingField
	float ___U3CRegionVU3Ek__BackingField_26;
	// System.Single Spine.MeshAttachment::<RegionU2>k__BackingField
	float ___U3CRegionU2U3Ek__BackingField_27;
	// System.Single Spine.MeshAttachment::<RegionV2>k__BackingField
	float ___U3CRegionV2U3Ek__BackingField_28;
	// System.Int32 Spine.MeshAttachment::<RegionDegrees>k__BackingField
	int32_t ___U3CRegionDegreesU3Ek__BackingField_29;
	// System.Int32[] Spine.MeshAttachment::<Edges>k__BackingField
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___U3CEdgesU3Ek__BackingField_30;
	// System.Single Spine.MeshAttachment::<Width>k__BackingField
	float ___U3CWidthU3Ek__BackingField_31;
	// System.Single Spine.MeshAttachment::<Height>k__BackingField
	float ___U3CHeightU3Ek__BackingField_32;

public:
	inline static int32_t get_offset_of_regionOffsetX_8() { return static_cast<int32_t>(offsetof(MeshAttachment_t928FE10280A3D4F1648B7D18B42C04515C08F990, ___regionOffsetX_8)); }
	inline float get_regionOffsetX_8() const { return ___regionOffsetX_8; }
	inline float* get_address_of_regionOffsetX_8() { return &___regionOffsetX_8; }
	inline void set_regionOffsetX_8(float value)
	{
		___regionOffsetX_8 = value;
	}

	inline static int32_t get_offset_of_regionOffsetY_9() { return static_cast<int32_t>(offsetof(MeshAttachment_t928FE10280A3D4F1648B7D18B42C04515C08F990, ___regionOffsetY_9)); }
	inline float get_regionOffsetY_9() const { return ___regionOffsetY_9; }
	inline float* get_address_of_regionOffsetY_9() { return &___regionOffsetY_9; }
	inline void set_regionOffsetY_9(float value)
	{
		___regionOffsetY_9 = value;
	}

	inline static int32_t get_offset_of_regionWidth_10() { return static_cast<int32_t>(offsetof(MeshAttachment_t928FE10280A3D4F1648B7D18B42C04515C08F990, ___regionWidth_10)); }
	inline float get_regionWidth_10() const { return ___regionWidth_10; }
	inline float* get_address_of_regionWidth_10() { return &___regionWidth_10; }
	inline void set_regionWidth_10(float value)
	{
		___regionWidth_10 = value;
	}

	inline static int32_t get_offset_of_regionHeight_11() { return static_cast<int32_t>(offsetof(MeshAttachment_t928FE10280A3D4F1648B7D18B42C04515C08F990, ___regionHeight_11)); }
	inline float get_regionHeight_11() const { return ___regionHeight_11; }
	inline float* get_address_of_regionHeight_11() { return &___regionHeight_11; }
	inline void set_regionHeight_11(float value)
	{
		___regionHeight_11 = value;
	}

	inline static int32_t get_offset_of_regionOriginalWidth_12() { return static_cast<int32_t>(offsetof(MeshAttachment_t928FE10280A3D4F1648B7D18B42C04515C08F990, ___regionOriginalWidth_12)); }
	inline float get_regionOriginalWidth_12() const { return ___regionOriginalWidth_12; }
	inline float* get_address_of_regionOriginalWidth_12() { return &___regionOriginalWidth_12; }
	inline void set_regionOriginalWidth_12(float value)
	{
		___regionOriginalWidth_12 = value;
	}

	inline static int32_t get_offset_of_regionOriginalHeight_13() { return static_cast<int32_t>(offsetof(MeshAttachment_t928FE10280A3D4F1648B7D18B42C04515C08F990, ___regionOriginalHeight_13)); }
	inline float get_regionOriginalHeight_13() const { return ___regionOriginalHeight_13; }
	inline float* get_address_of_regionOriginalHeight_13() { return &___regionOriginalHeight_13; }
	inline void set_regionOriginalHeight_13(float value)
	{
		___regionOriginalHeight_13 = value;
	}

	inline static int32_t get_offset_of_parentMesh_14() { return static_cast<int32_t>(offsetof(MeshAttachment_t928FE10280A3D4F1648B7D18B42C04515C08F990, ___parentMesh_14)); }
	inline MeshAttachment_t928FE10280A3D4F1648B7D18B42C04515C08F990 * get_parentMesh_14() const { return ___parentMesh_14; }
	inline MeshAttachment_t928FE10280A3D4F1648B7D18B42C04515C08F990 ** get_address_of_parentMesh_14() { return &___parentMesh_14; }
	inline void set_parentMesh_14(MeshAttachment_t928FE10280A3D4F1648B7D18B42C04515C08F990 * value)
	{
		___parentMesh_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___parentMesh_14), (void*)value);
	}

	inline static int32_t get_offset_of_uvs_15() { return static_cast<int32_t>(offsetof(MeshAttachment_t928FE10280A3D4F1648B7D18B42C04515C08F990, ___uvs_15)); }
	inline SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* get_uvs_15() const { return ___uvs_15; }
	inline SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA** get_address_of_uvs_15() { return &___uvs_15; }
	inline void set_uvs_15(SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* value)
	{
		___uvs_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___uvs_15), (void*)value);
	}

	inline static int32_t get_offset_of_regionUVs_16() { return static_cast<int32_t>(offsetof(MeshAttachment_t928FE10280A3D4F1648B7D18B42C04515C08F990, ___regionUVs_16)); }
	inline SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* get_regionUVs_16() const { return ___regionUVs_16; }
	inline SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA** get_address_of_regionUVs_16() { return &___regionUVs_16; }
	inline void set_regionUVs_16(SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* value)
	{
		___regionUVs_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___regionUVs_16), (void*)value);
	}

	inline static int32_t get_offset_of_triangles_17() { return static_cast<int32_t>(offsetof(MeshAttachment_t928FE10280A3D4F1648B7D18B42C04515C08F990, ___triangles_17)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_triangles_17() const { return ___triangles_17; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_triangles_17() { return &___triangles_17; }
	inline void set_triangles_17(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___triangles_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___triangles_17), (void*)value);
	}

	inline static int32_t get_offset_of_r_18() { return static_cast<int32_t>(offsetof(MeshAttachment_t928FE10280A3D4F1648B7D18B42C04515C08F990, ___r_18)); }
	inline float get_r_18() const { return ___r_18; }
	inline float* get_address_of_r_18() { return &___r_18; }
	inline void set_r_18(float value)
	{
		___r_18 = value;
	}

	inline static int32_t get_offset_of_g_19() { return static_cast<int32_t>(offsetof(MeshAttachment_t928FE10280A3D4F1648B7D18B42C04515C08F990, ___g_19)); }
	inline float get_g_19() const { return ___g_19; }
	inline float* get_address_of_g_19() { return &___g_19; }
	inline void set_g_19(float value)
	{
		___g_19 = value;
	}

	inline static int32_t get_offset_of_b_20() { return static_cast<int32_t>(offsetof(MeshAttachment_t928FE10280A3D4F1648B7D18B42C04515C08F990, ___b_20)); }
	inline float get_b_20() const { return ___b_20; }
	inline float* get_address_of_b_20() { return &___b_20; }
	inline void set_b_20(float value)
	{
		___b_20 = value;
	}

	inline static int32_t get_offset_of_a_21() { return static_cast<int32_t>(offsetof(MeshAttachment_t928FE10280A3D4F1648B7D18B42C04515C08F990, ___a_21)); }
	inline float get_a_21() const { return ___a_21; }
	inline float* get_address_of_a_21() { return &___a_21; }
	inline void set_a_21(float value)
	{
		___a_21 = value;
	}

	inline static int32_t get_offset_of_hulllength_22() { return static_cast<int32_t>(offsetof(MeshAttachment_t928FE10280A3D4F1648B7D18B42C04515C08F990, ___hulllength_22)); }
	inline int32_t get_hulllength_22() const { return ___hulllength_22; }
	inline int32_t* get_address_of_hulllength_22() { return &___hulllength_22; }
	inline void set_hulllength_22(int32_t value)
	{
		___hulllength_22 = value;
	}

	inline static int32_t get_offset_of_U3CPathU3Ek__BackingField_23() { return static_cast<int32_t>(offsetof(MeshAttachment_t928FE10280A3D4F1648B7D18B42C04515C08F990, ___U3CPathU3Ek__BackingField_23)); }
	inline String_t* get_U3CPathU3Ek__BackingField_23() const { return ___U3CPathU3Ek__BackingField_23; }
	inline String_t** get_address_of_U3CPathU3Ek__BackingField_23() { return &___U3CPathU3Ek__BackingField_23; }
	inline void set_U3CPathU3Ek__BackingField_23(String_t* value)
	{
		___U3CPathU3Ek__BackingField_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CPathU3Ek__BackingField_23), (void*)value);
	}

	inline static int32_t get_offset_of_U3CRendererObjectU3Ek__BackingField_24() { return static_cast<int32_t>(offsetof(MeshAttachment_t928FE10280A3D4F1648B7D18B42C04515C08F990, ___U3CRendererObjectU3Ek__BackingField_24)); }
	inline RuntimeObject * get_U3CRendererObjectU3Ek__BackingField_24() const { return ___U3CRendererObjectU3Ek__BackingField_24; }
	inline RuntimeObject ** get_address_of_U3CRendererObjectU3Ek__BackingField_24() { return &___U3CRendererObjectU3Ek__BackingField_24; }
	inline void set_U3CRendererObjectU3Ek__BackingField_24(RuntimeObject * value)
	{
		___U3CRendererObjectU3Ek__BackingField_24 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CRendererObjectU3Ek__BackingField_24), (void*)value);
	}

	inline static int32_t get_offset_of_U3CRegionUU3Ek__BackingField_25() { return static_cast<int32_t>(offsetof(MeshAttachment_t928FE10280A3D4F1648B7D18B42C04515C08F990, ___U3CRegionUU3Ek__BackingField_25)); }
	inline float get_U3CRegionUU3Ek__BackingField_25() const { return ___U3CRegionUU3Ek__BackingField_25; }
	inline float* get_address_of_U3CRegionUU3Ek__BackingField_25() { return &___U3CRegionUU3Ek__BackingField_25; }
	inline void set_U3CRegionUU3Ek__BackingField_25(float value)
	{
		___U3CRegionUU3Ek__BackingField_25 = value;
	}

	inline static int32_t get_offset_of_U3CRegionVU3Ek__BackingField_26() { return static_cast<int32_t>(offsetof(MeshAttachment_t928FE10280A3D4F1648B7D18B42C04515C08F990, ___U3CRegionVU3Ek__BackingField_26)); }
	inline float get_U3CRegionVU3Ek__BackingField_26() const { return ___U3CRegionVU3Ek__BackingField_26; }
	inline float* get_address_of_U3CRegionVU3Ek__BackingField_26() { return &___U3CRegionVU3Ek__BackingField_26; }
	inline void set_U3CRegionVU3Ek__BackingField_26(float value)
	{
		___U3CRegionVU3Ek__BackingField_26 = value;
	}

	inline static int32_t get_offset_of_U3CRegionU2U3Ek__BackingField_27() { return static_cast<int32_t>(offsetof(MeshAttachment_t928FE10280A3D4F1648B7D18B42C04515C08F990, ___U3CRegionU2U3Ek__BackingField_27)); }
	inline float get_U3CRegionU2U3Ek__BackingField_27() const { return ___U3CRegionU2U3Ek__BackingField_27; }
	inline float* get_address_of_U3CRegionU2U3Ek__BackingField_27() { return &___U3CRegionU2U3Ek__BackingField_27; }
	inline void set_U3CRegionU2U3Ek__BackingField_27(float value)
	{
		___U3CRegionU2U3Ek__BackingField_27 = value;
	}

	inline static int32_t get_offset_of_U3CRegionV2U3Ek__BackingField_28() { return static_cast<int32_t>(offsetof(MeshAttachment_t928FE10280A3D4F1648B7D18B42C04515C08F990, ___U3CRegionV2U3Ek__BackingField_28)); }
	inline float get_U3CRegionV2U3Ek__BackingField_28() const { return ___U3CRegionV2U3Ek__BackingField_28; }
	inline float* get_address_of_U3CRegionV2U3Ek__BackingField_28() { return &___U3CRegionV2U3Ek__BackingField_28; }
	inline void set_U3CRegionV2U3Ek__BackingField_28(float value)
	{
		___U3CRegionV2U3Ek__BackingField_28 = value;
	}

	inline static int32_t get_offset_of_U3CRegionDegreesU3Ek__BackingField_29() { return static_cast<int32_t>(offsetof(MeshAttachment_t928FE10280A3D4F1648B7D18B42C04515C08F990, ___U3CRegionDegreesU3Ek__BackingField_29)); }
	inline int32_t get_U3CRegionDegreesU3Ek__BackingField_29() const { return ___U3CRegionDegreesU3Ek__BackingField_29; }
	inline int32_t* get_address_of_U3CRegionDegreesU3Ek__BackingField_29() { return &___U3CRegionDegreesU3Ek__BackingField_29; }
	inline void set_U3CRegionDegreesU3Ek__BackingField_29(int32_t value)
	{
		___U3CRegionDegreesU3Ek__BackingField_29 = value;
	}

	inline static int32_t get_offset_of_U3CEdgesU3Ek__BackingField_30() { return static_cast<int32_t>(offsetof(MeshAttachment_t928FE10280A3D4F1648B7D18B42C04515C08F990, ___U3CEdgesU3Ek__BackingField_30)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_U3CEdgesU3Ek__BackingField_30() const { return ___U3CEdgesU3Ek__BackingField_30; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_U3CEdgesU3Ek__BackingField_30() { return &___U3CEdgesU3Ek__BackingField_30; }
	inline void set_U3CEdgesU3Ek__BackingField_30(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___U3CEdgesU3Ek__BackingField_30 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CEdgesU3Ek__BackingField_30), (void*)value);
	}

	inline static int32_t get_offset_of_U3CWidthU3Ek__BackingField_31() { return static_cast<int32_t>(offsetof(MeshAttachment_t928FE10280A3D4F1648B7D18B42C04515C08F990, ___U3CWidthU3Ek__BackingField_31)); }
	inline float get_U3CWidthU3Ek__BackingField_31() const { return ___U3CWidthU3Ek__BackingField_31; }
	inline float* get_address_of_U3CWidthU3Ek__BackingField_31() { return &___U3CWidthU3Ek__BackingField_31; }
	inline void set_U3CWidthU3Ek__BackingField_31(float value)
	{
		___U3CWidthU3Ek__BackingField_31 = value;
	}

	inline static int32_t get_offset_of_U3CHeightU3Ek__BackingField_32() { return static_cast<int32_t>(offsetof(MeshAttachment_t928FE10280A3D4F1648B7D18B42C04515C08F990, ___U3CHeightU3Ek__BackingField_32)); }
	inline float get_U3CHeightU3Ek__BackingField_32() const { return ___U3CHeightU3Ek__BackingField_32; }
	inline float* get_address_of_U3CHeightU3Ek__BackingField_32() { return &___U3CHeightU3Ek__BackingField_32; }
	inline void set_U3CHeightU3Ek__BackingField_32(float value)
	{
		___U3CHeightU3Ek__BackingField_32 = value;
	}
};


// Spine.MixBlend
struct MixBlend_t28E5B5DF544AD1D5BF4CB8B5DE4CFE06E1E088D4 
{
public:
	// System.Int32 Spine.MixBlend::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(MixBlend_t28E5B5DF544AD1D5BF4CB8B5DE4CFE06E1E088D4, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Spine.MixDirection
struct MixDirection_t8E8EE4CEE54214C559CE77C69FC659EA36193D0F 
{
public:
	// System.Int32 Spine.MixDirection::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(MixDirection_t8E8EE4CEE54214C559CE77C69FC659EA36193D0F, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.RuntimeTypeHandle
struct RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 
{
public:
	// System.IntPtr System.RuntimeTypeHandle::value
	intptr_t ___value_0;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9, ___value_0)); }
	inline intptr_t get_value_0() const { return ___value_0; }
	inline intptr_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(intptr_t value)
	{
		___value_0 = value;
	}
};


// System.StringComparison
struct StringComparison_tCC9F72B9B1E2C3C6D2566DD0D3A61E1621048998 
{
public:
	// System.Int32 System.StringComparison::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(StringComparison_tCC9F72B9B1E2C3C6D2566DD0D3A61E1621048998, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Spine.TextureFilter
struct TextureFilter_t3692D7DCDF68DB64AE7D5A1BEF324F2ACFEC1B07 
{
public:
	// System.Int32 Spine.TextureFilter::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TextureFilter_t3692D7DCDF68DB64AE7D5A1BEF324F2ACFEC1B07, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Spine.TextureWrap
struct TextureWrap_t581284225E734420BB341ACF572C0847869B84DC 
{
public:
	// System.Int32 Spine.TextureWrap::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TextureWrap_t581284225E734420BB341ACF572C0847869B84DC, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Spine.TransformConstraintTimeline
struct TransformConstraintTimeline_t72B4878905815289D7452FEE045C902E2CDEA6B1  : public CurveTimeline_t404E642BD4DFEEDB39DBCDC088B7F7E78FAE5476
{
public:
	// System.Int32 Spine.TransformConstraintTimeline::transformConstraintIndex
	int32_t ___transformConstraintIndex_14;

public:
	inline static int32_t get_offset_of_transformConstraintIndex_14() { return static_cast<int32_t>(offsetof(TransformConstraintTimeline_t72B4878905815289D7452FEE045C902E2CDEA6B1, ___transformConstraintIndex_14)); }
	inline int32_t get_transformConstraintIndex_14() const { return ___transformConstraintIndex_14; }
	inline int32_t* get_address_of_transformConstraintIndex_14() { return &___transformConstraintIndex_14; }
	inline void set_transformConstraintIndex_14(int32_t value)
	{
		___transformConstraintIndex_14 = value;
	}
};


// Spine.TransformMode
struct TransformMode_tBEB67F6A155D0D6CBEF8804197EBEA4DD0F343BA 
{
public:
	// System.Int32 Spine.TransformMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TransformMode_tBEB67F6A155D0D6CBEF8804197EBEA4DD0F343BA, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Spine.EventQueue/EventType
struct EventType_t5B2FA95F8AB7D64FAE72624DCA9628F07A8C5A6B 
{
public:
	// System.Int32 Spine.EventQueue/EventType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(EventType_t5B2FA95F8AB7D64FAE72624DCA9628F07A8C5A6B, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// SharpJson.Lexer/Token
struct Token_t729CF036B16F00E5FC4679596F96885FDC6F4252 
{
public:
	// System.Int32 SharpJson.Lexer/Token::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Token_t729CF036B16F00E5FC4679596F96885FDC6F4252, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Spine.AtlasPage
struct AtlasPage_t8A12ACC89F843E7F1869ADA9D82221D8298850F6  : public RuntimeObject
{
public:
	// System.String Spine.AtlasPage::name
	String_t* ___name_0;
	// System.Int32 Spine.AtlasPage::width
	int32_t ___width_1;
	// System.Int32 Spine.AtlasPage::height
	int32_t ___height_2;
	// Spine.Format Spine.AtlasPage::format
	int32_t ___format_3;
	// Spine.TextureFilter Spine.AtlasPage::minFilter
	int32_t ___minFilter_4;
	// Spine.TextureFilter Spine.AtlasPage::magFilter
	int32_t ___magFilter_5;
	// Spine.TextureWrap Spine.AtlasPage::uWrap
	int32_t ___uWrap_6;
	// Spine.TextureWrap Spine.AtlasPage::vWrap
	int32_t ___vWrap_7;
	// System.Boolean Spine.AtlasPage::pma
	bool ___pma_8;
	// System.Object Spine.AtlasPage::rendererObject
	RuntimeObject * ___rendererObject_9;

public:
	inline static int32_t get_offset_of_name_0() { return static_cast<int32_t>(offsetof(AtlasPage_t8A12ACC89F843E7F1869ADA9D82221D8298850F6, ___name_0)); }
	inline String_t* get_name_0() const { return ___name_0; }
	inline String_t** get_address_of_name_0() { return &___name_0; }
	inline void set_name_0(String_t* value)
	{
		___name_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___name_0), (void*)value);
	}

	inline static int32_t get_offset_of_width_1() { return static_cast<int32_t>(offsetof(AtlasPage_t8A12ACC89F843E7F1869ADA9D82221D8298850F6, ___width_1)); }
	inline int32_t get_width_1() const { return ___width_1; }
	inline int32_t* get_address_of_width_1() { return &___width_1; }
	inline void set_width_1(int32_t value)
	{
		___width_1 = value;
	}

	inline static int32_t get_offset_of_height_2() { return static_cast<int32_t>(offsetof(AtlasPage_t8A12ACC89F843E7F1869ADA9D82221D8298850F6, ___height_2)); }
	inline int32_t get_height_2() const { return ___height_2; }
	inline int32_t* get_address_of_height_2() { return &___height_2; }
	inline void set_height_2(int32_t value)
	{
		___height_2 = value;
	}

	inline static int32_t get_offset_of_format_3() { return static_cast<int32_t>(offsetof(AtlasPage_t8A12ACC89F843E7F1869ADA9D82221D8298850F6, ___format_3)); }
	inline int32_t get_format_3() const { return ___format_3; }
	inline int32_t* get_address_of_format_3() { return &___format_3; }
	inline void set_format_3(int32_t value)
	{
		___format_3 = value;
	}

	inline static int32_t get_offset_of_minFilter_4() { return static_cast<int32_t>(offsetof(AtlasPage_t8A12ACC89F843E7F1869ADA9D82221D8298850F6, ___minFilter_4)); }
	inline int32_t get_minFilter_4() const { return ___minFilter_4; }
	inline int32_t* get_address_of_minFilter_4() { return &___minFilter_4; }
	inline void set_minFilter_4(int32_t value)
	{
		___minFilter_4 = value;
	}

	inline static int32_t get_offset_of_magFilter_5() { return static_cast<int32_t>(offsetof(AtlasPage_t8A12ACC89F843E7F1869ADA9D82221D8298850F6, ___magFilter_5)); }
	inline int32_t get_magFilter_5() const { return ___magFilter_5; }
	inline int32_t* get_address_of_magFilter_5() { return &___magFilter_5; }
	inline void set_magFilter_5(int32_t value)
	{
		___magFilter_5 = value;
	}

	inline static int32_t get_offset_of_uWrap_6() { return static_cast<int32_t>(offsetof(AtlasPage_t8A12ACC89F843E7F1869ADA9D82221D8298850F6, ___uWrap_6)); }
	inline int32_t get_uWrap_6() const { return ___uWrap_6; }
	inline int32_t* get_address_of_uWrap_6() { return &___uWrap_6; }
	inline void set_uWrap_6(int32_t value)
	{
		___uWrap_6 = value;
	}

	inline static int32_t get_offset_of_vWrap_7() { return static_cast<int32_t>(offsetof(AtlasPage_t8A12ACC89F843E7F1869ADA9D82221D8298850F6, ___vWrap_7)); }
	inline int32_t get_vWrap_7() const { return ___vWrap_7; }
	inline int32_t* get_address_of_vWrap_7() { return &___vWrap_7; }
	inline void set_vWrap_7(int32_t value)
	{
		___vWrap_7 = value;
	}

	inline static int32_t get_offset_of_pma_8() { return static_cast<int32_t>(offsetof(AtlasPage_t8A12ACC89F843E7F1869ADA9D82221D8298850F6, ___pma_8)); }
	inline bool get_pma_8() const { return ___pma_8; }
	inline bool* get_address_of_pma_8() { return &___pma_8; }
	inline void set_pma_8(bool value)
	{
		___pma_8 = value;
	}

	inline static int32_t get_offset_of_rendererObject_9() { return static_cast<int32_t>(offsetof(AtlasPage_t8A12ACC89F843E7F1869ADA9D82221D8298850F6, ___rendererObject_9)); }
	inline RuntimeObject * get_rendererObject_9() const { return ___rendererObject_9; }
	inline RuntimeObject ** get_address_of_rendererObject_9() { return &___rendererObject_9; }
	inline void set_rendererObject_9(RuntimeObject * value)
	{
		___rendererObject_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___rendererObject_9), (void*)value);
	}
};


// Spine.BoneData
struct BoneData_t48A671E6818E76905840CC122A96889DDCB92A51  : public RuntimeObject
{
public:
	// System.Int32 Spine.BoneData::index
	int32_t ___index_0;
	// System.String Spine.BoneData::name
	String_t* ___name_1;
	// Spine.BoneData Spine.BoneData::parent
	BoneData_t48A671E6818E76905840CC122A96889DDCB92A51 * ___parent_2;
	// System.Single Spine.BoneData::length
	float ___length_3;
	// System.Single Spine.BoneData::x
	float ___x_4;
	// System.Single Spine.BoneData::y
	float ___y_5;
	// System.Single Spine.BoneData::rotation
	float ___rotation_6;
	// System.Single Spine.BoneData::scaleX
	float ___scaleX_7;
	// System.Single Spine.BoneData::scaleY
	float ___scaleY_8;
	// System.Single Spine.BoneData::shearX
	float ___shearX_9;
	// System.Single Spine.BoneData::shearY
	float ___shearY_10;
	// Spine.TransformMode Spine.BoneData::transformMode
	int32_t ___transformMode_11;
	// System.Boolean Spine.BoneData::skinRequired
	bool ___skinRequired_12;

public:
	inline static int32_t get_offset_of_index_0() { return static_cast<int32_t>(offsetof(BoneData_t48A671E6818E76905840CC122A96889DDCB92A51, ___index_0)); }
	inline int32_t get_index_0() const { return ___index_0; }
	inline int32_t* get_address_of_index_0() { return &___index_0; }
	inline void set_index_0(int32_t value)
	{
		___index_0 = value;
	}

	inline static int32_t get_offset_of_name_1() { return static_cast<int32_t>(offsetof(BoneData_t48A671E6818E76905840CC122A96889DDCB92A51, ___name_1)); }
	inline String_t* get_name_1() const { return ___name_1; }
	inline String_t** get_address_of_name_1() { return &___name_1; }
	inline void set_name_1(String_t* value)
	{
		___name_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___name_1), (void*)value);
	}

	inline static int32_t get_offset_of_parent_2() { return static_cast<int32_t>(offsetof(BoneData_t48A671E6818E76905840CC122A96889DDCB92A51, ___parent_2)); }
	inline BoneData_t48A671E6818E76905840CC122A96889DDCB92A51 * get_parent_2() const { return ___parent_2; }
	inline BoneData_t48A671E6818E76905840CC122A96889DDCB92A51 ** get_address_of_parent_2() { return &___parent_2; }
	inline void set_parent_2(BoneData_t48A671E6818E76905840CC122A96889DDCB92A51 * value)
	{
		___parent_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___parent_2), (void*)value);
	}

	inline static int32_t get_offset_of_length_3() { return static_cast<int32_t>(offsetof(BoneData_t48A671E6818E76905840CC122A96889DDCB92A51, ___length_3)); }
	inline float get_length_3() const { return ___length_3; }
	inline float* get_address_of_length_3() { return &___length_3; }
	inline void set_length_3(float value)
	{
		___length_3 = value;
	}

	inline static int32_t get_offset_of_x_4() { return static_cast<int32_t>(offsetof(BoneData_t48A671E6818E76905840CC122A96889DDCB92A51, ___x_4)); }
	inline float get_x_4() const { return ___x_4; }
	inline float* get_address_of_x_4() { return &___x_4; }
	inline void set_x_4(float value)
	{
		___x_4 = value;
	}

	inline static int32_t get_offset_of_y_5() { return static_cast<int32_t>(offsetof(BoneData_t48A671E6818E76905840CC122A96889DDCB92A51, ___y_5)); }
	inline float get_y_5() const { return ___y_5; }
	inline float* get_address_of_y_5() { return &___y_5; }
	inline void set_y_5(float value)
	{
		___y_5 = value;
	}

	inline static int32_t get_offset_of_rotation_6() { return static_cast<int32_t>(offsetof(BoneData_t48A671E6818E76905840CC122A96889DDCB92A51, ___rotation_6)); }
	inline float get_rotation_6() const { return ___rotation_6; }
	inline float* get_address_of_rotation_6() { return &___rotation_6; }
	inline void set_rotation_6(float value)
	{
		___rotation_6 = value;
	}

	inline static int32_t get_offset_of_scaleX_7() { return static_cast<int32_t>(offsetof(BoneData_t48A671E6818E76905840CC122A96889DDCB92A51, ___scaleX_7)); }
	inline float get_scaleX_7() const { return ___scaleX_7; }
	inline float* get_address_of_scaleX_7() { return &___scaleX_7; }
	inline void set_scaleX_7(float value)
	{
		___scaleX_7 = value;
	}

	inline static int32_t get_offset_of_scaleY_8() { return static_cast<int32_t>(offsetof(BoneData_t48A671E6818E76905840CC122A96889DDCB92A51, ___scaleY_8)); }
	inline float get_scaleY_8() const { return ___scaleY_8; }
	inline float* get_address_of_scaleY_8() { return &___scaleY_8; }
	inline void set_scaleY_8(float value)
	{
		___scaleY_8 = value;
	}

	inline static int32_t get_offset_of_shearX_9() { return static_cast<int32_t>(offsetof(BoneData_t48A671E6818E76905840CC122A96889DDCB92A51, ___shearX_9)); }
	inline float get_shearX_9() const { return ___shearX_9; }
	inline float* get_address_of_shearX_9() { return &___shearX_9; }
	inline void set_shearX_9(float value)
	{
		___shearX_9 = value;
	}

	inline static int32_t get_offset_of_shearY_10() { return static_cast<int32_t>(offsetof(BoneData_t48A671E6818E76905840CC122A96889DDCB92A51, ___shearY_10)); }
	inline float get_shearY_10() const { return ___shearY_10; }
	inline float* get_address_of_shearY_10() { return &___shearY_10; }
	inline void set_shearY_10(float value)
	{
		___shearY_10 = value;
	}

	inline static int32_t get_offset_of_transformMode_11() { return static_cast<int32_t>(offsetof(BoneData_t48A671E6818E76905840CC122A96889DDCB92A51, ___transformMode_11)); }
	inline int32_t get_transformMode_11() const { return ___transformMode_11; }
	inline int32_t* get_address_of_transformMode_11() { return &___transformMode_11; }
	inline void set_transformMode_11(int32_t value)
	{
		___transformMode_11 = value;
	}

	inline static int32_t get_offset_of_skinRequired_12() { return static_cast<int32_t>(offsetof(BoneData_t48A671E6818E76905840CC122A96889DDCB92A51, ___skinRequired_12)); }
	inline bool get_skinRequired_12() const { return ___skinRequired_12; }
	inline bool* get_address_of_skinRequired_12() { return &___skinRequired_12; }
	inline void set_skinRequired_12(bool value)
	{
		___skinRequired_12 = value;
	}
};


// System.MulticastDelegate
struct MulticastDelegate_t  : public Delegate_t
{
public:
	// System.Delegate[] System.MulticastDelegate::delegates
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* ___delegates_11;

public:
	inline static int32_t get_offset_of_delegates_11() { return static_cast<int32_t>(offsetof(MulticastDelegate_t, ___delegates_11)); }
	inline DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* get_delegates_11() const { return ___delegates_11; }
	inline DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8** get_address_of_delegates_11() { return &___delegates_11; }
	inline void set_delegates_11(DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* value)
	{
		___delegates_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___delegates_11), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_pinvoke : public Delegate_t_marshaled_pinvoke
{
	Delegate_t_marshaled_pinvoke** ___delegates_11;
};
// Native definition for COM marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_com : public Delegate_t_marshaled_com
{
	Delegate_t_marshaled_com** ___delegates_11;
};

// System.SystemException
struct SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62  : public Exception_t
{
public:

public:
};


// Spine.TrackEntry
struct TrackEntry_t8B6FF31E96FE5CFBE3B92DC9E4FB33766342A20D  : public RuntimeObject
{
public:
	// Spine.Animation Spine.TrackEntry::animation
	Animation_tE800D5597964656F48F303755E4C6C66462E8E90 * ___animation_0;
	// Spine.TrackEntry Spine.TrackEntry::previous
	TrackEntry_t8B6FF31E96FE5CFBE3B92DC9E4FB33766342A20D * ___previous_1;
	// Spine.TrackEntry Spine.TrackEntry::next
	TrackEntry_t8B6FF31E96FE5CFBE3B92DC9E4FB33766342A20D * ___next_2;
	// Spine.TrackEntry Spine.TrackEntry::mixingFrom
	TrackEntry_t8B6FF31E96FE5CFBE3B92DC9E4FB33766342A20D * ___mixingFrom_3;
	// Spine.TrackEntry Spine.TrackEntry::mixingTo
	TrackEntry_t8B6FF31E96FE5CFBE3B92DC9E4FB33766342A20D * ___mixingTo_4;
	// Spine.AnimationState/TrackEntryDelegate Spine.TrackEntry::Start
	TrackEntryDelegate_tE20D505FE9CFC9735D82442FC79C9929AC558EDB * ___Start_5;
	// Spine.AnimationState/TrackEntryDelegate Spine.TrackEntry::Interrupt
	TrackEntryDelegate_tE20D505FE9CFC9735D82442FC79C9929AC558EDB * ___Interrupt_6;
	// Spine.AnimationState/TrackEntryDelegate Spine.TrackEntry::End
	TrackEntryDelegate_tE20D505FE9CFC9735D82442FC79C9929AC558EDB * ___End_7;
	// Spine.AnimationState/TrackEntryDelegate Spine.TrackEntry::Dispose
	TrackEntryDelegate_tE20D505FE9CFC9735D82442FC79C9929AC558EDB * ___Dispose_8;
	// Spine.AnimationState/TrackEntryDelegate Spine.TrackEntry::Complete
	TrackEntryDelegate_tE20D505FE9CFC9735D82442FC79C9929AC558EDB * ___Complete_9;
	// Spine.AnimationState/TrackEntryEventDelegate Spine.TrackEntry::Event
	TrackEntryEventDelegate_tF5188922CE4C62057833CF70701CB67AD0460A2E * ___Event_10;
	// System.Int32 Spine.TrackEntry::trackIndex
	int32_t ___trackIndex_11;
	// System.Boolean Spine.TrackEntry::loop
	bool ___loop_12;
	// System.Boolean Spine.TrackEntry::holdPrevious
	bool ___holdPrevious_13;
	// System.Boolean Spine.TrackEntry::reverse
	bool ___reverse_14;
	// System.Single Spine.TrackEntry::eventThreshold
	float ___eventThreshold_15;
	// System.Single Spine.TrackEntry::attachmentThreshold
	float ___attachmentThreshold_16;
	// System.Single Spine.TrackEntry::drawOrderThreshold
	float ___drawOrderThreshold_17;
	// System.Single Spine.TrackEntry::animationStart
	float ___animationStart_18;
	// System.Single Spine.TrackEntry::animationEnd
	float ___animationEnd_19;
	// System.Single Spine.TrackEntry::animationLast
	float ___animationLast_20;
	// System.Single Spine.TrackEntry::nextAnimationLast
	float ___nextAnimationLast_21;
	// System.Single Spine.TrackEntry::delay
	float ___delay_22;
	// System.Single Spine.TrackEntry::trackTime
	float ___trackTime_23;
	// System.Single Spine.TrackEntry::trackLast
	float ___trackLast_24;
	// System.Single Spine.TrackEntry::nextTrackLast
	float ___nextTrackLast_25;
	// System.Single Spine.TrackEntry::trackEnd
	float ___trackEnd_26;
	// System.Single Spine.TrackEntry::timeScale
	float ___timeScale_27;
	// System.Single Spine.TrackEntry::alpha
	float ___alpha_28;
	// System.Single Spine.TrackEntry::mixTime
	float ___mixTime_29;
	// System.Single Spine.TrackEntry::mixDuration
	float ___mixDuration_30;
	// System.Single Spine.TrackEntry::interruptAlpha
	float ___interruptAlpha_31;
	// System.Single Spine.TrackEntry::totalAlpha
	float ___totalAlpha_32;
	// Spine.MixBlend Spine.TrackEntry::mixBlend
	int32_t ___mixBlend_33;
	// Spine.ExposedList`1<System.Int32> Spine.TrackEntry::timelineMode
	ExposedList_1_tEB071484A7B70681ADB6BD9522EFC630CA5C5066 * ___timelineMode_34;
	// Spine.ExposedList`1<Spine.TrackEntry> Spine.TrackEntry::timelineHoldMix
	ExposedList_1_t8248F6346C8A248FDA53F64E95ECC640F2E5ED3E * ___timelineHoldMix_35;
	// Spine.ExposedList`1<System.Single> Spine.TrackEntry::timelinesRotation
	ExposedList_1_t9F8622C73EB60A6882B2968C1C0F1706D574F526 * ___timelinesRotation_36;

public:
	inline static int32_t get_offset_of_animation_0() { return static_cast<int32_t>(offsetof(TrackEntry_t8B6FF31E96FE5CFBE3B92DC9E4FB33766342A20D, ___animation_0)); }
	inline Animation_tE800D5597964656F48F303755E4C6C66462E8E90 * get_animation_0() const { return ___animation_0; }
	inline Animation_tE800D5597964656F48F303755E4C6C66462E8E90 ** get_address_of_animation_0() { return &___animation_0; }
	inline void set_animation_0(Animation_tE800D5597964656F48F303755E4C6C66462E8E90 * value)
	{
		___animation_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___animation_0), (void*)value);
	}

	inline static int32_t get_offset_of_previous_1() { return static_cast<int32_t>(offsetof(TrackEntry_t8B6FF31E96FE5CFBE3B92DC9E4FB33766342A20D, ___previous_1)); }
	inline TrackEntry_t8B6FF31E96FE5CFBE3B92DC9E4FB33766342A20D * get_previous_1() const { return ___previous_1; }
	inline TrackEntry_t8B6FF31E96FE5CFBE3B92DC9E4FB33766342A20D ** get_address_of_previous_1() { return &___previous_1; }
	inline void set_previous_1(TrackEntry_t8B6FF31E96FE5CFBE3B92DC9E4FB33766342A20D * value)
	{
		___previous_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___previous_1), (void*)value);
	}

	inline static int32_t get_offset_of_next_2() { return static_cast<int32_t>(offsetof(TrackEntry_t8B6FF31E96FE5CFBE3B92DC9E4FB33766342A20D, ___next_2)); }
	inline TrackEntry_t8B6FF31E96FE5CFBE3B92DC9E4FB33766342A20D * get_next_2() const { return ___next_2; }
	inline TrackEntry_t8B6FF31E96FE5CFBE3B92DC9E4FB33766342A20D ** get_address_of_next_2() { return &___next_2; }
	inline void set_next_2(TrackEntry_t8B6FF31E96FE5CFBE3B92DC9E4FB33766342A20D * value)
	{
		___next_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___next_2), (void*)value);
	}

	inline static int32_t get_offset_of_mixingFrom_3() { return static_cast<int32_t>(offsetof(TrackEntry_t8B6FF31E96FE5CFBE3B92DC9E4FB33766342A20D, ___mixingFrom_3)); }
	inline TrackEntry_t8B6FF31E96FE5CFBE3B92DC9E4FB33766342A20D * get_mixingFrom_3() const { return ___mixingFrom_3; }
	inline TrackEntry_t8B6FF31E96FE5CFBE3B92DC9E4FB33766342A20D ** get_address_of_mixingFrom_3() { return &___mixingFrom_3; }
	inline void set_mixingFrom_3(TrackEntry_t8B6FF31E96FE5CFBE3B92DC9E4FB33766342A20D * value)
	{
		___mixingFrom_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mixingFrom_3), (void*)value);
	}

	inline static int32_t get_offset_of_mixingTo_4() { return static_cast<int32_t>(offsetof(TrackEntry_t8B6FF31E96FE5CFBE3B92DC9E4FB33766342A20D, ___mixingTo_4)); }
	inline TrackEntry_t8B6FF31E96FE5CFBE3B92DC9E4FB33766342A20D * get_mixingTo_4() const { return ___mixingTo_4; }
	inline TrackEntry_t8B6FF31E96FE5CFBE3B92DC9E4FB33766342A20D ** get_address_of_mixingTo_4() { return &___mixingTo_4; }
	inline void set_mixingTo_4(TrackEntry_t8B6FF31E96FE5CFBE3B92DC9E4FB33766342A20D * value)
	{
		___mixingTo_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mixingTo_4), (void*)value);
	}

	inline static int32_t get_offset_of_Start_5() { return static_cast<int32_t>(offsetof(TrackEntry_t8B6FF31E96FE5CFBE3B92DC9E4FB33766342A20D, ___Start_5)); }
	inline TrackEntryDelegate_tE20D505FE9CFC9735D82442FC79C9929AC558EDB * get_Start_5() const { return ___Start_5; }
	inline TrackEntryDelegate_tE20D505FE9CFC9735D82442FC79C9929AC558EDB ** get_address_of_Start_5() { return &___Start_5; }
	inline void set_Start_5(TrackEntryDelegate_tE20D505FE9CFC9735D82442FC79C9929AC558EDB * value)
	{
		___Start_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Start_5), (void*)value);
	}

	inline static int32_t get_offset_of_Interrupt_6() { return static_cast<int32_t>(offsetof(TrackEntry_t8B6FF31E96FE5CFBE3B92DC9E4FB33766342A20D, ___Interrupt_6)); }
	inline TrackEntryDelegate_tE20D505FE9CFC9735D82442FC79C9929AC558EDB * get_Interrupt_6() const { return ___Interrupt_6; }
	inline TrackEntryDelegate_tE20D505FE9CFC9735D82442FC79C9929AC558EDB ** get_address_of_Interrupt_6() { return &___Interrupt_6; }
	inline void set_Interrupt_6(TrackEntryDelegate_tE20D505FE9CFC9735D82442FC79C9929AC558EDB * value)
	{
		___Interrupt_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Interrupt_6), (void*)value);
	}

	inline static int32_t get_offset_of_End_7() { return static_cast<int32_t>(offsetof(TrackEntry_t8B6FF31E96FE5CFBE3B92DC9E4FB33766342A20D, ___End_7)); }
	inline TrackEntryDelegate_tE20D505FE9CFC9735D82442FC79C9929AC558EDB * get_End_7() const { return ___End_7; }
	inline TrackEntryDelegate_tE20D505FE9CFC9735D82442FC79C9929AC558EDB ** get_address_of_End_7() { return &___End_7; }
	inline void set_End_7(TrackEntryDelegate_tE20D505FE9CFC9735D82442FC79C9929AC558EDB * value)
	{
		___End_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___End_7), (void*)value);
	}

	inline static int32_t get_offset_of_Dispose_8() { return static_cast<int32_t>(offsetof(TrackEntry_t8B6FF31E96FE5CFBE3B92DC9E4FB33766342A20D, ___Dispose_8)); }
	inline TrackEntryDelegate_tE20D505FE9CFC9735D82442FC79C9929AC558EDB * get_Dispose_8() const { return ___Dispose_8; }
	inline TrackEntryDelegate_tE20D505FE9CFC9735D82442FC79C9929AC558EDB ** get_address_of_Dispose_8() { return &___Dispose_8; }
	inline void set_Dispose_8(TrackEntryDelegate_tE20D505FE9CFC9735D82442FC79C9929AC558EDB * value)
	{
		___Dispose_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Dispose_8), (void*)value);
	}

	inline static int32_t get_offset_of_Complete_9() { return static_cast<int32_t>(offsetof(TrackEntry_t8B6FF31E96FE5CFBE3B92DC9E4FB33766342A20D, ___Complete_9)); }
	inline TrackEntryDelegate_tE20D505FE9CFC9735D82442FC79C9929AC558EDB * get_Complete_9() const { return ___Complete_9; }
	inline TrackEntryDelegate_tE20D505FE9CFC9735D82442FC79C9929AC558EDB ** get_address_of_Complete_9() { return &___Complete_9; }
	inline void set_Complete_9(TrackEntryDelegate_tE20D505FE9CFC9735D82442FC79C9929AC558EDB * value)
	{
		___Complete_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Complete_9), (void*)value);
	}

	inline static int32_t get_offset_of_Event_10() { return static_cast<int32_t>(offsetof(TrackEntry_t8B6FF31E96FE5CFBE3B92DC9E4FB33766342A20D, ___Event_10)); }
	inline TrackEntryEventDelegate_tF5188922CE4C62057833CF70701CB67AD0460A2E * get_Event_10() const { return ___Event_10; }
	inline TrackEntryEventDelegate_tF5188922CE4C62057833CF70701CB67AD0460A2E ** get_address_of_Event_10() { return &___Event_10; }
	inline void set_Event_10(TrackEntryEventDelegate_tF5188922CE4C62057833CF70701CB67AD0460A2E * value)
	{
		___Event_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Event_10), (void*)value);
	}

	inline static int32_t get_offset_of_trackIndex_11() { return static_cast<int32_t>(offsetof(TrackEntry_t8B6FF31E96FE5CFBE3B92DC9E4FB33766342A20D, ___trackIndex_11)); }
	inline int32_t get_trackIndex_11() const { return ___trackIndex_11; }
	inline int32_t* get_address_of_trackIndex_11() { return &___trackIndex_11; }
	inline void set_trackIndex_11(int32_t value)
	{
		___trackIndex_11 = value;
	}

	inline static int32_t get_offset_of_loop_12() { return static_cast<int32_t>(offsetof(TrackEntry_t8B6FF31E96FE5CFBE3B92DC9E4FB33766342A20D, ___loop_12)); }
	inline bool get_loop_12() const { return ___loop_12; }
	inline bool* get_address_of_loop_12() { return &___loop_12; }
	inline void set_loop_12(bool value)
	{
		___loop_12 = value;
	}

	inline static int32_t get_offset_of_holdPrevious_13() { return static_cast<int32_t>(offsetof(TrackEntry_t8B6FF31E96FE5CFBE3B92DC9E4FB33766342A20D, ___holdPrevious_13)); }
	inline bool get_holdPrevious_13() const { return ___holdPrevious_13; }
	inline bool* get_address_of_holdPrevious_13() { return &___holdPrevious_13; }
	inline void set_holdPrevious_13(bool value)
	{
		___holdPrevious_13 = value;
	}

	inline static int32_t get_offset_of_reverse_14() { return static_cast<int32_t>(offsetof(TrackEntry_t8B6FF31E96FE5CFBE3B92DC9E4FB33766342A20D, ___reverse_14)); }
	inline bool get_reverse_14() const { return ___reverse_14; }
	inline bool* get_address_of_reverse_14() { return &___reverse_14; }
	inline void set_reverse_14(bool value)
	{
		___reverse_14 = value;
	}

	inline static int32_t get_offset_of_eventThreshold_15() { return static_cast<int32_t>(offsetof(TrackEntry_t8B6FF31E96FE5CFBE3B92DC9E4FB33766342A20D, ___eventThreshold_15)); }
	inline float get_eventThreshold_15() const { return ___eventThreshold_15; }
	inline float* get_address_of_eventThreshold_15() { return &___eventThreshold_15; }
	inline void set_eventThreshold_15(float value)
	{
		___eventThreshold_15 = value;
	}

	inline static int32_t get_offset_of_attachmentThreshold_16() { return static_cast<int32_t>(offsetof(TrackEntry_t8B6FF31E96FE5CFBE3B92DC9E4FB33766342A20D, ___attachmentThreshold_16)); }
	inline float get_attachmentThreshold_16() const { return ___attachmentThreshold_16; }
	inline float* get_address_of_attachmentThreshold_16() { return &___attachmentThreshold_16; }
	inline void set_attachmentThreshold_16(float value)
	{
		___attachmentThreshold_16 = value;
	}

	inline static int32_t get_offset_of_drawOrderThreshold_17() { return static_cast<int32_t>(offsetof(TrackEntry_t8B6FF31E96FE5CFBE3B92DC9E4FB33766342A20D, ___drawOrderThreshold_17)); }
	inline float get_drawOrderThreshold_17() const { return ___drawOrderThreshold_17; }
	inline float* get_address_of_drawOrderThreshold_17() { return &___drawOrderThreshold_17; }
	inline void set_drawOrderThreshold_17(float value)
	{
		___drawOrderThreshold_17 = value;
	}

	inline static int32_t get_offset_of_animationStart_18() { return static_cast<int32_t>(offsetof(TrackEntry_t8B6FF31E96FE5CFBE3B92DC9E4FB33766342A20D, ___animationStart_18)); }
	inline float get_animationStart_18() const { return ___animationStart_18; }
	inline float* get_address_of_animationStart_18() { return &___animationStart_18; }
	inline void set_animationStart_18(float value)
	{
		___animationStart_18 = value;
	}

	inline static int32_t get_offset_of_animationEnd_19() { return static_cast<int32_t>(offsetof(TrackEntry_t8B6FF31E96FE5CFBE3B92DC9E4FB33766342A20D, ___animationEnd_19)); }
	inline float get_animationEnd_19() const { return ___animationEnd_19; }
	inline float* get_address_of_animationEnd_19() { return &___animationEnd_19; }
	inline void set_animationEnd_19(float value)
	{
		___animationEnd_19 = value;
	}

	inline static int32_t get_offset_of_animationLast_20() { return static_cast<int32_t>(offsetof(TrackEntry_t8B6FF31E96FE5CFBE3B92DC9E4FB33766342A20D, ___animationLast_20)); }
	inline float get_animationLast_20() const { return ___animationLast_20; }
	inline float* get_address_of_animationLast_20() { return &___animationLast_20; }
	inline void set_animationLast_20(float value)
	{
		___animationLast_20 = value;
	}

	inline static int32_t get_offset_of_nextAnimationLast_21() { return static_cast<int32_t>(offsetof(TrackEntry_t8B6FF31E96FE5CFBE3B92DC9E4FB33766342A20D, ___nextAnimationLast_21)); }
	inline float get_nextAnimationLast_21() const { return ___nextAnimationLast_21; }
	inline float* get_address_of_nextAnimationLast_21() { return &___nextAnimationLast_21; }
	inline void set_nextAnimationLast_21(float value)
	{
		___nextAnimationLast_21 = value;
	}

	inline static int32_t get_offset_of_delay_22() { return static_cast<int32_t>(offsetof(TrackEntry_t8B6FF31E96FE5CFBE3B92DC9E4FB33766342A20D, ___delay_22)); }
	inline float get_delay_22() const { return ___delay_22; }
	inline float* get_address_of_delay_22() { return &___delay_22; }
	inline void set_delay_22(float value)
	{
		___delay_22 = value;
	}

	inline static int32_t get_offset_of_trackTime_23() { return static_cast<int32_t>(offsetof(TrackEntry_t8B6FF31E96FE5CFBE3B92DC9E4FB33766342A20D, ___trackTime_23)); }
	inline float get_trackTime_23() const { return ___trackTime_23; }
	inline float* get_address_of_trackTime_23() { return &___trackTime_23; }
	inline void set_trackTime_23(float value)
	{
		___trackTime_23 = value;
	}

	inline static int32_t get_offset_of_trackLast_24() { return static_cast<int32_t>(offsetof(TrackEntry_t8B6FF31E96FE5CFBE3B92DC9E4FB33766342A20D, ___trackLast_24)); }
	inline float get_trackLast_24() const { return ___trackLast_24; }
	inline float* get_address_of_trackLast_24() { return &___trackLast_24; }
	inline void set_trackLast_24(float value)
	{
		___trackLast_24 = value;
	}

	inline static int32_t get_offset_of_nextTrackLast_25() { return static_cast<int32_t>(offsetof(TrackEntry_t8B6FF31E96FE5CFBE3B92DC9E4FB33766342A20D, ___nextTrackLast_25)); }
	inline float get_nextTrackLast_25() const { return ___nextTrackLast_25; }
	inline float* get_address_of_nextTrackLast_25() { return &___nextTrackLast_25; }
	inline void set_nextTrackLast_25(float value)
	{
		___nextTrackLast_25 = value;
	}

	inline static int32_t get_offset_of_trackEnd_26() { return static_cast<int32_t>(offsetof(TrackEntry_t8B6FF31E96FE5CFBE3B92DC9E4FB33766342A20D, ___trackEnd_26)); }
	inline float get_trackEnd_26() const { return ___trackEnd_26; }
	inline float* get_address_of_trackEnd_26() { return &___trackEnd_26; }
	inline void set_trackEnd_26(float value)
	{
		___trackEnd_26 = value;
	}

	inline static int32_t get_offset_of_timeScale_27() { return static_cast<int32_t>(offsetof(TrackEntry_t8B6FF31E96FE5CFBE3B92DC9E4FB33766342A20D, ___timeScale_27)); }
	inline float get_timeScale_27() const { return ___timeScale_27; }
	inline float* get_address_of_timeScale_27() { return &___timeScale_27; }
	inline void set_timeScale_27(float value)
	{
		___timeScale_27 = value;
	}

	inline static int32_t get_offset_of_alpha_28() { return static_cast<int32_t>(offsetof(TrackEntry_t8B6FF31E96FE5CFBE3B92DC9E4FB33766342A20D, ___alpha_28)); }
	inline float get_alpha_28() const { return ___alpha_28; }
	inline float* get_address_of_alpha_28() { return &___alpha_28; }
	inline void set_alpha_28(float value)
	{
		___alpha_28 = value;
	}

	inline static int32_t get_offset_of_mixTime_29() { return static_cast<int32_t>(offsetof(TrackEntry_t8B6FF31E96FE5CFBE3B92DC9E4FB33766342A20D, ___mixTime_29)); }
	inline float get_mixTime_29() const { return ___mixTime_29; }
	inline float* get_address_of_mixTime_29() { return &___mixTime_29; }
	inline void set_mixTime_29(float value)
	{
		___mixTime_29 = value;
	}

	inline static int32_t get_offset_of_mixDuration_30() { return static_cast<int32_t>(offsetof(TrackEntry_t8B6FF31E96FE5CFBE3B92DC9E4FB33766342A20D, ___mixDuration_30)); }
	inline float get_mixDuration_30() const { return ___mixDuration_30; }
	inline float* get_address_of_mixDuration_30() { return &___mixDuration_30; }
	inline void set_mixDuration_30(float value)
	{
		___mixDuration_30 = value;
	}

	inline static int32_t get_offset_of_interruptAlpha_31() { return static_cast<int32_t>(offsetof(TrackEntry_t8B6FF31E96FE5CFBE3B92DC9E4FB33766342A20D, ___interruptAlpha_31)); }
	inline float get_interruptAlpha_31() const { return ___interruptAlpha_31; }
	inline float* get_address_of_interruptAlpha_31() { return &___interruptAlpha_31; }
	inline void set_interruptAlpha_31(float value)
	{
		___interruptAlpha_31 = value;
	}

	inline static int32_t get_offset_of_totalAlpha_32() { return static_cast<int32_t>(offsetof(TrackEntry_t8B6FF31E96FE5CFBE3B92DC9E4FB33766342A20D, ___totalAlpha_32)); }
	inline float get_totalAlpha_32() const { return ___totalAlpha_32; }
	inline float* get_address_of_totalAlpha_32() { return &___totalAlpha_32; }
	inline void set_totalAlpha_32(float value)
	{
		___totalAlpha_32 = value;
	}

	inline static int32_t get_offset_of_mixBlend_33() { return static_cast<int32_t>(offsetof(TrackEntry_t8B6FF31E96FE5CFBE3B92DC9E4FB33766342A20D, ___mixBlend_33)); }
	inline int32_t get_mixBlend_33() const { return ___mixBlend_33; }
	inline int32_t* get_address_of_mixBlend_33() { return &___mixBlend_33; }
	inline void set_mixBlend_33(int32_t value)
	{
		___mixBlend_33 = value;
	}

	inline static int32_t get_offset_of_timelineMode_34() { return static_cast<int32_t>(offsetof(TrackEntry_t8B6FF31E96FE5CFBE3B92DC9E4FB33766342A20D, ___timelineMode_34)); }
	inline ExposedList_1_tEB071484A7B70681ADB6BD9522EFC630CA5C5066 * get_timelineMode_34() const { return ___timelineMode_34; }
	inline ExposedList_1_tEB071484A7B70681ADB6BD9522EFC630CA5C5066 ** get_address_of_timelineMode_34() { return &___timelineMode_34; }
	inline void set_timelineMode_34(ExposedList_1_tEB071484A7B70681ADB6BD9522EFC630CA5C5066 * value)
	{
		___timelineMode_34 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___timelineMode_34), (void*)value);
	}

	inline static int32_t get_offset_of_timelineHoldMix_35() { return static_cast<int32_t>(offsetof(TrackEntry_t8B6FF31E96FE5CFBE3B92DC9E4FB33766342A20D, ___timelineHoldMix_35)); }
	inline ExposedList_1_t8248F6346C8A248FDA53F64E95ECC640F2E5ED3E * get_timelineHoldMix_35() const { return ___timelineHoldMix_35; }
	inline ExposedList_1_t8248F6346C8A248FDA53F64E95ECC640F2E5ED3E ** get_address_of_timelineHoldMix_35() { return &___timelineHoldMix_35; }
	inline void set_timelineHoldMix_35(ExposedList_1_t8248F6346C8A248FDA53F64E95ECC640F2E5ED3E * value)
	{
		___timelineHoldMix_35 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___timelineHoldMix_35), (void*)value);
	}

	inline static int32_t get_offset_of_timelinesRotation_36() { return static_cast<int32_t>(offsetof(TrackEntry_t8B6FF31E96FE5CFBE3B92DC9E4FB33766342A20D, ___timelinesRotation_36)); }
	inline ExposedList_1_t9F8622C73EB60A6882B2968C1C0F1706D574F526 * get_timelinesRotation_36() const { return ___timelinesRotation_36; }
	inline ExposedList_1_t9F8622C73EB60A6882B2968C1C0F1706D574F526 ** get_address_of_timelinesRotation_36() { return &___timelinesRotation_36; }
	inline void set_timelinesRotation_36(ExposedList_1_t9F8622C73EB60A6882B2968C1C0F1706D574F526 * value)
	{
		___timelinesRotation_36 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___timelinesRotation_36), (void*)value);
	}
};


// Spine.TranslateTimeline
struct TranslateTimeline_t681EC4DF87BDD6C1C37F02813D59275B8EAF02E5  : public CurveTimeline2_tFB55B7C974EAEFA2745C1F771B06A7A2334C4CF0
{
public:
	// System.Int32 Spine.TranslateTimeline::boneIndex
	int32_t ___boneIndex_10;

public:
	inline static int32_t get_offset_of_boneIndex_10() { return static_cast<int32_t>(offsetof(TranslateTimeline_t681EC4DF87BDD6C1C37F02813D59275B8EAF02E5, ___boneIndex_10)); }
	inline int32_t get_boneIndex_10() const { return ___boneIndex_10; }
	inline int32_t* get_address_of_boneIndex_10() { return &___boneIndex_10; }
	inline void set_boneIndex_10(int32_t value)
	{
		___boneIndex_10 = value;
	}
};


// Spine.TranslateXTimeline
struct TranslateXTimeline_t359052D0CB61701970042CFD7A82575F4A2729F5  : public CurveTimeline1_tEB53273FC1D90C28D2A2357D4BF937251AE1E18C
{
public:
	// System.Int32 Spine.TranslateXTimeline::boneIndex
	int32_t ___boneIndex_9;

public:
	inline static int32_t get_offset_of_boneIndex_9() { return static_cast<int32_t>(offsetof(TranslateXTimeline_t359052D0CB61701970042CFD7A82575F4A2729F5, ___boneIndex_9)); }
	inline int32_t get_boneIndex_9() const { return ___boneIndex_9; }
	inline int32_t* get_address_of_boneIndex_9() { return &___boneIndex_9; }
	inline void set_boneIndex_9(int32_t value)
	{
		___boneIndex_9 = value;
	}
};


// Spine.TranslateYTimeline
struct TranslateYTimeline_t83C5029E5E77494698A95E1D6748CE3692AECF31  : public CurveTimeline1_tEB53273FC1D90C28D2A2357D4BF937251AE1E18C
{
public:
	// System.Int32 Spine.TranslateYTimeline::boneIndex
	int32_t ___boneIndex_9;

public:
	inline static int32_t get_offset_of_boneIndex_9() { return static_cast<int32_t>(offsetof(TranslateYTimeline_t83C5029E5E77494698A95E1D6748CE3692AECF31, ___boneIndex_9)); }
	inline int32_t get_boneIndex_9() const { return ___boneIndex_9; }
	inline int32_t* get_address_of_boneIndex_9() { return &___boneIndex_9; }
	inline void set_boneIndex_9(int32_t value)
	{
		___boneIndex_9 = value;
	}
};


// System.Type
struct Type_t  : public MemberInfo_t
{
public:
	// System.RuntimeTypeHandle System.Type::_impl
	RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  ____impl_9;

public:
	inline static int32_t get_offset_of__impl_9() { return static_cast<int32_t>(offsetof(Type_t, ____impl_9)); }
	inline RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  get__impl_9() const { return ____impl_9; }
	inline RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 * get_address_of__impl_9() { return &____impl_9; }
	inline void set__impl_9(RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  value)
	{
		____impl_9 = value;
	}
};

struct Type_t_StaticFields
{
public:
	// System.Reflection.MemberFilter System.Type::FilterAttribute
	MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * ___FilterAttribute_0;
	// System.Reflection.MemberFilter System.Type::FilterName
	MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * ___FilterName_1;
	// System.Reflection.MemberFilter System.Type::FilterNameIgnoreCase
	MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * ___FilterNameIgnoreCase_2;
	// System.Object System.Type::Missing
	RuntimeObject * ___Missing_3;
	// System.Char System.Type::Delimiter
	Il2CppChar ___Delimiter_4;
	// System.Type[] System.Type::EmptyTypes
	TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* ___EmptyTypes_5;
	// System.Reflection.Binder System.Type::defaultBinder
	Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30 * ___defaultBinder_6;

public:
	inline static int32_t get_offset_of_FilterAttribute_0() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterAttribute_0)); }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * get_FilterAttribute_0() const { return ___FilterAttribute_0; }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 ** get_address_of_FilterAttribute_0() { return &___FilterAttribute_0; }
	inline void set_FilterAttribute_0(MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * value)
	{
		___FilterAttribute_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FilterAttribute_0), (void*)value);
	}

	inline static int32_t get_offset_of_FilterName_1() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterName_1)); }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * get_FilterName_1() const { return ___FilterName_1; }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 ** get_address_of_FilterName_1() { return &___FilterName_1; }
	inline void set_FilterName_1(MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * value)
	{
		___FilterName_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FilterName_1), (void*)value);
	}

	inline static int32_t get_offset_of_FilterNameIgnoreCase_2() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterNameIgnoreCase_2)); }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * get_FilterNameIgnoreCase_2() const { return ___FilterNameIgnoreCase_2; }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 ** get_address_of_FilterNameIgnoreCase_2() { return &___FilterNameIgnoreCase_2; }
	inline void set_FilterNameIgnoreCase_2(MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * value)
	{
		___FilterNameIgnoreCase_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FilterNameIgnoreCase_2), (void*)value);
	}

	inline static int32_t get_offset_of_Missing_3() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___Missing_3)); }
	inline RuntimeObject * get_Missing_3() const { return ___Missing_3; }
	inline RuntimeObject ** get_address_of_Missing_3() { return &___Missing_3; }
	inline void set_Missing_3(RuntimeObject * value)
	{
		___Missing_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Missing_3), (void*)value);
	}

	inline static int32_t get_offset_of_Delimiter_4() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___Delimiter_4)); }
	inline Il2CppChar get_Delimiter_4() const { return ___Delimiter_4; }
	inline Il2CppChar* get_address_of_Delimiter_4() { return &___Delimiter_4; }
	inline void set_Delimiter_4(Il2CppChar value)
	{
		___Delimiter_4 = value;
	}

	inline static int32_t get_offset_of_EmptyTypes_5() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___EmptyTypes_5)); }
	inline TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* get_EmptyTypes_5() const { return ___EmptyTypes_5; }
	inline TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755** get_address_of_EmptyTypes_5() { return &___EmptyTypes_5; }
	inline void set_EmptyTypes_5(TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* value)
	{
		___EmptyTypes_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___EmptyTypes_5), (void*)value);
	}

	inline static int32_t get_offset_of_defaultBinder_6() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___defaultBinder_6)); }
	inline Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30 * get_defaultBinder_6() const { return ___defaultBinder_6; }
	inline Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30 ** get_address_of_defaultBinder_6() { return &___defaultBinder_6; }
	inline void set_defaultBinder_6(Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30 * value)
	{
		___defaultBinder_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___defaultBinder_6), (void*)value);
	}
};


// Spine.EventQueue/EventQueueEntry
struct EventQueueEntry_tD0E6A9858C87415E513F4E6E71399D827FF4424C 
{
public:
	// Spine.EventQueue/EventType Spine.EventQueue/EventQueueEntry::type
	int32_t ___type_0;
	// Spine.TrackEntry Spine.EventQueue/EventQueueEntry::entry
	TrackEntry_t8B6FF31E96FE5CFBE3B92DC9E4FB33766342A20D * ___entry_1;
	// Spine.Event Spine.EventQueue/EventQueueEntry::e
	Event_tAB253EC43580D8724548C638BAB02EBB587A7957 * ___e_2;

public:
	inline static int32_t get_offset_of_type_0() { return static_cast<int32_t>(offsetof(EventQueueEntry_tD0E6A9858C87415E513F4E6E71399D827FF4424C, ___type_0)); }
	inline int32_t get_type_0() const { return ___type_0; }
	inline int32_t* get_address_of_type_0() { return &___type_0; }
	inline void set_type_0(int32_t value)
	{
		___type_0 = value;
	}

	inline static int32_t get_offset_of_entry_1() { return static_cast<int32_t>(offsetof(EventQueueEntry_tD0E6A9858C87415E513F4E6E71399D827FF4424C, ___entry_1)); }
	inline TrackEntry_t8B6FF31E96FE5CFBE3B92DC9E4FB33766342A20D * get_entry_1() const { return ___entry_1; }
	inline TrackEntry_t8B6FF31E96FE5CFBE3B92DC9E4FB33766342A20D ** get_address_of_entry_1() { return &___entry_1; }
	inline void set_entry_1(TrackEntry_t8B6FF31E96FE5CFBE3B92DC9E4FB33766342A20D * value)
	{
		___entry_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___entry_1), (void*)value);
	}

	inline static int32_t get_offset_of_e_2() { return static_cast<int32_t>(offsetof(EventQueueEntry_tD0E6A9858C87415E513F4E6E71399D827FF4424C, ___e_2)); }
	inline Event_tAB253EC43580D8724548C638BAB02EBB587A7957 * get_e_2() const { return ___e_2; }
	inline Event_tAB253EC43580D8724548C638BAB02EBB587A7957 ** get_address_of_e_2() { return &___e_2; }
	inline void set_e_2(Event_tAB253EC43580D8724548C638BAB02EBB587A7957 * value)
	{
		___e_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___e_2), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of Spine.EventQueue/EventQueueEntry
struct EventQueueEntry_tD0E6A9858C87415E513F4E6E71399D827FF4424C_marshaled_pinvoke
{
	int32_t ___type_0;
	TrackEntry_t8B6FF31E96FE5CFBE3B92DC9E4FB33766342A20D * ___entry_1;
	Event_tAB253EC43580D8724548C638BAB02EBB587A7957 * ___e_2;
};
// Native definition for COM marshalling of Spine.EventQueue/EventQueueEntry
struct EventQueueEntry_tD0E6A9858C87415E513F4E6E71399D827FF4424C_marshaled_com
{
	int32_t ___type_0;
	TrackEntry_t8B6FF31E96FE5CFBE3B92DC9E4FB33766342A20D * ___entry_1;
	Event_tAB253EC43580D8724548C638BAB02EBB587A7957 * ___e_2;
};

// System.ArgumentException
struct ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00  : public SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62
{
public:
	// System.String System.ArgumentException::m_paramName
	String_t* ___m_paramName_17;

public:
	inline static int32_t get_offset_of_m_paramName_17() { return static_cast<int32_t>(offsetof(ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00, ___m_paramName_17)); }
	inline String_t* get_m_paramName_17() const { return ___m_paramName_17; }
	inline String_t** get_address_of_m_paramName_17() { return &___m_paramName_17; }
	inline void set_m_paramName_17(String_t* value)
	{
		___m_paramName_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_paramName_17), (void*)value);
	}
};


// System.AsyncCallback
struct AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA  : public MulticastDelegate_t
{
public:

public:
};


// System.IO.IOException
struct IOException_t09E5C01DA4748C36D703728C4668C5CDF3882EBA  : public SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62
{
public:
	// System.String System.IO.IOException::_maybeFullPath
	String_t* ____maybeFullPath_17;

public:
	inline static int32_t get_offset_of__maybeFullPath_17() { return static_cast<int32_t>(offsetof(IOException_t09E5C01DA4748C36D703728C4668C5CDF3882EBA, ____maybeFullPath_17)); }
	inline String_t* get__maybeFullPath_17() const { return ____maybeFullPath_17; }
	inline String_t** get_address_of__maybeFullPath_17() { return &____maybeFullPath_17; }
	inline void set__maybeFullPath_17(String_t* value)
	{
		____maybeFullPath_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____maybeFullPath_17), (void*)value);
	}
};


// Spine.AnimationState/TrackEntryDelegate
struct TrackEntryDelegate_tE20D505FE9CFC9735D82442FC79C9929AC558EDB  : public MulticastDelegate_t
{
public:

public:
};


// Spine.AnimationState/TrackEntryEventDelegate
struct TrackEntryEventDelegate_tF5188922CE4C62057833CF70701CB67AD0460A2E  : public MulticastDelegate_t
{
public:

public:
};


// System.ArgumentNullException
struct ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB  : public ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00
{
public:

public:
};


// System.IO.EndOfStreamException
struct EndOfStreamException_tDA8337E29A941EFB3E26721033B1826C1ACB0059  : public IOException_t09E5C01DA4748C36D703728C4668C5CDF3882EBA
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// System.String[]
struct StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) String_t* m_Items[1];

public:
	inline String_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline String_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, String_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline String_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline String_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, String_t* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Single[]
struct SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) float m_Items[1];

public:
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
// Spine.TransformConstraint[]
struct TransformConstraintU5BU5D_tAAB40625ABA9CEE91FE93330DA53DA127EB7E446  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) TransformConstraint_tC8D8761A400AEA22D56A6D4EDAD8D88356EFFAE4 * m_Items[1];

public:
	inline TransformConstraint_tC8D8761A400AEA22D56A6D4EDAD8D88356EFFAE4 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline TransformConstraint_tC8D8761A400AEA22D56A6D4EDAD8D88356EFFAE4 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, TransformConstraint_tC8D8761A400AEA22D56A6D4EDAD8D88356EFFAE4 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline TransformConstraint_tC8D8761A400AEA22D56A6D4EDAD8D88356EFFAE4 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline TransformConstraint_tC8D8761A400AEA22D56A6D4EDAD8D88356EFFAE4 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, TransformConstraint_tC8D8761A400AEA22D56A6D4EDAD8D88356EFFAE4 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// Spine.Bone[]
struct BoneU5BU5D_t77D01946B97A0778AD79515B28F1C30BDBED3A23  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Bone_t6DA0B82485BED2E4EEE864AAD607EEBDC2F98AAF * m_Items[1];

public:
	inline Bone_t6DA0B82485BED2E4EEE864AAD607EEBDC2F98AAF * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Bone_t6DA0B82485BED2E4EEE864AAD607EEBDC2F98AAF ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Bone_t6DA0B82485BED2E4EEE864AAD607EEBDC2F98AAF * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Bone_t6DA0B82485BED2E4EEE864AAD607EEBDC2F98AAF * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Bone_t6DA0B82485BED2E4EEE864AAD607EEBDC2F98AAF ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Bone_t6DA0B82485BED2E4EEE864AAD607EEBDC2F98AAF * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Int32[]
struct Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32  : public RuntimeArray
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
// System.Boolean[]
struct BooleanU5BU5D_tEC7BAF93C44F875016DAADC8696EE3A465644D3C  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) bool m_Items[1];

public:
	inline bool GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline bool* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, bool value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline bool GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline bool* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, bool value)
	{
		m_Items[index] = value;
	}
};
// Spine.ExposedList`1<System.Single>[]
struct ExposedList_1U5BU5D_tE723A0FFD1A0C77B17CCA09F9BE2EA1B09561CFE  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) ExposedList_1_t9F8622C73EB60A6882B2968C1C0F1706D574F526 * m_Items[1];

public:
	inline ExposedList_1_t9F8622C73EB60A6882B2968C1C0F1706D574F526 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline ExposedList_1_t9F8622C73EB60A6882B2968C1C0F1706D574F526 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, ExposedList_1_t9F8622C73EB60A6882B2968C1C0F1706D574F526 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline ExposedList_1_t9F8622C73EB60A6882B2968C1C0F1706D574F526 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline ExposedList_1_t9F8622C73EB60A6882B2968C1C0F1706D574F526 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, ExposedList_1_t9F8622C73EB60A6882B2968C1C0F1706D574F526 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// Spine.ExposedList`1<System.Int32>[]
struct ExposedList_1U5BU5D_tC7922C1CF6C272D1AC5CB95D7C39664D0F12FF54  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) ExposedList_1_tEB071484A7B70681ADB6BD9522EFC630CA5C5066 * m_Items[1];

public:
	inline ExposedList_1_tEB071484A7B70681ADB6BD9522EFC630CA5C5066 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline ExposedList_1_tEB071484A7B70681ADB6BD9522EFC630CA5C5066 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, ExposedList_1_tEB071484A7B70681ADB6BD9522EFC630CA5C5066 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline ExposedList_1_tEB071484A7B70681ADB6BD9522EFC630CA5C5066 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline ExposedList_1_tEB071484A7B70681ADB6BD9522EFC630CA5C5066 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, ExposedList_1_tEB071484A7B70681ADB6BD9522EFC630CA5C5066 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Delegate[]
struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Delegate_t * m_Items[1];

public:
	inline Delegate_t * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Delegate_t ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Delegate_t * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Delegate_t * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Delegate_t ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Delegate_t * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Byte[]
struct ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) uint8_t m_Items[1];

public:
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


// System.Void Spine.ExposedList`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExposedList_1__ctor_mFFE6EDA61CD5E083C09C3270D95F214371165497_gshared (ExposedList_1_t96967D812A0363AD52B5EA4B217F488F8368BE10 * __this, const RuntimeMethod* method);
// System.Void Spine.ExposedList`1<System.Int32>::Clear(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExposedList_1_Clear_m9E1BE8027151460EB7E0FAB390B2846D15BA302B_gshared (ExposedList_1_tEB071484A7B70681ADB6BD9522EFC630CA5C5066 * __this, bool ___clearArray0, const RuntimeMethod* method);
// Spine.ExposedList`1<T> Spine.ExposedList`1<System.Int32>::Resize(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ExposedList_1_tEB071484A7B70681ADB6BD9522EFC630CA5C5066 * ExposedList_1_Resize_m87D63C372E64631877CF0C3F964DD144A742AF2A_gshared (ExposedList_1_tEB071484A7B70681ADB6BD9522EFC630CA5C5066 * __this, int32_t ___newSize0, const RuntimeMethod* method);
// Spine.ExposedList`1<T> Spine.ExposedList`1<System.Boolean>::Resize(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ExposedList_1_tAA9A80412EB5EC236EBA9FC15B2BD9A61915AE7E * ExposedList_1_Resize_m666C6341D5DC487C18356A856E93EF53AC33CB42_gshared (ExposedList_1_tAA9A80412EB5EC236EBA9FC15B2BD9A61915AE7E * __this, int32_t ___newSize0, const RuntimeMethod* method);
// System.Void Spine.ExposedList`1<System.Int32>::EnsureCapacity(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExposedList_1_EnsureCapacity_m51473D74740BFE47642E8A5FEF054C72D22FE11A_gshared (ExposedList_1_tEB071484A7B70681ADB6BD9522EFC630CA5C5066 * __this, int32_t ___min0, const RuntimeMethod* method);
// System.Void Spine.ExposedList`1<System.Int32>::Add(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExposedList_1_Add_m65591272902D94AFAE294B4CDF30A465AA2274F8_gshared (ExposedList_1_tEB071484A7B70681ADB6BD9522EFC630CA5C5066 * __this, int32_t ___item0, const RuntimeMethod* method);
// System.Void Spine.ExposedList`1<System.Int32>::RemoveAt(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExposedList_1_RemoveAt_m74D0AC175C5B5B597106B9B6B37B6A51A8EF2B13_gshared (ExposedList_1_tEB071484A7B70681ADB6BD9522EFC630CA5C5066 * __this, int32_t ___index0, const RuntimeMethod* method);
// System.Void Spine.ExposedList`1<System.Boolean>::RemoveAt(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExposedList_1_RemoveAt_m315AA4921C74B8F80A3A354E0524085CAEF82AA8_gshared (ExposedList_1_tAA9A80412EB5EC236EBA9FC15B2BD9A61915AE7E * __this, int32_t ___index0, const RuntimeMethod* method);
// System.Void Spine.Pool`1<System.Object>::Free(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Pool_1_Free_m14FD14CF2D5AD24F2BDAF926BFEC8BD24C29D378_gshared (Pool_1_t1267C3F2D6DCBF77E536D865BA56262DF11C0889 * __this, RuntimeObject * ___obj0, const RuntimeMethod* method);
// System.Void Spine.ExposedList`1<System.Object>::Clear(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExposedList_1_Clear_mDCFB798E72809948C224EC31C9C8EECF771D195E_gshared (ExposedList_1_t96967D812A0363AD52B5EA4B217F488F8368BE10 * __this, bool ___clearArray0, const RuntimeMethod* method);
// T Spine.Pool`1<System.Object>::Obtain()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Pool_1_Obtain_mCB782D765DAC2EB6E6E56B7321A64102D5A58DC7_gshared (Pool_1_t1267C3F2D6DCBF77E536D865BA56262DF11C0889 * __this, const RuntimeMethod* method);
// System.Void Spine.ExposedList`1<System.Single>::Clear(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExposedList_1_Clear_m56FD9B006AFA6C0C3B822A2460ED52D4FA72D847_gshared (ExposedList_1_t9F8622C73EB60A6882B2968C1C0F1706D574F526 * __this, bool ___clearArray0, const RuntimeMethod* method);
// System.Void Spine.ExposedList`1<System.Single>::Add(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExposedList_1_Add_m5B673948ABFBB0479F3A81270A22A4295AEF619B_gshared (ExposedList_1_t9F8622C73EB60A6882B2968C1C0F1706D574F526 * __this, float ___item0, const RuntimeMethod* method);
// System.Void Spine.ExposedList`1<System.Object>::Add(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExposedList_1_Add_m4364CE9D5F725E9640B50171826E9EEE1E5E8927_gshared (ExposedList_1_t96967D812A0363AD52B5EA4B217F488F8368BE10 * __this, RuntimeObject * ___item0, const RuntimeMethod* method);
// System.Void Spine.ExposedList`1<System.Object>::RemoveAt(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExposedList_1_RemoveAt_m50C8AA61CDCED70A8EE1FAF5FDD73F558952C56A_gshared (ExposedList_1_t96967D812A0363AD52B5EA4B217F488F8368BE10 * __this, int32_t ___index0, const RuntimeMethod* method);
// System.Void Spine.ExposedList`1<System.Int32>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExposedList_1__ctor_m9BB5379A9A5D0484D07AE68B3215F94B8093DFD2_gshared (ExposedList_1_tEB071484A7B70681ADB6BD9522EFC630CA5C5066 * __this, const RuntimeMethod* method);
// System.Void Spine.ExposedList`1<System.Boolean>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExposedList_1__ctor_mB0F2F25C8D7C8DA90320D609A4DC4857D9ECC79C_gshared (ExposedList_1_tAA9A80412EB5EC236EBA9FC15B2BD9A61915AE7E * __this, const RuntimeMethod* method);
// System.Void Spine.Pool`1<System.Object>::.ctor(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Pool_1__ctor_m8B2EFD1D9088A4E150064AF899EDF8BEC4716354_gshared (Pool_1_t1267C3F2D6DCBF77E536D865BA56262DF11C0889 * __this, int32_t ___initialCapacity0, int32_t ___max1, const RuntimeMethod* method);

// System.Void Spine.ExposedList`1<Spine.BoneData>::.ctor()
inline void ExposedList_1__ctor_m316DF0208BC8528788112ABDE3A956F6B176F5DC (ExposedList_1_t55FC025D5A735E30067A5D1CCB31D11EA181CF36 * __this, const RuntimeMethod* method)
{
	((  void (*) (ExposedList_1_t55FC025D5A735E30067A5D1CCB31D11EA181CF36 *, const RuntimeMethod*))ExposedList_1__ctor_mFFE6EDA61CD5E083C09C3270D95F214371165497_gshared)(__this, method);
}
// System.Void Spine.ConstraintData::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConstraintData__ctor_mB5CE0EF68267D3BE4AAC43A4458DC4E0134DC4A9 (ConstraintData_t71BA8ACA83AC8927FE1FEDFAB6A24846C01D138F * __this, String_t* ___name0, const RuntimeMethod* method);
// System.String System.Int32::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411 (int32_t* __this, const RuntimeMethod* method);
// System.String System.String::Concat(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m89EAB4C6A96B0E5C3F87300D6BE78D386B9EFC44 (String_t* ___str00, String_t* ___str11, String_t* ___str22, const RuntimeMethod* method);
// System.Void Spine.CurveTimeline::.ctor(System.Int32,System.Int32,System.String[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CurveTimeline__ctor_mAF5F864455A1B5677ED313F38348F08065180211 (CurveTimeline_t404E642BD4DFEEDB39DBCDC088B7F7E78FAE5476 * __this, int32_t ___frameCount0, int32_t ___bezierCount1, StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___propertyIds2, const RuntimeMethod* method);
// System.Int32 Spine.Timeline::Search(System.Single[],System.Single,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Timeline_Search_m34D8AE9726E2A2D27C310D7F156F57931EA3ABD6 (SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* ___frames0, float ___time1, int32_t ___step2, const RuntimeMethod* method);
// System.Single Spine.CurveTimeline::GetBezierValue(System.Single,System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float CurveTimeline_GetBezierValue_m7F3F858D48DFBB2654FAB172AF39E25579AA8265 (CurveTimeline_t404E642BD4DFEEDB39DBCDC088B7F7E78FAE5476 * __this, float ___time0, int32_t ___frameIndex1, int32_t ___valueOffset2, int32_t ___i3, const RuntimeMethod* method);
// System.Void Spine.CurveTimeline2::.ctor(System.Int32,System.Int32,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CurveTimeline2__ctor_m0C19A32AE97CE563A5A6E27F60BB5E58F47F3177 (CurveTimeline2_tFB55B7C974EAEFA2745C1F771B06A7A2334C4CF0 * __this, int32_t ___frameCount0, int32_t ___bezierCount1, String_t* ___propertyId12, String_t* ___propertyId23, const RuntimeMethod* method);
// System.Void Spine.TranslateTimeline::GetCurveValue(System.Single&,System.Single&,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TranslateTimeline_GetCurveValue_m50513A5FB9ABBF0C20C603E408E9BC4EF5F1125A (TranslateTimeline_t681EC4DF87BDD6C1C37F02813D59275B8EAF02E5 * __this, float* ___x0, float* ___y1, float ___time2, const RuntimeMethod* method);
// System.Void Spine.CurveTimeline1::.ctor(System.Int32,System.Int32,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CurveTimeline1__ctor_m84E1D0D574EFFE180622AB51E745C794285AB877 (CurveTimeline1_tEB53273FC1D90C28D2A2357D4BF937251AE1E18C * __this, int32_t ___frameCount0, int32_t ___bezierCount1, String_t* ___propertyId2, const RuntimeMethod* method);
// System.Single Spine.CurveTimeline1::GetCurveValue(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float CurveTimeline1_GetCurveValue_m580B9BDEE2D339A4381002F87763EAD986F94182 (CurveTimeline1_tEB53273FC1D90C28D2A2357D4BF937251AE1E18C * __this, float ___time0, const RuntimeMethod* method);
// System.Void Spine.ExposedList`1<System.Int32>::Clear(System.Boolean)
inline void ExposedList_1_Clear_m9E1BE8027151460EB7E0FAB390B2846D15BA302B (ExposedList_1_tEB071484A7B70681ADB6BD9522EFC630CA5C5066 * __this, bool ___clearArray0, const RuntimeMethod* method)
{
	((  void (*) (ExposedList_1_tEB071484A7B70681ADB6BD9522EFC630CA5C5066 *, bool, const RuntimeMethod*))ExposedList_1_Clear_m9E1BE8027151460EB7E0FAB390B2846D15BA302B_gshared)(__this, ___clearArray0, method);
}
// Spine.ExposedList`1<T> Spine.ExposedList`1<System.Int32>::Resize(System.Int32)
inline ExposedList_1_tEB071484A7B70681ADB6BD9522EFC630CA5C5066 * ExposedList_1_Resize_m87D63C372E64631877CF0C3F964DD144A742AF2A (ExposedList_1_tEB071484A7B70681ADB6BD9522EFC630CA5C5066 * __this, int32_t ___newSize0, const RuntimeMethod* method)
{
	return ((  ExposedList_1_tEB071484A7B70681ADB6BD9522EFC630CA5C5066 * (*) (ExposedList_1_tEB071484A7B70681ADB6BD9522EFC630CA5C5066 *, int32_t, const RuntimeMethod*))ExposedList_1_Resize_m87D63C372E64631877CF0C3F964DD144A742AF2A_gshared)(__this, ___newSize0, method);
}
// Spine.ExposedList`1<T> Spine.ExposedList`1<System.Boolean>::Resize(System.Int32)
inline ExposedList_1_tAA9A80412EB5EC236EBA9FC15B2BD9A61915AE7E * ExposedList_1_Resize_m666C6341D5DC487C18356A856E93EF53AC33CB42 (ExposedList_1_tAA9A80412EB5EC236EBA9FC15B2BD9A61915AE7E * __this, int32_t ___newSize0, const RuntimeMethod* method)
{
	return ((  ExposedList_1_tAA9A80412EB5EC236EBA9FC15B2BD9A61915AE7E * (*) (ExposedList_1_tAA9A80412EB5EC236EBA9FC15B2BD9A61915AE7E *, int32_t, const RuntimeMethod*))ExposedList_1_Resize_m666C6341D5DC487C18356A856E93EF53AC33CB42_gshared)(__this, ___newSize0, method);
}
// System.Boolean Spine.Triangulator::IsConcave(System.Int32,System.Int32,System.Single[],System.Int32[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Triangulator_IsConcave_mDD6C3B0E0D6C7D764959472E51D5EBDDC7066931 (int32_t ___index0, int32_t ___vertexCount1, SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* ___vertices2, Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___indices3, const RuntimeMethod* method);
// System.Int32 System.Math::Max(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Math_Max_mD8AA27386BF012C65303FCDEA041B0CC65056E7B (int32_t ___val10, int32_t ___val21, const RuntimeMethod* method);
// System.Void Spine.ExposedList`1<System.Int32>::EnsureCapacity(System.Int32)
inline void ExposedList_1_EnsureCapacity_m51473D74740BFE47642E8A5FEF054C72D22FE11A (ExposedList_1_tEB071484A7B70681ADB6BD9522EFC630CA5C5066 * __this, int32_t ___min0, const RuntimeMethod* method)
{
	((  void (*) (ExposedList_1_tEB071484A7B70681ADB6BD9522EFC630CA5C5066 *, int32_t, const RuntimeMethod*))ExposedList_1_EnsureCapacity_m51473D74740BFE47642E8A5FEF054C72D22FE11A_gshared)(__this, ___min0, method);
}
// System.Boolean Spine.Triangulator::PositiveArea(System.Single,System.Single,System.Single,System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Triangulator_PositiveArea_mBF8877A07FD57FBA1B8C2A5914BD8B040115E8FA (float ___p1x0, float ___p1y1, float ___p2x2, float ___p2y3, float ___p3x4, float ___p3y5, const RuntimeMethod* method);
// System.Void Spine.ExposedList`1<System.Int32>::Add(T)
inline void ExposedList_1_Add_m65591272902D94AFAE294B4CDF30A465AA2274F8 (ExposedList_1_tEB071484A7B70681ADB6BD9522EFC630CA5C5066 * __this, int32_t ___item0, const RuntimeMethod* method)
{
	((  void (*) (ExposedList_1_tEB071484A7B70681ADB6BD9522EFC630CA5C5066 *, int32_t, const RuntimeMethod*))ExposedList_1_Add_m65591272902D94AFAE294B4CDF30A465AA2274F8_gshared)(__this, ___item0, method);
}
// System.Void Spine.ExposedList`1<System.Int32>::RemoveAt(System.Int32)
inline void ExposedList_1_RemoveAt_m74D0AC175C5B5B597106B9B6B37B6A51A8EF2B13 (ExposedList_1_tEB071484A7B70681ADB6BD9522EFC630CA5C5066 * __this, int32_t ___index0, const RuntimeMethod* method)
{
	((  void (*) (ExposedList_1_tEB071484A7B70681ADB6BD9522EFC630CA5C5066 *, int32_t, const RuntimeMethod*))ExposedList_1_RemoveAt_m74D0AC175C5B5B597106B9B6B37B6A51A8EF2B13_gshared)(__this, ___index0, method);
}
// System.Void Spine.ExposedList`1<System.Boolean>::RemoveAt(System.Int32)
inline void ExposedList_1_RemoveAt_m315AA4921C74B8F80A3A354E0524085CAEF82AA8 (ExposedList_1_tAA9A80412EB5EC236EBA9FC15B2BD9A61915AE7E * __this, int32_t ___index0, const RuntimeMethod* method)
{
	((  void (*) (ExposedList_1_tAA9A80412EB5EC236EBA9FC15B2BD9A61915AE7E *, int32_t, const RuntimeMethod*))ExposedList_1_RemoveAt_m315AA4921C74B8F80A3A354E0524085CAEF82AA8_gshared)(__this, ___index0, method);
}
// System.Void Spine.Pool`1<Spine.ExposedList`1<System.Single>>::Free(T)
inline void Pool_1_Free_mA877966FCAD605DAFF16CD72619CE9B5A0160A75 (Pool_1_tEBC6CCDAC2A4D2FDEE1A4FC452D0D72D0F4142B9 * __this, ExposedList_1_t9F8622C73EB60A6882B2968C1C0F1706D574F526 * ___obj0, const RuntimeMethod* method)
{
	((  void (*) (Pool_1_tEBC6CCDAC2A4D2FDEE1A4FC452D0D72D0F4142B9 *, ExposedList_1_t9F8622C73EB60A6882B2968C1C0F1706D574F526 *, const RuntimeMethod*))Pool_1_Free_m14FD14CF2D5AD24F2BDAF926BFEC8BD24C29D378_gshared)(__this, ___obj0, method);
}
// System.Void Spine.ExposedList`1<Spine.ExposedList`1<System.Single>>::Clear(System.Boolean)
inline void ExposedList_1_Clear_mBC51B78D1DACC555F6F73D293AC8E6D6DC2FEC18 (ExposedList_1_tFAEEFBED9EABAD893C31C789759FD1BA692F0289 * __this, bool ___clearArray0, const RuntimeMethod* method)
{
	((  void (*) (ExposedList_1_tFAEEFBED9EABAD893C31C789759FD1BA692F0289 *, bool, const RuntimeMethod*))ExposedList_1_Clear_mDCFB798E72809948C224EC31C9C8EECF771D195E_gshared)(__this, ___clearArray0, method);
}
// System.Void Spine.Pool`1<Spine.ExposedList`1<System.Int32>>::Free(T)
inline void Pool_1_Free_m8AD43187DBD866A8B28F74E7FD9A90D7A5834805 (Pool_1_t5CA90CE7EBA311405CE9C8F1E0C4DDFE861C384A * __this, ExposedList_1_tEB071484A7B70681ADB6BD9522EFC630CA5C5066 * ___obj0, const RuntimeMethod* method)
{
	((  void (*) (Pool_1_t5CA90CE7EBA311405CE9C8F1E0C4DDFE861C384A *, ExposedList_1_tEB071484A7B70681ADB6BD9522EFC630CA5C5066 *, const RuntimeMethod*))Pool_1_Free_m14FD14CF2D5AD24F2BDAF926BFEC8BD24C29D378_gshared)(__this, ___obj0, method);
}
// System.Void Spine.ExposedList`1<Spine.ExposedList`1<System.Int32>>::Clear(System.Boolean)
inline void ExposedList_1_Clear_m40B61D0D728CF9B427F957C4A8E7A4A364690255 (ExposedList_1_tE018626AD135D00E2FCAF5578BADE795F5CCDC90 * __this, bool ___clearArray0, const RuntimeMethod* method)
{
	((  void (*) (ExposedList_1_tE018626AD135D00E2FCAF5578BADE795F5CCDC90 *, bool, const RuntimeMethod*))ExposedList_1_Clear_mDCFB798E72809948C224EC31C9C8EECF771D195E_gshared)(__this, ___clearArray0, method);
}
// T Spine.Pool`1<Spine.ExposedList`1<System.Int32>>::Obtain()
inline ExposedList_1_tEB071484A7B70681ADB6BD9522EFC630CA5C5066 * Pool_1_Obtain_mCD31B8A93DC6FACE13671D18D42170131A686CF1 (Pool_1_t5CA90CE7EBA311405CE9C8F1E0C4DDFE861C384A * __this, const RuntimeMethod* method)
{
	return ((  ExposedList_1_tEB071484A7B70681ADB6BD9522EFC630CA5C5066 * (*) (Pool_1_t5CA90CE7EBA311405CE9C8F1E0C4DDFE861C384A *, const RuntimeMethod*))Pool_1_Obtain_mCB782D765DAC2EB6E6E56B7321A64102D5A58DC7_gshared)(__this, method);
}
// T Spine.Pool`1<Spine.ExposedList`1<System.Single>>::Obtain()
inline ExposedList_1_t9F8622C73EB60A6882B2968C1C0F1706D574F526 * Pool_1_Obtain_m30E900D977A82966F61786948EEFD33E110C06FB (Pool_1_tEBC6CCDAC2A4D2FDEE1A4FC452D0D72D0F4142B9 * __this, const RuntimeMethod* method)
{
	return ((  ExposedList_1_t9F8622C73EB60A6882B2968C1C0F1706D574F526 * (*) (Pool_1_tEBC6CCDAC2A4D2FDEE1A4FC452D0D72D0F4142B9 *, const RuntimeMethod*))Pool_1_Obtain_mCB782D765DAC2EB6E6E56B7321A64102D5A58DC7_gshared)(__this, method);
}
// System.Void Spine.ExposedList`1<System.Single>::Clear(System.Boolean)
inline void ExposedList_1_Clear_m56FD9B006AFA6C0C3B822A2460ED52D4FA72D847 (ExposedList_1_t9F8622C73EB60A6882B2968C1C0F1706D574F526 * __this, bool ___clearArray0, const RuntimeMethod* method)
{
	((  void (*) (ExposedList_1_t9F8622C73EB60A6882B2968C1C0F1706D574F526 *, bool, const RuntimeMethod*))ExposedList_1_Clear_m56FD9B006AFA6C0C3B822A2460ED52D4FA72D847_gshared)(__this, ___clearArray0, method);
}
// System.Int32 Spine.Triangulator::Winding(System.Single,System.Single,System.Single,System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Triangulator_Winding_mF333A8016360F473FCF182CD6E821198E9EB7D16 (float ___p1x0, float ___p1y1, float ___p2x2, float ___p2y3, float ___p3x4, float ___p3y5, const RuntimeMethod* method);
// System.Void Spine.ExposedList`1<System.Single>::Add(T)
inline void ExposedList_1_Add_m5B673948ABFBB0479F3A81270A22A4295AEF619B (ExposedList_1_t9F8622C73EB60A6882B2968C1C0F1706D574F526 * __this, float ___item0, const RuntimeMethod* method)
{
	((  void (*) (ExposedList_1_t9F8622C73EB60A6882B2968C1C0F1706D574F526 *, float, const RuntimeMethod*))ExposedList_1_Add_m5B673948ABFBB0479F3A81270A22A4295AEF619B_gshared)(__this, ___item0, method);
}
// System.Void Spine.ExposedList`1<Spine.ExposedList`1<System.Single>>::Add(T)
inline void ExposedList_1_Add_m9CE0A2C0C8C7E99FB44E2D206DB6FAF36BB3C576 (ExposedList_1_tFAEEFBED9EABAD893C31C789759FD1BA692F0289 * __this, ExposedList_1_t9F8622C73EB60A6882B2968C1C0F1706D574F526 * ___item0, const RuntimeMethod* method)
{
	((  void (*) (ExposedList_1_tFAEEFBED9EABAD893C31C789759FD1BA692F0289 *, ExposedList_1_t9F8622C73EB60A6882B2968C1C0F1706D574F526 *, const RuntimeMethod*))ExposedList_1_Add_m4364CE9D5F725E9640B50171826E9EEE1E5E8927_gshared)(__this, ___item0, method);
}
// System.Void Spine.ExposedList`1<Spine.ExposedList`1<System.Int32>>::Add(T)
inline void ExposedList_1_Add_m94D79351365A6FA9EBD26A3CA00D4839BE613B6A (ExposedList_1_tE018626AD135D00E2FCAF5578BADE795F5CCDC90 * __this, ExposedList_1_tEB071484A7B70681ADB6BD9522EFC630CA5C5066 * ___item0, const RuntimeMethod* method)
{
	((  void (*) (ExposedList_1_tE018626AD135D00E2FCAF5578BADE795F5CCDC90 *, ExposedList_1_tEB071484A7B70681ADB6BD9522EFC630CA5C5066 *, const RuntimeMethod*))ExposedList_1_Add_m4364CE9D5F725E9640B50171826E9EEE1E5E8927_gshared)(__this, ___item0, method);
}
// System.Void Spine.ExposedList`1<Spine.ExposedList`1<System.Single>>::RemoveAt(System.Int32)
inline void ExposedList_1_RemoveAt_mABBDA48F0096E88AB0169B176320716F8EE471FB (ExposedList_1_tFAEEFBED9EABAD893C31C789759FD1BA692F0289 * __this, int32_t ___index0, const RuntimeMethod* method)
{
	((  void (*) (ExposedList_1_tFAEEFBED9EABAD893C31C789759FD1BA692F0289 *, int32_t, const RuntimeMethod*))ExposedList_1_RemoveAt_m50C8AA61CDCED70A8EE1FAF5FDD73F558952C56A_gshared)(__this, ___index0, method);
}
// System.Void Spine.ExposedList`1<Spine.ExposedList`1<System.Int32>>::RemoveAt(System.Int32)
inline void ExposedList_1_RemoveAt_m0629ED8D156A78115171F2746A855438C3DBE81C (ExposedList_1_tE018626AD135D00E2FCAF5578BADE795F5CCDC90 * __this, int32_t ___index0, const RuntimeMethod* method)
{
	((  void (*) (ExposedList_1_tE018626AD135D00E2FCAF5578BADE795F5CCDC90 *, int32_t, const RuntimeMethod*))ExposedList_1_RemoveAt_m50C8AA61CDCED70A8EE1FAF5FDD73F558952C56A_gshared)(__this, ___index0, method);
}
// System.Void Spine.ExposedList`1<Spine.ExposedList`1<System.Single>>::.ctor()
inline void ExposedList_1__ctor_m02755087651BB67AD2B2D4D758AE77AFD7DC440B (ExposedList_1_tFAEEFBED9EABAD893C31C789759FD1BA692F0289 * __this, const RuntimeMethod* method)
{
	((  void (*) (ExposedList_1_tFAEEFBED9EABAD893C31C789759FD1BA692F0289 *, const RuntimeMethod*))ExposedList_1__ctor_mFFE6EDA61CD5E083C09C3270D95F214371165497_gshared)(__this, method);
}
// System.Void Spine.ExposedList`1<Spine.ExposedList`1<System.Int32>>::.ctor()
inline void ExposedList_1__ctor_m84177DC3659E1B9F2837C8ADDC017ADDA00B36A0 (ExposedList_1_tE018626AD135D00E2FCAF5578BADE795F5CCDC90 * __this, const RuntimeMethod* method)
{
	((  void (*) (ExposedList_1_tE018626AD135D00E2FCAF5578BADE795F5CCDC90 *, const RuntimeMethod*))ExposedList_1__ctor_mFFE6EDA61CD5E083C09C3270D95F214371165497_gshared)(__this, method);
}
// System.Void Spine.ExposedList`1<System.Int32>::.ctor()
inline void ExposedList_1__ctor_m9BB5379A9A5D0484D07AE68B3215F94B8093DFD2 (ExposedList_1_tEB071484A7B70681ADB6BD9522EFC630CA5C5066 * __this, const RuntimeMethod* method)
{
	((  void (*) (ExposedList_1_tEB071484A7B70681ADB6BD9522EFC630CA5C5066 *, const RuntimeMethod*))ExposedList_1__ctor_m9BB5379A9A5D0484D07AE68B3215F94B8093DFD2_gshared)(__this, method);
}
// System.Void Spine.ExposedList`1<System.Boolean>::.ctor()
inline void ExposedList_1__ctor_mB0F2F25C8D7C8DA90320D609A4DC4857D9ECC79C (ExposedList_1_tAA9A80412EB5EC236EBA9FC15B2BD9A61915AE7E * __this, const RuntimeMethod* method)
{
	((  void (*) (ExposedList_1_tAA9A80412EB5EC236EBA9FC15B2BD9A61915AE7E *, const RuntimeMethod*))ExposedList_1__ctor_mB0F2F25C8D7C8DA90320D609A4DC4857D9ECC79C_gshared)(__this, method);
}
// System.Void Spine.Pool`1<Spine.ExposedList`1<System.Single>>::.ctor(System.Int32,System.Int32)
inline void Pool_1__ctor_mEF3423A00009591979CA692DDE12CCC2FF4E8C26 (Pool_1_tEBC6CCDAC2A4D2FDEE1A4FC452D0D72D0F4142B9 * __this, int32_t ___initialCapacity0, int32_t ___max1, const RuntimeMethod* method)
{
	((  void (*) (Pool_1_tEBC6CCDAC2A4D2FDEE1A4FC452D0D72D0F4142B9 *, int32_t, int32_t, const RuntimeMethod*))Pool_1__ctor_m8B2EFD1D9088A4E150064AF899EDF8BEC4716354_gshared)(__this, ___initialCapacity0, ___max1, method);
}
// System.Void Spine.Pool`1<Spine.ExposedList`1<System.Int32>>::.ctor(System.Int32,System.Int32)
inline void Pool_1__ctor_m7C7FBE91695216C54B23152A69A8EEB750808334 (Pool_1_t5CA90CE7EBA311405CE9C8F1E0C4DDFE861C384A * __this, int32_t ___initialCapacity0, int32_t ___max1, const RuntimeMethod* method)
{
	((  void (*) (Pool_1_t5CA90CE7EBA311405CE9C8F1E0C4DDFE861C384A *, int32_t, int32_t, const RuntimeMethod*))Pool_1__ctor_m8B2EFD1D9088A4E150064AF899EDF8BEC4716354_gshared)(__this, ___initialCapacity0, ___max1, method);
}
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405 (RuntimeObject * __this, const RuntimeMethod* method);
// System.Void Spine.Attachment::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Attachment__ctor_m25D4C3124669EB5D1A033934369C6C3ED9A60662 (Attachment_tA85256BF51006C369687395955B6A6B51D432F21 * __this, String_t* ___name0, const RuntimeMethod* method);
// System.Void System.Threading.Monitor::Enter(System.Object,System.Boolean&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Monitor_Enter_mBEB6CC84184B46F26375EC3FC8921D16E48EA4C4 (RuntimeObject * ___obj0, bool* ___lockTaken1, const RuntimeMethod* method);
// System.Void System.Threading.Monitor::Exit(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Monitor_Exit_mA776B403DA88AC77CDEEF67AB9F0D0E77ABD254A (RuntimeObject * ___obj0, const RuntimeMethod* method);
// System.Void Spine.VertexAttachment::ComputeWorldVertices(Spine.Slot,System.Int32,System.Int32,System.Single[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VertexAttachment_ComputeWorldVertices_m7D8E0D678752C843E1A901B8EF2899F5C583C0B3 (VertexAttachment_t9CE5B53FEDF378FFCADECD92F0ABF5F1DFDFFF36 * __this, Slot_t754D2EC8AE03CF765F34A909762BE4E533BEF635 * ___slot0, int32_t ___start1, int32_t ___count2, SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* ___worldVertices3, int32_t ___offset4, int32_t ___stride5, const RuntimeMethod* method);
// System.Void System.Array::Copy(System.Array,System.Int32,System.Array,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Copy_m3F127FFB5149532135043FFE285F9177C80CB877 (RuntimeArray * ___sourceArray0, int32_t ___sourceIndex1, RuntimeArray * ___destinationArray2, int32_t ___destinationIndex3, int32_t ___length4, const RuntimeMethod* method);
// System.Void Spine.AnimationStateData/AnimationPair::.ctor(Spine.Animation,Spine.Animation)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimationPair__ctor_m74829679B461CA503FC742ED9C15CFAC3E011116 (AnimationPair_t2A53EA37F4B1C93E6BBB0F04E2632819498E92E9 * __this, Animation_tE800D5597964656F48F303755E4C6C66462E8E90 * ___a10, Animation_tE800D5597964656F48F303755E4C6C66462E8E90 * ___a21, const RuntimeMethod* method);
// System.String Spine.AnimationStateData/AnimationPair::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AnimationPair_ToString_mF05A63E1FCE6F3B07BFB840B7DD87B72C106B167 (AnimationPair_t2A53EA37F4B1C93E6BBB0F04E2632819498E92E9 * __this, const RuntimeMethod* method);
// System.Void Spine.AnimationStateData/AnimationPairComparer::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimationPairComparer__ctor_m2EFAE31FB362D087220453C686F54320B56D03CC (AnimationPairComparer_tCF4856346F6E3F6713561B39646846CE27877BE3 * __this, const RuntimeMethod* method);
// System.Globalization.CultureInfo System.Globalization.CultureInfo::get_InvariantCulture()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * CultureInfo_get_InvariantCulture_m9FAAFAF8A00091EE1FCB7098AD3F163ECDF02164 (const RuntimeMethod* method);
// System.Int32 System.Int32::Parse(System.String,System.IFormatProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Int32_Parse_mCCC6B0A23CE31124F68EF486CC61705CDE61F084 (String_t* ___s0, RuntimeObject* ___provider1, const RuntimeMethod* method);
// System.Type System.Type::GetTypeFromHandle(System.RuntimeTypeHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t * Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E (RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  ___handle0, const RuntimeMethod* method);
// System.Object System.Enum::Parse(System.Type,System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Enum_Parse_m42052064519239A11D605CD696EC0FD90A0FB039 (Type_t * ___enumType0, String_t* ___value1, bool ___ignoreCase2, const RuntimeMethod* method);
// System.Int32 System.String::IndexOf(System.Char)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t String_IndexOf_mEE2D2F738175E3FF05580366D6226DBD673CA2BE (String_t* __this, Il2CppChar ___value0, const RuntimeMethod* method);
// System.Boolean System.String::op_Equality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB (String_t* ___a0, String_t* ___b1, const RuntimeMethod* method);
// System.Boolean System.String::op_Inequality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Inequality_mDDA2DDED3E7EF042987EB7180EE3E88105F0AAE2 (String_t* ___a0, String_t* ___b1, const RuntimeMethod* method);
// System.Void Spine.EventQueue/EventQueueEntry::.ctor(Spine.EventQueue/EventType,Spine.TrackEntry,Spine.Event)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EventQueueEntry__ctor_m87A50C8A0670518D92C3D095B1D6019068B353EF (EventQueueEntry_tD0E6A9858C87415E513F4E6E71399D827FF4424C * __this, int32_t ___eventType0, TrackEntry_t8B6FF31E96FE5CFBE3B92DC9E4FB33766342A20D * ___trackEntry1, Event_tAB253EC43580D8724548C638BAB02EBB587A7957 * ___e2, const RuntimeMethod* method);
// System.Void System.IO.EndOfStreamException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EndOfStreamException__ctor_m2D2184E744B5B0762EA690CFD757F64E0BC6D539 (EndOfStreamException_tDA8337E29A941EFB3E26721033B1826C1ACB0059 * __this, const RuntimeMethod* method);
// System.Single System.BitConverter::ToSingle(System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float BitConverter_ToSingle_mF9F12631D5CA7C2D4BFE3F89A22D39FB45E1986F (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___value0, int32_t ___startIndex1, const RuntimeMethod* method);
// System.Int32 Spine.SkeletonBinary/SkeletonInput::ReadInt(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SkeletonInput_ReadInt_m3DABE27E31071D6040DF41DD2A613D3CD48FB543 (SkeletonInput_tD0B7F3FDB991A3A0D0563BAD64BF45984FC8DC6A * __this, bool ___optimizePositive0, const RuntimeMethod* method);
// System.Void Spine.SkeletonBinary/SkeletonInput::ReadFully(System.Byte[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SkeletonInput_ReadFully_m0C4DC8DA2A372732B0E514A341EC75E0079FAFBF (SkeletonInput_tD0B7F3FDB991A3A0D0563BAD64BF45984FC8DC6A * __this, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___buffer0, int32_t ___offset1, int32_t ___length2, const RuntimeMethod* method);
// System.Text.Encoding System.Text.Encoding::get_UTF8()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * Encoding_get_UTF8_mC877FB3137BBD566AEE7B15F9BF61DC4EF8F5E5E (const RuntimeMethod* method);
// System.Int64 Spine.SkeletonBinary/SkeletonInput::ReadLong()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t SkeletonInput_ReadLong_m68876F3178280533715E950245B292E4CA86C9E2 (SkeletonInput_tD0B7F3FDB991A3A0D0563BAD64BF45984FC8DC6A * __this, const RuntimeMethod* method);
// System.String Spine.SkeletonBinary/SkeletonInput::ReadString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SkeletonInput_ReadString_m6428104EADD77A1F3E22A73038830C769B1F8381 (SkeletonInput_tD0B7F3FDB991A3A0D0563BAD64BF45984FC8DC6A * __this, const RuntimeMethod* method);
// System.Char System.String::get_Chars(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar String_get_Chars_m9B1A5E4C8D70AA33A60F03735AF7B77AB9DBBA70 (String_t* __this, int32_t ___index0, const RuntimeMethod* method);
// System.Boolean System.Char::IsDigit(System.Char)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Char_IsDigit_mC19135099993954C820E030363B943034575F504 (Il2CppChar ___c0, const RuntimeMethod* method);
// System.String Spine.SkeletonBinary/SkeletonInput::GetVersionStringOld3X()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SkeletonInput_GetVersionStringOld3X_m77C851E61EFF9375B2296C5B65C3AF749AD3CE91 (SkeletonInput_tD0B7F3FDB991A3A0D0563BAD64BF45984FC8DC6A * __this, const RuntimeMethod* method);
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B (String_t* ___str00, String_t* ___str11, const RuntimeMethod* method);
// System.Void System.ArgumentException::.ctor(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentException__ctor_m71044C2110E357B71A1C30D2561C3F861AF1DC0D (ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 * __this, String_t* ___message0, String_t* ___paramName1, const RuntimeMethod* method);
// System.Void Spine.Skin/SkinEntry::.ctor(System.Int32,System.String,Spine.Attachment)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SkinEntry__ctor_m1855C514A973635B0644A9DA0FA8CFEF7E54098E (SkinEntry_t4112F7EB8FA7FAC2011F2139F5C251CEE83393C4 * __this, int32_t ___slotIndex0, String_t* ___name1, Attachment_tA85256BF51006C369687395955B6A6B51D432F21 * ___attachment2, const RuntimeMethod* method);
// System.Int32 Spine.Skin/SkinEntry::get_SlotIndex()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t SkinEntry_get_SlotIndex_m60F18BF0EF0A626BAD2703DDFF331C1AC354DAEF_inline (SkinEntry_t4112F7EB8FA7FAC2011F2139F5C251CEE83393C4 * __this, const RuntimeMethod* method);
// System.String Spine.Skin/SkinEntry::get_Name()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* SkinEntry_get_Name_m5177BC3C9F82E943338843B4D1626EC2E9D4938B_inline (SkinEntry_t4112F7EB8FA7FAC2011F2139F5C251CEE83393C4 * __this, const RuntimeMethod* method);
// Spine.Attachment Spine.Skin/SkinEntry::get_Attachment()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Attachment_tA85256BF51006C369687395955B6A6B51D432F21 * SkinEntry_get_Attachment_m6574C605D1249A88A1B15385C94170914D120843_inline (SkinEntry_t4112F7EB8FA7FAC2011F2139F5C251CEE83393C4 * __this, const RuntimeMethod* method);
// System.Void System.ArgumentException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentException__ctor_m2D35EAD113C2ADC99EB17B940A2097A93FD23EFC (ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 * __this, String_t* ___message0, const RuntimeMethod* method);
// System.Void System.ArgumentNullException::.ctor(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentNullException__ctor_mAD2F05A24C92A657CBCA8C43A9A373C53739A283 (ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB * __this, String_t* ___paramName0, String_t* ___message1, const RuntimeMethod* method);
// System.Void Spine.Skin/SkinKey::.ctor(System.Int32,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SkinKey__ctor_m186DE323903429C9B364961256244CAB324D0A4A (SkinKey_t375635E838ECDEB11B7C69698A0DECC8C37075E8 * __this, int32_t ___slotIndex0, String_t* ___name1, const RuntimeMethod* method);
// System.Boolean System.String::Equals(System.String,System.String,System.StringComparison)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_Equals_mD65682B0BB7933CC7A8561AE34DED02E4F3BBBE5 (String_t* ___a0, String_t* ___b1, int32_t ___comparisonType2, const RuntimeMethod* method);
// System.Void Spine.Skin/SkinKeyComparer::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SkinKeyComparer__ctor_m19150DFF69B53B377F62562BBB149C7FABC909A0 (SkinKeyComparer_t4F9D27D9EB27FB8A643889C17AD3E9682592B764 * __this, const RuntimeMethod* method);
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Spine.ExposedList`1<Spine.BoneData> Spine.TransformConstraintData::get_Bones()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ExposedList_1_t55FC025D5A735E30067A5D1CCB31D11EA181CF36 * TransformConstraintData_get_Bones_m6BB8037D41EC56C5B5E49280876B5E9F6E1D47EB (TransformConstraintData_t5B434A578868FB4E1BBBF29E3024FF07B5D0EF59 * __this, const RuntimeMethod* method)
{
	{
		// public ExposedList<BoneData> Bones { get { return bones; } }
		ExposedList_1_t55FC025D5A735E30067A5D1CCB31D11EA181CF36 * L_0 = __this->get_bones_3();
		return L_0;
	}
}
// Spine.BoneData Spine.TransformConstraintData::get_Target()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BoneData_t48A671E6818E76905840CC122A96889DDCB92A51 * TransformConstraintData_get_Target_mDBB98350468322FE0D74377C66641920CCEDB16F (TransformConstraintData_t5B434A578868FB4E1BBBF29E3024FF07B5D0EF59 * __this, const RuntimeMethod* method)
{
	{
		// public BoneData Target { get { return target; } set { target = value; } }
		BoneData_t48A671E6818E76905840CC122A96889DDCB92A51 * L_0 = __this->get_target_4();
		return L_0;
	}
}
// System.Void Spine.TransformConstraintData::set_Target(Spine.BoneData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TransformConstraintData_set_Target_m6EF899BC555930BFABC48BB255B91EC72D5D7B78 (TransformConstraintData_t5B434A578868FB4E1BBBF29E3024FF07B5D0EF59 * __this, BoneData_t48A671E6818E76905840CC122A96889DDCB92A51 * ___value0, const RuntimeMethod* method)
{
	{
		// public BoneData Target { get { return target; } set { target = value; } }
		BoneData_t48A671E6818E76905840CC122A96889DDCB92A51 * L_0 = ___value0;
		__this->set_target_4(L_0);
		// public BoneData Target { get { return target; } set { target = value; } }
		return;
	}
}
// System.Single Spine.TransformConstraintData::get_MixRotate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float TransformConstraintData_get_MixRotate_m7C59527C6FFBF98533FE2C1727C8100600922CF5 (TransformConstraintData_t5B434A578868FB4E1BBBF29E3024FF07B5D0EF59 * __this, const RuntimeMethod* method)
{
	{
		// public float MixRotate { get { return mixRotate; } set { mixRotate = value; } }
		float L_0 = __this->get_mixRotate_5();
		return L_0;
	}
}
// System.Void Spine.TransformConstraintData::set_MixRotate(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TransformConstraintData_set_MixRotate_m9C4A02740AE6E0A64D8BA0716E0BD2025A75B788 (TransformConstraintData_t5B434A578868FB4E1BBBF29E3024FF07B5D0EF59 * __this, float ___value0, const RuntimeMethod* method)
{
	{
		// public float MixRotate { get { return mixRotate; } set { mixRotate = value; } }
		float L_0 = ___value0;
		__this->set_mixRotate_5(L_0);
		// public float MixRotate { get { return mixRotate; } set { mixRotate = value; } }
		return;
	}
}
// System.Single Spine.TransformConstraintData::get_MixX()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float TransformConstraintData_get_MixX_mEAFC191733EA44FE0CDF6CB1EFE8F52FBFBB62B8 (TransformConstraintData_t5B434A578868FB4E1BBBF29E3024FF07B5D0EF59 * __this, const RuntimeMethod* method)
{
	{
		// public float MixX { get { return mixX; } set { mixX = value; } }
		float L_0 = __this->get_mixX_6();
		return L_0;
	}
}
// System.Void Spine.TransformConstraintData::set_MixX(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TransformConstraintData_set_MixX_m46C5032F38E95C70BB432E57BC903FD75DDFCE94 (TransformConstraintData_t5B434A578868FB4E1BBBF29E3024FF07B5D0EF59 * __this, float ___value0, const RuntimeMethod* method)
{
	{
		// public float MixX { get { return mixX; } set { mixX = value; } }
		float L_0 = ___value0;
		__this->set_mixX_6(L_0);
		// public float MixX { get { return mixX; } set { mixX = value; } }
		return;
	}
}
// System.Single Spine.TransformConstraintData::get_MixY()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float TransformConstraintData_get_MixY_m87EF1B7DE34F62F91B260444E24C616005B89E08 (TransformConstraintData_t5B434A578868FB4E1BBBF29E3024FF07B5D0EF59 * __this, const RuntimeMethod* method)
{
	{
		// public float MixY { get { return mixY; } set { mixY = value; } }
		float L_0 = __this->get_mixY_7();
		return L_0;
	}
}
// System.Void Spine.TransformConstraintData::set_MixY(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TransformConstraintData_set_MixY_mEF6CABEA43A2F144A1DA26C37CB605828F78B689 (TransformConstraintData_t5B434A578868FB4E1BBBF29E3024FF07B5D0EF59 * __this, float ___value0, const RuntimeMethod* method)
{
	{
		// public float MixY { get { return mixY; } set { mixY = value; } }
		float L_0 = ___value0;
		__this->set_mixY_7(L_0);
		// public float MixY { get { return mixY; } set { mixY = value; } }
		return;
	}
}
// System.Single Spine.TransformConstraintData::get_MixScaleX()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float TransformConstraintData_get_MixScaleX_mD55C589353D015BBA91EE2B262741036CA62A4CA (TransformConstraintData_t5B434A578868FB4E1BBBF29E3024FF07B5D0EF59 * __this, const RuntimeMethod* method)
{
	{
		// public float MixScaleX { get { return mixScaleX; } set { mixScaleX = value; } }
		float L_0 = __this->get_mixScaleX_8();
		return L_0;
	}
}
// System.Void Spine.TransformConstraintData::set_MixScaleX(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TransformConstraintData_set_MixScaleX_m8FCF4A14CB771F8498AAD4F6FDD5E6F8F4264135 (TransformConstraintData_t5B434A578868FB4E1BBBF29E3024FF07B5D0EF59 * __this, float ___value0, const RuntimeMethod* method)
{
	{
		// public float MixScaleX { get { return mixScaleX; } set { mixScaleX = value; } }
		float L_0 = ___value0;
		__this->set_mixScaleX_8(L_0);
		// public float MixScaleX { get { return mixScaleX; } set { mixScaleX = value; } }
		return;
	}
}
// System.Single Spine.TransformConstraintData::get_MixScaleY()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float TransformConstraintData_get_MixScaleY_m9F720C2A646830B70A7943F8CA51837EAB153248 (TransformConstraintData_t5B434A578868FB4E1BBBF29E3024FF07B5D0EF59 * __this, const RuntimeMethod* method)
{
	{
		// public float MixScaleY { get { return mixScaleY; } set { mixScaleY = value; } }
		float L_0 = __this->get_mixScaleY_9();
		return L_0;
	}
}
// System.Void Spine.TransformConstraintData::set_MixScaleY(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TransformConstraintData_set_MixScaleY_mCC474F518D88A38D21542676ABEF00B71D3F0701 (TransformConstraintData_t5B434A578868FB4E1BBBF29E3024FF07B5D0EF59 * __this, float ___value0, const RuntimeMethod* method)
{
	{
		// public float MixScaleY { get { return mixScaleY; } set { mixScaleY = value; } }
		float L_0 = ___value0;
		__this->set_mixScaleY_9(L_0);
		// public float MixScaleY { get { return mixScaleY; } set { mixScaleY = value; } }
		return;
	}
}
// System.Single Spine.TransformConstraintData::get_MixShearY()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float TransformConstraintData_get_MixShearY_mDB418B51BF4E05CD338E965DDDE2214B64F09E20 (TransformConstraintData_t5B434A578868FB4E1BBBF29E3024FF07B5D0EF59 * __this, const RuntimeMethod* method)
{
	{
		// public float MixShearY { get { return mixShearY; } set { mixShearY = value; } }
		float L_0 = __this->get_mixShearY_10();
		return L_0;
	}
}
// System.Void Spine.TransformConstraintData::set_MixShearY(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TransformConstraintData_set_MixShearY_m5DE1B2FCA71BD80F12D3FCFCABF118EAFBAA51FE (TransformConstraintData_t5B434A578868FB4E1BBBF29E3024FF07B5D0EF59 * __this, float ___value0, const RuntimeMethod* method)
{
	{
		// public float MixShearY { get { return mixShearY; } set { mixShearY = value; } }
		float L_0 = ___value0;
		__this->set_mixShearY_10(L_0);
		// public float MixShearY { get { return mixShearY; } set { mixShearY = value; } }
		return;
	}
}
// System.Single Spine.TransformConstraintData::get_OffsetRotation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float TransformConstraintData_get_OffsetRotation_mF5F756B8B9D4F9E7A80FCCD13709C6A916AAB9FD (TransformConstraintData_t5B434A578868FB4E1BBBF29E3024FF07B5D0EF59 * __this, const RuntimeMethod* method)
{
	{
		// public float OffsetRotation { get { return offsetRotation; } set { offsetRotation = value; } }
		float L_0 = __this->get_offsetRotation_11();
		return L_0;
	}
}
// System.Void Spine.TransformConstraintData::set_OffsetRotation(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TransformConstraintData_set_OffsetRotation_mDD03D3FB8667DA4B6F9F83CD89EEB9CF5B8EF0F7 (TransformConstraintData_t5B434A578868FB4E1BBBF29E3024FF07B5D0EF59 * __this, float ___value0, const RuntimeMethod* method)
{
	{
		// public float OffsetRotation { get { return offsetRotation; } set { offsetRotation = value; } }
		float L_0 = ___value0;
		__this->set_offsetRotation_11(L_0);
		// public float OffsetRotation { get { return offsetRotation; } set { offsetRotation = value; } }
		return;
	}
}
// System.Single Spine.TransformConstraintData::get_OffsetX()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float TransformConstraintData_get_OffsetX_mD99D5F119EF7EA41D1EAE1CDAFD60D9829C95D7A (TransformConstraintData_t5B434A578868FB4E1BBBF29E3024FF07B5D0EF59 * __this, const RuntimeMethod* method)
{
	{
		// public float OffsetX { get { return offsetX; } set { offsetX = value; } }
		float L_0 = __this->get_offsetX_12();
		return L_0;
	}
}
// System.Void Spine.TransformConstraintData::set_OffsetX(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TransformConstraintData_set_OffsetX_m726017165F22C9D26416A796E02681C31DAF018D (TransformConstraintData_t5B434A578868FB4E1BBBF29E3024FF07B5D0EF59 * __this, float ___value0, const RuntimeMethod* method)
{
	{
		// public float OffsetX { get { return offsetX; } set { offsetX = value; } }
		float L_0 = ___value0;
		__this->set_offsetX_12(L_0);
		// public float OffsetX { get { return offsetX; } set { offsetX = value; } }
		return;
	}
}
// System.Single Spine.TransformConstraintData::get_OffsetY()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float TransformConstraintData_get_OffsetY_m0E2C89D9812A0479CF41B0010AB073F64619B172 (TransformConstraintData_t5B434A578868FB4E1BBBF29E3024FF07B5D0EF59 * __this, const RuntimeMethod* method)
{
	{
		// public float OffsetY { get { return offsetY; } set { offsetY = value; } }
		float L_0 = __this->get_offsetY_13();
		return L_0;
	}
}
// System.Void Spine.TransformConstraintData::set_OffsetY(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TransformConstraintData_set_OffsetY_mE58B5CBB7786DE712577DEEC0E2EF421C4AAAF19 (TransformConstraintData_t5B434A578868FB4E1BBBF29E3024FF07B5D0EF59 * __this, float ___value0, const RuntimeMethod* method)
{
	{
		// public float OffsetY { get { return offsetY; } set { offsetY = value; } }
		float L_0 = ___value0;
		__this->set_offsetY_13(L_0);
		// public float OffsetY { get { return offsetY; } set { offsetY = value; } }
		return;
	}
}
// System.Single Spine.TransformConstraintData::get_OffsetScaleX()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float TransformConstraintData_get_OffsetScaleX_mCE5B282876631F5DF0ECD758E68FC3245FD8BBC9 (TransformConstraintData_t5B434A578868FB4E1BBBF29E3024FF07B5D0EF59 * __this, const RuntimeMethod* method)
{
	{
		// public float OffsetScaleX { get { return offsetScaleX; } set { offsetScaleX = value; } }
		float L_0 = __this->get_offsetScaleX_14();
		return L_0;
	}
}
// System.Void Spine.TransformConstraintData::set_OffsetScaleX(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TransformConstraintData_set_OffsetScaleX_mB471C13E3E68FB399C31E02146F32FE623B51A9E (TransformConstraintData_t5B434A578868FB4E1BBBF29E3024FF07B5D0EF59 * __this, float ___value0, const RuntimeMethod* method)
{
	{
		// public float OffsetScaleX { get { return offsetScaleX; } set { offsetScaleX = value; } }
		float L_0 = ___value0;
		__this->set_offsetScaleX_14(L_0);
		// public float OffsetScaleX { get { return offsetScaleX; } set { offsetScaleX = value; } }
		return;
	}
}
// System.Single Spine.TransformConstraintData::get_OffsetScaleY()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float TransformConstraintData_get_OffsetScaleY_mB8738A1A15B2849A14D222E9556940AEA13F67FD (TransformConstraintData_t5B434A578868FB4E1BBBF29E3024FF07B5D0EF59 * __this, const RuntimeMethod* method)
{
	{
		// public float OffsetScaleY { get { return offsetScaleY; } set { offsetScaleY = value; } }
		float L_0 = __this->get_offsetScaleY_15();
		return L_0;
	}
}
// System.Void Spine.TransformConstraintData::set_OffsetScaleY(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TransformConstraintData_set_OffsetScaleY_m7FAEB4258CA442D71FA5CE866EB66B6C850ECE0C (TransformConstraintData_t5B434A578868FB4E1BBBF29E3024FF07B5D0EF59 * __this, float ___value0, const RuntimeMethod* method)
{
	{
		// public float OffsetScaleY { get { return offsetScaleY; } set { offsetScaleY = value; } }
		float L_0 = ___value0;
		__this->set_offsetScaleY_15(L_0);
		// public float OffsetScaleY { get { return offsetScaleY; } set { offsetScaleY = value; } }
		return;
	}
}
// System.Single Spine.TransformConstraintData::get_OffsetShearY()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float TransformConstraintData_get_OffsetShearY_m2B097A07FC5174592A5DC980420E6D6D3DBD1898 (TransformConstraintData_t5B434A578868FB4E1BBBF29E3024FF07B5D0EF59 * __this, const RuntimeMethod* method)
{
	{
		// public float OffsetShearY { get { return offsetShearY; } set { offsetShearY = value; } }
		float L_0 = __this->get_offsetShearY_16();
		return L_0;
	}
}
// System.Void Spine.TransformConstraintData::set_OffsetShearY(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TransformConstraintData_set_OffsetShearY_m68BC85090946E5995E9D2EC8B09084F2736D3D0B (TransformConstraintData_t5B434A578868FB4E1BBBF29E3024FF07B5D0EF59 * __this, float ___value0, const RuntimeMethod* method)
{
	{
		// public float OffsetShearY { get { return offsetShearY; } set { offsetShearY = value; } }
		float L_0 = ___value0;
		__this->set_offsetShearY_16(L_0);
		// public float OffsetShearY { get { return offsetShearY; } set { offsetShearY = value; } }
		return;
	}
}
// System.Boolean Spine.TransformConstraintData::get_Relative()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TransformConstraintData_get_Relative_mD2E3E8BD9ACA4A8A1BE2ABFAA257EEF4D5CB0067 (TransformConstraintData_t5B434A578868FB4E1BBBF29E3024FF07B5D0EF59 * __this, const RuntimeMethod* method)
{
	{
		// public bool Relative { get { return relative; } set { relative = value; } }
		bool L_0 = __this->get_relative_17();
		return L_0;
	}
}
// System.Void Spine.TransformConstraintData::set_Relative(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TransformConstraintData_set_Relative_m1AF0FF03B732AE113386728C67D07A74A3F1C8C7 (TransformConstraintData_t5B434A578868FB4E1BBBF29E3024FF07B5D0EF59 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool Relative { get { return relative; } set { relative = value; } }
		bool L_0 = ___value0;
		__this->set_relative_17(L_0);
		// public bool Relative { get { return relative; } set { relative = value; } }
		return;
	}
}
// System.Boolean Spine.TransformConstraintData::get_Local()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TransformConstraintData_get_Local_mEAC211830B1EB396098CD3EBF459C56682C740A8 (TransformConstraintData_t5B434A578868FB4E1BBBF29E3024FF07B5D0EF59 * __this, const RuntimeMethod* method)
{
	{
		// public bool Local { get { return local; } set { local = value; } }
		bool L_0 = __this->get_local_18();
		return L_0;
	}
}
// System.Void Spine.TransformConstraintData::set_Local(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TransformConstraintData_set_Local_m6887A36051C35D4CFA614907A5A7A8FC3E62B4E3 (TransformConstraintData_t5B434A578868FB4E1BBBF29E3024FF07B5D0EF59 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool Local { get { return local; } set { local = value; } }
		bool L_0 = ___value0;
		__this->set_local_18(L_0);
		// public bool Local { get { return local; } set { local = value; } }
		return;
	}
}
// System.Void Spine.TransformConstraintData::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TransformConstraintData__ctor_m56AE808E831480C2CDE76D94DC30C64324428579 (TransformConstraintData_t5B434A578868FB4E1BBBF29E3024FF07B5D0EF59 * __this, String_t* ___name0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExposedList_1__ctor_m316DF0208BC8528788112ABDE3A956F6B176F5DC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExposedList_1_t55FC025D5A735E30067A5D1CCB31D11EA181CF36_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// internal ExposedList<BoneData> bones = new ExposedList<BoneData>();
		ExposedList_1_t55FC025D5A735E30067A5D1CCB31D11EA181CF36 * L_0 = (ExposedList_1_t55FC025D5A735E30067A5D1CCB31D11EA181CF36 *)il2cpp_codegen_object_new(ExposedList_1_t55FC025D5A735E30067A5D1CCB31D11EA181CF36_il2cpp_TypeInfo_var);
		ExposedList_1__ctor_m316DF0208BC8528788112ABDE3A956F6B176F5DC(L_0, /*hidden argument*/ExposedList_1__ctor_m316DF0208BC8528788112ABDE3A956F6B176F5DC_RuntimeMethod_var);
		__this->set_bones_3(L_0);
		// public TransformConstraintData (string name) : base(name) {
		String_t* L_1 = ___name0;
		ConstraintData__ctor_mB5CE0EF68267D3BE4AAC43A4458DC4E0134DC4A9(__this, L_1, /*hidden argument*/NULL);
		// }
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
// System.Void Spine.TransformConstraintTimeline::.ctor(System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TransformConstraintTimeline__ctor_mC7D13D68722C307E79B17EDE4076A5A3E4CD903E (TransformConstraintTimeline_t72B4878905815289D7452FEE045C902E2CDEA6B1 * __this, int32_t ___frameCount0, int32_t ___bezierCount1, int32_t ___transformConstraintIndex2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA42779B09629BCE81B76EF626A57A0B40F2AD827);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// : base(frameCount, bezierCount, (int)Property.TransformConstraint + "|" + transformConstraintIndex) {
		int32_t L_0 = ___frameCount0;
		int32_t L_1 = ___bezierCount1;
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_2 = (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)SZArrayNew(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var, (uint32_t)1);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_3 = L_2;
		V_0 = ((int32_t)15);
		String_t* L_4;
		L_4 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)(&V_0), /*hidden argument*/NULL);
		String_t* L_5;
		L_5 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)(&___transformConstraintIndex2), /*hidden argument*/NULL);
		String_t* L_6;
		L_6 = String_Concat_m89EAB4C6A96B0E5C3F87300D6BE78D386B9EFC44(L_4, _stringLiteralA42779B09629BCE81B76EF626A57A0B40F2AD827, L_5, /*hidden argument*/NULL);
		ArrayElementTypeCheck (L_3, L_6);
		(L_3)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (String_t*)L_6);
		CurveTimeline__ctor_mAF5F864455A1B5677ED313F38348F08065180211(__this, L_0, L_1, L_3, /*hidden argument*/NULL);
		// this.transformConstraintIndex = transformConstraintIndex;
		int32_t L_7 = ___transformConstraintIndex2;
		__this->set_transformConstraintIndex_14(L_7);
		// }
		return;
	}
}
// System.Int32 Spine.TransformConstraintTimeline::get_FrameEntries()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TransformConstraintTimeline_get_FrameEntries_mC7C43F3F6163022F1B9B016722E40EAB5E1627AC (TransformConstraintTimeline_t72B4878905815289D7452FEE045C902E2CDEA6B1 * __this, const RuntimeMethod* method)
{
	{
		// return ENTRIES;
		return 7;
	}
}
// System.Int32 Spine.TransformConstraintTimeline::get_TransformConstraintIndex()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TransformConstraintTimeline_get_TransformConstraintIndex_m42DD7662AB7B71B712357EEE8CA9E87420F7934F (TransformConstraintTimeline_t72B4878905815289D7452FEE045C902E2CDEA6B1 * __this, const RuntimeMethod* method)
{
	{
		// return transformConstraintIndex;
		int32_t L_0 = __this->get_transformConstraintIndex_14();
		return L_0;
	}
}
// System.Void Spine.TransformConstraintTimeline::SetFrame(System.Int32,System.Single,System.Single,System.Single,System.Single,System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TransformConstraintTimeline_SetFrame_m033D1AFDC86C3D44072143E006B8D51B8F49772B (TransformConstraintTimeline_t72B4878905815289D7452FEE045C902E2CDEA6B1 * __this, int32_t ___frame0, float ___time1, float ___mixRotate2, float ___mixX3, float ___mixY4, float ___mixScaleX5, float ___mixScaleY6, float ___mixShearY7, const RuntimeMethod* method)
{
	{
		// frame *= ENTRIES;
		int32_t L_0 = ___frame0;
		___frame0 = ((int32_t)il2cpp_codegen_multiply((int32_t)L_0, (int32_t)7));
		// frames[frame] = time;
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_1 = ((Timeline_tD8AC6175D8B492C9CDB166AC1FBFEE28A474DAF0 *)__this)->get_frames_1();
		int32_t L_2 = ___frame0;
		float L_3 = ___time1;
		(L_1)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_2), (float)L_3);
		// frames[frame + ROTATE] = mixRotate;
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_4 = ((Timeline_tD8AC6175D8B492C9CDB166AC1FBFEE28A474DAF0 *)__this)->get_frames_1();
		int32_t L_5 = ___frame0;
		float L_6 = ___mixRotate2;
		(L_4)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add((int32_t)L_5, (int32_t)1))), (float)L_6);
		// frames[frame + X] = mixX;
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_7 = ((Timeline_tD8AC6175D8B492C9CDB166AC1FBFEE28A474DAF0 *)__this)->get_frames_1();
		int32_t L_8 = ___frame0;
		float L_9 = ___mixX3;
		(L_7)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add((int32_t)L_8, (int32_t)2))), (float)L_9);
		// frames[frame + Y] = mixY;
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_10 = ((Timeline_tD8AC6175D8B492C9CDB166AC1FBFEE28A474DAF0 *)__this)->get_frames_1();
		int32_t L_11 = ___frame0;
		float L_12 = ___mixY4;
		(L_10)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add((int32_t)L_11, (int32_t)3))), (float)L_12);
		// frames[frame + SCALEX] = mixScaleX;
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_13 = ((Timeline_tD8AC6175D8B492C9CDB166AC1FBFEE28A474DAF0 *)__this)->get_frames_1();
		int32_t L_14 = ___frame0;
		float L_15 = ___mixScaleX5;
		(L_13)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add((int32_t)L_14, (int32_t)4))), (float)L_15);
		// frames[frame + SCALEY] = mixScaleY;
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_16 = ((Timeline_tD8AC6175D8B492C9CDB166AC1FBFEE28A474DAF0 *)__this)->get_frames_1();
		int32_t L_17 = ___frame0;
		float L_18 = ___mixScaleY6;
		(L_16)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add((int32_t)L_17, (int32_t)5))), (float)L_18);
		// frames[frame + SHEARY] = mixShearY;
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_19 = ((Timeline_tD8AC6175D8B492C9CDB166AC1FBFEE28A474DAF0 *)__this)->get_frames_1();
		int32_t L_20 = ___frame0;
		float L_21 = ___mixShearY7;
		(L_19)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add((int32_t)L_20, (int32_t)6))), (float)L_21);
		// }
		return;
	}
}
// System.Void Spine.TransformConstraintTimeline::Apply(Spine.Skeleton,System.Single,System.Single,Spine.ExposedList`1<Spine.Event>,System.Single,Spine.MixBlend,Spine.MixDirection)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TransformConstraintTimeline_Apply_m3A54DD5710F7F222DE43264E005891954DE4A9A1 (TransformConstraintTimeline_t72B4878905815289D7452FEE045C902E2CDEA6B1 * __this, Skeleton_tA4F63D1CB185D30296FA5323E1DA8B993E21293C * ___skeleton0, float ___lastTime1, float ___time2, ExposedList_1_t8CEF7833102CD6D128DB4877B6641E863D85194A * ___firedEvents3, float ___alpha4, int32_t ___blend5, int32_t ___direction6, const RuntimeMethod* method)
{
	TransformConstraint_tC8D8761A400AEA22D56A6D4EDAD8D88356EFFAE4 * V_0 = NULL;
	SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* V_1 = NULL;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	float V_4 = 0.0f;
	float V_5 = 0.0f;
	float V_6 = 0.0f;
	float V_7 = 0.0f;
	int32_t V_8 = 0;
	int32_t V_9 = 0;
	TransformConstraintData_t5B434A578868FB4E1BBBF29E3024FF07B5D0EF59 * V_10 = NULL;
	float V_11 = 0.0f;
	float V_12 = 0.0f;
	TransformConstraintData_t5B434A578868FB4E1BBBF29E3024FF07B5D0EF59 * V_13 = NULL;
	{
		// TransformConstraint constraint = skeleton.transformConstraints.Items[transformConstraintIndex];
		Skeleton_tA4F63D1CB185D30296FA5323E1DA8B993E21293C * L_0 = ___skeleton0;
		ExposedList_1_t56F73F3BF0C40E1C9EF32828CD09773498FDFB0F * L_1 = L_0->get_transformConstraints_5();
		TransformConstraintU5BU5D_tAAB40625ABA9CEE91FE93330DA53DA127EB7E446* L_2 = L_1->get_Items_0();
		int32_t L_3 = __this->get_transformConstraintIndex_14();
		int32_t L_4 = L_3;
		TransformConstraint_tC8D8761A400AEA22D56A6D4EDAD8D88356EFFAE4 * L_5 = (L_2)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_4));
		V_0 = L_5;
		// if (!constraint.active) return;
		TransformConstraint_tC8D8761A400AEA22D56A6D4EDAD8D88356EFFAE4 * L_6 = V_0;
		bool L_7 = L_6->get_active_9();
		if (L_7)
		{
			goto IL_001c;
		}
	}
	{
		// if (!constraint.active) return;
		return;
	}

IL_001c:
	{
		// float[] frames = this.frames;
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_8 = ((Timeline_tD8AC6175D8B492C9CDB166AC1FBFEE28A474DAF0 *)__this)->get_frames_1();
		V_1 = L_8;
		// if (time < frames[0]) { // Time is before first frame.
		float L_9 = ___time2;
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_10 = V_1;
		int32_t L_11 = 0;
		float L_12 = (L_10)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_11));
		if ((!(((float)L_9) < ((float)L_12))))
		{
			goto IL_0142;
		}
	}
	{
		// TransformConstraintData data = constraint.data;
		TransformConstraint_tC8D8761A400AEA22D56A6D4EDAD8D88356EFFAE4 * L_13 = V_0;
		TransformConstraintData_t5B434A578868FB4E1BBBF29E3024FF07B5D0EF59 * L_14 = L_13->get_data_0();
		V_10 = L_14;
		int32_t L_15 = ___blend5;
		if (!L_15)
		{
			goto IL_003e;
		}
	}
	{
		int32_t L_16 = ___blend5;
		if ((((int32_t)L_16) == ((int32_t)1)))
		{
			goto IL_008d;
		}
	}
	{
		return;
	}

IL_003e:
	{
		// constraint.mixRotate = data.mixRotate;
		TransformConstraint_tC8D8761A400AEA22D56A6D4EDAD8D88356EFFAE4 * L_17 = V_0;
		TransformConstraintData_t5B434A578868FB4E1BBBF29E3024FF07B5D0EF59 * L_18 = V_10;
		float L_19 = L_18->get_mixRotate_5();
		L_17->set_mixRotate_3(L_19);
		// constraint.mixX = data.mixX;
		TransformConstraint_tC8D8761A400AEA22D56A6D4EDAD8D88356EFFAE4 * L_20 = V_0;
		TransformConstraintData_t5B434A578868FB4E1BBBF29E3024FF07B5D0EF59 * L_21 = V_10;
		float L_22 = L_21->get_mixX_6();
		L_20->set_mixX_4(L_22);
		// constraint.mixY = data.mixY;
		TransformConstraint_tC8D8761A400AEA22D56A6D4EDAD8D88356EFFAE4 * L_23 = V_0;
		TransformConstraintData_t5B434A578868FB4E1BBBF29E3024FF07B5D0EF59 * L_24 = V_10;
		float L_25 = L_24->get_mixY_7();
		L_23->set_mixY_5(L_25);
		// constraint.mixScaleX = data.mixScaleX;
		TransformConstraint_tC8D8761A400AEA22D56A6D4EDAD8D88356EFFAE4 * L_26 = V_0;
		TransformConstraintData_t5B434A578868FB4E1BBBF29E3024FF07B5D0EF59 * L_27 = V_10;
		float L_28 = L_27->get_mixScaleX_8();
		L_26->set_mixScaleX_6(L_28);
		// constraint.mixScaleY = data.mixScaleY;
		TransformConstraint_tC8D8761A400AEA22D56A6D4EDAD8D88356EFFAE4 * L_29 = V_0;
		TransformConstraintData_t5B434A578868FB4E1BBBF29E3024FF07B5D0EF59 * L_30 = V_10;
		float L_31 = L_30->get_mixScaleY_9();
		L_29->set_mixScaleY_7(L_31);
		// constraint.mixShearY = data.mixShearY;
		TransformConstraint_tC8D8761A400AEA22D56A6D4EDAD8D88356EFFAE4 * L_32 = V_0;
		TransformConstraintData_t5B434A578868FB4E1BBBF29E3024FF07B5D0EF59 * L_33 = V_10;
		float L_34 = L_33->get_mixShearY_10();
		L_32->set_mixShearY_8(L_34);
		// return;
		return;
	}

IL_008d:
	{
		// constraint.mixRotate += (data.mixRotate - constraint.mixRotate) * alpha;
		TransformConstraint_tC8D8761A400AEA22D56A6D4EDAD8D88356EFFAE4 * L_35 = V_0;
		TransformConstraint_tC8D8761A400AEA22D56A6D4EDAD8D88356EFFAE4 * L_36 = L_35;
		float L_37 = L_36->get_mixRotate_3();
		TransformConstraintData_t5B434A578868FB4E1BBBF29E3024FF07B5D0EF59 * L_38 = V_10;
		float L_39 = L_38->get_mixRotate_5();
		TransformConstraint_tC8D8761A400AEA22D56A6D4EDAD8D88356EFFAE4 * L_40 = V_0;
		float L_41 = L_40->get_mixRotate_3();
		float L_42 = ___alpha4;
		L_36->set_mixRotate_3(((float)il2cpp_codegen_add((float)L_37, (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)L_39, (float)L_41)), (float)L_42)))));
		// constraint.mixX += (data.mixX - constraint.mixX) * alpha;
		TransformConstraint_tC8D8761A400AEA22D56A6D4EDAD8D88356EFFAE4 * L_43 = V_0;
		TransformConstraint_tC8D8761A400AEA22D56A6D4EDAD8D88356EFFAE4 * L_44 = L_43;
		float L_45 = L_44->get_mixX_4();
		TransformConstraintData_t5B434A578868FB4E1BBBF29E3024FF07B5D0EF59 * L_46 = V_10;
		float L_47 = L_46->get_mixX_6();
		TransformConstraint_tC8D8761A400AEA22D56A6D4EDAD8D88356EFFAE4 * L_48 = V_0;
		float L_49 = L_48->get_mixX_4();
		float L_50 = ___alpha4;
		L_44->set_mixX_4(((float)il2cpp_codegen_add((float)L_45, (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)L_47, (float)L_49)), (float)L_50)))));
		// constraint.mixY += (data.mixY - constraint.mixY) * alpha;
		TransformConstraint_tC8D8761A400AEA22D56A6D4EDAD8D88356EFFAE4 * L_51 = V_0;
		TransformConstraint_tC8D8761A400AEA22D56A6D4EDAD8D88356EFFAE4 * L_52 = L_51;
		float L_53 = L_52->get_mixY_5();
		TransformConstraintData_t5B434A578868FB4E1BBBF29E3024FF07B5D0EF59 * L_54 = V_10;
		float L_55 = L_54->get_mixY_7();
		TransformConstraint_tC8D8761A400AEA22D56A6D4EDAD8D88356EFFAE4 * L_56 = V_0;
		float L_57 = L_56->get_mixY_5();
		float L_58 = ___alpha4;
		L_52->set_mixY_5(((float)il2cpp_codegen_add((float)L_53, (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)L_55, (float)L_57)), (float)L_58)))));
		// constraint.mixScaleX += (data.mixScaleX - constraint.mixScaleX) * alpha;
		TransformConstraint_tC8D8761A400AEA22D56A6D4EDAD8D88356EFFAE4 * L_59 = V_0;
		TransformConstraint_tC8D8761A400AEA22D56A6D4EDAD8D88356EFFAE4 * L_60 = L_59;
		float L_61 = L_60->get_mixScaleX_6();
		TransformConstraintData_t5B434A578868FB4E1BBBF29E3024FF07B5D0EF59 * L_62 = V_10;
		float L_63 = L_62->get_mixScaleX_8();
		TransformConstraint_tC8D8761A400AEA22D56A6D4EDAD8D88356EFFAE4 * L_64 = V_0;
		float L_65 = L_64->get_mixScaleX_6();
		float L_66 = ___alpha4;
		L_60->set_mixScaleX_6(((float)il2cpp_codegen_add((float)L_61, (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)L_63, (float)L_65)), (float)L_66)))));
		// constraint.mixScaleY += (data.mixScaleY - constraint.mixScaleY) * alpha;
		TransformConstraint_tC8D8761A400AEA22D56A6D4EDAD8D88356EFFAE4 * L_67 = V_0;
		TransformConstraint_tC8D8761A400AEA22D56A6D4EDAD8D88356EFFAE4 * L_68 = L_67;
		float L_69 = L_68->get_mixScaleY_7();
		TransformConstraintData_t5B434A578868FB4E1BBBF29E3024FF07B5D0EF59 * L_70 = V_10;
		float L_71 = L_70->get_mixScaleY_9();
		TransformConstraint_tC8D8761A400AEA22D56A6D4EDAD8D88356EFFAE4 * L_72 = V_0;
		float L_73 = L_72->get_mixScaleY_7();
		float L_74 = ___alpha4;
		L_68->set_mixScaleY_7(((float)il2cpp_codegen_add((float)L_69, (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)L_71, (float)L_73)), (float)L_74)))));
		// constraint.mixShearY += (data.mixShearY - constraint.mixShearY) * alpha;
		TransformConstraint_tC8D8761A400AEA22D56A6D4EDAD8D88356EFFAE4 * L_75 = V_0;
		TransformConstraint_tC8D8761A400AEA22D56A6D4EDAD8D88356EFFAE4 * L_76 = L_75;
		float L_77 = L_76->get_mixShearY_8();
		TransformConstraintData_t5B434A578868FB4E1BBBF29E3024FF07B5D0EF59 * L_78 = V_10;
		float L_79 = L_78->get_mixShearY_10();
		TransformConstraint_tC8D8761A400AEA22D56A6D4EDAD8D88356EFFAE4 * L_80 = V_0;
		float L_81 = L_80->get_mixShearY_8();
		float L_82 = ___alpha4;
		L_76->set_mixShearY_8(((float)il2cpp_codegen_add((float)L_77, (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)L_79, (float)L_81)), (float)L_82)))));
		// return;
		return;
	}

IL_0142:
	{
		// int i = Search(frames, time, ENTRIES), curveType = (int)curves[i / ENTRIES];
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_83 = V_1;
		float L_84 = ___time2;
		int32_t L_85;
		L_85 = Timeline_Search_m34D8AE9726E2A2D27C310D7F156F57931EA3ABD6(L_83, L_84, 7, /*hidden argument*/NULL);
		V_8 = L_85;
		// int i = Search(frames, time, ENTRIES), curveType = (int)curves[i / ENTRIES];
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_86 = ((CurveTimeline_t404E642BD4DFEEDB39DBCDC088B7F7E78FAE5476 *)__this)->get_curves_6();
		int32_t L_87 = V_8;
		int32_t L_88 = ((int32_t)((int32_t)L_87/(int32_t)7));
		float L_89 = (L_86)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_88));
		V_9 = il2cpp_codegen_cast_double_to_int<int32_t>(L_89);
		int32_t L_90 = V_9;
		if (!L_90)
		{
			goto IL_016b;
		}
	}
	{
		int32_t L_91 = V_9;
		if ((((int32_t)L_91) == ((int32_t)1)))
		{
			goto IL_0220;
		}
	}
	{
		goto IL_0250;
	}

IL_016b:
	{
		// float before = frames[i];
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_92 = V_1;
		int32_t L_93 = V_8;
		int32_t L_94 = L_93;
		float L_95 = (L_92)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_94));
		V_11 = L_95;
		// rotate = frames[i + ROTATE];
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_96 = V_1;
		int32_t L_97 = V_8;
		int32_t L_98 = ((int32_t)il2cpp_codegen_add((int32_t)L_97, (int32_t)1));
		float L_99 = (L_96)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_98));
		V_2 = L_99;
		// x = frames[i + X];
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_100 = V_1;
		int32_t L_101 = V_8;
		int32_t L_102 = ((int32_t)il2cpp_codegen_add((int32_t)L_101, (int32_t)2));
		float L_103 = (L_100)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_102));
		V_3 = L_103;
		// y = frames[i + Y];
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_104 = V_1;
		int32_t L_105 = V_8;
		int32_t L_106 = ((int32_t)il2cpp_codegen_add((int32_t)L_105, (int32_t)3));
		float L_107 = (L_104)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_106));
		V_4 = L_107;
		// scaleX = frames[i + SCALEX];
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_108 = V_1;
		int32_t L_109 = V_8;
		int32_t L_110 = ((int32_t)il2cpp_codegen_add((int32_t)L_109, (int32_t)4));
		float L_111 = (L_108)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_110));
		V_5 = L_111;
		// scaleY = frames[i + SCALEY];
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_112 = V_1;
		int32_t L_113 = V_8;
		int32_t L_114 = ((int32_t)il2cpp_codegen_add((int32_t)L_113, (int32_t)5));
		float L_115 = (L_112)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_114));
		V_6 = L_115;
		// shearY = frames[i + SHEARY];
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_116 = V_1;
		int32_t L_117 = V_8;
		int32_t L_118 = ((int32_t)il2cpp_codegen_add((int32_t)L_117, (int32_t)6));
		float L_119 = (L_116)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_118));
		V_7 = L_119;
		// float t = (time - before) / (frames[i + ENTRIES] - before);
		float L_120 = ___time2;
		float L_121 = V_11;
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_122 = V_1;
		int32_t L_123 = V_8;
		int32_t L_124 = ((int32_t)il2cpp_codegen_add((int32_t)L_123, (int32_t)7));
		float L_125 = (L_122)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_124));
		float L_126 = V_11;
		V_12 = ((float)((float)((float)il2cpp_codegen_subtract((float)L_120, (float)L_121))/(float)((float)il2cpp_codegen_subtract((float)L_125, (float)L_126))));
		// rotate += (frames[i + ENTRIES + ROTATE] - rotate) * t;
		float L_127 = V_2;
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_128 = V_1;
		int32_t L_129 = V_8;
		int32_t L_130 = ((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_129, (int32_t)7)), (int32_t)1));
		float L_131 = (L_128)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_130));
		float L_132 = V_2;
		float L_133 = V_12;
		V_2 = ((float)il2cpp_codegen_add((float)L_127, (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)L_131, (float)L_132)), (float)L_133))));
		// x += (frames[i + ENTRIES + X] - x) * t;
		float L_134 = V_3;
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_135 = V_1;
		int32_t L_136 = V_8;
		int32_t L_137 = ((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_136, (int32_t)7)), (int32_t)2));
		float L_138 = (L_135)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_137));
		float L_139 = V_3;
		float L_140 = V_12;
		V_3 = ((float)il2cpp_codegen_add((float)L_134, (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)L_138, (float)L_139)), (float)L_140))));
		// y += (frames[i + ENTRIES + Y] - y) * t;
		float L_141 = V_4;
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_142 = V_1;
		int32_t L_143 = V_8;
		int32_t L_144 = ((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_143, (int32_t)7)), (int32_t)3));
		float L_145 = (L_142)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_144));
		float L_146 = V_4;
		float L_147 = V_12;
		V_4 = ((float)il2cpp_codegen_add((float)L_141, (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)L_145, (float)L_146)), (float)L_147))));
		// scaleX += (frames[i + ENTRIES + SCALEX] - scaleX) * t;
		float L_148 = V_5;
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_149 = V_1;
		int32_t L_150 = V_8;
		int32_t L_151 = ((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_150, (int32_t)7)), (int32_t)4));
		float L_152 = (L_149)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_151));
		float L_153 = V_5;
		float L_154 = V_12;
		V_5 = ((float)il2cpp_codegen_add((float)L_148, (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)L_152, (float)L_153)), (float)L_154))));
		// scaleY += (frames[i + ENTRIES + SCALEY] - scaleY) * t;
		float L_155 = V_6;
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_156 = V_1;
		int32_t L_157 = V_8;
		int32_t L_158 = ((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_157, (int32_t)7)), (int32_t)5));
		float L_159 = (L_156)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_158));
		float L_160 = V_6;
		float L_161 = V_12;
		V_6 = ((float)il2cpp_codegen_add((float)L_155, (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)L_159, (float)L_160)), (float)L_161))));
		// shearY += (frames[i + ENTRIES + SHEARY] - shearY) * t;
		float L_162 = V_7;
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_163 = V_1;
		int32_t L_164 = V_8;
		int32_t L_165 = ((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_164, (int32_t)7)), (int32_t)6));
		float L_166 = (L_163)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_165));
		float L_167 = V_7;
		float L_168 = V_12;
		V_7 = ((float)il2cpp_codegen_add((float)L_162, (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)L_166, (float)L_167)), (float)L_168))));
		// break;
		goto IL_02bd;
	}

IL_0220:
	{
		// rotate = frames[i + ROTATE];
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_169 = V_1;
		int32_t L_170 = V_8;
		int32_t L_171 = ((int32_t)il2cpp_codegen_add((int32_t)L_170, (int32_t)1));
		float L_172 = (L_169)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_171));
		V_2 = L_172;
		// x = frames[i + X];
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_173 = V_1;
		int32_t L_174 = V_8;
		int32_t L_175 = ((int32_t)il2cpp_codegen_add((int32_t)L_174, (int32_t)2));
		float L_176 = (L_173)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_175));
		V_3 = L_176;
		// y = frames[i + Y];
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_177 = V_1;
		int32_t L_178 = V_8;
		int32_t L_179 = ((int32_t)il2cpp_codegen_add((int32_t)L_178, (int32_t)3));
		float L_180 = (L_177)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_179));
		V_4 = L_180;
		// scaleX = frames[i + SCALEX];
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_181 = V_1;
		int32_t L_182 = V_8;
		int32_t L_183 = ((int32_t)il2cpp_codegen_add((int32_t)L_182, (int32_t)4));
		float L_184 = (L_181)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_183));
		V_5 = L_184;
		// scaleY = frames[i + SCALEY];
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_185 = V_1;
		int32_t L_186 = V_8;
		int32_t L_187 = ((int32_t)il2cpp_codegen_add((int32_t)L_186, (int32_t)5));
		float L_188 = (L_185)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_187));
		V_6 = L_188;
		// shearY = frames[i + SHEARY];
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_189 = V_1;
		int32_t L_190 = V_8;
		int32_t L_191 = ((int32_t)il2cpp_codegen_add((int32_t)L_190, (int32_t)6));
		float L_192 = (L_189)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_191));
		V_7 = L_192;
		// break;
		goto IL_02bd;
	}

IL_0250:
	{
		// rotate = GetBezierValue(time, i, ROTATE, curveType - BEZIER);
		float L_193 = ___time2;
		int32_t L_194 = V_8;
		int32_t L_195 = V_9;
		float L_196;
		L_196 = CurveTimeline_GetBezierValue_m7F3F858D48DFBB2654FAB172AF39E25579AA8265(__this, L_193, L_194, 1, ((int32_t)il2cpp_codegen_subtract((int32_t)L_195, (int32_t)2)), /*hidden argument*/NULL);
		V_2 = L_196;
		// x = GetBezierValue(time, i, X, curveType + BEZIER_SIZE - BEZIER);
		float L_197 = ___time2;
		int32_t L_198 = V_8;
		int32_t L_199 = V_9;
		float L_200;
		L_200 = CurveTimeline_GetBezierValue_m7F3F858D48DFBB2654FAB172AF39E25579AA8265(__this, L_197, L_198, 2, ((int32_t)il2cpp_codegen_subtract((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_199, (int32_t)((int32_t)18))), (int32_t)2)), /*hidden argument*/NULL);
		V_3 = L_200;
		// y = GetBezierValue(time, i, Y, curveType + BEZIER_SIZE * 2 - BEZIER);
		float L_201 = ___time2;
		int32_t L_202 = V_8;
		int32_t L_203 = V_9;
		float L_204;
		L_204 = CurveTimeline_GetBezierValue_m7F3F858D48DFBB2654FAB172AF39E25579AA8265(__this, L_201, L_202, 3, ((int32_t)il2cpp_codegen_subtract((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_203, (int32_t)((int32_t)36))), (int32_t)2)), /*hidden argument*/NULL);
		V_4 = L_204;
		// scaleX = GetBezierValue(time, i, SCALEX, curveType + BEZIER_SIZE * 3 - BEZIER);
		float L_205 = ___time2;
		int32_t L_206 = V_8;
		int32_t L_207 = V_9;
		float L_208;
		L_208 = CurveTimeline_GetBezierValue_m7F3F858D48DFBB2654FAB172AF39E25579AA8265(__this, L_205, L_206, 4, ((int32_t)il2cpp_codegen_subtract((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_207, (int32_t)((int32_t)54))), (int32_t)2)), /*hidden argument*/NULL);
		V_5 = L_208;
		// scaleY = GetBezierValue(time, i, SCALEY, curveType + BEZIER_SIZE * 4 - BEZIER);
		float L_209 = ___time2;
		int32_t L_210 = V_8;
		int32_t L_211 = V_9;
		float L_212;
		L_212 = CurveTimeline_GetBezierValue_m7F3F858D48DFBB2654FAB172AF39E25579AA8265(__this, L_209, L_210, 5, ((int32_t)il2cpp_codegen_subtract((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_211, (int32_t)((int32_t)72))), (int32_t)2)), /*hidden argument*/NULL);
		V_6 = L_212;
		// shearY = GetBezierValue(time, i, SHEARY, curveType + BEZIER_SIZE * 5 - BEZIER);
		float L_213 = ___time2;
		int32_t L_214 = V_8;
		int32_t L_215 = V_9;
		float L_216;
		L_216 = CurveTimeline_GetBezierValue_m7F3F858D48DFBB2654FAB172AF39E25579AA8265(__this, L_213, L_214, 6, ((int32_t)il2cpp_codegen_subtract((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_215, (int32_t)((int32_t)90))), (int32_t)2)), /*hidden argument*/NULL);
		V_7 = L_216;
	}

IL_02bd:
	{
		// if (blend == MixBlend.Setup) {
		int32_t L_217 = ___blend5;
		if (L_217)
		{
			goto IL_036d;
		}
	}
	{
		// TransformConstraintData data = constraint.data;
		TransformConstraint_tC8D8761A400AEA22D56A6D4EDAD8D88356EFFAE4 * L_218 = V_0;
		TransformConstraintData_t5B434A578868FB4E1BBBF29E3024FF07B5D0EF59 * L_219 = L_218->get_data_0();
		V_13 = L_219;
		// constraint.mixRotate = data.mixRotate + (rotate - data.mixRotate) * alpha;
		TransformConstraint_tC8D8761A400AEA22D56A6D4EDAD8D88356EFFAE4 * L_220 = V_0;
		TransformConstraintData_t5B434A578868FB4E1BBBF29E3024FF07B5D0EF59 * L_221 = V_13;
		float L_222 = L_221->get_mixRotate_5();
		float L_223 = V_2;
		TransformConstraintData_t5B434A578868FB4E1BBBF29E3024FF07B5D0EF59 * L_224 = V_13;
		float L_225 = L_224->get_mixRotate_5();
		float L_226 = ___alpha4;
		L_220->set_mixRotate_3(((float)il2cpp_codegen_add((float)L_222, (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)L_223, (float)L_225)), (float)L_226)))));
		// constraint.mixX = data.mixX + (x - data.mixX) * alpha;
		TransformConstraint_tC8D8761A400AEA22D56A6D4EDAD8D88356EFFAE4 * L_227 = V_0;
		TransformConstraintData_t5B434A578868FB4E1BBBF29E3024FF07B5D0EF59 * L_228 = V_13;
		float L_229 = L_228->get_mixX_6();
		float L_230 = V_3;
		TransformConstraintData_t5B434A578868FB4E1BBBF29E3024FF07B5D0EF59 * L_231 = V_13;
		float L_232 = L_231->get_mixX_6();
		float L_233 = ___alpha4;
		L_227->set_mixX_4(((float)il2cpp_codegen_add((float)L_229, (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)L_230, (float)L_232)), (float)L_233)))));
		// constraint.mixY = data.mixY + (y - data.mixY) * alpha;
		TransformConstraint_tC8D8761A400AEA22D56A6D4EDAD8D88356EFFAE4 * L_234 = V_0;
		TransformConstraintData_t5B434A578868FB4E1BBBF29E3024FF07B5D0EF59 * L_235 = V_13;
		float L_236 = L_235->get_mixY_7();
		float L_237 = V_4;
		TransformConstraintData_t5B434A578868FB4E1BBBF29E3024FF07B5D0EF59 * L_238 = V_13;
		float L_239 = L_238->get_mixY_7();
		float L_240 = ___alpha4;
		L_234->set_mixY_5(((float)il2cpp_codegen_add((float)L_236, (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)L_237, (float)L_239)), (float)L_240)))));
		// constraint.mixScaleX = data.mixScaleX + (scaleX - data.mixScaleX) * alpha;
		TransformConstraint_tC8D8761A400AEA22D56A6D4EDAD8D88356EFFAE4 * L_241 = V_0;
		TransformConstraintData_t5B434A578868FB4E1BBBF29E3024FF07B5D0EF59 * L_242 = V_13;
		float L_243 = L_242->get_mixScaleX_8();
		float L_244 = V_5;
		TransformConstraintData_t5B434A578868FB4E1BBBF29E3024FF07B5D0EF59 * L_245 = V_13;
		float L_246 = L_245->get_mixScaleX_8();
		float L_247 = ___alpha4;
		L_241->set_mixScaleX_6(((float)il2cpp_codegen_add((float)L_243, (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)L_244, (float)L_246)), (float)L_247)))));
		// constraint.mixScaleY = data.mixScaleY + (scaleY - data.mixScaleY) * alpha;
		TransformConstraint_tC8D8761A400AEA22D56A6D4EDAD8D88356EFFAE4 * L_248 = V_0;
		TransformConstraintData_t5B434A578868FB4E1BBBF29E3024FF07B5D0EF59 * L_249 = V_13;
		float L_250 = L_249->get_mixScaleY_9();
		float L_251 = V_6;
		TransformConstraintData_t5B434A578868FB4E1BBBF29E3024FF07B5D0EF59 * L_252 = V_13;
		float L_253 = L_252->get_mixScaleY_9();
		float L_254 = ___alpha4;
		L_248->set_mixScaleY_7(((float)il2cpp_codegen_add((float)L_250, (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)L_251, (float)L_253)), (float)L_254)))));
		// constraint.mixShearY = data.mixShearY + (shearY - data.mixShearY) * alpha;
		TransformConstraint_tC8D8761A400AEA22D56A6D4EDAD8D88356EFFAE4 * L_255 = V_0;
		TransformConstraintData_t5B434A578868FB4E1BBBF29E3024FF07B5D0EF59 * L_256 = V_13;
		float L_257 = L_256->get_mixShearY_10();
		float L_258 = V_7;
		TransformConstraintData_t5B434A578868FB4E1BBBF29E3024FF07B5D0EF59 * L_259 = V_13;
		float L_260 = L_259->get_mixShearY_10();
		float L_261 = ___alpha4;
		L_255->set_mixShearY_8(((float)il2cpp_codegen_add((float)L_257, (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)L_258, (float)L_260)), (float)L_261)))));
		// } else {
		return;
	}

IL_036d:
	{
		// constraint.mixRotate += (rotate - constraint.mixRotate) * alpha;
		TransformConstraint_tC8D8761A400AEA22D56A6D4EDAD8D88356EFFAE4 * L_262 = V_0;
		TransformConstraint_tC8D8761A400AEA22D56A6D4EDAD8D88356EFFAE4 * L_263 = L_262;
		float L_264 = L_263->get_mixRotate_3();
		float L_265 = V_2;
		TransformConstraint_tC8D8761A400AEA22D56A6D4EDAD8D88356EFFAE4 * L_266 = V_0;
		float L_267 = L_266->get_mixRotate_3();
		float L_268 = ___alpha4;
		L_263->set_mixRotate_3(((float)il2cpp_codegen_add((float)L_264, (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)L_265, (float)L_267)), (float)L_268)))));
		// constraint.mixX += (x - constraint.mixX) * alpha;
		TransformConstraint_tC8D8761A400AEA22D56A6D4EDAD8D88356EFFAE4 * L_269 = V_0;
		TransformConstraint_tC8D8761A400AEA22D56A6D4EDAD8D88356EFFAE4 * L_270 = L_269;
		float L_271 = L_270->get_mixX_4();
		float L_272 = V_3;
		TransformConstraint_tC8D8761A400AEA22D56A6D4EDAD8D88356EFFAE4 * L_273 = V_0;
		float L_274 = L_273->get_mixX_4();
		float L_275 = ___alpha4;
		L_270->set_mixX_4(((float)il2cpp_codegen_add((float)L_271, (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)L_272, (float)L_274)), (float)L_275)))));
		// constraint.mixY += (y - constraint.mixY) * alpha;
		TransformConstraint_tC8D8761A400AEA22D56A6D4EDAD8D88356EFFAE4 * L_276 = V_0;
		TransformConstraint_tC8D8761A400AEA22D56A6D4EDAD8D88356EFFAE4 * L_277 = L_276;
		float L_278 = L_277->get_mixY_5();
		float L_279 = V_4;
		TransformConstraint_tC8D8761A400AEA22D56A6D4EDAD8D88356EFFAE4 * L_280 = V_0;
		float L_281 = L_280->get_mixY_5();
		float L_282 = ___alpha4;
		L_277->set_mixY_5(((float)il2cpp_codegen_add((float)L_278, (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)L_279, (float)L_281)), (float)L_282)))));
		// constraint.mixScaleX += (scaleX - constraint.mixScaleX) * alpha;
		TransformConstraint_tC8D8761A400AEA22D56A6D4EDAD8D88356EFFAE4 * L_283 = V_0;
		TransformConstraint_tC8D8761A400AEA22D56A6D4EDAD8D88356EFFAE4 * L_284 = L_283;
		float L_285 = L_284->get_mixScaleX_6();
		float L_286 = V_5;
		TransformConstraint_tC8D8761A400AEA22D56A6D4EDAD8D88356EFFAE4 * L_287 = V_0;
		float L_288 = L_287->get_mixScaleX_6();
		float L_289 = ___alpha4;
		L_284->set_mixScaleX_6(((float)il2cpp_codegen_add((float)L_285, (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)L_286, (float)L_288)), (float)L_289)))));
		// constraint.mixScaleY += (scaleY - constraint.mixScaleY) * alpha;
		TransformConstraint_tC8D8761A400AEA22D56A6D4EDAD8D88356EFFAE4 * L_290 = V_0;
		TransformConstraint_tC8D8761A400AEA22D56A6D4EDAD8D88356EFFAE4 * L_291 = L_290;
		float L_292 = L_291->get_mixScaleY_7();
		float L_293 = V_6;
		TransformConstraint_tC8D8761A400AEA22D56A6D4EDAD8D88356EFFAE4 * L_294 = V_0;
		float L_295 = L_294->get_mixScaleY_7();
		float L_296 = ___alpha4;
		L_291->set_mixScaleY_7(((float)il2cpp_codegen_add((float)L_292, (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)L_293, (float)L_295)), (float)L_296)))));
		// constraint.mixShearY += (shearY - constraint.mixShearY) * alpha;
		TransformConstraint_tC8D8761A400AEA22D56A6D4EDAD8D88356EFFAE4 * L_297 = V_0;
		TransformConstraint_tC8D8761A400AEA22D56A6D4EDAD8D88356EFFAE4 * L_298 = L_297;
		float L_299 = L_298->get_mixShearY_8();
		float L_300 = V_7;
		TransformConstraint_tC8D8761A400AEA22D56A6D4EDAD8D88356EFFAE4 * L_301 = V_0;
		float L_302 = L_301->get_mixShearY_8();
		float L_303 = ___alpha4;
		L_298->set_mixShearY_8(((float)il2cpp_codegen_add((float)L_299, (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)L_300, (float)L_302)), (float)L_303)))));
		// }
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Spine.TranslateTimeline::.ctor(System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TranslateTimeline__ctor_m48AF31C4BF2F313F8D0BFA202DE1D811C65626DF (TranslateTimeline_t681EC4DF87BDD6C1C37F02813D59275B8EAF02E5 * __this, int32_t ___frameCount0, int32_t ___bezierCount1, int32_t ___boneIndex2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA42779B09629BCE81B76EF626A57A0B40F2AD827);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// : base(frameCount, bezierCount, //
		//     (int)Property.X + "|" + boneIndex, //
		//     (int)Property.Y + "|" + boneIndex) {
		int32_t L_0 = ___frameCount0;
		int32_t L_1 = ___bezierCount1;
		V_0 = 1;
		String_t* L_2;
		L_2 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)(&V_0), /*hidden argument*/NULL);
		String_t* L_3;
		L_3 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)(&___boneIndex2), /*hidden argument*/NULL);
		String_t* L_4;
		L_4 = String_Concat_m89EAB4C6A96B0E5C3F87300D6BE78D386B9EFC44(L_2, _stringLiteralA42779B09629BCE81B76EF626A57A0B40F2AD827, L_3, /*hidden argument*/NULL);
		V_0 = 2;
		String_t* L_5;
		L_5 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)(&V_0), /*hidden argument*/NULL);
		String_t* L_6;
		L_6 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)(&___boneIndex2), /*hidden argument*/NULL);
		String_t* L_7;
		L_7 = String_Concat_m89EAB4C6A96B0E5C3F87300D6BE78D386B9EFC44(L_5, _stringLiteralA42779B09629BCE81B76EF626A57A0B40F2AD827, L_6, /*hidden argument*/NULL);
		CurveTimeline2__ctor_m0C19A32AE97CE563A5A6E27F60BB5E58F47F3177(__this, L_0, L_1, L_4, L_7, /*hidden argument*/NULL);
		// this.boneIndex = boneIndex;
		int32_t L_8 = ___boneIndex2;
		__this->set_boneIndex_10(L_8);
		// }
		return;
	}
}
// System.Int32 Spine.TranslateTimeline::get_BoneIndex()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TranslateTimeline_get_BoneIndex_m1F225DDA0407FAFF41EC7BA0DD1F25DFF0D894D0 (TranslateTimeline_t681EC4DF87BDD6C1C37F02813D59275B8EAF02E5 * __this, const RuntimeMethod* method)
{
	{
		// return boneIndex;
		int32_t L_0 = __this->get_boneIndex_10();
		return L_0;
	}
}
// System.Void Spine.TranslateTimeline::Apply(Spine.Skeleton,System.Single,System.Single,Spine.ExposedList`1<Spine.Event>,System.Single,Spine.MixBlend,Spine.MixDirection)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TranslateTimeline_Apply_m18F19C9D1A61EFC492BBE3735F06082A8DD37F03 (TranslateTimeline_t681EC4DF87BDD6C1C37F02813D59275B8EAF02E5 * __this, Skeleton_tA4F63D1CB185D30296FA5323E1DA8B993E21293C * ___skeleton0, float ___lastTime1, float ___time2, ExposedList_1_t8CEF7833102CD6D128DB4877B6641E863D85194A * ___firedEvents3, float ___alpha4, int32_t ___blend5, int32_t ___direction6, const RuntimeMethod* method)
{
	Bone_t6DA0B82485BED2E4EEE864AAD607EEBDC2F98AAF * V_0 = NULL;
	SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* V_1 = NULL;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	{
		// Bone bone = skeleton.bones.Items[boneIndex];
		Skeleton_tA4F63D1CB185D30296FA5323E1DA8B993E21293C * L_0 = ___skeleton0;
		ExposedList_1_t4F66E6448150D0CAC1BD8C1A4810A7CEB844B164 * L_1 = L_0->get_bones_1();
		BoneU5BU5D_t77D01946B97A0778AD79515B28F1C30BDBED3A23* L_2 = L_1->get_Items_0();
		int32_t L_3 = __this->get_boneIndex_10();
		int32_t L_4 = L_3;
		Bone_t6DA0B82485BED2E4EEE864AAD607EEBDC2F98AAF * L_5 = (L_2)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_4));
		V_0 = L_5;
		// if (!bone.active) return;
		Bone_t6DA0B82485BED2E4EEE864AAD607EEBDC2F98AAF * L_6 = V_0;
		bool L_7 = L_6->get_active_26();
		if (L_7)
		{
			goto IL_001c;
		}
	}
	{
		// if (!bone.active) return;
		return;
	}

IL_001c:
	{
		// float[] frames = this.frames;
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_8 = ((Timeline_tD8AC6175D8B492C9CDB166AC1FBFEE28A474DAF0 *)__this)->get_frames_1();
		V_1 = L_8;
		// if (time < frames[0]) { // Time is before first frame.
		float L_9 = ___time2;
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_10 = V_1;
		int32_t L_11 = 0;
		float L_12 = (L_10)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_11));
		if ((!(((float)L_9) < ((float)L_12))))
		{
			goto IL_009b;
		}
	}
	{
		int32_t L_13 = ___blend5;
		if (!L_13)
		{
			goto IL_0033;
		}
	}
	{
		int32_t L_14 = ___blend5;
		if ((((int32_t)L_14) == ((int32_t)1)))
		{
			goto IL_0056;
		}
	}
	{
		return;
	}

IL_0033:
	{
		// bone.x = bone.data.x;
		Bone_t6DA0B82485BED2E4EEE864AAD607EEBDC2F98AAF * L_15 = V_0;
		Bone_t6DA0B82485BED2E4EEE864AAD607EEBDC2F98AAF * L_16 = V_0;
		BoneData_t48A671E6818E76905840CC122A96889DDCB92A51 * L_17 = L_16->get_data_1();
		float L_18 = L_17->get_x_4();
		L_15->set_x_5(L_18);
		// bone.y = bone.data.y;
		Bone_t6DA0B82485BED2E4EEE864AAD607EEBDC2F98AAF * L_19 = V_0;
		Bone_t6DA0B82485BED2E4EEE864AAD607EEBDC2F98AAF * L_20 = V_0;
		BoneData_t48A671E6818E76905840CC122A96889DDCB92A51 * L_21 = L_20->get_data_1();
		float L_22 = L_21->get_y_5();
		L_19->set_y_6(L_22);
		// return;
		return;
	}

IL_0056:
	{
		// bone.x += (bone.data.x - bone.x) * alpha;
		Bone_t6DA0B82485BED2E4EEE864AAD607EEBDC2F98AAF * L_23 = V_0;
		Bone_t6DA0B82485BED2E4EEE864AAD607EEBDC2F98AAF * L_24 = L_23;
		float L_25 = L_24->get_x_5();
		Bone_t6DA0B82485BED2E4EEE864AAD607EEBDC2F98AAF * L_26 = V_0;
		BoneData_t48A671E6818E76905840CC122A96889DDCB92A51 * L_27 = L_26->get_data_1();
		float L_28 = L_27->get_x_4();
		Bone_t6DA0B82485BED2E4EEE864AAD607EEBDC2F98AAF * L_29 = V_0;
		float L_30 = L_29->get_x_5();
		float L_31 = ___alpha4;
		L_24->set_x_5(((float)il2cpp_codegen_add((float)L_25, (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)L_28, (float)L_30)), (float)L_31)))));
		// bone.y += (bone.data.y - bone.y) * alpha;
		Bone_t6DA0B82485BED2E4EEE864AAD607EEBDC2F98AAF * L_32 = V_0;
		Bone_t6DA0B82485BED2E4EEE864AAD607EEBDC2F98AAF * L_33 = L_32;
		float L_34 = L_33->get_y_6();
		Bone_t6DA0B82485BED2E4EEE864AAD607EEBDC2F98AAF * L_35 = V_0;
		BoneData_t48A671E6818E76905840CC122A96889DDCB92A51 * L_36 = L_35->get_data_1();
		float L_37 = L_36->get_y_5();
		Bone_t6DA0B82485BED2E4EEE864AAD607EEBDC2F98AAF * L_38 = V_0;
		float L_39 = L_38->get_y_6();
		float L_40 = ___alpha4;
		L_33->set_y_6(((float)il2cpp_codegen_add((float)L_34, (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)L_37, (float)L_39)), (float)L_40)))));
		// return;
		return;
	}

IL_009b:
	{
		// GetCurveValue(out x, out y, time); // note: reference implementation has code inlined
		float L_41 = ___time2;
		TranslateTimeline_GetCurveValue_m50513A5FB9ABBF0C20C603E408E9BC4EF5F1125A(__this, (float*)(&V_2), (float*)(&V_3), L_41, /*hidden argument*/NULL);
		int32_t L_42 = ___blend5;
		switch (L_42)
		{
			case 0:
			{
				goto IL_00be;
			}
			case 1:
			{
				goto IL_00eb;
			}
			case 2:
			{
				goto IL_00eb;
			}
			case 3:
			{
				goto IL_0134;
			}
		}
	}
	{
		return;
	}

IL_00be:
	{
		// bone.x = bone.data.x + x * alpha;
		Bone_t6DA0B82485BED2E4EEE864AAD607EEBDC2F98AAF * L_43 = V_0;
		Bone_t6DA0B82485BED2E4EEE864AAD607EEBDC2F98AAF * L_44 = V_0;
		BoneData_t48A671E6818E76905840CC122A96889DDCB92A51 * L_45 = L_44->get_data_1();
		float L_46 = L_45->get_x_4();
		float L_47 = V_2;
		float L_48 = ___alpha4;
		L_43->set_x_5(((float)il2cpp_codegen_add((float)L_46, (float)((float)il2cpp_codegen_multiply((float)L_47, (float)L_48)))));
		// bone.y = bone.data.y + y * alpha;
		Bone_t6DA0B82485BED2E4EEE864AAD607EEBDC2F98AAF * L_49 = V_0;
		Bone_t6DA0B82485BED2E4EEE864AAD607EEBDC2F98AAF * L_50 = V_0;
		BoneData_t48A671E6818E76905840CC122A96889DDCB92A51 * L_51 = L_50->get_data_1();
		float L_52 = L_51->get_y_5();
		float L_53 = V_3;
		float L_54 = ___alpha4;
		L_49->set_y_6(((float)il2cpp_codegen_add((float)L_52, (float)((float)il2cpp_codegen_multiply((float)L_53, (float)L_54)))));
		// break;
		return;
	}

IL_00eb:
	{
		// bone.x += (bone.data.x + x - bone.x) * alpha;
		Bone_t6DA0B82485BED2E4EEE864AAD607EEBDC2F98AAF * L_55 = V_0;
		Bone_t6DA0B82485BED2E4EEE864AAD607EEBDC2F98AAF * L_56 = L_55;
		float L_57 = L_56->get_x_5();
		Bone_t6DA0B82485BED2E4EEE864AAD607EEBDC2F98AAF * L_58 = V_0;
		BoneData_t48A671E6818E76905840CC122A96889DDCB92A51 * L_59 = L_58->get_data_1();
		float L_60 = L_59->get_x_4();
		float L_61 = V_2;
		Bone_t6DA0B82485BED2E4EEE864AAD607EEBDC2F98AAF * L_62 = V_0;
		float L_63 = L_62->get_x_5();
		float L_64 = ___alpha4;
		L_56->set_x_5(((float)il2cpp_codegen_add((float)L_57, (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)((float)il2cpp_codegen_add((float)L_60, (float)L_61)), (float)L_63)), (float)L_64)))));
		// bone.y += (bone.data.y + y - bone.y) * alpha;
		Bone_t6DA0B82485BED2E4EEE864AAD607EEBDC2F98AAF * L_65 = V_0;
		Bone_t6DA0B82485BED2E4EEE864AAD607EEBDC2F98AAF * L_66 = L_65;
		float L_67 = L_66->get_y_6();
		Bone_t6DA0B82485BED2E4EEE864AAD607EEBDC2F98AAF * L_68 = V_0;
		BoneData_t48A671E6818E76905840CC122A96889DDCB92A51 * L_69 = L_68->get_data_1();
		float L_70 = L_69->get_y_5();
		float L_71 = V_3;
		Bone_t6DA0B82485BED2E4EEE864AAD607EEBDC2F98AAF * L_72 = V_0;
		float L_73 = L_72->get_y_6();
		float L_74 = ___alpha4;
		L_66->set_y_6(((float)il2cpp_codegen_add((float)L_67, (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)((float)il2cpp_codegen_add((float)L_70, (float)L_71)), (float)L_73)), (float)L_74)))));
		// break;
		return;
	}

IL_0134:
	{
		// bone.x += x * alpha;
		Bone_t6DA0B82485BED2E4EEE864AAD607EEBDC2F98AAF * L_75 = V_0;
		Bone_t6DA0B82485BED2E4EEE864AAD607EEBDC2F98AAF * L_76 = L_75;
		float L_77 = L_76->get_x_5();
		float L_78 = V_2;
		float L_79 = ___alpha4;
		L_76->set_x_5(((float)il2cpp_codegen_add((float)L_77, (float)((float)il2cpp_codegen_multiply((float)L_78, (float)L_79)))));
		// bone.y += y * alpha;
		Bone_t6DA0B82485BED2E4EEE864AAD607EEBDC2F98AAF * L_80 = V_0;
		Bone_t6DA0B82485BED2E4EEE864AAD607EEBDC2F98AAF * L_81 = L_80;
		float L_82 = L_81->get_y_6();
		float L_83 = V_3;
		float L_84 = ___alpha4;
		L_81->set_y_6(((float)il2cpp_codegen_add((float)L_82, (float)((float)il2cpp_codegen_multiply((float)L_83, (float)L_84)))));
		// }
		return;
	}
}
// System.Void Spine.TranslateTimeline::GetCurveValue(System.Single&,System.Single&,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TranslateTimeline_GetCurveValue_m50513A5FB9ABBF0C20C603E408E9BC4EF5F1125A (TranslateTimeline_t681EC4DF87BDD6C1C37F02813D59275B8EAF02E5 * __this, float* ___x0, float* ___y1, float ___time2, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	{
		// int i = Search(frames, time, ENTRIES), curveType = (int)curves[i / ENTRIES];
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_0 = ((Timeline_tD8AC6175D8B492C9CDB166AC1FBFEE28A474DAF0 *)__this)->get_frames_1();
		float L_1 = ___time2;
		int32_t L_2;
		L_2 = Timeline_Search_m34D8AE9726E2A2D27C310D7F156F57931EA3ABD6(L_0, L_1, 3, /*hidden argument*/NULL);
		V_0 = L_2;
		// int i = Search(frames, time, ENTRIES), curveType = (int)curves[i / ENTRIES];
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_3 = ((CurveTimeline_t404E642BD4DFEEDB39DBCDC088B7F7E78FAE5476 *)__this)->get_curves_6();
		int32_t L_4 = V_0;
		int32_t L_5 = ((int32_t)((int32_t)L_4/(int32_t)3));
		float L_6 = (L_3)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_5));
		V_1 = il2cpp_codegen_cast_double_to_int<int32_t>(L_6);
		int32_t L_7 = V_1;
		if (!L_7)
		{
			goto IL_0023;
		}
	}
	{
		int32_t L_8 = V_1;
		if ((((int32_t)L_8) == ((int32_t)1)))
		{
			goto IL_0082;
		}
	}
	{
		goto IL_009b;
	}

IL_0023:
	{
		// float before = frames[i];
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_9 = ((Timeline_tD8AC6175D8B492C9CDB166AC1FBFEE28A474DAF0 *)__this)->get_frames_1();
		int32_t L_10 = V_0;
		int32_t L_11 = L_10;
		float L_12 = (L_9)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_11));
		V_2 = L_12;
		// x = frames[i + VALUE1];
		float* L_13 = ___x0;
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_14 = ((Timeline_tD8AC6175D8B492C9CDB166AC1FBFEE28A474DAF0 *)__this)->get_frames_1();
		int32_t L_15 = V_0;
		int32_t L_16 = ((int32_t)il2cpp_codegen_add((int32_t)L_15, (int32_t)1));
		float L_17 = (L_14)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_16));
		*((float*)L_13) = (float)L_17;
		// y = frames[i + VALUE2];
		float* L_18 = ___y1;
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_19 = ((Timeline_tD8AC6175D8B492C9CDB166AC1FBFEE28A474DAF0 *)__this)->get_frames_1();
		int32_t L_20 = V_0;
		int32_t L_21 = ((int32_t)il2cpp_codegen_add((int32_t)L_20, (int32_t)2));
		float L_22 = (L_19)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_21));
		*((float*)L_18) = (float)L_22;
		// float t = (time - before) / (frames[i + ENTRIES] - before);
		float L_23 = ___time2;
		float L_24 = V_2;
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_25 = ((Timeline_tD8AC6175D8B492C9CDB166AC1FBFEE28A474DAF0 *)__this)->get_frames_1();
		int32_t L_26 = V_0;
		int32_t L_27 = ((int32_t)il2cpp_codegen_add((int32_t)L_26, (int32_t)3));
		float L_28 = (L_25)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_27));
		float L_29 = V_2;
		V_3 = ((float)((float)((float)il2cpp_codegen_subtract((float)L_23, (float)L_24))/(float)((float)il2cpp_codegen_subtract((float)L_28, (float)L_29))));
		// x += (frames[i + ENTRIES + VALUE1] - x) * t;
		float* L_30 = ___x0;
		float* L_31 = ___x0;
		float L_32 = *((float*)L_31);
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_33 = ((Timeline_tD8AC6175D8B492C9CDB166AC1FBFEE28A474DAF0 *)__this)->get_frames_1();
		int32_t L_34 = V_0;
		int32_t L_35 = ((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_34, (int32_t)3)), (int32_t)1));
		float L_36 = (L_33)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_35));
		float* L_37 = ___x0;
		float L_38 = *((float*)L_37);
		float L_39 = V_3;
		*((float*)L_30) = (float)((float)il2cpp_codegen_add((float)L_32, (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)L_36, (float)L_38)), (float)L_39))));
		// y += (frames[i + ENTRIES + VALUE2] - y) * t;
		float* L_40 = ___y1;
		float* L_41 = ___y1;
		float L_42 = *((float*)L_41);
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_43 = ((Timeline_tD8AC6175D8B492C9CDB166AC1FBFEE28A474DAF0 *)__this)->get_frames_1();
		int32_t L_44 = V_0;
		int32_t L_45 = ((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_44, (int32_t)3)), (int32_t)2));
		float L_46 = (L_43)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_45));
		float* L_47 = ___y1;
		float L_48 = *((float*)L_47);
		float L_49 = V_3;
		*((float*)L_40) = (float)((float)il2cpp_codegen_add((float)L_42, (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)L_46, (float)L_48)), (float)L_49))));
		// break;
		return;
	}

IL_0082:
	{
		// x = frames[i + VALUE1];
		float* L_50 = ___x0;
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_51 = ((Timeline_tD8AC6175D8B492C9CDB166AC1FBFEE28A474DAF0 *)__this)->get_frames_1();
		int32_t L_52 = V_0;
		int32_t L_53 = ((int32_t)il2cpp_codegen_add((int32_t)L_52, (int32_t)1));
		float L_54 = (L_51)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_53));
		*((float*)L_50) = (float)L_54;
		// y = frames[i + VALUE2];
		float* L_55 = ___y1;
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_56 = ((Timeline_tD8AC6175D8B492C9CDB166AC1FBFEE28A474DAF0 *)__this)->get_frames_1();
		int32_t L_57 = V_0;
		int32_t L_58 = ((int32_t)il2cpp_codegen_add((int32_t)L_57, (int32_t)2));
		float L_59 = (L_56)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_58));
		*((float*)L_55) = (float)L_59;
		// break;
		return;
	}

IL_009b:
	{
		// x = GetBezierValue(time, i, VALUE1, curveType - BEZIER);
		float* L_60 = ___x0;
		float L_61 = ___time2;
		int32_t L_62 = V_0;
		int32_t L_63 = V_1;
		float L_64;
		L_64 = CurveTimeline_GetBezierValue_m7F3F858D48DFBB2654FAB172AF39E25579AA8265(__this, L_61, L_62, 1, ((int32_t)il2cpp_codegen_subtract((int32_t)L_63, (int32_t)2)), /*hidden argument*/NULL);
		*((float*)L_60) = (float)L_64;
		// y = GetBezierValue(time, i, VALUE2, curveType + BEZIER_SIZE - BEZIER);
		float* L_65 = ___y1;
		float L_66 = ___time2;
		int32_t L_67 = V_0;
		int32_t L_68 = V_1;
		float L_69;
		L_69 = CurveTimeline_GetBezierValue_m7F3F858D48DFBB2654FAB172AF39E25579AA8265(__this, L_66, L_67, 2, ((int32_t)il2cpp_codegen_subtract((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_68, (int32_t)((int32_t)18))), (int32_t)2)), /*hidden argument*/NULL);
		*((float*)L_65) = (float)L_69;
		// }
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
// System.Void Spine.TranslateXTimeline::.ctor(System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TranslateXTimeline__ctor_m32B23E42D95560A963D55872BA1B3CC2E4F8075C (TranslateXTimeline_t359052D0CB61701970042CFD7A82575F4A2729F5 * __this, int32_t ___frameCount0, int32_t ___bezierCount1, int32_t ___boneIndex2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA42779B09629BCE81B76EF626A57A0B40F2AD827);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// : base(frameCount, bezierCount, (int)Property.X + "|" + boneIndex) {
		int32_t L_0 = ___frameCount0;
		int32_t L_1 = ___bezierCount1;
		V_0 = 1;
		String_t* L_2;
		L_2 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)(&V_0), /*hidden argument*/NULL);
		String_t* L_3;
		L_3 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)(&___boneIndex2), /*hidden argument*/NULL);
		String_t* L_4;
		L_4 = String_Concat_m89EAB4C6A96B0E5C3F87300D6BE78D386B9EFC44(L_2, _stringLiteralA42779B09629BCE81B76EF626A57A0B40F2AD827, L_3, /*hidden argument*/NULL);
		CurveTimeline1__ctor_m84E1D0D574EFFE180622AB51E745C794285AB877(__this, L_0, L_1, L_4, /*hidden argument*/NULL);
		// this.boneIndex = boneIndex;
		int32_t L_5 = ___boneIndex2;
		__this->set_boneIndex_9(L_5);
		// }
		return;
	}
}
// System.Int32 Spine.TranslateXTimeline::get_BoneIndex()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TranslateXTimeline_get_BoneIndex_m34E804A4315283728D1748B07BA514B82EAA1E84 (TranslateXTimeline_t359052D0CB61701970042CFD7A82575F4A2729F5 * __this, const RuntimeMethod* method)
{
	{
		// return boneIndex;
		int32_t L_0 = __this->get_boneIndex_9();
		return L_0;
	}
}
// System.Void Spine.TranslateXTimeline::Apply(Spine.Skeleton,System.Single,System.Single,Spine.ExposedList`1<Spine.Event>,System.Single,Spine.MixBlend,Spine.MixDirection)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TranslateXTimeline_Apply_m6A7A5DB964E643D3224D3E7312CE7B37EAE4FBBD (TranslateXTimeline_t359052D0CB61701970042CFD7A82575F4A2729F5 * __this, Skeleton_tA4F63D1CB185D30296FA5323E1DA8B993E21293C * ___skeleton0, float ___lastTime1, float ___time2, ExposedList_1_t8CEF7833102CD6D128DB4877B6641E863D85194A * ___firedEvents3, float ___alpha4, int32_t ___blend5, int32_t ___direction6, const RuntimeMethod* method)
{
	Bone_t6DA0B82485BED2E4EEE864AAD607EEBDC2F98AAF * V_0 = NULL;
	SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* V_1 = NULL;
	float V_2 = 0.0f;
	{
		// Bone bone = skeleton.bones.Items[boneIndex];
		Skeleton_tA4F63D1CB185D30296FA5323E1DA8B993E21293C * L_0 = ___skeleton0;
		ExposedList_1_t4F66E6448150D0CAC1BD8C1A4810A7CEB844B164 * L_1 = L_0->get_bones_1();
		BoneU5BU5D_t77D01946B97A0778AD79515B28F1C30BDBED3A23* L_2 = L_1->get_Items_0();
		int32_t L_3 = __this->get_boneIndex_9();
		int32_t L_4 = L_3;
		Bone_t6DA0B82485BED2E4EEE864AAD607EEBDC2F98AAF * L_5 = (L_2)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_4));
		V_0 = L_5;
		// if (!bone.active) return;
		Bone_t6DA0B82485BED2E4EEE864AAD607EEBDC2F98AAF * L_6 = V_0;
		bool L_7 = L_6->get_active_26();
		if (L_7)
		{
			goto IL_001c;
		}
	}
	{
		// if (!bone.active) return;
		return;
	}

IL_001c:
	{
		// float[] frames = this.frames;
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_8 = ((Timeline_tD8AC6175D8B492C9CDB166AC1FBFEE28A474DAF0 *)__this)->get_frames_1();
		V_1 = L_8;
		// if (time < frames[0]) { // Time is before first frame.
		float L_9 = ___time2;
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_10 = V_1;
		int32_t L_11 = 0;
		float L_12 = (L_10)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_11));
		if ((!(((float)L_9) < ((float)L_12))))
		{
			goto IL_0068;
		}
	}
	{
		int32_t L_13 = ___blend5;
		if (!L_13)
		{
			goto IL_0033;
		}
	}
	{
		int32_t L_14 = ___blend5;
		if ((((int32_t)L_14) == ((int32_t)1)))
		{
			goto IL_0045;
		}
	}
	{
		return;
	}

IL_0033:
	{
		// bone.x = bone.data.x;
		Bone_t6DA0B82485BED2E4EEE864AAD607EEBDC2F98AAF * L_15 = V_0;
		Bone_t6DA0B82485BED2E4EEE864AAD607EEBDC2F98AAF * L_16 = V_0;
		BoneData_t48A671E6818E76905840CC122A96889DDCB92A51 * L_17 = L_16->get_data_1();
		float L_18 = L_17->get_x_4();
		L_15->set_x_5(L_18);
		// return;
		return;
	}

IL_0045:
	{
		// bone.x += (bone.data.x - bone.x) * alpha;
		Bone_t6DA0B82485BED2E4EEE864AAD607EEBDC2F98AAF * L_19 = V_0;
		Bone_t6DA0B82485BED2E4EEE864AAD607EEBDC2F98AAF * L_20 = L_19;
		float L_21 = L_20->get_x_5();
		Bone_t6DA0B82485BED2E4EEE864AAD607EEBDC2F98AAF * L_22 = V_0;
		BoneData_t48A671E6818E76905840CC122A96889DDCB92A51 * L_23 = L_22->get_data_1();
		float L_24 = L_23->get_x_4();
		Bone_t6DA0B82485BED2E4EEE864AAD607EEBDC2F98AAF * L_25 = V_0;
		float L_26 = L_25->get_x_5();
		float L_27 = ___alpha4;
		L_20->set_x_5(((float)il2cpp_codegen_add((float)L_21, (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)L_24, (float)L_26)), (float)L_27)))));
		// return;
		return;
	}

IL_0068:
	{
		// float x = GetCurveValue(time);
		float L_28 = ___time2;
		float L_29;
		L_29 = CurveTimeline1_GetCurveValue_m580B9BDEE2D339A4381002F87763EAD986F94182(__this, L_28, /*hidden argument*/NULL);
		V_2 = L_29;
		int32_t L_30 = ___blend5;
		switch (L_30)
		{
			case 0:
			{
				goto IL_0088;
			}
			case 1:
			{
				goto IL_009f;
			}
			case 2:
			{
				goto IL_009f;
			}
			case 3:
			{
				goto IL_00c4;
			}
		}
	}
	{
		return;
	}

IL_0088:
	{
		// bone.x = bone.data.x + x * alpha;
		Bone_t6DA0B82485BED2E4EEE864AAD607EEBDC2F98AAF * L_31 = V_0;
		Bone_t6DA0B82485BED2E4EEE864AAD607EEBDC2F98AAF * L_32 = V_0;
		BoneData_t48A671E6818E76905840CC122A96889DDCB92A51 * L_33 = L_32->get_data_1();
		float L_34 = L_33->get_x_4();
		float L_35 = V_2;
		float L_36 = ___alpha4;
		L_31->set_x_5(((float)il2cpp_codegen_add((float)L_34, (float)((float)il2cpp_codegen_multiply((float)L_35, (float)L_36)))));
		// break;
		return;
	}

IL_009f:
	{
		// bone.x += (bone.data.x + x - bone.x) * alpha;
		Bone_t6DA0B82485BED2E4EEE864AAD607EEBDC2F98AAF * L_37 = V_0;
		Bone_t6DA0B82485BED2E4EEE864AAD607EEBDC2F98AAF * L_38 = L_37;
		float L_39 = L_38->get_x_5();
		Bone_t6DA0B82485BED2E4EEE864AAD607EEBDC2F98AAF * L_40 = V_0;
		BoneData_t48A671E6818E76905840CC122A96889DDCB92A51 * L_41 = L_40->get_data_1();
		float L_42 = L_41->get_x_4();
		float L_43 = V_2;
		Bone_t6DA0B82485BED2E4EEE864AAD607EEBDC2F98AAF * L_44 = V_0;
		float L_45 = L_44->get_x_5();
		float L_46 = ___alpha4;
		L_38->set_x_5(((float)il2cpp_codegen_add((float)L_39, (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)((float)il2cpp_codegen_add((float)L_42, (float)L_43)), (float)L_45)), (float)L_46)))));
		// break;
		return;
	}

IL_00c4:
	{
		// bone.x += x * alpha;
		Bone_t6DA0B82485BED2E4EEE864AAD607EEBDC2F98AAF * L_47 = V_0;
		Bone_t6DA0B82485BED2E4EEE864AAD607EEBDC2F98AAF * L_48 = L_47;
		float L_49 = L_48->get_x_5();
		float L_50 = V_2;
		float L_51 = ___alpha4;
		L_48->set_x_5(((float)il2cpp_codegen_add((float)L_49, (float)((float)il2cpp_codegen_multiply((float)L_50, (float)L_51)))));
		// }
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
// System.Void Spine.TranslateYTimeline::.ctor(System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TranslateYTimeline__ctor_m83143164ED720E7F68A6155C5D98C1E5B136A3D7 (TranslateYTimeline_t83C5029E5E77494698A95E1D6748CE3692AECF31 * __this, int32_t ___frameCount0, int32_t ___bezierCount1, int32_t ___boneIndex2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA42779B09629BCE81B76EF626A57A0B40F2AD827);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// : base(frameCount, bezierCount, (int)Property.Y + "|" + boneIndex) {
		int32_t L_0 = ___frameCount0;
		int32_t L_1 = ___bezierCount1;
		V_0 = 2;
		String_t* L_2;
		L_2 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)(&V_0), /*hidden argument*/NULL);
		String_t* L_3;
		L_3 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)(&___boneIndex2), /*hidden argument*/NULL);
		String_t* L_4;
		L_4 = String_Concat_m89EAB4C6A96B0E5C3F87300D6BE78D386B9EFC44(L_2, _stringLiteralA42779B09629BCE81B76EF626A57A0B40F2AD827, L_3, /*hidden argument*/NULL);
		CurveTimeline1__ctor_m84E1D0D574EFFE180622AB51E745C794285AB877(__this, L_0, L_1, L_4, /*hidden argument*/NULL);
		// this.boneIndex = boneIndex;
		int32_t L_5 = ___boneIndex2;
		__this->set_boneIndex_9(L_5);
		// }
		return;
	}
}
// System.Int32 Spine.TranslateYTimeline::get_BoneIndex()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TranslateYTimeline_get_BoneIndex_mD400EA10BCF4140621B93CDE7FD1A1E9360B6645 (TranslateYTimeline_t83C5029E5E77494698A95E1D6748CE3692AECF31 * __this, const RuntimeMethod* method)
{
	{
		// return boneIndex;
		int32_t L_0 = __this->get_boneIndex_9();
		return L_0;
	}
}
// System.Void Spine.TranslateYTimeline::Apply(Spine.Skeleton,System.Single,System.Single,Spine.ExposedList`1<Spine.Event>,System.Single,Spine.MixBlend,Spine.MixDirection)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TranslateYTimeline_Apply_m88C7606BF0688BF3B0AC32D76001B7969FE68374 (TranslateYTimeline_t83C5029E5E77494698A95E1D6748CE3692AECF31 * __this, Skeleton_tA4F63D1CB185D30296FA5323E1DA8B993E21293C * ___skeleton0, float ___lastTime1, float ___time2, ExposedList_1_t8CEF7833102CD6D128DB4877B6641E863D85194A * ___firedEvents3, float ___alpha4, int32_t ___blend5, int32_t ___direction6, const RuntimeMethod* method)
{
	Bone_t6DA0B82485BED2E4EEE864AAD607EEBDC2F98AAF * V_0 = NULL;
	SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* V_1 = NULL;
	float V_2 = 0.0f;
	{
		// Bone bone = skeleton.bones.Items[boneIndex];
		Skeleton_tA4F63D1CB185D30296FA5323E1DA8B993E21293C * L_0 = ___skeleton0;
		ExposedList_1_t4F66E6448150D0CAC1BD8C1A4810A7CEB844B164 * L_1 = L_0->get_bones_1();
		BoneU5BU5D_t77D01946B97A0778AD79515B28F1C30BDBED3A23* L_2 = L_1->get_Items_0();
		int32_t L_3 = __this->get_boneIndex_9();
		int32_t L_4 = L_3;
		Bone_t6DA0B82485BED2E4EEE864AAD607EEBDC2F98AAF * L_5 = (L_2)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_4));
		V_0 = L_5;
		// if (!bone.active) return;
		Bone_t6DA0B82485BED2E4EEE864AAD607EEBDC2F98AAF * L_6 = V_0;
		bool L_7 = L_6->get_active_26();
		if (L_7)
		{
			goto IL_001c;
		}
	}
	{
		// if (!bone.active) return;
		return;
	}

IL_001c:
	{
		// float[] frames = this.frames;
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_8 = ((Timeline_tD8AC6175D8B492C9CDB166AC1FBFEE28A474DAF0 *)__this)->get_frames_1();
		V_1 = L_8;
		// if (time < frames[0]) { // Time is before first frame.
		float L_9 = ___time2;
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_10 = V_1;
		int32_t L_11 = 0;
		float L_12 = (L_10)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_11));
		if ((!(((float)L_9) < ((float)L_12))))
		{
			goto IL_0068;
		}
	}
	{
		int32_t L_13 = ___blend5;
		if (!L_13)
		{
			goto IL_0033;
		}
	}
	{
		int32_t L_14 = ___blend5;
		if ((((int32_t)L_14) == ((int32_t)1)))
		{
			goto IL_0045;
		}
	}
	{
		return;
	}

IL_0033:
	{
		// bone.y = bone.data.y;
		Bone_t6DA0B82485BED2E4EEE864AAD607EEBDC2F98AAF * L_15 = V_0;
		Bone_t6DA0B82485BED2E4EEE864AAD607EEBDC2F98AAF * L_16 = V_0;
		BoneData_t48A671E6818E76905840CC122A96889DDCB92A51 * L_17 = L_16->get_data_1();
		float L_18 = L_17->get_y_5();
		L_15->set_y_6(L_18);
		// return;
		return;
	}

IL_0045:
	{
		// bone.y += (bone.data.y - bone.y) * alpha;
		Bone_t6DA0B82485BED2E4EEE864AAD607EEBDC2F98AAF * L_19 = V_0;
		Bone_t6DA0B82485BED2E4EEE864AAD607EEBDC2F98AAF * L_20 = L_19;
		float L_21 = L_20->get_y_6();
		Bone_t6DA0B82485BED2E4EEE864AAD607EEBDC2F98AAF * L_22 = V_0;
		BoneData_t48A671E6818E76905840CC122A96889DDCB92A51 * L_23 = L_22->get_data_1();
		float L_24 = L_23->get_y_5();
		Bone_t6DA0B82485BED2E4EEE864AAD607EEBDC2F98AAF * L_25 = V_0;
		float L_26 = L_25->get_y_6();
		float L_27 = ___alpha4;
		L_20->set_y_6(((float)il2cpp_codegen_add((float)L_21, (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)L_24, (float)L_26)), (float)L_27)))));
		// return;
		return;
	}

IL_0068:
	{
		// float y = GetCurveValue(time);
		float L_28 = ___time2;
		float L_29;
		L_29 = CurveTimeline1_GetCurveValue_m580B9BDEE2D339A4381002F87763EAD986F94182(__this, L_28, /*hidden argument*/NULL);
		V_2 = L_29;
		int32_t L_30 = ___blend5;
		switch (L_30)
		{
			case 0:
			{
				goto IL_0088;
			}
			case 1:
			{
				goto IL_009f;
			}
			case 2:
			{
				goto IL_009f;
			}
			case 3:
			{
				goto IL_00c4;
			}
		}
	}
	{
		return;
	}

IL_0088:
	{
		// bone.y = bone.data.y + y * alpha;
		Bone_t6DA0B82485BED2E4EEE864AAD607EEBDC2F98AAF * L_31 = V_0;
		Bone_t6DA0B82485BED2E4EEE864AAD607EEBDC2F98AAF * L_32 = V_0;
		BoneData_t48A671E6818E76905840CC122A96889DDCB92A51 * L_33 = L_32->get_data_1();
		float L_34 = L_33->get_y_5();
		float L_35 = V_2;
		float L_36 = ___alpha4;
		L_31->set_y_6(((float)il2cpp_codegen_add((float)L_34, (float)((float)il2cpp_codegen_multiply((float)L_35, (float)L_36)))));
		// break;
		return;
	}

IL_009f:
	{
		// bone.y += (bone.data.y + y - bone.y) * alpha;
		Bone_t6DA0B82485BED2E4EEE864AAD607EEBDC2F98AAF * L_37 = V_0;
		Bone_t6DA0B82485BED2E4EEE864AAD607EEBDC2F98AAF * L_38 = L_37;
		float L_39 = L_38->get_y_6();
		Bone_t6DA0B82485BED2E4EEE864AAD607EEBDC2F98AAF * L_40 = V_0;
		BoneData_t48A671E6818E76905840CC122A96889DDCB92A51 * L_41 = L_40->get_data_1();
		float L_42 = L_41->get_y_5();
		float L_43 = V_2;
		Bone_t6DA0B82485BED2E4EEE864AAD607EEBDC2F98AAF * L_44 = V_0;
		float L_45 = L_44->get_y_6();
		float L_46 = ___alpha4;
		L_38->set_y_6(((float)il2cpp_codegen_add((float)L_39, (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)((float)il2cpp_codegen_add((float)L_42, (float)L_43)), (float)L_45)), (float)L_46)))));
		// break;
		return;
	}

IL_00c4:
	{
		// bone.y += y * alpha;
		Bone_t6DA0B82485BED2E4EEE864AAD607EEBDC2F98AAF * L_47 = V_0;
		Bone_t6DA0B82485BED2E4EEE864AAD607EEBDC2F98AAF * L_48 = L_47;
		float L_49 = L_48->get_y_6();
		float L_50 = V_2;
		float L_51 = ___alpha4;
		L_48->set_y_6(((float)il2cpp_codegen_add((float)L_49, (float)((float)il2cpp_codegen_multiply((float)L_50, (float)L_51)))));
		// }
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
// Spine.ExposedList`1<System.Int32> Spine.Triangulator::Triangulate(Spine.ExposedList`1<System.Single>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ExposedList_1_tEB071484A7B70681ADB6BD9522EFC630CA5C5066 * Triangulator_Triangulate_m83E7E0037B5D8F16202645E5C1959AA777DE962E (Triangulator_tB8EB2546BA4C75A44FDEEC203E67023C07FBBE8B * __this, ExposedList_1_t9F8622C73EB60A6882B2968C1C0F1706D574F526 * ___verticesArray0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExposedList_1_Add_m65591272902D94AFAE294B4CDF30A465AA2274F8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExposedList_1_Clear_m9E1BE8027151460EB7E0FAB390B2846D15BA302B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExposedList_1_EnsureCapacity_m51473D74740BFE47642E8A5FEF054C72D22FE11A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExposedList_1_RemoveAt_m315AA4921C74B8F80A3A354E0524085CAEF82AA8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExposedList_1_RemoveAt_m74D0AC175C5B5B597106B9B6B37B6A51A8EF2B13_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExposedList_1_Resize_m666C6341D5DC487C18356A856E93EF53AC33CB42_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExposedList_1_Resize_m87D63C372E64631877CF0C3F964DD144A742AF2A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tA269614262430118C9FC5C4D9EF4F61C812568F0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* V_0 = NULL;
	int32_t V_1 = 0;
	ExposedList_1_tEB071484A7B70681ADB6BD9522EFC630CA5C5066 * V_2 = NULL;
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* V_3 = NULL;
	ExposedList_1_tAA9A80412EB5EC236EBA9FC15B2BD9A61915AE7E * V_4 = NULL;
	BooleanU5BU5D_tEC7BAF93C44F875016DAADC8696EE3A465644D3C* V_5 = NULL;
	ExposedList_1_tEB071484A7B70681ADB6BD9522EFC630CA5C5066 * V_6 = NULL;
	int32_t V_7 = 0;
	int32_t V_8 = 0;
	int32_t V_9 = 0;
	int32_t V_10 = 0;
	int32_t V_11 = 0;
	int32_t V_12 = 0;
	int32_t V_13 = 0;
	int32_t V_14 = 0;
	int32_t V_15 = 0;
	int32_t V_16 = 0;
	int32_t V_17 = 0;
	float V_18 = 0.0f;
	float V_19 = 0.0f;
	float V_20 = 0.0f;
	float V_21 = 0.0f;
	float V_22 = 0.0f;
	float V_23 = 0.0f;
	int32_t V_24 = 0;
	int32_t V_25 = 0;
	float V_26 = 0.0f;
	float V_27 = 0.0f;
	int32_t G_B25_0 = 0;
	{
		// var vertices = verticesArray.Items;
		ExposedList_1_t9F8622C73EB60A6882B2968C1C0F1706D574F526 * L_0 = ___verticesArray0;
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_1 = L_0->get_Items_0();
		V_0 = L_1;
		// int vertexCount = verticesArray.Count >> 1;
		ExposedList_1_t9F8622C73EB60A6882B2968C1C0F1706D574F526 * L_2 = ___verticesArray0;
		int32_t L_3 = L_2->get_Count_1();
		V_1 = ((int32_t)((int32_t)L_3>>(int32_t)1));
		// var indicesArray = this.indicesArray;
		ExposedList_1_tEB071484A7B70681ADB6BD9522EFC630CA5C5066 * L_4 = __this->get_indicesArray_2();
		V_2 = L_4;
		// indicesArray.Clear();
		ExposedList_1_tEB071484A7B70681ADB6BD9522EFC630CA5C5066 * L_5 = V_2;
		ExposedList_1_Clear_m9E1BE8027151460EB7E0FAB390B2846D15BA302B(L_5, (bool)1, /*hidden argument*/ExposedList_1_Clear_m9E1BE8027151460EB7E0FAB390B2846D15BA302B_RuntimeMethod_var);
		// int[] indices = indicesArray.Resize(vertexCount).Items;
		ExposedList_1_tEB071484A7B70681ADB6BD9522EFC630CA5C5066 * L_6 = V_2;
		int32_t L_7 = V_1;
		ExposedList_1_tEB071484A7B70681ADB6BD9522EFC630CA5C5066 * L_8;
		L_8 = ExposedList_1_Resize_m87D63C372E64631877CF0C3F964DD144A742AF2A(L_6, L_7, /*hidden argument*/ExposedList_1_Resize_m87D63C372E64631877CF0C3F964DD144A742AF2A_RuntimeMethod_var);
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_9 = L_8->get_Items_0();
		V_3 = L_9;
		// for (int i = 0; i < vertexCount; i++)
		V_7 = 0;
		goto IL_003c;
	}

IL_0030:
	{
		// indices[i] = i;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_10 = V_3;
		int32_t L_11 = V_7;
		int32_t L_12 = V_7;
		(L_10)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_11), (int32_t)L_12);
		// for (int i = 0; i < vertexCount; i++)
		int32_t L_13 = V_7;
		V_7 = ((int32_t)il2cpp_codegen_add((int32_t)L_13, (int32_t)1));
	}

IL_003c:
	{
		// for (int i = 0; i < vertexCount; i++)
		int32_t L_14 = V_7;
		int32_t L_15 = V_1;
		if ((((int32_t)L_14) < ((int32_t)L_15)))
		{
			goto IL_0030;
		}
	}
	{
		// var isConcaveArray = this.isConcaveArray;
		ExposedList_1_tAA9A80412EB5EC236EBA9FC15B2BD9A61915AE7E * L_16 = __this->get_isConcaveArray_3();
		V_4 = L_16;
		// bool[] isConcave = isConcaveArray.Resize(vertexCount).Items;
		ExposedList_1_tAA9A80412EB5EC236EBA9FC15B2BD9A61915AE7E * L_17 = V_4;
		int32_t L_18 = V_1;
		ExposedList_1_tAA9A80412EB5EC236EBA9FC15B2BD9A61915AE7E * L_19;
		L_19 = ExposedList_1_Resize_m666C6341D5DC487C18356A856E93EF53AC33CB42(L_17, L_18, /*hidden argument*/ExposedList_1_Resize_m666C6341D5DC487C18356A856E93EF53AC33CB42_RuntimeMethod_var);
		BooleanU5BU5D_tEC7BAF93C44F875016DAADC8696EE3A465644D3C* L_20 = L_19->get_Items_0();
		V_5 = L_20;
		// for (int i = 0, n = vertexCount; i < n; ++i)
		V_8 = 0;
		// for (int i = 0, n = vertexCount; i < n; ++i)
		int32_t L_21 = V_1;
		V_9 = L_21;
		goto IL_0075;
	}

IL_0060:
	{
		// isConcave[i] = IsConcave(i, vertexCount, vertices, indices);
		BooleanU5BU5D_tEC7BAF93C44F875016DAADC8696EE3A465644D3C* L_22 = V_5;
		int32_t L_23 = V_8;
		int32_t L_24 = V_8;
		int32_t L_25 = V_1;
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_26 = V_0;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_27 = V_3;
		bool L_28;
		L_28 = Triangulator_IsConcave_mDD6C3B0E0D6C7D764959472E51D5EBDDC7066931(L_24, L_25, L_26, L_27, /*hidden argument*/NULL);
		(L_22)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_23), (bool)L_28);
		// for (int i = 0, n = vertexCount; i < n; ++i)
		int32_t L_29 = V_8;
		V_8 = ((int32_t)il2cpp_codegen_add((int32_t)L_29, (int32_t)1));
	}

IL_0075:
	{
		// for (int i = 0, n = vertexCount; i < n; ++i)
		int32_t L_30 = V_8;
		int32_t L_31 = V_9;
		if ((((int32_t)L_30) < ((int32_t)L_31)))
		{
			goto IL_0060;
		}
	}
	{
		// var triangles = this.triangles;
		ExposedList_1_tEB071484A7B70681ADB6BD9522EFC630CA5C5066 * L_32 = __this->get_triangles_4();
		V_6 = L_32;
		// triangles.Clear();
		ExposedList_1_tEB071484A7B70681ADB6BD9522EFC630CA5C5066 * L_33 = V_6;
		ExposedList_1_Clear_m9E1BE8027151460EB7E0FAB390B2846D15BA302B(L_33, (bool)1, /*hidden argument*/ExposedList_1_Clear_m9E1BE8027151460EB7E0FAB390B2846D15BA302B_RuntimeMethod_var);
		// triangles.EnsureCapacity(Math.Max(0, vertexCount - 2) << 2);
		ExposedList_1_tEB071484A7B70681ADB6BD9522EFC630CA5C5066 * L_34 = V_6;
		int32_t L_35 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(Math_tA269614262430118C9FC5C4D9EF4F61C812568F0_il2cpp_TypeInfo_var);
		int32_t L_36;
		L_36 = Math_Max_mD8AA27386BF012C65303FCDEA041B0CC65056E7B(0, ((int32_t)il2cpp_codegen_subtract((int32_t)L_35, (int32_t)2)), /*hidden argument*/NULL);
		ExposedList_1_EnsureCapacity_m51473D74740BFE47642E8A5FEF054C72D22FE11A(L_34, ((int32_t)((int32_t)L_36<<(int32_t)2)), /*hidden argument*/ExposedList_1_EnsureCapacity_m51473D74740BFE47642E8A5FEF054C72D22FE11A_RuntimeMethod_var);
		goto IL_020a;
	}

IL_00a2:
	{
		// int previous = vertexCount - 1, i = 0, next = 1;
		int32_t L_37 = V_1;
		V_10 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_37, (int32_t)1));
		// int previous = vertexCount - 1, i = 0, next = 1;
		V_11 = 0;
		// int previous = vertexCount - 1, i = 0, next = 1;
		V_12 = 1;
	}

IL_00ad:
	{
		// if (!isConcave[i]) {
		BooleanU5BU5D_tEC7BAF93C44F875016DAADC8696EE3A465644D3C* L_38 = V_5;
		int32_t L_39 = V_11;
		int32_t L_40 = L_39;
		uint8_t L_41 = (uint8_t)(L_38)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_40));
		if (L_41)
		{
			goto IL_0169;
		}
	}
	{
		// int p1 = indices[previous] << 1, p2 = indices[i] << 1, p3 = indices[next] << 1;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_42 = V_3;
		int32_t L_43 = V_10;
		int32_t L_44 = L_43;
		int32_t L_45 = (L_42)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_44));
		V_15 = ((int32_t)((int32_t)L_45<<(int32_t)1));
		// int p1 = indices[previous] << 1, p2 = indices[i] << 1, p3 = indices[next] << 1;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_46 = V_3;
		int32_t L_47 = V_11;
		int32_t L_48 = L_47;
		int32_t L_49 = (L_46)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_48));
		V_16 = ((int32_t)((int32_t)L_49<<(int32_t)1));
		// int p1 = indices[previous] << 1, p2 = indices[i] << 1, p3 = indices[next] << 1;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_50 = V_3;
		int32_t L_51 = V_12;
		int32_t L_52 = L_51;
		int32_t L_53 = (L_50)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_52));
		V_17 = ((int32_t)((int32_t)L_53<<(int32_t)1));
		// float p1x = vertices[p1], p1y = vertices[p1 + 1];
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_54 = V_0;
		int32_t L_55 = V_15;
		int32_t L_56 = L_55;
		float L_57 = (L_54)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_56));
		V_18 = L_57;
		// float p1x = vertices[p1], p1y = vertices[p1 + 1];
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_58 = V_0;
		int32_t L_59 = V_15;
		int32_t L_60 = ((int32_t)il2cpp_codegen_add((int32_t)L_59, (int32_t)1));
		float L_61 = (L_58)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_60));
		V_19 = L_61;
		// float p2x = vertices[p2], p2y = vertices[p2 + 1];
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_62 = V_0;
		int32_t L_63 = V_16;
		int32_t L_64 = L_63;
		float L_65 = (L_62)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_64));
		V_20 = L_65;
		// float p2x = vertices[p2], p2y = vertices[p2 + 1];
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_66 = V_0;
		int32_t L_67 = V_16;
		int32_t L_68 = ((int32_t)il2cpp_codegen_add((int32_t)L_67, (int32_t)1));
		float L_69 = (L_66)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_68));
		V_21 = L_69;
		// float p3x = vertices[p3], p3y = vertices[p3 + 1];
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_70 = V_0;
		int32_t L_71 = V_17;
		int32_t L_72 = L_71;
		float L_73 = (L_70)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_72));
		V_22 = L_73;
		// float p3x = vertices[p3], p3y = vertices[p3 + 1];
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_74 = V_0;
		int32_t L_75 = V_17;
		int32_t L_76 = ((int32_t)il2cpp_codegen_add((int32_t)L_75, (int32_t)1));
		float L_77 = (L_74)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_76));
		V_23 = L_77;
		// for (int ii = (next + 1) % vertexCount; ii != previous; ii = (ii + 1) % vertexCount) {
		int32_t L_78 = V_12;
		int32_t L_79 = V_1;
		V_24 = ((int32_t)((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_78, (int32_t)1))%(int32_t)L_79));
		goto IL_0161;
	}

IL_0103:
	{
		// if (!isConcave[ii]) continue;
		BooleanU5BU5D_tEC7BAF93C44F875016DAADC8696EE3A465644D3C* L_80 = V_5;
		int32_t L_81 = V_24;
		int32_t L_82 = L_81;
		uint8_t L_83 = (uint8_t)(L_80)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_82));
		if (!L_83)
		{
			goto IL_0159;
		}
	}
	{
		// int v = indices[ii] << 1;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_84 = V_3;
		int32_t L_85 = V_24;
		int32_t L_86 = L_85;
		int32_t L_87 = (L_84)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_86));
		V_25 = ((int32_t)((int32_t)L_87<<(int32_t)1));
		// float vx = vertices[v], vy = vertices[v + 1];
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_88 = V_0;
		int32_t L_89 = V_25;
		int32_t L_90 = L_89;
		float L_91 = (L_88)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_90));
		V_26 = L_91;
		// float vx = vertices[v], vy = vertices[v + 1];
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_92 = V_0;
		int32_t L_93 = V_25;
		int32_t L_94 = ((int32_t)il2cpp_codegen_add((int32_t)L_93, (int32_t)1));
		float L_95 = (L_92)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_94));
		V_27 = L_95;
		// if (PositiveArea(p3x, p3y, p1x, p1y, vx, vy)) {
		float L_96 = V_22;
		float L_97 = V_23;
		float L_98 = V_18;
		float L_99 = V_19;
		float L_100 = V_26;
		float L_101 = V_27;
		bool L_102;
		L_102 = Triangulator_PositiveArea_mBF8877A07FD57FBA1B8C2A5914BD8B040115E8FA(L_96, L_97, L_98, L_99, L_100, L_101, /*hidden argument*/NULL);
		if (!L_102)
		{
			goto IL_0159;
		}
	}
	{
		// if (PositiveArea(p1x, p1y, p2x, p2y, vx, vy)) {
		float L_103 = V_18;
		float L_104 = V_19;
		float L_105 = V_20;
		float L_106 = V_21;
		float L_107 = V_26;
		float L_108 = V_27;
		bool L_109;
		L_109 = Triangulator_PositiveArea_mBF8877A07FD57FBA1B8C2A5914BD8B040115E8FA(L_103, L_104, L_105, L_106, L_107, L_108, /*hidden argument*/NULL);
		if (!L_109)
		{
			goto IL_0159;
		}
	}
	{
		// if (PositiveArea(p2x, p2y, p3x, p3y, vx, vy)) goto break_outer; // break outer;
		float L_110 = V_20;
		float L_111 = V_21;
		float L_112 = V_22;
		float L_113 = V_23;
		float L_114 = V_26;
		float L_115 = V_27;
		bool L_116;
		L_116 = Triangulator_PositiveArea_mBF8877A07FD57FBA1B8C2A5914BD8B040115E8FA(L_110, L_111, L_112, L_113, L_114, L_115, /*hidden argument*/NULL);
		if (L_116)
		{
			goto IL_0169;
		}
	}

IL_0159:
	{
		// for (int ii = (next + 1) % vertexCount; ii != previous; ii = (ii + 1) % vertexCount) {
		int32_t L_117 = V_24;
		int32_t L_118 = V_1;
		V_24 = ((int32_t)((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_117, (int32_t)1))%(int32_t)L_118));
	}

IL_0161:
	{
		// for (int ii = (next + 1) % vertexCount; ii != previous; ii = (ii + 1) % vertexCount) {
		int32_t L_119 = V_24;
		int32_t L_120 = V_10;
		if ((!(((uint32_t)L_119) == ((uint32_t)L_120))))
		{
			goto IL_0103;
		}
	}
	{
		// break;
		goto IL_0196;
	}

IL_0169:
	{
		// if (next == 0) {
		int32_t L_121 = V_12;
		if (L_121)
		{
			goto IL_0181;
		}
	}

IL_016d:
	{
		// if (!isConcave[i]) break;
		BooleanU5BU5D_tEC7BAF93C44F875016DAADC8696EE3A465644D3C* L_122 = V_5;
		int32_t L_123 = V_11;
		int32_t L_124 = L_123;
		uint8_t L_125 = (uint8_t)(L_122)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_124));
		if (!L_125)
		{
			goto IL_0196;
		}
	}
	{
		// i--;
		int32_t L_126 = V_11;
		V_11 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_126, (int32_t)1));
		// } while (i > 0);
		int32_t L_127 = V_11;
		if ((((int32_t)L_127) > ((int32_t)0)))
		{
			goto IL_016d;
		}
	}
	{
		// break;
		goto IL_0196;
	}

IL_0181:
	{
		// previous = i;
		int32_t L_128 = V_11;
		V_10 = L_128;
		// i = next;
		int32_t L_129 = V_12;
		V_11 = L_129;
		// next = (next + 1) % vertexCount;
		int32_t L_130 = V_12;
		int32_t L_131 = V_1;
		V_12 = ((int32_t)((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_130, (int32_t)1))%(int32_t)L_131));
		// while (true) {
		goto IL_00ad;
	}

IL_0196:
	{
		// triangles.Add(indices[(vertexCount + i - 1) % vertexCount]);
		ExposedList_1_tEB071484A7B70681ADB6BD9522EFC630CA5C5066 * L_132 = V_6;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_133 = V_3;
		int32_t L_134 = V_1;
		int32_t L_135 = V_11;
		int32_t L_136 = V_1;
		int32_t L_137 = ((int32_t)((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_134, (int32_t)L_135)), (int32_t)1))%(int32_t)L_136));
		int32_t L_138 = (L_133)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_137));
		ExposedList_1_Add_m65591272902D94AFAE294B4CDF30A465AA2274F8(L_132, L_138, /*hidden argument*/ExposedList_1_Add_m65591272902D94AFAE294B4CDF30A465AA2274F8_RuntimeMethod_var);
		// triangles.Add(indices[i]);
		ExposedList_1_tEB071484A7B70681ADB6BD9522EFC630CA5C5066 * L_139 = V_6;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_140 = V_3;
		int32_t L_141 = V_11;
		int32_t L_142 = L_141;
		int32_t L_143 = (L_140)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_142));
		ExposedList_1_Add_m65591272902D94AFAE294B4CDF30A465AA2274F8(L_139, L_143, /*hidden argument*/ExposedList_1_Add_m65591272902D94AFAE294B4CDF30A465AA2274F8_RuntimeMethod_var);
		// triangles.Add(indices[(i + 1) % vertexCount]);
		ExposedList_1_tEB071484A7B70681ADB6BD9522EFC630CA5C5066 * L_144 = V_6;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_145 = V_3;
		int32_t L_146 = V_11;
		int32_t L_147 = V_1;
		int32_t L_148 = ((int32_t)((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_146, (int32_t)1))%(int32_t)L_147));
		int32_t L_149 = (L_145)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_148));
		ExposedList_1_Add_m65591272902D94AFAE294B4CDF30A465AA2274F8(L_144, L_149, /*hidden argument*/ExposedList_1_Add_m65591272902D94AFAE294B4CDF30A465AA2274F8_RuntimeMethod_var);
		// indicesArray.RemoveAt(i);
		ExposedList_1_tEB071484A7B70681ADB6BD9522EFC630CA5C5066 * L_150 = V_2;
		int32_t L_151 = V_11;
		ExposedList_1_RemoveAt_m74D0AC175C5B5B597106B9B6B37B6A51A8EF2B13(L_150, L_151, /*hidden argument*/ExposedList_1_RemoveAt_m74D0AC175C5B5B597106B9B6B37B6A51A8EF2B13_RuntimeMethod_var);
		// isConcaveArray.RemoveAt(i);
		ExposedList_1_tAA9A80412EB5EC236EBA9FC15B2BD9A61915AE7E * L_152 = V_4;
		int32_t L_153 = V_11;
		ExposedList_1_RemoveAt_m315AA4921C74B8F80A3A354E0524085CAEF82AA8(L_152, L_153, /*hidden argument*/ExposedList_1_RemoveAt_m315AA4921C74B8F80A3A354E0524085CAEF82AA8_RuntimeMethod_var);
		// vertexCount--;
		int32_t L_154 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_154, (int32_t)1));
		// int previousIndex = (vertexCount + i - 1) % vertexCount;
		int32_t L_155 = V_1;
		int32_t L_156 = V_11;
		int32_t L_157 = V_1;
		V_13 = ((int32_t)((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_155, (int32_t)L_156)), (int32_t)1))%(int32_t)L_157));
		// int nextIndex = i == vertexCount ? 0 : i;
		int32_t L_158 = V_11;
		int32_t L_159 = V_1;
		if ((((int32_t)L_158) == ((int32_t)L_159)))
		{
			goto IL_01e9;
		}
	}
	{
		int32_t L_160 = V_11;
		G_B25_0 = L_160;
		goto IL_01ea;
	}

IL_01e9:
	{
		G_B25_0 = 0;
	}

IL_01ea:
	{
		V_14 = G_B25_0;
		// isConcave[previousIndex] = IsConcave(previousIndex, vertexCount, vertices, indices);
		BooleanU5BU5D_tEC7BAF93C44F875016DAADC8696EE3A465644D3C* L_161 = V_5;
		int32_t L_162 = V_13;
		int32_t L_163 = V_13;
		int32_t L_164 = V_1;
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_165 = V_0;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_166 = V_3;
		bool L_167;
		L_167 = Triangulator_IsConcave_mDD6C3B0E0D6C7D764959472E51D5EBDDC7066931(L_163, L_164, L_165, L_166, /*hidden argument*/NULL);
		(L_161)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_162), (bool)L_167);
		// isConcave[nextIndex] = IsConcave(nextIndex, vertexCount, vertices, indices);
		BooleanU5BU5D_tEC7BAF93C44F875016DAADC8696EE3A465644D3C* L_168 = V_5;
		int32_t L_169 = V_14;
		int32_t L_170 = V_14;
		int32_t L_171 = V_1;
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_172 = V_0;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_173 = V_3;
		bool L_174;
		L_174 = Triangulator_IsConcave_mDD6C3B0E0D6C7D764959472E51D5EBDDC7066931(L_170, L_171, L_172, L_173, /*hidden argument*/NULL);
		(L_168)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_169), (bool)L_174);
	}

IL_020a:
	{
		// while (vertexCount > 3) {
		int32_t L_175 = V_1;
		if ((((int32_t)L_175) > ((int32_t)3)))
		{
			goto IL_00a2;
		}
	}
	{
		// if (vertexCount == 3) {
		int32_t L_176 = V_1;
		if ((!(((uint32_t)L_176) == ((uint32_t)3))))
		{
			goto IL_0233;
		}
	}
	{
		// triangles.Add(indices[2]);
		ExposedList_1_tEB071484A7B70681ADB6BD9522EFC630CA5C5066 * L_177 = V_6;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_178 = V_3;
		int32_t L_179 = 2;
		int32_t L_180 = (L_178)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_179));
		ExposedList_1_Add_m65591272902D94AFAE294B4CDF30A465AA2274F8(L_177, L_180, /*hidden argument*/ExposedList_1_Add_m65591272902D94AFAE294B4CDF30A465AA2274F8_RuntimeMethod_var);
		// triangles.Add(indices[0]);
		ExposedList_1_tEB071484A7B70681ADB6BD9522EFC630CA5C5066 * L_181 = V_6;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_182 = V_3;
		int32_t L_183 = 0;
		int32_t L_184 = (L_182)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_183));
		ExposedList_1_Add_m65591272902D94AFAE294B4CDF30A465AA2274F8(L_181, L_184, /*hidden argument*/ExposedList_1_Add_m65591272902D94AFAE294B4CDF30A465AA2274F8_RuntimeMethod_var);
		// triangles.Add(indices[1]);
		ExposedList_1_tEB071484A7B70681ADB6BD9522EFC630CA5C5066 * L_185 = V_6;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_186 = V_3;
		int32_t L_187 = 1;
		int32_t L_188 = (L_186)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_187));
		ExposedList_1_Add_m65591272902D94AFAE294B4CDF30A465AA2274F8(L_185, L_188, /*hidden argument*/ExposedList_1_Add_m65591272902D94AFAE294B4CDF30A465AA2274F8_RuntimeMethod_var);
	}

IL_0233:
	{
		// return triangles;
		ExposedList_1_tEB071484A7B70681ADB6BD9522EFC630CA5C5066 * L_189 = V_6;
		return L_189;
	}
}
// Spine.ExposedList`1<Spine.ExposedList`1<System.Single>> Spine.Triangulator::Decompose(Spine.ExposedList`1<System.Single>,Spine.ExposedList`1<System.Int32>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ExposedList_1_tFAEEFBED9EABAD893C31C789759FD1BA692F0289 * Triangulator_Decompose_m2B5975EFF42DF52CC3828602BC4B80C40344DEC5 (Triangulator_tB8EB2546BA4C75A44FDEEC203E67023C07FBBE8B * __this, ExposedList_1_t9F8622C73EB60A6882B2968C1C0F1706D574F526 * ___verticesArray0, ExposedList_1_tEB071484A7B70681ADB6BD9522EFC630CA5C5066 * ___triangles1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExposedList_1_Add_m5B673948ABFBB0479F3A81270A22A4295AEF619B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExposedList_1_Add_m65591272902D94AFAE294B4CDF30A465AA2274F8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExposedList_1_Add_m94D79351365A6FA9EBD26A3CA00D4839BE613B6A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExposedList_1_Add_m9CE0A2C0C8C7E99FB44E2D206DB6FAF36BB3C576_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExposedList_1_Clear_m40B61D0D728CF9B427F957C4A8E7A4A364690255_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExposedList_1_Clear_m56FD9B006AFA6C0C3B822A2460ED52D4FA72D847_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExposedList_1_Clear_m9E1BE8027151460EB7E0FAB390B2846D15BA302B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExposedList_1_Clear_mBC51B78D1DACC555F6F73D293AC8E6D6DC2FEC18_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExposedList_1_RemoveAt_m0629ED8D156A78115171F2746A855438C3DBE81C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExposedList_1_RemoveAt_mABBDA48F0096E88AB0169B176320716F8EE471FB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Pool_1_Free_m8AD43187DBD866A8B28F74E7FD9A90D7A5834805_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Pool_1_Free_mA877966FCAD605DAFF16CD72619CE9B5A0160A75_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Pool_1_Obtain_m30E900D977A82966F61786948EEFD33E110C06FB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Pool_1_Obtain_mCD31B8A93DC6FACE13671D18D42170131A686CF1_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* V_0 = NULL;
	ExposedList_1_tFAEEFBED9EABAD893C31C789759FD1BA692F0289 * V_1 = NULL;
	ExposedList_1_tE018626AD135D00E2FCAF5578BADE795F5CCDC90 * V_2 = NULL;
	ExposedList_1_tEB071484A7B70681ADB6BD9522EFC630CA5C5066 * V_3 = NULL;
	ExposedList_1_t9F8622C73EB60A6882B2968C1C0F1706D574F526 * V_4 = NULL;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* V_7 = NULL;
	int32_t V_8 = 0;
	int32_t V_9 = 0;
	int32_t V_10 = 0;
	int32_t V_11 = 0;
	int32_t V_12 = 0;
	int32_t V_13 = 0;
	int32_t V_14 = 0;
	int32_t V_15 = 0;
	int32_t V_16 = 0;
	float V_17 = 0.0f;
	float V_18 = 0.0f;
	float V_19 = 0.0f;
	float V_20 = 0.0f;
	float V_21 = 0.0f;
	float V_22 = 0.0f;
	bool V_23 = false;
	int32_t V_24 = 0;
	SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* V_25 = NULL;
	int32_t V_26 = 0;
	int32_t V_27 = 0;
	int32_t V_28 = 0;
	int32_t V_29 = 0;
	int32_t V_30 = 0;
	int32_t V_31 = 0;
	float V_32 = 0.0f;
	float V_33 = 0.0f;
	float V_34 = 0.0f;
	float V_35 = 0.0f;
	float V_36 = 0.0f;
	float V_37 = 0.0f;
	float V_38 = 0.0f;
	float V_39 = 0.0f;
	int32_t V_40 = 0;
	int32_t V_41 = 0;
	ExposedList_1_tEB071484A7B70681ADB6BD9522EFC630CA5C5066 * V_42 = NULL;
	int32_t V_43 = 0;
	int32_t V_44 = 0;
	int32_t V_45 = 0;
	ExposedList_1_t9F8622C73EB60A6882B2968C1C0F1706D574F526 * V_46 = NULL;
	float V_47 = 0.0f;
	float V_48 = 0.0f;
	int32_t V_49 = 0;
	int32_t V_50 = 0;
	{
		// var vertices = verticesArray.Items;
		ExposedList_1_t9F8622C73EB60A6882B2968C1C0F1706D574F526 * L_0 = ___verticesArray0;
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_1 = L_0->get_Items_0();
		V_0 = L_1;
		// var convexPolygons = this.convexPolygons;
		ExposedList_1_tFAEEFBED9EABAD893C31C789759FD1BA692F0289 * L_2 = __this->get_convexPolygons_0();
		V_1 = L_2;
		// for (int i = 0, n = convexPolygons.Count; i < n; i++)
		V_8 = 0;
		// for (int i = 0, n = convexPolygons.Count; i < n; i++)
		ExposedList_1_tFAEEFBED9EABAD893C31C789759FD1BA692F0289 * L_3 = V_1;
		int32_t L_4 = L_3->get_Count_1();
		V_9 = L_4;
		goto IL_0035;
	}

IL_001b:
	{
		// polygonPool.Free(convexPolygons.Items[i]);
		Pool_1_tEBC6CCDAC2A4D2FDEE1A4FC452D0D72D0F4142B9 * L_5 = __this->get_polygonPool_5();
		ExposedList_1_tFAEEFBED9EABAD893C31C789759FD1BA692F0289 * L_6 = V_1;
		ExposedList_1U5BU5D_tE723A0FFD1A0C77B17CCA09F9BE2EA1B09561CFE* L_7 = L_6->get_Items_0();
		int32_t L_8 = V_8;
		int32_t L_9 = L_8;
		ExposedList_1_t9F8622C73EB60A6882B2968C1C0F1706D574F526 * L_10 = (ExposedList_1_t9F8622C73EB60A6882B2968C1C0F1706D574F526 *)(L_7)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_9));
		Pool_1_Free_mA877966FCAD605DAFF16CD72619CE9B5A0160A75(L_5, L_10, /*hidden argument*/Pool_1_Free_mA877966FCAD605DAFF16CD72619CE9B5A0160A75_RuntimeMethod_var);
		// for (int i = 0, n = convexPolygons.Count; i < n; i++)
		int32_t L_11 = V_8;
		V_8 = ((int32_t)il2cpp_codegen_add((int32_t)L_11, (int32_t)1));
	}

IL_0035:
	{
		// for (int i = 0, n = convexPolygons.Count; i < n; i++)
		int32_t L_12 = V_8;
		int32_t L_13 = V_9;
		if ((((int32_t)L_12) < ((int32_t)L_13)))
		{
			goto IL_001b;
		}
	}
	{
		// convexPolygons.Clear();
		ExposedList_1_tFAEEFBED9EABAD893C31C789759FD1BA692F0289 * L_14 = V_1;
		ExposedList_1_Clear_mBC51B78D1DACC555F6F73D293AC8E6D6DC2FEC18(L_14, (bool)1, /*hidden argument*/ExposedList_1_Clear_mBC51B78D1DACC555F6F73D293AC8E6D6DC2FEC18_RuntimeMethod_var);
		// var convexPolygonsIndices = this.convexPolygonsIndices;
		ExposedList_1_tE018626AD135D00E2FCAF5578BADE795F5CCDC90 * L_15 = __this->get_convexPolygonsIndices_1();
		V_2 = L_15;
		// for (int i = 0, n = convexPolygonsIndices.Count; i < n; i++)
		V_10 = 0;
		// for (int i = 0, n = convexPolygonsIndices.Count; i < n; i++)
		ExposedList_1_tE018626AD135D00E2FCAF5578BADE795F5CCDC90 * L_16 = V_2;
		int32_t L_17 = L_16->get_Count_1();
		V_11 = L_17;
		goto IL_0070;
	}

IL_0056:
	{
		// polygonIndicesPool.Free(convexPolygonsIndices.Items[i]);
		Pool_1_t5CA90CE7EBA311405CE9C8F1E0C4DDFE861C384A * L_18 = __this->get_polygonIndicesPool_6();
		ExposedList_1_tE018626AD135D00E2FCAF5578BADE795F5CCDC90 * L_19 = V_2;
		ExposedList_1U5BU5D_tC7922C1CF6C272D1AC5CB95D7C39664D0F12FF54* L_20 = L_19->get_Items_0();
		int32_t L_21 = V_10;
		int32_t L_22 = L_21;
		ExposedList_1_tEB071484A7B70681ADB6BD9522EFC630CA5C5066 * L_23 = (ExposedList_1_tEB071484A7B70681ADB6BD9522EFC630CA5C5066 *)(L_20)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_22));
		Pool_1_Free_m8AD43187DBD866A8B28F74E7FD9A90D7A5834805(L_18, L_23, /*hidden argument*/Pool_1_Free_m8AD43187DBD866A8B28F74E7FD9A90D7A5834805_RuntimeMethod_var);
		// for (int i = 0, n = convexPolygonsIndices.Count; i < n; i++)
		int32_t L_24 = V_10;
		V_10 = ((int32_t)il2cpp_codegen_add((int32_t)L_24, (int32_t)1));
	}

IL_0070:
	{
		// for (int i = 0, n = convexPolygonsIndices.Count; i < n; i++)
		int32_t L_25 = V_10;
		int32_t L_26 = V_11;
		if ((((int32_t)L_25) < ((int32_t)L_26)))
		{
			goto IL_0056;
		}
	}
	{
		// convexPolygonsIndices.Clear();
		ExposedList_1_tE018626AD135D00E2FCAF5578BADE795F5CCDC90 * L_27 = V_2;
		ExposedList_1_Clear_m40B61D0D728CF9B427F957C4A8E7A4A364690255(L_27, (bool)1, /*hidden argument*/ExposedList_1_Clear_m40B61D0D728CF9B427F957C4A8E7A4A364690255_RuntimeMethod_var);
		// var polygonIndices = polygonIndicesPool.Obtain();
		Pool_1_t5CA90CE7EBA311405CE9C8F1E0C4DDFE861C384A * L_28 = __this->get_polygonIndicesPool_6();
		ExposedList_1_tEB071484A7B70681ADB6BD9522EFC630CA5C5066 * L_29;
		L_29 = Pool_1_Obtain_mCD31B8A93DC6FACE13671D18D42170131A686CF1(L_28, /*hidden argument*/Pool_1_Obtain_mCD31B8A93DC6FACE13671D18D42170131A686CF1_RuntimeMethod_var);
		V_3 = L_29;
		// polygonIndices.Clear();
		ExposedList_1_tEB071484A7B70681ADB6BD9522EFC630CA5C5066 * L_30 = V_3;
		ExposedList_1_Clear_m9E1BE8027151460EB7E0FAB390B2846D15BA302B(L_30, (bool)1, /*hidden argument*/ExposedList_1_Clear_m9E1BE8027151460EB7E0FAB390B2846D15BA302B_RuntimeMethod_var);
		// var polygon = polygonPool.Obtain();
		Pool_1_tEBC6CCDAC2A4D2FDEE1A4FC452D0D72D0F4142B9 * L_31 = __this->get_polygonPool_5();
		ExposedList_1_t9F8622C73EB60A6882B2968C1C0F1706D574F526 * L_32;
		L_32 = Pool_1_Obtain_m30E900D977A82966F61786948EEFD33E110C06FB(L_31, /*hidden argument*/Pool_1_Obtain_m30E900D977A82966F61786948EEFD33E110C06FB_RuntimeMethod_var);
		V_4 = L_32;
		// polygon.Clear();
		ExposedList_1_t9F8622C73EB60A6882B2968C1C0F1706D574F526 * L_33 = V_4;
		ExposedList_1_Clear_m56FD9B006AFA6C0C3B822A2460ED52D4FA72D847(L_33, (bool)1, /*hidden argument*/ExposedList_1_Clear_m56FD9B006AFA6C0C3B822A2460ED52D4FA72D847_RuntimeMethod_var);
		// int fanBaseIndex = -1, lastWinding = 0;
		V_5 = (-1);
		// int fanBaseIndex = -1, lastWinding = 0;
		V_6 = 0;
		// int[] trianglesItems = triangles.Items;
		ExposedList_1_tEB071484A7B70681ADB6BD9522EFC630CA5C5066 * L_34 = ___triangles1;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_35 = L_34->get_Items_0();
		V_7 = L_35;
		// for (int i = 0, n = triangles.Count; i < n; i += 3) {
		V_12 = 0;
		// for (int i = 0, n = triangles.Count; i < n; i += 3) {
		ExposedList_1_tEB071484A7B70681ADB6BD9522EFC630CA5C5066 * L_36 = ___triangles1;
		int32_t L_37 = L_36->get_Count_1();
		V_13 = L_37;
		goto IL_025c;
	}

IL_00c3:
	{
		// int t1 = trianglesItems[i] << 1, t2 = trianglesItems[i + 1] << 1, t3 = trianglesItems[i + 2] << 1;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_38 = V_7;
		int32_t L_39 = V_12;
		int32_t L_40 = L_39;
		int32_t L_41 = (L_38)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_40));
		V_14 = ((int32_t)((int32_t)L_41<<(int32_t)1));
		// int t1 = trianglesItems[i] << 1, t2 = trianglesItems[i + 1] << 1, t3 = trianglesItems[i + 2] << 1;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_42 = V_7;
		int32_t L_43 = V_12;
		int32_t L_44 = ((int32_t)il2cpp_codegen_add((int32_t)L_43, (int32_t)1));
		int32_t L_45 = (L_42)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_44));
		V_15 = ((int32_t)((int32_t)L_45<<(int32_t)1));
		// int t1 = trianglesItems[i] << 1, t2 = trianglesItems[i + 1] << 1, t3 = trianglesItems[i + 2] << 1;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_46 = V_7;
		int32_t L_47 = V_12;
		int32_t L_48 = ((int32_t)il2cpp_codegen_add((int32_t)L_47, (int32_t)2));
		int32_t L_49 = (L_46)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_48));
		V_16 = ((int32_t)((int32_t)L_49<<(int32_t)1));
		// float x1 = vertices[t1], y1 = vertices[t1 + 1];
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_50 = V_0;
		int32_t L_51 = V_14;
		int32_t L_52 = L_51;
		float L_53 = (L_50)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_52));
		V_17 = L_53;
		// float x1 = vertices[t1], y1 = vertices[t1 + 1];
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_54 = V_0;
		int32_t L_55 = V_14;
		int32_t L_56 = ((int32_t)il2cpp_codegen_add((int32_t)L_55, (int32_t)1));
		float L_57 = (L_54)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_56));
		V_18 = L_57;
		// float x2 = vertices[t2], y2 = vertices[t2 + 1];
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_58 = V_0;
		int32_t L_59 = V_15;
		int32_t L_60 = L_59;
		float L_61 = (L_58)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_60));
		V_19 = L_61;
		// float x2 = vertices[t2], y2 = vertices[t2 + 1];
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_62 = V_0;
		int32_t L_63 = V_15;
		int32_t L_64 = ((int32_t)il2cpp_codegen_add((int32_t)L_63, (int32_t)1));
		float L_65 = (L_62)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_64));
		V_20 = L_65;
		// float x3 = vertices[t3], y3 = vertices[t3 + 1];
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_66 = V_0;
		int32_t L_67 = V_16;
		int32_t L_68 = L_67;
		float L_69 = (L_66)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_68));
		V_21 = L_69;
		// float x3 = vertices[t3], y3 = vertices[t3 + 1];
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_70 = V_0;
		int32_t L_71 = V_16;
		int32_t L_72 = ((int32_t)il2cpp_codegen_add((int32_t)L_71, (int32_t)1));
		float L_73 = (L_70)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_72));
		V_22 = L_73;
		// var merged = false;
		V_23 = (bool)0;
		// if (fanBaseIndex == t1) {
		int32_t L_74 = V_5;
		int32_t L_75 = V_14;
		if ((!(((uint32_t)L_74) == ((uint32_t)L_75))))
		{
			goto IL_018e;
		}
	}
	{
		// int o = polygon.Count - 4;
		ExposedList_1_t9F8622C73EB60A6882B2968C1C0F1706D574F526 * L_76 = V_4;
		int32_t L_77 = L_76->get_Count_1();
		V_24 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_77, (int32_t)4));
		// float[] p = polygon.Items;
		ExposedList_1_t9F8622C73EB60A6882B2968C1C0F1706D574F526 * L_78 = V_4;
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_79 = L_78->get_Items_0();
		V_25 = L_79;
		// int winding1 = Winding(p[o], p[o + 1], p[o + 2], p[o + 3], x3, y3);
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_80 = V_25;
		int32_t L_81 = V_24;
		int32_t L_82 = L_81;
		float L_83 = (L_80)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_82));
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_84 = V_25;
		int32_t L_85 = V_24;
		int32_t L_86 = ((int32_t)il2cpp_codegen_add((int32_t)L_85, (int32_t)1));
		float L_87 = (L_84)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_86));
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_88 = V_25;
		int32_t L_89 = V_24;
		int32_t L_90 = ((int32_t)il2cpp_codegen_add((int32_t)L_89, (int32_t)2));
		float L_91 = (L_88)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_90));
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_92 = V_25;
		int32_t L_93 = V_24;
		int32_t L_94 = ((int32_t)il2cpp_codegen_add((int32_t)L_93, (int32_t)3));
		float L_95 = (L_92)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_94));
		float L_96 = V_21;
		float L_97 = V_22;
		int32_t L_98;
		L_98 = Triangulator_Winding_mF333A8016360F473FCF182CD6E821198E9EB7D16(L_83, L_87, L_91, L_95, L_96, L_97, /*hidden argument*/NULL);
		// int winding2 = Winding(x3, y3, p[0], p[1], p[2], p[3]);
		float L_99 = V_21;
		float L_100 = V_22;
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_101 = V_25;
		int32_t L_102 = 0;
		float L_103 = (L_101)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_102));
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_104 = V_25;
		int32_t L_105 = 1;
		float L_106 = (L_104)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_105));
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_107 = V_25;
		int32_t L_108 = 2;
		float L_109 = (L_107)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_108));
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_110 = V_25;
		int32_t L_111 = 3;
		float L_112 = (L_110)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_111));
		int32_t L_113;
		L_113 = Triangulator_Winding_mF333A8016360F473FCF182CD6E821198E9EB7D16(L_99, L_100, L_103, L_106, L_109, L_112, /*hidden argument*/NULL);
		V_26 = L_113;
		// if (winding1 == lastWinding && winding2 == lastWinding) {
		int32_t L_114 = V_6;
		if ((!(((uint32_t)L_98) == ((uint32_t)L_114))))
		{
			goto IL_018e;
		}
	}
	{
		int32_t L_115 = V_26;
		int32_t L_116 = V_6;
		if ((!(((uint32_t)L_115) == ((uint32_t)L_116))))
		{
			goto IL_018e;
		}
	}
	{
		// polygon.Add(x3);
		ExposedList_1_t9F8622C73EB60A6882B2968C1C0F1706D574F526 * L_117 = V_4;
		float L_118 = V_21;
		ExposedList_1_Add_m5B673948ABFBB0479F3A81270A22A4295AEF619B(L_117, L_118, /*hidden argument*/ExposedList_1_Add_m5B673948ABFBB0479F3A81270A22A4295AEF619B_RuntimeMethod_var);
		// polygon.Add(y3);
		ExposedList_1_t9F8622C73EB60A6882B2968C1C0F1706D574F526 * L_119 = V_4;
		float L_120 = V_22;
		ExposedList_1_Add_m5B673948ABFBB0479F3A81270A22A4295AEF619B(L_119, L_120, /*hidden argument*/ExposedList_1_Add_m5B673948ABFBB0479F3A81270A22A4295AEF619B_RuntimeMethod_var);
		// polygonIndices.Add(t3);
		ExposedList_1_tEB071484A7B70681ADB6BD9522EFC630CA5C5066 * L_121 = V_3;
		int32_t L_122 = V_16;
		ExposedList_1_Add_m65591272902D94AFAE294B4CDF30A465AA2274F8(L_121, L_122, /*hidden argument*/ExposedList_1_Add_m65591272902D94AFAE294B4CDF30A465AA2274F8_RuntimeMethod_var);
		// merged = true;
		V_23 = (bool)1;
	}

IL_018e:
	{
		// if (!merged) {
		bool L_123 = V_23;
		if (L_123)
		{
			goto IL_0256;
		}
	}
	{
		// if (polygon.Count > 0) {
		ExposedList_1_t9F8622C73EB60A6882B2968C1C0F1706D574F526 * L_124 = V_4;
		int32_t L_125 = L_124->get_Count_1();
		if ((((int32_t)L_125) <= ((int32_t)0)))
		{
			goto IL_01b0;
		}
	}
	{
		// convexPolygons.Add(polygon);
		ExposedList_1_tFAEEFBED9EABAD893C31C789759FD1BA692F0289 * L_126 = V_1;
		ExposedList_1_t9F8622C73EB60A6882B2968C1C0F1706D574F526 * L_127 = V_4;
		ExposedList_1_Add_m9CE0A2C0C8C7E99FB44E2D206DB6FAF36BB3C576(L_126, L_127, /*hidden argument*/ExposedList_1_Add_m9CE0A2C0C8C7E99FB44E2D206DB6FAF36BB3C576_RuntimeMethod_var);
		// convexPolygonsIndices.Add(polygonIndices);
		ExposedList_1_tE018626AD135D00E2FCAF5578BADE795F5CCDC90 * L_128 = V_2;
		ExposedList_1_tEB071484A7B70681ADB6BD9522EFC630CA5C5066 * L_129 = V_3;
		ExposedList_1_Add_m94D79351365A6FA9EBD26A3CA00D4839BE613B6A(L_128, L_129, /*hidden argument*/ExposedList_1_Add_m94D79351365A6FA9EBD26A3CA00D4839BE613B6A_RuntimeMethod_var);
		// } else {
		goto IL_01c9;
	}

IL_01b0:
	{
		// polygonPool.Free(polygon);
		Pool_1_tEBC6CCDAC2A4D2FDEE1A4FC452D0D72D0F4142B9 * L_130 = __this->get_polygonPool_5();
		ExposedList_1_t9F8622C73EB60A6882B2968C1C0F1706D574F526 * L_131 = V_4;
		Pool_1_Free_mA877966FCAD605DAFF16CD72619CE9B5A0160A75(L_130, L_131, /*hidden argument*/Pool_1_Free_mA877966FCAD605DAFF16CD72619CE9B5A0160A75_RuntimeMethod_var);
		// polygonIndicesPool.Free(polygonIndices);
		Pool_1_t5CA90CE7EBA311405CE9C8F1E0C4DDFE861C384A * L_132 = __this->get_polygonIndicesPool_6();
		ExposedList_1_tEB071484A7B70681ADB6BD9522EFC630CA5C5066 * L_133 = V_3;
		Pool_1_Free_m8AD43187DBD866A8B28F74E7FD9A90D7A5834805(L_132, L_133, /*hidden argument*/Pool_1_Free_m8AD43187DBD866A8B28F74E7FD9A90D7A5834805_RuntimeMethod_var);
	}

IL_01c9:
	{
		// polygon = polygonPool.Obtain();
		Pool_1_tEBC6CCDAC2A4D2FDEE1A4FC452D0D72D0F4142B9 * L_134 = __this->get_polygonPool_5();
		ExposedList_1_t9F8622C73EB60A6882B2968C1C0F1706D574F526 * L_135;
		L_135 = Pool_1_Obtain_m30E900D977A82966F61786948EEFD33E110C06FB(L_134, /*hidden argument*/Pool_1_Obtain_m30E900D977A82966F61786948EEFD33E110C06FB_RuntimeMethod_var);
		V_4 = L_135;
		// polygon.Clear();
		ExposedList_1_t9F8622C73EB60A6882B2968C1C0F1706D574F526 * L_136 = V_4;
		ExposedList_1_Clear_m56FD9B006AFA6C0C3B822A2460ED52D4FA72D847(L_136, (bool)1, /*hidden argument*/ExposedList_1_Clear_m56FD9B006AFA6C0C3B822A2460ED52D4FA72D847_RuntimeMethod_var);
		// polygon.Add(x1);
		ExposedList_1_t9F8622C73EB60A6882B2968C1C0F1706D574F526 * L_137 = V_4;
		float L_138 = V_17;
		ExposedList_1_Add_m5B673948ABFBB0479F3A81270A22A4295AEF619B(L_137, L_138, /*hidden argument*/ExposedList_1_Add_m5B673948ABFBB0479F3A81270A22A4295AEF619B_RuntimeMethod_var);
		// polygon.Add(y1);
		ExposedList_1_t9F8622C73EB60A6882B2968C1C0F1706D574F526 * L_139 = V_4;
		float L_140 = V_18;
		ExposedList_1_Add_m5B673948ABFBB0479F3A81270A22A4295AEF619B(L_139, L_140, /*hidden argument*/ExposedList_1_Add_m5B673948ABFBB0479F3A81270A22A4295AEF619B_RuntimeMethod_var);
		// polygon.Add(x2);
		ExposedList_1_t9F8622C73EB60A6882B2968C1C0F1706D574F526 * L_141 = V_4;
		float L_142 = V_19;
		ExposedList_1_Add_m5B673948ABFBB0479F3A81270A22A4295AEF619B(L_141, L_142, /*hidden argument*/ExposedList_1_Add_m5B673948ABFBB0479F3A81270A22A4295AEF619B_RuntimeMethod_var);
		// polygon.Add(y2);
		ExposedList_1_t9F8622C73EB60A6882B2968C1C0F1706D574F526 * L_143 = V_4;
		float L_144 = V_20;
		ExposedList_1_Add_m5B673948ABFBB0479F3A81270A22A4295AEF619B(L_143, L_144, /*hidden argument*/ExposedList_1_Add_m5B673948ABFBB0479F3A81270A22A4295AEF619B_RuntimeMethod_var);
		// polygon.Add(x3);
		ExposedList_1_t9F8622C73EB60A6882B2968C1C0F1706D574F526 * L_145 = V_4;
		float L_146 = V_21;
		ExposedList_1_Add_m5B673948ABFBB0479F3A81270A22A4295AEF619B(L_145, L_146, /*hidden argument*/ExposedList_1_Add_m5B673948ABFBB0479F3A81270A22A4295AEF619B_RuntimeMethod_var);
		// polygon.Add(y3);
		ExposedList_1_t9F8622C73EB60A6882B2968C1C0F1706D574F526 * L_147 = V_4;
		float L_148 = V_22;
		ExposedList_1_Add_m5B673948ABFBB0479F3A81270A22A4295AEF619B(L_147, L_148, /*hidden argument*/ExposedList_1_Add_m5B673948ABFBB0479F3A81270A22A4295AEF619B_RuntimeMethod_var);
		// polygonIndices = polygonIndicesPool.Obtain();
		Pool_1_t5CA90CE7EBA311405CE9C8F1E0C4DDFE861C384A * L_149 = __this->get_polygonIndicesPool_6();
		ExposedList_1_tEB071484A7B70681ADB6BD9522EFC630CA5C5066 * L_150;
		L_150 = Pool_1_Obtain_mCD31B8A93DC6FACE13671D18D42170131A686CF1(L_149, /*hidden argument*/Pool_1_Obtain_mCD31B8A93DC6FACE13671D18D42170131A686CF1_RuntimeMethod_var);
		V_3 = L_150;
		// polygonIndices.Clear();
		ExposedList_1_tEB071484A7B70681ADB6BD9522EFC630CA5C5066 * L_151 = V_3;
		ExposedList_1_Clear_m9E1BE8027151460EB7E0FAB390B2846D15BA302B(L_151, (bool)1, /*hidden argument*/ExposedList_1_Clear_m9E1BE8027151460EB7E0FAB390B2846D15BA302B_RuntimeMethod_var);
		// polygonIndices.Add(t1);
		ExposedList_1_tEB071484A7B70681ADB6BD9522EFC630CA5C5066 * L_152 = V_3;
		int32_t L_153 = V_14;
		ExposedList_1_Add_m65591272902D94AFAE294B4CDF30A465AA2274F8(L_152, L_153, /*hidden argument*/ExposedList_1_Add_m65591272902D94AFAE294B4CDF30A465AA2274F8_RuntimeMethod_var);
		// polygonIndices.Add(t2);
		ExposedList_1_tEB071484A7B70681ADB6BD9522EFC630CA5C5066 * L_154 = V_3;
		int32_t L_155 = V_15;
		ExposedList_1_Add_m65591272902D94AFAE294B4CDF30A465AA2274F8(L_154, L_155, /*hidden argument*/ExposedList_1_Add_m65591272902D94AFAE294B4CDF30A465AA2274F8_RuntimeMethod_var);
		// polygonIndices.Add(t3);
		ExposedList_1_tEB071484A7B70681ADB6BD9522EFC630CA5C5066 * L_156 = V_3;
		int32_t L_157 = V_16;
		ExposedList_1_Add_m65591272902D94AFAE294B4CDF30A465AA2274F8(L_156, L_157, /*hidden argument*/ExposedList_1_Add_m65591272902D94AFAE294B4CDF30A465AA2274F8_RuntimeMethod_var);
		// lastWinding = Winding(x1, y1, x2, y2, x3, y3);
		float L_158 = V_17;
		float L_159 = V_18;
		float L_160 = V_19;
		float L_161 = V_20;
		float L_162 = V_21;
		float L_163 = V_22;
		int32_t L_164;
		L_164 = Triangulator_Winding_mF333A8016360F473FCF182CD6E821198E9EB7D16(L_158, L_159, L_160, L_161, L_162, L_163, /*hidden argument*/NULL);
		V_6 = L_164;
		// fanBaseIndex = t1;
		int32_t L_165 = V_14;
		V_5 = L_165;
	}

IL_0256:
	{
		// for (int i = 0, n = triangles.Count; i < n; i += 3) {
		int32_t L_166 = V_12;
		V_12 = ((int32_t)il2cpp_codegen_add((int32_t)L_166, (int32_t)3));
	}

IL_025c:
	{
		// for (int i = 0, n = triangles.Count; i < n; i += 3) {
		int32_t L_167 = V_12;
		int32_t L_168 = V_13;
		if ((((int32_t)L_167) < ((int32_t)L_168)))
		{
			goto IL_00c3;
		}
	}
	{
		// if (polygon.Count > 0) {
		ExposedList_1_t9F8622C73EB60A6882B2968C1C0F1706D574F526 * L_169 = V_4;
		int32_t L_170 = L_169->get_Count_1();
		if ((((int32_t)L_170) <= ((int32_t)0)))
		{
			goto IL_027e;
		}
	}
	{
		// convexPolygons.Add(polygon);
		ExposedList_1_tFAEEFBED9EABAD893C31C789759FD1BA692F0289 * L_171 = V_1;
		ExposedList_1_t9F8622C73EB60A6882B2968C1C0F1706D574F526 * L_172 = V_4;
		ExposedList_1_Add_m9CE0A2C0C8C7E99FB44E2D206DB6FAF36BB3C576(L_171, L_172, /*hidden argument*/ExposedList_1_Add_m9CE0A2C0C8C7E99FB44E2D206DB6FAF36BB3C576_RuntimeMethod_var);
		// convexPolygonsIndices.Add(polygonIndices);
		ExposedList_1_tE018626AD135D00E2FCAF5578BADE795F5CCDC90 * L_173 = V_2;
		ExposedList_1_tEB071484A7B70681ADB6BD9522EFC630CA5C5066 * L_174 = V_3;
		ExposedList_1_Add_m94D79351365A6FA9EBD26A3CA00D4839BE613B6A(L_173, L_174, /*hidden argument*/ExposedList_1_Add_m94D79351365A6FA9EBD26A3CA00D4839BE613B6A_RuntimeMethod_var);
	}

IL_027e:
	{
		// for (int i = 0, n = convexPolygons.Count; i < n; i++) {
		V_27 = 0;
		// for (int i = 0, n = convexPolygons.Count; i < n; i++) {
		ExposedList_1_tFAEEFBED9EABAD893C31C789759FD1BA692F0289 * L_175 = V_1;
		int32_t L_176 = L_175->get_Count_1();
		V_28 = L_176;
		goto IL_0426;
	}

IL_028e:
	{
		// polygonIndices = convexPolygonsIndices.Items[i];
		ExposedList_1_tE018626AD135D00E2FCAF5578BADE795F5CCDC90 * L_177 = V_2;
		ExposedList_1U5BU5D_tC7922C1CF6C272D1AC5CB95D7C39664D0F12FF54* L_178 = L_177->get_Items_0();
		int32_t L_179 = V_27;
		int32_t L_180 = L_179;
		ExposedList_1_tEB071484A7B70681ADB6BD9522EFC630CA5C5066 * L_181 = (ExposedList_1_tEB071484A7B70681ADB6BD9522EFC630CA5C5066 *)(L_178)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_180));
		V_3 = L_181;
		// if (polygonIndices.Count == 0) continue;
		ExposedList_1_tEB071484A7B70681ADB6BD9522EFC630CA5C5066 * L_182 = V_3;
		int32_t L_183 = L_182->get_Count_1();
		if (!L_183)
		{
			goto IL_0420;
		}
	}
	{
		// int firstIndex = polygonIndices.Items[0];
		ExposedList_1_tEB071484A7B70681ADB6BD9522EFC630CA5C5066 * L_184 = V_3;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_185 = L_184->get_Items_0();
		int32_t L_186 = 0;
		int32_t L_187 = (L_185)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_186));
		V_29 = L_187;
		// int lastIndex = polygonIndices.Items[polygonIndices.Count - 1];
		ExposedList_1_tEB071484A7B70681ADB6BD9522EFC630CA5C5066 * L_188 = V_3;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_189 = L_188->get_Items_0();
		ExposedList_1_tEB071484A7B70681ADB6BD9522EFC630CA5C5066 * L_190 = V_3;
		int32_t L_191 = L_190->get_Count_1();
		int32_t L_192 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_191, (int32_t)1));
		int32_t L_193 = (L_189)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_192));
		V_30 = L_193;
		// polygon = convexPolygons.Items[i];
		ExposedList_1_tFAEEFBED9EABAD893C31C789759FD1BA692F0289 * L_194 = V_1;
		ExposedList_1U5BU5D_tE723A0FFD1A0C77B17CCA09F9BE2EA1B09561CFE* L_195 = L_194->get_Items_0();
		int32_t L_196 = V_27;
		int32_t L_197 = L_196;
		ExposedList_1_t9F8622C73EB60A6882B2968C1C0F1706D574F526 * L_198 = (ExposedList_1_t9F8622C73EB60A6882B2968C1C0F1706D574F526 *)(L_195)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_197));
		V_4 = L_198;
		// int o = polygon.Count - 4;
		ExposedList_1_t9F8622C73EB60A6882B2968C1C0F1706D574F526 * L_199 = V_4;
		int32_t L_200 = L_199->get_Count_1();
		V_31 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_200, (int32_t)4));
		// float[] p = polygon.Items;
		ExposedList_1_t9F8622C73EB60A6882B2968C1C0F1706D574F526 * L_201 = V_4;
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_202 = L_201->get_Items_0();
		// float prevPrevX = p[o], prevPrevY = p[o + 1];
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_203 = L_202;
		int32_t L_204 = V_31;
		int32_t L_205 = L_204;
		float L_206 = (L_203)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_205));
		V_32 = L_206;
		// float prevPrevX = p[o], prevPrevY = p[o + 1];
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_207 = L_203;
		int32_t L_208 = V_31;
		int32_t L_209 = ((int32_t)il2cpp_codegen_add((int32_t)L_208, (int32_t)1));
		float L_210 = (L_207)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_209));
		V_33 = L_210;
		// float prevX = p[o + 2], prevY = p[o + 3];
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_211 = L_207;
		int32_t L_212 = V_31;
		int32_t L_213 = ((int32_t)il2cpp_codegen_add((int32_t)L_212, (int32_t)2));
		float L_214 = (L_211)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_213));
		V_34 = L_214;
		// float prevX = p[o + 2], prevY = p[o + 3];
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_215 = L_211;
		int32_t L_216 = V_31;
		int32_t L_217 = ((int32_t)il2cpp_codegen_add((int32_t)L_216, (int32_t)3));
		float L_218 = (L_215)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_217));
		V_35 = L_218;
		// float firstX = p[0], firstY = p[1];
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_219 = L_215;
		int32_t L_220 = 0;
		float L_221 = (L_219)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_220));
		V_36 = L_221;
		// float firstX = p[0], firstY = p[1];
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_222 = L_219;
		int32_t L_223 = 1;
		float L_224 = (L_222)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_223));
		V_37 = L_224;
		// float secondX = p[2], secondY = p[3];
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_225 = L_222;
		int32_t L_226 = 2;
		float L_227 = (L_225)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_226));
		V_38 = L_227;
		// float secondX = p[2], secondY = p[3];
		int32_t L_228 = 3;
		float L_229 = (L_225)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_228));
		V_39 = L_229;
		// int winding = Winding(prevPrevX, prevPrevY, prevX, prevY, firstX, firstY);
		float L_230 = V_32;
		float L_231 = V_33;
		float L_232 = V_34;
		float L_233 = V_35;
		float L_234 = V_36;
		float L_235 = V_37;
		int32_t L_236;
		L_236 = Triangulator_Winding_mF333A8016360F473FCF182CD6E821198E9EB7D16(L_230, L_231, L_232, L_233, L_234, L_235, /*hidden argument*/NULL);
		V_40 = L_236;
		// for (int ii = 0; ii < n; ii++) {
		V_41 = 0;
		goto IL_0417;
	}

IL_0327:
	{
		// if (ii == i) continue;
		int32_t L_237 = V_41;
		int32_t L_238 = V_27;
		if ((((int32_t)L_237) == ((int32_t)L_238)))
		{
			goto IL_0411;
		}
	}
	{
		// var otherIndices = convexPolygonsIndices.Items[ii];
		ExposedList_1_tE018626AD135D00E2FCAF5578BADE795F5CCDC90 * L_239 = V_2;
		ExposedList_1U5BU5D_tC7922C1CF6C272D1AC5CB95D7C39664D0F12FF54* L_240 = L_239->get_Items_0();
		int32_t L_241 = V_41;
		int32_t L_242 = L_241;
		ExposedList_1_tEB071484A7B70681ADB6BD9522EFC630CA5C5066 * L_243 = (ExposedList_1_tEB071484A7B70681ADB6BD9522EFC630CA5C5066 *)(L_240)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_242));
		V_42 = L_243;
		// if (otherIndices.Count != 3) continue;
		ExposedList_1_tEB071484A7B70681ADB6BD9522EFC630CA5C5066 * L_244 = V_42;
		int32_t L_245 = L_244->get_Count_1();
		if ((!(((uint32_t)L_245) == ((uint32_t)3))))
		{
			goto IL_0411;
		}
	}
	{
		// int otherFirstIndex = otherIndices.Items[0];
		ExposedList_1_tEB071484A7B70681ADB6BD9522EFC630CA5C5066 * L_246 = V_42;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_247 = L_246->get_Items_0();
		int32_t L_248 = 0;
		int32_t L_249 = (L_247)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_248));
		V_43 = L_249;
		// int otherSecondIndex = otherIndices.Items[1];
		ExposedList_1_tEB071484A7B70681ADB6BD9522EFC630CA5C5066 * L_250 = V_42;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_251 = L_250->get_Items_0();
		int32_t L_252 = 1;
		int32_t L_253 = (L_251)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_252));
		V_44 = L_253;
		// int otherLastIndex = otherIndices.Items[2];
		ExposedList_1_tEB071484A7B70681ADB6BD9522EFC630CA5C5066 * L_254 = V_42;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_255 = L_254->get_Items_0();
		int32_t L_256 = 2;
		int32_t L_257 = (L_255)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_256));
		V_45 = L_257;
		// var otherPoly = convexPolygons.Items[ii];
		ExposedList_1_tFAEEFBED9EABAD893C31C789759FD1BA692F0289 * L_258 = V_1;
		ExposedList_1U5BU5D_tE723A0FFD1A0C77B17CCA09F9BE2EA1B09561CFE* L_259 = L_258->get_Items_0();
		int32_t L_260 = V_41;
		int32_t L_261 = L_260;
		ExposedList_1_t9F8622C73EB60A6882B2968C1C0F1706D574F526 * L_262 = (ExposedList_1_t9F8622C73EB60A6882B2968C1C0F1706D574F526 *)(L_259)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_261));
		V_46 = L_262;
		// float x3 = otherPoly.Items[otherPoly.Count - 2], y3 = otherPoly.Items[otherPoly.Count - 1];
		ExposedList_1_t9F8622C73EB60A6882B2968C1C0F1706D574F526 * L_263 = V_46;
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_264 = L_263->get_Items_0();
		ExposedList_1_t9F8622C73EB60A6882B2968C1C0F1706D574F526 * L_265 = V_46;
		int32_t L_266 = L_265->get_Count_1();
		int32_t L_267 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_266, (int32_t)2));
		float L_268 = (L_264)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_267));
		V_47 = L_268;
		// float x3 = otherPoly.Items[otherPoly.Count - 2], y3 = otherPoly.Items[otherPoly.Count - 1];
		ExposedList_1_t9F8622C73EB60A6882B2968C1C0F1706D574F526 * L_269 = V_46;
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_270 = L_269->get_Items_0();
		ExposedList_1_t9F8622C73EB60A6882B2968C1C0F1706D574F526 * L_271 = V_46;
		int32_t L_272 = L_271->get_Count_1();
		int32_t L_273 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_272, (int32_t)1));
		float L_274 = (L_270)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_273));
		V_48 = L_274;
		// if (otherFirstIndex != firstIndex || otherSecondIndex != lastIndex) continue;
		int32_t L_275 = V_43;
		int32_t L_276 = V_29;
		if ((!(((uint32_t)L_275) == ((uint32_t)L_276))))
		{
			goto IL_0411;
		}
	}
	{
		int32_t L_277 = V_44;
		int32_t L_278 = V_30;
		if ((!(((uint32_t)L_277) == ((uint32_t)L_278))))
		{
			goto IL_0411;
		}
	}
	{
		// int winding1 = Winding(prevPrevX, prevPrevY, prevX, prevY, x3, y3);
		float L_279 = V_32;
		float L_280 = V_33;
		float L_281 = V_34;
		float L_282 = V_35;
		float L_283 = V_47;
		float L_284 = V_48;
		int32_t L_285;
		L_285 = Triangulator_Winding_mF333A8016360F473FCF182CD6E821198E9EB7D16(L_279, L_280, L_281, L_282, L_283, L_284, /*hidden argument*/NULL);
		// int winding2 = Winding(x3, y3, firstX, firstY, secondX, secondY);
		float L_286 = V_47;
		float L_287 = V_48;
		float L_288 = V_36;
		float L_289 = V_37;
		float L_290 = V_38;
		float L_291 = V_39;
		int32_t L_292;
		L_292 = Triangulator_Winding_mF333A8016360F473FCF182CD6E821198E9EB7D16(L_286, L_287, L_288, L_289, L_290, L_291, /*hidden argument*/NULL);
		V_49 = L_292;
		// if (winding1 == winding && winding2 == winding) {
		int32_t L_293 = V_40;
		if ((!(((uint32_t)L_285) == ((uint32_t)L_293))))
		{
			goto IL_0411;
		}
	}
	{
		int32_t L_294 = V_49;
		int32_t L_295 = V_40;
		if ((!(((uint32_t)L_294) == ((uint32_t)L_295))))
		{
			goto IL_0411;
		}
	}
	{
		// otherPoly.Clear();
		ExposedList_1_t9F8622C73EB60A6882B2968C1C0F1706D574F526 * L_296 = V_46;
		ExposedList_1_Clear_m56FD9B006AFA6C0C3B822A2460ED52D4FA72D847(L_296, (bool)1, /*hidden argument*/ExposedList_1_Clear_m56FD9B006AFA6C0C3B822A2460ED52D4FA72D847_RuntimeMethod_var);
		// otherIndices.Clear();
		ExposedList_1_tEB071484A7B70681ADB6BD9522EFC630CA5C5066 * L_297 = V_42;
		ExposedList_1_Clear_m9E1BE8027151460EB7E0FAB390B2846D15BA302B(L_297, (bool)1, /*hidden argument*/ExposedList_1_Clear_m9E1BE8027151460EB7E0FAB390B2846D15BA302B_RuntimeMethod_var);
		// polygon.Add(x3);
		ExposedList_1_t9F8622C73EB60A6882B2968C1C0F1706D574F526 * L_298 = V_4;
		float L_299 = V_47;
		ExposedList_1_Add_m5B673948ABFBB0479F3A81270A22A4295AEF619B(L_298, L_299, /*hidden argument*/ExposedList_1_Add_m5B673948ABFBB0479F3A81270A22A4295AEF619B_RuntimeMethod_var);
		// polygon.Add(y3);
		ExposedList_1_t9F8622C73EB60A6882B2968C1C0F1706D574F526 * L_300 = V_4;
		float L_301 = V_48;
		ExposedList_1_Add_m5B673948ABFBB0479F3A81270A22A4295AEF619B(L_300, L_301, /*hidden argument*/ExposedList_1_Add_m5B673948ABFBB0479F3A81270A22A4295AEF619B_RuntimeMethod_var);
		// polygonIndices.Add(otherLastIndex);
		ExposedList_1_tEB071484A7B70681ADB6BD9522EFC630CA5C5066 * L_302 = V_3;
		int32_t L_303 = V_45;
		ExposedList_1_Add_m65591272902D94AFAE294B4CDF30A465AA2274F8(L_302, L_303, /*hidden argument*/ExposedList_1_Add_m65591272902D94AFAE294B4CDF30A465AA2274F8_RuntimeMethod_var);
		// prevPrevX = prevX;
		float L_304 = V_34;
		V_32 = L_304;
		// prevPrevY = prevY;
		float L_305 = V_35;
		V_33 = L_305;
		// prevX = x3;
		float L_306 = V_47;
		V_34 = L_306;
		// prevY = y3;
		float L_307 = V_48;
		V_35 = L_307;
		// ii = 0;
		V_41 = 0;
	}

IL_0411:
	{
		// for (int ii = 0; ii < n; ii++) {
		int32_t L_308 = V_41;
		V_41 = ((int32_t)il2cpp_codegen_add((int32_t)L_308, (int32_t)1));
	}

IL_0417:
	{
		// for (int ii = 0; ii < n; ii++) {
		int32_t L_309 = V_41;
		int32_t L_310 = V_28;
		if ((((int32_t)L_309) < ((int32_t)L_310)))
		{
			goto IL_0327;
		}
	}

IL_0420:
	{
		// for (int i = 0, n = convexPolygons.Count; i < n; i++) {
		int32_t L_311 = V_27;
		V_27 = ((int32_t)il2cpp_codegen_add((int32_t)L_311, (int32_t)1));
	}

IL_0426:
	{
		// for (int i = 0, n = convexPolygons.Count; i < n; i++) {
		int32_t L_312 = V_27;
		int32_t L_313 = V_28;
		if ((((int32_t)L_312) < ((int32_t)L_313)))
		{
			goto IL_028e;
		}
	}
	{
		// for (int i = convexPolygons.Count - 1; i >= 0; i--) {
		ExposedList_1_tFAEEFBED9EABAD893C31C789759FD1BA692F0289 * L_314 = V_1;
		int32_t L_315 = L_314->get_Count_1();
		V_50 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_315, (int32_t)1));
		goto IL_0488;
	}

IL_043b:
	{
		// polygon = convexPolygons.Items[i];
		ExposedList_1_tFAEEFBED9EABAD893C31C789759FD1BA692F0289 * L_316 = V_1;
		ExposedList_1U5BU5D_tE723A0FFD1A0C77B17CCA09F9BE2EA1B09561CFE* L_317 = L_316->get_Items_0();
		int32_t L_318 = V_50;
		int32_t L_319 = L_318;
		ExposedList_1_t9F8622C73EB60A6882B2968C1C0F1706D574F526 * L_320 = (ExposedList_1_t9F8622C73EB60A6882B2968C1C0F1706D574F526 *)(L_317)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_319));
		V_4 = L_320;
		// if (polygon.Count == 0) {
		ExposedList_1_t9F8622C73EB60A6882B2968C1C0F1706D574F526 * L_321 = V_4;
		int32_t L_322 = L_321->get_Count_1();
		if (L_322)
		{
			goto IL_0482;
		}
	}
	{
		// convexPolygons.RemoveAt(i);
		ExposedList_1_tFAEEFBED9EABAD893C31C789759FD1BA692F0289 * L_323 = V_1;
		int32_t L_324 = V_50;
		ExposedList_1_RemoveAt_mABBDA48F0096E88AB0169B176320716F8EE471FB(L_323, L_324, /*hidden argument*/ExposedList_1_RemoveAt_mABBDA48F0096E88AB0169B176320716F8EE471FB_RuntimeMethod_var);
		// polygonPool.Free(polygon);
		Pool_1_tEBC6CCDAC2A4D2FDEE1A4FC452D0D72D0F4142B9 * L_325 = __this->get_polygonPool_5();
		ExposedList_1_t9F8622C73EB60A6882B2968C1C0F1706D574F526 * L_326 = V_4;
		Pool_1_Free_mA877966FCAD605DAFF16CD72619CE9B5A0160A75(L_325, L_326, /*hidden argument*/Pool_1_Free_mA877966FCAD605DAFF16CD72619CE9B5A0160A75_RuntimeMethod_var);
		// polygonIndices = convexPolygonsIndices.Items[i];
		ExposedList_1_tE018626AD135D00E2FCAF5578BADE795F5CCDC90 * L_327 = V_2;
		ExposedList_1U5BU5D_tC7922C1CF6C272D1AC5CB95D7C39664D0F12FF54* L_328 = L_327->get_Items_0();
		int32_t L_329 = V_50;
		int32_t L_330 = L_329;
		ExposedList_1_tEB071484A7B70681ADB6BD9522EFC630CA5C5066 * L_331 = (ExposedList_1_tEB071484A7B70681ADB6BD9522EFC630CA5C5066 *)(L_328)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_330));
		V_3 = L_331;
		// convexPolygonsIndices.RemoveAt(i);
		ExposedList_1_tE018626AD135D00E2FCAF5578BADE795F5CCDC90 * L_332 = V_2;
		int32_t L_333 = V_50;
		ExposedList_1_RemoveAt_m0629ED8D156A78115171F2746A855438C3DBE81C(L_332, L_333, /*hidden argument*/ExposedList_1_RemoveAt_m0629ED8D156A78115171F2746A855438C3DBE81C_RuntimeMethod_var);
		// polygonIndicesPool.Free(polygonIndices);
		Pool_1_t5CA90CE7EBA311405CE9C8F1E0C4DDFE861C384A * L_334 = __this->get_polygonIndicesPool_6();
		ExposedList_1_tEB071484A7B70681ADB6BD9522EFC630CA5C5066 * L_335 = V_3;
		Pool_1_Free_m8AD43187DBD866A8B28F74E7FD9A90D7A5834805(L_334, L_335, /*hidden argument*/Pool_1_Free_m8AD43187DBD866A8B28F74E7FD9A90D7A5834805_RuntimeMethod_var);
	}

IL_0482:
	{
		// for (int i = convexPolygons.Count - 1; i >= 0; i--) {
		int32_t L_336 = V_50;
		V_50 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_336, (int32_t)1));
	}

IL_0488:
	{
		// for (int i = convexPolygons.Count - 1; i >= 0; i--) {
		int32_t L_337 = V_50;
		if ((((int32_t)L_337) >= ((int32_t)0)))
		{
			goto IL_043b;
		}
	}
	{
		// return convexPolygons;
		ExposedList_1_tFAEEFBED9EABAD893C31C789759FD1BA692F0289 * L_338 = V_1;
		return L_338;
	}
}
// System.Boolean Spine.Triangulator::IsConcave(System.Int32,System.Int32,System.Single[],System.Int32[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Triangulator_IsConcave_mDD6C3B0E0D6C7D764959472E51D5EBDDC7066931 (int32_t ___index0, int32_t ___vertexCount1, SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* ___vertices2, Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___indices3, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		// int previous = indices[(vertexCount + index - 1) % vertexCount] << 1;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_0 = ___indices3;
		int32_t L_1 = ___vertexCount1;
		int32_t L_2 = ___index0;
		int32_t L_3 = ___vertexCount1;
		int32_t L_4 = ((int32_t)((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_1, (int32_t)L_2)), (int32_t)1))%(int32_t)L_3));
		int32_t L_5 = (L_0)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_4));
		V_0 = ((int32_t)((int32_t)L_5<<(int32_t)1));
		// int current = indices[index] << 1;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_6 = ___indices3;
		int32_t L_7 = ___index0;
		int32_t L_8 = L_7;
		int32_t L_9 = (L_6)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_8));
		V_1 = ((int32_t)((int32_t)L_9<<(int32_t)1));
		// int next = indices[(index + 1) % vertexCount] << 1;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_10 = ___indices3;
		int32_t L_11 = ___index0;
		int32_t L_12 = ___vertexCount1;
		int32_t L_13 = ((int32_t)((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_11, (int32_t)1))%(int32_t)L_12));
		int32_t L_14 = (L_10)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_13));
		V_2 = ((int32_t)((int32_t)L_14<<(int32_t)1));
		// return !PositiveArea(vertices[previous], vertices[previous + 1], vertices[current], vertices[current + 1], vertices[next],
		//     vertices[next + 1]);
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_15 = ___vertices2;
		int32_t L_16 = V_0;
		int32_t L_17 = L_16;
		float L_18 = (L_15)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_17));
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_19 = ___vertices2;
		int32_t L_20 = V_0;
		int32_t L_21 = ((int32_t)il2cpp_codegen_add((int32_t)L_20, (int32_t)1));
		float L_22 = (L_19)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_21));
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_23 = ___vertices2;
		int32_t L_24 = V_1;
		int32_t L_25 = L_24;
		float L_26 = (L_23)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_25));
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_27 = ___vertices2;
		int32_t L_28 = V_1;
		int32_t L_29 = ((int32_t)il2cpp_codegen_add((int32_t)L_28, (int32_t)1));
		float L_30 = (L_27)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_29));
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_31 = ___vertices2;
		int32_t L_32 = V_2;
		int32_t L_33 = L_32;
		float L_34 = (L_31)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_33));
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_35 = ___vertices2;
		int32_t L_36 = V_2;
		int32_t L_37 = ((int32_t)il2cpp_codegen_add((int32_t)L_36, (int32_t)1));
		float L_38 = (L_35)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_37));
		bool L_39;
		L_39 = Triangulator_PositiveArea_mBF8877A07FD57FBA1B8C2A5914BD8B040115E8FA(L_18, L_22, L_26, L_30, L_34, L_38, /*hidden argument*/NULL);
		return (bool)((((int32_t)L_39) == ((int32_t)0))? 1 : 0);
	}
}
// System.Boolean Spine.Triangulator::PositiveArea(System.Single,System.Single,System.Single,System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Triangulator_PositiveArea_mBF8877A07FD57FBA1B8C2A5914BD8B040115E8FA (float ___p1x0, float ___p1y1, float ___p2x2, float ___p2y3, float ___p3x4, float ___p3y5, const RuntimeMethod* method)
{
	{
		// return p1x * (p3y - p2y) + p2x * (p1y - p3y) + p3x * (p2y - p1y) >= 0;
		float L_0 = ___p1x0;
		float L_1 = ___p3y5;
		float L_2 = ___p2y3;
		float L_3 = ___p2x2;
		float L_4 = ___p1y1;
		float L_5 = ___p3y5;
		float L_6 = ___p3x4;
		float L_7 = ___p2y3;
		float L_8 = ___p1y1;
		return (bool)((((int32_t)((!(((float)((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_multiply((float)L_0, (float)((float)il2cpp_codegen_subtract((float)L_1, (float)L_2)))), (float)((float)il2cpp_codegen_multiply((float)L_3, (float)((float)il2cpp_codegen_subtract((float)L_4, (float)L_5)))))), (float)((float)il2cpp_codegen_multiply((float)L_6, (float)((float)il2cpp_codegen_subtract((float)L_7, (float)L_8))))))) >= ((float)(0.0f))))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
// System.Int32 Spine.Triangulator::Winding(System.Single,System.Single,System.Single,System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Triangulator_Winding_mF333A8016360F473FCF182CD6E821198E9EB7D16 (float ___p1x0, float ___p1y1, float ___p2x2, float ___p2y3, float ___p3x4, float ___p3y5, const RuntimeMethod* method)
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	{
		// float px = p2x - p1x, py = p2y - p1y;
		float L_0 = ___p2x2;
		float L_1 = ___p1x0;
		V_0 = ((float)il2cpp_codegen_subtract((float)L_0, (float)L_1));
		// float px = p2x - p1x, py = p2y - p1y;
		float L_2 = ___p2y3;
		float L_3 = ___p1y1;
		V_1 = ((float)il2cpp_codegen_subtract((float)L_2, (float)L_3));
		// return p3x * py - p3y * px + px * p1y - p1x * py >= 0 ? 1 : -1;
		float L_4 = ___p3x4;
		float L_5 = V_1;
		float L_6 = ___p3y5;
		float L_7 = V_0;
		float L_8 = V_0;
		float L_9 = ___p1y1;
		float L_10 = ___p1x0;
		float L_11 = V_1;
		if ((((float)((float)il2cpp_codegen_subtract((float)((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_subtract((float)((float)il2cpp_codegen_multiply((float)L_4, (float)L_5)), (float)((float)il2cpp_codegen_multiply((float)L_6, (float)L_7)))), (float)((float)il2cpp_codegen_multiply((float)L_8, (float)L_9)))), (float)((float)il2cpp_codegen_multiply((float)L_10, (float)L_11))))) >= ((float)(0.0f))))
		{
			goto IL_0022;
		}
	}
	{
		return (-1);
	}

IL_0022:
	{
		return 1;
	}
}
// System.Void Spine.Triangulator::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Triangulator__ctor_m3FCDADA414AE8407D5D1CCDDB036C394A07FADED (Triangulator_tB8EB2546BA4C75A44FDEEC203E67023C07FBBE8B * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExposedList_1__ctor_m02755087651BB67AD2B2D4D758AE77AFD7DC440B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExposedList_1__ctor_m84177DC3659E1B9F2837C8ADDC017ADDA00B36A0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExposedList_1__ctor_m9BB5379A9A5D0484D07AE68B3215F94B8093DFD2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExposedList_1__ctor_mB0F2F25C8D7C8DA90320D609A4DC4857D9ECC79C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExposedList_1_tAA9A80412EB5EC236EBA9FC15B2BD9A61915AE7E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExposedList_1_tE018626AD135D00E2FCAF5578BADE795F5CCDC90_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExposedList_1_tEB071484A7B70681ADB6BD9522EFC630CA5C5066_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExposedList_1_tFAEEFBED9EABAD893C31C789759FD1BA692F0289_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Pool_1__ctor_m7C7FBE91695216C54B23152A69A8EEB750808334_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Pool_1__ctor_mEF3423A00009591979CA692DDE12CCC2FF4E8C26_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Pool_1_t5CA90CE7EBA311405CE9C8F1E0C4DDFE861C384A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Pool_1_tEBC6CCDAC2A4D2FDEE1A4FC452D0D72D0F4142B9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private readonly ExposedList<ExposedList<float>> convexPolygons = new ExposedList<ExposedList<float>>();
		ExposedList_1_tFAEEFBED9EABAD893C31C789759FD1BA692F0289 * L_0 = (ExposedList_1_tFAEEFBED9EABAD893C31C789759FD1BA692F0289 *)il2cpp_codegen_object_new(ExposedList_1_tFAEEFBED9EABAD893C31C789759FD1BA692F0289_il2cpp_TypeInfo_var);
		ExposedList_1__ctor_m02755087651BB67AD2B2D4D758AE77AFD7DC440B(L_0, /*hidden argument*/ExposedList_1__ctor_m02755087651BB67AD2B2D4D758AE77AFD7DC440B_RuntimeMethod_var);
		__this->set_convexPolygons_0(L_0);
		// private readonly ExposedList<ExposedList<int>> convexPolygonsIndices = new ExposedList<ExposedList<int>>();
		ExposedList_1_tE018626AD135D00E2FCAF5578BADE795F5CCDC90 * L_1 = (ExposedList_1_tE018626AD135D00E2FCAF5578BADE795F5CCDC90 *)il2cpp_codegen_object_new(ExposedList_1_tE018626AD135D00E2FCAF5578BADE795F5CCDC90_il2cpp_TypeInfo_var);
		ExposedList_1__ctor_m84177DC3659E1B9F2837C8ADDC017ADDA00B36A0(L_1, /*hidden argument*/ExposedList_1__ctor_m84177DC3659E1B9F2837C8ADDC017ADDA00B36A0_RuntimeMethod_var);
		__this->set_convexPolygonsIndices_1(L_1);
		// private readonly ExposedList<int> indicesArray = new ExposedList<int>();
		ExposedList_1_tEB071484A7B70681ADB6BD9522EFC630CA5C5066 * L_2 = (ExposedList_1_tEB071484A7B70681ADB6BD9522EFC630CA5C5066 *)il2cpp_codegen_object_new(ExposedList_1_tEB071484A7B70681ADB6BD9522EFC630CA5C5066_il2cpp_TypeInfo_var);
		ExposedList_1__ctor_m9BB5379A9A5D0484D07AE68B3215F94B8093DFD2(L_2, /*hidden argument*/ExposedList_1__ctor_m9BB5379A9A5D0484D07AE68B3215F94B8093DFD2_RuntimeMethod_var);
		__this->set_indicesArray_2(L_2);
		// private readonly ExposedList<bool> isConcaveArray = new ExposedList<bool>();
		ExposedList_1_tAA9A80412EB5EC236EBA9FC15B2BD9A61915AE7E * L_3 = (ExposedList_1_tAA9A80412EB5EC236EBA9FC15B2BD9A61915AE7E *)il2cpp_codegen_object_new(ExposedList_1_tAA9A80412EB5EC236EBA9FC15B2BD9A61915AE7E_il2cpp_TypeInfo_var);
		ExposedList_1__ctor_mB0F2F25C8D7C8DA90320D609A4DC4857D9ECC79C(L_3, /*hidden argument*/ExposedList_1__ctor_mB0F2F25C8D7C8DA90320D609A4DC4857D9ECC79C_RuntimeMethod_var);
		__this->set_isConcaveArray_3(L_3);
		// private readonly ExposedList<int> triangles = new ExposedList<int>();
		ExposedList_1_tEB071484A7B70681ADB6BD9522EFC630CA5C5066 * L_4 = (ExposedList_1_tEB071484A7B70681ADB6BD9522EFC630CA5C5066 *)il2cpp_codegen_object_new(ExposedList_1_tEB071484A7B70681ADB6BD9522EFC630CA5C5066_il2cpp_TypeInfo_var);
		ExposedList_1__ctor_m9BB5379A9A5D0484D07AE68B3215F94B8093DFD2(L_4, /*hidden argument*/ExposedList_1__ctor_m9BB5379A9A5D0484D07AE68B3215F94B8093DFD2_RuntimeMethod_var);
		__this->set_triangles_4(L_4);
		// private readonly Pool<ExposedList<float>> polygonPool = new Pool<ExposedList<float>>();
		Pool_1_tEBC6CCDAC2A4D2FDEE1A4FC452D0D72D0F4142B9 * L_5 = (Pool_1_tEBC6CCDAC2A4D2FDEE1A4FC452D0D72D0F4142B9 *)il2cpp_codegen_object_new(Pool_1_tEBC6CCDAC2A4D2FDEE1A4FC452D0D72D0F4142B9_il2cpp_TypeInfo_var);
		Pool_1__ctor_mEF3423A00009591979CA692DDE12CCC2FF4E8C26(L_5, ((int32_t)16), ((int32_t)2147483647LL), /*hidden argument*/Pool_1__ctor_mEF3423A00009591979CA692DDE12CCC2FF4E8C26_RuntimeMethod_var);
		__this->set_polygonPool_5(L_5);
		// private readonly Pool<ExposedList<int>> polygonIndicesPool = new Pool<ExposedList<int>>();
		Pool_1_t5CA90CE7EBA311405CE9C8F1E0C4DDFE861C384A * L_6 = (Pool_1_t5CA90CE7EBA311405CE9C8F1E0C4DDFE861C384A *)il2cpp_codegen_object_new(Pool_1_t5CA90CE7EBA311405CE9C8F1E0C4DDFE861C384A_il2cpp_TypeInfo_var);
		Pool_1__ctor_m7C7FBE91695216C54B23152A69A8EEB750808334(L_6, ((int32_t)16), ((int32_t)2147483647LL), /*hidden argument*/Pool_1__ctor_m7C7FBE91695216C54B23152A69A8EEB750808334_RuntimeMethod_var);
		__this->set_polygonIndicesPool_6(L_6);
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
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
// System.Int32 Spine.VertexAttachment::get_Id()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t VertexAttachment_get_Id_m365B2BB369C3DD42CD90FD0979BBBBC6569406CD (VertexAttachment_t9CE5B53FEDF378FFCADECD92F0ABF5F1DFDFFF36 * __this, const RuntimeMethod* method)
{
	{
		// public int Id { get { return id; } }
		int32_t L_0 = __this->get_id_3();
		return L_0;
	}
}
// System.Int32[] Spine.VertexAttachment::get_Bones()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* VertexAttachment_get_Bones_m7E130D69DEA0AC57C8223B646EEF05DAEEF7B6B7 (VertexAttachment_t9CE5B53FEDF378FFCADECD92F0ABF5F1DFDFFF36 * __this, const RuntimeMethod* method)
{
	{
		// public int[] Bones { get { return bones; } set { bones = value; } }
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_0 = __this->get_bones_4();
		return L_0;
	}
}
// System.Void Spine.VertexAttachment::set_Bones(System.Int32[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VertexAttachment_set_Bones_m902729F45F017DFBC75D561C45ADAD673799DF91 (VertexAttachment_t9CE5B53FEDF378FFCADECD92F0ABF5F1DFDFFF36 * __this, Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___value0, const RuntimeMethod* method)
{
	{
		// public int[] Bones { get { return bones; } set { bones = value; } }
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_0 = ___value0;
		__this->set_bones_4(L_0);
		// public int[] Bones { get { return bones; } set { bones = value; } }
		return;
	}
}
// System.Single[] Spine.VertexAttachment::get_Vertices()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* VertexAttachment_get_Vertices_m07A5BCBA8C77ED433DB7BCCAF20FA01B02DF669B (VertexAttachment_t9CE5B53FEDF378FFCADECD92F0ABF5F1DFDFFF36 * __this, const RuntimeMethod* method)
{
	{
		// public float[] Vertices { get { return vertices; } set { vertices = value; } }
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_0 = __this->get_vertices_5();
		return L_0;
	}
}
// System.Void Spine.VertexAttachment::set_Vertices(System.Single[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VertexAttachment_set_Vertices_mFA737547B603D0D8C9638209103D8CE501F6F0E3 (VertexAttachment_t9CE5B53FEDF378FFCADECD92F0ABF5F1DFDFFF36 * __this, SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* ___value0, const RuntimeMethod* method)
{
	{
		// public float[] Vertices { get { return vertices; } set { vertices = value; } }
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_0 = ___value0;
		__this->set_vertices_5(L_0);
		// public float[] Vertices { get { return vertices; } set { vertices = value; } }
		return;
	}
}
// System.Int32 Spine.VertexAttachment::get_WorldVerticesLength()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t VertexAttachment_get_WorldVerticesLength_mEC4F4AC0F819118C902E639646330C241ACDDB43 (VertexAttachment_t9CE5B53FEDF378FFCADECD92F0ABF5F1DFDFFF36 * __this, const RuntimeMethod* method)
{
	{
		// public int WorldVerticesLength { get { return worldVerticesLength; } set { worldVerticesLength = value; } }
		int32_t L_0 = __this->get_worldVerticesLength_6();
		return L_0;
	}
}
// System.Void Spine.VertexAttachment::set_WorldVerticesLength(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VertexAttachment_set_WorldVerticesLength_m44E85EEB7DE97F64FFE5AF017829A32A9775CE5A (VertexAttachment_t9CE5B53FEDF378FFCADECD92F0ABF5F1DFDFFF36 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// public int WorldVerticesLength { get { return worldVerticesLength; } set { worldVerticesLength = value; } }
		int32_t L_0 = ___value0;
		__this->set_worldVerticesLength_6(L_0);
		// public int WorldVerticesLength { get { return worldVerticesLength; } set { worldVerticesLength = value; } }
		return;
	}
}
// Spine.VertexAttachment Spine.VertexAttachment::get_DeformAttachment()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR VertexAttachment_t9CE5B53FEDF378FFCADECD92F0ABF5F1DFDFFF36 * VertexAttachment_get_DeformAttachment_m94F1042D96119751C1CB968C02F21257DC1090CE (VertexAttachment_t9CE5B53FEDF378FFCADECD92F0ABF5F1DFDFFF36 * __this, const RuntimeMethod* method)
{
	{
		// public VertexAttachment DeformAttachment { get { return deformAttachment; } set { deformAttachment = value; } }
		VertexAttachment_t9CE5B53FEDF378FFCADECD92F0ABF5F1DFDFFF36 * L_0 = __this->get_deformAttachment_7();
		return L_0;
	}
}
// System.Void Spine.VertexAttachment::set_DeformAttachment(Spine.VertexAttachment)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VertexAttachment_set_DeformAttachment_mCBCBB590C5EE2902E3466A7215ED48247EBB0288 (VertexAttachment_t9CE5B53FEDF378FFCADECD92F0ABF5F1DFDFFF36 * __this, VertexAttachment_t9CE5B53FEDF378FFCADECD92F0ABF5F1DFDFFF36 * ___value0, const RuntimeMethod* method)
{
	{
		// public VertexAttachment DeformAttachment { get { return deformAttachment; } set { deformAttachment = value; } }
		VertexAttachment_t9CE5B53FEDF378FFCADECD92F0ABF5F1DFDFFF36 * L_0 = ___value0;
		__this->set_deformAttachment_7(L_0);
		// public VertexAttachment DeformAttachment { get { return deformAttachment; } set { deformAttachment = value; } }
		return;
	}
}
// System.Void Spine.VertexAttachment::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VertexAttachment__ctor_m99772032B6C4B9797DB94A9A19F23E79770F8B99 (VertexAttachment_t9CE5B53FEDF378FFCADECD92F0ABF5F1DFDFFF36 * __this, String_t* ___name0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VertexAttachment_t9CE5B53FEDF378FFCADECD92F0ABF5F1DFDFFF36_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject * V_0 = NULL;
	bool V_1 = false;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	{
		// : base(name) {
		String_t* L_0 = ___name0;
		Attachment__ctor_m25D4C3124669EB5D1A033934369C6C3ED9A60662(__this, L_0, /*hidden argument*/NULL);
		// deformAttachment = this;
		__this->set_deformAttachment_7(__this);
		// lock (VertexAttachment.nextIdLock) {
		IL2CPP_RUNTIME_CLASS_INIT(VertexAttachment_t9CE5B53FEDF378FFCADECD92F0ABF5F1DFDFFF36_il2cpp_TypeInfo_var);
		RuntimeObject * L_1 = ((VertexAttachment_t9CE5B53FEDF378FFCADECD92F0ABF5F1DFDFFF36_StaticFields*)il2cpp_codegen_static_fields_for(VertexAttachment_t9CE5B53FEDF378FFCADECD92F0ABF5F1DFDFFF36_il2cpp_TypeInfo_var))->get_nextIdLock_2();
		V_0 = L_1;
		V_1 = (bool)0;
	}

IL_0016:
	try
	{ // begin try (depth: 1)
		RuntimeObject * L_2 = V_0;
		Monitor_Enter_mBEB6CC84184B46F26375EC3FC8921D16E48EA4C4(L_2, (bool*)(&V_1), /*hidden argument*/NULL);
		// id = VertexAttachment.nextID++;
		IL2CPP_RUNTIME_CLASS_INIT(VertexAttachment_t9CE5B53FEDF378FFCADECD92F0ABF5F1DFDFFF36_il2cpp_TypeInfo_var);
		int32_t L_3 = ((VertexAttachment_t9CE5B53FEDF378FFCADECD92F0ABF5F1DFDFFF36_StaticFields*)il2cpp_codegen_static_fields_for(VertexAttachment_t9CE5B53FEDF378FFCADECD92F0ABF5F1DFDFFF36_il2cpp_TypeInfo_var))->get_nextID_1();
		int32_t L_4 = L_3;
		((VertexAttachment_t9CE5B53FEDF378FFCADECD92F0ABF5F1DFDFFF36_StaticFields*)il2cpp_codegen_static_fields_for(VertexAttachment_t9CE5B53FEDF378FFCADECD92F0ABF5F1DFDFFF36_il2cpp_TypeInfo_var))->set_nextID_1(((int32_t)il2cpp_codegen_add((int32_t)L_4, (int32_t)1)));
		__this->set_id_3(L_4);
		// }
		IL2CPP_LEAVE(0x3D, FINALLY_0033);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0033;
	}

FINALLY_0033:
	{ // begin finally (depth: 1)
		{
			bool L_5 = V_1;
			if (!L_5)
			{
				goto IL_003c;
			}
		}

IL_0036:
		{
			RuntimeObject * L_6 = V_0;
			Monitor_Exit_mA776B403DA88AC77CDEEF67AB9F0D0E77ABD254A(L_6, /*hidden argument*/NULL);
		}

IL_003c:
		{
			IL2CPP_END_FINALLY(51)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(51)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x3D, IL_003d)
	}

IL_003d:
	{
		// }
		return;
	}
}
// System.Void Spine.VertexAttachment::ComputeWorldVertices(Spine.Slot,System.Single[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VertexAttachment_ComputeWorldVertices_mE046CB9D561B56BCA91979DE43363D97237C92BE (VertexAttachment_t9CE5B53FEDF378FFCADECD92F0ABF5F1DFDFFF36 * __this, Slot_t754D2EC8AE03CF765F34A909762BE4E533BEF635 * ___slot0, SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* ___worldVertices1, const RuntimeMethod* method)
{
	{
		// ComputeWorldVertices(slot, 0, worldVerticesLength, worldVertices, 0);
		Slot_t754D2EC8AE03CF765F34A909762BE4E533BEF635 * L_0 = ___slot0;
		int32_t L_1 = __this->get_worldVerticesLength_6();
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_2 = ___worldVertices1;
		VertexAttachment_ComputeWorldVertices_m7D8E0D678752C843E1A901B8EF2899F5C583C0B3(__this, L_0, 0, L_1, L_2, 0, 2, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Spine.VertexAttachment::ComputeWorldVertices(Spine.Slot,System.Int32,System.Int32,System.Single[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VertexAttachment_ComputeWorldVertices_m7D8E0D678752C843E1A901B8EF2899F5C583C0B3 (VertexAttachment_t9CE5B53FEDF378FFCADECD92F0ABF5F1DFDFFF36 * __this, Slot_t754D2EC8AE03CF765F34A909762BE4E533BEF635 * ___slot0, int32_t ___start1, int32_t ___count2, SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* ___worldVertices3, int32_t ___offset4, int32_t ___stride5, const RuntimeMethod* method)
{
	ExposedList_1_t9F8622C73EB60A6882B2968C1C0F1706D574F526 * V_0 = NULL;
	SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* V_1 = NULL;
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* V_2 = NULL;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	BoneU5BU5D_t77D01946B97A0778AD79515B28F1C30BDBED3A23* V_5 = NULL;
	float V_6 = 0.0f;
	float V_7 = 0.0f;
	float V_8 = 0.0f;
	float V_9 = 0.0f;
	float V_10 = 0.0f;
	float V_11 = 0.0f;
	int32_t V_12 = 0;
	int32_t V_13 = 0;
	float V_14 = 0.0f;
	float V_15 = 0.0f;
	int32_t V_16 = 0;
	int32_t V_17 = 0;
	int32_t V_18 = 0;
	int32_t V_19 = 0;
	float V_20 = 0.0f;
	float V_21 = 0.0f;
	int32_t V_22 = 0;
	Bone_t6DA0B82485BED2E4EEE864AAD607EEBDC2F98AAF * V_23 = NULL;
	float V_24 = 0.0f;
	float V_25 = 0.0f;
	float V_26 = 0.0f;
	SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* V_27 = NULL;
	int32_t V_28 = 0;
	int32_t V_29 = 0;
	int32_t V_30 = 0;
	float V_31 = 0.0f;
	float V_32 = 0.0f;
	int32_t V_33 = 0;
	Bone_t6DA0B82485BED2E4EEE864AAD607EEBDC2F98AAF * V_34 = NULL;
	float V_35 = 0.0f;
	float V_36 = 0.0f;
	float V_37 = 0.0f;
	{
		// count = offset + (count >> 1) * stride;
		int32_t L_0 = ___offset4;
		int32_t L_1 = ___count2;
		int32_t L_2 = ___stride5;
		___count2 = ((int32_t)il2cpp_codegen_add((int32_t)L_0, (int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)((int32_t)L_1>>(int32_t)1)), (int32_t)L_2))));
		// ExposedList<float> deformArray = slot.deform;
		Slot_t754D2EC8AE03CF765F34A909762BE4E533BEF635 * L_3 = ___slot0;
		ExposedList_1_t9F8622C73EB60A6882B2968C1C0F1706D574F526 * L_4 = L_3->get_deform_12();
		V_0 = L_4;
		// float[] vertices = this.vertices;
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_5 = __this->get_vertices_5();
		V_1 = L_5;
		// int[] bones = this.bones;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_6 = __this->get_bones_4();
		V_2 = L_6;
		// if (bones == null) {
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_7 = V_2;
		if (L_7)
		{
			goto IL_00bd;
		}
	}
	{
		// if (deformArray.Count > 0) vertices = deformArray.Items;
		ExposedList_1_t9F8622C73EB60A6882B2968C1C0F1706D574F526 * L_8 = V_0;
		int32_t L_9 = L_8->get_Count_1();
		if ((((int32_t)L_9) <= ((int32_t)0)))
		{
			goto IL_0036;
		}
	}
	{
		// if (deformArray.Count > 0) vertices = deformArray.Items;
		ExposedList_1_t9F8622C73EB60A6882B2968C1C0F1706D574F526 * L_10 = V_0;
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_11 = L_10->get_Items_0();
		V_1 = L_11;
	}

IL_0036:
	{
		// Bone bone = slot.bone;
		Slot_t754D2EC8AE03CF765F34A909762BE4E533BEF635 * L_12 = ___slot0;
		Bone_t6DA0B82485BED2E4EEE864AAD607EEBDC2F98AAF * L_13 = L_12->get_bone_1();
		// float x = bone.worldX, y = bone.worldY;
		Bone_t6DA0B82485BED2E4EEE864AAD607EEBDC2F98AAF * L_14 = L_13;
		float L_15 = L_14->get_worldX_21();
		V_6 = L_15;
		// float x = bone.worldX, y = bone.worldY;
		Bone_t6DA0B82485BED2E4EEE864AAD607EEBDC2F98AAF * L_16 = L_14;
		float L_17 = L_16->get_worldY_24();
		V_7 = L_17;
		// float a = bone.a, b = bone.b, c = bone.c, d = bone.d;
		Bone_t6DA0B82485BED2E4EEE864AAD607EEBDC2F98AAF * L_18 = L_16;
		float L_19 = L_18->get_a_19();
		V_8 = L_19;
		// float a = bone.a, b = bone.b, c = bone.c, d = bone.d;
		Bone_t6DA0B82485BED2E4EEE864AAD607EEBDC2F98AAF * L_20 = L_18;
		float L_21 = L_20->get_b_20();
		V_9 = L_21;
		// float a = bone.a, b = bone.b, c = bone.c, d = bone.d;
		Bone_t6DA0B82485BED2E4EEE864AAD607EEBDC2F98AAF * L_22 = L_20;
		float L_23 = L_22->get_c_22();
		V_10 = L_23;
		// float a = bone.a, b = bone.b, c = bone.c, d = bone.d;
		float L_24 = L_22->get_d_23();
		V_11 = L_24;
		// for (int vv = start, w = offset; w < count; vv += 2, w += stride) {
		int32_t L_25 = ___start1;
		V_12 = L_25;
		// for (int vv = start, w = offset; w < count; vv += 2, w += stride) {
		int32_t L_26 = ___offset4;
		V_13 = L_26;
		goto IL_00b7;
	}

IL_0074:
	{
		// float vx = vertices[vv], vy = vertices[vv + 1];
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_27 = V_1;
		int32_t L_28 = V_12;
		int32_t L_29 = L_28;
		float L_30 = (L_27)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_29));
		V_14 = L_30;
		// float vx = vertices[vv], vy = vertices[vv + 1];
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_31 = V_1;
		int32_t L_32 = V_12;
		int32_t L_33 = ((int32_t)il2cpp_codegen_add((int32_t)L_32, (int32_t)1));
		float L_34 = (L_31)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_33));
		V_15 = L_34;
		// worldVertices[w] = vx * a + vy * b + x;
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_35 = ___worldVertices3;
		int32_t L_36 = V_13;
		float L_37 = V_14;
		float L_38 = V_8;
		float L_39 = V_15;
		float L_40 = V_9;
		float L_41 = V_6;
		(L_35)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_36), (float)((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_multiply((float)L_37, (float)L_38)), (float)((float)il2cpp_codegen_multiply((float)L_39, (float)L_40)))), (float)L_41)));
		// worldVertices[w + 1] = vx * c + vy * d + y;
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_42 = ___worldVertices3;
		int32_t L_43 = V_13;
		float L_44 = V_14;
		float L_45 = V_10;
		float L_46 = V_15;
		float L_47 = V_11;
		float L_48 = V_7;
		(L_42)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add((int32_t)L_43, (int32_t)1))), (float)((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_multiply((float)L_44, (float)L_45)), (float)((float)il2cpp_codegen_multiply((float)L_46, (float)L_47)))), (float)L_48)));
		// for (int vv = start, w = offset; w < count; vv += 2, w += stride) {
		int32_t L_49 = V_12;
		V_12 = ((int32_t)il2cpp_codegen_add((int32_t)L_49, (int32_t)2));
		// for (int vv = start, w = offset; w < count; vv += 2, w += stride) {
		int32_t L_50 = V_13;
		int32_t L_51 = ___stride5;
		V_13 = ((int32_t)il2cpp_codegen_add((int32_t)L_50, (int32_t)L_51));
	}

IL_00b7:
	{
		// for (int vv = start, w = offset; w < count; vv += 2, w += stride) {
		int32_t L_52 = V_13;
		int32_t L_53 = ___count2;
		if ((((int32_t)L_52) < ((int32_t)L_53)))
		{
			goto IL_0074;
		}
	}
	{
		// return;
		return;
	}

IL_00bd:
	{
		// int v = 0, skip = 0;
		V_3 = 0;
		// int v = 0, skip = 0;
		V_4 = 0;
		// for (int i = 0; i < start; i += 2) {
		V_16 = 0;
		goto IL_00e0;
	}

IL_00c7:
	{
		// int n = bones[v];
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_54 = V_2;
		int32_t L_55 = V_3;
		int32_t L_56 = L_55;
		int32_t L_57 = (L_54)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_56));
		V_17 = L_57;
		// v += n + 1;
		int32_t L_58 = V_3;
		int32_t L_59 = V_17;
		V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_58, (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_59, (int32_t)1))));
		// skip += n;
		int32_t L_60 = V_4;
		int32_t L_61 = V_17;
		V_4 = ((int32_t)il2cpp_codegen_add((int32_t)L_60, (int32_t)L_61));
		// for (int i = 0; i < start; i += 2) {
		int32_t L_62 = V_16;
		V_16 = ((int32_t)il2cpp_codegen_add((int32_t)L_62, (int32_t)2));
	}

IL_00e0:
	{
		// for (int i = 0; i < start; i += 2) {
		int32_t L_63 = V_16;
		int32_t L_64 = ___start1;
		if ((((int32_t)L_63) < ((int32_t)L_64)))
		{
			goto IL_00c7;
		}
	}
	{
		// Bone[] skeletonBones = slot.bone.skeleton.bones.Items;
		Slot_t754D2EC8AE03CF765F34A909762BE4E533BEF635 * L_65 = ___slot0;
		Bone_t6DA0B82485BED2E4EEE864AAD607EEBDC2F98AAF * L_66 = L_65->get_bone_1();
		Skeleton_tA4F63D1CB185D30296FA5323E1DA8B993E21293C * L_67 = L_66->get_skeleton_2();
		ExposedList_1_t4F66E6448150D0CAC1BD8C1A4810A7CEB844B164 * L_68 = L_67->get_bones_1();
		BoneU5BU5D_t77D01946B97A0778AD79515B28F1C30BDBED3A23* L_69 = L_68->get_Items_0();
		V_5 = L_69;
		// if (deformArray.Count == 0) {
		ExposedList_1_t9F8622C73EB60A6882B2968C1C0F1706D574F526 * L_70 = V_0;
		int32_t L_71 = L_70->get_Count_1();
		if (L_71)
		{
			goto IL_01cc;
		}
	}
	{
		// for (int w = offset, b = skip * 3; w < count; w += stride) {
		int32_t L_72 = ___offset4;
		V_18 = L_72;
		// for (int w = offset, b = skip * 3; w < count; w += stride) {
		int32_t L_73 = V_4;
		V_19 = ((int32_t)il2cpp_codegen_multiply((int32_t)L_73, (int32_t)3));
		goto IL_01c3;
	}

IL_0116:
	{
		// float wx = 0, wy = 0;
		V_20 = (0.0f);
		// float wx = 0, wy = 0;
		V_21 = (0.0f);
		// int n = bones[v++];
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_74 = V_2;
		int32_t L_75 = V_3;
		int32_t L_76 = L_75;
		V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_76, (int32_t)1));
		int32_t L_77 = L_76;
		int32_t L_78 = (L_74)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_77));
		V_22 = L_78;
		// n += v;
		int32_t L_79 = V_22;
		int32_t L_80 = V_3;
		V_22 = ((int32_t)il2cpp_codegen_add((int32_t)L_79, (int32_t)L_80));
		goto IL_01a7;
	}

IL_0135:
	{
		// Bone bone = skeletonBones[bones[v]];
		BoneU5BU5D_t77D01946B97A0778AD79515B28F1C30BDBED3A23* L_81 = V_5;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_82 = V_2;
		int32_t L_83 = V_3;
		int32_t L_84 = L_83;
		int32_t L_85 = (L_82)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_84));
		int32_t L_86 = L_85;
		Bone_t6DA0B82485BED2E4EEE864AAD607EEBDC2F98AAF * L_87 = (L_81)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_86));
		V_23 = L_87;
		// float vx = vertices[b], vy = vertices[b + 1], weight = vertices[b + 2];
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_88 = V_1;
		int32_t L_89 = V_19;
		int32_t L_90 = L_89;
		float L_91 = (L_88)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_90));
		V_24 = L_91;
		// float vx = vertices[b], vy = vertices[b + 1], weight = vertices[b + 2];
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_92 = V_1;
		int32_t L_93 = V_19;
		int32_t L_94 = ((int32_t)il2cpp_codegen_add((int32_t)L_93, (int32_t)1));
		float L_95 = (L_92)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_94));
		V_25 = L_95;
		// float vx = vertices[b], vy = vertices[b + 1], weight = vertices[b + 2];
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_96 = V_1;
		int32_t L_97 = V_19;
		int32_t L_98 = ((int32_t)il2cpp_codegen_add((int32_t)L_97, (int32_t)2));
		float L_99 = (L_96)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_98));
		V_26 = L_99;
		// wx += (vx * bone.a + vy * bone.b + bone.worldX) * weight;
		float L_100 = V_20;
		float L_101 = V_24;
		Bone_t6DA0B82485BED2E4EEE864AAD607EEBDC2F98AAF * L_102 = V_23;
		float L_103 = L_102->get_a_19();
		float L_104 = V_25;
		Bone_t6DA0B82485BED2E4EEE864AAD607EEBDC2F98AAF * L_105 = V_23;
		float L_106 = L_105->get_b_20();
		Bone_t6DA0B82485BED2E4EEE864AAD607EEBDC2F98AAF * L_107 = V_23;
		float L_108 = L_107->get_worldX_21();
		float L_109 = V_26;
		V_20 = ((float)il2cpp_codegen_add((float)L_100, (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_multiply((float)L_101, (float)L_103)), (float)((float)il2cpp_codegen_multiply((float)L_104, (float)L_106)))), (float)L_108)), (float)L_109))));
		// wy += (vx * bone.c + vy * bone.d + bone.worldY) * weight;
		float L_110 = V_21;
		float L_111 = V_24;
		Bone_t6DA0B82485BED2E4EEE864AAD607EEBDC2F98AAF * L_112 = V_23;
		float L_113 = L_112->get_c_22();
		float L_114 = V_25;
		Bone_t6DA0B82485BED2E4EEE864AAD607EEBDC2F98AAF * L_115 = V_23;
		float L_116 = L_115->get_d_23();
		Bone_t6DA0B82485BED2E4EEE864AAD607EEBDC2F98AAF * L_117 = V_23;
		float L_118 = L_117->get_worldY_24();
		float L_119 = V_26;
		V_21 = ((float)il2cpp_codegen_add((float)L_110, (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_multiply((float)L_111, (float)L_113)), (float)((float)il2cpp_codegen_multiply((float)L_114, (float)L_116)))), (float)L_118)), (float)L_119))));
		// for (; v < n; v++, b += 3) {
		int32_t L_120 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_120, (int32_t)1));
		// for (; v < n; v++, b += 3) {
		int32_t L_121 = V_19;
		V_19 = ((int32_t)il2cpp_codegen_add((int32_t)L_121, (int32_t)3));
	}

IL_01a7:
	{
		// for (; v < n; v++, b += 3) {
		int32_t L_122 = V_3;
		int32_t L_123 = V_22;
		if ((((int32_t)L_122) < ((int32_t)L_123)))
		{
			goto IL_0135;
		}
	}
	{
		// worldVertices[w] = wx;
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_124 = ___worldVertices3;
		int32_t L_125 = V_18;
		float L_126 = V_20;
		(L_124)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_125), (float)L_126);
		// worldVertices[w + 1] = wy;
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_127 = ___worldVertices3;
		int32_t L_128 = V_18;
		float L_129 = V_21;
		(L_127)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add((int32_t)L_128, (int32_t)1))), (float)L_129);
		// for (int w = offset, b = skip * 3; w < count; w += stride) {
		int32_t L_130 = V_18;
		int32_t L_131 = ___stride5;
		V_18 = ((int32_t)il2cpp_codegen_add((int32_t)L_130, (int32_t)L_131));
	}

IL_01c3:
	{
		// for (int w = offset, b = skip * 3; w < count; w += stride) {
		int32_t L_132 = V_18;
		int32_t L_133 = ___count2;
		if ((((int32_t)L_132) < ((int32_t)L_133)))
		{
			goto IL_0116;
		}
	}
	{
		// } else {
		return;
	}

IL_01cc:
	{
		// float[] deform = deformArray.Items;
		ExposedList_1_t9F8622C73EB60A6882B2968C1C0F1706D574F526 * L_134 = V_0;
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_135 = L_134->get_Items_0();
		V_27 = L_135;
		// for (int w = offset, b = skip * 3, f = skip << 1; w < count; w += stride) {
		int32_t L_136 = ___offset4;
		V_28 = L_136;
		// for (int w = offset, b = skip * 3, f = skip << 1; w < count; w += stride) {
		int32_t L_137 = V_4;
		V_29 = ((int32_t)il2cpp_codegen_multiply((int32_t)L_137, (int32_t)3));
		// for (int w = offset, b = skip * 3, f = skip << 1; w < count; w += stride) {
		int32_t L_138 = V_4;
		V_30 = ((int32_t)((int32_t)L_138<<(int32_t)1));
		goto IL_02b0;
	}

IL_01e9:
	{
		// float wx = 0, wy = 0;
		V_31 = (0.0f);
		// float wx = 0, wy = 0;
		V_32 = (0.0f);
		// int n = bones[v++];
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_139 = V_2;
		int32_t L_140 = V_3;
		int32_t L_141 = L_140;
		V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_141, (int32_t)1));
		int32_t L_142 = L_141;
		int32_t L_143 = (L_139)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_142));
		V_33 = L_143;
		// n += v;
		int32_t L_144 = V_33;
		int32_t L_145 = V_3;
		V_33 = ((int32_t)il2cpp_codegen_add((int32_t)L_144, (int32_t)L_145));
		goto IL_0291;
	}

IL_020b:
	{
		// Bone bone = skeletonBones[bones[v]];
		BoneU5BU5D_t77D01946B97A0778AD79515B28F1C30BDBED3A23* L_146 = V_5;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_147 = V_2;
		int32_t L_148 = V_3;
		int32_t L_149 = L_148;
		int32_t L_150 = (L_147)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_149));
		int32_t L_151 = L_150;
		Bone_t6DA0B82485BED2E4EEE864AAD607EEBDC2F98AAF * L_152 = (L_146)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_151));
		V_34 = L_152;
		// float vx = vertices[b] + deform[f], vy = vertices[b + 1] + deform[f + 1], weight = vertices[b + 2];
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_153 = V_1;
		int32_t L_154 = V_29;
		int32_t L_155 = L_154;
		float L_156 = (L_153)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_155));
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_157 = V_27;
		int32_t L_158 = V_30;
		int32_t L_159 = L_158;
		float L_160 = (L_157)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_159));
		V_35 = ((float)il2cpp_codegen_add((float)L_156, (float)L_160));
		// float vx = vertices[b] + deform[f], vy = vertices[b + 1] + deform[f + 1], weight = vertices[b + 2];
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_161 = V_1;
		int32_t L_162 = V_29;
		int32_t L_163 = ((int32_t)il2cpp_codegen_add((int32_t)L_162, (int32_t)1));
		float L_164 = (L_161)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_163));
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_165 = V_27;
		int32_t L_166 = V_30;
		int32_t L_167 = ((int32_t)il2cpp_codegen_add((int32_t)L_166, (int32_t)1));
		float L_168 = (L_165)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_167));
		V_36 = ((float)il2cpp_codegen_add((float)L_164, (float)L_168));
		// float vx = vertices[b] + deform[f], vy = vertices[b + 1] + deform[f + 1], weight = vertices[b + 2];
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_169 = V_1;
		int32_t L_170 = V_29;
		int32_t L_171 = ((int32_t)il2cpp_codegen_add((int32_t)L_170, (int32_t)2));
		float L_172 = (L_169)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_171));
		V_37 = L_172;
		// wx += (vx * bone.a + vy * bone.b + bone.worldX) * weight;
		float L_173 = V_31;
		float L_174 = V_35;
		Bone_t6DA0B82485BED2E4EEE864AAD607EEBDC2F98AAF * L_175 = V_34;
		float L_176 = L_175->get_a_19();
		float L_177 = V_36;
		Bone_t6DA0B82485BED2E4EEE864AAD607EEBDC2F98AAF * L_178 = V_34;
		float L_179 = L_178->get_b_20();
		Bone_t6DA0B82485BED2E4EEE864AAD607EEBDC2F98AAF * L_180 = V_34;
		float L_181 = L_180->get_worldX_21();
		float L_182 = V_37;
		V_31 = ((float)il2cpp_codegen_add((float)L_173, (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_multiply((float)L_174, (float)L_176)), (float)((float)il2cpp_codegen_multiply((float)L_177, (float)L_179)))), (float)L_181)), (float)L_182))));
		// wy += (vx * bone.c + vy * bone.d + bone.worldY) * weight;
		float L_183 = V_32;
		float L_184 = V_35;
		Bone_t6DA0B82485BED2E4EEE864AAD607EEBDC2F98AAF * L_185 = V_34;
		float L_186 = L_185->get_c_22();
		float L_187 = V_36;
		Bone_t6DA0B82485BED2E4EEE864AAD607EEBDC2F98AAF * L_188 = V_34;
		float L_189 = L_188->get_d_23();
		Bone_t6DA0B82485BED2E4EEE864AAD607EEBDC2F98AAF * L_190 = V_34;
		float L_191 = L_190->get_worldY_24();
		float L_192 = V_37;
		V_32 = ((float)il2cpp_codegen_add((float)L_183, (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_multiply((float)L_184, (float)L_186)), (float)((float)il2cpp_codegen_multiply((float)L_187, (float)L_189)))), (float)L_191)), (float)L_192))));
		// for (; v < n; v++, b += 3, f += 2) {
		int32_t L_193 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_193, (int32_t)1));
		// for (; v < n; v++, b += 3, f += 2) {
		int32_t L_194 = V_29;
		V_29 = ((int32_t)il2cpp_codegen_add((int32_t)L_194, (int32_t)3));
		// for (; v < n; v++, b += 3, f += 2) {
		int32_t L_195 = V_30;
		V_30 = ((int32_t)il2cpp_codegen_add((int32_t)L_195, (int32_t)2));
	}

IL_0291:
	{
		// for (; v < n; v++, b += 3, f += 2) {
		int32_t L_196 = V_3;
		int32_t L_197 = V_33;
		if ((((int32_t)L_196) < ((int32_t)L_197)))
		{
			goto IL_020b;
		}
	}
	{
		// worldVertices[w] = wx;
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_198 = ___worldVertices3;
		int32_t L_199 = V_28;
		float L_200 = V_31;
		(L_198)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_199), (float)L_200);
		// worldVertices[w + 1] = wy;
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_201 = ___worldVertices3;
		int32_t L_202 = V_28;
		float L_203 = V_32;
		(L_201)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add((int32_t)L_202, (int32_t)1))), (float)L_203);
		// for (int w = offset, b = skip * 3, f = skip << 1; w < count; w += stride) {
		int32_t L_204 = V_28;
		int32_t L_205 = ___stride5;
		V_28 = ((int32_t)il2cpp_codegen_add((int32_t)L_204, (int32_t)L_205));
	}

IL_02b0:
	{
		// for (int w = offset, b = skip * 3, f = skip << 1; w < count; w += stride) {
		int32_t L_206 = V_28;
		int32_t L_207 = ___count2;
		if ((((int32_t)L_206) < ((int32_t)L_207)))
		{
			goto IL_01e9;
		}
	}
	{
		// }
		return;
	}
}
// System.Void Spine.VertexAttachment::CopyTo(Spine.VertexAttachment)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VertexAttachment_CopyTo_m6DBBC9D6CE4A29C2C0BC74E16EBCBAD212E9CA59 (VertexAttachment_t9CE5B53FEDF378FFCADECD92F0ABF5F1DFDFFF36 * __this, VertexAttachment_t9CE5B53FEDF378FFCADECD92F0ABF5F1DFDFFF36 * ___attachment0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (bones != null) {
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_0 = __this->get_bones_4();
		if (!L_0)
		{
			goto IL_0038;
		}
	}
	{
		// attachment.bones = new int[bones.Length];
		VertexAttachment_t9CE5B53FEDF378FFCADECD92F0ABF5F1DFDFFF36 * L_1 = ___attachment0;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_2 = __this->get_bones_4();
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_3 = (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)SZArrayNew(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32_il2cpp_TypeInfo_var, (uint32_t)((int32_t)((int32_t)(((RuntimeArray*)L_2)->max_length))));
		L_1->set_bones_4(L_3);
		// Array.Copy(bones, 0, attachment.bones, 0, bones.Length);
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_4 = __this->get_bones_4();
		VertexAttachment_t9CE5B53FEDF378FFCADECD92F0ABF5F1DFDFFF36 * L_5 = ___attachment0;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_6 = L_5->get_bones_4();
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_7 = __this->get_bones_4();
		Array_Copy_m3F127FFB5149532135043FFE285F9177C80CB877((RuntimeArray *)(RuntimeArray *)L_4, 0, (RuntimeArray *)(RuntimeArray *)L_6, 0, ((int32_t)((int32_t)(((RuntimeArray*)L_7)->max_length))), /*hidden argument*/NULL);
		// } else
		goto IL_003f;
	}

IL_0038:
	{
		// attachment.bones = null;
		VertexAttachment_t9CE5B53FEDF378FFCADECD92F0ABF5F1DFDFFF36 * L_8 = ___attachment0;
		L_8->set_bones_4((Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)NULL);
	}

IL_003f:
	{
		// if (vertices != null) {
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_9 = __this->get_vertices_5();
		if (!L_9)
		{
			goto IL_0077;
		}
	}
	{
		// attachment.vertices = new float[vertices.Length];
		VertexAttachment_t9CE5B53FEDF378FFCADECD92F0ABF5F1DFDFFF36 * L_10 = ___attachment0;
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_11 = __this->get_vertices_5();
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_12 = (SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA*)(SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA*)SZArrayNew(SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA_il2cpp_TypeInfo_var, (uint32_t)((int32_t)((int32_t)(((RuntimeArray*)L_11)->max_length))));
		L_10->set_vertices_5(L_12);
		// Array.Copy(vertices, 0, attachment.vertices, 0, vertices.Length);
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_13 = __this->get_vertices_5();
		VertexAttachment_t9CE5B53FEDF378FFCADECD92F0ABF5F1DFDFFF36 * L_14 = ___attachment0;
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_15 = L_14->get_vertices_5();
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_16 = __this->get_vertices_5();
		Array_Copy_m3F127FFB5149532135043FFE285F9177C80CB877((RuntimeArray *)(RuntimeArray *)L_13, 0, (RuntimeArray *)(RuntimeArray *)L_15, 0, ((int32_t)((int32_t)(((RuntimeArray*)L_16)->max_length))), /*hidden argument*/NULL);
		// } else
		goto IL_007e;
	}

IL_0077:
	{
		// attachment.vertices = null;
		VertexAttachment_t9CE5B53FEDF378FFCADECD92F0ABF5F1DFDFFF36 * L_17 = ___attachment0;
		L_17->set_vertices_5((SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA*)NULL);
	}

IL_007e:
	{
		// attachment.worldVerticesLength = worldVerticesLength;
		VertexAttachment_t9CE5B53FEDF378FFCADECD92F0ABF5F1DFDFFF36 * L_18 = ___attachment0;
		int32_t L_19 = __this->get_worldVerticesLength_6();
		L_18->set_worldVerticesLength_6(L_19);
		// attachment.deformAttachment = deformAttachment;
		VertexAttachment_t9CE5B53FEDF378FFCADECD92F0ABF5F1DFDFFF36 * L_20 = ___attachment0;
		VertexAttachment_t9CE5B53FEDF378FFCADECD92F0ABF5F1DFDFFF36 * L_21 = __this->get_deformAttachment_7();
		L_20->set_deformAttachment_7(L_21);
		// }
		return;
	}
}
// System.Void Spine.VertexAttachment::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VertexAttachment__cctor_m99F0DED22211ECD9A50558D2F0D1E5759944504B (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VertexAttachment_t9CE5B53FEDF378FFCADECD92F0ABF5F1DFDFFF36_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// static int nextID = 0;
		((VertexAttachment_t9CE5B53FEDF378FFCADECD92F0ABF5F1DFDFFF36_StaticFields*)il2cpp_codegen_static_fields_for(VertexAttachment_t9CE5B53FEDF378FFCADECD92F0ABF5F1DFDFFF36_il2cpp_TypeInfo_var))->set_nextID_1(0);
		// static readonly Object nextIdLock = new Object();
		RuntimeObject * L_0 = (RuntimeObject *)il2cpp_codegen_object_new(RuntimeObject_il2cpp_TypeInfo_var);
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(L_0, /*hidden argument*/NULL);
		((VertexAttachment_t9CE5B53FEDF378FFCADECD92F0ABF5F1DFDFFF36_StaticFields*)il2cpp_codegen_static_fields_for(VertexAttachment_t9CE5B53FEDF378FFCADECD92F0ABF5F1DFDFFF36_il2cpp_TypeInfo_var))->set_nextIdLock_2(L_0);
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Spine.AnimationState/TrackEntryDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrackEntryDelegate__ctor_m5F931DA2A3726E2F71C9EB806A75264F2556B28C (TrackEntryDelegate_tE20D505FE9CFC9735D82442FC79C9929AC558EDB * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void Spine.AnimationState/TrackEntryDelegate::Invoke(Spine.TrackEntry)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrackEntryDelegate_Invoke_mD30F8BAAFDB3B08D813CE67962C9239969E63570 (TrackEntryDelegate_tE20D505FE9CFC9735D82442FC79C9929AC558EDB * __this, TrackEntry_t8B6FF31E96FE5CFBE3B92DC9E4FB33766342A20D * ___trackEntry0, const RuntimeMethod* method)
{
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 1)
			{
				// open
				typedef void (*FunctionPointerType) (TrackEntry_t8B6FF31E96FE5CFBE3B92DC9E4FB33766342A20D *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___trackEntry0, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, TrackEntry_t8B6FF31E96FE5CFBE3B92DC9E4FB33766342A20D *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___trackEntry0, targetMethod);
			}
		}
		else if (___parameterCount != 1)
		{
			// open
			if (il2cpp_codegen_method_is_virtual(targetMethod) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker0::Invoke(targetMethod, ___trackEntry0);
					else
						GenericVirtActionInvoker0::Invoke(targetMethod, ___trackEntry0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), ___trackEntry0);
					else
						VirtActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), ___trackEntry0);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (TrackEntry_t8B6FF31E96FE5CFBE3B92DC9E4FB33766342A20D *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___trackEntry0, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis != NULL && il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker1< TrackEntry_t8B6FF31E96FE5CFBE3B92DC9E4FB33766342A20D * >::Invoke(targetMethod, targetThis, ___trackEntry0);
					else
						GenericVirtActionInvoker1< TrackEntry_t8B6FF31E96FE5CFBE3B92DC9E4FB33766342A20D * >::Invoke(targetMethod, targetThis, ___trackEntry0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker1< TrackEntry_t8B6FF31E96FE5CFBE3B92DC9E4FB33766342A20D * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___trackEntry0);
					else
						VirtActionInvoker1< TrackEntry_t8B6FF31E96FE5CFBE3B92DC9E4FB33766342A20D * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___trackEntry0);
				}
			}
			else
			{
				if (targetThis == NULL)
				{
					typedef void (*FunctionPointerType) (TrackEntry_t8B6FF31E96FE5CFBE3B92DC9E4FB33766342A20D *, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(___trackEntry0, targetMethod);
				}
				else
				{
					typedef void (*FunctionPointerType) (void*, TrackEntry_t8B6FF31E96FE5CFBE3B92DC9E4FB33766342A20D *, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___trackEntry0, targetMethod);
				}
			}
		}
	}
}
// System.IAsyncResult Spine.AnimationState/TrackEntryDelegate::BeginInvoke(Spine.TrackEntry,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TrackEntryDelegate_BeginInvoke_m4828159942238D91055853BE22CFA27DC46412E7 (TrackEntryDelegate_tE20D505FE9CFC9735D82442FC79C9929AC558EDB * __this, TrackEntry_t8B6FF31E96FE5CFBE3B92DC9E4FB33766342A20D * ___trackEntry0, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback1, RuntimeObject * ___object2, const RuntimeMethod* method)
{
	void *__d_args[2] = {0};
	__d_args[0] = ___trackEntry0;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);;
}
// System.Void Spine.AnimationState/TrackEntryDelegate::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrackEntryDelegate_EndInvoke_mFCA56D69E9A20B9510FDB29C6BAA15CEABD8FFE8 (TrackEntryDelegate_tE20D505FE9CFC9735D82442FC79C9929AC558EDB * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Spine.AnimationState/TrackEntryEventDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrackEntryEventDelegate__ctor_mC5B3EC14B70B0563D3B6F092E075690F174F9C1E (TrackEntryEventDelegate_tF5188922CE4C62057833CF70701CB67AD0460A2E * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void Spine.AnimationState/TrackEntryEventDelegate::Invoke(Spine.TrackEntry,Spine.Event)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrackEntryEventDelegate_Invoke_mE5B89E1D81981A0F3E0AE6A91202504498232DAB (TrackEntryEventDelegate_tF5188922CE4C62057833CF70701CB67AD0460A2E * __this, TrackEntry_t8B6FF31E96FE5CFBE3B92DC9E4FB33766342A20D * ___trackEntry0, Event_tAB253EC43580D8724548C638BAB02EBB587A7957 * ___e1, const RuntimeMethod* method)
{
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 2)
			{
				// open
				typedef void (*FunctionPointerType) (TrackEntry_t8B6FF31E96FE5CFBE3B92DC9E4FB33766342A20D *, Event_tAB253EC43580D8724548C638BAB02EBB587A7957 *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___trackEntry0, ___e1, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, TrackEntry_t8B6FF31E96FE5CFBE3B92DC9E4FB33766342A20D *, Event_tAB253EC43580D8724548C638BAB02EBB587A7957 *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___trackEntry0, ___e1, targetMethod);
			}
		}
		else if (___parameterCount != 2)
		{
			// open
			if (il2cpp_codegen_method_is_virtual(targetMethod) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker1< Event_tAB253EC43580D8724548C638BAB02EBB587A7957 * >::Invoke(targetMethod, ___trackEntry0, ___e1);
					else
						GenericVirtActionInvoker1< Event_tAB253EC43580D8724548C638BAB02EBB587A7957 * >::Invoke(targetMethod, ___trackEntry0, ___e1);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker1< Event_tAB253EC43580D8724548C638BAB02EBB587A7957 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), ___trackEntry0, ___e1);
					else
						VirtActionInvoker1< Event_tAB253EC43580D8724548C638BAB02EBB587A7957 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), ___trackEntry0, ___e1);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (TrackEntry_t8B6FF31E96FE5CFBE3B92DC9E4FB33766342A20D *, Event_tAB253EC43580D8724548C638BAB02EBB587A7957 *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___trackEntry0, ___e1, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis != NULL && il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker2< TrackEntry_t8B6FF31E96FE5CFBE3B92DC9E4FB33766342A20D *, Event_tAB253EC43580D8724548C638BAB02EBB587A7957 * >::Invoke(targetMethod, targetThis, ___trackEntry0, ___e1);
					else
						GenericVirtActionInvoker2< TrackEntry_t8B6FF31E96FE5CFBE3B92DC9E4FB33766342A20D *, Event_tAB253EC43580D8724548C638BAB02EBB587A7957 * >::Invoke(targetMethod, targetThis, ___trackEntry0, ___e1);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker2< TrackEntry_t8B6FF31E96FE5CFBE3B92DC9E4FB33766342A20D *, Event_tAB253EC43580D8724548C638BAB02EBB587A7957 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___trackEntry0, ___e1);
					else
						VirtActionInvoker2< TrackEntry_t8B6FF31E96FE5CFBE3B92DC9E4FB33766342A20D *, Event_tAB253EC43580D8724548C638BAB02EBB587A7957 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___trackEntry0, ___e1);
				}
			}
			else
			{
				if (targetThis == NULL)
				{
					typedef void (*FunctionPointerType) (TrackEntry_t8B6FF31E96FE5CFBE3B92DC9E4FB33766342A20D *, Event_tAB253EC43580D8724548C638BAB02EBB587A7957 *, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(___trackEntry0, ___e1, targetMethod);
				}
				else
				{
					typedef void (*FunctionPointerType) (void*, TrackEntry_t8B6FF31E96FE5CFBE3B92DC9E4FB33766342A20D *, Event_tAB253EC43580D8724548C638BAB02EBB587A7957 *, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___trackEntry0, ___e1, targetMethod);
				}
			}
		}
	}
}
// System.IAsyncResult Spine.AnimationState/TrackEntryEventDelegate::BeginInvoke(Spine.TrackEntry,Spine.Event,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TrackEntryEventDelegate_BeginInvoke_m48DED27CB7F6800B122F492DA1EC3F40EE768E46 (TrackEntryEventDelegate_tF5188922CE4C62057833CF70701CB67AD0460A2E * __this, TrackEntry_t8B6FF31E96FE5CFBE3B92DC9E4FB33766342A20D * ___trackEntry0, Event_tAB253EC43580D8724548C638BAB02EBB587A7957 * ___e1, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback2, RuntimeObject * ___object3, const RuntimeMethod* method)
{
	void *__d_args[3] = {0};
	__d_args[0] = ___trackEntry0;
	__d_args[1] = ___e1;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback2, (RuntimeObject*)___object3);;
}
// System.Void Spine.AnimationState/TrackEntryEventDelegate::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrackEntryEventDelegate_EndInvoke_m0476F457AC29E9CFC62CA331D1A4402F3CAC9F32 (TrackEntryEventDelegate_tF5188922CE4C62057833CF70701CB67AD0460A2E * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Conversion methods for marshalling of: Spine.AnimationStateData/AnimationPair
IL2CPP_EXTERN_C void AnimationPair_t2A53EA37F4B1C93E6BBB0F04E2632819498E92E9_marshal_pinvoke(const AnimationPair_t2A53EA37F4B1C93E6BBB0F04E2632819498E92E9& unmarshaled, AnimationPair_t2A53EA37F4B1C93E6BBB0F04E2632819498E92E9_marshaled_pinvoke& marshaled)
{
	Exception_t* ___a1_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'a1' of type 'AnimationPair': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___a1_0Exception, NULL);
}
IL2CPP_EXTERN_C void AnimationPair_t2A53EA37F4B1C93E6BBB0F04E2632819498E92E9_marshal_pinvoke_back(const AnimationPair_t2A53EA37F4B1C93E6BBB0F04E2632819498E92E9_marshaled_pinvoke& marshaled, AnimationPair_t2A53EA37F4B1C93E6BBB0F04E2632819498E92E9& unmarshaled)
{
	Exception_t* ___a1_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'a1' of type 'AnimationPair': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___a1_0Exception, NULL);
}
// Conversion method for clean up from marshalling of: Spine.AnimationStateData/AnimationPair
IL2CPP_EXTERN_C void AnimationPair_t2A53EA37F4B1C93E6BBB0F04E2632819498E92E9_marshal_pinvoke_cleanup(AnimationPair_t2A53EA37F4B1C93E6BBB0F04E2632819498E92E9_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: Spine.AnimationStateData/AnimationPair
IL2CPP_EXTERN_C void AnimationPair_t2A53EA37F4B1C93E6BBB0F04E2632819498E92E9_marshal_com(const AnimationPair_t2A53EA37F4B1C93E6BBB0F04E2632819498E92E9& unmarshaled, AnimationPair_t2A53EA37F4B1C93E6BBB0F04E2632819498E92E9_marshaled_com& marshaled)
{
	Exception_t* ___a1_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'a1' of type 'AnimationPair': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___a1_0Exception, NULL);
}
IL2CPP_EXTERN_C void AnimationPair_t2A53EA37F4B1C93E6BBB0F04E2632819498E92E9_marshal_com_back(const AnimationPair_t2A53EA37F4B1C93E6BBB0F04E2632819498E92E9_marshaled_com& marshaled, AnimationPair_t2A53EA37F4B1C93E6BBB0F04E2632819498E92E9& unmarshaled)
{
	Exception_t* ___a1_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'a1' of type 'AnimationPair': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___a1_0Exception, NULL);
}
// Conversion method for clean up from marshalling of: Spine.AnimationStateData/AnimationPair
IL2CPP_EXTERN_C void AnimationPair_t2A53EA37F4B1C93E6BBB0F04E2632819498E92E9_marshal_com_cleanup(AnimationPair_t2A53EA37F4B1C93E6BBB0F04E2632819498E92E9_marshaled_com& marshaled)
{
}
// System.Void Spine.AnimationStateData/AnimationPair::.ctor(Spine.Animation,Spine.Animation)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimationPair__ctor_m74829679B461CA503FC742ED9C15CFAC3E011116 (AnimationPair_t2A53EA37F4B1C93E6BBB0F04E2632819498E92E9 * __this, Animation_tE800D5597964656F48F303755E4C6C66462E8E90 * ___a10, Animation_tE800D5597964656F48F303755E4C6C66462E8E90 * ___a21, const RuntimeMethod* method)
{
	{
		// this.a1 = a1;
		Animation_tE800D5597964656F48F303755E4C6C66462E8E90 * L_0 = ___a10;
		__this->set_a1_0(L_0);
		// this.a2 = a2;
		Animation_tE800D5597964656F48F303755E4C6C66462E8E90 * L_1 = ___a21;
		__this->set_a2_1(L_1);
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void AnimationPair__ctor_m74829679B461CA503FC742ED9C15CFAC3E011116_AdjustorThunk (RuntimeObject * __this, Animation_tE800D5597964656F48F303755E4C6C66462E8E90 * ___a10, Animation_tE800D5597964656F48F303755E4C6C66462E8E90 * ___a21, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	AnimationPair_t2A53EA37F4B1C93E6BBB0F04E2632819498E92E9 * _thisAdjusted = reinterpret_cast<AnimationPair_t2A53EA37F4B1C93E6BBB0F04E2632819498E92E9 *>(__this + _offset);
	AnimationPair__ctor_m74829679B461CA503FC742ED9C15CFAC3E011116(_thisAdjusted, ___a10, ___a21, method);
}
// System.String Spine.AnimationStateData/AnimationPair::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AnimationPair_ToString_mF05A63E1FCE6F3B07BFB840B7DD87B72C106B167 (AnimationPair_t2A53EA37F4B1C93E6BBB0F04E2632819498E92E9 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3860603B88C3C33FCEFF25F72FA3E650D2B25876);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return a1.name + "->" + a2.name;
		Animation_tE800D5597964656F48F303755E4C6C66462E8E90 * L_0 = __this->get_a1_0();
		String_t* L_1 = L_0->get_name_0();
		Animation_tE800D5597964656F48F303755E4C6C66462E8E90 * L_2 = __this->get_a2_1();
		String_t* L_3 = L_2->get_name_0();
		String_t* L_4;
		L_4 = String_Concat_m89EAB4C6A96B0E5C3F87300D6BE78D386B9EFC44(L_1, _stringLiteral3860603B88C3C33FCEFF25F72FA3E650D2B25876, L_3, /*hidden argument*/NULL);
		return L_4;
	}
}
IL2CPP_EXTERN_C  String_t* AnimationPair_ToString_mF05A63E1FCE6F3B07BFB840B7DD87B72C106B167_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	AnimationPair_t2A53EA37F4B1C93E6BBB0F04E2632819498E92E9 * _thisAdjusted = reinterpret_cast<AnimationPair_t2A53EA37F4B1C93E6BBB0F04E2632819498E92E9 *>(__this + _offset);
	String_t* _returnValue;
	_returnValue = AnimationPair_ToString_mF05A63E1FCE6F3B07BFB840B7DD87B72C106B167(_thisAdjusted, method);
	return _returnValue;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Boolean Spine.AnimationStateData/AnimationPairComparer::System.Collections.Generic.IEqualityComparer<Spine.AnimationStateData.AnimationPair>.Equals(Spine.AnimationStateData/AnimationPair,Spine.AnimationStateData/AnimationPair)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AnimationPairComparer_System_Collections_Generic_IEqualityComparerU3CSpine_AnimationStateData_AnimationPairU3E_Equals_m6218E99A946B90A355BA5A746886444800E321BE (AnimationPairComparer_tCF4856346F6E3F6713561B39646846CE27877BE3 * __this, AnimationPair_t2A53EA37F4B1C93E6BBB0F04E2632819498E92E9  ___x0, AnimationPair_t2A53EA37F4B1C93E6BBB0F04E2632819498E92E9  ___y1, const RuntimeMethod* method)
{
	{
		// return ReferenceEquals(x.a1, y.a1) && ReferenceEquals(x.a2, y.a2);
		AnimationPair_t2A53EA37F4B1C93E6BBB0F04E2632819498E92E9  L_0 = ___x0;
		Animation_tE800D5597964656F48F303755E4C6C66462E8E90 * L_1 = L_0.get_a1_0();
		AnimationPair_t2A53EA37F4B1C93E6BBB0F04E2632819498E92E9  L_2 = ___y1;
		Animation_tE800D5597964656F48F303755E4C6C66462E8E90 * L_3 = L_2.get_a1_0();
		if ((!(((RuntimeObject*)(Animation_tE800D5597964656F48F303755E4C6C66462E8E90 *)L_1) == ((RuntimeObject*)(Animation_tE800D5597964656F48F303755E4C6C66462E8E90 *)L_3))))
		{
			goto IL_001d;
		}
	}
	{
		AnimationPair_t2A53EA37F4B1C93E6BBB0F04E2632819498E92E9  L_4 = ___x0;
		Animation_tE800D5597964656F48F303755E4C6C66462E8E90 * L_5 = L_4.get_a2_1();
		AnimationPair_t2A53EA37F4B1C93E6BBB0F04E2632819498E92E9  L_6 = ___y1;
		Animation_tE800D5597964656F48F303755E4C6C66462E8E90 * L_7 = L_6.get_a2_1();
		return (bool)((((RuntimeObject*)(Animation_tE800D5597964656F48F303755E4C6C66462E8E90 *)L_5) == ((RuntimeObject*)(Animation_tE800D5597964656F48F303755E4C6C66462E8E90 *)L_7))? 1 : 0);
	}

IL_001d:
	{
		return (bool)0;
	}
}
// System.Int32 Spine.AnimationStateData/AnimationPairComparer::System.Collections.Generic.IEqualityComparer<Spine.AnimationStateData.AnimationPair>.GetHashCode(Spine.AnimationStateData/AnimationPair)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AnimationPairComparer_System_Collections_Generic_IEqualityComparerU3CSpine_AnimationStateData_AnimationPairU3E_GetHashCode_mB082D2D8D732EEF8F6A36F254D53E003BF3A397B (AnimationPairComparer_tCF4856346F6E3F6713561B39646846CE27877BE3 * __this, AnimationPair_t2A53EA37F4B1C93E6BBB0F04E2632819498E92E9  ___obj0, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		// int h1 = obj.a1.GetHashCode();
		AnimationPair_t2A53EA37F4B1C93E6BBB0F04E2632819498E92E9  L_0 = ___obj0;
		Animation_tE800D5597964656F48F303755E4C6C66462E8E90 * L_1 = L_0.get_a1_0();
		int32_t L_2;
		L_2 = VirtFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Object::GetHashCode() */, L_1);
		V_0 = L_2;
		// return (((h1 << 5) + h1) ^ obj.a2.GetHashCode());
		int32_t L_3 = V_0;
		int32_t L_4 = V_0;
		AnimationPair_t2A53EA37F4B1C93E6BBB0F04E2632819498E92E9  L_5 = ___obj0;
		Animation_tE800D5597964656F48F303755E4C6C66462E8E90 * L_6 = L_5.get_a2_1();
		int32_t L_7;
		L_7 = VirtFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Object::GetHashCode() */, L_6);
		return ((int32_t)((int32_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)((int32_t)L_3<<(int32_t)5)), (int32_t)L_4))^(int32_t)L_7));
	}
}
// System.Void Spine.AnimationStateData/AnimationPairComparer::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimationPairComparer__ctor_m2EFAE31FB362D087220453C686F54320B56D03CC (AnimationPairComparer_tCF4856346F6E3F6713561B39646846CE27877BE3 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Spine.AnimationStateData/AnimationPairComparer::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimationPairComparer__cctor_m97604A2A5827AECD0F4F598D04B4C46D11C1724C (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AnimationPairComparer_tCF4856346F6E3F6713561B39646846CE27877BE3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static readonly AnimationPairComparer Instance = new AnimationPairComparer();
		AnimationPairComparer_tCF4856346F6E3F6713561B39646846CE27877BE3 * L_0 = (AnimationPairComparer_tCF4856346F6E3F6713561B39646846CE27877BE3 *)il2cpp_codegen_object_new(AnimationPairComparer_tCF4856346F6E3F6713561B39646846CE27877BE3_il2cpp_TypeInfo_var);
		AnimationPairComparer__ctor_m2EFAE31FB362D087220453C686F54320B56D03CC(L_0, /*hidden argument*/NULL);
		((AnimationPairComparer_tCF4856346F6E3F6713561B39646846CE27877BE3_StaticFields*)il2cpp_codegen_static_fields_for(AnimationPairComparer_tCF4856346F6E3F6713561B39646846CE27877BE3_il2cpp_TypeInfo_var))->set_Instance_0(L_0);
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
// System.Void Spine.Atlas/<>c__DisplayClass10_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass10_0__ctor_mEEE7C5686211B46E447F923937752EC687104306 (U3CU3Ec__DisplayClass10_0_tBF5C29B31A8B06822C307D01647CD4603254F201 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Spine.Atlas/<>c__DisplayClass10_0::<.ctor>b__0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass10_0_U3C_ctorU3Eb__0_mF9C9A41AEB458A3C7D391773F8792E35400FD3D2 (U3CU3Ec__DisplayClass10_0_tBF5C29B31A8B06822C307D01647CD4603254F201 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// page.width = int.Parse(entry[1], CultureInfo.InvariantCulture);
		AtlasPage_t8A12ACC89F843E7F1869ADA9D82221D8298850F6 * L_0 = __this->get_page_0();
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_1 = __this->get_entry_1();
		int32_t L_2 = 1;
		String_t* L_3 = (L_1)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_2));
		IL2CPP_RUNTIME_CLASS_INIT(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_il2cpp_TypeInfo_var);
		CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * L_4;
		L_4 = CultureInfo_get_InvariantCulture_m9FAAFAF8A00091EE1FCB7098AD3F163ECDF02164(/*hidden argument*/NULL);
		int32_t L_5;
		L_5 = Int32_Parse_mCCC6B0A23CE31124F68EF486CC61705CDE61F084(L_3, L_4, /*hidden argument*/NULL);
		L_0->set_width_1(L_5);
		// page.height = int.Parse(entry[2], CultureInfo.InvariantCulture);
		AtlasPage_t8A12ACC89F843E7F1869ADA9D82221D8298850F6 * L_6 = __this->get_page_0();
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_7 = __this->get_entry_1();
		int32_t L_8 = 2;
		String_t* L_9 = (L_7)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_8));
		CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * L_10;
		L_10 = CultureInfo_get_InvariantCulture_m9FAAFAF8A00091EE1FCB7098AD3F163ECDF02164(/*hidden argument*/NULL);
		int32_t L_11;
		L_11 = Int32_Parse_mCCC6B0A23CE31124F68EF486CC61705CDE61F084(L_9, L_10, /*hidden argument*/NULL);
		L_6->set_height_2(L_11);
		// });
		return;
	}
}
// System.Void Spine.Atlas/<>c__DisplayClass10_0::<.ctor>b__1()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass10_0_U3C_ctorU3Eb__1_m1407DF7013AD944C10C7D41C39407FF53E2E4888 (U3CU3Ec__DisplayClass10_0_tBF5C29B31A8B06822C307D01647CD4603254F201 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enum_t23B90B40F60E677A8025267341651C94AE079CDA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Format_t8F8D5883A235562BAA8B3B43ABA6A4FDE251B476_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Format_t8F8D5883A235562BAA8B3B43ABA6A4FDE251B476_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// page.format = (Format)Enum.Parse(typeof(Format), entry[1], false);
		AtlasPage_t8A12ACC89F843E7F1869ADA9D82221D8298850F6 * L_0 = __this->get_page_0();
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_1 = { reinterpret_cast<intptr_t> (Format_t8F8D5883A235562BAA8B3B43ABA6A4FDE251B476_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_2;
		L_2 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_1, /*hidden argument*/NULL);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_3 = __this->get_entry_1();
		int32_t L_4 = 1;
		String_t* L_5 = (L_3)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_4));
		IL2CPP_RUNTIME_CLASS_INIT(Enum_t23B90B40F60E677A8025267341651C94AE079CDA_il2cpp_TypeInfo_var);
		RuntimeObject * L_6;
		L_6 = Enum_Parse_m42052064519239A11D605CD696EC0FD90A0FB039(L_2, L_5, (bool)0, /*hidden argument*/NULL);
		L_0->set_format_3(((*(int32_t*)((int32_t*)UnBox(L_6, Format_t8F8D5883A235562BAA8B3B43ABA6A4FDE251B476_il2cpp_TypeInfo_var)))));
		// });
		return;
	}
}
// System.Void Spine.Atlas/<>c__DisplayClass10_0::<.ctor>b__2()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass10_0_U3C_ctorU3Eb__2_m778967ADFD442AA9C16544FD562C90C3F0822C25 (U3CU3Ec__DisplayClass10_0_tBF5C29B31A8B06822C307D01647CD4603254F201 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enum_t23B90B40F60E677A8025267341651C94AE079CDA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TextureFilter_t3692D7DCDF68DB64AE7D5A1BEF324F2ACFEC1B07_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TextureFilter_t3692D7DCDF68DB64AE7D5A1BEF324F2ACFEC1B07_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// page.minFilter = (TextureFilter)Enum.Parse(typeof(TextureFilter), entry[1], false);
		AtlasPage_t8A12ACC89F843E7F1869ADA9D82221D8298850F6 * L_0 = __this->get_page_0();
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_1 = { reinterpret_cast<intptr_t> (TextureFilter_t3692D7DCDF68DB64AE7D5A1BEF324F2ACFEC1B07_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_2;
		L_2 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_1, /*hidden argument*/NULL);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_3 = __this->get_entry_1();
		int32_t L_4 = 1;
		String_t* L_5 = (L_3)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_4));
		IL2CPP_RUNTIME_CLASS_INIT(Enum_t23B90B40F60E677A8025267341651C94AE079CDA_il2cpp_TypeInfo_var);
		RuntimeObject * L_6;
		L_6 = Enum_Parse_m42052064519239A11D605CD696EC0FD90A0FB039(L_2, L_5, (bool)0, /*hidden argument*/NULL);
		L_0->set_minFilter_4(((*(int32_t*)((int32_t*)UnBox(L_6, TextureFilter_t3692D7DCDF68DB64AE7D5A1BEF324F2ACFEC1B07_il2cpp_TypeInfo_var)))));
		// page.magFilter = (TextureFilter)Enum.Parse(typeof(TextureFilter), entry[2], false);
		AtlasPage_t8A12ACC89F843E7F1869ADA9D82221D8298850F6 * L_7 = __this->get_page_0();
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_8 = { reinterpret_cast<intptr_t> (TextureFilter_t3692D7DCDF68DB64AE7D5A1BEF324F2ACFEC1B07_0_0_0_var) };
		Type_t * L_9;
		L_9 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_8, /*hidden argument*/NULL);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_10 = __this->get_entry_1();
		int32_t L_11 = 2;
		String_t* L_12 = (L_10)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_11));
		RuntimeObject * L_13;
		L_13 = Enum_Parse_m42052064519239A11D605CD696EC0FD90A0FB039(L_9, L_12, (bool)0, /*hidden argument*/NULL);
		L_7->set_magFilter_5(((*(int32_t*)((int32_t*)UnBox(L_13, TextureFilter_t3692D7DCDF68DB64AE7D5A1BEF324F2ACFEC1B07_il2cpp_TypeInfo_var)))));
		// });
		return;
	}
}
// System.Void Spine.Atlas/<>c__DisplayClass10_0::<.ctor>b__3()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass10_0_U3C_ctorU3Eb__3_mF8A211A0B0AA9840AC82B77140957BCD49110584 (U3CU3Ec__DisplayClass10_0_tBF5C29B31A8B06822C307D01647CD4603254F201 * __this, const RuntimeMethod* method)
{
	{
		// if (entry[1].IndexOf('x') != -1) page.uWrap = TextureWrap.Repeat;
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_0 = __this->get_entry_1();
		int32_t L_1 = 1;
		String_t* L_2 = (L_0)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_1));
		int32_t L_3;
		L_3 = String_IndexOf_mEE2D2F738175E3FF05580366D6226DBD673CA2BE(L_2, ((int32_t)120), /*hidden argument*/NULL);
		if ((((int32_t)L_3) == ((int32_t)(-1))))
		{
			goto IL_001e;
		}
	}
	{
		// if (entry[1].IndexOf('x') != -1) page.uWrap = TextureWrap.Repeat;
		AtlasPage_t8A12ACC89F843E7F1869ADA9D82221D8298850F6 * L_4 = __this->get_page_0();
		L_4->set_uWrap_6(2);
	}

IL_001e:
	{
		// if (entry[1].IndexOf('y') != -1) page.vWrap = TextureWrap.Repeat;
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_5 = __this->get_entry_1();
		int32_t L_6 = 1;
		String_t* L_7 = (L_5)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_6));
		int32_t L_8;
		L_8 = String_IndexOf_mEE2D2F738175E3FF05580366D6226DBD673CA2BE(L_7, ((int32_t)121), /*hidden argument*/NULL);
		if ((((int32_t)L_8) == ((int32_t)(-1))))
		{
			goto IL_003c;
		}
	}
	{
		// if (entry[1].IndexOf('y') != -1) page.vWrap = TextureWrap.Repeat;
		AtlasPage_t8A12ACC89F843E7F1869ADA9D82221D8298850F6 * L_9 = __this->get_page_0();
		L_9->set_vWrap_7(2);
	}

IL_003c:
	{
		// });
		return;
	}
}
// System.Void Spine.Atlas/<>c__DisplayClass10_0::<.ctor>b__4()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass10_0_U3C_ctorU3Eb__4_mB8D73B910CC6D0235141D2EB97B860719955BD8E (U3CU3Ec__DisplayClass10_0_tBF5C29B31A8B06822C307D01647CD4603254F201 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB7C45DD316C68ABF3429C20058C2981C652192F2);
		s_Il2CppMethodInitialized = true;
	}
	{
		// page.pma = entry[1] == "true";
		AtlasPage_t8A12ACC89F843E7F1869ADA9D82221D8298850F6 * L_0 = __this->get_page_0();
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_1 = __this->get_entry_1();
		int32_t L_2 = 1;
		String_t* L_3 = (L_1)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_2));
		bool L_4;
		L_4 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_3, _stringLiteralB7C45DD316C68ABF3429C20058C2981C652192F2, /*hidden argument*/NULL);
		L_0->set_pma_8(L_4);
		// });
		return;
	}
}
// System.Void Spine.Atlas/<>c__DisplayClass10_0::<.ctor>b__5()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass10_0_U3C_ctorU3Eb__5_m969FEA9B00127702267722EF3754E76BFB0F1BD0 (U3CU3Ec__DisplayClass10_0_tBF5C29B31A8B06822C307D01647CD4603254F201 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// region.x = int.Parse(entry[1], CultureInfo.InvariantCulture);
		AtlasRegion_t82875C2D00A27CA4974B4D3529484CA9F57F8485 * L_0 = __this->get_region_2();
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_1 = __this->get_entry_1();
		int32_t L_2 = 1;
		String_t* L_3 = (L_1)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_2));
		IL2CPP_RUNTIME_CLASS_INIT(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_il2cpp_TypeInfo_var);
		CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * L_4;
		L_4 = CultureInfo_get_InvariantCulture_m9FAAFAF8A00091EE1FCB7098AD3F163ECDF02164(/*hidden argument*/NULL);
		int32_t L_5;
		L_5 = Int32_Parse_mCCC6B0A23CE31124F68EF486CC61705CDE61F084(L_3, L_4, /*hidden argument*/NULL);
		L_0->set_x_2(L_5);
		// region.y = int.Parse(entry[2], CultureInfo.InvariantCulture);
		AtlasRegion_t82875C2D00A27CA4974B4D3529484CA9F57F8485 * L_6 = __this->get_region_2();
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_7 = __this->get_entry_1();
		int32_t L_8 = 2;
		String_t* L_9 = (L_7)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_8));
		CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * L_10;
		L_10 = CultureInfo_get_InvariantCulture_m9FAAFAF8A00091EE1FCB7098AD3F163ECDF02164(/*hidden argument*/NULL);
		int32_t L_11;
		L_11 = Int32_Parse_mCCC6B0A23CE31124F68EF486CC61705CDE61F084(L_9, L_10, /*hidden argument*/NULL);
		L_6->set_y_3(L_11);
		// });
		return;
	}
}
// System.Void Spine.Atlas/<>c__DisplayClass10_0::<.ctor>b__6()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass10_0_U3C_ctorU3Eb__6_m5AF674C8AEBCA8780BF603C1998ECE6439389254 (U3CU3Ec__DisplayClass10_0_tBF5C29B31A8B06822C307D01647CD4603254F201 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// region.width = int.Parse(entry[1], CultureInfo.InvariantCulture);
		AtlasRegion_t82875C2D00A27CA4974B4D3529484CA9F57F8485 * L_0 = __this->get_region_2();
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_1 = __this->get_entry_1();
		int32_t L_2 = 1;
		String_t* L_3 = (L_1)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_2));
		IL2CPP_RUNTIME_CLASS_INIT(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_il2cpp_TypeInfo_var);
		CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * L_4;
		L_4 = CultureInfo_get_InvariantCulture_m9FAAFAF8A00091EE1FCB7098AD3F163ECDF02164(/*hidden argument*/NULL);
		int32_t L_5;
		L_5 = Int32_Parse_mCCC6B0A23CE31124F68EF486CC61705CDE61F084(L_3, L_4, /*hidden argument*/NULL);
		L_0->set_width_4(L_5);
		// region.height = int.Parse(entry[2], CultureInfo.InvariantCulture);
		AtlasRegion_t82875C2D00A27CA4974B4D3529484CA9F57F8485 * L_6 = __this->get_region_2();
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_7 = __this->get_entry_1();
		int32_t L_8 = 2;
		String_t* L_9 = (L_7)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_8));
		CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * L_10;
		L_10 = CultureInfo_get_InvariantCulture_m9FAAFAF8A00091EE1FCB7098AD3F163ECDF02164(/*hidden argument*/NULL);
		int32_t L_11;
		L_11 = Int32_Parse_mCCC6B0A23CE31124F68EF486CC61705CDE61F084(L_9, L_10, /*hidden argument*/NULL);
		L_6->set_height_5(L_11);
		// });
		return;
	}
}
// System.Void Spine.Atlas/<>c__DisplayClass10_0::<.ctor>b__7()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass10_0_U3C_ctorU3Eb__7_m445DCBCC3CAE07F776942FE2259DE5AED8D09593 (U3CU3Ec__DisplayClass10_0_tBF5C29B31A8B06822C307D01647CD4603254F201 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// region.x = int.Parse(entry[1], CultureInfo.InvariantCulture);
		AtlasRegion_t82875C2D00A27CA4974B4D3529484CA9F57F8485 * L_0 = __this->get_region_2();
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_1 = __this->get_entry_1();
		int32_t L_2 = 1;
		String_t* L_3 = (L_1)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_2));
		IL2CPP_RUNTIME_CLASS_INIT(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_il2cpp_TypeInfo_var);
		CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * L_4;
		L_4 = CultureInfo_get_InvariantCulture_m9FAAFAF8A00091EE1FCB7098AD3F163ECDF02164(/*hidden argument*/NULL);
		int32_t L_5;
		L_5 = Int32_Parse_mCCC6B0A23CE31124F68EF486CC61705CDE61F084(L_3, L_4, /*hidden argument*/NULL);
		L_0->set_x_2(L_5);
		// region.y = int.Parse(entry[2], CultureInfo.InvariantCulture);
		AtlasRegion_t82875C2D00A27CA4974B4D3529484CA9F57F8485 * L_6 = __this->get_region_2();
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_7 = __this->get_entry_1();
		int32_t L_8 = 2;
		String_t* L_9 = (L_7)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_8));
		CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * L_10;
		L_10 = CultureInfo_get_InvariantCulture_m9FAAFAF8A00091EE1FCB7098AD3F163ECDF02164(/*hidden argument*/NULL);
		int32_t L_11;
		L_11 = Int32_Parse_mCCC6B0A23CE31124F68EF486CC61705CDE61F084(L_9, L_10, /*hidden argument*/NULL);
		L_6->set_y_3(L_11);
		// region.width = int.Parse(entry[3], CultureInfo.InvariantCulture);
		AtlasRegion_t82875C2D00A27CA4974B4D3529484CA9F57F8485 * L_12 = __this->get_region_2();
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_13 = __this->get_entry_1();
		int32_t L_14 = 3;
		String_t* L_15 = (L_13)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_14));
		CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * L_16;
		L_16 = CultureInfo_get_InvariantCulture_m9FAAFAF8A00091EE1FCB7098AD3F163ECDF02164(/*hidden argument*/NULL);
		int32_t L_17;
		L_17 = Int32_Parse_mCCC6B0A23CE31124F68EF486CC61705CDE61F084(L_15, L_16, /*hidden argument*/NULL);
		L_12->set_width_4(L_17);
		// region.height = int.Parse(entry[4], CultureInfo.InvariantCulture);
		AtlasRegion_t82875C2D00A27CA4974B4D3529484CA9F57F8485 * L_18 = __this->get_region_2();
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_19 = __this->get_entry_1();
		int32_t L_20 = 4;
		String_t* L_21 = (L_19)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_20));
		CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * L_22;
		L_22 = CultureInfo_get_InvariantCulture_m9FAAFAF8A00091EE1FCB7098AD3F163ECDF02164(/*hidden argument*/NULL);
		int32_t L_23;
		L_23 = Int32_Parse_mCCC6B0A23CE31124F68EF486CC61705CDE61F084(L_21, L_22, /*hidden argument*/NULL);
		L_18->set_height_5(L_23);
		// });
		return;
	}
}
// System.Void Spine.Atlas/<>c__DisplayClass10_0::<.ctor>b__8()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass10_0_U3C_ctorU3Eb__8_m655A71B51C91087B9AD8C0A7C349BF7ECB455ABF (U3CU3Ec__DisplayClass10_0_tBF5C29B31A8B06822C307D01647CD4603254F201 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// region.offsetX = int.Parse(entry[1], CultureInfo.InvariantCulture);
		AtlasRegion_t82875C2D00A27CA4974B4D3529484CA9F57F8485 * L_0 = __this->get_region_2();
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_1 = __this->get_entry_1();
		int32_t L_2 = 1;
		String_t* L_3 = (L_1)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_2));
		IL2CPP_RUNTIME_CLASS_INIT(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_il2cpp_TypeInfo_var);
		CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * L_4;
		L_4 = CultureInfo_get_InvariantCulture_m9FAAFAF8A00091EE1FCB7098AD3F163ECDF02164(/*hidden argument*/NULL);
		int32_t L_5;
		L_5 = Int32_Parse_mCCC6B0A23CE31124F68EF486CC61705CDE61F084(L_3, L_4, /*hidden argument*/NULL);
		L_0->set_offsetX_10(((float)((float)L_5)));
		// region.offsetY = int.Parse(entry[2], CultureInfo.InvariantCulture);
		AtlasRegion_t82875C2D00A27CA4974B4D3529484CA9F57F8485 * L_6 = __this->get_region_2();
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_7 = __this->get_entry_1();
		int32_t L_8 = 2;
		String_t* L_9 = (L_7)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_8));
		CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * L_10;
		L_10 = CultureInfo_get_InvariantCulture_m9FAAFAF8A00091EE1FCB7098AD3F163ECDF02164(/*hidden argument*/NULL);
		int32_t L_11;
		L_11 = Int32_Parse_mCCC6B0A23CE31124F68EF486CC61705CDE61F084(L_9, L_10, /*hidden argument*/NULL);
		L_6->set_offsetY_11(((float)((float)L_11)));
		// });
		return;
	}
}
// System.Void Spine.Atlas/<>c__DisplayClass10_0::<.ctor>b__9()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass10_0_U3C_ctorU3Eb__9_m78EDB6D3094FA8C65BC639CAABD53BFC0E0AF3E7 (U3CU3Ec__DisplayClass10_0_tBF5C29B31A8B06822C307D01647CD4603254F201 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// region.originalWidth = int.Parse(entry[1], CultureInfo.InvariantCulture);
		AtlasRegion_t82875C2D00A27CA4974B4D3529484CA9F57F8485 * L_0 = __this->get_region_2();
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_1 = __this->get_entry_1();
		int32_t L_2 = 1;
		String_t* L_3 = (L_1)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_2));
		IL2CPP_RUNTIME_CLASS_INIT(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_il2cpp_TypeInfo_var);
		CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * L_4;
		L_4 = CultureInfo_get_InvariantCulture_m9FAAFAF8A00091EE1FCB7098AD3F163ECDF02164(/*hidden argument*/NULL);
		int32_t L_5;
		L_5 = Int32_Parse_mCCC6B0A23CE31124F68EF486CC61705CDE61F084(L_3, L_4, /*hidden argument*/NULL);
		L_0->set_originalWidth_12(L_5);
		// region.originalHeight = int.Parse(entry[2], CultureInfo.InvariantCulture);
		AtlasRegion_t82875C2D00A27CA4974B4D3529484CA9F57F8485 * L_6 = __this->get_region_2();
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_7 = __this->get_entry_1();
		int32_t L_8 = 2;
		String_t* L_9 = (L_7)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_8));
		CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * L_10;
		L_10 = CultureInfo_get_InvariantCulture_m9FAAFAF8A00091EE1FCB7098AD3F163ECDF02164(/*hidden argument*/NULL);
		int32_t L_11;
		L_11 = Int32_Parse_mCCC6B0A23CE31124F68EF486CC61705CDE61F084(L_9, L_10, /*hidden argument*/NULL);
		L_6->set_originalHeight_13(L_11);
		// });
		return;
	}
}
// System.Void Spine.Atlas/<>c__DisplayClass10_0::<.ctor>b__10()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass10_0_U3C_ctorU3Eb__10_m650F1A7FD26A66F5AE61699606908899F3EF210F (U3CU3Ec__DisplayClass10_0_tBF5C29B31A8B06822C307D01647CD4603254F201 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// region.offsetX = int.Parse(entry[1], CultureInfo.InvariantCulture);
		AtlasRegion_t82875C2D00A27CA4974B4D3529484CA9F57F8485 * L_0 = __this->get_region_2();
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_1 = __this->get_entry_1();
		int32_t L_2 = 1;
		String_t* L_3 = (L_1)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_2));
		IL2CPP_RUNTIME_CLASS_INIT(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_il2cpp_TypeInfo_var);
		CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * L_4;
		L_4 = CultureInfo_get_InvariantCulture_m9FAAFAF8A00091EE1FCB7098AD3F163ECDF02164(/*hidden argument*/NULL);
		int32_t L_5;
		L_5 = Int32_Parse_mCCC6B0A23CE31124F68EF486CC61705CDE61F084(L_3, L_4, /*hidden argument*/NULL);
		L_0->set_offsetX_10(((float)((float)L_5)));
		// region.offsetY = int.Parse(entry[2], CultureInfo.InvariantCulture);
		AtlasRegion_t82875C2D00A27CA4974B4D3529484CA9F57F8485 * L_6 = __this->get_region_2();
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_7 = __this->get_entry_1();
		int32_t L_8 = 2;
		String_t* L_9 = (L_7)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_8));
		CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * L_10;
		L_10 = CultureInfo_get_InvariantCulture_m9FAAFAF8A00091EE1FCB7098AD3F163ECDF02164(/*hidden argument*/NULL);
		int32_t L_11;
		L_11 = Int32_Parse_mCCC6B0A23CE31124F68EF486CC61705CDE61F084(L_9, L_10, /*hidden argument*/NULL);
		L_6->set_offsetY_11(((float)((float)L_11)));
		// region.originalWidth = int.Parse(entry[3], CultureInfo.InvariantCulture);
		AtlasRegion_t82875C2D00A27CA4974B4D3529484CA9F57F8485 * L_12 = __this->get_region_2();
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_13 = __this->get_entry_1();
		int32_t L_14 = 3;
		String_t* L_15 = (L_13)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_14));
		CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * L_16;
		L_16 = CultureInfo_get_InvariantCulture_m9FAAFAF8A00091EE1FCB7098AD3F163ECDF02164(/*hidden argument*/NULL);
		int32_t L_17;
		L_17 = Int32_Parse_mCCC6B0A23CE31124F68EF486CC61705CDE61F084(L_15, L_16, /*hidden argument*/NULL);
		L_12->set_originalWidth_12(L_17);
		// region.originalHeight = int.Parse(entry[4], CultureInfo.InvariantCulture);
		AtlasRegion_t82875C2D00A27CA4974B4D3529484CA9F57F8485 * L_18 = __this->get_region_2();
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_19 = __this->get_entry_1();
		int32_t L_20 = 4;
		String_t* L_21 = (L_19)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_20));
		CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * L_22;
		L_22 = CultureInfo_get_InvariantCulture_m9FAAFAF8A00091EE1FCB7098AD3F163ECDF02164(/*hidden argument*/NULL);
		int32_t L_23;
		L_23 = Int32_Parse_mCCC6B0A23CE31124F68EF486CC61705CDE61F084(L_21, L_22, /*hidden argument*/NULL);
		L_18->set_originalHeight_13(L_23);
		// });
		return;
	}
}
// System.Void Spine.Atlas/<>c__DisplayClass10_0::<.ctor>b__11()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass10_0_U3C_ctorU3Eb__11_m02B4A8488DBD465EEB5D6BF2ABDBA122A0B836CC (U3CU3Ec__DisplayClass10_0_tBF5C29B31A8B06822C307D01647CD4603254F201 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral77D38C0623F92B292B925F6E72CF5CF99A20D4EB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB7C45DD316C68ABF3429C20058C2981C652192F2);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		// string value = entry[1];
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_0 = __this->get_entry_1();
		int32_t L_1 = 1;
		String_t* L_2 = (L_0)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_1));
		V_0 = L_2;
		// if (value == "true")
		String_t* L_3 = V_0;
		bool L_4;
		L_4 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_3, _stringLiteralB7C45DD316C68ABF3429C20058C2981C652192F2, /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_0024;
		}
	}
	{
		// region.degrees = 90;
		AtlasRegion_t82875C2D00A27CA4974B4D3529484CA9F57F8485 * L_5 = __this->get_region_2();
		L_5->set_degrees_14(((int32_t)90));
		return;
	}

IL_0024:
	{
		// else if (value != "false")
		String_t* L_6 = V_0;
		bool L_7;
		L_7 = String_op_Inequality_mDDA2DDED3E7EF042987EB7180EE3E88105F0AAE2(L_6, _stringLiteral77D38C0623F92B292B925F6E72CF5CF99A20D4EB, /*hidden argument*/NULL);
		if (!L_7)
		{
			goto IL_0047;
		}
	}
	{
		// region.degrees = int.Parse(value, CultureInfo.InvariantCulture);
		AtlasRegion_t82875C2D00A27CA4974B4D3529484CA9F57F8485 * L_8 = __this->get_region_2();
		String_t* L_9 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_il2cpp_TypeInfo_var);
		CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * L_10;
		L_10 = CultureInfo_get_InvariantCulture_m9FAAFAF8A00091EE1FCB7098AD3F163ECDF02164(/*hidden argument*/NULL);
		int32_t L_11;
		L_11 = Int32_Parse_mCCC6B0A23CE31124F68EF486CC61705CDE61F084(L_9, L_10, /*hidden argument*/NULL);
		L_8->set_degrees_14(L_11);
	}

IL_0047:
	{
		// });
		return;
	}
}
// System.Void Spine.Atlas/<>c__DisplayClass10_0::<.ctor>b__12()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass10_0_U3C_ctorU3Eb__12_m6768EA279E2D340AA7134A109A81DB1511487A46 (U3CU3Ec__DisplayClass10_0_tBF5C29B31A8B06822C307D01647CD4603254F201 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// region.index = int.Parse(entry[1], CultureInfo.InvariantCulture);
		AtlasRegion_t82875C2D00A27CA4974B4D3529484CA9F57F8485 * L_0 = __this->get_region_2();
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_1 = __this->get_entry_1();
		int32_t L_2 = 1;
		String_t* L_3 = (L_1)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_2));
		IL2CPP_RUNTIME_CLASS_INIT(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_il2cpp_TypeInfo_var);
		CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * L_4;
		L_4 = CultureInfo_get_InvariantCulture_m9FAAFAF8A00091EE1FCB7098AD3F163ECDF02164(/*hidden argument*/NULL);
		int32_t L_5;
		L_5 = Int32_Parse_mCCC6B0A23CE31124F68EF486CC61705CDE61F084(L_3, L_4, /*hidden argument*/NULL);
		L_0->set_index_16(L_5);
		// });
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
// Conversion methods for marshalling of: Spine.EventQueue/EventQueueEntry
IL2CPP_EXTERN_C void EventQueueEntry_tD0E6A9858C87415E513F4E6E71399D827FF4424C_marshal_pinvoke(const EventQueueEntry_tD0E6A9858C87415E513F4E6E71399D827FF4424C& unmarshaled, EventQueueEntry_tD0E6A9858C87415E513F4E6E71399D827FF4424C_marshaled_pinvoke& marshaled)
{
	Exception_t* ___entry_1Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'entry' of type 'EventQueueEntry': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___entry_1Exception, NULL);
}
IL2CPP_EXTERN_C void EventQueueEntry_tD0E6A9858C87415E513F4E6E71399D827FF4424C_marshal_pinvoke_back(const EventQueueEntry_tD0E6A9858C87415E513F4E6E71399D827FF4424C_marshaled_pinvoke& marshaled, EventQueueEntry_tD0E6A9858C87415E513F4E6E71399D827FF4424C& unmarshaled)
{
	Exception_t* ___entry_1Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'entry' of type 'EventQueueEntry': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___entry_1Exception, NULL);
}
// Conversion method for clean up from marshalling of: Spine.EventQueue/EventQueueEntry
IL2CPP_EXTERN_C void EventQueueEntry_tD0E6A9858C87415E513F4E6E71399D827FF4424C_marshal_pinvoke_cleanup(EventQueueEntry_tD0E6A9858C87415E513F4E6E71399D827FF4424C_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: Spine.EventQueue/EventQueueEntry
IL2CPP_EXTERN_C void EventQueueEntry_tD0E6A9858C87415E513F4E6E71399D827FF4424C_marshal_com(const EventQueueEntry_tD0E6A9858C87415E513F4E6E71399D827FF4424C& unmarshaled, EventQueueEntry_tD0E6A9858C87415E513F4E6E71399D827FF4424C_marshaled_com& marshaled)
{
	Exception_t* ___entry_1Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'entry' of type 'EventQueueEntry': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___entry_1Exception, NULL);
}
IL2CPP_EXTERN_C void EventQueueEntry_tD0E6A9858C87415E513F4E6E71399D827FF4424C_marshal_com_back(const EventQueueEntry_tD0E6A9858C87415E513F4E6E71399D827FF4424C_marshaled_com& marshaled, EventQueueEntry_tD0E6A9858C87415E513F4E6E71399D827FF4424C& unmarshaled)
{
	Exception_t* ___entry_1Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'entry' of type 'EventQueueEntry': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___entry_1Exception, NULL);
}
// Conversion method for clean up from marshalling of: Spine.EventQueue/EventQueueEntry
IL2CPP_EXTERN_C void EventQueueEntry_tD0E6A9858C87415E513F4E6E71399D827FF4424C_marshal_com_cleanup(EventQueueEntry_tD0E6A9858C87415E513F4E6E71399D827FF4424C_marshaled_com& marshaled)
{
}
// System.Void Spine.EventQueue/EventQueueEntry::.ctor(Spine.EventQueue/EventType,Spine.TrackEntry,Spine.Event)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EventQueueEntry__ctor_m87A50C8A0670518D92C3D095B1D6019068B353EF (EventQueueEntry_tD0E6A9858C87415E513F4E6E71399D827FF4424C * __this, int32_t ___eventType0, TrackEntry_t8B6FF31E96FE5CFBE3B92DC9E4FB33766342A20D * ___trackEntry1, Event_tAB253EC43580D8724548C638BAB02EBB587A7957 * ___e2, const RuntimeMethod* method)
{
	{
		// this.type = eventType;
		int32_t L_0 = ___eventType0;
		__this->set_type_0(L_0);
		// this.entry = trackEntry;
		TrackEntry_t8B6FF31E96FE5CFBE3B92DC9E4FB33766342A20D * L_1 = ___trackEntry1;
		__this->set_entry_1(L_1);
		// this.e = e;
		Event_tAB253EC43580D8724548C638BAB02EBB587A7957 * L_2 = ___e2;
		__this->set_e_2(L_2);
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void EventQueueEntry__ctor_m87A50C8A0670518D92C3D095B1D6019068B353EF_AdjustorThunk (RuntimeObject * __this, int32_t ___eventType0, TrackEntry_t8B6FF31E96FE5CFBE3B92DC9E4FB33766342A20D * ___trackEntry1, Event_tAB253EC43580D8724548C638BAB02EBB587A7957 * ___e2, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	EventQueueEntry_tD0E6A9858C87415E513F4E6E71399D827FF4424C * _thisAdjusted = reinterpret_cast<EventQueueEntry_tD0E6A9858C87415E513F4E6E71399D827FF4424C *>(__this + _offset);
	EventQueueEntry__ctor_m87A50C8A0670518D92C3D095B1D6019068B353EF(_thisAdjusted, ___eventType0, ___trackEntry1, ___e2, method);
}
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Spine.SkeletonBinary/SkeletonInput::.ctor(System.IO.Stream)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SkeletonInput__ctor_m7A0195347A9B03D704A44A06840CB4DD429173BD (SkeletonInput_tD0B7F3FDB991A3A0D0563BAD64BF45984FC8DC6A * __this, Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * ___input0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private byte[] chars = new byte[32];
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_0 = (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)SZArrayNew(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726_il2cpp_TypeInfo_var, (uint32_t)((int32_t)32));
		__this->set_chars_0(L_0);
		// private byte[] bytesBigEndian = new byte[8];
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_1 = (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)SZArrayNew(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726_il2cpp_TypeInfo_var, (uint32_t)8);
		__this->set_bytesBigEndian_1(L_1);
		// public SkeletonInput (Stream input) {
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		// this.input = input;
		Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * L_2 = ___input0;
		__this->set_input_3(L_2);
		// }
		return;
	}
}
// System.Int32 Spine.SkeletonBinary/SkeletonInput::Read()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SkeletonInput_Read_mF28E841CA4EEE701B56836AECD62E4511CCF77BF (SkeletonInput_tD0B7F3FDB991A3A0D0563BAD64BF45984FC8DC6A * __this, const RuntimeMethod* method)
{
	{
		// return input.ReadByte();
		Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * L_0 = __this->get_input_3();
		int32_t L_1;
		L_1 = VirtFuncInvoker0< int32_t >::Invoke(22 /* System.Int32 System.IO.Stream::ReadByte() */, L_0);
		return L_1;
	}
}
// System.Byte Spine.SkeletonBinary/SkeletonInput::ReadByte()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t SkeletonInput_ReadByte_m6EF49096109C60E7ED1973EDA205BB2CC6522405 (SkeletonInput_tD0B7F3FDB991A3A0D0563BAD64BF45984FC8DC6A * __this, const RuntimeMethod* method)
{
	{
		// return (byte)input.ReadByte();
		Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * L_0 = __this->get_input_3();
		int32_t L_1;
		L_1 = VirtFuncInvoker0< int32_t >::Invoke(22 /* System.Int32 System.IO.Stream::ReadByte() */, L_0);
		return (uint8_t)((int32_t)((uint8_t)L_1));
	}
}
// System.SByte Spine.SkeletonBinary/SkeletonInput::ReadSByte()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int8_t SkeletonInput_ReadSByte_m2F2B974C3FFA98A26FF7368DD0218D5A137AF38F (SkeletonInput_tD0B7F3FDB991A3A0D0563BAD64BF45984FC8DC6A * __this, const RuntimeMethod* method)
{
	int32_t G_B2_0 = 0;
	int32_t G_B1_0 = 0;
	{
		// int value = input.ReadByte();
		Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * L_0 = __this->get_input_3();
		int32_t L_1;
		L_1 = VirtFuncInvoker0< int32_t >::Invoke(22 /* System.Int32 System.IO.Stream::ReadByte() */, L_0);
		// if (value == -1) throw new EndOfStreamException();
		int32_t L_2 = L_1;
		G_B1_0 = L_2;
		if ((!(((uint32_t)L_2) == ((uint32_t)(-1)))))
		{
			G_B2_0 = L_2;
			goto IL_0015;
		}
	}
	{
		// if (value == -1) throw new EndOfStreamException();
		EndOfStreamException_tDA8337E29A941EFB3E26721033B1826C1ACB0059 * L_3 = (EndOfStreamException_tDA8337E29A941EFB3E26721033B1826C1ACB0059 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&EndOfStreamException_tDA8337E29A941EFB3E26721033B1826C1ACB0059_il2cpp_TypeInfo_var)));
		EndOfStreamException__ctor_m2D2184E744B5B0762EA690CFD757F64E0BC6D539(L_3, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SkeletonInput_ReadSByte_m2F2B974C3FFA98A26FF7368DD0218D5A137AF38F_RuntimeMethod_var)));
	}

IL_0015:
	{
		// return (sbyte)value;
		return ((int8_t)((int8_t)G_B2_0));
	}
}
// System.Boolean Spine.SkeletonBinary/SkeletonInput::ReadBoolean()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SkeletonInput_ReadBoolean_m28BC7971B2EEEF78C4B33DA120A68350EDD1279F (SkeletonInput_tD0B7F3FDB991A3A0D0563BAD64BF45984FC8DC6A * __this, const RuntimeMethod* method)
{
	{
		// return input.ReadByte() != 0;
		Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * L_0 = __this->get_input_3();
		int32_t L_1;
		L_1 = VirtFuncInvoker0< int32_t >::Invoke(22 /* System.Int32 System.IO.Stream::ReadByte() */, L_0);
		return (bool)((!(((uint32_t)L_1) <= ((uint32_t)0)))? 1 : 0);
	}
}
// System.Single Spine.SkeletonBinary/SkeletonInput::ReadFloat()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float SkeletonInput_ReadFloat_m47B12E43AB5945BE9954C489E0B41CFC02220928 (SkeletonInput_tD0B7F3FDB991A3A0D0563BAD64BF45984FC8DC6A * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BitConverter_t8DCBA24B909F1B221372AF2B37C76DCF614BA654_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// input.Read(bytesBigEndian, 0, 4);
		Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * L_0 = __this->get_input_3();
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_1 = __this->get_bytesBigEndian_1();
		int32_t L_2;
		L_2 = VirtFuncInvoker3< int32_t, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*, int32_t, int32_t >::Invoke(21 /* System.Int32 System.IO.Stream::Read(System.Byte[],System.Int32,System.Int32) */, L_0, L_1, 0, 4);
		// chars[3] = bytesBigEndian[0];
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_3 = __this->get_chars_0();
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_4 = __this->get_bytesBigEndian_1();
		int32_t L_5 = 0;
		uint8_t L_6 = (L_4)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_5));
		(L_3)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(3), (uint8_t)L_6);
		// chars[2] = bytesBigEndian[1];
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_7 = __this->get_chars_0();
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_8 = __this->get_bytesBigEndian_1();
		int32_t L_9 = 1;
		uint8_t L_10 = (L_8)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_9));
		(L_7)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(2), (uint8_t)L_10);
		// chars[1] = bytesBigEndian[2];
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_11 = __this->get_chars_0();
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_12 = __this->get_bytesBigEndian_1();
		int32_t L_13 = 2;
		uint8_t L_14 = (L_12)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_13));
		(L_11)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(1), (uint8_t)L_14);
		// chars[0] = bytesBigEndian[3];
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_15 = __this->get_chars_0();
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_16 = __this->get_bytesBigEndian_1();
		int32_t L_17 = 3;
		uint8_t L_18 = (L_16)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_17));
		(L_15)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (uint8_t)L_18);
		// return BitConverter.ToSingle(chars, 0);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_19 = __this->get_chars_0();
		IL2CPP_RUNTIME_CLASS_INIT(BitConverter_t8DCBA24B909F1B221372AF2B37C76DCF614BA654_il2cpp_TypeInfo_var);
		float L_20;
		L_20 = BitConverter_ToSingle_mF9F12631D5CA7C2D4BFE3F89A22D39FB45E1986F(L_19, 0, /*hidden argument*/NULL);
		return L_20;
	}
}
// System.Int32 Spine.SkeletonBinary/SkeletonInput::ReadInt()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SkeletonInput_ReadInt_m8EE35FA72291FB896C274728EF894E6064844F47 (SkeletonInput_tD0B7F3FDB991A3A0D0563BAD64BF45984FC8DC6A * __this, const RuntimeMethod* method)
{
	{
		// input.Read(bytesBigEndian, 0, 4);
		Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * L_0 = __this->get_input_3();
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_1 = __this->get_bytesBigEndian_1();
		int32_t L_2;
		L_2 = VirtFuncInvoker3< int32_t, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*, int32_t, int32_t >::Invoke(21 /* System.Int32 System.IO.Stream::Read(System.Byte[],System.Int32,System.Int32) */, L_0, L_1, 0, 4);
		// return (bytesBigEndian[0] << 24)
		//     + (bytesBigEndian[1] << 16)
		//     + (bytesBigEndian[2] << 8)
		//     + bytesBigEndian[3];
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_3 = __this->get_bytesBigEndian_1();
		int32_t L_4 = 0;
		uint8_t L_5 = (L_3)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_4));
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_6 = __this->get_bytesBigEndian_1();
		int32_t L_7 = 1;
		uint8_t L_8 = (L_6)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_7));
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_9 = __this->get_bytesBigEndian_1();
		int32_t L_10 = 2;
		uint8_t L_11 = (L_9)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_10));
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_12 = __this->get_bytesBigEndian_1();
		int32_t L_13 = 3;
		uint8_t L_14 = (L_12)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_13));
		return ((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)((int32_t)L_5<<(int32_t)((int32_t)24))), (int32_t)((int32_t)((int32_t)L_8<<(int32_t)((int32_t)16))))), (int32_t)((int32_t)((int32_t)L_11<<(int32_t)8)))), (int32_t)L_14));
	}
}
// System.Int64 Spine.SkeletonBinary/SkeletonInput::ReadLong()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t SkeletonInput_ReadLong_m68876F3178280533715E950245B292E4CA86C9E2 (SkeletonInput_tD0B7F3FDB991A3A0D0563BAD64BF45984FC8DC6A * __this, const RuntimeMethod* method)
{
	{
		// input.Read(bytesBigEndian, 0, 8);
		Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * L_0 = __this->get_input_3();
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_1 = __this->get_bytesBigEndian_1();
		int32_t L_2;
		L_2 = VirtFuncInvoker3< int32_t, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*, int32_t, int32_t >::Invoke(21 /* System.Int32 System.IO.Stream::Read(System.Byte[],System.Int32,System.Int32) */, L_0, L_1, 0, 8);
		// return ((long)(bytesBigEndian[0]) << 56)
		//     + ((long)(bytesBigEndian[1]) << 48)
		//     + ((long)(bytesBigEndian[2]) << 40)
		//     + ((long)(bytesBigEndian[3]) << 32)
		//     + ((long)(bytesBigEndian[4]) << 24)
		//     + ((long)(bytesBigEndian[5]) << 16)
		//     + ((long)(bytesBigEndian[6]) << 8)
		//     + (long)(bytesBigEndian[7]);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_3 = __this->get_bytesBigEndian_1();
		int32_t L_4 = 0;
		uint8_t L_5 = (L_3)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_4));
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_6 = __this->get_bytesBigEndian_1();
		int32_t L_7 = 1;
		uint8_t L_8 = (L_6)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_7));
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_9 = __this->get_bytesBigEndian_1();
		int32_t L_10 = 2;
		uint8_t L_11 = (L_9)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_10));
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_12 = __this->get_bytesBigEndian_1();
		int32_t L_13 = 3;
		uint8_t L_14 = (L_12)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_13));
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_15 = __this->get_bytesBigEndian_1();
		int32_t L_16 = 4;
		uint8_t L_17 = (L_15)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_16));
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_18 = __this->get_bytesBigEndian_1();
		int32_t L_19 = 5;
		uint8_t L_20 = (L_18)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_19));
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_21 = __this->get_bytesBigEndian_1();
		int32_t L_22 = 6;
		uint8_t L_23 = (L_21)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_22));
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_24 = __this->get_bytesBigEndian_1();
		int32_t L_25 = 7;
		uint8_t L_26 = (L_24)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_25));
		return ((int64_t)il2cpp_codegen_add((int64_t)((int64_t)il2cpp_codegen_add((int64_t)((int64_t)il2cpp_codegen_add((int64_t)((int64_t)il2cpp_codegen_add((int64_t)((int64_t)il2cpp_codegen_add((int64_t)((int64_t)il2cpp_codegen_add((int64_t)((int64_t)il2cpp_codegen_add((int64_t)((int64_t)((int64_t)((int64_t)((uint64_t)L_5))<<(int32_t)((int32_t)56))), (int64_t)((int64_t)((int64_t)((int64_t)((uint64_t)L_8))<<(int32_t)((int32_t)48))))), (int64_t)((int64_t)((int64_t)((int64_t)((uint64_t)L_11))<<(int32_t)((int32_t)40))))), (int64_t)((int64_t)((int64_t)((int64_t)((uint64_t)L_14))<<(int32_t)((int32_t)32))))), (int64_t)((int64_t)((int64_t)((int64_t)((uint64_t)L_17))<<(int32_t)((int32_t)24))))), (int64_t)((int64_t)((int64_t)((int64_t)((uint64_t)L_20))<<(int32_t)((int32_t)16))))), (int64_t)((int64_t)((int64_t)((int64_t)((uint64_t)L_23))<<(int32_t)8)))), (int64_t)((int64_t)((uint64_t)L_26))));
	}
}
// System.Int32 Spine.SkeletonBinary/SkeletonInput::ReadInt(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SkeletonInput_ReadInt_m3DABE27E31071D6040DF41DD2A613D3CD48FB543 (SkeletonInput_tD0B7F3FDB991A3A0D0563BAD64BF45984FC8DC6A * __this, bool ___optimizePositive0, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		// int b = input.ReadByte();
		Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * L_0 = __this->get_input_3();
		int32_t L_1;
		L_1 = VirtFuncInvoker0< int32_t >::Invoke(22 /* System.Int32 System.IO.Stream::ReadByte() */, L_0);
		V_0 = L_1;
		// int result = b & 0x7F;
		int32_t L_2 = V_0;
		V_1 = ((int32_t)((int32_t)L_2&(int32_t)((int32_t)127)));
		// if ((b & 0x80) != 0) {
		int32_t L_3 = V_0;
		if (!((int32_t)((int32_t)L_3&(int32_t)((int32_t)128))))
		{
			goto IL_008a;
		}
	}
	{
		// b = input.ReadByte();
		Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * L_4 = __this->get_input_3();
		int32_t L_5;
		L_5 = VirtFuncInvoker0< int32_t >::Invoke(22 /* System.Int32 System.IO.Stream::ReadByte() */, L_4);
		V_0 = L_5;
		// result |= (b & 0x7F) << 7;
		int32_t L_6 = V_1;
		int32_t L_7 = V_0;
		V_1 = ((int32_t)((int32_t)L_6|(int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_7&(int32_t)((int32_t)127)))<<(int32_t)7))));
		// if ((b & 0x80) != 0) {
		int32_t L_8 = V_0;
		if (!((int32_t)((int32_t)L_8&(int32_t)((int32_t)128))))
		{
			goto IL_008a;
		}
	}
	{
		// b = input.ReadByte();
		Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * L_9 = __this->get_input_3();
		int32_t L_10;
		L_10 = VirtFuncInvoker0< int32_t >::Invoke(22 /* System.Int32 System.IO.Stream::ReadByte() */, L_9);
		V_0 = L_10;
		// result |= (b & 0x7F) << 14;
		int32_t L_11 = V_1;
		int32_t L_12 = V_0;
		V_1 = ((int32_t)((int32_t)L_11|(int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_12&(int32_t)((int32_t)127)))<<(int32_t)((int32_t)14)))));
		// if ((b & 0x80) != 0) {
		int32_t L_13 = V_0;
		if (!((int32_t)((int32_t)L_13&(int32_t)((int32_t)128))))
		{
			goto IL_008a;
		}
	}
	{
		// b = input.ReadByte();
		Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * L_14 = __this->get_input_3();
		int32_t L_15;
		L_15 = VirtFuncInvoker0< int32_t >::Invoke(22 /* System.Int32 System.IO.Stream::ReadByte() */, L_14);
		V_0 = L_15;
		// result |= (b & 0x7F) << 21;
		int32_t L_16 = V_1;
		int32_t L_17 = V_0;
		V_1 = ((int32_t)((int32_t)L_16|(int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_17&(int32_t)((int32_t)127)))<<(int32_t)((int32_t)21)))));
		// if ((b & 0x80) != 0) result |= (input.ReadByte() & 0x7F) << 28;
		int32_t L_18 = V_0;
		if (!((int32_t)((int32_t)L_18&(int32_t)((int32_t)128))))
		{
			goto IL_008a;
		}
	}
	{
		// if ((b & 0x80) != 0) result |= (input.ReadByte() & 0x7F) << 28;
		int32_t L_19 = V_1;
		Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * L_20 = __this->get_input_3();
		int32_t L_21;
		L_21 = VirtFuncInvoker0< int32_t >::Invoke(22 /* System.Int32 System.IO.Stream::ReadByte() */, L_20);
		V_1 = ((int32_t)((int32_t)L_19|(int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_21&(int32_t)((int32_t)127)))<<(int32_t)((int32_t)28)))));
	}

IL_008a:
	{
		// return optimizePositive ? result : ((result >> 1) ^ -(result & 1));
		bool L_22 = ___optimizePositive0;
		if (L_22)
		{
			goto IL_0096;
		}
	}
	{
		int32_t L_23 = V_1;
		int32_t L_24 = V_1;
		return ((int32_t)((int32_t)((int32_t)((int32_t)L_23>>(int32_t)1))^(int32_t)((-((int32_t)((int32_t)L_24&(int32_t)1))))));
	}

IL_0096:
	{
		int32_t L_25 = V_1;
		return L_25;
	}
}
// System.String Spine.SkeletonBinary/SkeletonInput::ReadString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SkeletonInput_ReadString_m6428104EADD77A1F3E22A73038830C769B1F8381 (SkeletonInput_tD0B7F3FDB991A3A0D0563BAD64BF45984FC8DC6A * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* V_1 = NULL;
	{
		// int byteCount = ReadInt(true);
		int32_t L_0;
		L_0 = SkeletonInput_ReadInt_m3DABE27E31071D6040DF41DD2A613D3CD48FB543(__this, (bool)1, /*hidden argument*/NULL);
		V_0 = L_0;
		int32_t L_1 = V_0;
		if (!L_1)
		{
			goto IL_0011;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_0013;
		}
	}
	{
		goto IL_0019;
	}

IL_0011:
	{
		// return null;
		return (String_t*)NULL;
	}

IL_0013:
	{
		// return "";
		return _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
	}

IL_0019:
	{
		// byteCount--;
		int32_t L_3 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_3, (int32_t)1));
		// byte[] buffer = this.chars;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_4 = __this->get_chars_0();
		V_1 = L_4;
		// if (buffer.Length < byteCount) buffer = new byte[byteCount];
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_5 = V_1;
		int32_t L_6 = V_0;
		if ((((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_5)->max_length)))) >= ((int32_t)L_6)))
		{
			goto IL_0031;
		}
	}
	{
		// if (buffer.Length < byteCount) buffer = new byte[byteCount];
		int32_t L_7 = V_0;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_8 = (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)SZArrayNew(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726_il2cpp_TypeInfo_var, (uint32_t)L_7);
		V_1 = L_8;
	}

IL_0031:
	{
		// ReadFully(buffer, 0, byteCount);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_9 = V_1;
		int32_t L_10 = V_0;
		SkeletonInput_ReadFully_m0C4DC8DA2A372732B0E514A341EC75E0079FAFBF(__this, L_9, 0, L_10, /*hidden argument*/NULL);
		// return System.Text.Encoding.UTF8.GetString(buffer, 0, byteCount);
		Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * L_11;
		L_11 = Encoding_get_UTF8_mC877FB3137BBD566AEE7B15F9BF61DC4EF8F5E5E(/*hidden argument*/NULL);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_12 = V_1;
		int32_t L_13 = V_0;
		String_t* L_14;
		L_14 = VirtFuncInvoker3< String_t*, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*, int32_t, int32_t >::Invoke(31 /* System.String System.Text.Encoding::GetString(System.Byte[],System.Int32,System.Int32) */, L_11, L_12, 0, L_13);
		return L_14;
	}
}
// System.String Spine.SkeletonBinary/SkeletonInput::ReadStringRef()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SkeletonInput_ReadStringRef_m0A1430D0BA1705802D292DB9C49F1A126F9CDF09 (SkeletonInput_tD0B7F3FDB991A3A0D0563BAD64BF45984FC8DC6A * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		// int index = ReadInt(true);
		int32_t L_0;
		L_0 = SkeletonInput_ReadInt_m3DABE27E31071D6040DF41DD2A613D3CD48FB543(__this, (bool)1, /*hidden argument*/NULL);
		V_0 = L_0;
		// return index == 0 ? null : strings[index - 1];
		int32_t L_1 = V_0;
		if (!L_1)
		{
			goto IL_0016;
		}
	}
	{
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_2 = __this->get_strings_2();
		int32_t L_3 = V_0;
		int32_t L_4 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_3, (int32_t)1));
		String_t* L_5 = (L_2)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_4));
		return L_5;
	}

IL_0016:
	{
		return (String_t*)NULL;
	}
}
// System.Void Spine.SkeletonBinary/SkeletonInput::ReadFully(System.Byte[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SkeletonInput_ReadFully_m0C4DC8DA2A372732B0E514A341EC75E0079FAFBF (SkeletonInput_tD0B7F3FDB991A3A0D0563BAD64BF45984FC8DC6A * __this, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___buffer0, int32_t ___offset1, int32_t ___length2, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		goto IL_0025;
	}

IL_0002:
	{
		// int count = input.Read(buffer, offset, length);
		Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * L_0 = __this->get_input_3();
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_1 = ___buffer0;
		int32_t L_2 = ___offset1;
		int32_t L_3 = ___length2;
		int32_t L_4;
		L_4 = VirtFuncInvoker3< int32_t, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*, int32_t, int32_t >::Invoke(21 /* System.Int32 System.IO.Stream::Read(System.Byte[],System.Int32,System.Int32) */, L_0, L_1, L_2, L_3);
		V_0 = L_4;
		// if (count <= 0) throw new EndOfStreamException();
		int32_t L_5 = V_0;
		if ((((int32_t)L_5) > ((int32_t)0)))
		{
			goto IL_001b;
		}
	}
	{
		// if (count <= 0) throw new EndOfStreamException();
		EndOfStreamException_tDA8337E29A941EFB3E26721033B1826C1ACB0059 * L_6 = (EndOfStreamException_tDA8337E29A941EFB3E26721033B1826C1ACB0059 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&EndOfStreamException_tDA8337E29A941EFB3E26721033B1826C1ACB0059_il2cpp_TypeInfo_var)));
		EndOfStreamException__ctor_m2D2184E744B5B0762EA690CFD757F64E0BC6D539(L_6, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_6, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SkeletonInput_ReadFully_m0C4DC8DA2A372732B0E514A341EC75E0079FAFBF_RuntimeMethod_var)));
	}

IL_001b:
	{
		// offset += count;
		int32_t L_7 = ___offset1;
		int32_t L_8 = V_0;
		___offset1 = ((int32_t)il2cpp_codegen_add((int32_t)L_7, (int32_t)L_8));
		// length -= count;
		int32_t L_9 = ___length2;
		int32_t L_10 = V_0;
		___length2 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_9, (int32_t)L_10));
	}

IL_0025:
	{
		// while (length > 0) {
		int32_t L_11 = ___length2;
		if ((((int32_t)L_11) > ((int32_t)0)))
		{
			goto IL_0002;
		}
	}
	{
		// }
		return;
	}
}
// System.String Spine.SkeletonBinary/SkeletonInput::GetVersionString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SkeletonInput_GetVersionString_mEA6F595F8E5173425CFE97B948B1AB690270DB14 (SkeletonInput_tD0B7F3FDB991A3A0D0563BAD64BF45984FC8DC6A * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int64_t V_0 = 0;
	int64_t V_1 = 0;
	String_t* V_2 = NULL;
	String_t* V_3 = NULL;
	Exception_t * V_4 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	il2cpp::utils::ExceptionSupportStack<int32_t, 2> __leave_targets;
	Exception_t * G_B6_0 = NULL;
	String_t* G_B6_1 = NULL;
	Exception_t * G_B5_0 = NULL;
	String_t* G_B5_1 = NULL;
	String_t* G_B7_0 = NULL;
	String_t* G_B7_1 = NULL;

IL_0000:
	try
	{ // begin try (depth: 1)
		{
			// var initialPosition = input.Position;
			Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * L_0 = __this->get_input_3();
			int64_t L_1;
			L_1 = VirtFuncInvoker0< int64_t >::Invoke(11 /* System.Int64 System.IO.Stream::get_Position() */, L_0);
			V_0 = L_1;
			// ReadLong(); // long hash
			int64_t L_2;
			L_2 = SkeletonInput_ReadLong_m68876F3178280533715E950245B292E4CA86C9E2(__this, /*hidden argument*/NULL);
			// var stringPosition = input.Position;
			Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * L_3 = __this->get_input_3();
			int64_t L_4;
			L_4 = VirtFuncInvoker0< int64_t >::Invoke(11 /* System.Int64 System.IO.Stream::get_Position() */, L_3);
			V_1 = L_4;
			// int stringByteCount = ReadInt(true);
			int32_t L_5;
			L_5 = SkeletonInput_ReadInt_m3DABE27E31071D6040DF41DD2A613D3CD48FB543(__this, (bool)1, /*hidden argument*/NULL);
			// input.Position = stringPosition;
			Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * L_6 = __this->get_input_3();
			int64_t L_7 = V_1;
			VirtActionInvoker1< int64_t >::Invoke(12 /* System.Void System.IO.Stream::set_Position(System.Int64) */, L_6, L_7);
			// if (stringByteCount <= 13) {
			if ((((int32_t)L_5) > ((int32_t)((int32_t)13))))
			{
				goto IL_004f;
			}
		}

IL_0036:
		{
			// string version = ReadString();
			String_t* L_8;
			L_8 = SkeletonInput_ReadString_m6428104EADD77A1F3E22A73038830C769B1F8381(__this, /*hidden argument*/NULL);
			V_2 = L_8;
			// if (char.IsDigit(version[0]))
			String_t* L_9 = V_2;
			Il2CppChar L_10;
			L_10 = String_get_Chars_m9B1A5E4C8D70AA33A60F03735AF7B77AB9DBBA70(L_9, 0, /*hidden argument*/NULL);
			IL2CPP_RUNTIME_CLASS_INIT(Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14_il2cpp_TypeInfo_var);
			bool L_11;
			L_11 = Char_IsDigit_mC19135099993954C820E030363B943034575F504(L_10, /*hidden argument*/NULL);
			if (!L_11)
			{
				goto IL_004f;
			}
		}

IL_004b:
		{
			// return version;
			String_t* L_12 = V_2;
			V_3 = L_12;
			goto IL_0089;
		}

IL_004f:
		{
			// input.Position = initialPosition;
			Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * L_13 = __this->get_input_3();
			int64_t L_14 = V_0;
			VirtActionInvoker1< int64_t >::Invoke(12 /* System.Void System.IO.Stream::set_Position(System.Int64) */, L_13, L_14);
			// return GetVersionStringOld3X();
			String_t* L_15;
			L_15 = SkeletonInput_GetVersionStringOld3X_m77C851E61EFF9375B2296C5B65C3AF749AD3CE91(__this, /*hidden argument*/NULL);
			V_3 = L_15;
			goto IL_0089;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0064;
		}
		throw e;
	}

CATCH_0064:
	{ // begin catch(System.Exception)
		{
			// } catch (Exception e) {
			V_4 = ((Exception_t *)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t *));
			// throw new ArgumentException("Stream does not contain a valid binary Skeleton Data.\n" + e, "input");
			Exception_t * L_16 = V_4;
			Exception_t * L_17 = L_16;
			G_B5_0 = L_17;
			G_B5_1 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral24E0770EDC9103A4E23F9C01385FDE3BC04F178A));
			if (L_17)
			{
				G_B6_0 = L_17;
				G_B6_1 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral24E0770EDC9103A4E23F9C01385FDE3BC04F178A));
				goto IL_0074;
			}
		}

IL_0070:
		{
			G_B7_0 = ((String_t*)(NULL));
			G_B7_1 = G_B5_1;
			goto IL_0079;
		}

IL_0074:
		{
			String_t* L_18;
			L_18 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, G_B6_0);
			G_B7_0 = L_18;
			G_B7_1 = G_B6_1;
		}

IL_0079:
		{
			String_t* L_19;
			L_19 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(G_B7_1, G_B7_0, /*hidden argument*/NULL);
			ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 * L_20 = (ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00_il2cpp_TypeInfo_var)));
			ArgumentException__ctor_m71044C2110E357B71A1C30D2561C3F861AF1DC0D(L_20, L_19, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral15088A7C50E83E49058833A4287B3C2F1CD730D2)), /*hidden argument*/NULL);
			IL2CPP_RAISE_MANAGED_EXCEPTION(L_20, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SkeletonInput_GetVersionString_mEA6F595F8E5173425CFE97B948B1AB690270DB14_RuntimeMethod_var)));
		}
	} // end catch (depth: 1)

IL_0089:
	{
		// }
		String_t* L_21 = V_3;
		return L_21;
	}
}
// System.String Spine.SkeletonBinary/SkeletonInput::GetVersionStringOld3X()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SkeletonInput_GetVersionStringOld3X_m77C851E61EFF9375B2296C5B65C3AF749AD3CE91 (SkeletonInput_tD0B7F3FDB991A3A0D0563BAD64BF45984FC8DC6A * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* V_1 = NULL;
	{
		// int byteCount = ReadInt(true);
		int32_t L_0;
		L_0 = SkeletonInput_ReadInt_m3DABE27E31071D6040DF41DD2A613D3CD48FB543(__this, (bool)1, /*hidden argument*/NULL);
		V_0 = L_0;
		// if (byteCount > 1) input.Position += byteCount - 1;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) <= ((int32_t)1)))
		{
			goto IL_0022;
		}
	}
	{
		// if (byteCount > 1) input.Position += byteCount - 1;
		Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * L_2 = __this->get_input_3();
		Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * L_3 = L_2;
		int64_t L_4;
		L_4 = VirtFuncInvoker0< int64_t >::Invoke(11 /* System.Int64 System.IO.Stream::get_Position() */, L_3);
		int32_t L_5 = V_0;
		VirtActionInvoker1< int64_t >::Invoke(12 /* System.Void System.IO.Stream::set_Position(System.Int64) */, L_3, ((int64_t)il2cpp_codegen_add((int64_t)L_4, (int64_t)((int64_t)((int64_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_5, (int32_t)1)))))));
	}

IL_0022:
	{
		// byteCount = ReadInt(true);
		int32_t L_6;
		L_6 = SkeletonInput_ReadInt_m3DABE27E31071D6040DF41DD2A613D3CD48FB543(__this, (bool)1, /*hidden argument*/NULL);
		V_0 = L_6;
		// if (byteCount > 1) {
		int32_t L_7 = V_0;
		if ((((int32_t)L_7) <= ((int32_t)1)))
		{
			goto IL_0050;
		}
	}
	{
		// byteCount--;
		int32_t L_8 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_8, (int32_t)1));
		// var buffer = new byte[byteCount];
		int32_t L_9 = V_0;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_10 = (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)SZArrayNew(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726_il2cpp_TypeInfo_var, (uint32_t)L_9);
		V_1 = L_10;
		// ReadFully(buffer, 0, byteCount);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_11 = V_1;
		int32_t L_12 = V_0;
		SkeletonInput_ReadFully_m0C4DC8DA2A372732B0E514A341EC75E0079FAFBF(__this, L_11, 0, L_12, /*hidden argument*/NULL);
		// return System.Text.Encoding.UTF8.GetString(buffer, 0, byteCount);
		Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * L_13;
		L_13 = Encoding_get_UTF8_mC877FB3137BBD566AEE7B15F9BF61DC4EF8F5E5E(/*hidden argument*/NULL);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_14 = V_1;
		int32_t L_15 = V_0;
		String_t* L_16;
		L_16 = VirtFuncInvoker3< String_t*, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*, int32_t, int32_t >::Invoke(31 /* System.String System.Text.Encoding::GetString(System.Byte[],System.Int32,System.Int32) */, L_13, L_14, 0, L_15);
		return L_16;
	}

IL_0050:
	{
		// return null;
		return (String_t*)NULL;
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
// System.Void Spine.SkeletonBinary/Vertices::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vertices__ctor_m57085B6AA84433AABF60423732301C26E34F9C77 (Vertices_tC5C45F508B1550DB3F5D2C4479C467CA6226B541 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
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
// System.Void Spine.SkeletonLoader/LinkedMesh::.ctor(Spine.MeshAttachment,System.String,System.Int32,System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LinkedMesh__ctor_mD3A20F490692F23569F3F30E4C125C7CB71D9186 (LinkedMesh_t95D16FDB1A35D9F16D739B764848BA25AFCF24E1 * __this, MeshAttachment_t928FE10280A3D4F1648B7D18B42C04515C08F990 * ___mesh0, String_t* ___skin1, int32_t ___slotIndex2, String_t* ___parent3, bool ___inheritDeform4, const RuntimeMethod* method)
{
	{
		// public LinkedMesh (MeshAttachment mesh, string skin, int slotIndex, string parent, bool inheritDeform) {
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		// this.mesh = mesh;
		MeshAttachment_t928FE10280A3D4F1648B7D18B42C04515C08F990 * L_0 = ___mesh0;
		__this->set_mesh_3(L_0);
		// this.skin = skin;
		String_t* L_1 = ___skin1;
		__this->set_skin_1(L_1);
		// this.slotIndex = slotIndex;
		int32_t L_2 = ___slotIndex2;
		__this->set_slotIndex_2(L_2);
		// this.parent = parent;
		String_t* L_3 = ___parent3;
		__this->set_parent_0(L_3);
		// this.inheritDeform = inheritDeform;
		bool L_4 = ___inheritDeform4;
		__this->set_inheritDeform_4(L_4);
		// }
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
// Conversion methods for marshalling of: Spine.Skin/SkinEntry
IL2CPP_EXTERN_C void SkinEntry_t4112F7EB8FA7FAC2011F2139F5C251CEE83393C4_marshal_pinvoke(const SkinEntry_t4112F7EB8FA7FAC2011F2139F5C251CEE83393C4& unmarshaled, SkinEntry_t4112F7EB8FA7FAC2011F2139F5C251CEE83393C4_marshaled_pinvoke& marshaled)
{
	Exception_t* ___attachment_2Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'attachment' of type 'SkinEntry': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___attachment_2Exception, NULL);
}
IL2CPP_EXTERN_C void SkinEntry_t4112F7EB8FA7FAC2011F2139F5C251CEE83393C4_marshal_pinvoke_back(const SkinEntry_t4112F7EB8FA7FAC2011F2139F5C251CEE83393C4_marshaled_pinvoke& marshaled, SkinEntry_t4112F7EB8FA7FAC2011F2139F5C251CEE83393C4& unmarshaled)
{
	Exception_t* ___attachment_2Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'attachment' of type 'SkinEntry': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___attachment_2Exception, NULL);
}
// Conversion method for clean up from marshalling of: Spine.Skin/SkinEntry
IL2CPP_EXTERN_C void SkinEntry_t4112F7EB8FA7FAC2011F2139F5C251CEE83393C4_marshal_pinvoke_cleanup(SkinEntry_t4112F7EB8FA7FAC2011F2139F5C251CEE83393C4_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: Spine.Skin/SkinEntry
IL2CPP_EXTERN_C void SkinEntry_t4112F7EB8FA7FAC2011F2139F5C251CEE83393C4_marshal_com(const SkinEntry_t4112F7EB8FA7FAC2011F2139F5C251CEE83393C4& unmarshaled, SkinEntry_t4112F7EB8FA7FAC2011F2139F5C251CEE83393C4_marshaled_com& marshaled)
{
	Exception_t* ___attachment_2Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'attachment' of type 'SkinEntry': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___attachment_2Exception, NULL);
}
IL2CPP_EXTERN_C void SkinEntry_t4112F7EB8FA7FAC2011F2139F5C251CEE83393C4_marshal_com_back(const SkinEntry_t4112F7EB8FA7FAC2011F2139F5C251CEE83393C4_marshaled_com& marshaled, SkinEntry_t4112F7EB8FA7FAC2011F2139F5C251CEE83393C4& unmarshaled)
{
	Exception_t* ___attachment_2Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'attachment' of type 'SkinEntry': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___attachment_2Exception, NULL);
}
// Conversion method for clean up from marshalling of: Spine.Skin/SkinEntry
IL2CPP_EXTERN_C void SkinEntry_t4112F7EB8FA7FAC2011F2139F5C251CEE83393C4_marshal_com_cleanup(SkinEntry_t4112F7EB8FA7FAC2011F2139F5C251CEE83393C4_marshaled_com& marshaled)
{
}
// System.Void Spine.Skin/SkinEntry::.ctor(System.Int32,System.String,Spine.Attachment)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SkinEntry__ctor_m1855C514A973635B0644A9DA0FA8CFEF7E54098E (SkinEntry_t4112F7EB8FA7FAC2011F2139F5C251CEE83393C4 * __this, int32_t ___slotIndex0, String_t* ___name1, Attachment_tA85256BF51006C369687395955B6A6B51D432F21 * ___attachment2, const RuntimeMethod* method)
{
	{
		// this.slotIndex = slotIndex;
		int32_t L_0 = ___slotIndex0;
		__this->set_slotIndex_0(L_0);
		// this.name = name;
		String_t* L_1 = ___name1;
		__this->set_name_1(L_1);
		// this.attachment = attachment;
		Attachment_tA85256BF51006C369687395955B6A6B51D432F21 * L_2 = ___attachment2;
		__this->set_attachment_2(L_2);
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void SkinEntry__ctor_m1855C514A973635B0644A9DA0FA8CFEF7E54098E_AdjustorThunk (RuntimeObject * __this, int32_t ___slotIndex0, String_t* ___name1, Attachment_tA85256BF51006C369687395955B6A6B51D432F21 * ___attachment2, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	SkinEntry_t4112F7EB8FA7FAC2011F2139F5C251CEE83393C4 * _thisAdjusted = reinterpret_cast<SkinEntry_t4112F7EB8FA7FAC2011F2139F5C251CEE83393C4 *>(__this + _offset);
	SkinEntry__ctor_m1855C514A973635B0644A9DA0FA8CFEF7E54098E(_thisAdjusted, ___slotIndex0, ___name1, ___attachment2, method);
}
// System.Int32 Spine.Skin/SkinEntry::get_SlotIndex()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SkinEntry_get_SlotIndex_m60F18BF0EF0A626BAD2703DDFF331C1AC354DAEF (SkinEntry_t4112F7EB8FA7FAC2011F2139F5C251CEE83393C4 * __this, const RuntimeMethod* method)
{
	{
		// return slotIndex;
		int32_t L_0 = __this->get_slotIndex_0();
		return L_0;
	}
}
IL2CPP_EXTERN_C  int32_t SkinEntry_get_SlotIndex_m60F18BF0EF0A626BAD2703DDFF331C1AC354DAEF_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	SkinEntry_t4112F7EB8FA7FAC2011F2139F5C251CEE83393C4 * _thisAdjusted = reinterpret_cast<SkinEntry_t4112F7EB8FA7FAC2011F2139F5C251CEE83393C4 *>(__this + _offset);
	int32_t _returnValue;
	_returnValue = SkinEntry_get_SlotIndex_m60F18BF0EF0A626BAD2703DDFF331C1AC354DAEF_inline(_thisAdjusted, method);
	return _returnValue;
}
// System.String Spine.Skin/SkinEntry::get_Name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SkinEntry_get_Name_m5177BC3C9F82E943338843B4D1626EC2E9D4938B (SkinEntry_t4112F7EB8FA7FAC2011F2139F5C251CEE83393C4 * __this, const RuntimeMethod* method)
{
	{
		// return name;
		String_t* L_0 = __this->get_name_1();
		return L_0;
	}
}
IL2CPP_EXTERN_C  String_t* SkinEntry_get_Name_m5177BC3C9F82E943338843B4D1626EC2E9D4938B_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	SkinEntry_t4112F7EB8FA7FAC2011F2139F5C251CEE83393C4 * _thisAdjusted = reinterpret_cast<SkinEntry_t4112F7EB8FA7FAC2011F2139F5C251CEE83393C4 *>(__this + _offset);
	String_t* _returnValue;
	_returnValue = SkinEntry_get_Name_m5177BC3C9F82E943338843B4D1626EC2E9D4938B_inline(_thisAdjusted, method);
	return _returnValue;
}
// Spine.Attachment Spine.Skin/SkinEntry::get_Attachment()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Attachment_tA85256BF51006C369687395955B6A6B51D432F21 * SkinEntry_get_Attachment_m6574C605D1249A88A1B15385C94170914D120843 (SkinEntry_t4112F7EB8FA7FAC2011F2139F5C251CEE83393C4 * __this, const RuntimeMethod* method)
{
	{
		// return attachment;
		Attachment_tA85256BF51006C369687395955B6A6B51D432F21 * L_0 = __this->get_attachment_2();
		return L_0;
	}
}
IL2CPP_EXTERN_C  Attachment_tA85256BF51006C369687395955B6A6B51D432F21 * SkinEntry_get_Attachment_m6574C605D1249A88A1B15385C94170914D120843_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	SkinEntry_t4112F7EB8FA7FAC2011F2139F5C251CEE83393C4 * _thisAdjusted = reinterpret_cast<SkinEntry_t4112F7EB8FA7FAC2011F2139F5C251CEE83393C4 *>(__this + _offset);
	Attachment_tA85256BF51006C369687395955B6A6B51D432F21 * _returnValue;
	_returnValue = SkinEntry_get_Attachment_m6574C605D1249A88A1B15385C94170914D120843_inline(_thisAdjusted, method);
	return _returnValue;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Conversion methods for marshalling of: Spine.Skin/SkinKey
IL2CPP_EXTERN_C void SkinKey_t375635E838ECDEB11B7C69698A0DECC8C37075E8_marshal_pinvoke(const SkinKey_t375635E838ECDEB11B7C69698A0DECC8C37075E8& unmarshaled, SkinKey_t375635E838ECDEB11B7C69698A0DECC8C37075E8_marshaled_pinvoke& marshaled)
{
	marshaled.___slotIndex_0 = unmarshaled.get_slotIndex_0();
	marshaled.___name_1 = il2cpp_codegen_marshal_string(unmarshaled.get_name_1());
	marshaled.___hashCode_2 = unmarshaled.get_hashCode_2();
}
IL2CPP_EXTERN_C void SkinKey_t375635E838ECDEB11B7C69698A0DECC8C37075E8_marshal_pinvoke_back(const SkinKey_t375635E838ECDEB11B7C69698A0DECC8C37075E8_marshaled_pinvoke& marshaled, SkinKey_t375635E838ECDEB11B7C69698A0DECC8C37075E8& unmarshaled)
{
	int32_t unmarshaled_slotIndex_temp_0 = 0;
	unmarshaled_slotIndex_temp_0 = marshaled.___slotIndex_0;
	unmarshaled.set_slotIndex_0(unmarshaled_slotIndex_temp_0);
	unmarshaled.set_name_1(il2cpp_codegen_marshal_string_result(marshaled.___name_1));
	int32_t unmarshaled_hashCode_temp_2 = 0;
	unmarshaled_hashCode_temp_2 = marshaled.___hashCode_2;
	unmarshaled.set_hashCode_2(unmarshaled_hashCode_temp_2);
}
// Conversion method for clean up from marshalling of: Spine.Skin/SkinKey
IL2CPP_EXTERN_C void SkinKey_t375635E838ECDEB11B7C69698A0DECC8C37075E8_marshal_pinvoke_cleanup(SkinKey_t375635E838ECDEB11B7C69698A0DECC8C37075E8_marshaled_pinvoke& marshaled)
{
	il2cpp_codegen_marshal_free(marshaled.___name_1);
	marshaled.___name_1 = NULL;
}
// Conversion methods for marshalling of: Spine.Skin/SkinKey
IL2CPP_EXTERN_C void SkinKey_t375635E838ECDEB11B7C69698A0DECC8C37075E8_marshal_com(const SkinKey_t375635E838ECDEB11B7C69698A0DECC8C37075E8& unmarshaled, SkinKey_t375635E838ECDEB11B7C69698A0DECC8C37075E8_marshaled_com& marshaled)
{
	marshaled.___slotIndex_0 = unmarshaled.get_slotIndex_0();
	marshaled.___name_1 = il2cpp_codegen_marshal_bstring(unmarshaled.get_name_1());
	marshaled.___hashCode_2 = unmarshaled.get_hashCode_2();
}
IL2CPP_EXTERN_C void SkinKey_t375635E838ECDEB11B7C69698A0DECC8C37075E8_marshal_com_back(const SkinKey_t375635E838ECDEB11B7C69698A0DECC8C37075E8_marshaled_com& marshaled, SkinKey_t375635E838ECDEB11B7C69698A0DECC8C37075E8& unmarshaled)
{
	int32_t unmarshaled_slotIndex_temp_0 = 0;
	unmarshaled_slotIndex_temp_0 = marshaled.___slotIndex_0;
	unmarshaled.set_slotIndex_0(unmarshaled_slotIndex_temp_0);
	unmarshaled.set_name_1(il2cpp_codegen_marshal_bstring_result(marshaled.___name_1));
	int32_t unmarshaled_hashCode_temp_2 = 0;
	unmarshaled_hashCode_temp_2 = marshaled.___hashCode_2;
	unmarshaled.set_hashCode_2(unmarshaled_hashCode_temp_2);
}
// Conversion method for clean up from marshalling of: Spine.Skin/SkinKey
IL2CPP_EXTERN_C void SkinKey_t375635E838ECDEB11B7C69698A0DECC8C37075E8_marshal_com_cleanup(SkinKey_t375635E838ECDEB11B7C69698A0DECC8C37075E8_marshaled_com& marshaled)
{
	il2cpp_codegen_marshal_free_bstring(marshaled.___name_1);
	marshaled.___name_1 = NULL;
}
// System.Void Spine.Skin/SkinKey::.ctor(System.Int32,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SkinKey__ctor_m186DE323903429C9B364961256244CAB324D0A4A (SkinKey_t375635E838ECDEB11B7C69698A0DECC8C37075E8 * __this, int32_t ___slotIndex0, String_t* ___name1, const RuntimeMethod* method)
{
	{
		// if (slotIndex < 0) throw new ArgumentException("slotIndex must be >= 0.");
		int32_t L_0 = ___slotIndex0;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_000f;
		}
	}
	{
		// if (slotIndex < 0) throw new ArgumentException("slotIndex must be >= 0.");
		ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 * L_1 = (ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m2D35EAD113C2ADC99EB17B940A2097A93FD23EFC(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral415B33E751EB342E42AB189D9404D56A96C6C393)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SkinKey__ctor_m186DE323903429C9B364961256244CAB324D0A4A_RuntimeMethod_var)));
	}

IL_000f:
	{
		// if (name == null) throw new ArgumentNullException("name", "name cannot be null");
		String_t* L_2 = ___name1;
		if (L_2)
		{
			goto IL_0022;
		}
	}
	{
		// if (name == null) throw new ArgumentNullException("name", "name cannot be null");
		ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB * L_3 = (ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_mAD2F05A24C92A657CBCA8C43A9A373C53739A283(L_3, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralCE18B047107AA23D1AA9B2ED32D316148E02655F)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralD5A0157A4D0640187967DD9595192830F6FC0E50)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SkinKey__ctor_m186DE323903429C9B364961256244CAB324D0A4A_RuntimeMethod_var)));
	}

IL_0022:
	{
		// this.slotIndex = slotIndex;
		int32_t L_4 = ___slotIndex0;
		__this->set_slotIndex_0(L_4);
		// this.name = name;
		String_t* L_5 = ___name1;
		__this->set_name_1(L_5);
		// this.hashCode = name.GetHashCode() + slotIndex * 37;
		String_t* L_6 = ___name1;
		int32_t L_7;
		L_7 = VirtFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Object::GetHashCode() */, L_6);
		int32_t L_8 = ___slotIndex0;
		__this->set_hashCode_2(((int32_t)il2cpp_codegen_add((int32_t)L_7, (int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_8, (int32_t)((int32_t)37))))));
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void SkinKey__ctor_m186DE323903429C9B364961256244CAB324D0A4A_AdjustorThunk (RuntimeObject * __this, int32_t ___slotIndex0, String_t* ___name1, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	SkinKey_t375635E838ECDEB11B7C69698A0DECC8C37075E8 * _thisAdjusted = reinterpret_cast<SkinKey_t375635E838ECDEB11B7C69698A0DECC8C37075E8 *>(__this + _offset);
	SkinKey__ctor_m186DE323903429C9B364961256244CAB324D0A4A(_thisAdjusted, ___slotIndex0, ___name1, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Boolean Spine.Skin/SkinKeyComparer::System.Collections.Generic.IEqualityComparer<Spine.Skin.SkinKey>.Equals(Spine.Skin/SkinKey,Spine.Skin/SkinKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SkinKeyComparer_System_Collections_Generic_IEqualityComparerU3CSpine_Skin_SkinKeyU3E_Equals_mD4B53C0CB7538022F10EA07373420C9FD54C7AD4 (SkinKeyComparer_t4F9D27D9EB27FB8A643889C17AD3E9682592B764 * __this, SkinKey_t375635E838ECDEB11B7C69698A0DECC8C37075E8  ___e10, SkinKey_t375635E838ECDEB11B7C69698A0DECC8C37075E8  ___e21, const RuntimeMethod* method)
{
	{
		// return e1.slotIndex == e2.slotIndex && string.Equals(e1.name, e2.name, StringComparison.Ordinal);
		SkinKey_t375635E838ECDEB11B7C69698A0DECC8C37075E8  L_0 = ___e10;
		int32_t L_1 = L_0.get_slotIndex_0();
		SkinKey_t375635E838ECDEB11B7C69698A0DECC8C37075E8  L_2 = ___e21;
		int32_t L_3 = L_2.get_slotIndex_0();
		if ((!(((uint32_t)L_1) == ((uint32_t)L_3))))
		{
			goto IL_0021;
		}
	}
	{
		SkinKey_t375635E838ECDEB11B7C69698A0DECC8C37075E8  L_4 = ___e10;
		String_t* L_5 = L_4.get_name_1();
		SkinKey_t375635E838ECDEB11B7C69698A0DECC8C37075E8  L_6 = ___e21;
		String_t* L_7 = L_6.get_name_1();
		bool L_8;
		L_8 = String_Equals_mD65682B0BB7933CC7A8561AE34DED02E4F3BBBE5(L_5, L_7, 4, /*hidden argument*/NULL);
		return L_8;
	}

IL_0021:
	{
		return (bool)0;
	}
}
// System.Int32 Spine.Skin/SkinKeyComparer::System.Collections.Generic.IEqualityComparer<Spine.Skin.SkinKey>.GetHashCode(Spine.Skin/SkinKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SkinKeyComparer_System_Collections_Generic_IEqualityComparerU3CSpine_Skin_SkinKeyU3E_GetHashCode_mDE8AEC95949B1D03BC73C526F367448C6B1F4525 (SkinKeyComparer_t4F9D27D9EB27FB8A643889C17AD3E9682592B764 * __this, SkinKey_t375635E838ECDEB11B7C69698A0DECC8C37075E8  ___e0, const RuntimeMethod* method)
{
	{
		// return e.hashCode;
		SkinKey_t375635E838ECDEB11B7C69698A0DECC8C37075E8  L_0 = ___e0;
		int32_t L_1 = L_0.get_hashCode_2();
		return L_1;
	}
}
// System.Void Spine.Skin/SkinKeyComparer::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SkinKeyComparer__ctor_m19150DFF69B53B377F62562BBB149C7FABC909A0 (SkinKeyComparer_t4F9D27D9EB27FB8A643889C17AD3E9682592B764 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Spine.Skin/SkinKeyComparer::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SkinKeyComparer__cctor_m2565481D0420241AA59D0196373E974B5F1AADC0 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SkinKeyComparer_t4F9D27D9EB27FB8A643889C17AD3E9682592B764_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// internal static readonly SkinKeyComparer Instance = new SkinKeyComparer();
		SkinKeyComparer_t4F9D27D9EB27FB8A643889C17AD3E9682592B764 * L_0 = (SkinKeyComparer_t4F9D27D9EB27FB8A643889C17AD3E9682592B764 *)il2cpp_codegen_object_new(SkinKeyComparer_t4F9D27D9EB27FB8A643889C17AD3E9682592B764_il2cpp_TypeInfo_var);
		SkinKeyComparer__ctor_m19150DFF69B53B377F62562BBB149C7FABC909A0(L_0, /*hidden argument*/NULL);
		((SkinKeyComparer_t4F9D27D9EB27FB8A643889C17AD3E9682592B764_StaticFields*)il2cpp_codegen_static_fields_for(SkinKeyComparer_t4F9D27D9EB27FB8A643889C17AD3E9682592B764_il2cpp_TypeInfo_var))->set_Instance_0(L_0);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t SkinEntry_get_SlotIndex_m60F18BF0EF0A626BAD2703DDFF331C1AC354DAEF_inline (SkinEntry_t4112F7EB8FA7FAC2011F2139F5C251CEE83393C4 * __this, const RuntimeMethod* method)
{
	{
		// return slotIndex;
		int32_t L_0 = __this->get_slotIndex_0();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* SkinEntry_get_Name_m5177BC3C9F82E943338843B4D1626EC2E9D4938B_inline (SkinEntry_t4112F7EB8FA7FAC2011F2139F5C251CEE83393C4 * __this, const RuntimeMethod* method)
{
	{
		// return name;
		String_t* L_0 = __this->get_name_1();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Attachment_tA85256BF51006C369687395955B6A6B51D432F21 * SkinEntry_get_Attachment_m6574C605D1249A88A1B15385C94170914D120843_inline (SkinEntry_t4112F7EB8FA7FAC2011F2139F5C251CEE83393C4 * __this, const RuntimeMethod* method)
{
	{
		// return attachment;
		Attachment_tA85256BF51006C369687395955B6A6B51D432F21 * L_0 = __this->get_attachment_2();
		return L_0;
	}
}
