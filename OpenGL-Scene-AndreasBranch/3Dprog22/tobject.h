#ifndef TOBJECT_H
#define TOBJECT_H


#include "visualobject.h"

class tObject : public VisualObject
{
public:
    tObject();
    tObject(float dx, float dy, float dz, float dr);
    ~tObject() override;

    void init(GLint matrixUniform) override;
    void draw() override;
    void place(float dx, float dy, float dz, float dr);
    QVector3D getPosition() override;
    float getRadius() override;

private:
    /*
    struct {
        float mx, my, mz;
    } position;
    */
    QVector3D position;
    float mx, my, mz, mr;  //posisjon
};

#endif // TOBJECT_H
