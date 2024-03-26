#include <iostream>
#include "../../headers/KeyBindings.h"

using namespace std;

const int screenWidth = 800;
const int screenHeight = 600;

void processKeys(Map *map){
    if (IsKeyPressed(KEY_RIGHT) && map->getCurrentCell().getX() < map->getWidth() - 1)
        map->move(map->getCurrentCell().getX() + 1, map->getCurrentCell().getY());
    else if (IsKeyPressed(KEY_LEFT) && map -> getCurrentCell().getX() > 0)
        map->move(map->getCurrentCell().getX() - 1, map->getCurrentCell().getY());
    else if (IsKeyPressed(KEY_UP) && map->getCurrentCell().getY() > 0) 
        map->move(map->getCurrentCell().getX(), map->getCurrentCell().getY() - 1);
    else if (IsKeyPressed(KEY_DOWN) && map->getCurrentCell().getY() < map->getHeight() - 1)
        map->move(map->getCurrentCell().getX(), map->getCurrentCell().getY() + 1);
    else if (IsKeyPressed(KEY_Z) && !map->getCurrentCell().isSelected())
        map->select();
}