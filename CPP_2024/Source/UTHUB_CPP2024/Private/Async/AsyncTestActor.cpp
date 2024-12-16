#include "Async/AsyncTestActor.h"

AAsyncTestActor::AAsyncTestActor()
{
	PrimaryActorTick.bCanEverTick = true;

	Worker = new FAsyncTask<FAsyncTaskExample>();
}

void AAsyncTestActor::TestAsyncStuff()
{
	Worker->StartBackgroundTask();
}

void AAsyncTestActor::BeginPlay()
{
	Super::BeginPlay();
	
}

void AAsyncTestActor::EndPlay(const EEndPlayReason::Type EndPlayReason)
{
	Super::EndPlay(EndPlayReason);

	delete Worker;
	Worker = nullptr;
}

void AAsyncTestActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

