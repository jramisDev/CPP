#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "StackActor.generated.h"

template<typename T, int N = 8>
class TStack
{

	T* Data;
	SIZE_T Cursor;
	
public:
	TStack()
	{
		Cursor = 0;
		Data = new T[N];
	}

	~TStack()
	{
		delete[] Data;
		Cursor = 0;
		Data = nullptr;
	}

	void Push(const T& InValue)
	{
		check(Cursor < N);
		Data[Cursor++] = InValue;
	}

	T Pop()
	{
		check(Cursor >= 0);
		return Data[--Cursor];
	}
	
	const T& Peek() const 
	{
		check(Cursor != 0);
		return Data[Cursor-1];
	}

	bool IsEmpty() const
	{
		return Cursor == 0;
	}
};


UCLASS()
class CPP_2024_API AStackActor : public AActor
{
	GENERATED_BODY()

public:
	AStackActor();

protected:
	virtual void BeginPlay() override;

public:
	virtual void Tick(float DeltaTime) override;
};
