#include "UGame.h"

#include <iostream>
#include <string>

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
        std::cout << std::string("Warning: Loading world was not of UWorld type.") << std::cout;
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
