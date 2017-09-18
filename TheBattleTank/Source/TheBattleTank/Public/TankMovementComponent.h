// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/NavMovementComponent.h"
#include "TankMovementComponent.generated.h"

//Forward Declaration
class UTankTrack;
/**
 * Tank Movement Component is component that controls the Tank
 */
UCLASS(ClassGroup = (Custom), meta = (BlueprintSpawnableComponent))
class THEBATTLETANK_API UTankMovementComponent : public UNavMovementComponent
{
	GENERATED_BODY()
	
public:
	UFUNCTION(BlueprintCallable, Category = Setup)
	void Initialise(UTankTrack* LeftTrackToSet, UTankTrack* RightTrackToSet);
	UFUNCTION(BlueprintCallable, Category = Input)
	void IntendMoveForward(float Throw);
	UFUNCTION(BlueprintCallable, Category = Input)
	void IntendTurnRight(float Throw);

	/** path following: request new velocity */
	void RequestDirectMove(const FVector& MoveVelocity, bool bForceMaxSpeed) override;
	
	
private:
	UTankTrack* LeftTrack = nullptr;
	UTankTrack* RightTrack = nullptr;
};
