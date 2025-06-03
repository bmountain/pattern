#include "Observer.h"
#include "Person.h"

class NameObserver : public Observer<Person, Person::StateChange>
{
public:
  void update(const Person& person, Person::StateChange property) override;
};