#include "include/raylib.h"

int main() {
    // Initialize the window
    const int screenWidth = 800;
    const int screenHeight = 600;
    InitWindow(screenWidth, screenHeight, "Raylib - First Game");

    // Set the frame rate
    SetTargetFPS(60);

    // Main game loop
    while (!WindowShouldClose()) {
        // Update logic

        // Draw everything
        BeginDrawing();
        ClearBackground(RAYWHITE);
        DrawText("Hello, Raylib!", 10, 10, 20, DARKGRAY);
        EndDrawing();
    }

    // Close window and OpenGL context
    CloseWindow();

    return 0;
}
