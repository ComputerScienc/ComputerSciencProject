#ifndef UWINDOW_H
#define UWINDOW_H

#include "UObject.h"

#include <SDL2\sdl.h>

//Uses GLFW because if not the game would not create windows with crossplatformatibility
class UWindow : public UObject
{
    public:
        UWindow();
        virtual ~UWindow();

        SDL_Window* window;

        void init();
        void openWindow();
        void closeWindow();
        void shutdown();

    protected:

    private:
};

#endif // UWINDOW_H
