//
//  SampleScene.cpp
//  Template_Domino2D_Project iOS
//
//  Created by Eray Zesen on 27.05.2020.
//  Copyright © 2020 Eray Zesen. All rights reserved.
//

#include "SampleScene.hpp"

SampleScene::SampleScene(){
    //Writing game codes
    //Option 1
    Sprite::create("spr_mario","Resources/supermario.png")->setParent(this)->setPos(100, 60);
    Sprite::create("spr_enemy", "Resources/enemy.png")->setParent(getChild("spr_mario"))->setPos(100, 200);
    //Option 2
    /*
    Sprite* enemy=Sprite::create("spr_enemy","Resources/enemy.png");
    addChild(enemy);
    enemy->setPos(100, 60);
     */
}
void SampleScene::onUpdate(){
    Node * mario=this->getChild("spr_mario");
    if(mario){
        int posx=mario->getPosX();
        mario->setPosX(posx+1);
    }
    
    
}
