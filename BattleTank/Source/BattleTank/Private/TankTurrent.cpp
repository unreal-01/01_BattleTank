// Fill out your copyright notice in the Description page of Project Settings.


#include "TankTurrent.h"

void UTankTurrent::Rotate(float RelativeSpeed)
{
	auto RotationChagne = RelativeSpeed * MaxDegreePerSecond * GetWorld()->DeltaTimeSeconds;
	auto Rotation = RelativeRotation.Yaw + RotationChagne; // 
	SetRelativeRotation(FRotator(0, Rotation, 0));
}