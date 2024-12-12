﻿#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "GenericUtils.generated.h"


class UInputAction;


UCLASS()
class CPP_2024_API UGenericUtils : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

public:
	
	UFUNCTION(BlueprintCallable)
	static bool IsThereAnyActorCloseToMe(AActor* Me, const TArray<AActor*>& InActorList, float Distance);
	
	// Crear una función que me diga si en una lista, alguno de los actores tiene un componente del tipo que sea
    UFUNCTION(BlueprintCallable)
	static bool DoesAnyActorHaveComponent(const TArray<AActor*>& InActorList, const TSubclassOf<UActorComponent>& InComponentClass);

	// Crear una función que me diga para lista de Locations si alguno está a tantas unidades de un actor
	UFUNCTION(BlueprintCallable)
	static bool IsActorInRange(const TArray<FVector>& InLocations, AActor* InActor, float InDistance, float InEpsilon);
	
	//Crear una función que me diga si un personaje tiene un input action asignado
	UFUNCTION(BlueprintCallable)
	static bool HasAction(AActor* InActorToCheck, UInputAction* InAction);

	//Crear una función que me devuelva una lista de actores del nivel en base a una lista de clases
	UFUNCTION(BlueprintCallable)
	static void GetAllActorOfClasses(const UObject* WorldContextObject, const TArray<TSubclassOf<AActor>>& ActorClass, TArray<AActor*>& FilteredActors);

	template<typename ArrType>
	static void SortArray(TArray<ArrType>& InUnsortedArray, TFunctionRef<bool(ArrType, ArrType)> Predicate)
	{
		SIZE_T ArrPos = 0;
	
		for (SIZE_T i = 0; i < InUnsortedArray.Num(); ++i)
		{
			ArrPos = i;
			for (SIZE_T j = i + 1; InUnsortedArray.Num(); ++j)
			{
				//if(InUnsortedArray[j] < InUnsortedArray[ArrPos])
				if(Predicate(InUnsortedArray[j], InUnsortedArray[ArrPos]))
				{
					ArrPos = j;
				}
			}

			if(ArrPos != i) InUnsortedArray.Swap(ArrPos, i);
		}
	}
};