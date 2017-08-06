// Fill out your copyright notice in the Description page of Project Settings.

#include "TankPlayerController.h"
#include "TheBattleTank.h"
#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"


ATank* ATankPlayerController::GetControlledTank() const
{
	return Cast<ATank>(GetPawn());
}


