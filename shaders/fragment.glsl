#version 330 core
out vec4 FragColor;

in vec2 TexCoords;
uniform sampler2D map_2d;

void main()
{    
    FragColor = texture(map_2d, TexCoords);
}
