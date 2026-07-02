#pragma once

#include "Soda/Vec.h"
#include "Soda/Mat.h"

namespace Soda {

struct Transform {

    Vec3f position;
    Vec3f eulerRotation;
    Vec3f scale;

    Mat4f ToWorldMatrix() const;
};

}