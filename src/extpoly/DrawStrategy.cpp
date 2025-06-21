#include "DrawStrategy.h"
#include <iostream>

void OpenGLDrawStrategy::operator()(const Circle& circle) const
{
  std::cout << "Drawing circle with radius " << circle.radius() << std::endl;
}

void OpenGLDrawStrategy::operator()(const Square& square) const
{
  std::cout << "Drawing square with side " << square.side() << std::endl;
}