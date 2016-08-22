#include <hugworks/input.h>
Input::Input()
{
        this->mustquit = false;

        for(unsigned int i = 0; i < 282; i++)
        {
                keys[i] = false;
                keysDown[i] = false;
                keysUp[i] = false;

                keysalreadyUp[i] = false;
                keysalreadyDown[i] = false;
        }
}

Input::~Input()
{

}

void Input::update()
{
        SDL_Event event;
        for(unsigned int i = 0; i < 282; i++)
        {
                if(keysUp[i])
                {
                        keysUp[i] = false;
                }
                if(keysDown[i])
                {
                        keysDown[i] = false;
                }
        }
        while(SDL_PollEvent(&event))
        {
                switch (event.type) {
                case SDL_KEYDOWN:
                        keysalreadyUp[event.key.keysym.scancode] = false;
                        if(keysalreadyDown[event.key.keysym.scancode] == false)
                        {
                                keysDown[event.key.keysym.scancode] = true;
                                keysalreadyDown[event.key.keysym.scancode] = true;
                        }
                        keys[event.key.keysym.scancode] = true;
                        break;
                case SDL_KEYUP:
                        keysalreadyDown[event.key.keysym.scancode] = false;
                        if(keysalreadyUp[event.key.keysym.scancode] == false)
                        {
                                keysUp[event.key.keysym.scancode] = true;
                                keysalreadyUp[event.key.keysym.scancode] = true;
                        }
                        keys[event.key.keysym.scancode] = false;
                        break;
                case SDL_QUIT:
                        mustquit = true;
                        break;

                }
        }
}

bool Input::getKey(int keyCode)
{
  return keys[SDL_GetScancodeFromKey(keyCode)];
}

bool Input::getKeyUp(int keyCode)
{
  return keysUp[SDL_GetScancodeFromKey(keyCode)];
}
bool Input::getKeyDown(int keyCode)
{
  return keysDown[SDL_GetScancodeFromKey(keyCode)];
}
