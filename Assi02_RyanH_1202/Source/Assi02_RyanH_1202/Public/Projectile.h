// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Projectile.generated.h"

UCLASS()
class ASSI02_RYANH_1202_API AProjectile : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AProjectile();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	UPROPERTY(VisibleAnywhere, Category="Bullet Movement")
	class UProjectileMovementComponent* ProjectileMovement;
	
	UPROPERTY(EditDefaultsOnly, Category="Components")
	UStaticMeshComponent* ProjectileMesh;
private:

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;
};
