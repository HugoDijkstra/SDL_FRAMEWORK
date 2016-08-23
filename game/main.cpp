#include "main.h"



int main(int argc, char const *argv[]) {
        srand (time(NULL));
        std::cout << "Init " << std::endl;
        renderer = new Renderer();
        scene = new Scene();
        Entity* e = new Entity(30,30,20,20,255,255,255,255);
        scene->addEntity(e);
        renderer->scene = scene;
        int i = 0;
        if(renderer->initAll())
        {
                while(i++ < 1000)
                {
                        createParticle();
                        renderer->renderCurrent(renderer->scene);

                        SDL_Delay(10);
                }
        }
        //delete rect;
        delete e;
        delete renderer;
        delete scene;
        SDL_Quit();
        return 0;

}

void playGame()
{
        int frames = 0;
        while(play)
        {

                play = frames++ < 10000;
        }
}

void createParticle()
{
        scene->addEntity(new Particle(Vector2(40, 40),Vector2(0,-0.5f),Vector2(0,1), 4));
        //Vector2(-1 + rand() % 2,-1 * rand()),Vector2(0,0.1f), 4)
}
