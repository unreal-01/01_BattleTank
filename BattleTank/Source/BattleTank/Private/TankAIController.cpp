// Fill out your copyright notice in the Description page of Project Settings.


#include "TankAIController.h"


void ATankAIController::BeginPlay()
{
	Super::BeginPlay();

	
}

void ATankAIController::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	auto PlayerTank = Cast<ATank>(GetWorld()->GetFirstPlayerController()->GetPawn());
	auto ControlledTank = Cast<ATank>(GetPawn());

	if (ensure(PlayerTank)) {
		// Move towards the player
		MoveToActor(PlayerTank, AcceptanceRadius); //TODO Check radius is in cm

		// Aim towards the player
		ControlledTank->AimAt(PlayerTank->GetActorLocation());

		ControlledTank->Fire();  //TODO LImit

	}
	
}


