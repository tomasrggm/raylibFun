#include <iostream>
#include "raylib.h"
#include "Cell.h"
#pragma once

using namespace std;

class Map{
    int height;
    int width;
    int xHovered,yHovered,xSelected,ySelected;
    Cell* cells;
    public:
        Map(int height, int width);
        Cell getCell(int x, int y);
        Cell getCurrentCell();
        int getHeight();
        int getWidth();
        void changeCell(Cell cell, int x, int y);
        void printMap();
        void move(int x, int y);
        void select();

};