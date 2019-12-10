#ifndef UGAME_H
#define UGAME_H

#include <typeinfo>

class UWorld;

class UGame
{
    public:
        UGame();
        virtual ~UGame();

        UWorld* currentWorld;

        //Uses template to create a world
        template<typename T>
        void LoadWorld();

        //Stops world and removes it from memory
        void UnloadWorld();

        //Unloads and reloads the world from memory
        void RestartWorld();

        //Begins game
        void Init();
        void Update();
        void End();

    protected:

    private:
};

#endif // UGAME_H
