#include <iostream>
#include <bits/unique_ptr.h>
#include "HojarascaFactory.h"

int main(int argc, char *argv[]) {

  auto hojarasca = HojarascaFactory::get(1, 5);
  hojarasca->run();
  return 0;
}