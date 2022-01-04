// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MyTestProject/MyTestActor.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMyTestActor() {}
// Cross Module References
	MYTESTPROJECT_API UClass* Z_Construct_UClass_AMyTestActor_NoRegister();
	MYTESTPROJECT_API UClass* Z_Construct_UClass_AMyTestActor();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_MyTestProject();
// End Cross Module References
	void AMyTestActor::StaticRegisterNativesAMyTestActor()
	{
	}
	UClass* Z_Construct_UClass_AMyTestActor_NoRegister()
	{
		return AMyTestActor::StaticClass();
	}
	struct Z_Construct_UClass_AMyTestActor_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMyTestActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_MyTestProject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyTestActor_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "MyTestActor.h" },
		{ "ModuleRelativePath", "MyTestActor.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMyTestActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMyTestActor>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AMyTestActor_Statics::ClassParams = {
		&AMyTestActor::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_AMyTestActor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AMyTestActor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AMyTestActor()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AMyTestActor_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AMyTestActor, 1835817730);
	template<> MYTESTPROJECT_API UClass* StaticClass<AMyTestActor>()
	{
		return AMyTestActor::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AMyTestActor(Z_Construct_UClass_AMyTestActor, &AMyTestActor::StaticClass, TEXT("/Script/MyTestProject"), TEXT("AMyTestActor"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMyTestActor);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
