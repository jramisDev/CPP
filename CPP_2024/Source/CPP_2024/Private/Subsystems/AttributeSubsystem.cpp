#include "Subsystems/AttributeSubsystem.h"

#include "Kismet/GameplayStatics.h"

void UAttributeSubsystem::Initialize(FSubsystemCollectionBase& Collection)
{
	Super::Initialize(Collection);

	GetAllAttributesOwners(RegisterAttrOwners);

	// FOnActorSpawned::FDelegate Delegate; // aqui vamos a guardar una funcion
	// Delegate.BindUObject(this, &ThisClass::RegisterNewActor);
	//
	// GetWorld()->AddOnActorSpawnedHandler(Delegate);
	//
	// La linea de abajo es lo mismo que esto
	//
	FDelegateHandle Handle =
	GetWorld()->AddOnActorSpawnedHandler(FOnActorSpawned::FDelegate::CreateUObject(this, &ThisClass::RegisterNewActor));	
}

void UAttributeSubsystem::Deinitialize()
{
	Super::Deinitialize();
}

bool UAttributeSubsystem::ShouldCreateSubsystem(UObject* Outer) const
{
	return Super::ShouldCreateSubsystem(Outer);
}

void UAttributeSubsystem::GetAllAttributesOwners(TArray<AActor*>& AttrOwners)
{
	TArray<AActor*> OutActors;
	UGameplayStatics::GetAllActorsOfClass(GetWorld(), AActor::StaticClass(), AttrOwners);

	for (auto* Actor : OutActors)
	{
		if(Actor->FindComponentByClass<UAttributeComponent>())
		{
			AttrOwners.Add(Actor);
			OnAttributeOwnerRegistered.Broadcast(Actor);
		}
	}
}

void UAttributeSubsystem::RegisterNewActor(AActor* InNewActor)
{
	RegisterAttrOwners.Add(InNewActor);
}
