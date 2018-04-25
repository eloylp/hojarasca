
#ifndef HOJARASCA_TASKSTEPPER_H
#define HOJARASCA_TASKSTEPPER_H

struct Environment {
  float humidity;
  float temperature;
  float lumens;
};

class TaskStepper {

 private:
  unsigned int counter = 0;
 public:
  int makeStep(Environment *environment);
};

#endif //HOJARASCA_TASKSTEPPER_H
