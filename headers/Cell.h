#include <iostream>
#include "raylib.h"
#include "Unit.h"
#pragma once

class Cell{
    int x;
    int y;
    Color terrain;
    Unit unit = Unit(0,0,0,0);
    bool hovered;
    bool selected;
    public:
        Cell(int x, int y, Color terrain);
        int getX();
        int getY();
        Color getTerrain();
        void setColor(Color color);
        void setSelected();
        void setHovered();
        bool isSelected();
        bool isHovered();
        void setUnit(Unit unit);
        Unit getUnit();
};