#ifndef CURVE_H
#define CURVE_H

#include <visualobject.h>

class Curve : public VisualObject
{
public:
    Curve();
    ~Curve();

    void init(GLint matrixUniform) override;
    void draw() override;
};

#endif // CURVE_H
