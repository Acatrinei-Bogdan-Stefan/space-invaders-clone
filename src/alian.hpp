#pragma once
#include <raylib.h>

class Alian
{
private:
  /* data */
public:
  Alian(int type, Vector2 position);
  void Draw();
  Texture image;
  int type;
  Vector2 position;
};


