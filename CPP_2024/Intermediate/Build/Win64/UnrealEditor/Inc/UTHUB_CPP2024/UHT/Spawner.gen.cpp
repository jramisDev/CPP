// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UTHUB_CPP2024/Public/Spawner.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSpawner() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_ACharacter();
UPackage* Z_Construct_UPackage__Script_UTHUB_CPP2024();
UTHUB_CPP2024_API UClass* Z_Construct_UClass_AEnemy();
UTHUB_CPP2024_API UClass* Z_Construct_UClass_AEnemy_NoRegister();
UTHUB_CPP2024_API UClass* Z_Construct_UClass_ASpawner();
UTHUB_CPP2024_API UClass* Z_Construct_UClass_ASpawner_NoRegister();
// End Cross Module References

// Begin Class AEnemy
void AEnemy::StaticRegisterNativesAEnemy()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AEnemy);
UClass* Z_Construct_UClass_AEnemy_NoRegister()
{
	return AEnemy::StaticClass();
}
struct Z_Construct_UClass_AEnemy_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Spawner.h" },
		{ "ModuleRelativePath", "Public/Spawner.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AEnemy>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AEnemy_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ACharacter,
	(UObject* (*)())Z_Construct_UPackage__Script_UTHUB_CPP2024,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AEnemy_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AEnemy_Statics::ClassParams = {
	&AEnemy::StaticClass,
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
	0x008000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AEnemy_Statics::Class_MetaDataParams), Z_Construct_UClass_AEnemy_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AEnemy()
{
	if (!Z_Registration_Info_UClass_AEnemy.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AEnemy.OuterSingleton, Z_Construct_UClass_AEnemy_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AEnemy.OuterSingleton;
}
template<> UTHUB_CPP2024_API UClass* StaticClass<AEnemy>()
{
	return AEnemy::StaticClass();
}
AEnemy::AEnemy(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(AEnemy);
AEnemy::~AEnemy() {}
// End Class AEnemy

// Begin Class ASpawner Function SpawnEnemy
struct Z_Construct_UFunction_ASpawner_SpawnEnemy_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "CallInEditor", "true" },
		{ "ModuleRelativePath", "Public/Spawner.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASpawner_SpawnEnemy_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASpawner, nullptr, "SpawnEnemy", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ASpawner_SpawnEnemy_Statics::Function_MetaDataParams), Z_Construct_UFunction_ASpawner_SpawnEnemy_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_ASpawner_SpawnEnemy()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASpawner_SpawnEnemy_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ASpawner::execSpawnEnemy)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SpawnEnemy();
	P_NATIVE_END;
}
// End Class ASpawner Function SpawnEnemy

// Begin Class ASpawner
void ASpawner::StaticRegisterNativesASpawner()
{
	UClass* Class = ASpawner::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "SpawnEnemy", &ASpawner::execSpawnEnemy },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ASpawner);
UClass* Z_Construct_UClass_ASpawner_NoRegister()
{
	return ASpawner::StaticClass();
}
struct Z_Construct_UClass_ASpawner_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Spawner.h" },
		{ "ModuleRelativePath", "Public/Spawner.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EnemyClass_MetaData[] = {
		{ "Category", "Spawner" },
		{ "ModuleRelativePath", "Public/Spawner.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_EnemyClass;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ASpawner_SpawnEnemy, "SpawnEnemy" }, // 670740683
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASpawner>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ASpawner_Statics::NewProp_EnemyClass = { "EnemyClass", nullptr, (EPropertyFlags)0x0014000000000801, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASpawner, EnemyClass), Z_Construct_UClass_UClass, Z_Construct_UClass_AEnemy_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EnemyClass_MetaData), NewProp_EnemyClass_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASpawner_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASpawner_Statics::NewProp_EnemyClass,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ASpawner_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ASpawner_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_UTHUB_CPP2024,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ASpawner_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ASpawner_Statics::ClassParams = {
	&ASpawner::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_ASpawner_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_ASpawner_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ASpawner_Statics::Class_MetaDataParams), Z_Construct_UClass_ASpawner_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ASpawner()
{
	if (!Z_Registration_Info_UClass_ASpawner.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ASpawner.OuterSingleton, Z_Construct_UClass_ASpawner_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ASpawner.OuterSingleton;
}
template<> UTHUB_CPP2024_API UClass* StaticClass<ASpawner>()
{
	return ASpawner::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ASpawner);
ASpawner::~ASpawner() {}
// End Class ASpawner

// Begin Registration
struct Z_CompiledInDeferFile_FID_Proyectos_UT_HUB_Tercero_CMasMas_CPP_2024_Source_UTHUB_CPP2024_Public_Spawner_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AEnemy, AEnemy::StaticClass, TEXT("AEnemy"), &Z_Registration_Info_UClass_AEnemy, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AEnemy), 2347396231U) },
		{ Z_Construct_UClass_ASpawner, ASpawner::StaticClass, TEXT("ASpawner"), &Z_Registration_Info_UClass_ASpawner, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ASpawner), 1535232814U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Proyectos_UT_HUB_Tercero_CMasMas_CPP_2024_Source_UTHUB_CPP2024_Public_Spawner_h_888206448(TEXT("/Script/UTHUB_CPP2024"),
	Z_CompiledInDeferFile_FID_Proyectos_UT_HUB_Tercero_CMasMas_CPP_2024_Source_UTHUB_CPP2024_Public_Spawner_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Proyectos_UT_HUB_Tercero_CMasMas_CPP_2024_Source_UTHUB_CPP2024_Public_Spawner_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
