#include "Predicates/PredicateActor.h"

#include "Chaos/ChaosPerfTest.h"
#include "Engine/TargetPoint.h"
#include "Kismet/GameplayStatics.h"
#include "Library/GenericUtils.h"

class FSingleDelegate
{
	void(*Functor)(void) = nullptr;

public:
	void Bind(void(*InFunctor)(void));

	bool Execute()
	{
		Functor();
		return true;
	};	
};

void SomeFunction()
{
	
}

void Func1(int val);
int Func2();
void Func3(int* ptr, float);
AActor* Func4(FName ActorName);


APredicateActor::APredicateActor()
{
	PrimaryActorTick.bCanEverTick = true;
}

void APredicateActor::PrintAfterTime()
{
	UE_LOG(LogTemp, Display, TEXT(""))
}

void SomeStuff()
{
	
}

void APredicateActor::TestFunction()
{
	// GetWorld()->GetTimerManager().SetTimer(OutHandle, []()
	// {
	// 	UE_LOG(LogTemp, Display, TEXT("I Have Waited long enought!"))
	// }, 1.f, false);

	TArray<int32> NumArr{10,2,5,4,3};
	UGenericUtils::SortArray<int32>(NumArr, [](int32 LHS, int32 RHS)
	{
		return LHS < RHS;
	});

	UGenericUtils::SortArray<int32>(NumArr, [](int32 LHS, int32 RHS)
	{
		return LHS > RHS;
	});

	TArray<AActor*> OutActors;
	UGameplayStatics::GetAllActorsOfClass(GetWorld(), ATargetPoint::StaticClass(), OutActors);

	UGenericUtils::SortArray<AActor*>(OutActors, [this](AActor* LHS, AActor* RHS)
	{
		return this->GetDistanceTo(LHS) < this->GetDistanceTo(RHS);		
	});
	
}

void APredicateActor::SomeActorStuff()
{
}

void APredicateActor::DoSomething(TFunction<void()> Func)
{
	Func();
}

void APredicateActor::BeginPlay()
{
	Super::BeginPlay();

	auto Lambda = []()
	{
		
	};
	Lambda();
}
