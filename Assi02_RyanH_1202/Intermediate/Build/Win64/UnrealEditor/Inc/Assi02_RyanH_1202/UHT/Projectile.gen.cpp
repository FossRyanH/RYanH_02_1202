// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Assi02_RyanH_1202/Public/Projectile.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeProjectile() {}
// Cross Module References
	ASSI02_RYANH_1202_API UClass* Z_Construct_UClass_AProjectile();
	ASSI02_RYANH_1202_API UClass* Z_Construct_UClass_AProjectile_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_Assi02_RyanH_1202();
// End Cross Module References
	void AProjectile::StaticRegisterNativesAProjectile()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AProjectile);
	UClass* Z_Construct_UClass_AProjectile_NoRegister()
	{
		return AProjectile::StaticClass();
	}
	struct Z_Construct_UClass_AProjectile_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AProjectile_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Assi02_RyanH_1202,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AProjectile_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AProjectile_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Projectile.h" },
		{ "ModuleRelativePath", "Public/Projectile.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AProjectile_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AProjectile>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AProjectile_Statics::ClassParams = {
		&AProjectile::StaticClass,
		"Engine",
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
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AProjectile_Statics::Class_MetaDataParams), Z_Construct_UClass_AProjectile_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_AProjectile()
	{
		if (!Z_Registration_Info_UClass_AProjectile.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AProjectile.OuterSingleton, Z_Construct_UClass_AProjectile_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AProjectile.OuterSingleton;
	}
	template<> ASSI02_RYANH_1202_API UClass* StaticClass<AProjectile>()
	{
		return AProjectile::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AProjectile);
	AProjectile::~AProjectile() {}
	struct Z_CompiledInDeferFile_FID_Assi02_RyanH_1202_Source_Assi02_RyanH_1202_Public_Projectile_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Assi02_RyanH_1202_Source_Assi02_RyanH_1202_Public_Projectile_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AProjectile, AProjectile::StaticClass, TEXT("AProjectile"), &Z_Registration_Info_UClass_AProjectile, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AProjectile), 984595414U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Assi02_RyanH_1202_Source_Assi02_RyanH_1202_Public_Projectile_h_225231524(TEXT("/Script/Assi02_RyanH_1202"),
		Z_CompiledInDeferFile_FID_Assi02_RyanH_1202_Source_Assi02_RyanH_1202_Public_Projectile_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Assi02_RyanH_1202_Source_Assi02_RyanH_1202_Public_Projectile_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
