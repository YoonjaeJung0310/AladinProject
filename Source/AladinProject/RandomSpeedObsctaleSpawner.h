// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "RandomSpeedObsctaleSpawner.generated.h"

class ARandomSpeedObsctacle;

UCLASS()
class ALADINPROJECT_API ARandomSpeedObsctaleSpawner : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ARandomSpeedObsctaleSpawner();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	UPROPERTY(EditAnywhere,BlueprintReadWrite,Category="Spawn")
	// 블프에서 지정할겨
	TSubclassOf<ARandomSpeedObsctacle> ObstacleClass; //T는 템플릿,서브클래스 자식임

	//생성할 장애물 수
	UPROPERTY(EditAnywhere,BlueprintReadWrite,Category="Spawn")
	int32 SpawnNumber = 10;
public:	


};
