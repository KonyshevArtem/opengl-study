#if RENDER_ENGINE_EDITOR

#ifndef RENDER_ENGINE_GIZMOS_PASS_H
#define RENDER_ENGINE_GIZMOS_PASS_H

#include <memory>

struct Context;
class Texture2D;

class GizmosPass
{
public:
    GizmosPass() = default;
    ~GizmosPass() = default;

    void Execute(Context &_context);

    GizmosPass(const GizmosPass &) = delete;
    GizmosPass(GizmosPass &&)      = delete;

    GizmosPass &operator=(const GizmosPass &) = delete;
    GizmosPass &operator=(GizmosPass &&) = delete;

private:
    void Outline() const;
    void Gizmos() const;
    void CheckTexture(std::shared_ptr<Texture2D> &_texture) const;
};

#endif
#endif