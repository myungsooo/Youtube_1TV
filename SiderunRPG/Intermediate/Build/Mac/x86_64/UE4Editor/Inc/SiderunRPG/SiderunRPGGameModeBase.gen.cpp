// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SiderunRPG/SiderunRPGGameModeBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSiderunRPGGameModeBase() {}
// Cross Module References
	SIDERUNRPG_API UClass* Z_Construct_UClass_ASiderunRPGGameModeBase_NoRegister();
	SIDERUNRPG_API UClass* Z_Construct_UClass_ASiderunRPGGameModeBase();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_SiderunRPG();
// End Cross Module References
	void ASiderunRPGGameModeBase::StaticRegisterNativesASiderunRPGGameModeBase()
	{
	}
	UClass* Z_Construct_UClass_ASiderunRPGGameModeBase_NoRegister()
	{
		return ASiderunRPGGameModeBase::StaticClass();
	}
	struct Z_Construct_UClass_ASiderunRPGGameModeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASiderunRPGGameModeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_SiderunRPG,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASiderunRPGGameModeBase_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "SiderunRPGGameModeBase.h" },
		{ "ModuleRelativePath", "SiderunRPGGameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASiderunRPGGameModeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASiderunRPGGameModeBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ASiderunRPGGameModeBase_Statics::ClassParams = {
		&ASiderunRPGGameModeBase::StaticClass,
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
		0x009002ACu,
		METADATA_PARAMS(Z_Construct_UClass_ASiderunRPGGameModeBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ASiderunRPGGameModeBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ASiderunRPGGameModeBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ASiderunRPGGameModeBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ASiderunRPGGameModeBase, 4118971565);
	template<> SIDERUNRPG_API UClass* StaticClass<ASiderunRPGGameModeBase>()
	{
		return ASiderunRPGGameModeBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ASiderunRPGGameModeBase(Z_Construct_UClass_ASiderunRPGGameModeBase, &ASiderunRPGGameModeBase::StaticClass, TEXT("/Script/SiderunRPG"), TEXT("ASiderunRPGGameModeBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASiderunRPGGameModeBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
