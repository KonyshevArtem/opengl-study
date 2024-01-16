#ifndef OPENGL_STUDY_GRAPHICS_BACKEND_H
#define OPENGL_STUDY_GRAPHICS_BACKEND_H

#ifdef GRAPHICS_BACKEND_WINDOWS
#include <GL/glew.h>
#elif GRAPHICS_BACKEND_MACOS
#include <OpenGL/glu.h>
#include <OpenGL/gl3.h>
#include <OpenGL/gl3ext.h>
#endif

#define GRAPHICS_BACKEND_TYPE_ENUM   GLenum
#define GRAPHICS_BACKEND_TYPE_INT    GLint
#define GRAPHICS_BACKEND_TYPE_UINT   GLuint

using GraphicsBackendTexture            = GRAPHICS_BACKEND_TYPE_ENUM;
using GraphicsBackendSampler            = GRAPHICS_BACKEND_TYPE_UINT;
using GraphicsBackendError              = GRAPHICS_BACKEND_TYPE_ENUM;
using GraphicsBackendTextureLevel       = GRAPHICS_BACKEND_TYPE_INT;
using GraphicsBackendTextureLayer       = GRAPHICS_BACKEND_TYPE_INT;
using GraphicsBackendTextureUnitIndex   = GRAPHICS_BACKEND_TYPE_UINT;
using GraphicsBackendVAO                = GRAPHICS_BACKEND_TYPE_UINT;
using GraphicsBackendBuffer             = GRAPHICS_BACKEND_TYPE_UINT;

#define GRAPHICS_BACKEND_TEXTURE_1D                     GL_TEXTURE_1D
#define GRAPHICS_BACKEND_TEXTURE_2D                     GL_TEXTURE_2D
#define GRAPHICS_BACKEND_TEXTURE_2D_MULTISAMPLE         GL_TEXTURE_2D_MULTISAMPLE
#define GRAPHICS_BACKEND_TEXTURE_3D                     GL_TEXTURE_3D
#define GRAPHICS_BACKEND_TEXTURE_1D_ARRAY               GL_TEXTURE_1D_ARRAY
#define GRAPHICS_BACKEND_TEXTURE_2D_ARRAY               GL_TEXTURE_2D_ARRAY
#define GRAPHICS_BACKEND_TEXTURE_2D_MULTISAMPLE_ARRAY   GL_TEXTURE_2D_MULTISAMPLE_ARRAY
#define GRAPHICS_BACKEND_TEXTURE_CUBEMAP                GL_TEXTURE_CUBE_MAP
#define GRAPHICS_BACKEND_TEXTURE_CUBEMAP_ARRAY          GL_TEXTURE_CUBE_MAP_ARRAY
#define GRAPHICS_BACKEND_TEXTURE_RECTANGLE              GL_TEXTURE_RECTANGLE
#define GRAPHICS_BACKEND_TEXTURE_BUFFER                 GL_TEXTURE_BUFFER

#define GRAPHICS_BACKEND_CUBEMAP_FACE_POSITIVE_X    GL_TEXTURE_CUBE_MAP_POSITIVE_X
#define GRAPHICS_BACKEND_CUBEMAP_FACE_NEGATIVE_X    GL_TEXTURE_CUBE_MAP_NEGATIVE_X
#define GRAPHICS_BACKEND_CUBEMAP_FACE_POSITIVE_Y    GL_TEXTURE_CUBE_MAP_POSITIVE_Y
#define GRAPHICS_BACKEND_CUBEMAP_FACE_NEGATIVE_Y    GL_TEXTURE_CUBE_MAP_NEGATIVE_Y
#define GRAPHICS_BACKEND_CUBEMAP_FACE_POSITIVE_Z    GL_TEXTURE_CUBE_MAP_POSITIVE_Z
#define GRAPHICS_BACKEND_CUBEMAP_FACE_NEGATIVE_Z    GL_TEXTURE_CUBE_MAP_NEGATIVE_Z

#define GRAPHICS_BACKEND_PROXY_TEXTURE_1D                    GL_PROXY_TEXTURE_1D
#define GRAPHICS_BACKEND_PROXY_TEXTURE_2D                    GL_PROXY_TEXTURE_2D
#define GRAPHICS_BACKEND_PROXY_TEXTURE_3D                    GL_PROXY_TEXTURE_3D
#define GRAPHICS_BACKEND_PROXY_TEXTURE_1D_ARRAY              GL_PROXY_TEXTURE_1D_ARRAY
#define GRAPHICS_BACKEND_PROXY_TEXTURE_2D_ARRAY              GL_PROXY_TEXTURE_2D_ARRAY
#define GRAPHICS_BACKEND_PROXY_TEXTURE_RECTANGLE             GL_PROXY_TEXTURE_RECTANGLE
#define GRAPHICS_BACKEND_PROXY_TEXTURE_2D_MULTISAMPLE        GL_PROXY_TEXTURE_2D_MULTISAMPLE
#define GRAPHICS_BACKEND_PROXY_TEXTURE_2D_MULTISAMPLE_ARRAY  GL_PROXY_TEXTURE_2D_MULTISAMPLE_ARRAY
#define GRAPHICS_BACKEND_PROXY_TEXTURE_CUBE_MAP              GL_PROXY_TEXTURE_CUBE_MAP

#define GRAPHICS_BACKEND_TEXTURE_BASE_LEVEL    GL_TEXTURE_BASE_LEVEL
#define GRAPHICS_BACKEND_TEXTURE_BORDER_COLOR  GL_TEXTURE_BORDER_COLOR
#define GRAPHICS_BACKEND_TEXTURE_COMPARE_FUNC  GL_TEXTURE_COMPARE_FUNC
#define GRAPHICS_BACKEND_TEXTURE_COMPARE_MODE  GL_TEXTURE_COMPARE_MODE
#define GRAPHICS_BACKEND_TEXTURE_LOD_BIAS      GL_TEXTURE_LOD_BIAS
#define GRAPHICS_BACKEND_TEXTURE_MIN_FILTER    GL_TEXTURE_MIN_FILTER
#define GRAPHICS_BACKEND_TEXTURE_MAG_FILTER    GL_TEXTURE_MAG_FILTER
#define GRAPHICS_BACKEND_TEXTURE_MIN_LOD       GL_TEXTURE_MIN_LOD
#define GRAPHICS_BACKEND_TEXTURE_MAX_LOD       GL_TEXTURE_MAX_LOD
#define GRAPHICS_BACKEND_TEXTURE_MAX_LEVEL     GL_TEXTURE_MAX_LEVEL
#define GRAPHICS_BACKEND_TEXTURE_SWIZZLE_R     GL_TEXTURE_SWIZZLE_R
#define GRAPHICS_BACKEND_TEXTURE_SWIZZLE_G     GL_TEXTURE_SWIZZLE_G
#define GRAPHICS_BACKEND_TEXTURE_SWIZZLE_B     GL_TEXTURE_SWIZZLE_B
#define GRAPHICS_BACKEND_TEXTURE_SWIZZLE_A     GL_TEXTURE_SWIZZLE_A
#define GRAPHICS_BACKEND_TEXTURE_SWIZZLE_RGBA  GL_TEXTURE_SWIZZLE_RGBA
#define GRAPHICS_BACKEND_TEXTURE_WRAP_S        GL_TEXTURE_WRAP_S
#define GRAPHICS_BACKEND_TEXTURE_WRAP_T        GL_TEXTURE_WRAP_T
#define GRAPHICS_BACKEND_TEXTURE_WRAP_R        GL_TEXTURE_WRAP_R

#define GRAPHICS_BACKEND_TEXTURE_WIDTH                  GL_TEXTURE_WIDTH
#define GRAPHICS_BACKEND_TEXTURE_HEIGHT                 GL_TEXTURE_HEIGHT
#define GRAPHICS_BACKEND_TEXTURE_DEPTH                  GL_TEXTURE_DEPTH
#define GRAPHICS_BACKEND_TEXTURE_INTERNAL_FORMAT        GL_TEXTURE_INTERNAL_FORMAT
#define GRAPHICS_BACKEND_TEXTURE_RED_SIZE               GL_TEXTURE_RED_SIZE
#define GRAPHICS_BACKEND_TEXTURE_GREEN_SIZE             GL_TEXTURE_GREEN_SIZE
#define GRAPHICS_BACKEND_TEXTURE_BLUE_SIZE              GL_TEXTURE_BLUE_SIZE
#define GRAPHICS_BACKEND_TEXTURE_ALPHA_SIZE             GL_TEXTURE_ALPHA_SIZE
#define GRAPHICS_BACKEND_TEXTURE_DEPTH_SIZE             GL_TEXTURE_DEPTH_SIZE
#define GRAPHICS_BACKEND_TEXTURE_COMPRESSED             GL_TEXTURE_COMPRESSED
#define GRAPHICS_BACKEND_TEXTURE_COMPRESSED_IMAGE_SIZE  GL_TEXTURE_COMPRESSED_IMAGE_SIZE

#define GRAPHICS_BACKEND_RED                    GL_RED
#define GRAPHICS_BACKEND_GREEN                  GL_GREEN
#define GRAPHICS_BACKEND_BLUE                   GL_BLUE
#define GRAPHICS_BACKEND_RG                     GL_RG
#define GRAPHICS_BACKEND_RGB                    GL_RGB
#define GRAPHICS_BACKEND_BGR                    GL_BGR
#define GRAPHICS_BACKEND_RGBA                   GL_RGBA
#define GRAPHICS_BACKEND_BGRA                   GL_BGRA
#define GRAPHICS_BACKEND_SRGB                   GL_SRGB
#define GRAPHICS_BACKEND_SRGB_ALPHA             GL_SRGB_ALPHA
#define GRAPHICS_BACKEND_COMPRESSED_RGB         GL_COMPRESSED_RGB
#define GRAPHICS_BACKEND_COMPRESSED_RGBA        GL_COMPRESSED_RGBA
#define GRAPHICS_BACKEND_COMPRESSED_SRGB        GL_COMPRESSED_SRGB
#define GRAPHICS_BACKEND_COMPRESSED_SRGB_ALPHA  GL_COMPRESSED_SRGB_ALPHA
#define GRAPHICS_BACKEND_R3_G3_B2               GL_R3_G3_B2
#define GRAPHICS_BACKEND_RGB4                   GL_RGB4
#define GRAPHICS_BACKEND_RGB5                   GL_RGB5
#define GRAPHICS_BACKEND_RGB8                   GL_RGB8
#define GRAPHICS_BACKEND_RGB10                  GL_RGB10
#define GRAPHICS_BACKEND_RGB12                  GL_RGB12
#define GRAPHICS_BACKEND_RGB16                  GL_RGB16
#define GRAPHICS_BACKEND_RGBA2                  GL_RGBA2
#define GRAPHICS_BACKEND_RGBA4                  GL_RGBA4
#define GRAPHICS_BACKEND_RGB5_A1                GL_RGB5_A1
#define GRAPHICS_BACKEND_RGBA8                  GL_RGBA8
#define GRAPHICS_BACKEND_RGB10_A2               GL_RGB10_A2
#define GRAPHICS_BACKEND_RGBA12                 GL_RGBA12
#define GRAPHICS_BACKEND_RGBA16                 GL_RGBA16

#if GL_ARB_texture_rg
#define GRAPHICS_BACKEND_COMPRESSED_RED     GL_COMPRESSED_RED
#define GRAPHICS_BACKEND_COMPRESSED_RG      GL_COMPRESSED_RG
#else
#define GRAPHICS_BACKEND_COMPRESSED_RED 0
#define GRAPHICS_BACKEND_COMPRESSED_RG  0
#endif

#if GL_EXT_texture_compression_s3tc
#define GRAPHICS_BACKEND_COMPRESSED_RGB_S3TC_DXT1_EXT   GL_COMPRESSED_RGB_S3TC_DXT1_EXT
#define GRAPHICS_BACKEND_COMPRESSED_RGBA_S3TC_DXT1_EXT  GL_COMPRESSED_RGBA_S3TC_DXT1_EXT
#define GRAPHICS_BACKEND_COMPRESSED_RGBA_S3TC_DXT3_EXT  GL_COMPRESSED_RGBA_S3TC_DXT3_EXT
#define GRAPHICS_BACKEND_COMPRESSED_RGBA_S3TC_DXT5_EXT  GL_COMPRESSED_RGBA_S3TC_DXT5_EXT
#else
#define GRAPHICS_BACKEND_COMPRESSED_RGB_S3TC_DXT1_EXT  0
#define GRAPHICS_BACKEND_COMPRESSED_RGBA_S3TC_DXT1_EXT 0
#define GRAPHICS_BACKEND_COMPRESSED_RGBA_S3TC_DXT3_EXT 0
#define GRAPHICS_BACKEND_COMPRESSED_RGBA_S3TC_DXT5_EXT 0
#endif

#if GL_EXT_texture_sRGB
#define GRAPHICS_BACKEND_COMPRESSED_SRGB_S3TC_DXT1_EXT          GL_COMPRESSED_SRGB_S3TC_DXT1_EXT
#define GRAPHICS_BACKEND_COMPRESSED_SRGB_ALPHA_S3TC_DXT1_EXT    GL_COMPRESSED_SRGB_ALPHA_S3TC_DXT1_EXT
#define GRAPHICS_BACKEND_COMPRESSED_SRGB_ALPHA_S3TC_DXT3_EXT    GL_COMPRESSED_SRGB_ALPHA_S3TC_DXT3_EXT
#define GRAPHICS_BACKEND_COMPRESSED_SRGB_ALPHA_S3TC_DXT5_EXT    GL_COMPRESSED_SRGB_ALPHA_S3TC_DXT5_EXT
#else
#define GRAPHICS_BACKEND_COMPRESSED_SRGB_S3TC_DXT1_EXT       0
#define GRAPHICS_BACKEND_COMPRESSED_SRGB_ALPHA_S3TC_DXT1_EXT 0
#define GRAPHICS_BACKEND_COMPRESSED_SRGB_ALPHA_S3TC_DXT3_EXT 0
#define GRAPHICS_BACKEND_COMPRESSED_SRGB_ALPHA_S3TC_DXT5_EXT 0
#endif

#if GL_ARB_texture_compression_rgtc
#define GRAPHICS_BACKEND_COMPRESSED_RED_RGTC1           GL_COMPRESSED_RED_RGTC1
#define GRAPHICS_BACKEND_COMPRESSED_SIGNED_RED_RGTC1    GL_COMPRESSED_SIGNED_RED_RGTC1
#define GRAPHICS_BACKEND_COMPRESSED_RG_RGTC2            GL_COMPRESSED_RG_RGTC2
#define GRAPHICS_BACKEND_COMPRESSED_SIGNED_RG_RGTC2     GL_COMPRESSED_SIGNED_RG_RGTC2
#else
#define GRAPHICS_BACKEND_COMPRESSED_RED_RGTC1        0
#define GRAPHICS_BACKEND_COMPRESSED_SIGNED_RED_RGTC1 0
#define GRAPHICS_BACKEND_COMPRESSED_RG_RGTC2         0
#define GRAPHICS_BACKEND_COMPRESSED_SIGNED_RG_RGTC2  0
#endif

#define GRAPHICS_BACKEND_RED_INTEGER        GL_RED_INTEGER
#define GRAPHICS_BACKEND_GREEN_INTEGER      GL_GREEN_INTEGER
#define GRAPHICS_BACKEND_BLUE_INTEGER       GL_BLUE_INTEGER
#define GRAPHICS_BACKEND_RG_INTEGER         GL_RG_INTEGER
#define GRAPHICS_BACKEND_RGB_INTEGER        GL_RGB_INTEGER
#define GRAPHICS_BACKEND_BGR_INTEGER        GL_BGR_INTEGER
#define GRAPHICS_BACKEND_RGBA_INTEGER       GL_RGBA_INTEGER
#define GRAPHICS_BACKEND_BGRA_INTEGER       GL_BGRA_INTEGER
#define GRAPHICS_BACKEND_STENCIL_INDEX      GL_STENCIL_INDEX
#define GRAPHICS_BACKEND_DEPTH_COMPONENT    GL_DEPTH_COMPONENT
#define GRAPHICS_BACKEND_DEPTH_STENCIL      GL_DEPTH_STENCIL

#define GRAPHICS_BACKEND_UNSIGNED_BYTE                  GL_UNSIGNED_BYTE
#define GRAPHICS_BACKEND_BYTE                           GL_BYTE
#define GRAPHICS_BACKEND_UNSIGNED_SHORT                 GL_UNSIGNED_SHORT
#define GRAPHICS_BACKEND_SHORT                          GL_SHORT
#define GRAPHICS_BACKEND_UNSIGNED_INT                   GL_UNSIGNED_INT
#define GRAPHICS_BACKEND_INT                            GL_INT
#define GRAPHICS_BACKEND_HALF_FLOAT                     GL_HALF_FLOAT
#define GRAPHICS_BACKEND_FLOAT                          GL_FLOAT
#define GRAPHICS_BACKEND_DOUBLE                         GL_DOUBLE
#define GRAPHICS_BACKEND_FIXED                          GL_FIXED
#define GRAPHICS_BACKEND_UNSIGNED_BYTE_3_3_2            GL_UNSIGNED_BYTE_3_3_2
#define GRAPHICS_BACKEND_UNSIGNED_BYTE_2_3_3_REV        GL_UNSIGNED_BYTE_2_3_3_REV
#define GRAPHICS_BACKEND_UNSIGNED_SHORT_5_6_5           GL_UNSIGNED_SHORT_5_6_5
#define GRAPHICS_BACKEND_UNSIGNED_SHORT_5_6_5_REV       GL_UNSIGNED_SHORT_5_6_5_REV
#define GRAPHICS_BACKEND_UNSIGNED_SHORT_4_4_4_4         GL_UNSIGNED_SHORT_4_4_4_4
#define GRAPHICS_BACKEND_UNSIGNED_SHORT_4_4_4_4_REV     GL_UNSIGNED_SHORT_4_4_4_4_REV
#define GRAPHICS_BACKEND_UNSIGNED_SHORT_5_5_5_1         GL_UNSIGNED_SHORT_5_5_5_1
#define GRAPHICS_BACKEND_UNSIGNED_SHORT_1_5_5_5_REV     GL_UNSIGNED_SHORT_1_5_5_5_REV
#define GRAPHICS_BACKEND_UNSIGNED_INT_8_8_8_8           GL_UNSIGNED_INT_8_8_8_8
#define GRAPHICS_BACKEND_UNSIGNED_INT_8_8_8_8_REV       GL_UNSIGNED_INT_8_8_8_8_REV
#define GRAPHICS_BACKEND_UNSIGNED_INT_10_10_10_2        GL_UNSIGNED_INT_10_10_10_2
#define GRAPHICS_BACKEND_UNSIGNED_INT_2_10_10_10_REV    GL_UNSIGNED_INT_2_10_10_10_REV
#define GRAPHICS_BACKEND_UNSIGNED_INT_10F_11F_11F_REV   GL_UNSIGNED_INT_10F_11F_11F_REV
#define GRAPHICS_BACKEND_INT_2_10_10_10_REV             GL_INT_2_10_10_10_REV

#define GRAPHICS_BACKEND_TEXTURE0   GL_TEXTURE0
#define GRAPHICS_BACKEND_TEXTURE1   GL_TEXTURE1
#define GRAPHICS_BACKEND_TEXTURE2   GL_TEXTURE2
#define GRAPHICS_BACKEND_TEXTURE3   GL_TEXTURE3
#define GRAPHICS_BACKEND_TEXTURE4   GL_TEXTURE4
#define GRAPHICS_BACKEND_TEXTURE5   GL_TEXTURE5
#define GRAPHICS_BACKEND_TEXTURE6   GL_TEXTURE6
#define GRAPHICS_BACKEND_TEXTURE7   GL_TEXTURE7
#define GRAPHICS_BACKEND_TEXTURE8   GL_TEXTURE8
#define GRAPHICS_BACKEND_TEXTURE9   GL_TEXTURE9
#define GRAPHICS_BACKEND_TEXTURE10  GL_TEXTURE10
#define GRAPHICS_BACKEND_TEXTURE11  GL_TEXTURE11
#define GRAPHICS_BACKEND_TEXTURE12  GL_TEXTURE12
#define GRAPHICS_BACKEND_TEXTURE13  GL_TEXTURE13
#define GRAPHICS_BACKEND_TEXTURE14  GL_TEXTURE14
#define GRAPHICS_BACKEND_TEXTURE15  GL_TEXTURE15
#define GRAPHICS_BACKEND_TEXTURE16  GL_TEXTURE16
#define GRAPHICS_BACKEND_TEXTURE17  GL_TEXTURE17
#define GRAPHICS_BACKEND_TEXTURE18  GL_TEXTURE18
#define GRAPHICS_BACKEND_TEXTURE19  GL_TEXTURE19
#define GRAPHICS_BACKEND_TEXTURE20  GL_TEXTURE20
#define GRAPHICS_BACKEND_TEXTURE21  GL_TEXTURE21
#define GRAPHICS_BACKEND_TEXTURE22  GL_TEXTURE22
#define GRAPHICS_BACKEND_TEXTURE23  GL_TEXTURE23
#define GRAPHICS_BACKEND_TEXTURE24  GL_TEXTURE24
#define GRAPHICS_BACKEND_TEXTURE25  GL_TEXTURE25
#define GRAPHICS_BACKEND_TEXTURE26  GL_TEXTURE26
#define GRAPHICS_BACKEND_TEXTURE27  GL_TEXTURE27
#define GRAPHICS_BACKEND_TEXTURE28  GL_TEXTURE28
#define GRAPHICS_BACKEND_TEXTURE29  GL_TEXTURE29
#define GRAPHICS_BACKEND_TEXTURE30  GL_TEXTURE30
#define GRAPHICS_BACKEND_TEXTURE31  GL_TEXTURE31

#define GRAPHICS_BACKEND_DRAW_FRAMEBUFFER   GL_DRAW_FRAMEBUFFER
#define GRAPHICS_BACKEND_READ_FRAMEBUFFER   GL_READ_FRAMEBUFFER
#define GRAPHICS_BACKEND_FRAMEBUFFER        GL_FRAMEBUFFER

#define GRAPHICS_BACKEND_COLOR_ATTACHMENT0          GL_COLOR_ATTACHMENT0
#define GRAPHICS_BACKEND_COLOR_ATTACHMENT1          GL_COLOR_ATTACHMENT1
#define GRAPHICS_BACKEND_COLOR_ATTACHMENT2          GL_COLOR_ATTACHMENT2
#define GRAPHICS_BACKEND_COLOR_ATTACHMENT3          GL_COLOR_ATTACHMENT3
#define GRAPHICS_BACKEND_COLOR_ATTACHMENT4          GL_COLOR_ATTACHMENT4
#define GRAPHICS_BACKEND_COLOR_ATTACHMENT5          GL_COLOR_ATTACHMENT5
#define GRAPHICS_BACKEND_COLOR_ATTACHMENT6          GL_COLOR_ATTACHMENT6
#define GRAPHICS_BACKEND_COLOR_ATTACHMENT7          GL_COLOR_ATTACHMENT7
#define GRAPHICS_BACKEND_COLOR_ATTACHMENT8          GL_COLOR_ATTACHMENT8
#define GRAPHICS_BACKEND_COLOR_ATTACHMENT9          GL_COLOR_ATTACHMENT9
#define GRAPHICS_BACKEND_COLOR_ATTACHMENT10         GL_COLOR_ATTACHMENT10
#define GRAPHICS_BACKEND_COLOR_ATTACHMENT11         GL_COLOR_ATTACHMENT11
#define GRAPHICS_BACKEND_COLOR_ATTACHMENT12         GL_COLOR_ATTACHMENT12
#define GRAPHICS_BACKEND_COLOR_ATTACHMENT13         GL_COLOR_ATTACHMENT13
#define GRAPHICS_BACKEND_COLOR_ATTACHMENT14         GL_COLOR_ATTACHMENT14
#define GRAPHICS_BACKEND_COLOR_ATTACHMENT15         GL_COLOR_ATTACHMENT15
#define GRAPHICS_BACKEND_DEPTH_ATTACHMENT           GL_DEPTH_ATTACHMENT
#define GRAPHICS_BACKEND_STENCIL_ATTACHMENT         GL_STENCIL_ATTACHMENT
#define GRAPHICS_BACKEND_DEPTH_STENCIL_ATTACHMENT   GL_DEPTH_STENCIL_ATTACHMENT

#define GRAPHICS_BACKEND_CLAMP_TO_EDGE      GL_CLAMP_TO_EDGE
#define GRAPHICS_BACKEND_CLAMP_TO_BORDER    GL_CLAMP_TO_BORDER
#define GRAPHICS_BACKEND_MIRRORED_REPEAT    GL_MIRRORED_REPEAT
#define GRAPHICS_BACKEND_REPEAT             GL_REPEAT

#define GRAPHICS_BACKEND_NEAREST                    GL_NEAREST
#define GRAPHICS_BACKEND_LINEAR                     GL_LINEAR
#define GRAPHICS_BACKEND_NEAREST_MIPMAP_NEAREST     GL_NEAREST_MIPMAP_NEAREST
#define GRAPHICS_BACKEND_LINEAR_MIPMAP_NEAREST      GL_LINEAR_MIPMAP_NEAREST
#define GRAPHICS_BACKEND_NEAREST_MIPMAP_LINEAR      GL_NEAREST_MIPMAP_LINEAR
#define GRAPHICS_BACKEND_LINEAR_MIPMAP_LINEAR       GL_LINEAR_MIPMAP_LINEAR

#define GRAPHICS_BACKEND_POINTS                     GL_POINTS
#define GRAPHICS_BACKEND_LINE_STRIP                 GL_LINE_STRIP
#define GRAPHICS_BACKEND_LINE_LOOP                  GL_LINE_LOOP
#define GRAPHICS_BACKEND_LINES                      GL_LINES
#define GRAPHICS_BACKEND_LINE_STRIP_ADJACENCY       GL_LINE_STRIP_ADJACENCY
#define GRAPHICS_BACKEND_LINES_ADJACENCY            GL_LINES_ADJACENCY
#define GRAPHICS_BACKEND_TRIANGLE_STRIP             GL_TRIANGLE_STRIP
#define GRAPHICS_BACKEND_TRIANGLE_FAN               GL_TRIANGLE_FAN
#define GRAPHICS_BACKEND_TRIANGLES                  GL_TRIANGLES
#define GRAPHICS_BACKEND_TRIANGLE_STRIP_ADJACENCY   GL_TRIANGLE_STRIP_ADJACENCY
#define GRAPHICS_BACKEND_TRIANGLES_ADJACENCY        GL_TRIANGLES_ADJACENCY
#define GRAPHICS_BACKEND_PATCHES                    GL_PATCHES

#define GRAPHICS_BACKEND_ARRAY_BUFFER               GL_ARRAY_BUFFER
#define GRAPHICS_BACKEND_COPY_READ_BUFFER           GL_COPY_READ_BUFFER
#define GRAPHICS_BACKEND_COPY_WRITE_BUFFER          GL_COPY_WRITE_BUFFER
#define GRAPHICS_BACKEND_DRAW_INDIRECT_BUFFER       GL_DRAW_INDIRECT_BUFFER
#define GRAPHICS_BACKEND_ELEMENT_ARRAY_BUFFER       GL_ELEMENT_ARRAY_BUFFER
#define GRAPHICS_BACKEND_PIXEL_PACK_BUFFER          GL_PIXEL_PACK_BUFFER
#define GRAPHICS_BACKEND_PIXEL_UNPACK_BUFFER        GL_PIXEL_UNPACK_BUFFER
#define GRAPHICS_BACKEND_TEXTURE_BUFFER             GL_TEXTURE_BUFFER
#define GRAPHICS_BACKEND_TRANSFORM_FEEDBACK_BUFFER  GL_TRANSFORM_FEEDBACK_BUFFER
#define GRAPHICS_BACKEND_UNIFORM_BUFFER             GL_UNIFORM_BUFFER

#define GRAPHICS_BACKEND_STREAM_DRAW    GL_STREAM_DRAW
#define GRAPHICS_BACKEND_STREAM_READ    GL_STREAM_READ
#define GRAPHICS_BACKEND_STREAM_COPY    GL_STREAM_COPY
#define GRAPHICS_BACKEND_STATIC_DRAW    GL_STATIC_DRAW
#define GRAPHICS_BACKEND_STATIC_READ    GL_STATIC_READ
#define GRAPHICS_BACKEND_STATIC_COPY    GL_STATIC_COPY
#define GRAPHICS_BACKEND_DYNAMIC_DRAW   GL_DYNAMIC_DRAW
#define GRAPHICS_BACKEND_DYNAMIC_READ   GL_DYNAMIC_READ
#define GRAPHICS_BACKEND_DYNAMIC_COPY   GL_DYNAMIC_COPY

#endif //OPENGL_STUDY_GRAPHICS_BACKEND_H
