#include "Subsystems/TestingSubsystem.h"

void UTestingSubsystem::Initialize(FSubsystemCollectionBase& Collection)
{
	Super::Initialize(Collection);
	
}

void UTestingSubsystem::Deinitialize()
{
	Super::Deinitialize();
}

bool UTestingSubsystem::ShouldCreateSubsystem(UObject* Outer) const
{
	return true;
}

void UTestingSubsystem::AddPendingMsg(const FText& InMsg)
{
	PendingMessages.Enqueue(InMsg);
}

void UTestingSubsystem::PublishNextMsg()
{
	FText Msg;
	if(PendingMessages.Dequeue(Msg))
	{
		//Publico el mensaje
		GEngine->AddOnScreenDebugMessage(INDEX_NONE, 2.f, FColor::Cyan, Msg.ToString());
	}
}

void UTestingSubsystem::DoSomeThing()
{
}
