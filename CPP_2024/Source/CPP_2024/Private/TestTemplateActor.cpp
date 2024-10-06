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

	Attribute<float> Speed = Attribute<float>(3, TEXT("Speed"));
	Attribute<float> Health = Attribute<float>(3, TEXT("Health"));
	
	FloatAttributes.Add(Speed);
	FloatAttributes.Add(Health);
}

void ATestTemplateActor::DoTest()
{
	SpeedAttribute = Attribute<float>();
	

	
	//UE_LOG(LogTemp, Display, TEXT("El valor es: %d"), SomeValue);
}

void ATestTemplateActor::SetAttributeValue(const FName& InAttrName, float InValue)
{
	for (Attribute<float>& Attr : FloatAttributes)
	{
		if(Attr.GetAttrName().IsEqual(InAttrName))
		{
			Attr.SetValue(InValue);
			return;
		}
	}
}

void ATestTemplateActor::GetAttributeValue(const FName& InAttrName, float& OutValue)
{
	for (Attribute<float>& Attr : FloatAttributes)
	{
		if(Attr.GetAttrName().IsEqual(InAttrName))
		{
			OutValue = Attr.GetValue();
			return;
		}
	}
}
