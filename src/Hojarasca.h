
#ifndef HOJARASCA_HOJARASCA_H
#define HOJARASCA_HOJARASCA_H

#include "TaskStepper.h"
#include "EnvironmentChecker.h"

class Hojarasca {

 public:
  Hojarasca(EnvironmentChecker *environmentChecker, TaskStepper *taskStepper, unsigned int interval);
  Hojarasca(EnvironmentChecker *environmentChecker, TaskStepper *taskStepper, unsigned int interval, unsigned int roundLimit);
  void disable();
  void enable();
  void run();
  bool isRunning();
 private:
  EnvironmentChecker *environmentChecker;
  TaskStepper *taskStepper;
  unsigned int interval = 1;
  unsigned int roundLimit;
  unsigned int roundCounter = 0;
  bool running;
};

#endif //HOJARASCA_HOJARASCA_H
