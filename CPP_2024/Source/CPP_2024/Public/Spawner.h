#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "GameFramework/Character.h"
#include "Spawner.generated.h"

UCLASS()
class AEnemy : public ACharacter
{
	GENERATED_BODY()

public:
	
};

UCLASS()
class CPP_2024_API ASpawner : public AActor
{
	GENERATED_BODY()

public:
	ASpawner();

	UFUNCTION(BlueprintCallable, CallInEditor)
	void SpawnEnemy();

	UPROPERTY(EditInstanceOnly)
	TSubclassOf<AEnemy> EnemyClass;

protected:
	virtual void BeginPlay() override;

public:
	virtual void Tick(float DeltaTime) override;
};
