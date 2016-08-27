#include <game/particleemitter.h>

ParticleEmitter::ParticleEmitter()
{

}

ParticleEmitter::ParticleEmitter(int x, int y)
{

}

ParticleEmitter::ParticleEmitter(Renderer* rend,float x, float y,Vector2 startingVelRangeMin,Vector2 startingVelRangeMax, Vector2 grav,float lifeTime,float spawnE, Scene* s, Image* ima)
{
        texture = new Image();
        renderer = rend;
        pos = Vector2(x,y);
        startVelocityMin = startingVelRangeMin;
        startVelocityMax = startingVelRangeMax;
        gravity = grav;
        life = lifeTime;
        spawnEvery = spawnE;
        scene = s;
        std::cout << ima->getTexture() << std::endl;
        image = ima;
        std::cout << image->getTexture() << std::endl;
}
ParticleEmitter::~ParticleEmitter()
{

}
void ParticleEmitter::update(double deltaTime)
{
        thisTime +=  deltaTime;
        if(thisTime >= spawnEvery)
        {
                createParticle();
                thisTime = fmod(spawnEvery, thisTime);
        }
}
void ParticleEmitter::createParticle()
{
        Particle* particle = new Particle(pos,Vector2(RandomFloat(startVelocityMin.x, startVelocityMax.x),RandomFloat(startVelocityMin.y, startVelocityMax.y)),gravity, life, image);
        std::cout << particle->texture << " Imae" << std::endl;

        scene->addEntity(particle);
}

float RandomFloat(float a, float b) {
        float random = ((float) rand()) / (float) RAND_MAX;
        float diff = b - a;
        float r = random * diff;
        return a + r;
}
