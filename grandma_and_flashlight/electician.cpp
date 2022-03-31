#include "electrician.hpp"

bool electrician::repair(ILightable* flashlight) {
    auto repairable = _manual[flashlight];
    if (this->_height >= repairable->height()) {
        repairable->repair();
        return true;
    }
    return false;
}

void electrician::take_chair(IChair* chair) { _height += chair->height(); }
