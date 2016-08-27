#ifndef PARTICLEEMITTER
#define PARTICLEEMITTER

#include <iostream>
#include <game/particle.h>
#include <hugworks/renderer.h>
#include <hugworks/entity.h>
#include <hugworks/image.h>
#include <hugworks/scene.h>

class ParticleEmitter : public Entity
{
public:
        ParticleEmitter();
        ParticleEmitter(int x, int y);
        ParticleEmitter(Renderer* rend,float x, float y,Vector2 startingVelRangeMin,Vector2 startingVelRangeMax, Vector2 grav,float lifeTime,float spawnE, Scene* s, Image* ima);
        virtual ~ParticleEmitter();
        void createParticle();
        Vector2 pos;
        Vector2 startVelocityMin;
        Vector2 startVelocityMax;
        Vector2 gravity;
        Image* image;
        Renderer* renderer;
        float life = 0;
        double spawnEvery = 0;
        double thisTime;
        virtual void update(double deltaTime);
        Scene* scene;
private:
};

float RandomFloat(float a, float b);
#endif
