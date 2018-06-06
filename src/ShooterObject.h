//
//  SDLGameObject.h
//  SDL Game Programming Book
//
//  Created by shaun mitchell on 19/01/2013.
//  Copyright (c) 2013 shaun mitchell. All rights reserved.
//

#ifndef _SHOOTER_OBJECTS_H_
#define _SHOOTER_OBJECTS_H_

#include <SDL2/SDL.h>

#include "GameObject.h"

class ShooterObject : public GameObject
{
public:

    virtual ~ShooterObject() {}

    virtual void load( std::unique_ptr<LoaderParams> const &pParams );

    virtual void draw();
    virtual void update();

    virtual void clean() {}
    virtual void collision() {}

    virtual std::string type()
    {
        return "SDLGameObject";
    }

protected:

    ShooterObject();

    void doDyingAnimation();

    int m_bulletFiringSpeed;
    int m_bulletCounter;
    int m_moveSpeed;

    // how long the death animation takes, along with a counter
    int m_dyingTime;
    int m_dyingCounter;

    // has the explosion sound played?
    bool m_bPlayedDeathSound;
};

#endif//_SHOOTER_OBJECTS_H_
