#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "CustomActionComponent.generated.h"


UCLASS(ClassGroup=(Custom), meta=(BlueprintSpawnableComponent))
class CPP_2024_API UCustomActionComponent : public UActorComponent
{
	GENERATED_BODY()

public:
	UCustomActionComponent();

protected:
	virtual void BeginPlay() override;

public:
	virtual void TickComponent(float DeltaTime, ELevelTick TickType,
	                           FActorComponentTickFunction* ThisTickFunction) override;
};
