// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AIController.h"
#include "TankAIController.generated.h" // must be last include

// forward declaration
class ATank;

/**
 * 
 */
UCLASS()
class THEBATTLETANK_API ATankAIController : public AAIController
{
	GENERATED_BODY()
	
private:
	void BeginPlay() override;
	void Tick(float DeltaTime) override;
	float AcceptanceRadius = 3000;
};
