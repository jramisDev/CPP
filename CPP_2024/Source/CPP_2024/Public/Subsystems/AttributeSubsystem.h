#pragma once

#include "CoreMinimal.h"
#include "Subsystems/WorldSubsystem.h"
#include "AttributeSubsystem.generated.h"

DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnAttributeOwnerRegistered, AActor*, RegActor)

UCLASS()
class UAttributeComponent : public UActorComponent
{
	GENERATED_BODY()

public:
	
};

UCLASS()
class CPP_2024_API UAttributeSubsystem : public UWorldSubsystem
{
	GENERATED_BODY()

public:
	FOnAttributeOwnerRegistered OnAttributeOwnerRegistered;
	
protected:

	virtual void Initialize(FSubsystemCollectionBase& Collection) override;
	virtual void Deinitialize() override;
	
	virtual bool ShouldCreateSubsystem(UObject* Outer) const override;

private:

	void GetAllAttributesOwners(TArray<AActor*>& AttrOwners);

	void RegisterNewActor(AActor* InNewActor);
	
	UPROPERTY()
	TArray<AActor*> RegisterAttrOwners;

};
