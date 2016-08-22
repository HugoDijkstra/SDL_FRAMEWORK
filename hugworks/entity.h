#ifndef _ENTITY_
#define _ENTITY_
#include <SDL2/SDL.h>
class Entity
{
public:
  Entity(SDL_Rect pos_);
  ~Entity();
  SDL_Rect pos;
  int id;
  int getId(){return id;}

private:
  static int ids;
};

#endif
