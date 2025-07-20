#pragma once
#include <raylib.h>
#include "spaceship.hpp"
#include "obstacle.hpp"
#include "alien.hpp"
#include "mysteryship.hpp"

class Game
{
private:
  std::vector<Obstacle> CreateObstacle();
  std::vector<Alien> CreateAliens();
  void MoveAliens();
  void MoveDownAliens(int distance);
  void AlienShootLaser();
  void CheckForColision();
  std::vector<Obstacle> obstacles;
  std::vector<Alien> aliens;
  Spaceship spaceship;
  void DeleteInactiveLasers();
  int aliensDirection = 1;
  std::vector<Laser> alienLasers;
  constexpr static float alienLaserShootInterval = 0.35;
  float timeLastAlienFired;
  MysteryShip mysteryship;
  float mysteryShipSpawnInterval;
  float timeLastSpawn;
public:
  Game();
  ~Game();
  void Draw();
  void Update();
  void HandleInput();
};


 