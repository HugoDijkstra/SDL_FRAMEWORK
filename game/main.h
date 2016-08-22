#ifndef _MAIN_
#define _MAIN_

#include <iostream>
#include <vector>
#include <SDL.h>
#include <hugworks/scene.h>
#include <hugworks/entity.h>
#include <game/enemy.h>

SDL_Window* window;
SDL_Renderer* renderer;

bool play = true;
bool initAll();
bool initWindow();
bool initRenderer();
void setupRenderer();
void playGame();

#endif
