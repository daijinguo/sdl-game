//
//  ObjectLayer.h
//  SDL Game Programming Book
//
//  Created by shaun mitchell on 10/03/2013.
//  Copyright (c) 2013 shaun mitchell. All rights reserved.
//

#ifndef _OBJECT_LAYER_H_
#define _OBJECT_LAYER_H_

#include <iostream>
#include <vector>
#include "Layer.h"
#include "CollisionManager.h"

class GameObject;

class ObjectLayer : public Layer
{
public:

    virtual ~ObjectLayer();

    // pass a level object through
    virtual void update( Level *pLevel );
    virtual void render();

    // return a pointer to this layers objects, the level parser will fill this
    std::vector<GameObject *> *getGameObjects()
    {
        return &m_gameObjects;
    }

private:

    // check for collisions between game objects
    CollisionManager m_collisionManager;

    // a list of game objects
    std::vector<GameObject *> m_gameObjects;
};

#endif//_OBJECT_LAYER_H_
