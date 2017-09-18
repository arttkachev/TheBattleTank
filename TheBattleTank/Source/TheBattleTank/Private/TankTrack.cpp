// Fill out your copyright notice in the Description page of Project Settings.

#include "TankTrack.h"
#include "UObject/UObjectBaseUtility.h"

void UTankTrack::SetThrottle(float Throttle)
{
	// TODO Clamp throttle input so that a player can't overdrive
	auto ForceApplied = GetForwardVector() * Throttle * TrackMaxDrivingForce;
	auto ForceLocation = GetComponentLocation();
	auto TankRoot = Cast<UPrimitiveComponent>(GetOwner()->GetRootComponent());
	TankRoot->AddForceAtLocation(ForceApplied, ForceLocation);
}


