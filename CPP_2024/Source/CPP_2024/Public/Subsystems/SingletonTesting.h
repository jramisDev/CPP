#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "SingletonTesting.generated.h"

class FSomeClass
{
public:
	void Foo();
	int32 SomeVariable;
};


class FSingleton
{
	
public:
	// rule of three / five

	
	FSingleton(const FSingleton&) = delete; // copy constructor
	
	FSingleton& operator=(const FSingleton&) = delete; // copy assign

	// ---------

	
	FSingleton(FSingleton&&) = delete; // move operations
	
	FSingleton& operator=(FSingleton&&) = delete; // move assign
	
	static FSingleton& Get()
	{
		return Singleton;
	};

private:
	FSingleton();
	~FSingleton();

	static FSingleton Singleton;
};

// LAZY LOAD
class FGameplayLogger
{
	
public:
	FGameplayLogger(const FGameplayLogger&) = delete;
	FGameplayLogger& operator=(const FGameplayLogger&) = delete;
	FGameplayLogger(FGameplayLogger&&) = delete;
	FGameplayLogger& operator=(FGameplayLogger&&) = delete;
	
	static FGameplayLogger& Get()
	{
		if(!Singleton)
		{
			Singleton = new FGameplayLogger();
		}			
		return *Singleton;
	}

	void AddPendingMsg(const FText& InMsg)
	{
		PendingMessages.Enqueue(InMsg);
		
		if(CurrentCountOfMsgs != MaxMsgOnScreen)
		{
			PublishNextMsg();
		}else
		{
			//ScheduleMsg();
		}
		
	}
	

private:
	FGameplayLogger();
	~FGameplayLogger()
	{
		delete Singleton;
	};

	// Esta funcion se dispara automaticamente cada 2s
	// ciertos sistemas disparan esta función cuando consideren
	void PublishNextMsg()
	{
		FText Msg;
		if(PendingMessages.Dequeue(Msg))
		{
			//Publico el mensaje
			GEngine->AddOnScreenDebugMessage(INDEX_NONE, 2.f, FColor::Cyan, Msg.ToString());
		}
	}
	
	inline static FGameplayLogger* Singleton = nullptr;

	// queue
	//TArray<FText> PendingMessages;
	TQueue<FText> PendingMessages;

	int32 CurrentCountOfMsgs;
	int32 MaxMsgOnScreen;
	
	
};





UCLASS()
class CPP_2024_API ASingletonTesting : public AActor
{
	GENERATED_BODY()

public:
	ASingletonTesting();

	UFUNCTION(BlueprintCallable)
	void TestSingletonStuff();

protected:
	virtual void BeginPlay() override;

public:
	virtual void Tick(float DeltaTime) override;
};
