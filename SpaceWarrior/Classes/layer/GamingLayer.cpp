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

    if( !CCLayer::init()){
        
        setupViews();
        
        return true;
    }
    
    return false;
}


void GamingLayer::setupViews(){
    
    CCSize size = CCDirector::sharedDirector()->getWinSize();
    
    CCSprite* background = CCSprite::create( "" );
    
    
}
CCScene* GamingLayer::scene(){}