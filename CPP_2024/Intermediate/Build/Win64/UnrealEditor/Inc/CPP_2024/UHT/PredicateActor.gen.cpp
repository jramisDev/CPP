// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CPP_2024/Public/Predicates/PredicateActor.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePredicateActor() {}

// Begin Cross Module References
CPP_2024_API UClass* Z_Construct_UClass_APredicateActor();
CPP_2024_API UClass* Z_Construct_UClass_APredicateActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_AActor();
UPackage* Z_Construct_UPackage__Script_CPP_2024();
// End Cross Module References

// Begin Class APredicateActor
void APredicateActor::StaticRegisterNativesAPredicateActor()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(APredicateActor);
UClass* Z_Construct_UClass_APredicateActor_NoRegister()
{
	return APredicateActor::StaticClass();
}
struct Z_Construct_UClass_APredicateActor_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Predicates/PredicateActor.h" },
		{ "ModuleRelativePath", "Public/Predicates/PredicateActor.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APredicateActor>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_APredicateActor_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_CPP_2024,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_APredicateActor_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_APredicateActor_Statics::ClassParams = {
	&APredicateActor::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APredicateActor_Statics::Class_MetaDataParams), Z_Construct_UClass_APredicateActor_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_APredicateActor()
{
	if (!Z_Registration_Info_UClass_APredicateActor.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_APredicateActor.OuterSingleton, Z_Construct_UClass_APredicateActor_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_APredicateActor.OuterSingleton;
}
template<> CPP_2024_API UClass* StaticClass<APredicateActor>()
{
	return APredicateActor::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(APredicateActor);
APredicateActor::~APredicateActor() {}
// End Class APredicateActor

// Begin Registration
struct Z_CompiledInDeferFile_FID_Proyectos_UT_HUB_Tercero_CMasMas_CPP_2024_Source_CPP_2024_Public_Predicates_PredicateActor_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_APredicateActor, APredicateActor::StaticClass, TEXT("APredicateActor"), &Z_Registration_Info_UClass_APredicateActor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(APredicateActor), 3253812374U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Proyectos_UT_HUB_Tercero_CMasMas_CPP_2024_Source_CPP_2024_Public_Predicates_PredicateActor_h_4050006453(TEXT("/Script/CPP_2024"),
	Z_CompiledInDeferFile_FID_Proyectos_UT_HUB_Tercero_CMasMas_CPP_2024_Source_CPP_2024_Public_Predicates_PredicateActor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Proyectos_UT_HUB_Tercero_CMasMas_CPP_2024_Source_CPP_2024_Public_Predicates_PredicateActor_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
