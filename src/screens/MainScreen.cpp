#include "../../headers/MainScreen.h"

void MainScreen::print(){
    DrawRectangle(0,0,GetScreenWidth(),GetScreenHeight(),LIGHTGRAY);
    DrawRectangle(GetScreenWidth() * 0.5f - 100,GetScreenHeight() * 0.5f - 50, 200, 100, Fade(SKYBLUE,0.5f));
    DrawRectangleLines(GetScreenWidth() * 0.5f - 100,GetScreenHeight() * 0.5f - 50, 200, 100, BLUE);
    DrawText("Punpun's Game",GetScreenWidth() * 0.5f - 90, GetScreenHeight() * 0.5f - 150 ,20, BLACK);
   
    for(int i = 0; i < 3; i++){
        DrawText(newGame[i],GetScreenWidth() * 0.5f - 90, GetScreenHeight() * 0.5f - 40 + i*15 ,10, selected == i ? RED:BLACK);
    }   
}

void MainScreen::up(){
    if(selected > 0) selected--;
}

void MainScreen::down(){
    if(selected < 2) selected++;
}

int MainScreen::select(){
    return selected;
}