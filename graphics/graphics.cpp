#include "graphics.h"

#include "SDL3/SDL.h"

void Graphics::background(SDL_Renderer* renderer, Colour::Colour colour) {
  SDL_SetRenderDrawColor(renderer, colour.r, colour.g, colour.b, colour.a);
  SDL_RenderClear(renderer);
}

void Graphics::point(SDL_Renderer* renderer, Vec2 pos, Colour::Colour colour) {
  SDL_SetRenderDrawColor(renderer, colour.r, colour.g, colour.b, colour.a);
  SDL_RenderPoint(renderer, pos.x, pos.y);
}

void Graphics::drawLine(SDL_Renderer* renderer, Vec2 p1, Vec2 p2, Colour::Colour colour) {
  SDL_SetRenderDrawColor(renderer, colour.r, colour.g, colour.b, colour.a);
  SDL_RenderLine(renderer, p1.x, p1.y, p2.x, p2.y);
}