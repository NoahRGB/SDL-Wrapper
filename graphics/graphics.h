#pragma once

#include "graphics-application.h"
#include "colour.h"
#include "vec2.h"
namespace Graphics {

  void background(SDL_Renderer* renderer, Colour::Colour colour);
  void point(SDL_Renderer* renderer, Vec2 pos, Colour::Colour colour);
  void drawLine(SDL_Renderer* renderer, Vec2 p1, Vec2 p2, Colour::Colour colour);

}