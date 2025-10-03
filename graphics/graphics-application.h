#pragma once

#include <string>

#include "SDL3/SDL.h"

namespace Graphics {

  class GraphicsApplication {

  public:
    GraphicsApplication(std::string name, int width, int height);
    ~GraphicsApplication();
    void run();

    // functionality to be overridden by a child class
    virtual void render() = 0;
    // virtual void update() = 0;


  private:
    int width, height;
    bool done;

  protected: // only accessible by children classes
    SDL_Window* window;
    SDL_Renderer* renderer;
  };

}