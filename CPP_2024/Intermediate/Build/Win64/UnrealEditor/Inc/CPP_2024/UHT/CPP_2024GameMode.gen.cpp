// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CPP_2024/CPP_2024GameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCPP_2024GameMode() {}

// Begin Cross Module References
CPP_2024_API UClass* Z_Construct_UClass_ACPP_2024GameMode();
CPP_2024_API UClass* Z_Construct_UClass_ACPP_2024GameMode_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
UPackage* Z_Construct_UPackage__Script_CPP_2024();
// End Cross Module References

// Begin Class ACPP_2024GameMode
void ACPP_2024GameMode::StaticRegisterNativesACPP_2024GameMode()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ACPP_2024GameMode);
UClass* Z_Construct_UClass_ACPP_2024GameMode_NoRegister()
{
	return ACPP_2024GameMode::StaticClass();
}
struct Z_Construct_UClass_ACPP_2024GameMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "CPP_2024GameMode.h" },
		{ "ModuleRelativePath", "CPP_2024GameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACPP_2024GameMode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_ACPP_2024GameMode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameModeBase,
	(UObject* (*)())Z_Construct_UPackage__Script_CPP_2024,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ACPP_2024GameMode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ACPP_2024GameMode_Statics::ClassParams = {
	&ACPP_2024GameMode::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x008802ACu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACPP_2024GameMode_Statics::Class_MetaDataParams), Z_Construct_UClass_ACPP_2024GameMode_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ACPP_2024GameMode()
{
	if (!Z_Registration_Info_UClass_ACPP_2024GameMode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ACPP_2024GameMode.OuterSingleton, Z_Construct_UClass_ACPP_2024GameMode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ACPP_2024GameMode.OuterSingleton;
}
template<> CPP_2024_API UClass* StaticClass<ACPP_2024GameMode>()
{
	return ACPP_2024GameMode::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ACPP_2024GameMode);
ACPP_2024GameMode::~ACPP_2024GameMode() {}
// End Class ACPP_2024GameMode

// Begin Registration
struct Z_CompiledInDeferFile_FID_Proyectos_UT_HUB_Tercero_CMasMas_CPP_2024_Source_CPP_2024_CPP_2024GameMode_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ACPP_2024GameMode, ACPP_2024GameMode::StaticClass, TEXT("ACPP_2024GameMode"), &Z_Registration_Info_UClass_ACPP_2024GameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ACPP_2024GameMode), 2631387262U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Proyectos_UT_HUB_Tercero_CMasMas_CPP_2024_Source_CPP_2024_CPP_2024GameMode_h_2813722450(TEXT("/Script/CPP_2024"),
	Z_CompiledInDeferFile_FID_Proyectos_UT_HUB_Tercero_CMasMas_CPP_2024_Source_CPP_2024_CPP_2024GameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Proyectos_UT_HUB_Tercero_CMasMas_CPP_2024_Source_CPP_2024_CPP_2024GameMode_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
