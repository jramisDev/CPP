#pragma once

#include "CoreMinimal.h"
#include "Engine/GameInstance.h"
#include "GI_Game.generated.h"

UCLASS()
class CPP_2024_API UGI_Game : public UGameInstance
{
	GENERATED_BODY()

public:
	virtual void Init() override;	
};
