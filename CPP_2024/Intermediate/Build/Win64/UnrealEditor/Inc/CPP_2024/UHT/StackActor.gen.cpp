// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CPP_2024/Private/StackActor.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeStackActor() {}

// Begin Cross Module References
CPP_2024_API UClass* Z_Construct_UClass_AStackActor();
CPP_2024_API UClass* Z_Construct_UClass_AStackActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_AActor();
UPackage* Z_Construct_UPackage__Script_CPP_2024();
// End Cross Module References

// Begin Class AStackActor
void AStackActor::StaticRegisterNativesAStackActor()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AStackActor);
UClass* Z_Construct_UClass_AStackActor_NoRegister()
{
	return AStackActor::StaticClass();
}
struct Z_Construct_UClass_AStackActor_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "StackActor.h" },
		{ "ModuleRelativePath", "Private/StackActor.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AStackActor>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AStackActor_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_CPP_2024,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AStackActor_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AStackActor_Statics::ClassParams = {
	&AStackActor::StaticClass,
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
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AStackActor_Statics::Class_MetaDataParams), Z_Construct_UClass_AStackActor_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AStackActor()
{
	if (!Z_Registration_Info_UClass_AStackActor.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AStackActor.OuterSingleton, Z_Construct_UClass_AStackActor_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AStackActor.OuterSingleton;
}
template<> CPP_2024_API UClass* StaticClass<AStackActor>()
{
	return AStackActor::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AStackActor);
AStackActor::~AStackActor() {}
// End Class AStackActor

// Begin Registration
struct Z_CompiledInDeferFile_FID_Proyectos_UT_HUB_Tercero_CMasMas_CPP_2024_Source_CPP_2024_Private_StackActor_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AStackActor, AStackActor::StaticClass, TEXT("AStackActor"), &Z_Registration_Info_UClass_AStackActor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AStackActor), 155780113U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Proyectos_UT_HUB_Tercero_CMasMas_CPP_2024_Source_CPP_2024_Private_StackActor_h_3011677037(TEXT("/Script/CPP_2024"),
	Z_CompiledInDeferFile_FID_Proyectos_UT_HUB_Tercero_CMasMas_CPP_2024_Source_CPP_2024_Private_StackActor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Proyectos_UT_HUB_Tercero_CMasMas_CPP_2024_Source_CPP_2024_Private_StackActor_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
