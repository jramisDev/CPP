// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/StaticMeshActor.h"
#include "GameFramework/Actor.h"
#include "Kismet/GameplayStatics.h"
#include "LevelBoundGeneration.generated.h"

// listame todos los actores del nivel que me interesen para esto
// saca los bounds
// genera un actor que es una colision con esa forma combinada

class UGameplayStatics;

class FBoundDelimiterTask : public FNonAbandonableTask
{
	FBoundDelimiterTask(UObject* WorldContextObject)
	: World(WorldContextObject ? WorldContextObject->GetWorld() : nullptr)
	{
		check(World);
	}

	FBoundDelimiterTask(TArray<FBox> Collisions) : Bounds(Collisions)
	{
		
	}

	void DoWork()
	{
		ComputeFinalMesh();
		
		AsyncTask(ENamedThreads::GameThread, [this]()
		{
			//World->SpawnActor();

			//OnMeshGenFinished.ExecuteIfBound();
		});
	}

	void GatherAllActorFromLevel()
	{
		
	}

	void GenerateMesh()
	{
		
	};

	void ComputeFinalMesh()
	{
		// TArray<AActor*> LevelActors;
		// UGameplayStatics::GetAllActorsOfClass(World, AStaticMeshActor::StaticClass(), LevelActors);
		//
		// for (auto Actor : LevelActors)
		// {
		// 	//Cojo los bounds
		// }

		GenerateMesh();
	}
	
private:
	UWorld* World = nullptr;
	
	UStaticMesh* MergedMesh = nullptr;
	
	TArray<FBox> Bounds;	
	int CollisionInteral;
};

UCLASS()
class UTHUB_CPP2024_API ALevelBoundGeneration : public AActor
{
	GENERATED_BODY()

public:
	// Sets default values for this actor's properties
	ALevelBoundGeneration();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;

private:

	TUniquePtr<FAsyncTask<FBoundDelimiterTask>> MeshGenTask;
};
