#include "Sheep.h"
#include <iostream>

void Sheep::makeSound() const
{
  std::cout << "baa\n";
}

/**
 * @brief プロトタイプではAnimalを指すポインタ
 *
 * @return std::unique_ptr<Animal> 実際返すのはSheepを指すポインタ
 */
std::unique_ptr<Animal> Sheep::clone() const
{
  // 自身のコピーを作って返す
  return std::make_unique<Sheep>(*this);
}