
#include <iostream>
#include "TaskStepper.h"

int TaskStepper::count() {
  return ++this->counter;
}