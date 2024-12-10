#include "Predicates/PredicateActor.h"

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
	GetWorld()->GetTimerManager().SetTimer(OutHandle, []()
	{
		UE_LOG(LogTemp, Display, TEXT("I Have Waited long enought!"))
	}, 1.f, false);
	
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
