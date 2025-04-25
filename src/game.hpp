#pragma once
#include <raylib.h>
#include "spaceship.hpp"

class Game
{
private:
  /* data */
public:
  Game(/* args */);
  ~Game();
  void Draw();
  void Update();
  void HandleInput();
};

Game::Game(/* args */)
{
}

Game::~Game()
{
}
 