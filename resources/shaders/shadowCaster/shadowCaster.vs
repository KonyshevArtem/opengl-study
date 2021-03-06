layout(location = 0) in vec3 vertPositionOS;

#include "../common/instancing.cg"
#include "../common/camera_data.cg"

void main(){
    gl_Position = _ProjMatrix * _ViewMatrix * _ModelMatrix * vec4(vertPositionOS, 1);
}