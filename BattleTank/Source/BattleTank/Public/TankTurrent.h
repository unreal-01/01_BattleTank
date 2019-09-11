// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/StaticMeshComponent.h"
#include "TankTurrent.generated.h"

/**
 * 
 */
UCLASS(Blueprintable, BlueprintType, ClassGroup = (Custom), meta = (BlueprintSpawnableComponent))
class BATTLETANK_API UTankTurrent : public UStaticMeshComponent
{
	GENERATED_BODY()
	

public:

	UPROPERTY(EditAnywhere, Category = Setup)
	float MaxDegreePerSecond = 25;

	// -1 is max downward speed, and *1 is max up movement
	void Rotate(float RelativeSpeed);

};
        

