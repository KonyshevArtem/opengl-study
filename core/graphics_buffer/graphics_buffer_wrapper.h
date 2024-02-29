#ifndef OPENGL_STUDY_GRAPHICS_BUFFER_WRAPPER_H
#define OPENGL_STUDY_GRAPHICS_BUFFER_WRAPPER_H

#include <memory>
#include <string>
#include <vector>

class Shader;
class GraphicsBuffer;
class BufferInfo;

class GraphicsBufferWrapper
{
public:
    GraphicsBufferWrapper(const std::shared_ptr<Shader> &shader, const std::string &bufferName);
    ~GraphicsBufferWrapper() = default;

    void TrySetVariable(const std::string &variableName, const void *data, uint64_t size);

    inline const std::shared_ptr<GraphicsBuffer> &GetBuffer(int shaderPass) const
    {
        return m_PassBuffers[shaderPass];
    }

    GraphicsBufferWrapper(const GraphicsBufferWrapper &) = delete;
    GraphicsBufferWrapper(GraphicsBufferWrapper &&) = delete;

    GraphicsBufferWrapper &operator()(const GraphicsBufferWrapper &) = delete;
    GraphicsBufferWrapper &operator()(GraphicsBufferWrapper &&) = delete;

private:
    std::vector<std::shared_ptr<GraphicsBuffer>> m_PassBuffers;
    std::vector<std::shared_ptr<BufferInfo>> m_PassBuffersInfo;
};

#endif //OPENGL_STUDY_GRAPHICS_BUFFER_WRAPPER_H