#ifndef SPACESHIP
#define SPACESHIP

#include <SDL.h>
#include <hugworks/entity.h>
class SpaceShip : public Entity
{
public:
  SpaceShip();
  ~SpaceShip();
        SDL_Rect pos;
        Vector2 Positions;
        int r, g, b, a;

private:

}

#endif
