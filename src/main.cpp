#include <raylib.h>
#include "game.hpp"



int main() 
{
    const Color grey = {29, 29, 27, 255};
    
    const int windowWidth = 750;
    const int windowHeight = 700;
    
    InitWindow(windowWidth, windowHeight, "C++ Space Invaders");
    SetTargetFPS(60);

    Game game;
    
    
    while (!WindowShouldClose())
    {

        // Update
        game.HandleInput();
        game.Update();

        // Draw
        BeginDrawing();
            ClearBackground(grey);

            game.Draw();
            
      
        
        EndDrawing();
    }
    
    CloseWindow();
}