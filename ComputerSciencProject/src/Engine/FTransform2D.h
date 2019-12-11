#ifndef FTRANSFORM2D_H
#define FTRANSFORM2D_H

#include "UObject.h"

#include <glm\glm.hpp>

class FTransform2D : public UObject
{
    public:
        FTransform2D();
        virtual ~FTransform2D();

        FTransform2D(glm::vec2 newPosition);
        FTransform2D(glm::vec2 newPosition, float newRotation);
        FTransform2D(glm::vec2 newPosition, float newRotation, glm::vec2 newScale);
        FTransform2D(float newRotation);
        FTransform2D(glm::vec2 newPosition, glm::vec2 newScale);


        glm::vec2 position;
        glm::vec2 scale;
        float rotation;

        glm::mat4 getMatrix();

    protected:

    private:

};

#endif // FTRANSFORM2D_H
