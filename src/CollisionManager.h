//
//  CollisionManager.h
//  SDL Game Programming Book
//
//  Created by shaun mitchell on 28/03/2013.
//  Copyright (c) 2013 shaun mitchell. All rights reserved.
//

#ifndef _COLLISION_MANAGER_H_
#define _COLLISION_MANAGER_H_

#include <iostream>
#include <vector>

class Player;
class GameObject;
class TileLayer;

class CollisionManager
{
public:

    void checkPlayerEnemyBulletCollision( Player *pPlayer );
    void checkPlayerEnemyCollision( Player *pPlayer, const std::vector<GameObject *> &objects );
    void checkEnemyPlayerBulletCollision( const std::vector<GameObject *> &objects );
    void checkPlayerTileCollision( Player *pPlayer, const std::vector<TileLayer *> &collisionLayers );
};

#endif//_COLLISION_MANAGER_H_
