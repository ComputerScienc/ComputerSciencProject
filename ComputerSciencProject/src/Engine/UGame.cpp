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

template<typename T>
void UGame::LoadWorld()
{
    //Check if the type was of UWorld
    if(typeid(T) != typeid(UWorld))
    {
        std::cout << "Warning: Could not load world because the it was not of the right type." << std::endl;
    }
    else
    {
        //If a world is already loaded remove it from memory
        if(currentWorld != nullptr)
        {
            UnloadWorld();
        }

        currentWorld = new T();
    }
}

void UGame::UnloadWorld()
{
    //Error checking for stupid people
    if(currentWorld == nullptr)
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
