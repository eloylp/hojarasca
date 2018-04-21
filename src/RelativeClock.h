
#ifndef HOJARASCA_RELATIVECLOCK_H
#define HOJARASCA_RELATIVECLOCK_H

class RelativeClock {

 private:
  unsigned int counter = 0;
 public:
  int count();
};

#endif //HOJARASCA_RELATIVECLOCK_H
