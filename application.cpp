#include "application.h"
#include "graphics/vec2.h"

#include "SDL3/SDL.h"

Application::Application(std::string name, int width, int height) : GraphicsApplication(name, width, height) { 
  circle = { Graphics::Vec2(250, 250), 50};
}

void Application::render() {
  SDL_SetRenderDrawColor(renderer, 255, 255, 255, 255);
  SDL_RenderClear(renderer);

  SDL_SetRenderDrawColor(renderer, 255, 0, 0, 255);
  circle.draw(renderer);

  SDL_RenderPresent(renderer);
}