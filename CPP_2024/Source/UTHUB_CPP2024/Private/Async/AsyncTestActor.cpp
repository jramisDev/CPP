#include "Async/AsyncTestActor.h"

AAsyncTestActor::AAsyncTestActor()
{
	PrimaryActorTick.bCanEverTick = true;

	//Worker = new FAsyncTask<FAsyncTaskExample>();
}

void AAsyncTestActor::TestAsyncStuff()
{
	Worker = MakeUnique<FAsyncTask<FAsyncTaskExample>>();

	Worker->GetTask().OnMassiveComputationFinished.BindLambda([this](int32 InTaskResult)
	{
		Ammo = InTaskResult;
	});

	Worker->StartBackgroundTask();

	// Hago lo que me da la gana
	
}

void AAsyncTestActor::BeginPlay()
{
	Super::BeginPlay();

	// Worker = MakeShareable(new FAsyncTask<FAsyncTaskExample>());
	
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

