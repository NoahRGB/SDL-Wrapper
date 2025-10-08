#include "circle.h"

#include "SDL3/SDL.h"

Graphics::Circle::Circle() : Shape() {
  pos = Vec2(0.0f, 0.0f);
  radius = 1.0f;
  colour = Colour::White;
}

Graphics::Circle::Circle(Vec2 pos, int radius, Colour::Colour colour) : Shape(pos, colour) {
  this->radius = radius;
}

void Graphics::Circle::draw(SDL_Renderer* renderer) {
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