// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MYTESTPROJECT_MyTestCharacter_generated_h
#error "MyTestCharacter.generated.h already included, missing '#pragma once' in MyTestCharacter.h"
#endif
#define MYTESTPROJECT_MyTestCharacter_generated_h

#define MyTestProject_Source_MyTestProject_MyTestCharacter_h_15_SPARSE_DATA
#define MyTestProject_Source_MyTestProject_MyTestCharacter_h_15_RPC_WRAPPERS
#define MyTestProject_Source_MyTestProject_MyTestCharacter_h_15_RPC_WRAPPERS_NO_PURE_DECLS
#define MyTestProject_Source_MyTestProject_MyTestCharacter_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAMyTestCharacter(); \
	friend struct Z_Construct_UClass_AMyTestCharacter_Statics; \
public: \
	DECLARE_CLASS(AMyTestCharacter, ABasicCharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MyTestProject"), NO_API) \
	DECLARE_SERIALIZER(AMyTestCharacter)


#define MyTestProject_Source_MyTestProject_MyTestCharacter_h_15_INCLASS \
private: \
	static void StaticRegisterNativesAMyTestCharacter(); \
	friend struct Z_Construct_UClass_AMyTestCharacter_Statics; \
public: \
	DECLARE_CLASS(AMyTestCharacter, ABasicCharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MyTestProject"), NO_API) \
	DECLARE_SERIALIZER(AMyTestCharacter)


#define MyTestProject_Source_MyTestProject_MyTestCharacter_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AMyTestCharacter(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AMyTestCharacter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMyTestCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMyTestCharacter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMyTestCharacter(AMyTestCharacter&&); \
	NO_API AMyTestCharacter(const AMyTestCharacter&); \
public:


#define MyTestProject_Source_MyTestProject_MyTestCharacter_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMyTestCharacter(AMyTestCharacter&&); \
	NO_API AMyTestCharacter(const AMyTestCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMyTestCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMyTestCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AMyTestCharacter)


#define MyTestProject_Source_MyTestProject_MyTestCharacter_h_15_PRIVATE_PROPERTY_OFFSET
#define MyTestProject_Source_MyTestProject_MyTestCharacter_h_12_PROLOG
#define MyTestProject_Source_MyTestProject_MyTestCharacter_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MyTestProject_Source_MyTestProject_MyTestCharacter_h_15_PRIVATE_PROPERTY_OFFSET \
	MyTestProject_Source_MyTestProject_MyTestCharacter_h_15_SPARSE_DATA \
	MyTestProject_Source_MyTestProject_MyTestCharacter_h_15_RPC_WRAPPERS \
	MyTestProject_Source_MyTestProject_MyTestCharacter_h_15_INCLASS \
	MyTestProject_Source_MyTestProject_MyTestCharacter_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define MyTestProject_Source_MyTestProject_MyTestCharacter_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MyTestProject_Source_MyTestProject_MyTestCharacter_h_15_PRIVATE_PROPERTY_OFFSET \
	MyTestProject_Source_MyTestProject_MyTestCharacter_h_15_SPARSE_DATA \
	MyTestProject_Source_MyTestProject_MyTestCharacter_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	MyTestProject_Source_MyTestProject_MyTestCharacter_h_15_INCLASS_NO_PURE_DECLS \
	MyTestProject_Source_MyTestProject_MyTestCharacter_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MYTESTPROJECT_API UClass* StaticClass<class AMyTestCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID MyTestProject_Source_MyTestProject_MyTestCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
