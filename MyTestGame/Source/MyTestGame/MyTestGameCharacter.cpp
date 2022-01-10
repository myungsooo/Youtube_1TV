// Fill out your copyright notice in the Description page of Project Settings.


#include "MyTestGameCharacter.h"
#include "GameFramework/SpringArmComponent.h"
#include "Camera/CameraComponent.h"
#include "GameFramework/DefaultPawn.h"
#include "GameFramework/PlayerController.h"
#include "GameFramework/Character.h"
#include "GameFramework/CharacterMovementComponent.h"

// 생성자 선언
AMyTestGameCharacter::AMyTestGameCharacter()
{
	CameraBoom = CreateDefaultSubobject<USpringArmComponent>(TEXT("CameraBoom"));
	CameraBoom->SetupAttachment(RootComponent);
	CameraBoom->TargetArmLength = 1000.f; // 길이 선언 (나중에 바꿀수도 있음)
	CameraBoom->bUsePawnControlRotation = true;

	FollowCamera = CreateDefaultSubobject<UCameraComponent>(TEXT("FollowCamera")); // 캐릭터 상관없이 돌아갈수 있게
	FollowCamera->SetupAttachment(CameraBoom, USpringArmComponent::SocketName);
	FollowCamera->bUsePawnControlRotation = false;

	GetCharacterMovement()->bOrientRotationToMovement = true;
}

void AMyTestGameCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	check((PlayerInputComponent));
	PlayerInputComponent->BindAxis("MoveForward", this, &AMyTestGameCharacter::MoveForward); 
	PlayerInputComponent->BindAxis("MoveRight", this, &AMyTestGameCharacter::MoveRight); 
	PlayerInputComponent->BindAction("Attack", IE_Pressed, this, &AMyTestGameCharacter::Attack_Melee);
}

void AMyTestGameCharacter::MoveForward(float value)
{
	if((Controller != NULL) && (value != 0.0f))
	{
		const FRotator Rot = Controller->GetControlRotation();
		const FRotator YawRot(0, Rot.Yaw, 0);
		const FVector Direction = FRotationMatrix(YawRot).GetUnitAxis(EAxis::X);
		AddMovementInput(Direction, value);
	}
	
}

void AMyTestGameCharacter::MoveRight(float value)
{
	if((Controller != NULL) && (value != 0.0f))
	{
		const FRotator Rot = Controller->GetControlRotation();
		const FRotator YawRot(0, Rot.Yaw, 0);
		const FVector Direction = FRotationMatrix(YawRot).GetUnitAxis(EAxis::Y);
		AddMovementInput(Direction, value);
	}
}

void AMyTestGameCharacter::Attack_Melee()
{
	PlayAnimMontage(Attack_Melee_AnimSet, 1.0f);
}

