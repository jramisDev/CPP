#include "Library/GenericUtils.h"

#include "EnhancedInputComponent.h"
#include "Kismet/GameplayStatics.h"

bool UGenericUtils::IsThereAnyActorCloseToMe(AActor* Me, const TArray<AActor*>& InActorList, float Distance)
{
	return InActorList.ContainsByPredicate([Me, Distance](const AActor* InActor)
	{
		return InActor->GetDistanceTo(Me) < Distance;
	});
}

// Crear una función que me diga si en una lista, alguno de los actores tiene un componente del tipo que sea
bool UGenericUtils::DoesAnyActorHaveComponent(const TArray<AActor*>& InActorList,
	const TSubclassOf<UActorComponent>& InComponentClass)
{
	// auto HasComponent = [InComponentClass](const AActor* InActor)
	// {
	// 	return InActor->FindComponentByClass(InComponentClass);
	// };
	//
	// return InActorList.ContainsByPredicate(HasComponent);

	return InActorList.ContainsByPredicate(
		
	[InComponentClass](const AActor* InActor)
		 {
	 		return InActor->FindComponentByClass(InComponentClass);
		 }
	);
}

// Crear una función que me diga para lista de Locations si alguno está a tantas unidades de un actor
bool UGenericUtils::IsActorInRange(const TArray<FVector>& InLocations, AActor* InActor, float InDistance, float InEpsilon)
{
	return InLocations.ContainsByPredicate(
	[InActor, InDistance](const FVector& InElement)
		{
			return FMath::IsNearlyEqual((InElement - InActor->GetActorLocation()).Length(), InDistance );
		});
}

// Crear una función que me diga si un personaje tiene un input action asignado
bool UGenericUtils::HasAction(AActor* InActorToCheck, UInputAction* InAction)
{
	if(const UEnhancedInputComponent* InputComponent = InActorToCheck->FindComponentByClass<UEnhancedInputComponent>())
	{
		return InputComponent->GetActionValueBindings().ContainsByPredicate([InAction](const FEnhancedInputActionValueBinding& Binding)
		{
			return Binding.GetAction() == InAction; 
		});
	}
	
	return false;
}

void UGenericUtils::GetAllActorOfClasses(const UObject* WorldContextObject,
                                         const TArray<TSubclassOf<AActor>>& ActorClass, TArray<AActor*>& FilteredActors)
{

	if(!WorldContextObject && !WorldContextObject->GetWorld()) return;

	TArray<AActor*> OutActor;
	UGameplayStatics::GetAllActorsOfClass(WorldContextObject, AActor::StaticClass(), OutActor);

	OutActor.FilterByPredicate([ActorClass](const AActor* InActor)
	{
		return ActorClass.Contains(InActor->GetClass());
	});
	
}
