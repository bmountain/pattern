#ifndef DRAW_CIRCLE_STRATEGY_H
#define DRAW_CIRCLE_STRATEGY_H

// 図形一般の描画ストラテジーに対応するためテンプレートを使用
template <typename T> class DrawStrategy
{
public:
  virtual ~DrawStrategy() = default;
  virtual void draw(const T &shape) const = 0;
};

#endif /* DRAW_CIRCLE_STRATEGY_H */