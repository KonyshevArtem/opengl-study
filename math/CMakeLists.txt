add_library(
	Math
	matrix4x4/matrix4x4.cpp
	matrix4x4/matrix4x4.h
	vector4/vector4.cpp
	vector4/vector4.h
	vector3/vector3.cpp
	vector3/vector3.h
	vector2/vector2.cpp
	vector2/vector2.h
	quaternion/quaternion.cpp
	quaternion/quaternion.h
	math_utils.cpp
	math_utils.h
)

target_include_directories(Math PUBLIC .)