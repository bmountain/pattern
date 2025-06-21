#ifndef ELECTRIC_CAR_H
#define ELECTRIC_CAR_H

// インクルードするCar, Engineともに抽象クラスであることに注意
#include "Car.h"
#include <memory>

class ElectricCar : public Car
{
public:
  explicit ElectricCar();
  void drive() override;
};

#endif /* ELECTRIC_CAR_H */