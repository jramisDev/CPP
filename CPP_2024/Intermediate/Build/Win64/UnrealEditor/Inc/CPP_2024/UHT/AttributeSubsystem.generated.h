// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Subsystems/AttributeSubsystem.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
#ifdef CPP_2024_AttributeSubsystem_generated_h
#error "AttributeSubsystem.generated.h already included, missing '#pragma once' in AttributeSubsystem.h"
#endif
#define CPP_2024_AttributeSubsystem_generated_h

#define FID_Proyectos_UT_HUB_Tercero_CMasMas_CPP_2024_Source_CPP_2024_Public_Subsystems_AttributeSubsystem_h_7_DELEGATE \
CPP_2024_API void FOnAttributeOwnerRegistered_DelegateWrapper(const FMulticastScriptDelegate& OnAttributeOwnerRegistered, AActor* RegActor);


#define FID_Proyectos_UT_HUB_Tercero_CMasMas_CPP_2024_Source_CPP_2024_Public_Subsystems_AttributeSubsystem_h_8_DELEGATE \
CPP_2024_API void FOnAttributeChange_DelegateWrapper(const FMulticastScriptDelegate& OnAttributeChange, AActor* AttrOwner, FName const& InAttrName);


#define FID_Proyectos_UT_HUB_Tercero_CMasMas_CPP_2024_Source_CPP_2024_Public_Subsystems_AttributeSubsystem_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAttributeComponent(); \
	friend struct Z_Construct_UClass_UAttributeComponent_Statics; \
public: \
	DECLARE_CLASS(UAttributeComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/CPP_2024"), NO_API) \
	DECLARE_SERIALIZER(UAttributeComponent)


#define FID_Proyectos_UT_HUB_Tercero_CMasMas_CPP_2024_Source_CPP_2024_Public_Subsystems_AttributeSubsystem_h_13_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAttributeComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UAttributeComponent(UAttributeComponent&&); \
	UAttributeComponent(const UAttributeComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAttributeComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAttributeComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAttributeComponent) \
	NO_API virtual ~UAttributeComponent();


#define FID_Proyectos_UT_HUB_Tercero_CMasMas_CPP_2024_Source_CPP_2024_Public_Subsystems_AttributeSubsystem_h_10_PROLOG
#define FID_Proyectos_UT_HUB_Tercero_CMasMas_CPP_2024_Source_CPP_2024_Public_Subsystems_AttributeSubsystem_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Proyectos_UT_HUB_Tercero_CMasMas_CPP_2024_Source_CPP_2024_Public_Subsystems_AttributeSubsystem_h_13_INCLASS_NO_PURE_DECLS \
	FID_Proyectos_UT_HUB_Tercero_CMasMas_CPP_2024_Source_CPP_2024_Public_Subsystems_AttributeSubsystem_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CPP_2024_API UClass* StaticClass<class UAttributeComponent>();

#define FID_Proyectos_UT_HUB_Tercero_CMasMas_CPP_2024_Source_CPP_2024_Public_Subsystems_AttributeSubsystem_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execAddAttrToActor); \
	DECLARE_FUNCTION(execModifyAttributeFromActor); \
	DECLARE_FUNCTION(execGetActorWithAttributes);


#define FID_Proyectos_UT_HUB_Tercero_CMasMas_CPP_2024_Source_CPP_2024_Public_Subsystems_AttributeSubsystem_h_24_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAttributeSubsystem(); \
	friend struct Z_Construct_UClass_UAttributeSubsystem_Statics; \
public: \
	DECLARE_CLASS(UAttributeSubsystem, UWorldSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/CPP_2024"), NO_API) \
	DECLARE_SERIALIZER(UAttributeSubsystem)


#define FID_Proyectos_UT_HUB_Tercero_CMasMas_CPP_2024_Source_CPP_2024_Public_Subsystems_AttributeSubsystem_h_24_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAttributeSubsystem(); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UAttributeSubsystem(UAttributeSubsystem&&); \
	UAttributeSubsystem(const UAttributeSubsystem&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAttributeSubsystem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAttributeSubsystem); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UAttributeSubsystem) \
	NO_API virtual ~UAttributeSubsystem();


#define FID_Proyectos_UT_HUB_Tercero_CMasMas_CPP_2024_Source_CPP_2024_Public_Subsystems_AttributeSubsystem_h_21_PROLOG
#define FID_Proyectos_UT_HUB_Tercero_CMasMas_CPP_2024_Source_CPP_2024_Public_Subsystems_AttributeSubsystem_h_24_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Proyectos_UT_HUB_Tercero_CMasMas_CPP_2024_Source_CPP_2024_Public_Subsystems_AttributeSubsystem_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Proyectos_UT_HUB_Tercero_CMasMas_CPP_2024_Source_CPP_2024_Public_Subsystems_AttributeSubsystem_h_24_INCLASS_NO_PURE_DECLS \
	FID_Proyectos_UT_HUB_Tercero_CMasMas_CPP_2024_Source_CPP_2024_Public_Subsystems_AttributeSubsystem_h_24_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CPP_2024_API UClass* StaticClass<class UAttributeSubsystem>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Proyectos_UT_HUB_Tercero_CMasMas_CPP_2024_Source_CPP_2024_Public_Subsystems_AttributeSubsystem_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
