#ifndef SQUARE_H
#define SQUARE_H 1

#include "Point.h"
#include "Shape.h"
#include <stdexcept>

class Square : public Shape {
public:
  explicit Square(double side) : side_(side) {
    if (side <= 0)
      throw std::invalid_argument("invalid radius: non-positive");
  };
  void draw() const override;

private:
  double side_;
  Point center_{}; // 値初期化しておく
};

#endif