//  Created by Eray Zesen on 25.05.2020.


#include <iostream>
#include <stdio.h>
#include "Domino2D.h"
#include "SampleScene.hpp"

int main(int argc, const char * argv[]) {
    Game *game=Game::create("SampleGame", 640, 480);
    game->setFPS(60);
    //Sprite* spr_mario=Sprite::create("../Resources/supermario.png");
    SampleScene* scene=new SampleScene();
    game->runWithScene(scene);
    
    return 0;
}
