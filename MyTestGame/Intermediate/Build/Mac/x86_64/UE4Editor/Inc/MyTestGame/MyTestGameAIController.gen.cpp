// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MyTestGame/MyTestGameAIController.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMyTestGameAIController() {}
// Cross Module References
	MYTESTGAME_API UClass* Z_Construct_UClass_AMyTestGameAIController_NoRegister();
	MYTESTGAME_API UClass* Z_Construct_UClass_AMyTestGameAIController();
	AIMODULE_API UClass* Z_Construct_UClass_AAIController();
	UPackage* Z_Construct_UPackage__Script_MyTestGame();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	AIMODULE_API UClass* Z_Construct_UClass_UBlackboardComponent_NoRegister();
	AIMODULE_API UClass* Z_Construct_UClass_UBehaviorTreeComponent_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(AMyTestGameAIController::execOnPawnDetected)
	{
		P_GET_TARRAY_REF(AActor*,Z_Param_Out_DetectedPawns);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnPawnDetected(Z_Param_Out_DetectedPawns);
		P_NATIVE_END;
	}
	void AMyTestGameAIController::StaticRegisterNativesAMyTestGameAIController()
	{
		UClass* Class = AMyTestGameAIController::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnPawnDetected", &AMyTestGameAIController::execOnPawnDetected },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AMyTestGameAIController_OnPawnDetected_Statics
	{
		struct MyTestGameAIController_eventOnPawnDetected_Parms
		{
			TArray<AActor*> DetectedPawns;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DetectedPawns_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DetectedPawns_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_DetectedPawns;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AMyTestGameAIController_OnPawnDetected_Statics::NewProp_DetectedPawns_Inner = { "DetectedPawns", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMyTestGameAIController_OnPawnDetected_Statics::NewProp_DetectedPawns_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_AMyTestGameAIController_OnPawnDetected_Statics::NewProp_DetectedPawns = { "DetectedPawns", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MyTestGameAIController_eventOnPawnDetected_Parms, DetectedPawns), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_AMyTestGameAIController_OnPawnDetected_Statics::NewProp_DetectedPawns_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AMyTestGameAIController_OnPawnDetected_Statics::NewProp_DetectedPawns_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMyTestGameAIController_OnPawnDetected_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMyTestGameAIController_OnPawnDetected_Statics::NewProp_DetectedPawns_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMyTestGameAIController_OnPawnDetected_Statics::NewProp_DetectedPawns,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMyTestGameAIController_OnPawnDetected_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "MyTestGameAIController.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMyTestGameAIController_OnPawnDetected_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMyTestGameAIController, nullptr, "OnPawnDetected", nullptr, nullptr, sizeof(MyTestGameAIController_eventOnPawnDetected_Parms), Z_Construct_UFunction_AMyTestGameAIController_OnPawnDetected_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMyTestGameAIController_OnPawnDetected_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMyTestGameAIController_OnPawnDetected_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMyTestGameAIController_OnPawnDetected_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMyTestGameAIController_OnPawnDetected()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMyTestGameAIController_OnPawnDetected_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AMyTestGameAIController_NoRegister()
	{
		return AMyTestGameAIController::StaticClass();
	}
	struct Z_Construct_UClass_AMyTestGameAIController_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BlackboardComp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BlackboardComp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BehaviorComp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BehaviorComp;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMyTestGameAIController_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AAIController,
		(UObject* (*)())Z_Construct_UPackage__Script_MyTestGame,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AMyTestGameAIController_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AMyTestGameAIController_OnPawnDetected, "OnPawnDetected" }, // 1416577183
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyTestGameAIController_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "MyTestGameAIController.h" },
		{ "ModuleRelativePath", "MyTestGameAIController.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyTestGameAIController_Statics::NewProp_BlackboardComp_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "MyTestGameAIController.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMyTestGameAIController_Statics::NewProp_BlackboardComp = { "BlackboardComp", nullptr, (EPropertyFlags)0x0040000000082008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMyTestGameAIController, BlackboardComp), Z_Construct_UClass_UBlackboardComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMyTestGameAIController_Statics::NewProp_BlackboardComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMyTestGameAIController_Statics::NewProp_BlackboardComp_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyTestGameAIController_Statics::NewProp_BehaviorComp_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "MyTestGameAIController.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMyTestGameAIController_Statics::NewProp_BehaviorComp = { "BehaviorComp", nullptr, (EPropertyFlags)0x0040000000082008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMyTestGameAIController, BehaviorComp), Z_Construct_UClass_UBehaviorTreeComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMyTestGameAIController_Statics::NewProp_BehaviorComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMyTestGameAIController_Statics::NewProp_BehaviorComp_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMyTestGameAIController_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyTestGameAIController_Statics::NewProp_BlackboardComp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyTestGameAIController_Statics::NewProp_BehaviorComp,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMyTestGameAIController_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMyTestGameAIController>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AMyTestGameAIController_Statics::ClassParams = {
		&AMyTestGameAIController::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AMyTestGameAIController_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AMyTestGameAIController_Statics::PropPointers),
		0,
		0x009002A4u,
		METADATA_PARAMS(Z_Construct_UClass_AMyTestGameAIController_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AMyTestGameAIController_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AMyTestGameAIController()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AMyTestGameAIController_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AMyTestGameAIController, 2093836880);
	template<> MYTESTGAME_API UClass* StaticClass<AMyTestGameAIController>()
	{
		return AMyTestGameAIController::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AMyTestGameAIController(Z_Construct_UClass_AMyTestGameAIController, &AMyTestGameAIController::StaticClass, TEXT("/Script/MyTestGame"), TEXT("AMyTestGameAIController"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMyTestGameAIController);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
