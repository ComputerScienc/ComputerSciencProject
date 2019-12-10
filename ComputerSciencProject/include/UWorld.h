#ifndef UWORLD_H
#define UWORLD_H

#include "UObject.h"
#include "UGame.h"

class UWorld : public UObject
{
    public:
        UWorld();
        virtual ~UWorld();

        void AddActor();

    protected:

    private:
};

#endif // UWORLD_H
