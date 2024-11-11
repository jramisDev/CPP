#pragma once

#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "TestingSubsystem.generated.h"

UCLASS()
class CPP_2024_API UTestingSubsystem : public UWorldSubsystem
{
	GENERATED_BODY()

public:
	
	UFUNCTION(BlueprintCallable)
	void AddPendingMsg(const FText& InMsg);

	UFUNCTION(BlueprintCallable)
	void PublishNextMsg();

	UFUNCTION(BlueprintCallable)
	void DoSomeThing();

private:

	TQueue<FText> PendingMessages;

protected:
	
	virtual void Initialize(FSubsystemCollectionBase& Collection) override;
	virtual void Deinitialize() override;

	virtual bool ShouldCreateSubsystem(UObject* Outer) const override;
};
