
#include "HojarascaFactory.h"

Hojarasca *HojarascaFactory::get(unsigned int interval) {
  auto *taskStepper = new TaskStepper();
  return new Hojarasca(taskStepper, interval);
}
Hojarasca *HojarascaFactory::get(unsigned int interval, unsigned int roundLimit) {
  auto *taskStepper = new TaskStepper();
  return new Hojarasca(taskStepper, interval, roundLimit);
}
