// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MYTESTGAME_MyBasicCharacter_generated_h
#error "MyBasicCharacter.generated.h already included, missing '#pragma once' in MyBasicCharacter.h"
#endif
#define MYTESTGAME_MyBasicCharacter_generated_h

#define MyTestGame_Source_MyTestGame_MyBasicCharacter_h_12_SPARSE_DATA
#define MyTestGame_Source_MyTestGame_MyBasicCharacter_h_12_RPC_WRAPPERS
#define MyTestGame_Source_MyTestGame_MyBasicCharacter_h_12_RPC_WRAPPERS_NO_PURE_DECLS
#define MyTestGame_Source_MyTestGame_MyBasicCharacter_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAMyBasicCharacter(); \
	friend struct Z_Construct_UClass_AMyBasicCharacter_Statics; \
public: \
	DECLARE_CLASS(AMyBasicCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MyTestGame"), NO_API) \
	DECLARE_SERIALIZER(AMyBasicCharacter)


#define MyTestGame_Source_MyTestGame_MyBasicCharacter_h_12_INCLASS \
private: \
	static void StaticRegisterNativesAMyBasicCharacter(); \
	friend struct Z_Construct_UClass_AMyBasicCharacter_Statics; \
public: \
	DECLARE_CLASS(AMyBasicCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MyTestGame"), NO_API) \
	DECLARE_SERIALIZER(AMyBasicCharacter)


#define MyTestGame_Source_MyTestGame_MyBasicCharacter_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AMyBasicCharacter(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AMyBasicCharacter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMyBasicCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMyBasicCharacter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMyBasicCharacter(AMyBasicCharacter&&); \
	NO_API AMyBasicCharacter(const AMyBasicCharacter&); \
public:


#define MyTestGame_Source_MyTestGame_MyBasicCharacter_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMyBasicCharacter(AMyBasicCharacter&&); \
	NO_API AMyBasicCharacter(const AMyBasicCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMyBasicCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMyBasicCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AMyBasicCharacter)


#define MyTestGame_Source_MyTestGame_MyBasicCharacter_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__WeaponAttachPoint() { return STRUCT_OFFSET(AMyBasicCharacter, WeaponAttachPoint); }


#define MyTestGame_Source_MyTestGame_MyBasicCharacter_h_9_PROLOG
#define MyTestGame_Source_MyTestGame_MyBasicCharacter_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MyTestGame_Source_MyTestGame_MyBasicCharacter_h_12_PRIVATE_PROPERTY_OFFSET \
	MyTestGame_Source_MyTestGame_MyBasicCharacter_h_12_SPARSE_DATA \
	MyTestGame_Source_MyTestGame_MyBasicCharacter_h_12_RPC_WRAPPERS \
	MyTestGame_Source_MyTestGame_MyBasicCharacter_h_12_INCLASS \
	MyTestGame_Source_MyTestGame_MyBasicCharacter_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define MyTestGame_Source_MyTestGame_MyBasicCharacter_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MyTestGame_Source_MyTestGame_MyBasicCharacter_h_12_PRIVATE_PROPERTY_OFFSET \
	MyTestGame_Source_MyTestGame_MyBasicCharacter_h_12_SPARSE_DATA \
	MyTestGame_Source_MyTestGame_MyBasicCharacter_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	MyTestGame_Source_MyTestGame_MyBasicCharacter_h_12_INCLASS_NO_PURE_DECLS \
	MyTestGame_Source_MyTestGame_MyBasicCharacter_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MYTESTGAME_API UClass* StaticClass<class AMyBasicCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID MyTestGame_Source_MyTestGame_MyBasicCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
