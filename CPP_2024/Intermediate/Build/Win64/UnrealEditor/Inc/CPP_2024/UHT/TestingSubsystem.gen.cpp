// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CPP_2024/Public/Subsystems/TestingSubsystem.h"
#include "Runtime/Engine/Classes/Engine/GameInstance.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTestingSubsystem() {}

// Begin Cross Module References
CPP_2024_API UClass* Z_Construct_UClass_UTestingSubsystem();
CPP_2024_API UClass* Z_Construct_UClass_UTestingSubsystem_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UGameInstanceSubsystem();
UPackage* Z_Construct_UPackage__Script_CPP_2024();
// End Cross Module References

// Begin Class UTestingSubsystem
void UTestingSubsystem::StaticRegisterNativesUTestingSubsystem()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UTestingSubsystem);
UClass* Z_Construct_UClass_UTestingSubsystem_NoRegister()
{
	return UTestingSubsystem::StaticClass();
}
struct Z_Construct_UClass_UTestingSubsystem_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Subsystems/TestingSubsystem.h" },
		{ "ModuleRelativePath", "Public/Subsystems/TestingSubsystem.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTestingSubsystem>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UTestingSubsystem_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UGameInstanceSubsystem,
	(UObject* (*)())Z_Construct_UPackage__Script_CPP_2024,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UTestingSubsystem_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UTestingSubsystem_Statics::ClassParams = {
	&UTestingSubsystem::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UTestingSubsystem_Statics::Class_MetaDataParams), Z_Construct_UClass_UTestingSubsystem_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UTestingSubsystem()
{
	if (!Z_Registration_Info_UClass_UTestingSubsystem.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UTestingSubsystem.OuterSingleton, Z_Construct_UClass_UTestingSubsystem_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UTestingSubsystem.OuterSingleton;
}
template<> CPP_2024_API UClass* StaticClass<UTestingSubsystem>()
{
	return UTestingSubsystem::StaticClass();
}
UTestingSubsystem::UTestingSubsystem() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UTestingSubsystem);
UTestingSubsystem::~UTestingSubsystem() {}
// End Class UTestingSubsystem

// Begin Registration
struct Z_CompiledInDeferFile_FID_Proyectos_UT_HUB_Tercero_CMasMas_CPP_2024_Source_CPP_2024_Public_Subsystems_TestingSubsystem_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UTestingSubsystem, UTestingSubsystem::StaticClass, TEXT("UTestingSubsystem"), &Z_Registration_Info_UClass_UTestingSubsystem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UTestingSubsystem), 1520526598U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Proyectos_UT_HUB_Tercero_CMasMas_CPP_2024_Source_CPP_2024_Public_Subsystems_TestingSubsystem_h_773071817(TEXT("/Script/CPP_2024"),
	Z_CompiledInDeferFile_FID_Proyectos_UT_HUB_Tercero_CMasMas_CPP_2024_Source_CPP_2024_Public_Subsystems_TestingSubsystem_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Proyectos_UT_HUB_Tercero_CMasMas_CPP_2024_Source_CPP_2024_Public_Subsystems_TestingSubsystem_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
