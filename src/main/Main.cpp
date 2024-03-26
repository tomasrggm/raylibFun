#include <iostream>
#include "raylib.h"
#include "../../headers/Unit.h"
#include "../../headers/GameCamera.h"
#include "../../headers/KeyBindings.h"
#include "../../headers/Map.h"

const int screenWidth = 800;
const int screenHeight = 600;

const int gameWidth = 25;
const int gameHeight = 15;


int main(void) {

    InitWindow(screenWidth, screenHeight, "Punpun's game");
    Unit player = Unit(64, 64, 32, 32);
    Map map1 = Map(gameHeight,gameWidth);
    GameCamera camera = GameCamera(1.0f, {screenWidth/2.0f, screenHeight/2.0f}, {screenWidth/2.0f, screenHeight/2.0f}, 0.0f);
    SetTargetFPS(60);

    while(!WindowShouldClose()){
        processKeys(&map1);
        //camera.setTarget( { player.getPlayerX() + 20.0f, player.getPlayerY() + 20.0f } );

        BeginDrawing();
        ClearBackground(RAYWHITE);
        BeginMode2D(camera.getCamera());
        map1.printMap();

        EndMode2D();
        EndDrawing();
    }

    CloseWindow();
    return 0;
}