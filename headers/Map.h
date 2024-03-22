#include <iostream>
#include "raylib.h"
#include "Cell.h"

class Map{
    int height;
    int width;
    Cell** cells;
    public:
        Map(int height, int width);
        Cell getCell(int x, int y);
        int getHeight();
        int getWidth();
        void changeCell(Cell cell, int x, int y);
        void printMap();

};