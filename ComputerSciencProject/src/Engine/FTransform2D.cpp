#include "FTransform2D.h"

#include <glm\gtx\quaternion.hpp>
#include <glm\gtx\transform.hpp>


FTransform2D::FTransform2D()
{
    //ctor
}

FTransform2D::~FTransform2D()
{
    //dtor
}

FTransform2D::FTransform2D(glm::vec2 newPosition)
    : position(newPosition)
{
}

FTransform2D::FTransform2D(glm::vec2 newPosition, float newRotation)
    : position(newPosition), rotation(newRotation)
{
}

FTransform2D::FTransform2D(glm::vec2 newPosition, float newRotation, glm::vec2 newScale)
    : position(newPosition), rotation(newRotation), scale(newScale)
{
}

FTransform2D::FTransform2D(float newRotation)
    : rotation(newRotation)
{
}

FTransform2D::FTransform2D(glm::vec2 newPosition, glm::vec2 newScale)
    : position(newPosition), scale(newScale)
{
}

glm::mat4 FTransform2D::getMatrix()
{
    glm::mat4 matrix;

    glm::translate(matrix, glm::vec3(position, 0.0f));

    matrix = glm::rotate(matrix, glm::radians(rotation), glm::vec3(1.0f, 0.0f, 0.0f));
	matrix = glm::rotate(matrix, glm::radians(0.0f), glm::vec3(0.0f, 1.0f, 0.0f));
	matrix = glm::rotate(matrix, glm::radians(0.0f), glm::vec3(0.0f, 0.0f, 1.0f));

    glm::scale(matrix, glm::vec3(scale, 1.0f));

    return matrix;

}
