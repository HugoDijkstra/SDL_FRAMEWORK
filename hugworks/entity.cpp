#include "entity.h"

int Entity::ids = 0;
Entity::Entity()
{
        pos = new SDL_Rect();
        vecPos = Vector2();
        id = ids++;
}
Entity::Entity(SDL_Rect pos_)
{
        pos = new SDL_Rect();
        vecPos = Vector2();
        id = ids++;
        pos->x = pos_.x;
        pos->y = pos_.y;
        pos->h = pos_.h;
        pos->w = pos_.w;
}
Entity::Entity(int x, int y, int h, int w, int r_, int g_, int b_, int a_)
{
        pos = new SDL_Rect();
        id = ids++;
        pos->x = x;
        pos->y = y;
        pos->h = h;
        pos->w = w;

        r = r_;
        g = g_;
        b = b_;
        a = a_;
}

void Entity::update(double deltaTime)
{

        pos->x = vecPos.x;
        pos->y = vecPos.y;
}
Entity::~Entity()
{
        delete pos;
}
