// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UTHUB_CPP2024/Public/Subsistemas/ActionSystem/CustomActionSubsystem.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCustomActionSubsystem() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UWorldSubsystem();
UPackage* Z_Construct_UPackage__Script_UTHUB_CPP2024();
UTHUB_CPP2024_API UClass* Z_Construct_UClass_UCustomActionBase_NoRegister();
UTHUB_CPP2024_API UClass* Z_Construct_UClass_UCustomActionSubsystem();
UTHUB_CPP2024_API UClass* Z_Construct_UClass_UCustomActionSubsystem_NoRegister();
UTHUB_CPP2024_API UFunction* Z_Construct_UDelegateFunction_UCustomActionSubsystem_SingleActionEvent__DelegateSignature();
UTHUB_CPP2024_API UFunction* Z_Construct_UDelegateFunction_UTHUB_CPP2024_OnActionEvent__DelegateSignature();
// End Cross Module References

// Begin Delegate FOnActionEvent
struct Z_Construct_UDelegateFunction_UTHUB_CPP2024_OnActionEvent__DelegateSignature_Statics
{
	struct _Script_UTHUB_CPP2024_eventOnActionEvent_Parms
	{
		AActor* ActionInstigator;
		TSubclassOf<UCustomActionBase> Action;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Subsistemas/ActionSystem/CustomActionSubsystem.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ActionInstigator;
	static const UECodeGen_Private::FClassPropertyParams NewProp_Action;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_UTHUB_CPP2024_OnActionEvent__DelegateSignature_Statics::NewProp_ActionInstigator = { "ActionInstigator", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_UTHUB_CPP2024_eventOnActionEvent_Parms, ActionInstigator), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UDelegateFunction_UTHUB_CPP2024_OnActionEvent__DelegateSignature_Statics::NewProp_Action = { "Action", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_UTHUB_CPP2024_eventOnActionEvent_Parms, Action), Z_Construct_UClass_UClass, Z_Construct_UClass_UCustomActionBase_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_UTHUB_CPP2024_OnActionEvent__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UTHUB_CPP2024_OnActionEvent__DelegateSignature_Statics::NewProp_ActionInstigator,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UTHUB_CPP2024_OnActionEvent__DelegateSignature_Statics::NewProp_Action,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UTHUB_CPP2024_OnActionEvent__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UTHUB_CPP2024_OnActionEvent__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_UTHUB_CPP2024, nullptr, "OnActionEvent__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_UTHUB_CPP2024_OnActionEvent__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UTHUB_CPP2024_OnActionEvent__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_UTHUB_CPP2024_OnActionEvent__DelegateSignature_Statics::_Script_UTHUB_CPP2024_eventOnActionEvent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UTHUB_CPP2024_OnActionEvent__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_UTHUB_CPP2024_OnActionEvent__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_UTHUB_CPP2024_OnActionEvent__DelegateSignature_Statics::_Script_UTHUB_CPP2024_eventOnActionEvent_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_UTHUB_CPP2024_OnActionEvent__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_UTHUB_CPP2024_OnActionEvent__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnActionEvent_DelegateWrapper(const FMulticastScriptDelegate& OnActionEvent, AActor* ActionInstigator, TSubclassOf<UCustomActionBase> Action)
{
	struct _Script_UTHUB_CPP2024_eventOnActionEvent_Parms
	{
		AActor* ActionInstigator;
		TSubclassOf<UCustomActionBase> Action;
	};
	_Script_UTHUB_CPP2024_eventOnActionEvent_Parms Parms;
	Parms.ActionInstigator=ActionInstigator;
	Parms.Action=Action;
	OnActionEvent.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FOnActionEvent

// Begin Delegate FSingleActionEvent
struct Z_Construct_UDelegateFunction_UCustomActionSubsystem_SingleActionEvent__DelegateSignature_Statics
{
	struct CustomActionSubsystem_eventSingleActionEvent_Parms
	{
		AActor* ActionInstigator;
		TSubclassOf<UCustomActionBase> Action;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Subsistemas/ActionSystem/CustomActionSubsystem.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ActionInstigator;
	static const UECodeGen_Private::FClassPropertyParams NewProp_Action;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_UCustomActionSubsystem_SingleActionEvent__DelegateSignature_Statics::NewProp_ActionInstigator = { "ActionInstigator", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CustomActionSubsystem_eventSingleActionEvent_Parms, ActionInstigator), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UDelegateFunction_UCustomActionSubsystem_SingleActionEvent__DelegateSignature_Statics::NewProp_Action = { "Action", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CustomActionSubsystem_eventSingleActionEvent_Parms, Action), Z_Construct_UClass_UClass, Z_Construct_UClass_UCustomActionBase_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_UCustomActionSubsystem_SingleActionEvent__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UCustomActionSubsystem_SingleActionEvent__DelegateSignature_Statics::NewProp_ActionInstigator,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UCustomActionSubsystem_SingleActionEvent__DelegateSignature_Statics::NewProp_Action,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UCustomActionSubsystem_SingleActionEvent__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UCustomActionSubsystem_SingleActionEvent__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCustomActionSubsystem, nullptr, "SingleActionEvent__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_UCustomActionSubsystem_SingleActionEvent__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UCustomActionSubsystem_SingleActionEvent__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_UCustomActionSubsystem_SingleActionEvent__DelegateSignature_Statics::CustomActionSubsystem_eventSingleActionEvent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UCustomActionSubsystem_SingleActionEvent__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_UCustomActionSubsystem_SingleActionEvent__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_UCustomActionSubsystem_SingleActionEvent__DelegateSignature_Statics::CustomActionSubsystem_eventSingleActionEvent_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_UCustomActionSubsystem_SingleActionEvent__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_UCustomActionSubsystem_SingleActionEvent__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void UCustomActionSubsystem::FSingleActionEvent_DelegateWrapper(const FScriptDelegate& SingleActionEvent, AActor* ActionInstigator, TSubclassOf<UCustomActionBase> Action)
{
	struct CustomActionSubsystem_eventSingleActionEvent_Parms
	{
		AActor* ActionInstigator;
		TSubclassOf<UCustomActionBase> Action;
	};
	CustomActionSubsystem_eventSingleActionEvent_Parms Parms;
	Parms.ActionInstigator=ActionInstigator;
	Parms.Action=Action;
	SingleActionEvent.ProcessDelegate<UObject>(&Parms);
}
// End Delegate FSingleActionEvent

// Begin Class UCustomActionSubsystem Function AddActionToActor
struct Z_Construct_UFunction_UCustomActionSubsystem_AddActionToActor_Statics
{
	struct CustomActionSubsystem_eventAddActionToActor_Parms
	{
		AActor* InActor;
		const TSubclassOf<UCustomActionBase> InNewAction;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Subsistemas/ActionSystem/CustomActionSubsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InNewAction_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InActor;
	static const UECodeGen_Private::FClassPropertyParams NewProp_InNewAction;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCustomActionSubsystem_AddActionToActor_Statics::NewProp_InActor = { "InActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CustomActionSubsystem_eventAddActionToActor_Parms, InActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UCustomActionSubsystem_AddActionToActor_Statics::NewProp_InNewAction = { "InNewAction", nullptr, (EPropertyFlags)0x0014000008000182, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CustomActionSubsystem_eventAddActionToActor_Parms, InNewAction), Z_Construct_UClass_UClass, Z_Construct_UClass_UCustomActionBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InNewAction_MetaData), NewProp_InNewAction_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCustomActionSubsystem_AddActionToActor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomActionSubsystem_AddActionToActor_Statics::NewProp_InActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomActionSubsystem_AddActionToActor_Statics::NewProp_InNewAction,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomActionSubsystem_AddActionToActor_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCustomActionSubsystem_AddActionToActor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCustomActionSubsystem, nullptr, "AddActionToActor", nullptr, nullptr, Z_Construct_UFunction_UCustomActionSubsystem_AddActionToActor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomActionSubsystem_AddActionToActor_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCustomActionSubsystem_AddActionToActor_Statics::CustomActionSubsystem_eventAddActionToActor_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomActionSubsystem_AddActionToActor_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCustomActionSubsystem_AddActionToActor_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UCustomActionSubsystem_AddActionToActor_Statics::CustomActionSubsystem_eventAddActionToActor_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCustomActionSubsystem_AddActionToActor()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCustomActionSubsystem_AddActionToActor_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCustomActionSubsystem::execAddActionToActor)
{
	P_GET_OBJECT(AActor,Z_Param_InActor);
	P_GET_OBJECT_REF_NO_PTR(TSubclassOf<UCustomActionBase>,Z_Param_Out_InNewAction);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->AddActionToActor(Z_Param_InActor,Z_Param_Out_InNewAction);
	P_NATIVE_END;
}
// End Class UCustomActionSubsystem Function AddActionToActor

// Begin Class UCustomActionSubsystem Function DoAction
struct Z_Construct_UFunction_UCustomActionSubsystem_DoAction_Statics
{
	struct CustomActionSubsystem_eventDoAction_Parms
	{
		AActor* InActor;
		const TSubclassOf<UCustomActionBase> InAction;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Subsistemas/ActionSystem/CustomActionSubsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InAction_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InActor;
	static const UECodeGen_Private::FClassPropertyParams NewProp_InAction;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCustomActionSubsystem_DoAction_Statics::NewProp_InActor = { "InActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CustomActionSubsystem_eventDoAction_Parms, InActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UCustomActionSubsystem_DoAction_Statics::NewProp_InAction = { "InAction", nullptr, (EPropertyFlags)0x0014000008000182, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CustomActionSubsystem_eventDoAction_Parms, InAction), Z_Construct_UClass_UClass, Z_Construct_UClass_UCustomActionBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InAction_MetaData), NewProp_InAction_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCustomActionSubsystem_DoAction_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomActionSubsystem_DoAction_Statics::NewProp_InActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomActionSubsystem_DoAction_Statics::NewProp_InAction,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomActionSubsystem_DoAction_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCustomActionSubsystem_DoAction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCustomActionSubsystem, nullptr, "DoAction", nullptr, nullptr, Z_Construct_UFunction_UCustomActionSubsystem_DoAction_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomActionSubsystem_DoAction_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCustomActionSubsystem_DoAction_Statics::CustomActionSubsystem_eventDoAction_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomActionSubsystem_DoAction_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCustomActionSubsystem_DoAction_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UCustomActionSubsystem_DoAction_Statics::CustomActionSubsystem_eventDoAction_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCustomActionSubsystem_DoAction()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCustomActionSubsystem_DoAction_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCustomActionSubsystem::execDoAction)
{
	P_GET_OBJECT(AActor,Z_Param_InActor);
	P_GET_OBJECT_REF_NO_PTR(TSubclassOf<UCustomActionBase>,Z_Param_Out_InAction);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->DoAction(Z_Param_InActor,Z_Param_Out_InAction);
	P_NATIVE_END;
}
// End Class UCustomActionSubsystem Function DoAction

// Begin Class UCustomActionSubsystem Function DoActionAndWait
struct Z_Construct_UFunction_UCustomActionSubsystem_DoActionAndWait_Statics
{
	struct CustomActionSubsystem_eventDoActionAndWait_Parms
	{
		AActor* InActor;
		const TSubclassOf<UCustomActionBase> InAction;
		FScriptDelegate OnActionFinishedSingleEvent;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Subsistemas/ActionSystem/CustomActionSubsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InAction_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InActor;
	static const UECodeGen_Private::FClassPropertyParams NewProp_InAction;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnActionFinishedSingleEvent;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCustomActionSubsystem_DoActionAndWait_Statics::NewProp_InActor = { "InActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CustomActionSubsystem_eventDoActionAndWait_Parms, InActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UCustomActionSubsystem_DoActionAndWait_Statics::NewProp_InAction = { "InAction", nullptr, (EPropertyFlags)0x0014000008000182, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CustomActionSubsystem_eventDoActionAndWait_Parms, InAction), Z_Construct_UClass_UClass, Z_Construct_UClass_UCustomActionBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InAction_MetaData), NewProp_InAction_MetaData) };
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UCustomActionSubsystem_DoActionAndWait_Statics::NewProp_OnActionFinishedSingleEvent = { "OnActionFinishedSingleEvent", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CustomActionSubsystem_eventDoActionAndWait_Parms, OnActionFinishedSingleEvent), Z_Construct_UDelegateFunction_UCustomActionSubsystem_SingleActionEvent__DelegateSignature, METADATA_PARAMS(0, nullptr) }; // 2900690592
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCustomActionSubsystem_DoActionAndWait_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomActionSubsystem_DoActionAndWait_Statics::NewProp_InActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomActionSubsystem_DoActionAndWait_Statics::NewProp_InAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomActionSubsystem_DoActionAndWait_Statics::NewProp_OnActionFinishedSingleEvent,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomActionSubsystem_DoActionAndWait_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCustomActionSubsystem_DoActionAndWait_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCustomActionSubsystem, nullptr, "DoActionAndWait", nullptr, nullptr, Z_Construct_UFunction_UCustomActionSubsystem_DoActionAndWait_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomActionSubsystem_DoActionAndWait_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCustomActionSubsystem_DoActionAndWait_Statics::CustomActionSubsystem_eventDoActionAndWait_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomActionSubsystem_DoActionAndWait_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCustomActionSubsystem_DoActionAndWait_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UCustomActionSubsystem_DoActionAndWait_Statics::CustomActionSubsystem_eventDoActionAndWait_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCustomActionSubsystem_DoActionAndWait()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCustomActionSubsystem_DoActionAndWait_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCustomActionSubsystem::execDoActionAndWait)
{
	P_GET_OBJECT(AActor,Z_Param_InActor);
	P_GET_OBJECT_REF_NO_PTR(TSubclassOf<UCustomActionBase>,Z_Param_Out_InAction);
	P_GET_PROPERTY(FDelegateProperty,Z_Param_OnActionFinishedSingleEvent);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->DoActionAndWait(Z_Param_InActor,Z_Param_Out_InAction,FSingleActionEvent(Z_Param_OnActionFinishedSingleEvent));
	P_NATIVE_END;
}
// End Class UCustomActionSubsystem Function DoActionAndWait

// Begin Class UCustomActionSubsystem Function DoActionSequence
struct Z_Construct_UFunction_UCustomActionSubsystem_DoActionSequence_Statics
{
	struct CustomActionSubsystem_eventDoActionSequence_Parms
	{
		AActor* InActor;
		TArray<TSubclassOf<UCustomActionBase> > InActionSequence;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Subsistemas/ActionSystem/CustomActionSubsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InActionSequence_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InActor;
	static const UECodeGen_Private::FClassPropertyParams NewProp_InActionSequence_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_InActionSequence;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCustomActionSubsystem_DoActionSequence_Statics::NewProp_InActor = { "InActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CustomActionSubsystem_eventDoActionSequence_Parms, InActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UCustomActionSubsystem_DoActionSequence_Statics::NewProp_InActionSequence_Inner = { "InActionSequence", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UClass, Z_Construct_UClass_UCustomActionBase_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UCustomActionSubsystem_DoActionSequence_Statics::NewProp_InActionSequence = { "InActionSequence", nullptr, (EPropertyFlags)0x0014000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CustomActionSubsystem_eventDoActionSequence_Parms, InActionSequence), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InActionSequence_MetaData), NewProp_InActionSequence_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCustomActionSubsystem_DoActionSequence_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomActionSubsystem_DoActionSequence_Statics::NewProp_InActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomActionSubsystem_DoActionSequence_Statics::NewProp_InActionSequence_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomActionSubsystem_DoActionSequence_Statics::NewProp_InActionSequence,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomActionSubsystem_DoActionSequence_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCustomActionSubsystem_DoActionSequence_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCustomActionSubsystem, nullptr, "DoActionSequence", nullptr, nullptr, Z_Construct_UFunction_UCustomActionSubsystem_DoActionSequence_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomActionSubsystem_DoActionSequence_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCustomActionSubsystem_DoActionSequence_Statics::CustomActionSubsystem_eventDoActionSequence_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomActionSubsystem_DoActionSequence_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCustomActionSubsystem_DoActionSequence_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UCustomActionSubsystem_DoActionSequence_Statics::CustomActionSubsystem_eventDoActionSequence_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCustomActionSubsystem_DoActionSequence()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCustomActionSubsystem_DoActionSequence_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCustomActionSubsystem::execDoActionSequence)
{
	P_GET_OBJECT(AActor,Z_Param_InActor);
	P_GET_TARRAY_REF(TSubclassOf<UCustomActionBase>,Z_Param_Out_InActionSequence);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->DoActionSequence(Z_Param_InActor,Z_Param_Out_InActionSequence);
	P_NATIVE_END;
}
// End Class UCustomActionSubsystem Function DoActionSequence

// Begin Class UCustomActionSubsystem Function ExecuteMassiveAction
struct Z_Construct_UFunction_UCustomActionSubsystem_ExecuteMassiveAction_Statics
{
	struct CustomActionSubsystem_eventExecuteMassiveAction_Parms
	{
		const TSubclassOf<UCustomActionBase> InAction;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Subsistemas/ActionSystem/CustomActionSubsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InAction_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_InAction;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UCustomActionSubsystem_ExecuteMassiveAction_Statics::NewProp_InAction = { "InAction", nullptr, (EPropertyFlags)0x0014000008000182, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CustomActionSubsystem_eventExecuteMassiveAction_Parms, InAction), Z_Construct_UClass_UClass, Z_Construct_UClass_UCustomActionBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InAction_MetaData), NewProp_InAction_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCustomActionSubsystem_ExecuteMassiveAction_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomActionSubsystem_ExecuteMassiveAction_Statics::NewProp_InAction,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomActionSubsystem_ExecuteMassiveAction_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCustomActionSubsystem_ExecuteMassiveAction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCustomActionSubsystem, nullptr, "ExecuteMassiveAction", nullptr, nullptr, Z_Construct_UFunction_UCustomActionSubsystem_ExecuteMassiveAction_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomActionSubsystem_ExecuteMassiveAction_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCustomActionSubsystem_ExecuteMassiveAction_Statics::CustomActionSubsystem_eventExecuteMassiveAction_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomActionSubsystem_ExecuteMassiveAction_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCustomActionSubsystem_ExecuteMassiveAction_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UCustomActionSubsystem_ExecuteMassiveAction_Statics::CustomActionSubsystem_eventExecuteMassiveAction_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCustomActionSubsystem_ExecuteMassiveAction()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCustomActionSubsystem_ExecuteMassiveAction_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCustomActionSubsystem::execExecuteMassiveAction)
{
	P_GET_OBJECT_REF_NO_PTR(TSubclassOf<UCustomActionBase>,Z_Param_Out_InAction);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ExecuteMassiveAction(Z_Param_Out_InAction);
	P_NATIVE_END;
}
// End Class UCustomActionSubsystem Function ExecuteMassiveAction

// Begin Class UCustomActionSubsystem Function GetActionSubsystem
struct Z_Construct_UFunction_UCustomActionSubsystem_GetActionSubsystem_Statics
{
	struct CustomActionSubsystem_eventGetActionSubsystem_Parms
	{
		const UObject* WorldContextObject;
		UCustomActionSubsystem* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Subsistemas/ActionSystem/CustomActionSubsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCustomActionSubsystem_GetActionSubsystem_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CustomActionSubsystem_eventGetActionSubsystem_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WorldContextObject_MetaData), NewProp_WorldContextObject_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCustomActionSubsystem_GetActionSubsystem_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CustomActionSubsystem_eventGetActionSubsystem_Parms, ReturnValue), Z_Construct_UClass_UCustomActionSubsystem_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCustomActionSubsystem_GetActionSubsystem_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomActionSubsystem_GetActionSubsystem_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomActionSubsystem_GetActionSubsystem_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomActionSubsystem_GetActionSubsystem_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCustomActionSubsystem_GetActionSubsystem_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCustomActionSubsystem, nullptr, "GetActionSubsystem", nullptr, nullptr, Z_Construct_UFunction_UCustomActionSubsystem_GetActionSubsystem_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomActionSubsystem_GetActionSubsystem_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCustomActionSubsystem_GetActionSubsystem_Statics::CustomActionSubsystem_eventGetActionSubsystem_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomActionSubsystem_GetActionSubsystem_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCustomActionSubsystem_GetActionSubsystem_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UCustomActionSubsystem_GetActionSubsystem_Statics::CustomActionSubsystem_eventGetActionSubsystem_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCustomActionSubsystem_GetActionSubsystem()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCustomActionSubsystem_GetActionSubsystem_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCustomActionSubsystem::execGetActionSubsystem)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UCustomActionSubsystem**)Z_Param__Result=UCustomActionSubsystem::GetActionSubsystem(Z_Param_WorldContextObject);
	P_NATIVE_END;
}
// End Class UCustomActionSubsystem Function GetActionSubsystem

// Begin Class UCustomActionSubsystem Function RemoveActionFromActor
struct Z_Construct_UFunction_UCustomActionSubsystem_RemoveActionFromActor_Statics
{
	struct CustomActionSubsystem_eventRemoveActionFromActor_Parms
	{
		AActor* InActor;
		const TSubclassOf<UCustomActionBase> InNewAction;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Subsistemas/ActionSystem/CustomActionSubsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InNewAction_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InActor;
	static const UECodeGen_Private::FClassPropertyParams NewProp_InNewAction;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCustomActionSubsystem_RemoveActionFromActor_Statics::NewProp_InActor = { "InActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CustomActionSubsystem_eventRemoveActionFromActor_Parms, InActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UCustomActionSubsystem_RemoveActionFromActor_Statics::NewProp_InNewAction = { "InNewAction", nullptr, (EPropertyFlags)0x0014000008000182, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CustomActionSubsystem_eventRemoveActionFromActor_Parms, InNewAction), Z_Construct_UClass_UClass, Z_Construct_UClass_UCustomActionBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InNewAction_MetaData), NewProp_InNewAction_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCustomActionSubsystem_RemoveActionFromActor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomActionSubsystem_RemoveActionFromActor_Statics::NewProp_InActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomActionSubsystem_RemoveActionFromActor_Statics::NewProp_InNewAction,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomActionSubsystem_RemoveActionFromActor_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCustomActionSubsystem_RemoveActionFromActor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCustomActionSubsystem, nullptr, "RemoveActionFromActor", nullptr, nullptr, Z_Construct_UFunction_UCustomActionSubsystem_RemoveActionFromActor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomActionSubsystem_RemoveActionFromActor_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCustomActionSubsystem_RemoveActionFromActor_Statics::CustomActionSubsystem_eventRemoveActionFromActor_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomActionSubsystem_RemoveActionFromActor_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCustomActionSubsystem_RemoveActionFromActor_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UCustomActionSubsystem_RemoveActionFromActor_Statics::CustomActionSubsystem_eventRemoveActionFromActor_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCustomActionSubsystem_RemoveActionFromActor()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCustomActionSubsystem_RemoveActionFromActor_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCustomActionSubsystem::execRemoveActionFromActor)
{
	P_GET_OBJECT(AActor,Z_Param_InActor);
	P_GET_OBJECT_REF_NO_PTR(TSubclassOf<UCustomActionBase>,Z_Param_Out_InNewAction);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->RemoveActionFromActor(Z_Param_InActor,Z_Param_Out_InNewAction);
	P_NATIVE_END;
}
// End Class UCustomActionSubsystem Function RemoveActionFromActor

// Begin Class UCustomActionSubsystem Function StopCurrentAction
struct Z_Construct_UFunction_UCustomActionSubsystem_StopCurrentAction_Statics
{
	struct CustomActionSubsystem_eventStopCurrentAction_Parms
	{
		AActor* InActor;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Subsistemas/ActionSystem/CustomActionSubsystem.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InActor;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCustomActionSubsystem_StopCurrentAction_Statics::NewProp_InActor = { "InActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CustomActionSubsystem_eventStopCurrentAction_Parms, InActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCustomActionSubsystem_StopCurrentAction_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomActionSubsystem_StopCurrentAction_Statics::NewProp_InActor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomActionSubsystem_StopCurrentAction_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCustomActionSubsystem_StopCurrentAction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCustomActionSubsystem, nullptr, "StopCurrentAction", nullptr, nullptr, Z_Construct_UFunction_UCustomActionSubsystem_StopCurrentAction_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomActionSubsystem_StopCurrentAction_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCustomActionSubsystem_StopCurrentAction_Statics::CustomActionSubsystem_eventStopCurrentAction_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomActionSubsystem_StopCurrentAction_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCustomActionSubsystem_StopCurrentAction_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UCustomActionSubsystem_StopCurrentAction_Statics::CustomActionSubsystem_eventStopCurrentAction_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCustomActionSubsystem_StopCurrentAction()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCustomActionSubsystem_StopCurrentAction_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCustomActionSubsystem::execStopCurrentAction)
{
	P_GET_OBJECT(AActor,Z_Param_InActor);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->StopCurrentAction(Z_Param_InActor);
	P_NATIVE_END;
}
// End Class UCustomActionSubsystem Function StopCurrentAction

// Begin Class UCustomActionSubsystem
void UCustomActionSubsystem::StaticRegisterNativesUCustomActionSubsystem()
{
	UClass* Class = UCustomActionSubsystem::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "AddActionToActor", &UCustomActionSubsystem::execAddActionToActor },
		{ "DoAction", &UCustomActionSubsystem::execDoAction },
		{ "DoActionAndWait", &UCustomActionSubsystem::execDoActionAndWait },
		{ "DoActionSequence", &UCustomActionSubsystem::execDoActionSequence },
		{ "ExecuteMassiveAction", &UCustomActionSubsystem::execExecuteMassiveAction },
		{ "GetActionSubsystem", &UCustomActionSubsystem::execGetActionSubsystem },
		{ "RemoveActionFromActor", &UCustomActionSubsystem::execRemoveActionFromActor },
		{ "StopCurrentAction", &UCustomActionSubsystem::execStopCurrentAction },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCustomActionSubsystem);
UClass* Z_Construct_UClass_UCustomActionSubsystem_NoRegister()
{
	return UCustomActionSubsystem::StaticClass();
}
struct Z_Construct_UClass_UCustomActionSubsystem_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Subsistemas/ActionSystem/CustomActionSubsystem.h" },
		{ "ModuleRelativePath", "Public/Subsistemas/ActionSystem/CustomActionSubsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnActionStarted_MetaData[] = {
		{ "ModuleRelativePath", "Public/Subsistemas/ActionSystem/CustomActionSubsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnActionFinished_MetaData[] = {
		{ "ModuleRelativePath", "Public/Subsistemas/ActionSystem/CustomActionSubsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EnabledActors_MetaData[] = {
		{ "ModuleRelativePath", "Public/Subsistemas/ActionSystem/CustomActionSubsystem.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnActionStarted;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnActionFinished;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_EnabledActors_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_EnabledActors;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UCustomActionSubsystem_AddActionToActor, "AddActionToActor" }, // 3059880193
		{ &Z_Construct_UFunction_UCustomActionSubsystem_DoAction, "DoAction" }, // 4041932781
		{ &Z_Construct_UFunction_UCustomActionSubsystem_DoActionAndWait, "DoActionAndWait" }, // 1497338212
		{ &Z_Construct_UFunction_UCustomActionSubsystem_DoActionSequence, "DoActionSequence" }, // 3656344646
		{ &Z_Construct_UFunction_UCustomActionSubsystem_ExecuteMassiveAction, "ExecuteMassiveAction" }, // 2571685881
		{ &Z_Construct_UFunction_UCustomActionSubsystem_GetActionSubsystem, "GetActionSubsystem" }, // 17165256
		{ &Z_Construct_UFunction_UCustomActionSubsystem_RemoveActionFromActor, "RemoveActionFromActor" }, // 1188957689
		{ &Z_Construct_UDelegateFunction_UCustomActionSubsystem_SingleActionEvent__DelegateSignature, "SingleActionEvent__DelegateSignature" }, // 2900690592
		{ &Z_Construct_UFunction_UCustomActionSubsystem_StopCurrentAction, "StopCurrentAction" }, // 3016126942
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCustomActionSubsystem>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UCustomActionSubsystem_Statics::NewProp_OnActionStarted = { "OnActionStarted", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCustomActionSubsystem, OnActionStarted), Z_Construct_UDelegateFunction_UTHUB_CPP2024_OnActionEvent__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnActionStarted_MetaData), NewProp_OnActionStarted_MetaData) }; // 2241644678
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UCustomActionSubsystem_Statics::NewProp_OnActionFinished = { "OnActionFinished", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCustomActionSubsystem, OnActionFinished), Z_Construct_UDelegateFunction_UTHUB_CPP2024_OnActionEvent__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnActionFinished_MetaData), NewProp_OnActionFinished_MetaData) }; // 2241644678
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCustomActionSubsystem_Statics::NewProp_EnabledActors_Inner = { "EnabledActors", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UCustomActionSubsystem_Statics::NewProp_EnabledActors = { "EnabledActors", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCustomActionSubsystem, EnabledActors), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EnabledActors_MetaData), NewProp_EnabledActors_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCustomActionSubsystem_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCustomActionSubsystem_Statics::NewProp_OnActionStarted,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCustomActionSubsystem_Statics::NewProp_OnActionFinished,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCustomActionSubsystem_Statics::NewProp_EnabledActors_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCustomActionSubsystem_Statics::NewProp_EnabledActors,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCustomActionSubsystem_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UCustomActionSubsystem_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UWorldSubsystem,
	(UObject* (*)())Z_Construct_UPackage__Script_UTHUB_CPP2024,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCustomActionSubsystem_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UCustomActionSubsystem_Statics::ClassParams = {
	&UCustomActionSubsystem::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UCustomActionSubsystem_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UCustomActionSubsystem_Statics::PropPointers),
	0,
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCustomActionSubsystem_Statics::Class_MetaDataParams), Z_Construct_UClass_UCustomActionSubsystem_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UCustomActionSubsystem()
{
	if (!Z_Registration_Info_UClass_UCustomActionSubsystem.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCustomActionSubsystem.OuterSingleton, Z_Construct_UClass_UCustomActionSubsystem_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UCustomActionSubsystem.OuterSingleton;
}
template<> UTHUB_CPP2024_API UClass* StaticClass<UCustomActionSubsystem>()
{
	return UCustomActionSubsystem::StaticClass();
}
UCustomActionSubsystem::UCustomActionSubsystem() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UCustomActionSubsystem);
UCustomActionSubsystem::~UCustomActionSubsystem() {}
// End Class UCustomActionSubsystem

// Begin Registration
struct Z_CompiledInDeferFile_FID_Proyectos_UT_HUB_Tercero_CMasMas_CPP_2024_Source_UTHUB_CPP2024_Public_Subsistemas_ActionSystem_CustomActionSubsystem_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UCustomActionSubsystem, UCustomActionSubsystem::StaticClass, TEXT("UCustomActionSubsystem"), &Z_Registration_Info_UClass_UCustomActionSubsystem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCustomActionSubsystem), 3708080032U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Proyectos_UT_HUB_Tercero_CMasMas_CPP_2024_Source_UTHUB_CPP2024_Public_Subsistemas_ActionSystem_CustomActionSubsystem_h_2671321284(TEXT("/Script/UTHUB_CPP2024"),
	Z_CompiledInDeferFile_FID_Proyectos_UT_HUB_Tercero_CMasMas_CPP_2024_Source_UTHUB_CPP2024_Public_Subsistemas_ActionSystem_CustomActionSubsystem_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Proyectos_UT_HUB_Tercero_CMasMas_CPP_2024_Source_UTHUB_CPP2024_Public_Subsistemas_ActionSystem_CustomActionSubsystem_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
