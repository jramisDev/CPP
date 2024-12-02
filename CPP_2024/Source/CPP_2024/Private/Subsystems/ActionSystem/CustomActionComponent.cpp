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

void UCustomActionComponent::DoAction(const TSubclassOf<UCustomActionBase>& ActionClass) 
{
	if(Actions.Contains(ActionClass))
	{
		CurrentAction = ActionClass;
		ActionClass->GetDefaultObject<UCustomActionBase>()->DoAction(GetOwner());
	}
}

void UCustomActionComponent::StopAction()
{
	if(CurrentAction)
	{
		CurrentAction->GetDefaultObject<UCustomActionBase>()->EndAction(GetOwner());
		CurrentAction= nullptr;
	}		
}

