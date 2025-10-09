#include "circle.h"

#include "colour.h"
#include "SDL3/SDL.h"

namespace Graphics {

  void drawCircle(SDL_Renderer* renderer, Vec2 pos, int radius, Colour::Colour colour) {
    SDL_SetRenderDrawColor(renderer, colour.r, colour.g, colour.b, colour.a);
    for (int i = (pos.x - radius); i < (pos.x + radius); i++) {
      for (int j = (pos.y - radius); j < (pos.y + radius); j++) {
        float d = dist(Vec2(i, j), pos);
        if (d <= radius) {
          SDL_RenderPoint(renderer, i, j);
        }
      }
    }
  }

} 