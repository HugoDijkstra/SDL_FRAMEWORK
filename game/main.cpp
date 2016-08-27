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
        if(renderer->initAll())
        {
                image->loadPNG(renderer->renderer,"assets/spaceship.bmp");
                double fullTime;
                while(!input->getMustQuit())
                {
                        input->update();
                        renderer->updateDeltaTime();
                        fullTime += renderer->deltaTime;
                        renderer->renderCurrent(renderer->scene);
                        if(input->getMouseButtonDown(1))
                        {
                                scene->addEntity(new ParticleEmitter(renderer,input->getMouseToScreen().x,input->getMouseToScreen().y,Vector2(-20,-40),Vector2(20,-20), Vector2(0,20),6,0.1f,scene,image));
                        }
                }
        }
        //delete rect;
        delete image;
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
