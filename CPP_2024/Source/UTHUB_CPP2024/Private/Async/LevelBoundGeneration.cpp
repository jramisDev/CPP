// Fill out your copyright notice in the Description page of Project Settings.


#include "Async/LevelBoundGeneration.h"


// Sets default values
ALevelBoundGeneration::ALevelBoundGeneration()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
}

// Called when the game starts or when spawned
void ALevelBoundGeneration::BeginPlay()
{
	Super::BeginPlay();

	TArray<FBox> BoxList;
	MeshGenTask = MakeUnique<FAsyncTask<FBoundDelimiterTask>>(BoxList);
	
}

// Called every frame
void ALevelBoundGeneration::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

