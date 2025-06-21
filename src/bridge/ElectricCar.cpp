// ElectricEngine.hという実装詳細に触れるのはここ
#include "ElectricCar.h"
#include "ElectricEngine.h"
#include <iostream>

ElectricCar::ElectricCar() : Car(std::make_unique<ElectricEngine>()){};

void ElectricCar::drive()
{
  std::cout << "ElectricCar driving" << std::endl;
  getEngine()->start();
  getEngine()->stop();
};