#include "electrician.hpp"

bool electrician::repair(IRepairable* flashlight) {
    if (this->_height >= flashlight->height()) {
        flashlight->repair();
        return true;
    }
    return false;
}

void electrician::take_chair(IChair* chair) { _height += chair->height(); }