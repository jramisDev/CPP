// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CPP_2024/Public/TestTemplateActor.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTestTemplateActor() {}

// Begin Cross Module References
CPP_2024_API UClass* Z_Construct_UClass_ATestTemplateActor();
CPP_2024_API UClass* Z_Construct_UClass_ATestTemplateActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_AActor();
UPackage* Z_Construct_UPackage__Script_CPP_2024();
// End Cross Module References

// Begin Class ATestTemplateActor Function DoTest
struct Z_Construct_UFunction_ATestTemplateActor_DoTest_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "CallInEditor", "true" },
		{ "ModuleRelativePath", "Public/TestTemplateActor.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ATestTemplateActor_DoTest_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATestTemplateActor, nullptr, "DoTest", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ATestTemplateActor_DoTest_Statics::Function_MetaDataParams), Z_Construct_UFunction_ATestTemplateActor_DoTest_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_ATestTemplateActor_DoTest()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ATestTemplateActor_DoTest_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ATestTemplateActor::execDoTest)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->DoTest();
	P_NATIVE_END;
}
// End Class ATestTemplateActor Function DoTest

// Begin Class ATestTemplateActor
void ATestTemplateActor::StaticRegisterNativesATestTemplateActor()
{
	UClass* Class = ATestTemplateActor::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "DoTest", &ATestTemplateActor::execDoTest },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ATestTemplateActor);
UClass* Z_Construct_UClass_ATestTemplateActor_NoRegister()
{
	return ATestTemplateActor::StaticClass();
}
struct Z_Construct_UClass_ATestTemplateActor_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "TestTemplateActor.h" },
		{ "ModuleRelativePath", "Public/TestTemplateActor.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ATestTemplateActor_DoTest, "DoTest" }, // 3518860719
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATestTemplateActor>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_ATestTemplateActor_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_CPP_2024,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ATestTemplateActor_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ATestTemplateActor_Statics::ClassParams = {
	&ATestTemplateActor::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ATestTemplateActor_Statics::Class_MetaDataParams), Z_Construct_UClass_ATestTemplateActor_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ATestTemplateActor()
{
	if (!Z_Registration_Info_UClass_ATestTemplateActor.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ATestTemplateActor.OuterSingleton, Z_Construct_UClass_ATestTemplateActor_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ATestTemplateActor.OuterSingleton;
}
template<> CPP_2024_API UClass* StaticClass<ATestTemplateActor>()
{
	return ATestTemplateActor::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ATestTemplateActor);
ATestTemplateActor::~ATestTemplateActor() {}
// End Class ATestTemplateActor

// Begin Registration
struct Z_CompiledInDeferFile_FID_Proyectos_UT_HUB_Tercero_CMasMas_CPP_2024_Source_CPP_2024_Public_TestTemplateActor_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ATestTemplateActor, ATestTemplateActor::StaticClass, TEXT("ATestTemplateActor"), &Z_Registration_Info_UClass_ATestTemplateActor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ATestTemplateActor), 2640374947U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Proyectos_UT_HUB_Tercero_CMasMas_CPP_2024_Source_CPP_2024_Public_TestTemplateActor_h_570230040(TEXT("/Script/CPP_2024"),
	Z_CompiledInDeferFile_FID_Proyectos_UT_HUB_Tercero_CMasMas_CPP_2024_Source_CPP_2024_Public_TestTemplateActor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Proyectos_UT_HUB_Tercero_CMasMas_CPP_2024_Source_CPP_2024_Public_TestTemplateActor_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
