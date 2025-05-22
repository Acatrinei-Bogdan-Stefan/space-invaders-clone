#pragma once
#include <vector>
#include "block.hpp"

class Obstacle
{
private:
  
public:
  Obstacle(Vector2 position);
  void Draw();
  std::vector<Block> blocks;
  Vector2 position;
  static std::vector<std::vector<int>> grid;
};


 