#include <iostream>

#include "Object.h"
#include "raylib.h"
#include "game/Player.h"

constexpr int screenWidth = 1280;
constexpr int screenHeight = 720;
constexpr Vector2 startPosition = {screenWidth / 2, screenHeight / 2};

void Init() {
    InitWindow(screenWidth, screenHeight, "Game");
    SetTargetFPS(30);
}

int main() {
    bool gameOver = false;
    Init();

    ObjectManager objectManager;
    Player* player = new Player(startPosition);

    objectManager.AddObject(player);
    while (!WindowShouldClose()) {
        BeginDrawing();
        ClearBackground(BLACK);
        if (!gameOver) {
            objectManager.Update();
        }
        DrawText("Congrats your first window!", 190, 200, 20, RAYWHITE);
        EndDrawing();
    }

    CloseWindow();
    return 0;
}
