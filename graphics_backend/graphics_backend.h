#ifndef RENDER_ENGINE_GRAPHICS_BACKEND_H
#define RENDER_ENGINE_GRAPHICS_BACKEND_H

#if __has_include("GL/glew.h")
#include <GL/glew.h>
#define REQUIRE_GLEW_INIT
#endif
#if __has_include("OpenGL/glu.h")
#include <OpenGL/glu.h>
#endif
#if __has_include("OpenGL/gl3.h")
#include <OpenGL/gl3.h>
#endif
#if __has_include("OpenGL/gl3ext.h")
#include <OpenGL/gl3ext.h>
#endif

#define GRAPHICS_BACKEND_TYPE_ENUM   GLenum
#define GRAPHICS_BACKEND_TYPE_INT    GLint
#define GRAPHICS_BACKEND_TYPE_UINT   GLuint

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

#define GRAPHICS_BACKEND_BLEND              GL_BLEND
#define GRAPHICS_BACKEND_COLOR_LOGIC_OP     GL_COLOR_LOGIC_OP

#define GRAPHICS_BACKEND_CLIP_DISTANCE0     GL_CLIP_DISTANCE0
#define GRAPHICS_BACKEND_CLIP_DISTANCE1     GL_CLIP_DISTANCE1
#define GRAPHICS_BACKEND_CLIP_DISTANCE2     GL_CLIP_DISTANCE2
#define GRAPHICS_BACKEND_CLIP_DISTANCE3     GL_CLIP_DISTANCE3
#define GRAPHICS_BACKEND_CLIP_DISTANCE4     GL_CLIP_DISTANCE4
#define GRAPHICS_BACKEND_CLIP_DISTANCE5     GL_CLIP_DISTANCE5
#ifdef GL_CLIP_DISTANCE6
#define GRAPHICS_BACKEND_CLIP_DISTANCE6     GL_CLIP_DISTANCE6
#else
#define GRAPHICS_BACKEND_CLIP_DISTANCE6     0
#endif
#ifdef GL_CLIP_DISTANCE7
#define GRAPHICS_BACKEND_CLIP_DISTANCE7     GL_CLIP_DISTANCE7
#else
#define GRAPHICS_BACKEND_CLIP_DISTANCE7     0
#endif

#define GRAPHICS_BACKEND_CULL_FACE      GL_CULL_FACE
#define GRAPHICS_BACKEND_DEPTH_CLAMP    GL_DEPTH_CLAMP
#define GRAPHICS_BACKEND_DEPTH_TEST     GL_DEPTH_TEST
#define GRAPHICS_BACKEND_SCISSOR_TEST   GL_SCISSOR_TEST
#define GRAPHICS_BACKEND_STENCIL_TEST   GL_STENCIL_TEST

#define GRAPHICS_BACKEND_DITHER             GL_DITHER
#define GRAPHICS_BACKEND_FRAMEBUFFER_SRGB   GL_FRAMEBUFFER_SRGB
#define GRAPHICS_BACKEND_LINE_SMOOTH        GL_LINE_SMOOTH
#define GRAPHICS_BACKEND_MULTISAMPLE        GL_MULTISAMPLE

#define GRAPHICS_BACKEND_POLYGON_OFFSET_FILL    GL_POLYGON_OFFSET_FILL
#define GRAPHICS_BACKEND_POLYGON_OFFSET_LINE    GL_POLYGON_OFFSET_LINE
#define GRAPHICS_BACKEND_POLYGON_OFFSET_POINT   GL_POLYGON_OFFSET_POINT
#define GRAPHICS_BACKEND_POLYGON_SMOOTH         GL_POLYGON_SMOOTH

#define GRAPHICS_BACKEND_PRIMITIVE_RESTART      GL_PRIMITIVE_RESTART
#define GRAPHICS_BACKEND_RASTERIZER_DISCARD     GL_RASTERIZER_DISCARD

#define GRAPHICS_BACKEND_SAMPLE_ALPHA_TO_COVERAGE   GL_SAMPLE_ALPHA_TO_COVERAGE
#define GRAPHICS_BACKEND_SAMPLE_ALPHA_TO_ONE        GL_SAMPLE_ALPHA_TO_ONE
#define GRAPHICS_BACKEND_SAMPLE_COVERAGE            GL_SAMPLE_COVERAGE
#define GRAPHICS_BACKEND_SAMPLE_SHADING             GL_SAMPLE_SHADING
#define GRAPHICS_BACKEND_SAMPLE_MASK                GL_SAMPLE_MASK

#define GRAPHICS_BACKEND_TEXTURE_CUBE_MAP_SEAMLESS  GL_TEXTURE_CUBE_MAP_SEAMLESS
#define GRAPHICS_BACKEND_PROGRAM_POINT_SIZE         GL_PROGRAM_POINT_SIZE

#define GRAPHICS_BACKEND_ZERO                       GL_ZERO
#define GRAPHICS_BACKEND_ONE                        GL_ONE
#define GRAPHICS_BACKEND_SRC_COLOR                  GL_SRC_COLOR
#define GRAPHICS_BACKEND_ONE_MINUS_SRC_COLOR        GL_ONE_MINUS_SRC_COLOR
#define GRAPHICS_BACKEND_DST_COLOR                  GL_DST_COLOR
#define GRAPHICS_BACKEND_ONE_MINUS_DST_COLOR        GL_ONE_MINUS_DST_COLOR
#define GRAPHICS_BACKEND_SRC_ALPHA                  GL_SRC_ALPHA
#define GRAPHICS_BACKEND_ONE_MINUS_SRC_ALPHA        GL_ONE_MINUS_SRC_ALPHA
#define GRAPHICS_BACKEND_DST_ALPHA                  GL_DST_ALPHA
#define GRAPHICS_BACKEND_ONE_MINUS_DST_ALPHA        GL_ONE_MINUS_DST_ALPHA
#define GRAPHICS_BACKEND_CONSTANT_COLOR             GL_CONSTANT_COLOR
#define GRAPHICS_BACKEND_ONE_MINUS_CONSTANT_COLOR   GL_ONE_MINUS_CONSTANT_COLOR
#define GRAPHICS_BACKEND_CONSTANT_ALPHA             GL_CONSTANT_ALPHA
#define GRAPHICS_BACKEND_ONE_MINUS_CONSTANT_ALPHA   GL_ONE_MINUS_CONSTANT_ALPHA
#define GRAPHICS_BACKEND_SRC_ALPHA_SATURATE         GL_SRC_ALPHA_SATURATE
#define GRAPHICS_BACKEND_SRC1_COLOR                 GL_SRC1_COLOR
#define GRAPHICS_BACKEND_ONE_MINUS_SRC1_COLOR       GL_ONE_MINUS_SRC1_COLOR
#define GRAPHICS_BACKEND_SRC1_ALPHA                 GL_SRC1_ALPHA
#define GRAPHICS_BACKEND_ONE_MINUS_SRC1_ALPHA       GL_ONE_MINUS_SRC1_ALPHA

#define GRAPHICS_BACKEND_FRONT              GL_FRONT
#define GRAPHICS_BACKEND_BACK               GL_BACK
#define GRAPHICS_BACKEND_FRONT_AND_BACK     GL_FRONT_AND_BACK

#define GRAPHICS_BACKEND_NEVER      GL_NEVER
#define GRAPHICS_BACKEND_LESS       GL_LESS
#define GRAPHICS_BACKEND_EQUAL      GL_EQUAL
#define GRAPHICS_BACKEND_LEQUAL     GL_LEQUAL
#define GRAPHICS_BACKEND_GREATER    GL_GREATER
#define GRAPHICS_BACKEND_NOTEQUAL   GL_NOTEQUAL
#define GRAPHICS_BACKEND_GEQUAL     GL_GEQUAL
#define GRAPHICS_BACKEND_ALWAYS     GL_ALWAYS

#define GRAPHICS_BACKEND_VERTEX_SHADER              GL_VERTEX_SHADER
#define GRAPHICS_BACKEND_TESS_CONTROL_SHADER        GL_TESS_CONTROL_SHADER
#define GRAPHICS_BACKEND_TESS_EVALUATION_SHADER     GL_TESS_EVALUATION_SHADER
#define GRAPHICS_BACKEND_GEOMETRY_SHADER            GL_GEOMETRY_SHADER
#define GRAPHICS_BACKEND_FRAGMENT_SHADER            GL_FRAGMENT_SHADER

#define GRAPHICS_BACKEND_SHADER_TYPE            GL_SHADER_TYPE
#define GRAPHICS_BACKEND_DELETE_STATUS          GL_DELETE_STATUS
#define GRAPHICS_BACKEND_COMPILE_STATUS         GL_COMPILE_STATUS
#define GRAPHICS_BACKEND_INFO_LOG_LENGTH        GL_INFO_LOG_LENGTH
#define GRAPHICS_BACKEND_SHADER_SOURCE_LENGTH   GL_SHADER_SOURCE_LENGTH

#define GRAPHICS_BACKEND_DELETE_STATUS      GL_DELETE_STATUS
#define GRAPHICS_BACKEND_LINK_STATUS        GL_LINK_STATUS
#define GRAPHICS_BACKEND_VALIDATE_STATUS    GL_VALIDATE_STATUS
#define GRAPHICS_BACKEND_INFO_LOG_LENGTH    GL_INFO_LOG_LENGTH

#define GRAPHICS_BACKEND_ATTACHED_SHADERS GL_ATTACHED_SHADERS

#define GRAPHICS_BACKEND_ACTIVE_ATTRIBUTES              GL_ACTIVE_ATTRIBUTES
#define GRAPHICS_BACKEND_ACTIVE_ATTRIBUTE_MAX_LENGTH    GL_ACTIVE_ATTRIBUTE_MAX_LENGTH

#define GRAPHICS_BACKEND_ACTIVE_UNIFORMS                        GL_ACTIVE_UNIFORMS
#define GRAPHICS_BACKEND_ACTIVE_UNIFORM_BLOCKS                  GL_ACTIVE_UNIFORM_BLOCKS
#define GRAPHICS_BACKEND_ACTIVE_UNIFORM_BLOCK_MAX_NAME_LENGTH   GL_ACTIVE_UNIFORM_BLOCK_MAX_NAME_LENGTH
#define GRAPHICS_BACKEND_ACTIVE_UNIFORM_MAX_LENGTH              GL_ACTIVE_UNIFORM_MAX_LENGTH

#define GRAPHICS_BACKEND_PROGRAM_BINARY_LENGTH GL_PROGRAM_BINARY_LENGTH

#define GRAPHICS_BACKEND_TRANSFORM_FEEDBACK_BUFFER_MODE         GL_TRANSFORM_FEEDBACK_BUFFER_MODE
#define GRAPHICS_BACKEND_TRANSFORM_FEEDBACK_VARYINGS            GL_TRANSFORM_FEEDBACK_VARYINGS
#define GRAPHICS_BACKEND_TRANSFORM_FEEDBACK_VARYING_MAX_LENGTH  GL_TRANSFORM_FEEDBACK_VARYING_MAX_LENGTH

#define GRAPHICS_BACKEND_GEOMETRY_VERTICES_OUT  GL_GEOMETRY_VERTICES_OUT
#define GRAPHICS_BACKEND_GEOMETRY_INPUT_TYPE    GL_GEOMETRY_INPUT_TYPE
#define GRAPHICS_BACKEND_GEOMETRY_OUTPUT_TYPE   GL_GEOMETRY_OUTPUT_TYPE

#define GRAPHICS_BACKEND_FLOAT_VEC2 GL_FLOAT_VEC2
#define GRAPHICS_BACKEND_FLOAT_VEC3 GL_FLOAT_VEC3
#define GRAPHICS_BACKEND_FLOAT_VEC4 GL_FLOAT_VEC4

#define GRAPHICS_BACKEND_DOUBLE_VEC2 GL_DOUBLE_VEC2
#define GRAPHICS_BACKEND_DOUBLE_VEC3 GL_DOUBLE_VEC3
#define GRAPHICS_BACKEND_DOUBLE_VEC4 GL_DOUBLE_VEC4

#define GRAPHICS_BACKEND_INT_VEC2 GL_INT_VEC2
#define GRAPHICS_BACKEND_INT_VEC3 GL_INT_VEC3
#define GRAPHICS_BACKEND_INT_VEC4 GL_INT_VEC4

#define GRAPHICS_BACKEND_UNSIGNED_INT_VEC2 GL_UNSIGNED_INT_VEC2
#define GRAPHICS_BACKEND_UNSIGNED_INT_VEC3 GL_UNSIGNED_INT_VEC3
#define GRAPHICS_BACKEND_UNSIGNED_INT_VEC4 GL_UNSIGNED_INT_VEC4

#define GRAPHICS_BACKEND_BOOL       GL_BOOL
#define GRAPHICS_BACKEND_BOOL_VEC2  GL_BOOL_VEC2
#define GRAPHICS_BACKEND_BOOL_VEC3  GL_BOOL_VEC3
#define GRAPHICS_BACKEND_BOOL_VEC4  GL_BOOL_VEC4

#define GRAPHICS_BACKEND_FLOAT_MAT2     GL_FLOAT_MAT2
#define GRAPHICS_BACKEND_FLOAT_MAT3     GL_FLOAT_MAT3
#define GRAPHICS_BACKEND_FLOAT_MAT4     GL_FLOAT_MAT4
#define GRAPHICS_BACKEND_FLOAT_MAT2x3   GL_FLOAT_MAT2x3
#define GRAPHICS_BACKEND_FLOAT_MAT2x4   GL_FLOAT_MAT2x4
#define GRAPHICS_BACKEND_FLOAT_MAT3x2   GL_FLOAT_MAT3x2
#define GRAPHICS_BACKEND_FLOAT_MAT3x4   GL_FLOAT_MAT3x4
#define GRAPHICS_BACKEND_FLOAT_MAT4x2   GL_FLOAT_MAT4x2
#define GRAPHICS_BACKEND_FLOAT_MAT4x3   GL_FLOAT_MAT4x3

#define GRAPHICS_BACKEND_DOUBLE_MAT2    GL_DOUBLE_MAT2
#define GRAPHICS_BACKEND_DOUBLE_MAT3    GL_DOUBLE_MAT3
#define GRAPHICS_BACKEND_DOUBLE_MAT4    GL_DOUBLE_MAT4
#define GRAPHICS_BACKEND_DOUBLE_MAT2x3  GL_DOUBLE_MAT2x3
#define GRAPHICS_BACKEND_DOUBLE_MAT2x4  GL_DOUBLE_MAT2x4
#define GRAPHICS_BACKEND_DOUBLE_MAT3x2  GL_DOUBLE_MAT3x2
#define GRAPHICS_BACKEND_DOUBLE_MAT3x4  GL_DOUBLE_MAT3x4
#define GRAPHICS_BACKEND_DOUBLE_MAT4x2  GL_DOUBLE_MAT4x2
#define GRAPHICS_BACKEND_DOUBLE_MAT4x3  GL_DOUBLE_MAT4x3

#define GRAPHICS_BACKEND_SAMPLER_1D                     GL_SAMPLER_1D
#define GRAPHICS_BACKEND_SAMPLER_2D                     GL_SAMPLER_2D
#define GRAPHICS_BACKEND_SAMPLER_3D                     GL_SAMPLER_3D
#define GRAPHICS_BACKEND_SAMPLER_CUBE                   GL_SAMPLER_CUBE
#define GRAPHICS_BACKEND_SAMPLER_1D_SHADOW              GL_SAMPLER_1D_SHADOW
#define GRAPHICS_BACKEND_SAMPLER_2D_SHADOW              GL_SAMPLER_2D_SHADOW
#define GRAPHICS_BACKEND_SAMPLER_1D_ARRAY               GL_SAMPLER_1D_ARRAY
#define GRAPHICS_BACKEND_SAMPLER_2D_ARRAY               GL_SAMPLER_2D_ARRAY
#define GRAPHICS_BACKEND_SAMPLER_1D_ARRAY_SHADOW        GL_SAMPLER_1D_ARRAY_SHADOW
#define GRAPHICS_BACKEND_SAMPLER_2D_ARRAY_SHADOW        GL_SAMPLER_2D_ARRAY_SHADOW
#define GRAPHICS_BACKEND_SAMPLER_2D_MULTISAMPLE         GL_SAMPLER_2D_MULTISAMPLE
#define GRAPHICS_BACKEND_SAMPLER_2D_MULTISAMPLE_ARRAY   GL_SAMPLER_2D_MULTISAMPLE_ARRAY
#define GRAPHICS_BACKEND_SAMPLER_CUBE_SHADOW            GL_SAMPLER_CUBE_SHADOW
#define GRAPHICS_BACKEND_SAMPLER_BUFFER                 GL_SAMPLER_BUFFER
#define GRAPHICS_BACKEND_SAMPLER_2D_RECT                GL_SAMPLER_2D_RECT
#define GRAPHICS_BACKEND_SAMPLER_2D_RECT_SHADOW         GL_SAMPLER_2D_RECT_SHADOW

#define GRAPHICS_BACKEND_INT_SAMPLER_1D                     GL_INT_SAMPLER_1D
#define GRAPHICS_BACKEND_INT_SAMPLER_2D                     GL_INT_SAMPLER_2D
#define GRAPHICS_BACKEND_INT_SAMPLER_3D                     GL_INT_SAMPLER_3D
#define GRAPHICS_BACKEND_INT_SAMPLER_CUBE                   GL_INT_SAMPLER_CUBE
#define GRAPHICS_BACKEND_INT_SAMPLER_1D_ARRAY               GL_INT_SAMPLER_1D_ARRAY
#define GRAPHICS_BACKEND_INT_SAMPLER_2D_ARRAY               GL_INT_SAMPLER_2D_ARRAY
#define GRAPHICS_BACKEND_INT_SAMPLER_2D_MULTISAMPLE         GL_INT_SAMPLER_2D_MULTISAMPLE
#define GRAPHICS_BACKEND_INT_SAMPLER_2D_MULTISAMPLE_ARRAY   GL_INT_SAMPLER_2D_MULTISAMPLE_ARRAY
#define GRAPHICS_BACKEND_INT_SAMPLER_BUFFER                 GL_INT_SAMPLER_BUFFER
#define GRAPHICS_BACKEND_INT_SAMPLER_2D_RECT                GL_INT_SAMPLER_2D_RECT

#define GRAPHICS_BACKEND_UNSIGNED_INT_SAMPLER_1D                    GL_UNSIGNED_INT_SAMPLER_1D
#define GRAPHICS_BACKEND_UNSIGNED_INT_SAMPLER_2D                    GL_UNSIGNED_INT_SAMPLER_2D
#define GRAPHICS_BACKEND_UNSIGNED_INT_SAMPLER_3D                    GL_UNSIGNED_INT_SAMPLER_3D
#define GRAPHICS_BACKEND_UNSIGNED_INT_SAMPLER_CUBE                  GL_UNSIGNED_INT_SAMPLER_CUBE
#define GRAPHICS_BACKEND_UNSIGNED_INT_SAMPLER_1D_ARRAY              GL_UNSIGNED_INT_SAMPLER_1D_ARRAY
#define GRAPHICS_BACKEND_UNSIGNED_INT_SAMPLER_2D_ARRAY              GL_UNSIGNED_INT_SAMPLER_2D_ARRAY
#define GRAPHICS_BACKEND_UNSIGNED_INT_SAMPLER_2D_MULTISAMPLE        GL_UNSIGNED_INT_SAMPLER_2D_MULTISAMPLE
#define GRAPHICS_BACKEND_UNSIGNED_INT_SAMPLER_2D_MULTISAMPLE_ARRAY  GL_UNSIGNED_INT_SAMPLER_2D_MULTISAMPLE_ARRAY
#define GRAPHICS_BACKEND_UNSIGNED_INT_SAMPLER_BUFFER                GL_UNSIGNED_INT_SAMPLER_BUFFER
#define GRAPHICS_BACKEND_UNSIGNED_INT_SAMPLER_2D_RECT               GL_UNSIGNED_INT_SAMPLER_2D_RECT

#define GRAPHICS_BACKEND_COLOR_BUFFER_BIT   GL_COLOR_BUFFER_BIT
#define GRAPHICS_BACKEND_DEPTH_BUFFER_BIT   GL_DEPTH_BUFFER_BIT
#define GRAPHICS_BACKEND_STENCIL_BUFFER_BIT GL_STENCIL_BUFFER_BIT

#define GRAPHICS_BACKEND_UNIFORM_BLOCK_BINDING                                  GL_UNIFORM_BLOCK_BINDING
#define GRAPHICS_BACKEND_UNIFORM_BLOCK_DATA_SIZE                                GL_UNIFORM_BLOCK_DATA_SIZE
#define GRAPHICS_BACKEND_UNIFORM_BLOCK_NAME_LENGTH                              GL_UNIFORM_BLOCK_NAME_LENGTH
#define GRAPHICS_BACKEND_UNIFORM_BLOCK_ACTIVE_UNIFORMS                          GL_UNIFORM_BLOCK_ACTIVE_UNIFORMS
#define GRAPHICS_BACKEND_UNIFORM_BLOCK_ACTIVE_UNIFORM_INDICES                   GL_UNIFORM_BLOCK_ACTIVE_UNIFORM_INDICES
#define GRAPHICS_BACKEND_UNIFORM_BLOCK_REFERENCED_BY_VERTEX_SHADER              GL_UNIFORM_BLOCK_REFERENCED_BY_VERTEX_SHADER
#define GRAPHICS_BACKEND_UNIFORM_BLOCK_REFERENCED_BY_TESS_CONTROL_SHADER        GL_UNIFORM_BLOCK_REFERENCED_BY_TESS_CONTROL_SHADER
#define GRAPHICS_BACKEND_UNIFORM_BLOCK_REFERENCED_BY_TESS_EVALUATION_SHADER     GL_UNIFORM_BLOCK_REFERENCED_BY_TESS_EVALUATION_SHADER
#define GRAPHICS_BACKEND_UNIFORM_BLOCK_REFERENCED_BY_GEOMETRY_SHADER            GL_UNIFORM_BLOCK_REFERENCED_BY_GEOMETRY_SHADER
#define GRAPHICS_BACKEND_UNIFORM_BLOCK_REFERENCED_BY_FRAGMENT_SHADER            GL_UNIFORM_BLOCK_REFERENCED_BY_FRAGMENT_SHADER

#define GRAPHICS_BACKEND_UNIFORM_TYPE           GL_UNIFORM_TYPE
#define GRAPHICS_BACKEND_UNIFORM_SIZE           GL_UNIFORM_SIZE
#define GRAPHICS_BACKEND_UNIFORM_NAME_LENGTH    GL_UNIFORM_NAME_LENGTH
#define GRAPHICS_BACKEND_UNIFORM_BLOCK_INDEX    GL_UNIFORM_BLOCK_INDEX
#define GRAPHICS_BACKEND_UNIFORM_OFFSET         GL_UNIFORM_OFFSET
#define GRAPHICS_BACKEND_UNIFORM_ARRAY_STRIDE   GL_UNIFORM_ARRAY_STRIDE
#define GRAPHICS_BACKEND_UNIFORM_MATRIX_STRIDE  GL_UNIFORM_MATRIX_STRIDE
#define GRAPHICS_BACKEND_UNIFORM_IS_ROW_MAJOR   GL_UNIFORM_IS_ROW_MAJOR

#define GRAPHICS_BACKEND_CW     GL_CW
#define GRAPHICS_BACKEND_CCW    GL_CCW

#ifdef GL_ARB_program_interface_query
#define GRAPHICS_BACKEND_UNIFORM                                GL_UNIFORM
#define GRAPHICS_BACKEND_UNIFORM_BLOCK                          GL_UNIFORM_BLOCK
#define GRAPHICS_BACKEND_ATOMIC_COUNTER_BUFFER                  GL_ATOMIC_COUNTER_BUFFER
#define GRAPHICS_BACKEND_PROGRAM_INPUT                          GL_PROGRAM_INPUT
#define GRAPHICS_BACKEND_PROGRAM_OUTPUT                         GL_PROGRAM_OUTPUT
#define GRAPHICS_BACKEND_VERTEX_SUBROUTINE                      GL_VERTEX_SUBROUTINE
#define GRAPHICS_BACKEND_TESS_CONTROL_SUBROUTINE                GL_TESS_CONTROL_SUBROUTINE
#define GRAPHICS_BACKEND_TESS_EVALUATION_SUBROUTINE             GL_TESS_EVALUATION_SUBROUTINE
#define GRAPHICS_BACKEND_GEOMETRY_SUBROUTINE                    GL_GEOMETRY_SUBROUTINE
#define GRAPHICS_BACKEND_FRAGMENT_SUBROUTINE                    GL_FRAGMENT_SUBROUTINE
#define GRAPHICS_BACKEND_COMPUTE_SUBROUTINE                     GL_COMPUTE_SUBROUTINE
#define GRAPHICS_BACKEND_VERTEX_SUBROUTINE_UNIFORM              GL_VERTEX_SUBROUTINE_UNIFORM
#define GRAPHICS_BACKEND_TESS_CONTROL_SUBROUTINE_UNIFORM        GL_TESS_CONTROL_SUBROUTINE_UNIFORM
#define GRAPHICS_BACKEND_TESS_EVALUATION_SUBROUTINE_UNIFORM     GL_TESS_EVALUATION_SUBROUTINE_UNIFORM
#define GRAPHICS_BACKEND_GEOMETRY_SUBROUTINE_UNIFORM            GL_GEOMETRY_SUBROUTINE_UNIFORM
#define GRAPHICS_BACKEND_FRAGMENT_SUBROUTINE_UNIFORM            GL_FRAGMENT_SUBROUTINE_UNIFORM
#define GRAPHICS_BACKEND_COMPUTE_SUBROUTINE_UNIFORM             GL_COMPUTE_SUBROUTINE_UNIFORM
#define GRAPHICS_BACKEND_TRANSFORM_FEEDBACK_VARYING             GL_TRANSFORM_FEEDBACK_VARYING
#define GRAPHICS_BACKEND_BUFFER_VARIABLE                        GL_BUFFER_VARIABLE
#define GRAPHICS_BACKEND_SHADER_STORAGE_BLOCK                   GL_SHADER_STORAGE_BLOCK

#define GRAPHICS_BACKEND_ACTIVE_RESOURCES                GL_ACTIVE_RESOURCES
#define GRAPHICS_BACKEND_MAX_NAME_LENGTH                 GL_MAX_NAME_LENGTH
#define GRAPHICS_BACKEND_MAX_NUM_ACTIVE_VARIABLES        GL_MAX_NUM_ACTIVE_VARIABLES
#define GRAPHICS_BACKEND_MAX_NUM_COMPATIBLE_SUBROUTINES  GL_MAX_NUM_COMPATIBLE_SUBROUTINES

#define GRAPHICS_BACKEND_NAME_LENGTH                            GL_NAME_LENGTH
#define GRAPHICS_BACKEND_TYPE                                   GL_TYPE
#define GRAPHICS_BACKEND_ARRAY_SIZE                             GL_ARRAY_SIZE
#define GRAPHICS_BACKEND_OFFSET                                 GL_OFFSET
#define GRAPHICS_BACKEND_BLOCK_INDEX                            GL_BLOCK_INDEX
#define GRAPHICS_BACKEND_ARRAY_STRIDE                           GL_ARRAY_STRIDE
#define GRAPHICS_BACKEND_MATRIX_STRIDE                          GL_MATRIX_STRIDE
#define GRAPHICS_BACKEND_IS_ROW_MAJOR                           GL_IS_ROW_MAJOR
#define GRAPHICS_BACKEND_ATOMIC_COUNTER_BUFFER_INDEX            GL_ATOMIC_COUNTER_BUFFER_INDEX
#define GRAPHICS_BACKEND_BUFFER_BINDING                         GL_BUFFER_BINDING
#define GRAPHICS_BACKEND_BUFFER_DATA_SIZE                       GL_BUFFER_DATA_SIZE
#define GRAPHICS_BACKEND_NUM_ACTIVE_VARIABLES                   GL_NUM_ACTIVE_VARIABLES
#define GRAPHICS_BACKEND_ACTIVE_VARIABLES                       GL_ACTIVE_VARIABLES
#define GRAPHICS_BACKEND_REFERENCED_BY_VERTEX_SHADER            GL_REFERENCED_BY_VERTEX_SHADER
#define GRAPHICS_BACKEND_REFERENCED_BY_TESS_CONTROL_SHADER      GL_REFERENCED_BY_TESS_CONTROL_SHADER
#define GRAPHICS_BACKEND_REFERENCED_BY_TESS_EVALUATION_SHADER   GL_REFERENCED_BY_TESS_EVALUATION_SHADER
#define GRAPHICS_BACKEND_REFERENCED_BY_GEOMETRY_SHADER          GL_REFERENCED_BY_GEOMETRY_SHADER
#define GRAPHICS_BACKEND_REFERENCED_BY_FRAGMENT_SHADER          GL_REFERENCED_BY_FRAGMENT_SHADER
#define GRAPHICS_BACKEND_REFERENCED_BY_COMPUTE_SHADER           GL_REFERENCED_BY_COMPUTE_SHADER
#define GRAPHICS_BACKEND_TOP_LEVEL_ARRAY_SIZE                   GL_TOP_LEVEL_ARRAY_SIZE
#define GRAPHICS_BACKEND_TOP_LEVEL_ARRAY_STRIDE                 GL_TOP_LEVEL_ARRAY_STRIDE
#define GRAPHICS_BACKEND_LOCATION                               GL_LOCATION
#define GRAPHICS_BACKEND_LOCATION_INDEX                         GL_LOCATION_INDEX
#define GRAPHICS_BACKEND_IS_PER_PATCH                           GL_IS_PER_PATCH
#else
#define GRAPHICS_BACKEND_UNIFORM                                0
#define GRAPHICS_BACKEND_UNIFORM_BLOCK                          0
#define GRAPHICS_BACKEND_ATOMIC_COUNTER_BUFFER                  0
#define GRAPHICS_BACKEND_PROGRAM_INPUT                          0
#define GRAPHICS_BACKEND_PROGRAM_OUTPUT                         0
#define GRAPHICS_BACKEND_VERTEX_SUBROUTINE                      0
#define GRAPHICS_BACKEND_TESS_CONTROL_SUBROUTINE                0
#define GRAPHICS_BACKEND_TESS_EVALUATION_SUBROUTINE             0
#define GRAPHICS_BACKEND_GEOMETRY_SUBROUTINE                    0
#define GRAPHICS_BACKEND_FRAGMENT_SUBROUTINE                    0
#define GRAPHICS_BACKEND_COMPUTE_SUBROUTINE                     0
#define GRAPHICS_BACKEND_VERTEX_SUBROUTINE_UNIFORM              0
#define GRAPHICS_BACKEND_TESS_CONTROL_SUBROUTINE_UNIFORM        0
#define GRAPHICS_BACKEND_TESS_EVALUATION_SUBROUTINE_UNIFORM     0
#define GRAPHICS_BACKEND_GEOMETRY_SUBROUTINE_UNIFORM            0
#define GRAPHICS_BACKEND_FRAGMENT_SUBROUTINE_UNIFORM            0
#define GRAPHICS_BACKEND_COMPUTE_SUBROUTINE_UNIFORM             0
#define GRAPHICS_BACKEND_TRANSFORM_FEEDBACK_VARYING             0
#define GRAPHICS_BACKEND_BUFFER_VARIABLE                        0
#define GRAPHICS_BACKEND_SHADER_STORAGE_BLOCK                   0

#define GRAPHICS_BACKEND_ACTIVE_RESOURCES                0
#define GRAPHICS_BACKEND_MAX_NAME_LENGTH                 0
#define GRAPHICS_BACKEND_MAX_NUM_ACTIVE_VARIABLES        0
#define GRAPHICS_BACKEND_MAX_NUM_COMPATIBLE_SUBROUTINES  0

#define GRAPHICS_BACKEND_NAME_LENGTH                            0
#define GRAPHICS_BACKEND_TYPE                                   0
#define GRAPHICS_BACKEND_ARRAY_SIZE                             0
#define GRAPHICS_BACKEND_OFFSET                                 0
#define GRAPHICS_BACKEND_BLOCK_INDEX                            0
#define GRAPHICS_BACKEND_ARRAY_STRIDE                           0
#define GRAPHICS_BACKEND_MATRIX_STRIDE                          0
#define GRAPHICS_BACKEND_IS_ROW_MAJOR                           0
#define GRAPHICS_BACKEND_ATOMIC_COUNTER_BUFFER_INDEX            0
#define GRAPHICS_BACKEND_BUFFER_BINDING                         0
#define GRAPHICS_BACKEND_BUFFER_DATA_SIZE                       0
#define GRAPHICS_BACKEND_NUM_ACTIVE_VARIABLES                   0
#define GRAPHICS_BACKEND_ACTIVE_VARIABLES                       0
#define GRAPHICS_BACKEND_REFERENCED_BY_VERTEX_SHADER            0
#define GRAPHICS_BACKEND_REFERENCED_BY_TESS_CONTROL_SHADER      0
#define GRAPHICS_BACKEND_REFERENCED_BY_TESS_EVALUATION_SHADER   0
#define GRAPHICS_BACKEND_REFERENCED_BY_GEOMETRY_SHADER          0
#define GRAPHICS_BACKEND_REFERENCED_BY_FRAGMENT_SHADER          0
#define GRAPHICS_BACKEND_REFERENCED_BY_COMPUTE_SHADER           0
#define GRAPHICS_BACKEND_TOP_LEVEL_ARRAY_SIZE                   0
#define GRAPHICS_BACKEND_TOP_LEVEL_ARRAY_STRIDE                 0
#define GRAPHICS_BACKEND_LOCATION                               0
#define GRAPHICS_BACKEND_LOCATION_INDEX                         0
#define GRAPHICS_BACKEND_IS_PER_PATCH                           0
#endif

#ifdef GL_ARB_shader_subroutine
#define GRAPHICS_BACKEND_NUM_COMPATIBLE_SUBROUTINES     GL_NUM_COMPATIBLE_SUBROUTINES
#define GRAPHICS_BACKEND_COMPATIBLE_SUBROUTINES         GL_COMPATIBLE_SUBROUTINES
#else
#define GRAPHICS_BACKEND_NUM_COMPATIBLE_SUBROUTINES     0
#define GRAPHICS_BACKEND_COMPATIBLE_SUBROUTINES         0
#endif

#ifdef GL_ARB_enhanced_layouts
#define GRAPHICS_BACKEND_LOCATION_COMPONENT                 GL_LOCATION_COMPONENT
#define GRAPHICS_BACKEND_TRANSFORM_FEEDBACK_BUFFER_INDEX    GL_TRANSFORM_FEEDBACK_BUFFER_INDEX
#define GRAPHICS_BACKEND_TRANSFORM_FEEDBACK_BUFFER_STRIDE   GL_TRANSFORM_FEEDBACK_BUFFER_STRIDE
#else
#define GRAPHICS_BACKEND_LOCATION_COMPONENT                 0
#define GRAPHICS_BACKEND_TRANSFORM_FEEDBACK_BUFFER_INDEX    0
#define GRAPHICS_BACKEND_TRANSFORM_FEEDBACK_BUFFER_STRIDE   0
#endif

#ifdef GL_ARB_compute_shader
#define GRAPHICS_BACKEND_DISPATCH_INDIRECT_BUFFER GL_DISPATCH_INDIRECT_BUFFER
#else
#define GRAPHICS_BACKEND_DISPATCH_INDIRECT_BUFFER 0
#endif

#ifdef GL_ARB_query_buffer_object
#define GRAPHICS_BACKEND_QUERY_BUFFER GL_QUERY_BUFFER
#else
#define GRAPHICS_BACKEND_QUERY_BUFFER 0
#endif

#ifdef GL_ARB_shader_storage_buffer_object
#define GRAPHICS_BACKEND_SHADER_STORAGE_BUFFER GL_SHADER_STORAGE_BUFFER
#else
#define GRAPHICS_BACKEND_SHADER_STORAGE_BUFFER 0
#endif

#endif //RENDER_ENGINE_GRAPHICS_BACKEND_H
