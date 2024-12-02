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

void APredicateActor::TestFunction()
{
	int Score = 100;
	
	auto Lambda = [Score]()
	{
		
	};

	GetWorld()->GetTimerManager().SetTimer();
}