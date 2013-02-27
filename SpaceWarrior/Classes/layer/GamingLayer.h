//
//  GamingLayer.h
//  SpaceWarrior
//
//  Created by cesc on 13-2-27.
//
//

#ifndef __SpaceWarrior__GamingLayer__
#define __SpaceWarrior__GamingLayer__

#include <iostream>
#include "cocos2d.h"
#include "GameResources.h"
#include "SimpleAudioEngine.h"
USING_NS_CC;

class GamingLayer: public CCLayer
{
public:
    GamingLayer();
    ~GamingLayer();
    
    virtual bool init();
    
    static CCScene* scene();
    
    void setupViews();
    
    CREATE_FUNC( GamingLayer );
    
void background_scroll_logic( float t );
};
#endif /* defined(__SpaceWarrior__GamingLayer__) */
