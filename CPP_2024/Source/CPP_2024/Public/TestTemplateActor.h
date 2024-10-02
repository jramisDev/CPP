#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "TestTemplateActor.generated.h"


template<typename T>
class Attribute
{
public:
	//Attribute();
	Attribute(T InValue = 0, FName InAttrName = TEXT("NONE"));

	T GetValue() const;
	void SetValue(T InValue);

private:
	T Value;
	FName AttrName;
};

UCLASS()
class CPP_2024_API ATestTemplateActor : public AActor
{
	GENERATED_BODY()

public:
	ATestTemplateActor();

	UFUNCTION(CallInEditor)
	void DoTest();

	UPROPERTY(EditAnywhere)
	TArray<AActor*> ListOfActors;

	TArray<Attribute<float>> FloatAttributes;
};

template<typename T, typename T2>
T Sum(T ParamA, T2 ParamB);


template<typename T, typename TRet>
TRet CastTo(T InTypeToCast)
{
	return(TRet)InTypeToCast;
}
