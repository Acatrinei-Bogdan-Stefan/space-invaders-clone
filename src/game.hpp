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
  void MoveAliens();
  std::vector<Obstacle> obstacles;
  std::vector<Alien> aliens;
  Spaceship spaceship;
  void DeleteInactiveLasers();
  int aliensDirection = 1;
public:
  Game();
  ~Game();
  void Draw();
  void Update();
  void HandleInput();
};


 