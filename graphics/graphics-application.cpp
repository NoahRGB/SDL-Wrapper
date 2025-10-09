#include "graphics-application.h"

Graphics::GraphicsApplication::GraphicsApplication(std::string name, int width, int height) {
  this->width = width;
  this->height = height;

  SDL_Init(SDL_INIT_VIDEO);
  SDL_CreateWindowAndRenderer(name.c_str(), width, height, 0, &window, &renderer);

  done = false;
}

Graphics::GraphicsApplication::~GraphicsApplication() {
  SDL_DestroyRenderer(renderer);
  SDL_DestroyWindow(window);
  SDL_Quit();
}

void Graphics::GraphicsApplication::run() {

  int fps = 0;
  Uint64 lastTime = 0;

  setup();

  while (!done) {

    Uint64 currentTime = SDL_GetTicks();

    SDL_Event e;
    while (SDL_PollEvent(&e)) {
      // when window is terminated
      if (e.type == SDL_EVENT_QUIT) {
        done = true;
      }
    }
    render();
    SDL_RenderPresent(renderer);

    fps++;
    if (currentTime > lastTime + 1000) {
      lastTime = currentTime;
      SDL_SetWindowTitle(window, std::string("FPS " + std::to_string(fps)).c_str());
      fps = 0;
    }

  }
}