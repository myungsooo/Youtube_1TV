// Fill out your copyright notice in the Description page of Project Settings.


#include "MyBasicCharacter.h"
#include "Engine.h"
#include "MyTestWeapon.h"
#include "Kismet/GameplayStatics.h"

// Sets default values
AMyBasicCharacter::AMyBasicCharacter()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	static ConstructorHelpers::FObjectFinder<UParticleSystem>ParticleAsset(TEXT("ParticleSystem'/Game/StarterContent/Particles/P_Explosion.P_Explosion'"));
	HitFX = ParticleAsset.Object;

	isDuringAttack = false;
	ComboAttack_Num = 0;
	
}

//////////////////////////////////////////////////////////////////////
// Weapon

USkeletalMeshComponent* AMyBasicCharacter::GetSpesificPawnMesh() const
{
	return GetMesh();
}

FName AMyBasicCharacter::GetWeaponAttachPoint() const
{
	return WeaponAttachPoint;
}

void AMyBasicCharacter::EquipWeapon(AMyTestWeapon* Weapon)
{
	if (Weapon)
	{
		SetCurrentWeapon(Weapon, CurrentWeapon);
	}
}

// 무기 바꿀때 쓰는 기능
void AMyBasicCharacter::AddWeapon(AMyTestWeapon* Weapon)
{
	if (Weapon)
	{
		Inventory.AddUnique(Weapon);
	}
}

void AMyBasicCharacter::SetCurrentWeapon(AMyTestWeapon* NewWeapon, AMyTestWeapon* LastWeapon)
{
	AMyTestWeapon* LocalLastWeapon = NULL;
	if (LastWeapon != NULL)
	{
		LocalLastWeapon = LastWeapon;
	}

	if (NewWeapon)
	{
		NewWeapon->SetOwningPawn(this);
		NewWeapon->OnEquip(LastWeapon);
	}
}


//-------------------------------------------------------------------


// Called when the game starts or when spawned
void AMyBasicCharacter::BeginPlay()
{
	Super::BeginPlay();
	
}


// Called every frame
void AMyBasicCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void AMyBasicCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

void AMyBasicCharacter::Attack_Melee()
{
	if (!isDuringAttack) //	키 겹치지 않게 함 (!)
	{
		if(ComboAttack_Num < 3)
		{
			int tmp_Num = rand() % 3 + 1;
			FString PlaySection = "Attack_" + FString::FromInt(tmp_Num);
			PlayAnimMontage(Attack_AnimMontage, 1.f, FName(*PlaySection));

			ComboAttack_Num++;

			isDuringAttack = true;
		}
		else
		{
			PlayAnimMontage(Attack_AnimMontage, 1.f, FName("Attack_4"));
			ComboAttack_Num = 0;
		}
	}
	
	
}

void AMyBasicCharacter::Attack_Melee_End()
{
	isDuringAttack = false;
}

void AMyBasicCharacter::ShowFX()
{
	UGameplayStatics::SpawnEmitterAtLocation(GetWorld(), HitFX, GetActorLocation());
}

