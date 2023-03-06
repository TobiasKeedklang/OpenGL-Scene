#ifndef LINE_H
#define LINE_H

#include <visualobject.h>

class Line : public VisualObject
{
public:
    Line();
    ~Line();

    void init(GLint matrixUniform) override;
    void draw() override;
};

#endif // LINE_H
