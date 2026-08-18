// Fill out your copyright notice in the Description page of Project Settings.


#include "MagicCarpet.h"
#include "Camera/CameraComponent.h"
#include "GameFramework/SpringArmComponent.h"
#include "GameFramework/CharacterMovementComponent.h"//속도 관련 헤더 추가
#include "Components/CapsuleComponent.h"
#include "CarpetController.h"
#include "EnhancedInputComponent.h"//Input Action과 함수를 연결(Bind)할 수 있게 해주는 헤더
// Sets default values
AMagicCarpet::AMagicCarpet()
{

	CapsuleComponent = CreateDefaultSubobject<UCapsuleComponent>(TEXT("CapsuleComponentRoot"));
	SetRootComponent(CapsuleComponent);
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
	SpringArmComp->bUsePawnControlRotation = true;
	//(2) 카메라 컴포넌트 생성
	CameraComp = CreateDefaultSubobject<UCameraComponent>(TEXT("Camera"));
	// 스프링 암의 소켓 위치에 카메라를 부착
	CameraComp->SetupAttachment(SpringArmComp, USpringArmComponent::SocketName);
	// 카메라는 스프링 암의 회전을 따르므로 PawnControlRotation은 꺼둠
	CameraComp->bUsePawnControlRotation = false;
}

// Called when the game starts or when spawned


// Called every frame

void AMagicCarpet::PostInitializeComponents()
{
	Super::PostInitializeComponents();

}

void AMagicCarpet::BeginPlay()
{
	
	Super::BeginPlay();
	
	

}

void AMagicCarpet::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	//	UE_LOG(LogSparta, Warning, TEXT("%s Tick"), *GetName()); 이런 식으로 로그 찍었다 매 프레임마다 호출되기에 로그 폭탄 찍힘으로 하지 않음
	// 필요시 디버깅용 코드 or 별도 조건으로

	
}



void AMagicCarpet::Destroyed()
{

}
void AMagicCarpet::EndPlay(const EEndPlayReason::Type EndPlayReason)
{

	Super::EndPlay(EndPlayReason);
}


// Called to bind functionality to input
void AMagicCarpet::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
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
				EnhancedInput->BindAction(PlayerController->MoveAction, ETriggerEvent::Triggered, this, &AMagicCarpet::Move);
			}
		
			if (PlayerController->LookAction)//IA_Look 액션 마우스가 Look()호출
			{
				EnhancedInput->BindAction(PlayerController->LookAction, ETriggerEvent::Triggered, this, &AMagicCarpet::Look);
			}
			
			
		}


	}
}


void AMagicCarpet::Move(const FInputActionValue& value)
{
	//컨트롤러가 있어야 방향 계산이 가능하겠죠?
	if (!Controller) return;
	//Value는 Axis2D로 설정된 IA_Move의 입력값(WASD)을 담고 있음
	const FVector2D MoveInput = value.Get<FVector2D>();
	if (!FMath::IsNearlyZero(MoveInput.X))
	{
		// 캐릭터가 바라보는 방향으로 x축 이동
		AddActorLocalOffset(GetActorForwardVector()* MoveInput.X);
	}
	if (!FMath::IsNearlyZero(MoveInput.Y))
	{
		//캐릭터의 오른쪽 방향으로 Y축 이동
		AddActorLocalOffset(GetActorRightVector()*MoveInput.Y);
	}
}

void AMagicCarpet::Look(const FInputActionValue& value)
{

}
