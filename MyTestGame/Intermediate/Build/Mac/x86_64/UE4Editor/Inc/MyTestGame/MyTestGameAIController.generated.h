// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
#ifdef MYTESTGAME_MyTestGameAIController_generated_h
#error "MyTestGameAIController.generated.h already included, missing '#pragma once' in MyTestGameAIController.h"
#endif
#define MYTESTGAME_MyTestGameAIController_generated_h

#define MyTestGame_Source_MyTestGame_MyTestGameAIController_h_18_SPARSE_DATA
#define MyTestGame_Source_MyTestGame_MyTestGameAIController_h_18_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnPawnDetected);


#define MyTestGame_Source_MyTestGame_MyTestGameAIController_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnPawnDetected);


#define MyTestGame_Source_MyTestGame_MyTestGameAIController_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAMyTestGameAIController(); \
	friend struct Z_Construct_UClass_AMyTestGameAIController_Statics; \
public: \
	DECLARE_CLASS(AMyTestGameAIController, AAIController, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MyTestGame"), NO_API) \
	DECLARE_SERIALIZER(AMyTestGameAIController) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define MyTestGame_Source_MyTestGame_MyTestGameAIController_h_18_INCLASS \
private: \
	static void StaticRegisterNativesAMyTestGameAIController(); \
	friend struct Z_Construct_UClass_AMyTestGameAIController_Statics; \
public: \
	DECLARE_CLASS(AMyTestGameAIController, AAIController, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MyTestGame"), NO_API) \
	DECLARE_SERIALIZER(AMyTestGameAIController) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define MyTestGame_Source_MyTestGame_MyTestGameAIController_h_18_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AMyTestGameAIController(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AMyTestGameAIController) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMyTestGameAIController); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMyTestGameAIController); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMyTestGameAIController(AMyTestGameAIController&&); \
	NO_API AMyTestGameAIController(const AMyTestGameAIController&); \
public:


#define MyTestGame_Source_MyTestGame_MyTestGameAIController_h_18_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMyTestGameAIController(AMyTestGameAIController&&); \
	NO_API AMyTestGameAIController(const AMyTestGameAIController&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMyTestGameAIController); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMyTestGameAIController); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AMyTestGameAIController)


#define MyTestGame_Source_MyTestGame_MyTestGameAIController_h_18_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__BlackboardComp() { return STRUCT_OFFSET(AMyTestGameAIController, BlackboardComp); } \
	FORCEINLINE static uint32 __PPO__BehaviorComp() { return STRUCT_OFFSET(AMyTestGameAIController, BehaviorComp); }


#define MyTestGame_Source_MyTestGame_MyTestGameAIController_h_15_PROLOG
#define MyTestGame_Source_MyTestGame_MyTestGameAIController_h_18_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MyTestGame_Source_MyTestGame_MyTestGameAIController_h_18_PRIVATE_PROPERTY_OFFSET \
	MyTestGame_Source_MyTestGame_MyTestGameAIController_h_18_SPARSE_DATA \
	MyTestGame_Source_MyTestGame_MyTestGameAIController_h_18_RPC_WRAPPERS \
	MyTestGame_Source_MyTestGame_MyTestGameAIController_h_18_INCLASS \
	MyTestGame_Source_MyTestGame_MyTestGameAIController_h_18_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define MyTestGame_Source_MyTestGame_MyTestGameAIController_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MyTestGame_Source_MyTestGame_MyTestGameAIController_h_18_PRIVATE_PROPERTY_OFFSET \
	MyTestGame_Source_MyTestGame_MyTestGameAIController_h_18_SPARSE_DATA \
	MyTestGame_Source_MyTestGame_MyTestGameAIController_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	MyTestGame_Source_MyTestGame_MyTestGameAIController_h_18_INCLASS_NO_PURE_DECLS \
	MyTestGame_Source_MyTestGame_MyTestGameAIController_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MYTESTGAME_API UClass* StaticClass<class AMyTestGameAIController>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID MyTestGame_Source_MyTestGame_MyTestGameAIController_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
