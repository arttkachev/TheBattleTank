// Fill out your copyright notice in the Description page of Project Settings.

#include "TankBarrel.h"
#include "Engine/World.h"
#include "Kismet/GameplayStatics.h"



void UTankBarrel::Elevate(float RelativeSpeed)
{
	auto PlayerPawn = GetWorld()->GetFirstPlayerController()->GetPawn();
	if (GetOwner() == PlayerPawn)
	{
		auto Time = GetWorld()->GetTimeSeconds();
		UE_LOG(LogTemp, Warning, TEXT("%f: Barrel->Elevate() called at speed %f"), Time, RelativeSpeed);
	}
}