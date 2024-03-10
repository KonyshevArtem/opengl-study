#ifndef RENDER_ENGINE_UNIFORM_BLOCK_PARAMETER_H
#define RENDER_ENGINE_UNIFORM_BLOCK_PARAMETER_H

#include "graphics_backend.h"

enum class UniformBlockParameter : GRAPHICS_BACKEND_TYPE_ENUM
{
    BINDING                 = GRAPHICS_BACKEND_UNIFORM_BLOCK_BINDING,
    DATA_SIZE               = GRAPHICS_BACKEND_UNIFORM_BLOCK_DATA_SIZE,
    NAME_LENGTH             = GRAPHICS_BACKEND_UNIFORM_BLOCK_NAME_LENGTH,
    ACTIVE_UNIFORMS         = GRAPHICS_BACKEND_UNIFORM_BLOCK_ACTIVE_UNIFORMS,
    ACTIVE_UNIFORM_INDICES  = GRAPHICS_BACKEND_UNIFORM_BLOCK_ACTIVE_UNIFORM_INDICES,

    REFERENCED_BY_VERTEX_SHADER             = GRAPHICS_BACKEND_UNIFORM_BLOCK_REFERENCED_BY_VERTEX_SHADER,
    REFERENCED_BY_TESS_CONTROL_SHADER       = GRAPHICS_BACKEND_UNIFORM_BLOCK_REFERENCED_BY_TESS_CONTROL_SHADER,
    REFERENCED_BY_TESS_EVALUATION_SHADER    = GRAPHICS_BACKEND_UNIFORM_BLOCK_REFERENCED_BY_TESS_EVALUATION_SHADER,
    REFERENCED_BY_GEOMETRY_SHADER           = GRAPHICS_BACKEND_UNIFORM_BLOCK_REFERENCED_BY_GEOMETRY_SHADER,
    REFERENCED_BY_FRAGMENT_SHADER           = GRAPHICS_BACKEND_UNIFORM_BLOCK_REFERENCED_BY_FRAGMENT_SHADER,
};

#endif //RENDER_ENGINE_UNIFORM_BLOCK_PARAMETER_H
