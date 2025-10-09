#include "application.h"
#include "graphics/vec2.h"

#include "SDL3/SDL.h"

#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace Graphics;

Vec2 pos;
float step;

Application::Application(std::string name, int width, int height) : GraphicsApplication(name, width, height) { }

void Application::setup() {
  srand(time(0));
  pos = { 250, 250 };
  step = 1.0f;
  background(renderer, Colour::Black);
}

void Application::render() {

  int r = rand() % 4;

  if (r == 0) {
    pos.x += step;
  } else if (r == 1) {
    pos.x -= step;
  } else if (r == 2) {
    pos.y += step;
  } else if (r == 3) {
    pos.y -= step;
  }
  
  point(renderer, pos, Colour::White);
}