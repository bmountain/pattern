#ifndef CAR_H
#define CAR_H

#include "Engine.h"
#include <memory>
#include <utility>

/**
 * @brief エンジンという実装詳細を分離する基底クラス
 *
 */
class Car
{
protected:
  explicit Car(std::unique_ptr<Engine> engine) : pimpl_(std::move(engine))
  {
  }

public:
  virtual ~Car() = default;
  virtual void drive() = 0;

protected:
  // 派生クラスにエンジンへのアクセスを許すためその生ポインタを返す
  Engine* getEngine()
  {
    return pimpl_.get();
  }

  const Engine* getEngine() const
  {
    return pimpl_.get();
  }

private:
  std::unique_ptr<Engine> pimpl_;
};

#endif /* CAR_H */