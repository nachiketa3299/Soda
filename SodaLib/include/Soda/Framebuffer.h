#pragma once

#include "Soda/Color.h"
#include "Soda/Buffer.h"

#include <vector>
#include <cstdint>
#include <utility>

namespace Soda {

class Framebuffer {
public:
    explicit Framebuffer(int width, int height);

public:
    void ClearColor(const Color4f& color = Color4f::Black) { color_.Clear(ToRgba8(color)); }
    void ClearDepth(float depth = 1.f) { depth_.Clear(depth); }

    const Buffer2D<Rgba8>& Color() const { return color_; }
    Buffer2D<Rgba8>& Color() { return color_; }

    const Buffer2D<float>& Depth() const { return depth_; }
    Buffer2D<float>& Depth() { return depth_; }

    int Width() const { return color_.Width(); }
    int Height() const { return color_.Height(); }
    std::size_t Size() const { return color_.Size(); }

private: 
    Buffer2D<float> depth_;
    Buffer2D<Rgba8> color_;
};

};
