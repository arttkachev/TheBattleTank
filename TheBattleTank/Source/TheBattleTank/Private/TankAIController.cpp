// Fill out your copyright notice in the Description page of Project Settings.

#include "TankAIController.h"
#include "TheBattleTank.h"
#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"


void ATankAIController::BeginPlay()
{
	Super::BeginPlay();
	auto ControlledTank = GetControlledTank();
	if (!ControlledTank)
	{
		UE_LOG(LogTemp, Warning, TEXT("AIController is not possesing a tank"));
	}
	else
	{
		UE_LOG(LogTemp, Warning, TEXT("AIController is possesing %s"), *(GetControlledTank()->GetName()));
	}
}

ATank* ATankAIController::GetControlledTank() const
{
	return Cast<ATank>(GetPawn());
}
