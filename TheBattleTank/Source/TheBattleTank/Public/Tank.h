// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "Tank.generated.h"

//forward declaration
//class UTankBarrel;

//class UTankTurret;
//class AProjectile;

DECLARE_DYNAMIC_MULTICAST_DELEGATE (FTankDelegate);
UCLASS()
class THEBATTLETANK_API ATank : public APawn
{
	GENERATED_BODY()

public:
	virtual void BeginPlay() override;
	virtual float TakeDamage(float DamageAmount,struct FDamageEvent const & DamageEvent,class AController * EventInstigator,AActor * DamageCauser) override;
	UFUNCTION(BlueprintPure, Category = "Health")
	float GetHealthPercent() const;
	FTankDelegate OnDeath;
private:
	// Sets default values for this pawn's properties
	ATank();
	float DamageToApply;
	UPROPERTY(EditDefaultsOnly, Category = "Setup")
	int32 StartingHealth = 100;
	UPROPERTY(VisibleAnywhere, Category = "Health")
	int32 CurrentHealth;

}
;