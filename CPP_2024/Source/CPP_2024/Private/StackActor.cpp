#include "StackActor.h"


AStackActor::AStackActor()
{
	PrimaryActorTick.bCanEverTick = true;
}

void AStackActor::BeginPlay()
{
	Super::BeginPlay();
	
}

void AStackActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

