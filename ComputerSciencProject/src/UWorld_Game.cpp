#include "UWorld_Game.h"

#include "UWindow.h"

UWorld_Game::UWorld_Game()
{
    //ctor
}

UWorld_Game::~UWorld_Game()
{
    //dtor
}

void UWorld_Game::BeginWorld()
{
    window = new UWindow();

    window->init();
    window->openWindow();
}

void UWorld_Game::UpdateWorld()
{

    while ( SDL_Event )
    {

    }
}
