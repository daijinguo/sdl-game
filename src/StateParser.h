//
//  StateParser.h
//  SDL Game Programming Book
//
//  Created by shaun mitchell on 24/02/2013.
//  Copyright (c) 2013 shaun mitchell. All rights reserved.
//

#ifndef _STATE_PARSER_H_
#define _STATE_PARSER_H_

#include <iostream>
#include <vector>
#include "tinyxml.h"

class GameObject;

class StateParser
{
public:

    StateParser() {}
    ~StateParser() {}

    bool parseState( const char *stateFile, std::string stateID, std::vector<GameObject *> *pObjects,
                     std::vector<std::string> *pTextureIDs );

private:

    void parseObjects( TiXmlElement *pStateRoot, std::vector<GameObject *> *pObjects );
    void parseTextures( TiXmlElement *pStateRoot, std::vector<std::string> *pTextureIDs );
};

#endif//_STATE_PARSER_H_
