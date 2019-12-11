#ifndef AACTOR_H
#define AACTOR_H

#include "UObject.h"

#include "FTransform2D.h"

class AActor : public UObject
{
    public:
        AActor();
        virtual ~AActor();

        virtual void OnBegin() {};
        virtual void OnTick(float deltaTime) {};
        virtual void OnEnd() {};

        FTransform2D transform;

        //Internal Engine use
        float lastDeltaTime = 0;

    protected:

    private:
};

#endif // AACTOR_H
