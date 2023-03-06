#include "npc.h"

NPC::NPC() : mx{0.0f}, my{0.0f}, mz{0.0f}
{
    Vertex v0{0.0f, 0.0f, 0.0f, 1,0,0}; mVertices.push_back(v0);
    Vertex v1{0.0f, 0.5f, 0.0f, 1,0,0}; mVertices.push_back(v1);
    Vertex v2{0.5f, 0.0f, 0.0f, 0,1,0}; mVertices.push_back(v2);
}

NPC::~NPC()
{

}

void NPC::init(GLint matrixUniform)
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

void NPC::draw()
{
    glBindVertexArray(mVAO);
    glUniformMatrix4fv(mMatrixUniform, 1, GL_FALSE, mMatrix.constData());
    glDrawArrays(GL_TRIANGLES, 0, mVertices.size());
}

void NPC::move(float dx, float dy, float dz)
{
    mx += dx;
    my += dy;
    mz += dz;

    mMatrix.translate(dx, dy, dz);
}
