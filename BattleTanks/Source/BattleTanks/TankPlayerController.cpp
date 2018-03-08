// Copyright 2018 Priyabrata Biswal. All rights reserved.
#include "BattleTanks.h"
#include "TankPlayerController.h"


void ATankPlayerController::BeginPlay()
{
	Super::BeginPlay();

	auto CurrentControlledTank = GetControlledTank();
	if (!CurrentControlledTank) 
	{
		UE_LOG(LogTemp, Warning, TEXT("No Tank Possesed."))
	}
	else 
	{
		UE_LOG(LogTemp, Warning, TEXT("Possessed Tank:%s"), *CurrentControlledTank->GetName())
	}

	
}


ATank* ATankPlayerController::GetControlledTank() const
{
	return Cast<ATank>(GetPawn());
}
