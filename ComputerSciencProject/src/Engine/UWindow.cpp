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

int windowSizeX = 1025, windowSizeY = 720;

void UWindow::openWindow()
{
    window = glfwCreateWindow(windowSizeX, windowSizeY, "Computer Scienc Project Game", nullptr, nullptr);

    if(!window)
    {
        const char* error;
        glfwGetError(&error);

        std::cout << "Error: " << error << std::endl;
    }

}

void UWindow::closeWindow()
{
    if(window)
    {
        glfwDestroyWindow(window);
    }
    else
    {
        std::cout << "Error: Could not close window that was not even created!" << std::endl;
    }
}
