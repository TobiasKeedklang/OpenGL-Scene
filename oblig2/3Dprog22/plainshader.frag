#version 410 core

in vec4 color;              //color received from the pipeline (and vertex shader)
out vec4 fragmentColor;     //color sent to fragment on screen

uniform float ambientStrength = 0.2;

uniform sampler2D textureSampler;

void main() {
   fragmentColor = color * ambientStrength;   //color given to current fragment (pixel)
}
