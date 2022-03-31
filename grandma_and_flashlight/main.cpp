#include <iostream>

#include "electrician.hpp"
#include "flashlight.hpp"
#include "grandma.hpp"
#include "log.hpp"

int main() {
    flashlight fl;
    chair ch;
    grandma gm(&fl, &ch);
    electrician e;

    LOG("Стало темно");
    gm.turn_on_lights();

    return 0;
}
