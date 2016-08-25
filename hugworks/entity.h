#ifndef _ENTITY_
#define _ENTITY_
#include <iostream>
#include <SDL2/SDL.h>
#include <hugworks/color.h>
#include <hugworks/vector2.h>
struct Entity
{
public:
        Entity();
        Entity(SDL_Rect pos_);
        Entity(int x, int y, int h, int w, int r_, int g_, int b_, int a_);
        virtual ~Entity();
        SDL_Rect* pos;
        Vector2 vecPos;
        int id;
        int getId(){
                return id;
        }
        int r,g,b,a;
        bool alive = true;

        virtual void update(double deltaTime);
private:
        static int ids;
};

#endif
