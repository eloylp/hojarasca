
#include <zconf.h>
#include <iostream>
#include "Hojarasca.h"
#include "Environment.h"
#include "EnvironmentChecker.h"

Hojarasca::Hojarasca(EnvironmentChecker *environmentChecker, TaskStepper *taskStepper, unsigned int interval)
    : Hojarasca(environmentChecker, taskStepper, interval, 0) {}
Hojarasca::Hojarasca(
    EnvironmentChecker *environmentChecker,
    TaskStepper *taskStepper,
    unsigned int interval,
    unsigned int roundLimit
) {

  this->enable();
  this->environmentChecker = environmentChecker;
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
    auto environment = this->environmentChecker->getGroundEnvironment();
    this->taskStepper->makeStep(&environment);
    this->roundCounter++;
    sleep(interval);
  }
  this->disable();
}
