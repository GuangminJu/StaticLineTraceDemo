// Copyright Epic Games, Inc. All Rights Reserved.

#include "StaticLineTraceGameMode.h"
#include "StaticLineTraceCharacter.h"
#include "UObject/ConstructorHelpers.h"

AStaticLineTraceGameMode::AStaticLineTraceGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
