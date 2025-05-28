#ifndef CIRCLE_H
#define CIRCLE_H

#include "DrawStrategy.h"
#include "Shape.h"
#include <memory>

class Circle : public Shape
{
public:
  explicit Circle(double radius, std::unique_ptr<DrawStrategy<Circle>> drawer)
      : radius_(radius), drawer_(std::move(drawer)){};
  void draw() const override
  {
    drawer_->draw(*this); // ストラテジーに自身を渡す
  }

private:
  double radius_;
  std::unique_ptr<DrawStrategy<Circle>>
      drawer_; // ポインタとしてストラテジーを持たせる。DrawStrategyは抽象クラスなのでポインタにする必要がある。
};

#endif /* CIRCLE_H */