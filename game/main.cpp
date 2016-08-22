#include "main.h"

int main(int argc, char const *argv[]) {
  std::cout << "Init " << std::endl;
  if(initAll())
  {
    std::cout << "Init " << std::endl;
    playGame();
  }
  else
  {
    std::cout << "Error is : " << SDL_GetError() << std::endl;
  }
  return 0;
}

void playGame()
{
  int frames = 0;
  while(play)
  {
    
    play = frames++ < 10000;
    SDL_Delay(15);
  }
}
/*****************************INIT*****************************/
bool initAll()
{
  if(SDL_Init(SDL_INIT_VIDEO) != 0)
  {
    std::cout << "Error is in init: " << SDL_GetError() << std::endl;
    return false;
  }
  if(!initWindow())
  {
    std::cout << "Error is in window: " << SDL_GetError() << std::endl;
    return false;
  }
  if(!initRenderer())
  {
    std::cout << "Error is in renderer: " << SDL_GetError() << std::endl;
    return false;
  }

  setupRenderer();
  return true;
}

bool initWindow()
{
  window = SDL_CreateWindow("Test",10,10,640,480,0);
  if(window == NULL)
  {
    std::cout << "Error in creating window: " << SDL_GetError() << std::endl;
    return false;
  }
  return true;
}

bool initRenderer()
{
  renderer = SDL_CreateRenderer(window,0,0);

  if(window == NULL)
  {
    std::cout << "Error in creating renderer: " << SDL_GetError() << std::endl;
    return false;
  }
  return true;
}

void setupRenderer()
{
  SDL_RenderSetLogicalSize(renderer, 640, 480);
  SDL_SetRenderDrawColor(renderer, 30,200,60,255);
  SDL_RenderPresent(renderer);
}
