// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "TestTemplateActor.generated.h"

UCLASS()
class CPP_2024_API ATestTemplateActor : public AActor
{
	GENERATED_BODY()

public:
	// Sets default values for this actor's properties
	ATestTemplateActor();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;
};
