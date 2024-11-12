#include "Subsystems/AttributeSubsystem.h"

#include "Kismet/GameplayStatics.h"

void UAttributeSubsystem::GetActorWithAttributes(TArray<AActor*>& OutActors)
{
	OutActors = RegisterAttrOwners;
}

void UAttributeSubsystem::ModifyAttributeFromActor(AActor* InActor, const FName& InAttrName, float InValue)
{
	for (auto* Actor : RegisterAttrOwners)
	{
		if(Actor == InActor)
		{
			//GetAttributeComponentFromActor(InActor);
			OnAttributeChange.Broadcast(InActor, InAttrName);
		}
	}
}

void UAttributeSubsystem::AddAttrToActor(AActor* InActor)
{
	if (!InActor) return;
	
	InActor->AddComponentByClass(UAttributeComponent::StaticClass(),  false, FTransform(), false);
	RegisterNewActor(InActor);
}

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
	if(GetAttributeComponentFromActor(InNewActor))
	{
		RegisterAttrOwners.Add(InNewActor);		
	}
}

UAttributeComponent* UAttributeSubsystem::GetAttributeComponentFromActor(const AActor* InActor)
{
	return InActor->FindComponentByClass<UAttributeComponent>();
}
