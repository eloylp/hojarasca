
#include <iostream>
#include "TaskStepper.h"

int TaskStepper::makeStep() {
  return ++this->counter;
}