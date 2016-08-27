#include "main.h"



int main(int argc, char const *argv[]) {
        srand (time(NULL));
        std::cout << "Init " << std::endl;
        renderer = new Renderer();
        scene = new Scene();
        input = new Input();
        image = new Image();

        //Entity* e = new Entity(30,30,20,20,255,255,255,255);
        //scene->addEntity(e);
        renderer->scene = scene;
        int j = 0;
        if(renderer->initAll())
        {
                image->loadPNG(renderer->renderer,"assets/spaceship.bmp");
                double fullTime;
                while(!input->getMustQuit())
                {
                        if(input->getMouseButtonDown(1))
                        {
                                std::cout << "Mouse clicked" << std::endl;
                                scene->addEntity(new ParticleEmitter(renderer,input->getMouseToScreen().x,input->getMouseToScreen().y,Vector2(-20,-40),Vector2(20,-20), Vector2(0,20),6,0.1f,scene,image));
                        }
                        input->update();
                        renderer->updateDeltaTime();
                        fullTime += renderer->deltaTime;
                        renderer->renderCurrent(renderer->scene);
                }
        }
        //delete rect;
        delete renderer;
        delete scene;
        delete input;
        IMG_Quit();
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
