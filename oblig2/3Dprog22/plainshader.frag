#version 410 core

in vec4 color;              //color received from the pipeline (and vertex shader)
in vec2 TexCoord;
out vec4 fragmentColor;     //color sent to fragment on screen

uniform sampler2D textureSampler;

void main() {
   fragmentColor = color;   //color given to current fragment (pixel)
   fragmentColor = texture(textureSampler, TexCoord);
}
