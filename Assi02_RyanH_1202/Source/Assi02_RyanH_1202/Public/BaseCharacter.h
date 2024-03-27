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

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category= "Bullets")
	TSubclassOf<class AProjectile> ProjectileClass;
	
protected:
	void RotateTurret(FVector LookAtTarget);
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Movement Variables")
	float TurretRotationSpeed;
	
	UPROPERTY(EditDefaultsOnly, Category = "Components")
	USceneComponent* ProjectileSpawnPoint;


private:
	UPROPERTY(EditAnywhere, Category = "Components")
	class UCapsuleComponent* CapsuleComp;
	UPROPERTY(EditDefaultsOnly, Category = "Components")
	UStaticMeshComponent* BaseMesh;
	UPROPERTY(EditDefaultsOnly, Category = "Components")
	UStaticMeshComponent* TurretMesh;
};
