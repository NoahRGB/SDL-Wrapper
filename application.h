#pragma once

#include "graphics/graphics.h"
#include "graphics/circle.h"

class Application : public Graphics::GraphicsApplication {
public:

  Application(std::string name, int width, int height);

  void setup() override;
  void render() override;

private:
  // Graphics::Circle circle;

};