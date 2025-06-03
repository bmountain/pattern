#include "NameObserver.h"
#include "Person.h"

int main()
{
  Person tanaka = Person("Taro", "Tanaka");
  NameObserver observer{};
  tanaka.attach(&observer);
  tanaka.forename("Lewis");
  tanaka.surname("Carroll");
}