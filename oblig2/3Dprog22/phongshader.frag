#version 410 core
out vec4 fragColor;

in vec3 normalTransposed;
in vec3 fragmentPosition;

uniform float ambientStrength = 0.1;
uniform float lightStrength = 0.7;
uniform float lightColor = vec3(0.8, 0.8, 0.3); // yellowish
uniform vec3 objectColor = vec3(0.7, 0.7, 0.7); // grey

uniform vec3 lightPosition;

void main()
{
    // ambient
    vec3 ambient = ambientStrength * lightColor;

    // diffuse
    vec3 normalCorrected = normalize(normalTransposed);
    vec3 lightDirection = normalize(lightPosition - fragmentPosition);
    float angleFactor = max(dot(normalCorrected, lightDirection), 0.0);
    vec3 diffuse = angleFactor * objectColor * lightColor * lightStrength;

    vec3 result = ambient + diffuse;
    fragColor = vec4(result, 1.0);
}
