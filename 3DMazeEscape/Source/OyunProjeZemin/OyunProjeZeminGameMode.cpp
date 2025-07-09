// Copyright Epic Games, Inc. All Rights Reserved.

#include "OyunProjeZeminGameMode.h"
#include "OyunProjeZeminCharacter.h"
#include "UObject/ConstructorHelpers.h"

AOyunProjeZeminGameMode::AOyunProjeZeminGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
