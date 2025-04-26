#include <raylib.h>
#include "game.hpp"
#include "laser.hpp"

int main() 
{
    const Color grey = {29, 29, 27, 255};
    
    const int windowWidth = 750;
    const int windowHeight = 700;
    
    InitWindow(windowWidth, windowHeight, "C++ Space Invaders");
    SetTargetFPS(60);

    Game game;
    Laser laser = Laser({100,100},7);
    
    while (!WindowShouldClose())
    {

        // Update
        game.HandleInput();

        // Draw
        BeginDrawing();
            ClearBackground(grey);

            game.Draw();
            laser.Draw();
        
        EndDrawing();
    }
    
    CloseWindow();
}