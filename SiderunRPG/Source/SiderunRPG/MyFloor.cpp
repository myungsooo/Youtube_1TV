// Fill out your copyright notice in the Description page of Project Settings.


#include "MyFloor.h"
#include "Components/BoxComponent.h"
#include "Components/StaticMeshComponent.h"
#include "Character/MyHeroCharacter.h"


// Sets default values
AMyFloor::AMyFloor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	mStaticMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("FloorBlock"));
	RootComponent = mStaticMesh;

	CollisionBox = CreateDefaultSubobject<UBoxComponent>(TEXT("CollisionBox"));
	CollisionBox->SetupAttachment(RootComponent);

	CollisionBox->OnComponentBeginOverlap.AddDynamic(this, &AMyFloor::OnOverlapBegin);
	
}

// Called when the game starts or when spawned
void AMyFloor::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AMyFloor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AMyFloor::OnOverlapBegin(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp,
	int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	Destroy();
}

