#ifndef UWORLD_H
#define UWORLD_H

#include "UObject.h"

#include <vector>

#include "UGame.h"
#include "AActor.h"

class UWorld : public UObject
{
    public:
        UWorld();
        virtual ~UWorld();

        void AddActor();


        //Only a UGame object should control these functions
        void BeginWorld();
        void UpdateWorld();
        void EndWorld();

        //Actors that are in the world
        std::vector<AActor*> worldActors;

    protected:

    private:
};

#endif // UWORLD_H
