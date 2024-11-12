#pragma once

#include "CoreMinimal.h"
#include "Engine/LocalPlayer.h"
#include "CustomActionSubsystem.generated.h"

class UCustomActionComponent;
class UCustomActionBase;

DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnActionPerformed, AActor*, Instigator, UCustomActionBase*, CustomActionBase);

UCLASS()
class CPP_2024_API UCustomActionSubsystem : public UWorldSubsystem
{
	GENERATED_BODY()

protected:

	virtual void Initialize(FSubsystemCollectionBase& Collection) override;
	virtual void Deinitialize() override;

	virtual bool ShouldCreateSubsystem(UObject* Outer) const override;

public:

	UFUNCTION(BlueprintCallable)
	void DoAction(AActor* InActor, const TSubclassOf<UCustomActionBase>& InCustomActionBase);
	
	UFUNCTION(BlueprintCallable)
	void DoActionSequence(AActor* InActor, const TArray<TSubclassOf<UCustomActionBase>>& InCustomActionBaseSequence);

	UFUNCTION(BlueprintCallable)
	void StopCurrentAction(AActor* InActor, const TSubclassOf<UCustomActionBase>& InCustomActionBase);

	UFUNCTION(BlueprintCallable)
	void AddActionToActor(AActor* InActor, const TSubclassOf<UCustomActionBase>& InNewCustomActionBase);
	
	UFUNCTION(BlueprintCallable)
	void RemoveActionFromActor(AActor* InActor, const TSubclassOf<UCustomActionBase>& InNewCustomActionBase);
	
	UFUNCTION(BlueprintCallable)
	void ExecuteMassiveAction(const TSubclassOf<UCustomActionBase>& InCustomActionBase);
	
private:

	void RegisterActionEnabledActors();
	void RegisterActionEnabledActor(AActor* InActor);

	UCustomActionComponent* GetCustomActionComponent(AActor* InActor) const;

	UPROPERTY()
	TArray<AActor*> EnabledActor;

#if WITH_EDITOR
	void ShowDebugInfo();
#endif
	

public:

	UPROPERTY(BlueprintAssignable)
	FOnActionPerformed OnActionPerformed;
	
};
