// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BaseCharacter.h"
#include "PlayerTank.generated.h"

/**
 * 
 */
UCLASS()
class ASSI02_RYANH_1202_API APlayerTank : public ABaseCharacter
{
	GENERATED_BODY()
	
public:
	APlayerTank();

	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Movement Variables")
	float MoveSpeed;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category= "Movement Variables")
	float TurnRate;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

private:
	UPROPERTY(VisibleAnywhere, Category = "Components")
	class USpringArmComponent* SpringArmComponent;
	UPROPERTY(VisibleAnywhere, Category = "Components")
	class UCameraComponent* CameraComponent;

	void Move(float Value);
	void Turn(float Value);
	void Fire();

	APlayerController* PlayerControllerRef;
};
