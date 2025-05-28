#include "SomeOtherStrategy.h"
#include "Circle.h"
#include <iostream>

void SomeOtherStrategy::draw(const Circle &circle) const
{
  std::cout << "Drawing Circle with Some other library" << std::endl;
}