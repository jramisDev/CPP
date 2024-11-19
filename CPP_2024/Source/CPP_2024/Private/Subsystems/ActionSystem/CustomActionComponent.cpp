#include "Subsystems/ActionSystem/CustomActionComponent.h"

#include "Subsystems/ActionSystem/CustomActionBase.h"

UCustomActionComponent::UCustomActionComponent()
{
	PrimaryComponentTick.bCanEverTick = true;
}

void UCustomActionComponent::BeginPlay()
{
	Super::BeginPlay();
}

void UCustomActionComponent::DoAction(const TSubclassOf<UCustomActionBase>& ActionClass) const
{

	if(Actions.Contains(ActionClass))
	{
		ActionClass->GetDefaultObject<UCustomActionBase>()->DoAction(GetOwner());
	}
}

