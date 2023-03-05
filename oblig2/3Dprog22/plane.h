#ifndef PLANE_H
#define PLANE_H


#include "visualobject.h"

class Plane : public VisualObject
{
public:
    Plane();
    Plane(std::string filnavn);
    ~Plane() override;

    void writeFile(std::string filnavn);
    void readFile(std::string filnavn);
    void init(GLint matrixUniform) override;
    void draw() override;
    void place(float dx, float dy, float dz, float dr);
    QVector3D getPosition() override;
    float getRadius() override;

private:
    QVector3D position;
    float mx, my, mz, mr;  //posisjon
};

#endif // PLANE_H
