#ifndef SOME_OTHER_STRATEGY_H
#define SOME_OTHER_STRATEGY_H

#include "Circle.h"
#include "DrawStrategy.h"

class SomeOtherStrategy : public DrawStrategy<Circle>
{
public:
  SomeOtherStrategy() = default;
  ~SomeOtherStrategy() = default;
  void draw(const Circle &circle) const override;
};
#endif /* SOME_OTHER_STRATEGY_H */