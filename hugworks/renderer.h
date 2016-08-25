#ifndef RENDERER_H
#define RENDERER_H

#include <SDL.h>
#include <vector>
#include <hugworks/scene.h>
#include <hugworks/renderer.h>
#include <hugworks/input.h>

class Renderer
{
public:
        Renderer();
        virtual ~Renderer();
        SDL_Window* window;
        SDL_Renderer* renderer;
        bool initRenderer();
        bool initAll();
        bool initWindow();
        void setupRenderer();

        bool hasInit();
        
        void renderCurrent(Scene* scene);
        void updateDeltaTime();

        bool quit = false;

        double deltaTime;
        double last;

        Scene* scene;
private:
};


#endif
