#ifndef OPENGL_STUDY_LIGHTING_DATA_H
#define OPENGL_STUDY_LIGHTING_DATA_H

#include "global_constants.h"
#include "vector3/vector3.h"
#include "vector4/vector4.h"

#include <cstdint>

// Keep this in-sync with shaders/common/lighting.cg
struct LightingData
{
    struct PointLightData
    {
        Vector4 Position{};
        Vector3 Intensity{};
        float Attenuation = 0;
    };

    struct SpotLightData
    {
        Vector4 Position{};
        Vector3 Direction{};
        float Attenuation = 0;
        Vector3 Intensity{};
        float CutOffCosine = 0;
    };

    Vector3 AmbientLight{};
    uint32_t PointLightsCount = 0;

    Vector3 DirLightDirection{};
    float HasDirectionalLight = 0;
    Vector3 DirLightIntensity{};

    uint32_t SpotLightsCount = 0;

    PointLightData PointLightsData[GlobalConstants::MaxPointLightSources]{};
    SpotLightData SpotLightsData[GlobalConstants::MaxSpotLightSources]{};
};

#endif //OPENGL_STUDY_LIGHTING_DATA_H
