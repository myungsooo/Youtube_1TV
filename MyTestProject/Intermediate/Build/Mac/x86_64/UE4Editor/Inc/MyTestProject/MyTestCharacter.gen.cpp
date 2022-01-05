// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MyTestProject/MyTestCharacter.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMyTestCharacter() {}
// Cross Module References
	MYTESTPROJECT_API UClass* Z_Construct_UClass_AMyTestCharacter_NoRegister();
	MYTESTPROJECT_API UClass* Z_Construct_UClass_AMyTestCharacter();
	MYTESTPROJECT_API UClass* Z_Construct_UClass_ABasicCharacter();
	UPackage* Z_Construct_UPackage__Script_MyTestProject();
// End Cross Module References
	void AMyTestCharacter::StaticRegisterNativesAMyTestCharacter()
	{
	}
	UClass* Z_Construct_UClass_AMyTestCharacter_NoRegister()
	{
		return AMyTestCharacter::StaticClass();
	}
	struct Z_Construct_UClass_AMyTestCharacter_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMyTestCharacter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ABasicCharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_MyTestProject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyTestCharacter_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "MyTestCharacter.h" },
		{ "ModuleRelativePath", "MyTestCharacter.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMyTestCharacter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMyTestCharacter>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AMyTestCharacter_Statics::ClassParams = {
		&AMyTestCharacter::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_AMyTestCharacter_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AMyTestCharacter_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AMyTestCharacter()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AMyTestCharacter_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AMyTestCharacter, 3333337713);
	template<> MYTESTPROJECT_API UClass* StaticClass<AMyTestCharacter>()
	{
		return AMyTestCharacter::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AMyTestCharacter(Z_Construct_UClass_AMyTestCharacter, &AMyTestCharacter::StaticClass, TEXT("/Script/MyTestProject"), TEXT("AMyTestCharacter"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMyTestCharacter);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
