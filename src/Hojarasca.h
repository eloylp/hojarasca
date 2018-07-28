
#ifndef HOJARASCA_HOJARASCA_H
#define HOJARASCA_HOJARASCA_H

#include "TaskStepper.h"

class Hojarasca {

 public:
  Hojarasca(TaskStepper *taskStepper, unsigned int interval);
  Hojarasca(TaskStepper *taskStepper, unsigned int interval, unsigned int roundLimit);
  void disable();
  void enable();
  void run();
  bool isRunning();
 private:
  TaskStepper *taskStepper;
  unsigned int interval = 1;
  unsigned int roundLimit;
  unsigned int roundCounter = 0;
  bool running;
};

#endif //HOJARASCA_HOJARASCA_H
