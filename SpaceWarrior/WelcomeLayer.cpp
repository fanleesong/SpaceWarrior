//
//  WelcomeLayer.cpp
//  SpaceWarrior
//
//  Created by cesc on 13-2-27.
//
//

#include "WelcomeLayer.h"
#include "GamingLayer.h"
#include "AboutLayer.h"

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
        
        CCSprite* pLogo = CCSprite::create( "logo.png" );
        
        CC_BREAK_IF( !pLogo );
        
        pLogo->setPosition( ccp( size.width / 2, size.height - pLogo->getContentSize().height - 10 ) );
        
        this->addChild( pLogo );
        
        
        //  构建菜单按钮
        
        
        //  构建开始游戏菜单
        CCSprite* startGameNormal = CCSprite::create( "menu.png", CCRectMake(0, 0, 126, 33) );
        CCSprite* startGamePress = CCSprite::create( "menu.png", CCRectMake(0, 33, 126, 33) );
        CCSprite* startGameDisable = CCSprite::create( "menu.png", CCRectMake(0, 66, 126, 33) );
        
        CCMenuItemSprite* startGameMenuItem = CCMenuItemSprite::create( startGameNormal, startGamePress, startGameDisable, this,menu_selector(WelcomeLayer::menu_startgame_callback));
        
        
        
        //  构建选项菜单
        CCSprite* optionNormal = CCSprite::create( "menu.png", CCRectMake(126, 0, 126, 33) );
        CCSprite* optionPress = CCSprite::create( "menu.png", CCRectMake(126, 33, 126, 33) );
        CCSprite* optionDisable = CCSprite::create( "menu.png", CCRectMake(126, 66, 126, 33) );
        
        CCMenuItemSprite* optionMenuItem = CCMenuItemSprite::create( optionNormal, optionPress, optionDisable, this,menu_selector(WelcomeLayer::menu_option_callback));
        
        
        //  构建关于菜单
        CCSprite* aboutNormal = CCSprite::create( "menu.png", CCRectMake(252, 0, 126, 33) );
        CCSprite* aboutPress = CCSprite::create( "menu.png", CCRectMake(252, 33, 126, 33) );
        CCSprite* aboutDisable = CCSprite::create( "menu.png", CCRectMake(252, 66, 126, 33) );
        
        CCMenuItemSprite* aboutMenuItem = CCMenuItemSprite::create( aboutNormal, aboutPress, aboutDisable, this,menu_selector(WelcomeLayer::menu_about_callback));
        
        CCMenu* menu = CCMenu::create( startGameMenuItem, optionMenuItem,aboutMenuItem, NULL );
        
        menu->alignItemsVerticallyWithPadding( 10 );
        menu->setPosition( ccp( size.width / 2, pLogo->getPositionY() -pLogo->getContentSize().height - 10 ) );

        this->addChild( menu );
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

void WelcomeLayer::onEnter(){

    CCLayer::onEnter();
    
    CocosDenshion::SimpleAudioEngine::sharedEngine()->playBackgroundMusic(welcome_background_music, true );
    
    

}

//  开始游戏按钮回调事件
void WelcomeLayer::menu_startgame_callback( CCObject* pSender ){
    CocosDenshion::SimpleAudioEngine::sharedEngine()->playEffect(button_effect_sound);
    
    CCLOG( "START GAME" );
    
    CCDirector::sharedDirector()->pushScene( CCTransitionFade::create( 0.5f, GamingLayer::scene()));

}


//  关于选项的回调事件
void WelcomeLayer::menu_option_callback( CCObject* pSender ){
    
     CocosDenshion::SimpleAudioEngine::sharedEngine()->playEffect(button_effect_sound);
    
     CCLOG( "OPTION" );
}

//  关于游戏的回调事件
void WelcomeLayer::menu_about_callback( CCObject* pSender ){

     CocosDenshion::SimpleAudioEngine::sharedEngine()->playEffect(button_effect_sound);
    
        CCLOG( "ABOUT GAME" );
    
    
    CCDirector::sharedDirector()->pushScene( CCTransitionFade::create( 0.5f, AboutLayer::scene()));

}





