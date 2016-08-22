#ifndef INPUT_H
#define INPUT_H

#include <SDL.h>

#include <hugworks/vector2.h>

class Input
{
public:
  Input();
  virtual ~Input();

  void update();
  bool getKey(int keyCode);
  bool getKeyUp(int keyCode);
  bool getKeyDown(int keyCode);

  bool getMouseButton(int number);
  bool getMouseButtonDown(int number);
  bool getMouseButtonUp(int number);

  Vector2 mousePos;

private:
  bool keys[282];
  bool keysDown[282];
  bool keysUp[282];

  bool keysalreadyUp[282];
  bool keysalreadyDown[282];
  bool mustquit;

};

#endif
