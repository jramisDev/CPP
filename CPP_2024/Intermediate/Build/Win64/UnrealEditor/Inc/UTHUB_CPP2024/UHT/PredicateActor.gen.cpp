// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UTHUB_CPP2024/Public/Predicates/PredicateActor.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePredicateActor() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AActor();
UPackage* Z_Construct_UPackage__Script_UTHUB_CPP2024();
UTHUB_CPP2024_API UClass* Z_Construct_UClass_APredicateActor();
UTHUB_CPP2024_API UClass* Z_Construct_UClass_APredicateActor_NoRegister();
// End Cross Module References

// Begin Class APredicateActor Function TestFunction
struct Z_Construct_UFunction_APredicateActor_TestFunction_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "CallInEditor", "true" },
		{ "ModuleRelativePath", "Public/Predicates/PredicateActor.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APredicateActor_TestFunction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APredicateActor, nullptr, "TestFunction", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APredicateActor_TestFunction_Statics::Function_MetaDataParams), Z_Construct_UFunction_APredicateActor_TestFunction_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_APredicateActor_TestFunction()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APredicateActor_TestFunction_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(APredicateActor::execTestFunction)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->TestFunction();
	P_NATIVE_END;
}
// End Class APredicateActor Function TestFunction

// Begin Class APredicateActor
void APredicateActor::StaticRegisterNativesAPredicateActor()
{
	UClass* Class = APredicateActor::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "TestFunction", &APredicateActor::execTestFunction },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
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
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_APredicateActor_TestFunction, "TestFunction" }, // 4210596347
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APredicateActor>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_APredicateActor_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_UTHUB_CPP2024,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_APredicateActor_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_APredicateActor_Statics::ClassParams = {
	&APredicateActor::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
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
template<> UTHUB_CPP2024_API UClass* StaticClass<APredicateActor>()
{
	return APredicateActor::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(APredicateActor);
APredicateActor::~APredicateActor() {}
// End Class APredicateActor

// Begin Registration
struct Z_CompiledInDeferFile_FID_Proyectos_UT_HUB_Tercero_CMasMas_CPP_2024_Source_UTHUB_CPP2024_Public_Predicates_PredicateActor_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_APredicateActor, APredicateActor::StaticClass, TEXT("APredicateActor"), &Z_Registration_Info_UClass_APredicateActor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(APredicateActor), 1905829513U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Proyectos_UT_HUB_Tercero_CMasMas_CPP_2024_Source_UTHUB_CPP2024_Public_Predicates_PredicateActor_h_1996884879(TEXT("/Script/UTHUB_CPP2024"),
	Z_CompiledInDeferFile_FID_Proyectos_UT_HUB_Tercero_CMasMas_CPP_2024_Source_UTHUB_CPP2024_Public_Predicates_PredicateActor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Proyectos_UT_HUB_Tercero_CMasMas_CPP_2024_Source_UTHUB_CPP2024_Public_Predicates_PredicateActor_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
