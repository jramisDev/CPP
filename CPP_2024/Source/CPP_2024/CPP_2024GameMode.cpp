// Copyright Epic Games, Inc. All Rights Reserved.

#include "CPP_2024GameMode.h"
#include "CPP_2024Character.h"
#include "UObject/ConstructorHelpers.h"

ACPP_2024GameMode::ACPP_2024GameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
