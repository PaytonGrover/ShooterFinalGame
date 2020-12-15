// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "ShooterFinalGameGameModeBase.generated.h"

/**
 * 
 */
UCLASS()
class SHOOTERFINALGAME_API AShooterFinalGameGameModeBase : public AGameModeBase
{
	GENERATED_BODY()

	virtual void StartPlay() override;
	
};
