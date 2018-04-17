#include <iostream>
#include "RelativeClock.h"

int main(int argc, char *argv[]) {

    auto *relativeClock = new RelativeClock();
    relativeClock->start();
    std::cout << "\n";
    std::cout << "Hello, World!" << std::endl;
    return 0;
}