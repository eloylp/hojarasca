
#include <iostream>
#include "TaskStepper.h"

int TaskStepper::makeStep(GroundEnvironment *environment) {
  return ++this->counter;
}