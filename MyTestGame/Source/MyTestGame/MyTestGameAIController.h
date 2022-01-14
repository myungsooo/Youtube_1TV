// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AIController.h"
#include "MyTestGameAIController.generated.h"

/**
 * 
 */
class UBehaviorTreeComponent;
class UBlackboardComponent;

UCLASS(Config=Game)
class MYTESTGAME_API AMyTestGameAIController : public AAIController
{
	GENERATED_BODY()

public:
	AMyTestGameAIController();

	virtual void BeginPlay() override;
	virtual void OnPossess(APawn* Pawn) override;
	virtual void Tick(float DeltaSeconds) override;
	virtual FRotator GetControlRotation() const override;

	UFUNCTION()
	void OnPawnDetected(const TArray<AActor*> &DetectedPawns);
	
	// 시야
	float AISightRadius = 500.f;
	float AISightAge = 5.f;
	float AILoseSightRadius = AISightRadius + 50.f;
	float AIFieldOfView = 90.f; // 보이는 시야 각

	class UAISenseConfig_Sight* SightConfig;
	

private:
	UPROPERTY(Transient)
	UBlackboardComponent* BlackboardComp;

	UPROPERTY(Transient)
	UBehaviorTreeComponent* BehaviorComp;
};
