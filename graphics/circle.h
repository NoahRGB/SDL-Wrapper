#pragma once

#include "shape.h"

namespace Graphics {

class Circle : public Shape {
public:
  Circle();
  Circle(Vec2 pos, int radius);

  void draw(SDL_Renderer* renderer) override;

private:
  int radius;

};

}

