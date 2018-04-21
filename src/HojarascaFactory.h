
#ifndef HOJARASCA_HOJARASCAFACTORY_H
#define HOJARASCA_HOJARASCAFACTORY_H

#include "Hojarasca.h"

class HojarascaFactory {

 public:
  static Hojarasca *get(unsigned int interval);
  static Hojarasca *get(unsigned int interval, unsigned int roundLimit);

};

#endif //HOJARASCA_HOJARASCAFACTORY_H
