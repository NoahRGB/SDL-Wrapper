#include "shape.h"

Graphics::Shape::Shape() {
  pos = Vec2(0.0f, 0.0f);
  colour = Colour::White;
}

Graphics::Shape::Shape(Vec2 pos, Colour::Colour col) {
  this->pos = pos;
  colour = col;
}