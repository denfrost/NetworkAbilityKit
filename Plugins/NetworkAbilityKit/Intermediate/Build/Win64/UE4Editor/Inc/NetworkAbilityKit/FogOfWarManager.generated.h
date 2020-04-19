// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UTexture2D;
#ifdef NETWORKABILITYKIT_FogOfWarManager_generated_h
#error "FogOfWarManager.generated.h already included, missing '#pragma once' in FogOfWarManager.h"
#endif
#define NETWORKABILITYKIT_FogOfWarManager_generated_h

#define NetworkAbilityKit_Plugins_NetworkAbilityKit_Source_NetworkAbilityKit_Public_FogOfWarManager_h_14_RPC_WRAPPERS \
	virtual void OnFowTextureUpdated_Implementation(UTexture2D* currentTexture, UTexture2D* lastTexture); \
 \
	DECLARE_FUNCTION(execRegisterFowActor) \
	{ \
		P_GET_OBJECT(AActor,Z_Param_Actor); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->RegisterFowActor(Z_Param_Actor); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnFowTextureUpdated) \
	{ \
		P_GET_OBJECT(UTexture2D,Z_Param_currentTexture); \
		P_GET_OBJECT(UTexture2D,Z_Param_lastTexture); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnFowTextureUpdated_Implementation(Z_Param_currentTexture,Z_Param_lastTexture); \
		P_NATIVE_END; \
	}


#define NetworkAbilityKit_Plugins_NetworkAbilityKit_Source_NetworkAbilityKit_Public_FogOfWarManager_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void OnFowTextureUpdated_Implementation(UTexture2D* currentTexture, UTexture2D* lastTexture); \
 \
	DECLARE_FUNCTION(execRegisterFowActor) \
	{ \
		P_GET_OBJECT(AActor,Z_Param_Actor); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->RegisterFowActor(Z_Param_Actor); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnFowTextureUpdated) \
	{ \
		P_GET_OBJECT(UTexture2D,Z_Param_currentTexture); \
		P_GET_OBJECT(UTexture2D,Z_Param_lastTexture); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnFowTextureUpdated_Implementation(Z_Param_currentTexture,Z_Param_lastTexture); \
		P_NATIVE_END; \
	}


#define NetworkAbilityKit_Plugins_NetworkAbilityKit_Source_NetworkAbilityKit_Public_FogOfWarManager_h_14_EVENT_PARMS \
	struct FogOfWarManager_eventOnFowTextureUpdated_Parms \
	{ \
		UTexture2D* currentTexture; \
		UTexture2D* lastTexture; \
	};


#define NetworkAbilityKit_Plugins_NetworkAbilityKit_Source_NetworkAbilityKit_Public_FogOfWarManager_h_14_CALLBACK_WRAPPERS
#define NetworkAbilityKit_Plugins_NetworkAbilityKit_Source_NetworkAbilityKit_Public_FogOfWarManager_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAFogOfWarManager(); \
	friend struct Z_Construct_UClass_AFogOfWarManager_Statics; \
public: \
	DECLARE_CLASS(AFogOfWarManager, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/NetworkAbilityKit"), NO_API) \
	DECLARE_SERIALIZER(AFogOfWarManager)


#define NetworkAbilityKit_Plugins_NetworkAbilityKit_Source_NetworkAbilityKit_Public_FogOfWarManager_h_14_INCLASS \
private: \
	static void StaticRegisterNativesAFogOfWarManager(); \
	friend struct Z_Construct_UClass_AFogOfWarManager_Statics; \
public: \
	DECLARE_CLASS(AFogOfWarManager, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/NetworkAbilityKit"), NO_API) \
	DECLARE_SERIALIZER(AFogOfWarManager)


#define NetworkAbilityKit_Plugins_NetworkAbilityKit_Source_NetworkAbilityKit_Public_FogOfWarManager_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AFogOfWarManager(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AFogOfWarManager) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFogOfWarManager); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFogOfWarManager); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFogOfWarManager(AFogOfWarManager&&); \
	NO_API AFogOfWarManager(const AFogOfWarManager&); \
public:


#define NetworkAbilityKit_Plugins_NetworkAbilityKit_Source_NetworkAbilityKit_Public_FogOfWarManager_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFogOfWarManager(AFogOfWarManager&&); \
	NO_API AFogOfWarManager(const AFogOfWarManager&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFogOfWarManager); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFogOfWarManager); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AFogOfWarManager)


#define NetworkAbilityKit_Plugins_NetworkAbilityKit_Source_NetworkAbilityKit_Public_FogOfWarManager_h_14_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__FOWTexture() { return STRUCT_OFFSET(AFogOfWarManager, FOWTexture); } \
	FORCEINLINE static uint32 __PPO__LastFOWTexture() { return STRUCT_OFFSET(AFogOfWarManager, LastFOWTexture); }


#define NetworkAbilityKit_Plugins_NetworkAbilityKit_Source_NetworkAbilityKit_Public_FogOfWarManager_h_11_PROLOG \
	NetworkAbilityKit_Plugins_NetworkAbilityKit_Source_NetworkAbilityKit_Public_FogOfWarManager_h_14_EVENT_PARMS


#define NetworkAbilityKit_Plugins_NetworkAbilityKit_Source_NetworkAbilityKit_Public_FogOfWarManager_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	NetworkAbilityKit_Plugins_NetworkAbilityKit_Source_NetworkAbilityKit_Public_FogOfWarManager_h_14_PRIVATE_PROPERTY_OFFSET \
	NetworkAbilityKit_Plugins_NetworkAbilityKit_Source_NetworkAbilityKit_Public_FogOfWarManager_h_14_RPC_WRAPPERS \
	NetworkAbilityKit_Plugins_NetworkAbilityKit_Source_NetworkAbilityKit_Public_FogOfWarManager_h_14_CALLBACK_WRAPPERS \
	NetworkAbilityKit_Plugins_NetworkAbilityKit_Source_NetworkAbilityKit_Public_FogOfWarManager_h_14_INCLASS \
	NetworkAbilityKit_Plugins_NetworkAbilityKit_Source_NetworkAbilityKit_Public_FogOfWarManager_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define NetworkAbilityKit_Plugins_NetworkAbilityKit_Source_NetworkAbilityKit_Public_FogOfWarManager_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	NetworkAbilityKit_Plugins_NetworkAbilityKit_Source_NetworkAbilityKit_Public_FogOfWarManager_h_14_PRIVATE_PROPERTY_OFFSET \
	NetworkAbilityKit_Plugins_NetworkAbilityKit_Source_NetworkAbilityKit_Public_FogOfWarManager_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	NetworkAbilityKit_Plugins_NetworkAbilityKit_Source_NetworkAbilityKit_Public_FogOfWarManager_h_14_CALLBACK_WRAPPERS \
	NetworkAbilityKit_Plugins_NetworkAbilityKit_Source_NetworkAbilityKit_Public_FogOfWarManager_h_14_INCLASS_NO_PURE_DECLS \
	NetworkAbilityKit_Plugins_NetworkAbilityKit_Source_NetworkAbilityKit_Public_FogOfWarManager_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> NETWORKABILITYKIT_API UClass* StaticClass<class AFogOfWarManager>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID NetworkAbilityKit_Plugins_NetworkAbilityKit_Source_NetworkAbilityKit_Public_FogOfWarManager_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS