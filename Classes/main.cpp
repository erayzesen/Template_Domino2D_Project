//  Created by Eray Zesen on 25.05.2020.


#include <iostream>
#include <stdio.h>
#include "Domino2D.h"

int main(int argc, const char * argv[]) {
    Game *game=Game::create("SampleGame", 640, 480);
    Sprite* spr_mario=Sprite::create("../Resources/supermario.png");
    game->run();
    game->addNode(spr_mario);
    
    return 0;
}
