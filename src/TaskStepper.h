
#ifndef HOJARASCA_TASKSTEPPER_H
#define HOJARASCA_TASKSTEPPER_H

#include "Environment.h"

class TaskStepper {

 private:
  unsigned int counter = 0;
 public:
  int makeStep(Environment *environment);
};

#endif //HOJARASCA_TASKSTEPPER_H
