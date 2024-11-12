#include "Subsystems/ActionSystem/CustomActionComponent.h"

UCustomActionComponent::UCustomActionComponent()
{
	PrimaryComponentTick.bCanEverTick = true;
}

void UCustomActionComponent::BeginPlay()
{
	Super::BeginPlay();
}

void UCustomActionComponent::TickComponent(float DeltaTime, ELevelTick TickType,
                                           FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);
}

