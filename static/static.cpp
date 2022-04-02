#include "static.hpp"

#include <iostream>

int staticCount::count = 0;

staticCount::staticCount() {
    count++;
    // secondCount++;
}

int staticCount::getCount() { return count; }

// int staticCount::getSecondCount() { return secondCount; }

void staticCount::printCount() { std::cout << count << std::endl; }
