#include "matrix4x4.h"

matrix4x4 matrix4x4_zero() {
    matrix4x4 zero;
    zero.m00 = 0;
    zero.m01 = 0;
    zero.m02 = 0;
    zero.m03 = 0;
    zero.m10 = 0;
    zero.m11 = 0;
    zero.m12 = 0;
    zero.m13 = 0;
    zero.m20 = 0;
    zero.m21 = 0;
    zero.m22 = 0;
    zero.m23 = 0;
    zero.m30 = 0;
    zero.m31 = 0;
    zero.m32 = 0;
    zero.m33 = 0;
    return zero;
}

matrix4x4 matrix4x4_identity() {
    matrix4x4 identity = matrix4x4_zero();
    identity.m00 = 1;
    identity.m11 = 1;
    identity.m22 = 1;
    identity.m33 = 1;
    return identity;
}

matrix4x4 matrix4x4_translation(vector4 translation) {
    matrix4x4 translationMatrix = matrix4x4_identity();
    translationMatrix.m30 = translation.x;
    translationMatrix.m31 = translation.y;
    translationMatrix.m32 = translation.z;
    return translationMatrix;
}