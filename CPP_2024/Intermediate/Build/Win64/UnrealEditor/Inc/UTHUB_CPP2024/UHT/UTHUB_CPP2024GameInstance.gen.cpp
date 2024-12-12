// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UTHUB_CPP2024/Public/Subsistemas/UTHUB_CPP2024GameInstance.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUTHUB_CPP2024GameInstance() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UGameInstance();
UPackage* Z_Construct_UPackage__Script_UTHUB_CPP2024();
UTHUB_CPP2024_API UClass* Z_Construct_UClass_UUTHUB_CPP2024GameInstance();
UTHUB_CPP2024_API UClass* Z_Construct_UClass_UUTHUB_CPP2024GameInstance_NoRegister();
// End Cross Module References

// Begin Class UUTHUB_CPP2024GameInstance Function SomeFunction
struct Z_Construct_UFunction_UUTHUB_CPP2024GameInstance_SomeFunction_Statics
{
	struct UTHUB_CPP2024GameInstance_eventSomeFunction_Parms
	{
		AActor* RegActor;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Subsistemas/UTHUB_CPP2024GameInstance.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_RegActor;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUTHUB_CPP2024GameInstance_SomeFunction_Statics::NewProp_RegActor = { "RegActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTHUB_CPP2024GameInstance_eventSomeFunction_Parms, RegActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUTHUB_CPP2024GameInstance_SomeFunction_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUTHUB_CPP2024GameInstance_SomeFunction_Statics::NewProp_RegActor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UUTHUB_CPP2024GameInstance_SomeFunction_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUTHUB_CPP2024GameInstance_SomeFunction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUTHUB_CPP2024GameInstance, nullptr, "SomeFunction", nullptr, nullptr, Z_Construct_UFunction_UUTHUB_CPP2024GameInstance_SomeFunction_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUTHUB_CPP2024GameInstance_SomeFunction_Statics::PropPointers), sizeof(Z_Construct_UFunction_UUTHUB_CPP2024GameInstance_SomeFunction_Statics::UTHUB_CPP2024GameInstance_eventSomeFunction_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUTHUB_CPP2024GameInstance_SomeFunction_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUTHUB_CPP2024GameInstance_SomeFunction_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UUTHUB_CPP2024GameInstance_SomeFunction_Statics::UTHUB_CPP2024GameInstance_eventSomeFunction_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UUTHUB_CPP2024GameInstance_SomeFunction()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUTHUB_CPP2024GameInstance_SomeFunction_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UUTHUB_CPP2024GameInstance::execSomeFunction)
{
	P_GET_OBJECT(AActor,Z_Param_RegActor);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SomeFunction(Z_Param_RegActor);
	P_NATIVE_END;
}
// End Class UUTHUB_CPP2024GameInstance Function SomeFunction

// Begin Class UUTHUB_CPP2024GameInstance
void UUTHUB_CPP2024GameInstance::StaticRegisterNativesUUTHUB_CPP2024GameInstance()
{
	UClass* Class = UUTHUB_CPP2024GameInstance::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "SomeFunction", &UUTHUB_CPP2024GameInstance::execSomeFunction },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UUTHUB_CPP2024GameInstance);
UClass* Z_Construct_UClass_UUTHUB_CPP2024GameInstance_NoRegister()
{
	return UUTHUB_CPP2024GameInstance::StaticClass();
}
struct Z_Construct_UClass_UUTHUB_CPP2024GameInstance_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Subsistemas/UTHUB_CPP2024GameInstance.h" },
		{ "ModuleRelativePath", "Public/Subsistemas/UTHUB_CPP2024GameInstance.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UUTHUB_CPP2024GameInstance_SomeFunction, "SomeFunction" }, // 1446848139
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UUTHUB_CPP2024GameInstance>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UUTHUB_CPP2024GameInstance_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UGameInstance,
	(UObject* (*)())Z_Construct_UPackage__Script_UTHUB_CPP2024,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UUTHUB_CPP2024GameInstance_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UUTHUB_CPP2024GameInstance_Statics::ClassParams = {
	&UUTHUB_CPP2024GameInstance::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	0,
	0x009000A8u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UUTHUB_CPP2024GameInstance_Statics::Class_MetaDataParams), Z_Construct_UClass_UUTHUB_CPP2024GameInstance_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UUTHUB_CPP2024GameInstance()
{
	if (!Z_Registration_Info_UClass_UUTHUB_CPP2024GameInstance.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UUTHUB_CPP2024GameInstance.OuterSingleton, Z_Construct_UClass_UUTHUB_CPP2024GameInstance_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UUTHUB_CPP2024GameInstance.OuterSingleton;
}
template<> UTHUB_CPP2024_API UClass* StaticClass<UUTHUB_CPP2024GameInstance>()
{
	return UUTHUB_CPP2024GameInstance::StaticClass();
}
UUTHUB_CPP2024GameInstance::UUTHUB_CPP2024GameInstance(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UUTHUB_CPP2024GameInstance);
UUTHUB_CPP2024GameInstance::~UUTHUB_CPP2024GameInstance() {}
// End Class UUTHUB_CPP2024GameInstance

// Begin Registration
struct Z_CompiledInDeferFile_FID_Proyectos_UT_HUB_Tercero_CMasMas_CPP_2024_Source_UTHUB_CPP2024_Public_Subsistemas_UTHUB_CPP2024GameInstance_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UUTHUB_CPP2024GameInstance, UUTHUB_CPP2024GameInstance::StaticClass, TEXT("UUTHUB_CPP2024GameInstance"), &Z_Registration_Info_UClass_UUTHUB_CPP2024GameInstance, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UUTHUB_CPP2024GameInstance), 549618772U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Proyectos_UT_HUB_Tercero_CMasMas_CPP_2024_Source_UTHUB_CPP2024_Public_Subsistemas_UTHUB_CPP2024GameInstance_h_71920949(TEXT("/Script/UTHUB_CPP2024"),
	Z_CompiledInDeferFile_FID_Proyectos_UT_HUB_Tercero_CMasMas_CPP_2024_Source_UTHUB_CPP2024_Public_Subsistemas_UTHUB_CPP2024GameInstance_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Proyectos_UT_HUB_Tercero_CMasMas_CPP_2024_Source_UTHUB_CPP2024_Public_Subsistemas_UTHUB_CPP2024GameInstance_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
