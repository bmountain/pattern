#ifndef ADDABLE_H
#define ADDABLE_H

template <typename Derived>
struct Addable
{
  friend Derived& operator+=(Derived& lhs, Derived& rhs)
  {
    lhs.get() += rhs.get();
    return lhs;
  }

  friend Derived operator+(Derived lhs, Derived rhs)
  {
    return Derived(lhs.get() + rhs.get());
  }
};

#endif /* ADDABLE_H */