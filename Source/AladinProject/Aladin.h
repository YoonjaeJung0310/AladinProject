// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "Aladin.generated.h"

class USpringArmComponent;
class UCameraComponent;
class UCapsuleComponent;
class USkeletalMeshComponent;
struct FInputActionValue;

UCLASS()
class ALADINPROJECT_API AAladin : public APawn
{
	GENERATED_BODY()

public:
	// Sets default values for this pawn's properties
	AAladin();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	//스프링 암 컴포넌트
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Camera")
	USpringArmComponent* SpringArmComp;//USpringArmComponent 객체를 가리키는 포인터 SpringArmComp 생성
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Camera")
	UCameraComponent* CameraComp;//UCameraComponent 객체를 가리키는 포인터 CameraComp 생성
	//이동 속도 관련 매개변수들
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Movement")
	float NormalSpeed;//기본 걷기 속도
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Movement")
	float SprintSpeedMultiplier;//달리기 속도를 몇배로 할거냐
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Movement")
	float SprintSpeed;//실제 달리기 속도
public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

};
