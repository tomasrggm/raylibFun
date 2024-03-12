#include <iostream>
#include "raylib.h"
#include "../../headers/Unit.h"
#include "../../headers/GameCamera.h"
#include "../../headers/KeyBindings.h"

int main(void) {
    const int screenWidth = 800;
    const int screenHeight = 448;
    InitWindow(screenWidth, screenHeight, "Punpun's game");
    Unit player = Unit(32, 32, 32, 32);
    GameCamera camera = GameCamera(1.0f, {screenWidth/2.0f, screenHeight/2.0f}, {screenWidth/2.0f, screenHeight/2.0f}, 0.0f);
    SetTargetFPS(60);

    while(!WindowShouldClose()){
        processKeys(&player);
        //camera.setTarget( { player.getPlayerX() + 20.0f, player.getPlayerY() + 20.0f } );

        BeginDrawing();
        ClearBackground(RAYWHITE);
        BeginMode2D(camera.getCamera());
        DrawRectangleRec(player.getPlayer(), RED);
        
        for(int i = 1; i < screenWidth/32; i++){
            DrawLineV((Vector2) { (float)32.0f * i, 32.0f }, (Vector2){ (float) 32.0f * i, (float) screenHeight - 32.0f }, LIGHTGRAY );
        }

        for(int i = 1; i < screenHeight/32; i++){
            DrawLineV((Vector2) { 32.0f, (float)32.0f * i }, (Vector2){ (float) screenWidth - 32.0f ,  (float) 32.0f * i }, LIGHTGRAY );
        }


        EndMode2D();
        EndDrawing();
    }

    CloseWindow();
    return 0;
}