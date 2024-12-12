// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UTHUB_CPP2024/Public/TestTemplateActor.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTestTemplateActor() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
UPackage* Z_Construct_UPackage__Script_UTHUB_CPP2024();
UTHUB_CPP2024_API UClass* Z_Construct_UClass_ATestTemplateActor();
UTHUB_CPP2024_API UClass* Z_Construct_UClass_ATestTemplateActor_NoRegister();
// End Cross Module References

// Begin Class ATestTemplateActor Function CreateAttribute
struct Z_Construct_UFunction_ATestTemplateActor_CreateAttribute_Statics
{
	struct TestTemplateActor_eventCreateAttribute_Parms
	{
		FName InName;
		float InInitialValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TestTemplateActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_InName;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_InInitialValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_ATestTemplateActor_CreateAttribute_Statics::NewProp_InName = { "InName", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TestTemplateActor_eventCreateAttribute_Parms, InName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InName_MetaData), NewProp_InName_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ATestTemplateActor_CreateAttribute_Statics::NewProp_InInitialValue = { "InInitialValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TestTemplateActor_eventCreateAttribute_Parms, InInitialValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATestTemplateActor_CreateAttribute_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATestTemplateActor_CreateAttribute_Statics::NewProp_InName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATestTemplateActor_CreateAttribute_Statics::NewProp_InInitialValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ATestTemplateActor_CreateAttribute_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ATestTemplateActor_CreateAttribute_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATestTemplateActor, nullptr, "CreateAttribute", nullptr, nullptr, Z_Construct_UFunction_ATestTemplateActor_CreateAttribute_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATestTemplateActor_CreateAttribute_Statics::PropPointers), sizeof(Z_Construct_UFunction_ATestTemplateActor_CreateAttribute_Statics::TestTemplateActor_eventCreateAttribute_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ATestTemplateActor_CreateAttribute_Statics::Function_MetaDataParams), Z_Construct_UFunction_ATestTemplateActor_CreateAttribute_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ATestTemplateActor_CreateAttribute_Statics::TestTemplateActor_eventCreateAttribute_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ATestTemplateActor_CreateAttribute()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ATestTemplateActor_CreateAttribute_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ATestTemplateActor::execCreateAttribute)
{
	P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_InName);
	P_GET_PROPERTY(FFloatProperty,Z_Param_InInitialValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->CreateAttribute(Z_Param_Out_InName,Z_Param_InInitialValue);
	P_NATIVE_END;
}
// End Class ATestTemplateActor Function CreateAttribute

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

// Begin Class ATestTemplateActor Function GetAttributeValue
struct Z_Construct_UFunction_ATestTemplateActor_GetAttributeValue_Statics
{
	struct TestTemplateActor_eventGetAttributeValue_Parms
	{
		FName InName;
		float OutValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TestTemplateActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_InName;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_OutValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_ATestTemplateActor_GetAttributeValue_Statics::NewProp_InName = { "InName", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TestTemplateActor_eventGetAttributeValue_Parms, InName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InName_MetaData), NewProp_InName_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ATestTemplateActor_GetAttributeValue_Statics::NewProp_OutValue = { "OutValue", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TestTemplateActor_eventGetAttributeValue_Parms, OutValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATestTemplateActor_GetAttributeValue_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATestTemplateActor_GetAttributeValue_Statics::NewProp_InName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATestTemplateActor_GetAttributeValue_Statics::NewProp_OutValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ATestTemplateActor_GetAttributeValue_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ATestTemplateActor_GetAttributeValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATestTemplateActor, nullptr, "GetAttributeValue", nullptr, nullptr, Z_Construct_UFunction_ATestTemplateActor_GetAttributeValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATestTemplateActor_GetAttributeValue_Statics::PropPointers), sizeof(Z_Construct_UFunction_ATestTemplateActor_GetAttributeValue_Statics::TestTemplateActor_eventGetAttributeValue_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ATestTemplateActor_GetAttributeValue_Statics::Function_MetaDataParams), Z_Construct_UFunction_ATestTemplateActor_GetAttributeValue_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ATestTemplateActor_GetAttributeValue_Statics::TestTemplateActor_eventGetAttributeValue_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ATestTemplateActor_GetAttributeValue()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ATestTemplateActor_GetAttributeValue_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ATestTemplateActor::execGetAttributeValue)
{
	P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_InName);
	P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_OutValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->GetAttributeValue(Z_Param_Out_InName,Z_Param_Out_OutValue);
	P_NATIVE_END;
}
// End Class ATestTemplateActor Function GetAttributeValue

// Begin Class ATestTemplateActor Function SetAttributeValue
struct Z_Construct_UFunction_ATestTemplateActor_SetAttributeValue_Statics
{
	struct TestTemplateActor_eventSetAttributeValue_Parms
	{
		FName InName;
		float Value;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TestTemplateActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_InName;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Value;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_ATestTemplateActor_SetAttributeValue_Statics::NewProp_InName = { "InName", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TestTemplateActor_eventSetAttributeValue_Parms, InName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InName_MetaData), NewProp_InName_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ATestTemplateActor_SetAttributeValue_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TestTemplateActor_eventSetAttributeValue_Parms, Value), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATestTemplateActor_SetAttributeValue_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATestTemplateActor_SetAttributeValue_Statics::NewProp_InName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATestTemplateActor_SetAttributeValue_Statics::NewProp_Value,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ATestTemplateActor_SetAttributeValue_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ATestTemplateActor_SetAttributeValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATestTemplateActor, nullptr, "SetAttributeValue", nullptr, nullptr, Z_Construct_UFunction_ATestTemplateActor_SetAttributeValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATestTemplateActor_SetAttributeValue_Statics::PropPointers), sizeof(Z_Construct_UFunction_ATestTemplateActor_SetAttributeValue_Statics::TestTemplateActor_eventSetAttributeValue_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ATestTemplateActor_SetAttributeValue_Statics::Function_MetaDataParams), Z_Construct_UFunction_ATestTemplateActor_SetAttributeValue_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ATestTemplateActor_SetAttributeValue_Statics::TestTemplateActor_eventSetAttributeValue_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ATestTemplateActor_SetAttributeValue()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ATestTemplateActor_SetAttributeValue_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ATestTemplateActor::execSetAttributeValue)
{
	P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_InName);
	P_GET_PROPERTY(FFloatProperty,Z_Param_Value);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetAttributeValue(Z_Param_Out_InName,Z_Param_Value);
	P_NATIVE_END;
}
// End Class ATestTemplateActor Function SetAttributeValue

// Begin Class ATestTemplateActor
void ATestTemplateActor::StaticRegisterNativesATestTemplateActor()
{
	UClass* Class = ATestTemplateActor::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "CreateAttribute", &ATestTemplateActor::execCreateAttribute },
		{ "DoTest", &ATestTemplateActor::execDoTest },
		{ "GetAttributeValue", &ATestTemplateActor::execGetAttributeValue },
		{ "SetAttributeValue", &ATestTemplateActor::execSetAttributeValue },
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
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ListOfActors_MetaData[] = {
		{ "Category", "TestTemplateActor" },
		{ "ModuleRelativePath", "Public/TestTemplateActor.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ListOfActors_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ListOfActors;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ATestTemplateActor_CreateAttribute, "CreateAttribute" }, // 316587270
		{ &Z_Construct_UFunction_ATestTemplateActor_DoTest, "DoTest" }, // 3518860719
		{ &Z_Construct_UFunction_ATestTemplateActor_GetAttributeValue, "GetAttributeValue" }, // 2627968550
		{ &Z_Construct_UFunction_ATestTemplateActor_SetAttributeValue, "SetAttributeValue" }, // 3532053625
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATestTemplateActor>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATestTemplateActor_Statics::NewProp_ListOfActors_Inner = { "ListOfActors", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ATestTemplateActor_Statics::NewProp_ListOfActors = { "ListOfActors", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATestTemplateActor, ListOfActors), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ListOfActors_MetaData), NewProp_ListOfActors_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ATestTemplateActor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATestTemplateActor_Statics::NewProp_ListOfActors_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATestTemplateActor_Statics::NewProp_ListOfActors,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ATestTemplateActor_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ATestTemplateActor_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_UTHUB_CPP2024,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ATestTemplateActor_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ATestTemplateActor_Statics::ClassParams = {
	&ATestTemplateActor::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_ATestTemplateActor_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_ATestTemplateActor_Statics::PropPointers),
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
template<> UTHUB_CPP2024_API UClass* StaticClass<ATestTemplateActor>()
{
	return ATestTemplateActor::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ATestTemplateActor);
ATestTemplateActor::~ATestTemplateActor() {}
// End Class ATestTemplateActor

// Begin Registration
struct Z_CompiledInDeferFile_FID_Proyectos_UT_HUB_Tercero_CMasMas_CPP_2024_Source_UTHUB_CPP2024_Public_TestTemplateActor_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ATestTemplateActor, ATestTemplateActor::StaticClass, TEXT("ATestTemplateActor"), &Z_Registration_Info_UClass_ATestTemplateActor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ATestTemplateActor), 2805395414U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Proyectos_UT_HUB_Tercero_CMasMas_CPP_2024_Source_UTHUB_CPP2024_Public_TestTemplateActor_h_52574596(TEXT("/Script/UTHUB_CPP2024"),
	Z_CompiledInDeferFile_FID_Proyectos_UT_HUB_Tercero_CMasMas_CPP_2024_Source_UTHUB_CPP2024_Public_TestTemplateActor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Proyectos_UT_HUB_Tercero_CMasMas_CPP_2024_Source_UTHUB_CPP2024_Public_TestTemplateActor_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
