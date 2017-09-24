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
	UFUNCTION(BlueprintCallable, Category = "Input")
	void IntendMoveForward(float Throw);
	UFUNCTION(BlueprintCallable, Category = "Input")
	void IntendTurnRight(float Throw);

protected:
	UFUNCTION(BlueprintCallable, Category = "Setup")
	void Initialise(UTankTrack* LeftTrackToSet, UTankTrack* RightTrackToSet);
		
private:
	//A callable function from pathfinding logic by AI controllers 
	virtual void RequestDirectMove(const FVector& MoveVelocity, bool bForceMaxSpeed) override;
	UTankTrack* LeftTrack = nullptr;
	UTankTrack* RightTrack = nullptr;
};
