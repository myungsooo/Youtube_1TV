// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "MyBasicCharacter.h"
#include "MyTestGameCharacter.generated.h"

/**
 * 
 */
UCLASS()
class MYTESTGAME_API AMyTestGameCharacter : public AMyBasicCharacter
{
	GENERATED_BODY()
	
public:
	AMyTestGameCharacter(); // 생성자를 만들기

	// 카메라 지지대
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Camera)
	class USpringArmComponent* CameraBoom;

	// 카메라 생성
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Camera)
	class UCameraComponent* FollowCamera;

// 캐릭터 움직이게 하는 코드 (있는 걸 사용하는 겁니다.)
protected:
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;
	void MoveForward(float value);
	void MoveRight(float value); 
};
