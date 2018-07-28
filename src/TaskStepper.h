
#ifndef HOJARASCA_TASKSTEPPER_H
#define HOJARASCA_TASKSTEPPER_H

struct GroundEnvironment {
  float humidity;
  float temperature;
  float lumens;
};

class TaskStepper {

 private:
  unsigned int counter = 0;
 public:
  int makeStep(GroundEnvironment *environment);
};

#endif //HOJARASCA_TASKSTEPPER_H
