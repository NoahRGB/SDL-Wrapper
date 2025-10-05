#include "circle.h"

#include "SDL3/SDL.h"

Graphics::Circle::Circle() : Shape() {
  pos = Vec2(0.0f, 0.0f);
  radius = 1.0f;
}

Graphics::Circle::Circle(Vec2 pos, int radius) : Shape(pos) {
  this->radius = radius;
}

void Graphics::Circle::draw(SDL_Renderer* renderer) {
  for (int i = (pos.x - radius); i < (pos.x + radius); i++) {
    for (int j = (pos.y - radius); j < (pos.y + radius); j++) {
      float d = dist(Vec2(i, j), pos);
      if (d <= radius) {
        SDL_RenderPoint(renderer, i, j);
      }
    }
  }

}