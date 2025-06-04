#include "Distances.h"
#include <iostream>

int main()
{
  auto m1 = Meter<double>{1};
  auto m2 = Meter<double>{2.5};

  m1 += m2;
  std::cout << m1.get() << std::endl;

  auto k1 = Kilometer<double>{4.5};
  std::cout << k1.get() << std::endl;

  // m1 += k1; error
}