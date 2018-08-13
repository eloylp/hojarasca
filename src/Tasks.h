
#ifndef HOJARASCA_TASKS_H
#define HOJARASCA_TASKS_H

class Task {
 public:
  Task();
  virtual ~Task();
  virtual void perform() = 0;
};

class WaterPumpActivator : public Task {
 public:
  WaterPumpActivator();
  void perform() override;
};

#endif //HOJARASCA_TASKS_H


