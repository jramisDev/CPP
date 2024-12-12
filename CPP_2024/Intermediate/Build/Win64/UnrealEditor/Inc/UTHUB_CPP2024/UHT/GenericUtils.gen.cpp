// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UTHUB_CPP2024/Public/Predicates/GenericUtils.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGenericUtils() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UActorComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputAction_NoRegister();
UPackage* Z_Construct_UPackage__Script_UTHUB_CPP2024();
UTHUB_CPP2024_API UClass* Z_Construct_UClass_UGenericUtils();
UTHUB_CPP2024_API UClass* Z_Construct_UClass_UGenericUtils_NoRegister();
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
		{ "Comment", "// Crear una funci\xc3\xb3n que me diga si en una lista alguno de los actores tiene un componente del tipo que sea\n" },
#endif
		{ "ModuleRelativePath", "Public/Predicates/GenericUtils.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Crear una funci\xc3\xb3n que me diga si en una lista alguno de los actores tiene un componente del tipo que sea" },
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

// Begin Class UGenericUtils Function GetAllActorsOfClasses
struct Z_Construct_UFunction_UGenericUtils_GetAllActorsOfClasses_Statics
{
	struct GenericUtils_eventGetAllActorsOfClasses_Parms
	{
		const UObject* WorldContextObject;
		TArray<TSubclassOf<AActor> > ActorClasses;
		TArray<AActor*> FilteredActors;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Crear una funci\xc3\xb3n que me devuelva una lista de actores del nivel en base a una lista de clases\n" },
#endif
		{ "ModuleRelativePath", "Public/Predicates/GenericUtils.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Crear una funci\xc3\xb3n que me devuelva una lista de actores del nivel en base a una lista de clases" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ActorClasses_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FClassPropertyParams NewProp_ActorClasses_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ActorClasses;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_FilteredActors_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_FilteredActors;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGenericUtils_GetAllActorsOfClasses_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GenericUtils_eventGetAllActorsOfClasses_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WorldContextObject_MetaData), NewProp_WorldContextObject_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UGenericUtils_GetAllActorsOfClasses_Statics::NewProp_ActorClasses_Inner = { "ActorClasses", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UClass, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UGenericUtils_GetAllActorsOfClasses_Statics::NewProp_ActorClasses = { "ActorClasses", nullptr, (EPropertyFlags)0x0014000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GenericUtils_eventGetAllActorsOfClasses_Parms, ActorClasses), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ActorClasses_MetaData), NewProp_ActorClasses_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGenericUtils_GetAllActorsOfClasses_Statics::NewProp_FilteredActors_Inner = { "FilteredActors", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UGenericUtils_GetAllActorsOfClasses_Statics::NewProp_FilteredActors = { "FilteredActors", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GenericUtils_eventGetAllActorsOfClasses_Parms, FilteredActors), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGenericUtils_GetAllActorsOfClasses_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGenericUtils_GetAllActorsOfClasses_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGenericUtils_GetAllActorsOfClasses_Statics::NewProp_ActorClasses_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGenericUtils_GetAllActorsOfClasses_Statics::NewProp_ActorClasses,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGenericUtils_GetAllActorsOfClasses_Statics::NewProp_FilteredActors_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGenericUtils_GetAllActorsOfClasses_Statics::NewProp_FilteredActors,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGenericUtils_GetAllActorsOfClasses_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGenericUtils_GetAllActorsOfClasses_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGenericUtils, nullptr, "GetAllActorsOfClasses", nullptr, nullptr, Z_Construct_UFunction_UGenericUtils_GetAllActorsOfClasses_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGenericUtils_GetAllActorsOfClasses_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGenericUtils_GetAllActorsOfClasses_Statics::GenericUtils_eventGetAllActorsOfClasses_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGenericUtils_GetAllActorsOfClasses_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGenericUtils_GetAllActorsOfClasses_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UGenericUtils_GetAllActorsOfClasses_Statics::GenericUtils_eventGetAllActorsOfClasses_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGenericUtils_GetAllActorsOfClasses()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGenericUtils_GetAllActorsOfClasses_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGenericUtils::execGetAllActorsOfClasses)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_TARRAY_REF(TSubclassOf<AActor>,Z_Param_Out_ActorClasses);
	P_GET_TARRAY_REF(AActor*,Z_Param_Out_FilteredActors);
	P_FINISH;
	P_NATIVE_BEGIN;
	UGenericUtils::GetAllActorsOfClasses(Z_Param_WorldContextObject,Z_Param_Out_ActorClasses,Z_Param_Out_FilteredActors);
	P_NATIVE_END;
}
// End Class UGenericUtils Function GetAllActorsOfClasses

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
		{ "Comment", "// Crear una funci\xc3\xb3n que me diga si un actor tiene un input action asignado\n" },
#endif
		{ "ModuleRelativePath", "Public/Predicates/GenericUtils.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Crear una funci\xc3\xb3n que me diga si un actor tiene un input action asignado" },
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
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Crear una funci\xc3\xb3n que me diga si un personaje tiene un input action asignado\n" },
#endif
		{ "ModuleRelativePath", "Public/Predicates/GenericUtils.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Crear una funci\xc3\xb3n que me diga si un personaje tiene un input action asignado" },
#endif
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
		{ "GetAllActorsOfClasses", &UGenericUtils::execGetAllActorsOfClasses },
		{ "HasAction", &UGenericUtils::execHasAction },
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
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "Predicates/GenericUtils.h" },
		{ "ModuleRelativePath", "Public/Predicates/GenericUtils.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UGenericUtils_DoesAnyActorHaveComponent, "DoesAnyActorHaveComponent" }, // 1763504058
		{ &Z_Construct_UFunction_UGenericUtils_GetAllActorsOfClasses, "GetAllActorsOfClasses" }, // 485086747
		{ &Z_Construct_UFunction_UGenericUtils_HasAction, "HasAction" }, // 3433521321
		{ &Z_Construct_UFunction_UGenericUtils_IsThereAnyActorCloseToMe, "IsThereAnyActorCloseToMe" }, // 2207954254
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGenericUtils>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UGenericUtils_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
	(UObject* (*)())Z_Construct_UPackage__Script_UTHUB_CPP2024,
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
template<> UTHUB_CPP2024_API UClass* StaticClass<UGenericUtils>()
{
	return UGenericUtils::StaticClass();
}
UGenericUtils::UGenericUtils(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UGenericUtils);
UGenericUtils::~UGenericUtils() {}
// End Class UGenericUtils

// Begin Registration
struct Z_CompiledInDeferFile_FID_Proyectos_UT_HUB_Tercero_CMasMas_CPP_2024_Source_UTHUB_CPP2024_Public_Predicates_GenericUtils_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UGenericUtils, UGenericUtils::StaticClass, TEXT("UGenericUtils"), &Z_Registration_Info_UClass_UGenericUtils, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGenericUtils), 4245613961U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Proyectos_UT_HUB_Tercero_CMasMas_CPP_2024_Source_UTHUB_CPP2024_Public_Predicates_GenericUtils_h_3022195374(TEXT("/Script/UTHUB_CPP2024"),
	Z_CompiledInDeferFile_FID_Proyectos_UT_HUB_Tercero_CMasMas_CPP_2024_Source_UTHUB_CPP2024_Public_Predicates_GenericUtils_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Proyectos_UT_HUB_Tercero_CMasMas_CPP_2024_Source_UTHUB_CPP2024_Public_Predicates_GenericUtils_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
