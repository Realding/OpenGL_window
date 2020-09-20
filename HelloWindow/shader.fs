#version 330 core

out vec4 FragColor;  

in vec3 ourColor;
in vec2 TexCoord;

uniform sampler2D texture1;
uniform sampler2D texture2;

uniform vec3 transValue;

void main()
{
    vec4 transColor = vec4(ourColor.x * transValue.xyz + ourColor.y * transValue.yzx + ourColor.z * transValue.zxy, 1.0);
    FragColor = mix(texture(texture1, TexCoord)* transColor, texture(texture2, TexCoord), 0.3) ;;
    //FragColor =  vec4(ourColor,1.0);
}