#include <map>

#include "chair.hpp"
#include "electrician.hpp"
#include "flashlight.hpp"
#include "grandma.hpp"
#include "log.hpp"

int main() {
    flashlight fl;
    chair ch;

    std::map<ILightable*, IRepairable*> manual;
    manual[&fl] = &fl;

    electrician e(200, manual);

    grandma gm(&fl, &ch, &e);

    LOG("Стало темно");
    gm.turn_on_lights();

    return 0;
}
