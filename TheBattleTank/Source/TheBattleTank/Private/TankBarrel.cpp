// Fill out your copyright notice in the Description page of Project Settings.

#include "TankBarrel.h"
#include "Engine/World.h"
#include "Kismet/GameplayStatics.h"



void UTankBarrel::Elevate(float DegreesPerSecond)
{
	//auto PlayerPawn = GetWorld()->GetFirstPlayerController()->GetPawn();
	//if (GetOwner() == PlayerPawn)
	//{
		UE_LOG(LogTemp, Warning, TEXT("Barrel->Elevate() called at speed %f"), DegreesPerSecond);
	//}
}