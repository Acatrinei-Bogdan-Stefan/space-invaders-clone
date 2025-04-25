#include <raylib.h>
#include "spaceship.hpp"

int main() 
{
    const Color grey = {29, 29, 27, 255};
    
    const int windowWidth = 750;
    const int windowHeight = 700;
    
    InitWindow(windowWidth, windowHeight, "C++ Space Invaders");
    SetTargetFPS(60);

    Spaceship spaceship;
    
    while (!WindowShouldClose())
    {

        BeginDrawing();
            ClearBackground(grey);

            spaceship.Draw();
        
        EndDrawing();
    }
    
    CloseWindow();
}