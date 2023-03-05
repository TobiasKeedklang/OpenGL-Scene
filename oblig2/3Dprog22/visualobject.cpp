#include "visualobject.h"


VisualObject::VisualObject()
{

}
VisualObject::~VisualObject()
{
   glDeleteVertexArrays( 1, &mVAO );
   glDeleteBuffers( 1, &mVBO );
}

void VisualObject::setRenderStyle(int input)
{
    renderValue = input;
}
