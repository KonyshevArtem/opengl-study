#ifndef RENDER_ENGINE_TEXTURE_TARGET_H
#define RENDER_ENGINE_TEXTURE_TARGET_H

#include "graphics_backend.h"

enum class TextureTarget : GRAPHICS_BACKEND_TYPE_ENUM
{
    TEXTURE_1D          = GRAPHICS_BACKEND_TEXTURE_1D,
    TEXTURE_1D_ARRAY    = GRAPHICS_BACKEND_TEXTURE_1D_ARRAY,

    PROXY_TEXTURE_1D        = GRAPHICS_BACKEND_PROXY_TEXTURE_1D,
    PROXY_TEXTURE_1D_ARRAY  = GRAPHICS_BACKEND_PROXY_TEXTURE_1D_ARRAY,

    TEXTURE_2D                      = GRAPHICS_BACKEND_TEXTURE_2D,
    TEXTURE_2D_ARRAY                = GRAPHICS_BACKEND_TEXTURE_2D_ARRAY,
    TEXTURE_2D_MULTISAMPLE          = GRAPHICS_BACKEND_TEXTURE_2D_MULTISAMPLE,
    TEXTURE_2D_MULTISAMPLE_ARRAY    = GRAPHICS_BACKEND_TEXTURE_2D_MULTISAMPLE_ARRAY,

    PROXY_TEXTURE_2D                    = GRAPHICS_BACKEND_PROXY_TEXTURE_2D,
    PROXY_TEXTURE_2D_ARRAY              = GRAPHICS_BACKEND_PROXY_TEXTURE_2D_ARRAY,
    PROXY_TEXTURE_2D_MULTISAMPLE        = GRAPHICS_BACKEND_PROXY_TEXTURE_2D_MULTISAMPLE,
    PROXY_TEXTURE_2D_MULTISAMPLE_ARRAY  = GRAPHICS_BACKEND_PROXY_TEXTURE_2D_MULTISAMPLE_ARRAY,

    TEXTURE_3D          = GRAPHICS_BACKEND_TEXTURE_3D,
    PROXY_TEXTURE_3D    = GRAPHICS_BACKEND_PROXY_TEXTURE_3D,

    TEXTURE_CUBEMAP             = GRAPHICS_BACKEND_TEXTURE_CUBEMAP,
    TEXTURE_CUBEMAP_ARRAY       = GRAPHICS_BACKEND_TEXTURE_CUBEMAP_ARRAY,
    CUBEMAP_FACE_POSITIVE_X     = GRAPHICS_BACKEND_CUBEMAP_FACE_POSITIVE_X,
    CUBEMAP_FACE_NEGATIVE_X     = GRAPHICS_BACKEND_CUBEMAP_FACE_NEGATIVE_X,
    CUBEMAP_FACE_POSITIVE_Y     = GRAPHICS_BACKEND_CUBEMAP_FACE_POSITIVE_Y,
    CUBEMAP_FACE_NEGATIVE_Y     = GRAPHICS_BACKEND_CUBEMAP_FACE_NEGATIVE_Y,
    CUBEMAP_FACE_POSITIVE_Z     = GRAPHICS_BACKEND_CUBEMAP_FACE_POSITIVE_Z,
    CUBEMAP_FACE_NEGATIVE_Z     = GRAPHICS_BACKEND_CUBEMAP_FACE_NEGATIVE_Z,

    TEXTURE_RECTANGLE           = GRAPHICS_BACKEND_TEXTURE_RECTANGLE,
    PROXY_TEXTURE_RECTANGLE     = GRAPHICS_BACKEND_PROXY_TEXTURE_RECTANGLE,

    TEXTURE_BUFFER          = GRAPHICS_BACKEND_TEXTURE_BUFFER,
    PROXY_TEXTURE_CUBE_MAP  = GRAPHICS_BACKEND_PROXY_TEXTURE_CUBE_MAP,
};

#endif //RENDER_ENGINE_TEXTURE_TARGET_H
