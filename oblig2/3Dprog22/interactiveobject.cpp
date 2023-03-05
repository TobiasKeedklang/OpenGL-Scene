#include "interactiveobject.h"

InteractiveObject::InteractiveObject() : mx{0.0f}, my{0.0f}, mz{0.0f}
{
    //     v  x    y    z     r g b     mVertices
    Vertex v0{0.0f,0.0f,0.0f, 1,0,0};   mVertices.push_back(v0);
    Vertex v1{0.5f,0.0f,0.0f, 0,0,1};   mVertices.push_back(v1);
    Vertex v2{0.5f,0.5f,0.0f, 1,0,0};   mVertices.push_back(v2);
}

InteractiveObject::~InteractiveObject()
{

}

void InteractiveObject::init(GLint matrixUniform)
{
    mMatrixUniform = matrixUniform;
    initializeOpenGLFunctions();

    glGenVertexArrays(1, &mVAO);
    glBindVertexArray(mVAO);

    glGenBuffers(1, &mVBO);
    glBindBuffer(GL_ARRAY_BUFFER, mVBO);

    glBufferData(GL_ARRAY_BUFFER,
                 mVertices.size() * sizeof(Vertex),
                 mVertices.data(),
                 GL_STATIC_DRAW);
    glBindBuffer(GL_ARRAY_BUFFER, mVBO);
    glVertexAttribPointer(0,
                          3,
                          GL_FLOAT,
                          GL_FALSE,
                          sizeof(Vertex),
                          reinterpret_cast<GLvoid*>(0));
    glEnableVertexAttribArray(0);
    glVertexAttribPointer(1,
                          3,
                          GL_FLOAT,
                          GL_FALSE,
                          sizeof(Vertex),
                          reinterpret_cast<GLvoid*>(3 * sizeof(GLfloat)));
    glEnableVertexAttribArray(1);

    glBindVertexArray(0);
}

void InteractiveObject::draw()
{
    glBindVertexArray(mVAO);
    glUniformMatrix4fv(mMatrixUniform, 1, GL_FALSE, mMatrix.constData());
    glDrawArrays(GL_TRIANGLES, 0, mVertices.size());
}

void InteractiveObject::move(float dx, float dy, float dz)
{
    mx += dx;
    my += dy;
    mz += dz;
    mr = 0.1f;

    /*
    position.setX(mx);
    position.setY(my);
    position.setZ(mz);
    */


//    qDebug() << "move";
    mMatrix.translate(dx, dy, dz);
}

float InteractiveObject::getRadius()
{
    return mr;
}

QVector3D InteractiveObject::getPosition()
{
    return mMatrix.column(3).toVector3D();
}
