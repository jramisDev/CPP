#include "Subsystems/SingletonTesting.h"

FGameplayLogger* FGameplayLogger::Singleton = nullptr;

ASingletonTesting::ASingletonTesting()
{
	PrimaryActorTick.bCanEverTick = true;
}

void ASingletonTesting::TestSingletonStuff()
{	
	FGameplayLogger::Get().AddPendingMsg(FText::FromString(TEXT("Paquito se ha cargado a JL")));	
}

void ASingletonTesting::BeginPlay()
{
	Super::BeginPlay();	
}

void ASingletonTesting::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}