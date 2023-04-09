#include "heightmap.h"

#include "stb_image.h"
#include <cmath>

HeightMap::HeightMap(const char* ImagePath)
{
//    initializeOpenGLFunctions();
//    textureID = 0;
//    width = 0;
//    height = 0;
//    bitDepth = 0;



//    unsigned char* bildedata = stbi_load(ImagePath, &width, &height, &bitDepth, 0);

//    float xmin= -height/2 ,xmax= height/2, zmin= -width/2, zmax= width/2;
//    int h = 1;
//    float x=0,y=0,z=0;

//    for(x=xmin; x<xmax;x+=h)
//    {

//        for(z=zmin; z<zmax;y+=h)
//        {
//            y= (float)bildedata[h];
//            mVertices.push_back(Vertex{x,y,z,x,y,z});

//            y= (float)bildedata[h+width];
//            mVertices.push_back(Vertex{x+h,y,z,x,y,z});

//            y= (float)bildedata[h+1];
//            mVertices.push_back(Vertex{x,y,z+h,x,y,z});
//            mVertices.push_back(Vertex{x,y,z+h,x,y,z});

//            y= (float)bildedata[h+width];
//            mVertices.push_back(Vertex{x+h,y,z,x,y,z});

//            y= (float)bildedata[h+1+width];
//            mVertices.push_back(Vertex{x+h,y,z+h,x,y,z});
//        }
//    }
//    stbi_image_free(bildedata);

    unsigned char* data = stbi_load(ImagePath, &width, &height, &bitDepth, 1);

    float res = 1;
    float x{};
    float y{};
    float z{};
    int vert{};

    for (x = -height / 2; x < (height / 2); x += res) {
        for (z = -height / 2; z < (width / 2); z += res) {

            y = (float)data[vert];
            mVertices.push_back(Vertex{x, y, z, 0.0f, 0.0f, 1.0f});

            y = (float)data[vert+width];
            mVertices.push_back(Vertex{ x + res, y, z, 0.0f, 0.0f, 1.0f});

            y = (float)data[vert+1];
            mVertices.push_back(Vertex{ x, y, z + res, 0.0f, 0.0f, 1.0f});
            mVertices.push_back(Vertex{ x, y, z + res, 0.0f, 0.0f, 1.0f});

            y = (float)data[vert+width];
            mVertices.push_back(Vertex{ x + res, y, z, 0.0f, 0.0f, 1.0f});

            y = (float)data[vert+1+width];
            mVertices.push_back(Vertex{ x + res, y, z + res, 0.0f, 0.0f, 1.0f});

            vert++;
            // Get tex elvation for (i, j) tex coordinate)
            //unsigned char* texEl = data + (j + width * i) * channels;
            // Raw height at coordinate
            //unsigned char y = texEl[0]; // Needs correct path to file, gives nullptr if file is not found

        /*	vertices.push_back(Vertex{
                (-height / 2.0f + height * i/(float)height),
                ((int)y * yScale - yShift),
                (-width / 2.0f + width * j / (float)width)
            });*/
        }
    }

    stbi_image_free(data);

}

void HeightMap::init(GLint matrixUniform)
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

    glVertexAttribPointer(0, 3, GL_FLOAT, GL_FALSE, sizeof(Vertex), reinterpret_cast<GLvoid*>(0));
    glEnableVertexAttribArray(0);

    glVertexAttribPointer(1, 3, GL_FLOAT,GL_FALSE, sizeof(Vertex), reinterpret_cast<GLvoid*>(3 * sizeof(GLfloat)));
    glEnableVertexAttribArray(1);

    glVertexAttribPointer(2, 2, GL_FLOAT, GL_FALSE, sizeof(Vertex), reinterpret_cast<GLvoid*>(6 * sizeof(GLfloat)));
    glEnableVertexAttribArray(2);

    glBindVertexArray(0);
}

void HeightMap::draw()
{
    glBindVertexArray(mVAO);
    glUniformMatrix4fv(mMatrixUniform, 1, GL_FALSE, mMatrix.constData());
    glDrawArrays(GL_TRIANGLES, 0, mVertices.size());
}

