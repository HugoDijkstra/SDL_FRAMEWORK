#include <hugworks/image.h>

Image::Image()
{

}
Image::~Image()
{

}
void Image::loadPNG(SDL_Renderer* rend, std::string path)
{
        imagePath = path;
        texture = IMG_LoadTexture(rend, path.c_str());
        if(texture == NULL) std::cout << "Error in getting image : " << SDL_GetError() << std::endl;
}
int Image::getHeight()
{
        return height;
}
int Image::getWidth()
{
        return width;
}
