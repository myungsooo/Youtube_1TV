// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SiderunRPG/MyFloor.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMyFloor() {}
// Cross Module References
	SIDERUNRPG_API UClass* Z_Construct_UClass_AMyFloor_NoRegister();
	SIDERUNRPG_API UClass* Z_Construct_UClass_AMyFloor();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_SiderunRPG();
// End Cross Module References
	void AMyFloor::StaticRegisterNativesAMyFloor()
	{
	}
	UClass* Z_Construct_UClass_AMyFloor_NoRegister()
	{
		return AMyFloor::StaticClass();
	}
	struct Z_Construct_UClass_AMyFloor_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMyFloor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_SiderunRPG,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyFloor_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "MyFloor.h" },
		{ "ModuleRelativePath", "MyFloor.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMyFloor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMyFloor>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AMyFloor_Statics::ClassParams = {
		&AMyFloor::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_AMyFloor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AMyFloor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AMyFloor()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AMyFloor_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AMyFloor, 562455207);
	template<> SIDERUNRPG_API UClass* StaticClass<AMyFloor>()
	{
		return AMyFloor::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AMyFloor(Z_Construct_UClass_AMyFloor, &AMyFloor::StaticClass, TEXT("/Script/SiderunRPG"), TEXT("AMyFloor"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMyFloor);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
