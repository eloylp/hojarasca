
#include "HojarascaFactory.h"

Hojarasca *HojarascaFactory::get(unsigned int interval) {
  auto *environmentChecker = new EnvironmentChecker();
  auto *taskStepper = new TaskStepper();
  return new Hojarasca(environmentChecker, taskStepper, interval);
}
Hojarasca *HojarascaFactory::get(unsigned int interval, unsigned int roundLimit) {
  auto *environmentChecker = new EnvironmentChecker();
  auto *taskStepper = new TaskStepper();
  return new Hojarasca(environmentChecker, taskStepper, interval, roundLimit);
}
