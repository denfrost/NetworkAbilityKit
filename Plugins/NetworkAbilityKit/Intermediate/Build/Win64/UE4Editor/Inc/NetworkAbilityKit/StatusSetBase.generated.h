// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UBoolProperty;
#ifdef NETWORKABILITYKIT_StatusSetBase_generated_h
#error "StatusSetBase.generated.h already included, missing '#pragma once' in StatusSetBase.h"
#endif
#define NETWORKABILITYKIT_StatusSetBase_generated_h

#define NetworkAbilityKit_Plugins_NetworkAbilityKit_Source_NetworkAbilityKit_Public_StatusSetBase_h_13_SPARSE_DATA
#define NetworkAbilityKit_Plugins_NetworkAbilityKit_Source_NetworkAbilityKit_Public_StatusSetBase_h_13_RPC_WRAPPERS \
	virtual bool SetBoolAttributeByName_Validate(FName , bool ); \
	virtual void SetBoolAttributeByName_Implementation(FName PropName, bool bNewBool); \
	virtual bool Multicast_SetBoolAttribute_Validate(UBoolProperty* , bool ); \
	virtual void Multicast_SetBoolAttribute_Implementation(UBoolProperty* BoolProp, bool bNewBool); \
	virtual bool SetBoolAttribute_Validate(UBoolProperty* , bool ); \
	virtual void SetBoolAttribute_Implementation(UBoolProperty* BoolProp, bool bNewBool); \
 \
	DECLARE_FUNCTION(execSetBoolAttributeByName); \
	DECLARE_FUNCTION(execMulticast_SetBoolAttribute); \
	DECLARE_FUNCTION(execSetBoolAttribute); \
	DECLARE_FUNCTION(execGetBoolAttributeValue); \
	DECLARE_FUNCTION(execGetBoolAttribute);


#define NetworkAbilityKit_Plugins_NetworkAbilityKit_Source_NetworkAbilityKit_Public_StatusSetBase_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual bool SetBoolAttributeByName_Validate(FName , bool ); \
	virtual void SetBoolAttributeByName_Implementation(FName PropName, bool bNewBool); \
	virtual bool Multicast_SetBoolAttribute_Validate(UBoolProperty* , bool ); \
	virtual void Multicast_SetBoolAttribute_Implementation(UBoolProperty* BoolProp, bool bNewBool); \
	virtual bool SetBoolAttribute_Validate(UBoolProperty* , bool ); \
	virtual void SetBoolAttribute_Implementation(UBoolProperty* BoolProp, bool bNewBool); \
 \
	DECLARE_FUNCTION(execSetBoolAttributeByName); \
	DECLARE_FUNCTION(execMulticast_SetBoolAttribute); \
	DECLARE_FUNCTION(execSetBoolAttribute); \
	DECLARE_FUNCTION(execGetBoolAttributeValue); \
	DECLARE_FUNCTION(execGetBoolAttribute);


#define NetworkAbilityKit_Plugins_NetworkAbilityKit_Source_NetworkAbilityKit_Public_StatusSetBase_h_13_EVENT_PARMS \
	struct StatusSetBase_eventBP_OnImmune_Parms \
	{ \
		UBoolProperty* ImmunedProperty; \
	}; \
	struct StatusSetBase_eventMulticast_SetBoolAttribute_Parms \
	{ \
		UBoolProperty* BoolProp; \
		bool bNewBool; \
	}; \
	struct StatusSetBase_eventSetBoolAttribute_Parms \
	{ \
		UBoolProperty* BoolProp; \
		bool bNewBool; \
	}; \
	struct StatusSetBase_eventSetBoolAttributeByName_Parms \
	{ \
		FName PropName; \
		bool bNewBool; \
	};


#define NetworkAbilityKit_Plugins_NetworkAbilityKit_Source_NetworkAbilityKit_Public_StatusSetBase_h_13_CALLBACK_WRAPPERS
#define NetworkAbilityKit_Plugins_NetworkAbilityKit_Source_NetworkAbilityKit_Public_StatusSetBase_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAStatusSetBase(); \
	friend struct Z_Construct_UClass_AStatusSetBase_Statics; \
public: \
	DECLARE_CLASS(AStatusSetBase, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/NetworkAbilityKit"), NO_API) \
	DECLARE_SERIALIZER(AStatusSetBase) \
	void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override; \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		BelongingActor=NETFIELD_REP_START, \
		NETFIELD_REP_END=BelongingActor	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define NetworkAbilityKit_Plugins_NetworkAbilityKit_Source_NetworkAbilityKit_Public_StatusSetBase_h_13_INCLASS \
private: \
	static void StaticRegisterNativesAStatusSetBase(); \
	friend struct Z_Construct_UClass_AStatusSetBase_Statics; \
public: \
	DECLARE_CLASS(AStatusSetBase, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/NetworkAbilityKit"), NO_API) \
	DECLARE_SERIALIZER(AStatusSetBase) \
	void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override; \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		BelongingActor=NETFIELD_REP_START, \
		NETFIELD_REP_END=BelongingActor	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define NetworkAbilityKit_Plugins_NetworkAbilityKit_Source_NetworkAbilityKit_Public_StatusSetBase_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AStatusSetBase(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AStatusSetBase) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AStatusSetBase); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AStatusSetBase); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AStatusSetBase(AStatusSetBase&&); \
	NO_API AStatusSetBase(const AStatusSetBase&); \
public:


#define NetworkAbilityKit_Plugins_NetworkAbilityKit_Source_NetworkAbilityKit_Public_StatusSetBase_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AStatusSetBase(AStatusSetBase&&); \
	NO_API AStatusSetBase(const AStatusSetBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AStatusSetBase); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AStatusSetBase); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AStatusSetBase)


#define NetworkAbilityKit_Plugins_NetworkAbilityKit_Source_NetworkAbilityKit_Public_StatusSetBase_h_13_PRIVATE_PROPERTY_OFFSET
#define NetworkAbilityKit_Plugins_NetworkAbilityKit_Source_NetworkAbilityKit_Public_StatusSetBase_h_10_PROLOG \
	NetworkAbilityKit_Plugins_NetworkAbilityKit_Source_NetworkAbilityKit_Public_StatusSetBase_h_13_EVENT_PARMS


#define NetworkAbilityKit_Plugins_NetworkAbilityKit_Source_NetworkAbilityKit_Public_StatusSetBase_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	NetworkAbilityKit_Plugins_NetworkAbilityKit_Source_NetworkAbilityKit_Public_StatusSetBase_h_13_PRIVATE_PROPERTY_OFFSET \
	NetworkAbilityKit_Plugins_NetworkAbilityKit_Source_NetworkAbilityKit_Public_StatusSetBase_h_13_SPARSE_DATA \
	NetworkAbilityKit_Plugins_NetworkAbilityKit_Source_NetworkAbilityKit_Public_StatusSetBase_h_13_RPC_WRAPPERS \
	NetworkAbilityKit_Plugins_NetworkAbilityKit_Source_NetworkAbilityKit_Public_StatusSetBase_h_13_CALLBACK_WRAPPERS \
	NetworkAbilityKit_Plugins_NetworkAbilityKit_Source_NetworkAbilityKit_Public_StatusSetBase_h_13_INCLASS \
	NetworkAbilityKit_Plugins_NetworkAbilityKit_Source_NetworkAbilityKit_Public_StatusSetBase_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define NetworkAbilityKit_Plugins_NetworkAbilityKit_Source_NetworkAbilityKit_Public_StatusSetBase_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	NetworkAbilityKit_Plugins_NetworkAbilityKit_Source_NetworkAbilityKit_Public_StatusSetBase_h_13_PRIVATE_PROPERTY_OFFSET \
	NetworkAbilityKit_Plugins_NetworkAbilityKit_Source_NetworkAbilityKit_Public_StatusSetBase_h_13_SPARSE_DATA \
	NetworkAbilityKit_Plugins_NetworkAbilityKit_Source_NetworkAbilityKit_Public_StatusSetBase_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	NetworkAbilityKit_Plugins_NetworkAbilityKit_Source_NetworkAbilityKit_Public_StatusSetBase_h_13_CALLBACK_WRAPPERS \
	NetworkAbilityKit_Plugins_NetworkAbilityKit_Source_NetworkAbilityKit_Public_StatusSetBase_h_13_INCLASS_NO_PURE_DECLS \
	NetworkAbilityKit_Plugins_NetworkAbilityKit_Source_NetworkAbilityKit_Public_StatusSetBase_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> NETWORKABILITYKIT_API UClass* StaticClass<class AStatusSetBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID NetworkAbilityKit_Plugins_NetworkAbilityKit_Source_NetworkAbilityKit_Public_StatusSetBase_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
