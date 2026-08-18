// Fill out your copyright notice in the Description page of Project Settings.


#include "FloatingPlatform.h"

// Sets default values
AFloatingPlatform::AFloatingPlatform()
{
	{
		SceneRoot = CreateDefaultSubobject<USceneComponent>(TEXT("SceneRoot"));//컴포넌트 Floating
		SetRootComponent(SceneRoot);//루트 컴포넌트로 설정

		StaticMeshComp = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("StaticMesh"));//컴포넌트 Floating
		StaticMeshComp->SetupAttachment(SceneRoot);//루트에 장착

		// static ConstructorHelpers::FObjectFinder<UStaticMesh> MeshAsset(
		//	TEXT("StaticMesh'/Game/Scifi_desert_city/Meshes/Rocks/SM_rock_02.SM_rock_02'")
		//);

	//	if (MeshAsset.Succeeded())
	//	{
	//		StaticMeshComp->SetStaticMesh(MeshAsset.Object);
	//	}
	//	static ConstructorHelpers::FObjectFinder<UMaterial> MaterialAsset(
	//		TEXT("Material'/Game/Scifi_desert_city/Materials/MI_rock_A.MI_rock_A'")
	//	);

	//	if (MaterialAsset.Succeeded())
	//	{
	//		StaticMeshComp->SetMaterial(0, MaterialAsset.Object);
	//	}
	// 일단 안 되어서 주석 처리함 그냥 블프로 하는 게 더 편한 거 아님??

		//Tick 함수 키기
		PrimaryActorTick.bCanEverTick = true;
		//기본 회전 속도
		RotationSpeed = 45.0f;

	}
}



	void AFloatingPlatform::PostInitializeComponents()
	{
		Super::PostInitializeComponents();

	}

	void AFloatingPlatform::BeginPlay()
	{
	
		Super::BeginPlay();
		//위치, 회전, 스케일 설정하기
		//위치로 이동(저 값뒤에 붙는 f는 접미사임, 숫자가 float 타입이라는 걸 알려주는...뭔말알?)(X=0.000000,Y=200.000000,Z=10.000000)
		StartLocation = GetActorLocation();
		SetActorLocation(StartLocation);
		//Rotation 설정(Pitch=-24.404497,Yaw=57.267592,Roll=-32.732407)
		SetActorRotation(FRotator(0));
		//모든 축을 배로 스케일
		SetActorScale3D(FVector(0.5f));
		//(X = , Y = , Z = )
		

	}

	void AFloatingPlatform::Tick(float DeltaTime)
	{
		Super::Tick(DeltaTime);
		
		// 필요시 디버깅용 코드 or 별도 조건으로

		//RotationSpeed가 0이 아니면 회전 처리
		if (!FMath::IsNearlyZero(RotationSpeed))
		{
			//초당 RoatationSpeed만큼, 한 프레임당 (Rotation*DeltaTime)만큼 회전
			AddActorLocalRotation(FRotator(0.0f, RotationSpeed * DeltaTime, 0.0f));

		}
	}

	//BlueprintCallable 함수 구현
	void AFloatingPlatform::ResetActorPosition()
	{
		//(0,0,0) 위치로 이동
		SetActorLocation(FVector::ZeroVector);
	}

	void AFloatingPlatform::Destroyed()
	{
	}

	void AFloatingPlatform::EndPlay(const EEndPlayReason::Type EndPlayReason)
	{
		Super::EndPlay(EndPlayReason);
	}

	float AFloatingPlatform::GetRotationSpeed() const
	{
		return RotationSpeed;
	}

