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
	ENGINE_API UClass* Z_Construct_UClass_USpringArmComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
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
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CameraBoom_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CameraBoom;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FollowCamera_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_FollowCamera;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
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
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyTestCharacter_Statics::NewProp_CameraBoom_MetaData[] = {
		{ "Category", "Camera" },
		{ "Comment", "// \xec\x9e\x90\xec\xa3\xbc \xec\x82\xac\xec\x9a\xa9\xed\x95\x98\xeb\x8a\x94 \xed\x8c\xa8\xed\x84\xb4\xec\x9d\xb4\xeb\x8b\x88 \xec\x95\x94\xea\xb8\xb0\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "MyTestCharacter.h" },
		{ "ToolTip", "\xec\x9e\x90\xec\xa3\xbc \xec\x82\xac\xec\x9a\xa9\xed\x95\x98\xeb\x8a\x94 \xed\x8c\xa8\xed\x84\xb4\xec\x9d\xb4\xeb\x8b\x88 \xec\x95\x94\xea\xb8\xb0" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMyTestCharacter_Statics::NewProp_CameraBoom = { "CameraBoom", nullptr, (EPropertyFlags)0x00100000000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMyTestCharacter, CameraBoom), Z_Construct_UClass_USpringArmComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMyTestCharacter_Statics::NewProp_CameraBoom_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMyTestCharacter_Statics::NewProp_CameraBoom_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyTestCharacter_Statics::NewProp_FollowCamera_MetaData[] = {
		{ "Category", "Camera" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "MyTestCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMyTestCharacter_Statics::NewProp_FollowCamera = { "FollowCamera", nullptr, (EPropertyFlags)0x00100000000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMyTestCharacter, FollowCamera), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMyTestCharacter_Statics::NewProp_FollowCamera_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMyTestCharacter_Statics::NewProp_FollowCamera_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMyTestCharacter_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyTestCharacter_Statics::NewProp_CameraBoom,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyTestCharacter_Statics::NewProp_FollowCamera,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMyTestCharacter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMyTestCharacter>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AMyTestCharacter_Statics::ClassParams = {
		&AMyTestCharacter::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AMyTestCharacter_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AMyTestCharacter_Statics::PropPointers),
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
	IMPLEMENT_CLASS(AMyTestCharacter, 4165607934);
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
