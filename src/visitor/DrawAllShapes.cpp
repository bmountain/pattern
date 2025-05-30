#include "DrawAllShapes.h"

void drawAllShapes(const Shapes &shapes) {
  for (const auto shape : shapes) {
    std::visit(Draw{}, shape);
  }
}