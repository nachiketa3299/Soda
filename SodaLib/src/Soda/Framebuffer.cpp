#include "Soda/MathUtils.h"
#include "Soda/Framebuffer.h"
#include "Soda/Rasterizer.h"
#include "Soda/Color.h"

#include <cassert>
#include <algorithm>

namespace Soda {

Framebuffer::Framebuffer(int width, int height) 
    : depth_(width, height)
    , color_(width, height)
{ }

}

