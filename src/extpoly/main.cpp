#include "Circle.h"
#include "DrawStrategy.h"
#include "Shape.h"
#include "Square.h"
#include <memory>
#include <vector>

int main()
{
  using CircleModel = ShapeModel<Circle, OpenGLDrawStrategy>;
  using SquareModel = ShapeModel<Square, OpenGLDrawStrategy>;
  using Shapes = std::vector<std::unique_ptr<ShapeConcept>>;

  Shapes shapes{};
  shapes.emplace_back(
      std::make_unique<CircleModel>(Circle{1}, OpenGLDrawStrategy()));
  shapes.emplace_back(
      std::make_unique<SquareModel>(Square{2}, OpenGLDrawStrategy()));
  for (const auto& shape : shapes) {
    shape->draw();
  }
}