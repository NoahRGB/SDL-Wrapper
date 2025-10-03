#include "graphics-application.h"

Graphics::GraphicsApplication::GraphicsApplication(std::string name, int width, int height) {
  this->width = width;
  this->height = height;

  SDL_Init(SDL_INIT_VIDEO);
  SDL_CreateWindowAndRenderer(name.c_str(), width, height, 0, &window, &renderer);

  done = false;
}

Graphics::GraphicsApplication::~GraphicsApplication() {
  SDL_DestroyWindow(window);
  SDL_DestroyRenderer(renderer);
  SDL_Quit();
}

void Graphics::GraphicsApplication::run() {

  while (!done) {

    SDL_Event e;
    while (SDL_PollEvent(&e)) {
      // when window is terminated
      if (e.type == SDL_EVENT_QUIT) {
        done = true;
      }
    }

    render();
  }
}