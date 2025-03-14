// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef NETWORKABILITYKIT_ModifierBase_generated_h
#error "ModifierBase.generated.h already included, missing '#pragma once' in ModifierBase.h"
#endif
#define NETWORKABILITYKIT_ModifierBase_generated_h

#define NetworkAbilityKit_Plugins_NetworkAbilityKit_Source_NetworkAbilityKit_Public_ModifierBase_h_16_SPARSE_DATA
#define NetworkAbilityKit_Plugins_NetworkAbilityKit_Source_NetworkAbilityKit_Public_ModifierBase_h_16_RPC_WRAPPERS \
	virtual bool AddStack_Validate(int8 ); \
	virtual void AddStack_Implementation(int8 NewStack); \
	virtual bool StartIntervalThink_Validate(float ); \
	virtual void StartIntervalThink_Implementation(float DeltaTick); \
	virtual bool SetModifierActivation_Validate(bool ); \
	virtual void SetModifierActivation_Implementation(bool NewActivate); \
 \
	DECLARE_FUNCTION(execAddStack); \
	DECLARE_FUNCTION(execOnModifierPendingExpire); \
	DECLARE_FUNCTION(execOnBlocked); \
	DECLARE_FUNCTION(execOnReapplied); \
	DECLARE_FUNCTION(execOnApplied); \
	DECLARE_FUNCTION(execModifierDurationCycleTick); \
	DECLARE_FUNCTION(execStartIntervalThink); \
	DECLARE_FUNCTION(execOnReadyToExpire); \
	DECLARE_FUNCTION(execOnRep_OnModifierActivateChanged); \
	DECLARE_FUNCTION(execOnRep_OnStackChanged); \
	DECLARE_FUNCTION(execSetModifierActivation); \
	DECLARE_FUNCTION(execLifeCycleHandler);


#define NetworkAbilityKit_Plugins_NetworkAbilityKit_Source_NetworkAbilityKit_Public_ModifierBase_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual bool AddStack_Validate(int8 ); \
	virtual void AddStack_Implementation(int8 NewStack); \
	virtual bool StartIntervalThink_Validate(float ); \
	virtual void StartIntervalThink_Implementation(float DeltaTick); \
	virtual bool SetModifierActivation_Validate(bool ); \
	virtual void SetModifierActivation_Implementation(bool NewActivate); \
 \
	DECLARE_FUNCTION(execAddStack); \
	DECLARE_FUNCTION(execOnModifierPendingExpire); \
	DECLARE_FUNCTION(execOnBlocked); \
	DECLARE_FUNCTION(execOnReapplied); \
	DECLARE_FUNCTION(execOnApplied); \
	DECLARE_FUNCTION(execModifierDurationCycleTick); \
	DECLARE_FUNCTION(execStartIntervalThink); \
	DECLARE_FUNCTION(execOnReadyToExpire); \
	DECLARE_FUNCTION(execOnRep_OnModifierActivateChanged); \
	DECLARE_FUNCTION(execOnRep_OnStackChanged); \
	DECLARE_FUNCTION(execSetModifierActivation); \
	DECLARE_FUNCTION(execLifeCycleHandler);


#define NetworkAbilityKit_Plugins_NetworkAbilityKit_Source_NetworkAbilityKit_Public_ModifierBase_h_16_EVENT_PARMS \
	struct ModifierBase_eventAddStack_Parms \
	{ \
		int8 NewStack; \
	}; \
	struct ModifierBase_eventSetModifierActivation_Parms \
	{ \
		bool NewActivate; \
	}; \
	struct ModifierBase_eventStartIntervalThink_Parms \
	{ \
		float DeltaTick; \
	};


#define NetworkAbilityKit_Plugins_NetworkAbilityKit_Source_NetworkAbilityKit_Public_ModifierBase_h_16_CALLBACK_WRAPPERS
#define NetworkAbilityKit_Plugins_NetworkAbilityKit_Source_NetworkAbilityKit_Public_ModifierBase_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAModifierBase(); \
	friend struct Z_Construct_UClass_AModifierBase_Statics; \
public: \
	DECLARE_CLASS(AModifierBase, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/NetworkAbilityKit"), NO_API) \
	DECLARE_SERIALIZER(AModifierBase) \
	void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override; \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		bShowUI=NETFIELD_REP_START, \
		UIDisplayName, \
		UITexture, \
		UIDescription, \
		ModifierStack, \
		ModifierIsActive, \
		ModifierInstigator, \
		NETFIELD_REP_END=ModifierInstigator	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define NetworkAbilityKit_Plugins_NetworkAbilityKit_Source_NetworkAbilityKit_Public_ModifierBase_h_16_INCLASS \
private: \
	static void StaticRegisterNativesAModifierBase(); \
	friend struct Z_Construct_UClass_AModifierBase_Statics; \
public: \
	DECLARE_CLASS(AModifierBase, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/NetworkAbilityKit"), NO_API) \
	DECLARE_SERIALIZER(AModifierBase) \
	void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override; \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		bShowUI=NETFIELD_REP_START, \
		UIDisplayName, \
		UITexture, \
		UIDescription, \
		ModifierStack, \
		ModifierIsActive, \
		ModifierInstigator, \
		NETFIELD_REP_END=ModifierInstigator	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define NetworkAbilityKit_Plugins_NetworkAbilityKit_Source_NetworkAbilityKit_Public_ModifierBase_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AModifierBase(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AModifierBase) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AModifierBase); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AModifierBase); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AModifierBase(AModifierBase&&); \
	NO_API AModifierBase(const AModifierBase&); \
public:


#define NetworkAbilityKit_Plugins_NetworkAbilityKit_Source_NetworkAbilityKit_Public_ModifierBase_h_16_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AModifierBase(AModifierBase&&); \
	NO_API AModifierBase(const AModifierBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AModifierBase); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AModifierBase); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AModifierBase)


#define NetworkAbilityKit_Plugins_NetworkAbilityKit_Source_NetworkAbilityKit_Public_ModifierBase_h_16_PRIVATE_PROPERTY_OFFSET
#define NetworkAbilityKit_Plugins_NetworkAbilityKit_Source_NetworkAbilityKit_Public_ModifierBase_h_13_PROLOG \
	NetworkAbilityKit_Plugins_NetworkAbilityKit_Source_NetworkAbilityKit_Public_ModifierBase_h_16_EVENT_PARMS


#define NetworkAbilityKit_Plugins_NetworkAbilityKit_Source_NetworkAbilityKit_Public_ModifierBase_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	NetworkAbilityKit_Plugins_NetworkAbilityKit_Source_NetworkAbilityKit_Public_ModifierBase_h_16_PRIVATE_PROPERTY_OFFSET \
	NetworkAbilityKit_Plugins_NetworkAbilityKit_Source_NetworkAbilityKit_Public_ModifierBase_h_16_SPARSE_DATA \
	NetworkAbilityKit_Plugins_NetworkAbilityKit_Source_NetworkAbilityKit_Public_ModifierBase_h_16_RPC_WRAPPERS \
	NetworkAbilityKit_Plugins_NetworkAbilityKit_Source_NetworkAbilityKit_Public_ModifierBase_h_16_CALLBACK_WRAPPERS \
	NetworkAbilityKit_Plugins_NetworkAbilityKit_Source_NetworkAbilityKit_Public_ModifierBase_h_16_INCLASS \
	NetworkAbilityKit_Plugins_NetworkAbilityKit_Source_NetworkAbilityKit_Public_ModifierBase_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define NetworkAbilityKit_Plugins_NetworkAbilityKit_Source_NetworkAbilityKit_Public_ModifierBase_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	NetworkAbilityKit_Plugins_NetworkAbilityKit_Source_NetworkAbilityKit_Public_ModifierBase_h_16_PRIVATE_PROPERTY_OFFSET \
	NetworkAbilityKit_Plugins_NetworkAbilityKit_Source_NetworkAbilityKit_Public_ModifierBase_h_16_SPARSE_DATA \
	NetworkAbilityKit_Plugins_NetworkAbilityKit_Source_NetworkAbilityKit_Public_ModifierBase_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	NetworkAbilityKit_Plugins_NetworkAbilityKit_Source_NetworkAbilityKit_Public_ModifierBase_h_16_CALLBACK_WRAPPERS \
	NetworkAbilityKit_Plugins_NetworkAbilityKit_Source_NetworkAbilityKit_Public_ModifierBase_h_16_INCLASS_NO_PURE_DECLS \
	NetworkAbilityKit_Plugins_NetworkAbilityKit_Source_NetworkAbilityKit_Public_ModifierBase_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> NETWORKABILITYKIT_API UClass* StaticClass<class AModifierBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID NetworkAbilityKit_Plugins_NetworkAbilityKit_Source_NetworkAbilityKit_Public_ModifierBase_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
