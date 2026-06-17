#include "Soda/Vec.h"

#include <cassert>

namespace Soda {

int Cross(const Vec2i& u, const Vec2i& v) {
    return u.x * v.y - u.y * v.x;
}

Vec2i Vec2i::operator+(const Vec2i& oth) const {
    return Vec2i { x + oth.x, y + oth.y };
}

Vec2i Vec2i::operator-(const Vec2i& oth) const {
    return Vec2i { x - oth.x, y - oth.y };
}

Vec2f Vec2f::operator-() const {
    return Vec2f { -x, -y };
}

Vec2f& Vec2f::operator+=(const Vec2f& oth) {
    x += oth.x;
    y += oth.y;

    return *this;
}

Vec2f& Vec2f::operator-=(const Vec2f& oth) {
    x -= oth.x;
    y -= oth.y;

    return *this;
}

Vec2f& Vec2f::operator*=(float oth) {
    x *= oth;
    y *= oth;

    return *this;
}

Vec2f& Vec2f::operator/=(float oth) {
    assert(oth != 0.f);

    x /= oth;
    y /= oth;

    return *this;
}

Vec2f operator+(Vec2f l, const Vec2f &r) {
    return l += r;
}

Vec2f operator-(Vec2f l, const Vec2f &r) {
    return l -= r;
}

Vec2f operator*(float l, Vec2f r) {
    return r *= l;
}

Vec2f operator*(Vec2f l, float r) {
    return l *= r;
}

Vec2f operator/(Vec2f l, float r) {
    return l /= r;
}

float Dot(const Vec2f &u, const Vec2f &v) {
    return u.x * v.x + u.y * v.y;
}

float Cross(const Vec2f &u, const Vec2f &v) {
    return u.x * v.y - u.y * v.x;
}

}