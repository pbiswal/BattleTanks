// Copyright 2018 Priyabrata Biswal. All rights reserved.

#pragma once
#include "Tank.h"
#include "CoreMinimal.h"
#include "AIController.h"
#include "TankAIController.generated.h"

/**
 * 
 */
UCLASS()
class BATTLETANKS_API ATankAIController : public AAIController
{
	GENERATED_BODY()
	virtual void BeginPlay() override;
public:
	ATank* GetAIController() const;
	
	
};
