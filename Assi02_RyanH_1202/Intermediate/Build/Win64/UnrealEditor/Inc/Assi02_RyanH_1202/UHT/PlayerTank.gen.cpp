// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Assi02_RyanH_1202/Public/PlayerTank.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePlayerTank() {}
// Cross Module References
	ASSI02_RYANH_1202_API UClass* Z_Construct_UClass_ABaseCharacter();
	ASSI02_RYANH_1202_API UClass* Z_Construct_UClass_APlayerTank();
	ASSI02_RYANH_1202_API UClass* Z_Construct_UClass_APlayerTank_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Assi02_RyanH_1202();
// End Cross Module References
	void APlayerTank::StaticRegisterNativesAPlayerTank()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(APlayerTank);
	UClass* Z_Construct_UClass_APlayerTank_NoRegister()
	{
		return APlayerTank::StaticClass();
	}
	struct Z_Construct_UClass_APlayerTank_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_APlayerTank_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ABaseCharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_Assi02_RyanH_1202,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_APlayerTank_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayerTank_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "PlayerTank.h" },
		{ "ModuleRelativePath", "Public/PlayerTank.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_APlayerTank_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APlayerTank>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_APlayerTank_Statics::ClassParams = {
		&APlayerTank::StaticClass,
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
		0x009000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APlayerTank_Statics::Class_MetaDataParams), Z_Construct_UClass_APlayerTank_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_APlayerTank()
	{
		if (!Z_Registration_Info_UClass_APlayerTank.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_APlayerTank.OuterSingleton, Z_Construct_UClass_APlayerTank_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_APlayerTank.OuterSingleton;
	}
	template<> ASSI02_RYANH_1202_API UClass* StaticClass<APlayerTank>()
	{
		return APlayerTank::StaticClass();
	}
	APlayerTank::APlayerTank() {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(APlayerTank);
	APlayerTank::~APlayerTank() {}
	struct Z_CompiledInDeferFile_FID_Assi02_RyanH_1202_Source_Assi02_RyanH_1202_Public_PlayerTank_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Assi02_RyanH_1202_Source_Assi02_RyanH_1202_Public_PlayerTank_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_APlayerTank, APlayerTank::StaticClass, TEXT("APlayerTank"), &Z_Registration_Info_UClass_APlayerTank, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(APlayerTank), 1236971164U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Assi02_RyanH_1202_Source_Assi02_RyanH_1202_Public_PlayerTank_h_1334520358(TEXT("/Script/Assi02_RyanH_1202"),
		Z_CompiledInDeferFile_FID_Assi02_RyanH_1202_Source_Assi02_RyanH_1202_Public_PlayerTank_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Assi02_RyanH_1202_Source_Assi02_RyanH_1202_Public_PlayerTank_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
