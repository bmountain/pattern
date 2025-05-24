#ifndef CIRCLE_H
#define CIRCLE_H 1

#include "Point.h"
#include <stdexcept>

class Circle {
public:
  explicit Circle(double radius) : radius_(radius) {
    if (radius <= 0)
      throw std::invalid_argument("invalid radius: non-positive");
  };
  double radius() const {
    return radius_;
  }

private:
  double radius_;
  Point center_{}; // 値初期化しておく
};

#endif