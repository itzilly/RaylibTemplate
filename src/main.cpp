
#include "raylib.h"
#include <iostream>

int main() {
    InitWindow(400, 400, "Raylib Template!");
    SetTargetFPS(120);
    while (!WindowShouldClose()) {
        BeginDrawing();
        ClearBackground(BLACK);

        EndDrawing();
    }

    CloseWindow();
    
    return 0;
}
