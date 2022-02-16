#include "mesh_renderer.h"
#include "matrix4x4/matrix4x4.h"
#include "material/material.h"
#include "mesh/mesh.h"
#include "shader/shader.h"

MeshRenderer::MeshRenderer(const std::shared_ptr<GameObject> &_gameObject,
                           std::shared_ptr<Mesh>              _mesh,
                           std::shared_ptr<Material>          _material) :
    Renderer(_gameObject),
    m_Mesh(std::move(_mesh)),
    m_Material(std::move(_material))
{
}

void MeshRenderer::Render() const
{
    const auto &shader = m_Material->GetShader();
    if (shader == nullptr || !shader->Use())
        return;

    Matrix4x4 modelMatrix       = GetModelMatrix();
    Matrix4x4 modelNormalMatrix = modelMatrix.Invert().Transpose();

    Shader::SetUniform("_ModelMatrix", &modelMatrix);
    Shader::SetUniform("_ModelNormalMatrix", &modelNormalMatrix);

    m_Material->TransferUniforms();
    m_Mesh->Draw();

    Shader::DetachCurrentShader();
}

Bounds MeshRenderer::GetAABB() const
{
    return m_Mesh ? GetModelMatrix() * m_Mesh->GetBounds() : Bounds();
}

int MeshRenderer::GetRenderQueue() const
{
    return m_Material ? m_Material->GetRenderQueue() : 2000;
}