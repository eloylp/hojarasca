
#include <iostream>
#include "TaskStepper.h"

int TaskStepper::makeStep(Environment *environment) {
  return ++this->counter;
}