#pragma once

#include "vec2.h"
#include "colour.h"
#include "SDL3/SDL.h"

namespace Graphics {

  void drawCircle(SDL_Renderer* renderer, Vec2 pos, int radius, Colour::Colour colour);
}

