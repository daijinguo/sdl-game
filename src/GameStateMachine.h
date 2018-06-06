//
//  GameStateMachine.h
//  SDL Game Programming Book
//
//  Created by shaun mitchell on 09/02/2013.
//  Copyright (c) 2013 shaun mitchell. All rights reserved.
//

#ifndef _GAME_STATE_MACHINE_H_
#define _GAME_STATE_MACHINE_H_

#include <vector>
#include "GameState.h"

class GameStateMachine
{
public:

    GameStateMachine() {}
    ~GameStateMachine() {}

    void update();
    void render();

    void pushState( GameState *pState );
    void changeState( GameState *pState );
    void popState();

    void clean();

    std::vector<GameState *> &getGameStates()
    {
        return m_gameStates;
    }

private:
    std::vector<GameState *> m_gameStates;
};

#endif//_GAME_STATE_MACHINE_H_
