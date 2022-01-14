// Copyright Epic Games, Inc. All Rights Reserved.


#include "SiderunRPGGameModeBase.h"
#include "Blueprint/UserWidget.h"

void ASiderunRPGGameModeBase::BeginPlay()
{
	Super::BeginPlay();

	CurrentWidget = CreateWidget<UUserWidget>(GetWorld(), HUDWidget);
	CurrentWidget->AddToViewport();

	SpawnFloors();
}

void ASiderunRPGGameModeBase::SpawnFloors()
{
}
