#include "shape.h"

Graphics::Shape::Shape() {
  pos = Vec2(0.0f, 0.0f);
}

Graphics::Shape::Shape(Vec2 pos) {
  this->pos = pos;
}