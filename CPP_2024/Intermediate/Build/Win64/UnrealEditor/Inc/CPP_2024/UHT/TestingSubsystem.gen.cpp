// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CPP_2024/Public/Subsystems/TestingSubsystem.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTestingSubsystem() {}

// Begin Cross Module References
CPP_2024_API UClass* Z_Construct_UClass_UTestingSubsystem();
CPP_2024_API UClass* Z_Construct_UClass_UTestingSubsystem_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UWorldSubsystem();
UPackage* Z_Construct_UPackage__Script_CPP_2024();
// End Cross Module References

// Begin Class UTestingSubsystem Function AddPendingMsg
struct Z_Construct_UFunction_UTestingSubsystem_AddPendingMsg_Statics
{
	struct TestingSubsystem_eventAddPendingMsg_Parms
	{
		FText InMsg;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Subsystems/TestingSubsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InMsg_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FTextPropertyParams NewProp_InMsg;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UTestingSubsystem_AddPendingMsg_Statics::NewProp_InMsg = { "InMsg", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TestingSubsystem_eventAddPendingMsg_Parms, InMsg), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InMsg_MetaData), NewProp_InMsg_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTestingSubsystem_AddPendingMsg_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTestingSubsystem_AddPendingMsg_Statics::NewProp_InMsg,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UTestingSubsystem_AddPendingMsg_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTestingSubsystem_AddPendingMsg_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTestingSubsystem, nullptr, "AddPendingMsg", nullptr, nullptr, Z_Construct_UFunction_UTestingSubsystem_AddPendingMsg_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTestingSubsystem_AddPendingMsg_Statics::PropPointers), sizeof(Z_Construct_UFunction_UTestingSubsystem_AddPendingMsg_Statics::TestingSubsystem_eventAddPendingMsg_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UTestingSubsystem_AddPendingMsg_Statics::Function_MetaDataParams), Z_Construct_UFunction_UTestingSubsystem_AddPendingMsg_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UTestingSubsystem_AddPendingMsg_Statics::TestingSubsystem_eventAddPendingMsg_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UTestingSubsystem_AddPendingMsg()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTestingSubsystem_AddPendingMsg_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UTestingSubsystem::execAddPendingMsg)
{
	P_GET_PROPERTY_REF(FTextProperty,Z_Param_Out_InMsg);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->AddPendingMsg(Z_Param_Out_InMsg);
	P_NATIVE_END;
}
// End Class UTestingSubsystem Function AddPendingMsg

// Begin Class UTestingSubsystem Function DoSomeThing
struct Z_Construct_UFunction_UTestingSubsystem_DoSomeThing_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Subsystems/TestingSubsystem.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTestingSubsystem_DoSomeThing_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTestingSubsystem, nullptr, "DoSomeThing", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UTestingSubsystem_DoSomeThing_Statics::Function_MetaDataParams), Z_Construct_UFunction_UTestingSubsystem_DoSomeThing_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UTestingSubsystem_DoSomeThing()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTestingSubsystem_DoSomeThing_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UTestingSubsystem::execDoSomeThing)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->DoSomeThing();
	P_NATIVE_END;
}
// End Class UTestingSubsystem Function DoSomeThing

// Begin Class UTestingSubsystem Function PublishNextMsg
struct Z_Construct_UFunction_UTestingSubsystem_PublishNextMsg_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Subsystems/TestingSubsystem.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTestingSubsystem_PublishNextMsg_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTestingSubsystem, nullptr, "PublishNextMsg", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UTestingSubsystem_PublishNextMsg_Statics::Function_MetaDataParams), Z_Construct_UFunction_UTestingSubsystem_PublishNextMsg_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UTestingSubsystem_PublishNextMsg()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTestingSubsystem_PublishNextMsg_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UTestingSubsystem::execPublishNextMsg)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->PublishNextMsg();
	P_NATIVE_END;
}
// End Class UTestingSubsystem Function PublishNextMsg

// Begin Class UTestingSubsystem
void UTestingSubsystem::StaticRegisterNativesUTestingSubsystem()
{
	UClass* Class = UTestingSubsystem::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "AddPendingMsg", &UTestingSubsystem::execAddPendingMsg },
		{ "DoSomeThing", &UTestingSubsystem::execDoSomeThing },
		{ "PublishNextMsg", &UTestingSubsystem::execPublishNextMsg },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UTestingSubsystem);
UClass* Z_Construct_UClass_UTestingSubsystem_NoRegister()
{
	return UTestingSubsystem::StaticClass();
}
struct Z_Construct_UClass_UTestingSubsystem_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Subsystems/TestingSubsystem.h" },
		{ "ModuleRelativePath", "Public/Subsystems/TestingSubsystem.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UTestingSubsystem_AddPendingMsg, "AddPendingMsg" }, // 2283416802
		{ &Z_Construct_UFunction_UTestingSubsystem_DoSomeThing, "DoSomeThing" }, // 3290251493
		{ &Z_Construct_UFunction_UTestingSubsystem_PublishNextMsg, "PublishNextMsg" }, // 343413754
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTestingSubsystem>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UTestingSubsystem_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UWorldSubsystem,
	(UObject* (*)())Z_Construct_UPackage__Script_CPP_2024,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UTestingSubsystem_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UTestingSubsystem_Statics::ClassParams = {
	&UTestingSubsystem::StaticClass,
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
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UTestingSubsystem_Statics::Class_MetaDataParams), Z_Construct_UClass_UTestingSubsystem_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UTestingSubsystem()
{
	if (!Z_Registration_Info_UClass_UTestingSubsystem.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UTestingSubsystem.OuterSingleton, Z_Construct_UClass_UTestingSubsystem_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UTestingSubsystem.OuterSingleton;
}
template<> CPP_2024_API UClass* StaticClass<UTestingSubsystem>()
{
	return UTestingSubsystem::StaticClass();
}
UTestingSubsystem::UTestingSubsystem() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UTestingSubsystem);
UTestingSubsystem::~UTestingSubsystem() {}
// End Class UTestingSubsystem

// Begin Registration
struct Z_CompiledInDeferFile_FID_Proyectos_UT_HUB_Tercero_CMasMas_CPP_2024_Source_CPP_2024_Public_Subsystems_TestingSubsystem_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UTestingSubsystem, UTestingSubsystem::StaticClass, TEXT("UTestingSubsystem"), &Z_Registration_Info_UClass_UTestingSubsystem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UTestingSubsystem), 942163815U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Proyectos_UT_HUB_Tercero_CMasMas_CPP_2024_Source_CPP_2024_Public_Subsystems_TestingSubsystem_h_2609892083(TEXT("/Script/CPP_2024"),
	Z_CompiledInDeferFile_FID_Proyectos_UT_HUB_Tercero_CMasMas_CPP_2024_Source_CPP_2024_Public_Subsystems_TestingSubsystem_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Proyectos_UT_HUB_Tercero_CMasMas_CPP_2024_Source_CPP_2024_Public_Subsystems_TestingSubsystem_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
