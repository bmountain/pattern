#ifndef ELECTRIC_ENGINE_H
#define ELECTRIC_ENGINE_H

#include "Engine.h"
#include <iostream>

class ElectricEngine : public Engine
{
public:
  void start() const override
  {
    std::cout << "Electric Engine started" << std::endl;
  }

  void stop() const override
  {
    std::cout << "Electric Engine stopped" << std::endl;
  }
};

#endif /* ELECTRIC_ENGINE_H */