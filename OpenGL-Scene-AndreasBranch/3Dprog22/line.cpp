#include "line.h"

Line::Line()
{
    float a = -1.0f, b = 1.0f, n = 11.0f;
    float h = (b - a) / n;

    float y = 0.0f;

    for (auto x = a; x <= b; x += h)
        {
            float z = -x;
            mVertices.push_back(Vertex{x, y, z, (x - a) / (b - a), y, (z - a) / (b - a)});
        }
}

Line::~Line()
{

}

void Line::init(GLint matrixUniform)
{
    mMatrixUniform = matrixUniform;
    initializeOpenGLFunctions();

    //********************** Making the object to be drawn **********************

    //Making and using the Vertex Array Object - VAO
    //VAO is a containter that holds VBOs
    glGenVertexArrays( 1, &mVAO );
    glBindVertexArray( mVAO );

    //Making and using the Vertex Buffer Object to hold vertices - VBO
    //Since the mVAO is bound, this VBO will belong to that VAO
    glGenBuffers( 1, &mVBO );
    glBindBuffer( GL_ARRAY_BUFFER, mVBO );

    //this sends the vertex data to the GPU:
    glBufferData( GL_ARRAY_BUFFER,                       //what buffer type
                  mVertices.size() * sizeof( Vertex ),   //how big buffer do we need
                  mVertices.data(),                      //the actual vertices
                  GL_STATIC_DRAW                         //should the buffer be updated on the GPU
                  );

    // 1st attribute buffer : vertices
    glBindBuffer(GL_ARRAY_BUFFER, mVBO);
    glVertexAttribPointer(
                0,                           // attribute. No particular reason for 0, but must match layout(location = 0) in the vertex shader.
                3,                           // size / number of elements of data type
                GL_FLOAT,                    // data type
                GL_FALSE,                    // normalize data
                sizeof(Vertex),         // stride
                reinterpret_cast<GLvoid*>(0  ));               // array buffer offset
    glEnableVertexAttribArray(0);


    // 2nd attribute buffer : colors
    // Same parameter list as above but attribute and offset is adjusted accoringly
    glVertexAttribPointer(
                1,
                3,
                GL_FLOAT,
                GL_FALSE,
                sizeof( Vertex ),
                reinterpret_cast<GLvoid*>(3 * sizeof(GLfloat)) );
    glEnableVertexAttribArray(1);

    glBindVertexArray(0);
}

void Line::draw()
{
    glBindVertexArray( mVAO );
    glUniformMatrix4fv( mMatrixUniform, 1, GL_FALSE, mMatrix.constData());
    glDrawArrays(GL_LINE_STRIP, 0, mVertices.size());
}
