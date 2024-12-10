#include "Library/GenericUtils.h"

bool UGenericUtils::IsThereAnyActorCloseToMe(AActor* Me, const TArray<AActor*>& InActorList, float Distance)
{
	return InActorList.ContainsByPredicate([Me, Distance](const AActor* InActor)
	{
		return InActor->GetDistanceTo(Me) < Distance;
	});
}

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

bool UGenericUtils::IsActorInRange(const TArray<FVector&> InLocations, AActor* InActor, float InDistance, float InEpsilon)
{
	return InLocations.ContainsByPredicate(
	[InActor, InDistance](const FVector& InElement)
		{
			return FMath::IsNearlyEqual((InElement - InActor->GetActorLocation()).Length(), InDistance );
		});
}
