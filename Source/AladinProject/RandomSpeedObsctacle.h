// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "RandomSpeedObsctacle.generated.h"

UCLASS()
class ALADINPROJECT_API ARandomSpeedObsctacle : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ARandomSpeedObsctacle();

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "RandomObstacle|Components")
	UStaticMeshComponent* StaticMeshComp;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "RandomObstacle|Components")
	USceneComponent* SceneRoot;
	FTimerHandle RandomSpeedTimerHandle;


	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "RandomObstacle|Properties")
	FVector StartLocation;
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "RandomObstacle|Properties")
	float RandomMoveSpeed;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "RandomObstacle|Properties")
	float MoveDirection = 1.0f;
	//라이프 사이클 관련 함수들
	virtual void PostInitializeComponents() override;
	virtual void BeginPlay() override;
	virtual void Tick(float DeltaTime) override;
	virtual void Destroyed() override;
	virtual void EndPlay(const EEndPlayReason::Type EndPlayReason) override;
	//함수를 블프에서 호출 가능하도록 설정
	UFUNCTION(BlueprintCallable, Category = "RandomObstacle|Actions")
	void ResetActorPosition();
	UFUNCTION(BlueprintPure, Category = "RandomObstacle|Properties")
	float GetRotationSpeed() const;
	UFUNCTION(BlueprintCallable,Category="RandomObsctacle|Functions")
	void ChangeRandomSpeed();
	UPROPERTY(EditAnywhere, Category="RandomObsctacle|Spawn")
	TSubclassOf<ARandomSpeedObsctacle> ObstacleClass;
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "RandomObstacle|Properties")
	float MaxRange;
	// ARandomSpeedObsctacle을 상속받은 클래스 중 하나를 저장할 수 있는 변수
	// 블루프린트에서 생성할 액터의 클래스를 선택할 수 있음
	// BP_RandomSpeedObstacle을 만들어두었다면
	// 에디터에서 ObstacleClass에 BP_RandomSpeedObstacle을 지정
	// 이후 SpawnActor를 통해 해당 클래스를 실제 액터로 생성할 수 있음
	//UFUNCTION()
	//void OnObstcaleHit(
	//	UPrimitiveComponent* HitComponent, // 충돌한 자신의 컴포넌트
	//	AActor* OtherActor,                 // 충돌한 상대 액터
//		UPrimitiveComponent* OtherComp,     // 충돌한 상대 액터의 컴포넌트
	//	FVector NormalImpulse,              // 충돌로 발생한 힘의 방향과 크기
	//	const FHitResult& Hit               // 충돌 위치, 충돌 방향 등 충돌 상세 정보
//	);
};
