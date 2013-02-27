//
//  BasicLayer.h
//  SpaceWarrior
//
//  Created by cesc on 13-2-27.
//
//

#ifndef __SpaceWarrior__BasicLayer__
#define __SpaceWarrior__BasicLayer__

#include <iostream>
#include "cocos2d.h"

USING_NS_CC;

/**
 @author:石龙
 @date: 2013-2-27 日 
  创建layer 基类
  拥有设定背景的方法
    返回窗口大小的方法
 
 */

class BasicLayer : public CCLayer{

   
public:
    BasicLayer();
    ~BasicLayer();
    virtual bool init();
    
    void setBackground( const char* imageName );
    
    CCSize getWinSize();
};


#endif /* defined(__SpaceWarrior__BasicLayer__) */
