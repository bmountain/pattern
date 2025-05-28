#ifndef OPEN_GLCIRCLE_STRATEGY_H
#define OPEN_GLCIRCLE_STRATEGY_H

#include "Circle.h"
#include "DrawStrategy.h"

class OpenGLCircleStrategy : public DrawStrategy<Circle>
{
public:
  OpenGLCircleStrategy() = default;
  ~OpenGLCircleStrategy() = default;
  void draw(const Circle &circle) const override;
};

#endif /* OPEN_GLCIRCLE_STRATEGY_H */