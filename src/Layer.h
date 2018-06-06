#ifndef _LAYER_H_
#define _LAYER_H_

class Level;

class Layer
{
public:

    virtual ~Layer() {}

    virtual void render() = 0;
    virtual void update( Level *pLevel ) = 0;
};



#endif//_LAYER_H_
