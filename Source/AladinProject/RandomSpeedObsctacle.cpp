// Fill out your copyright notice in the Description page of Project Settings.


#include "RandomSpeedObsctacle.h"
#include "StartCharacter.h"

//// Sets default values
//ARandomSpeedObsctacle::ARandomSpeedObsctacle()
//{
//	
//	StaticMeshComp = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("StaticMesh"));
//	SetRootComponent(StaticMeshComp);
//
//	StaticMeshComp->SetCollisionEnabled(ECollisionEnabled::QueryAndPhysics);
//	StaticMeshComp->SetCollisionResponseToAllChannels(ECR_Block);
//	StaticMeshComp->SetSimulatePhysics(false);
//	StaticMeshComp->SetNotifyRigidBodyCollision(true);
//
//	StaticMeshComp->OnComponentHit.AddDynamic(
//		this,
//		&ARandomSpeedObsctacle::OnObstcaleHit
//	);
//		
//		//Tick 함수 키기
//		PrimaryActorTick.bCanEverTick = true;
//		StaticMeshComp->SetNotifyRigidBodyCollision(true);//충돌 이벤트 사용 설정
//		PrimaryActorTick.bCanEverTick = true;
//
//		
//}
//void ARandomSpeedObsctacle::OnObstcaleHit(
//	UPrimitiveComponent* HitComponent,
//	AActor* OtherActor,
//	UPrimitiveComponent* OtherComp,
//	FVector NormalImpulse,
//	const FHitResult& Hit)
//{
//	UE_LOG(LogTemp, Warning, TEXT("!!! 돌 충돌 발생 !!!"));
//	//if (OtherActor && OtherActor->IsA(AStartCharacter::StaticClass()))
//	//첫번쨰 otheractor존재하는가 두번쨰 존재한다면 그 엑터가->isa로 비교해서 스타트캐릭터의 정형 정보가 맞음 리턴
//	//{
//		//return;
//	//}
//	MoveDirection *= -1.0f;
//}
//
//
//void ARandomSpeedObsctacle::PostInitializeComponents()
//{
//	Super::PostInitializeComponents();
//
//}
//
//void ARandomSpeedObsctacle::BeginPlay()
//{
//
//	Super::BeginPlay();
//	// 장애물 10개 생성
//	
//	SetActorScale3D(FVector(1.0f));
//	//(X = , Y = , Z = )
//	GetWorld()->GetTimerManager().SetTimer(
//		RandomSpeedTimerHandle,// 타이머를 관리할 FTimerHandle을 통해 타이머를 나중에 정지하거나 확인 가능
//		this,//호출할 함수가 현재 엑터의 함수를 의미
//		&ARandomSpeedObsctacle::ChangeRandomSpeed,//실행될때 호출할 함수
//		0.2f,//몇 초마다 호출할지
//		true//반복 여부
//	);
//
//
//
//}
//
//
//void ARandomSpeedObsctacle::Tick(float DeltaTime)
//{
//	Super::Tick(DeltaTime);
//
//	if (!FMath::IsNearlyZero(RandomMoveSpeed))
//	{
//		FVector CurrentLocation = GetActorLocation();
//
//		CurrentLocation.Y += RandomMoveSpeed * DeltaTime * MoveDirection;
//
//		FHitResult Hit;
//
//		SetActorLocation(CurrentLocation, true, &Hit);
//
//		if (Hit.bBlockingHit)
//		{
//			UE_LOG(
//				LogTemp,
//				Warning,
//				TEXT("충돌함!!! %s"),
//				*GetNameSafe(Hit.GetActor())
//			);
//		}
//	}
//}
////BlueprintCallable 함수 구현
//void ARandomSpeedObsctacle::ResetActorPosition()
//{
//	//(0,0,0) 위치로 이동
//	SetActorLocation(FVector::ZeroVector);
//}
//
//void ARandomSpeedObsctacle::Destroyed()
//{
//}
//
//void ARandomSpeedObsctacle::EndPlay(const EEndPlayReason::Type EndPlayReason)
//{
//	Super::EndPlay(EndPlayReason);
//}
//
//float ARandomSpeedObsctacle::GetRotationSpeed() const
//{
//	return 0;
//}
//
//void ARandomSpeedObsctacle::ChangeRandomSpeed()
//{
//	RandomMoveSpeed = FMath::RandRange(300.0f, 1000.f);
//벽끼리 팅기게 하는 폐기

ARandomSpeedObsctacle::ARandomSpeedObsctacle()
{
	// Tick 함수 키기
	PrimaryActorTick.bCanEverTick = true;

	StaticMeshComp = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("StaticMesh"));
	SetRootComponent(StaticMeshComp);

	// 기본 속도
	RandomMoveSpeed = 300.0f;

	// 왕복 최대 범위
	MaxRange = 500.0f;

	// 시작 방향
	MoveDirection = 1.0f;
}

void ARandomSpeedObsctacle::PostInitializeComponents()
{
	Super::PostInitializeComponents();
}

void ARandomSpeedObsctacle::BeginPlay()
{
	Super::BeginPlay();

	// 생성된 위치를 기준점으로 저장
	StartLocation = GetActorLocation();

	// 시작 속도 랜덤 설정
	ChangeRandomSpeed();

	// 0.2초마다 속도 랜덤 변경
	GetWorld()->GetTimerManager().SetTimer(
		RandomSpeedTimerHandle,
		this,
		&ARandomSpeedObsctacle::ChangeRandomSpeed,
		0.2f,
		true
	);

	SetActorScale3D(FVector(1.0f));
}

void ARandomSpeedObsctacle::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	if (!FMath::IsNearlyZero(RandomMoveSpeed))
	{
		FVector CurrentLocation = GetActorLocation();

		// Y축으로 이동
		CurrentLocation.Y += RandomMoveSpeed * DeltaTime * MoveDirection;

		// 최대 범위 도달
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

// BlueprintCallable 함수 구현
void ARandomSpeedObsctacle::ResetActorPosition()
{
	SetActorLocation(FVector::ZeroVector);
}

void ARandomSpeedObsctacle::Destroyed()
{
}

void ARandomSpeedObsctacle::EndPlay(const EEndPlayReason::Type EndPlayReason)
{
	Super::EndPlay(EndPlayReason);
}

float ARandomSpeedObsctacle::GetRotationSpeed() const
{
	return RandomMoveSpeed;
}

void ARandomSpeedObsctacle::ChangeRandomSpeed()
{
	RandomMoveSpeed = FMath::RandRange(300.0f, 1000.0f);
}


