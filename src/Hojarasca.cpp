
#include <zconf.h>
#include <iostream>
#include "Hojarasca.h"

Hojarasca::Hojarasca(TaskStepper *taskStepper, unsigned int interval) : Hojarasca(taskStepper, interval, 0) {}
Hojarasca::Hojarasca(
    TaskStepper *taskStepper,
    unsigned int interval,
    unsigned int roundLimit
) {

  this->enable();
  this->taskStepper = taskStepper;
  this->interval = interval;
  this->roundLimit = roundLimit;
}
void Hojarasca::enable() {
  this->running = true;
}
void Hojarasca::disable() {
  this->running = false;
}
bool Hojarasca::isRunning() {

  if (this->roundLimit!=0 && this->roundCounter==this->roundLimit) {
    return false;
  }
  return this->running;
}
void Hojarasca::run() {

  while (this->isRunning()) {
    Environment environment{0.23, 0.24, 0.25};
    this->taskStepper->makeStep(&environment);
    this->roundCounter++;
    sleep(interval);
  }
  this->disable();
}
