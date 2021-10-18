#pragma clang diagnostic push
#pragma ide diagnostic   ignored "OCUnusedMacroInspection"
#define GL_SILENCE_DEPRECATION
#pragma clang diagnostic pop

#include "skybox_pass.h"
#include "../../../math/matrix4x4/matrix4x4.h"
#include "../../../math/quaternion/quaternion.h"
#include "../../../math/vector3/vector3.h"
#include "../../cubemap/cubemap.h"
#include "../../fbx_asset/fbx_asset.h"
#include "../../mesh/mesh.h"
#include "../../shader/shader.h"
#include "../context.h"
#include "../graphics.h"

SkyboxPass::SkyboxPass()
{
    m_Shader = Shader::Load("resources/shaders/skybox.glsl", vector<string>());
    m_Mesh   = FBXAsset::Load("resources/models/cube.fbx")->Meshes[0];
}

void SkyboxPass::Execute(const shared_ptr<Context> &_ctx)
{
    if (m_Mesh == nullptr || m_Shader == nullptr || _ctx->Skybox == nullptr)
        return;

    glCullFace(GL_FRONT);
    glViewport(0, 0, Graphics::ScreenWidth, Graphics::ScreenHeight);

    Graphics::SetCameraData(_ctx->ViewMatrix, _ctx->ProjectionMatrix);

    m_Shader->Use();

    Matrix4x4 modelMatrix = Matrix4x4::Translation(_ctx->ViewMatrix.Invert().GetPosition());
    m_Shader->SetUniform("_ModelMatrix", &modelMatrix);

    int unit = 0;
    _ctx->Skybox->Bind(unit);
    m_Shader->SetUniform("_Skybox", &unit);

    m_Mesh->Draw();

    glUseProgram(0);
    glBindTexture(GL_TEXTURE_CUBE_MAP, 0);
    glCullFace(GL_BACK);
}