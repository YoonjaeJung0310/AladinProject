// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "CarpetController.generated.h"

class UInputMappingContext;//IMC 관련 전방 선언
class UInputAction;//IA 관련 전방 선언
UCLASS()
class ALADINPROJECT_API ACarpetController : public APlayerController
{
	GENERATED_BODY()
public:
	ACarpetController();
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Input")
	UInputMappingContext* InputMappingContext;
	//IA_Move를 지정할 포인터 변수 선언
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Input")
	UInputAction* MoveAction;
	//IA_Look를 지정할 포인터 변수 선언
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Input")
	UInputAction* LookAction;
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Input")
	UInputAction* MoveUpDownAction;

	virtual void BeginPlay() override;
	
};
