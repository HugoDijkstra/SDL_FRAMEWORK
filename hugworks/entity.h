#ifndef _ENTITY_
#define _ENTITY_

#include <iostream>
#include <string>
#include <SDL2/SDL.h>
#include <hugworks/image.h>
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
        Image* texture;
        void setTexture(SDL_Renderer* renderer,std::string path){texture->loadPNG(renderer, path);};
        int id;
        double rotation;
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
