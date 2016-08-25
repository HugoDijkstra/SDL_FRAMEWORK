#ifndef PARTICLEEMITTER
#define PARTICLEEMITTER

#include <game/particle.h>

class ParticleEmitter
{
public:
  ParticleEmitter();
  ParticleEmitter(int x, int y);
  ParticleEmitter(int x, int y, Vector2 startingVel,float startingVelRange, Vector2 grav;,float lifeTime, Scene* scene);
  createParticle();
  Vector2 pos;
  Vector2 startingVelocity;
  Vector2 startVelocityMin;
  Vector2 startVelocityMax;
  Vector2 gravity;
  float life;
  virtual void update(double deltaTime);
  Scene* scene;
private:
};

#endif
