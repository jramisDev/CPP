// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UTHUB_CPP2024/Public/Async/AsyncTestActor.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAsyncTestActor() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AActor();
UPackage* Z_Construct_UPackage__Script_UTHUB_CPP2024();
UTHUB_CPP2024_API UClass* Z_Construct_UClass_AAsyncTestActor();
UTHUB_CPP2024_API UClass* Z_Construct_UClass_AAsyncTestActor_NoRegister();
// End Cross Module References

// Begin Class AAsyncTestActor Function TestAsyncStuff
struct Z_Construct_UFunction_AAsyncTestActor_TestAsyncStuff_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "CallInEditor", "true" },
		{ "ModuleRelativePath", "Public/Async/AsyncTestActor.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AAsyncTestActor_TestAsyncStuff_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAsyncTestActor, nullptr, "TestAsyncStuff", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AAsyncTestActor_TestAsyncStuff_Statics::Function_MetaDataParams), Z_Construct_UFunction_AAsyncTestActor_TestAsyncStuff_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AAsyncTestActor_TestAsyncStuff()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AAsyncTestActor_TestAsyncStuff_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AAsyncTestActor::execTestAsyncStuff)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->TestAsyncStuff();
	P_NATIVE_END;
}
// End Class AAsyncTestActor Function TestAsyncStuff

// Begin Class AAsyncTestActor
void AAsyncTestActor::StaticRegisterNativesAAsyncTestActor()
{
	UClass* Class = AAsyncTestActor::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "TestAsyncStuff", &AAsyncTestActor::execTestAsyncStuff },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AAsyncTestActor);
UClass* Z_Construct_UClass_AAsyncTestActor_NoRegister()
{
	return AAsyncTestActor::StaticClass();
}
struct Z_Construct_UClass_AAsyncTestActor_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Async/AsyncTestActor.h" },
		{ "ModuleRelativePath", "Public/Async/AsyncTestActor.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AAsyncTestActor_TestAsyncStuff, "TestAsyncStuff" }, // 2973073217
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AAsyncTestActor>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AAsyncTestActor_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_UTHUB_CPP2024,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AAsyncTestActor_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AAsyncTestActor_Statics::ClassParams = {
	&AAsyncTestActor::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AAsyncTestActor_Statics::Class_MetaDataParams), Z_Construct_UClass_AAsyncTestActor_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AAsyncTestActor()
{
	if (!Z_Registration_Info_UClass_AAsyncTestActor.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AAsyncTestActor.OuterSingleton, Z_Construct_UClass_AAsyncTestActor_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AAsyncTestActor.OuterSingleton;
}
template<> UTHUB_CPP2024_API UClass* StaticClass<AAsyncTestActor>()
{
	return AAsyncTestActor::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AAsyncTestActor);
AAsyncTestActor::~AAsyncTestActor() {}
// End Class AAsyncTestActor

// Begin Registration
struct Z_CompiledInDeferFile_FID_Proyectos_UT_HUB_Tercero_CMasMas_CPP_2024_Source_UTHUB_CPP2024_Public_Async_AsyncTestActor_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AAsyncTestActor, AAsyncTestActor::StaticClass, TEXT("AAsyncTestActor"), &Z_Registration_Info_UClass_AAsyncTestActor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AAsyncTestActor), 1031307855U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Proyectos_UT_HUB_Tercero_CMasMas_CPP_2024_Source_UTHUB_CPP2024_Public_Async_AsyncTestActor_h_3739074432(TEXT("/Script/UTHUB_CPP2024"),
	Z_CompiledInDeferFile_FID_Proyectos_UT_HUB_Tercero_CMasMas_CPP_2024_Source_UTHUB_CPP2024_Public_Async_AsyncTestActor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Proyectos_UT_HUB_Tercero_CMasMas_CPP_2024_Source_UTHUB_CPP2024_Public_Async_AsyncTestActor_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
