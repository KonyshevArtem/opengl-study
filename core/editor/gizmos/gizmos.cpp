#if OPENGL_STUDY_EDITOR

#include "gizmos.h"
#include "core_debug/debug.h"
#include "vector3/vector3.h"

std::shared_ptr<Gizmos::GizmosPrimitive> m_WireCubePrimitive;
std::vector<Gizmos::GizmosDrawInfo>      m_DrawInfos;

Gizmos::GizmosPrimitive::GizmosPrimitive(GLuint _vertexArrayObject, GLuint _pointsBuffer, GLuint _indexBuffer, int _indexCount) :
    m_VertexArrayObject(_vertexArrayObject), m_PointsBuffer(_pointsBuffer), m_IndexBuffer(_indexBuffer), m_IndexCount(_indexCount)
{
}

Gizmos::GizmosPrimitive::~GizmosPrimitive()
{
    CHECK_GL(glDeleteVertexArrays(1, &m_VertexArrayObject));
    CHECK_GL(glDeleteBuffers(1, &m_PointsBuffer));
    CHECK_GL(glDeleteBuffers(1, &m_IndexBuffer));
}

void Gizmos::GizmosPrimitive::Draw() const
{
    CHECK_GL(glBindVertexArray(m_VertexArrayObject));
    CHECK_GL(glDrawElements(GL_LINES, m_IndexCount, GL_UNSIGNED_INT, nullptr));
    CHECK_GL(glBindVertexArray(0));
}

void Gizmos::DrawWireCube(const Matrix4x4 &_matrix)
{
    m_DrawInfos.push_back(Gizmos::GizmosDrawInfo {m_WireCubePrimitive, _matrix});
}

void Gizmos::Init()
{
    constexpr int PRIMITIVES_COUNT = 1;
    GLuint        vertexArrayObjects[PRIMITIVES_COUNT] {0};
    GLuint        pointsBuffers[PRIMITIVES_COUNT] {0};
    GLuint        indexBuffers[PRIMITIVES_COUNT] {0};

    CHECK_GL(glGenVertexArrays(PRIMITIVES_COUNT, &vertexArrayObjects[0]));
    CHECK_GL(glGenBuffers(PRIMITIVES_COUNT, &pointsBuffers[0]));
    CHECK_GL(glGenBuffers(PRIMITIVES_COUNT, &indexBuffers[0]));

    // wire cube
    {
        constexpr int INDEX = 0;
        CHECK_GL(glBindVertexArray(vertexArrayObjects[INDEX]));
        CHECK_GL(glBindBuffer(GL_ARRAY_BUFFER, pointsBuffers[INDEX]));
        CHECK_GL(glBindBuffer(GL_ELEMENT_ARRAY_BUFFER, indexBuffers[INDEX]));

        CHECK_GL(glEnableVertexAttribArray(0));
        CHECK_GL(glVertexAttribPointer(0, 3, GL_FLOAT, GL_FALSE, 0, nullptr));

        constexpr int WIRE_CUBE_POINTS_COUNT = 8;
        constexpr int WIRE_CUBE_INDEX_COUNT  = 24;

        Vector3 wireCubePoints[WIRE_CUBE_POINTS_COUNT] {
                {-1, -1, -1},
                {-1, -1, 1},
                {-1, 1, -1},
                {-1, 1, 1},
                {1, -1, -1},
                {1, -1, 1},
                {1, 1, -1},
                {1, 1, 1}};
        int wireCubeIndexes[WIRE_CUBE_INDEX_COUNT] {0, 1, 0, 2, 1, 3, 2, 3, 4, 5, 4, 6, 5, 7, 6, 7, 0, 4, 1, 5, 2, 6, 3, 7};

        CHECK_GL(glBufferData(GL_ARRAY_BUFFER, sizeof(Vector3) * WIRE_CUBE_POINTS_COUNT, &wireCubePoints[0], GL_STATIC_READ));
        CHECK_GL(glBufferData(GL_ELEMENT_ARRAY_BUFFER, sizeof(int) * WIRE_CUBE_INDEX_COUNT, &wireCubeIndexes[0], GL_STATIC_READ));

        m_WireCubePrimitive = std::make_shared<GizmosPrimitive>(vertexArrayObjects[INDEX], pointsBuffers[INDEX], indexBuffers[INDEX], WIRE_CUBE_INDEX_COUNT);
    }
}

std::vector<Gizmos::GizmosDrawInfo> Gizmos::GetDrawInfos()
{
    return m_DrawInfos;
}

void Gizmos::ClearDrawInfos()
{
    m_DrawInfos.clear();
}

#endif
