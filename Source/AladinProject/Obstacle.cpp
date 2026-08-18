// Fill out your copyright notice in the Description page of Project Settings.


#include "Obstacle.h"

// Sets default values
AObstacle::AObstacle()
{
	{
		SceneRoot = CreateDefaultSubobject<USceneComponent>(TEXT("SceneRoot"));//컴포넌트 Floating
		SetRootComponent(SceneRoot);//루트 컴포넌트로 설정

		StaticMeshComp = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("StaticMesh"));//컴포넌트 Floating
		StaticMeshComp->SetupAttachment(SceneRoot);//루트에 장착
		//Tick 함수 키기
		PrimaryActorTick.bCanEverTick = true;
		//기본 회전 속도
		MoveSpeed = 100.0f;
		MaxRange = 500.0f;


	}
}



void AObstacle::PostInitializeComponents()
{
	Super::PostInitializeComponents();

}

void AObstacle::BeginPlay()
{

	Super::BeginPlay();
	StartLocation = GetActorLocation();
	//Rotation 설정(Pitch=-24.404497,Yaw=57.267592,Roll=-32.732407)
	SetActorRotation(FRotator(0));
	//모든 축을 배로 스케일
	SetActorScale3D(FVector(0.5f));
	//(X = , Y = , Z = )
	
}

void AObstacle::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	// 필요시 디버깅용 코드 or 별도 조건으로


	if (!FMath::IsNearlyZero(MoveSpeed))
	{

		FVector CurrentLocation = GetActorLocation();
	
		CurrentLocation.Y += MoveSpeed * DeltaTime * MoveDirection;
	
		if (CurrentLocation.Y >= StartLocation.Y + MaxRange)
		{
			CurrentLocation.Y = StartLocation.Y + MaxRange;
			MoveDirection = -1.0f;
		}
		else if (CurrentLocation.Y <= StartLocation.Y - MaxRange)
		{
			CurrentLocation.Y = StartLocation.Y - MaxRange;
			MoveDirection = 1.0f;
		}
		SetActorLocation(CurrentLocation);
	}
}

//BlueprintCallable 함수 구현
	void AObstacle::ResetActorPosition()
{
	//(0,0,0) 위치로 이동
	SetActorLocation(FVector::ZeroVector);
}

void AObstacle::Destroyed()
{}

void AObstacle::EndPlay(const EEndPlayReason::Type EndPlayReason)
{
	Super::EndPlay(EndPlayReason);
}

float AObstacle::GetRotationSpeed() const
{
	return MoveSpeed;
}

