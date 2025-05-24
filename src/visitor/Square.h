#ifndef SQUARE_H
#define SQUARE_H 1

#include "Point.h"
#include <stdexcept>

class Square {
public:
  explicit Square(double side) : side_(side) {
    if (side <= 0)
      throw std::invalid_argument("invalid radius: non-positive");
  };
  double side() const {
    return side_;
  }

private:
  double side_;
  Point center_{}; // 値初期化しておく
};

#endif