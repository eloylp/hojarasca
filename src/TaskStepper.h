

#ifndef HOJARASCA_TASKSTEPPER_H
#define HOJARASCA_TASKSTEPPER_H

#include "Environment.h"
#include "Tasks.h"

class TaskStepper {
 private:
  Task *tasks[1] = {nullptr};
 public:
  void addTask(int index, Task *task);
  bool makeStep(Environment environment);
};

#endif //HOJARASCA_TASKSTEPPER_H
