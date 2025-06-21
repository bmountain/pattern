#ifndef CIRCLE_H
#define CIRCLE_H 1

#include <stdexcept>

class Circle
{
public:
  explicit Circle(double radius) : radius_(radius){};
  double radius() const
  {
    return radius_;
  }

private:
  double radius_;
};

#endif
