#include "Circle.h"
#include "DrawAllShapes.h"
#include "Shape.h"
#include "Square.h"

int main() {
  Shapes shapes;
  shapes.emplace_back(Circle{1.0});
  shapes.emplace_back(Square{2.0});
  shapes.emplace_back(Circle{3.0});

  drawAllShapes(shapes);
}