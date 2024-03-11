#include <iostream>
#include "../../headers/Unit.h"

    Unit::Unit(float x, float y, float width, float height){
        player = {x, y, width, height};
    }

    void Unit::updateX(float x){
        player.x += x;
    }

    void Unit::updateY(float y){
        player.y += y;
    }

    float Unit::getPlayerX(){
        return player.x;
    }

    float Unit::getPlayerY(){
        return player.y;
    }

    Rectangle Unit::getPlayer(){
        return player;
    }