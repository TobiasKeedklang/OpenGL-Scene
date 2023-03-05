#include "visualobject.h"


VisualObject::VisualObject()
{

}
VisualObject::~VisualObject()
{
   glDeleteVertexArrays( 1, &mVAO );
   glDeleteBuffers( 1, &mVBO );
}

void VisualObject::setRenderStyle(int input)
{
    renderValue = input;
}

void VisualObject::rotateX(GLfloat degrees)
{
    GLfloat rad = degrees * (M_PI/180.0f);

    QMatrix4x4 temp =
    {
        1.f,   0.f,                    0.f,    0.f,
        0.f, std::cos(rad),  std::sin(rad),    0.f,
        0.f, -std::sin(rad), std::cos(rad),    0.f,
        0.f,   0.f,                    0.f,    1.f
    };

    mMatrix = mMatrix*temp;
}

void VisualObject::rotateY(GLfloat degrees)
{
    GLfloat rad = degrees * (M_PI/180.0f);

    QMatrix4x4 temp =
    {
        std::cos(rad), 0.f, -std::sin(rad), 0.f,
        0.f,       1.f,      0.f,       0.f,
        std::sin(rad), 0.f,  std::cos(rad), 0.f,
        0.f,       0.f,      0.f,       1.f
    };

    mMatrix = mMatrix*temp;
}

void VisualObject::rotateZ(GLfloat degrees)
{
    GLfloat rad = degrees * (M_PI/180.0f);

    QMatrix4x4 temp =
    {
        std::cos(rad),  std::sin(rad), 0.f, 0.f,
        -std::sin(rad),  std::cos(rad), 0.f, 0.f,
        0.f,            0.f,       1.f, 0.f,
        0.f,            0.f,       0.f, 1.f
    };
    mMatrix = mMatrix*temp;
}

void VisualObject::setPosition3D(QVector3D inPos)
{
    auto V4D = mMatrix.column(3);
    V4D.setX(inPos.x());
    V4D.setY(inPos.y());
    V4D.setZ(inPos.z());
    mMatrix.setColumn(3, V4D);
}
