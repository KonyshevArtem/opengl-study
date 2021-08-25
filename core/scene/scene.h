#ifndef OPENGL_STUDY_SCENE_H
#define OPENGL_STUDY_SCENE_H

#include "../gameObject/gameObject.h"

class Scene
{
public:
    inline static shared_ptr<Scene> Current = nullptr;
    vector<shared_ptr<GameObject>>  GameObjects;

    virtual void Update(float time, float deltaTime) = 0;
};

#endif //OPENGL_STUDY_SCENE_H
