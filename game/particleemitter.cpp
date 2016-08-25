#include <game/particleemitter.h>

ParticleEmitter::ParticleEmitter()
{

}

ParticleEmitter::ParticleEmitter(int x, int y)
{

}

ParticleEmitter::ParticleEmitter(int x, int y, Vector2 startingVel,Vector2 startingVelRangeMin,Vector2 startingVelRangeMax, Vector2 gravity,float lifeTime, Scene* scene)
{
  pos = Vector2(x,y);
}
