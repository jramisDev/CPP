// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UTHUB_CPP2024/Public/Subsistemas/AttributeSubsystem.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAttributeSubsystem() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
ENGINE_API UClass* Z_Construct_UClass_UWorldSubsystem();
UPackage* Z_Construct_UPackage__Script_UTHUB_CPP2024();
UTHUB_CPP2024_API UClass* Z_Construct_UClass_UAttributeComponent();
UTHUB_CPP2024_API UClass* Z_Construct_UClass_UAttributeComponent_NoRegister();
UTHUB_CPP2024_API UClass* Z_Construct_UClass_UAttributeSubsystem();
UTHUB_CPP2024_API UClass* Z_Construct_UClass_UAttributeSubsystem_NoRegister();
UTHUB_CPP2024_API UFunction* Z_Construct_UDelegateFunction_UTHUB_CPP2024_OnAttributeChanged__DelegateSignature();
UTHUB_CPP2024_API UFunction* Z_Construct_UDelegateFunction_UTHUB_CPP2024_OnAttrOwnerRegistered__DelegateSignature();
// End Cross Module References

// Begin Delegate FOnAttrOwnerRegistered
struct Z_Construct_UDelegateFunction_UTHUB_CPP2024_OnAttrOwnerRegistered__DelegateSignature_Statics
{
	struct _Script_UTHUB_CPP2024_eventOnAttrOwnerRegistered_Parms
	{
		AActor* RegActor;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Subsistemas/AttributeSubsystem.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_RegActor;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_UTHUB_CPP2024_OnAttrOwnerRegistered__DelegateSignature_Statics::NewProp_RegActor = { "RegActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_UTHUB_CPP2024_eventOnAttrOwnerRegistered_Parms, RegActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_UTHUB_CPP2024_OnAttrOwnerRegistered__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UTHUB_CPP2024_OnAttrOwnerRegistered__DelegateSignature_Statics::NewProp_RegActor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UTHUB_CPP2024_OnAttrOwnerRegistered__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UTHUB_CPP2024_OnAttrOwnerRegistered__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_UTHUB_CPP2024, nullptr, "OnAttrOwnerRegistered__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_UTHUB_CPP2024_OnAttrOwnerRegistered__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UTHUB_CPP2024_OnAttrOwnerRegistered__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_UTHUB_CPP2024_OnAttrOwnerRegistered__DelegateSignature_Statics::_Script_UTHUB_CPP2024_eventOnAttrOwnerRegistered_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UTHUB_CPP2024_OnAttrOwnerRegistered__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_UTHUB_CPP2024_OnAttrOwnerRegistered__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_UTHUB_CPP2024_OnAttrOwnerRegistered__DelegateSignature_Statics::_Script_UTHUB_CPP2024_eventOnAttrOwnerRegistered_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_UTHUB_CPP2024_OnAttrOwnerRegistered__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_UTHUB_CPP2024_OnAttrOwnerRegistered__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnAttrOwnerRegistered_DelegateWrapper(const FMulticastScriptDelegate& OnAttrOwnerRegistered, AActor* RegActor)
{
	struct _Script_UTHUB_CPP2024_eventOnAttrOwnerRegistered_Parms
	{
		AActor* RegActor;
	};
	_Script_UTHUB_CPP2024_eventOnAttrOwnerRegistered_Parms Parms;
	Parms.RegActor=RegActor;
	OnAttrOwnerRegistered.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FOnAttrOwnerRegistered

// Begin Delegate FOnAttributeChanged
struct Z_Construct_UDelegateFunction_UTHUB_CPP2024_OnAttributeChanged__DelegateSignature_Statics
{
	struct _Script_UTHUB_CPP2024_eventOnAttributeChanged_Parms
	{
		AActor* AttrOwner;
		FName InAttrName;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Subsistemas/AttributeSubsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InAttrName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AttrOwner;
	static const UECodeGen_Private::FNamePropertyParams NewProp_InAttrName;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_UTHUB_CPP2024_OnAttributeChanged__DelegateSignature_Statics::NewProp_AttrOwner = { "AttrOwner", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_UTHUB_CPP2024_eventOnAttributeChanged_Parms, AttrOwner), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UDelegateFunction_UTHUB_CPP2024_OnAttributeChanged__DelegateSignature_Statics::NewProp_InAttrName = { "InAttrName", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_UTHUB_CPP2024_eventOnAttributeChanged_Parms, InAttrName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InAttrName_MetaData), NewProp_InAttrName_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_UTHUB_CPP2024_OnAttributeChanged__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UTHUB_CPP2024_OnAttributeChanged__DelegateSignature_Statics::NewProp_AttrOwner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UTHUB_CPP2024_OnAttributeChanged__DelegateSignature_Statics::NewProp_InAttrName,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UTHUB_CPP2024_OnAttributeChanged__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UTHUB_CPP2024_OnAttributeChanged__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_UTHUB_CPP2024, nullptr, "OnAttributeChanged__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_UTHUB_CPP2024_OnAttributeChanged__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UTHUB_CPP2024_OnAttributeChanged__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_UTHUB_CPP2024_OnAttributeChanged__DelegateSignature_Statics::_Script_UTHUB_CPP2024_eventOnAttributeChanged_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UTHUB_CPP2024_OnAttributeChanged__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_UTHUB_CPP2024_OnAttributeChanged__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_UTHUB_CPP2024_OnAttributeChanged__DelegateSignature_Statics::_Script_UTHUB_CPP2024_eventOnAttributeChanged_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_UTHUB_CPP2024_OnAttributeChanged__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_UTHUB_CPP2024_OnAttributeChanged__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnAttributeChanged_DelegateWrapper(const FMulticastScriptDelegate& OnAttributeChanged, AActor* AttrOwner, FName const& InAttrName)
{
	struct _Script_UTHUB_CPP2024_eventOnAttributeChanged_Parms
	{
		AActor* AttrOwner;
		FName InAttrName;
	};
	_Script_UTHUB_CPP2024_eventOnAttributeChanged_Parms Parms;
	Parms.AttrOwner=AttrOwner;
	Parms.InAttrName=InAttrName;
	OnAttributeChanged.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FOnAttributeChanged

// Begin Class UAttributeComponent
void UAttributeComponent::StaticRegisterNativesUAttributeComponent()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAttributeComponent);
UClass* Z_Construct_UClass_UAttributeComponent_NoRegister()
{
	return UAttributeComponent::StaticClass();
}
struct Z_Construct_UClass_UAttributeComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "IncludePath", "Subsistemas/AttributeSubsystem.h" },
		{ "ModuleRelativePath", "Public/Subsistemas/AttributeSubsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnAttributeChanged_MetaData[] = {
		{ "ModuleRelativePath", "Public/Subsistemas/AttributeSubsystem.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnAttributeChanged;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAttributeComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UAttributeComponent_Statics::NewProp_OnAttributeChanged = { "OnAttributeChanged", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAttributeComponent, OnAttributeChanged), Z_Construct_UDelegateFunction_UTHUB_CPP2024_OnAttributeChanged__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnAttributeChanged_MetaData), NewProp_OnAttributeChanged_MetaData) }; // 4007025288
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAttributeComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAttributeComponent_Statics::NewProp_OnAttributeChanged,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAttributeComponent_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UAttributeComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UActorComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_UTHUB_CPP2024,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAttributeComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UAttributeComponent_Statics::ClassParams = {
	&UAttributeComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UAttributeComponent_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UAttributeComponent_Statics::PropPointers),
	0,
	0x00A000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAttributeComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UAttributeComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UAttributeComponent()
{
	if (!Z_Registration_Info_UClass_UAttributeComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAttributeComponent.OuterSingleton, Z_Construct_UClass_UAttributeComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UAttributeComponent.OuterSingleton;
}
template<> UTHUB_CPP2024_API UClass* StaticClass<UAttributeComponent>()
{
	return UAttributeComponent::StaticClass();
}
UAttributeComponent::UAttributeComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UAttributeComponent);
UAttributeComponent::~UAttributeComponent() {}
// End Class UAttributeComponent

// Begin Class UAttributeSubsystem Function AddAttrToActor
struct Z_Construct_UFunction_UAttributeSubsystem_AddAttrToActor_Statics
{
	struct AttributeSubsystem_eventAddAttrToActor_Parms
	{
		AActor* InActor;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Subsistemas/AttributeSubsystem.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InActor;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAttributeSubsystem_AddAttrToActor_Statics::NewProp_InActor = { "InActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AttributeSubsystem_eventAddAttrToActor_Parms, InActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAttributeSubsystem_AddAttrToActor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAttributeSubsystem_AddAttrToActor_Statics::NewProp_InActor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAttributeSubsystem_AddAttrToActor_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAttributeSubsystem_AddAttrToActor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAttributeSubsystem, nullptr, "AddAttrToActor", nullptr, nullptr, Z_Construct_UFunction_UAttributeSubsystem_AddAttrToActor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAttributeSubsystem_AddAttrToActor_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAttributeSubsystem_AddAttrToActor_Statics::AttributeSubsystem_eventAddAttrToActor_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAttributeSubsystem_AddAttrToActor_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAttributeSubsystem_AddAttrToActor_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAttributeSubsystem_AddAttrToActor_Statics::AttributeSubsystem_eventAddAttrToActor_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAttributeSubsystem_AddAttrToActor()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAttributeSubsystem_AddAttrToActor_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAttributeSubsystem::execAddAttrToActor)
{
	P_GET_OBJECT(AActor,Z_Param_InActor);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->AddAttrToActor(Z_Param_InActor);
	P_NATIVE_END;
}
// End Class UAttributeSubsystem Function AddAttrToActor

// Begin Class UAttributeSubsystem Function GetActorsWithAttributes
struct Z_Construct_UFunction_UAttributeSubsystem_GetActorsWithAttributes_Statics
{
	struct AttributeSubsystem_eventGetActorsWithAttributes_Parms
	{
		TArray<AActor*> OutActors;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Subsistemas/AttributeSubsystem.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OutActors_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_OutActors;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAttributeSubsystem_GetActorsWithAttributes_Statics::NewProp_OutActors_Inner = { "OutActors", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UAttributeSubsystem_GetActorsWithAttributes_Statics::NewProp_OutActors = { "OutActors", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AttributeSubsystem_eventGetActorsWithAttributes_Parms, OutActors), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAttributeSubsystem_GetActorsWithAttributes_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAttributeSubsystem_GetActorsWithAttributes_Statics::NewProp_OutActors_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAttributeSubsystem_GetActorsWithAttributes_Statics::NewProp_OutActors,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAttributeSubsystem_GetActorsWithAttributes_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAttributeSubsystem_GetActorsWithAttributes_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAttributeSubsystem, nullptr, "GetActorsWithAttributes", nullptr, nullptr, Z_Construct_UFunction_UAttributeSubsystem_GetActorsWithAttributes_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAttributeSubsystem_GetActorsWithAttributes_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAttributeSubsystem_GetActorsWithAttributes_Statics::AttributeSubsystem_eventGetActorsWithAttributes_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAttributeSubsystem_GetActorsWithAttributes_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAttributeSubsystem_GetActorsWithAttributes_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAttributeSubsystem_GetActorsWithAttributes_Statics::AttributeSubsystem_eventGetActorsWithAttributes_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAttributeSubsystem_GetActorsWithAttributes()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAttributeSubsystem_GetActorsWithAttributes_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAttributeSubsystem::execGetActorsWithAttributes)
{
	P_GET_TARRAY_REF(AActor*,Z_Param_Out_OutActors);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->GetActorsWithAttributes(Z_Param_Out_OutActors);
	P_NATIVE_END;
}
// End Class UAttributeSubsystem Function GetActorsWithAttributes

// Begin Class UAttributeSubsystem Function ModifyAttributeFromActor
struct Z_Construct_UFunction_UAttributeSubsystem_ModifyAttributeFromActor_Statics
{
	struct AttributeSubsystem_eventModifyAttributeFromActor_Parms
	{
		AActor* InActor;
		FName InAttrName;
		float InValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Subsistemas/AttributeSubsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InAttrName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InActor;
	static const UECodeGen_Private::FNamePropertyParams NewProp_InAttrName;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_InValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAttributeSubsystem_ModifyAttributeFromActor_Statics::NewProp_InActor = { "InActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AttributeSubsystem_eventModifyAttributeFromActor_Parms, InActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UAttributeSubsystem_ModifyAttributeFromActor_Statics::NewProp_InAttrName = { "InAttrName", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AttributeSubsystem_eventModifyAttributeFromActor_Parms, InAttrName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InAttrName_MetaData), NewProp_InAttrName_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAttributeSubsystem_ModifyAttributeFromActor_Statics::NewProp_InValue = { "InValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AttributeSubsystem_eventModifyAttributeFromActor_Parms, InValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAttributeSubsystem_ModifyAttributeFromActor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAttributeSubsystem_ModifyAttributeFromActor_Statics::NewProp_InActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAttributeSubsystem_ModifyAttributeFromActor_Statics::NewProp_InAttrName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAttributeSubsystem_ModifyAttributeFromActor_Statics::NewProp_InValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAttributeSubsystem_ModifyAttributeFromActor_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAttributeSubsystem_ModifyAttributeFromActor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAttributeSubsystem, nullptr, "ModifyAttributeFromActor", nullptr, nullptr, Z_Construct_UFunction_UAttributeSubsystem_ModifyAttributeFromActor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAttributeSubsystem_ModifyAttributeFromActor_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAttributeSubsystem_ModifyAttributeFromActor_Statics::AttributeSubsystem_eventModifyAttributeFromActor_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAttributeSubsystem_ModifyAttributeFromActor_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAttributeSubsystem_ModifyAttributeFromActor_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAttributeSubsystem_ModifyAttributeFromActor_Statics::AttributeSubsystem_eventModifyAttributeFromActor_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAttributeSubsystem_ModifyAttributeFromActor()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAttributeSubsystem_ModifyAttributeFromActor_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAttributeSubsystem::execModifyAttributeFromActor)
{
	P_GET_OBJECT(AActor,Z_Param_InActor);
	P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_InAttrName);
	P_GET_PROPERTY(FFloatProperty,Z_Param_InValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ModifyAttributeFromActor(Z_Param_InActor,Z_Param_Out_InAttrName,Z_Param_InValue);
	P_NATIVE_END;
}
// End Class UAttributeSubsystem Function ModifyAttributeFromActor

// Begin Class UAttributeSubsystem
void UAttributeSubsystem::StaticRegisterNativesUAttributeSubsystem()
{
	UClass* Class = UAttributeSubsystem::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "AddAttrToActor", &UAttributeSubsystem::execAddAttrToActor },
		{ "GetActorsWithAttributes", &UAttributeSubsystem::execGetActorsWithAttributes },
		{ "ModifyAttributeFromActor", &UAttributeSubsystem::execModifyAttributeFromActor },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAttributeSubsystem);
UClass* Z_Construct_UClass_UAttributeSubsystem_NoRegister()
{
	return UAttributeSubsystem::StaticClass();
}
struct Z_Construct_UClass_UAttributeSubsystem_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Subsistemas/AttributeSubsystem.h" },
		{ "ModuleRelativePath", "Public/Subsistemas/AttributeSubsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnAttrOwnerRegistered_MetaData[] = {
		{ "ModuleRelativePath", "Public/Subsistemas/AttributeSubsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnAttributeChanged_MetaData[] = {
		{ "ModuleRelativePath", "Public/Subsistemas/AttributeSubsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RegisteredAttrOwners_MetaData[] = {
		{ "Category", "AttributeSubsystem" },
		{ "ModuleRelativePath", "Public/Subsistemas/AttributeSubsystem.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnAttrOwnerRegistered;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnAttributeChanged;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_RegisteredAttrOwners_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_RegisteredAttrOwners;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UAttributeSubsystem_AddAttrToActor, "AddAttrToActor" }, // 2820075650
		{ &Z_Construct_UFunction_UAttributeSubsystem_GetActorsWithAttributes, "GetActorsWithAttributes" }, // 1971397334
		{ &Z_Construct_UFunction_UAttributeSubsystem_ModifyAttributeFromActor, "ModifyAttributeFromActor" }, // 768521947
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAttributeSubsystem>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UAttributeSubsystem_Statics::NewProp_OnAttrOwnerRegistered = { "OnAttrOwnerRegistered", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAttributeSubsystem, OnAttrOwnerRegistered), Z_Construct_UDelegateFunction_UTHUB_CPP2024_OnAttrOwnerRegistered__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnAttrOwnerRegistered_MetaData), NewProp_OnAttrOwnerRegistered_MetaData) }; // 3801643997
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UAttributeSubsystem_Statics::NewProp_OnAttributeChanged = { "OnAttributeChanged", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAttributeSubsystem, OnAttributeChanged), Z_Construct_UDelegateFunction_UTHUB_CPP2024_OnAttributeChanged__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnAttributeChanged_MetaData), NewProp_OnAttributeChanged_MetaData) }; // 4007025288
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAttributeSubsystem_Statics::NewProp_RegisteredAttrOwners_Inner = { "RegisteredAttrOwners", nullptr, (EPropertyFlags)0x0000000000020000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UAttributeSubsystem_Statics::NewProp_RegisteredAttrOwners = { "RegisteredAttrOwners", nullptr, (EPropertyFlags)0x0040000000020001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAttributeSubsystem, RegisteredAttrOwners), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RegisteredAttrOwners_MetaData), NewProp_RegisteredAttrOwners_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAttributeSubsystem_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAttributeSubsystem_Statics::NewProp_OnAttrOwnerRegistered,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAttributeSubsystem_Statics::NewProp_OnAttributeChanged,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAttributeSubsystem_Statics::NewProp_RegisteredAttrOwners_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAttributeSubsystem_Statics::NewProp_RegisteredAttrOwners,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAttributeSubsystem_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UAttributeSubsystem_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UWorldSubsystem,
	(UObject* (*)())Z_Construct_UPackage__Script_UTHUB_CPP2024,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAttributeSubsystem_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UAttributeSubsystem_Statics::ClassParams = {
	&UAttributeSubsystem::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UAttributeSubsystem_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UAttributeSubsystem_Statics::PropPointers),
	0,
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAttributeSubsystem_Statics::Class_MetaDataParams), Z_Construct_UClass_UAttributeSubsystem_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UAttributeSubsystem()
{
	if (!Z_Registration_Info_UClass_UAttributeSubsystem.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAttributeSubsystem.OuterSingleton, Z_Construct_UClass_UAttributeSubsystem_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UAttributeSubsystem.OuterSingleton;
}
template<> UTHUB_CPP2024_API UClass* StaticClass<UAttributeSubsystem>()
{
	return UAttributeSubsystem::StaticClass();
}
UAttributeSubsystem::UAttributeSubsystem() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UAttributeSubsystem);
UAttributeSubsystem::~UAttributeSubsystem() {}
// End Class UAttributeSubsystem

// Begin Registration
struct Z_CompiledInDeferFile_FID_Proyectos_UT_HUB_Tercero_CMasMas_CPP_2024_Source_UTHUB_CPP2024_Public_Subsistemas_AttributeSubsystem_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UAttributeComponent, UAttributeComponent::StaticClass, TEXT("UAttributeComponent"), &Z_Registration_Info_UClass_UAttributeComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAttributeComponent), 4136689314U) },
		{ Z_Construct_UClass_UAttributeSubsystem, UAttributeSubsystem::StaticClass, TEXT("UAttributeSubsystem"), &Z_Registration_Info_UClass_UAttributeSubsystem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAttributeSubsystem), 2492901288U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Proyectos_UT_HUB_Tercero_CMasMas_CPP_2024_Source_UTHUB_CPP2024_Public_Subsistemas_AttributeSubsystem_h_386661015(TEXT("/Script/UTHUB_CPP2024"),
	Z_CompiledInDeferFile_FID_Proyectos_UT_HUB_Tercero_CMasMas_CPP_2024_Source_UTHUB_CPP2024_Public_Subsistemas_AttributeSubsystem_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Proyectos_UT_HUB_Tercero_CMasMas_CPP_2024_Source_UTHUB_CPP2024_Public_Subsistemas_AttributeSubsystem_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
