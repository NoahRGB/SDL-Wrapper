#include "application.h"
#include "graphics/vec2.h"

#include "SDL3/SDL.h"

Application::Application(std::string name, int width, int height) : GraphicsApplication(name, width, height) { 
  // circle = { Graphics::Vec2(250, 250), 50, Graphics::Colour::Red };
}

void Application::setup() {
  
}

void Application::render() {
  Graphics::background(renderer, Graphics::Colour::Black);

  Graphics::drawLine(renderer, { 50, 50 }, { 100, 100 }, Graphics::Colour::White);
}