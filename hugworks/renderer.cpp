#include <hugworks/renderer.h>

Renderer::Renderer()
{
        srand(time(NULL));
}

Renderer::~Renderer()
{
        srand(time(NULL));
}



bool Renderer::hasInit()
{
        return initAll();
}

void Renderer::updateDeltaTime()
{
        double now = SDL_GetTicks();
        deltaTime = (now - last)/1000;
        last = now;
}

void Renderer::renderCurrent(Scene* scene)
{
        //clear renderer
        SDL_RenderClear(renderer);
        for(unsigned int i = 0; i < scene->entities.size(); i++)
        {
                if(scene->entities[i] == NULL)
                {
                        if(i++ < scene->entities.size())
                        {
                                i++;
                        }
                        else
                                break;
                }
                //update enteties
                if(!scene->entities[i]->alive)
                {
                        scene->entities.erase(scene->entities.begin() + i);
                        scene->entities.shrink_to_fit();
                        i--;
                }
                else
                {

                        scene->entities[i]->update(deltaTime);
                        if(scene->entities[i]->texture != NULL)
                        {
                                SDL_RendererFlip flip = SDL_FLIP_NONE;
                                SDL_RenderCopyEx(renderer, scene->entities[i]->texture->texture,NULL,scene->entities[i]->pos, scene->entities[i]->rotation,NULL, flip);
                        }
                }
        }


        SDL_SetRenderDrawColor(renderer,0,0,0,255);
        SDL_RenderPresent(renderer);
}

bool Renderer::initAll()
{
        if(SDL_Init(SDL_INIT_VIDEO) != 0)
        {
                std::cout << "Error is in init: " << SDL_GetError() << std::endl;
                return false;
        }
        if(!initWindow())
        {
                std::cout << "Error is in window: " << SDL_GetError() << std::endl;
                return false;
        }
        if(!initRenderer())
        {
                std::cout << "Error is in renderer: " << SDL_GetError() << std::endl;
                return false;
        }

        setupRenderer();
        return true;
}

bool Renderer::initWindow()
{
        window = SDL_CreateWindow("Test",10,10,640,480,0);
        if(window == NULL)
        {
                std::cout << "Error in creating window: " << SDL_GetError() << std::endl;
                return false;
        }
        return true;
}

bool Renderer::initRenderer()
{
        renderer = SDL_CreateRenderer(window,0,0);
        IMG_Init(IMG_INIT_PNG);
        if(window == NULL)
        {
                std::cout << "Error in creating renderer: " << SDL_GetError() << std::endl;
                return false;
        }
        return true;
}

void Renderer::setupRenderer()
{
        SDL_RenderSetLogicalSize(renderer, 640, 480);
        SDL_SetRenderDrawColor(renderer, 0,0,0,255);
        SDL_RenderPresent(renderer);
}
