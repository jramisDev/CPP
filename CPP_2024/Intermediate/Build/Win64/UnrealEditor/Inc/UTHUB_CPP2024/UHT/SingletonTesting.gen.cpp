// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UTHUB_CPP2024/Public/Subsistemas/SingletonTesting.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSingletonTesting() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AActor();
UPackage* Z_Construct_UPackage__Script_UTHUB_CPP2024();
UTHUB_CPP2024_API UClass* Z_Construct_UClass_ASingletonTesting();
UTHUB_CPP2024_API UClass* Z_Construct_UClass_ASingletonTesting_NoRegister();
// End Cross Module References

// Begin Class ASingletonTesting Function TestSingletonStuff
struct Z_Construct_UFunction_ASingletonTesting_TestSingletonStuff_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Subsistemas/SingletonTesting.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASingletonTesting_TestSingletonStuff_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASingletonTesting, nullptr, "TestSingletonStuff", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ASingletonTesting_TestSingletonStuff_Statics::Function_MetaDataParams), Z_Construct_UFunction_ASingletonTesting_TestSingletonStuff_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_ASingletonTesting_TestSingletonStuff()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASingletonTesting_TestSingletonStuff_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ASingletonTesting::execTestSingletonStuff)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->TestSingletonStuff();
	P_NATIVE_END;
}
// End Class ASingletonTesting Function TestSingletonStuff

// Begin Class ASingletonTesting
void ASingletonTesting::StaticRegisterNativesASingletonTesting()
{
	UClass* Class = ASingletonTesting::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "TestSingletonStuff", &ASingletonTesting::execTestSingletonStuff },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ASingletonTesting);
UClass* Z_Construct_UClass_ASingletonTesting_NoRegister()
{
	return ASingletonTesting::StaticClass();
}
struct Z_Construct_UClass_ASingletonTesting_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Subsistemas/SingletonTesting.h" },
		{ "ModuleRelativePath", "Public/Subsistemas/SingletonTesting.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ASingletonTesting_TestSingletonStuff, "TestSingletonStuff" }, // 3005157857
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASingletonTesting>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_ASingletonTesting_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_UTHUB_CPP2024,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ASingletonTesting_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ASingletonTesting_Statics::ClassParams = {
	&ASingletonTesting::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ASingletonTesting_Statics::Class_MetaDataParams), Z_Construct_UClass_ASingletonTesting_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ASingletonTesting()
{
	if (!Z_Registration_Info_UClass_ASingletonTesting.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ASingletonTesting.OuterSingleton, Z_Construct_UClass_ASingletonTesting_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ASingletonTesting.OuterSingleton;
}
template<> UTHUB_CPP2024_API UClass* StaticClass<ASingletonTesting>()
{
	return ASingletonTesting::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ASingletonTesting);
ASingletonTesting::~ASingletonTesting() {}
// End Class ASingletonTesting

// Begin Registration
struct Z_CompiledInDeferFile_FID_Proyectos_UT_HUB_Tercero_CMasMas_CPP_2024_Source_UTHUB_CPP2024_Public_Subsistemas_SingletonTesting_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ASingletonTesting, ASingletonTesting::StaticClass, TEXT("ASingletonTesting"), &Z_Registration_Info_UClass_ASingletonTesting, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ASingletonTesting), 843304986U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Proyectos_UT_HUB_Tercero_CMasMas_CPP_2024_Source_UTHUB_CPP2024_Public_Subsistemas_SingletonTesting_h_1554744019(TEXT("/Script/UTHUB_CPP2024"),
	Z_CompiledInDeferFile_FID_Proyectos_UT_HUB_Tercero_CMasMas_CPP_2024_Source_UTHUB_CPP2024_Public_Subsistemas_SingletonTesting_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Proyectos_UT_HUB_Tercero_CMasMas_CPP_2024_Source_UTHUB_CPP2024_Public_Subsistemas_SingletonTesting_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
