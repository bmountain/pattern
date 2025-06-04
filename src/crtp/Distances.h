#ifndef DISTANCES_H
#define DISTANCES_H

#include "Addable.h"
#include "StrongType.h"

template <typename T>
using Meter = StrongType<T, struct MeterTag, Addable>;

template <typename T>
using Kilometer = StrongType<T, struct KilometerTag, Addable>;

#endif /* DISTANCES_H */