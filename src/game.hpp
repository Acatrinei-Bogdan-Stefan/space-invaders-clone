#pragma once
#include <raylib.h>
#include "spaceship.hpp"
#include "obstacle.hpp"
#include "alien.hpp"

class Game
{
private:
  std::vector<Obstacle> CreateObstacle();
  std::vector<Alien> CreateAliens();
  std::vector<Obstacle> obstacles;
  std::vector<Alien> aliens;
  Spaceship spaceship;
  void DeleteInactiveLasers();
public:
  Game();
  ~Game();
  void Draw();
  void Update();
  void HandleInput();
};


 