// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MYTESTGAME_MyTestGameCharacter_generated_h
#error "MyTestGameCharacter.generated.h already included, missing '#pragma once' in MyTestGameCharacter.h"
#endif
#define MYTESTGAME_MyTestGameCharacter_generated_h

#define MyTestGame_Source_MyTestGame_MyTestGameCharacter_h_15_SPARSE_DATA
#define MyTestGame_Source_MyTestGame_MyTestGameCharacter_h_15_RPC_WRAPPERS
#define MyTestGame_Source_MyTestGame_MyTestGameCharacter_h_15_RPC_WRAPPERS_NO_PURE_DECLS
#define MyTestGame_Source_MyTestGame_MyTestGameCharacter_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAMyTestGameCharacter(); \
	friend struct Z_Construct_UClass_AMyTestGameCharacter_Statics; \
public: \
	DECLARE_CLASS(AMyTestGameCharacter, AMyBasicCharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MyTestGame"), NO_API) \
	DECLARE_SERIALIZER(AMyTestGameCharacter)


#define MyTestGame_Source_MyTestGame_MyTestGameCharacter_h_15_INCLASS \
private: \
	static void StaticRegisterNativesAMyTestGameCharacter(); \
	friend struct Z_Construct_UClass_AMyTestGameCharacter_Statics; \
public: \
	DECLARE_CLASS(AMyTestGameCharacter, AMyBasicCharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MyTestGame"), NO_API) \
	DECLARE_SERIALIZER(AMyTestGameCharacter)


#define MyTestGame_Source_MyTestGame_MyTestGameCharacter_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AMyTestGameCharacter(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AMyTestGameCharacter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMyTestGameCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMyTestGameCharacter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMyTestGameCharacter(AMyTestGameCharacter&&); \
	NO_API AMyTestGameCharacter(const AMyTestGameCharacter&); \
public:


#define MyTestGame_Source_MyTestGame_MyTestGameCharacter_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMyTestGameCharacter(AMyTestGameCharacter&&); \
	NO_API AMyTestGameCharacter(const AMyTestGameCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMyTestGameCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMyTestGameCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AMyTestGameCharacter)


#define MyTestGame_Source_MyTestGame_MyTestGameCharacter_h_15_PRIVATE_PROPERTY_OFFSET
#define MyTestGame_Source_MyTestGame_MyTestGameCharacter_h_12_PROLOG
#define MyTestGame_Source_MyTestGame_MyTestGameCharacter_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MyTestGame_Source_MyTestGame_MyTestGameCharacter_h_15_PRIVATE_PROPERTY_OFFSET \
	MyTestGame_Source_MyTestGame_MyTestGameCharacter_h_15_SPARSE_DATA \
	MyTestGame_Source_MyTestGame_MyTestGameCharacter_h_15_RPC_WRAPPERS \
	MyTestGame_Source_MyTestGame_MyTestGameCharacter_h_15_INCLASS \
	MyTestGame_Source_MyTestGame_MyTestGameCharacter_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define MyTestGame_Source_MyTestGame_MyTestGameCharacter_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MyTestGame_Source_MyTestGame_MyTestGameCharacter_h_15_PRIVATE_PROPERTY_OFFSET \
	MyTestGame_Source_MyTestGame_MyTestGameCharacter_h_15_SPARSE_DATA \
	MyTestGame_Source_MyTestGame_MyTestGameCharacter_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	MyTestGame_Source_MyTestGame_MyTestGameCharacter_h_15_INCLASS_NO_PURE_DECLS \
	MyTestGame_Source_MyTestGame_MyTestGameCharacter_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MYTESTGAME_API UClass* StaticClass<class AMyTestGameCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID MyTestGame_Source_MyTestGame_MyTestGameCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
