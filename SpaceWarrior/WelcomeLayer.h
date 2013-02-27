//
//  WelcomeLayer.h
//  SpaceWarrior
//
//  Created by cesc on 13-2-27.
//
//

#ifndef __SpaceWarrior__WelcomeLayer__
#define __SpaceWarrior__WelcomeLayer__

#include <iostream>
#include "cocos2d.h"
#include "GameResources.h"
#include "SimpleAudioEngine.h"
USING_NS_CC;

class WelcomeLayer: public CCLayer
{
public:
    WelcomeLayer();
    ~WelcomeLayer();
    

    virtual bool init();
    static CCScene* scene();

    CREATE_FUNC( WelcomeLayer );
    
    virtual void onEnter();


    void menu_startgame_callback( CCObject* pSender );

    void menu_option_callback( CCObject* pSender );

    void menu_about_callback( CCObject* pSender );



};
#endif /* defined(__SpaceWarrior__WelcomeLayer__) */
