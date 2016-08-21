#ifndef _MAIN_
#define _MAIN_

#include <iostream>
#include <vector>
#include <SDL2/SDL.h>

SDL_Window* window;
SDL_Renderer* renderer;

bool play = true;
bool initAll();
bool initWindow();
bool initRenderer();
void setupRenderer();
void playGame();

#endif
