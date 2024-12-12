// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CPP_2024/Public/Library/GenericUtils.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGenericUtils() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
CPP_2024_API UClass* Z_Construct_UClass_UGenericUtils();
CPP_2024_API UClass* Z_Construct_UClass_UGenericUtils_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UActorComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputAction_NoRegister();
UPackage* Z_Construct_UPackage__Script_CPP_2024();
// End Cross Module References

// Begin Class UGenericUtils Function DoesAnyActorHaveComponent
struct Z_Construct_UFunction_UGenericUtils_DoesAnyActorHaveComponent_Statics
{
	struct GenericUtils_eventDoesAnyActorHaveComponent_Parms
	{
		TArray<AActor*> InActorList;
		const TSubclassOf<UActorComponent> InComponentClass;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Crear una funci\xc3\xb3n que me diga si en una lista, alguno de los actores tiene un componente del tipo que sea\n" },
#endif
		{ "ModuleRelativePath", "Public/Library/GenericUtils.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Crear una funci\xc3\xb3n que me diga si en una lista, alguno de los actores tiene un componente del tipo que sea" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InActorList_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InComponentClass_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InActorList_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_InActorList;
	static const UECodeGen_Private::FClassPropertyParams NewProp_InComponentClass;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGenericUtils_DoesAnyActorHaveComponent_Statics::NewProp_InActorList_Inner = { "InActorList", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UGenericUtils_DoesAnyActorHaveComponent_Statics::NewProp_InActorList = { "InActorList", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GenericUtils_eventDoesAnyActorHaveComponent_Parms, InActorList), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InActorList_MetaData), NewProp_InActorList_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UGenericUtils_DoesAnyActorHaveComponent_Statics::NewProp_InComponentClass = { "InComponentClass", nullptr, (EPropertyFlags)0x0014000008000182, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GenericUtils_eventDoesAnyActorHaveComponent_Parms, InComponentClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UActorComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InComponentClass_MetaData), NewProp_InComponentClass_MetaData) };
void Z_Construct_UFunction_UGenericUtils_DoesAnyActorHaveComponent_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((GenericUtils_eventDoesAnyActorHaveComponent_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGenericUtils_DoesAnyActorHaveComponent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(GenericUtils_eventDoesAnyActorHaveComponent_Parms), &Z_Construct_UFunction_UGenericUtils_DoesAnyActorHaveComponent_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGenericUtils_DoesAnyActorHaveComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGenericUtils_DoesAnyActorHaveComponent_Statics::NewProp_InActorList_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGenericUtils_DoesAnyActorHaveComponent_Statics::NewProp_InActorList,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGenericUtils_DoesAnyActorHaveComponent_Statics::NewProp_InComponentClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGenericUtils_DoesAnyActorHaveComponent_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGenericUtils_DoesAnyActorHaveComponent_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGenericUtils_DoesAnyActorHaveComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGenericUtils, nullptr, "DoesAnyActorHaveComponent", nullptr, nullptr, Z_Construct_UFunction_UGenericUtils_DoesAnyActorHaveComponent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGenericUtils_DoesAnyActorHaveComponent_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGenericUtils_DoesAnyActorHaveComponent_Statics::GenericUtils_eventDoesAnyActorHaveComponent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGenericUtils_DoesAnyActorHaveComponent_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGenericUtils_DoesAnyActorHaveComponent_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UGenericUtils_DoesAnyActorHaveComponent_Statics::GenericUtils_eventDoesAnyActorHaveComponent_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGenericUtils_DoesAnyActorHaveComponent()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGenericUtils_DoesAnyActorHaveComponent_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGenericUtils::execDoesAnyActorHaveComponent)
{
	P_GET_TARRAY_REF(AActor*,Z_Param_Out_InActorList);
	P_GET_OBJECT_REF_NO_PTR(TSubclassOf<UActorComponent>,Z_Param_Out_InComponentClass);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UGenericUtils::DoesAnyActorHaveComponent(Z_Param_Out_InActorList,Z_Param_Out_InComponentClass);
	P_NATIVE_END;
}
// End Class UGenericUtils Function DoesAnyActorHaveComponent

// Begin Class UGenericUtils Function GetAllActorOfClasses
struct Z_Construct_UFunction_UGenericUtils_GetAllActorOfClasses_Statics
{
	struct GenericUtils_eventGetAllActorOfClasses_Parms
	{
		const UObject* WorldContextObject;
		TArray<TSubclassOf<AActor> > ActorClass;
		TArray<AActor*> FilteredActors;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Crear una funci\xc3\xb3n que me devuelva una lista de actores del nivel en base a una lista de clases\n" },
#endif
		{ "ModuleRelativePath", "Public/Library/GenericUtils.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Crear una funci\xc3\xb3n que me devuelva una lista de actores del nivel en base a una lista de clases" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ActorClass_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FClassPropertyParams NewProp_ActorClass_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ActorClass;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_FilteredActors_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_FilteredActors;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGenericUtils_GetAllActorOfClasses_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GenericUtils_eventGetAllActorOfClasses_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WorldContextObject_MetaData), NewProp_WorldContextObject_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UGenericUtils_GetAllActorOfClasses_Statics::NewProp_ActorClass_Inner = { "ActorClass", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UClass, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UGenericUtils_GetAllActorOfClasses_Statics::NewProp_ActorClass = { "ActorClass", nullptr, (EPropertyFlags)0x0014000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GenericUtils_eventGetAllActorOfClasses_Parms, ActorClass), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ActorClass_MetaData), NewProp_ActorClass_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGenericUtils_GetAllActorOfClasses_Statics::NewProp_FilteredActors_Inner = { "FilteredActors", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UGenericUtils_GetAllActorOfClasses_Statics::NewProp_FilteredActors = { "FilteredActors", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GenericUtils_eventGetAllActorOfClasses_Parms, FilteredActors), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGenericUtils_GetAllActorOfClasses_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGenericUtils_GetAllActorOfClasses_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGenericUtils_GetAllActorOfClasses_Statics::NewProp_ActorClass_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGenericUtils_GetAllActorOfClasses_Statics::NewProp_ActorClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGenericUtils_GetAllActorOfClasses_Statics::NewProp_FilteredActors_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGenericUtils_GetAllActorOfClasses_Statics::NewProp_FilteredActors,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGenericUtils_GetAllActorOfClasses_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGenericUtils_GetAllActorOfClasses_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGenericUtils, nullptr, "GetAllActorOfClasses", nullptr, nullptr, Z_Construct_UFunction_UGenericUtils_GetAllActorOfClasses_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGenericUtils_GetAllActorOfClasses_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGenericUtils_GetAllActorOfClasses_Statics::GenericUtils_eventGetAllActorOfClasses_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGenericUtils_GetAllActorOfClasses_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGenericUtils_GetAllActorOfClasses_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UGenericUtils_GetAllActorOfClasses_Statics::GenericUtils_eventGetAllActorOfClasses_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGenericUtils_GetAllActorOfClasses()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGenericUtils_GetAllActorOfClasses_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGenericUtils::execGetAllActorOfClasses)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_TARRAY_REF(TSubclassOf<AActor>,Z_Param_Out_ActorClass);
	P_GET_TARRAY_REF(AActor*,Z_Param_Out_FilteredActors);
	P_FINISH;
	P_NATIVE_BEGIN;
	UGenericUtils::GetAllActorOfClasses(Z_Param_WorldContextObject,Z_Param_Out_ActorClass,Z_Param_Out_FilteredActors);
	P_NATIVE_END;
}
// End Class UGenericUtils Function GetAllActorOfClasses

// Begin Class UGenericUtils Function HasAction
struct Z_Construct_UFunction_UGenericUtils_HasAction_Statics
{
	struct GenericUtils_eventHasAction_Parms
	{
		AActor* InActorToCheck;
		UInputAction* InAction;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Crear una funci\xc3\xb3n que me diga si un personaje tiene un input action asignado\n" },
#endif
		{ "ModuleRelativePath", "Public/Library/GenericUtils.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Crear una funci\xc3\xb3n que me diga si un personaje tiene un input action asignado" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InActorToCheck;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InAction;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGenericUtils_HasAction_Statics::NewProp_InActorToCheck = { "InActorToCheck", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GenericUtils_eventHasAction_Parms, InActorToCheck), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGenericUtils_HasAction_Statics::NewProp_InAction = { "InAction", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GenericUtils_eventHasAction_Parms, InAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UGenericUtils_HasAction_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((GenericUtils_eventHasAction_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGenericUtils_HasAction_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(GenericUtils_eventHasAction_Parms), &Z_Construct_UFunction_UGenericUtils_HasAction_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGenericUtils_HasAction_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGenericUtils_HasAction_Statics::NewProp_InActorToCheck,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGenericUtils_HasAction_Statics::NewProp_InAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGenericUtils_HasAction_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGenericUtils_HasAction_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGenericUtils_HasAction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGenericUtils, nullptr, "HasAction", nullptr, nullptr, Z_Construct_UFunction_UGenericUtils_HasAction_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGenericUtils_HasAction_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGenericUtils_HasAction_Statics::GenericUtils_eventHasAction_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGenericUtils_HasAction_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGenericUtils_HasAction_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UGenericUtils_HasAction_Statics::GenericUtils_eventHasAction_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGenericUtils_HasAction()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGenericUtils_HasAction_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGenericUtils::execHasAction)
{
	P_GET_OBJECT(AActor,Z_Param_InActorToCheck);
	P_GET_OBJECT(UInputAction,Z_Param_InAction);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UGenericUtils::HasAction(Z_Param_InActorToCheck,Z_Param_InAction);
	P_NATIVE_END;
}
// End Class UGenericUtils Function HasAction

// Begin Class UGenericUtils Function IsActorInRange
struct Z_Construct_UFunction_UGenericUtils_IsActorInRange_Statics
{
	struct GenericUtils_eventIsActorInRange_Parms
	{
		TArray<FVector> InLocations;
		AActor* InActor;
		float InDistance;
		float InEpsilon;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Crear una funci\xc3\xb3n que me diga para lista de Locations si alguno est\xc3\xa1 a tantas unidades de un actor\n" },
#endif
		{ "ModuleRelativePath", "Public/Library/GenericUtils.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Crear una funci\xc3\xb3n que me diga para lista de Locations si alguno est\xc3\xa1 a tantas unidades de un actor" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InLocations_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_InLocations_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_InLocations;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InActor;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_InDistance;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_InEpsilon;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGenericUtils_IsActorInRange_Statics::NewProp_InLocations_Inner = { "InLocations", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UGenericUtils_IsActorInRange_Statics::NewProp_InLocations = { "InLocations", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GenericUtils_eventIsActorInRange_Parms, InLocations), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InLocations_MetaData), NewProp_InLocations_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGenericUtils_IsActorInRange_Statics::NewProp_InActor = { "InActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GenericUtils_eventIsActorInRange_Parms, InActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UGenericUtils_IsActorInRange_Statics::NewProp_InDistance = { "InDistance", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GenericUtils_eventIsActorInRange_Parms, InDistance), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UGenericUtils_IsActorInRange_Statics::NewProp_InEpsilon = { "InEpsilon", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GenericUtils_eventIsActorInRange_Parms, InEpsilon), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UGenericUtils_IsActorInRange_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((GenericUtils_eventIsActorInRange_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGenericUtils_IsActorInRange_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(GenericUtils_eventIsActorInRange_Parms), &Z_Construct_UFunction_UGenericUtils_IsActorInRange_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGenericUtils_IsActorInRange_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGenericUtils_IsActorInRange_Statics::NewProp_InLocations_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGenericUtils_IsActorInRange_Statics::NewProp_InLocations,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGenericUtils_IsActorInRange_Statics::NewProp_InActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGenericUtils_IsActorInRange_Statics::NewProp_InDistance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGenericUtils_IsActorInRange_Statics::NewProp_InEpsilon,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGenericUtils_IsActorInRange_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGenericUtils_IsActorInRange_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGenericUtils_IsActorInRange_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGenericUtils, nullptr, "IsActorInRange", nullptr, nullptr, Z_Construct_UFunction_UGenericUtils_IsActorInRange_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGenericUtils_IsActorInRange_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGenericUtils_IsActorInRange_Statics::GenericUtils_eventIsActorInRange_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGenericUtils_IsActorInRange_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGenericUtils_IsActorInRange_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UGenericUtils_IsActorInRange_Statics::GenericUtils_eventIsActorInRange_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGenericUtils_IsActorInRange()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGenericUtils_IsActorInRange_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGenericUtils::execIsActorInRange)
{
	P_GET_TARRAY_REF(FVector,Z_Param_Out_InLocations);
	P_GET_OBJECT(AActor,Z_Param_InActor);
	P_GET_PROPERTY(FFloatProperty,Z_Param_InDistance);
	P_GET_PROPERTY(FFloatProperty,Z_Param_InEpsilon);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UGenericUtils::IsActorInRange(Z_Param_Out_InLocations,Z_Param_InActor,Z_Param_InDistance,Z_Param_InEpsilon);
	P_NATIVE_END;
}
// End Class UGenericUtils Function IsActorInRange

// Begin Class UGenericUtils Function IsThereAnyActorCloseToMe
struct Z_Construct_UFunction_UGenericUtils_IsThereAnyActorCloseToMe_Statics
{
	struct GenericUtils_eventIsThereAnyActorCloseToMe_Parms
	{
		AActor* Me;
		TArray<AActor*> InActorList;
		float Distance;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Library/GenericUtils.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InActorList_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Me;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InActorList_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_InActorList;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Distance;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGenericUtils_IsThereAnyActorCloseToMe_Statics::NewProp_Me = { "Me", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GenericUtils_eventIsThereAnyActorCloseToMe_Parms, Me), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGenericUtils_IsThereAnyActorCloseToMe_Statics::NewProp_InActorList_Inner = { "InActorList", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UGenericUtils_IsThereAnyActorCloseToMe_Statics::NewProp_InActorList = { "InActorList", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GenericUtils_eventIsThereAnyActorCloseToMe_Parms, InActorList), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InActorList_MetaData), NewProp_InActorList_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UGenericUtils_IsThereAnyActorCloseToMe_Statics::NewProp_Distance = { "Distance", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GenericUtils_eventIsThereAnyActorCloseToMe_Parms, Distance), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UGenericUtils_IsThereAnyActorCloseToMe_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((GenericUtils_eventIsThereAnyActorCloseToMe_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGenericUtils_IsThereAnyActorCloseToMe_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(GenericUtils_eventIsThereAnyActorCloseToMe_Parms), &Z_Construct_UFunction_UGenericUtils_IsThereAnyActorCloseToMe_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGenericUtils_IsThereAnyActorCloseToMe_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGenericUtils_IsThereAnyActorCloseToMe_Statics::NewProp_Me,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGenericUtils_IsThereAnyActorCloseToMe_Statics::NewProp_InActorList_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGenericUtils_IsThereAnyActorCloseToMe_Statics::NewProp_InActorList,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGenericUtils_IsThereAnyActorCloseToMe_Statics::NewProp_Distance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGenericUtils_IsThereAnyActorCloseToMe_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGenericUtils_IsThereAnyActorCloseToMe_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGenericUtils_IsThereAnyActorCloseToMe_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGenericUtils, nullptr, "IsThereAnyActorCloseToMe", nullptr, nullptr, Z_Construct_UFunction_UGenericUtils_IsThereAnyActorCloseToMe_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGenericUtils_IsThereAnyActorCloseToMe_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGenericUtils_IsThereAnyActorCloseToMe_Statics::GenericUtils_eventIsThereAnyActorCloseToMe_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGenericUtils_IsThereAnyActorCloseToMe_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGenericUtils_IsThereAnyActorCloseToMe_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UGenericUtils_IsThereAnyActorCloseToMe_Statics::GenericUtils_eventIsThereAnyActorCloseToMe_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGenericUtils_IsThereAnyActorCloseToMe()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGenericUtils_IsThereAnyActorCloseToMe_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGenericUtils::execIsThereAnyActorCloseToMe)
{
	P_GET_OBJECT(AActor,Z_Param_Me);
	P_GET_TARRAY_REF(AActor*,Z_Param_Out_InActorList);
	P_GET_PROPERTY(FFloatProperty,Z_Param_Distance);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UGenericUtils::IsThereAnyActorCloseToMe(Z_Param_Me,Z_Param_Out_InActorList,Z_Param_Distance);
	P_NATIVE_END;
}
// End Class UGenericUtils Function IsThereAnyActorCloseToMe

// Begin Class UGenericUtils
void UGenericUtils::StaticRegisterNativesUGenericUtils()
{
	UClass* Class = UGenericUtils::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "DoesAnyActorHaveComponent", &UGenericUtils::execDoesAnyActorHaveComponent },
		{ "GetAllActorOfClasses", &UGenericUtils::execGetAllActorOfClasses },
		{ "HasAction", &UGenericUtils::execHasAction },
		{ "IsActorInRange", &UGenericUtils::execIsActorInRange },
		{ "IsThereAnyActorCloseToMe", &UGenericUtils::execIsThereAnyActorCloseToMe },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGenericUtils);
UClass* Z_Construct_UClass_UGenericUtils_NoRegister()
{
	return UGenericUtils::StaticClass();
}
struct Z_Construct_UClass_UGenericUtils_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Library/GenericUtils.h" },
		{ "ModuleRelativePath", "Public/Library/GenericUtils.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UGenericUtils_DoesAnyActorHaveComponent, "DoesAnyActorHaveComponent" }, // 1876392035
		{ &Z_Construct_UFunction_UGenericUtils_GetAllActorOfClasses, "GetAllActorOfClasses" }, // 3904215535
		{ &Z_Construct_UFunction_UGenericUtils_HasAction, "HasAction" }, // 1922087484
		{ &Z_Construct_UFunction_UGenericUtils_IsActorInRange, "IsActorInRange" }, // 2217232952
		{ &Z_Construct_UFunction_UGenericUtils_IsThereAnyActorCloseToMe, "IsThereAnyActorCloseToMe" }, // 1894078431
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGenericUtils>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UGenericUtils_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
	(UObject* (*)())Z_Construct_UPackage__Script_CPP_2024,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGenericUtils_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UGenericUtils_Statics::ClassParams = {
	&UGenericUtils::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGenericUtils_Statics::Class_MetaDataParams), Z_Construct_UClass_UGenericUtils_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UGenericUtils()
{
	if (!Z_Registration_Info_UClass_UGenericUtils.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGenericUtils.OuterSingleton, Z_Construct_UClass_UGenericUtils_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UGenericUtils.OuterSingleton;
}
template<> CPP_2024_API UClass* StaticClass<UGenericUtils>()
{
	return UGenericUtils::StaticClass();
}
UGenericUtils::UGenericUtils(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UGenericUtils);
UGenericUtils::~UGenericUtils() {}
// End Class UGenericUtils

// Begin Registration
struct Z_CompiledInDeferFile_FID_Proyectos_UT_HUB_Tercero_CMasMas_CPP_2024_Source_CPP_2024_Public_Library_GenericUtils_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UGenericUtils, UGenericUtils::StaticClass, TEXT("UGenericUtils"), &Z_Registration_Info_UClass_UGenericUtils, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGenericUtils), 2345189786U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Proyectos_UT_HUB_Tercero_CMasMas_CPP_2024_Source_CPP_2024_Public_Library_GenericUtils_h_1313313843(TEXT("/Script/CPP_2024"),
	Z_CompiledInDeferFile_FID_Proyectos_UT_HUB_Tercero_CMasMas_CPP_2024_Source_CPP_2024_Public_Library_GenericUtils_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Proyectos_UT_HUB_Tercero_CMasMas_CPP_2024_Source_CPP_2024_Public_Library_GenericUtils_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
