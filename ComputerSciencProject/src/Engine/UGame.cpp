#include "UGame.h"

#include "UWorld.h"

UGame::UGame()
{
    //ctor
}

UGame::~UGame()
{
    //dtor
}

void UGame::UnloadWorld()
{
    //Error checking for stupid people
    if(!currentWorld)
    {
        std::cout << "Warning: Could not unload world because it was not created." << std::endl;
    }
    else
    {
        //End world and delete pointer
        currentWorld->EndWorld();

        delete currentWorld;
    }
}
