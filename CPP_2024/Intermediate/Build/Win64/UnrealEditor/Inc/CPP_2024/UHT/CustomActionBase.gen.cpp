// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CPP_2024/Public/Subsystems/ActionSystem/CustomActionBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCustomActionBase() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
CPP_2024_API UClass* Z_Construct_UClass_UCustomActionBase();
CPP_2024_API UClass* Z_Construct_UClass_UCustomActionBase_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
UPackage* Z_Construct_UPackage__Script_CPP_2024();
// End Cross Module References

// Begin Class UCustomActionBase Function RecieveDoAction
struct CustomActionBase_eventRecieveDoAction_Parms
{
	AActor* ActionInstigator;
};
static FName NAME_UCustomActionBase_RecieveDoAction = FName(TEXT("RecieveDoAction"));
void UCustomActionBase::RecieveDoAction(AActor* ActionInstigator)
{
	CustomActionBase_eventRecieveDoAction_Parms Parms;
	Parms.ActionInstigator=ActionInstigator;
	ProcessEvent(FindFunctionChecked(NAME_UCustomActionBase_RecieveDoAction),&Parms);
}
struct Z_Construct_UFunction_UCustomActionBase_RecieveDoAction_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Subsystems/ActionSystem/CustomActionBase.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ActionInstigator;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCustomActionBase_RecieveDoAction_Statics::NewProp_ActionInstigator = { "ActionInstigator", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CustomActionBase_eventRecieveDoAction_Parms, ActionInstigator), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCustomActionBase_RecieveDoAction_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomActionBase_RecieveDoAction_Statics::NewProp_ActionInstigator,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomActionBase_RecieveDoAction_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCustomActionBase_RecieveDoAction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCustomActionBase, nullptr, "RecieveDoAction", nullptr, nullptr, Z_Construct_UFunction_UCustomActionBase_RecieveDoAction_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomActionBase_RecieveDoAction_Statics::PropPointers), sizeof(CustomActionBase_eventRecieveDoAction_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomActionBase_RecieveDoAction_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCustomActionBase_RecieveDoAction_Statics::Function_MetaDataParams) };
static_assert(sizeof(CustomActionBase_eventRecieveDoAction_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCustomActionBase_RecieveDoAction()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCustomActionBase_RecieveDoAction_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Class UCustomActionBase Function RecieveDoAction

// Begin Class UCustomActionBase
void UCustomActionBase::StaticRegisterNativesUCustomActionBase()
{
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
		{ "IncludePath", "Subsystems/ActionSystem/CustomActionBase.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Subsystems/ActionSystem/CustomActionBase.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UCustomActionBase_RecieveDoAction, "RecieveDoAction" }, // 1875413201
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCustomActionBase>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UCustomActionBase_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_CPP_2024,
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
template<> CPP_2024_API UClass* StaticClass<UCustomActionBase>()
{
	return UCustomActionBase::StaticClass();
}
UCustomActionBase::UCustomActionBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UCustomActionBase);
UCustomActionBase::~UCustomActionBase() {}
// End Class UCustomActionBase

// Begin Registration
struct Z_CompiledInDeferFile_FID_Proyectos_UT_HUB_Tercero_CMasMas_CPP_2024_Source_CPP_2024_Public_Subsystems_ActionSystem_CustomActionBase_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UCustomActionBase, UCustomActionBase::StaticClass, TEXT("UCustomActionBase"), &Z_Registration_Info_UClass_UCustomActionBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCustomActionBase), 1602732030U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Proyectos_UT_HUB_Tercero_CMasMas_CPP_2024_Source_CPP_2024_Public_Subsystems_ActionSystem_CustomActionBase_h_1490629672(TEXT("/Script/CPP_2024"),
	Z_CompiledInDeferFile_FID_Proyectos_UT_HUB_Tercero_CMasMas_CPP_2024_Source_CPP_2024_Public_Subsystems_ActionSystem_CustomActionBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Proyectos_UT_HUB_Tercero_CMasMas_CPP_2024_Source_CPP_2024_Public_Subsystems_ActionSystem_CustomActionBase_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
