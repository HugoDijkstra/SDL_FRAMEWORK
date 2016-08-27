#ifndef PARTICLE_H
#define PARTICLE_H

#include <iostream>
#include <hugworks/entity.h>
#include <hugworks/vector2.h>
class Particle : public Entity
{
public:
  Particle();
  Particle(Vector2 startPos,Vector2 startVelocity, Vector2 grv, double life, Image* image);
  virtual ~Particle();
  virtual void update(double deltaTime);
  Vector2 velocity;
  Vector2 gravity;
  double fullLifeTime;
  double lifeTimeLeft;
  void setPos(SDL_Rect rect);
};

#endif
