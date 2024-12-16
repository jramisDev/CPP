// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUTHUB_CPP2024_init() {}
	UTHUB_CPP2024_API UFunction* Z_Construct_UDelegateFunction_UCustomActionSubsystem_SingleActionEvent__DelegateSignature();
	UTHUB_CPP2024_API UFunction* Z_Construct_UDelegateFunction_UTHUB_CPP2024_OnActionEvent__DelegateSignature();
	UTHUB_CPP2024_API UFunction* Z_Construct_UDelegateFunction_UTHUB_CPP2024_OnAttributeChanged__DelegateSignature();
	UTHUB_CPP2024_API UFunction* Z_Construct_UDelegateFunction_UTHUB_CPP2024_OnAttrOwnerRegistered__DelegateSignature();
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_UTHUB_CPP2024;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_UTHUB_CPP2024()
	{
		if (!Z_Registration_Info_UPackage__Script_UTHUB_CPP2024.OuterSingleton)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_UCustomActionSubsystem_SingleActionEvent__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_UTHUB_CPP2024_OnActionEvent__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_UTHUB_CPP2024_OnAttributeChanged__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_UTHUB_CPP2024_OnAttrOwnerRegistered__DelegateSignature,
			};
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/UTHUB_CPP2024",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0xC79DF821,
				0xA2067BEE,
				METADATA_PARAMS(0, nullptr)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_UTHUB_CPP2024.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_UTHUB_CPP2024.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_UTHUB_CPP2024(Z_Construct_UPackage__Script_UTHUB_CPP2024, TEXT("/Script/UTHUB_CPP2024"), Z_Registration_Info_UPackage__Script_UTHUB_CPP2024, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0xC79DF821, 0xA2067BEE));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
