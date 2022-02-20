#include "shadow_caster_pass.h"
#include "bounds/bounds.h"
#include "core_debug/debug.h"
#include "light/light.h"
#include "renderer/renderer.h"
#include "shader/shader.h"
#include "texture_2d/texture_2d.h"
#include "texture_2d_array/texture_2d_array.h"
#include "../context.h"
#include "../graphics.h"
#include "../uniform_block.h"
#include <utility>

ShadowCasterPass::ShadowCasterPass(int _spotLightsCount, std::shared_ptr<UniformBlock> _shadowsUniformBlock) :
    m_ShadowsUniformBlock(std::move(_shadowsUniformBlock)),
    m_SpotLightShadowMapArray(Texture2DArray::ShadowMapArray(SHADOW_MAP_SIZE, _spotLightsCount)),
    m_DirectionLightShadowMap(Texture2D::CreateShadowMap(SHADOW_MAP_SIZE, SHADOW_MAP_SIZE))
{
    Shader::SetGlobalTexture("_DirLightShadowMap", m_DirectionLightShadowMap);
    Shader::SetGlobalTexture("_SpotLightShadowMapArray", m_SpotLightShadowMapArray);

    glGenFramebuffers(1, &m_Framebuffer);
}

ShadowCasterPass::~ShadowCasterPass()
{
    glDeleteFramebuffers(1, &m_Framebuffer);
}

void ShadowCasterPass::Execute(const Context &_ctx)
{
    static std::shared_ptr<Shader> shadowCasterShader = Shader::Load("resources/shaders/shadowCaster/shadowCaster.shader", {});
    static const Matrix4x4         biasMatrix         = Matrix4x4::TRS(Vector3 {0.5f, 0.5f, 0.5f}, Quaternion(), Vector3 {0.5f, 0.5f, 0.5f});

    if (shadowCasterShader == nullptr || _ctx.Renderers.size() == 0)
        return;

    Debug::PushDebugGroup("Shadow pass");

    glBindFramebuffer(GL_DRAW_FRAMEBUFFER, m_Framebuffer);
    glViewport(0, 0, SHADOW_MAP_SIZE, SHADOW_MAP_SIZE);

    // TODO use shader passes instead of replacement shaders
    Shader::SetReplacementShader(shadowCasterShader.get(), "Shadows");

    int spotLightsCount = 0;
    for (const auto *light: _ctx.Lights)
    {
        if (light == nullptr)
            continue;

        if (light->Type == LightType::SPOT)
        {
            m_SpotLightShadowMapArray->Attach(GL_DEPTH_ATTACHMENT, spotLightsCount);

            auto view    = Matrix4x4::Rotation(light->Rotation.Inverse()) * Matrix4x4::Translation(-light->Position);
            auto proj    = Matrix4x4::Perspective(light->CutOffAngle * 2, 1, 0.5f, _ctx.ShadowDistance);
            auto lightVP = biasMatrix * proj * view;

            Graphics::SetCameraData(view, proj);

            auto index = std::to_string(spotLightsCount);
            m_ShadowsUniformBlock->SetUniform("_SpotLightShadows[" + index + "].LightViewProjMatrix", &lightVP, sizeof(Matrix4x4));

            ++spotLightsCount;
        }
        else if (light->Type == LightType::DIRECTIONAL)
        {
            m_DirectionLightShadowMap->Attach(GL_DEPTH_ATTACHMENT);

            auto bounds = _ctx.Renderers[0]->GetAABB();
            for (const auto &renderer: _ctx.Renderers)
                bounds = bounds.Combine(renderer->GetAABB());

            auto extentsWorldSpace   = bounds.GetExtents();
            auto maxExtentWorldSpace = std::max({extentsWorldSpace.x, extentsWorldSpace.y, extentsWorldSpace.z});
            auto lightDir            = light->Rotation * Vector3 {0, 0, 1};
            auto viewPos             = bounds.GetCenter() - lightDir * maxExtentWorldSpace;
            auto viewMatrix          = Matrix4x4::Rotation(light->Rotation.Inverse()) * Matrix4x4::Translation(-viewPos);

            auto boundsViewSpace    = viewMatrix * bounds;
            auto extentsViewSpace   = boundsViewSpace.GetExtents();
            auto maxExtentViewSpace = std::max(extentsViewSpace.x, extentsViewSpace.y);
            auto projMatrix         = Matrix4x4::Orthographic(-maxExtentViewSpace, maxExtentViewSpace, -maxExtentViewSpace, maxExtentViewSpace, 0, _ctx.ShadowDistance);

            Graphics::SetCameraData(viewMatrix, projMatrix);

            auto lightVP = biasMatrix * projMatrix * viewMatrix;
            m_ShadowsUniformBlock->SetUniform("_DirLightShadow.LightViewProjMatrix", &lightVP, sizeof(Matrix4x4));
        }
        else
            continue;

        Render(_ctx.Renderers);
    }

    glBindFramebuffer(GL_FRAMEBUFFER, 0);
    glBindTexture(GL_TEXTURE_2D_ARRAY, 0);

    Shader::DetachReplacementShader();

    Debug::PopDebugGroup();
}

void ShadowCasterPass::Render(const std::vector<Renderer *> &_renderers)
{
    Debug::PushDebugGroup("Render shadow map");

    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);

    for (const auto *r: _renderers)
    {
        if (r != nullptr)
            r->Render();
    }

    Debug::PopDebugGroup();
}
