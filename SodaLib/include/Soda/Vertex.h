#pragma once

#include "Soda/Vec.h"
#include "Soda/Color.h"

namespace Soda {

struct Vertex2i {
    Vec2i p;
    Rgb8 c;
};

struct Vertex2f {
    Vec2f p;
    Color4f c;
};

struct Vertex3f {
    Vec3f p;
    Color4f c;
};

struct MeshVertex {
    Vec3f pos;
    Color4f col;
};

struct ClipVertex {
    Vec4f pos;
    Color4f col;
};

struct ScreenVertex {
    Vec2f pos;
    float depth;
    Color4f col;
};

struct Fragment {
    Vec2i pos;
    float depth;
    Color4f col;
};

}