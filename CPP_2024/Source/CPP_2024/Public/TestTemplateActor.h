#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "TestTemplateActor.generated.h"


template<typename T>
class Attribute
{
public:
	Attribute(T InValue = 0, FName InAttrName = TEXT("NONE"));

	T GetValue() const;
	void SetValue(T InValue);

	const FName& GetAttrName() const { return AttrName; }

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

	UPROPERTY(EditAnywhere)
	TArray<AActor*> ListOfActors;

	Attribute<float> SpeedAttribute;

	TArray<Attribute<float>> FloatAttributes;

	UPROPERTY(BlueprintCallable)
	void DoTest();

	UFUNCTION(BlueprintCallable) void CreateAttribute(const FName& InName, float InInitialValue);
	UFUNCTION(BlueprintCallable) void SetAttributeValue(const FName& InAttrName, float InValue);
	UFUNCTION(BlueprintCallable) void GetAttributeValue(const FName& InAttrName, float& OutValue);
};


template<typename T, typename T2>
T Sum(T ParamA, T2 ParamB);


template<typename T, typename TRet>
TRet CastTo(T InTypeToCast)
{
	return(TRet)InTypeToCast;
}
