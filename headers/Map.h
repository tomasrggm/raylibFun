#include <iostream>
#include "raylib.h"
#include "Cell.h"

class Map{
    int height;
    int width;
    Cell** cells;

    Map(int height, int width);
    Cell getCell(int position);
    int getHeight();
    int getWidth();
    void changeCell(Cell cell, int pos);
    void printMap();

};