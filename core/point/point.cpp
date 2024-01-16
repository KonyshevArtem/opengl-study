#include "point.h"

Point::Point() :
    DrawableGeometry()
{
    GraphicsBackend::EnableVertexAttributeArray(0);
    GraphicsBackend::SetVertexAttributePointer(0, 3, VertexAttributeDataType::FLOAT, false, 0, nullptr);

    float zero[3] {0, 0, 0};
    GraphicsBackend::SetBufferData(BufferBindTarget::ARRAY_BUFFER, sizeof(zero), &zero, BufferUsageHint::STATIC_DRAW);

    GraphicsBackend::BindVertexArrayObject(0);
}