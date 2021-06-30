// Fill out your copyright notice in the Description page of Project Settings.
#include "BullCowCartridge.h"

void UBullCowCartridge::BeginPlay() // When the game starts
{
    Super::BeginPlay();
    PrintLine(TEXT("Hello There!"));
    PrintLine(TEXT("Press TAB to enable console"));
    HiddenWorld = TEXT("General Kenobi");
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
        PrintLine(TEXT("So uncivilized."));
    }
}