// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MyTestProject/BasicCharacter.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBasicCharacter() {}
// Cross Module References
	MYTESTPROJECT_API UClass* Z_Construct_UClass_ABasicCharacter_NoRegister();
	MYTESTPROJECT_API UClass* Z_Construct_UClass_ABasicCharacter();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	UPackage* Z_Construct_UPackage__Script_MyTestProject();
	ENGINE_API UClass* Z_Construct_UClass_UAnimMontage_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(ABasicCharacter::execAttack_Melee_End)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Attack_Melee_End();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ABasicCharacter::execAttack_Melee)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Attack_Melee();
		P_NATIVE_END;
	}
	void ABasicCharacter::StaticRegisterNativesABasicCharacter()
	{
		UClass* Class = ABasicCharacter::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Attack_Melee", &ABasicCharacter::execAttack_Melee },
			{ "Attack_Melee_End", &ABasicCharacter::execAttack_Melee_End },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ABasicCharacter_Attack_Melee_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABasicCharacter_Attack_Melee_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "BasicCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ABasicCharacter_Attack_Melee_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABasicCharacter, nullptr, "Attack_Melee", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABasicCharacter_Attack_Melee_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ABasicCharacter_Attack_Melee_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABasicCharacter_Attack_Melee()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ABasicCharacter_Attack_Melee_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ABasicCharacter_Attack_Melee_End_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABasicCharacter_Attack_Melee_End_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "BasicCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ABasicCharacter_Attack_Melee_End_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABasicCharacter, nullptr, "Attack_Melee_End", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABasicCharacter_Attack_Melee_End_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ABasicCharacter_Attack_Melee_End_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABasicCharacter_Attack_Melee_End()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ABasicCharacter_Attack_Melee_End_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ABasicCharacter_NoRegister()
	{
		return ABasicCharacter::StaticClass();
	}
	struct Z_Construct_UClass_ABasicCharacter_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Attack_Melee_Anim01_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Attack_Melee_Anim01;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Attack_Melee_Anim02_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Attack_Melee_Anim02;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Attack_Melee_Anim03_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Attack_Melee_Anim03;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_isDuringAttck_MetaData[];
#endif
		static void NewProp_isDuringAttck_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_isDuringAttck;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ABasicCharacter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_MyTestProject,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ABasicCharacter_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ABasicCharacter_Attack_Melee, "Attack_Melee" }, // 2772313427
		{ &Z_Construct_UFunction_ABasicCharacter_Attack_Melee_End, "Attack_Melee_End" }, // 2376774947
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABasicCharacter_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "BasicCharacter.h" },
		{ "ModuleRelativePath", "BasicCharacter.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABasicCharacter_Statics::NewProp_Attack_Melee_Anim01_MetaData[] = {
		{ "Category", "Pawn" },
		{ "ModuleRelativePath", "BasicCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABasicCharacter_Statics::NewProp_Attack_Melee_Anim01 = { "Attack_Melee_Anim01", nullptr, (EPropertyFlags)0x0010000000010001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABasicCharacter, Attack_Melee_Anim01), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABasicCharacter_Statics::NewProp_Attack_Melee_Anim01_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABasicCharacter_Statics::NewProp_Attack_Melee_Anim01_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABasicCharacter_Statics::NewProp_Attack_Melee_Anim02_MetaData[] = {
		{ "Category", "Pawn" },
		{ "ModuleRelativePath", "BasicCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABasicCharacter_Statics::NewProp_Attack_Melee_Anim02 = { "Attack_Melee_Anim02", nullptr, (EPropertyFlags)0x0010000000010001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABasicCharacter, Attack_Melee_Anim02), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABasicCharacter_Statics::NewProp_Attack_Melee_Anim02_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABasicCharacter_Statics::NewProp_Attack_Melee_Anim02_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABasicCharacter_Statics::NewProp_Attack_Melee_Anim03_MetaData[] = {
		{ "Category", "Pawn" },
		{ "ModuleRelativePath", "BasicCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABasicCharacter_Statics::NewProp_Attack_Melee_Anim03 = { "Attack_Melee_Anim03", nullptr, (EPropertyFlags)0x0010000000010001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABasicCharacter, Attack_Melee_Anim03), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABasicCharacter_Statics::NewProp_Attack_Melee_Anim03_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABasicCharacter_Statics::NewProp_Attack_Melee_Anim03_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABasicCharacter_Statics::NewProp_isDuringAttck_MetaData[] = {
		{ "Category", "BasicCharacter" },
		{ "ModuleRelativePath", "BasicCharacter.h" },
	};
#endif
	void Z_Construct_UClass_ABasicCharacter_Statics::NewProp_isDuringAttck_SetBit(void* Obj)
	{
		((ABasicCharacter*)Obj)->isDuringAttck = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ABasicCharacter_Statics::NewProp_isDuringAttck = { "isDuringAttck", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ABasicCharacter), &Z_Construct_UClass_ABasicCharacter_Statics::NewProp_isDuringAttck_SetBit, METADATA_PARAMS(Z_Construct_UClass_ABasicCharacter_Statics::NewProp_isDuringAttck_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABasicCharacter_Statics::NewProp_isDuringAttck_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ABasicCharacter_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABasicCharacter_Statics::NewProp_Attack_Melee_Anim01,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABasicCharacter_Statics::NewProp_Attack_Melee_Anim02,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABasicCharacter_Statics::NewProp_Attack_Melee_Anim03,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABasicCharacter_Statics::NewProp_isDuringAttck,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ABasicCharacter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABasicCharacter>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ABasicCharacter_Statics::ClassParams = {
		&ABasicCharacter::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ABasicCharacter_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ABasicCharacter_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ABasicCharacter_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ABasicCharacter_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ABasicCharacter()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ABasicCharacter_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ABasicCharacter, 2184530093);
	template<> MYTESTPROJECT_API UClass* StaticClass<ABasicCharacter>()
	{
		return ABasicCharacter::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ABasicCharacter(Z_Construct_UClass_ABasicCharacter, &ABasicCharacter::StaticClass, TEXT("/Script/MyTestProject"), TEXT("ABasicCharacter"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ABasicCharacter);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
