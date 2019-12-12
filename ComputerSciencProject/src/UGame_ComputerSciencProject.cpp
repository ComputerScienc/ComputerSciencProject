#include "UGame_ComputerSciencProject.h"

#include "UWorld_Game.h"

UGame_ComputerSciencProject::UGame_ComputerSciencProject()
{
    //ctor
}

UGame_ComputerSciencProject::~UGame_ComputerSciencProject()
{
    //dtor
}

void UGame_ComputerSciencProject::Init()
{
    LoadWorld<UWorld_Game>();

    currentWorld->BeginWorld();
}

void UGame_ComputerSciencProject::Update()
{
    currentWorld->UpdateWorld();
}
