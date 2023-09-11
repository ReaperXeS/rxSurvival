// Copyright Epic Games, Inc. All Rights Reserved.

#include "rxSurvivalGameMode.h"
#include "rxSurvivalCharacter.h"
#include "UObject/ConstructorHelpers.h"

ArxSurvivalGameMode::ArxSurvivalGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPerson/Blueprints/BP_FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

}
