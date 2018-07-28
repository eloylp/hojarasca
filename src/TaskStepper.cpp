
#include <iostream>
#include "TaskStepper.h"
#include "Environment.h"

int TaskStepper::makeStep(GroundEnvironment *environment) {
  return ++this->counter;
}