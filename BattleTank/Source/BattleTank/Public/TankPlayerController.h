// Copyright @Dheyaa Hussein.

#pragma once

#include "CoreMinimal.h"
#include "TankAimingComponent.h"
#include "GameFramework/PlayerController.h"
#include "TankPlayerController.generated.h"

/**
 * Responsible fro helping the player aim.
 */

UCLASS()
class BATTLETANK_API ATankPlayerController : public APlayerController
{
	GENERATED_BODY()
	

public:
	virtual void BeginPlay() override;

	virtual void Tick(float DeltaTime) override;

protected:

	UFUNCTION(BlueprintImplementableEvent, Category = "Setup")
	void FoundAimingComponent(UTankAimingComponent* AimCompRef);

private:
	UPROPERTY(EditAnywhere)
	float CrossHairXLocation = 0.5;

	UPROPERTY(EditAnywhere)
	float CrossHairYLocation = 0.33333;

	UPROPERTY(EditAnywhere)
	float LineTraceRange = 1000000.0;

	///Start the tank moving the barrel so that a shot will hit where the crosshair intersect the world
	void AimTowardsCrosshair();
	
	//Return an OUT parameter, true if it hit landscape
	bool GetSightRayHitLocation(FVector& OutHitLocation) const;

	bool GetLookDirection(FVector2D ScreenLocation, FVector& LookDirection) const;

	bool GetLookVectorHitLocation(FVector LookDirection, FVector& HitLocation) const;
};
