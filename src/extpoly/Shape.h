#ifndef SHAPE_H
#define SHAPE_H

#include <functional>
#include <stdexcept>
#include <utility>

class ShapeConcept
{
public:
  virtual ~ShapeConcept() = default;
  virtual void draw() const = 0;
};

template <typename ShapeT, typename DrawStrategy>
class ShapeModel : public ShapeConcept
{
public:
  ShapeModel(ShapeT shape, DrawStrategy drawer)
      : m_shape(std::move(shape)), m_drawer(std::move(drawer)){};
  void draw() const override
  {
    m_drawer(m_shape);
  }

private:
  ShapeT m_shape;
  DrawStrategy m_drawer;
};

#endif /* SHAPE_H */