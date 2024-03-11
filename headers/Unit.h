#include "raylib.h"
#pragma once

class Unit{
    Rectangle player;
public:
    Unit(float x, float y, float width, float height);
    void updateX(float x);
    void updateY(float y);
    float getPlayerX();
    float getPlayerY();
    Rectangle getPlayer();
};
