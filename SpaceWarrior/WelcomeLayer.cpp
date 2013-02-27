//
//  WelcomeLayer.cpp
//  SpaceWarrior
//
//  Created by cesc on 13-2-27.
//
//

#include "WelcomeLayer.h"


WelcomeLayer::WelcomeLayer(){}
WelcomeLayer::~WelcomeLayer(){}

bool WelcomeLayer::init(){
  
    bool sRect = false;
    
    do {
        CC_BREAK_IF( !CCLayer::init());
        
        
        CCSize size = CCDirector::sharedDirector()->getWinSize();       
    
        
        
        CCSprite* background = CCSprite::create( "loading.png");
        
        CC_BREAK_IF( !background);
        
        background->setPosition( ccp( size.width / 2, size.height / 2 ) );
        
        this->addChild( background );
        
        sRect = true;
    } while ( 0 );
    
    
    return sRect;
}
CCScene* WelcomeLayer::scene(){

    CCScene* sc = NULL;
    
    
    do {
        
        sc = CCScene::create();
        CC_BREAK_IF( !sc );
        
        WelcomeLayer* layer = WelcomeLayer::create();
        
        CC_BREAK_IF( !layer );
        
        sc->addChild( layer );
    } while ( 0 );
    
    return sc;
}