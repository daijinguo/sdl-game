//
//  Callback.h
//  SDL Game Programming Book
//
//  Created by shaun mitchell on 10/02/2013.
//  Copyright (c) 2013 shaun mitchell. All rights reserved.
//

#ifndef _CALLBACK_H_
#define _CALLBACK_H_

class Callback
{
public:
    virtual void call() = 0;
};

class StaticCallback : public Callback
{
public:

    StaticCallback( void ( *func )() ) : m_func( func )
    {

    }

    virtual void call()
    {
        m_func();
    }

private:

    void ( *m_func )();
};

#endif//_CALLBACK_H_
