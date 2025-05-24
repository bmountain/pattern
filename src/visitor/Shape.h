#ifndef SHAPE_H
#define SHAPE_H 1

#include "Circle.h"
#include "Square.h"
#include <variant>
#include <vector>

using Shape = std::variant<Circle, Square>;
using Shapes = std::vector<Shape>;

#endif