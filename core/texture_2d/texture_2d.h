#ifndef OPENGL_STUDY_TEXTURE_2D_H
#define OPENGL_STUDY_TEXTURE_2D_H

#include "texture/texture.h"
#include "vector4/vector4.h"
#include <filesystem>
#include <string>
#include <vector>

class Texture2D: public Texture
{
public:
    static std::shared_ptr<Texture2D>        Create(int _width, int _height);
    static std::shared_ptr<Texture2D>        CreateShadowMap(int _width, int _height);
    static std::shared_ptr<Texture2D>        Load(const std::filesystem::path &_path, bool _srgb = true, bool _hasAlpha = false);
    static const std::shared_ptr<Texture2D> &White();
    static const std::shared_ptr<Texture2D> &Normal();
    static const std::shared_ptr<Texture2D> &Null();

    void Bind(int _unit) const override;
    void Attach(int _attachment) const override;

    void SetWrapMode(GLenum _wrapMode) const;
    void SetBorderColor(const Vector4 &_color) const;

    virtual ~Texture2D() = default;

private:
    Texture2D()                  = default;
    Texture2D(const Texture2D &) = delete;
    Texture2D(Texture2D &&)      = delete;

    Texture2D &operator=(const Texture2D &) = delete;
    Texture2D &operator=(Texture2D &&) = delete;

    void Init(GLint _internalFormat, GLenum _format, GLenum _type, bool _loadData);

    std::vector<unsigned char> m_Data;
};

#endif //OPENGL_STUDY_TEXTURE_2D_H
