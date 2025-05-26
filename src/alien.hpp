#pragma once
#include <raylib.h>

class Alien
{
private:
  /* data */
public:
  Alien(int type, Vector2 position);
  void Draw();
  int GetType();
  Texture image;
  int type;
  Vector2 position;
};


