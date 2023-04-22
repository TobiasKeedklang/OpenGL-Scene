#ifndef HOUSE_H
#define HOUSE_H

#include "visualobject.h"

class House : public VisualObject
{
public:
    House();
    ~House() override;
    void init(GLint matrixUniform) override;
    void draw() override;
    QVector3D getPosition() override;
    float getRadius() override;

private:
    QVector3D position;
};

#endif // HOUSE_H
