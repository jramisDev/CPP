// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Predicates/GenericUtils.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UActorComponent;
class UInputAction;
class UObject;
#ifdef UTHUB_CPP2024_GenericUtils_generated_h
#error "GenericUtils.generated.h already included, missing '#pragma once' in GenericUtils.h"
#endif
#define UTHUB_CPP2024_GenericUtils_generated_h

#define FID_Proyectos_UT_HUB_Tercero_CMasMas_CPP_2024_Source_UTHUB_CPP2024_Public_Predicates_GenericUtils_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetAllActorsOfClasses); \
	DECLARE_FUNCTION(execHasAction); \
	DECLARE_FUNCTION(execDoesAnyActorHaveComponent); \
	DECLARE_FUNCTION(execIsThereAnyActorCloseToMe);


#define FID_Proyectos_UT_HUB_Tercero_CMasMas_CPP_2024_Source_UTHUB_CPP2024_Public_Predicates_GenericUtils_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGenericUtils(); \
	friend struct Z_Construct_UClass_UGenericUtils_Statics; \
public: \
	DECLARE_CLASS(UGenericUtils, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UTHUB_CPP2024"), NO_API) \
	DECLARE_SERIALIZER(UGenericUtils)


#define FID_Proyectos_UT_HUB_Tercero_CMasMas_CPP_2024_Source_UTHUB_CPP2024_Public_Predicates_GenericUtils_h_16_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGenericUtils(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UGenericUtils(UGenericUtils&&); \
	UGenericUtils(const UGenericUtils&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGenericUtils); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGenericUtils); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGenericUtils) \
	NO_API virtual ~UGenericUtils();


#define FID_Proyectos_UT_HUB_Tercero_CMasMas_CPP_2024_Source_UTHUB_CPP2024_Public_Predicates_GenericUtils_h_13_PROLOG
#define FID_Proyectos_UT_HUB_Tercero_CMasMas_CPP_2024_Source_UTHUB_CPP2024_Public_Predicates_GenericUtils_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Proyectos_UT_HUB_Tercero_CMasMas_CPP_2024_Source_UTHUB_CPP2024_Public_Predicates_GenericUtils_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Proyectos_UT_HUB_Tercero_CMasMas_CPP_2024_Source_UTHUB_CPP2024_Public_Predicates_GenericUtils_h_16_INCLASS_NO_PURE_DECLS \
	FID_Proyectos_UT_HUB_Tercero_CMasMas_CPP_2024_Source_UTHUB_CPP2024_Public_Predicates_GenericUtils_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> UTHUB_CPP2024_API UClass* StaticClass<class UGenericUtils>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Proyectos_UT_HUB_Tercero_CMasMas_CPP_2024_Source_UTHUB_CPP2024_Public_Predicates_GenericUtils_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
