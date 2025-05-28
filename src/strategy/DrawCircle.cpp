#include "Circle.h"
#include "OpenGLCircleStrategy.h"
#include "SomeOtherStrategy.h"
#include <memory>
#include <vector>

int main()
{
  using Shapes = std::vector<std::unique_ptr<Shape>>;
  Shapes shapes{};
  shapes.emplace_back(
      std::make_unique<Circle>(1.1, std::make_unique<OpenGLCircleStrategy>()));
  shapes.emplace_back(
      std::make_unique<Circle>(2.2, std::make_unique<SomeOtherStrategy>()));
  for (const auto &shape : shapes) {
    shape->draw();
  }
}