// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CPP_2024/Public/Subsystems/GI_Game.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGI_Game() {}

// Begin Cross Module References
CPP_2024_API UClass* Z_Construct_UClass_UGI_Game();
CPP_2024_API UClass* Z_Construct_UClass_UGI_Game_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UGameInstance();
UPackage* Z_Construct_UPackage__Script_CPP_2024();
// End Cross Module References

// Begin Class UGI_Game
void UGI_Game::StaticRegisterNativesUGI_Game()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGI_Game);
UClass* Z_Construct_UClass_UGI_Game_NoRegister()
{
	return UGI_Game::StaticClass();
}
struct Z_Construct_UClass_UGI_Game_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Subsystems/GI_Game.h" },
		{ "ModuleRelativePath", "Public/Subsystems/GI_Game.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGI_Game>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UGI_Game_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UGameInstance,
	(UObject* (*)())Z_Construct_UPackage__Script_CPP_2024,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGI_Game_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UGI_Game_Statics::ClassParams = {
	&UGI_Game::StaticClass,
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
	0x009000A8u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGI_Game_Statics::Class_MetaDataParams), Z_Construct_UClass_UGI_Game_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UGI_Game()
{
	if (!Z_Registration_Info_UClass_UGI_Game.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGI_Game.OuterSingleton, Z_Construct_UClass_UGI_Game_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UGI_Game.OuterSingleton;
}
template<> CPP_2024_API UClass* StaticClass<UGI_Game>()
{
	return UGI_Game::StaticClass();
}
UGI_Game::UGI_Game(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UGI_Game);
UGI_Game::~UGI_Game() {}
// End Class UGI_Game

// Begin Registration
struct Z_CompiledInDeferFile_FID_Proyectos_UT_HUB_Tercero_CMasMas_CPP_2024_Source_CPP_2024_Public_Subsystems_GI_Game_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UGI_Game, UGI_Game::StaticClass, TEXT("UGI_Game"), &Z_Registration_Info_UClass_UGI_Game, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGI_Game), 1427608554U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Proyectos_UT_HUB_Tercero_CMasMas_CPP_2024_Source_CPP_2024_Public_Subsystems_GI_Game_h_3641501332(TEXT("/Script/CPP_2024"),
	Z_CompiledInDeferFile_FID_Proyectos_UT_HUB_Tercero_CMasMas_CPP_2024_Source_CPP_2024_Public_Subsystems_GI_Game_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Proyectos_UT_HUB_Tercero_CMasMas_CPP_2024_Source_CPP_2024_Public_Subsystems_GI_Game_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
