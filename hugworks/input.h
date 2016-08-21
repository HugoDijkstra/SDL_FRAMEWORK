#ifndef INPUT_H
#define INPUT_H

class Input
{
public:
  Input();
  virtual ~Input();

  void update();
  bool getKey(int keyCode);
  bool getKeyUp(int keyCode);
  bool getKeyDown(int keyCode);

}

#endif
