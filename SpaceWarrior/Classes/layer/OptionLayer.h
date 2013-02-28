//
//  OptionLayer.h
//  SpaceWarrior
//
//  Created by cesc on 13-2-28.
//
//

#ifndef __SpaceWarrior__OptionLayer__
#define __SpaceWarrior__OptionLayer__

#include <iostream>

#include "cocos2d.h"
#include "GameResources.h"
#include "SimpleAudioEngine.h"
USING_NS_CC;

class OptionLayer: public CCLayer
{
public:
    OptionLayer();
    ~OptionLayer();
    
    
    virtual bool init();
    
    static CCScene* scene();
    
    CREATE_FUNC( OptionLayer )
    
    
};

#endif /* defined(__SpaceWarrior__OptionLayer__) */
