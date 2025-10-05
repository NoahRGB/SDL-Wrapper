#pragma once

#include "SDL3/SDL.h"

#include "vec2.h"

namespace Graphics {

  class Shape {
  public:
    Shape();
    Shape(Vec2 pos);

    virtual void draw(SDL_Renderer* renderer) = 0;

  protected:
    Vec2 pos;

  private:

  };

}

