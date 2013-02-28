//
//  AboutLayer.cpp
//  SpaceWarrior
//
//  Created by cesc on 13-2-28.
//
//

#include "AboutLayer.h"
#include "WelcomeLayer.h"

AboutLayer::AboutLayer(){}
AboutLayer::~AboutLayer(){}

bool AboutLayer::init(){
    
    if( !CCLayer::init() ){
        return false;
    }
    
    CCSize size = CCDirector::sharedDirector()->getWinSize();
    
    //  创建背景图片
    CCSprite* back = CCSprite::create( menu_background_image );  
    back->setPosition( ccp( size.width / 2 , size.height / 2 ) );
    this->addChild( back );
    
    //  加入模块Title 图片
    
    CCSprite* pTitle = CCSprite::create( "menuTitle.png", CCRectMake(0, 34, 100, 39) );
    pTitle->setPosition( ccp( size.width / 2, size.height - 40) );
    pTitle->setAnchorPoint( ccp( 0.5,1 ) );
    this->addChild( pTitle );
    
    //  文字描述控件
    CCLabelBMFont* content = CCLabelBMFont::create( "This Game App Recoded By Shilong", "arial-14.fnt");
    content->setPosition( ccp( size.width / 2, pTitle->getPositionY()- pTitle->getContentSize().height - 15) );
    content->setAnchorPoint( ccp( 0.5,1 ) );    
    this->addChild( content );
    
    CCLabelBMFont* fontOfBack = CCLabelBMFont::create("Go Back", "arial-14.fnt" );
    
    fontOfBack->setScale(1.5f);
    
    CCMenuItemLabel* backLabel = CCMenuItemLabel::create(fontOfBack, this, menu_selector(AboutLayer::menu_callback));
    backLabel->setAnchorPoint( ccp( 0.5, 0 ) );
    backLabel->setPosition( ccp( size.width / 2, 30) );
    
    CCMenu* menu = CCMenu::create( backLabel, NULL );;
    menu->setPosition( CCPointZero );
    
    this->addChild( menu );
    return true;
}

//  返回场景实例
CCScene* AboutLayer::scene(){

    CCScene* sc = NULL;
    
    do {
        sc = CCScene::create();
        CC_BREAK_IF( !sc );
        
        AboutLayer* layer = AboutLayer::create();
        CC_BREAK_IF( !layer );
        sc->addChild( layer );
        
    } while ( 0 );
    
    return sc;
}

void AboutLayer::menu_callback( CCObject* pSender ){

     CocosDenshion::SimpleAudioEngine::sharedEngine()->playEffect(button_effect_sound);
    
    CCDirector::sharedDirector()->pushScene( CCTransitionFade::create(0.5f, WelcomeLayer::scene() ));
}
