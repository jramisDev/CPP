#include "GeneralTesting.h"

#include "GameFramework/Character.h"

AGeneralTesting::AGeneralTesting()
{
	PrimaryActorTick.bCanEverTick = true;
}

void AGeneralTesting::DoTest()
{

	// UObject* SomeObj;
	// UClass* SomeCls;
	//
	// TSubclassOf<UObject> JustTheSame;
	// TSubclassOf<AActor> JustTheSameActor;
}

void AGeneralTesting::SpawnProjectile(TSubclassOf<AActor> ProjecitleClass)
{
	if(ProjecitleClass)
	{
		
	}
}

void AGeneralTesting::BeginPlay()
{
	Super::BeginPlay();
	
}

void AGeneralTesting::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

