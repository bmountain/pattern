#ifndef STRONG_TYPE_H
#define STRONG_TYPE_H

// 以下の継承においてAddableでDerivedとしたものがStrongType<T, Tag,
// Skills...>と書かれる
template <typename T, typename Tag, template <typename> class... Skills>
struct StrongType : private Skills<StrongType<T, Tag, Skills...>>...
{
public:
  using value_type = T;
  explicit StrongType(T const& value) : value_(value) {}

  T& get()
  {
    return value_;
  }

  T const& get() const
  {
    return value_;
  }

private:
  value_type value_;
};

#endif /* STRONG_TYPE_H */