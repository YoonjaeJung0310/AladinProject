// Fill out your copyright notice in the Description page of Project Settings.


#include "StartCharacter.h"
#include "Camera/CameraComponent.h"
#include "GameFramework/SpringArmComponent.h"
#include "GameFramework/CharacterMovementComponent.h"//속도 관련 헤더 추가
#include "Components/CapsuleComponent.h"
#include "CarpetController.h"
#include "Components/SphereComponent.h"
#include "EnhancedInputComponent.h"//Input Action과 함수를 연결(Bind)할 수 있게 해주는 헤더

// Sets default values
AStartCharacter::AStartCharacter()
{

	CapsuleComponent = CreateDefaultSubobject<UCapsuleComponent>(TEXT("CapsuleComponentRoot"));
	SetRootComponent(CapsuleComponent);
	CapsuleWidthSize = 1.0f;//블프에서 편집
	CapsuleHeightSize = 1.0f;//블프에서 편집
	CapsuleComponent->SetCapsuleSize(CapsuleWidthSize, CapsuleHeightSize);
	PrimaryActorTick.bCanEverTick = true;
	MeshComponent = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("SkeletalMesh"));
	MeshComponent->SetupAttachment(CapsuleComponent);
	CapsuleComponent->SetSimulatePhysics(false);
	MeshComponent->SetSimulatePhysics(false);
	//Enum Collision Enabled에서 query-충돌이 있는지 검사하는 거고 physics는 물리적인 충돌
	CapsuleComponent->SetCollisionEnabled(ECollisionEnabled::QueryAndPhysics);
	SpringArmComp = CreateDefaultSubobject<USpringArmComponent>(TEXT("SpringArm"));
	SpringArmComp->SetupAttachment(CapsuleComponent);
	SpringArmComp->TargetArmLength = 300.0f;
	SpringArmComp->bUsePawnControlRotation = false;
	//(2) 카메라 컴포넌트 생성
	CameraComp = CreateDefaultSubobject<UCameraComponent>(TEXT("Camera"));
	// 스프링 암의 소켓 위치에 카메라를 부착
	CameraComp->SetupAttachment(SpringArmComp, USpringArmComponent::SocketName);
	// 카메라는 스프링 암의 회전을 따르므로 PawnControlRotation은 꺼둠
	CameraComp->bUsePawnControlRotation = false;
	//Auto Possession 활성화
	AutoPossessPlayer = EAutoReceiveInput::Player0;
}

// Called when the game starts or when spawned


// Called every frame

void AStartCharacter::PostInitializeComponents()
{
	Super::PostInitializeComponents();

}

void AStartCharacter::BeginPlay()
{

	Super::BeginPlay();



}

void AStartCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	// 지면 감지 시작 위치
	FVector Start = GetActorLocation();

	// 현재 위치에서 월드 Z축 아래로 LineTrace
	FVector End = Start - FVector(0.0f, 0.0f, GroundCheckDistance);

	FHitResult Hit;

	// LineTrace를 수행할 때 사용할 충돌 검사 설정
	FCollisionQueryParams Params;

	// LineTrace를 쏠 때 자기 자신(StartCharacter)은 충돌 대상에서 제외
	// 자기 자신의 CapsuleComponent가 LineTrace에 걸리는 것을 방지
	Params.AddIgnoredActor(this);

	// Start 지점에서 End 지점까지 직선으로 충돌 검사를 수행
	 Grounded = GetWorld()->LineTraceSingleByChannel(
		Hit,              // 충돌이 발생했을 때 충돌 정보를 저장할 변수, hit에서 땅을 발견 못하면 false
		Start,            // LineTrace를 시작할 위치
		End,              // LineTrace가 끝나는 위치
		ECC_Visibility,   // 어떤 Collision Channel을 기준으로 충돌을 검사할지 지정
		Params             // LineTrace의 추가 설정값
	);

	if (Grounded)
	{
		// 지면에 닿으면 낙하 속도 초기화
		VerticalVelocity = 0.0f;
	}
	else
	{
		// 중력 가속도 적용
		VerticalVelocity += Gravity * DeltaTime;

		// 중력은 항상 월드 Z축 아래 방향으로 적용
		AddActorWorldOffset(
			FVector(0.0f, 0.0f, VerticalVelocity * DeltaTime),
			true
		);
	}
}



void AStartCharacter::Destroyed()
{

}
void AStartCharacter::EndPlay(const EEndPlayReason::Type EndPlayReason)
{

	Super::EndPlay(EndPlayReason);

}


// Called to bind functionality to input
void AStartCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	//Enhanced InputComponent로 캐스팅
	if (UEnhancedInputComponent* EnhancedInput = Cast<UEnhancedInputComponent>(PlayerInputComponent))
	{
		//IA를 가져오기 위해 현재 소유 중인 Controller를 ASpartaPlayerController로 캐스팅
		if (ACarpetController* PlayerController = Cast<ACarpetController>(GetController()))
		{
			if (PlayerController->MoveAction)//IA_Move 액션 키를 누르고 있는 동안 Move()호출
			{
				//BindAction()은 쉽게 말하면 이 입력이 발생하면 묶은 것들이 모인 이 함수를 실행해!
				// 첫 번째 인자: 어떤 입력 액션을 사용할지 지정
				// 두 번째 인자: 어떤 시점에 함수를 실행할지 지정 
				// 세 번째 인자: 현재 객체(this)에서 함수를 실행하도록 지정
				EnhancedInput->BindAction(PlayerController->MoveAction, ETriggerEvent::Triggered, this, &AStartCharacter::Move);
				
			}
			if(PlayerController->MoveUpDownAction)
			{
			
				EnhancedInput->BindAction(PlayerController->MoveUpDownAction, ETriggerEvent::Triggered, this, &AStartCharacter::MoveUpDown);
			}
			
			if (PlayerController->LookAction)//IA_Look 액션 마우스가 Look()호출
			{
				EnhancedInput->BindAction(PlayerController->LookAction, ETriggerEvent::Triggered, this, &AStartCharacter::Look);
			}


		}


	}
}


void AStartCharacter::Move(const FInputActionValue& value)
{
	//컨트롤러가 있어야 방향 계산이 가능하겠죠?
	if (!Controller) return;
	//Value는 Axis2D로 설정된 IA_Move의 입력값(WASD)을 담고 있음
	const FVector2D MoveInput = value.Get<FVector2D>();
	const float DeltaTime = GetWorld()->GetDeltaSeconds();

	ACarpetController* PlayerController= Cast<ACarpetController>(GetController());
	PlayerController->GetControlRotation();
	float CurrentMoveSpeed = 1;
	

	if (!Grounded)
	{
		CurrentMoveSpeed *= 0.4f;
	}


	if (!FMath::IsNearlyZero(MoveInput.X))
	{
		// 캐릭터가 바라보는 방향으로 x축 이동
		//,AddActorLocalOffset(CapsuleComponent->GetForwardVector()*CharacterSpeed * MoveInput.X*DeltaTime);
		AddActorLocalOffset(FVector(MoveInput.X * CharacterSpeed*DeltaTime*CurrentMoveSpeed, 0.0f, 0.0f));
		// 첫 번째 인자: 이동할 로컬 위치 변화량, 두 번째: 이동 시 충돌 검사 여부
		// 세 번째: 충돌 결과를 저장할 FHitResult, 네 번째: 물리 이동 방식을 지정하는 Teleport 설정
	}
	if (!FMath::IsNearlyZero(MoveInput.Y))
	{
		//캐릭터의 오른쪽 방향으로 Y축 이동
		//AddActorLocalOffset(CapsuleComponent->GetRightVector()*CharacterSpeed * MoveInput.Y*DeltaTime);
		AddActorLocalOffset(FVector(0.0f, MoveInput.Y * CharacterSpeed * DeltaTime * CurrentMoveSpeed, 0.0f));
	}

}

void AStartCharacter::Look(const FInputActionValue& value)
{
	if (!Controller) return;
	
	const FVector2D LookInput = value.Get<FVector2D>();
	const float DeltaTime = GetWorld()->GetDeltaSeconds();
	ACarpetController* PlayerController = Cast<ACarpetController>(GetController());
	PlayerController->GetControlRotation();

	if (!FMath::IsNearlyZero(LookInput.X))
	{
		float YawRotation = LookInput.X * DeltaTime*CameraSpeed;
		// 마우스 x-yaw
		AddActorLocalRotation(FRotator( 0.0f, YawRotation,0.0f));
		
	}
	if (!FMath::IsNearlyZero(LookInput.Y))
	{
		float RollRotation = LookInput.Y * DeltaTime * CameraSpeed;
		// 마우스 Y-Roll
		AddActorLocalRotation(FRotator( RollRotation, 0.0f, 0.0f ));
		
	}


}

void AStartCharacter::MoveUpDown(const FInputActionValue& Value)
{
	const float MoveInput = Value.Get<float>();

	AddActorLocalOffset(
		FVector(
			0.0f,
			0.0f,
			MoveInput * CharacterSpeed * GetWorld()->GetDeltaSeconds()
		),
		true
	);
}