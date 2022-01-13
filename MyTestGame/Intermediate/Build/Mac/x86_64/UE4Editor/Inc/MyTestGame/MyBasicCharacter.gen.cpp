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
	MYTESTGAME_API UClass* Z_Construct_UClass_AMyTestWeapon_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UClass* Z_Construct_UClass_UAnimMontage_NoRegister();
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
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_myHealth_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_myHealth;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_myMaxHealth_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_myMaxHealth;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WeaponAttachPoint_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_WeaponAttachPoint;
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_DefaultInventoryClasses_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DefaultInventoryClasses_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_DefaultInventoryClasses;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Attack_AnimMontage_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Attack_AnimMontage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BeHit_AnimMontage_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BeHit_AnimMontage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Death_AnimMontage_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Death_AnimMontage;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
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
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyBasicCharacter_Statics::NewProp_myHealth_MetaData[] = {
		{ "Category", "MyState" },
		{ "ModuleRelativePath", "MyBasicCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMyBasicCharacter_Statics::NewProp_myHealth = { "myHealth", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMyBasicCharacter, myHealth), METADATA_PARAMS(Z_Construct_UClass_AMyBasicCharacter_Statics::NewProp_myHealth_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMyBasicCharacter_Statics::NewProp_myHealth_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyBasicCharacter_Statics::NewProp_myMaxHealth_MetaData[] = {
		{ "Category", "MyState" },
		{ "ModuleRelativePath", "MyBasicCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMyBasicCharacter_Statics::NewProp_myMaxHealth = { "myMaxHealth", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMyBasicCharacter, myMaxHealth), METADATA_PARAMS(Z_Construct_UClass_AMyBasicCharacter_Statics::NewProp_myMaxHealth_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMyBasicCharacter_Statics::NewProp_myMaxHealth_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyBasicCharacter_Statics::NewProp_WeaponAttachPoint_MetaData[] = {
		{ "Category", "Inventory" },
		{ "ModuleRelativePath", "MyBasicCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_AMyBasicCharacter_Statics::NewProp_WeaponAttachPoint = { "WeaponAttachPoint", nullptr, (EPropertyFlags)0x0020080000010001, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMyBasicCharacter, WeaponAttachPoint), METADATA_PARAMS(Z_Construct_UClass_AMyBasicCharacter_Statics::NewProp_WeaponAttachPoint_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMyBasicCharacter_Statics::NewProp_WeaponAttachPoint_MetaData)) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_AMyBasicCharacter_Statics::NewProp_DefaultInventoryClasses_Inner = { "DefaultInventoryClasses", nullptr, (EPropertyFlags)0x0004000000000000, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AMyTestWeapon_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyBasicCharacter_Statics::NewProp_DefaultInventoryClasses_MetaData[] = {
		{ "Category", "Inventory" },
		{ "ModuleRelativePath", "MyBasicCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AMyBasicCharacter_Statics::NewProp_DefaultInventoryClasses = { "DefaultInventoryClasses", nullptr, (EPropertyFlags)0x0024080000010001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMyBasicCharacter, DefaultInventoryClasses), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AMyBasicCharacter_Statics::NewProp_DefaultInventoryClasses_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMyBasicCharacter_Statics::NewProp_DefaultInventoryClasses_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyBasicCharacter_Statics::NewProp_Attack_AnimMontage_MetaData[] = {
		{ "Category", "Pawn" },
		{ "ModuleRelativePath", "MyBasicCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMyBasicCharacter_Statics::NewProp_Attack_AnimMontage = { "Attack_AnimMontage", nullptr, (EPropertyFlags)0x0010000000010001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMyBasicCharacter, Attack_AnimMontage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMyBasicCharacter_Statics::NewProp_Attack_AnimMontage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMyBasicCharacter_Statics::NewProp_Attack_AnimMontage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyBasicCharacter_Statics::NewProp_BeHit_AnimMontage_MetaData[] = {
		{ "Category", "Pawn" },
		{ "ModuleRelativePath", "MyBasicCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMyBasicCharacter_Statics::NewProp_BeHit_AnimMontage = { "BeHit_AnimMontage", nullptr, (EPropertyFlags)0x0010000000010001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMyBasicCharacter, BeHit_AnimMontage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMyBasicCharacter_Statics::NewProp_BeHit_AnimMontage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMyBasicCharacter_Statics::NewProp_BeHit_AnimMontage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyBasicCharacter_Statics::NewProp_Death_AnimMontage_MetaData[] = {
		{ "Category", "Pawn" },
		{ "Comment", "// \xeb\xa7\x9e\xec\x9d\x84 \xeb\x96\x84 \xea\xbf\x88\xed\x8b\x80\xeb\x8c\x80\xeb\x8a\x94 \xeb\x8f\x99\xec\x9e\x91\n" },
		{ "ModuleRelativePath", "MyBasicCharacter.h" },
		{ "ToolTip", "\xeb\xa7\x9e\xec\x9d\x84 \xeb\x96\x84 \xea\xbf\x88\xed\x8b\x80\xeb\x8c\x80\xeb\x8a\x94 \xeb\x8f\x99\xec\x9e\x91" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMyBasicCharacter_Statics::NewProp_Death_AnimMontage = { "Death_AnimMontage", nullptr, (EPropertyFlags)0x0010000000010001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMyBasicCharacter, Death_AnimMontage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMyBasicCharacter_Statics::NewProp_Death_AnimMontage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMyBasicCharacter_Statics::NewProp_Death_AnimMontage_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMyBasicCharacter_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyBasicCharacter_Statics::NewProp_myHealth,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyBasicCharacter_Statics::NewProp_myMaxHealth,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyBasicCharacter_Statics::NewProp_WeaponAttachPoint,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyBasicCharacter_Statics::NewProp_DefaultInventoryClasses_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyBasicCharacter_Statics::NewProp_DefaultInventoryClasses,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyBasicCharacter_Statics::NewProp_Attack_AnimMontage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyBasicCharacter_Statics::NewProp_BeHit_AnimMontage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyBasicCharacter_Statics::NewProp_Death_AnimMontage,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMyBasicCharacter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMyBasicCharacter>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AMyBasicCharacter_Statics::ClassParams = {
		&AMyBasicCharacter::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AMyBasicCharacter_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AMyBasicCharacter_Statics::PropPointers),
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
	IMPLEMENT_CLASS(AMyBasicCharacter, 2010399128);
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
