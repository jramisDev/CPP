#include "CPP_2024/Public/TestTemplateActor.h"

#include "IndexTypes.h"
#include "Windows/AllowWindowsPlatformTypes.h"

template <typename T>
Attribute<T>::Attribute(T InValue, FName InAttrName)// : Value(InValue), AttrName(InAttrName)
{
	Value = InValue;
	AttrName = InAttrName;
}

template <typename T>
T Attribute<T>::GetValue() const
{
	return Value;
}

template <typename T>
void Attribute<T>::SetValue(T InValue)
{
	Value = InValue;
}

template <typename T, typename T2>
T Sum(T ParamA, T2 ParamB)
{
	return ParamA + ParamB;
}

ATestTemplateActor::ATestTemplateActor()
{
	PrimaryActorTick.bCanEverTick = true;

	int Value = 10;
	
}

template<typename T, int N>
class TAllocExample
{
	
	
public:

	TAllocExample()
	{
		Data = new T[N];
		Size = N;
	}

	TAllocExample(T InitialValue) : TAllocExample() 
	{

		for (SIZE_T i = 0; i < Size; ++i)
		{
			Data[i] = InitialValue;
		}
		
	} 
	
	~TAllocExample()
	{
		delete[] Data;
	}

	void AddElement(const T& InValue, SIZE_T Index)
	{
		check(Index <= (Size-1) && Index >= 0)		
		*(Data + Index) = InValue;
	}

	T& GetElement(SIZE_T Index) const
	{
		check(Index <= (Size-1) && Index >= 0)		
		return *(Data + Index);
	}

	T& operator[](SIZE_T Index) const
	{
		//return const_cast<TAllocExample<T, N>>(this)[Index];
		check(Index <= (Size-1) && Index >= 0)		
		return *(Data + Index);
	}

	T& operator[](SIZE_T Index)
	{
		check(Index <= (Size-1) && Index >= 0)		
		return *(Data + Index);
	}

	bool operator==(const TAllocExample<T, N>& rhs) const
	{
		for (SIZE_T i = 0; i < Size; ++i)
		{
			if (Data[i] != rhs[i])
			{
				return false;
			}
		}
		return true;
	}

	void operator+=(const TAllocExample& rhs)
	{
		for (SIZE_T i = 0; i < Size; ++i)
		{
			Data[i] += rhs[i];
		}
	}

	const T* operator*() const
	{
		return Data;
	}
	
private:
	T* Data;
	SIZE_T Size;
	
};

void ATestTemplateActor::DoTest()
{
	//TArray<int, TInlineAllocator<16>> SomeIntCollection; Para reservar 16 posiciones de int
	//TArray<int> SomeIntCollection;
	//SomeIntCollection.Reserve(20); Reservar 20 posiciones al array

	//int* a = new int(10); el new usa la memoria en el hint, el puntero en el stack
	//delete a;
	
	// int a[10];
	// a[0];
	//
	// auto b = *a + 1;

	//int a = 10;
	//int* b = &a;
	//int c = *b;
	//int& d = *b;
	//d = 22;

	//SOLUCION DE LO DE ARRIBA
	// a-> 22
	// b-> 0x101....
	// c-> 10
	// d-> 22

	//for(int i = 0; i < 10; ++i) no es correcto el uso del int por los diferentes procesadores.
	// for(SIZE_T i = 0; i < 10; ++i)
	// {
	// 	
	// }

	TAllocExample<int, 10> ListOfInts;
	ListOfInts.AddElement(20,3);
	int& a = ListOfInts.GetElement(0);

	ListOfInts[0] = 10;

	TAllocExample<int, 10> AnotherListOfInts;
	
	if (AnotherListOfInts == ListOfInts)
	{
		
	}
	
	TAllocExample<FString, 10> ListOfString;
	TAllocExample<FString, 10> ListOfString2;
	ListOfString += ListOfString2;

	FString SomeString = TEXT("BLABLA");
	const TCHAR* CharArr = *SomeString;
	
}

void ATestTemplateActor::CreateAttribute(const FName& InName, float InInitialValue)
{
	const Attribute<float> NewAttr = Attribute<float>(InInitialValue, InName);

	FloatAttributes.Add(NewAttr);
	
}

void ATestTemplateActor::SetAttributeValue(const FName& InAttrName, float InValue)
{
	for (Attribute<float>& Attr : FloatAttributes)
	{
		if (Attr.GetAttrName().IsEqual(InAttrName))
		{
			Attr.SetValue(InValue);
			return;
		}
	}
}

void ATestTemplateActor::GetAttributeValue(const FName& InAttrName, float& OutValue)
{
	for (const Attribute<float>& Attr : FloatAttributes)
	{
		if (Attr.GetAttrName().IsEqual(InAttrName))
		{
			OutValue = Attr.GetValue();
			return;
		}
	}
}
