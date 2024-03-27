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
	ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USpringArmComponent_NoRegister();
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
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MoveSpeed_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MoveSpeed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TurnRate_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_TurnRate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SpringArmComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SpringArmComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CameraComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_CameraComponent;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
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
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayerTank_Statics::NewProp_MoveSpeed_MetaData[] = {
		{ "Category", "Movement Variables" },
		{ "ModuleRelativePath", "Public/PlayerTank.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_APlayerTank_Statics::NewProp_MoveSpeed = { "MoveSpeed", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APlayerTank, MoveSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APlayerTank_Statics::NewProp_MoveSpeed_MetaData), Z_Construct_UClass_APlayerTank_Statics::NewProp_MoveSpeed_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayerTank_Statics::NewProp_TurnRate_MetaData[] = {
		{ "Category", "Movement Variables" },
		{ "ModuleRelativePath", "Public/PlayerTank.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_APlayerTank_Statics::NewProp_TurnRate = { "TurnRate", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APlayerTank, TurnRate), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APlayerTank_Statics::NewProp_TurnRate_MetaData), Z_Construct_UClass_APlayerTank_Statics::NewProp_TurnRate_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayerTank_Statics::NewProp_SpringArmComponent_MetaData[] = {
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/PlayerTank.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APlayerTank_Statics::NewProp_SpringArmComponent = { "SpringArmComponent", nullptr, (EPropertyFlags)0x00400000000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APlayerTank, SpringArmComponent), Z_Construct_UClass_USpringArmComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APlayerTank_Statics::NewProp_SpringArmComponent_MetaData), Z_Construct_UClass_APlayerTank_Statics::NewProp_SpringArmComponent_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayerTank_Statics::NewProp_CameraComponent_MetaData[] = {
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/PlayerTank.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APlayerTank_Statics::NewProp_CameraComponent = { "CameraComponent", nullptr, (EPropertyFlags)0x00400000000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APlayerTank, CameraComponent), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APlayerTank_Statics::NewProp_CameraComponent_MetaData), Z_Construct_UClass_APlayerTank_Statics::NewProp_CameraComponent_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_APlayerTank_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerTank_Statics::NewProp_MoveSpeed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerTank_Statics::NewProp_TurnRate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerTank_Statics::NewProp_SpringArmComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerTank_Statics::NewProp_CameraComponent,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_APlayerTank_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APlayerTank>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_APlayerTank_Statics::ClassParams = {
		&APlayerTank::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_APlayerTank_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_APlayerTank_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APlayerTank_Statics::Class_MetaDataParams), Z_Construct_UClass_APlayerTank_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_APlayerTank_Statics::PropPointers) < 2048);
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
	DEFINE_VTABLE_PTR_HELPER_CTOR(APlayerTank);
	APlayerTank::~APlayerTank() {}
	struct Z_CompiledInDeferFile_FID_Assi02_RyanH_1202_Source_Assi02_RyanH_1202_Public_PlayerTank_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Assi02_RyanH_1202_Source_Assi02_RyanH_1202_Public_PlayerTank_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_APlayerTank, APlayerTank::StaticClass, TEXT("APlayerTank"), &Z_Registration_Info_UClass_APlayerTank, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(APlayerTank), 587069443U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Assi02_RyanH_1202_Source_Assi02_RyanH_1202_Public_PlayerTank_h_3025131428(TEXT("/Script/Assi02_RyanH_1202"),
		Z_CompiledInDeferFile_FID_Assi02_RyanH_1202_Source_Assi02_RyanH_1202_Public_PlayerTank_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Assi02_RyanH_1202_Source_Assi02_RyanH_1202_Public_PlayerTank_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
