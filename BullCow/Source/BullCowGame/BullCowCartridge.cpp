// Fill out your copyright notice in the Description page of Project Settings.
#include "BullCowCartridge.h"

void UBullCowCartridge::BeginPlay() // When the game starts
{
    Super::BeginPlay();
    PrintLine(TEXT("Hi There! Welcome to Bull Cows.\nPress enter to continue...  "));
}

void UBullCowCartridge::OnInput(const FString& Input) // When the player hits enter
{
    ClearScreen();
    FString HiddenWord;
    HiddenWord = TEXT("category"); // Move outside this function
    PrintLine(Input);

    if(Input == HiddenWord) {
        PrintLine(TEXT("You've guessed the hidden word!"));
    } else {
        PrintLine(TEXT("You have lost."));
    }
}