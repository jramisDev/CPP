#include "Spawner.h"


ASpawner::ASpawner()
{
	PrimaryActorTick.bCanEverTick = true;
}

void ASpawner::SpawnEnemy()
{
	if(EnemyClass)
	{
		const FVector Location = GetActorLocation();
		const FRotator Rotation = GetActorRotation();

		GetWorld()->SpawnActor(EnemyClass, &Location, &Rotation);
	}
}

void ASpawner::BeginPlay()
{
	Super::BeginPlay();
	
}

void ASpawner::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

