#include <iostream>

#include "singletone.h"

int main() {
    std::cout << singletone::createInstance()->getCount() << std::endl;

    singletone* instancePtr = singletone::createInstance();

    std::cout << instancePtr->getCount() << std::endl;
    std::cout << instancePtr->getCount() << std::endl;

    std::cout << singletone::createInstance()->getCount() << std::endl;

    return 0;
}
