#include "raylib.h"

int main(void)
{
    // Initialization
    const int screenWidth = 800;
    const int screenHeight = 450;

    InitWindow(screenWidth, screenHeight, "Mouse Position Tracker");

    SetTargetFPS(60); // Set the target frames per second

    while (!WindowShouldClose()) // Main game loop
    {
        // Get mouse position
        Vector2 mousePosition = GetMousePosition();

        // Print mouse position to console
        printf("Mouse Position: X: %f, Y: %f\n", mousePosition.x, mousePosition.y);

        // Drawing
        BeginDrawing();
        ClearBackground(RAYWHITE);
        DrawText("Move the mouse or touchpad!", 10, 10, 20, DARKGRAY);
        DrawText(FormatText("Mouse Position: X: %.2f, Y: %.2f", mousePosition.x, mousePosition.y), 10, 40, 20, LIGHTGRAY);
        EndDrawing();
    }

    // De-Initialization
    CloseWindow(); // Close window and OpenGL context

    return 0;
}
