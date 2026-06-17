#pragma once

namespace Soda {

struct Vec2i {
    int x;
    int y;

    Vec2i operator+(const Vec2i& oth) const;
    Vec2i operator-(const Vec2i& oth) const;
};

int Cross(const Vec2i& u, const Vec2i& v);

struct Vec2f {
    float x;
    float y;

    Vec2f& operator+=(const Vec2f& oth);
    Vec2f& operator-=(const Vec2f& oth);
    Vec2f& operator*=(float s);
    Vec2f& operator/=(float s);

    Vec2f operator-() const;
};

Vec2f operator+(Vec2f l, const Vec2f& r);
Vec2f operator-(Vec2f l, const Vec2f& r);
Vec2f operator*(float l, Vec2f r);
Vec2f operator*(Vec2f l, float r);
Vec2f operator/(Vec2f l, float r);

float Dot(const Vec2f& u, const Vec2f& v);
float Cross(const Vec2f& u, const Vec2f& v);


}