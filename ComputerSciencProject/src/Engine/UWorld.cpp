#include "UWorld.h"

UWorld::UWorld()
{
    //ctor
}

UWorld::~UWorld()
{
    //dtor
}


void UWorld::BeginWorld()
{

}

void UWorld::UpdateWorld()
{

}

void UWorld::EndWorld()
{
    for(int i = 0; i < (int)worldActors.size(); i++)
    {
        worldActors[i]->OnEnd();
        delete worldActors[i];
    }
}
