#ifndef UGAME_H
#define UGAME_H

#include <typeinfo>
#include <iostream>
#include <string>

class UWorld;
class UWorld_Game;

class UGame
{
    public:
        UGame();
        virtual ~UGame();

        UWorld* currentWorld;

        //Uses template to create a world
        template<typename T>
        void LoadWorld()
        {
            //Check if the type was of UWorld
            if(typeid(T) != typeid(UWorld_Game))
            {
                std::cout << "Warning: Could not load world because the it was not of the right type." << std::endl;
            }
            else
            {
                //If a world is already loaded remove it from memory
                if(currentWorld == nullptr)
                {
                    UnloadWorld();
                }

                currentWorld = new T();
            }
        }


        //Stops world and removes it from memory
        void UnloadWorld();

        //Unloads and reloads the world from memory
        void RestartWorld();

        //Begins game
        virtual void Init() {};
        virtual void Update() {};
        virtual void End() {};

    protected:

    private:
};

#endif // UGAME_H
