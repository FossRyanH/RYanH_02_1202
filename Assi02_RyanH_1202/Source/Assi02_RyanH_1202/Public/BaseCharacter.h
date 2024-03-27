// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "BaseCharacter.generated.h"

UCLASS()
class ASSI02_RYANH_1202_API ABaseCharacter : public APawn
{
	GENERATED_BODY()

public:
	// Sets default values for this pawn's properties
	ABaseCharacter();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

private:
	UPROPERTY(EditAnywhere, Category = "Components")
	class UCapsuleComponent* CapsuleComp;
	UPROPERTY(EditDefaultsOnly, Category = "Components")
	UStaticMeshComponent* BaseMesh;
	UPROPERTY(EditDefaultsOnly, Category = "Components")
	UStaticMeshComponent* TurretMesh;
	UPROPERTY(EditDefaultsOnly, Category = "Components")
	USceneComponent* ProjectileSpawnPoint;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

};
