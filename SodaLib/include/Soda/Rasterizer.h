#pragma once

#include "Soda/Framebuffer.h"
#include "Soda/Vec.h"
#include "Soda/Line.h"
#include "Soda/Color.h"
#include "Soda/Triangle.h"
#include "Soda/Mesh.h"
#include "Soda/Mat.h"
#include "Soda/Vertex.h"

namespace Soda {


class Rasterizer {
public:
    void DrawMesh(Framebuffer&, const Mesh&, const Mat4f&);

private:
    ClipVertex ProcessVertex(const MeshVertex&, const Mat4f&);
    ScreenVertex ToScreen(const ClipVertex&, int w, int h) const;
    void RasterTriangle(Framebuffer&, const ScreenVertex&, const ScreenVertex&, const ScreenVertex&) {};
    void WriteFragment(Framebuffer&, const Fragment&) {};
};

}

// struct LegacyRasterizer {

// static void PutPixel(FramebufferLegacy& fb, const Vec2i& p, const Rgb8& c);

// static void Clear(FramebufferLegacy& fb, const Rgb8& c);

// static void DrawLine(FramebufferLegacy& fb, const Vertex2i& v1, const Vertex2i& v2, DrawLineMode m);
// static void DrawLine(FramebufferLegacy& fb, const Line2i& l, DrawLineMode m);

// static void DrawTriangle(FramebufferLegacy& fb, const Triangle2i t);

// };
// enum class DrawLineMode {
//     Naive,
//     Bresenham
// };