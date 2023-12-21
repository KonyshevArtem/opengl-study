#include "texture_2d.h"
#include "texture_binary_reader.h"

#ifdef OPENGL_STUDY_WINDOWS
#include <GL/glew.h>
#elif OPENGL_STUDY_MACOS
#include <OpenGL/gl3.h>
#endif
#include <vector>

Texture2D::Texture2D(unsigned int width, unsigned int height, unsigned int mipLevels) :
        Texture(GL_TEXTURE_2D, width, height, 0, mipLevels)
{
}

std::shared_ptr<Texture2D> Texture2D::Create(int _width, int _height)
{
    return Create_Internal(nullptr, _width, _height, GL_SRGB_ALPHA, GL_RGBA);
}

std::shared_ptr<Texture2D> Texture2D::CreateShadowMap(int _width, int _height)
{
    return Create_Internal(nullptr, _width, _height, GL_DEPTH_COMPONENT, GL_DEPTH_COMPONENT);
}

std::shared_ptr<Texture2D> Texture2D::Load(const std::filesystem::path &_path)
{
    TextureBinaryReader reader;
    if (!reader.ReadTexture(_path))
    {
        return nullptr;
    }

    const auto &header = reader.GetHeader();

    auto t = std::shared_ptr<Texture2D>(new Texture2D(header.Width, header.Height, header.MipCount));
    for (int j = 0; j < header.MipCount; ++j)
    {
        auto pixels = reader.GetPixels(j);
        t->UploadPixels(pixels.data(), GL_TEXTURE_2D, header.InternalFormat, header.Format, GL_UNSIGNED_BYTE, pixels.size(), j, header.IsCompressed);
    }

    return t;
}

const std::shared_ptr<Texture2D> &Texture2D::White()
{
    static std::shared_ptr<Texture2D> white;

    if (white == nullptr)
    {
        unsigned char pixels[3] {255, 255, 255};
        white = Create_Internal(&pixels[0], 1, 1, GL_SRGB, GL_RGB);
    }

    return white;
}

const std::shared_ptr<Texture2D> &Texture2D::Normal()
{
    static std::shared_ptr<Texture2D> normal;

    if (normal == nullptr)
    {
        unsigned char pixels[3] {125, 125, 255};
        normal = Create_Internal(&pixels[0], 1, 1, GL_RGB, GL_RGB);
    }

    return normal;
}

const std::shared_ptr<Texture2D> &Texture2D::Null()
{
    static std::shared_ptr<Texture2D> null;
    return null;
}

std::shared_ptr<Texture2D> Texture2D::Create_Internal(unsigned char *pixels, int width, int height, int internalFormat, int format)
{
    auto texture = std::shared_ptr<Texture2D>(new Texture2D(width, height, 1));
    texture->UploadPixels(pixels, GL_TEXTURE_2D, internalFormat, format, GL_UNSIGNED_BYTE, 0, 0, false);
    return texture;
}
