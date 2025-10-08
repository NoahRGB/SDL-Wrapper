#include "SDL3/SDL.h"

#include "application.h"

// cmake --build build --target run

int main() {
  
  Application app("Learning", 500, 500);
  app.run();

  return 0;

}