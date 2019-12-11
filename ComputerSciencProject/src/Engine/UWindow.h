#ifndef UWINDOW_H
#define UWINDOW_H

#include "UObject.h"

#include <GLFW\glfw3.h>

//Uses GLFW because if not the game would not create windows with crossplatformatibility
class UWindow : public UObject
{
    public:
        UWindow();
        virtual ~UWindow();

        GLFWwindow* window;

        void openWindow();
        void closeWindow();

    protected:

    private:
};

#endif // UWINDOW_H
