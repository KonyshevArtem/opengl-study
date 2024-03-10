#ifndef RENDER_ENGINE_CULL_FACE_ORIENTATION_H
#define RENDER_ENGINE_CULL_FACE_ORIENTATION_H

#include "graphics_backend.h"

enum class CullFaceOrientation : GRAPHICS_BACKEND_TYPE_ENUM
{
    CLOCKWISE           = GRAPHICS_BACKEND_CW,
    COUNTER_CLOCKWISE   = GRAPHICS_BACKEND_CCW,
};

#endif //RENDER_ENGINE_CULL_FACE_ORIENTATION_H
