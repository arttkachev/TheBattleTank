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

void ATankPlayerController::Tick(float DeltaTIme)
{
	Super::Tick(DeltaTIme);
	//AimTowardsCrosshair();
	UE_LOG(LogTemp, Warning, TEXT("Tank Player Controller is ticking now"));
}

ATank* ATankPlayerController::GetControlledTank() const
{
	return Cast<ATank>(GetPawn());
}

void ATankPlayerController::AimTowardsCrosshair()
{
	if (!GetControlledTank())
	{
		return;
	}
	// Get World Location through the crosshair
	   // if it hits the landscape
	     // tell the tank to aim to that location
}
