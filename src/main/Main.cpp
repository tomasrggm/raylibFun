#include <iostream>
#include "raylib.h"
#include "../../headers/Unit.h"
#include "../../headers/GameCamera.h"
#include "../../headers/KeyBindings.h"
#include "../../headers/Map.h"
#include "../../headers/MainScreen.h"

const int screenWidth = 800;
const int screenHeight = 600;

const int gameWidth = 25;
const int gameHeight = 15;

typedef enum GameScreen {Main, Gameplay} GameScreen;

int main(void) {
    GameScreen game = Main;
    MainScreen main;
    int currentPage = 0;
    InitWindow(screenWidth, screenHeight, "Punpun's game");
    Unit player = Unit(64, 64, 32, 32);
    Map map1 = Map(gameHeight,gameWidth);
    GameCamera camera = GameCamera(1.0f, {screenWidth/2.0f, screenHeight/2.0f}, {screenWidth/2.0f, screenHeight/2.0f}, 0.0f);
    SetTargetFPS(60);

    while(!WindowShouldClose()){
        switch(game){
            case Main:
            if(IsKeyPressed(KEY_Z)){
                int option = main.select();
                if(option == 0) game = Gameplay;
            }
            if(IsKeyPressed(KEY_UP)){
                main.up();
            }
            if(IsKeyPressed(KEY_DOWN)){
                main.down();
            }
            break;
            case Gameplay:
            processKeys(&map1);
            break;
        }
        
        //camera.setTarget( { player.getPlayerX() + 20.0f, player.getPlayerY() + 20.0f } );

        BeginDrawing();
        ClearBackground(RAYWHITE);
        BeginMode2D(camera.getCamera());
        switch(game){
            case Main:
            main.print();
            break;
            case Gameplay:
            map1.printMap();
            break;
        }

        EndMode2D();
        EndDrawing();
    }

    CloseWindow();
    return 0;
}