// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BasicCharacter.h"
#include "Engine/DataTable.h"
#include "MyTestCharacter.generated.h"

/**
 * 
 */

USTRUCT(BlueprintType)
struct FCharcterInfo : public FTableRowBase
{
	GENERATED_BODY()
public:
	FCharcterInfo()
	{
		CharacterName = FText::FromString("Name");
		CharacterLevel = 1;
		Description = FText::FromString("Your Character is ....");
	}

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FName CharacterID;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FText CharacterName;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UTexture2D* CharacterThumbnail;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 CharacterLevel;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FText Description;
	
};

UCLASS()
class MYTESTPROJECT_API AMyTestCharacter : public ABasicCharacter
{
	GENERATED_BODY()

public:
	AMyTestCharacter();

	// 자주 사용하는 패턴이니 암기
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category=Camera)
	class USpringArmComponent* CameraBoom;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category=Camera)
	class UCameraComponent* FollowCamera;

	void Attack_Melee();

protected:
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;
	void MoveForward(float value);
	void MoveRight(float value);
	
};
