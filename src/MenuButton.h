//
//  MenuObject.h
//  SDL Game Programming Book
//
//  Created by shaun mitchell on 10/02/2013.
//  Copyright (c) 2013 shaun mitchell. All rights reserved.
//

#ifndef _MENU_BUTTON_H_
#define _MENU_BUTTON_H_

#include "ShooterObject.h"
#include "GameObjectFactory.h"

class MenuButton : public ShooterObject
{
public:

    MenuButton();

    virtual ~MenuButton() {}

    virtual void load( std::unique_ptr<LoaderParams> const &pParams );

    virtual void draw();
    virtual void update();
    virtual void clean();

    void setCallback( void( *callback )() )
    {
        m_callback = callback;
    }
    int getCallbackID()
    {
        return m_callbackID;
    }

private:

    enum button_state
    {
        MOUSE_OUT = 0,
        MOUSE_OVER = 1,
        CLICKED = 2
    };

    bool m_bReleased;

    int m_callbackID;

    void ( *m_callback )();
};

class MenuButtonCreator : public BaseCreator
{
    GameObject *createGameObject() const
    {
        return new MenuButton();
    }
};


#endif//_MENU_BUTTON_H_
