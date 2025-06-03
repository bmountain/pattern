#include "NameObserver.h"
#include <iostream>

void NameObserver::update(const Person& person, Person::StateChange property)
{
  bool isNameChange = (property == Person::forenameChanged)
                      || (property == Person::surnameChanged);
  if (isNameChange)
    std::cout << "Name change observed" << std::endl;
}