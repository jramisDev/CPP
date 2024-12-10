#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "GenericUtils.generated.h"


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
	static bool IsActorInRange(const TArray<FVector&> InLocations, AActor* InActor, float InDistance, float InEpsilon);
	
	// Crear una función que me diga si un personaje tiene un input action asignado
};