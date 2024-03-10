#ifndef RENDER_ENGINE_DEPTH_FUNCTION_H
#define RENDER_ENGINE_DEPTH_FUNCTION_H

#include "graphics_backend.h"

enum class DepthFunction : GRAPHICS_BACKEND_TYPE_ENUM
{
    NEVER       = GRAPHICS_BACKEND_NEVER,
    LESS        = GRAPHICS_BACKEND_LESS,
    EQUAL       = GRAPHICS_BACKEND_EQUAL,
    LEQUAL      = GRAPHICS_BACKEND_LEQUAL,
    GREATER     = GRAPHICS_BACKEND_GREATER,
    NOTEQUAL    = GRAPHICS_BACKEND_NOTEQUAL,
    GEQUAL      = GRAPHICS_BACKEND_GEQUAL,
    ALWAYS      = GRAPHICS_BACKEND_ALWAYS,
};

#endif //RENDER_ENGINE_DEPTH_FUNCTION_H
