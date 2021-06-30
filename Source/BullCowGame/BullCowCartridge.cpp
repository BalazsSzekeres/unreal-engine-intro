// Fill out your copyright notice in the Description page of Project Settings.
#include "BullCowCartridge.h"

void UBullCowCartridge::BeginPlay() // When the game starts
{
    Super::BeginPlay();
    PrintLine(TEXT("Hello There!"));
    PrintLine(TEXT("Press TAB to enable console"));
    
    SetUpGame();

}

void UBullCowCartridge::OnInput(const FString& Input) // When the player hits enter
{
    ClearScreen();
    

    if (Input == HiddenWorld)
    {
        PrintLine(TEXT("This is where the fun begins!"));
    }
    else
    {
        if (Input.Len() != HiddenWorld.Len())
        {
            PrintLine(TEXT("No no no, nothing too fancy."));
            PrintLine(FString::Printf(TEXT("You are looking for %i characters."), HiddenWorld.Len()));

        }

        if (Lives == 0)
        {
            PrintLine(TEXT("So uncivilized."));
        }
    }
}

void UBullCowCartridge::SetUpGame()
{
    HiddenWorld = TEXT("General Kenobi");
    Lives = 3;
}