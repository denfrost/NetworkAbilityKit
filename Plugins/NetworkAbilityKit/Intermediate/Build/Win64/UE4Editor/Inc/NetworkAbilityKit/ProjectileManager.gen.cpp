// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NetworkAbilityKit/Public/ProjectileManager.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeProjectileManager() {}
// Cross Module References
	NETWORKABILITYKIT_API UClass* Z_Construct_UClass_AProjectileManager_NoRegister();
	NETWORKABILITYKIT_API UClass* Z_Construct_UClass_AProjectileManager();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_NetworkAbilityKit();
// End Cross Module References
	void AProjectileManager::StaticRegisterNativesAProjectileManager()
	{
	}
	UClass* Z_Construct_UClass_AProjectileManager_NoRegister()
	{
		return AProjectileManager::StaticClass();
	}
	struct Z_Construct_UClass_AProjectileManager_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AProjectileManager_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_NetworkAbilityKit,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AProjectileManager_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "ProjectileManager.h" },
		{ "ModuleRelativePath", "Public/ProjectileManager.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AProjectileManager_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AProjectileManager>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AProjectileManager_Statics::ClassParams = {
		&AProjectileManager::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_AProjectileManager_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AProjectileManager_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AProjectileManager()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AProjectileManager_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AProjectileManager, 2998786137);
	template<> NETWORKABILITYKIT_API UClass* StaticClass<AProjectileManager>()
	{
		return AProjectileManager::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AProjectileManager(Z_Construct_UClass_AProjectileManager, &AProjectileManager::StaticClass, TEXT("/Script/NetworkAbilityKit"), TEXT("AProjectileManager"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AProjectileManager);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
