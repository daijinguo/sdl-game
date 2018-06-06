//
//  AnimatedGraphic.h
//  SDL Game Programming Book
//
//  Created by shaun mitchell on 17/02/2013.
//  Copyright (c) 2013 shaun mitchell. All rights reserved.
//

#ifndef _ANIMATEDGRAPHIC_H_
#define _ANIMATEDGRAPHIC_H_

#include <iostream>
#include "GameObjectFactory.h"
#include "ShooterObject.h"

class AnimatedGraphic : public ShooterObject
{
public:

    AnimatedGraphic();
    virtual ~AnimatedGraphic() {}

    virtual void load( std::unique_ptr<LoaderParams> const &pParams );

    virtual void draw();
    virtual void update();
    virtual void clean();

private:

    int m_animSpeed;
    int m_frameCount;
};

class AnimatedGraphicCreator : public BaseCreator
{
public:

    virtual GameObject *createGameObject() const
    {
        return new AnimatedGraphic();
    }
};

#endif//_ANIMATEDGRAPHIC_H_
