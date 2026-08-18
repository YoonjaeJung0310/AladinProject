// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Obstacle.generated.h"

UCLASS()
class ALADINPROJECT_API AObstacle : public AActor
{
	GENERATED_BODY()

public:
	// Sets default values for this actor's properties
	AObstacle();

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Obstacle|Components")
	UStaticMeshComponent* StaticMeshComp;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Obstacle|Components")
	USceneComponent* SceneRoot;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Obstacle|Properties")
	float MaxRange;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Obstacle|Properties")
	FVector StartLocation;
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Obstacle|Properties")
	float MoveSpeed;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Obstacle|Properties")
	float MoveDirection = 1.0f;
	//라이프 사이클 관련 함수들
	virtual void PostInitializeComponents() override;
	virtual void BeginPlay() override;
	virtual void Tick(float DeltaTime) override;
	virtual void Destroyed() override;
	virtual void EndPlay(const EEndPlayReason::Type EndPlayReason) override;
	//함수를 블프에서 호출 가능하도록 설정
	UFUNCTION(BlueprintCallable, Category = "Obstacle|Actions")
	void ResetActorPosition();
	UFUNCTION(BlueprintPure, Category = "Obstacle|Properties")
	float GetRotationSpeed() const;
};