#include "Animal.h"
#include "Sheep.h"

int main()
{
  // sheepはAnimalを指すポインタだから、sheep構築後のコードはそれがSheep型であることを知らない
  std::unique_ptr<Animal> sheep = std::make_unique<Sheep>("Dolly");
  sheep->makeSound();
  std::unique_ptr<Animal> clone = sheep->clone();
  clone->makeSound();
}