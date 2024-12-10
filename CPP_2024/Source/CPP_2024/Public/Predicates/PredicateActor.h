// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "PredicateActor.generated.h"

UCLASS()
class CPP_2024_API APredicateActor : public AActor
{
	GENERATED_BODY()

public:
	APredicateActor();

	void PrintAfterTime();
	
	void TestFunction();

	void SomeActorStuff();

	void DoSomething(TFunction<void()> Func);

	FTimerHandle OutHandle;

	virtual void BeginPlay() override;
};
