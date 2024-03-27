#include "raylib.h"
#pragma once

class MainScreen {
    public:
    int selected = 0;
    const char* newGame[3] = {"New Game","Options","Exit"};
    void print();
    void up();
    void down();
    int select();
};