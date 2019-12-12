#include "UWindow.h"

#include <iostream>

UWindow::UWindow()
{
    //ctor
}

UWindow::~UWindow()
{
    //dtor
}

int windowSizeX = 1024, windowSizeY = 720;


void UWindow::init()
{
    if(!window)
    {
        std::cout << "Error: Could not initalize GLFW." << std::endl;
    }
}

void UWindow::openWindow()
{

    window = SDL_CreateWindow("Computer Scienc Game", SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNDEFINED, windowSizeX, windowSizeY, SDL_WINDOW_OPENGL | SDL_WINDOW_RESIZABLE);

    if(!window)
    {
        const char* error = "error";

        std::cout << "Error: " << error << std::endl;
    }

}

void UWindow::closeWindow()
{
    if(window)
    {
        SDL_DestroyWindow(window);
    }
    else
    {
        std::cout << "Error: Could not close window that was not even created!" << std::endl;
    }
}

void UWindow::shutdown()
{
    SDL_Quit();
}
