// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UTHUB_CPP2024/UTHUB_CPP2024GameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUTHUB_CPP2024GameMode() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
UPackage* Z_Construct_UPackage__Script_UTHUB_CPP2024();
UTHUB_CPP2024_API UClass* Z_Construct_UClass_AUTHUB_CPP2024GameMode();
UTHUB_CPP2024_API UClass* Z_Construct_UClass_AUTHUB_CPP2024GameMode_NoRegister();
// End Cross Module References

// Begin Class AUTHUB_CPP2024GameMode
void AUTHUB_CPP2024GameMode::StaticRegisterNativesAUTHUB_CPP2024GameMode()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AUTHUB_CPP2024GameMode);
UClass* Z_Construct_UClass_AUTHUB_CPP2024GameMode_NoRegister()
{
	return AUTHUB_CPP2024GameMode::StaticClass();
}
struct Z_Construct_UClass_AUTHUB_CPP2024GameMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "UTHUB_CPP2024GameMode.h" },
		{ "ModuleRelativePath", "UTHUB_CPP2024GameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AUTHUB_CPP2024GameMode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AUTHUB_CPP2024GameMode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameModeBase,
	(UObject* (*)())Z_Construct_UPackage__Script_UTHUB_CPP2024,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AUTHUB_CPP2024GameMode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AUTHUB_CPP2024GameMode_Statics::ClassParams = {
	&AUTHUB_CPP2024GameMode::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AUTHUB_CPP2024GameMode_Statics::Class_MetaDataParams), Z_Construct_UClass_AUTHUB_CPP2024GameMode_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AUTHUB_CPP2024GameMode()
{
	if (!Z_Registration_Info_UClass_AUTHUB_CPP2024GameMode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AUTHUB_CPP2024GameMode.OuterSingleton, Z_Construct_UClass_AUTHUB_CPP2024GameMode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AUTHUB_CPP2024GameMode.OuterSingleton;
}
template<> UTHUB_CPP2024_API UClass* StaticClass<AUTHUB_CPP2024GameMode>()
{
	return AUTHUB_CPP2024GameMode::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AUTHUB_CPP2024GameMode);
AUTHUB_CPP2024GameMode::~AUTHUB_CPP2024GameMode() {}
// End Class AUTHUB_CPP2024GameMode

// Begin Registration
struct Z_CompiledInDeferFile_FID_Proyectos_UT_HUB_Tercero_CMasMas_CPP_2024_Source_UTHUB_CPP2024_UTHUB_CPP2024GameMode_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AUTHUB_CPP2024GameMode, AUTHUB_CPP2024GameMode::StaticClass, TEXT("AUTHUB_CPP2024GameMode"), &Z_Registration_Info_UClass_AUTHUB_CPP2024GameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AUTHUB_CPP2024GameMode), 4034628050U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Proyectos_UT_HUB_Tercero_CMasMas_CPP_2024_Source_UTHUB_CPP2024_UTHUB_CPP2024GameMode_h_1073835045(TEXT("/Script/UTHUB_CPP2024"),
	Z_CompiledInDeferFile_FID_Proyectos_UT_HUB_Tercero_CMasMas_CPP_2024_Source_UTHUB_CPP2024_UTHUB_CPP2024GameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Proyectos_UT_HUB_Tercero_CMasMas_CPP_2024_Source_UTHUB_CPP2024_UTHUB_CPP2024GameMode_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
