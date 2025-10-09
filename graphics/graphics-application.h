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
    virtual void setup() = 0;
    virtual void render() = 0;
    // virtual void update() = 0;


  private:
    bool done;

  protected: // only accessible by children classes
    SDL_Window* window;
    SDL_Renderer* renderer;
    int width, height;
  };

}