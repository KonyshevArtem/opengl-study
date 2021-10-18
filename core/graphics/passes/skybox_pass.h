#ifndef OPENGL_STUDY_SKYBOX_PASS_H
#define OPENGL_STUDY_SKYBOX_PASS_H

#include "memory"

class Context;
class Mesh;
class Shader;

using namespace std;

class SkyboxPass
{
public:
    SkyboxPass();

    void Execute(const shared_ptr<Context> &_ctx);

private:
    shared_ptr<Mesh>   m_Mesh;
    shared_ptr<Shader> m_Shader;
};

#endif //OPENGL_STUDY_SKYBOX_PASS_H