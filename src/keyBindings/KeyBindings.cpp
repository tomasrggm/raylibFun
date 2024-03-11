#include <iostream>
#include "../../headers/KeyBindings.h"

using namespace std;

void processKeys(Unit *unit){
    if (IsKeyPressed(KEY_RIGHT)) unit->updateX(32.0f);
    else if (IsKeyPressed(KEY_LEFT)) unit->updateX(-32.0f);
    else if (IsKeyPressed(KEY_UP)) unit->updateY(-32.0f);
    else if (IsKeyPressed(KEY_DOWN)) unit->updateY(32.0f);
}