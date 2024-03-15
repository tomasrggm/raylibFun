#include "../../headers/Map.h"

Map::Map(int height, int width){
    this->height = height/32;
    this->width = width/32;
    cells = (Cell**) malloc(this->height * sizeof(Cell*));
    for(int i = 0; i < this->height; i++){
        cells[i] = (Cell*) malloc(this->width * sizeof(Cell));
    }
    for(int i = 0; i < this->height; i++){
        for(int c = 0; c < this->width; c++){
            cells[i][c] = Cell(c,i,WHITE);
        }
    }
}