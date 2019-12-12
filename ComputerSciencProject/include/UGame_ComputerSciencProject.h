#ifndef UGAME_COMPUTERSCIENCPROJECT_H
#define UGAME_COMPUTERSCIENCPROJECT_H

#include "UGame.h"

class UGame_ComputerSciencProject : public UGame
{
    public:
        UGame_ComputerSciencProject();
        virtual ~UGame_ComputerSciencProject();

        void Init() override;
        void Update() override;

    protected:

    private:
};

#endif // UGAME_COMPUTERSCIENCPROJECT_H
