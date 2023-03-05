#include "tobject.h"

tObject::tObject()
{

}

tObject::tObject(float dx, float dy, float dz, float dr) : mx{0.0f}, my{0.0f}, mz{0.0f}
{
    Vertex v0{-0.2f, 0.3f, -0.2f, 1.0f, 0.0f, 0.0f};    mVertices.push_back(v0);
    Vertex v1{-0.2f, 0.7f, 0.2f, 1.0f, 0.0f, 0.0f};     mVertices.push_back(v1);
    Vertex v2{0.2f, 0.7f, -0.2f, 1.0f, 0.0f, 0.0f};     mVertices.push_back(v2);
    Vertex v3{-0.2f, 0.3f, -0.2f, 1.0f, 0.0f, 0.0f};    mVertices.push_back(v3);
    Vertex v4{-0.2f, 0.7f, -0.2f, 1.0f, 0.0f, 0.0f};    mVertices.push_back(v4);
    Vertex v5{0.2f, 0.3f, 0.2f, 1.0f, 0.0f, 0.0f};      mVertices.push_back(v5);
    Vertex v6{-0.2f, 0.3f, -0.2f, 1.0f, 0.0f, 0.0f};    mVertices.push_back(v6);
    Vertex v7{-0.2f, 0.3f, -0.2f, 1.0f, 0.0f, 0.0f};    mVertices.push_back(v7);
    Vertex v8{0.2f, 0.3f, -0.2f, 1.0f, 0.0f, 0.0f};     mVertices.push_back(v8);
    Vertex v9{0.2f, 0.7f, -0.2f, 1.0f, 0.0f, 0.0f};     mVertices.push_back(v9);
    Vertex v10{0.2f, 0.3f, -0.2f, 1.0f, 0.0f, 0.0f};    mVertices.push_back(v10);
    Vertex v11{-0.2f, 0.3f, -0.2f, 1.0f, 0.0f, 0.0f};   mVertices.push_back(v11);
    Vertex v12{-0.2f, 0.3f, -0.2f, 1.0f, 0.0f, 0.0f};   mVertices.push_back(v12);
    Vertex v13{-0.2f, 0.7f, 0.2f, 1.0f, 0.0f, 0.0f};    mVertices.push_back(v13);
    Vertex v14{-0.2f, 0.7f, -0.2f, 1.0f, 0.0f, 0.0f};   mVertices.push_back(v14);
    Vertex v15{0.2f, 0.3f, 0.2f, 1.0f, 0.0f, 0.0f};     mVertices.push_back(v15);
    Vertex v16{-0.2f, 0.3f, 0.2f, 1.0f, 0.0f, 0.0f};    mVertices.push_back(v16);
    Vertex v17{-0.2f, 0.3f, -0.2f, 1.0f, 0.0f, 0.0f};   mVertices.push_back(v17);
    Vertex v18{-0.2f, 0.7f, 0.2f, 1.0f, 0.0f, 0.0f};    mVertices.push_back(v18);
    Vertex v19{-0.2f, 0.3f, 0.2f, 1.0f, 0.0f, 0.0f};    mVertices.push_back(v19);
    Vertex v20{0.2f, 0.3f, 0.2f, 1.0f, 0.0f, 0.0f};     mVertices.push_back(v20);
    Vertex v21{0.2f, 0.7f, 0.2f, 1.0f, 0.0f, 0.0f};     mVertices.push_back(v21);
    Vertex v22{0.2f, 0.3f, -0.2f, 1.0f, 0.0f, 0.0f};    mVertices.push_back(v22);
    Vertex v23{0.2f, 0.7f, -0.2f, 1.0f, 0.0f, 0.0f};    mVertices.push_back(v23);
    Vertex v24{0.2f, 0.3f, -0.2f, 1.0f, 0.0f, 0.0f};    mVertices.push_back(v24);
    Vertex v25{0.2f, 0.7f, 0.2f, 1.0f, 0.0f, 0.0f};     mVertices.push_back(v25);
    Vertex v26{0.2f, 0.3f, 0.2f, 1.0f, 0.0f, 0.0f};     mVertices.push_back(v26);
    Vertex v27{0.2f, 0.7f, 0.2f, 1.0f, 0.0f, 0.0f};     mVertices.push_back(v27);
    Vertex v28{0.2f, 0.7f, -0.2f, 1.0f, 0.0f, 0.0f};    mVertices.push_back(v28);
    Vertex v29{-0.2f, 0.7f, -0.2f, 1.0f, 0.0f, 0.0f};   mVertices.push_back(v29);
    Vertex v30{0.2f, 0.7f, 0.2f, 1.0f, 0.0f, 0.0f};     mVertices.push_back(v30);
    Vertex v31{-0.2f, 0.7f, -0.2f, 1.0f, 0.0f, 0.0f};   mVertices.push_back(v31);
    Vertex v32{-0.2f, 0.7f, 0.2f, 1.0f, 0.0f, 0.0f};    mVertices.push_back(v32);
    Vertex v33{0.2f, 0.7f, 0.2f, 1.0f, 0.0f, 0.0f};     mVertices.push_back(v33);
    Vertex v34{-0.2f, 0.7f, 0.2f, 1.0f, 0.0f, 0.0f};    mVertices.push_back(v34);
    Vertex v35{0.2f, 0.3f, 0.2f, 1.0f, 0.0f, 0.0f};     mVertices.push_back(v35);

    mMatrix.setToIdentity();
    place(dx, dy, dz, dr);
}

tObject::tObject(std::string filnavn) : VisualObject()
{
   readFile(filnavn);
   mMatrix.setToIdentity();
}

tObject::tObject(std::string filnavn, float xpos, float ypos, float zpos, float size) : VisualObject()
{
    float x = size; float y = size; float z = size;
    float xneg = -x; float yneg = -y; float zneg = -z;
    x += xpos; y += ypos; z += zpos;
    xneg += xpos; yneg += ypos; zneg += zpos;


    Vertex v0{xneg, yneg, zneg, 1,0,0};     mVertices.push_back(v0);
    Vertex v1{xneg, y, z, 1,0,0};           mVertices.push_back(v1);
    Vertex v2{x, y, zneg, 1,0,0};           mVertices.push_back(v2);
    Vertex v3{xneg, yneg, zneg, 1,0,0};     mVertices.push_back(v3);
    Vertex v4{xneg, y, zneg, 1,0,0};        mVertices.push_back(v4);
    Vertex v5{x, yneg, z, 1,0,0};           mVertices.push_back(v5);
    Vertex v6{xneg, yneg, zneg, 1,0,0};     mVertices.push_back(v6);
    Vertex v7{xneg, yneg, zneg, 1,0,0};     mVertices.push_back(v7);
    Vertex v8{x, yneg, zneg, 1,0,0};        mVertices.push_back(v8);
    Vertex v9{x, y, zneg, 1,0,0};           mVertices.push_back(v9);
    Vertex v10{x, yneg, zneg, 1,0,0};       mVertices.push_back(v10);
    Vertex v11{xneg, yneg, zneg, 1,0,0};    mVertices.push_back(v11);
    Vertex v12{xneg, yneg, zneg, 1,0,0};    mVertices.push_back(v12);
    Vertex v13{xneg, y, z, 1,0,0};          mVertices.push_back(v13);
    Vertex v14{xneg, y, zneg, 1,0,0};       mVertices.push_back(v14);
    Vertex v15{x, yneg, z, 1,0,0};          mVertices.push_back(v15);
    Vertex v16{xneg, yneg, z, 1,0,0};       mVertices.push_back(v16);
    Vertex v17{xneg, yneg, zneg, 1,0,0};    mVertices.push_back(v17);
    Vertex v18{xneg, y, z, 1,0,0};          mVertices.push_back(v18);
    Vertex v19{xneg, yneg, z, 1,0,0};       mVertices.push_back(v19);
    Vertex v20{x, yneg, z, 1,0,0};          mVertices.push_back(v20);
    Vertex v21{x, y, z, 1,0,0};             mVertices.push_back(v21);
    Vertex v22{x, yneg, zneg, 1,0,0};       mVertices.push_back(v22);
    Vertex v23{x, y, zneg, 1,0,0};          mVertices.push_back(v23);
    Vertex v24{x, yneg, zneg, 1,0,0};       mVertices.push_back(v24);
    Vertex v25{x, y, z, 1,0,0};             mVertices.push_back(v25);
    Vertex v26{x, yneg, z, 1,0,0};          mVertices.push_back(v26);
    Vertex v27{x, y, z, 1,0,0};             mVertices.push_back(v27);
    Vertex v28{x, y, zneg, 1,0,0};          mVertices.push_back(v28);
    Vertex v29{xneg, y, zneg, 1,0,0};       mVertices.push_back(v29);
    Vertex v30{x, y, z, 1,0,0};             mVertices.push_back(v30);
    Vertex v31{xneg, y, zneg, 1,0,0};       mVertices.push_back(v31);
    Vertex v32{xneg, y, z, 1,0,0};          mVertices.push_back(v32);
    Vertex v33{x, y, z, 1,0,0};             mVertices.push_back(v33);
    Vertex v34{xneg, y, z, 1,0,0};          mVertices.push_back(v34);
    Vertex v35{x, yneg, z, 1,0,0};          mVertices.push_back(v35);



   writeFile(filnavn);
   readFile(filnavn);
   mMatrix.setToIdentity();
}

tObject::~tObject()
{

}

void tObject::writeFile(std::string filnavn)
{
    std::ofstream ut;
    ut.open(filnavn.c_str());

    if (ut.is_open())
    {

        auto n = mVertices.size();
        Vertex vertex;
        ut << n << std::endl;
        for (auto it=mVertices.begin(); it != mVertices.end(); it++)
        {
            //vertex = *it;
            ut << *it << std::endl;
        }
        ut.close();
    }
}

void tObject::readFile(std::string filnavn) {
   std::ifstream inn;
   inn.open(filnavn.c_str());


   if (inn.is_open()) {
       int n;
       Vertex vertex;
       inn >> n;
       mVertices.reserve(n);
       for (int i=0; i<n; i++) {
            inn >> vertex;
            mVertices.push_back(vertex);
       }
       inn.close();
   }
}

void tObject::init(GLint matrixUniform)
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

void tObject::draw()
{
    glBindVertexArray(mVAO);
    glUniformMatrix4fv(mMatrixUniform, 1, GL_FALSE, mMatrix.constData());

    switch (renderValue)
    {
    case 0:
        // Visible
        glDrawArrays(GL_TRIANGLES, 0, mVertices.size());
        break;
    case 1:
        // Invisible
        glDrawArrays(GL_POINTS, 0, mVertices.size());
        break;
    default:
        break;
    }


}

void tObject::place(float dx, float dy, float dz, float dr)
{
    mx = dx;
    my = dy;
    mz = dz;
    mr = dr;

//    qDebug() << "move";
    mMatrix.translate(dx, dy, dz);
}

float tObject::getRadius()
{
    return mr;
}

QVector3D tObject::getPosition()
{
    return mMatrix.column(3).toVector3D();
}
