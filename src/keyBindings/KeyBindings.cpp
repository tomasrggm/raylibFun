#include <iostream>
#include "../../headers/KeyBindings.h"

using namespace std;

const int screenWidth = 800;
const int screenHeight = 440;

void processKeys(Unit *unit){
    if (IsKeyPressed(KEY_RIGHT) && unit->getPlayerX() <= (screenWidth - 96.0f)) unit->updateX(32.0f);
    else if (IsKeyPressed(KEY_LEFT) && unit->getPlayerX() >= 64.0f) unit->updateX(-32.0f);
    else if (IsKeyPressed(KEY_UP) && unit->getPlayerY() >= 64.0f) unit->updateY(-32.0f);
    else if (IsKeyPressed(KEY_DOWN) && unit->getPlayerY() <= (screenHeight - 64.0f)) unit->updateY(32.0f);
}