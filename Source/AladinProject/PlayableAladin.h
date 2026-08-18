// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "PlayableAladin.generated.h"

class USpringArmComponent;//스프링 암 관련 클래스 헤더 선언
class UCameraComponent;//카메라 관련 클래스 전방 선언
struct FInputActionValue;//Enhanced Input에서 액션 값을 받을 구조체 전방 선언

UCLASS()
class ALADINPROJECT_API APlayableAladin : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	APlayableAladin();

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

	// 입력 바인딩을 처리할  가상 함수
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	//IA_MOVE와 IA_Jump 등을 처리할 함수 원형
	//Enhanced Input에서 액션 값을 FInPutActionValue로 전달됩니다(F은 Fucntion의 약자입니당)
	UFUNCTION()
	void Move(const FInputActionValue& value);//입력값을 담은 FInputActionValue 객체를 참조
	UFUNCTION()
	void StartJump(const FInputActionValue& value);
	UFUNCTION()
	void StopJump(const FInputActionValue& value);
	UFUNCTION()
	void Look(const FInputActionValue& value);
	UFUNCTION()
	void StartSprint(const FInputActionValue& value);
	UFUNCTION()
	void StopSprint(const FInputActionValue& value);

	
};
