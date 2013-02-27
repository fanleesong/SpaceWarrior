//
//  BasicLayer.cpp
//  SpaceWarrior
//
//  Created by cesc on 13-2-27.
//
//

#include "BasicLayer.h"

BasicLayer::BasicLayer(){}
BasicLayer::~BasicLayer(){}


bool BasicLayer::init(){

    if( !CCLayer::init() ){
        
             
        return true;
    }
    
    return false;

}

void BasicLayer::setBackground( const char* imageName ){
    
    
    CCSprite* pBackground = CCSprite::create( imageName );
    
    
    pBackground ->setPosition( ccp( getWinSize().width / 2, getWinSize().height / 2 ));
    
    this->addChild( pBackground );
    
    

}

CCSize BasicLayer::getWinSize(){

    return CCDirector::sharedDirector()->getWinSize();
}