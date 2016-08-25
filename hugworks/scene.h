#ifndef SCENE_H
#define SCENE_H

#include <hugworks/input.h>
#include <hugworks/entity.h>

#include <vector>
#include <iostream>
class Scene
{
public:
        Scene();
        virtual ~Scene();
        virtual void update(float deltaTime);

        std::vector<Entity*> entities;

        void addEntity(Entity* entity); 
        Input* input;

};

#endif
