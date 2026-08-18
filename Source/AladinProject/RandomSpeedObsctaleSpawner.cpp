// Fill out your copyright notice in the Description page of Project Settings.


#include "RandomSpeedObsctaleSpawner.h"
#include "RandomSpeedObsctacle.h"

// Sets default values
ARandomSpeedObsctaleSpawner::ARandomSpeedObsctaleSpawner()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = false;

}

// Called when the game starts or when spawned
void ARandomSpeedObsctaleSpawner::BeginPlay()
{
	Super::BeginPlay();



	for (int32 i = 0; i < SpawnNumber; i++)
	{
		// 장애물이 생성될 랜덤 위치
		FVector RandomLocation(
			FMath::RandRange(-3700.0f, -2650.0f), // X 범위
			FMath::RandRange(1950.0f, 2150.0f) ,   // Y 범위
			FMath::RandRange(250.0f, 700.0f)      // Z 범위
		);

		// 랜덤 위치에 장애물 생성
		GetWorld()->SpawnActor<ARandomSpeedObsctacle>(
			ObstacleClass,        // 생성할 장애물 클래스
			RandomLocation,       // 생성 위치
			FRotator::ZeroRotator // 생성 회전값
		);
	}
}

