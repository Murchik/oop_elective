#include <iostream>

#include "static.hpp"

int main() {
    std::cout << staticCount::getCount() << std::endl;

    staticCount first;

    first.printCount();
    // std::cout << first.getSecondCount() << std::endl;

    staticCount second;

    first.printCount();

    return 0;
}
