#ifndef DRAW_STRATEGY_H
#define DRAW_STRATEGY_H

#include "Circle.h"
#include "Square.h"

class OpenGLDrawStrategy
{
public:
  explicit OpenGLDrawStrategy() = default;
  void operator()(const Circle&) const;
  void operator()(const Square&) const;
};

#endif /* DRAW_STRATEGY_H */