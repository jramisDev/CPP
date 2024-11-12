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
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCustomActionComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
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
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
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
		{ Z_Construct_UClass_UCustomActionComponent, UCustomActionComponent::StaticClass, TEXT("UCustomActionComponent"), &Z_Registration_Info_UClass_UCustomActionComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCustomActionComponent), 2573613553U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Proyectos_UT_HUB_Tercero_CMasMas_CPP_2024_Source_CPP_2024_Public_Subsystems_ActionSystem_CustomActionComponent_h_2001739749(TEXT("/Script/CPP_2024"),
	Z_CompiledInDeferFile_FID_Proyectos_UT_HUB_Tercero_CMasMas_CPP_2024_Source_CPP_2024_Public_Subsystems_ActionSystem_CustomActionComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Proyectos_UT_HUB_Tercero_CMasMas_CPP_2024_Source_CPP_2024_Public_Subsystems_ActionSystem_CustomActionComponent_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
