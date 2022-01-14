// Fill out your copyright notice in the Description page of Project Settings.


#include "MyTestGameAIController.h"
#include "Perception/AIPerceptionComponent.h"
#include "Perception/AISenseConfig_Sight.h"
#include "Runtime/Engine/Classes/Kismet/GameplayStatics.h"
#include "MyTestGameCharacter.h"

AMyTestGameAIController::AMyTestGameAIController()
{
	PrimaryActorTick.bCanEverTick = true;

	SightConfig = CreateDefaultSubobject<UAISenseConfig_Sight>(TEXT("Sight Config"));
	SetPerceptionComponent(*CreateDefaultSubobject<UAIPerceptionComponent>(TEXT("Perception Component")));

	SightConfig->SightRadius = AISightRadius;
	SightConfig->LoseSightRadius = AILoseSightRadius;
	SightConfig->PeripheralVisionAngleDegrees = AIFieldOfView;
	SightConfig->SetMaxAge(AISightAge);

	SightConfig->DetectionByAffiliation.bDetectEnemies = true;
	SightConfig->DetectionByAffiliation.bDetectFriendlies = true;
	SightConfig->DetectionByAffiliation.bDetectNeutrals = true;

	GetPerceptionComponent()->SetDominantSense(*SightConfig->GetSenseImplementation());
	GetPerceptionComponent()->OnPerceptionUpdated.AddDynamic(this, &AMyTestGameAIController::OnPawnDetected);
	GetPerceptionComponent()->ConfigureSense(*SightConfig);
}
void AMyTestGameAIController::BeginPlay()
{
	Super::BeginPlay();
	
	if (GetPerceptionComponent() != nullptr)
	{
		UE_LOG(LogTemp, Warning, TEXT("All Systems Set!"));
	}
	else
	{
		UE_LOG(LogTemp, Warning, TEXT("No Component"));
	}
}

void AMyTestGameAIController::OnPossess(APawn* Pawn)
{
	Super::OnPossess(Pawn);	
}

void AMyTestGameAIController::Tick(float DeltaSeconds)
{
	AMyTestGameCharacter* Character = Cast<AMyTestGameCharacter>(GetPawn());

	if (DistanceToPlayer > AISightRadius)
	{
		bIsPlayerDetected = false;
	}
	
	if (bIsPlayerDetected == true)
	{
		AMyTestGameCharacter* Player = Cast<AMyTestGameCharacter>(UGameplayStatics::GetPlayerCharacter(GetWorld(), 0));
		MoveToActor(Player, 5.0f);
	}
}

FRotator AMyTestGameAIController::GetControlRotation() const
{
	if (GetPawn() == nullptr)
	{
		return FRotator(0.f, 0.f, 0.f);
	}
	
	return  FRotator(0.f, GetPawn()->GetActorRotation().Yaw, 0.0f);
}

void AMyTestGameAIController::OnPawnDetected(const TArray<AActor*> &DetectedPawns)
{
	for (size_t i = 0; i < DetectedPawns.Num(); i++)
	{
		DistanceToPlayer = GetPawn()->GetDistanceTo(DetectedPawns[i]);

		UE_LOG(LogTemp, Warning, TEXT("Distance : %f"), DistanceToPlayer);
	}

	bIsPlayerDetected = true;
}
