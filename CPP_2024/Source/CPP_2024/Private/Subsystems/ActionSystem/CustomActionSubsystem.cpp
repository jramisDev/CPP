#include "Subsystems/ActionSystem/CustomActionSubsystem.h"

#include "Kismet/GameplayStatics.h"
#include "Subsystems/ActionSystem/CustomActionBase.h"
#include "Subsystems/ActionSystem/CustomActionComponent.h"

void UCustomActionSubsystem::Initialize(FSubsystemCollectionBase& Collection)
{
	Super::Initialize(Collection);

	TArray<AActor*> OutActors;
	UGameplayStatics::GetAllActorsOfClass(this, AActor::StaticClass(), OutActors);

	for (auto FoundActor : OutActors)
	{
		if(FoundActor->FindComponentByClass<UCustomActionComponent>())
		{
			EnabledActors.AddUnique(FoundActor);
		}
	}
	
	//TODO - Detectar Actores nuevos que se crean
	FDelegateHandle Handle =
	GetWorld()->AddOnActorSpawnedHandler(FOnActorSpawned::FDelegate::CreateUObject(this, &ThisClass::RegisterActionEnabledActor));

	
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
	if (UCustomActionComponent* Comp = GetCustomActionComponent(InActor))
	{
		Comp->DoAction(InCustomActionBase);
	}
}

void UCustomActionSubsystem::DoActionSequence(AActor* InActor,
	const TArray<TSubclassOf<UCustomActionBase>>& InCustomActionBaseSequence)
{
}

void UCustomActionSubsystem::StopCurrentAction(AActor* InActor)
{
	if(UCustomActionComponent* Comp = GetCustomActionComponent(InActor))
	{
		Comp->StopAction();
	}
}

void UCustomActionSubsystem::AddActionToActor(AActor* InActor, const TSubclassOf<UCustomActionBase>& InNewCustomActionBase)
{
	if(UCustomActionComponent* Comp = GetCustomActionComponent(InActor))
	{
		Comp->Actions.Add(InNewCustomActionBase);
	}
}

void UCustomActionSubsystem::RemoveActionFromActor(AActor* InActor, const TSubclassOf<UCustomActionBase>& InNewCustomActionBase)
{
	if(UCustomActionComponent* Comp = GetCustomActionComponent(InActor))
	{
		Comp->Actions.Add(InNewCustomActionBase);
	}
}

void UCustomActionSubsystem::ExecuteMassiveAction(const TSubclassOf<UCustomActionBase>& InCustomActionBase)
{
}

void UCustomActionSubsystem::RegisterActionEnabledActors()
{
}

void UCustomActionSubsystem::RegisterActionEnabledActor(AActor* InActor)
{
	if (InActor && InActor->FindComponentByClass<UCustomActionComponent>())
	{
		EnabledActors.AddUnique(InActor);
	}
}

UCustomActionComponent* UCustomActionSubsystem::GetCustomActionComponent(AActor* InActor) const
{
	// if(InActor && EnabledActor.Contains(InActor))
	// {
	// 	return InActor->FindComponentByClass<UCustomActionComponent>();
	// }
	// return nullptr;
	
	return InActor && EnabledActors.Contains(InActor) ? InActor->FindComponentByClass<UCustomActionComponent>() : nullptr;
}

void UCustomActionSubsystem::ShowDebugInfo()
{
}
