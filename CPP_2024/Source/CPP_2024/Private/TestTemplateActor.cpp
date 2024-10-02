#include "CPP_2024/Public/TestTemplateActor.h"

// template <typename T>
// Attribute<T>::Attribute() : Value(0)
// {
// }

template <typename T>
Attribute<T>::Attribute(T InValue, FName InAttrName)
{
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

template<typename T, typename T2>
T Sum(T ParamA, T2 ParamB)
{
	return ParamA + ParamB;
}

ATestTemplateActor::ATestTemplateActor()
{
	PrimaryActorTick.bCanEverTick = true;
}

void ATestTemplateActor::DoTest()
{
	Speed = Attribute<float>();
	Speed.SetValue(1);

	
	//UE_LOG(LogTemp, Display, TEXT("El valor es: %d"), SomeValue);
}
