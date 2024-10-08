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

void ATestTemplateActor::DoTest()
{
	int* pA = new int(10);

	*pA = 20;
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
