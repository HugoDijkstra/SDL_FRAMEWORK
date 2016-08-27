#include <game/particle.h>

Particle::Particle()
{
        velocity = Vector2();
        gravity = Vector2();
}
Particle::Particle(Vector2 startPos,Vector2 startVelocity, Vector2 grv, double life, Image* image)
{
    std::cout << "SSUCKONFE" << std::endl;
        velocity = Vector2(startVelocity.x, startVelocity.y);
        gravity = Vector2(grv.x, grv.y);
        std::cout << image << " Succes?" << std::endl;
        texture = image;
        std::cout << texture << " Succes?" << std::endl;
        vecPos.x = startPos.x;
        vecPos.y = startPos.y;
        pos->w = 20;
        pos->h = 20;
        fullLifeTime = life;
        lifeTimeLeft = life;
        this->r = 255;
        this->g = 255;
        this->b = 255;
        this->r = 255;

}
Particle::~Particle()
{

}
void Particle::update(double deltaTime)
{
        this->velocity += this->gravity * deltaTime;
        this->vecPos.x += velocity.x * deltaTime;
        this->vecPos.y += velocity.y * deltaTime;
        this->pos->x = vecPos.x;
        this->pos->y = vecPos.y;
        this->lifeTimeLeft -= deltaTime;
        this->r = 255 * lifeTimeLeft / fullLifeTime;
        this->g = 255 * lifeTimeLeft / fullLifeTime;
        this->b = 255 * lifeTimeLeft / fullLifeTime;
        if(this->lifeTimeLeft <= 0.0f)
        {
          this->r = 0;
          this->g = 0;
          this->b = 0;
          this->alive = false;
        }
}
