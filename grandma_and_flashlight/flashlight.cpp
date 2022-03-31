#include "flashlight.hpp"

int flashlight::height() { return _height; }

bool flashlight::turn_on() { return _works; }

bool flashlight::repair() {
    _works = true;
    return _works;
}
