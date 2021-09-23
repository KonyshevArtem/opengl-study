#ifndef OPENGL_STUDY_UTILS_H
#define OPENGL_STUDY_UTILS_H

#pragma clang diagnostic push
#pragma ide diagnostic   ignored "OCUnusedMacroInspection"
#define CHECK_GL_ERROR printf("%s\n", gluErrorString(glGetError()));
#pragma clang diagnostic pop

#include "filesystem"
#include "string"

using namespace std;

class Utils
{
public:
    static string ReadFile(const filesystem::path &_relativePath);
    static string ReadFileWithIncludes(const filesystem::path &_relativePath);
    static filesystem::path GetExecutableDirectory();

private:
    static inline filesystem::path m_ExecutableDir;
};

#endif //OPENGL_STUDY_UTILS_H