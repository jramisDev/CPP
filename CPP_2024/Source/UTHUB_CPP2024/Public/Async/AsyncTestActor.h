#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "AsyncTestActor.generated.h"

class FAsyncTaskExample : public FNonAbandonableTask
{
	friend FAsyncTask<FAsyncTaskExample>;
	
	FAsyncTaskExample(){};
	
	void DoWork()
	{
		for (int i = 0; i < 10; ++i)
		{
			UE_LOG(LogTemp, Display, TEXT("%d"),i);
			FPlatformProcess::Sleep(0.1f);
			
			TaskResult += i;
		}
		OnMassiveComputationFinished.ExecuteIfBound(TaskResult);
	};

	FORCEINLINE TStatId GetStatId() const
	{
		RETURN_QUICK_DECLARE_CYCLE_STAT(FAsyncTaskExample, STATGROUP_ThreadPoolAsyncTasks);
	}

public:
	DECLARE_DELEGATE_OneParam(FOnMassiveComputationFinished, int32);
	FOnMassiveComputationFinished OnMassiveComputationFinished;

private:
	int32 TaskResult = 0;
};

UCLASS()
class UTHUB_CPP2024_API AAsyncTestActor : public AActor
{
	GENERATED_BODY()

public:
	AAsyncTestActor();

	void ReloadCharacter(int32 INT32);
	UFUNCTION(CallInEditor)
	void TestAsyncStuff();

protected:
	virtual void BeginPlay() override;
	virtual void EndPlay(const EEndPlayReason::Type EndPlayReason) override;

public:
	virtual void Tick(float DeltaTime) override;

private:
	//FAsyncTask<FAsyncTaskExample>* Worker;
	TUniquePtr<FAsyncTask<FAsyncTaskExample>> Worker;

	UPROPERTY(EditAnywhere)
	AActor* SomeActorInTheLevel;

	int32 Ammo;
};
