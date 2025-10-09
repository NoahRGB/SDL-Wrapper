#include "SDL3/SDL.h"

#include "application.h"

// cmake --build build --target run

int main() {
  
  Application app("Learning", 1000, 1000);
  app.run();

  return 0;

}