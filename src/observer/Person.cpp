#include "Person.h"
#include "Observer.h"
#include <set>

bool Person::attach(PersonObserver* observer)
{
  auto [pos, success] = observers_.insert(observer);
  return true;
}

bool Person::detach(PersonObserver* observer)
{
  return observers_.erase(observer) > 0;
}

void Person::notify(StateChange property)
{
  for (auto iter = begin(observers_); iter != end(observers_);) {
    auto const pos = iter++;
    (*pos)->update(*this, property);
  }
}

void Person::forename(std::string forename)
{
  forename_ = forename;
  notify(forenameChanged);
}

void Person::surname(std::string surname)
{
  surname_ = surname;
  notify(surnameChanged);
}

void Person::address(std::string address)
{
  address_ = address;
  notify(addressChanged);
}
