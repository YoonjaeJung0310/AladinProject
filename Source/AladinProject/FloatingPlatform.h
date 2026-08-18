// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "FloatingPlatform.generated.h"

UCLASS()
class ALADINPROJECT_API AFloatingPlatform : public AActor
{
	GENERATED_BODY()

public:

	AFloatingPlatform();

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FloatingPlatform|Components")
	UStaticMeshComponent* StaticMeshComp;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FloatingPlatform|Components")
	USceneComponent* SceneRoot;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FloatingPlatform|Components") 
	FVector StartLocation=GetActorLocation();
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FloatingPlatform|Properties")
	//회전 속도를 나태나느 변수(초당 도 단위)
	float RotationSpeed;
	//라이프 사이클 관련 함수들
	virtual void PostInitializeComponents() override;
	virtual void BeginPlay() override;
	virtual void Tick(float DeltaTime) override;
	virtual void Destroyed() override;
	virtual void EndPlay(const EEndPlayReason::Type EndPlayReason) override;
	//함수를 블프에서 호출 가능하도록 설정
	UFUNCTION(BlueprintCallable,Category = "FloatingPlatform|Actions")
	void ResetActorPosition();
	UFUNCTION(BlueprintPure,Category = "FloatingPlatform|Properties")
	float GetRotationSpeed() const;
	
};
