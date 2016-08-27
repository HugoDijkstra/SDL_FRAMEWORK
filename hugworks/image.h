#ifndef IMAGE
#define IMAGE

#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string>
#include <SDL.h>
#include <SDL2/SDL_image.h>

class Image
{
public:
        Image();
        virtual ~Image();
        SDL_Texture* texture;
        SDL_Texture* getTexture(){std::cout << texture << std::endl; return texture;};
        int getHeight();
        int getWidth();

        void loadPNG(SDL_Renderer* rend,std::string path);
private:
        int height, width;
        std::string imagePath;
};

#endif
