// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SiderunRPG/Character/MyHeroCharacter.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMyHeroCharacter() {}
// Cross Module References
	SIDERUNRPG_API UScriptStruct* Z_Construct_UScriptStruct_FHeroInfo();
	UPackage* Z_Construct_UPackage__Script_SiderunRPG();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTableRowBase();
	ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
	SIDERUNRPG_API UClass* Z_Construct_UClass_AMyHeroCharacter_NoRegister();
	SIDERUNRPG_API UClass* Z_Construct_UClass_AMyHeroCharacter();
	SIDERUNRPG_API UClass* Z_Construct_UClass_AMyBasicCharacter();
// End Cross Module References

static_assert(std::is_polymorphic<FHeroInfo>() == std::is_polymorphic<FTableRowBase>(), "USTRUCT FHeroInfo cannot be polymorphic unless super FTableRowBase is polymorphic");

class UScriptStruct* FHeroInfo::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern SIDERUNRPG_API uint32 Get_Z_Construct_UScriptStruct_FHeroInfo_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FHeroInfo, Z_Construct_UPackage__Script_SiderunRPG(), TEXT("HeroInfo"), sizeof(FHeroInfo), Get_Z_Construct_UScriptStruct_FHeroInfo_Hash());
	}
	return Singleton;
}
template<> SIDERUNRPG_API UScriptStruct* StaticStruct<FHeroInfo>()
{
	return FHeroInfo::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FHeroInfo(FHeroInfo::StaticStruct, TEXT("/Script/SiderunRPG"), TEXT("HeroInfo"), false, nullptr, nullptr);
static struct FScriptStruct_SiderunRPG_StaticRegisterNativesFHeroInfo
{
	FScriptStruct_SiderunRPG_StaticRegisterNativesFHeroInfo()
	{
		UScriptStruct::DeferCppStructOps<FHeroInfo>(FName(TEXT("HeroInfo")));
	}
} ScriptStruct_SiderunRPG_StaticRegisterNativesFHeroInfo;
	struct Z_Construct_UScriptStruct_FHeroInfo_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HeroID_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_HeroID;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HeroName_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_HeroName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HeroThumbnail_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_HeroThumbnail;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HeroLevel_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_HeroLevel;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HeroGold_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_HeroGold;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Description_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_Description;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHeroInfo_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * \n */" },
		{ "ModuleRelativePath", "Character/MyHeroCharacter.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FHeroInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FHeroInfo>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHeroInfo_Statics::NewProp_HeroID_MetaData[] = {
		{ "Category", "HeroInfo" },
		{ "ModuleRelativePath", "Character/MyHeroCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FHeroInfo_Statics::NewProp_HeroID = { "HeroID", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FHeroInfo, HeroID), METADATA_PARAMS(Z_Construct_UScriptStruct_FHeroInfo_Statics::NewProp_HeroID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHeroInfo_Statics::NewProp_HeroID_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHeroInfo_Statics::NewProp_HeroName_MetaData[] = {
		{ "Category", "HeroInfo" },
		{ "ModuleRelativePath", "Character/MyHeroCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FHeroInfo_Statics::NewProp_HeroName = { "HeroName", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FHeroInfo, HeroName), METADATA_PARAMS(Z_Construct_UScriptStruct_FHeroInfo_Statics::NewProp_HeroName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHeroInfo_Statics::NewProp_HeroName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHeroInfo_Statics::NewProp_HeroThumbnail_MetaData[] = {
		{ "Category", "HeroInfo" },
		{ "ModuleRelativePath", "Character/MyHeroCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FHeroInfo_Statics::NewProp_HeroThumbnail = { "HeroThumbnail", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FHeroInfo, HeroThumbnail), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FHeroInfo_Statics::NewProp_HeroThumbnail_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHeroInfo_Statics::NewProp_HeroThumbnail_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHeroInfo_Statics::NewProp_HeroLevel_MetaData[] = {
		{ "Category", "HeroInfo" },
		{ "ModuleRelativePath", "Character/MyHeroCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FHeroInfo_Statics::NewProp_HeroLevel = { "HeroLevel", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FHeroInfo, HeroLevel), METADATA_PARAMS(Z_Construct_UScriptStruct_FHeroInfo_Statics::NewProp_HeroLevel_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHeroInfo_Statics::NewProp_HeroLevel_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHeroInfo_Statics::NewProp_HeroGold_MetaData[] = {
		{ "Category", "HeroInfo" },
		{ "ModuleRelativePath", "Character/MyHeroCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FHeroInfo_Statics::NewProp_HeroGold = { "HeroGold", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FHeroInfo, HeroGold), METADATA_PARAMS(Z_Construct_UScriptStruct_FHeroInfo_Statics::NewProp_HeroGold_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHeroInfo_Statics::NewProp_HeroGold_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHeroInfo_Statics::NewProp_Description_MetaData[] = {
		{ "Category", "HeroInfo" },
		{ "ModuleRelativePath", "Character/MyHeroCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FHeroInfo_Statics::NewProp_Description = { "Description", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FHeroInfo, Description), METADATA_PARAMS(Z_Construct_UScriptStruct_FHeroInfo_Statics::NewProp_Description_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHeroInfo_Statics::NewProp_Description_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FHeroInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHeroInfo_Statics::NewProp_HeroID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHeroInfo_Statics::NewProp_HeroName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHeroInfo_Statics::NewProp_HeroThumbnail,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHeroInfo_Statics::NewProp_HeroLevel,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHeroInfo_Statics::NewProp_HeroGold,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHeroInfo_Statics::NewProp_Description,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FHeroInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SiderunRPG,
		Z_Construct_UScriptStruct_FTableRowBase,
		&NewStructOps,
		"HeroInfo",
		sizeof(FHeroInfo),
		alignof(FHeroInfo),
		Z_Construct_UScriptStruct_FHeroInfo_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHeroInfo_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FHeroInfo_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHeroInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FHeroInfo()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FHeroInfo_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_SiderunRPG();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("HeroInfo"), sizeof(FHeroInfo), Get_Z_Construct_UScriptStruct_FHeroInfo_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FHeroInfo_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FHeroInfo_Hash() { return 2421404762U; }
	void AMyHeroCharacter::StaticRegisterNativesAMyHeroCharacter()
	{
	}
	UClass* Z_Construct_UClass_AMyHeroCharacter_NoRegister()
	{
		return AMyHeroCharacter::StaticClass();
	}
	struct Z_Construct_UClass_AMyHeroCharacter_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMyHeroCharacter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AMyBasicCharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_SiderunRPG,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyHeroCharacter_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Character/MyHeroCharacter.h" },
		{ "ModuleRelativePath", "Character/MyHeroCharacter.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMyHeroCharacter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMyHeroCharacter>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AMyHeroCharacter_Statics::ClassParams = {
		&AMyHeroCharacter::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_AMyHeroCharacter_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AMyHeroCharacter_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AMyHeroCharacter()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AMyHeroCharacter_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AMyHeroCharacter, 2395411368);
	template<> SIDERUNRPG_API UClass* StaticClass<AMyHeroCharacter>()
	{
		return AMyHeroCharacter::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AMyHeroCharacter(Z_Construct_UClass_AMyHeroCharacter, &AMyHeroCharacter::StaticClass, TEXT("/Script/SiderunRPG"), TEXT("AMyHeroCharacter"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMyHeroCharacter);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
