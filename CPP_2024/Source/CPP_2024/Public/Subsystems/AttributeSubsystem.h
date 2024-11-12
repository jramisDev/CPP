#pragma once

#include "CoreMinimal.h"
#include "Subsystems/WorldSubsystem.h"
#include "AttributeSubsystem.generated.h"

DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnAttributeOwnerRegistered, AActor*, RegActor);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnAttributeChange, AActor*, AttrOwner, const FName&, InAttrName);

UCLASS(meta=(BlueprintSpawnableComponent))
class UAttributeComponent : public UActorComponent
{
	GENERATED_BODY()

public:
	
	UPROPERTY(BlueprintAssignable)
	FOnAttributeChange OnAttributeChange;
};

UCLASS()
class CPP_2024_API UAttributeSubsystem : public UWorldSubsystem
{
	GENERATED_BODY()

public:

	UFUNCTION(BlueprintCallable)
	void GetActorWithAttributes(TArray<AActor*>& OutActors);

	UFUNCTION(BlueprintCallable)
	void ModifyAttributeFromActor(AActor* InActor, const FName& InAttrName, float InValue);

	UFUNCTION(BlueprintCallable)
	void AddAttrToActor(AActor* InActor);
	
	UPROPERTY(BlueprintAssignable)
	FOnAttributeOwnerRegistered OnAttributeOwnerRegistered;
	
	UPROPERTY(BlueprintAssignable)
	FOnAttributeChange OnAttributeChange;

	
protected:

	virtual void Initialize(FSubsystemCollectionBase& Collection) override;
	virtual void Deinitialize() override;
	
	virtual bool ShouldCreateSubsystem(UObject* Outer) const override;

private:

	void GetAllAttributesOwners(TArray<AActor*>& AttrOwners);
	void RegisterNewActor(AActor* InNewActor);

	UAttributeComponent* GetAttributeComponentFromActor(const AActor* InActor);
	
	UPROPERTY(VisibleAnywhere)
	TArray<AActor*> RegisterAttrOwners;

};
