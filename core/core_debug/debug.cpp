#include "debug.h"
#include <boost/format.hpp>
#include <iostream>
#ifdef OPENGL_STUDY_WINDOWS
#include <GL/glew.h>
#include <windows.h>
#elif OPENGL_STUDY_MACOS
#include <OpenGL/gl3.h>
#include <OpenGL/glu.h>
#endif

static int debugGroupID = 0;

Debug::DebugGroup::DebugGroup(const std::string &_name)
{
#ifdef OPENGL_STUDY_WINDOWS
    glPushDebugGroup(GL_DEBUG_SOURCE_APPLICATION, debugGroupID++, -1, _name.c_str());
#endif
}

Debug::DebugGroup::~DebugGroup()
{
#ifdef OPENGL_STUDY_WINDOWS
    glPopDebugGroup();
    --debugGroupID;

    if (debugGroupID < 0)
    {
        LogError("Popping more debug groups than pushing");
        debugGroupID = 0;
    }
#endif
}

void Debug::Init()
{
#if defined(OPENGL_STUDY_WINDOWS) && defined(_DEBUG)
    AllocConsole();
    SetConsoleCP(CP_UTF8);
    SetConsoleOutputCP(CP_UTF8);
    auto *cout = freopen("CONOUT$", "w", stdout);
    auto *cerr = freopen("CONOUT$", "w", stderr);
#endif
}

void Debug::LogError(const std::string &_string)
{
    std::cerr << "[ERROR] " << _string << std::endl;
}

void Debug::LogErrorFormat(const std::string &_format, std::initializer_list<std::string> _values)
{
    boost::format format(_format);
    for (const auto &v: _values)
        format = format % v;
    LogError(format.str());
}

void Debug::CheckOpenGLError()
{
    GLenum error = glGetError();
    if (error != 0)
    {
        auto *errorString = reinterpret_cast<const char *>(gluErrorString(error));
        if (errorString == nullptr)
            LogErrorFormat("[OpenGL] Unknown error %1%", {std::to_string(error)});
        else
            LogErrorFormat("[OpenGL] %1%", {errorString});
    }
}