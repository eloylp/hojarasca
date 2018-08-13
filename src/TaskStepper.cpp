#include "TaskStepper.h"
#include "Environment.h"

bool TaskStepper::makeStep(Environment environment) {
  for (Task *task : tasks) {
    task->perform(environment);
  }
  return true;
}

void TaskStepper::addTask(int index, Task *task) {
  this->tasks[index] = task;
}
