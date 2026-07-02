#pragma once

#include "Vec.h"
#include "Color.h"

#include <vector>
#include <algorithm>
#include <utility>
#include <cassert>
#include <cstddef>

namespace Soda
{

template <typename T>
class Buffer2D {
public:
    Buffer2D(int width, int height) 
        : width_ {width}, height_ {height}
        , size_(BufferSize(width_, height))
        , v_(size_)
    { }

    void Clear(const T& t) { std::fill(v_.begin(), v_.end(), t); }
    T& At(Vec2i p) { return const_cast<T&>(std::as_const(*this).At(p)); }
    const T& At(Vec2i p) const { return v_[Index(p.x, p.y)]; }

    int Height() const { return height_; }
    int Width() const { return width_; }
    std::size_t Size() const { return size_; }

    const T* Data() const { return v_.data(); }

private:
    static std::size_t BufferSize(int width, int height) {
        assert(0 < width);
        assert(0 < height);

        return static_cast<std::size_t>(width) * static_cast<std::size_t>(height);
    }

    std::size_t Index(int x, int y) const {
        assert(0 <= x && x < width_ && 0 <= y && y < height_);
        return static_cast<std::size_t>(x + width_ * y);
    }

private:
    int width_, height_;
    std::size_t size_;
    std::vector<T> v_;
};

}