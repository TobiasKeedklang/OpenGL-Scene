#ifndef HEIGHTMAP_H
#define HEIGHTMAP_H

#include "visualobject.h"
#include <QOpenGLFunctions_4_1_Core>

class HeightMap: public VisualObject
{
public:
    HeightMap(const char* ImagePath);

    void init(GLint matrixUniform);
    void draw();
    private:
    GLuint textureID;
    int width, height, bitDepth;
    char* fileLocation;

    class Logger *mLogger{nullptr};
};

#endif // HEIGHTMAP_H
