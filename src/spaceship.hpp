#pragma once
#include <raylib.h>
#include "laser.hpp"
#include <vector>

class Spaceship
{
private:
 Texture2D image;
 Vector2 position;
 double lastFireTime;
 
public:
  Spaceship(/* args */);
  ~Spaceship();
  void Draw();
  void MoveLeft();
  void MoveRight();
  void FireLaser();
  Rectangle getRect();
  std::vector<Laser> lasers;
};