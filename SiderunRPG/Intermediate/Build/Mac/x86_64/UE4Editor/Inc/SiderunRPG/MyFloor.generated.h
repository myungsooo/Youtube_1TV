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
#ifdef SIDERUNRPG_MyFloor_generated_h
#error "MyFloor.generated.h already included, missing '#pragma once' in MyFloor.h"
#endif
#define SIDERUNRPG_MyFloor_generated_h

#define SiderunRPG_Source_SiderunRPG_MyFloor_h_12_SPARSE_DATA
#define SiderunRPG_Source_SiderunRPG_MyFloor_h_12_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnOverlapBegin);


#define SiderunRPG_Source_SiderunRPG_MyFloor_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnOverlapBegin);


#define SiderunRPG_Source_SiderunRPG_MyFloor_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAMyFloor(); \
	friend struct Z_Construct_UClass_AMyFloor_Statics; \
public: \
	DECLARE_CLASS(AMyFloor, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/SiderunRPG"), NO_API) \
	DECLARE_SERIALIZER(AMyFloor)


#define SiderunRPG_Source_SiderunRPG_MyFloor_h_12_INCLASS \
private: \
	static void StaticRegisterNativesAMyFloor(); \
	friend struct Z_Construct_UClass_AMyFloor_Statics; \
public: \
	DECLARE_CLASS(AMyFloor, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/SiderunRPG"), NO_API) \
	DECLARE_SERIALIZER(AMyFloor)


#define SiderunRPG_Source_SiderunRPG_MyFloor_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AMyFloor(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AMyFloor) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMyFloor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMyFloor); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMyFloor(AMyFloor&&); \
	NO_API AMyFloor(const AMyFloor&); \
public:


#define SiderunRPG_Source_SiderunRPG_MyFloor_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMyFloor(AMyFloor&&); \
	NO_API AMyFloor(const AMyFloor&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMyFloor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMyFloor); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AMyFloor)


#define SiderunRPG_Source_SiderunRPG_MyFloor_h_12_PRIVATE_PROPERTY_OFFSET
#define SiderunRPG_Source_SiderunRPG_MyFloor_h_9_PROLOG
#define SiderunRPG_Source_SiderunRPG_MyFloor_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	SiderunRPG_Source_SiderunRPG_MyFloor_h_12_PRIVATE_PROPERTY_OFFSET \
	SiderunRPG_Source_SiderunRPG_MyFloor_h_12_SPARSE_DATA \
	SiderunRPG_Source_SiderunRPG_MyFloor_h_12_RPC_WRAPPERS \
	SiderunRPG_Source_SiderunRPG_MyFloor_h_12_INCLASS \
	SiderunRPG_Source_SiderunRPG_MyFloor_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define SiderunRPG_Source_SiderunRPG_MyFloor_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	SiderunRPG_Source_SiderunRPG_MyFloor_h_12_PRIVATE_PROPERTY_OFFSET \
	SiderunRPG_Source_SiderunRPG_MyFloor_h_12_SPARSE_DATA \
	SiderunRPG_Source_SiderunRPG_MyFloor_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	SiderunRPG_Source_SiderunRPG_MyFloor_h_12_INCLASS_NO_PURE_DECLS \
	SiderunRPG_Source_SiderunRPG_MyFloor_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SIDERUNRPG_API UClass* StaticClass<class AMyFloor>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID SiderunRPG_Source_SiderunRPG_MyFloor_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
