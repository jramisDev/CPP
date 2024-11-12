#pragma once

#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "CustomActionBase.generated.h"

UCLASS(Blueprintable, BlueprintType)
class CPP_2024_API UCustomActionBase : public UObject
{
	GENERATED_BODY()

protected:

	UFUNCTION(BlueprintNativeEvent)
	void DoAction();
	virtual void DoAction_Implementation();

	UFUNCTION(BlueprintImplementableEvent)
	void DoAction_Event();
};
