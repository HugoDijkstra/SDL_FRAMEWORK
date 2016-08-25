#include "main.h"



int main(int argc, char const *argv[]) {
        srand (time(NULL));
        std::cout << "Init " << std::endl;
        renderer = new Renderer();
        scene = new Scene();
        //Entity* e = new Entity(30,30,20,20,255,255,255,255);
        //scene->addEntity(e);
        renderer->scene = scene;
        if(renderer->initAll())
        {
                double fullTime;
                while(fullTime < 5)
                {
                        renderer->updateDeltaTime();
                        fullTime += renderer->deltaTime;
                        createParticle();
                        renderer->renderCurrent(renderer->scene);

                }
        }
        //delete rect;
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
        scene->addEntity(new Particle(Vector2(300, 60),Vector2(-6 + (rand() % 12),-40),Vector2(0,30), 10));
        //Vector2(-1 + rand() % 2,-1 * rand()),Vector2(0,0.1f), 4)
}
