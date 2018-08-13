

#ifndef HOJARASCA_TASKSTEPPER_H
#define HOJARASCA_TASKSTEPPER_H

#include "Environment.h"
#include "Tasks.h"

class TaskStepper {
 private:
  Task* tasks[1] = {};
 public:
  void addTask(int index, Task *task);
  void makeStep(Environment environment);
};

#endif //HOJARASCA_TASKSTEPPER_H
