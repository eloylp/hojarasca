
#include <iostream>
#include "TaskStepper.h"
#include "Environment.h"

int TaskStepper::makeStep(Environment *environment) {
  return ++this->counter;
}