//
//  GamingLayer.cpp
//  SpaceWarrior
//
//  Created by cesc on 13-2-27.
//
//

#include "GamingLayer.h"



GamingLayer::GamingLayer(){}
GamingLayer::~GamingLayer(){}

bool GamingLayer::init(){

    bool sRect = false;
    
    do {
        CC_BREAK_IF(!CCLayer::init());
        
        setupViews();
        
        sRect = true;
        
    } while (0);
    
    return sRect;
}


//  添加并初始化布景控件
void GamingLayer::setupViews(){
    
    CCSize size = CCDirector::sharedDirector()->getWinSize();
    
    CCSprite* background = CCSprite::create( "bg01.jpg" );
    background->setPosition( CCPointZero );
    background->setAnchorPoint( CCPointZero );
    
    this->addChild( background );
    
}
CCScene* GamingLayer::scene(){
    CCScene* sc = NULL;
    
    do {
        sc = CCScene::create();
        
        CC_BREAK_IF( !sc );
        
        GamingLayer* layer = GamingLayer::create();
        CC_BREAK_IF( !layer );
        
        sc->addChild( layer );
    } while (0);
    
    return sc;
    

}