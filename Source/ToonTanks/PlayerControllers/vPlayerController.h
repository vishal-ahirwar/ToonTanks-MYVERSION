// Copyright©2021 vAhirwar Technology.All rights reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "vPlayerController.generated.h"

/**
 * 
 */
UCLASS()
class TOONTANKS_API AvPlayerController : public APlayerController
{
	GENERATED_BODY()

public:
	void SetPlayerEnabledState(bool SetPlayerEnabled);
	
	
};
