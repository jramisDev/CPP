﻿// Fill out your copyright notice in the Description page of Project Settings.


#include "CPP_2024/Public/TestTemplateActor.h"


// Sets default values
ATestTemplateActor::ATestTemplateActor()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
}

// Called when the game starts or when spawned
void ATestTemplateActor::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ATestTemplateActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}
