#ifndef UWORLD_GAME_H
#define UWORLD_GAME_H

#include "UWorld.h"

class UWindow;

class UWorld_Game : public UWorld
{
    public:
        UWorld_Game();
        virtual ~UWorld_Game();

        //Only a UGame object should control these functions
        virtual void BeginWorld() override;
        virtual void UpdateWorld() override;

        UWindow* window;
        SDL_Event events;

    protected:

    private:
};

#endif // UWORLD_GAME_H
