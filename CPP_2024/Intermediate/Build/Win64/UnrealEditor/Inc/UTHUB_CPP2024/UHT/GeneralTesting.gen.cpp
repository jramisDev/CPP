// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UTHUB_CPP2024/Public/GeneralTesting.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGeneralTesting() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_ACharacter_NoRegister();
UPackage* Z_Construct_UPackage__Script_UTHUB_CPP2024();
UTHUB_CPP2024_API UClass* Z_Construct_UClass_AGeneralTesting();
UTHUB_CPP2024_API UClass* Z_Construct_UClass_AGeneralTesting_NoRegister();
// End Cross Module References

// Begin Class AGeneralTesting Function DoTest
struct Z_Construct_UFunction_AGeneralTesting_DoTest_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "CallInEditor", "true" },
		{ "ModuleRelativePath", "Public/GeneralTesting.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AGeneralTesting_DoTest_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGeneralTesting, nullptr, "DoTest", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AGeneralTesting_DoTest_Statics::Function_MetaDataParams), Z_Construct_UFunction_AGeneralTesting_DoTest_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AGeneralTesting_DoTest()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AGeneralTesting_DoTest_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AGeneralTesting::execDoTest)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->DoTest();
	P_NATIVE_END;
}
// End Class AGeneralTesting Function DoTest

// Begin Class AGeneralTesting
void AGeneralTesting::StaticRegisterNativesAGeneralTesting()
{
	UClass* Class = AGeneralTesting::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "DoTest", &AGeneralTesting::execDoTest },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AGeneralTesting);
UClass* Z_Construct_UClass_AGeneralTesting_NoRegister()
{
	return AGeneralTesting::StaticClass();
}
struct Z_Construct_UClass_AGeneralTesting_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "GeneralTesting.h" },
		{ "ModuleRelativePath", "Public/GeneralTesting.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ActorClass_MetaData[] = {
		{ "Category", "GeneralTesting" },
		{ "ModuleRelativePath", "Public/GeneralTesting.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CharacterClass_MetaData[] = {
		{ "Category", "GeneralTesting" },
		{ "ModuleRelativePath", "Public/GeneralTesting.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MyClass_MetaData[] = {
		{ "Category", "GeneralTesting" },
		{ "ModuleRelativePath", "Public/GeneralTesting.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MyObjClass_MetaData[] = {
		{ "Category", "GeneralTesting" },
		{ "ModuleRelativePath", "Public/GeneralTesting.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SomeClass_MetaData[] = {
		{ "Category", "GeneralTesting" },
		{ "ModuleRelativePath", "Public/GeneralTesting.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_a_MetaData[] = {
		{ "ModuleRelativePath", "Public/GeneralTesting.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_ActorClass;
	static const UECodeGen_Private::FClassPropertyParams NewProp_CharacterClass;
	static const UECodeGen_Private::FClassPropertyParams NewProp_MyClass;
	static const UECodeGen_Private::FClassPropertyParams NewProp_MyObjClass;
	static const UECodeGen_Private::FClassPropertyParams NewProp_SomeClass;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_a;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AGeneralTesting_DoTest, "DoTest" }, // 3706047946
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AGeneralTesting>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AGeneralTesting_Statics::NewProp_ActorClass = { "ActorClass", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGeneralTesting, ActorClass), Z_Construct_UClass_UClass, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ActorClass_MetaData), NewProp_ActorClass_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AGeneralTesting_Statics::NewProp_CharacterClass = { "CharacterClass", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGeneralTesting, CharacterClass), Z_Construct_UClass_UClass, Z_Construct_UClass_ACharacter_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CharacterClass_MetaData), NewProp_CharacterClass_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AGeneralTesting_Statics::NewProp_MyClass = { "MyClass", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGeneralTesting, MyClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UClass, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MyClass_MetaData), NewProp_MyClass_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AGeneralTesting_Statics::NewProp_MyObjClass = { "MyObjClass", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGeneralTesting, MyObjClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MyObjClass_MetaData), NewProp_MyObjClass_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AGeneralTesting_Statics::NewProp_SomeClass = { "SomeClass", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGeneralTesting, SomeClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SomeClass_MetaData), NewProp_SomeClass_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGeneralTesting_Statics::NewProp_a = { "a", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGeneralTesting, a), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_a_MetaData), NewProp_a_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AGeneralTesting_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGeneralTesting_Statics::NewProp_ActorClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGeneralTesting_Statics::NewProp_CharacterClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGeneralTesting_Statics::NewProp_MyClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGeneralTesting_Statics::NewProp_MyObjClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGeneralTesting_Statics::NewProp_SomeClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGeneralTesting_Statics::NewProp_a,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AGeneralTesting_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AGeneralTesting_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_UTHUB_CPP2024,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AGeneralTesting_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AGeneralTesting_Statics::ClassParams = {
	&AGeneralTesting::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_AGeneralTesting_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_AGeneralTesting_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AGeneralTesting_Statics::Class_MetaDataParams), Z_Construct_UClass_AGeneralTesting_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AGeneralTesting()
{
	if (!Z_Registration_Info_UClass_AGeneralTesting.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AGeneralTesting.OuterSingleton, Z_Construct_UClass_AGeneralTesting_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AGeneralTesting.OuterSingleton;
}
template<> UTHUB_CPP2024_API UClass* StaticClass<AGeneralTesting>()
{
	return AGeneralTesting::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AGeneralTesting);
AGeneralTesting::~AGeneralTesting() {}
// End Class AGeneralTesting

// Begin Registration
struct Z_CompiledInDeferFile_FID_Proyectos_UT_HUB_Tercero_CMasMas_CPP_2024_Source_UTHUB_CPP2024_Public_GeneralTesting_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AGeneralTesting, AGeneralTesting::StaticClass, TEXT("AGeneralTesting"), &Z_Registration_Info_UClass_AGeneralTesting, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AGeneralTesting), 1093895237U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Proyectos_UT_HUB_Tercero_CMasMas_CPP_2024_Source_UTHUB_CPP2024_Public_GeneralTesting_h_777913059(TEXT("/Script/UTHUB_CPP2024"),
	Z_CompiledInDeferFile_FID_Proyectos_UT_HUB_Tercero_CMasMas_CPP_2024_Source_UTHUB_CPP2024_Public_GeneralTesting_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Proyectos_UT_HUB_Tercero_CMasMas_CPP_2024_Source_UTHUB_CPP2024_Public_GeneralTesting_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
