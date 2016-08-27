#ifndef _MAIN_
#define _MAIN_

#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <cstdlib>
#include <vector>
#include <hugworks/renderer.h>
#include <hugworks/scene.h>
#include <hugworks/vector2.h>
#include <hugworks/entity.h>
#include <game/enemy.h>
#include <game/particle.h>
#include <game/particleemitter.h>

Renderer* renderer;
Scene* scene;
Input* input;
Image* image;

bool play = true;
void createParticle();
#endif
