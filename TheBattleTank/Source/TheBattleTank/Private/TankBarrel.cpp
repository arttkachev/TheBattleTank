// Fill out your copyright notice in the Description page of Project Settings.

#include "TankBarrel.h"
#include "Engine/World.h"
#include "Kismet/GameplayStatics.h"



void UTankBarrel::Elevate(float RelativeSpeed)
{
	RelativeSpeed = FMath::Clamp<float>(RelativeSpeed, -1, +1);
	auto ElevateChange = RelativeSpeed * MaxDegreesPerSecond *GetWorld()->DeltaTimeSeconds;
	auto RawNewRotation = RelativeRotation.Pitch + ElevateChange;
	auto Elevation = FMath::Clamp<float>(RawNewRotation, MinElevationDegrees, MaxElevationDegrees);
	SetRelativeRotation(FRotator(Elevation, 0, 0));
	
}