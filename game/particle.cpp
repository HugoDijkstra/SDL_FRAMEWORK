#include <game/particle.h>

Particle::Particle()
{
  velocity = Vector2();
  gravity = Vector2();
}
Particle::Particle(Vector2 startPos,Vector2 startVelocity, Vector2 grv, double life)
{
  velocity = Vector2(startVelocity.x, startVelocity.y);
  gravity = Vector2(grv.x, grv.y);

  vecPos.x = startPos.x;
  vecPos.y = startPos.y;
  pos->w = 20;
  pos->h = 20;
  fullLifeTime = life;
  lifeTimeLeft = life;
}
Particle::~Particle()
{

}
void Particle::update(double deltaTime)
{
  this->velocity += this->gravity * deltaTime;
  this->vecPos.x += velocity.x * deltaTime;
  this->vecPos.y += velocity.y * deltaTime;
  this->lifeTimeLeft -= deltaTime;
  //this->a = (int)lifeTimeLeft / fullLifeTime;
  std::cout << vecPos.y << std::endl;
}
