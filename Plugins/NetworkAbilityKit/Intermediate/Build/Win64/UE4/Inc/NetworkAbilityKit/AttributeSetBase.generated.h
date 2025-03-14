// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class EAttrModifyMethod : uint8;
class UFloatProperty;
#ifdef NETWORKABILITYKIT_AttributeSetBase_generated_h
#error "AttributeSetBase.generated.h already included, missing '#pragma once' in AttributeSetBase.h"
#endif
#define NETWORKABILITYKIT_AttributeSetBase_generated_h

#define NetworkAbilityKit_Plugins_NetworkAbilityKit_Source_NetworkAbilityKit_Public_AttributeSetBase_h_13_RPC_WRAPPERS \
	virtual bool SetFloatAttributeValueByName_Validate(FName , EAttrModifyMethod , float ); \
	virtual void SetFloatAttributeValueByName_Implementation(FName PropName, EAttrModifyMethod ModifyMethod, float ModifyValue); \
	virtual bool SetFloatAttributeValue_Validate(UFloatProperty* , float ); \
	virtual void SetFloatAttributeValue_Implementation(UFloatProperty* FloatProp, float NewValue); \
 \
	DECLARE_FUNCTION(execSetFloatAttributeValueByName) \
	{ \
		P_GET_PROPERTY(UNameProperty,Z_Param_PropName); \
		P_GET_ENUM(EAttrModifyMethod,Z_Param_ModifyMethod); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_ModifyValue); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		if (!P_THIS->SetFloatAttributeValueByName_Validate(Z_Param_PropName,EAttrModifyMethod(Z_Param_ModifyMethod),Z_Param_ModifyValue)) \
		{ \
			RPC_ValidateFailed(TEXT("SetFloatAttributeValueByName_Validate")); \
			return; \
		} \
		P_THIS->SetFloatAttributeValueByName_Implementation(Z_Param_PropName,EAttrModifyMethod(Z_Param_ModifyMethod),Z_Param_ModifyValue); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetFloatAttributeValue) \
	{ \
		P_GET_OBJECT(UFloatProperty,Z_Param_FloatProp); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_NewValue); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		if (!P_THIS->SetFloatAttributeValue_Validate(Z_Param_FloatProp,Z_Param_NewValue)) \
		{ \
			RPC_ValidateFailed(TEXT("SetFloatAttributeValue_Validate")); \
			return; \
		} \
		P_THIS->SetFloatAttributeValue_Implementation(Z_Param_FloatProp,Z_Param_NewValue); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetTmpValueAfterModifiedFloatAttribute) \
	{ \
		P_GET_OBJECT(UFloatProperty,Z_Param_FloatProp); \
		P_GET_ENUM(EAttrModifyMethod,Z_Param_ModifyMethod); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_ModifyValue); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetTmpValueAfterModifiedFloatAttribute(Z_Param_FloatProp,EAttrModifyMethod(Z_Param_ModifyMethod),Z_Param_ModifyValue); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetFloatAttribute) \
	{ \
		P_GET_PROPERTY(UNameProperty,Z_Param_PropertyName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UFloatProperty**)Z_Param__Result=P_THIS->GetFloatAttribute(Z_Param_PropertyName); \
		P_NATIVE_END; \
	}


#define NetworkAbilityKit_Plugins_NetworkAbilityKit_Source_NetworkAbilityKit_Public_AttributeSetBase_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual bool SetFloatAttributeValueByName_Validate(FName , EAttrModifyMethod , float ); \
	virtual void SetFloatAttributeValueByName_Implementation(FName PropName, EAttrModifyMethod ModifyMethod, float ModifyValue); \
	virtual bool SetFloatAttributeValue_Validate(UFloatProperty* , float ); \
	virtual void SetFloatAttributeValue_Implementation(UFloatProperty* FloatProp, float NewValue); \
 \
	DECLARE_FUNCTION(execSetFloatAttributeValueByName) \
	{ \
		P_GET_PROPERTY(UNameProperty,Z_Param_PropName); \
		P_GET_ENUM(EAttrModifyMethod,Z_Param_ModifyMethod); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_ModifyValue); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		if (!P_THIS->SetFloatAttributeValueByName_Validate(Z_Param_PropName,EAttrModifyMethod(Z_Param_ModifyMethod),Z_Param_ModifyValue)) \
		{ \
			RPC_ValidateFailed(TEXT("SetFloatAttributeValueByName_Validate")); \
			return; \
		} \
		P_THIS->SetFloatAttributeValueByName_Implementation(Z_Param_PropName,EAttrModifyMethod(Z_Param_ModifyMethod),Z_Param_ModifyValue); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetFloatAttributeValue) \
	{ \
		P_GET_OBJECT(UFloatProperty,Z_Param_FloatProp); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_NewValue); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		if (!P_THIS->SetFloatAttributeValue_Validate(Z_Param_FloatProp,Z_Param_NewValue)) \
		{ \
			RPC_ValidateFailed(TEXT("SetFloatAttributeValue_Validate")); \
			return; \
		} \
		P_THIS->SetFloatAttributeValue_Implementation(Z_Param_FloatProp,Z_Param_NewValue); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetTmpValueAfterModifiedFloatAttribute) \
	{ \
		P_GET_OBJECT(UFloatProperty,Z_Param_FloatProp); \
		P_GET_ENUM(EAttrModifyMethod,Z_Param_ModifyMethod); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_ModifyValue); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetTmpValueAfterModifiedFloatAttribute(Z_Param_FloatProp,EAttrModifyMethod(Z_Param_ModifyMethod),Z_Param_ModifyValue); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetFloatAttribute) \
	{ \
		P_GET_PROPERTY(UNameProperty,Z_Param_PropertyName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UFloatProperty**)Z_Param__Result=P_THIS->GetFloatAttribute(Z_Param_PropertyName); \
		P_NATIVE_END; \
	}


#define NetworkAbilityKit_Plugins_NetworkAbilityKit_Source_NetworkAbilityKit_Public_AttributeSetBase_h_13_EVENT_PARMS \
	struct AttributeSetBase_eventSetFloatAttributeValue_Parms \
	{ \
		UFloatProperty* FloatProp; \
		float NewValue; \
	}; \
	struct AttributeSetBase_eventSetFloatAttributeValueByName_Parms \
	{ \
		FName PropName; \
		EAttrModifyMethod ModifyMethod; \
		float ModifyValue; \
	};


#define NetworkAbilityKit_Plugins_NetworkAbilityKit_Source_NetworkAbilityKit_Public_AttributeSetBase_h_13_CALLBACK_WRAPPERS
#define NetworkAbilityKit_Plugins_NetworkAbilityKit_Source_NetworkAbilityKit_Public_AttributeSetBase_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAAttributeSetBase(); \
	friend struct Z_Construct_UClass_AAttributeSetBase_Statics; \
public: \
	DECLARE_CLASS(AAttributeSetBase, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/NetworkAbilityKit"), NO_API) \
	DECLARE_SERIALIZER(AAttributeSetBase) \
	void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;


#define NetworkAbilityKit_Plugins_NetworkAbilityKit_Source_NetworkAbilityKit_Public_AttributeSetBase_h_13_INCLASS \
private: \
	static void StaticRegisterNativesAAttributeSetBase(); \
	friend struct Z_Construct_UClass_AAttributeSetBase_Statics; \
public: \
	DECLARE_CLASS(AAttributeSetBase, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/NetworkAbilityKit"), NO_API) \
	DECLARE_SERIALIZER(AAttributeSetBase) \
	void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;


#define NetworkAbilityKit_Plugins_NetworkAbilityKit_Source_NetworkAbilityKit_Public_AttributeSetBase_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AAttributeSetBase(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AAttributeSetBase) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AAttributeSetBase); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AAttributeSetBase); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AAttributeSetBase(AAttributeSetBase&&); \
	NO_API AAttributeSetBase(const AAttributeSetBase&); \
public:


#define NetworkAbilityKit_Plugins_NetworkAbilityKit_Source_NetworkAbilityKit_Public_AttributeSetBase_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AAttributeSetBase(AAttributeSetBase&&); \
	NO_API AAttributeSetBase(const AAttributeSetBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AAttributeSetBase); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AAttributeSetBase); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AAttributeSetBase)


#define NetworkAbilityKit_Plugins_NetworkAbilityKit_Source_NetworkAbilityKit_Public_AttributeSetBase_h_13_PRIVATE_PROPERTY_OFFSET
#define NetworkAbilityKit_Plugins_NetworkAbilityKit_Source_NetworkAbilityKit_Public_AttributeSetBase_h_10_PROLOG \
	NetworkAbilityKit_Plugins_NetworkAbilityKit_Source_NetworkAbilityKit_Public_AttributeSetBase_h_13_EVENT_PARMS


#define NetworkAbilityKit_Plugins_NetworkAbilityKit_Source_NetworkAbilityKit_Public_AttributeSetBase_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	NetworkAbilityKit_Plugins_NetworkAbilityKit_Source_NetworkAbilityKit_Public_AttributeSetBase_h_13_PRIVATE_PROPERTY_OFFSET \
	NetworkAbilityKit_Plugins_NetworkAbilityKit_Source_NetworkAbilityKit_Public_AttributeSetBase_h_13_RPC_WRAPPERS \
	NetworkAbilityKit_Plugins_NetworkAbilityKit_Source_NetworkAbilityKit_Public_AttributeSetBase_h_13_CALLBACK_WRAPPERS \
	NetworkAbilityKit_Plugins_NetworkAbilityKit_Source_NetworkAbilityKit_Public_AttributeSetBase_h_13_INCLASS \
	NetworkAbilityKit_Plugins_NetworkAbilityKit_Source_NetworkAbilityKit_Public_AttributeSetBase_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define NetworkAbilityKit_Plugins_NetworkAbilityKit_Source_NetworkAbilityKit_Public_AttributeSetBase_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	NetworkAbilityKit_Plugins_NetworkAbilityKit_Source_NetworkAbilityKit_Public_AttributeSetBase_h_13_PRIVATE_PROPERTY_OFFSET \
	NetworkAbilityKit_Plugins_NetworkAbilityKit_Source_NetworkAbilityKit_Public_AttributeSetBase_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	NetworkAbilityKit_Plugins_NetworkAbilityKit_Source_NetworkAbilityKit_Public_AttributeSetBase_h_13_CALLBACK_WRAPPERS \
	NetworkAbilityKit_Plugins_NetworkAbilityKit_Source_NetworkAbilityKit_Public_AttributeSetBase_h_13_INCLASS_NO_PURE_DECLS \
	NetworkAbilityKit_Plugins_NetworkAbilityKit_Source_NetworkAbilityKit_Public_AttributeSetBase_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> NETWORKABILITYKIT_API UClass* StaticClass<class AAttributeSetBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID NetworkAbilityKit_Plugins_NetworkAbilityKit_Source_NetworkAbilityKit_Public_AttributeSetBase_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
