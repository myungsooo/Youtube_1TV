// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MYTESTPROJECT_MyTestProjectGameModeBase_generated_h
#error "MyTestProjectGameModeBase.generated.h already included, missing '#pragma once' in MyTestProjectGameModeBase.h"
#endif
#define MYTESTPROJECT_MyTestProjectGameModeBase_generated_h

#define MyTestProject_Source_MyTestProject_MyTestProjectGameModeBase_h_15_SPARSE_DATA
#define MyTestProject_Source_MyTestProject_MyTestProjectGameModeBase_h_15_RPC_WRAPPERS
#define MyTestProject_Source_MyTestProject_MyTestProjectGameModeBase_h_15_RPC_WRAPPERS_NO_PURE_DECLS
#define MyTestProject_Source_MyTestProject_MyTestProjectGameModeBase_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAMyTestProjectGameModeBase(); \
	friend struct Z_Construct_UClass_AMyTestProjectGameModeBase_Statics; \
public: \
	DECLARE_CLASS(AMyTestProjectGameModeBase, AGameModeBase, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/MyTestProject"), NO_API) \
	DECLARE_SERIALIZER(AMyTestProjectGameModeBase)


#define MyTestProject_Source_MyTestProject_MyTestProjectGameModeBase_h_15_INCLASS \
private: \
	static void StaticRegisterNativesAMyTestProjectGameModeBase(); \
	friend struct Z_Construct_UClass_AMyTestProjectGameModeBase_Statics; \
public: \
	DECLARE_CLASS(AMyTestProjectGameModeBase, AGameModeBase, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/MyTestProject"), NO_API) \
	DECLARE_SERIALIZER(AMyTestProjectGameModeBase)


#define MyTestProject_Source_MyTestProject_MyTestProjectGameModeBase_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AMyTestProjectGameModeBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AMyTestProjectGameModeBase) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMyTestProjectGameModeBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMyTestProjectGameModeBase); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMyTestProjectGameModeBase(AMyTestProjectGameModeBase&&); \
	NO_API AMyTestProjectGameModeBase(const AMyTestProjectGameModeBase&); \
public:


#define MyTestProject_Source_MyTestProject_MyTestProjectGameModeBase_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AMyTestProjectGameModeBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMyTestProjectGameModeBase(AMyTestProjectGameModeBase&&); \
	NO_API AMyTestProjectGameModeBase(const AMyTestProjectGameModeBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMyTestProjectGameModeBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMyTestProjectGameModeBase); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AMyTestProjectGameModeBase)


#define MyTestProject_Source_MyTestProject_MyTestProjectGameModeBase_h_15_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__CurrentWidget() { return STRUCT_OFFSET(AMyTestProjectGameModeBase, CurrentWidget); } \
	FORCEINLINE static uint32 __PPO__HUDwidget() { return STRUCT_OFFSET(AMyTestProjectGameModeBase, HUDwidget); }


#define MyTestProject_Source_MyTestProject_MyTestProjectGameModeBase_h_12_PROLOG
#define MyTestProject_Source_MyTestProject_MyTestProjectGameModeBase_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MyTestProject_Source_MyTestProject_MyTestProjectGameModeBase_h_15_PRIVATE_PROPERTY_OFFSET \
	MyTestProject_Source_MyTestProject_MyTestProjectGameModeBase_h_15_SPARSE_DATA \
	MyTestProject_Source_MyTestProject_MyTestProjectGameModeBase_h_15_RPC_WRAPPERS \
	MyTestProject_Source_MyTestProject_MyTestProjectGameModeBase_h_15_INCLASS \
	MyTestProject_Source_MyTestProject_MyTestProjectGameModeBase_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define MyTestProject_Source_MyTestProject_MyTestProjectGameModeBase_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MyTestProject_Source_MyTestProject_MyTestProjectGameModeBase_h_15_PRIVATE_PROPERTY_OFFSET \
	MyTestProject_Source_MyTestProject_MyTestProjectGameModeBase_h_15_SPARSE_DATA \
	MyTestProject_Source_MyTestProject_MyTestProjectGameModeBase_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	MyTestProject_Source_MyTestProject_MyTestProjectGameModeBase_h_15_INCLASS_NO_PURE_DECLS \
	MyTestProject_Source_MyTestProject_MyTestProjectGameModeBase_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MYTESTPROJECT_API UClass* StaticClass<class AMyTestProjectGameModeBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID MyTestProject_Source_MyTestProject_MyTestProjectGameModeBase_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
