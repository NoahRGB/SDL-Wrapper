#pragma once

namespace Graphics {

  class Vec2 {
  public:
    Vec2();
    Vec2(float x, float y);

    float length() const;
    Vec2 normalised() const;

    float x, y;

  private:

  };

  float dot(const Vec2& a, const Vec2& b);
  Vec2 cross(const Vec2& v1, const Vec2& v2);
  float dist(const Vec2& v1, const Vec2& v2);

}