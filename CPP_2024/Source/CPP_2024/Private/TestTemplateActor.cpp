#include "CPP_2024/Public/TestTemplateActor.h"

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
	
}

template<typename T, int N>
class TAllocExample
{
public:
	TAllocExample()
	{
		Data = new T[10];
		Size = N;
	}
	
	~TAllocExample()
	{
		delete[] Data;
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

	TAllocExample<int, 10> IntArr;
	IntArr[12];
	
	//for(int i = 0; i < 10; ++i) no es correcto el uso del int por los diferentes procesadores.
	// for(SIZE_T i = 0; i < 10; ++i)
	// {
	// 	
	// }
	
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
