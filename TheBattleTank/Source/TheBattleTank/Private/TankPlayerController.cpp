// Fill out your copyright notice in the Description page of Project Settings.

#include "TankPlayerController.h"
#include "TheBattleTank.h"
#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"


void ATankPlayerController::BeginPlay()
{
	Super::BeginPlay();
	auto ControlledTank = GetControlledTank();
	if (!ControlledTank)
	{
		UE_LOG(LogTemp, Warning, TEXT("PlayerController is not possesing a tank"));
	}
	else
	{
		UE_LOG(LogTemp, Warning, TEXT("PlayerController is possesing %s"), *(GetControlledTank()->GetName()));
	}
}

ATank* ATankPlayerController::GetControlledTank() const
{
	return Cast<ATank>(GetPawn());
}


