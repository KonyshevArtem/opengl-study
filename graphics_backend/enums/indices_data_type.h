#ifndef OPENGL_STUDY_INDICES_DATA_TYPE_H
#define OPENGL_STUDY_INDICES_DATA_TYPE_H

#include "graphics_backend.h"

enum class IndicesDataType : GRAPHICS_BACKEND_TYPE_ENUM
{
    UNSIGNED_BYTE   = GRAPHICS_BACKEND_UNSIGNED_BYTE,
    UNSIGNED_SHORT  = GRAPHICS_BACKEND_UNSIGNED_SHORT,
    UNSIGNED_INT    = GRAPHICS_BACKEND_UNSIGNED_INT,
};

#endif //OPENGL_STUDY_INDICES_DATA_TYPE_H