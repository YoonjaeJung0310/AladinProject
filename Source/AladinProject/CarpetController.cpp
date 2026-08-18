// Fill out your copyright notice in the Description page of Project Settings.


#include "CarpetController.h"
#include "EnhancedInputSubsystems.h"//EnhancedInputSubsystem 관련 헤더파일 include


ACarpetController::ACarpetController()
	:InputMappingContext(nullptr)
	, MoveAction(nullptr)
	, LookAction(nullptr)
{
}

void ACarpetController::BeginPlay()
{
	Super::BeginPlay();

	//현재 PlayerController에 연결된 local player 객체를 가져옵시다(LocalPlayer는 ULocalPlayer 클래스의 포인터)
	if (ULocalPlayer* LocalPlayer = GetLocalPlayer())
	{
		//Local Player에서 EnhancedInputLocalPlayerSubsystem을 가져옵시다
		// (UEnhancedInputLocalPlayerSubsystem은 ULocalPlayer의 서브시스템, 또한 그것을 포인터 만들어서 
		if (UEnhancedInputLocalPlayerSubsystem* Subsystem = LocalPlayer->GetSubsystem<UEnhancedInputLocalPlayerSubsystem>())
		{
			if (InputMappingContext)
			{
				//서브시스템을 통해 우리가 할당한 IMC를 활성화
				//우선순위(Priority)는 0이 가장 높은 우선순위
				Subsystem->AddMappingContext(InputMappingContext, 0);
			}
		}
	}
}

