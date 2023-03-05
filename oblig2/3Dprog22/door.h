#ifndef DOOR_H
#define DOOR_H


#include "visualobject.h"

class Door : public VisualObject
{
public:
    Door();
    ~Door() override;
    void init(GLint matrixUniform) override;
    void draw() override;
    QVector3D getPosition() override;
    float getRadius() override;

private:
    QVector3D position;
};

#endif // DOOR_H
