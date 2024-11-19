#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "CustomActionComponent.generated.h"


class UCustomActionSubsystem;
class UCustomActionBase;

UCLASS(ClassGroup=(Custom), meta=(BlueprintSpawnableComponent))
class CPP_2024_API UCustomActionComponent : public UActorComponent
{
	GENERATED_BODY()

	friend UCustomActionSubsystem;

public:
	UCustomActionComponent();

protected:
	virtual void BeginPlay() override;

	void DoAction(const TSubclassOf<UCustomActionBase>& ActionClass) const;

private:
	
	UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess = true))
	TArray<TSubclassOf<UCustomActionBase>> Actions;
};
