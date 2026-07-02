#pragma once

#include "Soda/Vec.h"
#include "Soda/Mat.h"

namespace Soda {

struct Camera {
    Vec3f eye, target, up;
    Mat4f View() const { return Mat4f::LookAt(eye, target, up); }
};

}