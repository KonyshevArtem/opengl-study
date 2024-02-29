layout(location = 0) in vec3 positionOS;

#include "../common/per_draw_data.cg"
#include "../common/camera_data.cg"

void main(){
	gl_Position = _VPMatrix * _ModelMatrix * vec4(positionOS, 1);
}