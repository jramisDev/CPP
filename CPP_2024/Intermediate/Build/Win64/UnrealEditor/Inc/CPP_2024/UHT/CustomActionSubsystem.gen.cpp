// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CPP_2024/Public/Subsystems/ActionSystem/CustomActionSubsystem.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCustomActionSubsystem() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
CPP_2024_API UClass* Z_Construct_UClass_UCustomActionBase_NoRegister();
CPP_2024_API UClass* Z_Construct_UClass_UCustomActionSubsystem();
CPP_2024_API UClass* Z_Construct_UClass_UCustomActionSubsystem_NoRegister();
CPP_2024_API UFunction* Z_Construct_UDelegateFunction_CPP_2024_OnActionPerformed__DelegateSignature();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UWorldSubsystem();
UPackage* Z_Construct_UPackage__Script_CPP_2024();
// End Cross Module References

// Begin Delegate FOnActionPerformed
struct Z_Construct_UDelegateFunction_CPP_2024_OnActionPerformed__DelegateSignature_Statics
{
	struct _Script_CPP_2024_eventOnActionPerformed_Parms
	{
		AActor* Instigator;
		UCustomActionBase* CustomActionBase;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Subsystems/ActionSystem/CustomActionSubsystem.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Instigator;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CustomActionBase;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_CPP_2024_OnActionPerformed__DelegateSignature_Statics::NewProp_Instigator = { "Instigator", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_CPP_2024_eventOnActionPerformed_Parms, Instigator), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_CPP_2024_OnActionPerformed__DelegateSignature_Statics::NewProp_CustomActionBase = { "CustomActionBase", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_CPP_2024_eventOnActionPerformed_Parms, CustomActionBase), Z_Construct_UClass_UCustomActionBase_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_CPP_2024_OnActionPerformed__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_CPP_2024_OnActionPerformed__DelegateSignature_Statics::NewProp_Instigator,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_CPP_2024_OnActionPerformed__DelegateSignature_Statics::NewProp_CustomActionBase,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_CPP_2024_OnActionPerformed__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_CPP_2024_OnActionPerformed__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_CPP_2024, nullptr, "OnActionPerformed__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_CPP_2024_OnActionPerformed__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_CPP_2024_OnActionPerformed__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_CPP_2024_OnActionPerformed__DelegateSignature_Statics::_Script_CPP_2024_eventOnActionPerformed_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_CPP_2024_OnActionPerformed__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_CPP_2024_OnActionPerformed__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_CPP_2024_OnActionPerformed__DelegateSignature_Statics::_Script_CPP_2024_eventOnActionPerformed_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_CPP_2024_OnActionPerformed__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_CPP_2024_OnActionPerformed__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnActionPerformed_DelegateWrapper(const FMulticastScriptDelegate& OnActionPerformed, AActor* Instigator, UCustomActionBase* CustomActionBase)
{
	struct _Script_CPP_2024_eventOnActionPerformed_Parms
	{
		AActor* Instigator;
		UCustomActionBase* CustomActionBase;
	};
	_Script_CPP_2024_eventOnActionPerformed_Parms Parms;
	Parms.Instigator=Instigator;
	Parms.CustomActionBase=CustomActionBase;
	OnActionPerformed.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FOnActionPerformed

// Begin Class UCustomActionSubsystem Function AddActionToActor
struct Z_Construct_UFunction_UCustomActionSubsystem_AddActionToActor_Statics
{
	struct CustomActionSubsystem_eventAddActionToActor_Parms
	{
		AActor* InActor;
		const TSubclassOf<UCustomActionBase> InNewCustomActionBase;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Subsystems/ActionSystem/CustomActionSubsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InNewCustomActionBase_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InActor;
	static const UECodeGen_Private::FClassPropertyParams NewProp_InNewCustomActionBase;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCustomActionSubsystem_AddActionToActor_Statics::NewProp_InActor = { "InActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CustomActionSubsystem_eventAddActionToActor_Parms, InActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UCustomActionSubsystem_AddActionToActor_Statics::NewProp_InNewCustomActionBase = { "InNewCustomActionBase", nullptr, (EPropertyFlags)0x0014000008000182, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CustomActionSubsystem_eventAddActionToActor_Parms, InNewCustomActionBase), Z_Construct_UClass_UClass, Z_Construct_UClass_UCustomActionBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InNewCustomActionBase_MetaData), NewProp_InNewCustomActionBase_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCustomActionSubsystem_AddActionToActor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomActionSubsystem_AddActionToActor_Statics::NewProp_InActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomActionSubsystem_AddActionToActor_Statics::NewProp_InNewCustomActionBase,
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
	P_GET_OBJECT_REF_NO_PTR(TSubclassOf<UCustomActionBase>,Z_Param_Out_InNewCustomActionBase);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->AddActionToActor(Z_Param_InActor,Z_Param_Out_InNewCustomActionBase);
	P_NATIVE_END;
}
// End Class UCustomActionSubsystem Function AddActionToActor

// Begin Class UCustomActionSubsystem Function DoAction
struct Z_Construct_UFunction_UCustomActionSubsystem_DoAction_Statics
{
	struct CustomActionSubsystem_eventDoAction_Parms
	{
		AActor* InActor;
		const TSubclassOf<UCustomActionBase> InCustomActionBase;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Subsystems/ActionSystem/CustomActionSubsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InCustomActionBase_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InActor;
	static const UECodeGen_Private::FClassPropertyParams NewProp_InCustomActionBase;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCustomActionSubsystem_DoAction_Statics::NewProp_InActor = { "InActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CustomActionSubsystem_eventDoAction_Parms, InActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UCustomActionSubsystem_DoAction_Statics::NewProp_InCustomActionBase = { "InCustomActionBase", nullptr, (EPropertyFlags)0x0014000008000182, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CustomActionSubsystem_eventDoAction_Parms, InCustomActionBase), Z_Construct_UClass_UClass, Z_Construct_UClass_UCustomActionBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InCustomActionBase_MetaData), NewProp_InCustomActionBase_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCustomActionSubsystem_DoAction_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomActionSubsystem_DoAction_Statics::NewProp_InActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomActionSubsystem_DoAction_Statics::NewProp_InCustomActionBase,
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
	P_GET_OBJECT_REF_NO_PTR(TSubclassOf<UCustomActionBase>,Z_Param_Out_InCustomActionBase);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->DoAction(Z_Param_InActor,Z_Param_Out_InCustomActionBase);
	P_NATIVE_END;
}
// End Class UCustomActionSubsystem Function DoAction

// Begin Class UCustomActionSubsystem Function DoActionSequence
struct Z_Construct_UFunction_UCustomActionSubsystem_DoActionSequence_Statics
{
	struct CustomActionSubsystem_eventDoActionSequence_Parms
	{
		AActor* InActor;
		TArray<TSubclassOf<UCustomActionBase> > InCustomActionBaseSequence;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Subsystems/ActionSystem/CustomActionSubsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InCustomActionBaseSequence_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InActor;
	static const UECodeGen_Private::FClassPropertyParams NewProp_InCustomActionBaseSequence_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_InCustomActionBaseSequence;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCustomActionSubsystem_DoActionSequence_Statics::NewProp_InActor = { "InActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CustomActionSubsystem_eventDoActionSequence_Parms, InActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UCustomActionSubsystem_DoActionSequence_Statics::NewProp_InCustomActionBaseSequence_Inner = { "InCustomActionBaseSequence", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UClass, Z_Construct_UClass_UCustomActionBase_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UCustomActionSubsystem_DoActionSequence_Statics::NewProp_InCustomActionBaseSequence = { "InCustomActionBaseSequence", nullptr, (EPropertyFlags)0x0014000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CustomActionSubsystem_eventDoActionSequence_Parms, InCustomActionBaseSequence), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InCustomActionBaseSequence_MetaData), NewProp_InCustomActionBaseSequence_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCustomActionSubsystem_DoActionSequence_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomActionSubsystem_DoActionSequence_Statics::NewProp_InActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomActionSubsystem_DoActionSequence_Statics::NewProp_InCustomActionBaseSequence_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomActionSubsystem_DoActionSequence_Statics::NewProp_InCustomActionBaseSequence,
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
	P_GET_TARRAY_REF(TSubclassOf<UCustomActionBase>,Z_Param_Out_InCustomActionBaseSequence);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->DoActionSequence(Z_Param_InActor,Z_Param_Out_InCustomActionBaseSequence);
	P_NATIVE_END;
}
// End Class UCustomActionSubsystem Function DoActionSequence

// Begin Class UCustomActionSubsystem Function ExecuteMassiveAction
struct Z_Construct_UFunction_UCustomActionSubsystem_ExecuteMassiveAction_Statics
{
	struct CustomActionSubsystem_eventExecuteMassiveAction_Parms
	{
		const TSubclassOf<UCustomActionBase> InCustomActionBase;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Subsystems/ActionSystem/CustomActionSubsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InCustomActionBase_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_InCustomActionBase;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UCustomActionSubsystem_ExecuteMassiveAction_Statics::NewProp_InCustomActionBase = { "InCustomActionBase", nullptr, (EPropertyFlags)0x0014000008000182, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CustomActionSubsystem_eventExecuteMassiveAction_Parms, InCustomActionBase), Z_Construct_UClass_UClass, Z_Construct_UClass_UCustomActionBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InCustomActionBase_MetaData), NewProp_InCustomActionBase_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCustomActionSubsystem_ExecuteMassiveAction_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomActionSubsystem_ExecuteMassiveAction_Statics::NewProp_InCustomActionBase,
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
	P_GET_OBJECT_REF_NO_PTR(TSubclassOf<UCustomActionBase>,Z_Param_Out_InCustomActionBase);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ExecuteMassiveAction(Z_Param_Out_InCustomActionBase);
	P_NATIVE_END;
}
// End Class UCustomActionSubsystem Function ExecuteMassiveAction

// Begin Class UCustomActionSubsystem Function RemoveActionFromActor
struct Z_Construct_UFunction_UCustomActionSubsystem_RemoveActionFromActor_Statics
{
	struct CustomActionSubsystem_eventRemoveActionFromActor_Parms
	{
		AActor* InActor;
		const TSubclassOf<UCustomActionBase> InNewCustomActionBase;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Subsystems/ActionSystem/CustomActionSubsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InNewCustomActionBase_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InActor;
	static const UECodeGen_Private::FClassPropertyParams NewProp_InNewCustomActionBase;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCustomActionSubsystem_RemoveActionFromActor_Statics::NewProp_InActor = { "InActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CustomActionSubsystem_eventRemoveActionFromActor_Parms, InActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UCustomActionSubsystem_RemoveActionFromActor_Statics::NewProp_InNewCustomActionBase = { "InNewCustomActionBase", nullptr, (EPropertyFlags)0x0014000008000182, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CustomActionSubsystem_eventRemoveActionFromActor_Parms, InNewCustomActionBase), Z_Construct_UClass_UClass, Z_Construct_UClass_UCustomActionBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InNewCustomActionBase_MetaData), NewProp_InNewCustomActionBase_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCustomActionSubsystem_RemoveActionFromActor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomActionSubsystem_RemoveActionFromActor_Statics::NewProp_InActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomActionSubsystem_RemoveActionFromActor_Statics::NewProp_InNewCustomActionBase,
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
	P_GET_OBJECT_REF_NO_PTR(TSubclassOf<UCustomActionBase>,Z_Param_Out_InNewCustomActionBase);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->RemoveActionFromActor(Z_Param_InActor,Z_Param_Out_InNewCustomActionBase);
	P_NATIVE_END;
}
// End Class UCustomActionSubsystem Function RemoveActionFromActor

// Begin Class UCustomActionSubsystem Function StopCurrentAction
struct Z_Construct_UFunction_UCustomActionSubsystem_StopCurrentAction_Statics
{
	struct CustomActionSubsystem_eventStopCurrentAction_Parms
	{
		AActor* InActor;
		const TSubclassOf<UCustomActionBase> InCustomActionBase;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Subsystems/ActionSystem/CustomActionSubsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InCustomActionBase_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InActor;
	static const UECodeGen_Private::FClassPropertyParams NewProp_InCustomActionBase;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCustomActionSubsystem_StopCurrentAction_Statics::NewProp_InActor = { "InActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CustomActionSubsystem_eventStopCurrentAction_Parms, InActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UCustomActionSubsystem_StopCurrentAction_Statics::NewProp_InCustomActionBase = { "InCustomActionBase", nullptr, (EPropertyFlags)0x0014000008000182, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CustomActionSubsystem_eventStopCurrentAction_Parms, InCustomActionBase), Z_Construct_UClass_UClass, Z_Construct_UClass_UCustomActionBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InCustomActionBase_MetaData), NewProp_InCustomActionBase_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCustomActionSubsystem_StopCurrentAction_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomActionSubsystem_StopCurrentAction_Statics::NewProp_InActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomActionSubsystem_StopCurrentAction_Statics::NewProp_InCustomActionBase,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomActionSubsystem_StopCurrentAction_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCustomActionSubsystem_StopCurrentAction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCustomActionSubsystem, nullptr, "StopCurrentAction", nullptr, nullptr, Z_Construct_UFunction_UCustomActionSubsystem_StopCurrentAction_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomActionSubsystem_StopCurrentAction_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCustomActionSubsystem_StopCurrentAction_Statics::CustomActionSubsystem_eventStopCurrentAction_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomActionSubsystem_StopCurrentAction_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCustomActionSubsystem_StopCurrentAction_Statics::Function_MetaDataParams) };
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
	P_GET_OBJECT_REF_NO_PTR(TSubclassOf<UCustomActionBase>,Z_Param_Out_InCustomActionBase);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->StopCurrentAction(Z_Param_InActor,Z_Param_Out_InCustomActionBase);
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
		{ "DoActionSequence", &UCustomActionSubsystem::execDoActionSequence },
		{ "ExecuteMassiveAction", &UCustomActionSubsystem::execExecuteMassiveAction },
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
		{ "IncludePath", "Subsystems/ActionSystem/CustomActionSubsystem.h" },
		{ "ModuleRelativePath", "Public/Subsystems/ActionSystem/CustomActionSubsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EnabledActors_MetaData[] = {
		{ "ModuleRelativePath", "Public/Subsystems/ActionSystem/CustomActionSubsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnActionPerformed_MetaData[] = {
		{ "ModuleRelativePath", "Public/Subsystems/ActionSystem/CustomActionSubsystem.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_EnabledActors_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_EnabledActors;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnActionPerformed;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UCustomActionSubsystem_AddActionToActor, "AddActionToActor" }, // 352643754
		{ &Z_Construct_UFunction_UCustomActionSubsystem_DoAction, "DoAction" }, // 1915744169
		{ &Z_Construct_UFunction_UCustomActionSubsystem_DoActionSequence, "DoActionSequence" }, // 3039458286
		{ &Z_Construct_UFunction_UCustomActionSubsystem_ExecuteMassiveAction, "ExecuteMassiveAction" }, // 1999606603
		{ &Z_Construct_UFunction_UCustomActionSubsystem_RemoveActionFromActor, "RemoveActionFromActor" }, // 1034537848
		{ &Z_Construct_UFunction_UCustomActionSubsystem_StopCurrentAction, "StopCurrentAction" }, // 1195507303
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCustomActionSubsystem>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCustomActionSubsystem_Statics::NewProp_EnabledActors_Inner = { "EnabledActors", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UCustomActionSubsystem_Statics::NewProp_EnabledActors = { "EnabledActors", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCustomActionSubsystem, EnabledActors), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EnabledActors_MetaData), NewProp_EnabledActors_MetaData) };
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UCustomActionSubsystem_Statics::NewProp_OnActionPerformed = { "OnActionPerformed", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCustomActionSubsystem, OnActionPerformed), Z_Construct_UDelegateFunction_CPP_2024_OnActionPerformed__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnActionPerformed_MetaData), NewProp_OnActionPerformed_MetaData) }; // 2916607208
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCustomActionSubsystem_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCustomActionSubsystem_Statics::NewProp_EnabledActors_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCustomActionSubsystem_Statics::NewProp_EnabledActors,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCustomActionSubsystem_Statics::NewProp_OnActionPerformed,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCustomActionSubsystem_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UCustomActionSubsystem_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UWorldSubsystem,
	(UObject* (*)())Z_Construct_UPackage__Script_CPP_2024,
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
template<> CPP_2024_API UClass* StaticClass<UCustomActionSubsystem>()
{
	return UCustomActionSubsystem::StaticClass();
}
UCustomActionSubsystem::UCustomActionSubsystem() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UCustomActionSubsystem);
UCustomActionSubsystem::~UCustomActionSubsystem() {}
// End Class UCustomActionSubsystem

// Begin Registration
struct Z_CompiledInDeferFile_FID_Proyectos_UT_HUB_Tercero_CMasMas_CPP_2024_Source_CPP_2024_Public_Subsystems_ActionSystem_CustomActionSubsystem_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UCustomActionSubsystem, UCustomActionSubsystem::StaticClass, TEXT("UCustomActionSubsystem"), &Z_Registration_Info_UClass_UCustomActionSubsystem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCustomActionSubsystem), 932533766U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Proyectos_UT_HUB_Tercero_CMasMas_CPP_2024_Source_CPP_2024_Public_Subsystems_ActionSystem_CustomActionSubsystem_h_3560523409(TEXT("/Script/CPP_2024"),
	Z_CompiledInDeferFile_FID_Proyectos_UT_HUB_Tercero_CMasMas_CPP_2024_Source_CPP_2024_Public_Subsystems_ActionSystem_CustomActionSubsystem_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Proyectos_UT_HUB_Tercero_CMasMas_CPP_2024_Source_CPP_2024_Public_Subsystems_ActionSystem_CustomActionSubsystem_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
