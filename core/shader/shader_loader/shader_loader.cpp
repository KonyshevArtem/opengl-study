#include "shader_loader.h"
#include "../shader.h"
#include "core_debug/debug.h"
#include "graphics/graphics.h"
#include "utils.h"
#ifdef OPENGL_STUDY_WINDOWS
#include <GL/glew.h>
#elif OPENGL_STUDY_MACOS
#include <OpenGL/gl3.h>
#endif
#include <boost/json.hpp>
#include <span>
#include <unordered_map>

// TODO use syntax analysis instead of regex

namespace ShaderLoader
{
    constexpr int     SHADER_PART_COUNT  = 3;
    const std::string INSTANCING_KEYWORD = "_INSTANCING";

    const GLuint SHADER_PARTS[SHADER_PART_COUNT] {
            GL_VERTEX_SHADER,
            GL_GEOMETRY_SHADER,
            GL_FRAGMENT_SHADER};

    const std::string SHADER_PART_NAMES[SHADER_PART_COUNT] {
            "vertex",
            "geometry",
            "fragment"};

    const std::string SHADER_PART_DIRECTIVES[SHADER_PART_COUNT] {
            "#define VERTEX_PROGRAM\n",
            "#define GEOMETRY_PROGRAM\n",
            "#define FRAGMENT_PROGRAM\n"};

    struct ShaderPassInfo
    {
        Shader::PassInfo Pass;
        std::string      ShaderPartPaths[SHADER_PART_COUNT];
    };

    struct ShaderInfo
    {
        std::vector<ShaderPassInfo>                  Passes;
        std::unordered_map<std::string, std::string> DefaultValues;
    };

    GLenum ParseBlendFunc(const std::string &_literal)
    {
        if (_literal == "SrcAlpha")
            return GL_SRC_ALPHA;

        if (_literal == "OneMinusSrcAlpha")
            return GL_ONE_MINUS_SRC_ALPHA;

        Debug::LogErrorFormat("[ShaderLoader] Unsupported blend func: %1%", {_literal});
        return GL_ONE;
    }

    GLenum ParseDepthFunc(const std::string &_literal)
    {
        if (_literal == "Always")
            return GL_ALWAYS;

        Debug::LogErrorFormat("[Shader Loader] Unsupported depth func: %1%", {_literal});
        return GL_LEQUAL;
    }

    Shader::BlendInfo ParseBlendInfo(const boost::json::object &_obj)
    {
        using namespace boost::json;

        auto hasBlendInfo = _obj.contains("blend");

        Shader::BlendInfo info {hasBlendInfo};
        if (hasBlendInfo)
        {
            auto &infoObj  = _obj.at("blend").as_object();
            info.SrcFactor = ParseBlendFunc(value_to<std::string>(infoObj.at("SrcFactor")));
            info.DstFactor = ParseBlendFunc(value_to<std::string>(infoObj.at("DstFactor")));
        }

        return info;
    }

    Shader::CullInfo ParseCullInfo(const boost::json::object &_obj)
    {
        using namespace boost::json;

        Shader::CullInfo info {true, GL_BACK};
        if (_obj.contains("cull"))
        {
            auto cull = value_to<std::string>(_obj.at("cull"));

            if (cull == "Front")
                info.Face = GL_FRONT;
            else if (cull == "Back")
                info.Face = GL_BACK;
            else if (cull == "None")
                info.Enabled = false;
        }

        return info;
    }

    Shader::DepthInfo ParseDepthInfo(const boost::json::object &_obj)
    {
        using namespace boost::json;

        Shader::DepthInfo info;

        // parse zWrite
        info.ZWrite = !_obj.contains("zWrite") || _obj.at("zWrite").as_bool();

        // parse z func
        if (_obj.contains("zTest"))
            info.ZTest = ParseDepthFunc(value_to<std::string>(_obj.at("zTest")));

        return info;
    }

    Shader::PassInfo ParsePassInfo(const boost::json::object &_obj)
    {
        using namespace boost::json;

        Shader::PassInfo info;

        // parse tags
        if (_obj.contains("tags"))
            info.Tags = value_to<std::unordered_map<std::string, std::string>>(_obj.at("tags"));

        // parse depth info
        info.DepthInfo = ParseDepthInfo(_obj);

        // parse blend
        info.BlendInfo = ParseBlendInfo(_obj);

        // parse culling mode
        info.CullInfo = ParseCullInfo(_obj);

        return info;
    }

    ShaderPassInfo tag_invoke(const boost::json::value_to_tag<ShaderPassInfo> &, boost::json::value const &_value)
    {
        using namespace boost::json;

        auto &obj = _value.as_object();

        ShaderPassInfo info {ParsePassInfo(obj)};

        // parse paths to shader code
        for (int i = 0; i < SHADER_PART_COUNT; ++i)
        {
            if (obj.contains(SHADER_PART_NAMES[i]))
                info.ShaderPartPaths[i] = value_to<std::string>(obj.at(SHADER_PART_NAMES[i]));
        }

        return info;
    }

    ShaderInfo tag_invoke(const boost::json::value_to_tag<ShaderInfo> &, boost::json::value const &_value)
    {
        using namespace boost::json;

        auto &obj = _value.as_object();

        ShaderInfo info {value_to<std::vector<ShaderPassInfo>>(obj.at("passes"))};

        // parse default values
        if (obj.contains("default"))
            info.DefaultValues = value_to<std::unordered_map<std::string, std::string>>(obj.at("default"));

        return info;
    }

    GLuint CompileShaderPart(GLuint _shaderPartType, const std::string &_source, const std::string &_keywordDirectives, const std::string &_shaderPartDirective)
    {
        const auto   &globalDirectives = Graphics::GetGlobalShaderDirectives();
        constexpr int sourcesCount     = 4;
        const char   *sources[sourcesCount] {
                globalDirectives.c_str(),
                _keywordDirectives.c_str(),
                _shaderPartDirective.c_str(),
                _source.c_str()};

        auto shaderPart = CHECK_GL(glCreateShader(_shaderPartType));
        CHECK_GL(glShaderSource(shaderPart, sourcesCount, sources, nullptr));

        CHECK_GL(glCompileShader(shaderPart));

        GLint status;
        CHECK_GL(glGetShaderiv(shaderPart, GL_COMPILE_STATUS, &status));
        if (status == GL_FALSE)
        {
            GLint infoLogLength;
            CHECK_GL(glGetShaderiv(shaderPart, GL_INFO_LOG_LENGTH, &infoLogLength));

            std::string logMsg(infoLogLength + 1, ' ');
            CHECK_GL(glGetShaderInfoLog(shaderPart, infoLogLength, nullptr, &logMsg[0]));

            throw std::runtime_error("Compilation failed with error: " + logMsg);
        }

        return shaderPart;
    }

    GLuint LinkProgram(const std::span<GLuint> &_shaderParts)
    {
        auto program = CHECK_GL(glCreateProgram());

        for (const auto &part: _shaderParts)
        {
            bool isShader = CHECK_GL(glIsShader(part));
            if (isShader)
                CHECK_GL(glAttachShader(program, part));
        }

        CHECK_GL(glLinkProgram(program));

        for (const auto &part: _shaderParts)
        {
            bool isShader = CHECK_GL(glIsShader(part));
            if (isShader)
            {
                CHECK_GL(glDetachShader(program, part));
                CHECK_GL(glDeleteShader(part));
            }
        }

        GLint status;
        CHECK_GL(glGetProgramiv(program, GL_LINK_STATUS, &status));
        if (status == GL_FALSE)
        {
            GLint infoLogLength;
            CHECK_GL(glGetProgramiv(program, GL_INFO_LOG_LENGTH, &infoLogLength));

            std::string logMsg(infoLogLength + 1, ' ');
            CHECK_GL(glGetProgramInfoLog(program, infoLogLength, nullptr, &logMsg[0]));

            throw std::runtime_error("Link failed with error: " + logMsg);
        }

        return program;
    }

    ShaderInfo ParseShaderInfo(const std::string &_shaderSource)
    {
        auto value = boost::json::parse(_shaderSource);
        return boost::json::value_to<ShaderInfo>(value);
    }

    std::shared_ptr<Shader> Load(const std::filesystem::path &_path, const std::initializer_list<std::string> &_keywords)
    {
        auto        shaderSource      = Utils::ReadFileWithIncludes(_path);
        bool        supportInstancing = false;
        std::string keywordsDirectives;
        for (const auto &keyword: _keywords)
        {
            keywordsDirectives += "#define " + keyword + "\n";
            supportInstancing |= keyword == INSTANCING_KEYWORD;
        }

        try
        {
            ShaderInfo shaderInfo = ParseShaderInfo(shaderSource);

            std::vector<Shader::PassInfo> passes;
            for (auto &passInfo: shaderInfo.Passes)
            {
                GLuint shaderParts[SHADER_PART_COUNT];
                size_t shaderPartCount = 0;

                for (int i = 0; i < SHADER_PART_COUNT; ++i)
                {
                    auto  part         = SHADER_PARTS[i];
                    auto &relativePath = passInfo.ShaderPartPaths[i];
                    if (relativePath.empty())
                        continue;

                    auto partPath                  = _path.parent_path() / relativePath;
                    auto partSource                = Utils::ReadFileWithIncludes(partPath);
                    shaderParts[shaderPartCount++] = CompileShaderPart(part, partSource, keywordsDirectives, SHADER_PART_DIRECTIVES[i]);
                }

                passInfo.Pass.Program = LinkProgram(std::span<GLuint> {shaderParts, shaderPartCount});

                passes.push_back(passInfo.Pass);
            }

            return std::shared_ptr<Shader>(new Shader(passes, shaderInfo.DefaultValues, supportInstancing));
        }
        catch (const std::exception &_exception)
        {
            Debug::LogErrorFormat("[ShaderLoader] Can't load shader %1%\n%2%", {_path.string(), _exception.what()});
            return nullptr;
        }
    }

#pragma endregion

} // namespace ShaderLoader