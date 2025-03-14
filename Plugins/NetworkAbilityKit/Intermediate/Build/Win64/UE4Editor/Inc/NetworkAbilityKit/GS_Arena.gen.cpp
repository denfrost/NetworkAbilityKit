// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NetworkAbilityKit/Public/GS_Arena.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGS_Arena() {}
// Cross Module References
	NETWORKABILITYKIT_API UClass* Z_Construct_UClass_AGS_Arena_NoRegister();
	NETWORKABILITYKIT_API UClass* Z_Construct_UClass_AGS_Arena();
	ENGINE_API UClass* Z_Construct_UClass_AGameState();
	UPackage* Z_Construct_UPackage__Script_NetworkAbilityKit();
// End Cross Module References
	void AGS_Arena::StaticRegisterNativesAGS_Arena()
	{
	}
	UClass* Z_Construct_UClass_AGS_Arena_NoRegister()
	{
		return AGS_Arena::StaticClass();
	}
	struct Z_Construct_UClass_AGS_Arena_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AGS_Arena_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameState,
		(UObject* (*)())Z_Construct_UPackage__Script_NetworkAbilityKit,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGS_Arena_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "GS_Arena.h" },
		{ "ModuleRelativePath", "Public/GS_Arena.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AGS_Arena_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AGS_Arena>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AGS_Arena_Statics::ClassParams = {
		&AGS_Arena::StaticClass,
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
		0x009002A4u,
		METADATA_PARAMS(Z_Construct_UClass_AGS_Arena_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AGS_Arena_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AGS_Arena()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AGS_Arena_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AGS_Arena, 1940228526);
	template<> NETWORKABILITYKIT_API UClass* StaticClass<AGS_Arena>()
	{
		return AGS_Arena::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AGS_Arena(Z_Construct_UClass_AGS_Arena, &AGS_Arena::StaticClass, TEXT("/Script/NetworkAbilityKit"), TEXT("AGS_Arena"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AGS_Arena);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
