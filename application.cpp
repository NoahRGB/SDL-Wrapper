#include "application.h"

#include "SDL3/SDL.h"

Application::Application(std::string name, int width, int height) : GraphicsApplication(name, width, height) { }

void Application::render() {
  SDL_SetRenderDrawColor(renderer, 255, 255, 255, 255);
  SDL_RenderClear(renderer);



  SDL_RenderPresent(renderer);
}