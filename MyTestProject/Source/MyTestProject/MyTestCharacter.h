// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BasicCharacter.h"
#include "MyTestCharacter.generated.h"

/**
 * 
 */
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
};
