#include "Subsystems/ActionSystem/CustomActionSubsystem.h"

void UCustomActionSubsystem::Initialize(FSubsystemCollectionBase& Collection)
{
	Super::Initialize(Collection);
}

void UCustomActionSubsystem::Deinitialize()
{
	Super::Deinitialize();
}

bool UCustomActionSubsystem::ShouldCreateSubsystem(UObject* Outer) const
{
	return Super::ShouldCreateSubsystem(Outer);
}

void UCustomActionSubsystem::DoAction(AActor* InActor, const TSubclassOf<UCustomActionBase>& InCustomActionBase)
{
}

void UCustomActionSubsystem::DoActionSequence(AActor* InActor,
	const TArray<TSubclassOf<UCustomActionBase>>& InCustomActionBaseSequence)
{
}

void UCustomActionSubsystem::StopCurrentAction(AActor* InActor,
	const TSubclassOf<UCustomActionBase>& InCustomActionBase)
{
}

void UCustomActionSubsystem::AddActionToActor(AActor* InActor,
	const TSubclassOf<UCustomActionBase>& InNewCustomActionBase)
{
}

void UCustomActionSubsystem::RemoveActionFromActor(AActor* InActor,
	const TSubclassOf<UCustomActionBase>& InNewCustomActionBase)
{
}

void UCustomActionSubsystem::ExecuteMassiveAction(const TSubclassOf<UCustomActionBase>& InCustomActionBase)
{
}

void UCustomActionSubsystem::RegisterActionEnabledActors()
{
}

void UCustomActionSubsystem::RegisterActionEnabledActor(AActor* InActor)
{
}

UCustomActionComponent* UCustomActionSubsystem::GetCustomActionComponent(AActor* InActor) const
{
	return nullptr;
}

void UCustomActionSubsystem::ShowDebugInfo()
{
}
