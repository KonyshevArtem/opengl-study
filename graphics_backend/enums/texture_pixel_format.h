#ifndef OPENGL_STUDY_TEXTURE_PIXEL_FORMAT_H
#define OPENGL_STUDY_TEXTURE_PIXEL_FORMAT_H

#include "graphics_backend.h"

enum class TexturePixelFormat : GRAPHICS_BACKEND_TYPE_ENUM
{
    RED     = GRAPHICS_BACKEND_RED,
    GREEN   = GRAPHICS_BACKEND_GREEN,
    BLUE    = GRAPHICS_BACKEND_BLUE,
    RG      = GRAPHICS_BACKEND_RG,
    RGB     = GRAPHICS_BACKEND_RGB,
    BGR     = GRAPHICS_BACKEND_BGR,
    RGBA    = GRAPHICS_BACKEND_RGBA,
    BGRA    = GRAPHICS_BACKEND_BGRA,

    RED_INTEGER     = GRAPHICS_BACKEND_RED_INTEGER,
    GREEN_INTEGER   = GRAPHICS_BACKEND_GREEN_INTEGER,
    BLUE_INTEGER    = GRAPHICS_BACKEND_BLUE_INTEGER,
    RG_INTEGER      = GRAPHICS_BACKEND_RG_INTEGER,
    RGB_INTEGER     = GRAPHICS_BACKEND_RGB_INTEGER,
    BGR_INTEGER     = GRAPHICS_BACKEND_BGR_INTEGER,
    RGBA_INTEGER    = GRAPHICS_BACKEND_RGBA_INTEGER,
    BGRA_INTEGER    = GRAPHICS_BACKEND_BGRA_INTEGER,

    STENCIL_INDEX       = GRAPHICS_BACKEND_STENCIL_INDEX,
    DEPTH_COMPONENT     = GRAPHICS_BACKEND_DEPTH_COMPONENT,
    DEPTH_STENCIL       = GRAPHICS_BACKEND_DEPTH_STENCIL,
};

#endif //OPENGL_STUDY_TEXTURE_PIXEL_FORMAT_H