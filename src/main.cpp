#include <iostream>
#include <bits/unique_ptr.h>
#include "TaskStepper.h"

int main(int argc, char *argv[]) {

  std::unique_ptr<TaskStepper> relativeClock(new TaskStepper);
  relativeClock->count();
  return 0;
}