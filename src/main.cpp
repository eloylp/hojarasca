#include <iostream>
#include "HojarascaFactory.h"

int main(int argc, char *argv[]) {

  auto hojarasca = HojarascaFactory::get(1, 5);
  hojarasca->run();
  return 0;
}