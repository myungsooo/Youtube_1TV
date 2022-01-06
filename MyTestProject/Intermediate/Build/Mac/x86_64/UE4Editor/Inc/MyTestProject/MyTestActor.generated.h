// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPrimitiveComponent;
class AActor;
struct FHitResult;
#ifdef MYTESTPROJECT_MyTestActor_generated_h
#error "MyTestActor.generated.h already included, missing '#pragma once' in MyTestActor.h"
#endif
#define MYTESTPROJECT_MyTestActor_generated_h

#define MyTestProject_Source_MyTestProject_MyTestActor_h_13_SPARSE_DATA
#define MyTestProject_Source_MyTestProject_MyTestActor_h_13_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnOverlapBegin);


#define MyTestProject_Source_MyTestProject_MyTestActor_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnOverlapBegin);


#define MyTestProject_Source_MyTestProject_MyTestActor_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAMyTestActor(); \
	friend struct Z_Construct_UClass_AMyTestActor_Statics; \
public: \
	DECLARE_CLASS(AMyTestActor, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MyTestProject"), NO_API) \
	DECLARE_SERIALIZER(AMyTestActor)


#define MyTestProject_Source_MyTestProject_MyTestActor_h_13_INCLASS \
private: \
	static void StaticRegisterNativesAMyTestActor(); \
	friend struct Z_Construct_UClass_AMyTestActor_Statics; \
public: \
	DECLARE_CLASS(AMyTestActor, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MyTestProject"), NO_API) \
	DECLARE_SERIALIZER(AMyTestActor)


#define MyTestProject_Source_MyTestProject_MyTestActor_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AMyTestActor(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AMyTestActor) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMyTestActor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMyTestActor); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMyTestActor(AMyTestActor&&); \
	NO_API AMyTestActor(const AMyTestActor&); \
public:


#define MyTestProject_Source_MyTestProject_MyTestActor_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMyTestActor(AMyTestActor&&); \
	NO_API AMyTestActor(const AMyTestActor&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMyTestActor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMyTestActor); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AMyTestActor)


#define MyTestProject_Source_MyTestProject_MyTestActor_h_13_PRIVATE_PROPERTY_OFFSET
#define MyTestProject_Source_MyTestProject_MyTestActor_h_10_PROLOG
#define MyTestProject_Source_MyTestProject_MyTestActor_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MyTestProject_Source_MyTestProject_MyTestActor_h_13_PRIVATE_PROPERTY_OFFSET \
	MyTestProject_Source_MyTestProject_MyTestActor_h_13_SPARSE_DATA \
	MyTestProject_Source_MyTestProject_MyTestActor_h_13_RPC_WRAPPERS \
	MyTestProject_Source_MyTestProject_MyTestActor_h_13_INCLASS \
	MyTestProject_Source_MyTestProject_MyTestActor_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define MyTestProject_Source_MyTestProject_MyTestActor_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MyTestProject_Source_MyTestProject_MyTestActor_h_13_PRIVATE_PROPERTY_OFFSET \
	MyTestProject_Source_MyTestProject_MyTestActor_h_13_SPARSE_DATA \
	MyTestProject_Source_MyTestProject_MyTestActor_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	MyTestProject_Source_MyTestProject_MyTestActor_h_13_INCLASS_NO_PURE_DECLS \
	MyTestProject_Source_MyTestProject_MyTestActor_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MYTESTPROJECT_API UClass* StaticClass<class AMyTestActor>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID MyTestProject_Source_MyTestProject_MyTestActor_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
