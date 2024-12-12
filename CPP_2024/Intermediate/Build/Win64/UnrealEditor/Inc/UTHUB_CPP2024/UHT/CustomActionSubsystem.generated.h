// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Subsistemas/ActionSystem/CustomActionSubsystem.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UCustomActionBase;
class UCustomActionSubsystem;
class UObject;
#ifdef UTHUB_CPP2024_CustomActionSubsystem_generated_h
#error "CustomActionSubsystem.generated.h already included, missing '#pragma once' in CustomActionSubsystem.h"
#endif
#define UTHUB_CPP2024_CustomActionSubsystem_generated_h

#define FID_Proyectos_UT_HUB_Tercero_CMasMas_CPP_2024_Source_UTHUB_CPP2024_Public_Subsistemas_ActionSystem_CustomActionSubsystem_h_12_DELEGATE \
UTHUB_CPP2024_API void FOnActionEvent_DelegateWrapper(const FMulticastScriptDelegate& OnActionEvent, AActor* ActionInstigator, TSubclassOf<UCustomActionBase> Action);


#define FID_Proyectos_UT_HUB_Tercero_CMasMas_CPP_2024_Source_UTHUB_CPP2024_Public_Subsistemas_ActionSystem_CustomActionSubsystem_h_79_DELEGATE \
static void FSingleActionEvent_DelegateWrapper(const FScriptDelegate& SingleActionEvent, AActor* ActionInstigator, TSubclassOf<UCustomActionBase> Action);


#define FID_Proyectos_UT_HUB_Tercero_CMasMas_CPP_2024_Source_UTHUB_CPP2024_Public_Subsistemas_ActionSystem_CustomActionSubsystem_h_59_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execExecuteMassiveAction); \
	DECLARE_FUNCTION(execRemoveActionFromActor); \
	DECLARE_FUNCTION(execAddActionToActor); \
	DECLARE_FUNCTION(execStopCurrentAction); \
	DECLARE_FUNCTION(execDoActionAndWait); \
	DECLARE_FUNCTION(execDoActionSequence); \
	DECLARE_FUNCTION(execDoAction); \
	DECLARE_FUNCTION(execGetActionSubsystem);


#define FID_Proyectos_UT_HUB_Tercero_CMasMas_CPP_2024_Source_UTHUB_CPP2024_Public_Subsistemas_ActionSystem_CustomActionSubsystem_h_59_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCustomActionSubsystem(); \
	friend struct Z_Construct_UClass_UCustomActionSubsystem_Statics; \
public: \
	DECLARE_CLASS(UCustomActionSubsystem, UWorldSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UTHUB_CPP2024"), NO_API) \
	DECLARE_SERIALIZER(UCustomActionSubsystem)


#define FID_Proyectos_UT_HUB_Tercero_CMasMas_CPP_2024_Source_UTHUB_CPP2024_Public_Subsistemas_ActionSystem_CustomActionSubsystem_h_59_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCustomActionSubsystem(); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UCustomActionSubsystem(UCustomActionSubsystem&&); \
	UCustomActionSubsystem(const UCustomActionSubsystem&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCustomActionSubsystem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCustomActionSubsystem); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UCustomActionSubsystem) \
	NO_API virtual ~UCustomActionSubsystem();


#define FID_Proyectos_UT_HUB_Tercero_CMasMas_CPP_2024_Source_UTHUB_CPP2024_Public_Subsistemas_ActionSystem_CustomActionSubsystem_h_56_PROLOG
#define FID_Proyectos_UT_HUB_Tercero_CMasMas_CPP_2024_Source_UTHUB_CPP2024_Public_Subsistemas_ActionSystem_CustomActionSubsystem_h_59_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Proyectos_UT_HUB_Tercero_CMasMas_CPP_2024_Source_UTHUB_CPP2024_Public_Subsistemas_ActionSystem_CustomActionSubsystem_h_59_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Proyectos_UT_HUB_Tercero_CMasMas_CPP_2024_Source_UTHUB_CPP2024_Public_Subsistemas_ActionSystem_CustomActionSubsystem_h_59_INCLASS_NO_PURE_DECLS \
	FID_Proyectos_UT_HUB_Tercero_CMasMas_CPP_2024_Source_UTHUB_CPP2024_Public_Subsistemas_ActionSystem_CustomActionSubsystem_h_59_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> UTHUB_CPP2024_API UClass* StaticClass<class UCustomActionSubsystem>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Proyectos_UT_HUB_Tercero_CMasMas_CPP_2024_Source_UTHUB_CPP2024_Public_Subsistemas_ActionSystem_CustomActionSubsystem_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
