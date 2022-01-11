// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MYTESTGAME_MyTestWeapon_generated_h
#error "MyTestWeapon.generated.h already included, missing '#pragma once' in MyTestWeapon.h"
#endif
#define MYTESTGAME_MyTestWeapon_generated_h

#define MyTestGame_Source_MyTestGame_MyTestWeapon_h_14_SPARSE_DATA
#define MyTestGame_Source_MyTestGame_MyTestWeapon_h_14_RPC_WRAPPERS
#define MyTestGame_Source_MyTestGame_MyTestWeapon_h_14_RPC_WRAPPERS_NO_PURE_DECLS
#define MyTestGame_Source_MyTestGame_MyTestWeapon_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAMyTestWeapon(); \
	friend struct Z_Construct_UClass_AMyTestWeapon_Statics; \
public: \
	DECLARE_CLASS(AMyTestWeapon, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MyTestGame"), NO_API) \
	DECLARE_SERIALIZER(AMyTestWeapon)


#define MyTestGame_Source_MyTestGame_MyTestWeapon_h_14_INCLASS \
private: \
	static void StaticRegisterNativesAMyTestWeapon(); \
	friend struct Z_Construct_UClass_AMyTestWeapon_Statics; \
public: \
	DECLARE_CLASS(AMyTestWeapon, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MyTestGame"), NO_API) \
	DECLARE_SERIALIZER(AMyTestWeapon)


#define MyTestGame_Source_MyTestGame_MyTestWeapon_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AMyTestWeapon(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AMyTestWeapon) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMyTestWeapon); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMyTestWeapon); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMyTestWeapon(AMyTestWeapon&&); \
	NO_API AMyTestWeapon(const AMyTestWeapon&); \
public:


#define MyTestGame_Source_MyTestGame_MyTestWeapon_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMyTestWeapon(AMyTestWeapon&&); \
	NO_API AMyTestWeapon(const AMyTestWeapon&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMyTestWeapon); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMyTestWeapon); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AMyTestWeapon)


#define MyTestGame_Source_MyTestGame_MyTestWeapon_h_14_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__WeaponMesh() { return STRUCT_OFFSET(AMyTestWeapon, WeaponMesh); } \
	FORCEINLINE static uint32 __PPO__WeaponCollision() { return STRUCT_OFFSET(AMyTestWeapon, WeaponCollision); }


#define MyTestGame_Source_MyTestGame_MyTestWeapon_h_11_PROLOG
#define MyTestGame_Source_MyTestGame_MyTestWeapon_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MyTestGame_Source_MyTestGame_MyTestWeapon_h_14_PRIVATE_PROPERTY_OFFSET \
	MyTestGame_Source_MyTestGame_MyTestWeapon_h_14_SPARSE_DATA \
	MyTestGame_Source_MyTestGame_MyTestWeapon_h_14_RPC_WRAPPERS \
	MyTestGame_Source_MyTestGame_MyTestWeapon_h_14_INCLASS \
	MyTestGame_Source_MyTestGame_MyTestWeapon_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define MyTestGame_Source_MyTestGame_MyTestWeapon_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MyTestGame_Source_MyTestGame_MyTestWeapon_h_14_PRIVATE_PROPERTY_OFFSET \
	MyTestGame_Source_MyTestGame_MyTestWeapon_h_14_SPARSE_DATA \
	MyTestGame_Source_MyTestGame_MyTestWeapon_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	MyTestGame_Source_MyTestGame_MyTestWeapon_h_14_INCLASS_NO_PURE_DECLS \
	MyTestGame_Source_MyTestGame_MyTestWeapon_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MYTESTGAME_API UClass* StaticClass<class AMyTestWeapon>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID MyTestGame_Source_MyTestGame_MyTestWeapon_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
