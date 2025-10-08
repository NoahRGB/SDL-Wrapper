#pragma once

#include "shape.h"

namespace Graphics {

  class Circle : public Shape {
  public:
    Circle();
    Circle(Vec2 pos, int radius, Colour::Colour colour);

    void draw(SDL_Renderer* renderer) override;

  private:
    int radius;

  };

}

