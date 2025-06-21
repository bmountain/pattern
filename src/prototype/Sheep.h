#ifndef SHEEP_H
#define SHEEP_H

#include "Animal.h"
#include <memory>
#include <string>

class Sheep : public Animal
{
public:
  explicit Sheep(std::string name) : m_name(std::move(name))
  {
  }

  void makeSound() const;

  std::unique_ptr<Animal> clone() const override;

private:
  std::string m_name;
};

#endif /* SHEEP_H */