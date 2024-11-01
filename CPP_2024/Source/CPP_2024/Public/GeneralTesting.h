#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "GeneralTesting.generated.h"

UCLASS()
class CPP_2024_API AGeneralTesting : public AActor
{
	GENERATED_BODY()

public:
	AGeneralTesting();

	UFUNCTION(BlueprintCallable, CallInEditor)
	void DoTest();

	void SpawnProjectile(TSubclassOf<AActor> ProjecitleClass);

	UPROPERTY(EditAnywhere)
	TSubclassOf<AActor> ActorClass;

	UPROPERTY(EditAnywhere)
	TSubclassOf<ACharacter> CharacterClass;

	UPROPERTY(EditAnywhere)
	TSubclassOf<UClass> MyClass;
	
	UPROPERTY(EditAnywhere)
	TSubclassOf<UObject> MyObjClass;

protected:
	virtual void BeginPlay() override;

public:
	virtual void Tick(float DeltaTime) override;
};