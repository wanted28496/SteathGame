// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.

#include "SteathGameGameMode.h"
#include "SteathGameHUD.h"
#include "SteathGameCharacter.h"
#include "UObject/ConstructorHelpers.h"

ASteathGameGameMode::ASteathGameGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPersonCPP/Blueprints/FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = ASteathGameHUD::StaticClass();
}
