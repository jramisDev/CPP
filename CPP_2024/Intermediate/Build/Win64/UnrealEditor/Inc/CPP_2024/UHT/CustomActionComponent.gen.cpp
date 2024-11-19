// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CPP_2024/Public/Subsystems/ActionSystem/CustomActionComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCustomActionComponent() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
CPP_2024_API UClass* Z_Construct_UClass_UCustomActionBase_NoRegister();
CPP_2024_API UClass* Z_Construct_UClass_UCustomActionComponent();
CPP_2024_API UClass* Z_Construct_UClass_UCustomActionComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
UPackage* Z_Construct_UPackage__Script_CPP_2024();
// End Cross Module References

// Begin Class UCustomActionComponent
void UCustomActionComponent::StaticRegisterNativesUCustomActionComponent()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCustomActionComponent);
UClass* Z_Construct_UClass_UCustomActionComponent_NoRegister()
{
	return UCustomActionComponent::StaticClass();
}
struct Z_Construct_UClass_UCustomActionComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "Subsystems/ActionSystem/CustomActionComponent.h" },
		{ "ModuleRelativePath", "Public/Subsystems/ActionSystem/CustomActionComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Actions_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CustomActionComponent" },
		{ "ModuleRelativePath", "Public/Subsystems/ActionSystem/CustomActionComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_Actions_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Actions;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCustomActionComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UCustomActionComponent_Statics::NewProp_Actions_Inner = { "Actions", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UClass, Z_Construct_UClass_UCustomActionBase_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UCustomActionComponent_Statics::NewProp_Actions = { "Actions", nullptr, (EPropertyFlags)0x0044000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCustomActionComponent, Actions), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Actions_MetaData), NewProp_Actions_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCustomActionComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCustomActionComponent_Statics::NewProp_Actions_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCustomActionComponent_Statics::NewProp_Actions,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCustomActionComponent_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UCustomActionComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UActorComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_CPP_2024,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCustomActionComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UCustomActionComponent_Statics::ClassParams = {
	&UCustomActionComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UCustomActionComponent_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UCustomActionComponent_Statics::PropPointers),
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCustomActionComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UCustomActionComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UCustomActionComponent()
{
	if (!Z_Registration_Info_UClass_UCustomActionComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCustomActionComponent.OuterSingleton, Z_Construct_UClass_UCustomActionComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UCustomActionComponent.OuterSingleton;
}
template<> CPP_2024_API UClass* StaticClass<UCustomActionComponent>()
{
	return UCustomActionComponent::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UCustomActionComponent);
UCustomActionComponent::~UCustomActionComponent() {}
// End Class UCustomActionComponent

// Begin Registration
struct Z_CompiledInDeferFile_FID_Proyectos_UT_HUB_Tercero_CMasMas_CPP_2024_Source_CPP_2024_Public_Subsystems_ActionSystem_CustomActionComponent_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UCustomActionComponent, UCustomActionComponent::StaticClass, TEXT("UCustomActionComponent"), &Z_Registration_Info_UClass_UCustomActionComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCustomActionComponent), 1461225064U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Proyectos_UT_HUB_Tercero_CMasMas_CPP_2024_Source_CPP_2024_Public_Subsystems_ActionSystem_CustomActionComponent_h_2656426067(TEXT("/Script/CPP_2024"),
	Z_CompiledInDeferFile_FID_Proyectos_UT_HUB_Tercero_CMasMas_CPP_2024_Source_CPP_2024_Public_Subsystems_ActionSystem_CustomActionComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Proyectos_UT_HUB_Tercero_CMasMas_CPP_2024_Source_CPP_2024_Public_Subsystems_ActionSystem_CustomActionComponent_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
