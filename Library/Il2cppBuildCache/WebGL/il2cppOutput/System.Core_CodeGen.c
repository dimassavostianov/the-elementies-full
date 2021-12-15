#include "pch-c.h"
#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include "codegen/il2cpp-codegen-metadata.h"





// 0x00000001 System.Exception System.Linq.Error::ArgumentNull(System.String)
extern void Error_ArgumentNull_m0EDA0D46D72CA692518E3E2EB75B48044D8FD41E (void);
// 0x00000002 System.Exception System.Linq.Error::ArgumentOutOfRange(System.String)
extern void Error_ArgumentOutOfRange_m2EFB999454161A6B48F8DAC3753FDC190538F0F2 (void);
// 0x00000003 System.Exception System.Linq.Error::MoreThanOneMatch()
extern void Error_MoreThanOneMatch_m4C4756AF34A76EF12F3B2B6D8C78DE547F0FBCF8 (void);
// 0x00000004 System.Exception System.Linq.Error::NoElements()
extern void Error_NoElements_mB89E91246572F009281D79730950808F17C3F353 (void);
// 0x00000005 System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable::Where(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
// 0x00000006 System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable::Select(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,TResult>)
// 0x00000007 System.Func`2<TSource,System.Boolean> System.Linq.Enumerable::CombinePredicates(System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,System.Boolean>)
// 0x00000008 System.Func`2<TSource,TResult> System.Linq.Enumerable::CombineSelectors(System.Func`2<TSource,TMiddle>,System.Func`2<TMiddle,TResult>)
// 0x00000009 System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable::SelectMany(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Collections.Generic.IEnumerable`1<TResult>>)
// 0x0000000A System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable::SelectManyIterator(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Collections.Generic.IEnumerable`1<TResult>>)
// 0x0000000B System.Linq.IOrderedEnumerable`1<TSource> System.Linq.Enumerable::OrderBy(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,TKey>)
// 0x0000000C System.Linq.IOrderedEnumerable`1<TSource> System.Linq.Enumerable::ThenBy(System.Linq.IOrderedEnumerable`1<TSource>,System.Func`2<TSource,TKey>)
// 0x0000000D System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable::Distinct(System.Collections.Generic.IEnumerable`1<TSource>)
// 0x0000000E System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable::DistinctIterator(System.Collections.Generic.IEnumerable`1<TSource>,System.Collections.Generic.IEqualityComparer`1<TSource>)
// 0x0000000F TSource[] System.Linq.Enumerable::ToArray(System.Collections.Generic.IEnumerable`1<TSource>)
// 0x00000010 System.Collections.Generic.List`1<TSource> System.Linq.Enumerable::ToList(System.Collections.Generic.IEnumerable`1<TSource>)
// 0x00000011 TSource System.Linq.Enumerable::First(System.Collections.Generic.IEnumerable`1<TSource>)
// 0x00000012 TSource System.Linq.Enumerable::FirstOrDefault(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
// 0x00000013 TSource System.Linq.Enumerable::Last(System.Collections.Generic.IEnumerable`1<TSource>)
// 0x00000014 TSource System.Linq.Enumerable::SingleOrDefault(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
// 0x00000015 TSource System.Linq.Enumerable::ElementAt(System.Collections.Generic.IEnumerable`1<TSource>,System.Int32)
// 0x00000016 System.Boolean System.Linq.Enumerable::Any(System.Collections.Generic.IEnumerable`1<TSource>)
// 0x00000017 System.Boolean System.Linq.Enumerable::Any(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
// 0x00000018 System.Int32 System.Linq.Enumerable::Count(System.Collections.Generic.IEnumerable`1<TSource>)
// 0x00000019 System.Int32 System.Linq.Enumerable::Count(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
// 0x0000001A System.Boolean System.Linq.Enumerable::Contains(System.Collections.Generic.IEnumerable`1<TSource>,TSource)
// 0x0000001B System.Boolean System.Linq.Enumerable::Contains(System.Collections.Generic.IEnumerable`1<TSource>,TSource,System.Collections.Generic.IEqualityComparer`1<TSource>)
// 0x0000001C System.Void System.Linq.Enumerable/Iterator`1::.ctor()
// 0x0000001D TSource System.Linq.Enumerable/Iterator`1::get_Current()
// 0x0000001E System.Linq.Enumerable/Iterator`1<TSource> System.Linq.Enumerable/Iterator`1::Clone()
// 0x0000001F System.Void System.Linq.Enumerable/Iterator`1::Dispose()
// 0x00000020 System.Collections.Generic.IEnumerator`1<TSource> System.Linq.Enumerable/Iterator`1::GetEnumerator()
// 0x00000021 System.Boolean System.Linq.Enumerable/Iterator`1::MoveNext()
// 0x00000022 System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/Iterator`1::Select(System.Func`2<TSource,TResult>)
// 0x00000023 System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable/Iterator`1::Where(System.Func`2<TSource,System.Boolean>)
// 0x00000024 System.Object System.Linq.Enumerable/Iterator`1::System.Collections.IEnumerator.get_Current()
// 0x00000025 System.Collections.IEnumerator System.Linq.Enumerable/Iterator`1::System.Collections.IEnumerable.GetEnumerator()
// 0x00000026 System.Void System.Linq.Enumerable/Iterator`1::System.Collections.IEnumerator.Reset()
// 0x00000027 System.Void System.Linq.Enumerable/WhereEnumerableIterator`1::.ctor(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
// 0x00000028 System.Linq.Enumerable/Iterator`1<TSource> System.Linq.Enumerable/WhereEnumerableIterator`1::Clone()
// 0x00000029 System.Void System.Linq.Enumerable/WhereEnumerableIterator`1::Dispose()
// 0x0000002A System.Boolean System.Linq.Enumerable/WhereEnumerableIterator`1::MoveNext()
// 0x0000002B System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereEnumerableIterator`1::Select(System.Func`2<TSource,TResult>)
// 0x0000002C System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable/WhereEnumerableIterator`1::Where(System.Func`2<TSource,System.Boolean>)
// 0x0000002D System.Void System.Linq.Enumerable/WhereArrayIterator`1::.ctor(TSource[],System.Func`2<TSource,System.Boolean>)
// 0x0000002E System.Linq.Enumerable/Iterator`1<TSource> System.Linq.Enumerable/WhereArrayIterator`1::Clone()
// 0x0000002F System.Boolean System.Linq.Enumerable/WhereArrayIterator`1::MoveNext()
// 0x00000030 System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereArrayIterator`1::Select(System.Func`2<TSource,TResult>)
// 0x00000031 System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable/WhereArrayIterator`1::Where(System.Func`2<TSource,System.Boolean>)
// 0x00000032 System.Void System.Linq.Enumerable/WhereListIterator`1::.ctor(System.Collections.Generic.List`1<TSource>,System.Func`2<TSource,System.Boolean>)
// 0x00000033 System.Linq.Enumerable/Iterator`1<TSource> System.Linq.Enumerable/WhereListIterator`1::Clone()
// 0x00000034 System.Boolean System.Linq.Enumerable/WhereListIterator`1::MoveNext()
// 0x00000035 System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereListIterator`1::Select(System.Func`2<TSource,TResult>)
// 0x00000036 System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable/WhereListIterator`1::Where(System.Func`2<TSource,System.Boolean>)
// 0x00000037 System.Void System.Linq.Enumerable/WhereSelectEnumerableIterator`2::.ctor(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
// 0x00000038 System.Linq.Enumerable/Iterator`1<TResult> System.Linq.Enumerable/WhereSelectEnumerableIterator`2::Clone()
// 0x00000039 System.Void System.Linq.Enumerable/WhereSelectEnumerableIterator`2::Dispose()
// 0x0000003A System.Boolean System.Linq.Enumerable/WhereSelectEnumerableIterator`2::MoveNext()
// 0x0000003B System.Collections.Generic.IEnumerable`1<TResult2> System.Linq.Enumerable/WhereSelectEnumerableIterator`2::Select(System.Func`2<TResult,TResult2>)
// 0x0000003C System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereSelectEnumerableIterator`2::Where(System.Func`2<TResult,System.Boolean>)
// 0x0000003D System.Void System.Linq.Enumerable/WhereSelectArrayIterator`2::.ctor(TSource[],System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
// 0x0000003E System.Linq.Enumerable/Iterator`1<TResult> System.Linq.Enumerable/WhereSelectArrayIterator`2::Clone()
// 0x0000003F System.Boolean System.Linq.Enumerable/WhereSelectArrayIterator`2::MoveNext()
// 0x00000040 System.Collections.Generic.IEnumerable`1<TResult2> System.Linq.Enumerable/WhereSelectArrayIterator`2::Select(System.Func`2<TResult,TResult2>)
// 0x00000041 System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereSelectArrayIterator`2::Where(System.Func`2<TResult,System.Boolean>)
// 0x00000042 System.Void System.Linq.Enumerable/WhereSelectListIterator`2::.ctor(System.Collections.Generic.List`1<TSource>,System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
// 0x00000043 System.Linq.Enumerable/Iterator`1<TResult> System.Linq.Enumerable/WhereSelectListIterator`2::Clone()
// 0x00000044 System.Boolean System.Linq.Enumerable/WhereSelectListIterator`2::MoveNext()
// 0x00000045 System.Collections.Generic.IEnumerable`1<TResult2> System.Linq.Enumerable/WhereSelectListIterator`2::Select(System.Func`2<TResult,TResult2>)
// 0x00000046 System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereSelectListIterator`2::Where(System.Func`2<TResult,System.Boolean>)
// 0x00000047 System.Void System.Linq.Enumerable/<>c__DisplayClass6_0`1::.ctor()
// 0x00000048 System.Boolean System.Linq.Enumerable/<>c__DisplayClass6_0`1::<CombinePredicates>b__0(TSource)
// 0x00000049 System.Void System.Linq.Enumerable/<>c__DisplayClass7_0`3::.ctor()
// 0x0000004A TResult System.Linq.Enumerable/<>c__DisplayClass7_0`3::<CombineSelectors>b__0(TSource)
// 0x0000004B System.Void System.Linq.Enumerable/<SelectManyIterator>d__17`2::.ctor(System.Int32)
// 0x0000004C System.Void System.Linq.Enumerable/<SelectManyIterator>d__17`2::System.IDisposable.Dispose()
// 0x0000004D System.Boolean System.Linq.Enumerable/<SelectManyIterator>d__17`2::MoveNext()
// 0x0000004E System.Void System.Linq.Enumerable/<SelectManyIterator>d__17`2::<>m__Finally1()
// 0x0000004F System.Void System.Linq.Enumerable/<SelectManyIterator>d__17`2::<>m__Finally2()
// 0x00000050 TResult System.Linq.Enumerable/<SelectManyIterator>d__17`2::System.Collections.Generic.IEnumerator<TResult>.get_Current()
// 0x00000051 System.Void System.Linq.Enumerable/<SelectManyIterator>d__17`2::System.Collections.IEnumerator.Reset()
// 0x00000052 System.Object System.Linq.Enumerable/<SelectManyIterator>d__17`2::System.Collections.IEnumerator.get_Current()
// 0x00000053 System.Collections.Generic.IEnumerator`1<TResult> System.Linq.Enumerable/<SelectManyIterator>d__17`2::System.Collections.Generic.IEnumerable<TResult>.GetEnumerator()
// 0x00000054 System.Collections.IEnumerator System.Linq.Enumerable/<SelectManyIterator>d__17`2::System.Collections.IEnumerable.GetEnumerator()
// 0x00000055 System.Void System.Linq.Enumerable/<DistinctIterator>d__68`1::.ctor(System.Int32)
// 0x00000056 System.Void System.Linq.Enumerable/<DistinctIterator>d__68`1::System.IDisposable.Dispose()
// 0x00000057 System.Boolean System.Linq.Enumerable/<DistinctIterator>d__68`1::MoveNext()
// 0x00000058 System.Void System.Linq.Enumerable/<DistinctIterator>d__68`1::<>m__Finally1()
// 0x00000059 TSource System.Linq.Enumerable/<DistinctIterator>d__68`1::System.Collections.Generic.IEnumerator<TSource>.get_Current()
// 0x0000005A System.Void System.Linq.Enumerable/<DistinctIterator>d__68`1::System.Collections.IEnumerator.Reset()
// 0x0000005B System.Object System.Linq.Enumerable/<DistinctIterator>d__68`1::System.Collections.IEnumerator.get_Current()
// 0x0000005C System.Collections.Generic.IEnumerator`1<TSource> System.Linq.Enumerable/<DistinctIterator>d__68`1::System.Collections.Generic.IEnumerable<TSource>.GetEnumerator()
// 0x0000005D System.Collections.IEnumerator System.Linq.Enumerable/<DistinctIterator>d__68`1::System.Collections.IEnumerable.GetEnumerator()
// 0x0000005E System.Linq.IOrderedEnumerable`1<TElement> System.Linq.IOrderedEnumerable`1::CreateOrderedEnumerable(System.Func`2<TElement,TKey>,System.Collections.Generic.IComparer`1<TKey>,System.Boolean)
// 0x0000005F System.Void System.Linq.Set`1::.ctor(System.Collections.Generic.IEqualityComparer`1<TElement>)
// 0x00000060 System.Boolean System.Linq.Set`1::Add(TElement)
// 0x00000061 System.Boolean System.Linq.Set`1::Find(TElement,System.Boolean)
// 0x00000062 System.Void System.Linq.Set`1::Resize()
// 0x00000063 System.Int32 System.Linq.Set`1::InternalGetHashCode(TElement)
// 0x00000064 System.Collections.Generic.IEnumerator`1<TElement> System.Linq.OrderedEnumerable`1::GetEnumerator()
// 0x00000065 System.Linq.EnumerableSorter`1<TElement> System.Linq.OrderedEnumerable`1::GetEnumerableSorter(System.Linq.EnumerableSorter`1<TElement>)
// 0x00000066 System.Collections.IEnumerator System.Linq.OrderedEnumerable`1::System.Collections.IEnumerable.GetEnumerator()
// 0x00000067 System.Linq.IOrderedEnumerable`1<TElement> System.Linq.OrderedEnumerable`1::System.Linq.IOrderedEnumerable<TElement>.CreateOrderedEnumerable(System.Func`2<TElement,TKey>,System.Collections.Generic.IComparer`1<TKey>,System.Boolean)
// 0x00000068 System.Void System.Linq.OrderedEnumerable`1::.ctor()
// 0x00000069 System.Void System.Linq.OrderedEnumerable`1/<GetEnumerator>d__1::.ctor(System.Int32)
// 0x0000006A System.Void System.Linq.OrderedEnumerable`1/<GetEnumerator>d__1::System.IDisposable.Dispose()
// 0x0000006B System.Boolean System.Linq.OrderedEnumerable`1/<GetEnumerator>d__1::MoveNext()
// 0x0000006C TElement System.Linq.OrderedEnumerable`1/<GetEnumerator>d__1::System.Collections.Generic.IEnumerator<TElement>.get_Current()
// 0x0000006D System.Void System.Linq.OrderedEnumerable`1/<GetEnumerator>d__1::System.Collections.IEnumerator.Reset()
// 0x0000006E System.Object System.Linq.OrderedEnumerable`1/<GetEnumerator>d__1::System.Collections.IEnumerator.get_Current()
// 0x0000006F System.Void System.Linq.OrderedEnumerable`2::.ctor(System.Collections.Generic.IEnumerable`1<TElement>,System.Func`2<TElement,TKey>,System.Collections.Generic.IComparer`1<TKey>,System.Boolean)
// 0x00000070 System.Linq.EnumerableSorter`1<TElement> System.Linq.OrderedEnumerable`2::GetEnumerableSorter(System.Linq.EnumerableSorter`1<TElement>)
// 0x00000071 System.Void System.Linq.EnumerableSorter`1::ComputeKeys(TElement[],System.Int32)
// 0x00000072 System.Int32 System.Linq.EnumerableSorter`1::CompareKeys(System.Int32,System.Int32)
// 0x00000073 System.Int32[] System.Linq.EnumerableSorter`1::Sort(TElement[],System.Int32)
// 0x00000074 System.Void System.Linq.EnumerableSorter`1::QuickSort(System.Int32[],System.Int32,System.Int32)
// 0x00000075 System.Void System.Linq.EnumerableSorter`1::.ctor()
// 0x00000076 System.Void System.Linq.EnumerableSorter`2::.ctor(System.Func`2<TElement,TKey>,System.Collections.Generic.IComparer`1<TKey>,System.Boolean,System.Linq.EnumerableSorter`1<TElement>)
// 0x00000077 System.Void System.Linq.EnumerableSorter`2::ComputeKeys(TElement[],System.Int32)
// 0x00000078 System.Int32 System.Linq.EnumerableSorter`2::CompareKeys(System.Int32,System.Int32)
// 0x00000079 System.Void System.Linq.Buffer`1::.ctor(System.Collections.Generic.IEnumerable`1<TElement>)
// 0x0000007A TElement[] System.Linq.Buffer`1::ToArray()
// 0x0000007B System.Void System.Collections.Generic.HashSet`1::.ctor()
// 0x0000007C System.Void System.Collections.Generic.HashSet`1::.ctor(System.Collections.Generic.IEqualityComparer`1<T>)
// 0x0000007D System.Void System.Collections.Generic.HashSet`1::.ctor(System.Collections.Generic.IEnumerable`1<T>)
// 0x0000007E System.Void System.Collections.Generic.HashSet`1::.ctor(System.Collections.Generic.IEnumerable`1<T>,System.Collections.Generic.IEqualityComparer`1<T>)
// 0x0000007F System.Void System.Collections.Generic.HashSet`1::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
// 0x00000080 System.Void System.Collections.Generic.HashSet`1::CopyFrom(System.Collections.Generic.HashSet`1<T>)
// 0x00000081 System.Void System.Collections.Generic.HashSet`1::System.Collections.Generic.ICollection<T>.Add(T)
// 0x00000082 System.Void System.Collections.Generic.HashSet`1::Clear()
// 0x00000083 System.Boolean System.Collections.Generic.HashSet`1::Contains(T)
// 0x00000084 System.Void System.Collections.Generic.HashSet`1::CopyTo(T[],System.Int32)
// 0x00000085 System.Boolean System.Collections.Generic.HashSet`1::Remove(T)
// 0x00000086 System.Int32 System.Collections.Generic.HashSet`1::get_Count()
// 0x00000087 System.Boolean System.Collections.Generic.HashSet`1::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
// 0x00000088 System.Collections.Generic.HashSet`1/Enumerator<T> System.Collections.Generic.HashSet`1::GetEnumerator()
// 0x00000089 System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.HashSet`1::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
// 0x0000008A System.Collections.IEnumerator System.Collections.Generic.HashSet`1::System.Collections.IEnumerable.GetEnumerator()
// 0x0000008B System.Void System.Collections.Generic.HashSet`1::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
// 0x0000008C System.Void System.Collections.Generic.HashSet`1::OnDeserialization(System.Object)
// 0x0000008D System.Boolean System.Collections.Generic.HashSet`1::Add(T)
// 0x0000008E System.Void System.Collections.Generic.HashSet`1::UnionWith(System.Collections.Generic.IEnumerable`1<T>)
// 0x0000008F System.Void System.Collections.Generic.HashSet`1::CopyTo(T[])
// 0x00000090 System.Void System.Collections.Generic.HashSet`1::CopyTo(T[],System.Int32,System.Int32)
// 0x00000091 System.Collections.Generic.IEqualityComparer`1<T> System.Collections.Generic.HashSet`1::get_Comparer()
// 0x00000092 System.Void System.Collections.Generic.HashSet`1::TrimExcess()
// 0x00000093 System.Void System.Collections.Generic.HashSet`1::Initialize(System.Int32)
// 0x00000094 System.Void System.Collections.Generic.HashSet`1::IncreaseCapacity()
// 0x00000095 System.Void System.Collections.Generic.HashSet`1::SetCapacity(System.Int32)
// 0x00000096 System.Boolean System.Collections.Generic.HashSet`1::AddIfNotPresent(T)
// 0x00000097 System.Void System.Collections.Generic.HashSet`1::AddValue(System.Int32,System.Int32,T)
// 0x00000098 System.Boolean System.Collections.Generic.HashSet`1::AreEqualityComparersEqual(System.Collections.Generic.HashSet`1<T>,System.Collections.Generic.HashSet`1<T>)
// 0x00000099 System.Int32 System.Collections.Generic.HashSet`1::InternalGetHashCode(T)
// 0x0000009A System.Void System.Collections.Generic.HashSet`1/Enumerator::.ctor(System.Collections.Generic.HashSet`1<T>)
// 0x0000009B System.Void System.Collections.Generic.HashSet`1/Enumerator::Dispose()
// 0x0000009C System.Boolean System.Collections.Generic.HashSet`1/Enumerator::MoveNext()
// 0x0000009D T System.Collections.Generic.HashSet`1/Enumerator::get_Current()
// 0x0000009E System.Object System.Collections.Generic.HashSet`1/Enumerator::System.Collections.IEnumerator.get_Current()
// 0x0000009F System.Void System.Collections.Generic.HashSet`1/Enumerator::System.Collections.IEnumerator.Reset()
static Il2CppMethodPointer s_methodPointers[159] = 
{
	Error_ArgumentNull_m0EDA0D46D72CA692518E3E2EB75B48044D8FD41E,
	Error_ArgumentOutOfRange_m2EFB999454161A6B48F8DAC3753FDC190538F0F2,
	Error_MoreThanOneMatch_m4C4756AF34A76EF12F3B2B6D8C78DE547F0FBCF8,
	Error_NoElements_mB89E91246572F009281D79730950808F17C3F353,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
};
static const int32_t s_InvokerIndices[159] = 
{
	3895,
	3895,
	4014,
	4014,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
};
static const Il2CppTokenRangePair s_rgctxIndices[50] = 
{
	{ 0x02000004, { 77, 4 } },
	{ 0x02000005, { 81, 9 } },
	{ 0x02000006, { 92, 7 } },
	{ 0x02000007, { 101, 10 } },
	{ 0x02000008, { 113, 11 } },
	{ 0x02000009, { 127, 9 } },
	{ 0x0200000A, { 139, 12 } },
	{ 0x0200000B, { 154, 1 } },
	{ 0x0200000C, { 155, 2 } },
	{ 0x0200000D, { 157, 12 } },
	{ 0x0200000E, { 169, 11 } },
	{ 0x02000010, { 180, 8 } },
	{ 0x02000012, { 188, 3 } },
	{ 0x02000013, { 193, 5 } },
	{ 0x02000014, { 198, 7 } },
	{ 0x02000015, { 205, 3 } },
	{ 0x02000016, { 208, 7 } },
	{ 0x02000017, { 215, 4 } },
	{ 0x02000018, { 219, 34 } },
	{ 0x0200001A, { 253, 2 } },
	{ 0x06000005, { 0, 10 } },
	{ 0x06000006, { 10, 10 } },
	{ 0x06000007, { 20, 5 } },
	{ 0x06000008, { 25, 5 } },
	{ 0x06000009, { 30, 1 } },
	{ 0x0600000A, { 31, 2 } },
	{ 0x0600000B, { 33, 2 } },
	{ 0x0600000C, { 35, 1 } },
	{ 0x0600000D, { 36, 1 } },
	{ 0x0600000E, { 37, 2 } },
	{ 0x0600000F, { 39, 3 } },
	{ 0x06000010, { 42, 2 } },
	{ 0x06000011, { 44, 4 } },
	{ 0x06000012, { 48, 3 } },
	{ 0x06000013, { 51, 4 } },
	{ 0x06000014, { 55, 3 } },
	{ 0x06000015, { 58, 3 } },
	{ 0x06000016, { 61, 1 } },
	{ 0x06000017, { 62, 3 } },
	{ 0x06000018, { 65, 2 } },
	{ 0x06000019, { 67, 3 } },
	{ 0x0600001A, { 70, 2 } },
	{ 0x0600001B, { 72, 5 } },
	{ 0x0600002B, { 90, 2 } },
	{ 0x06000030, { 99, 2 } },
	{ 0x06000035, { 111, 2 } },
	{ 0x0600003B, { 124, 3 } },
	{ 0x06000040, { 136, 3 } },
	{ 0x06000045, { 151, 3 } },
	{ 0x06000067, { 191, 2 } },
};
static const Il2CppRGCTXDefinition s_rgctxValues[255] = 
{
	{ (Il2CppRGCTXDataType)2, 1947 },
	{ (Il2CppRGCTXDataType)3, 8153 },
	{ (Il2CppRGCTXDataType)2, 3287 },
	{ (Il2CppRGCTXDataType)2, 2830 },
	{ (Il2CppRGCTXDataType)3, 15323 },
	{ (Il2CppRGCTXDataType)2, 2064 },
	{ (Il2CppRGCTXDataType)2, 2837 },
	{ (Il2CppRGCTXDataType)3, 15362 },
	{ (Il2CppRGCTXDataType)2, 2832 },
	{ (Il2CppRGCTXDataType)3, 15330 },
	{ (Il2CppRGCTXDataType)2, 1948 },
	{ (Il2CppRGCTXDataType)3, 8154 },
	{ (Il2CppRGCTXDataType)2, 3311 },
	{ (Il2CppRGCTXDataType)2, 2839 },
	{ (Il2CppRGCTXDataType)3, 15369 },
	{ (Il2CppRGCTXDataType)2, 2084 },
	{ (Il2CppRGCTXDataType)2, 2847 },
	{ (Il2CppRGCTXDataType)3, 15426 },
	{ (Il2CppRGCTXDataType)2, 2843 },
	{ (Il2CppRGCTXDataType)3, 15395 },
	{ (Il2CppRGCTXDataType)2, 641 },
	{ (Il2CppRGCTXDataType)3, 61 },
	{ (Il2CppRGCTXDataType)3, 62 },
	{ (Il2CppRGCTXDataType)2, 1291 },
	{ (Il2CppRGCTXDataType)3, 6425 },
	{ (Il2CppRGCTXDataType)2, 642 },
	{ (Il2CppRGCTXDataType)3, 73 },
	{ (Il2CppRGCTXDataType)3, 74 },
	{ (Il2CppRGCTXDataType)2, 1301 },
	{ (Il2CppRGCTXDataType)3, 6429 },
	{ (Il2CppRGCTXDataType)3, 17842 },
	{ (Il2CppRGCTXDataType)2, 647 },
	{ (Il2CppRGCTXDataType)3, 107 },
	{ (Il2CppRGCTXDataType)2, 2521 },
	{ (Il2CppRGCTXDataType)3, 12496 },
	{ (Il2CppRGCTXDataType)3, 6979 },
	{ (Il2CppRGCTXDataType)3, 17811 },
	{ (Il2CppRGCTXDataType)2, 643 },
	{ (Il2CppRGCTXDataType)3, 79 },
	{ (Il2CppRGCTXDataType)2, 753 },
	{ (Il2CppRGCTXDataType)3, 1080 },
	{ (Il2CppRGCTXDataType)3, 1081 },
	{ (Il2CppRGCTXDataType)2, 2065 },
	{ (Il2CppRGCTXDataType)3, 8605 },
	{ (Il2CppRGCTXDataType)2, 1876 },
	{ (Il2CppRGCTXDataType)2, 1442 },
	{ (Il2CppRGCTXDataType)2, 1546 },
	{ (Il2CppRGCTXDataType)2, 1634 },
	{ (Il2CppRGCTXDataType)2, 1547 },
	{ (Il2CppRGCTXDataType)2, 1635 },
	{ (Il2CppRGCTXDataType)3, 6427 },
	{ (Il2CppRGCTXDataType)2, 1877 },
	{ (Il2CppRGCTXDataType)2, 1443 },
	{ (Il2CppRGCTXDataType)2, 1548 },
	{ (Il2CppRGCTXDataType)2, 1636 },
	{ (Il2CppRGCTXDataType)2, 1549 },
	{ (Il2CppRGCTXDataType)2, 1637 },
	{ (Il2CppRGCTXDataType)3, 6428 },
	{ (Il2CppRGCTXDataType)2, 1875 },
	{ (Il2CppRGCTXDataType)2, 1545 },
	{ (Il2CppRGCTXDataType)2, 1633 },
	{ (Il2CppRGCTXDataType)2, 1535 },
	{ (Il2CppRGCTXDataType)2, 1536 },
	{ (Il2CppRGCTXDataType)2, 1630 },
	{ (Il2CppRGCTXDataType)3, 6424 },
	{ (Il2CppRGCTXDataType)2, 1441 },
	{ (Il2CppRGCTXDataType)2, 1543 },
	{ (Il2CppRGCTXDataType)2, 1544 },
	{ (Il2CppRGCTXDataType)2, 1632 },
	{ (Il2CppRGCTXDataType)3, 6426 },
	{ (Il2CppRGCTXDataType)2, 1440 },
	{ (Il2CppRGCTXDataType)3, 17798 },
	{ (Il2CppRGCTXDataType)3, 5034 },
	{ (Il2CppRGCTXDataType)2, 1091 },
	{ (Il2CppRGCTXDataType)2, 1538 },
	{ (Il2CppRGCTXDataType)2, 1631 },
	{ (Il2CppRGCTXDataType)2, 1704 },
	{ (Il2CppRGCTXDataType)3, 8155 },
	{ (Il2CppRGCTXDataType)3, 8157 },
	{ (Il2CppRGCTXDataType)2, 440 },
	{ (Il2CppRGCTXDataType)3, 8156 },
	{ (Il2CppRGCTXDataType)3, 8165 },
	{ (Il2CppRGCTXDataType)2, 1951 },
	{ (Il2CppRGCTXDataType)2, 2833 },
	{ (Il2CppRGCTXDataType)3, 15331 },
	{ (Il2CppRGCTXDataType)3, 8166 },
	{ (Il2CppRGCTXDataType)2, 1592 },
	{ (Il2CppRGCTXDataType)2, 1662 },
	{ (Il2CppRGCTXDataType)3, 6436 },
	{ (Il2CppRGCTXDataType)3, 17784 },
	{ (Il2CppRGCTXDataType)2, 2844 },
	{ (Il2CppRGCTXDataType)3, 15396 },
	{ (Il2CppRGCTXDataType)3, 8158 },
	{ (Il2CppRGCTXDataType)2, 1950 },
	{ (Il2CppRGCTXDataType)2, 2831 },
	{ (Il2CppRGCTXDataType)3, 15324 },
	{ (Il2CppRGCTXDataType)3, 6435 },
	{ (Il2CppRGCTXDataType)3, 8159 },
	{ (Il2CppRGCTXDataType)3, 17783 },
	{ (Il2CppRGCTXDataType)2, 2840 },
	{ (Il2CppRGCTXDataType)3, 15370 },
	{ (Il2CppRGCTXDataType)3, 8172 },
	{ (Il2CppRGCTXDataType)2, 1952 },
	{ (Il2CppRGCTXDataType)2, 2838 },
	{ (Il2CppRGCTXDataType)3, 15363 },
	{ (Il2CppRGCTXDataType)3, 8657 },
	{ (Il2CppRGCTXDataType)3, 4019 },
	{ (Il2CppRGCTXDataType)3, 6437 },
	{ (Il2CppRGCTXDataType)3, 4018 },
	{ (Il2CppRGCTXDataType)3, 8173 },
	{ (Il2CppRGCTXDataType)3, 17785 },
	{ (Il2CppRGCTXDataType)2, 2848 },
	{ (Il2CppRGCTXDataType)3, 15427 },
	{ (Il2CppRGCTXDataType)3, 8186 },
	{ (Il2CppRGCTXDataType)2, 1954 },
	{ (Il2CppRGCTXDataType)2, 2846 },
	{ (Il2CppRGCTXDataType)3, 15398 },
	{ (Il2CppRGCTXDataType)3, 8187 },
	{ (Il2CppRGCTXDataType)2, 1595 },
	{ (Il2CppRGCTXDataType)2, 1665 },
	{ (Il2CppRGCTXDataType)3, 6441 },
	{ (Il2CppRGCTXDataType)3, 6440 },
	{ (Il2CppRGCTXDataType)2, 2835 },
	{ (Il2CppRGCTXDataType)3, 15333 },
	{ (Il2CppRGCTXDataType)3, 17792 },
	{ (Il2CppRGCTXDataType)2, 2845 },
	{ (Il2CppRGCTXDataType)3, 15397 },
	{ (Il2CppRGCTXDataType)3, 8179 },
	{ (Il2CppRGCTXDataType)2, 1953 },
	{ (Il2CppRGCTXDataType)2, 2842 },
	{ (Il2CppRGCTXDataType)3, 15372 },
	{ (Il2CppRGCTXDataType)3, 6439 },
	{ (Il2CppRGCTXDataType)3, 6438 },
	{ (Il2CppRGCTXDataType)3, 8180 },
	{ (Il2CppRGCTXDataType)2, 2834 },
	{ (Il2CppRGCTXDataType)3, 15332 },
	{ (Il2CppRGCTXDataType)3, 17791 },
	{ (Il2CppRGCTXDataType)2, 2841 },
	{ (Il2CppRGCTXDataType)3, 15371 },
	{ (Il2CppRGCTXDataType)3, 8193 },
	{ (Il2CppRGCTXDataType)2, 1955 },
	{ (Il2CppRGCTXDataType)2, 2850 },
	{ (Il2CppRGCTXDataType)3, 15429 },
	{ (Il2CppRGCTXDataType)3, 8658 },
	{ (Il2CppRGCTXDataType)3, 4021 },
	{ (Il2CppRGCTXDataType)3, 6443 },
	{ (Il2CppRGCTXDataType)3, 6442 },
	{ (Il2CppRGCTXDataType)3, 4020 },
	{ (Il2CppRGCTXDataType)3, 8194 },
	{ (Il2CppRGCTXDataType)2, 2836 },
	{ (Il2CppRGCTXDataType)3, 15334 },
	{ (Il2CppRGCTXDataType)3, 17793 },
	{ (Il2CppRGCTXDataType)2, 2849 },
	{ (Il2CppRGCTXDataType)3, 15428 },
	{ (Il2CppRGCTXDataType)3, 6432 },
	{ (Il2CppRGCTXDataType)3, 6433 },
	{ (Il2CppRGCTXDataType)3, 6444 },
	{ (Il2CppRGCTXDataType)3, 110 },
	{ (Il2CppRGCTXDataType)3, 109 },
	{ (Il2CppRGCTXDataType)2, 1587 },
	{ (Il2CppRGCTXDataType)2, 1658 },
	{ (Il2CppRGCTXDataType)3, 6434 },
	{ (Il2CppRGCTXDataType)2, 1601 },
	{ (Il2CppRGCTXDataType)2, 1677 },
	{ (Il2CppRGCTXDataType)3, 112 },
	{ (Il2CppRGCTXDataType)2, 572 },
	{ (Il2CppRGCTXDataType)2, 648 },
	{ (Il2CppRGCTXDataType)3, 108 },
	{ (Il2CppRGCTXDataType)3, 111 },
	{ (Il2CppRGCTXDataType)3, 81 },
	{ (Il2CppRGCTXDataType)2, 2626 },
	{ (Il2CppRGCTXDataType)3, 14106 },
	{ (Il2CppRGCTXDataType)2, 1584 },
	{ (Il2CppRGCTXDataType)2, 1656 },
	{ (Il2CppRGCTXDataType)3, 14107 },
	{ (Il2CppRGCTXDataType)3, 83 },
	{ (Il2CppRGCTXDataType)2, 437 },
	{ (Il2CppRGCTXDataType)2, 644 },
	{ (Il2CppRGCTXDataType)3, 80 },
	{ (Il2CppRGCTXDataType)3, 82 },
	{ (Il2CppRGCTXDataType)3, 5067 },
	{ (Il2CppRGCTXDataType)2, 1105 },
	{ (Il2CppRGCTXDataType)2, 3403 },
	{ (Il2CppRGCTXDataType)3, 14103 },
	{ (Il2CppRGCTXDataType)3, 14104 },
	{ (Il2CppRGCTXDataType)2, 1718 },
	{ (Il2CppRGCTXDataType)3, 14105 },
	{ (Il2CppRGCTXDataType)2, 373 },
	{ (Il2CppRGCTXDataType)2, 645 },
	{ (Il2CppRGCTXDataType)3, 93 },
	{ (Il2CppRGCTXDataType)3, 12483 },
	{ (Il2CppRGCTXDataType)2, 2522 },
	{ (Il2CppRGCTXDataType)3, 12497 },
	{ (Il2CppRGCTXDataType)2, 754 },
	{ (Il2CppRGCTXDataType)3, 1082 },
	{ (Il2CppRGCTXDataType)3, 12489 },
	{ (Il2CppRGCTXDataType)3, 3992 },
	{ (Il2CppRGCTXDataType)2, 472 },
	{ (Il2CppRGCTXDataType)3, 12484 },
	{ (Il2CppRGCTXDataType)2, 2518 },
	{ (Il2CppRGCTXDataType)3, 1119 },
	{ (Il2CppRGCTXDataType)2, 769 },
	{ (Il2CppRGCTXDataType)2, 1061 },
	{ (Il2CppRGCTXDataType)3, 3998 },
	{ (Il2CppRGCTXDataType)3, 12485 },
	{ (Il2CppRGCTXDataType)3, 3987 },
	{ (Il2CppRGCTXDataType)3, 3988 },
	{ (Il2CppRGCTXDataType)3, 3986 },
	{ (Il2CppRGCTXDataType)3, 3989 },
	{ (Il2CppRGCTXDataType)2, 1057 },
	{ (Il2CppRGCTXDataType)2, 3364 },
	{ (Il2CppRGCTXDataType)3, 6431 },
	{ (Il2CppRGCTXDataType)3, 3991 },
	{ (Il2CppRGCTXDataType)2, 1520 },
	{ (Il2CppRGCTXDataType)3, 3990 },
	{ (Il2CppRGCTXDataType)2, 1445 },
	{ (Il2CppRGCTXDataType)2, 3314 },
	{ (Il2CppRGCTXDataType)2, 1562 },
	{ (Il2CppRGCTXDataType)2, 1638 },
	{ (Il2CppRGCTXDataType)3, 5050 },
	{ (Il2CppRGCTXDataType)2, 1099 },
	{ (Il2CppRGCTXDataType)3, 6806 },
	{ (Il2CppRGCTXDataType)3, 6807 },
	{ (Il2CppRGCTXDataType)2, 1418 },
	{ (Il2CppRGCTXDataType)3, 6810 },
	{ (Il2CppRGCTXDataType)2, 1418 },
	{ (Il2CppRGCTXDataType)3, 6811 },
	{ (Il2CppRGCTXDataType)2, 1447 },
	{ (Il2CppRGCTXDataType)3, 6815 },
	{ (Il2CppRGCTXDataType)3, 6819 },
	{ (Il2CppRGCTXDataType)3, 6818 },
	{ (Il2CppRGCTXDataType)2, 3401 },
	{ (Il2CppRGCTXDataType)3, 6809 },
	{ (Il2CppRGCTXDataType)3, 6808 },
	{ (Il2CppRGCTXDataType)3, 6816 },
	{ (Il2CppRGCTXDataType)2, 1713 },
	{ (Il2CppRGCTXDataType)3, 6813 },
	{ (Il2CppRGCTXDataType)3, 18209 },
	{ (Il2CppRGCTXDataType)2, 1064 },
	{ (Il2CppRGCTXDataType)3, 4011 },
	{ (Il2CppRGCTXDataType)1, 1517 },
	{ (Il2CppRGCTXDataType)2, 3329 },
	{ (Il2CppRGCTXDataType)3, 6812 },
	{ (Il2CppRGCTXDataType)1, 3329 },
	{ (Il2CppRGCTXDataType)1, 1713 },
	{ (Il2CppRGCTXDataType)2, 3401 },
	{ (Il2CppRGCTXDataType)2, 3329 },
	{ (Il2CppRGCTXDataType)2, 1565 },
	{ (Il2CppRGCTXDataType)2, 1641 },
	{ (Il2CppRGCTXDataType)3, 6817 },
	{ (Il2CppRGCTXDataType)3, 6814 },
	{ (Il2CppRGCTXDataType)3, 6820 },
	{ (Il2CppRGCTXDataType)2, 311 },
	{ (Il2CppRGCTXDataType)3, 4023 },
	{ (Il2CppRGCTXDataType)2, 452 },
};
extern const CustomAttributesCacheGenerator g_System_Core_AttributeGenerators[];
IL2CPP_EXTERN_C const Il2CppCodeGenModule g_System_Core_CodeGenModule;
const Il2CppCodeGenModule g_System_Core_CodeGenModule = 
{
	"System.Core.dll",
	159,
	s_methodPointers,
	0,
	NULL,
	s_InvokerIndices,
	0,
	NULL,
	50,
	s_rgctxIndices,
	255,
	s_rgctxValues,
	NULL,
	g_System_Core_AttributeGenerators,
	NULL, // module initializer,
	NULL,
	NULL,
	NULL,
};
