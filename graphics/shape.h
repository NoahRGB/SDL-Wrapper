#pragma once

#include "SDL3/SDL.h"

#include "vec2.h"
#include "colour.h"

namespace Graphics {

  class Shape {
  public:
    Shape();
    Shape(Vec2 pos, Colour::Colour col);
    virtual ~Shape() = default;

    virtual void draw(SDL_Renderer* renderer) = 0;

  protected:
    Vec2 pos;
    Colour::Colour colour;

  private:

  };

}

