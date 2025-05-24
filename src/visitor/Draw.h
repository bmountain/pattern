#ifndef DRAW_H
#define DRAW_H
#include "Shape.h"
#include <iostream>

/**
 * @brief 図形を描画する関数オブジェクト
 *
 */
struct Draw {
  void operator()(const Circle &circle) {
    std::cout << "Drawing a circle with radius " << circle.radius()
              << std::endl;
  }

  void operator()(const Square &square) {
    std::cout << "Drawing a square with side " << square.side() << std::endl;
  }
};

#endif