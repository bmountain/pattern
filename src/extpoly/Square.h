#ifndef SQUARE_H
#define SQUARE_H 1

#include <stdexcept>

class Square
{
public:
  explicit Square(double side) : side_(side){};
  double side() const
  {
    return side_;
  }

private:
  double side_;
};

#endif
