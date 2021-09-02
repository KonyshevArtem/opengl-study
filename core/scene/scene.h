#ifndef OPENGL_STUDY_SCENE_H
#define OPENGL_STUDY_SCENE_H

#include "../gameObject/gameObject.h"
#include "../light/light.h"

class Scene
{
public:
    inline static shared_ptr<Scene> Current = nullptr;
    vector<shared_ptr<GameObject>>  GameObjects;
    vector<shared_ptr<Light>>       Lights;
    Vector4                         AmbientLight;

    static void Update();

private:
    virtual void UpdateInternal() = 0;
};

#endif //OPENGL_STUDY_SCENE_H
