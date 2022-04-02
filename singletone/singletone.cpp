#include "singletone.h"

int singletone::instanceCount = 0;

singletone* singletone::instancePtr = nullptr;

singletone* singletone::createInstance() {
    if (!instancePtr) {
        instancePtr = new singletone();
    }
    return instancePtr;
}

int singletone::getCount() { return instanceCount; }

singletone::singletone() { instanceCount++; }
