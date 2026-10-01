#include <iostream>
#include "raylib.h"

constexpr int screenWidth = 1280;
constexpr int screenHeight = 720;

int main() {
    InitWindow(screenWidth, screenHeight, "Game");
    SetTargetFPS(30);

    while (!WindowShouldClose()) {
        BeginDrawing();
            ClearBackground(RAYWHITE);
            DrawText("Congrats your first window!", 190, 200, 20, LIGHTGRAY);
        EndDrawing();
    }

    CloseWindow();
    return 0;
}
