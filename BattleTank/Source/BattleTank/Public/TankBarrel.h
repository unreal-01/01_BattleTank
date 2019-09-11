// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "Components/StaticMeshComponent.h"
#include "CoreMinimal.h"
#include "TankBarrel.generated.h"

/**
 * 
 */
UCLASS(Blueprintable, BlueprintType, ClassGroup = (Custom), meta = (BlueprintSpawnableComponent))
class BATTLETANK_API UTankBarrel : public UStaticMeshComponent
{
	GENERATED_BODY()
	
public:
	// -1 is max downward speed, and *1 is max up movement
	void Elevate(float RelativeSpeed);

public:
	UPROPERTY(EditAnywhere, Category = Setup)
	float MaxDegreePerSecond = 10; 

	UPROPERTY(EditAnywhere, Category = Setup)
	float MaxElevationDegrees = 40; 

	UPROPERTY(EditAnywhere, Category = Setup)
	float MinElevationDegrees = 0; 


};

  

