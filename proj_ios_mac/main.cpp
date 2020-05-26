//
//  main.m
//  testSDLApp iOS
//
//  Created by Eray Zesen on 26.05.2020.
//  Copyright © 2020 Eray Zesen. All rights reserved.
//

#include <iostream>
#include <stdio.h>
#include "Domino2D.h"

int main(int argc, const char * argv[]) {
    Game *game=Game::create("SampleGame", 640, 480);
    Sprite* spr_mario=Sprite::create("../Resources/supermario.png");
    game->addNode(spr_mario);
    game->run();
    
    return 0;
}
