//
//  AboutLayer.h
//  SpaceWarrior
//
//  Created by cesc on 13-2-28.
//
//

#ifndef __SpaceWarrior__AboutLayer__
#define __SpaceWarrior__AboutLayer__

#include <iostream>
#include "cocos2d.h"
#include "GameResources.h"
#include "SimpleAudioEngine.h"
USING_NS_CC;

class AboutLayer: public CCLayer
{
public:
    AboutLayer();
    ~AboutLayer();
    
    
    virtual bool init();
    static CCScene* scene();
    
    CREATE_FUNC( AboutLayer )
    
    
    void menu_callback( CCObject* pSender );
    
    


};
#endif /* defined(__SpaceWarrior__AboutLayer__) */
