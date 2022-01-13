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
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UBoxComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UParticleSystem_NoRegister();
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
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WeaponMesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WeaponMesh;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WeaponCollision_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WeaponCollision;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HitFX_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_HitFX;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
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
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyTestWeapon_Statics::NewProp_WeaponMesh_MetaData[] = {
		{ "Category", "Weapon" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "MyTestWeapon.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMyTestWeapon_Statics::NewProp_WeaponMesh = { "WeaponMesh", nullptr, (EPropertyFlags)0x00400000000b0009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMyTestWeapon, WeaponMesh), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMyTestWeapon_Statics::NewProp_WeaponMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMyTestWeapon_Statics::NewProp_WeaponMesh_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyTestWeapon_Statics::NewProp_WeaponCollision_MetaData[] = {
		{ "Category", "Weapon" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "MyTestWeapon.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMyTestWeapon_Statics::NewProp_WeaponCollision = { "WeaponCollision", nullptr, (EPropertyFlags)0x00400000000b0009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMyTestWeapon, WeaponCollision), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMyTestWeapon_Statics::NewProp_WeaponCollision_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMyTestWeapon_Statics::NewProp_WeaponCollision_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyTestWeapon_Statics::NewProp_HitFX_MetaData[] = {
		{ "Category", "MyFX" },
		{ "Comment", "// \xec\x9d\xb4\xed\x8e\x99\xed\x8a\xb8\n" },
		{ "ModuleRelativePath", "MyTestWeapon.h" },
		{ "ToolTip", "\xec\x9d\xb4\xed\x8e\x99\xed\x8a\xb8" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMyTestWeapon_Statics::NewProp_HitFX = { "HitFX", nullptr, (EPropertyFlags)0x0010000000010001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMyTestWeapon, HitFX), Z_Construct_UClass_UParticleSystem_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMyTestWeapon_Statics::NewProp_HitFX_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMyTestWeapon_Statics::NewProp_HitFX_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMyTestWeapon_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyTestWeapon_Statics::NewProp_WeaponMesh,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyTestWeapon_Statics::NewProp_WeaponCollision,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyTestWeapon_Statics::NewProp_HitFX,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMyTestWeapon_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMyTestWeapon>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AMyTestWeapon_Statics::ClassParams = {
		&AMyTestWeapon::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AMyTestWeapon_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AMyTestWeapon_Statics::PropPointers),
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
	IMPLEMENT_CLASS(AMyTestWeapon, 1821160458);
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
