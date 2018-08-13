
#ifndef HOJARASCA_TASKS_H
#define HOJARASCA_TASKS_H

#include "Environment.h"
class Task {
 public:
  Task();
  virtual ~Task();
  virtual void perform(Environment environment) = 0;
};

class WaterPumpActivator : public Task {
 public:
  WaterPumpActivator();
  void perform(Environment environment) override;
};

#endif //HOJARASCA_TASKS_H


