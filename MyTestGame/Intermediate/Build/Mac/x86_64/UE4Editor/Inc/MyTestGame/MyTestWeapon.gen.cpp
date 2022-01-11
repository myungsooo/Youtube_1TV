// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MyTestGame/MyTestWeapon.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMyTestWeapon() {}
// Cross Module References
	MYTESTGAME_API UClass* Z_Construct_UClass_AMyTestWeapon_NoRegister();
	MYTESTGAME_API UClass* Z_Construct_UClass_AMyTestWeapon();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_MyTestGame();
// End Cross Module References
	void AMyTestWeapon::StaticRegisterNativesAMyTestWeapon()
	{
	}
	UClass* Z_Construct_UClass_AMyTestWeapon_NoRegister()
	{
		return AMyTestWeapon::StaticClass();
	}
	struct Z_Construct_UClass_AMyTestWeapon_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMyTestWeapon_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_MyTestGame,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyTestWeapon_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "MyTestWeapon.h" },
		{ "ModuleRelativePath", "MyTestWeapon.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMyTestWeapon_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMyTestWeapon>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AMyTestWeapon_Statics::ClassParams = {
		&AMyTestWeapon::StaticClass,
		"Engine",
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
		METADATA_PARAMS(Z_Construct_UClass_AMyTestWeapon_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AMyTestWeapon_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AMyTestWeapon()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AMyTestWeapon_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AMyTestWeapon, 1839925010);
	template<> MYTESTGAME_API UClass* StaticClass<AMyTestWeapon>()
	{
		return AMyTestWeapon::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AMyTestWeapon(Z_Construct_UClass_AMyTestWeapon, &AMyTestWeapon::StaticClass, TEXT("/Script/MyTestGame"), TEXT("AMyTestWeapon"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMyTestWeapon);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
