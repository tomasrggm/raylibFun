#include "../../headers/Map.h"

Map::Map(int height, int width){
    this->width = width;
    this->height = height;
    cells = (Cell*) malloc(this->height * this->width * sizeof(Cell));
    for(int i = 0; i < this->height; i++){
        for(int c = 0; c < this->width; c++){
            cells[i * this->width + c] = Cell(c,i,WHITE);
        }
    }
    cells[yHovered * width + xHovered].setHovered();
}

Cell Map::getCell(int x, int y){
    return cells[y * this->width + x];
}

Cell Map::getCurrentCell(){
    return cells[yHovered * width + xHovered];
}

int Map::getHeight(){
    return height;
}

int Map::getWidth(){
    return width;
}

void Map::move(int x, int y){
    cells[yHovered * width + xHovered].setHovered();
    xHovered = x;
    yHovered = y;
    cells[yHovered * width + xHovered].setHovered();
}

void Map::select(){
    if(cells[ySelected * width + xSelected].isSelected()){
        cells[ySelected * width + xSelected].setSelected();
    }
    ySelected = yHovered;
    xSelected = xHovered;
    cells[ySelected * width + xSelected].setSelected();
}

void Map::changeCell(Cell cell, int x, int y){
    cells[y * this->width + x] = cell;
}

void Map::printMap(){
    
    for(int i = 0; i < this->height; i++){
        for(int c = 0; c < this->width; c++){
            DrawRectangle((float) c * 32, (float) i * 32, 32.0f, 32.0f,cells[i * this->width + c].getTerrain());
        }
    }    

    for(int i = 0; i < width+1; i++){
        DrawLineV((Vector2) { (float)32.0f * i, 0.0f }, (Vector2){ (float) 32.0f * i, (float) height * 32.0f}, LIGHTGRAY );
    }

    for(int i = 0; i < height+1; i++){
        DrawLineV((Vector2) { 0.0f, (float)32.0f * i }, (Vector2){ (float) width * 32.0f,  (float) 32.0f * i }, LIGHTGRAY );
    }    

}

