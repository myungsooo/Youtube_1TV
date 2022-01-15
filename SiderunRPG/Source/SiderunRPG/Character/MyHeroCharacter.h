// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "MyBasicCharacter.h"
#include "Engine/DataTable.h"
#include "MyHeroCharacter.generated.h"

/**
 * 
 */

USTRUCT(BlueprintType)
struct FHeroInfo : public FTableRowBase
{
	GENERATED_BODY()
public:
	FHeroInfo()
	{
		HeroName = FText::FromString("Knight");
		HeroLevel = 1;
		Description = FText::FromString("My Hero is ...");
	}

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		FName HeroID;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		FText HeroName;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		UTexture2D* HeroThumbnail;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		int32 HeroLevel;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		int32 HeroGold;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		FText Description;
	
};

UCLASS()
class SIDERUNRPG_API AMyHeroCharacter : public AMyBasicCharacter
{
	GENERATED_BODY()
	
};
