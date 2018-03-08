// Copyright 2018 Priyabrata Biswal. All rights reserved.

#include "TankAIController.h"

void ATankAIController::BeginPlay()
{
	Super::BeginPlay();

	ATank* CurrentAITank = GetAIController();
	if (!CurrentAITank)
	{
		UE_LOG(LogTemp, Warning, TEXT("Tank not possesed by AI."))
	}
	else
	{;
		UE_LOG(LogTemp, Warning, TEXT("%s possesed by AI"), *CurrentAITank->GetName())
	}
	
}

ATank* ATankAIController::GetAIController() const
{
	return Cast<ATank>(GetPawn());
}