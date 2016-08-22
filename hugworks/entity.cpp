#include "entity.h"

int Entity::ids = 0;
Entity::Entity(SDL_Rect pos_)
{
  id = ids++;
  pos = pos_;
}
