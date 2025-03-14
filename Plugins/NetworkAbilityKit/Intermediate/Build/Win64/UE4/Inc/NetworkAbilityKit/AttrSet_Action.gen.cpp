// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NetworkAbilityKit/Public/AttrSet_Action.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAttrSet_Action() {}
// Cross Module References
	NETWORKABILITYKIT_API UFunction* Z_Construct_UDelegateFunction_NetworkAbilityKit_OnPlayerDeathDelegate__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_NetworkAbilityKit();
	NETWORKABILITYKIT_API UClass* Z_Construct_UClass_AAttrSet_Action_NoRegister();
	NETWORKABILITYKIT_API UClass* Z_Construct_UClass_AAttrSet_Action();
	NETWORKABILITYKIT_API UClass* Z_Construct_UClass_AAttributeSetBase();
	NETWORKABILITYKIT_API UFunction* Z_Construct_UFunction_AAttrSet_Action_OnRep_HealthChanged();
	NETWORKABILITYKIT_API UFunction* Z_Construct_UFunction_AAttrSet_Action_OnRep_MaxHealthChanged();
	NETWORKABILITYKIT_API UFunction* Z_Construct_UFunction_AAttrSet_Action_OnRep_MaxStaminaChanged();
	NETWORKABILITYKIT_API UFunction* Z_Construct_UFunction_AAttrSet_Action_OnRep_StaminaChanged();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_NetworkAbilityKit_OnPlayerDeathDelegate__DelegateSignature_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_NetworkAbilityKit_OnPlayerDeathDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "ModuleRelativePath", "Public/AttrSet_Action.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_NetworkAbilityKit_OnPlayerDeathDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_NetworkAbilityKit, nullptr, "OnPlayerDeathDelegate__DelegateSignature", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_NetworkAbilityKit_OnPlayerDeathDelegate__DelegateSignature_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UDelegateFunction_NetworkAbilityKit_OnPlayerDeathDelegate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_NetworkAbilityKit_OnPlayerDeathDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_NetworkAbilityKit_OnPlayerDeathDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	void AAttrSet_Action::StaticRegisterNativesAAttrSet_Action()
	{
		UClass* Class = AAttrSet_Action::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnRep_HealthChanged", &AAttrSet_Action::execOnRep_HealthChanged },
			{ "OnRep_MaxHealthChanged", &AAttrSet_Action::execOnRep_MaxHealthChanged },
			{ "OnRep_MaxStaminaChanged", &AAttrSet_Action::execOnRep_MaxStaminaChanged },
			{ "OnRep_StaminaChanged", &AAttrSet_Action::execOnRep_StaminaChanged },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AAttrSet_Action_OnRep_HealthChanged_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAttrSet_Action_OnRep_HealthChanged_Statics::Function_MetaDataParams[] = {
		{ "Category", "Stats" },
		{ "ModuleRelativePath", "Public/AttrSet_Action.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AAttrSet_Action_OnRep_HealthChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAttrSet_Action, nullptr, "OnRep_HealthChanged", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AAttrSet_Action_OnRep_HealthChanged_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AAttrSet_Action_OnRep_HealthChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AAttrSet_Action_OnRep_HealthChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AAttrSet_Action_OnRep_HealthChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AAttrSet_Action_OnRep_MaxHealthChanged_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAttrSet_Action_OnRep_MaxHealthChanged_Statics::Function_MetaDataParams[] = {
		{ "Category", "Stats" },
		{ "ModuleRelativePath", "Public/AttrSet_Action.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AAttrSet_Action_OnRep_MaxHealthChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAttrSet_Action, nullptr, "OnRep_MaxHealthChanged", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AAttrSet_Action_OnRep_MaxHealthChanged_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AAttrSet_Action_OnRep_MaxHealthChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AAttrSet_Action_OnRep_MaxHealthChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AAttrSet_Action_OnRep_MaxHealthChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AAttrSet_Action_OnRep_MaxStaminaChanged_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAttrSet_Action_OnRep_MaxStaminaChanged_Statics::Function_MetaDataParams[] = {
		{ "Category", "Stats" },
		{ "ModuleRelativePath", "Public/AttrSet_Action.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AAttrSet_Action_OnRep_MaxStaminaChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAttrSet_Action, nullptr, "OnRep_MaxStaminaChanged", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AAttrSet_Action_OnRep_MaxStaminaChanged_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AAttrSet_Action_OnRep_MaxStaminaChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AAttrSet_Action_OnRep_MaxStaminaChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AAttrSet_Action_OnRep_MaxStaminaChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AAttrSet_Action_OnRep_StaminaChanged_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAttrSet_Action_OnRep_StaminaChanged_Statics::Function_MetaDataParams[] = {
		{ "Category", "Stats" },
		{ "ModuleRelativePath", "Public/AttrSet_Action.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AAttrSet_Action_OnRep_StaminaChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAttrSet_Action, nullptr, "OnRep_StaminaChanged", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AAttrSet_Action_OnRep_StaminaChanged_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AAttrSet_Action_OnRep_StaminaChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AAttrSet_Action_OnRep_StaminaChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AAttrSet_Action_OnRep_StaminaChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AAttrSet_Action_NoRegister()
	{
		return AAttrSet_Action::StaticClass();
	}
	struct Z_Construct_UClass_AAttrSet_Action_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnDeathDelegate_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnDeathDelegate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxStamina_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxStamina;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Stamina_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Stamina;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxHealth_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxHealth;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Health_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Health;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AAttrSet_Action_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AAttributeSetBase,
		(UObject* (*)())Z_Construct_UPackage__Script_NetworkAbilityKit,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AAttrSet_Action_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AAttrSet_Action_OnRep_HealthChanged, "OnRep_HealthChanged" }, // 3388572683
		{ &Z_Construct_UFunction_AAttrSet_Action_OnRep_MaxHealthChanged, "OnRep_MaxHealthChanged" }, // 2894782387
		{ &Z_Construct_UFunction_AAttrSet_Action_OnRep_MaxStaminaChanged, "OnRep_MaxStaminaChanged" }, // 1815676760
		{ &Z_Construct_UFunction_AAttrSet_Action_OnRep_StaminaChanged, "OnRep_StaminaChanged" }, // 3957502622
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAttrSet_Action_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "AttrSet_Action.h" },
		{ "ModuleRelativePath", "Public/AttrSet_Action.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAttrSet_Action_Statics::NewProp_OnDeathDelegate_MetaData[] = {
		{ "ModuleRelativePath", "Public/AttrSet_Action.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_AAttrSet_Action_Statics::NewProp_OnDeathDelegate = { "OnDeathDelegate", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AAttrSet_Action, OnDeathDelegate), Z_Construct_UDelegateFunction_NetworkAbilityKit_OnPlayerDeathDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_AAttrSet_Action_Statics::NewProp_OnDeathDelegate_MetaData, ARRAY_COUNT(Z_Construct_UClass_AAttrSet_Action_Statics::NewProp_OnDeathDelegate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAttrSet_Action_Statics::NewProp_MaxStamina_MetaData[] = {
		{ "Category", "Stats" },
		{ "ModuleRelativePath", "Public/AttrSet_Action.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AAttrSet_Action_Statics::NewProp_MaxStamina = { "MaxStamina", "OnRep_MaxStaminaChanged", (EPropertyFlags)0x0010000100010035, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AAttrSet_Action, MaxStamina), METADATA_PARAMS(Z_Construct_UClass_AAttrSet_Action_Statics::NewProp_MaxStamina_MetaData, ARRAY_COUNT(Z_Construct_UClass_AAttrSet_Action_Statics::NewProp_MaxStamina_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAttrSet_Action_Statics::NewProp_Stamina_MetaData[] = {
		{ "Category", "Stats" },
		{ "ModuleRelativePath", "Public/AttrSet_Action.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AAttrSet_Action_Statics::NewProp_Stamina = { "Stamina", "OnRep_StaminaChanged", (EPropertyFlags)0x0010000100020035, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AAttrSet_Action, Stamina), METADATA_PARAMS(Z_Construct_UClass_AAttrSet_Action_Statics::NewProp_Stamina_MetaData, ARRAY_COUNT(Z_Construct_UClass_AAttrSet_Action_Statics::NewProp_Stamina_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAttrSet_Action_Statics::NewProp_MaxHealth_MetaData[] = {
		{ "Category", "Stats" },
		{ "ModuleRelativePath", "Public/AttrSet_Action.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AAttrSet_Action_Statics::NewProp_MaxHealth = { "MaxHealth", "OnRep_MaxHealthChanged", (EPropertyFlags)0x0010000100010035, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AAttrSet_Action, MaxHealth), METADATA_PARAMS(Z_Construct_UClass_AAttrSet_Action_Statics::NewProp_MaxHealth_MetaData, ARRAY_COUNT(Z_Construct_UClass_AAttrSet_Action_Statics::NewProp_MaxHealth_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAttrSet_Action_Statics::NewProp_Health_MetaData[] = {
		{ "Category", "Stats" },
		{ "ModuleRelativePath", "Public/AttrSet_Action.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AAttrSet_Action_Statics::NewProp_Health = { "Health", "OnRep_HealthChanged", (EPropertyFlags)0x0010000100020035, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AAttrSet_Action, Health), METADATA_PARAMS(Z_Construct_UClass_AAttrSet_Action_Statics::NewProp_Health_MetaData, ARRAY_COUNT(Z_Construct_UClass_AAttrSet_Action_Statics::NewProp_Health_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AAttrSet_Action_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAttrSet_Action_Statics::NewProp_OnDeathDelegate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAttrSet_Action_Statics::NewProp_MaxStamina,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAttrSet_Action_Statics::NewProp_Stamina,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAttrSet_Action_Statics::NewProp_MaxHealth,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAttrSet_Action_Statics::NewProp_Health,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AAttrSet_Action_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AAttrSet_Action>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AAttrSet_Action_Statics::ClassParams = {
		&AAttrSet_Action::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AAttrSet_Action_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		ARRAY_COUNT(FuncInfo),
		ARRAY_COUNT(Z_Construct_UClass_AAttrSet_Action_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_AAttrSet_Action_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AAttrSet_Action_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AAttrSet_Action()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AAttrSet_Action_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AAttrSet_Action, 3997582803);
	template<> NETWORKABILITYKIT_API UClass* StaticClass<AAttrSet_Action>()
	{
		return AAttrSet_Action::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AAttrSet_Action(Z_Construct_UClass_AAttrSet_Action, &AAttrSet_Action::StaticClass, TEXT("/Script/NetworkAbilityKit"), TEXT("AAttrSet_Action"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AAttrSet_Action);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
