#include <Arduino.h>
#include "TaskStepper.h"
#include "Environment.h"

void TaskStepper::makeStep(Environment environment) {
   for (unsigned int i = 0; i < sizeof(tasks); ++i) {
     tasks[i]->perform();
   }
}

void TaskStepper::addTask(int index, Task *task) {
  this->tasks[index] = task;
}
