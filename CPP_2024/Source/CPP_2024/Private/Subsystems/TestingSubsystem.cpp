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
	return !Outer->GetWorld()->IsEditorWorld();
}
