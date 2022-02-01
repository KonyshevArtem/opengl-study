#ifndef OPENGL_STUDY_MESH_H
#define OPENGL_STUDY_MESH_H

#ifdef OPENGL_STUDY_WINDOWS
#include <GL/glew.h>
#elif OPENGL_STUDY_MACOS
#include <OpenGL/gl3.h>
#endif
#include <vector>

struct Vector2;
struct Vector3;

class Mesh
{
public:
    Mesh(std::vector<Vector3> &_vertices,
         std::vector<Vector3> &_normals,
         std::vector<int> &    _indexes,
         std::vector<Vector2> &_uvs,
         std::vector<Vector3> &_tangents);

    void Init();
    void Draw() const;

    ~Mesh();

private:
    Mesh(const Mesh &) = delete;
    Mesh(Mesh &&)      = delete;

    Mesh &operator=(const Mesh &) = delete;
    Mesh &operator=(Mesh &&)      = delete;

    GLuint m_VertexArrayObject = 0;
    GLuint m_VertexBuffer      = 0;
    GLuint m_IndexBuffer       = 0;

    std::vector<Vector3> m_Vertices;
    std::vector<Vector3> m_Normals;
    std::vector<Vector3> m_Tangents;
    std::vector<int>     m_Indexes;
    std::vector<Vector2> m_UVs;
};


#endif //OPENGL_STUDY_MESH_H