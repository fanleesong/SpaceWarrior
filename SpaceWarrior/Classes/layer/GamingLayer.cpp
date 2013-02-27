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
    
    CCSprite* background1 = CCSprite::create( "bg01.jpg" );
    background1->setPosition( CCPointZero );
    background1->setAnchorPoint( CCPointZero );
    
    this->addChild( background1,0,886 );
    
    
    CCSprite* background2 = CCSprite::create( "bg01.jpg" );
    background2->setPosition( ccp(0,576) );
    background2->setAnchorPoint( CCPointZero );
    
    this->addChild( background2,0,887 );
    
    
    this->schedule( schedule_selector(GamingLayer::background_scroll_logic),0.1f);
    
    
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

void GamingLayer::background_scroll_logic( float t ){
    
    

    getChildByTag( 886)->setPositionY(     getChildByTag( 886)->getPositionY() - 5);
    getChildByTag( 887)->setPositionY( 576 + getChildByTag( 886)->getPositionY() );
    
    if( getChildByTag( 887)->getPositionY() <= 0){
    
        getChildByTag( 886)->setPositionY( 0 );
    }


}