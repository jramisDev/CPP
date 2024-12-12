// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UTHUB_CPP2024/Public/Subsistemas/ActionSystem/CustomActionBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCustomActionBase() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
UPackage* Z_Construct_UPackage__Script_UTHUB_CPP2024();
UTHUB_CPP2024_API UClass* Z_Construct_UClass_UCustomActionBase();
UTHUB_CPP2024_API UClass* Z_Construct_UClass_UCustomActionBase_NoRegister();
// End Cross Module References

// Begin Class UCustomActionBase Function ReceiveDoAction
struct CustomActionBase_eventReceiveDoAction_Parms
{
	AActor* ActionInstigator;
};
static FName NAME_UCustomActionBase_ReceiveDoAction = FName(TEXT("ReceiveDoAction"));
void UCustomActionBase::ReceiveDoAction(AActor* ActionInstigator)
{
	CustomActionBase_eventReceiveDoAction_Parms Parms;
	Parms.ActionInstigator=ActionInstigator;
	ProcessEvent(FindFunctionChecked(NAME_UCustomActionBase_ReceiveDoAction),&Parms);
}
struct Z_Construct_UFunction_UCustomActionBase_ReceiveDoAction_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Subsistemas/ActionSystem/CustomActionBase.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ActionInstigator;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCustomActionBase_ReceiveDoAction_Statics::NewProp_ActionInstigator = { "ActionInstigator", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CustomActionBase_eventReceiveDoAction_Parms, ActionInstigator), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCustomActionBase_ReceiveDoAction_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomActionBase_ReceiveDoAction_Statics::NewProp_ActionInstigator,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomActionBase_ReceiveDoAction_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCustomActionBase_ReceiveDoAction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCustomActionBase, nullptr, "ReceiveDoAction", nullptr, nullptr, Z_Construct_UFunction_UCustomActionBase_ReceiveDoAction_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomActionBase_ReceiveDoAction_Statics::PropPointers), sizeof(CustomActionBase_eventReceiveDoAction_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomActionBase_ReceiveDoAction_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCustomActionBase_ReceiveDoAction_Statics::Function_MetaDataParams) };
static_assert(sizeof(CustomActionBase_eventReceiveDoAction_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCustomActionBase_ReceiveDoAction()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCustomActionBase_ReceiveDoAction_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Class UCustomActionBase Function ReceiveDoAction

// Begin Class UCustomActionBase Function ReceiveStopAction
static FName NAME_UCustomActionBase_ReceiveStopAction = FName(TEXT("ReceiveStopAction"));
void UCustomActionBase::ReceiveStopAction()
{
	ProcessEvent(FindFunctionChecked(NAME_UCustomActionBase_ReceiveStopAction),NULL);
}
struct Z_Construct_UFunction_UCustomActionBase_ReceiveStopAction_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Subsistemas/ActionSystem/CustomActionBase.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCustomActionBase_ReceiveStopAction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCustomActionBase, nullptr, "ReceiveStopAction", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomActionBase_ReceiveStopAction_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCustomActionBase_ReceiveStopAction_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UCustomActionBase_ReceiveStopAction()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCustomActionBase_ReceiveStopAction_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Class UCustomActionBase Function ReceiveStopAction

// Begin Class UCustomActionBase Function ShowDebugInfo
struct CustomActionBase_eventShowDebugInfo_Parms
{
	float DeltaSeconds;
};
#if WITH_EDITOR
static FName NAME_UCustomActionBase_ShowDebugInfo = FName(TEXT("ShowDebugInfo"));
void UCustomActionBase::ShowDebugInfo(const float DeltaSeconds)
{
	CustomActionBase_eventShowDebugInfo_Parms Parms;
	Parms.DeltaSeconds=DeltaSeconds;
	ProcessEvent(FindFunctionChecked(NAME_UCustomActionBase_ShowDebugInfo),&Parms);
}
#endif // WITH_EDITOR
#if WITH_EDITOR
struct Z_Construct_UFunction_UCustomActionBase_ShowDebugInfo_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Subsistemas/ActionSystem/CustomActionBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DeltaSeconds_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DeltaSeconds;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UCustomActionBase_ShowDebugInfo_Statics::NewProp_DeltaSeconds = { "DeltaSeconds", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CustomActionBase_eventShowDebugInfo_Parms, DeltaSeconds), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DeltaSeconds_MetaData), NewProp_DeltaSeconds_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCustomActionBase_ShowDebugInfo_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomActionBase_ShowDebugInfo_Statics::NewProp_DeltaSeconds,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomActionBase_ShowDebugInfo_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCustomActionBase_ShowDebugInfo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCustomActionBase, nullptr, "ShowDebugInfo", nullptr, nullptr, Z_Construct_UFunction_UCustomActionBase_ShowDebugInfo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomActionBase_ShowDebugInfo_Statics::PropPointers), sizeof(CustomActionBase_eventShowDebugInfo_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x28080C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomActionBase_ShowDebugInfo_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCustomActionBase_ShowDebugInfo_Statics::Function_MetaDataParams) };
static_assert(sizeof(CustomActionBase_eventShowDebugInfo_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCustomActionBase_ShowDebugInfo()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCustomActionBase_ShowDebugInfo_Statics::FuncParams);
	}
	return ReturnFunction;
}
#endif // WITH_EDITOR
#if WITH_EDITOR
DEFINE_FUNCTION(UCustomActionBase::execShowDebugInfo)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_DeltaSeconds);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ShowDebugInfo_Implementation(Z_Param_DeltaSeconds);
	P_NATIVE_END;
}
#endif // WITH_EDITOR
// End Class UCustomActionBase Function ShowDebugInfo

// Begin Class UCustomActionBase
void UCustomActionBase::StaticRegisterNativesUCustomActionBase()
{
#if WITH_EDITOR
	UClass* Class = UCustomActionBase::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "ShowDebugInfo", &UCustomActionBase::execShowDebugInfo },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
#endif // WITH_EDITOR
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCustomActionBase);
UClass* Z_Construct_UClass_UCustomActionBase_NoRegister()
{
	return UCustomActionBase::StaticClass();
}
struct Z_Construct_UClass_UCustomActionBase_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "Subsistemas/ActionSystem/CustomActionBase.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Subsistemas/ActionSystem/CustomActionBase.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UCustomActionBase_ReceiveDoAction, "ReceiveDoAction" }, // 3904459359
		{ &Z_Construct_UFunction_UCustomActionBase_ReceiveStopAction, "ReceiveStopAction" }, // 1286230405
#if WITH_EDITOR
		{ &Z_Construct_UFunction_UCustomActionBase_ShowDebugInfo, "ShowDebugInfo" }, // 2440124603
#endif // WITH_EDITOR
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCustomActionBase>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UCustomActionBase_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_UTHUB_CPP2024,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCustomActionBase_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UCustomActionBase_Statics::ClassParams = {
	&UCustomActionBase::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCustomActionBase_Statics::Class_MetaDataParams), Z_Construct_UClass_UCustomActionBase_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UCustomActionBase()
{
	if (!Z_Registration_Info_UClass_UCustomActionBase.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCustomActionBase.OuterSingleton, Z_Construct_UClass_UCustomActionBase_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UCustomActionBase.OuterSingleton;
}
template<> UTHUB_CPP2024_API UClass* StaticClass<UCustomActionBase>()
{
	return UCustomActionBase::StaticClass();
}
UCustomActionBase::UCustomActionBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UCustomActionBase);
UCustomActionBase::~UCustomActionBase() {}
// End Class UCustomActionBase

// Begin Registration
struct Z_CompiledInDeferFile_FID_Proyectos_UT_HUB_Tercero_CMasMas_CPP_2024_Source_UTHUB_CPP2024_Public_Subsistemas_ActionSystem_CustomActionBase_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UCustomActionBase, UCustomActionBase::StaticClass, TEXT("UCustomActionBase"), &Z_Registration_Info_UClass_UCustomActionBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCustomActionBase), 1787050U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Proyectos_UT_HUB_Tercero_CMasMas_CPP_2024_Source_UTHUB_CPP2024_Public_Subsistemas_ActionSystem_CustomActionBase_h_4939220(TEXT("/Script/UTHUB_CPP2024"),
	Z_CompiledInDeferFile_FID_Proyectos_UT_HUB_Tercero_CMasMas_CPP_2024_Source_UTHUB_CPP2024_Public_Subsistemas_ActionSystem_CustomActionBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Proyectos_UT_HUB_Tercero_CMasMas_CPP_2024_Source_UTHUB_CPP2024_Public_Subsistemas_ActionSystem_CustomActionBase_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
