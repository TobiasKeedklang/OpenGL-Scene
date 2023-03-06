#ifndef NPC_H
#define NPC_H

#include "visualobject.h"

class NPC : public VisualObject
{
public:
    NPC();
    ~NPC();

    void init(GLint matrixUniform) override;
    void draw() override;
    void move(float dx, float dy, float dz) override;

    bool curve;
    float mx, my, mz;

};

#endif // NPC_H
