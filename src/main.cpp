#include <iostream>
#include <bits/unique_ptr.h>
#include "RelativeClock.h"

int main(int argc, char *argv[]) {

    std::unique_ptr<RelativeClock> relativeClock(new RelativeClock);
    relativeClock->start();
    std::cout << std::endl;
    std::cout << "Hello, World!" << std::endl;
    return 0;
}