#include "Circle.h"
#include "DrawAllShapes.h"
#include "Shape.h"
#include "Square.h"
#include <memory>
#include <vector>

int main() {
  using Shapes = std::vector<std::unique_ptr<Shape>>;
  Shapes shapes;
  shapes.emplace_back(std::make_unique<Circle>(1));
  shapes.emplace_back(std::make_unique<Square>(2));
  shapes.emplace_back(std::make_unique<Circle>(3));
  drawAllShapes(shapes);
}