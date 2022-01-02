#include "renderer.h"
#include "../gameObject/gameObject.h"

Renderer::Renderer(const shared_ptr<GameObject> &_gameObject) :
    m_GameObject(_gameObject)
{
}

bool Renderer::Comparer::operator()(Renderer *_r1, Renderer *_r2)
{
    if (_r1 == nullptr || _r1->m_GameObject.expired())
        return false;
    if (_r2 == nullptr || _r2->m_GameObject.expired())
        return true;

    int renderQueue1 = _r1->GetRenderQueue();
    int renderQueue2 = _r2->GetRenderQueue();
    if (renderQueue1 != renderQueue2)
        return renderQueue1 < renderQueue2;

    float distance1 = (_r1->m_GameObject.lock()->LocalPosition - CameraPosition).Length();
    float distance2 = (_r2->m_GameObject.lock()->LocalPosition - CameraPosition).Length();
    return Sorting == Sorting::FRONT_TO_BACK ? distance1 < distance2 : distance1 > distance2;
}

Renderer::Filter Renderer::Filter::Opaque()
{
    return Renderer::Filter {[](Renderer *_r)
                             { return _r != nullptr && _r->GetRenderQueue() < TRANSPARENT_RENDER_QUEUE; }};
}

Renderer::Filter Renderer::Filter::Transparent()
{
    return Renderer::Filter {[](Renderer *_r)
                             { return _r != nullptr && _r->GetRenderQueue() >= TRANSPARENT_RENDER_QUEUE; }};
}

bool Renderer::Filter::operator()(Renderer *_renderer)
{
    return Filter != nullptr ? Filter(_renderer) : false;
}