// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "MagicCarpet.generated.h"

class USpringArmComponent;//스프링 암 관련 클래스 헤더 선언
class UCameraComponent;//카메라 관련 클래스 전방 선언
class USkeletalMeshComponent;
class UCapsuleComponent;
struct FInputActionValue;//Enhanced Input에서 액션 값을 받을 구조체 전방 선언

UCLASS()
class ALADINPROJECT_API AMagicCarpet : public APawn
{
	GENERATED_BODY()

public:
	// Sets default values for this pawn's properties
	AMagicCarpet();

protected:
	// Called when the game starts or when spawned
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Camera")
	USpringArmComponent* SpringArmComp;//USpringArmComponent 객체를 가리키는 포인터 SpringArmComp 생성
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Camera")
	UCameraComponent* CameraComp;//UCameraComponent 객체를 가리키는 포인터 CameraComp 생성
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Camera")
	UCapsuleComponent* CapsuleComponent;
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Camera")
	USkeletalMeshComponent* MeshComponent;
	virtual void PostInitializeComponents() override;
	virtual void BeginPlay() override;
	virtual void Tick(float DeltaTime) override;
	virtual void Destroyed() override;
	virtual void EndPlay(const EEndPlayReason::Type EndPlayReason) override;

public:	
	// Called every frame


	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;
	UFUNCTION()
	void Move(const FInputActionValue& value);
	UFUNCTION()
	void Look(const FInputActionValue& value);

};
