
#include <iostream>
#include "RelativeClock.h"

int RelativeClock::count() {
  return ++this->counter;
}