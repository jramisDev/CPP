#pragma once

#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "CustomActionBase.generated.h"

class UCustomActionComponent;

UCLASS(Blueprintable, BlueprintType)
class CPP_2024_API UCustomActionBase : public UObject
{
	GENERATED_BODY()

	friend UCustomActionComponent;

protected:

	virtual void DoAction(AActor* ActionInstigator);

	UFUNCTION(BlueprintImplementableEvent)
	void RecieveDoAction(AActor* ActionInstigator);
};
