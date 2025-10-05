#include "vec2.h"

#include "math.h"

Graphics::Vec2::Vec2() {
  x = 0.0f;
  y = 0.0f;
}

Graphics::Vec2::Vec2(float x, float y) {
  this->x = x;
  this->y = y;
}

float Graphics::Vec2::length() const {
  return sqrt(x * x + y * y);
}

Graphics::Vec2 Graphics::Vec2::normalised() const {
  float len = length();
  if (len == 0.0f) return Vec2(0.0f, 0.0f);
  return Vec2(x / len, y / len);
}

float Graphics::dot(const Graphics::Vec2& a, const Graphics::Vec2& b) {
  return 0.0f;
}
 
Graphics::Vec2 Graphics::cross(const Graphics::Vec2& v1, const Graphics::Vec2& v2) {
  return Vec2(1.0f, 1.0f);
}

float Graphics::dist(const Graphics::Vec2& v1, const Graphics::Vec2& v2) {
  float xDiff = v1.x - v2.x;
  float yDiff = v1.y - v2.y;
  return sqrt(xDiff * xDiff + yDiff * yDiff);
}