#include "../../headers/Cell.h"


Cell::Cell(int x, int y, Color terrain){
    this->x = x;
    this->y = y;
    this->terrain = terrain;
    this->selected = false;
    this->hovered = false;
}

int Cell::getX(){
    return x;
}

int Cell::getY(){
    return y;
}

Color Cell::getTerrain(){
    if(selected) return RED;
    else if(hovered) return BLUE;
    else return terrain;
}

void Cell::setColor(Color color){
    terrain = color;
}

void Cell::setSelected(){
    selected = !selected;
}

void Cell::setHovered(){
    hovered=!hovered;
}

bool Cell::isHovered(){
    return hovered;
}

bool Cell::isSelected(){
    return selected;
}

void Cell::setUnit(Unit unit){
    this->unit = unit;
}

Unit Cell::getUnit(){
    return unit;
}

