// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Assi02_RyanH_1202/Public/ColorSwitchGame.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeColorSwitchGame() {}
// Cross Module References
	ASSI02_RYANH_1202_API UClass* Z_Construct_UClass_AColorSwitchGame();
	ASSI02_RYANH_1202_API UClass* Z_Construct_UClass_AColorSwitchGame_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_Assi02_RyanH_1202();
// End Cross Module References
	void AColorSwitchGame::StaticRegisterNativesAColorSwitchGame()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AColorSwitchGame);
	UClass* Z_Construct_UClass_AColorSwitchGame_NoRegister()
	{
		return AColorSwitchGame::StaticClass();
	}
	struct Z_Construct_UClass_AColorSwitchGame_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AColorSwitchGame_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Assi02_RyanH_1202,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AColorSwitchGame_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AColorSwitchGame_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "ColorSwitchGame.h" },
		{ "ModuleRelativePath", "Public/ColorSwitchGame.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AColorSwitchGame_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AColorSwitchGame>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AColorSwitchGame_Statics::ClassParams = {
		&AColorSwitchGame::StaticClass,
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
		0x009002ACu,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AColorSwitchGame_Statics::Class_MetaDataParams), Z_Construct_UClass_AColorSwitchGame_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_AColorSwitchGame()
	{
		if (!Z_Registration_Info_UClass_AColorSwitchGame.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AColorSwitchGame.OuterSingleton, Z_Construct_UClass_AColorSwitchGame_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AColorSwitchGame.OuterSingleton;
	}
	template<> ASSI02_RYANH_1202_API UClass* StaticClass<AColorSwitchGame>()
	{
		return AColorSwitchGame::StaticClass();
	}
	AColorSwitchGame::AColorSwitchGame(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AColorSwitchGame);
	AColorSwitchGame::~AColorSwitchGame() {}
	struct Z_CompiledInDeferFile_FID_Assi02_RyanH_1202_Source_Assi02_RyanH_1202_Public_ColorSwitchGame_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Assi02_RyanH_1202_Source_Assi02_RyanH_1202_Public_ColorSwitchGame_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AColorSwitchGame, AColorSwitchGame::StaticClass, TEXT("AColorSwitchGame"), &Z_Registration_Info_UClass_AColorSwitchGame, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AColorSwitchGame), 3366703209U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Assi02_RyanH_1202_Source_Assi02_RyanH_1202_Public_ColorSwitchGame_h_2198060825(TEXT("/Script/Assi02_RyanH_1202"),
		Z_CompiledInDeferFile_FID_Assi02_RyanH_1202_Source_Assi02_RyanH_1202_Public_ColorSwitchGame_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Assi02_RyanH_1202_Source_Assi02_RyanH_1202_Public_ColorSwitchGame_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
