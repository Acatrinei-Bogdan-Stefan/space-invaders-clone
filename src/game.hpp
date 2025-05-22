#pragma once
#include <raylib.h>
#include "spaceship.hpp"
#include "obstacle.hpp"

class Game
{
private:
  std::vector<Obstacle> CreateObstacle();
  std::vector<Obstacle> obstacle;
  Spaceship spaceship;
  void DeleteInactiveLasers();
public:
  Game();
  ~Game();
  void Draw();
  void Update();
  void HandleInput();
};


 