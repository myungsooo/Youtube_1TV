// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MyTestGame/MyBasicCharacter.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMyBasicCharacter() {}
// Cross Module References
	MYTESTGAME_API UClass* Z_Construct_UClass_AMyBasicCharacter_NoRegister();
	MYTESTGAME_API UClass* Z_Construct_UClass_AMyBasicCharacter();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	UPackage* Z_Construct_UPackage__Script_MyTestGame();
// End Cross Module References
	void AMyBasicCharacter::StaticRegisterNativesAMyBasicCharacter()
	{
	}
	UClass* Z_Construct_UClass_AMyBasicCharacter_NoRegister()
	{
		return AMyBasicCharacter::StaticClass();
	}
	struct Z_Construct_UClass_AMyBasicCharacter_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMyBasicCharacter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_MyTestGame,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyBasicCharacter_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "MyBasicCharacter.h" },
		{ "ModuleRelativePath", "MyBasicCharacter.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMyBasicCharacter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMyBasicCharacter>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AMyBasicCharacter_Statics::ClassParams = {
		&AMyBasicCharacter::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AMyBasicCharacter_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AMyBasicCharacter_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AMyBasicCharacter()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AMyBasicCharacter_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AMyBasicCharacter, 108090660);
	template<> MYTESTGAME_API UClass* StaticClass<AMyBasicCharacter>()
	{
		return AMyBasicCharacter::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AMyBasicCharacter(Z_Construct_UClass_AMyBasicCharacter, &AMyBasicCharacter::StaticClass, TEXT("/Script/MyTestGame"), TEXT("AMyBasicCharacter"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMyBasicCharacter);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
